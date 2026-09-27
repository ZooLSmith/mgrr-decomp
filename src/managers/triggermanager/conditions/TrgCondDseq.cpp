// src/managers/triggermanager/conditions/TrgCondDseq.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondPhaseJump.h"

extern undefined DAT_016a8ba8;  // debug message: missing child condition (%d)
extern undefined DAT_016a8b78;  // debug message: child condition failed to start (%d)
extern undefined DAT_016b1898;  // debug message: too many child conditions

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    int __fastcall DSEQ(int condition);
    void DSEQ_2(int condition, int record);
} }

namespace TrgCondDseq_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// address stored in the vftable slot at byte offset `offset` of `object`
inline int vslot(int *object, int offset) { return *(int *)(*object + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondDseq_p1

// 00C79250  Trigger::Cond::DSEQ  size=108  [class]
// cCondDisorderedSequence::vf0C: start every child; fails on the first missing or failing one.
int __fastcall Trigger::Cond::DSEQ(int condition)
{
    using namespace TrgCondDseq_p1;
    int i = 0;
    if (0 < at<int>(condition, 0xC4)) {
        int *child = (int *)(condition + 0x10);  // children
        do {
            if (*child == 0) {
                reportError(&DAT_016a8ba8, i + 1);
                return 0;
            }
            int started = ((int (__thiscall *)(int *))vslot((int *)*child, 0xC))((int *)*child);  // child->vf0C()
            i = i + 1;
            if (started == 0) {
                reportError(&DAT_016a8b78, i);
                return 0;
            }
            child = child + 1;
        } while (i < at<int>(condition, 0xC4));
    }
    at<int>(condition, 200) = 0;  // +0xC8
    return 1;
}

// 00C9C570  Trigger::Cond::DSEQ_2  size=109  [class]
// __thiscall in the binary (ECX = the condition). cCondDisorderedSequence::vf1C: builds up to 15 children.
// Record layout from +0x08: count, then per child { sub-record (starting with its size), negate flag }.
void Trigger::Cond::DSEQ_2(int condition, int record)
{
    using namespace TrgCondDseq_p1;
    int *cursor = (int *)(record + 8);
    at<int>(condition, 4) = record;
    int count = *cursor;
    at<int>(condition, 0xC4) = count;
    if (count < 0x10) {
        int i = 0;
        if (0 < count) {
            int *negate = (int *)(condition + 0x4C);
            do {
                cursor = cursor + 1;
                int size = *cursor;
                int child = (int)Trigger::cCondPhaseJump::createFromRecord(cursor);
                cursor = (int *)((int)cursor + size);
                negate[-0xF] = child;  // children[i] at +0x10
                *negate = *cursor;
                i = i + 1;
                negate = negate + 1;
            } while (i < at<int>(condition, 0xC4));
        }
        return;
    }
    reportError(&DAT_016b1898);
}
