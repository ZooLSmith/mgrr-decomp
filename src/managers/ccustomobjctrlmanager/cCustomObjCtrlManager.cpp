// src/managers/ccustomobjctrlmanager/cCustomObjCtrlManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCustomObjCtrlManager.h"

// Data referenced by this part
extern int DAT_01dc0730;     // non-zero while the object below exists (checked before use)
extern int DAT_01dc073c;     // object receiving FUN_00cfcb70 (ECX) in the cUnLockDisp / cTitleDisp dtors
extern int DAT_01dc0df4;     // cleared by the cEnergyGaugeWhiteRaiden destructor
extern int DAT_01dc1304;     // cleared by the cRadarMap destructor
extern int DAT_01dc14fc;     // cleared by the cEnergyGaugeWhiteRaiden destructor (instance pointer ?)
extern int DAT_01dc1500;     // cleared by the cRadarMap destructor (instance pointer ?)
extern int DAT_01dc1508;     // cleared by the cCodecRealTimeDispParts destructor (instance pointer ?)
extern void *DAT_01dc14f8;   // cDryCellGauge2 instance (set by its constructor)
extern int DAT_01dc0878;
extern int DAT_01dc087c;
extern float DAT_01dc0884;
extern float DAT_01dc0888;
extern float DAT_01dc088c;
extern int DAT_01dc0890;
extern int DAT_01dc0894;
extern int DAT_01dc08a0;
extern int DAT_01dc08a4;
extern int DAT_01dc08a8;
extern int DAT_01dc08ac;
extern int DAT_01dc08b0;
extern int DAT_01dc08b4;

namespace cCustomObjCtrlManager_p1 {

// cCustomObjCtrlManager::vftable (0x016B71A4); stored explicitly into embedded sub-objects.
const unsigned int kCtrlVftable = 0x016B71A4;

// Field at byte offset `offset` of `obj` (fields of the derived classes that own these functions).
template <class T> inline T &at(void *obj, int offset)
{
    return *(T *)((char *)obj + offset);
}

// Inlined release of the object referenced by `slot`: unless flag bit 0 at +0x24 is already
// set, set it and clear the object's +0x4; then clear the slot.
inline void releaseRef(int &slot)
{
    int obj = slot;
    if (obj != 0) {
        if ((*(unsigned int *)(obj + 0x24) & 1) == 0) {
            *(unsigned int *)(obj + 0x24) = *(unsigned int *)(obj + 0x24) | 1;
            *(int *)(obj + 4) = 0;
        }
        slot = 0;
    }
}

// Any object with a scalar deleting destructor in vftable slot 0.
struct DeletableObject {
    virtual void deletingDestructor(int flags) = 0;
};

// Inlined `delete obj; obj = 0;` for an owned object pointer (virtual slot 0 with flags 1).
inline void deleteOwned(int &slot)
{
    if ((DeletableObject *)slot != 0) {
        ((DeletableObject *)slot)->deletingDestructor(1);
        slot = 0;
    }
}

// Inlined cCustomObjCtrlManager constructor on an embedded 0x1C-byte sub-object.
inline void constructCtrl(void *sub)
{
    at<unsigned int>(sub, 0x00) = kCtrlVftable;
    at<int>(sub, 0x04) = 0;
    at<int>(sub, 0x08) = 0;
    at<int>(sub, 0x0C) = 0;
    at<int>(sub, 0x10) = 1;
    at<int>(sub, 0x14) = 0;
    at<int>(sub, 0x18) = 0;
}

// Inlined cCustomObjCtrlManager destructor on an embedded 0x1C-byte sub-object.
inline void destroyCtrl(void *sub)
{
    at<unsigned int>(sub, 0x00) = kCtrlVftable;
    at<int>(sub, 0x18) = 0;
    releaseRef(at<int>(sub, 0x14));
}

// cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx at 0x00CCE5E0 (ECX = object)
inline void constructCtrlEx(void *obj)
{
    ((void (__thiscall *)(void *))0x00CCE5E0)(obj);
}

// cEspControler::cEspControler at 0x00EAA060 (ECX = object)
inline void constructEspControler(void *obj)
{
    ((void (__thiscall *)(void *))0x00EAA060)(obj);
}

// FUN_00cfcb70 is __thiscall; functions.h lost the ECX argument.
inline void FUN_00cfcb70_this(int self, unsigned int id)
{
    ((void (__thiscall *)(int, unsigned int))0x00CFCB70)(self, id);
}

} // namespace cCustomObjCtrlManager_p1

// 0098E6E0  cCustomObjCtrlManager::create  size=1  [class]
void cCustomObjCtrlManager::create()
{
}

// 00CB21E0  cCustomObjCtrlManager::cCustomObjCtrlManager  size=33  [class]
cCustomObjCtrlManager::cCustomObjCtrlManager()
{
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field04() = 0;
    field08() = 0;
    field0C() = 0;
    field10() = 1;
    ownedObj() = 0;
    field18() = 0;
}

