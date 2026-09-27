// src/managers/triggermanager/actions/TrgActCodecStartForSkip.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abe00;  // error message format string
extern undefined DAT_016abe50;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CODEC_START_FOR_SKIP(int action);
} }

namespace TrgActCodecStartForSkip_p1 {

// field at a byte offset of a record whose layout is not modelled
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }
template <class A, class B> inline void reportError(const void *format, A a, B b)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b); }
template <class A, class B, class C> inline void reportError(const void *format, A a, B b, C c)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b, c); }

}  // namespace TrgActCodecStartForSkip_p1

// 00C81420  Trigger::Act::CODEC_START_FOR_SKIP  size=126  [class]
int __fastcall Trigger::Act::CODEC_START_FOR_SKIP(int action)
{
    using namespace TrgActCodecStartForSkip_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016abe50);
        return 0;
    }
    int skipHash = 0;
    char *skipName = (char *)(params + 0x1C);
    if (skipName[0] != '\0') {  // inlined strlen(skipName) != 0
        skipHash = ((int (*)(char *))FUN_00e03ea0)(skipName);
    }
    if (((int (*)(int, undefined4, int))FUN_0093b4a0)(params + 8, at<undefined4>(params, 0x18), skipHash) == 0) {
        reportError(&DAT_016abe00, params + 8);
        return 0;
    }
    return 1;
}
