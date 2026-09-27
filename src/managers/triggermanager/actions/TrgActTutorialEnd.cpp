// src/managers/triggermanager/actions/TrgActTutorialEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern int DAT_01d61384;  // current tutorial id, -1 = none
extern char DAT_016aae5c[];  // debug message: action has no record

// Trigger::Act::TUTORIAL_END is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall TUTORIAL_END(int *action);
} }

namespace TrgActTutorialEnd_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActTutorialEnd_p1

// 00C7F700  Trigger::Act::TUTORIAL_END  size=42  [class]
int __fastcall Trigger::Act::TUTORIAL_END(int *action)
{
    using namespace TrgActTutorialEnd_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016aae5c);
        return 0;
    }
    DAT_01d61384 = -1;
    return 1;
}
