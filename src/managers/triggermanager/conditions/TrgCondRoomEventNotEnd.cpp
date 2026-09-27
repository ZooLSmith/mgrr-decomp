// src/managers/triggermanager/conditions/TrgCondRoomEventNotEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016a9628;  // debug message: no record

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    unsigned int __fastcall ROOM_EVENT_NOT_END(int condition);
} }

namespace TrgCondRoomEventNotEnd_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondRoomEventNotEnd_p1

// 00C7B760  Trigger::Cond::ROOM_EVENT_NOT_END  size=87  [class]
// cCondRoomEventNotEnd::vf14. Condition type 0x40 looks the event (+0x10) up in table 1,
// type 0x41 in table 2; any other type counts as "not ended".
unsigned int __fastcall Trigger::Cond::ROOM_EVENT_NOT_END(int condition)
{
    using namespace TrgCondRoomEventNotEnd_p1;
    unsigned int ended = 0;
    if (at<int>(condition, 4) == 0) {
        reportError(&DAT_016a9628);
        return 0;
    }
    int conditionType = at<int>(at<int>(condition, 4), 4);  // record[1]
    if (conditionType == 0x40 || conditionType == 0x41) {
        undefined4 eventId = at<undefined4>(condition, 0x10);
        int table = (conditionType == 0x40) ? 1 : 2;
        // FUN_00e678d0 is __thiscall on a 12-byte stack object (ECX = &key; the raw call dropped it);
        // it returns the pointer passed on to FUN_00e7a6e0.
        int key[3];
        undefined4 roomEvent = ((undefined4 (__thiscall *)(int *, int, undefined4, int))FUN_00e678d0)(key, table, eventId, -1);
        ended = ((unsigned int (*)(undefined4))FUN_00e7a6e0)(roomEvent);
    }
    return ended ^ 1;
}
