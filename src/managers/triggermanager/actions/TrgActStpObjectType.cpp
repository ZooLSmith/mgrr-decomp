// src/managers/triggermanager/actions/TrgActStpObjectType.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern unsigned int DAT_01bea070;  // stop-flag bit array (MSB first)
extern char DAT_016ac8a4[];  // debug message: action has no record

// Trigger::Act::STP_OBJECT_TYPE is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall STP_OBJECT_TYPE(int *action);
} }

namespace TrgActStpObjectType_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActStpObjectType_p1

// 00C87C40  Trigger::Act::STP_OBJECT_TYPE  size=114  [class]
int __fastcall Trigger::Act::STP_OBJECT_TYPE(int *action)
{
    using namespace TrgActStpObjectType_p1;
    int result = 0;
    if (action[1] != 0) {
        switch ((unsigned int)((int *)action[1])[2]) {
        case 0:
            DAT_01bea070 = DAT_01bea070 | 0x80000000;
            return 1;
        case 1:
            DAT_01bea070 = DAT_01bea070 | 0x40000000;
            return 1;
        case 2:
            DAT_01bea070 = DAT_01bea070 | 0x20000000;
            return 1;
        case 3:
            DAT_01bea070 = DAT_01bea070 | 0x60000000;
            result = 1;
        }
        return result;
    }
    debugPrint(DAT_016ac8a4);
    return 0;
}
