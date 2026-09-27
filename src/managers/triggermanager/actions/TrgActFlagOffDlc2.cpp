// src/managers/triggermanager/actions/TrgActFlagOffDlc2.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016acc94;  // error message format string
extern int DAT_018abf68;  // DLC2 flag bit array (pointer to words)
extern undefined DAT_018abf70;  // DLC2 flag CRITICAL_SECTION
extern int DAT_018abf88;  // DLC2 flag lock enabled
extern int DAT_018abf98;  // DLC3 flag bit array (pointer to words)
extern undefined DAT_018abfa0;  // DLC3 flag CRITICAL_SECTION
extern int DAT_018abfb8;  // DLC3 flag lock enabled
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall FLAG_OFF_DLC2(int action);
    int __fastcall FLAG_OFF_DLC2_2(int action);
} }

namespace TrgActFlagOffDlc2_p1 {

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

}  // namespace TrgActFlagOffDlc2_p1

// 00C88C50  Trigger::Act::FLAG_OFF_DLC2  size=108  [class]
int __fastcall Trigger::Act::FLAG_OFF_DLC2(int action)
{
    using namespace TrgActFlagOffDlc2_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016acc94);
        return 0;
    }
    unsigned int flagNo = at<unsigned int>(at<int>(action, 4), 8);
    if (DAT_018abf88 != 0) {
        EnterCriticalSection(&DAT_018abf70);
        unsigned int *word = (unsigned int *)(DAT_018abf68 + (flagNo >> 5) * 4);
        *word = *word & ~(0x80000000U >> ((unsigned char)flagNo & 0x1F));
        if (DAT_018abf88 != 0) {
            LeaveCriticalSection(&DAT_018abf70);
        }
    }
    return 1;
}

// 00C88D50  Trigger::Act::FLAG_OFF_DLC2_2  size=108  [class]
// Clears a flag in the DLC3 flag set (same body as FLAG_OFF_DLC2 on the other set).
int __fastcall Trigger::Act::FLAG_OFF_DLC2_2(int action)
{
    using namespace TrgActFlagOffDlc2_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016acc94);
        return 0;
    }
    unsigned int flagNo = at<unsigned int>(at<int>(action, 4), 8);
    if (DAT_018abfb8 != 0) {
        EnterCriticalSection(&DAT_018abfa0);
        unsigned int *word = (unsigned int *)(DAT_018abf98 + (flagNo >> 5) * 4);
        *word = *word & ~(0x80000000U >> ((unsigned char)flagNo & 0x1F));
        if (DAT_018abfb8 != 0) {
            LeaveCriticalSection(&DAT_018abfa0);
        }
    }
    return 1;
}
