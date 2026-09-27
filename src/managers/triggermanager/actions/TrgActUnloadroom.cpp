// src/managers/triggermanager/actions/TrgActUnloadroom.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aaaa0[];  // debug message: action has no record

// Trigger::Act::UnloadRoom is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall UnloadRoom(int *action);
} }

namespace TrgActUnloadroom_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActUnloadroom_p1

// 00C7F1F0  Trigger::Act::UnloadRoom  size=47  [class]
int __fastcall Trigger::Act::UnloadRoom(int *action)
{
    using namespace TrgActUnloadroom_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016aaaa0);
        return 0;
    }
    ((void (*)(int))FUN_00a4ea90)(((int *)action[1])[2]);  // room id
    return 1;
}
