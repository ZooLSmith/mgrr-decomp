// src/managers/triggermanager/cActEmMsgDirectByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEmMsgDirectByNumber.h"

extern undefined DAT_01dbe218;           // cActEmMsgDirectByNumber static descriptor returned by vf00
extern undefined DAT_01bebe78;           // ECX of FUN_00c15c50 (message-name table owner)

namespace cActEmMsgDirectByNumber_p1 {

// FUN_00c15c50 (__thiscall, ECX = &DAT_01bebe78 in the machine code): message id for a message
// name (hash looked up in a 0x24-entry table), -1 if unknown.
inline int messageIdFromName(char *name)
{
    return ((int (__thiscall *)(void *, char *))FUN_00c15c50)(&DAT_01bebe78, name);
}

} // namespace cActEmMsgDirectByNumber_p1

// 00C80B80  Trigger::cActEmMsgDirectByNumber::vf10  size=42  [class]
void Trigger::cActEmMsgDirectByNumber::vf10()
{
    using namespace cActEmMsgDirectByNumber_p1;
    int *rec = record();
    if (rec != 0) {
        messageId() = messageIdFromName((char *)(rec + 2));   // name at record+0x08
        if (rec[0] == 0x38) {                                 // record size: has the optional parameter
            messageParam() = rec[0xd];                        // record+0x34
        }
    }
}

// 00C8DBD0  Trigger::cActEmMsgDirectByNumber::vf08  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf08()
{
}

// 00C8DBE0  Trigger::cActEmMsgDirectByNumber::vf0C  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf0C()
{
}

// 00C8DC00  Trigger::cActEmMsgDirectByNumber::vf14  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf14()
{
}

// 00C93DF0  Trigger::cActEmMsgDirectByNumber::vf00  size=6  [class]
void *Trigger::cActEmMsgDirectByNumber::vf00()
{
    return &DAT_01dbe218;
}

// 00C93E00  Trigger::cActEmMsgDirectByNumber::vf04  size=31  [class]
Trigger::cActEmMsgDirectByNumber *Trigger::cActEmMsgDirectByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