// 00CCDD30  cCustomObjCtrlManager::~cCustomObjCtrlManager  size=48  [class]
cCustomObjCtrlManager::~cCustomObjCtrlManager()
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD0260  cCustomObjCtrlManager::cCustomObjCtrlManager_21  size=111  [class]
void cCustomObjCtrlManager::ctor_00CD0260()  // cActionMessageParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cActionMessageParts::vftable (0x016B7C30)
    releaseRef(at<int>(this, 0x124));  /* cActionMessageParts+0x124 */
    releaseRef(at<int>(this, 0x128));  /* cActionMessageParts+0x128 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD0450  cCustomObjCtrlManager::cCustomObjCtrlManager_22  size=143  [class]
void cCustomObjCtrlManager::ctor_00CD0450()  // cBossWeaponInfoDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cBossWeaponInfoDispParts::vftable (0x016B7C50)
    releaseRef(at<int>(this, 0xB8));  /* cBossWeaponInfoDispParts+0xB8 */
    releaseRef(at<int>(this, 0xBC));  /* cBossWeaponInfoDispParts+0xBC */
    releaseRef(at<int>(this, 0xB4));  /* cBossWeaponInfoDispParts+0xB4 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD0610  cCustomObjCtrlManager::cCustomObjCtrlManager_23  size=143  [class]
void cCustomObjCtrlManager::ctor_00CD0610()  // cChainComboParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cChainComboParts::vftable (0x016B7C70)
    releaseRef(at<int>(this, 0x11C));  /* cChainComboParts+0x11C */
    releaseRef(at<int>(this, 0x120));  /* cChainComboParts+0x120 */
    releaseRef(at<int>(this, 0x124));  /* cChainComboParts+0x124 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD0F20  cCustomObjCtrlManager::cCustomObjCtrlManager_20  size=188  [class]
void cCustomObjCtrlManager::ctor_00CD0F20()  // cCodecRealTimeDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cCodecRealTimeDispParts::vftable (0x016B7CEC)
    releaseRef(at<int>(this, 0xB4));  /* cCodecRealTimeDispParts+0xB4 */
    releaseRef(at<int>(this, 0xB8));  /* cCodecRealTimeDispParts+0xB8 */
    releaseRef(at<int>(this, 0xBC));  /* cCodecRealTimeDispParts+0xBC */
    // member at +0x118 (ECX of all three calls, taken from the machine code)
    int active = FUN_00a81330(&at<unsigned int>(this, 0x118));
    if (active != 0) {
        FUN_00a805f0(active);
        FUN_00a7c950(&at<undefined4>(this, 0x118));
    }
    DAT_01dc1508 = 0;
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD1660  cCustomObjCtrlManager::cCustomObjCtrlManager_19  size=143  [class]
void cCustomObjCtrlManager::ctor_00CD1660()  // cCutPointDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cCutPointDispParts::vftable (0x016B7D4C)
    releaseRef(at<int>(this, 0xC0));  /* cCutPointDispParts+0xC0 */
    releaseRef(at<int>(this, 0xC4));  /* cCutPointDispParts+0xC4 */
    releaseRef(at<int>(this, 0xBC));  /* cCutPointDispParts+0xBC */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD1D10  cCustomObjCtrlManager::cCustomObjCtrlManager  size=825  [class]
cCustomObjCtrlManager *cCustomObjCtrlManager::ctor_00CD1D10()  // cDryCellGauge2 constructor
{
    using namespace cCustomObjCtrlManager_p1;
    constructCtrlEx(this);  // cCustomObjCtrlManagerEx base constructor
    // cDryCellGauge2 fields (all foreign: cDryCellGauge2+offset)
    at<float>(this, 0x1B8) = 0.0f;
    at<float>(this, 0x1E0) = 0.0f;
    at<float>(this, 0x1E4) = 0.0f;
    at<float>(this, 0x200) = 0.0f;
    // vftable = cDryCellGauge2::vftable (0x016B7DAC)
    at<float>(this, 0x214) = 0.0f;
    at<int>(this, 0x1AC) = 1;
    at<float>(this, 0x230) = 0.0f;
    at<int>(this, 0x1B0) = 0;
    at<int>(this, 0x1B4) = -1;
    at<int>(this, 0x1BC) = 0;
    at<int>(this, 0x1C0) = 0;
    at<int>(this, 0x1C4) = 0;
    at<int>(this, 0x1C8) = 0;
    at<int>(this, 0x1CC) = 0;
    at<int>(this, 0x1D0) = 0;
    at<int>(this, 0x1D4) = 0;
    at<int>(this, 0x1D8) = 0;
    at<int>(this, 0x1DC) = 0;
    at<int>(this, 0x1E8) = 0;
    at<int>(this, 0x1EC) = 0;
    at<int>(this, 0x1F0) = 0;
    at<int>(this, 0x1F4) = 0;
    at<int>(this, 0x1F8) = 0;
    at<int>(this, 0x1FC) = 0;
    at<int>(this, 0x204) = 0;
    at<int>(this, 0x208) = 0;
    at<int>(this, 0x20C) = 0;
    at<int>(this, 0x210) = 0;
    at<int>(this, 0x218) = 0;
    at<int>(this, 0x21C) = 0;
    at<int>(this, 0x220) = 0;
    at<int>(this, 0x224) = 0;
    at<int>(this, 0x228) = 0;
    at<int>(this, 0x22C) = 0;
    at<int>(this, 0x234) = 0;
    constructEspControler(&at<char>(this, 0x250));  // cEspControler member at +0x250
    at<int>(this, 0x300) = 0;
    at<int>(this, 0x304) = 0;
    at<int>(this, 0x308) = 0;
    for (int i = 0; i < 5; i++) {
        constructCtrl(&at<char>(this, 0x30C + i * 0x1C));  // cCustomObjCtrlManager[5] at +0x30C
    }
    at<float>(this, 0x398) = 0.0f;
    at<float>(this, 0x39C) = 0.0f;
    at<int>(this, 0x3A4) = 0;
    at<float>(this, 0x3A0) = 0.0f;
    at<int>(this, 0x3C0) = 0;
    constructCtrl(&at<char>(this, 0x3C4));  // cCustomObjCtrlManager at +0x3C4
    at<int>(this, 0x3E0) = 0;
    at<int>(this, 0x3E4) = 0;
    at<int>(this, 0x3E8) = 0;
    at<int>(this, 0x3EC) = 0;
    at<int>(this, 0x3F0) = 0;
    at<int>(this, 0x3F4) = 0;
    at<int>(this, 0x3F8) = 0;
    at<int>(this, 0x3FC) = 0;
    at<int>(this, 0x408) = 0;
    at<int>(this, 0x40C) = 0;
    at<int>(this, 0x400) = -1;
    at<int>(this, 0x404) = -1;
    at<float>(this, 0x240) = 0.0f;
    at<float>(this, 0x244) = 0.0f;
    at<float>(this, 0x248) = 0.0f;
    at<float>(this, 0x24C) = 1.0f;
    at<int>(this, 0x238) = 0;
    at<int>(this, 0x23C) = 0;
    for (int i = 0; i < 0x2E; i++) {
        at<int>(this, 0x90 + i * 4) = 0;  // +0x90..+0x147
    }
    for (int i = 0; i < 5; i++) {
        at<int>(this, 0x148 + i * 0x14 + 0x00) = 0;  // 5 records of 0x14 bytes at +0x148
        at<int>(this, 0x148 + i * 0x14 + 0x04) = 0;
        at<int>(this, 0x148 + i * 0x14 + 0x08) = 0;
        at<int>(this, 0x148 + i * 0x14 + 0x0C) = 0;
        at<int>(this, 0x148 + i * 0x14 + 0x10) = 0;
        at<float>(this, 0x3A8 + i * 4) = -1.0f;      // float[5] at +0x3A8
    }
    DAT_01dc0884 = 0.0f;
    DAT_01dc14f8 = this;
    DAT_01dc0888 = 0.0f;
    DAT_01dc088c = 0.0f;
    DAT_01dc0878 = 0;
    DAT_01dc087c = 0;
    DAT_01dc0890 = 0;
    DAT_01dc0894 = 0;
    DAT_01dc08a0 = 0;
    DAT_01dc08a4 = 0;
    DAT_01dc08a8 = 0;
    DAT_01dc08ac = 0;
    DAT_01dc08b0 = 0;
    DAT_01dc08b4 = 0;
    return this;
}

