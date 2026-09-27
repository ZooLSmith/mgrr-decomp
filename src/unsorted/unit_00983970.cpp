// src/unsorted/unit_00983970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00983970..009855F0, 55 functions

#include "types.h"

// 00983970  FUN_00983970  size=91  [run]
undefined8
FUN_00983970(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  bool bVar2;
  
  LOCK();
  lVar1 = *param_1;
  bVar2 = CONCAT44(param_5,param_4) == lVar1;
  if (bVar2) {
    *param_1 = CONCAT44(param_3,param_2);
  }
  else {
    param_5 = (undefined4)((ulonglong)lVar1 >> 0x20);
  }
  UNLOCK();
  return CONCAT44(param_5,(uint)bVar2);
}

// 00983B60  FUN_00983b60  size=237  [run]
void __fastcall FUN_00983b60(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00932720();
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    uVar4 = FUN_00cb9940();
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    uVar4 = FUN_00cbb240();
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar4 = cEnemyName::cEnemyName();
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    uVar4 = cEnemyItemDisp::cEnemyItemDisp();
    *(undefined4 *)(param_1 + 100) = uVar4;
    uVar4 = FUN_00cb8a10();
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    uVar4 = FUN_00cb8510();
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    uVar4 = FUN_00cb94b0();
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    uVar4 = cNpcInfo::cNpcInfo();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    uVar4 = cWeakPointDisp::cWeakPointDisp();
    *(undefined4 *)(param_1 + 0x78) = uVar4;
    if (((uVar1 & 0xff0) == 0x470) || ((uVar1 & 0xff0) == 0x750)) {
      uVar4 = cWeakPointLineDisp::cWeakPointLineDisp();
      *(undefined4 *)(param_1 + 0x7c) = uVar4;
    }
    uVar4 = FUN_00cbb3f0();
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    uVar4 = FUN_00cb7450();
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
    uVar4 = FUN_00d3bd70();
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    uVar4 = FUN_00cbf480();
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    if ((DAT_01bea090 & 0x80000000) == 0) {
      uVar4 = cEnemyEnergyGauge::cEnemyEnergyGauge();
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      uVar4 = FUN_00cbbb30();
      *(undefined4 *)(param_1 + 0x8c) = uVar4;
      return;
    }
    uVar4 = cEnemyEnergyGaugePrologue::cEnemyEnergyGaugePrologue();
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    uVar4 = FUN_00cbbb30();
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
  }
  return;
}

// 00983C50  FUN_00983c50  size=107  [run]
int __thiscall FUN_00983c50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  iVar3 = 0;
  if (iVar2 != 0) {
    while (piVar1 = (int *)(iVar2 + 0xc), *(int *)(iVar2 + 4) != param_2) {
      iVar2 = *piVar1;
      if (*piVar1 == 0) {
        return 0;
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)(param_1 + 200);
    do {
      iVar2 = *piVar1;
      LOCK();
      iVar3 = *piVar1;
      bVar4 = iVar2 == iVar3;
      if (bVar4) {
        *piVar1 = 1;
        iVar3 = iVar2;
      }
      UNLOCK();
    } while (!bVar4);
  }
  return iVar3;
}

// 00983CF0  FUN_00983cf0  size=55  [run]
void __fastcall FUN_00983cf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 1;
  uVar1 = FUN_00932720();
  iVar2 = FUN_00a4a350(uVar1);
  if (iVar2 == 1) {
    uVar1 = FUN_00cc1360();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  uVar1 = cActionMessage::cActionMessage();
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_00cbc1c0();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

// 00983D30  FUN_00983d30  size=30  [run]
undefined4 __thiscall FUN_00983d30(undefined4 param_1,byte param_2)

{
  FUN_00cc1340();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00983D50  FUN_00983d50  size=48  [run]
void __fastcall FUN_00983d50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00d2a250();
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00d31cd0();
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00d35bc0();
      return;
    }
  }
  return;
}

