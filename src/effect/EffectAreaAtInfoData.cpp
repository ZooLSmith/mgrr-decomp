// src/effect/EffectAreaAtInfoData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D80EF0..00D810F0, 4 functions

#include "mgrr.h"
#include "EffectAreaAtInfoData.h"

// 00D80EF0  EffectAreaAtInfoData::EffectAreaAtInfoData  size=61  [class]
void __fastcall EffectAreaAtInfoData::EffectAreaAtInfoData(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    FUN_00dd4920(param_1[1]);
    param_1[1] = 0;
  }
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[2] = 0x7f;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}

// 00D80F30  EffectAreaAtInfoData::readXml  size=316  [class]
undefined4 __thiscall EffectAreaAtInfoData::readXml(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"EffectAreaAtInfoData");
  if (iVar1 == -1) {
    return 0;
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,"PrimAtType");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 8);
  }
  iVar2 = FUN_00d90450(*(undefined4 *)(param_1 + 8));
  if (iVar2 != 0) {
    iVar2 = (**(code **)(iVar2 + 4))(DAT_01dc5384);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016c19a8);
      return 0;
    }
    iVar2 = (**(code **)(*param_2 + 0x18))(iVar1,"PrimAtData");
    if (iVar2 != -1) {
      FUN_00d95780(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2,
                   &stack0xfffffff4);
    }
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,"WorkNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar2,param_1 + 0xc);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,"AreaNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar2,param_1 + 0xe);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,"CommonFlag");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 0x10);
  }
  uVar3 = FUN_00d80840(param_2,iVar1);
  return uVar3;
}

// 00D81070  FUN_00d81070  size=22  [between]
int __fastcall FUN_00d81070(int param_1)

{
  cEspControler::cEspControler();
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return param_1;
}

// 00D810F0  EffectAreaAtInfoData::vf00  size=211  [class]
int * __thiscall EffectAreaAtInfoData::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_2 & 2) == 0) {
    *param_1 = (int)vftable;
    if (param_1[1] != 0) {
      FUN_00dd4920(param_1[1]);
      param_1[1] = 0;
    }
    param_1[1] = 0;
    param_1[2] = 0x7f;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    if ((param_2 & 1) != 0) {
      FUN_00dd4920(param_1);
    }
    return param_1;
  }
  piVar1 = param_1 + -1;
  iVar4 = *piVar1 + -1;
  if (-1 < iVar4) {
    piVar2 = param_1 + *piVar1 * 7 + 1;
    do {
      piVar3 = piVar2 + -7;
      piVar2[-8] = (int)vftable;
      if (piVar2[-7] != 0) {
        FUN_00dd4920(piVar2[-7]);
        *piVar3 = 0;
      }
      iVar4 = iVar4 + -1;
      *piVar3 = 0;
      piVar2[-6] = 0x7f;
      piVar2[-5] = 0;
      piVar2[-4] = 0;
      piVar2[-3] = 0;
      *(undefined2 *)(piVar2 + -2) = 0;
      piVar2 = piVar3;
    } while (-1 < iVar4);
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4940(piVar1);
  }
  return piVar1;
}

