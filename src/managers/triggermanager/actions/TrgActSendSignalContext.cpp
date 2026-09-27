// src/managers/triggermanager/actions/TrgActSendSignalContext.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern unsigned int DAT_018abcd4[];  // signal table, 8-byte entries
extern char DAT_016ab2a4[];  // debug message: action has no record
extern char DAT_016ab26c[];  // debug message: invalid signal

// Trigger::Act::SEND_SIGNAL_CONTEXT is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SEND_SIGNAL_CONTEXT(int *action);
} }

namespace TrgActSendSignalContext_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActSendSignalContext_p1

// 00C801A0  Trigger::Act::SEND_SIGNAL_CONTEXT  size=86  [class]
int __fastcall Trigger::Act::SEND_SIGNAL_CONTEXT(int *action)
{
    using namespace TrgActSendSignalContext_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016ab2a4);
        return 0;
    }
    int signalIndex = action[2];
    if (-1 < signalIndex) {
        ((void (*)(unsigned int, int))FUN_00d89e90)(DAT_018abcd4[signalIndex * 2], ((int *)action[1])[3]);  // 8-byte entries: word 0 = signal
        return 1;
    }
    debugPrint(DAT_016ab26c);
    return 0;
}
