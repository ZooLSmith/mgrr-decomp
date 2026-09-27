// src/managers/triggermanager/actions/TrgActItemGet.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab5fc[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall ITEM_GET(int *action);
} }

namespace TrgActItemGet_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActItemGet_p1

// 00C80740  Trigger::Act::ITEM_GET  size=45  [class]
// Gives the player item params+0x8 (FUN_00953e30).
int __fastcall Trigger::Act::ITEM_GET(int *action)
{
    using namespace TrgActItemGet_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ab5fc);
        return 0;
    }
    int *params = (int *)action[1];
    call<void (*)(int)>(FUN_00953e30)(params[2]); /* ECX: ? */
    return 1;
}
