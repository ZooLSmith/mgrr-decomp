// src/managers/triggermanager/actions/TrgActCamFocus.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ac64c;  // error message format string
extern undefined DAT_016ac670;  // error message format string
extern unsigned int DAT_01dbd870;  // trigger camera request flags (1 angle, 2 distance, 4 focus)
extern undefined4 DAT_01dbd880;  // focus position x
extern undefined4 DAT_01dbd884;  // focus position y
extern undefined4 DAT_01dbd888;  // focus position z
extern undefined4 DAT_01dbd88c;  // focus position w
extern float DAT_01dbd890;
extern float DAT_01dbd894;
extern int DAT_01dbd898;

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CAM_FOCUS(int action);
} }

namespace TrgActCamFocus_p1 {

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

}  // namespace TrgActCamFocus_p1

// 00C87200  Trigger::Act::CAM_FOCUS  size=207  [class]
int __fastcall Trigger::Act::CAM_FOCUS(int action)
{
    using namespace TrgActCamFocus_p1;
    undefined4 position[3];
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016ac670);
        return 0;
    }
    if (((int (*)(undefined4, undefined4 *))FUN_00c78580)(at<undefined4>(params, 8), position) == 0) {
        reportError(&DAT_016ac64c, at<undefined4>(params, 8));
        return 0;
    }
    DAT_01dbd870 = DAT_01dbd870 | 4;
    DAT_01dbd898 = 0;
    DAT_01dbd880 = position[0];
    DAT_01dbd884 = position[1];
    DAT_01dbd888 = position[2];
    DAT_01dbd88c = 0x3F800000;  // 1.0f
    DAT_01dbd890 = (float)(at<float>(params, 0x10) * -1.0);
    DAT_01dbd894 = (float)(at<float>(params, 0xC) * -1.0);
    return 1;
}
