// src/managers/triggermanager/actions/TrgActObjMeshTrans.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac9e0[];  // debug message: object %s is of the wrong kind
extern char DAT_016ac99c[];  // debug message: object %s not found

namespace Trigger { namespace Act {
int OBJ_MESH_TRANS();
} }

namespace TrgActObjMeshTrans_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActObjMeshTrans_p1

// 00C87EBB  Trigger::Act::OBJ_MESH_TRANS  size=233  [class]
// Entry point in the middle of OBJ_ATTACH_2 (00C87EA0): the parameter block arrives in EBP
// (unaff_EBP in the raw decompilation). +0x8 object name, +0x18 1 = FUN_00a8f8a0 else FUN_00a8f920.
// FUN_009f9480 / FUN_009f9460 test the object class id ((id & 0xF0000) == 0xF0000 / 0xD0000).
int Trigger::Act::OBJ_MESH_TRANS()
{
    using namespace TrgActObjMeshTrans_p1;
    int *params;  // ? unaff_EBP: parameter block set up by the code before this entry point
    int found;
    undefined4 hash;
    int behavior;
    undefined4 classId;
    bool ok;
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
