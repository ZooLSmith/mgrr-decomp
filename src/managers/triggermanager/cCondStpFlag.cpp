// src/managers/triggermanager/cCondStpFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondStpFlag.h"

extern char *PTR_s_STP_OBJ_018abc20[];  // flag table, 8-byte entries: { name, bit number }

namespace cCondStpFlag_p1 {

// FUN_00e03ea0: hash of a name (the generated prototype returns void)
inline int nameHash(char *name) { return ((int (*)(char *))FUN_00e03ea0)(name); }

}  // namespace cCondStpFlag_p1

// 00C7CA90  Trigger::cCondStpFlag::vf1C  size=58  [class]
void Trigger::cCondStpFlag::vf1C(int *record)
{
    using namespace cCondStpFlag_p1;
    this->record() = record;
    unsigned int index = 0;
    do {
        int hash = nameHash(PTR_s_STP_OBJ_018abc20[index * 2]);
        if (record[2] == hash) {  // record+0x08: flag name hash
            flagIndex() = index;
            return;
        }
        index = index + 1;
    } while (index < 0x16);
}

// 00C86560  Trigger::cCondStpFlag::vf00  size=31  [class]
Trigger::cCondStpFlag *Trigger::cCondStpFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
