// src/managers/triggermanager/actions/TrgActActionMesFClr.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ab65c;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ACTION_MES_F_CLR(int action);
} }

namespace TrgActActionMesFClr_p1 {

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

}  // namespace TrgActActionMesFClr_p1

// 00C807B0  Trigger::Act::ACTION_MES_F_CLR  size=37  [class]
int __fastcall Trigger::Act::ACTION_MES_F_CLR(int action)
{
    using namespace TrgActActionMesFClr_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016ab65c);
        return 0;
    }
    FUN_00cb5520();
    return 1;
}
