// src/managers/triggermanager/actions/TrgActGimmickRevert.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abc08[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall GIMMICK_REVERT(int *action);
} }

namespace TrgActGimmickRevert_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActGimmickRevert_p1

// 00C81170  Trigger::Act::GIMMICK_REVERT  size=49  [class]
// Reverts gimmick params+0x8 (FUN_009453f0(id, 0)).
int __fastcall Trigger::Act::GIMMICK_REVERT(int *action)
{
    using namespace TrgActGimmickRevert_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016abc08);
        return 0;
    }
    int *params = (int *)action[1];
    call<void (*)(int, int)>(FUN_009453f0)(params[2], 0); /* ECX: ? */
    return 1;
}
