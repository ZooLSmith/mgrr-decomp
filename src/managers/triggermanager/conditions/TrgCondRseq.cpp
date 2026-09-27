// src/managers/triggermanager/conditions/TrgCondRseq.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondPhaseJump.h"

extern undefined DAT_016b1950;  // debug message: too many child conditions

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    void RSEQ(int condition, int *record);
} }

namespace TrgCondRseq_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondRseq_p1

// 00C9CB20  Trigger::Cond::RSEQ  size=115  [class]
// __thiscall in the binary (ECX = the condition). cCondResetSequence::vf1C: builds up to 15
// children; each negate flag is loaded from record[0] (sic).
void Trigger::Cond::RSEQ(int condition, int *record)
{
    using namespace TrgCondRseq_p1;
    at<int *>(condition, 4) = record;
    int count = record[2];
    at<int>(condition, 0x8C) = count;
    if (count < 0x10) {
        int *cursor = record + 3;
        int i = 0;
        if (0 < count) {
            int *negate = (int *)(condition + 0x4C);
            do {
                int size = *cursor;
                int child = (int)Trigger::cCondPhaseJump::createFromRecord(cursor);
                negate[-0xF] = child;  // children[i] at +0x10
                *negate = *record;
                i = i + 1;
                negate = negate + 1;
                cursor = (int *)((int)cursor + size + 4);
            } while (i < at<int>(condition, 0x8C));
        }
        return;
    }
    reportError(&DAT_016b1950);
}
