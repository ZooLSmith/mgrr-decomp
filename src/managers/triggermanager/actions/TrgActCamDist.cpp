// src/managers/triggermanager/actions/TrgActCamDist.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa9c4;  // error message format string
extern undefined4 DAT_01bea3c4;
extern unsigned int DAT_01dbd870;  // trigger camera request flags (1 angle, 2 distance, 4 focus)
extern undefined4 DAT_01dbd89c;  // requested camera distance
extern undefined4 DAT_01dbd8a0;
extern int DAT_01dbd8a4;

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CAM_DIST(int action);
} }

namespace TrgActCamDist_p1 {

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

}  // namespace TrgActCamDist_p1

// 00C7EFC0  Trigger::Act::CAM_DIST  size=71  [class]
int __fastcall Trigger::Act::CAM_DIST(int action)
{
    using namespace TrgActCamDist_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aa9c4);
        return 0;
    }
    DAT_01dbd870 = DAT_01dbd870 | 2;
    DAT_01dbd89c = at<undefined4>(at<int>(action, 4), 8);
    DAT_01dbd8a4 = 0;
    DAT_01dbd8a0 = DAT_01bea3c4;
    return 1;
}
