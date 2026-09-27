// REFINED
// cCustomObjCtrlManager -- 0x1C-byte UI helper object: it holds a reference (+0x14) to a
// controlled object which it marks released (flag bit 0 at +0x24, clears +0x4) when destroyed.
// Many UI "Parts" classes embed it (at offset 0 as their base, and as members), so the
// constructors/destructors of those classes were inlined and attributed to this class; the
// ctor_XXXXXXXX members below are those functions (the comment names the real owner).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cCustomObjCtrlManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte param_2);  // 00CE4C10 slot 0x0 (scalar deleting destructor)
    virtual void vf04();  // 00CE4C50 slot 0x4
    virtual void vf08();  // 0098E6D0 slot 0x8
    virtual void vf0C();  // 00989190 slot 0xC
    virtual void vf10();  // 009891A0 slot 0x10
    virtual void create();  // 0098E6E0 slot 0x14
    virtual void vf18();  // 009891B0 slot 0x18
    // non-virtual members
    cCustomObjCtrlManager();  // 00CB21E0
    ~cCustomObjCtrlManager();  // 00CCDD30
    void ctor_00CD0260();  // 00CD0260  cActionMessageParts destructor
    void ctor_00CD0450();  // 00CD0450  cBossWeaponInfoDispParts destructor
    void ctor_00CD0610();  // 00CD0610  cChainComboParts destructor
    void ctor_00CD0F20();  // 00CD0F20  cCodecRealTimeDispParts destructor
    void ctor_00CD1660();  // 00CD1660  cCutPointDispParts destructor
    cCustomObjCtrlManager *ctor_00CD1D10();  // 00CD1D10  cDryCellGauge2 constructor
    void ctor_00CD3250();  // 00CD3250  cEnemyItemDispParts destructor
    void ctor_00CD3990();  // 00CD3990  cEnemyLogParts destructor
    void ctor_00CD40A0();  // 00CD40A0  cEnergyGaugeWhiteRaiden destructor
    cCustomObjCtrlManager *ctor_00CD4A70();  // 00CD4A70  cItemGetDispParts constructor
    void ctor_00CD4B90();  // 00CD4B90  cItemGetDispParts destructor
    void ctor_00CD4E60();  // 00CD4E60  cItemInfoDispParts destructor
    void ctor_00CD5B60();  // 00CD5B60  cQTEButtonPCParts constructor
    void ctor_00CD5D60();  // 00CD5D60  cSlashPointDispParts destructor
    void ctor_00CD6000();  // 00CD6000  cRadarMap destructor
    cCustomObjCtrlManager *ctor_00CD7150();  // 00CD7150  cResultDispParts constructor
    void ctor_00CD7590();  // 00CD7590  cResultDispParts destructor
    cCustomObjCtrlManager *ctor_00CD8810();  // 00CD8810  cSubWeaponInfoDispParts constructor
    void ctor_00CD8970();  // 00CD8970  cSubWeaponInfoDispParts destructor
    void ctor_00CD8FA0();  // 00CD8FA0  cTutorialDispParts destructor
    void ctor_00CD9350();  // 00CD9350  cUnLockInfoDispParts destructor
    void ctor_00CD9750();  // 00CD9750  cVRGoalPointSignParts destructor
    cCustomObjCtrlManager *ctor_00CD9930();  // 00CD9930  cVRMissionResult2 constructor
    void ctor_00CD9CC0();  // 00CD9CC0  cVRMissionResult2 destructor
    void ctor_00CDAA80();  // 00CDAA80  cWeaponInfoDispParts destructor
    void ctor_00CDAFD0();  // 00CDAFD0  cChapterResultParts constructor
    void ctor_00CDBFA0();  // 00CDBFA0  cBattleResultExParts constructor
    void ctor_00CE3BC0();  // 00CE3BC0  cQTEButtonPCParts destructor
    void ctor_00CE3FA0();  // 00CE3FA0  cBattleResultExParts destructor
    cCustomObjCtrlManager *ctor_00CF37A0();  // 00CF37A0  cChapterResult constructor
    void ctor_00CF3960();  // 00CF3960  cBattleResultEx destructor
    void ctor_00CF53F0();  // 00CF53F0  cGameResult destructor
    void ctor_00CF5660();  // 00CF5660  cGameAllResult destructor
    void ctor_00D085A0();  // 00D085A0  cUnLockDisp destructor
    void ctor_00D0A5B0();  // 00D0A5B0  cTitleDisp destructor

    // fields (absolute offsets from object start)
    int &field04()    { return *(int *)((char *)this + 0x04); }  // +0x04  init 0
    int &field08()    { return *(int *)((char *)this + 0x08); }  // +0x08  init 0
    int &field0C()    { return *(int *)((char *)this + 0x0C); }  // +0x0C  init 0
    int &field10()    { return *(int *)((char *)this + 0x10); }  // +0x10  init 1
    int &ownedObj()   { return *(int *)((char *)this + 0x14); }  // +0x14  controlled object (released in dtor)
    int &field18()    { return *(int *)((char *)this + 0x18); }  // +0x18  init 0, cleared in dtor
};
