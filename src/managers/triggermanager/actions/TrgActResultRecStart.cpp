// src/managers/triggermanager/actions/TrgActResultRecStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab6d8[];  // debug message: action has no parameter block
extern char DAT_016ab690[];  // debug message: empty record name

namespace Trigger { namespace Act {
int __fastcall RESULT_REC_START(int *action);
int __fastcall RESULT_REC_START_2(int *action);
} }

namespace TrgActResultRecStart_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// vf10 of the result-record object returned by FUN_00c1b9a0: start recording (name, mode)
typedef void (__thiscall *StartRecordFn)(int *recorder, char *name, int mode);

}  // namespace TrgActResultRecStart_p1

// 00C807E0  Trigger::Act::RESULT_REC_START  size=83  [class]
// Starts result recording under the name at params+0x8 (mode 0).
int __fastcall Trigger::Act::RESULT_REC_START(int *action)
{
    using namespace TrgActResultRecStart_p1;
    char *params = (char *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ab6d8);
        return 0;
    }
    if (params[8] == '\0') {
        debugPrint(DAT_016ab690);
        return 1;
    }
    int *recorder = (int *)FUN_00c1b9a0();
    (*(StartRecordFn *)(*recorder + 0x10))(recorder, params + 8, 0);
    return 1;
}

// 00C81880  Trigger::Act::RESULT_REC_START_2  size=83  [class]
// Same as RESULT_REC_START with mode 1.
int __fastcall Trigger::Act::RESULT_REC_START_2(int *action)
{
    using namespace TrgActResultRecStart_p1;
    char *params = (char *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ab6d8);
        return 0;
    }
    if (params[8] == '\0') {
        debugPrint(DAT_016ab690);
        return 1;
    }
    int *recorder = (int *)FUN_00c1b9a0();
    (*(StartRecordFn *)(*recorder + 0x10))(recorder, params + 8, 1);
    return 1;
}
