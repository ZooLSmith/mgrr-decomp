// src/managers/triggermanager/actions/TrgActStpFlagOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern unsigned int DAT_01bea070;  // flag bit array (MSB first)
extern unsigned int DAT_018abc24[];  // flag table, 8-byte entries
extern char DAT_016acabc[];  // debug message: action has no record
extern char DAT_016aca8c[];  // debug message: invalid flag

// Trigger::Act::STP_FLAG_ON is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall STP_FLAG_ON(int *action);
} }

namespace TrgActStpFlagOn_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActStpFlagOn_p1

// 00C881E0  Trigger::Act::STP_FLAG_ON  size=95  [class]
int __fastcall Trigger::Act::STP_FLAG_ON(int *action)
{
    using namespace TrgActStpFlagOn_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016acabc);
        return 0;
    }
    int flagIndex = action[2];
    if (-1 < flagIndex) {
        unsigned int bit = DAT_018abc24[flagIndex * 2];  // 8-byte entries: word 0 = bit number
        (&DAT_01bea070)[bit >> 5] = (&DAT_01bea070)[bit >> 5] | 0x80000000U >> (bit & 0x1f);
        return 1;
    }
    debugPrint(DAT_016aca8c);
    return 0;
}
