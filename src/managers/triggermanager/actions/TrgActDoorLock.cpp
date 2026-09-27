// src/managers/triggermanager/actions/TrgActDoorLock.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abb18;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall DOOR_LOCK(int action);
} }

namespace TrgActDoorLock_p1 {

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

}  // namespace TrgActDoorLock_p1

// 00C81010  Trigger::Act::DOOR_LOCK  size=74  [class]
int __fastcall Trigger::Act::DOOR_LOCK(int action)
{
    using namespace TrgActDoorLock_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016abb18);
        return 0;
    }
    FUN_00e03ea0((char *)(params + 8));  // door name hash (result unused in the raw decompilation)
    if (at<int>(params, 0x18) != 0) {
        return ((int (*)(void))FUN_00c47bb0)();
    }
    return ((int (*)(void))FUN_00c47bf0)();
}
