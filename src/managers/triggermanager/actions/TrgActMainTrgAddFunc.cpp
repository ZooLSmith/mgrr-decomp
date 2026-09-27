// src/managers/triggermanager/actions/TrgActMainTrgAddFunc.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac19c[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall MAIN_TRG_ADD_FUNC(int *action);
} }

namespace TrgActMainTrgAddFunc_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActMainTrgAddFunc_p1

// 00C819A0  Trigger::Act::MAIN_TRG_ADD_FUNC  size=46  [class]
// Adds function params+0x8 to the main trigger (FUN_00958f70 returns the main-trigger manager).
int __fastcall Trigger::Act::MAIN_TRG_ADD_FUNC(int *action)
{
    using namespace TrgActMainTrgAddFunc_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ac19c);
        return 0;
    }
    int funcId = ((int *)action[1])[2];  // params+0x8
    call<undefined4 (*)(int)>(FUN_00958f70)(funcId);
    FUN_00959760(funcId); /* ECX: ? (manager returned above) */
    return 0;
}
