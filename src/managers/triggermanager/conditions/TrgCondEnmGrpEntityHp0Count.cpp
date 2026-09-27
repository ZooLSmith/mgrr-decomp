// src/managers/triggermanager/conditions/TrgCondEnmGrpEntityHp0Count.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_01c78cb0;  // enemy manager (ECX of the FUN_00c18c10 / FUN_00c197b0 calls)

extern undefined DAT_016a9c2c;  // debug message: enemy set not specified
extern undefined DAT_016a9be8;  // debug message: enemy group not specified

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    bool __fastcall ENM_GRP_ENTITY_HP0_COUNT(int condition);
} }

namespace TrgCondEnmGrpEntityHp0Count_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondEnmGrpEntityHp0Count_p1

// 00C7C3E0  Trigger::Cond::ENM_GRP_ENTITY_HP0_COUNT  size=163  [class]
// +0x10 comparison (1 <, 2 <=, 3 ==, 4 >, 5 >=), +0x14 threshold, +0x18 enemy set, +0x1C group.
bool __fastcall Trigger::Cond::ENM_GRP_ENTITY_HP0_COUNT(int condition)
{
    using namespace TrgCondEnmGrpEntityHp0Count_p1;
    if (at<int>(condition, 0x18) == -1) {
        reportError(&DAT_016a9c2c);
    }
    else {
        if (at<int>(condition, 0x1C) == -1) {
            reportError(&DAT_016a9be8);
            return false;
        }
        int group = ((int (__thiscall *)(void *, int, int))FUN_00c18c10)(&DAT_01c78cb0, at<int>(condition, 0x18), at<int>(condition, 0x1C));
        if (group != 0) {
            int count = ((int (__thiscall *)(void *, int, int))FUN_00c197b0)(&DAT_01c78cb0, at<int>(condition, 0x18), at<int>(condition, 0x1C));
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
