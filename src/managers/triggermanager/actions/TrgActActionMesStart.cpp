// src/managers/triggermanager/actions/TrgActActionMesStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ab628;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ACTION_MES_START(int action);
} }

namespace TrgActActionMesStart_p1 {

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

}  // namespace TrgActActionMesStart_p1

// 00C80780  Trigger::Act::ACTION_MES_START  size=45  [class]
int __fastcall Trigger::Act::ACTION_MES_START(int action)
{
    using namespace TrgActActionMesStart_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016ab628);
        return 0;
    }
    FUN_00cb54e0(at<int>(at<int>(action, 4), 8));
    return 1;
}
