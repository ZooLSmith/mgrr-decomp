// src/vrmission/VRMission.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0095A1C0..00962600, 177 functions

#include "mgrr.h"

// 0095A1C0  FUN_0095a1c0  size=166  [callgraph]
void __fastcall FUN_0095a1c0(void *param_1)

{
  _memset(param_1,0,0xec);
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x68) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0xbf800000;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  *(undefined4 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(undefined4 *)((int)param_1 + 0xc0) = 0;
  *(undefined4 *)((int)param_1 + 0xc4) = 0;
  *(undefined4 *)((int)param_1 + 200) = 0;
  *(undefined4 *)((int)param_1 + 0xcc) = 0;
  *(undefined4 *)((int)param_1 + 0xdc) = 0;
  *(undefined4 *)((int)param_1 + 0xd0) = 0;
  *(undefined4 *)((int)param_1 + 0xe0) = 0;
  *(undefined4 *)((int)param_1 + 0xe8) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xe4) = 0xffffffff;
  return;
}

// 0095A280  FUN_0095a280  size=65  [callgraph]
void __fastcall FUN_0095a280(void *param_1)

{
  _memset(param_1,0,0x108);
  *(undefined4 *)((int)param_1 + 0x104) = 0xffffffff;
  FUN_0095a1c0();
  *(undefined4 *)((int)param_1 + 0xf0) = 0;
  *(undefined4 *)((int)param_1 + 0xf4) = 0;
  *(undefined4 *)((int)param_1 + 0xf8) = 0;
  *(undefined4 *)((int)param_1 + 0xfc) = 0;
  return;
}

// 0095A2D0  FUN_0095a2d0  size=100  [callgraph]
undefined4 __thiscall FUN_0095a2d0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  fVar1 = 0.0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 1;
  do {
    if (uVar3 == 0) {
      fVar1 = *(float *)(param_1 + 100);
    }
    else if (uVar3 == 1) {
      fVar1 = *(float *)(param_1 + 0x68);
    }
    else if (uVar3 == 2) {
      fVar1 = *(float *)(param_1 + 0x6c);
    }
    if (param_2 < fVar1 * 0.016666668) {
      *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) | uVar2;
      uVar4 = 1;
    }
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while (uVar3 < 3);
  return uVar4;
}

// 0095A340  FUN_0095a340  size=169  [callgraph]
undefined4 __thiscall FUN_0095a340(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = 0;
  pfVar2 = (float *)(param_1 + 0xf0);
  do {
    if (*pfVar2 != 0.0) {
      iVar1 = 0;
      pfVar2 = (float *)(param_1 + 0xf0);
      while ((*pfVar2 != 0.0 && (*pfVar2 <= param_2))) {
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 1;
        if (2 < iVar1) {
          return 0;
        }
      }
      iVar4 = 2;
      puVar3 = (undefined4 *)(param_1 + 0xf8);
      do {
        if (iVar1 == iVar4) {
          *(float *)(param_1 + 0xf0 + iVar4 * 4) = param_2;
          return 1;
        }
        iVar4 = iVar4 + -1;
        *puVar3 = puVar3[-1];
        puVar3 = puVar3 + -1;
      } while (-1 < iVar4);
      return 1;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 3);
  *(float *)(param_1 + 0xf0) = param_2;
  return 1;
}

// 0095A420  VRMission::cMistake::vf04  size=1  [class]
void VRMission::cMistake::vf04(void)

{
  return;
}

// 0095A430  VRMission::cMistake::vf08  size=6  [class]
undefined4 VRMission::cMistake::vf08(void)

{
  return 1;
}

// 0095A440  VRMission::cMistake::vf0C  size=1  [class]
void VRMission::cMistake::vf0C(void)

{
  return;
}

// 0095A450  VRMission::cMistake::vf10  size=1  [class]
void VRMission::cMistake::vf10(void)

{
  return;
}

// 0095A460  VRMission::cMistake::vf14  size=3  [class]
undefined4 VRMission::cMistake::vf14(void)

{
  return 0;
}

// 0095A470  VRMission::cMistake::vf18  size=4  [class]
undefined4 __fastcall VRMission::cMistake::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0095A480  VRMission::cMistake::vf1C  size=8  [class]
void __fastcall VRMission::cMistake::vf1C(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// 0095A4E0  VRMission::cVRMistakeTimeUp::vf04  size=1  [class]
void VRMission::cVRMistakeTimeUp::vf04(void)

{
  return;
}

// 0095A500  VRMission::cVRMistakeTimeUp::vf0C  size=1  [class]
void VRMission::cVRMistakeTimeUp::vf0C(void)

{
  return;
}

// 0095A510  VRMission::cVRMistakeTimeUp::vf10  size=1  [class]
void VRMission::cVRMistakeTimeUp::vf10(void)

{
  return;
}

// 0095A520  VRMission::cVRMistakeTimeUp::vf14  size=4  [class]
undefined4 __fastcall VRMission::cVRMistakeTimeUp::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0095A530  FUN_0095a530  size=21  [between]
void __fastcall FUN_0095a530(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 4) = (float)(fVar1 + (float10)*(float *)(param_1 + 4));
  return;
}

// 0095A570  FUN_0095a570  size=26  [between]
void __fastcall FUN_0095a570(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 4) = 0xbf800000;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0095A590  FUN_0095a590  size=12  [between]
undefined4 __fastcall FUN_0095a590(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 0095A5A0  VRMission::cVRMistakeNoDatsuKill::vf08  size=73  [class]
undefined4 __fastcall VRMission::cVRMistakeNoDatsuKill::vf08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00c1b9a0();
  uVar2 = (**(code **)(*piVar1 + 0x84))();
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  piVar1 = (int *)FUN_00c1b9a0();
  uVar2 = (**(code **)(*piVar1 + 0x88))();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_00c19640();
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 1;
}

// 0095A5F0  VRMission::cVRMistakeNoDatsuKill::vf14  size=4  [class]
undefined4 __fastcall VRMission::cVRMistakeNoDatsuKill::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0095A660  VRMission::cVRMistakeNoNinjyaKill::vf04  size=9  [class]
void __fastcall VRMission::cVRMistakeNoNinjyaKill::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 0095A670  VRMission::cVRMistakeNoNinjyaKill::vf08  size=50  [class]
undefined4 __fastcall VRMission::cVRMistakeNoNinjyaKill::vf08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00c1b9a0();
  uVar2 = (**(code **)(*piVar1 + 0x8c))();
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  piVar1 = (int *)FUN_00c1b9a0();
  uVar2 = (**(code **)(*piVar1 + 0x84))();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return 1;
}

// 0095A6B0  VRMission::cVRMistakeNoNinjyaKill::vf0C  size=63  [class]
void __fastcall VRMission::cVRMistakeNoNinjyaKill::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c1b9a0();
  iVar2 = (**(code **)(*piVar1 + 0x8c))();
  *(int *)(param_1 + 0x10) = iVar2 - *(int *)(param_1 + 0x18);
  piVar1 = (int *)FUN_00c1b9a0();
  iVar2 = (**(code **)(*piVar1 + 0x84))();
  iVar2 = iVar2 - *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x14) = iVar2;
  if (*(int *)(param_1 + 0x10) != iVar2) {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}

// 0095A6F0  VRMission::cVRMistakeNoNinjyaKill::vf10  size=1  [class]
void VRMission::cVRMistakeNoNinjyaKill::vf10(void)

{
  return;
}

// 0095A700  VRMission::cVRMistakeNoNinjyaKill::vf14  size=4  [class]
undefined4 __fastcall VRMission::cVRMistakeNoNinjyaKill::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0095A710  FUN_0095a710  size=21  [between]
void __fastcall FUN_0095a710(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 4) = (float)(fVar1 + (float10)*(float *)(param_1 + 4));
  return;
}

// 0095A750  FUN_0095a750  size=26  [between]
void __fastcall FUN_0095a750(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 4) = 0xbf800000;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0095A770  FUN_0095a770  size=12  [between]
undefined4 __fastcall FUN_0095a770(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 0095A780  VRMission::cVRMistakeNoDatsuKillDlc::vf08  size=80  [class]
undefined4 __fastcall VRMission::cVRMistakeNoDatsuKillDlc::vf08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00c1b9a0();
  uVar2 = (**(code **)(*piVar1 + 0x84))();
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  piVar1 = (int *)FUN_00c1b9a0();
  uVar2 = (**(code **)(*piVar1 + 0x88))();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_00c19640();
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}

// 0095A7D0  VRMission::cVRMistakeNoDatsuKillDlc::vf14  size=4  [class]
undefined4 __fastcall VRMission::cVRMistakeNoDatsuKillDlc::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0095A840  VRMission::cObjective::vf04  size=1  [class]
void VRMission::cObjective::vf04(void)

{
  return;
}

// 0095A850  VRMission::cObjective::vf08  size=6  [class]
undefined4 VRMission::cObjective::vf08(void)

{
  return 1;
}

// 0095A860  VRMission::cObjective::vf0C  size=1  [class]
void VRMission::cObjective::vf0C(void)

{
  return;
}

// 0095A870  VRMission::cObjective::vf10  size=1  [class]
void VRMission::cObjective::vf10(void)

{
  return;
}

// 0095A880  VRMission::cObjective::vf14  size=4  [class]
undefined4 __fastcall VRMission::cObjective::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0095A890  VRMission::cObjective::vf18  size=4  [class]
undefined4 __fastcall VRMission::cObjective::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0095A8A0  VRMission::cObjective::vf1C  size=8  [class]
void __fastcall VRMission::cObjective::vf1C(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// 0095A900  VRMission::cVRObjectiveEnemyAllKill::vf04  size=1  [class]
void VRMission::cVRObjectiveEnemyAllKill::vf04(void)

{
  return;
}

// 0095A910  VRMission::cVRObjectiveEnemyAllKill::vf08  size=6  [class]
undefined4 VRMission::cVRObjectiveEnemyAllKill::vf08(void)

{
  return 1;
}

// 0095A920  VRMission::cVRObjectiveEnemyAllKill::vf0C  size=1  [class]
void VRMission::cVRObjectiveEnemyAllKill::vf0C(void)

{
  return;
}

// 0095A930  VRMission::cVRObjectiveEnemyAllKill::vf10  size=1  [class]
void VRMission::cVRObjectiveEnemyAllKill::vf10(void)

{
  return;
}

// 0095A940  VRMission::cVRObjectiveEnemyAllKill::vf14  size=4  [class]
undefined4 __fastcall VRMission::cVRObjectiveEnemyAllKill::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0095A9E0  VRMission::cVRObjectiveKogekkoStunKill::vf08  size=64  [class]
undefined4 __fastcall VRMission::cVRObjectiveKogekkoStunKill::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c19640();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return 1;
}

// 0095AA20  VRMission::cVRObjectiveKogekkoStunKill::vf14  size=4  [class]
undefined4 __fastcall VRMission::cVRObjectiveKogekkoStunKill::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0095AA30  FUN_0095aa30  size=131  [between]
void __fastcall FUN_0095aa30(int param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0x20) == 0x12040) &&
     (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18))) {
    *(undefined4 *)(param_1 + 4) = 1;
    iVar1 = FUN_00c78580(0x14,&local_40);
    if (iVar1 != 0) {
      local_14 = 0x3f800000;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0x3f800000;
      local_20 = local_40;
      local_1c = local_3c;
      local_18 = local_38;
      local_2c = local_34;
      FUN_00a4d8a0(&local_20,&local_30,0);
    }
  }
  return;
}

// 0095AAE0  VRMission::cVRPhase::vf04  size=1  [class]
void VRMission::cVRPhase::vf04(void)

{
  return;
}

// 0095AAF0  VRMission::cVRPhase::vf08  size=6  [class]
undefined4 VRMission::cVRPhase::vf08(void)

{
  return 1;
}

// 0095AB00  VRMission::cVRPhase::vf0C  size=1  [class]
void VRMission::cVRPhase::vf0C(void)

{
  return;
}

// 0095AB10  VRMission::cVRPhase::vf10  size=1  [class]
void VRMission::cVRPhase::vf10(void)

{
  return;
}

// 0095AB40  FUN_0095ab40  size=15  [between]
void __fastcall FUN_0095ab40(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}

// 0095AB50  FUN_0095ab50  size=6  [between]
undefined4 FUN_0095ab50(void)

{
  return 1;
}

// 0095AB60  FUN_0095ab60  size=95  [between]
void __fastcall FUN_0095ab60(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_009d4800(0);
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x18))();
  if (iVar3 != *(int *)(param_1 + 0xc)) {
    if (iVar3 == 0xb10) {
      FUN_009df830(0,1);
      *(undefined4 *)(param_1 + 0xc) = 0xb10;
      return;
    }
    FUN_009df830(0,0);
    *(int *)(param_1 + 0xc) = iVar3;
  }
  return;
}

// 0095ABC0  FUN_0095abc0  size=15  [between]
void __fastcall FUN_0095abc0(int param_1)

{
  FUN_009df830(0,*(undefined4 *)(param_1 + 8));
  return;
}

// 0095ABF0  VRMission::cVRPhaseE08::vf04  size=15  [class]
void __fastcall VRMission::cVRPhaseE08::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}

// 0095AC00  VRMission::cVRPhaseE08::vf08  size=6  [class]
undefined4 VRMission::cVRPhaseE08::vf08(void)

{
  return 1;
}

// 0095AC10  VRMission::cVRPhaseE08::vf0C  size=95  [class]
void __fastcall VRMission::cVRPhaseE08::vf0C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_009d4800(0);
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x18))();
  if (iVar3 != *(int *)(param_1 + 0xc)) {
    if (iVar3 == 0xb1f) {
      FUN_009df830(0,1);
      *(undefined4 *)(param_1 + 0xc) = 0xb1f;
      return;
    }
    FUN_009df830(0,0);
    *(int *)(param_1 + 0xc) = iVar3;
  }
  return;
}

// 0095AC70  VRMission::cVRPhaseE08::vf10  size=15  [class]
void __fastcall VRMission::cVRPhaseE08::vf10(int param_1)

{
  FUN_009df830(0,*(undefined4 *)(param_1 + 8));
  return;
}

// 0095ACF0  FUN_0095acf0  size=100  [between]
uint __fastcall FUN_0095acf0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 1;
  piVar4 = param_1 + 4;
  iVar2 = 3;
  do {
    if (*piVar4 != 0) {
      uVar1 = (**(code **)(*(int *)*piVar4 + 8))();
      uVar3 = uVar3 & uVar1;
    }
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 3;
  piVar4 = param_1;
  do {
    piVar4 = piVar4 + 1;
    if (*piVar4 != 0) {
      uVar1 = (**(code **)(*(int *)*piVar4 + 8))();
      uVar3 = uVar3 & uVar1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[9] = 1;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  return uVar3;
}

// 0095AD60  FUN_0095ad60  size=107  [between]
void __fastcall FUN_0095ad60(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 3;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x10))();
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
        *piVar1 = 0;
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1 = param_1 + 4;
  iVar2 = 3;
  do {
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 0x10))();
      if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*param_1)(1);
        *param_1 = 0;
      }
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0095AF80  FUN_0095af80  size=41  [between]
void __fastcall FUN_0095af80(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return;
}

// 0095B120  FUN_0095b120  size=57  [between]
undefined4 __thiscall FUN_0095b120(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((param_2 < 0x3c) && (param_3 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + param_1);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    return 1;
  }
  return 0;
}

// 0095B1B0  FUN_0095b1b0  size=104  [between]
undefined4 __fastcall FUN_0095b1b0(int param_1)

{
  _memset((void *)(param_1 + 0x18),0,0x108);
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  FUN_0095a1c0();
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  _memset((void *)(param_1 + 0x120),0,0x3d0);
  return 1;
}

// 0095B280  FUN_0095b280  size=54  [between]
undefined4 __thiscall FUN_0095b280(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x108);
  param_2[1] = *(undefined4 *)(param_1 + 0x10c);
  param_2[2] = *(undefined4 *)(param_1 + 0x110);
  param_2[3] = *(undefined4 *)(param_1 + 0x114);
  return 1;
}

