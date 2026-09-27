// src/managers/triggermanager/actions/TrgActNoCodecMenu.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac010[];  // debug message: action has no parameter block
extern int DAT_01bea178;     // "no codec menu" setting

namespace Trigger { namespace Act {
int __fastcall NO_CODEC_MENU(int *action);
} }

namespace TrgActNoCodecMenu_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActNoCodecMenu_p1

// 00C816C0  Trigger::Act::NO_CODEC_MENU  size=41  [class]
// Stores params+0x8 into DAT_01bea178.
int __fastcall Trigger::Act::NO_CODEC_MENU(int *action)
{
    using namespace TrgActNoCodecMenu_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ac010);
        return 0;
    }
    DAT_01bea178 = ((int *)action[1])[2];  // params+0x8
    return 1;
}
