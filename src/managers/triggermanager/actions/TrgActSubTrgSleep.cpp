// src/managers/triggermanager/actions/TrgActSubTrgSleep.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac16c[];  // debug message: action has no record

// Trigger::Act::SUB_TRG_SLEEP is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SUB_TRG_SLEEP(int *action);
} }

namespace TrgActSubTrgSleep_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActSubTrgSleep_p1

// 00C81970  Trigger::Act::SUB_TRG_SLEEP  size=48  [class]
int __fastcall Trigger::Act::SUB_TRG_SLEEP(int *action)
{
    using namespace TrgActSubTrgSleep_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016ac16c);
        return 0;
    }
    int triggerId = ((int *)action[1])[2];
    ((void (*)(int, int, int))FUN_00958f70)(0, triggerId, 1);
    return ((int (*)(int, int, int))FUN_009596e0)(0, triggerId, 1);
}
