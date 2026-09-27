// src/managers/triggermanager/cActConversationEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActConversationEnd.h"

extern undefined DAT_01dbe134;           // cActConversationEnd static descriptor returned by vf00

// 00C8B810  Trigger::cActConversationEnd::vf08  size=1  [class]
void Trigger::cActConversationEnd::vf08()
{
}

// 00C8B820  Trigger::cActConversationEnd::vf0C  size=1  [class]
void Trigger::cActConversationEnd::vf0C()
{
}

// 00C8B830  Trigger::cActConversationEnd::vf10  size=1  [class]
void Trigger::cActConversationEnd::vf10()
{
}

// 00C8B840  Trigger::cActConversationEnd::vf14  size=1  [class]
void Trigger::cActConversationEnd::vf14()
{
}

// 00C92BC0  Trigger::cActConversationEnd::vf00  size=6  [class]
void *Trigger::cActConversationEnd::vf00()
{
    return &DAT_01dbe134;
}

// 00C92BD0  Trigger::cActConversationEnd::vf04  size=31  [class]
Trigger::cActConversationEnd *Trigger::cActConversationEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
