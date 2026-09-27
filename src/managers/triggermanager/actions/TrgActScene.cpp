// src/managers/triggermanager/actions/TrgActScene.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aaad0[];  // debug message: action has no parameter block (argument = action)
extern int DAT_018b9174;     // current phase id

namespace Trigger { namespace Act {
int __fastcall SCENE(int *action);
} }

namespace TrgActScene_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// FUN_00a4ac40: scene change request (sceneId, optional name, extra).
inline int requestScene(int sceneId, char *name, undefined4 extra)
{
    return call<int (*)(int, char *, undefined4)>(FUN_00a4ac40)(sceneId, name, extra); /* ECX: ? */
}

}  // namespace TrgActScene_p1

// 00C7F250  Trigger::Act::SCENE  size=145  [class]
// Changes to scene params+0x8 with the optional name at params+0xC (scene 0xF06 becomes 0xF30
// while the phase id is 0xExx).
int __fastcall Trigger::Act::SCENE(int *action)
{
    using namespace TrgActScene_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016aaad0, action);
        return 0;
    }
    int sceneId = params[2];  // +0x8
    if ((sceneId == 0xf06) && ((DAT_018b9174 & 0xf00) == 0xe00)) {
        return requestScene(0xf30, (char *)(params + 3), 0xffffffff);
    }
    char *name = (char *)(params + 3);  // +0xC
    if (name[0] != '\0') {  // inlined strlen(name) != 0
        return requestScene(sceneId, name, 0xffffffff);
    }
    return requestScene(sceneId, 0, 0xffffffff);
}
