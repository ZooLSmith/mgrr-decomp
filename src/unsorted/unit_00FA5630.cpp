// src/unsorted/unit_00FA5630.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA5630..00FA5BE0, 9 functions

#include "types.h"

// 00FA5630  FUN_00fa5630  size=251  [run]
void __fastcall FUN_00fa5630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0x9c));
  FUN_00f9ea50(&DAT_01f2094c,param_1 + 0xa0,4);
  FUN_00f9eec0(&DAT_01f20934,param_1 + 0x10);
  uVar2 = FUN_00fa0740(*(undefined4 *)(param_1 + 0x94));
  FUN_00fa01f0(DAT_01f2095c,&DAT_01f20960,uVar2);
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  FUN_00f9d970(5,6,1);
  if (DAT_01f20590 != &DAT_01f20900) {
    DAT_01f20590 = &DAT_01f20900;
    DAT_01f2058c = 1;
  }
  if (DAT_01f2059c != &PTR_vftable_018da4c0) {
    DAT_01f2059c = &PTR_vftable_018da4c0;
    DAT_01f20598 = 1;
  }
  iVar1 = param_1 + 0x50;
  if (DAT_01f205a0 != iVar1) {
    iVar3 = FUN_00f98600(0,iVar1);
    if (iVar3 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar1;
    }
  }
  FUN_00f9dfb0(*(undefined4 *)(param_1 + 0x98));
  return;
}

// 00FA5730  FUN_00fa5730  size=467  [run]
void FUN_00fa5730(undefined4 *param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_84 [18];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_84;
  ppuVar1 = &PTR_vftable_018da6d0;
  uVar3 = 0x30;
  do {
    if (*(undefined **)((int)(param_1 + -0x6369b4) + (int)ppuVar1) != *ppuVar1) {
      iVar2 = FUN_00fa30d0(param_1,&PTR_vftable_018da6d0,DAT_01f20564);
      uVar5 = DAT_01f20580;
      uVar7 = DAT_01f20584;
      if (iVar2 != 0) {
        if ((DAT_018da6d4 == param_1[1]) && (DAT_018da6d8 != 0)) {
          param_1[2] = DAT_018da6d8;
        }
        if ((DAT_018da6dc == param_1[3]) && (DAT_018da6e0 != 0)) {
          param_1[4] = DAT_018da6e0;
        }
        if ((DAT_018da6e4 == param_1[5]) && (DAT_018da6e8 != 0)) {
          param_1[6] = DAT_018da6e8;
        }
        if ((DAT_018da6ec == param_1[7]) && (DAT_018da6f0 != 0)) {
          param_1[8] = DAT_018da6f0;
        }
        ppuVar1 = &PTR_vftable_018da6d0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppuVar1 = (undefined *)*param_1;
          param_1 = param_1 + 1;
          ppuVar1 = ppuVar1 + 1;
        }
        uVar5 = DAT_01f20580;
        uVar7 = DAT_01f20584;
        if (param_2 != 0) {
          if (DAT_018da6d4 == 0) {
            puVar4 = &DAT_01f20668;
            puVar6 = local_84;
            for (iVar2 = 0x1a; uVar5 = local_38, uVar7 = local_3c, iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            iVar2 = FUN_00fa0740(0);
            if (iVar2 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined4 *)(iVar2 + 8);
            }
            iVar2 = FUN_00fa0740(0);
            if (iVar2 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(iVar2 + 0xc);
            }
          }
          DAT_01f20578 = 0;
          DAT_01f20568 = 0;
          DAT_01f2056c = 0;
          DAT_01f2057c = 0x3f800000;
          DAT_01f20570 = uVar7;
          DAT_01f20574 = uVar5;
          if (DAT_01f206d4 != (int *)0x0) {
            local_c = 0;
            local_1c = 0;
            local_18 = 0;
            local_8 = 0x3f800000;
            local_14 = uVar7;
            local_10 = uVar5;
            (**(code **)(*DAT_01f206d4 + 0xbc))(DAT_01f206d4,&local_1c);
          }
        }
      }
      DAT_01f20584 = uVar7;
      DAT_01f20580 = uVar5;
      __security_check_cookie(local_4 ^ (uint)local_84);
      return;
    }
    uVar3 = uVar3 - 4;
    ppuVar1 = ppuVar1 + 1;
  } while (3 < uVar3);
  __security_check_cookie(local_4 ^ (uint)local_84);
  return;
}

