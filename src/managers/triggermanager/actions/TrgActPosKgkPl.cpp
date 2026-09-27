// src/managers/triggermanager/actions/TrgActPosKgkPl.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac0a0[];  // debug message: action has no parameter block
extern char DAT_016ac070[];  // debug message: position %d not registered

namespace Trigger { namespace Act {
int __fastcall POS_KGK_PL(int *action);
} }

namespace TrgActPosKgkPl_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActPosKgkPl_p1

// 00C81760  Trigger::Act::POS_KGK_PL  size=146  [class]
// Moves the player to registered position params+0x8; the entry's 4th component is the yaw.
int __fastcall Trigger::Act::POS_KGK_PL(int *action)
{
    using namespace TrgActPosKgkPl_p1;
    float rotation[4];
    float position[4];
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ac0a0);
        return 0;
    }
    int ok = call<int (*)(int, float *)>(FUN_00c78580)(params[2], position); /* ECX: ? */
    if (ok == 0) {
        debugPrint(DAT_016ac070, params[2]);
        return 0;
    }
    rotation[0] = 0.0f;
    rotation[1] = position[3];
    rotation[2] = 0.0f;
    position[3] = 1.0f;
    call<void (*)(float *, float *, int)>(FUN_00a4d8a0)(position, rotation, 0);
    return 1;
}
