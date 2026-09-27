// src/managers/triggermanager/actions/TrgActEnmClear.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa80c;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ENM_CLEAR(int action);
    int __fastcall ENM_CLEAR_2(int action);
} }

namespace TrgActEnmClear_p1 {

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

}  // namespace TrgActEnmClear_p1

// 00C7EDA0  Trigger::Act::ENM_CLEAR  size=81  [class]
int __fastcall Trigger::Act::ENM_CLEAR(int action)
{
    using namespace TrgActEnmClear_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa80c);
        return 0;
    }
    char *setName = (char *)(at<int>(action, 4) + 8);
    if (__stricmp((char *)"all", setName) == 0) {
        FUN_00c193b0();
        return 1;
    }
    ((void (*)(char *))FUN_00c19430)(setName);
    return 1;
}

// 00C7EE00  Trigger::Act::ENM_CLEAR_2  size=78  [class]
int __fastcall Trigger::Act::ENM_CLEAR_2(int action)
{
    using namespace TrgActEnmClear_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016aa80c);
        return 0;
    }
    if (at<int>(params, 0xC) == -1) {
        ((void (*)(undefined4))FUN_00c193e0)(at<undefined4>(params, 8));
        return 1;
    }
    ((void (*)(undefined4, int))FUN_00c19400)(at<undefined4>(params, 8), at<int>(params, 0xC));
    return 1;
}
