// src/phase/app/p128.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47D00..00D70100, 7 functions

#include "mgrr.h"
#include "P128.h"

// 00D47D00  P128::vf18  size=1  [class]
void P128::vf18(void)

{
  return;
}

// 00D47D10  P128::vf1C  size=82  [class]
void __thiscall P128::vf1C(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = "P128_EVENT";
  do {
    bVar1 = *param_3;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d47d40:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d47d45;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d47d40;
    param_3 = param_3 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d47d45:
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_00910da0();
    (**(code **)(*piVar3 + 0x2c))(param_1 + 0x130);
  }
  return;
}

// 00D47D70  P128::vf08  size=114  [class]
void __fastcall P128::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00e03ea0("P128_GATE");
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  uVar1 = FUN_00e03ea0("P128_STREET");
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x129) = 0;
  uVar1 = FUN_00e03ea0("P128_STREET2");
  *(undefined4 *)(param_1 + 300) = uVar1;
  iVar2 = FUN_0094bc80(0x15e901d6);
  if (iVar2 != 0) {
    FUN_00c81e40(0x4c);
    return;
  }
  FUN_00c81e90(0x4c);
  return;
}

// 00D47DF0  P128::vf10  size=36  [class]
void __fastcall P128::vf10(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x124) = 0;
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x130);
  return;
}

// 00D52060  P128::vf14  size=421  [class]
void __thiscall P128::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_104 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x11c),1);
  if (iVar2 != 0) {
    iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x120),1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined2 *)(param_1 + 0x128) = 0;
      *(undefined1 *)(param_1 + 0x12a) = 0;
    }
  }
  iVar2 = FUN_00c81dd0(0x18);
  if (iVar2 != 0) {
    iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 300),0);
    if (iVar2 == 0) {
      FUN_00c81e90(0x18);
    }
  }
  pcVar5 = "P128_EVENT";
  do {
    bVar1 = *param_3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d52110:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d52115;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d52110;
    param_3 = param_3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d52115:
  if (iVar2 == 0) {
    FUN_0118f7b0();
    local_50 = 0;
    local_2c = 5;
    local_e0[0] = 0x1a;
    piVar3 = (int *)FUN_00910da0();
    local_f0 = 0x40c00000;
    local_ec = 0x40400000;
    local_e8 = 0x40400000;
    local_120 = 0;
    local_11c = 0x3e32b8c2;
    local_118 = 0;
    local_100 = 0x429b1eb8;
    local_fc = 0x41500000;
    local_f8 = 0xc38de148;
    uVar4 = (**(code **)(*piVar3 + 4))(local_104,local_e0,&local_100,&local_120,&local_f0,1);
    FUN_00910ab0(uVar4);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),4);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),0x40000000);
    FUN_00911ca0("programmabled");
    FUN_00dd5650("force change flags. need for BUGFIX5898");
  }
  return;
}

// 00D52210  P128::vf0C  size=396  [class]
void __fastcall P128::vf0C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x11c),1);
  if ((iVar2 != 0) && (iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x120),1), iVar2 == 0)) {
    if (*(char *)(param_1 + 0x128) == '\0') {
      if (*(int *)(param_1 + 0x124) == 0) {
        uVar3 = FUN_00c19c00(0,0,0);
        *(undefined4 *)(param_1 + 0x124) = uVar3;
      }
      else {
        iVar2 = FUN_00a7c7e0();
        if (iVar2 != 0) {
          uVar3 = FUN_00a7c8a0();
          iVar2 = FUN_004ddcd0(uVar3);
          if ((iVar2 != 0) && (iVar2 = FUN_00a8eea0(), iVar2 < 1)) {
            iVar2 = FUN_00a8cab0();
            if ((iVar2 == 0xb0005) || (iVar2 = FUN_00a8cab0(), iVar2 == 0xb0006)) {
              *(undefined2 *)(param_1 + 0x128) = 0x101;
            }
            else {
              *(undefined1 *)(param_1 + 0x128) = 1;
            }
          }
        }
      }
    }
    if ((((*(char *)(param_1 + 0x129) != '\0') && (*(char *)(param_1 + 0x128) != '\0')) &&
        (*(char *)(param_1 + 0x12a) == '\0')) &&
       ((iVar2 = FUN_00416910(6), iVar2 == 0 && (iVar2 = FUN_00416d50(2), iVar2 == 0)))) {
      piVar4 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar4 + 0x28))(0xffffffff);
      if (iVar2 != 0) {
        uVar3 = 0;
        FUN_00a7c8a0(0);
        iVar2 = FUN_00a94ce0(uVar3);
        if (iVar2 != 0) {
          FUN_0093b4a0("p128_ASSASSIN",0,0);
          *(undefined1 *)(param_1 + 0x12a) = 1;
        }
      }
    }
  }
  iVar2 = FUN_00c81e00(0x18);
  if ((iVar2 != 0) && (iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 300),1), iVar2 != 0)) {
    uVar5 = 8;
    while (cVar1 = FUN_00c1ace0(uVar5), cVar1 == '\0') {
      uVar5 = uVar5 + 1;
      if (0xd < uVar5) {
        return;
      }
    }
    FUN_00c81e40(0x18);
  }
  return;
}

// 00D70100  P128::vf00  size=54  [class]
undefined4 * __thiscall P128::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