// 00983DE0  FUN_00983de0  size=374  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00983de0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00932720();
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    uVar4 = cChainCombo::cChainCombo();
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    uVar4 = FUN_00cbac40();
    *(undefined4 *)(param_1 + 0x44) = uVar4;
    uVar4 = cWeaponInfoDisp::cWeaponInfoDisp_2();
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    DAT_01dc13f0 = 1;
    DAT_01dc13f4 = 1;
    if ((DAT_01bea090 & 0x80000000) == 0) {
      uVar4 = cSubWeaponInfoDisp::cSubWeaponInfoDisp();
      *(undefined4 *)(param_1 + 0x4c) = uVar4;
      DAT_01dc134c = 1;
      DAT_01dc1348 = 1;
      uVar4 = cBossWeaponInfoDisp::cBossWeaponInfoDisp();
      *(undefined4 *)(param_1 + 0x50) = uVar4;
      DAT_01dc074c = 1;
      _DAT_01dc0748 = 1;
    }
    uVar4 = FUN_00cb9310();
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    uVar4 = FUN_00cd5a90();
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    uVar4 = FUN_00cd5cd0();
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    uVar4 = cResultDisp::cResultDisp();
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    uVar4 = cQTEButton::cQTEButton();
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((DAT_01bea090 & 0x80000000) == 0) {
      if ((DAT_01bea094 & 0x20000) == 0) {
        uVar4 = FUN_00d2cf90();
        *(undefined4 *)(param_1 + 0x34) = uVar4;
        DAT_01dc087c = 1;
      }
    }
    else {
      uVar4 = FUN_00d2f9c0();
      *(undefined4 *)(param_1 + 0x30) = uVar4;
    }
    uVar4 = cJammingDie::cJammingDie();
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    uVar4 = cJammingWall::cJammingWall_2();
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    uVar4 = FUN_00cbbc50();
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    uVar4 = cVisorMode::cVisorMode();
    *(undefined4 *)(param_1 + 100) = uVar4;
    uVar4 = cRpgSite::cRpgSite();
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    uVar4 = cSentryGunSite::cSentryGunSite_2();
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    uVar4 = FUN_00cbf7e0();
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    uVar4 = cStealthKillTarget::cStealthKillTarget();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    uVar4 = FUN_00cb7830();
    *(undefined4 *)(param_1 + 0x78) = uVar4;
    uVar4 = FUN_00cb8e40();
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
    uVar4 = FUN_00cc11b0();
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    iVar3 = FUN_00a4a350(uVar1);
    if (iVar3 != 0) {
      uVar1 = cVRMissionBackPanel::cVRMissionBackPanel();
      *(undefined4 *)(param_1 + 0x84) = uVar1;
    }
    uVar1 = cEffectDatsuDisp::cEffectDatsuDisp();
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = cEffectSouDisp::cEffectSouDisp();
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = cEffectZanDisp::cEffectZanDisp_2();
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  return;
}

// 00983F60  FUN_00983f60  size=55  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00983f60(int param_1)

{
  if ((((*(int *)(param_1 + 0x88) != 0) && ((DAT_01bea094 & 0x40000) != 0)) &&
      (_DAT_01dc203c != 0.0)) && (*(int *)(param_1 + 0x34) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00983f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x34) + 4))();
    return;
  }
  return;
}

// 00983FA0  FUN_00983fa0  size=13  [run]
void __fastcall FUN_00983fa0(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00cd29d0();
    return;
  }
  return;
}

// 00983FD0  FUN_00983fd0  size=107  [run]
int __thiscall FUN_00983fd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar3 = 0;
  if (iVar2 != 0) {
    while (piVar1 = (int *)(iVar2 + 0xc), *(int *)(iVar2 + 4) != param_2) {
      iVar2 = *piVar1;
      if (*piVar1 == 0) {
        return 0;
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)(param_1 + 0x118);
    do {
      iVar2 = *piVar1;
      LOCK();
      iVar3 = *piVar1;
      bVar4 = iVar2 == iVar3;
      if (bVar4) {
        *piVar1 = 1;
        iVar3 = iVar2;
      }
      UNLOCK();
    } while (!bVar4);
  }
  return iVar3;
}

// 009840B0  FUN_009840b0  size=262  [run]
void __thiscall FUN_009840b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_20 [32];
  
  iVar4 = 0;
  do {
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = 0;
    local_20[0] = '\0';
    _sprintf_s(local_20,0x20,"nr_navi_%02d",iVar4);
    piVar1 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar1 + 0x20))(local_20,param_2);
    if (iVar2 == 0) {
      _sprintf_s(local_20,0x20,"nr_navi_norange_%02d",iVar4);
      piVar1 = (int *)FUN_00c14bb0();
      iVar2 = (**(code **)(*piVar1 + 0x20))(local_20,param_2);
      if (iVar2 != 0) goto LAB_00984146;
    }
    else {
LAB_00984146:
      iVar2 = FUN_00a7c8a0();
      if ((iVar2 != 0) && (iVar3 = *(int *)(param_1 + 0x19c), iVar3 != 0)) {
LAB_00984160:
        piVar1 = (int *)(iVar3 + 0x14);
        if (*(int *)(iVar3 + 4) != iVar2) break;
        *(undefined4 *)(iVar3 + 4) = 0;
        piVar1 = (int *)(param_1 + 0x198);
        do {
          iVar3 = *piVar1;
          LOCK();
          iVar2 = *piVar1;
          if (iVar3 == iVar2) {
            *piVar1 = 1;
          }
          UNLOCK();
        } while (iVar3 != iVar2);
      }
    }
