// src/managers/triggermanager/cCondDisorderedSequence.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondDisorderedSequence.h"

namespace cCondDisorderedSequence_p1 {

// __thiscall call of virtual slot `slot` (byte offset) of `self`
template <class R, class... A> inline R vcall(void *self, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(void *, A...);
    return ((Fn)(*(void ***)self)[slot / 4])(self, args...);
}

} // namespace cCondDisorderedSequence_p1

// 00C791A0  Trigger::cCondDisorderedSequence::cCondDisorderedSequence  size=31  [class]
Trigger::cCondDisorderedSequence::cCondDisorderedSequence()
{
    // inlined Trigger::cCondition constructor
    *(int *)((char *)this + 0x0C) /* cCondition+0x0C: ? */ = -1;
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = 0;
    *(int *)((char *)this + 0x08) /* cCondition+0x08: ? */ = -1;
    // vftable = Trigger::cCondDisorderedSequence::vftable (0x016A8B54)
    childCount() = -1;
}

// 00C791D0  Trigger::cCondDisorderedSequence::vf04  size=60  [class]
void Trigger::cCondDisorderedSequence::vf04()
{
    using namespace cCondDisorderedSequence_p1;
    for (int i = 0; i < childCount(); i++) {
        if (child(i) != 0) {
            vcall<void>(child(i), 0x04);
        }
        childResult(i) = 0;
    }
    satisfied() = 0;
}

// 00C79210  Trigger::cCondDisorderedSequence::vf08  size=62  [class]
void Trigger::cCondDisorderedSequence::vf08()
{
    using namespace cCondDisorderedSequence_p1;
    for (int i = 0; i < childCount(); i++) {
        if (child(i) != 0) {
            vcall<void>(child(i), 0x08);
            if (child(i) != 0) {
                vcall<void>(child(i), 0x00, 1);  // scalar deleting destructor
            }
        }
    }
}

// 00C792C0  Trigger::cCondDisorderedSequence::vf10  size=171  [class]
void Trigger::cCondDisorderedSequence::vf10()
{
    using namespace cCondDisorderedSequence_p1;
    int i;
    for (i = 0; i < childCount(); i++) {
        if (*(int *)((char *)this + 0x08) /* cCondition+0x08: ? */ == 2 || childResult(i) == 0) {
            vcall<void>(child(i), 0x10);
        }
    }
    for (i = 0; i < childCount(); i++) {
        if (*(int *)((char *)this + 0x08) /* cCondition+0x08: ? */ == 2 || childResult(i) == 0) {
            unsigned int result = vcall<unsigned int>(child(i), 0x14);
            if (negate(i) == 1) {
                result = result ^ 1;
            }
            childResult(i) = result;
        }
    }
    satisfied() = 1;
    for (i = 0; i < childCount(); i++) {
        if (satisfied() == 0) {
            return;
        }
        satisfied() = satisfied() & childResult(i);
    }
}

// 00C79380  Trigger::cCondDisorderedSequence::vf14  size=7  [class]
int Trigger::cCondDisorderedSequence::vf14()
{
    return (int)satisfied();
}

// 00C79390  Trigger::cCondDisorderedSequence::vf20  size=84  [class]
int Trigger::cCondDisorderedSequence::vf20()
{
    using namespace cCondDisorderedSequence_p1;
    int allReset = 1;
    if (0 < childCount()) {
        for (int i = 0; i < childCount(); i++) {
            if (child(i) != 0) {
                childResult(i) = 0;
                if (vcall<int>(child(i), 0x20) == 0) {
                    allReset = 0;
                }
            }
        }
        if (allReset != 1) {
            return allReset;
        }
    }
    satisfied() = 0;
    return 1;
}

// 00C84D30  Trigger::cCondDisorderedSequence::vf00  size=31  [class]
Trigger::cCondDisorderedSequence *Trigger::cCondDisorderedSequence::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
