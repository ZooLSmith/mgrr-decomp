// src/managers/triggermanager/actions/TrgActDoorOpen.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa680;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall DOOR_OPEN(int action);
    int __fastcall DOOR_OPEN_2(int action);
} }

namespace TrgActDoorOpen_p1 {

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

}  // namespace TrgActDoorOpen_p1

// 00C7EA30  Trigger::Act::DOOR_OPEN  size=58  [class]
int __fastcall Trigger::Act::DOOR_OPEN(int action)
{
    using namespace TrgActDoorOpen_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016aa680);
        return 0;
    }
    int doorHash = ((int (*)(int))FUN_00e03ea0)(params + 8);
    return ((int (*)(int, undefined4))FUN_00c478b0)(doorHash, at<undefined4>(params, 0x18));
}

// 00C81840  Trigger::Act::DOOR_OPEN_2  size=57  [class]
int __fastcall Trigger::Act::DOOR_OPEN_2(int action)
{
    using namespace TrgActDoorOpen_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016aa680);
        return 0;
    }
    int doorHash = ((int (*)(int))FUN_00e03ea0)(params + 8);
    return ((int (*)(int, undefined4))FUN_00c31610)(doorHash, at<undefined4>(params, 0x18));
}