// 00CD3250  cCustomObjCtrlManager::cCustomObjCtrlManager_14  size=143  [class]
void cCustomObjCtrlManager::ctor_00CD3250()  // cEnemyItemDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cEnemyItemDispParts::vftable (0x016B7E8C)
    releaseRef(at<int>(this, 0x98));  /* cEnemyItemDispParts+0x98 */
    releaseRef(at<int>(this, 0x9C));  /* cEnemyItemDispParts+0x9C */
    releaseRef(at<int>(this, 0x94));  /* cEnemyItemDispParts+0x94 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD3990  cCustomObjCtrlManager::cCustomObjCtrlManager_12  size=132  [class]
void cCustomObjCtrlManager::ctor_00CD3990()  // cEnemyLogParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cEnemyLogParts::vftable (0x016B7ECC)
    deleteOwned(at<int>(this, 0x7C));  /* cEnemyLogParts+0x7C: owned object */
    releaseRef(at<int>(this, 0x80));   /* cEnemyLogParts+0x80 */
    releaseRef(at<int>(this, 0x84));   /* cEnemyLogParts+0x84 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD40A0  cCustomObjCtrlManager::cCustomObjCtrlManager_34  size=182  [class]
void cCustomObjCtrlManager::ctor_00CD40A0()  // cEnergyGaugeWhiteRaiden destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cEnergyGaugeWhiteRaiden::vftable (0x016B7F2C)
    DAT_01dc0df4 = 0;
    deleteOwned(at<int>(this, 0xD4));  /* cEnergyGaugeWhiteRaiden+0xD4: owned object */
    releaseRef(at<int>(this, 0x98));   /* cEnergyGaugeWhiteRaiden+0x98 */
    releaseRef(at<int>(this, 0x9C));   /* cEnergyGaugeWhiteRaiden+0x9C */
    releaseRef(at<int>(this, 0xA0));   /* cEnergyGaugeWhiteRaiden+0xA0 */
    DAT_01dc14fc = 0;
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD4A70  cCustomObjCtrlManager::cCustomObjCtrlManager  size=275  [class]
cCustomObjCtrlManager *cCustomObjCtrlManager::ctor_00CD4A70()  // cItemGetDispParts constructor
{
    using namespace cCustomObjCtrlManager_p1;
    constructCtrlEx(this);  // cCustomObjCtrlManagerEx base constructor
    // cItemGetDispParts fields (all foreign: cItemGetDispParts+offset)
    at<float>(this, 0xB8) = 0.0f;
    // vftable = cItemGetDispParts::vftable (0x016B804C)
    at<int>(this, 0xB0) = 0;
    at<int>(this, 0xB4) = 0;
    at<int>(this, 0x104) = 0;
    at<int>(this, 0x108) = 0;
    at<int>(this, 0x10C) = 0;
    at<int>(this, 0x110) = 0;
    at<int>(this, 0x118) = 0;
    at<int>(this, 0x100) = -1;
    at<int>(this, 0x114) = -1;
    constructCtrl(&at<char>(this, 0x120));  // cCustomObjCtrlManager at +0x120
    at<int>(this, 0xBC) = 0;
    at<int>(this, 0xC0) = 0;
    at<int>(this, 0xC4) = 0;
    at<int>(this, 0x90) = 0;
    at<int>(this, 0x94) = 0;
    at<int>(this, 0x98) = 0;
    at<int>(this, 0x9C) = 0;
    at<int>(this, 0xA0) = 0;
    at<int>(this, 0xA4) = 0;
    at<int>(this, 0xA8) = 0;
    at<int>(this, 0xAC) = 0;
    at<int>(this, 0xD0) = 0;
    at<int>(this, 0xD4) = 0;
    at<int>(this, 0xD8) = 0;
    at<float>(this, 0xDC) = 1.0f;
    at<float>(this, 0xEC) = 1.0f;
    at<int>(this, 0xE0) = 0;
    at<int>(this, 0xE4) = 0;
    at<int>(this, 0xE8) = 0;
    at<int>(this, 0xF0) = 0;
    at<int>(this, 0xF4) = 0;
    at<int>(this, 0xF8) = 0;
    at<float>(this, 0xFC) = 1.0f;
    return this;
}

// 00CD4B90  cCustomObjCtrlManager::cCustomObjCtrlManager_32  size=193  [class]
void cCustomObjCtrlManager::ctor_00CD4B90()  // cItemGetDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cItemGetDispParts::vftable (0x016B804C)
    releaseRef(at<int>(this, 0xBC));  /* cItemGetDispParts+0xBC */
    releaseRef(at<int>(this, 0xC0));  /* cItemGetDispParts+0xC0 */
    releaseRef(at<int>(this, 0xC4));  /* cItemGetDispParts+0xC4 */
    destroyCtrl(&at<char>(this, 0x120));  // cCustomObjCtrlManager member at +0x120
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD4E60  cCustomObjCtrlManager::cCustomObjCtrlManager_33  size=143  [class]
void cCustomObjCtrlManager::ctor_00CD4E60()  // cItemInfoDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cItemInfoDispParts::vftable (0x016B806C)
    releaseRef(at<int>(this, 0x11C));  /* cItemInfoDispParts+0x11C */
    releaseRef(at<int>(this, 0x120));  /* cItemInfoDispParts+0x120 */
    releaseRef(at<int>(this, 0x124));  /* cItemInfoDispParts+0x124 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD5B60  cCustomObjCtrlManager::cCustomObjCtrlManager  size=257  [class]
void cCustomObjCtrlManager::ctor_00CD5B60()  // cQTEButtonPCParts constructor
{
    using namespace cCustomObjCtrlManager_p1;
    // inlined cCustomObjCtrlManager base constructor
    field04() = 0;
    field08() = 0;
    field0C() = 0;
    ownedObj() = 0;
    field18() = 0;
    // vftable = cQTEButtonPCParts::vftable (0x016B81B0)
    field10() = 1;
    constructCtrl(&at<char>(this, 0x98));  // cCustomObjCtrlManager member at +0x98
    for (int i = 0; i < 3; i++) {
        constructCtrl(&at<char>(this, 0xB4 + i * 0x1C));  // cCustomObjCtrlManager[3] at +0xB4
    }
    at<int>(this, 0x16C) = 0;  /* cQTEButtonPCParts+0x16C..+0x188 */
    at<int>(this, 0x170) = 0;
    at<int>(this, 0x174) = 0;
    at<int>(this, 0x178) = 0;
    at<int>(this, 0x17C) = 0;
    at<int>(this, 0x180) = 0;
    at<int>(this, 0x184) = 0;
    at<int>(this, 0x188) = 0;
}

