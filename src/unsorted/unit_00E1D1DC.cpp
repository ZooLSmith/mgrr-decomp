// src/unsorted/unit_00E1D1DC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E1D1DC..00E1EBA0, 29 functions

#include "types.h"

// 00E1D1DC  Catch@00e1d1dc  size=58  [run]
undefined * Catch_00e1d1dc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1d20d;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1D250  FUN_00e1d250  size=56  [run]
void __thiscall FUN_00e1d250(int param_1,int *param_2,int param_3)

{
  FUN_00e1bd70(param_3,param_3 + 0x40,*(undefined4 *)(param_1 + 8));
  FUN_00e1a8a0(*(int *)(param_1 + 8) + -0x40,*(int *)(param_1 + 8));
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x40;
  *param_2 = param_3;
  return;
}

// 00E1D350  FUN_00e1d350  size=273  [run]
/* WARNING: Removing unreachable block (ram,0x00e1d424) */
/* WARNING: Removing unreachable block (ram,0x00e1d42f) */
/* WARNING: Removing unreachable block (ram,0x00e1d3b9) */
/* WARNING: Removing unreachable block (ram,0x00e1d3c0) */

void FUN_00e1d350(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 0xe;
    do {
      if (puVar4 != (undefined4 *)0x38) {
        puVar4[-0xd] = 0;
        puVar4[-0xc] = 0;
        puVar4[-0xe] = &DAT_01b7bcf0;
        puVar4[-0xb] = 0;
        puVar4[-10] = &DAT_01b7bcf0;
        puVar4[-9] = 0;
        puVar4[-8] = 0;
        puVar4[-7] = 0;
        uVar2 = *(undefined4 *)(param_3 + 8);
        uVar3 = *(undefined4 *)(param_3 + 4);
        if (puVar4[-0xd] != puVar4[-0xc]) {
          puVar4[-0xc] = puVar4[-0xd];
        }
        FUN_00e19960(puVar4[-0xd],uVar3,uVar2);
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        puVar4[-6] = &DAT_01b7bcf0;
        puVar4[-3] = 0;
        puVar4[-2] = &DAT_01b7bcf0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar2 = *(undefined4 *)(param_3 + 0x28);
        uVar3 = *(undefined4 *)(param_3 + 0x24);
        if (puVar4[-5] != puVar4[-4]) {
          puVar4[-4] = puVar4[-5];
        }
        FUN_00e19960(puVar4[-5],uVar3,uVar2);
      }
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 0x10;
    } while (puVar1 != param_2);
  }
  return;
}

