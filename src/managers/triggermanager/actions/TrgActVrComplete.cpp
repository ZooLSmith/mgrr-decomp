// src/managers/triggermanager/actions/TrgActVrComplete.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abb74[];  // debug message: action has no record

// Trigger::Act::VR_COMPLETE is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
bool __fastcall VR_COMPLETE(int *action);
} }

namespace TrgActVrComplete_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActVrComplete_p1

// 00C81090  Trigger::Act::VR_COMPLETE  size=68  [class]
bool __fastcall Trigger::Act::VR_COMPLETE(int *action)
{
    using namespace TrgActVrComplete_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016abb74);
        return false;
    }
    int mission = FUN_0095bfa0();
    if (mission != 0) {
        FUN_0095bfa0();
        FUN_0095c080(record[2]);
    }
    return mission != 0;
}
