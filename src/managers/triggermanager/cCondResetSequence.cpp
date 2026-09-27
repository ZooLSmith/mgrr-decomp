// src/managers/triggermanager/cCondResetSequence.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondResetSequence.h"

extern unsigned char DAT_016a8b24[];  // "Trigger::Cond::SEQ: condition #%d is NULL" (Shift-JIS)
extern unsigned char DAT_016a8af4[];  // "Trigger::Cond::SEQ: failed to initialise condition #%d" (Shift-JIS)

namespace cCondResetSequence_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline void *vslot(const void *object, int offset)
{
    return *(void **)(*(char **)object + offset);
}

// no-argument virtual calls on a child condition
inline void callVoid(int *child, int offset)
{
    ((void (__thiscall *)(int *))vslot(child, offset))(child);
}
inline int callInt(int *child, int offset)
{
    return ((int (__thiscall *)(int *))vslot(child, offset))(child);
}

// child condition's cCondition+0x0C (last result)
inline int &lastResult(int *child)
{
    return *(int *)((char *)child + 0xC);
}

// cCondition+0x08 of this condition (2 = every child is updated each frame)
inline int conditionMode(void *self)
{
    return *(int *)((char *)self + 0x8);
}

// FUN_00dd5650: printf-style debug report (functions.h declares it void(void); empty in release)
inline void debugPrint(const void *format, int value)
{
    ((void (*)(const void *, ...))FUN_00dd5650)(format, value);
}

}  // namespace cCondResetSequence_p1

// 00C7D950  Trigger::cCondResetSequence::cCondResetSequence  size=60  [class]
Trigger::cCondResetSequence::cCondResetSequence()
{
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    step() = 0;
    childCount() = 0;
    result() = 0;
    *(int *)((char *)this + 0x0C) = -1;  // cCondition+0x0C: last result
    *(int *)((char *)this + 0x08) = -1;  // cCondition+0x08: mode
    // vftable = Trigger::cCondResetSequence::vftable (0x016AA268)
    _memset(children(), 0, 0x3c);
}

// 00C7D9A0  Trigger::cCondResetSequence::vf04  size=48  [class]
void Trigger::cCondResetSequence::vf04()
{
    using namespace cCondResetSequence_p1;
    int i = 0;
    if (0 < childCount()) {
        int **child = children();
        do {
            if (*child != 0) {
                callVoid(*child, 0x4);
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
    }
}

// 00C7D9D0  Trigger::cCondResetSequence::vf08  size=67  [class]
// vf08 on every child, then its scalar deleting destructor (vf00) with flag 1; the slot is cleared.
void Trigger::cCondResetSequence::vf08()
{
    using namespace cCondResetSequence_p1;
    int i = 0;
    if (0 < childCount()) {
        int **child = children();
        do {
            if (*child != 0) {
                callVoid(*child, 0x8);
                if (*child != 0) {
                    ((void *(__thiscall *)(int *, unsigned int))vslot(*child, 0x0))(*child, 1);
                    *child = 0;
                }
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
    }
}

// 00C7DA20  Trigger::cCondResetSequence::vf0C  size=1  [class]
// Resets the sequence and initialises (vf0C) the first child; 0 with a debug report on failure.
int Trigger::cCondResetSequence::vf0C()
{
    using namespace cCondResetSequence_p1;
    result() = 0;
    step() = 0;
    if (0 < childCount()) {
        if (children()[0] == 0) {
            debugPrint(DAT_016a8b24, 1);
            return 0;
        }
        int ok = callInt(children()[0], 0xC);
        if (ok == 0) {
            debugPrint(DAT_016a8af4, step() + 1);
            return 0;
        }
    }
    return 1;
}

// 00C7DA80  Trigger::cCondResetSequence::vf10  size=397  [class]
// Updates the children (all of them in mode 2, otherwise only the current step), then walks them
// in order: every child that is true (after optional inversion) gets last result 1 and, when it is
// the current step, advances the step (initialising and updating the next child). The first false
// child stops the walk; when it lies before the current step the whole sequence is reset.
// Completing every step sets the result to 1 and the step to -1.
void Trigger::cCondResetSequence::vf10()
{
    using namespace cCondResetSequence_p1;
    if (conditionMode(this) == 2) {
        step() = 0;
        if (0 < childCount()) {
            int **child = children();
            int i = 0;
            do {
                if (*child != 0) {
                    callVoid(*child, 0x10);
                }
                i = i + 1;
                child = child + 1;
            } while (i < childCount());
        }
    }
    else {
        int current = step();
        if (current < 0) {
            return;
        }
        if (current < childCount() && children()[current] != 0) {
            callVoid(children()[current], 0x10);
        }
    }
    int i = 0;
    if (0 < childCount()) {
        int **child = children();
        int *invert = inverted();
        do {
            if (children()[step()] == 0) break;
            unsigned int value = (unsigned int)callInt(*child, 0x14);
            if (*invert == 1) {
                value = value ^ 1;
            }
            if (value != 1) {
                if (i != step()) {
                    int j = 0;
                    if (0 < childCount()) {
                        int **resetChild = children();
                        do {
                            j = j + 1;
                            lastResult(*resetChild) = 0;
                            resetChild = resetChild + 1;
                        } while (j < childCount());
                    }
                    step() = 0;
                    if (conditionMode(this) != 2) {
                        callInt(children()[0], 0xC);
                    }
                }
                break;
            }
            lastResult(*child) = 1;
            invert = invert + 1;
            if (i == step()) {
                int next = step() + 1;
                step() = next;
                if (next < childCount() && children()[next] != 0) {
                    if (conditionMode(this) != 2) {
                        callInt(children()[next], 0xC);
                    }
                    callVoid(children()[step()], 0x10);
                }
            }
            child = child + 1;
            i = i + 1;
        } while (i < childCount());
    }
    if (step() < childCount()) {
        result() = 0;
        return;
    }
    if (children()[0] != 0) {
        callInt(children()[0], 0xC);
    }
    step() = -1;
    result() = 1;
}

// 00C7DC10  Trigger::cCondResetSequence::vf14  size=7  [class]
int Trigger::cCondResetSequence::vf14()
{
    return result();
}

// 00C7DC20  Trigger::cCondResetSequence::vf20  size=87  [class]
int Trigger::cCondResetSequence::vf20()
{
    using namespace cCondResetSequence_p1;
    int i = 0;
    int allDone = 1;
    if (0 < childCount()) {
        int **child = children();
        do {
            if (*child != 0) {
                int done = callInt(*child, 0x20);
                if (done == 0) {
                    allDone = 0;
                }
                lastResult(*child) = 0;
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
        if (allDone != 1) {
            return allDone;
        }
    }
    step() = 0;
    return 1;
}

// 00C86AB0  Trigger::cCondResetSequence::vf00  size=31  [class]
Trigger::cCondResetSequence *Trigger::cCondResetSequence::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
