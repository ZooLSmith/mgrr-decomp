// src/managers/triggermanager/cActEmMsgDirect.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEmMsgDirect.h"

extern undefined DAT_01dbe0f0;           // cActEmMsgDirect static descriptor returned by vf00
extern undefined DAT_01bebe78;           // ECX of FUN_00c15c50 (message-name table owner)

namespace cActEmMsgDirect_p1 {

// FUN_00c15c50 (__thiscall, ECX = &DAT_01bebe78 in the machine code): message id for a message
// name (hash looked up in a 0x24-entry table), -1 if unknown.
inline int messageIdFromName(char *name)
{
    return ((int (__thiscall *)(void *, char *))FUN_00c15c50)(&DAT_01bebe78, name);
}

// FUN_00e03ea0 (__cdecl): hash of a NUL-terminated name (functions.h declares it void).
inline unsigned int hashName(char *name)
{
    return ((unsigned int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActEmMsgDirect_p1

// 00C7F2F0  Trigger::cActEmMsgDirect::vf10  size=57  [class]
void Trigger::cActEmMsgDirect::vf10()
{
    using namespace cActEmMsgDirect_p1;
    int *rec = record();
    if (rec != 0) {
        messageId() = messageIdFromName((char *)(rec + 2));   // name at record+0x08
        targetNameHash() = hashName((char *)(rec + 10));      // name at record+0x28
        if (rec[0] == 0x3c) {                                 // record size: has the optional parameter
            messageParam() = rec[0xe];                        // record+0x38
        }
    }
}

// 00C8AD70  Trigger::cActEmMsgDirect::vf08  size=1  [class]
void Trigger::cActEmMsgDirect::vf08()
{
}

// 00C8AD80  Trigger::cActEmMsgDirect::vf0C  size=1  [class]
void Trigger::cActEmMsgDirect::vf0C()
{
}

// 00C8ADA0  Trigger::cActEmMsgDirect::vf14  size=1  [class]
void Trigger::cActEmMsgDirect::vf14()
{
}

// 00C92490  Trigger::cActEmMsgDirect::vf00  size=6  [class]
void *Trigger::cActEmMsgDirect::vf00()
{
    return &DAT_01dbe0f0;
}

// 00C924A0  Trigger::cActEmMsgDirect::vf04  size=31  [class]
Trigger::cActEmMsgDirect *Trigger::cActEmMsgDirect::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
