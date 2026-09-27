// src/managers/triggermanager/actions/TrgActResultRecEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab70c[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall RESULT_REC_END(int *action);
} }

namespace TrgActResultRecEnd_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActResultRecEnd_p1

// 00C80840  Trigger::Act::RESULT_REC_END  size=46  [class]
// Stops result recording: vf14 of the result-record object returned by FUN_00c1b9a0.
int __fastcall Trigger::Act::RESULT_REC_END(int *action)
{
    using namespace TrgActResultRecEnd_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ab70c);
        return 0;
    }
    int *recorder = (int *)FUN_00c1b9a0();
    (*(void (__thiscall **)(int *))(*recorder + 0x14))(recorder);
    return 1;
}
