// src/managers/triggermanager/actions/TrgActReqVrStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abf88[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall REQ_VR_START(int *action);
} }

namespace TrgActReqVrStart_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActReqVrStart_p1

// 00C81620  Trigger::Act::REQ_VR_START  size=37  [class]
// Requests the VR mission start (FUN_0095c2c0).
int __fastcall Trigger::Act::REQ_VR_START(int *action)
{
    using namespace TrgActReqVrStart_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016abf88);
        return 0;
    }
    FUN_0095c2c0();
    return 1;
}
