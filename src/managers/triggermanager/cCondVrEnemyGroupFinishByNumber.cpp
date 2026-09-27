// src/managers/triggermanager/cCondVrEnemyGroupFinishByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondVrEnemyGroupFinishByNumber.h"

extern unsigned int DAT_01bea060;  // game state flags
extern undefined DAT_01c78cb0;     // enemy manager (ECX of FUN_00c18c10 / FUN_00c18d20)

// 00C7D7B0  Trigger::cCondVrEnemyGroupFinishByNumber::cCondVrEnemyGroupFinishByNumber  size=32  [class]
Trigger::cCondVrEnemyGroupFinishByNumber::cCondVrEnemyGroupFinishByNumber()
{
    satisfied() = -1;
    record() = 0;
    field08() = -1;
    // vftable = Trigger::cCondVrEnemyGroupFinishByNumber::vftable (0x016AA1F0)
    setNo() = 0;
    groupNo() = 0;
    finishState() = 0;
}

// 00C7D7E0  Trigger::cCondVrEnemyGroupFinishByNumber::vf10  size=1  [class]
void Trigger::cCondVrEnemyGroupFinishByNumber::vf10()
{
}

// 00C7D7F0  Trigger::cCondVrEnemyGroupFinishByNumber::vf14  size=104  [class]
int Trigger::cCondVrEnemyGroupFinishByNumber::vf14()
{
    if ((DAT_01bea060 & 0x400) == 0) {
        int active = ((int (*)(void))FUN_0095c170)();
        if (active != 0) {
            if (finishState() == 0) {
                int groupState = ((int (__thiscall *)(void *, int, int))FUN_00c18c10)(&DAT_01c78cb0, setNo(), groupNo());
                if (groupState == 1) {
                    finishState() = ((int (__thiscall *)(void *, int, int))FUN_00c18d20)(&DAT_01c78cb0, setNo(), groupNo());
                }
            }
            bool finished = finishState() == 1;
            if (finished) {
                finishState() = 0;
            }
            return finished;  // ? bool (AL) in the binary
        }
    }
    return false;
}

// 00C7D860  Trigger::cCondVrEnemyGroupFinishByNumber::vf1C  size=22  [class]
void Trigger::cCondVrEnemyGroupFinishByNumber::vf1C(int *record)
{
    this->record() = record;
    setNo() = record[2];    // record+0x08
    groupNo() = record[3];  // record+0x0C
}

// 00C7D880  Trigger::cCondVrEnemyGroupFinishByNumber::vf20  size=13  [class]
int Trigger::cCondVrEnemyGroupFinishByNumber::vf20()
{
    finishState() = 0;
    return 1;
}

// 00C86A50  Trigger::cCondVrEnemyGroupFinishByNumber::vf00  size=31  [class]
Trigger::cCondVrEnemyGroupFinishByNumber *Trigger::cCondVrEnemyGroupFinishByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
