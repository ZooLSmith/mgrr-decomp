// src/managers/triggermanager/actions/TrgActTutorialStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern int DAT_01d61384;  // current tutorial id, -1 = none
extern int DAT_01d61388;
extern int DAT_01d6138c;
extern char DAT_016aae28[];  // debug message: action has no record
extern char DAT_016aade8[];  // debug message: invalid tutorial id 999

// Trigger::Act::TUTORIAL_START is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
bool __fastcall TUTORIAL_START(int *action);
} }

namespace TrgActTutorialStart_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActTutorialStart_p1

// 00C7F6B0  Trigger::Act::TUTORIAL_START  size=80  [class]
bool __fastcall Trigger::Act::TUTORIAL_START(int *action)
{
    using namespace TrgActTutorialStart_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016aae28);
        return false;
    }
    DAT_01d61384 = record[2];
    DAT_01d61388 = 1;
    DAT_01d6138c = 0;
    bool ok = record[2] != 999;
    if (!ok) {
        debugPrint(DAT_016aade8);
    }
    return ok;
}