// 00CD5D60  cCustomObjCtrlManager::cCustomObjCtrlManager_28  size=99  [class]
void cCustomObjCtrlManager::ctor_00CD5D60()  // cSlashPointDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cSlashPointDispParts::vftable (0x016B8210)
    releaseRef(at<int>(this, 0x6C));  /* cSlashPointDispParts+0x6C */
    releaseRef(at<int>(this, 0x70));  /* cSlashPointDispParts+0x70 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD6000  cCustomObjCtrlManager::cCustomObjCtrlManager_26  size=406  [class]
void cCustomObjCtrlManager::ctor_00CD6000()  // cRadarMap destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cRadarMap::vftable (0x016B8230)
    DAT_01dc1304 = 0;
    deleteOwned(at<int>(this, 0x188));  /* cRadarMap+0x188..+0x198: owned objects */
    deleteOwned(at<int>(this, 0x18C));
    deleteOwned(at<int>(this, 0x190));
    deleteOwned(at<int>(this, 0x194));
    deleteOwned(at<int>(this, 0x198));
    releaseRef(at<int>(this, 0x4C));    /* cRadarMap+0x4C */
    releaseRef(at<int>(this, 0x50));    /* cRadarMap+0x50 */
    releaseRef(at<int>(this, 0x54));    /* cRadarMap+0x54 */
    releaseRef(at<int>(this, 0x178));   /* cRadarMap+0x178 */
    releaseRef(at<int>(this, 0x17C));   /* cRadarMap+0x17C */
    releaseRef(at<int>(this, 0x180));   /* cRadarMap+0x180 */
    DAT_01dc1500 = 0;
    destroyCtrl(&at<char>(this, 0x90));  // cCustomObjCtrlManager member at +0x90
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD7150  cCustomObjCtrlManager::cCustomObjCtrlManager  size=1087  [class]
cCustomObjCtrlManager *cCustomObjCtrlManager::ctor_00CD7150()  // cResultDispParts constructor
{
    using namespace cCustomObjCtrlManager_p1;
    constructCtrlEx(this);  // cCustomObjCtrlManagerEx base constructor
    // vftable = cResultDispParts::vftable (0x016B8684)
    for (int i = 0; i < 9; i++) {
        constructCtrl(&at<char>(this, 0x208 + i * 0x1C));  // cCustomObjCtrlManager[9] at +0x208
    }
    // cResultDispParts fields (all foreign: cResultDispParts+offset)
    at<int>(this, 0x324) = 0;
    at<int>(this, 0x320) = 0;
    at<int>(this, 0x328) = 0;
    at<int>(this, 0x32C) = 0;
    at<int>(this, 0x330) = 0;
    at<int>(this, 0x334) = 0;
    at<int>(this, 0x338) = 0;
    at<int>(this, 0x33C) = 0;
    at<int>(this, 0x340) = 0;
    at<int>(this, 0x3C8) = 0;
    at<int>(this, 0x344) = 0;
    at<int>(this, 0x45C) = 0;
    at<int>(this, 0x394) = 0;
    at<int>(this, 0x460) = 0;
    at<int>(this, 0x398) = 0;
    at<int>(this, 0x464) = 0;
    at<int>(this, 0x3B8) = 0;
    at<int>(this, 0x468) = 0;
    at<int>(this, 0x3BC) = 0;
    at<int>(this, 0x474) = 0;
    at<int>(this, 0x3C0) = 0;
    at<int>(this, 0x3C4) = 0;
    at<int>(this, 0x46C) = 0;
    at<int>(this, 0x470) = 0;
    at<int>(this, 0x484) = 0;
    at<int>(this, 0x5D8) = 0;
    at<int>(this, 0x39C) = -1;
    at<int>(this, 0x3A0) = -1;
    at<int>(this, 0x3A4) = -1;
    at<int>(this, 0x3A8) = -1;
    at<int>(this, 0x3AC) = -1;
    at<int>(this, 0x3B0) = -1;
    at<int>(this, 0x3B4) = -1;
    at<int>(this, 0x3CC) = 0;
    at<int>(this, 0x3F0) = 0;
    at<int>(this, 0x34C) = 0;
    at<int>(this, 0x3D0) = 0;
    at<int>(this, 0x370) = -1;
    at<int>(this, 0x3F4) = 0;
    at<int>(this, 0x414) = 0;
    at<int>(this, 0x3D4) = 0;
    at<int>(this, 0x350) = 0;
    at<int>(this, 0x3F8) = 0;
    at<int>(this, 0x374) = -1;
    at<int>(this, 0x3D8) = 0;
    at<int>(this, 0x418) = 0;
    at<int>(this, 0x3FC) = 0;
    at<int>(this, 0x354) = 0;
    at<int>(this, 0x3DC) = 0;
    at<int>(this, 0x378) = -1;
    at<int>(this, 0x400) = 0;
    at<int>(this, 0x41C) = 0;
    at<int>(this, 0x3E0) = 0;
    at<int>(this, 0x358) = 0;
    at<int>(this, 0x404) = 0;
    at<int>(this, 0x37C) = -1;
    at<int>(this, 0x3E4) = 0;
    at<int>(this, 0x420) = 0;
    at<int>(this, 0x408) = 0;
    at<int>(this, 0x35C) = 0;
    at<int>(this, 0x3E8) = 0;
    at<int>(this, 0x380) = -1;
    at<int>(this, 0x40C) = 0;
    at<int>(this, 0x424) = 0;
    at<int>(this, 0x3EC) = 0;
    at<int>(this, 0x360) = 0;
    at<int>(this, 0x410) = 0;
    at<int>(this, 0x384) = -1;
    at<int>(this, 0x428) = 0;
    at<int>(this, 0x364) = 0;
    at<int>(this, 0x388) = -1;
    at<int>(this, 0x42C) = 0;
    at<int>(this, 0x368) = 0;
    at<int>(this, 0x38C) = -1;
    at<int>(this, 0x430) = 0;
    at<int>(this, 0x36C) = 0;
    at<int>(this, 0x390) = -1;
    at<int>(this, 0x434) = 0;
    at<int>(this, 0x438) = 0;
    at<int>(this, 0x43C) = 0;
    at<int>(this, 0x440) = 0;
    at<int>(this, 0x444) = 0;
    at<int>(this, 0x448) = 0;
    at<int>(this, 0x44C) = 0;
    at<int>(this, 0x478) = 0;
    at<int>(this, 0x47C) = 0;
    at<int>(this, 0x480) = 0;
    at<int>(this, 0x48C) = 0;
    at<int>(this, 0x488) = 0;
    at<int>(this, 0x494) = 0;
    at<int>(this, 0x490) = 0;
    at<int>(this, 0x4C0) = 0;
    at<int>(this, 0x4EC) = 0;
    at<int>(this, 0x518) = 0;
    at<int>(this, 0x544) = 0;
    at<int>(this, 0x580) = 0;
    // 5 consecutive ints set to -1 in each of 13 tables (offsets relative to +0x4AC)
    int *slot = &at<int>(this, 0x4AC);
    for (int n = 5; n != 0; n--) {
        slot[-5] = -1;
        slot[0] = -1;
        slot[6] = -1;
        slot[0xB] = -1;
        slot[0x11] = -1;
        slot[0x16] = -1;
        slot[0x1C] = -1;
        slot[0x21] = -1;
        slot[0x27] = -1;
        slot[0x2C] = -1;
        slot[0x46] = -1;
        slot[0x36] = -1;
        slot[0x3B] = -1;
        slot++;
    }
    at<int>(this, 0x570) = -1;
    at<int>(this, 0x574) = -1;
    at<int>(this, 0x578) = -1;
    at<int>(this, 0x57C) = -1;
    return this;
}

