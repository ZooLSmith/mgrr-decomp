// src/managers/triggermanager/actions/TrgActGimmickRevivalCancel.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abc98[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall GIMMICK_REVIVAL_CANCEL(int *action);
} }

namespace TrgActGimmickRevivalCancel_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActGimmickRevivalCancel_p1

// 00C81230  Trigger::Act::GIMMICK_REVIVAL_CANCEL  size=51  [class]
// FUN_00945260(params+0x8, params+0xC).
int __fastcall Trigger::Act::GIMMICK_REVIVAL_CANCEL(int *action)
{
    using namespace TrgActGimmickRevivalCancel_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016abc98);
        return 0;
    }
    call<void (*)(int, int)>(FUN_00945260)(params[2], params[3]); /* ECX: ? */
    return 1;
}
