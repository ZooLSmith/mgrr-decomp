// src/managers/triggermanager/actions/TrgActEffectRoomLoop.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016b1534;  // error message format string
extern undefined4 DAT_01b7bd48;  // heap passed to FUN_00dd3500

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall EFFECT_ROOM_LOOP(int action);
} }

namespace TrgActEffectRoomLoop_p1 {

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

// 00EAA060 cEspControler::cEspControler() -- the raw decompilation shows no arguments
// (in the machine code ECX is presumably the freshly allocated block)
inline undefined4 *constructEspControler() { return ((undefined4 *(*)(void))0x00EAA060)(); }

}  // namespace TrgActEffectRoomLoop_p1

// 00C973E0  Trigger::Act::EFFECT_ROOM_LOOP  size=201  [class]
// Creates a cEspControler, starts room effect (+8, +0xC) on it and attaches loop +0x10.
int __fastcall Trigger::Act::EFFECT_ROOM_LOOP(int action)
{
    using namespace TrgActEffectRoomLoop_p1;
    int params = at<int>(action, 4);
    int result = 0;
    if (params == 0) {
        reportError(&DAT_016b1534);
        return 0;
    }
    int *effectManager = (int *)FUN_00a6dd90();
    if (((int (*)(undefined4))vslot(effectManager, 0x9C))(at<undefined4>(params, 8)) != 0) {
        if (((int (*)(int, undefined4 *))FUN_00dd3500)(0xB0, &DAT_01b7bd48) != 0) {
            undefined4 *controller = constructEspControler();
            if (controller != 0) {
                undefined4 handle = ((undefined4 (*)(undefined4 *))FUN_00e01eb0)(controller);
                result = ((int (*)(undefined4, undefined4, undefined4))FUN_00e01540)
                             (at<undefined4>(params, 8), at<undefined4>(params, 0xC), handle);
                if (result == 1) {
                    int loopHash = ((int (*)(int))FUN_00e03ea0)(params + 0x10);
                    return ((int (*)(undefined4 *, int))FUN_00a71770)(controller, loopHash);
                }
                ((void (*)(int))vslot((int *)controller, 0))(1);  // deleting destructor
            }
        }
    }
    return result;
}
