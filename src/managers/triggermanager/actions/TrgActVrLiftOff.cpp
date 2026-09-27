// src/managers/triggermanager/actions/TrgActVrLiftOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern int DAT_018b9174;  // current phase id
extern unsigned char DAT_01b354e8[];  // scratch buffer filled by object vf04
extern char DAT_016acc34[];  // debug message: action has no record

// Trigger::Act::VR_LIFT_OFF is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall VR_LIFT_OFF(int *action);
} }

namespace TrgActVrLiftOff_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

// FUN_00a7c8a0: handle -> object (its ECX argument was not recovered by the decompiler).
inline int *handleToObject()
{
    return ((int *(*)())FUN_00a7c8a0)();
}

// FUN_00d467a0: ? nonzero in VR mode (meaning guessed from the callers; ECX not recovered).
inline int isVrMode()
{
    return ((int (*)())FUN_00d467a0)();
}
// FUN_00e03ea0: hash of a name for the given object type.
inline int hashName(const char *name, int objectType)
{
    return ((int (*)(const char *, int))FUN_00e03ea0)(name, objectType);
}
// FUN_00a18d70: look up an object by name hash and type; nonzero when found.
inline int findObject(int hash, int objectType)
{
    return ((int (*)(int, int))FUN_00a18d70)(hash, objectType);
}

} // namespace TrgActVrLiftOff_p1

// 00C88AC0  Trigger::Act::VR_LIFT_OFF  size=216  [class]
int __fastcall Trigger::Act::VR_LIFT_OFF(int *action)
{
    using namespace TrgActVrLiftOff_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016acc34);
        return 0;
    }
    int result = 0;
    if (isVrMode() == 0 || DAT_018b9174 != 0xd30) {
        int hash = hashName((char *)record + 8, 0xd6000);
        if (findObject(hash, 0xd6000) != 0) {
            int *object = handleToObject();  // ? ECX not recovered
            if (object != 0) {
                (*(void (__thiscall **)(int *, unsigned char *))((char *)object[0] + 4))(object, DAT_01b354e8);
                if (((int (*)(unsigned char *))FUN_00dd6d80)(DAT_01b354e8) != 0) {
                    ((void (*)())FUN_00603f10)();  // ? ECX not recovered
                    result = 1;
                }
            }
        }
    }
    else {
        int hash = hashName((char *)record + 8, 0xf5040);
        if (findObject(hash, 0xf5040) != 0) {
            int *object = handleToObject();  // ? ECX not recovered
            if (((int (*)(int *))FUN_00c83bb0)(object) != 0) {
                ((void (*)())FUN_00603dc0)();  // ? ECX not recovered
                return 1;
            }
        }
    }
    return result;
}