// 00E1D530  FUN_00e1d530  size=715  [run]
void FUN_00e1d530(undefined4 param_1,char *****param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char *****pppppcVar5;
  rsize_t _DstSize;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_retaddr;
  int iVar10;
  _Lockit local_44 [4];
  int iStack_40;
  int local_3c;
  char ****local_38 [2];
  int *piStack_30;
  int *local_2c;
  undefined4 uStack_28;
  char ****local_24;
  undefined1 local_20 [16];
  uint uStack_10;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_44;
  local_24 = (char ****)param_2;
  piVar6 = (int *)**(uint **)(param_5 + 0x30);
  local_3c = param_5;
  local_2c = piVar6;
  std::_Lockit::_Lockit((_Lockit *)local_38,0);
  if (piVar6[1] != -1) {
    piVar6[1] = piVar6[1] + 1;
  }
  FUN_00fda874();
  local_2c = (int *)FUN_00e1be30(&local_2c);
  std::_Lockit::_Lockit(local_44,0);
  iVar10 = piVar6[1];
  if ((iVar10 != 0) && (iVar10 != -1)) {
    piVar6[1] = iVar10 + -1;
  }
  iVar10 = piVar6[1];
  FUN_00fda874();
  puVar7 = (undefined4 *)(~-(uint)(iVar10 != 0) & (uint)piVar6);
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)(1);
  }
  (**(code **)(*local_2c + 0xc))(local_20);
  cVar1 = *param_7;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    iVar10 = 1;
  }
  else if ((cVar1 == '0') && ((param_7[1] == 'x' || (param_7[1] == 'X')))) {
    iVar10 = 2;
  }
  else {
    iVar10 = 0;
  }
  pppppcVar5 = (char *****)local_24;
  if (uStack_10 < 0x10) {
    pppppcVar5 = &local_24;
  }
  if (*(char *)pppppcVar5 != '\x7f') {
    pppppcVar5 = (char *****)local_24;
    if (uStack_10 < 0x10) {
      pppppcVar5 = &local_24;
    }
    if ('\0' < *(char *)pppppcVar5) {
      if (uStack_10 < 0x10) {
        local_38[0] = (char ****)&local_24;
      }
      else {
        local_38[0] = local_24;
      }
      cVar1 = *(char *)local_38[0];
      uVar8 = param_8;
      while (((cVar1 != '\x7f' && ('\0' < cVar1)) && ((uint)(int)cVar1 < uVar8 - iVar10))) {
        uVar8 = uVar8 - (int)cVar1;
        _DstSize = (param_8 - uVar8) + 1;
        _memmove_s(param_7 + uVar8 + 1,_DstSize,param_7 + uVar8,_DstSize);
        param_7[uVar8] = '\0';
        param_8 = param_8 + 1;
        if ('\0' < *(char *)((int)local_38[0] + 1)) {
          local_38[0] = (char ****)((int)local_38[0] + 1);
        }
        cVar1 = *(char *)local_38[0];
      }
    }
  }
  uVar8 = *(uint *)(iStack_40 + 0x20);
  if (((*(int *)(iStack_40 + 0x24) < 0) || ((*(int *)(iStack_40 + 0x24) < 1 && (uVar8 == 0)))) ||
     (uVar8 <= param_8)) {
    iVar9 = 0;
  }
  else {
    iVar9 = uVar8 - param_8;
  }
  uVar8 = *(uint *)(iStack_40 + 0x14) & 0x1c0;
  if (uVar8 != 0x40) {
    if (uVar8 == 0x100) {
      puVar7 = (undefined4 *)FUN_00e1aaa0(unaff_retaddr,local_38,param_2,param_3,param_7,iVar10);
      param_7 = param_7 + iVar10;
      param_8 = param_8 - iVar10;
      piVar6 = (int *)FUN_00e1aa30(unaff_retaddr,&stack0xffffffb8,*puVar7,puVar7[1],param_5,iVar9);
      param_2 = (char *****)*piVar6;
      param_3 = piVar6[1];
    }
    else {
      piVar6 = (int *)FUN_00e1aa30(unaff_retaddr,&stack0xffffffb8,param_2,param_3,param_5,iVar9);
      param_2 = (char *****)*piVar6;
      param_3 = piVar6[1];
    }
    iVar9 = 0;
  }
  uVar4 = (**(code **)(*piStack_30 + 8))();
  local_3c = CONCAT31(local_3c._1_3_,uVar4);
  puVar7 = (undefined4 *)
           FUN_00e1ab10(unaff_retaddr,&piStack_30,param_2,param_3,param_7,param_8,local_3c);
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  *(undefined4 *)(iStack_40 + 0x20) = 0;
  *(undefined4 *)(iStack_40 + 0x24) = 0;
  FUN_00e1aa30(unaff_retaddr,uStack_28,uVar2,uVar3,param_5,iVar9);
  if (0xf < uStack_10) {
    FUN_00dd4920(local_24);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffb8);
  return;
}

// 00E1D800  FUN_00e1d800  size=280  [run]
int * __thiscall FUN_00e1d800(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != (int *)0x0) {
    uVar1 = param_1[5];
    piVar3 = param_1;
    if (0xf < uVar1) {
      piVar3 = (int *)*param_1;
    }
    if (piVar3 <= param_2) {
      piVar3 = param_1;
      if (0xf < uVar1) {
        piVar3 = (int *)*param_1;
      }
      if (param_2 < (int *)(param_1[4] + (int)piVar3)) {
        if (0xf < uVar1) {
          piVar3 = (int *)FUN_00e1bc20(param_1,(int)param_2 - *param_1,param_3);
          return piVar3;
        }
        piVar3 = (int *)FUN_00e1bc20(param_1,(int)param_2 - (int)param_1,param_3);
        return piVar3;
      }
    }
  }
  iVar2 = param_1[4];
  if (-iVar2 - 1U <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if (param_3 != 0) {
    uVar1 = iVar2 + param_3;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::length_error::length_error_3("string too long");
    }
    if ((uint)param_1[5] < uVar1) {
      FUN_00e19eb0(uVar1,iVar2);
      if (uVar1 == 0) {
        return param_1;
      }
    }
    else if (uVar1 == 0) {
      param_1[4] = 0;
      if (0xf < (uint)param_1[5]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    piVar3 = param_1;
    if (0xf < (uint)param_1[5]) {
      piVar3 = (int *)*param_1;
    }
    FID_conflict__memcpy((void *)(param_1[4] + (int)piVar3),param_2,param_3);
    param_1[4] = uVar1;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      return param_1;
    }
    *(undefined1 *)((int)param_1 + uVar1) = 0;
  }
  return param_1;
}

