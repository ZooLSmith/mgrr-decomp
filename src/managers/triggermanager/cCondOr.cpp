// src/managers/triggermanager/cCondOr.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondOr.h"

namespace cCondOr_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline void *vslot(const void *object, int offset)
{
    return *(void **)(*(char **)object + offset);
}

// no-argument virtual call on a child condition
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

}  // namespace cCondOr_p1

// 00C79600  Trigger::cCondOr::vf04  size=48  [class]
void Trigger::cCondOr::vf04()
{
    using namespace cCondOr_p1;
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

// 00C79630  Trigger::cCondOr::vf08  size=62  [class]
// vf08 on every child, then its scalar deleting destructor (vf00) with flag 1.
void Trigger::cCondOr::vf08()
{
    using namespace cCondOr_p1;
    int i = 0;
    if (0 < childCount()) {
        int **child = children();
        do {
            if (*child != 0) {
                callVoid(*child, 0x8);
                if (*child != 0) {
                    ((void *(__thiscall *)(int *, unsigned int))vslot(*child, 0x0))(*child, 1);
                }
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
    }
}

// 00C796E0  Trigger::cCondOr::vf10  size=43  [class]
void Trigger::cCondOr::vf10()
{
    using namespace cCondOr_p1;
    int i = 0;
    if (0 < childCount()) {
        int **child = children();
        do {
            callVoid(*child, 0x10);
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
    }
}

// 00C79710  Trigger::cCondOr::vf14  size=88  [class]
// Evaluates the children in order (each optionally inverted); the first true child gets last
// result 1 and ends the scan with 1. Children evaluated false before it get last result 0.
int Trigger::cCondOr::vf14()
{
    using namespace cCondOr_p1;
    int i = 0;
    if (0 < childCount()) {
        int **child = children();
        do {
            unsigned int value = (unsigned int)callInt(*child, 0x14);
            if (inverted()[i] == 1) {
                value = value ^ 1;
            }
            if (value == 1) {
                lastResult(children()[i]) = 1;
                return 1;
            }
            i = i + 1;
            lastResult(*child) = 0;
            child = child + 1;
        } while (i < childCount());
    }
    return 0;
}

// 00C79770  Trigger::cCondOr::vf20  size=63  [class]
int Trigger::cCondOr::vf20()
{
    using namespace cCondOr_p1;
    int i = 0;
    int allDone = 1;
    if (0 < childCount()) {
        int **child = children();
        do {
            if (*child != 0 && callInt(*child, 0x20) == 0) {
                allDone = 0;
            }
            i = i + 1;
            child = child + 1;
        } while (i < childCount());
    }
    return allDone;
}

// 00C84D70  Trigger::cCondOr::vf00  size=31  [class]
Trigger::cCondOr *Trigger::cCondOr::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
