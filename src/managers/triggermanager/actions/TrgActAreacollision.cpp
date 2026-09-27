// src/managers/triggermanager/actions/TrgActAreacollision.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aaaf8;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall AreaCollision(int action);
} }

namespace TrgActAreacollision_p1 {

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

}  // namespace TrgActAreacollision_p1

// 00C7F330  Trigger::Act::AreaCollision  size=82  [class]
int __fastcall Trigger::Act::AreaCollision(int action)
{
    using namespace TrgActAreacollision_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016aaaf8);
        return 0;
    }
    int *areaManager = (int *)FUN_00a6e640();
    int result = ((int (*)(short, int))vslot(areaManager, 0x50))(at<short>(params, 8), 1);
    if (result == 0) {
        areaManager = (int *)FUN_00a6e640();
        result = ((int (*)(undefined4, undefined4, undefined4))vslot(areaManager, 100))
                     (at<undefined4>(params, 8), at<undefined4>(params, 0xC), at<undefined4>(params, 0x10));
    }
    return result;
}
