// src/managers/triggermanager/actions/TrgActTriggerUianimStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab510[];  // debug message: action has no record

// Trigger::Act::TRIGGER_UIANIM_START is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall TRIGGER_UIANIM_START(int *action);
} }

namespace TrgActTriggerUianimStart_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActTriggerUianimStart_p1

// 00C805C0  Trigger::Act::TRIGGER_UIANIM_START  size=47  [class]
int __fastcall Trigger::Act::TRIGGER_UIANIM_START(int *action)
{
    using namespace TrgActTriggerUianimStart_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016ab510);
        return 0;
    }
    ((void (*)(int))FUN_00cad340)(((int *)action[1])[2]);
    return 1;
}
