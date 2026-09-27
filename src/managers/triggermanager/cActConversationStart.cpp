// src/managers/triggermanager/cActConversationStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActConversationStart.h"

extern undefined DAT_01dbe130;           // cActConversationStart static descriptor returned by vf00

// 00C8B770  Trigger::cActConversationStart::vf08  size=1  [class]
void Trigger::cActConversationStart::vf08()
{
}

// 00C8B780  Trigger::cActConversationStart::vf0C  size=1  [class]
void Trigger::cActConversationStart::vf0C()
{
}

// 00C8B790  Trigger::cActConversationStart::vf10  size=1  [class]
void Trigger::cActConversationStart::vf10()
{
}

// 00C8B7A0  Trigger::cActConversationStart::vf14  size=1  [class]
void Trigger::cActConversationStart::vf14()
{
}

// 00C92B80  Trigger::cActConversationStart::vf00  size=6  [class]
void *Trigger::cActConversationStart::vf00()
{
    return &DAT_01dbe130;
}

// 00C92B90  Trigger::cActConversationStart::vf04  size=31  [class]
Trigger::cActConversationStart *Trigger::cActConversationStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
