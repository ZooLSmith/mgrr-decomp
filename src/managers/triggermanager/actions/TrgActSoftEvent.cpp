// src/managers/triggermanager/actions/TrgActSoftEvent.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aa70c[];  // debug message: action has no record

// Trigger::Act::SOFT_EVENT is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SOFT_EVENT(int *action);
} }

namespace TrgActSoftEvent_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActSoftEvent_p1

// 00C7EB50  Trigger::Act::SOFT_EVENT  size=40  [class]
int __fastcall Trigger::Act::SOFT_EVENT(int *action)
{
    using namespace TrgActSoftEvent_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016aa70c);
        return 0;
    }
    return ((int (*)(int))FUN_00d7eb90)(((int *)action[1])[2]);
}
