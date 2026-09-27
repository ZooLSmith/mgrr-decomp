// src/managers/cmapinfomanager/cMapInfoManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cMapInfoManager.h"

// Data referenced by this part
extern undefined *PTR_vftable_018e9b94;  // global allocator object (first dword = vftable; slot 0x10 = free)
extern unsigned char DAT_01651954[];     // debug message: path table allocation failed
extern unsigned char DAT_016514a4[];     // attribute name read into path entry +0xE0

namespace cMapInfoManager_p1 {

// __cdecl call of a function (symbol or address); used for callees whose register argument the
// decompiler did not show ("ECX: ?") and for mismatching prototypes.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class S, class... A> inline R thiscall(F fn, S self, A... args)
{
    typedef R (__thiscall *Fn)(S, A...);
    return ((Fn)fn)(self, args...);
}

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Size of one path entry.
const int kPathEntrySize = 0x130;

// Inlined initialisation of the 16 attachment slots of a path entry (entry + 0x38, 12 bytes each:
// short -1, short 0, float 1.5, int 0). `p` points at the int of the first slot (entry + 0x40).
inline void initAttachSlots(undefined4 *p)
{
    int remaining = 0xf;
    do {
        p[-1] = 0x3fc00000;  // 1.5f
        *(unsigned short *)(p + -2) = 0xffff;
        *(unsigned short *)((int)p + -6) = 0;
        *p = 0;
        p = p + 3;
        remaining = remaining + -1;
    } while (-1 < remaining);
}

// Slot of FUN_0096d8e0's stack frame, addressed by its offset from the frame top (-0x180 .. -0x10).
// The decompiler split this frame into overlapping locals, so it is kept as one block.
template <class T> inline T &frameAt(unsigned char *frame, int offset)
{
    return *(T *)(frame + 0x180 + offset);
}

} // namespace cMapInfoManager_p1

// 0096D700  cMapInfoManager::sortPathData  size=466  [class]
void cMapInfoManager::sortPathData(int index, int *pathArray)
{
    using namespace cMapInfoManager_p1;
    int data;
    int entry;
    int maxId;
    int maxIdCopy;
    int id;
    unsigned int tableCount;
    unsigned __int64 bytes;
    int table;
    int block;
    int newEntry;
    int searchId;
    int source;
    int ecxAfterInit;             // ? extraout_ECX: ECX left by FUN_00962e70 (probably &tempEntry)
    unsigned char tempEntry[0x130];  // local_140: default entry for an id without data
    int slotBase;

    data = pathArray[0];
    entry = data;
    maxId = 0;
    maxIdCopy = 0;
    if (data != pathArray[1] * kPathEntrySize + data) {
        do {
            id = *(int *)(entry + 0xf8);
            if (maxId <= id) {
                maxId = id;
                maxIdCopy = id;
            }
            entry = entry + kPathEntrySize;
        } while (entry != pathArray[1] * kPathEntrySize + data);
    }
    tableCount = maxId + 1;
    bytes = (unsigned __int64)tableCount * kPathEntrySize;
    table = cdeclcall<int>(FUN_00dd3580,
                           -(unsigned int)((int)(bytes >> 0x20) != 0) | (unsigned int)bytes, heap());
    block = table;
    if (table == 0) {
        table = 0;
    }
    else {
        newEntry = block;
        for (; -1 < maxId; maxId = maxId + -1) {
            FUN_00401040(newEntry + 0x38, 0xc, 0x10, (code *)0x00964F00 /* LAB_00964f00: slot ctor */);
            cdeclcall<void>(FUN_00962e70); /* ECX: ? (likely newEntry) */
            newEntry = newEntry + kPathEntrySize;
        }
    }
    slotBase = index * 0x20 + (int)this;
    *(int *)(slotBase + 0x28) = table;           // pathTableData(index)
    *(unsigned int *)(slotBase + 0x2c) = tableCount;  // pathTableCount(index)
    if (table == 0) {
        cdeclcall<void>(FUN_00dd5650, DAT_01651954);
        return;
    }
    searchId = 0;
    if (-1 < maxIdCopy) {
        do {
            source = pathArray[0];
            if (source != pathArray[1] * kPathEntrySize + source) {
                do {
                    if (*(int *)(source + 0xf8) == searchId) goto found;
                    source = source + kPathEntrySize;
                } while (source != pathArray[1] * kPathEntrySize + pathArray[0]);
            }
            initAttachSlots((undefined4 *)(tempEntry + 0x40));
            cdeclcall<void>(FUN_00962e70); /* ECX: ? (likely &tempEntry) */
            *(unsigned int *)(tempEntry + 0x108) = *(unsigned int *)(tempEntry + 0x108) | 0x40000000;
            source = ecxAfterInit;
            *(int *)(tempEntry + 0xf8) = searchId;
found:
            cdeclcall<void>(FUN_00963a80, source); /* ECX: ? */
            searchId = searchId + 1;
        } while (searchId <= maxIdCopy);
    }
    pathArray[1] = 0;
    if (-1 < pathArray[2]) {
        vcall<void>(&PTR_vftable_018e9b94, 0x10, pathArray[0],
                    (pathArray[2] & 0x3fffffffU) * kPathEntrySize);  // free
    }
    pathArray[0] = 0;
    pathArray[2] = -0x80000000;
}

