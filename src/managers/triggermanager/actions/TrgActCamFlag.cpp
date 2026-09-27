// src/managers/triggermanager/actions/TrgActCamFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ab06c;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CAM_FLAG(int action);
} }

namespace TrgActCamFlag_p1 {

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

// the inlined strcmp: -1 / 0 / 1 by the first differing byte (unsigned)
inline int compareString(const char *a, const char *b)
{
    for (;;) {
        unsigned char ca = (unsigned char)*a, cb = (unsigned char)*b;
        if (ca != cb) {
            return ca < cb ? -1 : 1;
        }
        if (ca == 0) {
            return 0;
        }
        ++a;
        ++b;
    }
}

}  // namespace TrgActCamFlag_p1

// 00C7FA10  Trigger::Act::CAM_FLAG  size=241  [class]
int __fastcall Trigger::Act::CAM_FLAG(int action)
{
    using namespace TrgActCamFlag_p1;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016ab06c);
        return 0;
    }
    if (compareString((const char *)(params + 8), "HANDSHAKE") == 0) {
        if (at<int>(params, 0x18) == 0) {
            FUN_00da57a0();
            ((void (*)(void))FUN_00da5790)();
            return 1;
        }
        if (((int (*)(void))FUN_00da5770)() == 0) {
            ((void (*)(int, undefined4))FUN_00da5780)(0, 0x3DB2B8C2);  // 0x3DB2B8C2 = 0.0872665f (5 degrees)
            return 1;
        }
    }
    else if (compareString((const char *)(params + 8), "ANIMOFF") == 0) {
        ((void (*)(int))FUN_00da5000)(at<int>(params, 0x18) == 0);
    }
    return 1;
}
