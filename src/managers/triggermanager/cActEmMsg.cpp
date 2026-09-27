// src/managers/triggermanager/cActEmMsg.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEmMsg.h"

extern undefined DAT_01dbe0e8;           // cActEmMsg static descriptor returned by vf00
extern undefined DAT_01bebe78;           // ECX of FUN_00c15c50 (message-name table owner)

namespace cActEmMsg_p1 {

// FUN_00c15c50 (__thiscall, ECX = &DAT_01bebe78 in the machine code): message id for a message
// name (hash looked up in a 0x24-entry table), -1 if unknown.
inline int messageIdFromName(char *name)
{
    return ((int (__thiscall *)(void *, char *))FUN_00c15c50)(&DAT_01bebe78, name);
}

} // namespace cActEmMsg_p1

// 00C7F230  Trigger::cActEmMsg::vf10  size=29  [class]
void Trigger::cActEmMsg::vf10()
{
    using namespace cActEmMsg_p1;
    if (record() != 0) {
        messageId() = messageIdFromName((char *)record() + 8);
    }
}

// 00C8AC30  Trigger::cActEmMsg::vf08  size=1  [class]
void Trigger::cActEmMsg::vf08()
{
}

// 00C8AC40  Trigger::cActEmMsg::vf0C  size=1  [class]
void Trigger::cActEmMsg::vf0C()
{
}

// 00C8AC60  Trigger::cActEmMsg::vf14  size=1  [class]
void Trigger::cActEmMsg::vf14()
{
}

// 00C92400  Trigger::cActEmMsg::vf00  size=6  [class]
void *Trigger::cActEmMsg::vf00()
{
    return &DAT_01dbe0e8;
}

// 00C92410  Trigger::cActEmMsg::vf04  size=31  [class]
Trigger::cActEmMsg *Trigger::cActEmMsg::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