// 00CD7590  cCustomObjCtrlManager::cCustomObjCtrlManager_25  size=203  [class]
void cCustomObjCtrlManager::ctor_00CD7590()  // cResultDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cResultDispParts::vftable (0x016B8684)
    releaseRef(at<int>(this, 0x478));  /* cResultDispParts+0x478 */
    releaseRef(at<int>(this, 0x47C));  /* cResultDispParts+0x47C */
    releaseRef(at<int>(this, 0x480));  /* cResultDispParts+0x480 */
    for (int i = 8; i >= 0; i--) {
        destroyCtrl(&at<char>(this, 0x208 + i * 0x1C));  // cCustomObjCtrlManager[9] at +0x208, last first
    }
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD8810  cCustomObjCtrlManager::cCustomObjCtrlManager  size=337  [class]
cCustomObjCtrlManager *cCustomObjCtrlManager::ctor_00CD8810()  // cSubWeaponInfoDispParts constructor
{
    using namespace cCustomObjCtrlManager_p1;
    constructCtrlEx(this);  // cCustomObjCtrlManagerEx base constructor
    // vftable = cSubWeaponInfoDispParts::vftable (0x016B87F4)
    constructCtrl(&at<char>(this, 0x90));  // cCustomObjCtrlManager member at +0x90
    // cSubWeaponInfoDispParts fields (all foreign: cSubWeaponInfoDispParts+offset)
    at<int>(this, 0xE8) = 0;
    at<int>(this, 0xE0) = 0;
    at<int>(this, 0xE4) = 0;
    at<int>(this, 0x148) = 0;
    at<int>(this, 0x14C) = 0;
    at<int>(this, 0x150) = 0;
    at<int>(this, 0x154) = 0;
    at<int>(this, 0x158) = 0;
    at<int>(this, 0x15C) = 0;
    at<int>(this, 0xEC) = 0;
    at<int>(this, 0x140) = -1;
    at<int>(this, 0x144) = -1;
    at<int>(this, 0xF0) = 0;
    at<int>(this, 0xF4) = 0;
    at<int>(this, 0xAC) = 0;
    at<int>(this, 0xB0) = 0;
    at<int>(this, 0xB4) = 0;
    at<int>(this, 0xB8) = 0;
    at<int>(this, 0xBC) = 0;
    at<int>(this, 0xC0) = 0;
    at<int>(this, 0xC4) = 0;
    at<int>(this, 0xC8) = 0;
    at<int>(this, 0xCC) = 0;
    at<int>(this, 0xD0) = 0;
    at<int>(this, 0xD4) = 0;
    at<int>(this, 0xD8) = 0;
    at<int>(this, 0xDC) = 0;
    at<int>(this, 0x100) = 0;
    at<int>(this, 0x104) = 0;
    at<int>(this, 0x108) = 0;
    at<float>(this, 0x10C) = 1.0f;
    at<float>(this, 0x11C) = 1.0f;
    at<int>(this, 0x110) = 0;
    at<int>(this, 0x114) = 0;
    at<int>(this, 0x118) = 0;
    at<int>(this, 0x120) = 0;
    at<int>(this, 0x124) = 0;
    at<int>(this, 0x128) = 0;
    at<float>(this, 0x12C) = 1.0f;
    at<float>(this, 0x13C) = 1.0f;
    at<int>(this, 0x130) = 0;
    at<int>(this, 0x134) = 0;
    at<int>(this, 0x138) = 0;
    return this;
}

