// src/managers/triggermanager/actions/TrgActAreaBarrierOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aae8c;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    bool __fastcall AREA_BARRIER_OFF(int action);
} }

namespace TrgActAreaBarrierOff_p1 {

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

}  // namespace TrgActAreaBarrierOff_p1

// 00C7F730  Trigger::Act::AREA_BARRIER_OFF  size=101  [class]
bool __fastcall Trigger::Act::AREA_BARRIER_OFF(int action)
{
    using namespace TrgActAreaBarrierOff_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016aae8c);
        return false;
    }
    int found;
    if (at<int>(params, 0xC) == 0) {
        found = ((int (*)(undefined4))FUN_00a7f600)(at<undefined4>(params, 8));
    }
    else {
        found = ((int (*)(int, undefined4))FUN_00a18d70)(at<int>(params, 0xC), at<undefined4>(params, 8));
    }
    if (found != 0) {
        int *player = (int *)((int (*)(void))FUN_00a7c8a0)();
        ((void (*)(void))vslot(player, 0x328))();
    }
    return found != 0;
}
