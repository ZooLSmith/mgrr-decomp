// src/managers/triggermanager/actions/TrgActSendSignal.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern unsigned int DAT_018abcd4[];  // signal table, 8-byte entries
extern char DAT_016ab23c[];  // debug message: action has no record
extern char DAT_016ab20c[];  // debug message: invalid signal

// Trigger::Act::SEND_SIGNAL is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SEND_SIGNAL(int *action);
} }

namespace TrgActSendSignal_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActSendSignal_p1

// 00C80110  Trigger::Act::SEND_SIGNAL  size=80  [class]
int __fastcall Trigger::Act::SEND_SIGNAL(int *action)
{
    using namespace TrgActSendSignal_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016ab23c);
        return 0;
    }
    int signalIndex = action[2];
    if (-1 < signalIndex) {
        FUN_00d89e60(DAT_018abcd4[signalIndex * 2]);  // 8-byte entries: word 0 = signal
        return 1;
    }
    debugPrint(DAT_016ab20c);
    return 0;
}
