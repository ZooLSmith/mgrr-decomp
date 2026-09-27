// src/managers/triggermanager/actions/TrgActPlMaxHp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016acaec[];  // debug message: action has no parameter block
extern char DAT_01be9db8[];  // class info the player behavior must derive from (FUN_00dd6d80)

namespace Trigger { namespace Act {
int __fastcall PL_MAX_HP(int *action);
} }

namespace TrgActPlMaxHp_p1 {

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

}  // namespace TrgActPlMaxHp_p1

// 00C88640  Trigger::Act::PL_MAX_HP  size=115  [class]
// Sets the player's HP to FUN_00b7c980(1) (presumably the maximum).
// vf04 returns the object's class info; FUN_00dd6d80 walks that chain looking for DAT_01be9db8.
int __fastcall Trigger::Act::PL_MAX_HP(int *action)
{
    using namespace TrgActPlMaxHp_p1;
    if (action[1] != 0) {  // +0x4 parameter block
        int result = 0;
        int *entityManager = (int *)FUN_00c13920();  // DAT_01bea100
        int player = vcall<int>(entityManager, 0x28, -1);
        int *behavior;
        if ((player != 0) && (behavior = (int *)FUN_00a7c8a0(player), behavior != 0)) {  // machine code: ECX = player
            char *classInfo = DAT_01be9db8;
            vcall<void>(behavior, 4, DAT_01be9db8);
            int isKind = call<int (*)(char *)>(FUN_00dd6d80)(classInfo); /* ECX: ? (vf04 result) */
            if (isKind != 0) {
                int maxHp = FUN_00b7c980(1);
                call<void (*)(int)>(FUN_00b7c9c0)(maxHp); /* ECX: ? */
                result = 1;
            }
        }
        return result;
    }
    debugPrint(DAT_016acaec);
    return 0;
}
