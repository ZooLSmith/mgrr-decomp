// src/managers/tutorialmanager/TutorialManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "TutorialManager.h"

extern undefined4 _DAT_01d61380;  // global TutorialManager instance (its vftable pointer)

namespace TutorialManager_p1 {

// FUN_00e03ea0: hash of a name (the generated prototype returns void)
inline int nameHash(char *name) { return ((int (*)(char *))FUN_00e03ea0)(name); }

}  // namespace TutorialManager_p1

// 00C1C450  TutorialManager::TutorialManager  size=134  [class]
TutorialManager::TutorialManager()
{
    using namespace TutorialManager_p1;
    // vftable = TutorialManager::vftable (0x016A3860)
    field04() = -1;
    field08() = 1;
    field0C() = 0;
    field10() = 0;
    field14() = 0;
    field18() = 0;
    field1C() = 0;
    int i = 0;
    int *hash = tutorialHashes();
    do {
        char name[16] = {};
        _sprintf_s(name, 0x10, (char *)"tutr_b_%04d", i);
        *hash = nameHash(name);
        i = i + 1;
        hash = hash + 1;
    } while (i < 200);
}

// 00C2DB10  TutorialManager::vf00  size=31  [class]
TutorialManager *TutorialManager::vf00(unsigned char flags)
{
    // vftable = TutorialManager::vftable (0x016A3860)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 015EE900  TutorialManager::TutorialManager_2  size=11  [class]
void TutorialManager::destroyGlobalInstance()
{
    _DAT_01d61380 = 0x016A3860;  // vftable of the global instance = TutorialManager::vftable
}
