// src/managers/triggermanager/conditions/TrgCondNotGameFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern unsigned int DAT_018ab9ac[];  // game flag table, 8-byte entries; word 0 = bit number
extern unsigned int DAT_01bea090;    // game flag bit array (MSB first)
extern undefined DAT_016a9490;  // debug message: invalid flag
extern unsigned int DAT_018abb5c[];  // STA flag table, 8-byte entries; word 0 = bit number
extern unsigned int DAT_01bea060;    // STA flag bit array (MSB first)

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    bool __fastcall NOT_GAME_FLAG(int condition);
    bool __fastcall NOT_GAME_FLAG_2(int condition);
} }

namespace TrgCondNotGameFlag_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondNotGameFlag_p1

// 00C7B350  Trigger::Cond::NOT_GAME_FLAG  size=67  [class]
// +0x10 = index into the GAME flag table (8-byte entries, word 0 = bit number, MSB first).
bool __fastcall Trigger::Cond::NOT_GAME_FLAG(int condition)
{
    using namespace TrgCondNotGameFlag_p1;
    if (-1 < at<int>(condition, 0x10)) {
        unsigned int bit = DAT_018ab9ac[at<int>(condition, 0x10) * 2];
        return (0x80000000U >> (bit & 0x1f) & (&DAT_01bea090)[bit >> 5]) == 0;
    }
    reportError(&DAT_016a9490);
    return false;
}

// 00C7C990  Trigger::Cond::NOT_GAME_FLAG_2  size=67  [class]
// +0x10 = index into the STA flag table (8-byte entries, word 0 = bit number, MSB first).
bool __fastcall Trigger::Cond::NOT_GAME_FLAG_2(int condition)
{
    using namespace TrgCondNotGameFlag_p1;
    if (-1 < at<int>(condition, 0x10)) {
        unsigned int bit = DAT_018abb5c[at<int>(condition, 0x10) * 2];
        return (0x80000000U >> (bit & 0x1f) & (&DAT_01bea060)[bit >> 5]) == 0;
    }
    reportError(&DAT_016a9490);
    return false;
}
