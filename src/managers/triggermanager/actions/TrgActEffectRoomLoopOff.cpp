// src/managers/triggermanager/actions/TrgActEffectRoomLoopOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ab89c;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall EFFECT_ROOM_LOOP_OFF(int action);
} }

namespace TrgActEffectRoomLoopOff_p1 {

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

}  // namespace TrgActEffectRoomLoopOff_p1

// 00C80AF0  Trigger::Act::EFFECT_ROOM_LOOP_OFF  size=96  [class]
int __fastcall Trigger::Act::EFFECT_ROOM_LOOP_OFF(int action)
{
    using namespace TrgActEffectRoomLoopOff_p1;
    int params = at<int>(action, 4);
    int result = 0;
    if (params == 0) {
        reportError(&DAT_016ab89c);
        return 0;
    }
    int *effectManager = (int *)FUN_00a6dd90();
    if (((int (*)(undefined4))vslot(effectManager, 0x9C))(at<undefined4>(params, 8)) != 0) {
        int loopHash = ((int (*)(int))FUN_00e03ea0)(params + 0x10);
        result = ((int (*)(undefined4, int))FUN_00a71830)(at<undefined4>(params, 0xC), loopHash);
    }
    return result;
}
