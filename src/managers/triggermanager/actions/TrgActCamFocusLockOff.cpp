// src/managers/triggermanager/actions/TrgActCamFocusLockOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016acbcc;  // error message format string
extern unsigned int DAT_01bea070;  // camera state flags (0x20000 = focus lock)
extern int DAT_01dbd898;

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CAM_FOCUS_LOCK_OFF(int action);
} }

namespace TrgActCamFocusLockOff_p1 {

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

}  // namespace TrgActCamFocusLockOff_p1

// 00C888E0  Trigger::Act::CAM_FOCUS_LOCK_OFF  size=52  [class]
int __fastcall Trigger::Act::CAM_FOCUS_LOCK_OFF(int action)
{
    using namespace TrgActCamFocusLockOff_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016acbcc);
        return 0;
    }
    DAT_01bea070 = DAT_01bea070 & 0xFFFDFFFF;
    DAT_01dbd898 = 0x78;
    return 1;
}
