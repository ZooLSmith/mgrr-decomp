// src/managers/triggermanager/actions/TrgActRadioInfoEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aace8[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall RADIO_INFO_END(int *action);
} }

namespace TrgActRadioInfoEnd_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActRadioInfoEnd_p1

// 00C7F610  Trigger::Act::RADIO_INFO_END  size=32  [class]
// Only validates the parameter block (no effect in this build).
int __fastcall Trigger::Act::RADIO_INFO_END(int *action)
{
    using namespace TrgActRadioInfoEnd_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016aace8);
        return 0;
    }
    return 1;
}