// 00CD8970  cCustomObjCtrlManager::cCustomObjCtrlManager_8  size=193  [class]
void cCustomObjCtrlManager::ctor_00CD8970()  // cSubWeaponInfoDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cSubWeaponInfoDispParts::vftable (0x016B87F4)
    releaseRef(at<int>(this, 0xEC));  /* cSubWeaponInfoDispParts+0xEC */
    releaseRef(at<int>(this, 0xF0));  /* cSubWeaponInfoDispParts+0xF0 */
    releaseRef(at<int>(this, 0xF4));  /* cSubWeaponInfoDispParts+0xF4 */
    destroyCtrl(&at<char>(this, 0x90));  // cCustomObjCtrlManager member at +0x90
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD8FA0  cCustomObjCtrlManager::cCustomObjCtrlManager_9  size=111  [class]
void cCustomObjCtrlManager::ctor_00CD8FA0()  // cTutorialDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cTutorialDispParts::vftable (0x016B8834)
    releaseRef(at<int>(this, 0x220));  /* cTutorialDispParts+0x220 */
    releaseRef(at<int>(this, 0x224));  /* cTutorialDispParts+0x224 */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD9350  cCustomObjCtrlManager::cCustomObjCtrlManager_5  size=143  [class]
void cCustomObjCtrlManager::ctor_00CD9350()  // cUnLockInfoDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cUnLockInfoDispParts::vftable (0x016B8874)
    releaseRef(at<int>(this, 0xE4));  /* cUnLockInfoDispParts+0xE4 */
    releaseRef(at<int>(this, 0xE8));  /* cUnLockInfoDispParts+0xE8 */
    releaseRef(at<int>(this, 0xEC));  /* cUnLockInfoDispParts+0xEC */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD9750  cCustomObjCtrlManager::cCustomObjCtrlManager_6  size=99  [class]
void cCustomObjCtrlManager::ctor_00CD9750()  // cVRGoalPointSignParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cVRGoalPointSignParts::vftable (0x016B88C0)
    releaseRef(at<int>(this, 0x48));  /* cVRGoalPointSignParts+0x48 */
    releaseRef(at<int>(this, 0x4C));  /* cVRGoalPointSignParts+0x4C */
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CD9930  cCustomObjCtrlManager::cCustomObjCtrlManager_3  size=900  [class]
cCustomObjCtrlManager *cCustomObjCtrlManager::ctor_00CD9930()  // cVRMissionResult2 constructor
{
    using namespace cCustomObjCtrlManager_p1;
    // inlined cCustomObjCtrlManager base constructor
    field10() = 1;
    // vftable = cVRMissionResult2::vftable (0x016B8920)
    field04() = 0;
    field08() = 0;
    field0C() = 0;
    ownedObj() = 0;
    field18() = 0;
    for (int i = 0; i < 10; i++) {
        constructCtrl(&at<char>(this, 0x1C + i * 0x1C));  // cCustomObjCtrlManager[10] at +0x1C
    }
    // cVRMissionResult2 fields (all foreign: cVRMissionResult2+offset)
    at<int>(this, 0x1D8) = 0;
    at<int>(this, 0x1F8) = 0;
    at<int>(this, 0x1FC) = 0;
    at<int>(this, 0x2FC) = 0;
    at<int>(this, 0x348) = 0;
    at<int>(this, 0x1B8) = 0;
    at<int>(this, 0x1BC) = 0;
    at<int>(this, 0x1C0) = 0;
    at<int>(this, 0x1C4) = 0;
    at<int>(this, 0x1C8) = 0;
    at<int>(this, 0x1CC) = 0;
    at<int>(this, 0x1D0) = 0;
    at<int>(this, 0x1D4) = -1;
    at<int>(this, 0x1DC) = 0;
    at<int>(this, 0x1E0) = -1;
    at<int>(this, 0x1E4) = 5;
    at<int>(this, 0x1E8) = 0;
    at<int>(this, 0x1EC) = 0;
    at<int>(this, 0x1F0) = 0;
    at<int>(this, 0x1F4) = 0;
    at<int>(this, 0x200) = 0;
    at<int>(this, 0x204) = 0;
    at<int>(this, 0x2F8) = 0;
    at<int>(this, 0x300) = 0;
    at<int>(this, 0x304) = 0;
    at<int>(this, 0x308) = 0;
    at<int>(this, 0x30C) = 0;
    at<int>(this, 0x330) = 0;
    at<int>(this, 0x334) = 0;
    at<int>(this, 0x338) = 0;
    at<int>(this, 0x33C) = 0;
    at<int>(this, 0x340) = 0;
    at<int>(this, 0x344) = 0;
    at<int>(this, 0x34C) = 0;
    at<int>(this, 0x350) = 0;
    at<int>(this, 0x464) = 0;
    at<int>(this, 0x490) = 0;
    at<int>(this, 0x494) = 0;
    at<int>(this, 0x498) = 0;
    at<int>(this, 0x49C) = 0;
    at<int>(this, 0x4A0) = 0;
    _memset(&at<char>(this, 0x134), 0, 0x84);  // +0x134..+0x1B7
    _memset(&at<char>(this, 0x208), 0, 0xF0);  // +0x208..+0x2F7
    at<int>(this, 0x310) = 0;
    at<int>(this, 0x314) = 0;
    at<int>(this, 0x318) = 0;
    at<int>(this, 0x31C) = 0;
    at<int>(this, 0x320) = 0;
    at<int>(this, 0x324) = 0;
    at<int>(this, 0x328) = 0;
    at<int>(this, 0x32C) = 0;
    at<int>(this, 0x354) = 0;
    at<int>(this, 0x380) = 0;
    at<int>(this, 0x3AC) = 0;
    at<int>(this, 0x3D8) = 0;
    at<int>(this, 0x404) = 0;
    // 5 consecutive ints set to -1 in each of 11 tables (offsets relative to +0x36C)
    int *slot = &at<int>(this, 0x36C);
    for (int n = 5; n != 0; n--) {
        slot[-5] = -1;
        slot[0] = -1;
        slot[6] = -1;
        slot[0xB] = -1;
        slot[0x11] = -1;
        slot[0x16] = -1;
        slot[0x1C] = -1;
        slot[0x21] = -1;
        slot[0x27] = -1;
        slot[0x2C] = -1;
        slot[0x39] = -1;
        slot++;
    }
    at<int>(this, 0x430) = -1;
    at<int>(this, 0x434) = -1;
    at<int>(this, 0x468) = 0;
    at<int>(this, 0x46C) = 0;
    at<int>(this, 0x470) = 0;
    at<int>(this, 0x474) = 0;
    at<int>(this, 0x478) = 0;
    at<int>(this, 0x47C) = 0;
    at<int>(this, 0x480) = 0;
    at<int>(this, 0x484) = 0;
    at<int>(this, 0x488) = 0;
    at<int>(this, 0x48C) = 0;
    return this;
}

