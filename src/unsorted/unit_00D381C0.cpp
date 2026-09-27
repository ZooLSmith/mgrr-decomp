// src/unsorted/unit_00D381C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D381C0..00D38A30, 10 functions

#include "types.h"

// 00D381C0  FUN_00d381c0  size=13  [run]
void __fastcall FUN_00d381c0(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d34020();
    return;
  }
  return;
}

// 00D381D0  FUN_00d381d0  size=155  [run]
undefined4 __thiscall FUN_00d381d0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if ((param_2 < *(uint *)(param_1 + 0x80)) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)), piVar1 != (int *)0x0))
  {
    uVar2 = (**(code **)(*piVar1 + 8))();
    switch(uVar2) {
    case 0:
      uVar2 = FUN_00cab930(param_2,param_3);
      return uVar2;
    case 1:
      uVar2 = FUN_00cc7740(param_2,param_3);
      return uVar2;
    case 2:
      uVar2 = FUN_00cc7930(param_2,param_3);
      return uVar2;
    case 3:
      uVar2 = FUN_00d292c0(param_2,param_3);
      return uVar2;
    case 8:
      uVar2 = FUN_00cc7b30(param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

// 00D38290  FUN_00d38290  size=308  [run]
undefined4 __thiscall FUN_00d38290(int param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  local_24 = 0;
  param_3[3] = 0.0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      local_24 = 1;
      do {
        iVar1 = FUN_00d381d0(uVar2,&local_20);
        if (iVar1 != 0) {
          if (local_20 < *param_3) {
            *param_3 = local_20;
          }
          if (local_1c < param_3[1]) {
            param_3[1] = local_1c;
          }
          if (param_3[2] < local_18) {
            param_3[2] = local_18;
          }
          if (param_3[3] < local_14) {
            param_3[3] = local_14;
          }
        }
        iVar1 = FUN_00d38290(uVar2,&local_20);
        if (iVar1 != 0) {
          if (local_20 < *param_3) {
            *param_3 = local_20;
          }
          if (local_1c < param_3[1]) {
            param_3[1] = local_1c;
          }
          if (param_3[2] < local_18) {
            param_3[2] = local_18;
          }
          if (param_3[3] < local_14) {
            param_3[3] = local_14;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x80));
    }
    return local_24;
  }
  return local_24;
}

// 00D383D0  FUN_00d383d0  size=471  [run]
void __fastcall FUN_00d383d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int local_8 [2];
  
  switch(*(undefined4 *)(param_1 + 0x664)) {
  case 0:
    iVar4 = *(int *)(param_1 + 0x668) * 0x74;
    iVar2 = iVar4 + 0xc + param_1;
    if (((*(int *)(iVar4 + 0x14 + param_1) != *(int *)(iVar4 + 0x1c + param_1)) ||
        (*(int *)(iVar2 + 0xc) != *(int *)(iVar2 + 0x14))) || (*(int *)(iVar2 + 4) != 0)) {
      FUN_00d1e120(iVar2);
    }
    piVar1 = (int *)(param_1 + 0x668);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x664) = 1;
      *(undefined4 *)(param_1 + 0x668) = 0;
      return;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x678) != 0) {
      FUN_00cac3f0();
    }
    *(undefined4 *)(param_1 + 0x664) = 2;
    return;
  case 2:
    FUN_00cac390();
    *(undefined4 *)(param_1 + 0x664) = 3;
    return;
  case 3:
    if ((*(int *)(param_1 + 0x684) == 0) ||
       (iVar2 = FUN_00e9cf60(*(int *)(param_1 + 0x684)), iVar2 != 0)) {
      FUN_00cac450();
      *(undefined4 *)(param_1 + 0x664) = 4;
      return;
    }
    break;
  case 4:
    iVar2 = *(int *)(param_1 + 0x668) * 0x74;
    piVar1 = (int *)(iVar2 + 0xc + param_1);
    if (((*(int *)(iVar2 + 0x14 + param_1) == *(int *)(iVar2 + 0x1c + param_1)) &&
        (piVar1[3] == piVar1[5])) && (piVar1[1] == 0)) {
      *piVar1 = -1;
    }
    else {
      iVar2 = *piVar1;
      if (iVar2 != -1) {
        if (iVar2 == 0) {
          FUN_00cc8990(piVar1);
          *piVar1 = *piVar1 + 1;
          return;
        }
        if (iVar2 != 1) {
          return;
        }
        local_8[0] = piVar1[9];
        local_8[1] = piVar1[7];
        iVar2 = 0;
        do {
          iVar4 = local_8[iVar2];
          iVar3 = FUN_00e9cf60(iVar4);
          if (iVar3 == 0) {
            iVar4 = FUN_00e9d060(iVar4);
            if (iVar4 == 0) goto LAB_00d38580;
            puVar5 = &DAT_016b91f0;
LAB_00d38570:
            FUN_00dd5650(puVar5);
            FUN_00d1e120(piVar1);
LAB_00d38580:
            if (iVar2 < 2) {
              return;
            }
            FUN_00d29630(piVar1,0);
            return;
          }
          iVar4 = FUN_00e9cfe0(iVar4);
          if (iVar4 == 0) {
            puVar5 = &DAT_016bbf08;
            goto LAB_00d38570;
          }
          iVar2 = iVar2 + 1;
          if (1 < iVar2) {
            FUN_00d29630(piVar1,0);
            return;
          }
        } while( true );
      }
    }
    *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + 1;
    if (0xd < *(int *)(param_1 + 0x668)) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x664) = 5;
      return;
    }
  }
  return;
}

