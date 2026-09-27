// src/managers/triggermanager/cCondAreaPlCamOut.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondAreaPlCamOut.h"

extern undefined4 DAT_01bea380;  // 16-byte value (4 dwords) copied onto the stack by vf14
extern undefined4 DAT_01bea384;
extern undefined4 DAT_01bea388;
extern undefined4 DAT_01bea38c;

namespace cCondAreaPlCamOut_p1 {

// __thiscall call of virtual slot `slot` (byte offset) of `self`
template <class R, class... A> inline R vcall(void *self, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(void *, A...);
    return ((Fn)(*(void ***)self)[slot / 4])(self, args...);
}

} // namespace cCondAreaPlCamOut_p1

// 00C7E670  Trigger::cCondAreaPlCamOut::vf10  size=1  [class]
void Trigger::cCondAreaPlCamOut::vf10()
{
}

// 00C7E680  Trigger::cCondAreaPlCamOut::vf14  size=132  [class]
int Trigger::cCondAreaPlCamOut::vf14()
{
    using namespace cCondAreaPlCamOut_p1;
    undefined4 areaValue[4];

    areaValue[0] = DAT_01bea380;
    areaValue[1] = DAT_01bea384;
    areaValue[2] = DAT_01bea388;
    areaValue[3] = DAT_01bea38c;
    int *areaQuery = (int *)FUN_00a6e640();
    int firstHit = vcall<int>(areaQuery, 0x2c, areaValue, areaId(), 1);
    areaQuery = (int *)FUN_00a6e640();
    int secondHit = vcall<int>(areaQuery, 0x2c, areaValue, areaId(), 2);  // same buffer as the first call (raw "&stack0xffffffd4" is a Ghidra stack-depth artefact; asm: lea ecx,[esp+0x18] -> same slot)
    if (firstHit == 0 && secondHit == 0) {
        return 1;
    }
    return 0;
}

// 00C7E710  Trigger::cCondAreaPlCamOut::vf1C  size=18  [class]
void Trigger::cCondAreaPlCamOut::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    areaId() = *(unsigned short *)((char *)record + 8);
}

// 00C86D90  Trigger::cCondAreaPlCamOut::vf00  size=31  [class]
Trigger::cCondAreaPlCamOut *Trigger::cCondAreaPlCamOut::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
