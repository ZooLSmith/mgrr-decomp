// src/effect/et0002/Et0002.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C98D0..00AB7F20, 11 functions

#include "mgrr.h"
#include "Et0002.h"

// 005C98D0  Et0002::vf40  size=64  [class]
undefined4 __fastcall Et0002::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a8caf0(0,0,0,0);
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0xffffffff;
  return 1;
}

// 005C9910  Et0002::thunk_vf44  size=5  [class]
void __fastcall Et0002::thunk_vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x774) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x774))(1);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x75c) != 0) {
    piVar2 = (int *)FUN_008d7570();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x75c) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    piVar2 = (int *)FUN_00d72970();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (*(int *)(param_1 + 0x584) != 0) {
    (**(code **)(*DAT_01be9bf4 + 0x10))(*(int *)(param_1 + 0x584),*(undefined4 *)(param_1 + 0x588));
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7d8);
  if (iVar1 != 0) {
    FUN_00c730c0();
    FUN_00905ce0();
    FUN_00905ce0();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_00dd7270();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    FUN_00dd7270();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x63c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x63c))(1);
    *(undefined4 *)(param_1 + 0x63c) = 0;
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x770);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x770) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x76c);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}

// 005C9920  Et0002::vf48  size=1  [class]
void Et0002::vf48(void)

{
  return;
}

// 005C9930  Et0002::vf50  size=16  [class]
void Et0002::vf50(void)

{
  FUN_00a93170();
  Behavior::vf50();
  return;
}

// 005C99B0  FUN_005c99b0  size=35  [between]
void __fastcall FUN_005c99b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 100))();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x186] = 5;
  }
  return;
}

// 005C99F0  FUN_005c99f0  size=68  [between]
uint FUN_005c99f0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01be9db8;
  (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
  iVar2 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar2 != 0) & (uint)piVar1;
}

// 005C9C30  FUN_005c9c30  size=357  [between]
void __fastcall FUN_005c9c30(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9e290(&DAT_016434d4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    param_1[0x21e] = 1;
    fVar1 = (float)param_1[0x21d];
    param_1[0x21d] = (int)(fVar1 - 1.0);
    if (fVar1 - 1.0 < 0.0) {
      param_1[0x21e] = 0;
      param_1[0x187] = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x005c9d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 3:
    FUN_00a8caf0(5,0,0,0);
    FUN_009fdde0();
    return;
  default:
    return;
  }
  iVar2 = FUN_005c99f0();
  if (((iVar2 == 0) || (*(float *)(iVar2 + 0x341c) <= 0.0)) || (*(int *)(iVar2 + 0x40c8) == 8)) {
    FUN_00a96030(0,0x3f800000);
  }
  else {
    FUN_00a96030(0,0x3dcccccd);
    uVar3 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar3);
  }
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar2 + 0xcf8) & *(uint *)(iVar2 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x21d] = 0x40000000;
      return;
    }
  }
  else {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x21d] = 0;
  }
  return;
}

// 005C9DB0  Et0002::vf4C  size=556  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Et0002::vf4C(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  
  Behavior::vf4C();
  switch(param_1[0x186]) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x005c9dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 1:
    FUN_005c99b0();
    return;
  case 2:
    break;
  case 3:
    FUN_005c9c30();
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x005c9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 5:
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x005c9dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_005c99f0();
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36970(0);
    }
    FUN_00a9e290(&DAT_016434cc,0,0,0x3f800000,0x8000000,(float)fVar3,0x3f800000);
    (**(code **)(*param_1 + 100))();
    param_1[0x14] = *(int *)(iVar2 + 0x40);
    param_1[0x15] = *(int *)(iVar2 + 0x44);
    param_1[0x16] = *(int *)(iVar2 + 0x48);
    param_1[0x17] = *(int *)(iVar2 + 0x4c);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
    break;
  case 2:
    fVar5 = (float)param_1[0x21d];
    param_1[0x21e] = 1;
    param_1[0x21d] = (int)(fVar5 - 1.0);
    if (fVar5 - 1.0 < 0.0) {
      param_1[0x21e] = 0;
      param_1[0x187] = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x005c9c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 3:
    FUN_00a8caf0(5,0,0,0);
  default:
    return;
  }
  iVar2 = FUN_005c99f0();
  fVar5 = _DAT_01be942c;
  fVar3 = (float10)FUN_00a92ff0();
  FUN_00a96030(0,(float)((float10)0.05 / (fVar3 / (float10)fVar5)));
  if (((iVar2 == 0) || ((*(uint *)(iVar2 + 0xcf8) & *(uint *)(iVar2 + 0xe50)) != 0)) ||
     (*(int *)(iVar2 + 0x40c8) != 8)) {
    (**(code **)(*param_1 + 100))();
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36970(0);
    }
    fVar5 = (float)(fVar3 + (float10)0.15);
    if ((float10)0 < fVar3 + (float10)0.15) {
      uVar4 = 0;
      FUN_00a92f90(0);
      fVar3 = (float10)FUN_0043f390(uVar4);
      fVar5 = (float)((float10)fVar5 / fVar3);
    }
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 == 0) && (fVar5 <= 0.7)) {
      return;
    }
  }
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x21d] = 0x41f00000;
  return;
}

// 00AA6960  Et0002::Et0002  size=18  [class]
undefined4 * __fastcall Et0002::Et0002(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6980  Et0002::vf04  size=6  [class]
undefined * Et0002::vf04(void)

{
  return &DAT_01b35220;
}

// 00AB7F20  Et0002::vf00  size=105  [class]
undefined4 * __thiscall Et0002::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

