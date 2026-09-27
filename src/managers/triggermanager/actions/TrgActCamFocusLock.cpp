// src/managers/triggermanager/actions/TrgActCamFocusLock.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016acb4c;  // error message format string
extern undefined DAT_016acb70;  // error message format string
extern undefined DAT_016acb98;  // error message format string
extern undefined DAT_01be9db8;  // handle filled by the player's vf04
extern unsigned int DAT_01bea070;  // camera state flags (0x20000 = focus lock)

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CAM_FOCUS_LOCK(int action);
} }

namespace TrgActCamFocusLock_p1 {

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

// stack frame of CAM_FOCUS_LOCK: the resolved focus position and the vector (position + w = 1.0f)
// handed to FUN_00c783e0. The raw decompilation shows &auStack_24 for that argument, but the
// machine code (lea ecx,[esp+0x28] after sub esp,8 at 0x00C888A1) passes the address of target.
struct FocusLockFrame {
    undefined4 position[3];   // filled by FUN_00c78580
    undefined4 pad;
    undefined4 target[4];     // x, y, z, w
};

}  // namespace TrgActCamFocusLock_p1

// 00C887A0  Trigger::Act::CAM_FOCUS_LOCK  size=297  [class]
int __fastcall Trigger::Act::CAM_FOCUS_LOCK(int action)
{
    using namespace TrgActCamFocusLock_p1;
    FocusLockFrame frame;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016acb98);
        return 0;
    }
    if (((int (*)(undefined4, undefined4 *))FUN_00c78580)(at<undefined4>(params, 8), frame.position) == 0) {
        reportError(&DAT_016acb70, at<undefined4>(params, 8));
        return 0;
    }
    frame.target[0] = frame.position[0];
    frame.target[1] = frame.position[1];
    frame.target[2] = frame.position[2];
    frame.target[3] = 0x3F800000;  // 1.0f
    int *camera = (int *)FUN_00c13920();
    if (((int (*)(int))vslot(camera, 0x28))(-1) != 0) {
        int *player = (int *)((int (*)(void))FUN_00a7c8a0)();
        if (player != 0) {
            undefined *handle = &DAT_01be9db8;
            ((void (*)(undefined *))vslot(player, 4))(&DAT_01be9db8);
            if (((int (*)(undefined *))FUN_00dd6d80)(handle) != 0) {
                DAT_01bea070 = DAT_01bea070 | 0x20000;
                ((void (*)(void))FUN_00b7ec60)();
                ((void (*)(undefined4 *, float, float))FUN_00c783e0)
                    (frame.target, (float)(at<float>(params, 0x10) * -1.0), (float)(at<float>(params, 0xC) * -1.0));
                return 1;
            }
        }
    }
    reportError(&DAT_016acb4c);
    return 0;
}
