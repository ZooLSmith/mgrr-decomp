// src/managers/triggermanager/conditions/TrgCondOutCam.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ac4e0;  // debug message: target not found (%d)

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    int __fastcall OUT_CAM(int condition);
} }

namespace TrgCondOutCam_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondOutCam_p1

// 00C853F0  Trigger::Cond::OUT_CAM  size=122  [class]
// +0x10 = target id; on success stores its position at +0x30 (w = 1.0f) and sets +0x14.
int __fastcall Trigger::Cond::OUT_CAM(int condition)
{
    using namespace TrgCondOutCam_p1;
    undefined4 position[3];
    // FUN_00c78580 is __thiscall with ECX = the object at 0x01DBD220 (dropped in the raw call)
    int found = ((int (__thiscall *)(void *, undefined4, undefined4 *))FUN_00c78580)(
        (void *)0x01DBD220, at<undefined4>(condition, 0x10), position);
    if (found != 0) {
        at<undefined4>(condition, 0x30) = position[0];
        at<undefined4>(condition, 0x34) = position[1];
        at<undefined4>(condition, 0x38) = position[2];
        at<undefined4>(condition, 0x3C) = 0x3F800000;  // 1.0f
        at<int>(condition, 0x14) = 1;
        return 1;
    }
    reportError(&DAT_016ac4e0, at<undefined4>(condition, 0x10));
    return 0;
}
