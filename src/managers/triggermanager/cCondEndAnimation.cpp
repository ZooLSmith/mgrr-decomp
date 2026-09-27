// src/managers/triggermanager/cCondEndAnimation.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEndAnimation.h"

extern int *PTR_DAT_018ab998;  // trigger heap
extern undefined DAT_0165bfbc; // format string for the motion id (probably "%04x")

namespace cCondEndAnimation_p1 {

// call a function as __cdecl with exactly the arguments the raw call shows
// (used for the __cdecl callees; __thiscall callees go through thiscall() below)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function with an explicit ECX (`self`), recovered from the machine code
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

} // namespace cCondEndAnimation_p1

// 00C79CB0  Trigger::cCondEndAnimation::vf0C  size=13  [class]
int Trigger::cCondEndAnimation::vf0C()
{
    completed() = 0;
    return 1;
}

// 00C79CC0  Trigger::cCondEndAnimation::vf1C  size=22  [class]
void Trigger::cCondEndAnimation::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    animRecord() = (int)record + 8;
    motionId() = record[6];  // record+0x18
}

// 00C84FA0  Trigger::cCondEndAnimation::vf04  size=17  [class]
void Trigger::cCondEndAnimation::vf04()
{
    using namespace cCondEndAnimation_p1;
    thiscall<void>(FUN_00c82dd0, &field18(), 0x10, PTR_DAT_018ab998);  // ECX = this + 0x18
}

// 00C84FC0  Trigger::cCondEndAnimation::vf14  size=213  [class]
int Trigger::cCondEndAnimation::vf14()
{
    using namespace cCondEndAnimation_p1;
    char motionName[8];

    if (completed() != 0) {
        return 1;
    }
    if (entryCount() == 0) {
        return 0;
    }
    for (int i = 0; i < entryCount(); i++) {
        int entry = FUN_00a81330((uint *)&entries()[i * 2]);  // __fastcall: ECX = &entries[i]
        if (entry == 0) {
            continue;
        }
        int unit = FUN_00a7c890(entry);  // __fastcall: ECX = entry
        if (unit == 0) {
            continue;
        }
        cdeclcall<void>(FUN_00c83b60, motionName, &DAT_0165bfbc, motionId());
        int motion = thiscall<int>(FUN_00e33270, (char *)unit + 0xf4, motionName);  // ECX = unit + 0xF4
        if (entries()[i * 2 + 1] == 0) {
            // not seen playing yet: remember once the motion is playing
            if (motion != -1) {
                if (thiscall<int>(FUN_0085be10, (void *)unit, motion) == 0) {  // ECX = unit
                    entries()[i * 2 + 1] = 1;
                }
            }
        }
        else {
            // was playing: done once the motion is gone or FUN_0085be10 reports non-zero
            if (motion == -1 || thiscall<int>(FUN_0085be10, (void *)unit, motion) != 0) {  // ECX = unit
                completed() = 1;
                return 1;
            }
        }
    }
    return 0;
}

// 00C915E0  Trigger::cCondEndAnimation::vf08  size=43  [class]
void Trigger::cCondEndAnimation::vf08()
{
    if (entries() != 0) {
        entryCount() = 0;
        if (ownsEntries() != 0) {
            FUN_00dd48d0((int)entries(), 0);
            ownsEntries() = 0;
        }
        entries() = 0;
        entryCapacity() = 0;
    }
}

// 00C96190  Trigger::cCondEndAnimation::cCondEndAnimation  size=41  [class]
Trigger::cCondEndAnimation::cCondEndAnimation()
{
    // inlined Trigger::cCondition constructor
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = 0;
    // vftable = Trigger::cCondEndAnimation::vftable (0x016B0D60)
    *(int *)((char *)this + 0x0C) /* cCondition+0x0C: ? */ = -1;
    *(int *)((char *)this + 0x08) /* cCondition+0x08: ? */ = -1;
    field18() = 0;
    entries() = 0;
    entryCapacity() = 0;
    entryCount() = 0;
    ownsEntries() = 0;
    completed() = 0;
}

// 00C9C900  Trigger::cCondEndAnimation::vf00  size=75  [class]
Trigger::cCondEndAnimation *Trigger::cCondEndAnimation::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondEndAnimation::vftable (0x016B0D60)
    // inlined destructor (same as 00C961C0): release the entry array
    if (entries() != 0) {
        entryCount() = 0;
        if (ownsEntries() != 0) {
            FUN_00dd48d0((int)entries(), 0);
            ownsEntries() = 0;
        }
        entries() = 0;
        entryCapacity() = 0;
    }
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C9C950  Trigger::cCondEndAnimation::vf10  size=12  [class]
void Trigger::cCondEndAnimation::vf10()
{
    using namespace cCondEndAnimation_p1;
    if (entryCount() == 0) {
        FUN_00c96200((int)this);  // __fastcall: ECX = this (tail call)
        return;
    }
}
