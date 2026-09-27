// src/managers/triggermanager/conditions/TrgCondEnmEntityCount.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_01c78cb0;  // enemy manager (ECX of the FUN_00c18cc0 / FUN_00c19730 calls)

extern undefined DAT_016a9514;  // debug message: enemy set not specified

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    bool __fastcall ENM_ENTITY_COUNT(int condition);
} }

namespace TrgCondEnmEntityCount_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondEnmEntityCount_p1

// 00C7B4A0  Trigger::Cond::ENM_ENTITY_COUNT  size=133  [class]
// +0x10 comparison (1 <, 2 <=, 3 ==, 4 >, 5 >=), +0x14 threshold, +0x18 enemy set.
bool __fastcall Trigger::Cond::ENM_ENTITY_COUNT(int condition)
{
    using namespace TrgCondEnmEntityCount_p1;
    if (at<int>(condition, 0x18) == -1) {
        reportError(&DAT_016a9514);
    }
    else {
        int set = ((int (__thiscall *)(void *, int))FUN_00c18cc0)(&DAT_01c78cb0, at<int>(condition, 0x18));
        if (set != 0) {
            int count = ((int (__thiscall *)(void *, int))FUN_00c19730)(&DAT_01c78cb0, at<int>(condition, 0x18));
            switch (at<int>(condition, 0x10)) {
            case 1:
                return count < at<int>(condition, 0x14);
            case 2:
                return count <= at<int>(condition, 0x14);
            case 3:
                return count == at<int>(condition, 0x14);
            case 4:
                return at<int>(condition, 0x14) < count;
            case 5:
                return at<int>(condition, 0x14) <= count;
            }
        }
    }
    return false;
}
