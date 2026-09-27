// src/managers/triggermanager/cCondIsNowBattle.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsNowBattle.h"

namespace cCondIsNowBattle_p1 {

// ECX of FUN_00c1bd80 (object at 0x01D60B68; the raw decompilation dropped it)
unsigned int *const kBattleState = (unsigned int *)0x01D60B68;

}  // namespace cCondIsNowBattle_p1

// 00C7CDB0  Trigger::cCondIsNowBattle::vf10  size=1  [class]
void Trigger::cCondIsNowBattle::vf10()
{
}

// 00C7CDC0  Trigger::cCondIsNowBattle::vf14  size=10  [class]
// Tail call: the raw decompilation typed this void; FUN_00c1bd80's result is returned.
int Trigger::cCondIsNowBattle::vf14()
{
    using namespace cCondIsNowBattle_p1;
    return FUN_00c1bd80(kBattleState);
}

// 00C7CDD0  Trigger::cCondIsNowBattle::vf1C  size=10  [class]
void Trigger::cCondIsNowBattle::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C86600  Trigger::cCondIsNowBattle::vf00  size=31  [class]
Trigger::cCondIsNowBattle *Trigger::cCondIsNowBattle::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
