// src/managers/triggermanager/cCondTimeSta.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondTimeSta.h"

extern char *PTR_s_STA_SCENARIO_018abb58[];  // STA flag table, 8-byte entries: { name, bit number }

namespace cCondTimeSta_p1 {

// FUN_00e03ea0: hash of a name (the generated prototype returns void)
inline int nameHash(char *name) { return ((int (*)(char *))FUN_00e03ea0)(name); }

}  // namespace cCondTimeSta_p1

// 00C7D080  Trigger::cCondTimeSta::vf0C  size=39  [class]
int Trigger::cCondTimeSta::vf0C()
{
    if (time() != -1.0) {
        time() = (float)(time() + 1.0);
        return 1;
    }
    return 0;
}

// 00C7D170  Trigger::cCondTimeSta::vf1C  size=117  [class]
void Trigger::cCondTimeSta::vf1C(int *record)
{
    using namespace cCondTimeSta_p1;
    this->record() = record;
    flagIndices()[0] = -1;
    flagIndices()[1] = -1;
    flagIndices()[2] = -1;
    flagIndices()[3] = -1;
    flagIndices()[4] = -1;
    flagIndices()[5] = -1;
    flagIndices()[6] = -1;
    flagIndices()[7] = -1;
    int *hash = flagHashes();
    int *source = record + 2;  // record+0x08
    int *dest = hash;
    for (int n = 8; n != 0; n = n - 1) {
        *dest = *source;
        source = source + 1;
        dest = dest + 1;
    }
    *(int *)&time() = record[10];  // record+0x28 (float bits)
    int remaining = 8;
    do {
        if (*hash != -1) {
            unsigned int index = 0;
            do {
                int tableHash = nameHash(PTR_s_STA_SCENARIO_018abb58[index * 2]);
                if (*hash == tableHash) {
                    hash[9] = index;  // the matching flagIndices() entry (+0x24 bytes)
                    break;
                }
                index = index + 1;
            } while (index < 0x19);
        }
        hash = hash + 1;
        remaining = remaining - 1;
        if (remaining == 0) {
            return;
        }
    } while (true);
}

// 00C866C0  Trigger::cCondTimeSta::vf00  size=31  [class]
Trigger::cCondTimeSta *Trigger::cCondTimeSta::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
