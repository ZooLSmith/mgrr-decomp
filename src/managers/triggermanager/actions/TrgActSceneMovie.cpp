// src/managers/triggermanager/actions/TrgActSceneMovie.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab1e0[];  // debug message: action has no parameter block
extern int DAT_018b9174;     // current phase id

namespace Trigger { namespace Act {
int __fastcall SCENE_MOVIE(int *action);
} }

namespace TrgActSceneMovie_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActSceneMovie_p1

// 00C7FFF0  Trigger::Act::SCENE_MOVIE  size=84  [class]
// Changes to scene params+0x8 (name params+0xC, extra params+0x2C); in phase 0x520 scene 0xF07
// first calls FUN_0093db80.
int __fastcall Trigger::Act::SCENE_MOVIE(int *action)
{
    using namespace TrgActSceneMovie_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ab1e0);
        return 0;
    }
    if ((DAT_018b9174 == 0x520) && (params[2] == 0xf07)) {
        call<void (*)()>(FUN_0093db80)(); /* ECX: ? */
    }
    return call<int (*)(int, char *, int)>(FUN_00a4ac40)(params[2], (char *)(params + 3), params[0xb]); /* ECX: ? */
}