// 0096D8E0  FUN_0096d8e0  size=768  [callgraph]
// Reads the path nodes under `node` ("Position", "EditNo", "BranchNum", "Branch", "PartsInfo" ...)
// through `reader` into a temporary array and hands it to cMapInfoManager::sortPathData.
undefined4 FUN_0096d8e0(undefined4 manager, int *reader, undefined4 node)
{
    using namespace cMapInfoManager_p1;
    int child;
    int count;
    int attr;
    int childIndex;
    undefined4 branchAttr;
    unsigned int arrayCapacity;   // ? unaff_EBX: register value on entry
    unsigned int arrayCount;      // ? unaff_ESI: register value on entry
    int arrayData;                // ? unaff_EDI: register value on entry
    unsigned char frame[0x170];   // stack frame -0x180 .. -0x10

    // frame slots: -0x174..-0x168 vector temp (also the array header / loop counter at -0x170),
    // -0x154 offset position, -0x14C path entry being built (0x130 bytes; +0x18 position,
    // +0x40 attachment slots, +0xE0.. attributes, +0x110 parent hash)
    childIndex = 0;
    frameAt<undefined4>(frame, -0x174) = 0;
    frameAt<unsigned int>(frame, -0x170) = 0;
    frameAt<undefined4>(frame, -0x16c) = 0x80000000;
    frameAt<undefined4>(frame, -0x164) = 0;
    count = vcall<int>(reader, 0x10, node);
    if (0 < count) {
        do {
            child = vcall<int>(reader, 0x14, node, childIndex);
            if (child != -1) {
                initAttachSlots(&frameAt<undefined4>(frame, -0x10c));
                cdeclcall<void>(FUN_00962e70); /* ECX: ? */
                cdeclcall<void>(FUN_00962e70); /* ECX: ? */
                attr = vcall<int>(reader, 0x18, child, "Position");
                if (attr != -1) {
                    frameAt<undefined4>(frame, -0x174) = 0;
                    frameAt<unsigned int>(frame, -0x170) = 0;
                    frameAt<undefined4>(frame, -0x16c) = 0;
                    vcall<void>(reader, 0x44, attr, &frameAt<undefined4>(frame, -0x174));
                    frameAt<undefined4>(frame, -0x134) = frameAt<undefined4>(frame, -0x174);
                    frameAt<unsigned int>(frame, -0x130) = frameAt<unsigned int>(frame, -0x170);
                    frameAt<undefined4>(frame, -0x12c) = frameAt<undefined4>(frame, -0x16c);
                    frameAt<undefined4>(frame, -0x128) = frameAt<undefined4>(frame, -0x168);
                }
                attr = vcall<int>(reader, 0x18, child, "EditNo");
                if (attr != -1) {
                    vcall<void>(reader, 0x58, attr, &frameAt<undefined1>(frame, -0x64));
                }
                attr = vcall<int>(reader, 0x18, child, "BranchNum");
                if (attr != -1) {
                    vcall<void>(reader, 0x58, attr, &frameAt<undefined1>(frame, -0x68));
                }
                branchAttr = vcall<undefined4>(reader, 0x18, child, "Branch");
                FUN_00963f20((int)&frameAt<undefined4>(frame, -0x16c), reader, branchAttr);
                attr = vcall<int>(reader, 0x18, child, DAT_016514a4);
                if (attr != -1) {
                    vcall<void>(reader, 0x68, attr, &frameAt<undefined1>(frame, -0x6c));
                }
                child = vcall<int>(reader, 0x18, child, "PartsInfo");
                if (child != -1) {
                    attr = vcall<int>(reader, 0x18, child, "ObjId");
                    if (attr != -1) {
                        vcall<void>(reader, 0x58, attr, &frameAt<undefined1>(frame, -0x54));
                    }
                    attr = vcall<int>(reader, 0x18, child, "PartsNo");
                    if (attr != -1) {
                        vcall<void>(reader, 0x58, attr, &frameAt<undefined1>(frame, -0x58));
                    }
                    attr = vcall<int>(reader, 0x18, child, "OffSetPos");
                    if (attr != -1) {
                        frameAt<undefined4>(frame, -0x174) = 0;
                        frameAt<unsigned int>(frame, -0x170) = 0;
                        frameAt<undefined4>(frame, -0x16c) = 0;
                        vcall<void>(reader, 0x44, attr, &frameAt<undefined4>(frame, -0x174));
                        frameAt<undefined4>(frame, -0x154) = frameAt<undefined4>(frame, -0x174);
                        frameAt<unsigned int>(frame, -0x150) = frameAt<unsigned int>(frame, -0x170);
                        frameAt<undefined4>(frame, -0x14c) = frameAt<undefined4>(frame, -0x16c);
                        frameAt<undefined4>(frame, -0x148) = frameAt<undefined4>(frame, -0x168);
                    }
                    child = vcall<int>(reader, 0x18, child, "ParentHash");
                    if (child != -1) {
                        vcall<void>(reader, 0x68, child, &frameAt<undefined1>(frame, -0x3c));
                    }
                }
                // append the entry (grow when full)
                if (arrayCount == (arrayCapacity & 0x3fffffff)) {
                    FUN_0100a290((int *)&PTR_vftable_018e9b94, &frameAt<undefined4>(frame, -0x180),
                                 kPathEntrySize);
                }
                if (arrayCount * kPathEntrySize + arrayData != 0) {
                    cdeclcall<void>(FUN_00964be0, &frameAt<undefined4>(frame, -0x14c)); /* ECX: ? */
                }
                arrayCount = arrayCount + 1;
            }
            frameAt<unsigned int>(frame, -0x170) = frameAt<unsigned int>(frame, -0x170) + 1;
            childIndex = (int)(short)frameAt<unsigned int>(frame, -0x170);
            count = vcall<int>(reader, 0x10, node);
        } while (childIndex < count);
    }
    thiscall<void>(0x0096D700u /* cMapInfoManager::sortPathData */, manager,
                   &frameAt<undefined4>(frame, -0x178)); /* ? only one stack argument recovered */
    frameAt<undefined4>(frame, -0x174) = 0;
    if (-1 < (int)frameAt<unsigned int>(frame, -0x170)) {
        vcall<void>(&PTR_vftable_018e9b94, 0x10, arrayCapacity,
                    (frameAt<unsigned int>(frame, -0x170) & 0x3fffffff) * kPathEntrySize);  // free
    }
    return 1;
}