// 0095B330  FUN_0095b330  size=47  [between]
undefined4 __thiscall FUN_0095b330(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = (undefined4 *)(param_1 + 0x18);
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}

// 0095B410  FUN_0095b410  size=183  [between]
undefined4 __thiscall FUN_0095b410(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_20 [28];
  
  if (param_2 != (int *)0x0) {
    if ((param_2[0x40] == 0) || (param_2[0x29] == 1)) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == *param_2) {
      *(int *)(param_1 + 0x108) = param_2[0x3c];
      *(int *)(param_1 + 0x10c) = param_2[0x3d];
      *(int *)(param_1 + 0x110) = param_2[0x3e];
      *(int *)(param_1 + 0x114) = param_2[0x3f];
      iVar1 = FUN_0095b280(local_20);
      if (iVar1 != 0) {
        iVar2 = FUN_0095b120(iVar2 + -1,local_20);
        if (iVar2 != 0) {
          uVar3 = FUN_009c6820(3,param_1 + 0x120);
          return uVar3;
        }
      }
    }
  }
  return 0;
}

// 0095B660  FUN_0095b660  size=102  [between]
undefined4 * __thiscall FUN_0095b660(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  FUN_00a7c930();
  *param_1 = param_2;
  param_1[0x55] = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  FUN_00a7c950();
  return param_1;
}

// 0095B740  FUN_0095b740  size=73  [between]
void __fastcall FUN_0095b740(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x128) == 0) || (*(int *)(*(int *)(param_1 + 0x128) + 0x1b8) == 99)) {
    uVar1 = cFade::set(0,0,0xff000000,0x3c,1,0,0x68);
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    *(undefined4 *)(param_1 + 4) = 5;
  }
  return;
}

// 0095B7D0  FUN_0095b7d0  size=83  [between]
undefined4 __thiscall FUN_0095b7d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x24) != 0) {
    iVar2 = 0;
    piVar3 = (int *)(iVar1 + 0x10);
    while ((*piVar3 == 0 || (*(int *)(*piVar3 + 0xc) != 0x13))) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (2 < iVar2) {
        return 1;
      }
    }
    if (iVar2 != -1) {
      if (param_2 == 0x20140) {
        return 0;
      }
      if (param_2 == 0x20010) {
        return 0;
      }
    }
  }
  return 1;
}

// 0095B840  FUN_0095b840  size=60  [between]
undefined4 __fastcall FUN_0095b840(int param_1)

{
  if (*(int *)(param_1 + 0xc4) == -1) {
    FUN_00a4ac40(0xf30,0,0xffffffff);
    return 1;
  }
  FUN_00a4ac40(*(int *)(param_1 + 0xc4),param_1 + 200,0xffffffff);
  return 1;
}

// 0095B880  FUN_0095b880  size=111  [between]
undefined4 __fastcall FUN_0095b880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(float *)(param_1 + 0xbc) == -1.0) {
    FUN_00a7c950();
    return 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    iVar1 = FUN_00a7f600(0xd0296);
    if (iVar1 == 0) {
      FUN_00a7c950();
      return 0;
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return 1;
}

// 0095B8F0  FUN_0095b8f0  size=72  [between]
void __fastcall FUN_0095b8f0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc0) != -1) {
    uVar1 = 0;
    do {
      FUN_00a33520(0,*(undefined4 *)(param_1 + 0x118),uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x40);
    FUN_00a33520(1,*(undefined4 *)(param_1 + 0x118),*(undefined2 *)(param_1 + 0xc0));
  }
  return;
}

// 0095B940  FUN_0095b940  size=72  [between]
void __fastcall FUN_0095b940(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xec) != -1) {
    uVar1 = 0;
    do {
      FUN_00a33520(0,*(undefined4 *)(param_1 + 0x118),uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x40);
    FUN_00a33520(1,*(undefined4 *)(param_1 + 0x118),*(undefined2 *)(param_1 + 0xec));
  }
  return;
}

// 0095B990  FUN_0095b990  size=101  [between]
void __fastcall FUN_0095b990(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc0) != -1) {
    do {
      FUN_00a33520(0,*(undefined4 *)(param_1 + 0x118),uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x40);
    FUN_00a33520(1,*(undefined4 *)(param_1 + 0x118),*(undefined2 *)(param_1 + 0xc0));
    return;
  }
  do {
    FUN_00a33520(0,*(undefined4 *)(param_1 + 0x118),uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

// 0095BA00  FUN_0095ba00  size=83  [between]
void __fastcall FUN_0095ba00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xec) != -1) {
    iVar1 = FUN_00c3ca80();
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x130) == 0) {
        FUN_0095b940();
        *(undefined4 *)(param_1 + 0x130) = 1;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x130) == 1) {
      FUN_0095b990();
      *(undefined4 *)(param_1 + 0x130) = 0;
    }
  }
  return;
}

// 0095BA60  FUN_0095ba60  size=111  [between]
void __thiscall FUN_0095ba60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  return;
}

// 0095BB10  FUN_0095bb10  size=95  [between]
undefined4 __thiscall FUN_0095bb10(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x118) < 0xc60) {
    FUN_00dd5650(&DAT_01650b68);
    return 0;
  }
  uVar1 = param_2 + 4U >> 5;
  if (2 < uVar1) {
    FUN_00dd5650(&DAT_01650bc4);
    return 0;
  }
  (&DAT_01b6f3a8)[uVar1] = (&DAT_01b6f3a8)[uVar1] | 1 << ((char)param_2 - 0x1cU & 0x1f);
  return 1;
}

// 0095BC40  VRMission::cVRPhaseE02::cVRPhaseE02  size=253  [class]
undefined4 __thiscall VRMission::cVRPhaseE02::cVRPhaseE02(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1[4] != 0) {
    FUN_00dd4920(param_1[4]);
    param_1[4] = 0;
  }
  if (*(int *)(param_2 + 0x14) == 0xe02) {
    puVar1 = (undefined4 *)FUN_00dd3540(0x10,*param_1);
    if (puVar1 == (undefined4 *)0x0) {
LAB_0095bc84:
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = vftable;
    }
  }
  else if (*(int *)(param_2 + 0x14) == 0xe08) {
    puVar1 = (undefined4 *)FUN_00dd3540(0x10,*param_1);
    if (puVar1 == (undefined4 *)0x0) goto LAB_0095bc84;
    *puVar1 = cVRPhaseE08::vftable;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00dd3500(8,*param_1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = *param_1;
    puVar2[1] = puVar1;
  }
  param_1[4] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[1] != 0) {
      (**(code **)(*(int *)puVar2[1] + 4))();
    }
    if (*(int *)(param_1[4] + 4) != 0) {
      iVar3 = (**(code **)(**(int **)(param_1[4] + 4) + 8))();
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_01650c00);
        goto LAB_0095bd07;
      }
    }
    return 1;
  }
LAB_0095bd07:
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if (param_1[4] != 0) {
    FUN_00dd4920(param_1[4]);
    param_1[4] = 0;
  }
  return 0;
}

// 0095BD40  FUN_0095bd40  size=36  [between]
undefined4 __thiscall FUN_0095bd40(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = (undefined4 *)(param_1 + 0x14);
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}

// 0095BD70  FUN_0095bd70  size=159  [between]
undefined4 __fastcall FUN_0095bd70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_24;
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar4 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x44);
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0xffffffff);
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      fVar3 = *(float *)(iVar4 + 0x40) - uStack_24;
      fVar1 = *(float *)(iVar4 + 0x44) - fVar1;
      fVar2 = *(float *)(iVar4 + 0x48) - fVar2;
      if (*(float *)(param_1 + 0xbc) <= SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
        return 1;
      }
    }
  }
  return 0;
}

// 0095BE10  FUN_0095be10  size=106  [between]
void __fastcall FUN_0095be10(int param_1)

{
  int iVar1;
  
  DAT_01dc1370 = 0;
  iVar1 = FUN_00cad420();
  if ((iVar1 != 1) && (*(float *)(param_1 + 0xbc) != -1.0)) {
    iVar1 = FUN_0095bd70();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        DAT_01dc1370 = 1;
        iVar1 = FUN_00a7c8a0();
        FUN_00604140(iVar1 + 0x40);
      }
    }
  }
  return;
}

// 0095BF10  FUN_0095bf10  size=72  [between]
void __fastcall FUN_0095bf10(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xf0) != -1) {
    uVar1 = 0;
    do {
      FUN_00a33520(0,*(undefined4 *)(param_1 + 0x118),uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x40);
    FUN_00a33520(1,*(undefined4 *)(param_1 + 0x118),*(undefined2 *)(param_1 + 0xf0));
  }
  return;
}

// 0095BFA0  FUN_0095bfa0  size=6  [between]
undefined4 FUN_0095bfa0(void)

{
  return DAT_01b37560;
}

// 0095C020  FUN_0095c020  size=39  [between]
bool FUN_0095c020(void)

{
  int iVar1;
  
  if (DAT_01b37570 == 0) {
    return true;
  }
  iVar1 = FUN_00a00ca0(0xd0296,0);
  return iVar1 != 0;
}

// 0095C080  FUN_0095c080  size=37  [between]
undefined4 FUN_0095c080(undefined4 param_1)

{
  if ((DAT_01b37560 != 0) && (*(int *)(DAT_01b37568 + 0xc) != 0)) {
    *(undefined4 *)(*(int *)(DAT_01b37568 + 0xc) + 0x1c) = param_1;
    return 1;
  }
  return 0;
}

// 0095C0B0  FUN_0095c0b0  size=37  [between]
undefined4 FUN_0095c0b0(undefined4 param_1)

{
  if ((DAT_01b37560 != 0) && (*(int *)(DAT_01b37568 + 0xc) != 0)) {
    *(undefined4 *)(*(int *)(DAT_01b37568 + 0xc) + 0x20) = param_1;
    return 1;
  }
  return 0;
}

// 0095C170  FUN_0095c170  size=30  [between]
undefined4 FUN_0095c170(void)

{
  if ((DAT_01b37560 != 0) && (*(int *)(DAT_01b37568 + 0xc) != 0)) {
    return *(undefined4 *)(*(int *)(DAT_01b37568 + 0xc) + 0x28);
  }
  return 0;
}

// 0095C2A0  FUN_0095c2a0  size=24  [between]
bool FUN_0095c2a0(void)

{
  bool bVar1;
  
  bVar1 = false;
  if (DAT_01b37560 != 0) {
    bVar1 = *(int *)(DAT_01b37568 + 4) == 2;
  }
  return bVar1;
}

// 0095C2C0  FUN_0095c2c0  size=25  [between]
void FUN_0095c2c0(void)

{
  if (DAT_01b37560 != 0) {
    *(undefined4 *)(DAT_01b37568 + 0x148) = 1;
  }
  return;
}

// 0095C2E0  FUN_0095c2e0  size=24  [between]
void FUN_0095c2e0(void)