LAB_009841a5:
    iVar4 = iVar4 + 1;
    if (0x62 < iVar4) {
      return;
    }
  } while( true );
  iVar3 = *piVar1;
  if (*piVar1 == 0) goto LAB_009841a5;
  goto LAB_00984160;
}

// 009841C0  FUN_009841c0  size=107  [run]
int __thiscall FUN_009841c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0x19c);
  iVar3 = 0;
  if (iVar2 != 0) {
    while (piVar1 = (int *)(iVar2 + 0x14), *(int *)(iVar2 + 4) != param_2) {
      iVar2 = *piVar1;
      if (*piVar1 == 0) {
        return 0;
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)(param_1 + 0x198);
    do {
      iVar2 = *piVar1;
      LOCK();
      iVar3 = *piVar1;
      bVar4 = iVar2 == iVar3;
      if (bVar4) {
        *piVar1 = 1;
        iVar3 = iVar2;
      }
      UNLOCK();
    } while (!bVar4);
  }
  return iVar3;
}

// 00984370  FUN_00984370  size=183  [run]
void __fastcall FUN_00984370(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

// 00984430  FUN_00984430  size=239  [run]
void __fastcall FUN_00984430(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      iVar2 = FUN_009366d0();
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x24) == 0) {
          uVar3 = FUN_00cb5ea0();
          *(undefined4 *)(param_1 + 0x24) = uVar3;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
  }
  else if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar2 = FUN_00cb5fc0();
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 2;
      }
    }
  }
  else if (iVar2 == 2) {
    if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    bVar1 = 0;
    while( true ) {
      iVar2 = *(int *)(param_1 + 0x60 + (uint)bVar1 * 4);
      if ((iVar2 != -1) && (iVar2 != *(int *)(param_1 + 0x50 + (uint)bVar1 * 4))) break;
      bVar1 = bVar1 + 1;
      if (1 < bVar1) {
        FUN_00d39720();
        return;
      }
    }
    uVar4 = (uint)bVar1;
    FUN_00cb5ec0(*(undefined4 *)(param_1 + 0x60 + uVar4 * 4),bVar1);
    *(undefined4 *)(param_1 + 0x50 + uVar4 * 4) = *(undefined4 *)(param_1 + 0x60 + uVar4 * 4);
    *(undefined4 *)(param_1 + 0x60 + uVar4 * 4) = 0xffffffff;
    FUN_00d39720();
    return;
  }
  return;
}

// 00984530  FUN_00984530  size=149  [run]
void __fastcall FUN_00984530(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  
  if (((*(int *)(param_1 + 0x18) != 0) && (DAT_01dc1488 != 0)) && (DAT_01dc1490 != 0)) {
    puVar2 = (undefined4 *)FUN_00caac30(2);
    local_30 = *puVar2;
    local_2c = puVar2[1];
    local_28 = puVar2[2];
    local_24 = puVar2[3];
    FUN_00d9fa80(&local_20,&local_30);
    iVar1 = *(int *)(param_1 + 0x18);
    *(float *)(iVar1 + 0x40) = local_20 + 44.0;
    *(float *)(iVar1 + 0x44) = local_1c - 36.0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  return;
}

// 009845D0  FUN_009845d0  size=15  [run]
void __fastcall FUN_009845d0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// 009845E0  FUN_009845e0  size=17  [run]
void __thiscall FUN_009845e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 00984600  FUN_00984600  size=31  [run]
undefined4 __fastcall FUN_00984600(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cb6200(), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

// 00984620  FUN_00984620  size=33  [run]
bool __fastcall FUN_00984620(int param_1)

{
  if (((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x20) == 0)) &&
     (*(int *)(param_1 + 0x24) == 0)) {
    return *(int *)(param_1 + 0x28) != 0;
  }
  return true;
}

// 00984650  FUN_00984650  size=12  [run]
undefined4 __thiscall FUN_00984650(int param_1,byte param_2)

{
  return *(undefined4 *)(param_1 + 0x68 + (uint)param_2 * 4);
}

// 00984660  FUN_00984660  size=16  [run]
void __thiscall FUN_00984660(int param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 0x68 + (uint)param_2 * 4) = 1;
  return;
}

