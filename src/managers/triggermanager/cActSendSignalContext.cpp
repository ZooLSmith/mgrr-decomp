// src/managers/triggermanager/cActSendSignalContext.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSendSignalContext.h"

extern undefined DAT_01dbe474;  // cActSendSignalContext static descriptor returned by vf00
// signal table: 5 {name, value} pairs; names ON_SHOW_RADARMAP, ON_PLACEMENT_FREEOBJECTIVE,
// ON_REPLACEMENT_FREEOBJECTIVE, ON_PLACEMENT_FREEOBJECTIVE_FROMLAYER, ON_REPLACEMENT_FREEOBJECTIVE_FROMLAYER
extern char *PTR_s_ON_SHOW_RADARMAP_018abcd0;

namespace cActSendSignalContext_p1 {

// FUN_00e03ea0 (functions.h declares it void): hash of a name string. ?
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActSendSignalContext_p1

// 00C80160  Trigger::cActSendSignalContext::vf08  size=54  [class]
void Trigger::cActSendSignalContext::vf08()
{
    using namespace cActSendSignalContext_p1;
    int *data = record();
    if (data != 0) {
        unsigned int index = 0;
        while (true) {
            int hash = nameHash((&PTR_s_ON_SHOW_RADARMAP_018abcd0)[index * 2]);
            if (data[2] == hash) break;
            index = index + 1;
            if (4 < index) {
                return;
            }
        }
        signalIndex() = index;
    }
}

// 00C8C870  Trigger::cActSendSignalContext::vf00  size=6  [class]
void *Trigger::cActSendSignalContext::vf00()
{
    return &DAT_01dbe474;
}

// 00C8C890  Trigger::cActSendSignalContext::vf0C  size=1  [class]
void Trigger::cActSendSignalContext::vf0C()
{
}

// 00C8C8A0  Trigger::cActSendSignalContext::vf10  size=1  [class]
void Trigger::cActSendSignalContext::vf10()
{
}

// 00C8C8B0  Trigger::cActSendSignalContext::vf14  size=1  [class]
void Trigger::cActSendSignalContext::vf14()
{
}

// 00C935C0  Trigger::cActSendSignalContext::vf04  size=31  [class]
Trigger::cActSendSignalContext *Trigger::cActSendSignalContext::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
