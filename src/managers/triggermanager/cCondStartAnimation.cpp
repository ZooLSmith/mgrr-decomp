// src/managers/triggermanager/cCondStartAnimation.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondStartAnimation.h"

extern int *PTR_DAT_018ab998;   // trigger heap
extern undefined DAT_0165bfbc;  // format string for the animation lookup key

namespace cCondStartAnimation_p1 {

// field of the trigger record at a byte offset
template <class T> inline T &recordAt(int *record, int offset) { return *(T *)((char *)record + offset); }

// call a __thiscall function (Ghidra dropped the ECX argument in the raw calls)
template <class R, class F, class... A> inline R callThis(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

}  // namespace cCondStartAnimation_p1

// 00C79C90  Trigger::cCondStartAnimation::vf1C  size=22  [class]
void Trigger::cCondStartAnimation::vf1C(int *record)
{
    using namespace cCondStartAnimation_p1;
    this->record() = record;
    animName() = (char *)record + 8;
    animParam() = recordAt<int>(record, 0x18);
}

// 00C84ED0  Trigger::cCondStartAnimation::vf04  size=17  [class]
void Trigger::cCondStartAnimation::vf04()
{
    using namespace cCondStartAnimation_p1;
    // ECX = this+0x18 (the list object at +0x18..+0x28)
    callThis<void>(FUN_008609b0, (char *)this + 0x18, 0x10, PTR_DAT_018ab998);  // ? reserves the list
}

// 00C84EF0  Trigger::cCondStartAnimation::vf14  size=173  [class]
int Trigger::cCondStartAnimation::vf14()
{
    using namespace cCondStartAnimation_p1;
    char key[8];

    if (started() != 0) {
        return 1;
    }
    if (listCount() == 0) {
        return 0;
    }
    if (0 < listCount()) {
        int i = 0;
        do {
            int entry = callThis<int>(FUN_00a81330, (int *)listData() + i);  // ECX = &list[i]
            int object = callThis<int>(FUN_00a7c890, (void *)entry);         // ECX = entry
            if (object != 0) {
                ((void (*)(char *, void *, int))FUN_00c83b60)(key, &DAT_0165bfbc, animParam());
                int animId = callThis<int>(FUN_00e33270, (char *)object + 0xF4, key);  // ECX = object+0xF4
                if (animId != -1 && (*(unsigned int *)(object + 0x94) & 1) != 0 &&
                    (*(unsigned int *)(object + 0x94) & 2) != 0) {
                    int playing = callThis<int>(FUN_0085be10, (void *)object, animId);  // ECX = object
                    if (playing == 0) {
                        started() = 1;
                        return 1;
                    }
                }
            }
            i = i + 1;
        } while (i < listCount());
    }
    return 0;
}

// 00C915B0  Trigger::cCondStartAnimation::vf08  size=43  [class]
void Trigger::cCondStartAnimation::vf08()
{
    if (listData() != 0) {
        listCount() = 0;
        if (listOwned() != 0) {
            FUN_00dd48d0(listData(), 0);
            listOwned() = 0;
        }
        listData() = 0;
        listCapacity() = 0;
    }
}

// 00C96080  Trigger::cCondStartAnimation::cCondStartAnimation  size=41  [class]
Trigger::cCondStartAnimation::cCondStartAnimation()
{
    record() = 0;
    // vftable = Trigger::cCondStartAnimation::vftable (0x016B0D38)
    satisfied() = -1;
    field08() = -1;
    field18() = 0;
    listData() = 0;
    listCapacity() = 0;
    listCount() = 0;
    listOwned() = 0;
    started() = 0;
}

// 00C9C880  Trigger::cCondStartAnimation::vf00  size=75  [class]
Trigger::cCondStartAnimation *Trigger::cCondStartAnimation::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondStartAnimation::vftable (0x016B0D38)
    if (listData() != 0) {
        listCount() = 0;
        if (listOwned() != 0) {
            FUN_00dd48d0(listData(), 0);
            listOwned() = 0;
        }
        listData() = 0;
        listCapacity() = 0;
    }
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C9C8D0  Trigger::cCondStartAnimation::vf0C  size=18  [class]
int Trigger::cCondStartAnimation::vf0C()
{
    started() = 0;
    FUN_00c960f0((int)this);  // ? rebuilds the list (__fastcall, ECX = this)
    return 1;
}

// 00C9C8F0  Trigger::cCondStartAnimation::vf10  size=12  [class]
void Trigger::cCondStartAnimation::vf10()
{
    if (listCount() == 0) {
        FUN_00c960f0((int)this);  // __fastcall, ECX = this (tail jump)
        return;
    }
}