// 00984670  FUN_00984670  size=16  [run]
void __thiscall FUN_00984670(int param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 0x68 + (uint)param_2 * 4) = 0;
  return;
}

// 00984680  FUN_00984680  size=52  [run]
void __thiscall FUN_00984680(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00cb6810(param_2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00cb6500(param_2);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00cb6cc0(param_2);
  }
  return;
}

// 009846C0  FUN_009846c0  size=41  [run]
void __fastcall FUN_009846c0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00cb68b0();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00cb6470();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00cb6d30();
    return;
  }
  return;
}

// 00984740  FUN_00984740  size=39  [run]
bool __fastcall FUN_00984740(int param_1)

{
  if ((((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x30) == 0)) &&
      (*(int *)(param_1 + 0x1c) == 0)) && (*(int *)(param_1 + 0x20) == 0)) {
    return *(int *)(param_1 + 0x28) != 0;
  }
  return true;
}

// 00984770  FUN_00984770  size=76  [run]
undefined4 __thiscall FUN_00984770(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (iVar1 = FUN_00cb6850(param_2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (iVar1 = FUN_00cb6480(param_2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (iVar1 = FUN_00cb6d00(param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// 009847C0  FUN_009847c0  size=76  [run]
undefined4 __thiscall FUN_009847c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (iVar1 = FUN_00cb6880(param_2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (iVar1 = FUN_00cb64c0(param_2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (iVar1 = FUN_00cb6d20(param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// 00984810  FUN_00984810  size=183  [run]
void __thiscall FUN_00984810(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x101;
  switch(param_3) {
  case 1:
    uVar1 = 0x301;
    break;
  case 2:
    uVar1 = 0x201;
    break;
  case 4:
    uVar1 = 0x401;
    break;
  case 0x10:
    uVar1 = 0x102;
    break;
  case 0x11:
    uVar1 = 0x302;
    break;
  case 0x12:
    uVar1 = 0x202;
    break;
  case 0x14:
    uVar1 = 0x402;
    break;
  case 100:
    uVar1 = 0x100;
    switch(*(undefined4 *)(param_1 + 0x40)) {
    case 1:
    case 0x11:
      uVar1 = 0x300;
      break;
    case 2:
    case 0x12:
      uVar1 = 0x200;
      break;
    case 4:
    case 0x14:
      uVar1 = 0x400;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = param_3;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00cb6960(param_2,uVar1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00cb6550(param_2,uVar1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00cb6da0(param_2,uVar1);
  }
  return;
}

// 00984990  FUN_00984990  size=20  [run]
void __thiscall FUN_00984990(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb0) = param_2;
  }
  return;
}

// 009849B0  FUN_009849b0  size=62  [run]
void __thiscall FUN_009849b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  if (param_3 == 1) goto LAB_009849dd;
  if (param_3 != 2) {
    if (*(int *)(param_1 + 0x50) == -1) {
      iVar1 = 0;
      goto LAB_009849dd;
    }
    if (*(int *)(param_1 + 0x54) != -1) goto LAB_009849dd;
  }
  iVar1 = 1;
LAB_009849dd:
  if (*(int *)(param_1 + 0x50 + iVar1 * 4) != param_2) {
    *(int *)(param_1 + 0x60 + iVar1 * 4) = param_2;
  }
  return;
}

// 009849F0  FUN_009849f0  size=15  [run]
void __fastcall FUN_009849f0(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00cb5fa0();
    return;
  }
  return;
}

// 00984A00  FUN_00984a00  size=13  [run]
void __fastcall FUN_00984a00(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00cb5f10();
    return;
  }
  return;
}

// 00984A10  FUN_00984a10  size=27  [run]
bool __fastcall FUN_00984a10(int param_1)

{
  if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
    return *(int *)(param_1 + 0x24) != 0;
  }
  return true;
}

// 00984A30  FUN_00984a30  size=34  [run]
undefined4 __thiscall FUN_00984a30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_00cb5f20(param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00984A60  FUN_00984a60  size=34  [run]
bool __thiscall FUN_00984a60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_00cb5f60(param_2);
    return iVar1 != 0;
  }
  return true;
}

// 00984A90  FUN_00984a90  size=147  [run]
void __thiscall FUN_00984a90(int param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 1:
    break;
  case 2:
    break;
  case 4:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x14:
    break;
  case 100:
    switch(*(undefined4 *)(param_1 + 0x44)) {
    case 1:
    case 0x11:
      break;
    case 2:
    case 0x12:
      break;
    case 4:
    case 0x14:
    }
  }
  *(undefined4 *)(param_1 + 0x44) = param_3;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00cb5ff0();
    return;
  }
  return;
}

// 00984BE0  FUN_00984be0  size=49  [run]
void __thiscall FUN_00984be0(int param_1,undefined4 *param_2,byte param_3)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar1 = (undefined4 *)((param_3 + 5) * 0x10 + *(int *)(param_1 + 0x24));
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  return;
}

// 00984C30  FUN_00984c30  size=176  [run]
int __fastcall FUN_00984c30(int param_1)

{
  cRadioModelParamData::cRadioModelParamData();
  *(undefined4 *)(param_1 + 0xca0) = 0;
  *(undefined4 *)(param_1 + 0xca4) = 0;
  *(undefined4 *)(param_1 + 0xca8) = 0;
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  *(undefined4 *)(param_1 + 0xcac) = 0;
  *(undefined4 *)(param_1 + 0xcf4) = 0;
  *(undefined4 *)(param_1 + 0xcb0) = 0;
  *(undefined4 *)(param_1 + 0xcf8) = 0;
  *(undefined4 *)(param_1 + 0xcb4) = 0;
  *(undefined4 *)(param_1 + 0xcfc) = 0;
  *(undefined4 *)(param_1 + 0xcb8) = 0;
  *(undefined4 *)(param_1 + 0xd00) = 0;
  *(undefined4 *)(param_1 + 0xcbc) = 0;
  *(undefined4 *)(param_1 + 0xd04) = 0;
  *(undefined4 *)(param_1 + 0xcc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xccc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcec) = 0xffffffff;
  return param_1;
}

// 00984CE0  FUN_00984ce0  size=123  [run]
void __thiscall FUN_00984ce0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(&DAT_0188dc30 + param_2 * 0xc) != -1) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0xcd8);
    do {
      if (*piVar2 == param_2) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 6);
    iVar1 = *(int *)(param_1 + 0xca4);
    iVar3 = 0;
    while (*(int *)(param_1 + 0xcf0 + iVar1 * 4) != 0) {
      iVar1 = iVar1 + 1;
      if (5 < iVar1) {
        iVar1 = 0;
      }
      iVar3 = iVar3 + 1;
      if (5 < iVar3) {
        return;
      }
    }
    *(int *)(param_1 + 0xca4) = iVar1;
    *(int *)(param_1 + 0xcd8 + iVar1 * 4) = param_2;
    *(int *)(param_1 + 0xca4) = *(int *)(param_1 + 0xca4) + 1;
    if (5 < *(int *)(param_1 + 0xca4)) {
      *(undefined4 *)(param_1 + 0xca4) = 0;
    }
  }
  return;
}

// 00984E50  FUN_00984e50  size=70  [run]
void __thiscall FUN_00984e50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00984e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00984EA0  FUN_00984ea0  size=155  [run]
longlong __fastcall FUN_00984ea0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 00984F50  FUN_00984f50  size=70  [run]
void __thiscall FUN_00984f50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00984f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00984FA0  FUN_00984fa0  size=155  [run]
longlong __fastcall FUN_00984fa0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 00985050  FUN_00985050  size=70  [run]
void __thiscall FUN_00985050(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00985090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 009850A0  FUN_009850a0  size=155  [run]
longlong __fastcall FUN_009850a0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 00985150  FUN_00985150  size=70  [run]
void __thiscall FUN_00985150(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00985190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 009851A0  FUN_009851a0  size=155  [run]
longlong __fastcall FUN_009851a0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 009852A0  FUN_009852a0  size=71  [run]
void __thiscall FUN_009852a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x10) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x009852e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 009852F0  FUN_009852f0  size=155  [run]
longlong __fastcall FUN_009852f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x10));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 009853A0  FUN_009853a0  size=71  [run]
void __thiscall FUN_009853a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x10) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x009853e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 009853F0  FUN_009853f0  size=155  [run]
longlong __fastcall FUN_009853f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x10));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 009854A0  FUN_009854a0  size=71  [run]
void __thiscall FUN_009854a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x10) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x009854e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 009854F0  FUN_009854f0  size=155  [run]
longlong __fastcall FUN_009854f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x10));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 009855A0  FUN_009855a0  size=71  [run]
void __thiscall FUN_009855a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x18) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x009855e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 009855F0  FUN_009855f0  size=155  [run]
longlong __fastcall FUN_009855f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x18));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

