// src/managers/triggermanager/actions/TrgActEnmAppearResetPos.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abf20;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ENM_APPEAR_RESET_POS(int action);
    int __fastcall ENM_APPEAR_RESET_POS_2(int action);
} }

namespace TrgActEnmAppearResetPos_p1 {

// field at a byte offset of a record whose layout is not modelled
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }
template <class A, class B> inline void reportError(const void *format, A a, B b)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b); }
template <class A, class B, class C> inline void reportError(const void *format, A a, B b, C c)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b, c); }

}  // namespace TrgActEnmAppearResetPos_p1

// 00C81570  Trigger::Act::ENM_APPEAR_RESET_POS  size=47  [class]
int __fastcall Trigger::Act::ENM_APPEAR_RESET_POS(int action)
{
    using namespace TrgActEnmAppearResetPos_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016abf20);
        return 0;
    }
    ((void (*)(undefined4))FUN_00c18b60)(at<undefined4>(at<int>(action, 4), 8));
    return 1;
}

// 00C815A0  Trigger::Act::ENM_APPEAR_RESET_POS_2  size=51  [class]
int __fastcall Trigger::Act::ENM_APPEAR_RESET_POS_2(int action)
{
    using namespace TrgActEnmAppearResetPos_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016abf20);
        return 0;
    }
    ((void (*)(undefined4, undefined4))FUN_00c18b30)(at<undefined4>(params, 8), at<undefined4>(params, 0xC));
    return 1;
}
