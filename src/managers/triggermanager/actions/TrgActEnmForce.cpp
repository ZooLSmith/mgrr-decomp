// src/managers/triggermanager/actions/TrgActEnmForce.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa7b4;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ENM_FORCE(int action);
    int __fastcall ENM_FORCE_2(int action);
} }

namespace TrgActEnmForce_p1 {

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

}  // namespace TrgActEnmForce_p1

// 00C7EC80  Trigger::Act::ENM_FORCE  size=42  [class]
int __fastcall Trigger::Act::ENM_FORCE(int action)
{
    using namespace TrgActEnmForce_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa7b4);
        return 0;
    }
    return ((int (*)(void))FUN_00c2a520)();
}

// 00C7ECD0  Trigger::Act::ENM_FORCE_2  size=42  [class]
int __fastcall Trigger::Act::ENM_FORCE_2(int action)
{
    using namespace TrgActEnmForce_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa7b4);
        return 0;
    }
    return ((int (*)(void))FUN_00c185c0)();
}
