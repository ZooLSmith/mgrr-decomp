// src/managers/triggermanager/actions/TrgActCamAng.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa9f0;  // error message format string
extern unsigned int DAT_01dbd870;  // trigger camera request flags (1 angle, 2 distance, 4 focus)
extern float DAT_01dbd874;  // requested camera angle (radians)
extern int DAT_01dbd878;

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CAM_ANG(int action);
} }

namespace TrgActCamAng_p1 {

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

}  // namespace TrgActCamAng_p1

// 00C7F050  Trigger::Act::CAM_ANG  size=64  [class]
int __fastcall Trigger::Act::CAM_ANG(int action)
{
    using namespace TrgActCamAng_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa9f0);
        return 0;
    }
    DAT_01dbd870 = DAT_01dbd870 | 1;
    DAT_01dbd878 = 0;
    DAT_01dbd874 = at<float>(at<int>(action, 4), 8) * 0.017453292f;  // degrees -> radians (float constant 0x0163DA10)
    return 1;
}
