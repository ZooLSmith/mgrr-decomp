// src/managers/triggermanager/actions/TrgActVmPlay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab5d0[];  // debug message: action has no record

// Trigger::Act::VM_PLAY is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall VM_PLAY(int *action);
} }

namespace TrgActVmPlay_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActVmPlay_p1

// 00C80710  Trigger::Act::VM_PLAY  size=47  [class]
int __fastcall Trigger::Act::VM_PLAY(int *action)
{
    using namespace TrgActVmPlay_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016ab5d0);
        return 0;
    }
    ((int (*)(char *))FUN_00c33070)((char *)action[1] + 8);
    return 1;
}