// 00E1D920  FUN_00e1d920  size=424  [run]
int * FUN_00e1d920(int *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a78b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar9 = false;
  pcVar3 = param_2;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (int)(param_2 + 1);
  iVar6 = *(int *)(*param_1 + 4);
  uVar1 = *(uint *)(iVar6 + 0x20 + (int)param_1);
  local_24 = *(int *)(iVar6 + 0x24 + (int)param_1);
  if (((local_24 < 0) || (((local_24 < 1 && (uVar1 == 0)) || (local_24 < 0)))) ||
     ((local_24 < 1 && (uVar1 <= uVar4)))) {
    iVar5 = 0;
    local_24 = 0;
  }
  else {
    iVar5 = uVar1 - uVar4;
    local_24 = local_24 - (uint)(uVar1 < uVar4);
  }
  piVar7 = *(int **)(iVar6 + 0x38 + (int)param_1);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))();
  }
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) != 0) {
    std::ios_base::failure::failure(*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | 4,0);
    cVar2 = thunk_FUN_00fe2e0d();
    if (cVar2 == '\0') {
      FUN_00e1b290();
    }
    piVar7 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 0;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 0x1c0) != 0x40) {
    while( true ) {
      if ((local_24 < 0) || ((local_24 < 1 && (iVar5 == 0)))) goto LAB_00e1da32;
      iVar6 = FUN_00e18120(*(undefined1 *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1));
      if (iVar6 == -1) break;
      bVar8 = iVar5 != 0;
      iVar5 = iVar5 + -1;
      local_24 = local_24 + -1 + (uint)bVar8;
    }
    bVar9 = true;
LAB_00e1da32:
    if (bVar9) goto LAB_00e1da61;
  }
  uVar10 = FUN_00e14ed0(param_2,uVar4,0);
  if (((uint)uVar10 == uVar4) && ((int)((ulonglong)uVar10 >> 0x20) == 0)) {
    while ((-1 < local_24 &&
           (((0 < local_24 || (iVar5 != 0)) &&
            (iVar6 = FUN_00e18120(*(undefined1 *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1)),
            iVar6 != -1))))) {
      bVar9 = iVar5 != 0;
      iVar5 = iVar5 + -1;
      local_24 = local_24 + -1 + (uint)bVar9;
    }
  }
LAB_00e1da61:
  iVar6 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar6 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar6 + 0x24 + (int)param_1) = 0;
  local_8 = 0xffffffff;
  piVar7 = (int *)FUN_00e1daff();
  return piVar7;
}