{
  int *piVar1;
  
  if (DAT_01b37560 != 0) {
    piVar1 = (int *)FUN_00c1b9a0();
                    /* WARNING: Could not recover jumptable at 0x0095c2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x14))();
    return;
  }
  return;
}

// 0095C300  FUN_0095c300  size=19  [between]
undefined4 FUN_0095c300(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01b37568 != 0) {
    uVar1 = *(undefined4 *)(DAT_01b37568 + 0xf8);
  }
  return uVar1;
}

// 0095C320  FUN_0095c320  size=54  [between]
undefined4 FUN_0095c320(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_01b37568;
  uVar2 = 0;
  if (DAT_01b37568 != 0) {
    if (DAT_018b9174 == 0xd75) {
      iVar3 = FUN_009c4bf0();
      if (iVar3 != 4) {
        return 0;
      }
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x100);
  }
  return uVar2;
}

// 0095C360  FUN_0095c360  size=60  [between]
undefined4 FUN_0095c360(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((param_1 & 0xff0) == 0xef0) || (param_1 == 0xc08)) || (param_1 == 0xc09)) ||
     ((param_1 == 0xd20 || (param_1 == 0xd21)))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 0095C6A0  FUN_0095c6a0  size=26  [between]
void FUN_0095c6a0(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,8,param_2,&stack0x0000000c);
  return;
}

// 0095C770  FUN_0095c770  size=43  [between]
void __fastcall FUN_0095c770(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095C7A0  FUN_0095c7a0  size=43  [between]
void __fastcall FUN_0095c7a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095C7D0  FUN_0095c7d0  size=43  [between]
void __fastcall FUN_0095c7d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095C990  VRMission::cMistake::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cMistake::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095C9B0  VRMission::cVRMistakeTimeUp::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cVRMistakeTimeUp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cMistake::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095C9D0  VRMission::cVRMistakeNoDatsuKill::vf04  size=101  [class]
void __fastcall VRMission::cVRMistakeNoDatsuKill::vf04(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x38);
  iVar1 = 0x20;
  do {
    FUN_00a7c950();
    puVar2[-1] = 0xbf800000;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x1b4) == 0) {
    *(int *)(param_1 + 0x1b4) = param_1 + 0x30;
    *(undefined4 *)(param_1 + 0x1b8) = 0x20;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  return;
}

// 0095CA40  VRMission::cVRMistakeNoDatsuKill::vf10  size=11  [class]
void __fastcall VRMission::cVRMistakeNoDatsuKill::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  return;
}

// 0095CAC0  FUN_0095cac0  size=76  [between]
undefined4 FUN_0095cac0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_00bda140();
      return uVar3;
    }
  }
  return 0;
}

// 0095CB10  VRMission::cVRMistakeNoNinjyaKill::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cVRMistakeNoNinjyaKill::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cMistake::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095CB30  VRMission::cVRMistakeNoDatsuKillDlc::vf04  size=109  [class]
void __fastcall VRMission::cVRMistakeNoDatsuKillDlc::vf04(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x44);
  iVar1 = 0x20;
  do {
    FUN_00a7c950();
    puVar2[-1] = 0xbf800000;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x1c0) == 0) {
    *(int *)(param_1 + 0x1c0) = param_1 + 0x3c;
    *(undefined4 *)(param_1 + 0x1c4) = 0x20;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  return;
}

// 0095CBA0  VRMission::cVRMistakeNoDatsuKillDlc::vf10  size=11  [class]
void __fastcall VRMission::cVRMistakeNoDatsuKillDlc::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  return;
}

// 0095CC20  FUN_0095cc20  size=76  [between]
undefined4 FUN_0095cc20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_00bda140();
      return uVar3;
    }
  }
  return 0;
}

// 0095CC70  VRMission::cObjective::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cObjective::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095CC90  VRMission::cVRObjectiveEnemyAllKill::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cVRObjectiveEnemyAllKill::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cObjective::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095CCB0  VRMission::cVRObjectiveKogekkoStunKill::vf04  size=140  [class]
void __fastcall VRMission::cVRObjectiveKogekkoStunKill::vf04(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar2 = 0x20;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x78);
  do {
    puVar1[-6] = 0xffffffff;
    puVar1[-5] = 0xffffffff;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1 = puVar1 + 0x10;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x864) == 0) {
    *(int *)(param_1 + 0x864) = param_1 + 0x60;
    *(undefined4 *)(param_1 + 0x868) = 0x20;
    *(undefined4 *)(param_1 + 0x870) = 0;
  }
  *(undefined4 *)(param_1 + 0x86c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 0095CD40  VRMission::cVRObjectiveKogekkoStunKill::vf10  size=11  [class]
void __fastcall VRMission::cVRObjectiveKogekkoStunKill::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x86c) = 0;
  return;
}

// 0095CD50  VRMission::cVRPhase::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cVRPhase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095CD70  VRMission::cVRPhaseE02::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cVRPhaseE02::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cVRPhase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095CD90  VRMission::cVRPhaseE08::vf00  size=31  [class]
undefined4 * __thiscall VRMission::cVRPhaseE08::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cVRPhase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095CDB0  FUN_0095cdb0  size=123  [between]
void __thiscall FUN_0095cdb0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (((param_3 != 0) && (*(int *)(param_3 + 0xc) < 4)) && (iVar1 = 0, 0 < *(int *)(param_3 + 0xc)))
  {
    do {
      param_1[iVar1 + 4] = *(undefined4 *)(*(int *)(param_3 + 4) + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_3 + 0xc));
  }
  if (((param_4 != 0) && (*(int *)(param_4 + 0xc) < 4)) && (iVar1 = 0, 0 < *(int *)(param_4 + 0xc)))
  {
    do {
      param_1[iVar1 + 1] = *(undefined4 *)(*(int *)(param_4 + 4) + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_4 + 0xc));
  }
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 0095CE50  FUN_0095ce50  size=75  [between]
undefined4 __fastcall FUN_0095ce50(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  return 1;
}

// 0095CEA0  FUN_0095cea0  size=120  [between]
void __fastcall FUN_0095cea0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 6) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_0095b8f0();
      *(undefined4 *)(param_1 + 4) = 2;
    }
    FUN_0095b880();
    FUN_0095be10();
    FUN_00d55a20();
    iVar1 = FUN_00c81dd0(0x4e);
    if (iVar1 == 1) {
      FUN_009cf0d0();
      FUN_00951930();
      FUN_00c81b80(0x4e);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  return;
}

// 0095CF20  FUN_0095cf20  size=237  [between]
void __fastcall FUN_0095cf20(undefined4 *param_1)

{
  int iVar1;
  
  FUN_00d5d0c0();
  param_1[1] = 0xffffffff;
  *param_1 = 0;
  if (param_1[3] != 0) {
    FUN_0095ad60();
  }
  iVar1 = param_1[4];
  if ((iVar1 != 0) && (*(int **)(iVar1 + 4) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 4) + 0x10))();
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  if (param_1[3] != 0) {
    FUN_00dd4920(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_00dd4920(param_1[4]);
    param_1[4] = 0;
  }
  if ((undefined4 *)param_1[0x4b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4b])(1);
    param_1[0x4b] = 0;
  }
  if ((undefined4 *)param_1[0x48] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x48])(1);
    param_1[0x48] = 0;
  }
  if ((undefined4 *)param_1[0x4a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4a])(1);
    param_1[0x4a] = 0;
  }
  if ((undefined4 *)param_1[0x49] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x49])(1);
    param_1[0x49] = 0;
  }
  DAT_01bea094 = DAT_01bea094 & 0xf7ffffff;
  FUN_00cad340(1);
  return;
}

// 0095D010  FUN_0095d010  size=200  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0095d010(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00eb4340(*(undefined4 *)(param_1 + 0x144));
  if (iVar1 != 0) {
    iVar1 = FUN_00c20a50();
    if (iVar1 == 0) {
      DAT_01bea090 = DAT_01bea090 & 0xf77f3bff;
      DAT_01bea094 = DAT_01bea094 & 0xbffffeff;
      DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
      DAT_01bea064 = DAT_01bea064 & 0xfdffffff;
      FUN_00cad1b0(0);
      DAT_01bea084 = DAT_01bea084 & 0xffffafff;
      _DAT_01dc2d78 = 0;
      if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 300))(1);
        *(undefined4 *)(param_1 + 300) = 0;
      }
      if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
        *(undefined4 *)(param_1 + 0x120) = 0;
      }
      FUN_0095b840();
      *(undefined4 *)(param_1 + 4) = 6;
    }
  }
  return;
}

// 0095D0E0  FUN_0095d0e0  size=207  [between]
void __fastcall FUN_0095d0e0(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    if (DAT_018b9174 - 0xe21U < 0x30) {
      FUN_00c18580(1,0xffffffff);
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00db8960(iVar2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else if (iVar2 == 1) {
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x13c);
    *(float *)(param_1 + 0x13c) = fVar1;
    if ((180.0 < fVar1) &&
       (*(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1, DAT_018b9174 - 0xe21U < 0x30)) {
      FUN_00ebddd0();
      return;
    }
  }
  else if (iVar2 == 2) {
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
    DAT_01bea094 = DAT_01bea094 & 0xbffffeff;
    DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
    DAT_01bea064 = DAT_01bea064 & 0xf7ffffff;
    FUN_00c17870();
    return;
  }
  return;
}

// 0095D1F0  FUN_0095d1f0  size=120  [between]
undefined4 __thiscall FUN_0095d1f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  _memset((undefined4 *)(param_1 + 0x14),0,0x108);
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  FUN_0095a1c0();
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = (undefined4 *)(param_1 + 0x14);
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  cXmlBinary::cXmlBinary_34();
  *(undefined4 *)(param_1 + 0x148) = 0;
  return 1;
}

// 0095D270  FUN_0095d270  size=80  [between]
void __fastcall FUN_0095d270(int param_1)

{
  if (*(int *)(param_1 + 0xf0) != -1) {
    if (((DAT_01bea090 & 0x44) == 0) && ((DAT_01bea090 & 0x8000000) == 0)) {
      if (*(int *)(param_1 + 0x134) == 1) {
        FUN_0095b990();
        *(undefined4 *)(param_1 + 0x134) = 0;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x134) == 0) {
      FUN_0095bf10();
      *(undefined4 *)(param_1 + 0x134) = 1;
    }
  }
  return;
}

// 0095D330  FUN_0095d330  size=291  [between]
void __fastcall FUN_0095d330(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 6)) {
    return;
  }
  if (*(int *)(param_1 + 0x154) != 0) goto LAB_0095d3b6;
  uVar3 = 0;
  if (DAT_018b9174 == 0xc75) {
    uVar3 = 10;
LAB_0095d388:
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x24))(uVar3,1,2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x154) = 1;
    }
  }
  else {
    if (DAT_018b9174 != 0xd71) {
      uVar3 = 0;
      goto LAB_0095d388;
    }
    iVar2 = FUN_00d4f120("PD71_GAME2",1);
    if (iVar2 != 0) goto LAB_0095d388;
  }
  if (*(int *)(param_1 + 0x154) == 0) {
    return;
  }
LAB_0095d3b6:
  if ((DAT_01bea094 & 0x20000) == 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00d46780();
    if ((iVar2 == 0) && (iVar2 = FUN_00d467a0(), iVar2 == 0)) {
      uVar3 = FUN_00a7c8a0();
      piVar1 = (int *)FUN_00412580(uVar3);
    }
    else {
      uVar3 = FUN_00a7c8a0();
      piVar1 = (int *)FUN_00602f90(uVar3);
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) {
      return;
    }
    uVar3 = FUN_00a7c8a0();
    piVar1 = (int *)FUN_005f57d0(uVar3);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x220))(0x41200000);
  }
  return;
}

// 0095D480  FUN_0095d480  size=56  [between]
void FUN_0095d480(uint param_1)

{
  if (((((param_1 & 0xff0) == 0xef0) || (param_1 == 0xc08)) || (param_1 == 0xc09)) ||
     ((param_1 == 0xd20 || (param_1 == 0xd21)))) {
    DAT_01bea060 = DAT_01bea060 & 0xffffffbf;
  }
  return;
}

// 0095D4C0  FUN_0095d4c0  size=198  [between]
void FUN_0095d4c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_01b37560 != 0) {
    FUN_00a80ad0(0xd0296);
    FUN_00a00bd0(0xd0296,0);
    puVar2 = DAT_01b3756c;
    DAT_01b37574 = 0;
    DAT_01b3756c[1] = 0;
    *puVar2 = 0;
    FUN_0095cf20();
    DAT_01b37564 = 0;
    if (DAT_01b3756c != (undefined4 *)0x0) {
      FUN_00dd4920(DAT_01b3756c);
      DAT_01b3756c = (undefined4 *)0x0;
    }
    iVar1 = DAT_01b37568;
    if (DAT_01b37568 != 0) {
      DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
      DAT_01bea064 = DAT_01bea064 & 0xf7ffffff;
      if (*(int *)(DAT_01b37568 + 0x144) != 0) {
        FUN_00ebdd50(*(int *)(DAT_01b37568 + 0x144));
      }
      FUN_00dd4920(iVar1);
      DAT_01b37568 = 0;
    }
    if (DAT_01b37560 != 0) {
      FUN_00dd4920(DAT_01b37560);
      DAT_01b37560 = 0;
    }
  }
  return;
}

// 0095D590  FUN_0095d590  size=43  [between]
void __fastcall FUN_0095d590(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095D5C0  FUN_0095d5c0  size=43  [between]
void __fastcall FUN_0095d5c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095D5F0  FUN_0095d5f0  size=43  [between]
void __fastcall FUN_0095d5f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095D6E0  FUN_0095d6e0  size=43  [between]
void __fastcall FUN_0095d6e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095D710  FUN_0095d710  size=43  [between]
void __fastcall FUN_0095d710(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095D820  VRMission::cMistake::cMistake_2  size=73  [class]
void __fastcall VRMission::cMistake::cMistake_2(undefined4 *param_1)

{
  *param_1 = cVRMistakeNoDatsuKill::vftable;
  if (param_1[0x6d] != 0) {
    param_1[0x6f] = 0;
    if (param_1[0x70] != 0) {
      FUN_00dd48d0(param_1[0x6d],0);
      param_1[0x70] = 0;
    }
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
  }
  *param_1 = vftable;
  return;
}

// 0095D870  VRMission::cMistake::cMistake_3  size=73  [class]
void __fastcall VRMission::cMistake::cMistake_3(undefined4 *param_1)

{
  *param_1 = cVRMistakeNoDatsuKillDlc::vftable;
  if (param_1[0x70] != 0) {
    param_1[0x72] = 0;
    if (param_1[0x73] != 0) {
      FUN_00dd48d0(param_1[0x70],0);
      param_1[0x73] = 0;
    }
    param_1[0x70] = 0;
    param_1[0x71] = 0;
  }
  *param_1 = vftable;
  return;
}

// 0095D8C0  VRMission::cObjective::cObjective_2  size=73  [class]
void __fastcall VRMission::cObjective::cObjective_2(undefined4 *param_1)

{
  *param_1 = cVRObjectiveKogekkoStunKill::vftable;
  if (param_1[0x219] != 0) {
    param_1[0x21b] = 0;
    if (param_1[0x21c] != 0) {
      FUN_00dd48d0(param_1[0x219],0);
      param_1[0x21c] = 0;
    }
    param_1[0x219] = 0;
    param_1[0x21a] = 0;
  }
  *param_1 = vftable;
  return;
}

// 0095D910  FUN_0095d910  size=225  [between]
void __fastcall FUN_0095d910(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_1[9] != 0) {
    uVar4 = 0;
    piVar3 = param_1 + 4;
    do {
      if (*piVar3 != 0) {
        (**(code **)(*(int *)*piVar3 + 0xc))();
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x14))();
        if (iVar1 == 1) {
          param_1[7] = 1;
          param_1[8] = 0;
          return;
        }
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x18))();
        if (iVar1 != -1) {
          if (iVar1 == 0) {
            param_1[10] = 0;
          }
          else if (iVar1 == 1) {
            param_1[10] = 1;
          }
          (**(code **)(*(int *)*piVar3 + 0x1c))();
        }
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < 3);
    iVar1 = 3;
    piVar3 = param_1;
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 != 0) {
        (**(code **)(*(int *)*piVar3 + 0xc))();
        iVar2 = (**(code **)(*(int *)*piVar3 + 0x14))();
        if (iVar2 == 1) {
          param_1[7] = 0;
          param_1[8] = 1;
        }
        iVar2 = (**(code **)(*(int *)*piVar3 + 0x18))();
        if (iVar2 != -1) {
          if (iVar2 == 0) {
            param_1[10] = 0;
          }
          else if (iVar2 == 1) {
            param_1[10] = 1;
          }
          (**(code **)(*(int *)*piVar3 + 0x1c))();
        }
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 0095DA00  FUN_0095da00  size=237  [between]
void __fastcall FUN_0095da00(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xf0) != -1) {
    if (((DAT_01bea090 & 0x44) == 0) && ((DAT_01bea090 & 0x8000000) == 0)) {
      if (*(int *)(param_1 + 0x134) == 1) {
        FUN_0095b990();
        *(undefined4 *)(param_1 + 0x134) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x134) == 0) {
      FUN_0095bf10();
      *(undefined4 *)(param_1 + 0x134) = 1;
    }
  }
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    if (piVar1[0x37] != 99) {
                    /* WARNING: Could not recover jumptable at 0x0095da71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 4))();
      return;
    }
    if (*(int *)(param_1 + 0x148) == 1) {
      (**(code **)*piVar1)(1);
      *(undefined4 *)(param_1 + 0x124) = 0;
      DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
      DAT_01bea094 = DAT_01bea094 & 0xbffffeff;
      DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
      DAT_01bea064 = DAT_01bea064 & 0xf7ffffff;
      *(undefined4 *)(param_1 + 4) = 2;
      FUN_0095c6a0(&stack0xfffffff4,"PE%02d",*(undefined4 *)(param_1 + 0x14));
      piVar1 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar1 + 0x10))(&stack0xfffffff4,1);
    }
  }
  return;
}

// 0095DAF0  FUN_0095daf0  size=469  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0095daf0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  if (*(int *)(param_1 + 0xf0) != -1) {
    if (((DAT_01bea090 & 0x44) == 0) && ((DAT_01bea090 & 0x8000000) == 0)) {
      if (*(int *)(param_1 + 0x134) == 1) {
        FUN_0095b990();
        *(undefined4 *)(param_1 + 0x134) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x134) == 0) {
      FUN_0095bf10();
      *(undefined4 *)(param_1 + 0x134) = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x138);
  if (iVar3 == 0) {
    iVar3 = FUN_00d466f0();
    if (iVar3 == 0) {
      if ((DAT_01bea094 & 0x20000) == 0) {
        iVar3 = FUN_00e03960();
        fVar1 = *(float *)(iVar3 + 0x7c) + *(float *)(param_1 + 0x13c);
        *(float *)(param_1 + 0x13c) = fVar1;
        uVar5 = (ushort)(fVar1 < 420.0) << 8 | (ushort)(fVar1 == 420.0) << 0xe;
      }
      else {
        iVar3 = FUN_00e03960();
        fVar1 = *(float *)(iVar3 + 0x7c) + *(float *)(param_1 + 0x13c);
        *(float *)(param_1 + 0x13c) = fVar1;
        uVar5 = (ushort)(fVar1 < 270.0) << 8 | (ushort)(fVar1 == 270.0) << 0xe;
      }
      if (uVar5 == 0) {
        DAT_01bea084 = DAT_01bea084 | 0x4000;
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      }
    }
    else if (*(int *)(param_1 + 0x150) == 0) {
      iVar3 = DAT_018b9174 - (DAT_018b9174 & 0xff0);
      iVar4 = FUN_0094e9c0(0x15e901d6,iVar3);
      if (iVar4 == 0) {
        FUN_009518f0(0x15e901d6,iVar3);
        uVar2 = FUN_0094e9b0(0x15e901d6,1);
        FUN_00cc1250(6,uVar2);
      }
      if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
        *(undefined4 *)(param_1 + 0x120) = 0;
      }
      *(undefined4 *)(param_1 + 0x150) = 1;
      return;
    }
  }
  else {
    if (iVar3 == 1) {
      DAT_01bea084 = DAT_01bea084 | 0x1000;
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      return;
    }
    if ((iVar3 == 2) && (*(int *)(param_1 + 300) == 0)) {
      uVar2 = cPauseMenuBg::cPauseMenuBg_2();
      *(undefined4 *)(param_1 + 300) = uVar2;
      if (*(int *)(param_1 + 0x128) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x204) = 1;
      }
      FUN_00cad1b0(1);
      DAT_01bea070 = DAT_01bea070 | 0x88000000;
      DAT_01bea064 = DAT_01bea064 | 0x2000000;
      _DAT_01dc2d78 = 1;
      *(undefined4 *)(param_1 + 4) = 4;
      return;
    }
  }
  return;
}

// 0095DD40  FUN_0095dd40  size=323  [between]
bool FUN_0095dd40(int param_1)

{
  int iVar1;
  
  if (DAT_01b37560 != 0) {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  DAT_01b37564 = param_1;
  DAT_01b37560 = FUN_00dd3500(1,param_1);
  if (DAT_01b37560 != 0) {
    iVar1 = FUN_00dd3500(0x168,DAT_01b37564);
    if (iVar1 == 0) {
      DAT_01b37568 = 0;
    }
    else {
      DAT_01b37568 = FUN_0095b660(param_1);
    }
    DAT_01b3756c = (int *)FUN_00dd3500(0x4f0,DAT_01b37564);
    if (DAT_01b3756c == (int *)0x0) {
      DAT_01b3756c = (int *)0x0;
    }
    else {
      *DAT_01b3756c = param_1;
      DAT_01b3756c[1] = 0;
    }
    if (DAT_01b37568 == 0) {
      if (DAT_01b3756c != (int *)0x0) {
        FUN_00dd4920(DAT_01b3756c);
        DAT_01b3756c = (int *)0x0;
        goto LAB_0095de14;
      }
    }
    else {
      if (DAT_01b3756c != (int *)0x0) {
        FUN_0095b1b0();
        FUN_0095ce50();
        DAT_01b37570 = 0;
        goto LAB_0095de6b;
      }
LAB_0095de14:
      iVar1 = DAT_01b37568;
      if (DAT_01b37568 != 0) {
        DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
        DAT_01bea064 = DAT_01bea064 & 0xf7ffffff;
        if (*(int *)(DAT_01b37568 + 0x144) != 0) {
          FUN_00ebdd50(*(int *)(DAT_01b37568 + 0x144));
        }
        FUN_00dd4920(iVar1);
        DAT_01b37568 = 0;
      }
    }
    if (DAT_01b37560 == 0) goto LAB_0095de6b;
    FUN_00dd4920(DAT_01b37560);
  }
  DAT_01b37560 = 0;
LAB_0095de6b:
  DAT_01b37574 = 0;
  DAT_01b37578 = 0;
  return DAT_01b37560 != 0;
}

// 0095DF30  FUN_0095df30  size=85  [between]
void __thiscall FUN_0095df30(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0xc;
  iVar2 = param_1[1] + iVar1;
  if (iVar2 != 0) {
    FUN_00a7c940(param_3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_3 + 8);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 0095DF90  FUN_0095df90  size=137  [between]
void __thiscall FUN_0095df90(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  int iVar3;
  
  iVar1 = (*param_3 - *(int *)(param_1 + 4)) / 0xc;
  if (iVar1 < *(int *)(param_1 + 0xc) + -1) {
    iVar3 = iVar1 * 0xc;
    local_4 = iVar1;
    do {
      iVar2 = iVar3 + *(int *)(param_1 + 4);
      FUN_00a7c960(iVar2 + 0xc);
      iVar3 = iVar3 + 0xc;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0x14);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xc) + -1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0xc;
  return;
}

// 0095E070  FUN_0095e070  size=85  [between]
void __thiscall FUN_0095e070(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0xc;
  iVar2 = param_1[1] + iVar1;
  if (iVar2 != 0) {
    FUN_00a7c940(param_3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_3 + 8);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 0095E0D0  FUN_0095e0d0  size=137  [between]
void __thiscall FUN_0095e0d0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  int iVar3;
  
  iVar1 = (*param_3 - *(int *)(param_1 + 4)) / 0xc;
  if (iVar1 < *(int *)(param_1 + 0xc) + -1) {
    iVar3 = iVar1 * 0xc;
    local_4 = iVar1;
    do {
      iVar2 = iVar3 + *(int *)(param_1 + 4);
      FUN_00a7c960(iVar2 + 0xc);
      iVar3 = iVar3 + 0xc;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0x14);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xc) + -1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0xc;
  return;
}

// 0095E1B0  FUN_0095e1b0  size=120  [between]
void __thiscall FUN_0095e1b0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0x40;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[4] = param_3[4];
    puVar2[5] = param_3[5];
    puVar2[6] = param_3[6];
    puVar2[7] = param_3[7];
    puVar2[8] = param_3[8];
    puVar2[9] = param_3[9];
    puVar2[10] = param_3[10];
    puVar2[0xb] = param_3[0xb];
    puVar2[0xc] = param_3[0xc];
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 0095E280  FUN_0095e280  size=43  [between]
void __fastcall FUN_0095e280(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095E310  FUN_0095e310  size=43  [between]
void __fastcall FUN_0095e310(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0095E380  VRMission::cVRMistakeNoDatsuKill::cVRMistakeNoDatsuKill  size=82  [class]
undefined4 * __fastcall VRMission::cVRMistakeNoDatsuKill::cVRMistakeNoDatsuKill(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *param_1 = vftable;
  iVar1 = 0x1f;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  return param_1;
}

// 0095E3E0  VRMission::cVRMistakeNoDatsuKill::vf00  size=93  [class]
undefined4 * __thiscall VRMission::cVRMistakeNoDatsuKill::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x6d] != 0) {
    param_1[0x6f] = 0;
    if (param_1[0x70] != 0) {
      FUN_00dd48d0(param_1[0x6d],0);
      param_1[0x70] = 0;
    }
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
  }
  *param_1 = cMistake::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095E440  FUN_0095e440  size=229  [between]
void __fastcall FUN_0095e440(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x1b4);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x1bc) * 0xc) {
    do {
      FUN_00a7c940(iVar2);
      local_8 = *(undefined4 *)(iVar2 + 4);
      local_4 = *(undefined4 *)(iVar2 + 8);
      iVar1 = FUN_00a7c990(&stack0x00000004);
      if (iVar1 != 0) {
        return;
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 != *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x1bc) * 0xc);
  }
  FUN_00a7c930();
  FUN_00a7c950();
  local_14 = 0xbf800000;
  local_10 = 0;
  FUN_00a7c960(&stack0x00000004);
  local_14 = 0;
  if (*(int *)(param_1 + 0x1bc) < *(int *)(param_1 + 0x1b8)) {
    iVar2 = *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x1bc) * 0xc;
    if (iVar2 != 0) {
      FUN_00a7c940(local_18);
      *(undefined4 *)(iVar2 + 4) = local_14;
      *(undefined4 *)(iVar2 + 8) = local_10;
    }
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
  }
  return;
}

// 0095E530  FUN_0095e530  size=149  [between]
undefined4 __fastcall FUN_0095e530(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  int local_8;
  undefined1 local_4 [4];
  
  iVar4 = *(int *)(param_1 + 0x1b4);
  uVar3 = 1;
  if (iVar4 != *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x1bc) * 0xc) {
    do {
      local_8 = iVar4;
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        piVar2 = (int *)FUN_0095df90(local_4,&local_8);
        iVar4 = *piVar2;
      }
      else {
        if (*(int *)(iVar4 + 8) == 0) {
          fVar5 = (float10)FUN_00e049b0();
          fVar5 = fVar5 + (float10)*(float *)(iVar4 + 4);
          *(float *)(iVar4 + 4) = (float)fVar5;
          if ((float10)1500.0 <= fVar5) {
            uVar3 = 0;
          }
        }
        iVar4 = iVar4 + 0xc;
      }
    } while (iVar4 != *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x1bc) * 0xc);
  }
  return uVar3;
}

// 0095E5D0  VRMission::cVRMistakeNoDatsuKillDlc::cVRMistakeNoDatsuKillDlc  size=82  [class]
undefined4 * __fastcall
VRMission::cVRMistakeNoDatsuKillDlc::cVRMistakeNoDatsuKillDlc(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *param_1 = vftable;
  iVar1 = 0x1f;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  return param_1;
}

// 0095E630  VRMission::cVRMistakeNoDatsuKillDlc::vf00  size=93  [class]
undefined4 * __thiscall VRMission::cVRMistakeNoDatsuKillDlc::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x70] != 0) {
    param_1[0x72] = 0;
    if (param_1[0x73] != 0) {
      FUN_00dd48d0(param_1[0x70],0);
      param_1[0x73] = 0;
    }
    param_1[0x70] = 0;
    param_1[0x71] = 0;
  }
  *param_1 = cMistake::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095E690  FUN_0095e690  size=229  [between]
void __fastcall FUN_0095e690(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x1c0);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x1c8) * 0xc) {
    do {
      FUN_00a7c940(iVar2);
      local_8 = *(undefined4 *)(iVar2 + 4);
      local_4 = *(undefined4 *)(iVar2 + 8);
      iVar1 = FUN_00a7c990(&stack0x00000004);
      if (iVar1 != 0) {
        return;
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 != *(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1c8) * 0xc);
  }
  FUN_00a7c930();
  FUN_00a7c950();
  local_14 = 0xbf800000;
  local_10 = 0;
  FUN_00a7c960(&stack0x00000004);
  local_14 = 0;
  if (*(int *)(param_1 + 0x1c8) < *(int *)(param_1 + 0x1c4)) {
    iVar2 = *(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1c8) * 0xc;
    if (iVar2 != 0) {
      FUN_00a7c940(local_18);
      *(undefined4 *)(iVar2 + 4) = local_14;
      *(undefined4 *)(iVar2 + 8) = local_10;
    }
    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
  }
  return;
}

// 0095E780  FUN_0095e780  size=149  [between]
undefined4 __fastcall FUN_0095e780(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  int local_8;
  undefined1 local_4 [4];
  
  iVar4 = *(int *)(param_1 + 0x1c0);
  uVar3 = 1;
  if (iVar4 != *(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1c8) * 0xc) {
    do {
      local_8 = iVar4;
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        piVar2 = (int *)FUN_0095e0d0(local_4,&local_8);
        iVar4 = *piVar2;
      }
      else {
        if (*(int *)(iVar4 + 8) == 0) {
          fVar5 = (float10)FUN_00e049b0();
          fVar5 = fVar5 + (float10)*(float *)(iVar4 + 4);
          *(float *)(iVar4 + 4) = (float)fVar5;
          if ((float10)1500.0 <= fVar5) {
            uVar3 = 0;
          }
        }
        iVar4 = iVar4 + 0xc;
      }
    } while (iVar4 != *(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1c8) * 0xc);
  }
  return uVar3;
}

// 0095E820  VRMission::cVRObjectiveKogekkoStunKill::cVRObjectiveKogekkoStunKill  size=53  [class]
void __fastcall
VRMission::cVRObjectiveKogekkoStunKill::cVRObjectiveKogekkoStunKill(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  return;
}

// 0095E860  VRMission::cVRObjectiveKogekkoStunKill::vf00  size=93  [class]
undefined4 * __thiscall
VRMission::cVRObjectiveKogekkoStunKill::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x219] != 0) {
    param_1[0x21b] = 0;
    if (param_1[0x21c] != 0) {
      FUN_00dd48d0(param_1[0x219],0);
      param_1[0x21c] = 0;
    }
    param_1[0x219] = 0;
    param_1[0x21a] = 0;
  }
  *param_1 = cObjective::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095E8C0  FUN_0095e8c0  size=144  [between]
void __fastcall FUN_0095e8c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x864);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0x86c) * 0x40 + iVar3) {
    do {
      iVar1 = FUN_00c18cc0(*(undefined4 *)(iVar3 + 4));
      if (iVar1 == 1) {
        if (*(int *)(iVar3 + 0x30) == 0) {
          iVar1 = FUN_00c19c00(*(undefined4 *)(iVar3 + 4),0,0);
          if (iVar1 != 0) {
            FUN_00a7c8a0();
            iVar1 = FUN_00a8cab0();
            if ((iVar1 == 0xa0020) || (iVar1 == 0xb0008)) {
              *(undefined4 *)(iVar3 + 0x30) = 1;
              goto LAB_0095e932;
            }
          }
        }
        else {
LAB_0095e932:
          iVar2 = iVar2 + 1;
        }
      }
      iVar3 = iVar3 + 0x40;
    } while (iVar3 != *(int *)(param_1 + 0x86c) * 0x40 + *(int *)(param_1 + 0x864));
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}

// 0095E950  FUN_0095e950  size=238  [between]
undefined4 __thiscall FUN_0095e950(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  undefined1 local_54 [4];
  int local_50;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  piVar1 = *(int **)(param_1 + 0x864);
  while( true ) {
    if (piVar1 == (int *)(*(int *)(param_1 + 0x86c) * 0x40 + *(int *)(param_1 + 0x864))) {
      local_40 = *param_4;
      local_20 = 0;
      local_3c = param_4[1];
      local_50 = param_2;
      local_4c = param_3;
      local_38 = param_4[2];
      local_34 = param_4[3];
      local_30 = *param_5;
      local_2c = param_5[1];
      local_28 = param_5[2];
      local_24 = param_5[3];
      FUN_0095e1b0(local_54,&local_50);
      return 1;
    }
    if ((*piVar1 == param_2) && (piVar1[1] == param_3)) break;
    piVar1 = piVar1 + 0x10;
  }
  *piVar1 = param_2;
  piVar1[1] = param_3;
  piVar1[4] = *param_4;
  piVar1[5] = param_4[1];
  piVar1[6] = param_4[2];
  piVar1[7] = param_4[3];
  piVar1[8] = *param_5;
  piVar1[9] = param_5[1];
  piVar1[10] = param_5[2];
  piVar1[0xb] = param_5[3];
  return 1;
}

// 0095EA40  FUN_0095ea40  size=82  [between]
uint __thiscall
FUN_0095ea40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int local_4;
  
  uVar3 = 1;
  piVar2 = (int *)(param_1 + 0x10);
  local_4 = 3;
  do {
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0xc) == 0x13)) {
      uVar1 = FUN_0095e950(param_2,param_3,param_4,param_5);
      uVar3 = uVar3 & uVar1;
    }
    piVar2 = piVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return uVar3;
}

// 0095EAA0  VRMission::cObjective::cObjective  size=328  [class]
undefined4 * __thiscall VRMission::cObjective::cObjective(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)FUN_00dd3540(0x10,*param_1);
      if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      puVar1[1] = 0;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      *puVar1 = cVRObjectiveEnemyAllKill::vftable;
      return puVar1;
    }
    if (param_2 == 2) {
      uVar3 = *param_1;
      goto LAB_0095eaae;
    }
    if (param_2 != 3) {
      if (param_2 == 4) {
        uVar3 = *param_1;
        goto LAB_0095eaae;
      }
      if (param_2 == 5) {
        uVar3 = *param_1;
        goto LAB_0095eaae;
      }
      if (param_2 != 6) {
        if (param_2 == 7) {
          uVar3 = *param_1;
          goto LAB_0095eaae;
        }
        if (param_2 == 8) {
          uVar3 = *param_1;
          goto LAB_0095eaae;
        }
        if (param_2 != 9) {
          if (param_2 == 10) {
            uVar3 = *param_1;
            goto LAB_0095eaae;
          }
          if (param_2 == 0xb) {
            uVar3 = *param_1;
            goto LAB_0095eaae;
          }
          if (param_2 != 0xc) {
            if (param_2 == 0xd) {
              uVar3 = *param_1;
              goto LAB_0095eaae;
            }
            if (param_2 == 0xe) {
              uVar3 = *param_1;
              goto LAB_0095eaae;
            }
            if (param_2 != 0xf) {
              if (param_2 == 0x10) {
                uVar3 = *param_1;
                goto LAB_0095eaae;
              }
              if (param_2 == 0x11) {
                uVar3 = *param_1;
                goto LAB_0095eaae;
              }
              if (param_2 != 0x12) {
                if (param_2 != 0x13) {
                  return (undefined4 *)0x0;
                }
                iVar2 = FUN_00dd3540(0x880,*param_1);
                if (iVar2 == 0) {
                  return (undefined4 *)0x0;
                }
                puVar1 = (undefined4 *)cVRObjectiveKogekkoStunKill::cVRObjectiveKogekkoStunKill();
                return puVar1;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = *param_1;
LAB_0095eaae:
  puVar1 = (undefined4 *)FUN_00dd3540(0x10,uVar3);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = vftable;
  puVar1[1] = 0;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  return puVar1;
}

// 0095EBF0  VRMission::cMistake::cMistake  size=404  [class]
undefined4 * __thiscall VRMission::cMistake::cMistake(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)FUN_00dd3540(0x10,*param_1);
      if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      puVar1[1] = 0;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      *puVar1 = cVRMistakeTimeUp::vftable;
      return puVar1;
    }
    if (param_2 == 2) {
      uVar3 = *param_1;
      goto LAB_0095ebfe;
    }
    if (param_2 == 3) {
      puVar1 = (undefined4 *)FUN_00dd3540(0x20,*param_1);
      if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      puVar1[1] = 0;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      *puVar1 = cVRMistakeNoNinjyaKill::vftable;
      return puVar1;
    }
    if (param_2 == 4) {
      iVar2 = FUN_00dd3540(0x1c4,*param_1);
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
      puVar1 = (undefined4 *)cVRMistakeNoDatsuKill::cVRMistakeNoDatsuKill();
      return puVar1;
    }
    if (param_2 == 5) {
      uVar3 = *param_1;
      goto LAB_0095ebfe;
    }
    if (param_2 != 6) {
      if (param_2 == 7) {
        uVar3 = *param_1;
        goto LAB_0095ebfe;
      }
      if (param_2 == 8) {
        uVar3 = *param_1;
        goto LAB_0095ebfe;
      }
      if (param_2 != 9) {
        if (param_2 == 10) {
          uVar3 = *param_1;
          goto LAB_0095ebfe;
        }
        if (param_2 == 0xb) {
          uVar3 = *param_1;
          goto LAB_0095ebfe;
        }
        if (param_2 != 0xc) {
          if (param_2 == 0xd) {
            uVar3 = *param_1;
            goto LAB_0095ebfe;
          }
          if (param_2 == 0xe) {
            uVar3 = *param_1;
            goto LAB_0095ebfe;
          }
          if (param_2 != 0xf) {
            if (param_2 == 0x10) {
              uVar3 = *param_1;
              goto LAB_0095ebfe;
            }
            if (param_2 == 0x11) {
              uVar3 = *param_1;
              goto LAB_0095ebfe;
            }
            if (param_2 != 0x12) {
              if (param_2 != 0x13) {
                return (undefined4 *)0x0;
              }
              iVar2 = FUN_00dd3540(0x1d0,*param_1);
              if (iVar2 == 0) {
                return (undefined4 *)0x0;
              }
              puVar1 = (undefined4 *)cVRMistakeNoDatsuKillDlc::cVRMistakeNoDatsuKillDlc();
              return puVar1;
            }
          }
        }
      }
    }
  }
  uVar3 = *param_1;
LAB_0095ebfe:
  puVar1 = (undefined4 *)FUN_00dd3540(0x10,uVar3);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = vftable;
  puVar1[1] = 0;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  return puVar1;
}

// 0095ED90  FUN_0095ed90  size=574  [callgraph]
undefined4 __thiscall FUN_0095ed90(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int local_40 [7];
  int *local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar5 = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (param_1[3] != 0) {
    FUN_00dd4920(param_1[3]);
    param_1[3] = 0;
  }
  local_24 = local_40;
  local_10 = local_40 + 3;
  local_40[6] = 0;
  local_20 = 3;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 3;
  local_8 = 0;
  local_4 = 0;
  piVar3 = local_40;
  piVar2 = (int *)(param_2 + 0x28);
  do {
    if (*piVar2 != -1) {
      iVar1 = VRMission::cMistake::cMistake(*piVar2);
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_01650d28,(uVar5 + 7) * 0x10 + param_2);
        goto LAB_0095ef4e;
      }
      *(int *)(iVar1 + 0xc) = *piVar2;
      if (local_1c < 3) {
        if (piVar3 != (int *)0x0) {
          *piVar3 = iVar1;
        }
        local_1c = local_1c + 1;
        piVar3 = piVar3 + 1;
      }
    }
    uVar5 = uVar5 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar5 < 3);
  uVar5 = 0;
  piVar3 = local_40 + 3;
  piVar2 = (int *)(param_2 + 0x1c);
  do {
    if (*piVar2 != -1) {
      iVar1 = VRMission::cObjective::cObjective(*piVar2);
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_01650cf4,param_2 + 0x34 + uVar5 * 0x10);
        goto LAB_0095ef4e;
      }
      *(int *)(iVar1 + 0xc) = *piVar2;
      if (local_8 < 3) {
        if (piVar3 != (int *)0x0) {
          *piVar3 = iVar1;
        }
        local_8 = local_8 + 1;
        piVar3 = piVar3 + 1;
      }
    }
    uVar5 = uVar5 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar5 < 3);
  iVar1 = FUN_00dd3500(0x30,*param_1);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0095cdb0(*param_1,&local_14,local_40 + 6);
  }
  param_1[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 4;
    iVar1 = 3;
    do {
      if (*piVar3 != 0) {
        (**(code **)(*(int *)*piVar3 + 4))();
      }
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 3;
    piVar3 = piVar2;
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 != 0) {
        (**(code **)(*(int *)*piVar3 + 4))();
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    piVar2[7] = 0;
    piVar2[8] = 0;
    iVar1 = FUN_0095acf0();
    if (iVar1 != 0) {
      return 1;
    }
    FUN_00dd5650(&DAT_01650cbc);
  }
LAB_0095ef4e:
  iVar1 = local_1c;
  iVar4 = 0;
  if (0 < local_1c) {
    do {
      if (local_40[iVar4] != 0) {
        if ((undefined4 *)local_40[iVar4] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)local_40[iVar4])(1);
        }
        local_40[iVar4] = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  iVar1 = local_8;
  iVar4 = 0;
  if (0 < local_8) {
    do {
      if (local_40[iVar4 + 3] != 0) {
        if ((undefined4 *)local_40[iVar4 + 3] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)local_40[iVar4 + 3])(1);
        }
        local_40[iVar4 + 3] = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if (param_1[3] != 0) {
    FUN_00dd4920(param_1[3]);
    param_1[3] = 0;
  }
  return 0;
}

// 0095F000  FUN_0095f000  size=50  [callgraph]
undefined4 FUN_0095f000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((DAT_01b37560 != 0) && (*(int *)(DAT_01b37568 + 0xc) != 0)) {
    uVar1 = FUN_0095ea40(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}

// 0095F7A0  FUN_0095f7a0  size=227  [callgraph]
int __thiscall FUN_0095f7a0(int param_1,undefined4 *param_2)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _Dst = (undefined4 *)(param_1 + 0x14);
  _memset(_Dst,0,0x108);
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  FUN_0095a1c0();
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = param_2;
  puVar3 = _Dst;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = VRMission::cVRPhaseE02::cVRPhaseE02(param_2);
  if (iVar1 == 0) {
    _memset(_Dst,0,0x108);
    *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    FUN_0095a1c0();
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_0095ed90(param_2);
    if (iVar1 == 0) {
      FUN_0095a280();
    }
  }
  cXmlBinary::cXmlBinary_34();
  *(undefined4 *)(param_1 + 0x148) = 0;
  return iVar1;
}

// 0095F890  FUN_0095f890  size=264  [callgraph]
void __fastcall FUN_0095f890(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    FUN_00c78300();
    uVar3 = FUN_00e678d0(2,0xf000,0xffffffff);
    FUN_00e80d00(uVar3);
    DAT_01bea070 = DAT_01bea070 | 0x20000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
    DAT_01bea094 = DAT_01bea094 | 0x40000100;
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3(1);
    DAT_01bea064 = DAT_01bea064 | 0x8000400;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
      DAT_01bea094 = DAT_01bea094 & 0xbffffeff;
      DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
      DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
      DAT_01bea064 = DAT_01bea064 & 0xf7fffbff;
      FUN_00c17870();
      return;
    }
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x13c);
    *(float *)(param_1 + 0x13c) = fVar1;
    if (fVar1 <= 120.0) {
      uVar3 = FUN_00e678d0(2,0xf000,0xffffffff);
      iVar2 = FUN_00e7a6e0(uVar3);
      if (iVar2 != 0) {
        return;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

// 0095F9A0  FUN_0095f9a0  size=238  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0095f9a0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    _DAT_01dc1358 = *(undefined4 *)(param_1 + 0x104);
    DAT_01dc1360 = 1;
    _DAT_01dc135c = 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    FUN_00c78300();
    DAT_01bea070 = DAT_01bea070 | 0x20000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
    DAT_01bea094 = DAT_01bea094 | 0x40000100;
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3(1);
    DAT_01bea064 = DAT_01bea064 | 0x8000000;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else if (iVar2 == 1) {
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x13c);
    *(float *)(param_1 + 0x13c) = fVar1;
    if (60.0 < fVar1) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
  }
  else if (iVar2 == 2) {
    FUN_00ebddd0();
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
    DAT_01bea094 = DAT_01bea094 & 0xbffffeff;
    DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
    DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
    DAT_01bea064 = DAT_01bea064 & 0xf7fffbff;
    FUN_00c17870();
    return;
  }
  return;
}

// 0095FA90  VRMission::cVRMistakeNoDatsuKill::vf0C  size=464  [class]
void __fastcall VRMission::cVRMistakeNoDatsuKill::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  float10 fVar8;
  undefined **ppuStack_110;
  undefined1 *puStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [256];
  
  piVar1 = (int *)FUN_00c1b9a0();
  iVar2 = (**(code **)(*piVar1 + 0x88))();
  *(int *)(param_1 + 0x10) = iVar2 - *(int *)(param_1 + 0x1c);
  piVar1 = (int *)FUN_00c1b9a0();
  iVar2 = (**(code **)(*piVar1 + 0x84))();
  puStack_10c = auStack_100;
  *(int *)(param_1 + 0x14) = iVar2 - *(int *)(param_1 + 0x20);
  iStack_108 = 0;
  uStack_104 = 0x40;
  ppuStack_110 = lib::StaticArray<Entity*,64>::vftable;
  iVar3 = lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_3(&ppuStack_110);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = FUN_0095f140();
  iVar4 = FUN_0095e530();
  if (iVar4 != 0) {
    iVar5 = FUN_00c19640();
    iVar4 = *(int *)(param_1 + 0x14);
    iVar6 = *(int *)(param_1 + 0x24) - iVar5;
    *(int *)(param_1 + 0x28) = iVar5;
    iVar5 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x2c) = iVar6;
    if (iVar5 == iVar4) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if ((DAT_01bea060 & 0x2000400) != 0) {
        return;
      }
      if (iVar4 < iVar6) goto LAB_0095fb13;
    }
    else {
      if (iVar5 <= iVar4) {
        if (iVar4 <= iVar5) {
          fVar8 = (float10)FUN_00e049b0();
          *(float *)(param_1 + 0x18) = (float)(fVar8 + (float10)*(float *)(param_1 + 0x18));
          return;
        }
        if ((DAT_01bea060 & 0x2000000) != 0) {
          return;
        }
        iVar4 = FUN_00416910(0x15);
        if (iVar4 == 1) {
          return;
        }
        if ((0 < iVar3) && (puVar7 = puStack_10c, puStack_10c != puStack_10c + iStack_108 * 4)) {
          do {
            piVar1 = (int *)FUN_00a7c8a0();
            iVar3 = (**(code **)(*piVar1 + 0x200))();
            if ((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), *(int *)(iVar3 + 0x4e4) == 1)) {
              iVar2 = FUN_0095cac0();
              iVar2 = iVar2 + -1;
              goto LAB_0095fc2b;
            }
            puVar7 = puVar7 + 4;
          } while (puVar7 != puStack_10c + iStack_108 * 4);
        }
        iVar3 = FUN_0095cac0();
        if (iVar3 == 0) {
LAB_0095fc2b:
          if (iVar2 != 0) {
            return;
          }
        }
        *(undefined4 *)(param_1 + 4) = 1;
        return;
      }
      if ((DAT_01bea060 & 0x2000400) != 0) {
        return;
      }
      iVar4 = (iVar5 - iVar4) + iVar4;
      if (iVar4 < iVar6) {
        *(undefined4 *)(param_1 + 4) = 1;
        return;
      }
    }
    if (iVar4 != iVar6) {
      return;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
LAB_0095fb13:
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

// 0095FC60  VRMission::cVRMistakeNoDatsuKillDlc::vf0C  size=489  [class]
void __fastcall VRMission::cVRMistakeNoDatsuKillDlc::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  float10 fVar9;
  undefined **ppuStack_210;
  undefined1 *puStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [512];
  
  piVar1 = (int *)FUN_00c1b9a0();
  iVar2 = (**(code **)(*piVar1 + 0x88))();
  *(int *)(param_1 + 0x10) = iVar2 - *(int *)(param_1 + 0x1c);
  piVar1 = (int *)FUN_00c1b9a0();
  iVar2 = (**(code **)(*piVar1 + 0x84))();
  *(int *)(param_1 + 0x14) = iVar2 - *(int *)(param_1 + 0x20);
  lib::StaticArray<Entity*,128>::StaticArray<Entity*,128>();
  if (*(int *)(param_1 + 0x30) == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  puStack_20c = auStack_200;
  iStack_208 = 0;
  uStack_204 = 0x80;
  ppuStack_210 = lib::StaticArray<Entity*,128>::vftable;
  iVar3 = lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_3(&ppuStack_210);
  iVar2 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = FUN_0095f260();
  iVar5 = FUN_0095e780();
  if (iVar5 != 0) {
    iVar6 = FUN_00c19640();
    iVar6 = iVar6 - *(int *)(param_1 + 0x34);
    iVar5 = *(int *)(param_1 + 0x14);
    iVar7 = *(int *)(param_1 + 0x24) - iVar6;
    *(int *)(param_1 + 0x28) = iVar6;
    iVar6 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x2c) = iVar7;
    if (iVar6 == iVar5) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if ((DAT_01bea060 & 0x2000400) != 0) {
        return;
      }
      if (iVar5 < iVar7) goto LAB_0095fe06;
    }
    else {
      if (iVar6 <= iVar5) {
        if (iVar5 <= iVar6) {
          fVar9 = (float10)FUN_00e049b0();
          *(float *)(param_1 + 0x18) = (float)(fVar9 + (float10)*(float *)(param_1 + 0x18));
          return;
        }
        if ((DAT_01bea060 & 0x2000000) != 0) {
          return;
        }
        iVar5 = FUN_00416910(0x15);
        if (iVar5 == 1) {
          return;
        }
        if ((iVar3 != iVar2 && -1 < iVar3 - iVar2) &&
           (puVar8 = puStack_20c, puStack_20c != puStack_20c + iStack_208 * 4)) {
          do {
            piVar1 = (int *)FUN_00a7c8a0();
            iVar2 = (**(code **)(*piVar1 + 0x200))();
            if ((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), *(int *)(iVar2 + 0x4e4) == 1)) {
              iVar2 = FUN_0095cc20();
              if (iVar2 != 1) {
                return;
              }
              *(undefined4 *)(param_1 + 4) = 1;
              return;
            }
            puVar8 = puVar8 + 4;
          } while (puVar8 != puStack_20c + iStack_208 * 4);
        }
        iVar2 = FUN_0095cc20();
        if ((iVar2 == 0) && (iVar4 != 0)) {
          return;
        }
        goto LAB_0095fe06;
      }
      if ((DAT_01bea060 & 0x2000400) != 0) {
        return;
      }
      iVar5 = (iVar6 - iVar5) + iVar5;
      if (iVar5 < iVar7) {
        *(undefined4 *)(param_1 + 4) = 1;
        return;
      }
    }
    if (iVar5 != iVar7) {
      return;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
LAB_0095fe06:
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

// 0095FE50  VRMission::cVRObjectiveKogekkoStunKill::vf0C  size=42  [class]
void __fastcall VRMission::cVRObjectiveKogekkoStunKill::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x20) == -1) {
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_2();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>();
  }
  FUN_0095e8c0();
  FUN_0095aa30();
  return;
}

// 0095FE80  FUN_0095fe80  size=174  [callgraph]
void __fastcall FUN_0095fe80(int param_1)

{
  undefined4 uVar1;
  
  DAT_01bea090 = DAT_01bea090 | 0x80c400;
  DAT_01bea094 = DAT_01bea094 | 0x40000100;
  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3(0);
  DAT_01bea064 = DAT_01bea064 | 0x8000000;
  uVar1 = FUN_00d35ce0();
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  FUN_00cc13b0(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      uVar1 = cTimeLimitDisp::cTimeLimitDisp_2();
      DAT_018b5700 = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x120) = uVar1;
    }
  }
  else if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  FUN_0095b880();
  FUN_0095b8f0();
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

// 0095FF30  FUN_0095ff30  size=940  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0095ff30(int param_1)

{
  float fVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  float fStack_c;
  
  FUN_0095d330();
  piVar3 = (int *)FUN_00c1b9a0();
  iVar4 = (**(code **)(*piVar3 + 0x24))();
  fStack_c = DAT_01b76204;
  if (iVar4 == 0) {
    piVar3 = (int *)FUN_00c1b9a0();
    iVar4 = (**(code **)(*piVar3 + 0xac))();
    fStack_c = *(float *)(iVar4 + 4);
  }
  bVar2 = true;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0095d910();
    if ((DAT_018b9174 == 0xd71) && (iVar4 = FUN_00a81330(), iVar4 == 0)) {
      FUN_0095b880();
    }
    FUN_0095be10();
    if (*(int *)(param_1 + 0x134) == 0) {
      FUN_0095ba00();
    }
    FUN_0095d270();
    if (((DAT_018b9174 != 0xd75) || (iVar4 = FUN_009c4bf0(), iVar4 == 4)) &&
       (*(int *)(param_1 + 0x100) != 0)) {
      piVar3 = (int *)FUN_00a6e640();
      iVar4 = (**(code **)(*piVar3 + 0x24))(*(undefined4 *)(param_1 + 0xfc),1,2);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 4) = 8;
        return;
      }
    }
    if ((*(int *)(param_1 + 0xf8) != 0) &&
       (fVar1 = *(float *)(param_1 + 0xf4) - fStack_c, fVar1 < 0.0 != (fVar1 == 0.0))) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 4) = 9;
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x1c) == 1) {
      piVar3 = (int *)FUN_00c1b9a0();
      iVar4 = (**(code **)(*piVar3 + 0x24))();
      if (iVar4 != 0) {
        piVar3 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar3 + 0x14))();
      }
      if (*(int *)(param_1 + 0xe8) == 1) {
        FUN_0095bb10(*(undefined4 *)(param_1 + 0x14));
      }
      if (*(int *)(param_1 + 0xb8) == 0) {
        *(undefined4 *)(param_1 + 4) = 3;
        if (*(int *)(param_1 + 0x128) == 0) {
          DAT_01bea090 = DAT_01bea090 | 0x80c400;
          DAT_01bea094 = DAT_01bea094 | 0x48000100;
          lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3(1);
          DAT_01bea064 = DAT_01bea064 | 0x8000000;
          uVar5 = FUN_00d35e30();
          *(undefined4 *)(param_1 + 0x128) = uVar5;
          FUN_00cd9d90(param_1 + 0x14);
          DAT_01bea070 = DAT_01bea070 | 0x200000;
          iVar4 = FUN_00416d50(0x33);
          if (iVar4 == 0) {
            DAT_01bea090 = DAT_01bea090 | 0x8000000;
          }
          if (DAT_018b9174 == 0xe40) {
            piVar3 = (int *)FUN_00c13920();
            iVar4 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
            if (iVar4 != 0) {
              uVar5 = FUN_00a7c8a0();
              iVar4 = FUN_00412580(uVar5);
              if ((iVar4 != 0) && (iVar4 = FUN_00b80980(), iVar4 != 0)) {
                FUN_0049cc90(4);
              }
            }
          }
          if (DAT_018b9174 == 0xe29) {
            FUN_00c193e0(9);
          }
          FUN_0049cc90(5);
          iVar4 = FUN_00d467a0();
          if (iVar4 == 0) {
            pcVar6 = "bgm_VR_Clear_Mission";
          }
          else {
            pcVar6 = "bgm_VR_Clear_Mission_DLC3";
          }
          FUN_00e5e1b0(pcVar6);
          if (DAT_018b9174 - 0xe21U < 0x30) {
            FUN_00e5e050("rb40_clear_se",0);
          }
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
        if (5999.99 < fStack_c) {
          fStack_c = 5999.99;
        }
        FUN_0095a2d0(fStack_c);
        FUN_0095a340(fStack_c);
      }
      else {
        FUN_0095f760();
        *(undefined4 *)(param_1 + 0x13c) = 0xbf800000;
        *(undefined4 *)(param_1 + 4) = 4;
      }
    }
    else if (*(int *)(*(int *)(param_1 + 0xc) + 0x20) == 1) {
      bVar2 = false;
      if (*(int *)(param_1 + 0xb4) == 0) {
        FUN_00c17870();
      }
      else {
        DAT_01bea090 = DAT_01bea090 | 0x80c400;
        DAT_01bea094 = DAT_01bea094 | 0x40000100;
        lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3(1);
        DAT_01bea064 = DAT_01bea064 | 0x8000000;
        FUN_00c78300();
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 4) = 7;
      }
    }
  }
  iVar4 = FUN_00c17860();
  if ((iVar4 == 0) && (bVar2)) {
    *(float *)(param_1 + 0x140) = fStack_c;
  }
  else {
    fStack_c = *(float *)(param_1 + 0x140);
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    fStack_c = *(float *)(param_1 + 0xf4) - fStack_c;
    if (fStack_c <= 0.0) {
      fStack_c = 0.0;
    }
  }
  _DAT_01dc1358 = *(undefined4 *)(param_1 + 0x104);
  DAT_01dc1360 = 1;
  _DAT_01dc135c = fStack_c;
  return;
}

// 009602E0  FUN_009602e0  size=204  [callgraph]
void __fastcall FUN_009602e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 6) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
    }
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      FUN_0095fe80();
      break;
    case 1:
      FUN_0095da00();
      break;
    case 2:
      FUN_0095ff30();
      break;
    case 3:
      FUN_0095daf0();
      break;
    case 4:
      FUN_0095b740();
      break;
    case 5:
      FUN_0095d010();
      break;
    case 7:
      FUN_0095d0e0();
      break;
    case 8:
      FUN_0095f890();
      break;
    case 9:
      FUN_0095f9a0();
    }
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_00d35000();
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      (**(code **)(**(int **)(param_1 + 0x128) + 4))();
    }
    if (*(int *)(param_1 + 300) != 0) {
      (**(code **)(**(int **)(param_1 + 300) + 4))();
    }
    FUN_00d55a20();
    return;
  }
  return;
}

// 009603E0  FUN_009603e0  size=233  [callgraph]
void FUN_009603e0(void)

{
  int iVar1;
  undefined1 local_108 [264];
  
  if (DAT_01b37560 == 0) {
    return;
  }
  if (DAT_01b37570 == 0) {
    if (DAT_01b37578 == 0) {
      return;
    }
  }
  else if (DAT_01b37578 == 0) {
    FUN_009602e0();
    if (*(int *)(DAT_01b37568 + 4) != 6) {
      DAT_01b37574 = 1;
      return;
    }
    if (DAT_01b37574 != 1) {
      return;
    }
    DAT_01b37574 = 0;
    iVar1 = FUN_0095bd40(local_108);
    if (iVar1 != 1) {
      FUN_00dd5650(&DAT_01650dc0);
      DAT_01bea060 = DAT_01bea060 & 0xffffffbf;
      return;
    }
    iVar1 = FUN_0095b410(local_108);
    if (iVar1 != 0) {
      FUN_009c8c00(4,0xffffffff);
      DAT_01bea060 = DAT_01bea060 & 0xffffffbf;
      return;
    }
    FUN_00dd5650(&DAT_01650df4);
    DAT_01bea060 = DAT_01bea060 & 0xffffffbf;
    return;
  }
  FUN_0095cea0();
  return;
}

// 009604D0  FUN_009604d0  size=770  [callgraph]
undefined1 __thiscall FUN_009604d0(float *param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  float *pfVar10;
  uint uVar11;
  undefined *puVar12;
  int local_d18;
  uint local_d14;
  uint local_d10;
  float local_d0c;
  float local_d08;
  float *local_d04;
  undefined1 local_d00 [256];
  undefined1 local_c00 [1024];
  undefined1 local_800 [1024];
  undefined1 local_400 [1024];
  
  local_d10 = 0;
  local_d04 = param_1;
  while( true ) {
    pfVar10 = local_d04;
    uVar11 = 0;
    if (local_d10 == 0) {
      iVar5 = FUN_00959930(local_400,"the_%dst",1);
      *pfVar10 = 0.0;
    }
    else if (local_d10 == 1) {
      iVar5 = FUN_00959930(local_c00,"the_%dnd",2);
      pfVar10[1] = 0.0;
      pfVar10 = pfVar10 + 1;
    }
    else {
      if (local_d10 != 2) break;
      iVar5 = FUN_00959930(local_800,"the_%drd",3);
      pfVar10[2] = 0.0;
      pfVar10 = pfVar10 + 2;
    }
    if (iVar5 == 0) break;
    local_d18 = 0;
    FUN_008da080(param_2,iVar5,&local_d18);
    iVar4 = local_d18;
    if (local_d18 == 0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = *(char **)(local_d18 + 0x14);
    }
    pcVar1 = pcVar6 + 1;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    if (0xf < (uint)((int)pcVar6 - (int)pcVar1)) {
      FUN_00dd5650(&DAT_01650e28,iVar5);
      if ((iVar4 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        piVar2 = (int *)(iVar4 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_008d9490(iVar4);
          FUN_00e913d0(iVar4);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
      }
      return 0;
    }
    local_d14 = 0;
    local_d0c = 60.0;
    do {
      if (local_d14 < 2) {
        uVar7 = FUN_0095f040(0x2e,uVar11);
        if (uVar7 == 0xffffffff) {
          puVar12 = &DAT_01650e88;
          goto LAB_009605e3;
        }
      }
      else {
        if (iVar4 == 0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = *(char **)(iVar4 + 0x14);
        }
        pcVar1 = pcVar6 + 1;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        uVar7 = (int)pcVar6 - (int)pcVar1;
      }
      _memset(local_d00,0,0x100);
      if (uVar11 < uVar7) {
        uVar8 = uVar11;
        do {
          if (iVar4 == 0) {
            puVar9 = &DAT_016416fa;
          }
          else {
            puVar9 = *(undefined1 **)(iVar4 + 0x14);
          }
          local_d00[uVar8 - uVar11] = puVar9[uVar8];
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      local_d08 = 0.0;
      iVar5 = FUN_00ea3b60(&local_d08,local_d00);
      if (iVar5 == 0) {
        puVar12 = &DAT_01650e6c;
LAB_009605e3:
        FUN_00dd5650(puVar12);
        if (iVar4 == 0) {
          return 0;
        }
        if (PTR_LOOP_01880250[0xd] != '\0') {
          return 0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        piVar2 = (int *)(iVar4 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_008d9490(iVar4);
          FUN_00e913d0(iVar4);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        return 0;
      }
      local_d14 = local_d14 + 1;
      uVar11 = uVar7 + 1;
      *pfVar10 = local_d08 * local_d0c + *pfVar10;
      local_d0c = local_d0c * 0.016666668;
    } while (local_d14 < 2);
    *pfVar10 = *pfVar10 * 60.0;
    if ((iVar4 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
      piVar2 = (int *)(iVar4 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_008d9490(iVar4);
        FUN_00e913d0(iVar4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    }
    local_d10 = local_d10 + 1;
    if (2 < local_d10) {
      return 1;
    }
  }
  FUN_00dd5650(&DAT_01650e48);
  return 0;
}

// 009607E0  FUN_009607e0  size=1959  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00960ab8) */
/* WARNING: Removing unreachable block (ram,0x009609ef) */
/* WARNING: Removing unreachable block (ram,0x009609b3) */
/* WARNING: Removing unreachable block (ram,0x0096098c) */
/* WARNING: Removing unreachable block (ram,0x00960a30) */
/* WARNING: Removing unreachable block (ram,0x00960ae8) */
/* WARNING: Removing unreachable block (ram,0x00960b0d) */
/* WARNING: Removing unreachable block (ram,0x00960b29) */
/* WARNING: Removing unreachable block (ram,0x00960b83) */
/* WARNING: Removing unreachable block (ram,0x00960959) */
/* WARNING: Removing unreachable block (ram,0x00960b8a) */

undefined1 __thiscall FUN_009607e0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  size_t _Size;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 unaff_EBP;
  uint uVar12;
  int unaff_EDI;
  size_t sVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fStack_254;
  uint uStack_250;
  float fStack_244;
  undefined4 uStack_240;
  char *pcStack_23c;
  undefined4 uStack_238;
  undefined1 auStack_220 [4];
  undefined4 uStack_21c;
  undefined4 uStack_214;
  undefined4 *local_210;
  char acStack_120 [288];
  
  param_1[2] = 0xbf800000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0;
  uStack_238 = 1;
  pcStack_23c = "enemyCamPerformance";
  uStack_240 = (undefined1 *)0x960857;
  local_210 = param_1;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    uStack_240 = &stack0xfffffdd3;
    (**(code **)(*param_2 + 0x40))();
    (**(code **)(*param_2 + 0x14))();
  }
  if ((char)((uint)unaff_EBP >> 0x18) == '\x01') {
    *param_1 = 1;
  }
  uStack_240 = (undefined1 *)0x1;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x40))();
    (**(code **)(*param_2 + 0x14))();
  }
  if (uStack_238._3_1_ == '\x01') {
    param_1[1] = 1;
  }
  uStack_214 = 0;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 == '\0') {
LAB_0096090f:
    uStack_21c = 0xbf800000;
  }
  else {
    (**(code **)(*param_2 + 0x1c))();
    (**(code **)(*param_2 + 0x14))();
    if (uStack_240._1_1_ != '\x01') goto LAB_0096090f;
  }
  param_1[2] = uStack_21c;
  uStack_238 = 0xffffffff;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x28))();
    (**(code **)(*param_2 + 0x14))();
  }
  cVar2 = FUN_008da080();
  if (cVar2 == '\x01') {
    pcVar4 = "";
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 != "") {
      pcVar4 = "";
      do {
        pcVar14 = pcVar4;
        pcVar4 = pcVar14 + 1;
      } while (*pcVar14 != '\0');
      if ((pcVar14 + -0x16416fa < (char *)0x100) && (_Size = FUN_0095f040(), -1 < (int)_Size)) {
        pcVar4 = "";
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if (pcVar4 + (-0x16416fc - _Size) < &DAT_00000020) {
          _memset(acStack_120,0,0x100);
          _strcpy_s(acStack_120,0x100,"");
          _memset(auStack_220,0,0x100);
          sVar13 = 0;
          if (0 < (int)_Size) {
            FID_conflict__memcpy(auStack_220,acStack_120,_Size);
            sVar13 = _Size;
          }
          uStack_238 = 0;
          iVar5 = FUN_00ea39a0();
          if (iVar5 != 0) {
            pcVar14 = (char *)(sVar13 + 1);
            param_1[4] = uStack_238;
            pcVar4 = pcVar14 + (0x13 - _Size) + (int)param_1;
            while( true ) {
              pcVar7 = "";
              do {
                pcVar6 = pcVar7;
                pcVar7 = pcVar6 + 1;
              } while (*pcVar6 != '\0');
              if (pcVar6 + -0x16416fa <= pcVar14) break;
              *pcVar4 = acStack_120[(int)pcVar14];
              pcVar14 = pcVar14 + 1;
              pcVar4 = pcVar4 + 1;
            }
            goto LAB_00960b46;
          }
        }
      }
      FUN_00dd5650();
    }
  }
