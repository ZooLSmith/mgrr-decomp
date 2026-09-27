// src/managers/triggermanager/actions/TrgActDoorDispOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abda0;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall DOOR_DISP_OFF(int action);
} }

namespace TrgActDoorDispOff_p1 {

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

}  // namespace TrgActDoorDispOff_p1

// 00C813B0  Trigger::Act::DOOR_DISP_OFF  size=42  [class]
int __fastcall Trigger::Act::DOOR_DISP_OFF(int action)
{
    using namespace TrgActDoorDispOff_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016abda0);
        return 0;
    }
    return ((int (*)(void))FUN_00c47cf0)();
}