// 00E1DACB  Catch@00e1dacb  size=58  [run]
undefined * Catch_00e1dacb(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1dafc;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1DAFF  FUN_00e1daff  size=95  [run]
void FUN_00e1daff(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_ESI;
  
  if (*(uint *)(unaff_EBP + -0x14) != 0) {
    uVar3 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0xc) |
            *(uint *)(unaff_EBP + -0x14);
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x38) == 0) {
      uVar3 = uVar3 | 4;
    }
    std::ios_base::failure::failure(uVar3,0);
  }
  cVar2 = thunk_FUN_00fe2e0d();
  piVar1 = *(int **)(unaff_EBP + -0x2c);
  if (cVar2 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*piVar1 + 4) + 0x38 + (int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

// 00E1DB70  FUN_00e1db70  size=161  [run]
void __thiscall FUN_00e1db70(int *param_1,undefined2 *param_2)

{
  int *piVar1;
  
  if ((uint)param_1[4] < param_1[8] + 2U) {
    FUN_00e1a910((param_1[8] + 2U) - param_1[4],0);
  }
  if ((char)param_1[7] == '\0') {
    if ((uint)param_1[5] < 0x10) {
      *(undefined2 *)(param_1[8] + (int)param_1) = *param_2;
      param_1[8] = param_1[8] + 2;
      return;
    }
    *(undefined2 *)(param_1[8] + *param_1) = *param_2;
    param_1[8] = param_1[8] + 2;
    return;
  }
  piVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar1 = (int *)*param_1;
  }
  *(undefined1 *)((int)piVar1 + param_1[8]) = *(undefined1 *)((int)param_2 + 1);
  if ((uint)param_1[5] < 0x10) {
    *(undefined1 *)((int)param_1 + param_1[8] + 1) = *(undefined1 *)param_2;
    param_1[8] = param_1[8] + 2;
    return;
  }
  *(undefined1 *)(*param_1 + 1 + param_1[8]) = *(undefined1 *)param_2;
  param_1[8] = param_1[8] + 2;
  return;
}

// 00E1DC20  FUN_00e1dc20  size=204  [run]
void __thiscall FUN_00e1dc20(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if ((uint)param_1[4] < param_1[8] + 4U) {
    FUN_00e1a910((param_1[8] + 4U) - param_1[4],0);
  }
  if ((char)param_1[7] == '\0') {
    if ((uint)param_1[5] < 0x10) {
      *(undefined4 *)(param_1[8] + (int)param_1) = *param_2;
      param_1[8] = param_1[8] + 4;
      return;
    }
    *(undefined4 *)(param_1[8] + *param_1) = *param_2;
    param_1[8] = param_1[8] + 4;
    return;
  }
  piVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar1 = (int *)*param_1;
  }
  *(undefined1 *)((int)piVar1 + param_1[8]) = *(undefined1 *)((int)param_2 + 3);
  piVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar1 = (int *)*param_1;
  }
  *(undefined1 *)((int)piVar1 + param_1[8] + 1) = *(undefined1 *)((int)param_2 + 2);
  piVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar1 = (int *)*param_1;
  }
  *(undefined1 *)((int)piVar1 + param_1[8] + 2) = *(undefined1 *)((int)param_2 + 1);
  if ((uint)param_1[5] < 0x10) {
    *(undefined1 *)((int)param_1 + param_1[8] + 3) = *(undefined1 *)param_2;
    param_1[8] = param_1[8] + 4;
    return;
  }
  *(undefined1 *)(*param_1 + 3 + param_1[8]) = *(undefined1 *)param_2;
  param_1[8] = param_1[8] + 4;
  return;
}

// 00E1DCF0  FUN_00e1dcf0  size=130  [run]
void __thiscall FUN_00e1dcf0(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[4] < param_1[8] + 1U) {
    FUN_00e1a910((param_1[8] + 1U) - param_1[4],0);
  }
  if ((char)param_1[7] == '\0') {
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)(param_1[8] + *param_1) = *param_2;
      param_1[8] = param_1[8] + 1;
      return;
    }
    *(undefined1 *)(param_1[8] + (int)param_1) = *param_2;
    param_1[8] = param_1[8] + 1;
    return;
  }
  if (0xf < (uint)param_1[5]) {
    *(undefined1 *)(*param_1 + param_1[8]) = *param_2;
    param_1[8] = param_1[8] + 1;
    return;
  }
  *(undefined1 *)((int)param_1 + param_1[8]) = *param_2;
  param_1[8] = param_1[8] + 1;
  return;
}

// 00E1DD80  FUN_00e1dd80  size=296  [run]
/* WARNING: Removing unreachable block (ram,0x00e1de58) */
/* WARNING: Removing unreachable block (ram,0x00e1ddea) */
/* WARNING: Removing unreachable block (ram,0x00e1ddf0) */

