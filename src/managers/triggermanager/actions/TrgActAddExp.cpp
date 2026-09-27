// src/managers/triggermanager/actions/TrgActAddExp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abdd0;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ADD_EXP(int action);
} }

namespace TrgActAddExp_p1 {

// field at a byte offset of a record whose layout is not modelled
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// address stored in the vftable slot at byte offset `offset` of `object`
inline int vslot(int *object, int offset) { return *(int *)(*object + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }
template <class A, class B> inline void reportError(const void *format, A a, B b)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b); }
template <class A, class B, class C> inline void reportError(const void *format, A a, B b, C c)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b, c); }

}  // namespace TrgActAddExp_p1

// 00C813E0  Trigger::Act::ADD_EXP  size=54  [class]
int __fastcall Trigger::Act::ADD_EXP(int action)
{
    using namespace TrgActAddExp_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016abdd0);
        return 0;
    }
    int *manager = (int *)FUN_00c1b9a0();
    ((void (*)(undefined4))vslot(manager, 0x3C))(at<undefined4>(params, 8));
    return 1;
}
