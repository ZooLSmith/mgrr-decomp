// src/item/it0510/It0510.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E8340..00AC1270, 6 functions

#include "mgrr.h"
#include "It0510.h"

// 005E8340  It0510::vf310  size=128  [class]
void __fastcall It0510::vf310(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x920)) {
  default:
    FUN_00a8c9b0(0,5,0,0);
    return;
  case 1:
    FUN_00a8c9b0(0,1,0,0);
    return;
  case 2:
    FUN_00a8c9b0(0,2,0,0);
    return;
  case 3:
    FUN_00a8c9b0(0,4,0,0);
    return;
  case 4:
    FUN_00a8c9b0(0,3,0,0);
    return;
  }
}

// 005E83E0  It0510::vf314  size=353  [class]
void __fastcall It0510::vf314(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  undefined1 local_18 [24];
  
  FUN_00de3530();
  FUN_009fe6b0(local_18,0x40520);
  iVar2 = FUN_00de3580(1);
  iVar3 = FUN_00de3580(0);
  uVar6 = 0;
  if ((iVar2 != 0) && (iVar3 != 0)) {
    FUN_00de3610(iVar2,0);
    FUN_00de3610(iVar3,0);
    uVar6 = FUN_00de44b0(&DAT_0164518c,0);
    FUN_00de4500("TexVariation.bxm");
    iVar2 = FUN_00de44b0(&DAT_01645174,0);
    iVar3 = FUN_00de44b0(&DAT_01645170,0);
    if ((iVar2 != 0) && (iVar3 != 0)) {
      FUN_00fa4d00(iVar2,iVar3);
      goto LAB_005e84a4;
    }
  }
  FUN_00fa25d0(uVar6);
LAB_005e84a4:
  iVar2 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
LAB_005e851d:
    *(undefined4 *)(param_1 + 0x964) = 0;
    return;
  }
  piVar7 = (int *)(*(int *)(param_1 + 800) + 0x60);
  do {
    pbVar5 = *(byte **)(*piVar7 + 0x40);
    if (pbVar5 != (byte *)0x0) {
      pbVar4 = (byte *)0x1645164;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_005e84f0:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005e84f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_005e84f0;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005e84f5:
      if (iVar3 == 0) {
        if (iVar2 != -1) {
          *(int *)(param_1 + 0x964) = *(int *)(param_1 + 800) + iVar2 * 0x70;
          return;
        }
        goto LAB_005e851d;
      }
    }
    iVar2 = iVar2 + 1;
    piVar7 = piVar7 + 0x1c;
    if (*(short *)(param_1 + 0x324) <= iVar2) {
      *(undefined4 *)(param_1 + 0x964) = 0;
      return;
    }
  } while( true );
}

// 005E8550  It0510::vf30C  size=157  [class]
void __fastcall It0510::vf30C(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_160 [348];
  
  switch(*(undefined4 *)(param_1 + 0x920)) {
  case 0:
    FUN_004039a0(5,param_1,0);
    goto LAB_005e85d1;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    FUN_004039a0(2,param_1,0);
    goto LAB_005e85d1;
  case 3:
    FUN_004039a0(4,param_1,0);
    goto LAB_005e85d1;
  case 4:
    uVar1 = 3;
    break;
  default:
    uVar1 = 5;
  }
  FUN_004039a0(uVar1,param_1,0);
LAB_005e85d1:
  puVar2 = local_160;
  uVar1 = FUN_00e00b40(*(undefined4 *)(param_1 + 0x4b0),puVar2);
  FUN_00a8c930(uVar1,puVar2);
  return;
}

// 00AC0E10  It0510::It0510  size=73  [class]
undefined4 * __fastcall It0510::It0510(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = cItemObjectBase::vftable;
  param_1[0x23e] = 0;
  FUN_00904d60();
  FUN_00904d60();
  *param_1 = cItemViscelaBase::vftable;
  Hw::cTexture::cTexture();
  *param_1 = vftable;
  return param_1;
}

// 00AC0E60  It0510::vf04  size=6  [class]
undefined * It0510::vf04(void)

{
  return &DAT_01b35384;
}

// 00AC1270  It0510::destruct  size=43  [class]
undefined4 __thiscall It0510::destruct(undefined4 param_1,byte param_2)

{
  Hw::cTexture::~cTexture();
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

