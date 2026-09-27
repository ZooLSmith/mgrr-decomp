// src/managers/triggermanager/actions/TrgActTriggerSetUistartAnimNone.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab590[];  // debug message: action has no record

// Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall TRIGGER_SET_UISTART_ANIM_NONE(int *action);
} }

namespace TrgActTriggerSetUistartAnimNone_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActTriggerSetUistartAnimNone_p1

// 00C806C0  Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE  size=47  [class]
int __fastcall Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE(int *action)
{
    using namespace TrgActTriggerSetUistartAnimNone_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016ab590);
        return 0;
    }
    ((void (*)(int))FUN_00cad360)(((int *)action[1])[2]);
    return 1;
}
