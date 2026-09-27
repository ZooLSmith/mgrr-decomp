// src/managers/triggermanager/actions/TrgActCam.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa5d4;  // error message format string
extern int DAT_01dbd8a8;

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CAM(int action);
} }

namespace TrgActCam_p1 {

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

}  // namespace TrgActCam_p1

// 00C7E8A0  Trigger::Act::CAM  size=66  [class]
int __fastcall Trigger::Act::CAM(int action)
{
    using namespace TrgActCam_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa5d4);
        return 0;
    }
    if (DAT_01dbd8a8 != 0) {
        return ((int (*)(undefined4, undefined4, int))FUN_00ac9d90)
                   (at<undefined4>(at<int>(action, 4), 8), at<undefined4>(action, 8), 0x8000000);
    }
    return 0;
}
