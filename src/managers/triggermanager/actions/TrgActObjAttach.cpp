// src/managers/triggermanager/actions/TrgActObjAttach.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab124[];  // debug message: action has no parameter block
extern char DAT_016ab098[];  // debug message: child object %s not found
extern char DAT_016ab0e0[];  // debug message: parent object %s not found
extern char DAT_016ac9e0[];  // debug message: object %s is of the wrong kind
extern char DAT_016ac99c[];  // debug message: object %s not found

namespace Trigger { namespace Act {
int __fastcall OBJ_ATTACH(int *action);
int __fastcall OBJ_ATTACH_2(int *action);
} }

namespace TrgActObjAttach_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// 00AA3EB0 lib::StaticArray<Constraints,32>::StaticArray<Constraints,32> (name from Ghidra),
// called with no visible arguments; returns nonzero on success.
typedef int (*ConstraintsArrayCtorFn)();
inline ConstraintsArrayCtorFn constraintsArrayCtor() { return (ConstraintsArrayCtorFn)0x00AA3EB0; }

// Object lookup by name: FUN_009fde60 turns an object-id style name into an id (-1 if the name
// is not one); ids are looked up with FUN_00a7f600, other names by hash with FUN_00a18cf0.
inline int findObject(char *name)
{
    int found = FUN_009fde60(name);
    if (found == -1) {
        undefined4 hash = call<undefined4 (*)(char *)>(FUN_00e03ea0)(name);
        found = call<int (*)(undefined4)>(FUN_00a18cf0)(hash); /* ECX: ? */
    }
    else {
        found = call<int (*)(int)>(FUN_00a7f600)(found); /* ECX: ? */
    }
    return found;
}

const int ACT_OBJ_ATTACH = 0x58;  // parameter block action id: attach child to parent
const int ACT_OBJ_DETACH = 0x59;  // parameter block action id: detach child

}  // namespace TrgActObjAttach_p1

// 00C7FB10  Trigger::Act::OBJ_ATTACH  size=322  [class]
// Parameter block: +0x4 action id, +0x8 parent name, +0x18 child name, +0x28 attach parts no.
int __fastcall Trigger::Act::OBJ_ATTACH(int *action)
{
    using namespace TrgActObjAttach_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ab124);
        return 0;
    }
    char *name = (char *)(params + 2);  // +0x8 parent name
    if (name != 0) {
        int parent = findObject(name);
        if (parent != 0) {
            name = (char *)(params + 6);  // +0x18 child name
            if (name != 0) {
                int child = findObject(name);
                if (child != 0) {
                    int actionId = ((int *)action[1])[1];  // params+0x4
                    if (actionId != ACT_OBJ_ATTACH) {
                        if (actionId == ACT_OBJ_DETACH) {
                            FUN_00a7c8a0(parent);  // machine code: ECX = parent; child is FUN_00a9e0d0's argument
                            call<void (*)(int)>(FUN_00a9e0d0)(child); /* ECX: ? */
                        }
                        return 1;
                    }
                    int behavior = FUN_00a7c8a0(parent);  // machine code: ECX = parent
                    if (*(int *)(behavior + 0x7c4) == 0) {  // no constraint array yet
                        FUN_00a7c8a0(parent);  // machine code: ECX = parent
                        int created = constraintsArrayCtor()(); /* ECX: ? */
                        if (created == 0) {
                            return 0;
                        }
                    }
                    int partsNo = params[10];  // +0x28
                    // Machine code: the five pushed arguments belong to FUN_00a8c5f0 only (the raw
                    // decompilation duplicated them onto FUN_00a7c8a0, which takes ECX = parent).
                    FUN_00a7c8a0(parent);
                    call<void (*)(int, int, int, int, int)>(FUN_00a8c5f0)(0, parent, child, partsNo, -1);
                    return 1;
                }
            }
            debugPrint(DAT_016ab098, name);
            return 0;
        }
    }
    debugPrint(DAT_016ab0e0, name);
    return 0;
}

// 00C87EA0  Trigger::Act::OBJ_ATTACH_2  size=27  [class]
// Only the first 27 bytes belong here; the rest of the body is OBJ_MESH_TRANS (00C87EBB).
// FUN_009f9480 / FUN_009f9460 test the object class id ((id & 0xF0000) == 0xF0000 / 0xD0000).
int __fastcall Trigger::Act::OBJ_ATTACH_2(int *action)
{
    using namespace TrgActObjAttach_p1;
    int found;
    undefined4 hash;
    int behavior;
    undefined4 classId;
    bool ok;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ab124);
        return 0;
    }
    char *name = (char *)(params + 2);  // +0x8 object name
    if (name != 0) {
        found = FUN_009fde60(name);
        if (found == -1) {
            hash = call<undefined4 (*)(char *)>(FUN_00e03ea0)(name);
            found = call<int (*)(undefined4)>(FUN_00a18cf0)(hash); /* ECX: ? */
            if (found == 0) goto notFound;
            behavior = FUN_00a7c8a0(found);  // machine code: ECX = found
            classId = *(undefined4 *)(behavior + 0x4b0);
            ok = FUN_009f9480(classId);
            if (!ok) {
                ok = FUN_009f9460(classId);
                if (!ok) goto wrongKind;
            }
        }
        else {
            ok = FUN_009f9480(found);
            if (!ok) {
                ok = FUN_009f9460(found);
                if (!ok) {
wrongKind:
                    debugPrint(DAT_016ac9e0, name);
                    return 0;
                }
            }
            found = call<int (*)(int)>(FUN_00a7f600)(found); /* ECX: ? */
        }
        if (found != 0) {
            FUN_00a7c8a0(found);  // machine code: ECX = found
            if (params[6] == 1) {  // +0x18
                call<void (*)()>(FUN_00a8f8a0)(); /* ECX: ? */
                return 1;
            }
            call<void (*)()>(FUN_00a8f920)(); /* ECX: ? */
            return 1;
        }
    }
notFound:
    debugPrint(DAT_016ac99c, name);
    return 0;
}