void FUN_00e1dd80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 != param_3) {
    puVar5 = (undefined4 *)(param_1 + 0x38);
    puVar4 = param_2 + 9;
    do {
      if (puVar5 != (undefined4 *)0x38) {
        puVar5[-0xd] = 0;
        puVar5[-0xc] = 0;
        puVar5[-0xe] = &DAT_01b7bcf0;
        puVar5[-0xb] = 0;
        puVar5[-10] = &DAT_01b7bcf0;
        puVar5[-9] = 0;
        puVar5[-8] = 0;
        puVar5[-7] = 0;
        uVar2 = puVar4[-7];
        uVar3 = puVar4[-8];
        if (puVar5[-0xd] != puVar5[-0xc]) {
          puVar5[-0xc] = puVar5[-0xd];
        }
        FUN_00e19960(puVar5[-0xd],uVar3,uVar2);
        puVar5[-5] = 0;
        puVar5[-4] = 0;
        puVar5[-6] = &DAT_01b7bcf0;
        puVar5[-3] = 0;
        puVar5[-2] = &DAT_01b7bcf0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar2 = puVar4[1];
        uVar3 = *puVar4;
        if (puVar5[-5] != puVar5[-4]) {
          puVar5[-4] = puVar5[-5];
        }
        FUN_00e19960(puVar5[-5],uVar3,uVar2);
      }
      puVar1 = puVar4 + 7;
      puVar5 = puVar5 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while (puVar1 != param_3);
  }
  return;
}

// 00E1DEB0  FUN_00e1deb0  size=105  [run]
void __thiscall FUN_00e1deb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + -0x40 + (param_4 - param_3 & 0xffffffc0U);
  while (iVar1 = param_4 + -0x40, iVar1 != param_3 + -0x40) {
    if (uVar2 < *(uint *)(param_1 + 8)) {
      FUN_00e092f0(iVar1);
    }
    else if (uVar2 != 0) {
      FUN_00e093f0(iVar1,&DAT_01b7bcf0);
      FUN_00e093f0(param_4 + -0x20,&DAT_01b7bcf0);
    }
    uVar2 = uVar2 - 0x40;
    param_4 = iVar1;
  }
  return;
}

// 00E1DF20  FUN_00e1df20  size=37  [run]
void __thiscall FUN_00e1df20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00e1b040(param_2,param_3,param_4,param_1 + 0xc,0,param_4);
  return;
}

