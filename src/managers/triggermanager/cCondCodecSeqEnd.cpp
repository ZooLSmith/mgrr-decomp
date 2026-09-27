// src/managers/triggermanager/cCondCodecSeqEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondCodecSeqEnd.h"

namespace cCondCodecSeqEnd_p1 {

// __thiscall call of a function with an explicit ECX (`self`)
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

} // namespace cCondCodecSeqEnd_p1

// 00C7B410  Trigger::cCondCodecSeqEnd::vf14  size=35  [class]
int Trigger::cCondCodecSeqEnd::vf14()
{
    using namespace cCondCodecSeqEnd_p1;
    int ended = 0;
    if (*(int *)((char *)this + 0x04) /* cCondition+0x04: record */ != 0) {
        int *record = *(int **)((char *)this + 0x04);
        // ECX = 0x01B36100 for record type 0x3B, else 0x01B364D0 (lost in the raw decompilation)
        void *codecList = (record[1] == 0x3b) ? (void *)0x01B36100 : (void *)0x01B364D0;
        ended = thiscall<int>(FUN_00937e00, codecList, &codecArg0());
    }
    return ended;
}

// 00C7B440  Trigger::cCondCodecSeqEnd::vf1C  size=34  [class]
void Trigger::cCondCodecSeqEnd::vf1C(int *record)
{
    codecArg0() = record[2];  // record+0x08
    codecArg1() = record[3];  // record+0x0C
    codecArg2() = record[4];  // record+0x10
    codecArg3() = record[5];  // record+0x14
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
}

// 00C85D10  Trigger::cCondCodecSeqEnd::vf00  size=31  [class]
Trigger::cCondCodecSeqEnd *Trigger::cCondCodecSeqEnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
