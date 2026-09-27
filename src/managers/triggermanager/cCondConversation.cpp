// src/managers/triggermanager/cCondConversation.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondConversation.h"

// 00C7ADD0  Trigger::cCondConversation::vf0C  size=6  [class]
int Trigger::cCondConversation::vf0C()
{
    return 1;
}

// 00C7ADE0  Trigger::cCondConversation::vf14  size=3  [class]
int Trigger::cCondConversation::vf14()
{
    return 0;
}

// 00C7ADF0  Trigger::cCondConversation::vf1C  size=10  [class]
void Trigger::cCondConversation::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
}

// 00C85AD0  Trigger::cCondConversation::vf00  size=31  [class]
Trigger::cCondConversation *Trigger::cCondConversation::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