// 00CD9CC0  cCustomObjCtrlManager::cCustomObjCtrlManager_4  size=204  [class]
void cCustomObjCtrlManager::ctor_00CD9CC0()  // cVRMissionResult2 destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cVRMissionResult2::vftable (0x016B8920)
    deleteOwned(at<int>(this, 0x4A0));  /* cVRMissionResult2+0x4A0: owned object */
    for (int i = 7; i >= 0; i--) {
        destroyCtrl(&at<char>(this, 0x54 + i * 0x1C));  // cCustomObjCtrlManager[8] at +0x54, last first
    }
    destroyCtrl(&at<char>(this, 0x38));  // cCustomObjCtrlManager member at +0x38
    destroyCtrl(&at<char>(this, 0x1C));  // cCustomObjCtrlManager member at +0x1C
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CDAA80  cCustomObjCtrlManager::cCustomObjCtrlManager_2  size=271  [class]
void cCustomObjCtrlManager::ctor_00CDAA80()  // cWeaponInfoDispParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cWeaponInfoDispParts::vftable (0x016B8964)
    releaseRef(at<int>(this, 0xB0));  /* cWeaponInfoDispParts+0xB0..+0xC8 */
    releaseRef(at<int>(this, 0xB4));
    releaseRef(at<int>(this, 0xB8));
    releaseRef(at<int>(this, 0xBC));
    releaseRef(at<int>(this, 0xC0));
    releaseRef(at<int>(this, 0xC4));
    releaseRef(at<int>(this, 0xC8));
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CDAFD0  cCustomObjCtrlManager::cCustomObjCtrlManager  size=567  [class]
void cCustomObjCtrlManager::ctor_00CDAFD0()  // cChapterResultParts constructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cChapterResultParts::vftable (0x01657134)
    // inlined cCustomObjCtrlManager base constructor
    field04() = 0;
    field08() = 0;
    field0C() = 0;
    ownedObj() = 0;
    field18() = 0;
    field10() = 1;
    for (int i = 0; i < 9; i++) {
        constructCtrl(&at<char>(this, 0x1C + i * 0x1C));  // cCustomObjCtrlManager[9] at +0x1C
    }
    // cChapterResultParts fields (all foreign: cChapterResultParts+offset)
    at<short>(this, 0x244) = 0;
    at<char>(this, 0x246) = 1;
    at<int>(this, 0x248) = 0;
    at<int>(this, 0x24C) = -1;
    at<int>(this, 0x250) = 0;
    at<int>(this, 0x254) = 0;
    at<int>(this, 0x258) = 0;
    at<int>(this, 0x25C) = 0;
    at<int>(this, 0x260) = 0;
    at<int>(this, 0x264) = 0;
    at<int>(this, 0x268) = 0;
    at<int>(this, 0x26C) = 0;
    at<int>(this, 0x270) = 0;
    at<int>(this, 0x2C0) = 0;
    at<int>(this, 0x2C4) = 0;
    at<int>(this, 0x2C8) = 0;
    at<int>(this, 0x2CC) = 0;
    at<int>(this, 0x2D0) = 0;
    at<int>(this, 0x2D4) = 0;
    at<int>(this, 0x2DC) = 0;
    at<int>(this, 0x2E0) = 0;
    at<int>(this, 0x2E4) = 0;
    at<int>(this, 0x2E8) = 0;
    at<int>(this, 0x2EC) = 0;
    at<int>(this, 0x2F0) = 0;
    at<int>(this, 0x2F4) = 0;
    at<int>(this, 0x2F8) = 0;
    at<int>(this, 0x2FC) = 0;
    at<int>(this, 0x300) = 0;
    at<int>(this, 0x304) = 0;
    at<int>(this, 0x2D8) = 5;
    for (int i = 0; i < 9; i++) {
        at<int>(this, 0x308 + i * 4) = 0;  // int[9] at +0x308
        at<int>(this, 0x32C + i * 4) = 0;  // int[9] at +0x32C
    }
}

// 00CDBFA0  cCustomObjCtrlManager::~cCustomObjCtrlManager  size=557  [class]
void cCustomObjCtrlManager::ctor_00CDBFA0()  // cBattleResultExParts constructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cBattleResultExParts::vftable (0x016B8A74)
    // inlined cCustomObjCtrlManager base constructor
    field04() = 0;
    field08() = 0;
    field0C() = 0;
    ownedObj() = 0;
    field18() = 0;
    field10() = 1;
    for (int i = 0; i < 9; i++) {
        constructCtrl(&at<char>(this, 0x1C + i * 0x1C));  // cCustomObjCtrlManager[9] at +0x1C
    }
    // cBattleResultExParts fields (all foreign: cBattleResultExParts+offset)
    at<short>(this, 0x240) = 0;
    at<int>(this, 0x244) = 0;
    at<int>(this, 0x248) = 0;
    at<int>(this, 0x24C) = 0;
    at<int>(this, 0x250) = 0;
    at<int>(this, 0x254) = 0;
    at<int>(this, 0x258) = 0;
    at<int>(this, 0x25C) = 0;
    at<int>(this, 0x260) = 0;
    at<int>(this, 0x264) = 0;
    at<int>(this, 0x268) = 0;
    at<int>(this, 0x2B8) = 0;
    at<int>(this, 0x2BC) = 0;
    at<int>(this, 0x2C0) = 0;
    at<int>(this, 0x2C4) = 0;
    at<int>(this, 0x2C8) = 0;
    at<int>(this, 0x2D4) = 0;
    at<int>(this, 0x2D8) = 0;
    at<int>(this, 0x2DC) = 0;
    at<int>(this, 0x2E0) = 0;
    at<int>(this, 0x2E4) = 0;
    at<int>(this, 0x2E8) = 0;
    at<int>(this, 0x2EC) = 0;
    at<int>(this, 0x2F0) = 0;
    at<int>(this, 0x2F4) = 0;
    at<int>(this, 0x2F8) = 0;
    at<int>(this, 0x2FC) = 0;
    at<int>(this, 0x300) = 0;
    at<int>(this, 0x304) = 0;
    at<int>(this, 0x2D0) = 5;
    for (int i = 0; i < 9; i++) {
        at<int>(this, 0x30C + i * 4) = 0;  // int[9] at +0x30C
        at<int>(this, 0x330 + i * 4) = 0;  // int[9] at +0x330
    }
}

