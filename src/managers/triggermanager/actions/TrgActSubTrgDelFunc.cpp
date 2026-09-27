// src/managers/triggermanager/actions/TrgActSubTrgDelFunc.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac238[];  // debug message: action has no record

// Trigger::Act::SUB_TRG_DEL_FUNC is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SUB_TRG_DEL_FUNC(int *action);
} }

namespace TrgActSubTrgDelFunc_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActSubTrgDelFunc_p1

// 00C81A40  Trigger::Act::SUB_TRG_DEL_FUNC  size=50  [class]
int __fastcall Trigger::Act::SUB_TRG_DEL_FUNC(int *action)
{
    using namespace TrgActSubTrgDelFunc_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016ac238);
        return 0;
    }
    int function = record[3];
    int triggerId = record[2];
    ((void (*)(int, int, int))FUN_00958f70)(0, triggerId, function);
    return ((int (*)(int, int, int))FUN_009598a0)(0, triggerId, function);
}
