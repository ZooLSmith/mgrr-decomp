// src/managers/triggermanager/actions/TrgActReqBehInst.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aac58[];  // debug message: action has no parameter block
extern char DAT_016aac1c[];  // debug message: object %d not found

namespace Trigger { namespace Act {
int __fastcall REQ_BEH_INST(int *action);
} }

namespace TrgActReqBehInst_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActReqBehInst_p1

// 00C7F4C0  Trigger::Act::REQ_BEH_INST  size=129  [class]
// Looks up object params+0x8 and sends it a behaviour request whose first word is params+0xC
// (FUN_00a9d720 on the object returned by FUN_00a7c8a0).
int __fastcall Trigger::Act::REQ_BEH_INST(int *action)
{
    using namespace TrgActReqBehInst_p1;
    undefined4 request[15];
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016aac58);
        return 0;
    }
    int found = call<int (*)(int)>(FUN_00a7f600)(params[2]); /* ECX: ? */
    if (found != 0) {
        request[0] = params[3];  // +0xC
        FUN_00a7c8a0(found);  // machine code: ECX = found; &request is FUN_00a9d720's argument
        call<void (*)(undefined4 *)>(FUN_00a9d720)(request); /* ECX: ? (object returned above) */
        return 1;
    }
    debugPrint(DAT_016aac1c, params[2]);
    return 0;
}