// 00CE3BC0  cCustomObjCtrlManager::cCustomObjCtrlManager_38  size=155  [class]
void cCustomObjCtrlManager::ctor_00CE3BC0()  // cQTEButtonPCParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cQTEButtonPCParts::vftable (0x016B81B0)
    for (int i = 2; i >= 0; i--) {
        destroyCtrl(&at<char>(this, 0xB4 + i * 0x1C));  // cCustomObjCtrlManager[3] at +0xB4, last first
    }
    destroyCtrl(&at<char>(this, 0x98));  // cCustomObjCtrlManager member at +0x98
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CE3FA0  cCustomObjCtrlManager::cCustomObjCtrlManager_39  size=106  [class]
void cCustomObjCtrlManager::ctor_00CE3FA0()  // cBattleResultExParts destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cBattleResultExParts::vftable (0x016B8A74)
    for (int i = 8; i >= 0; i--) {
        destroyCtrl(&at<char>(this, 0x1C + i * 0x1C));  // cCustomObjCtrlManager[9] at +0x1C, last first
    }
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CE4C10  cCustomObjCtrlManager::vf00  size=63  [class]
undefined4 *cCustomObjCtrlManager::vf00(byte flags)  // scalar deleting destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00CF37A0  cCustomObjCtrlManager::cCustomObjCtrlManager  size=158  [class]
cCustomObjCtrlManager *cCustomObjCtrlManager::ctor_00CF37A0()  // cChapterResult constructor
{
    using namespace cCustomObjCtrlManager_p1;
    // inlined cCustomObjCtrlManager base constructor
    field04() = 0;
    field08() = 0;
    field0C() = 0;
    field10() = 1;
    ownedObj() = 0;
    field18() = 0;
    // vftable = cChapterResult::vftable (0x016B8FFC)
    ((cCustomObjCtrlManager *)&at<char>(this, 0x1C))->ctor_00CDAFD0();  // cChapterResultParts member at +0x1C
    for (int i = 0; i < 24; i++) {
        constructCtrl(&at<char>(this, 0x36C + i * 0x1C));  // cCustomObjCtrlManager[24] at +0x36C
    }
    // cChapterResult fields (all foreign: cChapterResult+offset)
    at<short>(this, 0x6D4) = 0;
    at<short>(this, 0x6D0) = 0;
    at<char>(this, 0x6D2) = 0;
    at<int>(this, 0x60C) = 0;
    at<int>(this, 0x610) = 0;
    for (int i = 0; i < 4; i++) {
        at<int>(this, 0x6EC + i * 0x14) = 0;  // first int of 4 records of 0x14 bytes at +0x6EC
    }
    at<int>(this, 0x6D8) = 0;
    return this;
}

// 00CF3960  cCustomObjCtrlManager::cCustomObjCtrlManager_13  size=82  [class]
void cCustomObjCtrlManager::ctor_00CF3960()  // cBattleResultEx destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cBattleResultEx::vftable (0x016B901C)
    deleteOwned(at<int>(this, 0x370));  /* cBattleResultEx+0x370: owned object */
    ((cCustomObjCtrlManager *)&at<char>(this, 0x1C))->ctor_00CE3FA0();  // ~cBattleResultExParts on member at +0x1C
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CF53F0  cCustomObjCtrlManager::cCustomObjCtrlManager_29  size=264  [class]
void cCustomObjCtrlManager::ctor_00CF53F0()  // cGameResult destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cGameResult::vftable (0x016B90D8)
    deleteOwned(at<int>(this, 0x5F4));  /* cGameResult+0x5F4..+0x600: owned objects */
    deleteOwned(at<int>(this, 0x5F8));
    deleteOwned(at<int>(this, 0x5FC));
    deleteOwned(at<int>(this, 0x600));
    destroyCtrl(&at<char>(this, 0x454));  // cCustomObjCtrlManager member at +0x454
    for (int i = 1; i >= 0; i--) {
        destroyCtrl(&at<char>(this, 0x1C + i * 0x21C));  // 2 members of 0x21C bytes at +0x1C (base part only), last first
    }
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00CF5660  cCustomObjCtrlManager::cCustomObjCtrlManager_30  size=197  [class]
void cCustomObjCtrlManager::ctor_00CF5660()  // cGameAllResult destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cGameAllResult::vftable (0x016B90F8)
    deleteOwned(at<int>(this, 0xA04));  /* cGameAllResult+0xA04: owned object */
    for (int i = 1; i >= 0; i--) {
        destroyCtrl(&at<char>(this, 0x83C + i * 0xE4));  // 2 members of 0xE4 bytes at +0x83C (base part only), last first
    }
    for (int i = 4; i >= 0; i--) {
        destroyCtrl(&at<char>(this, 0x1C + i * 0x1A0));  // 5 members of 0x1A0 bytes at +0x1C (base part only), last first
    }
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00D085A0  cCustomObjCtrlManager::cCustomObjCtrlManager_36  size=80  [class]
void cCustomObjCtrlManager::ctor_00D085A0()  // cUnLockDisp destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cUnLockDisp::vftable (0x016B8A54)
    if (DAT_01dc0730 != 0) {
        FUN_00cfcb70_this(DAT_01dc073c, 0x18);  // ECX = DAT_01dc073c (from the machine code)
    }
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}

// 00D0A5B0  cCustomObjCtrlManager::cCustomObjCtrlManager_35  size=80  [class]
void cCustomObjCtrlManager::ctor_00D0A5B0()  // cTitleDisp destructor
{
    using namespace cCustomObjCtrlManager_p1;
    // vftable = cTitleDisp::vftable (0x016B8BB8)
    if (DAT_01dc0730 != 0) {
        FUN_00cfcb70_this(DAT_01dc073c, 0x19);  // ECX = DAT_01dc073c (from the machine code)
    }
    // vftable = cCustomObjCtrlManager::vftable (0x016B71A4)
    field18() = 0;
    releaseRef(ownedObj());
}
