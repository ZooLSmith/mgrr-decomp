// src/managers/triggermanager/actions/TrgActVrMistake.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abba4[];  // debug message: action has no record

// Trigger::Act::VR_MISTAKE is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall VR_MISTAKE(int *action);
} }

namespace TrgActVrMistake_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActVrMistake_p1

// 00C810E0  Trigger::Act::VR_MISTAKE  size=65  [class]
int __fastcall Trigger::Act::VR_MISTAKE(int *action)
{
    using namespace TrgActVrMistake_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016abba4);
        return 0;
    }
    int result = 0;
    int mission = FUN_0095bfa0();
    if (mission != 0) {
        FUN_0095bfa0();
        result = FUN_0095c0b0(record[2]);
    }
    return result;
}
