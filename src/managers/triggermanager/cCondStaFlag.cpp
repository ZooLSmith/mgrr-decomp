// src/managers/triggermanager/cCondStaFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondStaFlag.h"

extern char *PTR_s_STA_SCENARIO_018abb58[];  // flag table, 8-byte entries: { name, bit number }

namespace cCondStaFlag_p1 {

// FUN_00e03ea0: hash of a name (the generated prototype returns void)
inline int nameHash(char *name) { return ((int (*)(char *))FUN_00e03ea0)(name); }

}  // namespace cCondStaFlag_p1

// 00C7C920  Trigger::cCondStaFlag::vf1C  size=58  [class]
void Trigger::cCondStaFlag::vf1C(int *record)
{
    using namespace cCondStaFlag_p1;
    this->record() = record;
    unsigned int index = 0;
    do {
        int hash = nameHash(PTR_s_STA_SCENARIO_018abb58[index * 2]);
        if (record[2] == hash) {  // record+0x08: flag name hash
            flagIndex() = index;
            return;
        }
        index = index + 1;
    } while (index < 0x19);
}

// 00C86520  Trigger::cCondStaFlag::vf00  size=31  [class]
Trigger::cCondStaFlag *Trigger::cCondStaFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