// 00E1DF50  FUN_00e1df50  size=472  [run]
int * FUN_00e1df50(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a78d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_18 = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  iVar4 = *(int *)(*param_1 + 4);
  if (*(int *)(iVar4 + 0xc + (int)param_1) == 0) {
    uVar2 = *(uint *)(iVar4 + 0x20 + (int)param_1);
    iVar4 = *(int *)(iVar4 + 0x24 + (int)param_1);
    if ((iVar4 < 1) && ((iVar4 < 0 || (uVar2 < 2)))) {
      iVar6 = 0;
    }
    else {
      iVar6 = uVar2 - 1;
      iVar5 = iVar4 - (uint)(uVar2 == 0);
    }
    local_8 = 0;
    if ((*(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 0x1c0) == 0x40) {
LAB_00e1e04b:
      iVar4 = FUN_00e18120(param_2);
      if (iVar4 == -1) {
        local_18 = 4;
      }
      for (; ((local_18 == 0 && (-1 < iVar5)) && ((0 < iVar5 || (iVar6 != 0)))); iVar6 = iVar6 + -1)
      {
        iVar4 = FUN_00e18120(*(undefined1 *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1));
        if (iVar4 == -1) {
          local_18 = 4;
        }
        iVar5 = iVar5 + -1 + (uint)(iVar6 != 0);
      }
    }
    else {
      while (local_18 == 0) {
        if ((iVar5 < 0) || ((iVar5 < 1 && (iVar6 == 0)))) goto LAB_00e1e04b;
        iVar4 = FUN_00e18120(*(undefined1 *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1));
        if (iVar4 == -1) {
          local_18 = 4;
        }
        bVar7 = iVar6 != 0;
        iVar6 = iVar6 + -1;
        iVar5 = iVar5 + -1 + (uint)bVar7;
      }
    }
    local_8 = 0xffffffff;
  }
  iVar5 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar5 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar5 + 0x24 + (int)param_1) = 0;
  if (local_18 != 0) {
    local_18 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_18;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      local_18 = local_18 | 4;
    }
    std::ios_base::failure::failure(local_18,0);
  }
  cVar3 = thunk_FUN_00fe2e0d();
  if (cVar3 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E1E128  Catch@00e1e128  size=58  [run]
undefined * Catch_00e1e128(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1e159;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1E1D0  FUN_00e1e1d0  size=296  [run]
/* WARNING: Removing unreachable block (ram,0x00e1e2a8) */
/* WARNING: Removing unreachable block (ram,0x00e1e23a) */
/* WARNING: Removing unreachable block (ram,0x00e1e240) */

void FUN_00e1e1d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 != param_3) {
    puVar5 = (undefined4 *)(param_1 + 0x38);
    puVar4 = param_2 + 9;
    do {
      if (puVar5 != (undefined4 *)0x38) {
        puVar5[-0xd] = 0;
        puVar5[-0xc] = 0;
        puVar5[-0xe] = &DAT_01b7bcf0;
        puVar5[-0xb] = 0;
        puVar5[-10] = &DAT_01b7bcf0;
        puVar5[-9] = 0;
        puVar5[-8] = 0;
        puVar5[-7] = 0;
        uVar2 = puVar4[-7];
        uVar3 = puVar4[-8];
        if (puVar5[-0xd] != puVar5[-0xc]) {
          puVar5[-0xc] = puVar5[-0xd];
        }
        FUN_00e19960(puVar5[-0xd],uVar3,uVar2);
        puVar5[-5] = 0;
        puVar5[-4] = 0;
        puVar5[-6] = &DAT_01b7bcf0;
        puVar5[-3] = 0;
        puVar5[-2] = &DAT_01b7bcf0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar2 = puVar4[1];
        uVar3 = *puVar4;
        if (puVar5[-5] != puVar5[-4]) {
          puVar5[-4] = puVar5[-5];
        }
        FUN_00e19960(puVar5[-5],uVar3,uVar2);
      }
      puVar1 = puVar4 + 7;
      puVar5 = puVar5 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while (puVar1 != param_3);
  }
  return;
}

// 00E1E300  FUN_00e1e300  size=86  [run]
void __thiscall FUN_00e1e300(int param_1,uint param_2,int param_3,int param_4)

{
  for (; param_3 != param_4; param_3 = param_3 + 0x40) {
    if (param_2 < *(uint *)(param_1 + 8)) {
      FUN_00e092f0(param_3);
    }
    else if (param_2 != 0) {
      FUN_00e093f0(param_3,&DAT_01b7bcf0);
      FUN_00e093f0(param_3 + 0x20,&DAT_01b7bcf0);
    }
    param_2 = param_2 + 0x40;
  }
  return;
}

// 00E1E390  FUN_00e1e390  size=152  [run]
void __fastcall FUN_00e1e390(int param_1)

{
  FUN_00e223b0();
  if ((*(int *)(param_1 + 0x4c) != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*(int *)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if ((*(int *)(param_1 + 0x3c) != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((0xf < *(uint *)(param_1 + 0x34)) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*(undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if ((0xf < *(uint *)(param_1 + 0x18)) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

// 00E1E430  FUN_00e1e430  size=240  [run]
int * __thiscall FUN_00e1e430(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    uVar1 = param_1[5];
    piVar2 = param_1;
    if (0xf < uVar1) {
      piVar2 = (int *)*param_1;
    }
    if (piVar2 <= param_2) {
      piVar2 = param_1;
      if (0xf < uVar1) {
        piVar2 = (int *)*param_1;
      }
      if (param_2 < (int *)(param_1[4] + (int)piVar2)) {
        if (0xf < uVar1) {
          piVar2 = (int *)FUN_00e1c140(param_1,(int)param_2 - *param_1,param_3);
          return piVar2;
        }
        piVar2 = (int *)FUN_00e1c140(param_1,(int)param_2 - (int)param_1,param_3);
        return piVar2;
      }
    }
  }
  if (param_3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if ((uint)param_1[5] < param_3) {
    FUN_00e19eb0(param_3,param_1[4]);
    if (param_3 == 0) {
      return param_1;
    }
  }
  else if (param_3 == 0) {
    param_1[4] = 0;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  piVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar2 = (int *)*param_1;
  }
  FID_conflict__memcpy(piVar2,param_2,param_3);
  param_1[4] = param_3;
  if ((uint)param_1[5] < 0x10) {
    *(undefined1 *)((int)param_1 + param_3) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + param_3) = 0;
  return param_1;
}

// 00E1E550  FUN_00e1e550  size=135  [run]
void FUN_00e1e550(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = 0;
  if (param_1[1] - iVar2 >> 2 != 0) {
    do {
      puVar1 = *(undefined4 **)(iVar2 + uVar3 * 4);
      if ((0xf < (uint)puVar1[0xc]) && (DAT_01b7b790 != (code *)0x0)) {
        (*DAT_01b7b790)(puVar1[7]);
      }
      puVar1[0xc] = 0xf;
      puVar1[0xb] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      if ((0xf < (uint)puVar1[5]) && (DAT_01b7b790 != (code *)0x0)) {
        (*DAT_01b7b790)(*puVar1);
      }
      puVar1[5] = 0xf;
      puVar1[4] = 0;
      *(undefined1 *)puVar1 = 0;
      (*DAT_01b7b790)(puVar1);
      iVar2 = *param_1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[1] - iVar2 >> 2));
  }
  return;
}

// 00E1E650  FUN_00e1e650  size=243  [run]
void __thiscall FUN_00e1e650(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a78f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x15555555 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("vector<T> too long");
  }
  if ((uint)((param_1[2] - *param_1) / 0xc) < param_2) {
    if (DAT_01b7b794 == (code *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = (*DAT_01b7b794)(param_2 * 0xc);
    }
    local_8 = 0;
    FUN_00e1c2b0(*param_1,param_1[1],local_18);
    local_8 = 0xffffffff;
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if ((iVar1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar1);
    }
    param_1[2] = local_18 + param_2 * 0xc;
    param_1[1] = local_18 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *param_1 = local_18;
  }
  ExceptionList = local_10;
  return;
}

// 00E1E743  Catch@00e1e743  size=27  [run]
void Catch_00e1e743(void)

{
  int unaff_EBP;
  
  if (DAT_01b7b790 != (code *)0x0) {
    (*DAT_01b7b790)(*(undefined4 *)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1E760  FUN_00e1e760  size=30  [run]
undefined4 __thiscall FUN_00e1e760(undefined4 param_1,byte param_2)

{
  FUN_00e1e390();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E1E780  FUN_00e1e780  size=121  [run]
undefined4 * __thiscall FUN_00e1e780(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    if ((0xf < (uint)param_1[5]) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(*param_1);
    }
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
    if ((uint)param_2[5] < 0x10) {
      FID_conflict__memcpy(param_1,param_2,param_2[4] + 1);
    }
    else {
      *param_1 = *param_2;
      *param_2 = 0;
    }
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_2[5] = 0xf;
    param_2[4] = 0;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}

// 00E1E810  FUN_00e1e810  size=47  [run]
void FUN_00e1e810(undefined4 param_1,undefined4 *param_2)

{
  if ((0xf < (uint)param_2[5]) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_2);
  }
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return;
}

// 00E1E8D0  FUN_00e1e8d0  size=35  [run]
void __thiscall FUN_00e1e8d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00e1b7c0(param_2,param_3,param_4,param_1 + 0xc,param_4);
  return;
}

// 00E1EAD0  FUN_00e1ead0  size=44  [run]
void __fastcall FUN_00e1ead0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) != iVar1) {
    uVar2 = FUN_00e1bd70(*(int *)(param_1 + 4),iVar1,iVar1);
    FUN_00e1a8a0(uVar2,*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return;
}

// 00E1EBA0  FUN_00e1eba0  size=156  [run]
undefined4 __thiscall FUN_00e1eba0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 6;
  }
  if (uVar3 < param_2) {
    iVar2 = FUN_00dd29b0(param_2 * 0x40,0x20,0,0);
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar1 >> 6;
    }
    FUN_00e1dd80(iVar2,iVar1,*(undefined4 *)(param_1 + 8));
    FUN_00e1a8a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
    }
    *(int *)(param_1 + 8) = iVar4 * 0x40 + iVar2;
    *(uint *)(param_1 + 0xc) = param_2 * 0x40 + iVar2;
    *(int *)(param_1 + 4) = iVar2;
  }
  return 1;
}

