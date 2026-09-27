// src/managers/triggermanager/cCondChainBreak.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondChainBreak.h"

extern undefined4 DAT_01d5bae0;

namespace cCondChainBreak_p1 {

// __thiscall call of a function with an explicit ECX (`self`)
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

} // namespace cCondChainBreak_p1

// 00C7AB40  Trigger::cCondChainBreak::vf14  size=24  [class]
bool Trigger::cCondChainBreak::vf14()
{
    using namespace cCondChainBreak_p1;
    char broken = thiscall<char>(FUN_00c1ace0, &DAT_01d5bae0, chainId());  // ECX = &DAT_01d5bae0
    return broken != '\0';
}

// 00C7AB60  Trigger::cCondChainBreak::vf1C  size=16  [class]
void Trigger::cCondChainBreak::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    chainId() = record[2];  // record+0x08
}

// 00C85990  Trigger::cCondChainBreak::vf00  size=31  [class]
Trigger::cCondChainBreak *Trigger::cCondChainBreak::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
