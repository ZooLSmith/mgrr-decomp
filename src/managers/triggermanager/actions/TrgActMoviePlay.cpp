// src/managers/triggermanager/actions/TrgActMoviePlay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab188[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall MOVIE_PLAY(int *action);
} }

namespace TrgActMoviePlay_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActMoviePlay_p1

// 00C7FED0  Trigger::Act::MOVIE_PLAY  size=77  [class]
// Plays movie params+0x8; params+0xC is an optional name string (null when empty).
int __fastcall Trigger::Act::MOVIE_PLAY(int *action)
{
    using namespace TrgActMoviePlay_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ab188);
        return 0;
    }
    char *name = (char *)(params + 3);  // +0xC
    if (*name == '\0') {
        FUN_00c1d5b0(params[2], 0);
        return 1;
    }
    FUN_00c1d5b0(params[2], (int)name);
    return 1;
}
