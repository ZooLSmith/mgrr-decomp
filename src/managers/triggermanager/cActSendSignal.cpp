// src/managers/triggermanager/cActSendSignal.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSendSignal.h"

extern undefined DAT_01dbe478;  // cActSendSignal static descriptor returned by vf00
// signal table: 5 {name, value} pairs; names ON_SHOW_RADARMAP, ON_PLACEMENT_FREEOBJECTIVE,
// ON_REPLACEMENT_FREEOBJECTIVE, ON_PLACEMENT_FREEOBJECTIVE_FROMLAYER, ON_REPLACEMENT_FREEOBJECTIVE_FROMLAYER
extern char *PTR_s_ON_SHOW_RADARMAP_018abcd0;

namespace cActSendSignal_p1 {

// FUN_00e03ea0 (functions.h declares it void): hash of a name string. ?
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActSendSignal_p1

// 00C800D0  Trigger::cActSendSignal::vf08  size=54  [class]
void Trigger::cActSendSignal::vf08()
{
    using namespace cActSendSignal_p1;
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

// 00C8C7D0  Trigger::cActSendSignal::vf00  size=6  [class]
void *Trigger::cActSendSignal::vf00()
{
    return &DAT_01dbe478;
}

// 00C8C7F0  Trigger::cActSendSignal::vf0C  size=1  [class]
void Trigger::cActSendSignal::vf0C()
{
}

// 00C8C800  Trigger::cActSendSignal::vf10  size=1  [class]
void Trigger::cActSendSignal::vf10()
{
}

// 00C8C810  Trigger::cActSendSignal::vf14  size=1  [class]
void Trigger::cActSendSignal::vf14()
{
}

// 00C93580  Trigger::cActSendSignal::vf04  size=31  [class]
Trigger::cActSendSignal *Trigger::cActSendSignal::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
