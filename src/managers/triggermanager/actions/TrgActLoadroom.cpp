// src/managers/triggermanager/actions/TrgActLoadroom.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aaa74[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall LoadRoom(int *action);
} }

namespace TrgActLoadroom_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActLoadroom_p1

// 00C7F1C0  Trigger::Act::LoadRoom  size=47  [class]
// Requests loading of room params+0x8 (FUN_00a4e9e0).
int __fastcall Trigger::Act::LoadRoom(int *action)
{
    using namespace TrgActLoadroom_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016aaa74);
        return 0;
    }
    int *params = (int *)action[1];
    call<void (*)(int)>(FUN_00a4e9e0)(params[2]); /* ECX: ? */
    return 1;
}
