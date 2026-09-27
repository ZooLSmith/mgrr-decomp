// src/misc/cScrObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F8720..00AB7DC0, 6 functions

#include "mgrr.h"
#include "cScrObj.h"

// 009F8720  cScrObj::vf50  size=171  [class]
void __fastcall cScrObj::vf50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x8c0) != 0) {
    fVar5 = (float10)FUN_00a92ff0();
    fVar1 = *(float *)(param_1 + 0x8b0);
    fVar2 = *(float *)(param_1 + 0x8b4);
    fVar3 = *(float *)(param_1 + 0x8b8);
    fVar4 = *(float *)(param_1 + 0x8bc);
    fVar6 = (float10)FUN_00a93060();
    *(float *)(param_1 + 0x90) =
         (float)((float10)*(float *)(param_1 + 0x90) +
                (float10)(float)((float10)fVar1 * fVar5) * fVar6);
    *(float *)(param_1 + 0x94) =
         (float)(fVar6 * (float10)(float)((float10)fVar2 * fVar5) +
                (float10)*(float *)(param_1 + 0x94));
    *(float *)(param_1 + 0x98) =
         (float)((float10)(float)((float10)fVar3 * fVar5) * fVar6 +
                (float10)*(float *)(param_1 + 0x98));
    *(float *)(param_1 + 0x9c) =
         (float)((float10)(float)(fVar5 * (float10)fVar4) * fVar6 +
                (float10)*(float *)(param_1 + 0x9c));
    switchD_0080dbae::default();
  }
  return;
}

// 009FD120  cScrObj::vf60  size=48  [class]
void __fastcall cScrObj::vf60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c1e240();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 8;
    Bh0064::thunk_vf60();
    return;
  }
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) & 0xfffffff7;
  Bh0064::thunk_vf60();
  return;
}

// 00A00510  cScrObj::vf08  size=220  [class]
bool __fastcall cScrObj::vf08(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  puVar2 = (undefined4 *)FUN_0092f750(param_1[300]);
  pcVar1 = *(code **)(*param_1 + 0x3c);
  param_1[0x133] = (int)puVar2;
  (*pcVar1)(*puVar2);
  iVar3 = FUN_00de4500("dummy.wtb");
  iVar4 = FUN_00de4500("dummy.wta");
  iVar5 = FUN_00de4500("dummy.wtp");
  if ((iVar4 == 0) || (iVar5 == 0)) {
    iVar5 = 0;
    iVar4 = iVar3;
  }
  iVar3 = cModelDataManager::EntryModelData(param_1[0x127],0);
  if (iVar3 == 0) {
    bVar6 = false;
  }
  else {
    param_1[0x130] = param_1[0x130] & 0xfffffffd;
    iVar4 = FUN_009fd350(iVar3,iVar4,iVar5,0);
    bVar6 = iVar4 != 0;
  }
  param_1[99] = 0;
  FUN_00a13340(1);
  if ((DAT_01be8e40 & 0xf00) != 0xe00) {
    FUN_00a0ba60(0);
    return bVar6;
  }
  FUN_00a0ba60(1);
  return bVar6;
}

// 00AA6900  cScrObj::cScrObj  size=29  [class]
undefined4 * __fastcall cScrObj::cScrObj(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00c1e220();
  return param_1;
}

// 00AA6920  cScrObj::vf04  size=6  [class]
undefined * cScrObj::vf04(void)

{
  return &DAT_01b7b37c;
}

// 00AB7DC0  cScrObj::vf00  size=30  [class]
undefined4 __thiscall cScrObj::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_52();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

