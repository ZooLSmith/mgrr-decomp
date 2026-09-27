// src/managers/triggermanager/actions/TrgActMainTrgSleep.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac104[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall MAIN_TRG_SLEEP(int *action);
} }

namespace TrgActMainTrgSleep_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActMainTrgSleep_p1

// 00C81910  Trigger::Act::MAIN_TRG_SLEEP  size=41  [class]
// FUN_00958f70 returns the main-trigger manager (DAT_01b37550); FUN_00959630(1) puts the main
// trigger to sleep (MAIN_TRG_ACTIVE passes 0).
int __fastcall Trigger::Act::MAIN_TRG_SLEEP(int *action)
{
    using namespace TrgActMainTrgSleep_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ac104);
        return 0;
    }
    int sleep = 1;
    call<undefined4 (*)(int)>(FUN_00958f70)(1);
    sleep = call<int (*)(int)>(FUN_00959630)(sleep); /* ECX: ? (manager returned above) */
    return sleep;
}
