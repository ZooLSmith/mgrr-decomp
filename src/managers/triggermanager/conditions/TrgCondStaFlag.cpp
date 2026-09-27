// src/managers/triggermanager/conditions/TrgCondStaFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern unsigned int DAT_018abb5c[];  // STA flag table, 8-byte entries; word 0 = bit number
extern unsigned int DAT_01bea060;    // STA flag bit array (MSB first)
extern undefined DAT_016a9d84;  // debug message: invalid flag

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    bool __fastcall STA_FLAG(int condition);
    void __fastcall STA_FLAG_2(int condition);
} }

namespace TrgCondStaFlag_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00e049b0 (__fastcall, ECX = 0x01BE939C, the game timer object): current frame time
// (x87 result; the raw decompilation dropped ECX)
inline double frameTime() { return (double)FUN_00e049b0((int *)0x01BE939C); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondStaFlag_p1

// 00C7C8E0  Trigger::Cond::STA_FLAG  size=64  [class]
// +0x10 = index into the STA flag table (8-byte entries, word 0 = bit number, MSB first).
bool __fastcall Trigger::Cond::STA_FLAG(int condition)
{
    using namespace TrgCondStaFlag_p1;
    if (-1 < at<int>(condition, 0x10)) {
        unsigned int bit = DAT_018abb5c[at<int>(condition, 0x10) * 2];
        return (0x80000000U >> (bit & 0x1f) & (&DAT_01bea060)[bit >> 5]) != 0;
    }
    reportError(&DAT_016a9d84);
    return false;
}

// 00C7D0B0  Trigger::Cond::STA_FLAG_2  size=134  [class]
// cCondTimeSta::vf10: records whether any listed STA flag is clear and, if so, counts the
// time (+0x30) down. +0x10 = int[8] flag hashes (-1 unused), +0x34 = int[8] flag indices.
void __fastcall Trigger::Cond::STA_FLAG_2(int condition)
{
    using namespace TrgCondStaFlag_p1;
    unsigned int allSet = 1;
    int *flagIndex = (int *)(condition + 0x34);
    int n = 8;
    do {
        if (flagIndex[-9] != -1) {  // matching flag hash at +0x10
            if (*flagIndex == -1) {
                reportError(&DAT_016a9d84);
            }
            else {
                unsigned int bit = DAT_018abb5c[*flagIndex * 2];
                allSet = allSet & ((0x80000000U >> (bit & 0x1f) & (&DAT_01bea060)[bit >> 5]) != 0);
            }
        }
        flagIndex = flagIndex + 1;
        n = n - 1;
    } while (n != 0);
    at<unsigned int>(condition, 0x54) = allSet ^ 1;
    if ((allSet ^ 1) == 1 && 0.0 < at<float>(condition, 0x30)) {
        double elapsed = frameTime();
        at<float>(condition, 0x30) = (float)(at<float>(condition, 0x30) - elapsed);
    }
}
