// src/managers/triggermanager/actions/TrgActFlagon.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ac69c;  // error message format string
extern int DAT_018abf38;  // story flag bit array (pointer to words)
extern undefined DAT_018abf40;  // story flag CRITICAL_SECTION
extern int DAT_018abf58;  // story flag lock enabled
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall FlagOn(int action);
} }

namespace TrgActFlagon_p1 {

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

}  // namespace TrgActFlagon_p1

// 00C87380  Trigger::Act::FlagOn  size=106  [class]
int __fastcall Trigger::Act::FlagOn(int action)
{
    using namespace TrgActFlagon_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016ac69c);
        return 0;
    }
    unsigned int flagNo = at<unsigned int>(at<int>(action, 4), 8);
    if (DAT_018abf58 != 0) {
        EnterCriticalSection(&DAT_018abf40);
        unsigned int *word = (unsigned int *)(DAT_018abf38 + (flagNo >> 5) * 4);
        *word = *word | 0x80000000U >> ((unsigned char)flagNo & 0x1F);
        if (DAT_018abf58 != 0) {
            LeaveCriticalSection(&DAT_018abf40);
        }
    }
    return 1;
}
