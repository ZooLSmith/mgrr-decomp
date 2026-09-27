// src/managers/triggermanager/conditions/TrgCondNotStpFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern unsigned int DAT_018abc24[];  // STP flag table, 8-byte entries; word 0 = bit number
extern unsigned int DAT_01bea070;    // STP flag bit array (MSB first)
extern undefined DAT_016a9e54;  // debug message: invalid flag

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    bool __fastcall NOT_STP_FLAG(int condition);
} }

namespace TrgCondNotStpFlag_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondNotStpFlag_p1

// 00C7CB00  Trigger::Cond::NOT_STP_FLAG  size=67  [class]
// +0x10 = index into the STP flag table (8-byte entries, word 0 = bit number, MSB first).
bool __fastcall Trigger::Cond::NOT_STP_FLAG(int condition)
{
    using namespace TrgCondNotStpFlag_p1;
    if (-1 < at<int>(condition, 0x10)) {
        unsigned int bit = DAT_018abc24[at<int>(condition, 0x10) * 2];
        return (0x80000000U >> (bit & 0x1f) & (&DAT_01bea070)[bit >> 5]) == 0;
    }
    reportError(&DAT_016a9e54);
    return false;
}