// 00D385C0  FUN_00d385c0  size=130  [run]
void FUN_00d385c0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00de4500("grid_tex_01.wtb");
  FUN_00fa25d0(uVar1);
  uVar1 = FUN_00de4500("img_b.wtb");
  FUN_00fa25d0(uVar1);
  uVar1 = FUN_00de4500("img_c.wtb");
  FUN_00fa25d0(uVar1);
  FUN_00d29b00();
  FUN_00cf66d0(0);
  return;
}

// 00D38650  FUN_00d38650  size=238  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00d38650(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00caca30(param_2);
  if (((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) &&
     ((iVar2 == 4 || ((iVar2 == 1 || (iVar2 == 9)))))) {
    FUN_00cdebb0();
    FUN_00ce2ba0();
    FUN_00d11bb0();
    FUN_00d29b00();
    FUN_00cf66d0(iVar2);
    *(int *)(param_1 + 0xaec) = iVar2;
    return;
  }
  iVar1 = *(int *)(param_1 + 0xaec);
  if (iVar1 == iVar2) {
    if (iVar1 != 0) goto LAB_00d38733;
  }
  else if (iVar1 != 0) {
    FUN_00cdebb0();
    FUN_00ce2ba0();
    FUN_00d11bb0();
    FUN_00d29b00();
    FUN_00cf66d0(iVar2);
    *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
    *(int *)(param_1 + 0xaec) = iVar2;
    return;
  }
  _DAT_01dc1440 = iVar2;
LAB_00d38733:
  *(int *)(param_1 + 0xaec) = iVar2;
  return;
}

// 00D38740  FUN_00d38740  size=491  [run]
int __thiscall FUN_00d38740(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [12];
  int local_40;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    piVar3 = *(int **)(param_1 + 0x38);
    piVar1 = piVar3 + *(int *)(param_1 + 0x40) * 6;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      if (*piVar3 == param_2) {
        iVar2 = piVar3[5];
        local_80 = 0;
        local_7c = 0;
        local_78 = 0;
        local_74 = 0;
        if (iVar2 == -1) {
          FUN_00dd5650(&DAT_016bbfd4,param_2);
        }
        else {
          if (iVar2 == -2) {
            iVar4 = FUN_00cab860(&local_80);
          }
          else {
            iVar4 = FUN_00d381d0(iVar2,&local_80);
          }
          if (iVar4 == 0) {
            FUN_00dd5650(&DAT_016bbf9c);
          }
        }
        cTouchArea::cTouchArea_3();
        if ((iVar4 == 1) && (iVar4 = FUN_00982e20(param_2,local_4c), iVar4 == 1)) {
          local_64 = local_7c;
          local_68 = local_80;
          local_5c = local_74;
          local_6c = local_40 << 0x10 | 1;
          local_60 = local_78;
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          iVar4 = FUN_00cb4ea0(&local_6c,0,0,piVar3[1],piVar3[2],&local_6c);
          if (iVar4 == 1) {
            cTouchArea::cTouchArea(param_2,local_68,local_64,local_60,local_5c,local_40,1,1);
            break;
          }
          puVar5 = &DAT_016bbf70;
        }
        else {
          puVar5 = &DAT_016bbf48;
        }
        FUN_00dd5650(puVar5,param_2);
        break;
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return iVar4;
}

// 00D38930  FUN_00d38930  size=133  [run]
undefined4
FUN_00d38930(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((param_5 != 0) && (param_6 - 1U < 99)) &&
     (uVar3 = (uint)*(ushort *)(param_5 + 0x86 + param_6 * 2), uVar3 != 0xffffffff)) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    iVar1 = FUN_00d381d0(uVar3,&local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_00cfcd00(param_1 << 0x10 | (uint)param_2,param_3,param_4,&local_20,uVar3,param_7);
      return uVar2;
    }
  }
  return 0;
}

// 00D389F0  FUN_00d389f0  size=59  [run]
undefined4
FUN_00d389f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (DAT_01dc0730 == 0) {
    return 0;
  }
  uVar1 = FUN_00d38930(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

// 00D38A30  FUN_00d38a30  size=50  [run]
undefined4 FUN_00d38a30(int param_1,ushort param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((DAT_01dc0730 != 0) && (*(int *)(DAT_01dc073c + 0x70) != 0)) {
    uVar1 = FUN_00d38740(param_1 << 0x10 | (uint)param_2,param_3);
    return uVar1;
  }
  return 0;
}

