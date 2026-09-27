// Fast class-method naming from the vftables the RTTI analyzer labelled ("Class::vftable").
//  * every default-named function in a vftable slot becomes Class::vfNN (slot index, hex), owned
//    by the class with the shortest vftable containing it (base classes have shorter tables);
//  * a default-named function that stores a class's vftable address is that class's constructor
//    or destructor: a destructor when a vftable slot of the same class calls it, else constructor.
// Writes logs/vtable_names.csv.
// @category MGRR
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.app.util.NamespaceUtils;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class VtableNames extends GhidraScript {
    static class VT { String cls; Namespace ns; Address addr; List<Function> slots = new ArrayList<>(); }

    @Override
    public void run() throws Exception {
        SymbolTable st = currentProgram.getSymbolTable();
        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();

        List<VT> vts = new ArrayList<>();
        for (Symbol s : st.getSymbols("vftable")) {
            Namespace ns = s.getParentNamespace();
            if (ns == null || ns.isGlobal()) continue;
            VT vt = new VT();
            vt.cls = ns.getName(true);
            vt.ns = ns;
            vt.addr = s.getAddress();
            Address a = vt.addr;
            for (int i = 0; i < 1024; i++) {
                if (i > 0 && st.getPrimarySymbol(a) != null && rm.hasReferencesTo(a)) break; // next table
                int p;
                try { p = mem.getInt(a); } catch (Exception e) { break; }
                Address t = toAddr(p & 0xFFFFFFFFL);
                if (mem.getBlock(t) == null || !mem.getBlock(t).isExecute()) break;
                Function f = fm.getFunctionAt(t);
                if (f == null) {
                    f = createFunction(t, null);
                    if (f == null) break;
                }
                vt.slots.add(f);
                a = a.add(4);
            }
            vts.add(vt);
        }
        println("vftables: " + vts.size());

        // owner of each virtual function = class with the shortest table containing it
        Map<Function, VT> owner = new HashMap<>();
        Map<Function, Integer> slotOf = new HashMap<>();
        for (VT vt : vts) {
            for (int i = 0; i < vt.slots.size(); i++) {
                Function f = vt.slots.get(i);
                VT cur = owner.get(f);
                if (cur == null || vt.slots.size() < cur.slots.size()) {
                    owner.put(f, vt);
                    slotOf.put(f, i);
                }
            }
        }

        PrintWriter out = new PrintWriter(new FileWriter("E:\\Projects\\cpp\\mgrr_decomp\\logs\\vtable_names.csv"));
        out.println("entry,old,new,kind");
        int nv = 0, nc = 0;

        // constructors / destructors
        Map<Namespace, Integer> ctorCount = new HashMap<>();
        for (VT vt : vts) {
            Set<Function> slotCallees = new HashSet<>();
            for (Function f : vt.slots) slotCallees.addAll(f.getCalledFunctions(monitor));
            for (Reference r : rm.getReferencesTo(vt.addr)) {
                Function f = fm.getFunctionContaining(r.getFromAddress());
                if (f == null || !isDefault(f) || owner.containsKey(f)) continue;
                Instruction ins = getInstructionAt(r.getFromAddress());
                // must be a store: MOV dword ptr [reg(+disp)], vftable
                if (ins == null || !ins.toString().startsWith("MOV dword ptr [")) continue;
                boolean dtor = slotCallees.contains(f);
                String base = vt.ns.getName();
                String name;
                if (dtor) name = "~" + base;
                else {
                    int k = ctorCount.merge(vt.ns, 1, Integer::sum);
                    name = k == 1 ? base : base + "_" + k;
                }
                if (rename(f, vt.ns, name, out, dtor ? "dtor" : "ctor")) nc++;
            }
        }

        for (Map.Entry<Function, VT> e : owner.entrySet()) {
            Function f = e.getKey();
            if (!isDefault(f)) continue;
            String name = String.format("vf%02X", slotOf.get(f) * 4);
            if (f.getName().startsWith("thunk_")) name = "thunk_" + name;
            if (rename(f, e.getValue().ns, name, out, "virtual")) nv++;
        }
        out.close();
        println("VtableNames: " + nv + " virtuals, " + nc + " ctors/dtors");
    }

    boolean isDefault(Function f) {
        SourceType s = f.getSymbol().getSource();
        return s == SourceType.DEFAULT || (s == SourceType.ANALYSIS && (f.getName().startsWith("FUN_") || f.getName().startsWith("thunk_FUN_")));
    }

    boolean rename(Function f, Namespace ns, String name, PrintWriter out, String kind) {
        String old = f.getName(true);
        try {
            if (!(ns instanceof GhidraClass) && ns.getSymbol().getSymbolType() == SymbolType.NAMESPACE) {
                try { ns = NamespaceUtils.convertNamespaceToClass(ns); } catch (Exception ignore) {}
            }
            f.setParentNamespace(ns);
            f.setName(name, SourceType.ANALYSIS);
            out.println(f.getEntryPoint() + "," + old + "," + f.getName(true) + "," + kind);
            return true;
        } catch (Exception ex) {
            return false;
        }
    }
}
