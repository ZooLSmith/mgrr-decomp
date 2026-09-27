// src/managers/triggermanager/actions/TrgActEnmHide.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abc3c;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ENM_HIDE(int action);
} }

namespace TrgActEnmHide_p1 {

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

}  // namespace TrgActEnmHide_p1

// 00C811B0  Trigger::Act::ENM_HIDE  size=51  [class]
int __fastcall Trigger::Act::ENM_HIDE(int action)
{
    using namespace TrgActEnmHide_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016abc3c);
        return 0;
    }
    ((void (*)(undefined4, undefined4))FUN_00c18a80)(at<undefined4>(params, 8), at<undefined4>(params, 0xC));
    return 1;
}
