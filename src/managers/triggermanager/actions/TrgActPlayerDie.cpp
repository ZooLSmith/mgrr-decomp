// src/managers/triggermanager/actions/TrgActPlayerDie.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac720[];  // debug message: action has no parameter block
extern char DAT_01be9c24[];  // class info tested with FUN_00dd6d80

namespace Trigger { namespace Act {
int __fastcall PLAYER_DIE(int *action);
} }

namespace TrgActPlayerDie_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// __thiscall call of the virtual function at byte offset `slot` of obj's vftable
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

}  // namespace TrgActPlayerDie_p1

// 00C876C0  Trigger::Act::PLAYER_DIE  size=114  [class]
// Kills the player (FUN_00a8ee20(0)); the class-info test result is not used.
int __fastcall Trigger::Act::PLAYER_DIE(int *action)
{
    using namespace TrgActPlayerDie_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ac720);
        return 0;
    }
    int *entityManager = (int *)FUN_00c13920();  // DAT_01bea100
    int player = vcall<int>(entityManager, 0x28, 0);
    int *behavior = (int *)FUN_00a7c8a0(player);  // machine code: ECX = vf28 result
    if (behavior == 0) {
        call<void (*)(int)>(FUN_00a8ee20)(0); /* ECX: ? */
        return 1;
    }
    char *classInfo = DAT_01be9c24;
    vcall<void>(behavior, 4, DAT_01be9c24);
    call<int (*)(char *)>(FUN_00dd6d80)(classInfo); /* ECX: ? (vf04 result) */
    call<void (*)(int)>(FUN_00a8ee20)(0); /* ECX: ? */
    return 1;
}
