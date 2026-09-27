// src/managers/triggermanager/actions/TrgActEnmAppear.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abc68;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ENM_APPEAR(int action);
} }

namespace TrgActEnmAppear_p1 {

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

}  // namespace TrgActEnmAppear_p1

// 00C811F0  Trigger::Act::ENM_APPEAR  size=51  [class]
int __fastcall Trigger::Act::ENM_APPEAR(int action)
{
    using namespace TrgActEnmAppear_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016abc68);
        return 0;
    }
    ((void (*)(undefined4, undefined4))FUN_00c18ad0)(at<undefined4>(params, 8), at<undefined4>(params, 0xC));
    return 1;
}
