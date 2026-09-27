// src/managers/triggermanager/actions/TrgActVrTimerStop.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac040[];  // debug message: action has no record

// Trigger::Act::VR_TIMER_STOP is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall VR_TIMER_STOP(int *action);
} }

namespace TrgActVrTimerStop_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActVrTimerStop_p1

// 00C816F0  Trigger::Act::VR_TIMER_STOP  size=37  [class]
int __fastcall Trigger::Act::VR_TIMER_STOP(int *action)
{
    using namespace TrgActVrTimerStop_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016ac040);
        return 0;
    }
    FUN_0095c2e0();
    return 1;
}