// 00FA5910  FUN_00fa5910  size=235  [run]
/* WARNING: Removing unreachable block (ram,0x00fa5946) */

void FUN_00fa5910(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_8;
  
  puVar8 = &DAT_01f144d0;
  local_8 = 0x800;
  do {
    LOCK();
    DAT_01f126c8 = 1;
    UNLOCK();
    iVar7 = 0;
    for (iVar1 = puVar8[2]; iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar2 = puVar8[1];
      iVar3 = *(int *)(iVar2 + 0x2c + iVar7);
      piVar5 = &DAT_01f204e0;
      iVar6 = 0x10;
      do {
        if (iVar3 == *piVar5) {
          *piVar5 = 0;
          piVar5[1] = 0;
        }
        piVar5 = piVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (puVar8[4] == 0) {
        FUN_00fa3610(iVar2 + iVar7);
      }
      iVar7 = iVar7 + 0x30;
    }
    puVar4 = (undefined4 *)puVar8[1];
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar4[-1] == 0) {
        FUN_00dd4940(puVar4 + -1);
      }
      else {
        (**(code **)*puVar4)(3);
      }
    }
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8 = puVar8 + 6;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_00dd7270();
  Hw::cHeapVariable::vf08();
  return;
}

// 00FA5A00  FUN_00fa5a00  size=277  [run]
/* WARNING: Removing unreachable block (ram,0x00fa5a57) */

void FUN_00fa5a00(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_c;
  
  puVar8 = &DAT_01f144d0;
  local_c = 0x800;
  do {
    if ((param_1 <= *puVar8) && (*puVar8 < param_1 + param_2)) {
      LOCK();
      DAT_01f126c8 = 1;
      UNLOCK();
      iVar7 = 0;
      for (uVar1 = puVar8[2]; uVar1 != 0; uVar1 = uVar1 - 1) {
        uVar2 = puVar8[1];
        iVar3 = *(int *)(uVar2 + 0x2c + iVar7);
        piVar5 = &DAT_01f204e0;
        iVar6 = 0x10;
        do {
          if (iVar3 == *piVar5) {
            *piVar5 = 0;
            piVar5[1] = 0;
          }
          piVar5 = piVar5 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (puVar8[4] == 0) {
          FUN_00fa3610(uVar2 + iVar7);
        }
        iVar7 = iVar7 + 0x30;
      }
      puVar4 = (undefined4 *)puVar8[1];
      if (puVar4 != (undefined4 *)0x0) {
        if (puVar4[-1] == 0) {
          FUN_00dd4940(puVar4 + -1);
        }
        else {
          (**(code **)*puVar4)(3);
        }
      }
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
    }
    if ((param_1 <= puVar8[5]) && (puVar8[5] < param_1 + param_2)) {
      FUN_00fa3830(puVar8);
    }
    puVar8 = puVar8 + 6;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}

// 00FA5B20  FUN_00fa5b20  size=45  [run]
bool FUN_00fa5b20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa04e0(param_1,param_2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00fa3b30();
  return iVar1 != 0;
}

// 00FA5B50  FUN_00fa5b50  size=45  [run]
bool FUN_00fa5b50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa04e0(param_1,param_2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00fa3d60();
  return iVar1 != 0;
}

// 00FA5B80  FUN_00fa5b80  size=45  [run]
bool FUN_00fa5b80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa04e0(param_1,param_2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00fa3f20();
  return iVar1 != 0;
}

// 00FA5BB0  FUN_00fa5bb0  size=45  [run]
bool FUN_00fa5bb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa04e0(param_1,param_2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00fa4210();
  return iVar1 != 0;
}

// 00FA5BE0  FUN_00fa5be0  size=64  [run]
void __fastcall FUN_00fa5be0(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  return;
}

