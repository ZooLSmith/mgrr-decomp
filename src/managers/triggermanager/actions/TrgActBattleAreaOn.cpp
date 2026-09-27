// src/managers/triggermanager/actions/TrgActBattleAreaOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ab9a4;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall BATTLE_AREA_ON(int action);
} }

namespace TrgActBattleAreaOn_p1 {

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

}  // namespace TrgActBattleAreaOn_p1

// 00C80C40  Trigger::Act::BATTLE_AREA_ON  size=54  [class]
int __fastcall Trigger::Act::BATTLE_AREA_ON(int action)
{
    using namespace TrgActBattleAreaOn_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016ab9a4);
        return 0;
    }
    int *battleRegions = (int *)FUN_00401110();
    ((void (*)(undefined4))vslot(battleRegions, 4))(at<undefined4>(params, 8));
    return 1;
}