LAB_00960b46:
  pcVar4 = "missionClearSave";
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x40))();
    (**(code **)(*param_2 + 0x14))();
  }
  pcVar14 = "battleGAFilterNo";
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x28))();
    (**(code **)(*param_2 + 0x14))();
    if ((char)((uint)unaff_EDI >> 8) == '\x01') {
      param_1[0xe] = 8;
    }
  }
  uVar16 = 8;
  uStack_250 = 0xffffffff;
  cVar2 = (**(code **)(*param_2 + 0x10))();
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x28))();
    (**(code **)(*param_2 + 0x14))("augmentGAFilterNo",8);
    if ((char)((uint)pcVar4 >> 8) == '\x01') {
      param_1[0xf] = unaff_EDI;
    }
  }
  fStack_244 = 0.0;
  iVar5 = 0;
  cVar2 = FUN_008da080(param_2,"timeLimit");
  if (cVar2 != '\0') {
    if (iVar5 == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = *(char **)(iVar5 + 0x14);
    }
    pcVar6 = pcVar7 + 1;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (pcVar7 != pcVar6) {
      uVar12 = 0;
      fStack_254 = 60.0;
      uStack_250 = 0;
      do {
        if (uStack_250 < 2) {
          uVar8 = FUN_0095f040(0x2e);
          if (uVar8 == 0xffffffff) {
            FUN_00dd5650();
            pcVar4 = (char *)CONCAT13((char)((uint)pcVar4 >> 0x18),(uint3)(ushort)pcVar4);
            goto LAB_00960d9a;
          }
        }
        else {
          if (iVar5 == 0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = *(char **)(iVar5 + 0x14);
          }
          pcVar6 = pcVar7 + 1;
          do {
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          uVar8 = (int)pcVar7 - (int)pcVar6;
        }
        _memset(&uStack_238,0,0x100);
        if (uVar12 < uVar8) {
          uVar9 = uVar12;
          do {
            if (iVar5 == 0) {
              puVar11 = &DAT_016416fa;
            }
            else {
              puVar11 = *(undefined1 **)(iVar5 + 0x14);
            }
            *(undefined1 *)((int)&uStack_238 + (uVar9 - uVar12)) = puVar11[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        uStack_240 = (undefined1 *)0x0;
        iVar10 = FUN_00ea3b60(&uStack_240);
        if (iVar10 == 0) {
          FUN_00dd5650();
          pcVar4 = (char *)CONCAT13((char)((uint)pcVar4 >> 0x18),(uint3)(ushort)pcVar4);
          goto LAB_00960d9a;
        }
        uStack_250 = uStack_250 + 1;
        uVar12 = uVar8 + 1;
        fStack_244 = (float)uStack_240 * fStack_254 + fStack_244;
        fStack_254 = fStack_254 * 0.016666668;
      } while (uStack_250 < 2);
      if ((char)((uint)pcVar4 >> 0x10) != '\0') {
        param_1[0x10] = fStack_244;
        param_1[0x11] = 1;
      }
    }
  }
LAB_00960d9a:
  if ((iVar5 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    piVar1 = (int *)(iVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_008d9490();
      FUN_00e913d0();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
  }
  uVar15 = 7;
  cVar2 = (**(code **)(*param_2 + 0x10))("stageFall");
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*param_2 + 0x2c))(&stack0xfffffda4);
    uVar16 = CONCAT22((short)((uint)uVar16 >> 0x10),CONCAT11(uVar3,(char)uVar16));
    (**(code **)(*param_2 + 0x14))("stageFall",7);
    if ((char)((uint)pcVar14 >> 8) == '\x01') {
      param_1[0x12] = iVar5;
      param_1[0x13] = 1;
    }
  }
  uVar3 = (undefined1)((uint)pcVar14 >> 0x10);
  if ((((0xc70 < DAT_018b9174) && (DAT_018b9174 < 0xc76)) || (DAT_018b9174 - 0xd71U < 5)) &&
     (iVar5 = FUN_009c4bf0(), iVar5 == 4)) {
    uVar17 = 0xffffffff;
    cVar2 = (**(code **)(*param_2 + 0x10))("GA_RE",8);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_2 + 0x28))(&stack0xfffffd94);
      (**(code **)(*param_2 + 0x14))("GA_RE",8);
      if (cVar2 == '\x01') {
        *(undefined4 *)(unaff_EDI + 0xc) = uVar16;
      }
    }
    cVar2 = (**(code **)(*param_2 + 0x10))("GA_RE_BTL",8);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_2 + 0x28))(&stack0xfffffd8c);
      (**(code **)(*param_2 + 0x14))("GA_RE_BTL",8);
      if (cVar2 == '\x01') {
        *(undefined4 *)(pcVar4 + 0x38) = uVar15;
      }
    }
    cVar2 = (**(code **)(*param_2 + 0x10))("GA_RE_BTL_AUG",8);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_2 + 0x28))(&stack0xfffffd9c);
      (**(code **)(*param_2 + 0x14))("GA_RE_BTL_AUG",8);
      if (cVar2 == '\x01') {
        *(undefined4 *)(uStack_250 + 0x3c) = uVar17;
      }
    }
  }
  if (PTR_LOOP_01880250[0xd] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    iRam00000017 = iRam00000017 + -1;
    if (iRam00000017 == 0) {
      FUN_008d9490(0xffffffff);
      FUN_00e913d0(0xffffffff);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
  }
  return uVar3;
}

