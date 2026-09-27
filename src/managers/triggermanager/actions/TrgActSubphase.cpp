// src/managers/triggermanager/actions/TrgActSubphase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aa5fc[];  // debug message: action has no record

// Trigger::Act::SUBPHASE is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SUBPHASE(int *action);
} }

namespace TrgActSubphase_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActSubphase_p1

// 00C7E8F0  Trigger::Act::SUBPHASE  size=48  [class]
int __fastcall Trigger::Act::SUBPHASE(int *action)
{
    using namespace TrgActSubphase_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016aa5fc);
        return 0;
    }
    return ((int (*)(char *, int, int))FUN_00d5ea40)((char *)record + 8, 1, record[10] /* +0x28 */);
}
