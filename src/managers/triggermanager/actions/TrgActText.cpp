// src/managers/triggermanager/actions/TrgActText.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aaa4c[];  // debug message: action has no record

// Trigger::Act::TEXT is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall TEXT(int *action);
} }

namespace TrgActText_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActText_p1

// 00C7F150  Trigger::Act::TEXT  size=66  [class]
int __fastcall Trigger::Act::TEXT(int *action)
{
    using namespace TrgActText_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016aaa4c);
        return 0;
    }
    int param2C = record[11];  // +0x2C
    int param28 = record[10];  // +0x28
    int text = ((int (*)(char *, int, int, int))FUN_00e03ea0)((char *)record + 8, param28, param2C, 0);
    FUN_00ce3040(text, param28, param2C, 0);
    return 1;
}
