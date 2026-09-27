// src/managers/triggermanager/conditions/TrgCondTimeSta.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa070;  // debug message: no record

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    int __fastcall TIME_STA(int condition);
} }

namespace TrgCondTimeSta_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondTimeSta_p1

// 00C7D140  Trigger::Cond::TIME_STA  size=40  [class]
// cCondTimeSta::vf14: met once the time at +0x30 has run out.
int __fastcall Trigger::Cond::TIME_STA(int condition)
{
    using namespace TrgCondTimeSta_p1;
    if (at<int>(condition, 4) == 0) {
        reportError(&DAT_016aa070);
    }
    else if (at<float>(condition, 0x30) <= 0.0) {
        return 1;
    }
    return 0;
}