// 009610B0  FUN_009610b0  size=3792  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_009610b0(char *param_1,int *param_2)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar10;
  int unaff_EDI;
  uint *local_524;
  char *local_520;
  char *pcStack_51c;
  uint uStack_518;
  uint uStack_514;
  undefined4 uStack_510;
  char *local_508;
  undefined4 local_504 [63];
  undefined1 auStack_408 [1028];
  int *piStack_4;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  local_508 = param_1;
  _memset(param_1 + 0x30,0,0x30);
  _memset(param_1 + 0x6c,0,0x30);
  local_524 = (uint *)0x0;
  FUN_008da080(param_2,&DAT_016511c4,&local_524);
  if (local_524 == (uint *)0x0) {
    pcVar6 = "";
  }
  else {
    pcVar6 = (char *)local_524[5];
  }
  _strcpy_s(param_1,0x10,pcVar6);
  local_520 = (char *)0x0;
  FUN_008da080(param_2,"PhaseNo",&local_520);
  local_504[0] = 0;
  if (local_520 == (char *)0x0) {
    puVar8 = &DAT_016416fa;
  }
  else {
    puVar8 = *(undefined1 **)(local_520 + 0x14);
  }
  FUN_00ea39a0(local_504,puVar8);
  *(undefined4 *)(param_1 + 0x10) = local_504[0];
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_016511b4,7);
  if (cVar4 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x14);
    (**(code **)(*param_2 + 0x14))(&DAT_016511b4,7);
  }
  local_524 = (uint *)(param_1 + 0x18);
  pcStack_51c = (char *)0x0;
  local_520 = param_1 + 0x30;
  do {
    uVar5 = FUN_00959930(auStack_408,"Objectiv");
    uStack_518 = 0;
    if ((_DAT_01b35c04 & 1) == 0) {
      _DAT_01b35c04 = _DAT_01b35c04 | 1;
      DAT_01b35c00 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar7 = DAT_01b35c00;
    cVar4 = (**(code **)(*param_2 + 0x10))(uVar5,DAT_01b35c00);
    uVar10 = 0;
    if (cVar4 == '\0') {
LAB_00961221:
      pcVar6 = "";
    }
    else {
      lib::DynamicArray<char,sys::StringSystem::Allocator>::
      DynamicArray<char,sys::StringSystem::Allocator>(param_2,&uStack_518);
      (**(code **)(*param_2 + 0x14))(uVar5,iVar7);
      uVar10 = uStack_518;
      if (uStack_518 == 0) goto LAB_00961221;
      pcVar6 = *(char **)(uStack_518 + 0x14);
    }
    pcVar1 = pcVar6 + 1;
    do {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar4 != '\0');
    if (pcVar6 == pcVar1) {
      if (pcStack_51c == (char *)0x0) {
        FUN_00dd5650(&DAT_01651180);
        if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(uVar10 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(uVar10);
            FUN_00e913d0(uVar10);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(unaff_EBX + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(unaff_EBX);
            FUN_00e913d0(unaff_EBX);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if (unaff_EBP == 0) {
          return '\0';
        }
        if (PTR_LOOP_01880250[0xd] != '\0') {
          return '\0';
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        piVar2 = (int *)(unaff_EBP + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_008d9490(unaff_EBP);
          FUN_00e913d0(unaff_EBP);
        }
        goto LAB_00961487;
      }
      *local_524 = 0xffffffff;
      if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        piVar2 = (int *)(uVar10 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_008d9490(uVar10);
          FUN_00e913d0(uVar10);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
      }
    }
    else {
      if (uVar10 == 0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = *(char **)(uVar10 + 0x14);
      }
      pcVar1 = pcVar6 + 1;
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      if (0xf < (uint)((int)pcVar6 - (int)pcVar1)) {
        if (uVar10 == 0) {
          puVar8 = &DAT_016416fa;
        }
        else {
          puVar8 = *(undefined1 **)(uVar10 + 0x14);
        }
        FUN_00dd5650(&DAT_0165115c,puVar8);
        if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(uVar10 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(uVar10);
            FUN_00e913d0(uVar10);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(unaff_EBX + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(unaff_EBX);
            FUN_00e913d0(unaff_EBX);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if (unaff_EBP == 0) {
          return '\0';
        }
        if (PTR_LOOP_01880250[0xd] != '\0') {
          return '\0';
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        piVar2 = (int *)(unaff_EBP + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_008d9490(unaff_EBP);
          FUN_00e913d0(unaff_EBP);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          return '\0';
        }
        goto LAB_00961487;
      }
      if (uVar10 == 0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = *(char **)(uVar10 + 0x14);
      }
      _strcpy_s(local_520,0x10,pcVar6);
      _memset(&local_508,0,0x100);
      uVar9 = 7;
      while( true ) {
        if (uVar10 == 0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = *(char **)(uVar10 + 0x14);
        }
        pcVar1 = pcVar6 + 1;
        do {
          cVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar4 != '\0');
        if ((uint)((int)pcVar6 - (int)pcVar1) <= uVar9) break;
        if (uVar10 == 0) {
          *(undefined1 *)((int)&uStack_510 + uVar9 + 1) = (&DAT_016416fa)[uVar9];
          uVar9 = uVar9 + 1;
        }
        else {
          *(undefined1 *)((int)&uStack_510 + uVar9 + 1) =
               *(undefined1 *)(*(int *)(uVar10 + 0x14) + uVar9);
          uVar9 = uVar9 + 1;
        }
      }
      uStack_514 = 0;
      iVar7 = FUN_00ea38f0(&uStack_514,&local_508);
      if (iVar7 == 0) {
        if (uVar10 == 0) {
          puVar8 = &DAT_016416fa;
        }
        else {
          puVar8 = *(undefined1 **)(uVar10 + 0x14);
        }
        FUN_00dd5650(&DAT_01651138,puVar8);
        if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(uVar10 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(uVar10);
            FUN_00e913d0(uVar10);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(unaff_EBX + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(unaff_EBX);
            FUN_00e913d0(unaff_EBX);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if (unaff_EBP == 0) {
          return '\0';
        }
        if (PTR_LOOP_01880250[0xd] != '\0') {
          return '\0';
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        piVar2 = (int *)(unaff_EBP + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_008d9490(unaff_EBP);
          FUN_00e913d0(unaff_EBP);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          return '\0';
        }
        goto LAB_00961487;
      }
      if (0x13 < uStack_514) {
        if (uVar10 == 0) {
          puVar8 = &DAT_016416fa;
        }
        else {
          puVar8 = *(undefined1 **)(uVar10 + 0x14);
        }
        FUN_00dd5650(&DAT_01651110,puVar8);
        if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(uVar10 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(uVar10);
            FUN_00e913d0(uVar10);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar2 = (int *)(unaff_EBX + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_008d9490(unaff_EBX);
            FUN_00e913d0(unaff_EBX);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        if (unaff_EBP == 0) {
          return '\0';
        }
        if (PTR_LOOP_01880250[0xd] != '\0') {
          return '\0';
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        piVar2 = (int *)(unaff_EBP + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_008d9490(unaff_EBP);
          FUN_00e913d0(unaff_EBP);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          return '\0';
        }
        goto LAB_00961487;
      }
      *local_524 = uStack_514;
      if (uVar10 != 0) {
        FUN_008d98a0(uVar10);
      }
    }
    local_520 = local_520 + 0x10;
    local_524 = local_524 + 1;
    pcStack_51c = pcStack_51c + 1;
  } while (pcStack_51c < (char *)0x3);
  if ((_DAT_01b37594 & 1) == 0) {
    _DAT_01b37594 = _DAT_01b37594 | 1;
    DAT_01b37590 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar7 = DAT_01b37590;
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_01651108,DAT_01b37590);
  if (cVar4 != '\0') {
    cVar4 = FUN_009604d0(param_2);
    (**(code **)(*param_2 + 0x14))(&DAT_01651108,iVar7);
    if (cVar4 != '\0') {
      local_524 = (uint *)(uStack_510 + 0x24);
      pcStack_51c = (char *)(uStack_510 + 0x6c);
      local_520 = (char *)0x0;
      do {
        uVar5 = FUN_00959930(auStack_408,"Mistake");
        piVar2 = piStack_4;
        uStack_514 = 0;
        if ((_DAT_01b35c04 & 1) == 0) {
          _DAT_01b35c04 = _DAT_01b35c04 | 1;
          DAT_01b35c00 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar7 = DAT_01b35c00;
        cVar4 = (**(code **)(*piStack_4 + 0x10))(uVar5,DAT_01b35c00);
        uVar10 = 0;
        if (cVar4 == '\0') {
LAB_00961916:
          pcVar6 = "";
        }
        else {
          lib::DynamicArray<char,sys::StringSystem::Allocator>::
          DynamicArray<char,sys::StringSystem::Allocator>(piVar2,&uStack_514);
          (**(code **)(*piVar2 + 0x14))(uVar5,iVar7);
          uVar10 = uStack_514;
          if (uStack_514 == 0) goto LAB_00961916;
          pcVar6 = *(char **)(uStack_514 + 0x14);
        }
        pcVar1 = pcVar6 + 1;
        do {
          cVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar4 != '\0');
        if (pcVar6 == pcVar1) {
          if (local_520 == pcVar6 + -(int)pcVar1) {
            FUN_00dd5650(&DAT_016510d8);
            if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(uVar10 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(uVar10);
                FUN_00e913d0(uVar10);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(unaff_EBX + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(unaff_EBX);
                FUN_00e913d0(unaff_EBX);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if (unaff_EBP == 0) {
              return '\0';
            }
            if (PTR_LOOP_01880250[0xd] != '\0') {
              return '\0';
            }
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            piVar2 = (int *)(unaff_EBP + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_008d9490(unaff_EBP);
              FUN_00e913d0(unaff_EBP);
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              return '\0';
            }
            goto LAB_00961487;
          }
          *local_524 = 0xffffffff;
        }
        else {
          if (uVar10 == 0) {
            pcVar6 = "";
          }
          else {
            pcVar6 = *(char **)(uVar10 + 0x14);
          }
          pcVar1 = pcVar6 + 1;
          do {
            cVar4 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar4 != '\0');
          if (0xf < (uint)((int)pcVar6 - (int)pcVar1)) {
            if (uVar10 == 0) {
              puVar8 = &DAT_016416fa;
            }
            else {
              puVar8 = *(undefined1 **)(uVar10 + 0x14);
            }
            FUN_00dd5650(&DAT_016510b4,puVar8);
            if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(uVar10 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(uVar10);
                FUN_00e913d0(uVar10);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(unaff_EBX + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(unaff_EBX);
                FUN_00e913d0(unaff_EBX);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if (unaff_EBP == 0) {
              return '\0';
            }
            if (PTR_LOOP_01880250[0xd] != '\0') {
              return '\0';
            }
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            piVar2 = (int *)(unaff_EBP + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_008d9490(unaff_EBP);
              FUN_00e913d0(unaff_EBP);
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              return '\0';
            }
            goto LAB_00961487;
          }
          if (uVar10 == 0) {
            pcVar6 = "";
          }
          else {
            pcVar6 = *(char **)(uVar10 + 0x14);
          }
          _strcpy_s(pcStack_51c,0x10,pcVar6);
          _memset(&local_508,0,0x100);
          uVar9 = 7;
          while( true ) {
            if (uVar10 == 0) {
              pcVar6 = "";
            }
            else {
              pcVar6 = *(char **)(uVar10 + 0x14);
            }
            pcVar1 = pcVar6 + 1;
            do {
              cVar4 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '\0');
            if ((uint)((int)pcVar6 - (int)pcVar1) <= uVar9) break;
            if (uVar10 == 0) {
              *(undefined1 *)((int)&uStack_510 + uVar9 + 1) = (&DAT_016416fa)[uVar9];
              uVar9 = uVar9 + 1;
            }
            else {
              *(undefined1 *)((int)&uStack_510 + uVar9 + 1) =
                   *(undefined1 *)(*(int *)(uVar10 + 0x14) + uVar9);
              uVar9 = uVar9 + 1;
            }
          }
          uStack_518 = 0;
          iVar7 = FUN_00ea38f0(&uStack_518,&local_508);
          if (iVar7 == 0) {
            if (uVar10 == 0) {
              puVar8 = &DAT_016416fa;
            }
            else {
              puVar8 = *(undefined1 **)(uVar10 + 0x14);
            }
            FUN_00dd5650(&DAT_01651090,puVar8);
            if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(uVar10 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(uVar10);
                FUN_00e913d0(uVar10);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(unaff_EBX + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(unaff_EBX);
                FUN_00e913d0(unaff_EBX);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if (unaff_EBP == 0) {
              return '\0';
            }
            if (PTR_LOOP_01880250[0xd] != '\0') {
              return '\0';
            }
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            piVar2 = (int *)(unaff_EBP + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_008d9490(unaff_EBP);
              FUN_00e913d0(unaff_EBP);
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              return '\0';
            }
            goto LAB_00961487;
          }
          if (0x13 < uStack_518) {
            if (uVar10 == 0) {
              puVar8 = &DAT_016416fa;
            }
            else {
              puVar8 = *(undefined1 **)(uVar10 + 0x14);
            }
            FUN_00dd5650(&DAT_01651068,puVar8);
            if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(uVar10 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(uVar10);
                FUN_00e913d0(uVar10);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              piVar2 = (int *)(unaff_EBX + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_008d9490(unaff_EBX);
                FUN_00e913d0(unaff_EBX);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
            if (unaff_EBP == 0) {
              return '\0';
            }
            if (PTR_LOOP_01880250[0xd] != '\0') {
              return '\0';
            }
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            piVar2 = (int *)(unaff_EBP + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_008d9490(unaff_EBP);
              FUN_00e913d0(unaff_EBP);
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              return '\0';
            }
            goto LAB_00961487;
          }
          *local_524 = uStack_518;
        }
        if ((uVar10 != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
          piVar3 = (int *)(uVar10 + 0x18);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            FUN_008d9490(uVar10);
            FUN_00e913d0(uVar10);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        }
        local_524 = local_524 + 1;
        pcStack_51c = pcStack_51c + 0x10;
        local_520 = local_520 + 1;
        if ((char *)0x2 < local_520) {
          if ((_DAT_01b3759c & 1) == 0) {
            _DAT_01b3759c = _DAT_01b3759c | 1;
            DAT_01b37598 = DAT_01884314;
            DAT_01884314 = DAT_01884314 + 1;
          }
          iVar7 = DAT_01b37598;
          cVar4 = (**(code **)(*piVar2 + 0x10))("MissionParam",DAT_01b37598);
          uVar10 = uStack_518;
          if (cVar4 == '\0') {
            cVar4 = '\0';
          }
          else {
            cVar4 = FUN_009607e0(piVar2);
            (**(code **)(*piVar2 + 0x14))("MissionParam",iVar7);
          }
          if (cVar4 == '\0') {
            *(undefined4 *)(uVar10 + 0x9c) = 0;
            *(undefined4 *)(uVar10 + 0xa4) = 0xbf800000;
            *(undefined4 *)(uVar10 + 0xa0) = 0;
            *(undefined4 *)(uVar10 + 0xa8) = 0xffffffff;
            *(undefined4 *)(uVar10 + 0xac) = 0xffffffff;
            *(undefined4 *)(uVar10 + 0xb0) = 0;
            *(undefined4 *)(uVar10 + 0xb4) = 0;
            *(undefined4 *)(uVar10 + 0xb8) = 0;
            *(undefined4 *)(uVar10 + 0xbc) = 0;
            *(undefined4 *)(uVar10 + 0xc0) = 0;
            *(undefined4 *)(uVar10 + 0xc4) = 0;
            *(undefined4 *)(uVar10 + 200) = 0;
            *(undefined4 *)(uVar10 + 0xcc) = 0;
            *(undefined4 *)(uVar10 + 0xdc) = 0;
            *(undefined4 *)(uVar10 + 0xd0) = 0;
            *(undefined4 *)(uVar10 + 0xd4) = 0xffffffff;
            *(undefined4 *)(uVar10 + 0xd8) = 0xffffffff;
            *(undefined4 *)(uVar10 + 0xe0) = 0;
            *(undefined4 *)(uVar10 + 0xe4) = 0xffffffff;
            *(undefined4 *)(uVar10 + 0xe8) = 0;
            cVar4 = '\x01';
          }
          if (unaff_ESI != 0) {
            FUN_008d98a0(unaff_ESI);
          }
          if (unaff_EDI != 0) {
            FUN_008d98a0(unaff_EDI);
          }
          return cVar4;
        }
      } while( true );
    }
  }
  if ((unaff_EBX != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    piVar2 = (int *)(unaff_EBX + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_008d9490(unaff_EBX);
      FUN_00e913d0(unaff_EBX);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
  }
  if ((unaff_EBP != 0) && (PTR_LOOP_01880250[0xd] == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    piVar2 = (int *)(unaff_EBP + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_008d9490(unaff_EBP);
      FUN_00e913d0(unaff_EBP);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
      return '\0';
    }
LAB_00961487:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
  }
  return '\0';
}

// 00961FB0  FUN_00961fb0  size=112  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00961fb0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01b375a4 & 1) == 0) {
    _DAT_01b375a4 = _DAT_01b375a4 | 1;
    DAT_01b375a0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01b375a0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01b375a0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_009610b0(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00962020  FUN_00962020  size=917  [callgraph]
undefined4 __thiscall FUN_00962020(int param_1,int param_2,int param_3)

{
  int *_Dst;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  undefined4 uStack_29c;
  char cStack_27c;
  int local_278 [30];
  char acStack_200 [16];
  int iStack_1f0;
  char acStack_110 [268];
  
  _Dst = (int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 4) = 0;
  _memset(_Dst,0,0x108);
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  FUN_0095a1c0();
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (param_3 == 0) {
    return 0;
  }
  FUN_009c44e0(3,param_1 + 0x120);
  iVar4 = FUN_00de4550("VR_Mission_Data.bxm",0);
  if (iVar4 != 0) {
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    cVar3 = FUN_00e91420(iVar4);
    if (cVar3 != '\0') {
      cStack_27c = (**(code **)(local_278[0] + 0x10))("MissionData",0);
      FUN_0095a1c0();
      cVar3 = FUN_00961fb0(local_278,&DAT_01651220,acStack_200);
      if (cVar3 == '\x01') {
LAB_00962120:
        if (iStack_1f0 != param_2) goto LAB_00962298;
        pcVar5 = acStack_200;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        uVar6 = FUN_00ea1210(acStack_200,(int)pcVar5 - (int)(acStack_200 + 1));
        iStack_2a4 = FUN_008d93a0(uVar6,acStack_200,(int)pcVar5 - (int)(acStack_200 + 1));
        pcVar5 = acStack_200;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        iVar4 = (int)pcVar5 - (int)(acStack_200 + 1);
        if (iVar4 < 4) {
          FUN_00dd5650(&DAT_016511f8,acStack_200);
        }
        _memset(acStack_110,0,0x100);
        if (3 < iVar4) {
          FID_conflict__memcpy(acStack_110,acStack_200 + 3,iVar4 - 3);
        }
        pcVar5 = acStack_110;
        iStack_2ac = 0;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        iVar4 = 0;
        if (0 < (int)pcVar5 - (int)(acStack_110 + 1)) {
          do {
            if ((acStack_110[iVar4] < '0') || ('9' < acStack_110[iVar4])) {
              iStack_2a8 = 0;
              iVar4 = FUN_00ea39a0(&iStack_2a8,acStack_110);
              if (iVar4 == 0) goto LAB_0096225a;
              iStack_2ac = iStack_2a8;
              bVar2 = false;
              goto LAB_009622c9;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)pcVar5 - (int)(acStack_110 + 1));
        }
        iVar4 = FUN_00ea38f0(&iStack_2ac,acStack_110);
        if (iVar4 == 0) {
LAB_0096225a:
          FUN_00dd5650(&DAT_016511cc,acStack_110);
          _memset(acStack_200,0,0xec);
          if (iStack_2a4 != 0) {
            FUN_008d98a0(iStack_2a4);
          }
          goto LAB_00962298;
        }
        bVar2 = true;
LAB_009622c9:
        if (bVar2) {
          if (0x3b < iStack_2ac - 1U) {
            _memset(_Dst,0,0x108);
            *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
            FUN_0095a1c0();
            *(undefined4 *)(param_1 + 0x108) = 0;
            *(undefined4 *)(param_1 + 0x10c) = 0;
            *(undefined4 *)(param_1 + 0x110) = 0;
            *(undefined4 *)(param_1 + 0x114) = 0;
            goto LAB_0096237d;
          }
          iVar4 = (iStack_2ac + 0x11) * 0x10;
          uStack_29c = *(undefined4 *)(iVar4 + 4 + param_1);
          uVar6 = *(undefined4 *)(iVar4 + param_1 + 8);
          uVar1 = *(undefined4 *)(iVar4 + param_1 + 0xc);
          *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar4 + param_1);
          *(undefined4 *)(param_1 + 0x10c) = uStack_29c;
          *(undefined4 *)(param_1 + 0x110) = uVar6;
          *(undefined4 *)(param_1 + 0x114) = uVar1;
          *(undefined4 *)(param_1 + 0x118) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x118) = 0;
        }
        *_Dst = iStack_2ac;
        pcVar5 = acStack_200;
        puVar7 = (undefined4 *)(param_1 + 0x1c);
        for (iVar4 = 0x3b; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          puVar7 = puVar7 + 1;
        }
        *(int *)(param_1 + 0x14) = iStack_2ac;
        *(undefined4 *)(param_1 + 4) = 1;
LAB_0096237d:
        if (iStack_2a4 != 0) {
          FUN_008d98a0(iStack_2a4);
        }
      }
LAB_00962390:
      if (cStack_27c != '\0') {
        (**(code **)(local_278[0] + 0x14))("MissionData",0);
      }
    }
    cXml::cXml_5();
  }
  return *(undefined4 *)(param_1 + 4);
LAB_00962298:
  cVar3 = FUN_00961fb0(local_278,&DAT_01651220,acStack_200);
  if (cVar3 != '\x01') goto LAB_00962390;
  goto LAB_00962120;
}

// 00962400  FUN_00962400  size=86  [callgraph]
void __thiscall FUN_00962400(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = FUN_00a4d610();
  uVar2 = FUN_00a4c830(uVar1);
  FUN_00962020(param_3,uVar2);
  if (*(int *)(param_1 + 4) == 1) {
    *(undefined4 *)(param_1 + 0x11c) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}

// 00962460  FUN_00962460  size=414  [callgraph]
int FUN_00962460(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_110 [60];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  iVar2 = DAT_01b3756c;
  if (DAT_01b37560 == 0) {
    return 0;
  }
  *(undefined4 *)(DAT_01b3756c + 8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
  FUN_00962020(param_1,&DAT_018b92f0);
  if (*(int *)(iVar2 + 4) == 1) {
    uVar1 = FUN_00a4d610();
    *(undefined4 *)(iVar2 + 0x11c) = uVar1;
    *(uint *)(iVar2 + 8) = param_1;
  }
  DAT_01b37570 = *(int *)(iVar2 + 4);
  _memset(local_110,0,0x108);
  local_c = 0xffffffff;
  FUN_0095a1c0();
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (((((param_1 & 0xff0) == 0xef0) || (param_1 == 0xc08)) || (param_1 == 0xc09)) ||
     ((param_1 == 0xd20 || (param_1 == 0xd21)))) {
    if (DAT_01b37570 == 1) {
      if (*(int *)(DAT_01b3756c + 4) == 0) {
        FUN_0095a280();
        DAT_01b37570 = 0;
      }
      else {
        puVar3 = (undefined4 *)(DAT_01b3756c + 0x18);
        puVar4 = local_110;
        for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    FUN_0095d1f0(local_110);
    DAT_01b37578 = 1;
  }
  else {
    if (DAT_01b37570 != 1) {
      DAT_01b37574 = 0;
      return DAT_01b37570;
    }
    if (*(int *)(DAT_01b3756c + 4) == 0) {
      DAT_01b37570 = 0;
      DAT_01b37574 = 0;
      return 0;
    }
    puVar3 = (undefined4 *)(DAT_01b3756c + 0x18);
    puVar4 = local_110;
    for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_01b37570 = FUN_0095f7a0(local_110);
    if (DAT_01b37570 != 1) {
      DAT_01b37574 = 0;
      return DAT_01b37570;
    }
  }
  DAT_01bea060 = DAT_01bea060 | 0x40;
  DAT_01b37574 = 0;
  return DAT_01b37570;
}

// 00962600  FUN_00962600  size=377  [callgraph]
int FUN_00962600(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_108 [240];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  if (DAT_01b37560 == 0) {
    return 0;
  }
  uVar1 = param_2 & 0xf00;
  if (((uVar1 != 0xd00) && (uVar1 != 0xc00)) && (uVar1 != 0xe00)) {
    return 0;
  }
  DAT_01b37570 = FUN_00962400(param_1,param_2);
  _memset(local_108,0,0x108);
  local_4 = 0xffffffff;
  FUN_0095a1c0();
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  iVar2 = FUN_0095c360(param_2);
  if (iVar2 == 0) {
    if (DAT_01b37570 != 1) goto LAB_00962748;
    uVar3 = FUN_0095b330(local_108);
    if ((int)uVar3 != 1) {
      DAT_01b37570 = 0;
      goto LAB_00962748;
    }
    DAT_01b37570 = FUN_0095f7a0((int)((ulonglong)uVar3 >> 0x20));
    if (DAT_01b37570 != 1) goto LAB_00962748;
  }
  else {
    if ((DAT_01b37570 == 1) && (iVar2 = FUN_0095b330(local_108), iVar2 == 0)) {
      FUN_0095a280();
      DAT_01b37570 = 0;
    }
    FUN_0095d1f0(local_108);
    DAT_01b37578 = 1;
  }
  DAT_01bea060 = DAT_01bea060 | 0x40;
LAB_00962748:
  if ((DAT_01bea060 & 0x40) != 0) {
    FUN_00a00a60(0xd0296,0);
  }
  DAT_01b37574 = 0;
  return DAT_01b37570;
}

