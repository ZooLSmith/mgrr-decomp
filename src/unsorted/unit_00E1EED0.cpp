// src/unsorted/unit_00E1EED0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E1EED0..00E1FF40, 16 functions

#include "types.h"

// 00E1EED0  FUN_00e1eed0  size=208  [run]
void __thiscall FUN_00e1eed0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7910;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 3) < param_2) {
    if (DAT_01b7b794 == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*DAT_01b7b794)(param_2 * 8);
    }
    local_8 = 0;
    FUN_00e1df20(*param_1,param_1[1],iVar3);
    local_8 = 0xffffffff;
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if ((iVar1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar1);
    }
    param_1[2] = iVar3 + param_2 * 8;
    param_1[1] = iVar3 + (iVar2 - iVar1 >> 3) * 8;
    *param_1 = iVar3;
  }
  ExceptionList = local_10;
  return;
}

// 00E1EFA0  Catch@00e1efa0  size=27  [run]
void Catch_00e1efa0(void)

{
  int unaff_EBP;
  
  if (DAT_01b7b790 != (code *)0x0) {
    (*DAT_01b7b790)(*(undefined4 *)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1EFC0  FUN_00e1efc0  size=1616  [run]
void FUN_00e1efc0(undefined4 param_1,char ***param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,char ****param_7,undefined4 param_8,int param_9,
                 undefined4 param_10,size_t param_11)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  lconv *plVar6;
  void *pvVar7;
  void *pvVar8;
  char ****_Str;
  size_t sVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined *puVar13;
  int unaff_EBX;
  char ****ppppcVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 unaff_retaddr;
  undefined4 local_74;
  int iStack_70;
  int local_6c;
  undefined4 uStack_68;
  int local_64;
  int local_60;
  _Lockit local_5c [4];
  int iStack_58;
  int local_54 [2];
  int *piStack_4c;
  int *local_48;
  undefined4 uStack_44;
  char ***local_40 [4];
  size_t sStack_30;
  uint uStack_2c;
  char ***pppcStack_24;
  undefined1 local_20 [16];
  uint uStack_10;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_74;
  local_40[0] = param_2;
  local_6c = param_8;
  local_54[0] = param_9;
  piVar2 = (int *)**(uint **)(param_5 + 0x30);
  local_74 = param_10;
  local_60 = param_5;
  local_48 = piVar2;
  std::_Lockit::_Lockit(local_5c,0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  FUN_00fda874();
  local_48 = (int *)FUN_00e1be30(&local_48);
  std::_Lockit::_Lockit((_Lockit *)&local_64,0);
  iVar16 = piVar2[1];
  if ((iVar16 != 0) && (iVar16 != -1)) {
    piVar2[1] = iVar16 + -1;
  }
  puVar15 = (undefined4 *)(~-(uint)(piVar2[1] != 0) & (uint)piVar2);
  FUN_00fda874();
  if (puVar15 != (undefined4 *)0x0) {
    (**(code **)*puVar15)(1);
  }
  piVar2 = local_48;
  (**(code **)(*local_48 + 0xc))(local_20);
  uVar5 = (**(code **)(*piVar2 + 8))();
  uStack_68 = CONCAT31(uStack_68._1_3_,uVar5);
  uStack_2c = 0xf;
  sStack_30 = 0;
  local_40[0] = (char ***)((uint)local_40[0] & 0xffffff00);
  if ((*(char *)param_7 == '+') || (local_54[0] = 0, *(char *)param_7 == '-')) {
    local_54[0] = 1;
  }
  plVar6 = _localeconv();
  local_74._0_3_ = CONCAT21(0x65,*plVar6->decimal_point);
  pvVar7 = _memchr(param_7,0x65,param_11);
  pvVar8 = _memchr(param_7,(int)(char)local_74,param_11);
  if (pvVar8 == (void *)0x0) {
    unaff_EBX = 0;
  }
  ppppcVar14 = (char ****)pppcStack_24;
  if (uStack_10 < 0x10) {
    ppppcVar14 = &pppcStack_24;
  }
  if (*(char *)ppppcVar14 != '\x7f') {
    ppppcVar14 = (char ****)pppcStack_24;
    if (uStack_10 < 0x10) {
      ppppcVar14 = &pppcStack_24;
    }
    if ('\0' < *(char *)ppppcVar14) {
      FUN_00e1d800(param_7,param_11);
      if (pvVar7 == (void *)0x0) {
        FUN_00e1bb00(unaff_EBX,0x30);
      }
      else {
        if (pvVar8 == (void *)0x0) {
          FUN_00e1bb00(iStack_70,0x30);
          iStack_70 = 0;
        }
        FUN_00e1c050((int)pvVar7 - (int)param_7,unaff_EBX,0x30);
      }
      if (pvVar8 == (void *)0x0) {
        FUN_00e1bb00(iStack_70,0x30);
      }
      else {
        FUN_00e1c050(((int)pvVar8 - (int)param_7) + 1,iStack_58,0x30);
        FUN_00e1c050((int)pvVar8 - (int)param_7,iStack_70,0x30);
        iStack_58 = 0;
      }
      iStack_70 = 0;
      ppppcVar14 = (char ****)pppcStack_24;
      if (uStack_10 < 0x10) {
        ppppcVar14 = &pppcStack_24;
      }
      _Str = (char ****)local_40[0];
      if (uStack_2c < 0x10) {
        _Str = local_40;
      }
      sVar9 = _strcspn((char *)_Str,(char *)&local_74);
      cVar1 = *(char *)ppppcVar14;
      param_11 = sStack_30;
      while (((sStack_30 = param_11, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < sVar9 - local_54[0]))) {
        sVar9 = sVar9 - (int)cVar1;
        FUN_00e1c050(sVar9,1,0);
        if ('\0' < *(char *)((int)ppppcVar14 + 1)) {
          ppppcVar14 = (char ****)((int)ppppcVar14 + 1);
        }
        param_11 = sStack_30;
        cVar1 = *(char *)ppppcVar14;
      }
      param_7 = (char ****)local_40[0];
      if (uStack_2c < 0x10) {
        param_7 = local_40;
      }
      unaff_EBX = 0;
    }
  }
  iVar16 = local_64;
  uVar11 = *(uint *)(local_64 + 0x20);
  uVar10 = unaff_EBX + param_11 + iStack_58 + iStack_70;
  if (((*(int *)(local_64 + 0x24) < 0) || ((*(int *)(local_64 + 0x24) < 1 && (uVar11 == 0)))) ||
     (uVar11 <= uVar10)) {
    local_6c = 0;
  }
  else {
    local_6c = uVar11 - uVar10;
  }
  uVar11 = *(uint *)(local_64 + 0x14) & 0x1c0;
  if (uVar11 != 0x40) {
    if (uVar11 == 0x100) {
      if (local_54[0] != 0) {
        puVar12 = (uint *)FUN_00e1aaa0(unaff_retaddr,local_54,param_2,param_3,param_7,1);
        param_2 = (char ***)*puVar12;
        param_3 = puVar12[1];
        param_7 = (char ****)((int)param_7 + 1);
        param_11 = param_11 - 1;
      }
      puVar12 = (uint *)FUN_00e1aa30(unaff_retaddr,local_54,param_2,param_3,param_5,local_6c);
      param_2 = (char ***)*puVar12;
      param_3 = puVar12[1];
    }
    else {
      puVar12 = (uint *)FUN_00e1aa30(unaff_retaddr,local_54,param_2,param_3,param_5,local_6c);
      param_2 = (char ***)*puVar12;
      param_3 = puVar12[1];
    }
    local_6c = 0;
  }
  pvVar7 = _memchr(param_7,(int)(char)local_74,param_11);
  if (pvVar7 != (void *)0x0) {
    iVar16 = ((int)pvVar7 - (int)param_7) + 1;
    puVar15 = (undefined4 *)
              FUN_00e1ab10(unaff_retaddr,local_54,param_2,param_3,param_7,(int)pvVar7 - (int)param_7
                           ,uStack_68);
    puVar15 = (undefined4 *)FUN_00e1aa30(unaff_retaddr,local_54,*puVar15,puVar15[1],0x30,iStack_70);
    uVar3 = *puVar15;
    uVar4 = puVar15[1];
    uVar5 = (**(code **)(*piStack_4c + 4))();
    local_60 = CONCAT31(local_60._1_3_,uVar5);
    puVar15 = (undefined4 *)FUN_00e1aa30(unaff_retaddr,&piStack_4c,uVar3,uVar4,local_60,1);
    puVar12 = (uint *)FUN_00e1aa30(unaff_retaddr,&local_60,*puVar15,puVar15[1],0x30,iStack_58);
    param_2 = (char ***)*puVar12;
    param_3 = puVar12[1];
    param_7 = (char ****)((int)param_7 + iVar16);
    param_11 = param_11 - iVar16;
    iVar16 = local_64;
  }
  pvVar7 = _memchr(param_7,0x65,param_11);
  if (pvVar7 != (void *)0x0) {
    iVar16 = ((int)pvVar7 - (int)param_7) + 1;
    puVar15 = (undefined4 *)
              FUN_00e1ab10(unaff_retaddr,&local_60,param_2,param_3,param_7,
                           (int)pvVar7 - (int)param_7,uStack_68);
    puVar15 = (undefined4 *)FUN_00e1aa30(unaff_retaddr,&local_60,*puVar15,puVar15[1],0x30,unaff_EBX)
    ;
    unaff_EBX = 0;
    puVar13 = &DAT_016cc510;
    if ((*(byte *)(local_64 + 0x14) & 4) == 0) {
      puVar13 = &DAT_016a7470;
    }
    puVar12 = (uint *)FUN_00e1aaa0(unaff_retaddr,&local_60,*puVar15,puVar15[1],puVar13,1);
    param_2 = (char ***)*puVar12;
    param_3 = puVar12[1];
    param_7 = (char ****)((int)param_7 + iVar16);
    param_11 = param_11 - iVar16;
    iVar16 = local_64;
  }
  puVar15 = (undefined4 *)
            FUN_00e1ab10(unaff_retaddr,&local_60,param_2,param_3,param_7,param_11,uStack_68);
  puVar15 = (undefined4 *)FUN_00e1aa30(unaff_retaddr,&local_60,*puVar15,puVar15[1],0x30,unaff_EBX);
  uVar3 = *puVar15;
  uVar4 = puVar15[1];
  *(undefined4 *)(iVar16 + 0x20) = 0;
  *(undefined4 *)(iVar16 + 0x24) = 0;
  FUN_00e1aa30(unaff_retaddr,uStack_44,uVar3,uVar4,param_5,local_6c);
  if (0xf < uStack_2c) {
    FUN_00dd4920(local_40[0]);
  }
  uStack_2c = 0xf;
  sStack_30 = 0;
  local_40[0] = (char ***)((uint)local_40[0] & 0xffffff00);
  if (0xf < uStack_10) {
    FUN_00dd4920(pppcStack_24);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffff88);
  return;
}

// 00E1F660  FUN_00e1f660  size=110  [run]
void __thiscall FUN_00e1f660(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((uint)param_1[4] < param_1[8] + 1U) {
      FUN_00e1a910((param_1[8] + 1U) - param_1[4],0);
    }
    if ((char)param_1[7] == '\0') {
      if ((uint)param_1[5] < 0x10) {
        *(undefined1 *)(param_1[8] + (int)param_1) = *(undefined1 *)(uVar2 + param_2);
      }
      else {
        *(undefined1 *)(param_1[8] + *param_1) = *(undefined1 *)(uVar2 + param_2);
      }
    }
    else {
      piVar1 = param_1;
      if (0xf < (uint)param_1[5]) {
        piVar1 = (int *)*param_1;
      }
      *(undefined1 *)((int)piVar1 + param_1[8]) = *(undefined1 *)(uVar2 + param_2);
    }
    param_1[8] = param_1[8] + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

// 00E1F7D0  FUN_00e1f7d0  size=294  [run]
undefined4 __thiscall FUN_00e1f7d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = param_4 - param_3 >> 6;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 8) - iVar1 >> 6;
  }
  uVar5 = iVar4 + iVar3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar1 >> 6;
  }
  if (uVar2 < uVar5) {
    iVar1 = FUN_00dd29b0(uVar5 * 0x40,0x20,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar4 = param_2 - *(int *)(param_1 + 4) >> 6;
    FUN_00e1dd80(iVar1,*(int *)(param_1 + 4),param_2);
    FUN_00e1e1d0(iVar4 * 0x40 + iVar1,param_3,param_4);
    FUN_00e1dd80((iVar4 + iVar3) * 0x40 + iVar1,param_2,*(undefined4 *)(param_1 + 8));
    FUN_00e1a8a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
    }
    iVar3 = uVar5 * 0x40 + iVar1;
    *(int *)(param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 8) = iVar3;
    *(int *)(param_1 + 4) = iVar1;
    return 1;
  }
  FUN_00e1deb0(iVar3 * 0x40 + param_2,param_2,*(undefined4 *)(param_1 + 8));
  FUN_00e1e300(param_2,param_3,param_4);
  *(uint *)(param_1 + 8) = uVar5 * 0x40 + *(int *)(param_1 + 4);
  return 1;
}

// 00E1F930  FUN_00e1f930  size=47  [run]
void __fastcall FUN_00e1f930(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1FA30  FUN_00e1fa30  size=120  [run]
void __thiscall FUN_00e1fa30(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0xc;
  if (0x15555555U - param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("vector<T> too long");
  }
  if ((uint)((param_1[2] - *param_1) / 0xc) < uVar1 + param_2) {
    FUN_00e1e650();
    return;
  }
  return;
}

// 00E1FAD0  FUN_00e1fad0  size=66  [run]
void FUN_00e1fad0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if ((0xf < (uint)param_1[5]) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(*param_1);
    }
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return;
}

// 00E1FB20  FUN_00e1fb20  size=41  [run]
void __thiscall FUN_00e1fb20(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_00e1b610(param_2,param_3,param_4,param_1 + 0xc,0,local_4);
  return;
}

// 00E1FB50  FUN_00e1fb50  size=41  [run]
void __thiscall FUN_00e1fb50(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_00e1b6a0(param_2,param_3,param_4,param_1 + 0xc,0,local_4);
  return;
}

// 00E1FB80  FUN_00e1fb80  size=41  [run]
void __thiscall FUN_00e1fb80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = param_1 & 0xffffff00;
  FUN_00e1b730(param_2,param_3,param_4,param_1 + 0xc,0,local_4);
  return;
}

// 00E1FBE0  FUN_00e1fbe0  size=47  [run]
void __fastcall FUN_00e1fbe0(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1FCD0  FUN_00e1fcd0  size=203  [run]
/* WARNING: Removing unreachable block (ram,0x00e1fd0e) */
/* WARNING: Removing unreachable block (ram,0x00e1fd10) */
/* WARNING: Removing unreachable block (ram,0x00e1fd2a) */

void __thiscall FUN_00e1fcd0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_1[1] - *param_1) / 0xc;
  if (param_2 < uVar1) {
    iVar2 = *param_1 + param_2 * 0xc;
    if (iVar2 == param_1[1]) {
      return;
    }
  }
  else {
    if (param_2 <= uVar1) {
      return;
    }
    FUN_00e1fa30(param_2 - uVar1);
    FUN_00e1afb0(param_1[1],param_2 - (param_1[1] - *param_1) / 0xc,0,param_1 + 3,0,param_2);
    iVar2 = param_1[1] + (param_2 - (param_1[1] - *param_1) / 0xc) * 0xc;
  }
  param_1[1] = iVar2;
  return;
}

// 00E1FE80  FUN_00e1fe80  size=81  [run]
void __thiscall FUN_00e1fe80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - iVar1 >> 6;
  }
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0xc) - iVar1 >> 6;
  }
  if (uVar3 < iVar2 + 1U) {
    FUN_00e1eba0(iVar2 + 1U);
  }
  FUN_00e1d350(*(int *)(param_1 + 8),*(int *)(param_1 + 8) + 0x40,param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x40;
  return;
}

// 00E1FEE0  FUN_00e1fee0  size=94  [run]
void __thiscall FUN_00e1fee0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (0x1fffffffU - param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 3) < uVar1 + param_2) {
    FUN_00e1eed0();
    return;
  }
  return;
}

// 00E1FF40  FUN_00e1ff40  size=322  [run]
void __thiscall FUN_00e1ff40(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_20;
  if (((*(uint *)(param_1 + 0x40) & 2) == 0) && (**(uint **)(param_1 + 0x24) != 0)) {
    uVar1 = **(uint **)(param_1 + 0x24);
    if (uVar1 <= *(uint *)(param_1 + 0x3c)) {
      uVar1 = *(uint *)(param_1 + 0x3c);
    }
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (uint)local_20[0]._1_3_ << 8;
    FUN_00e1b9d0(**(int **)(param_1 + 0x14),uVar1 - **(int **)(param_1 + 0x14));
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00e1e780(local_20);
  }
  else if (((*(uint *)(param_1 + 0x40) & 4) == 0) && (**(int **)(param_1 + 0x20) != 0)) {
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (uint)local_20[0]._1_3_ << 8;
    FUN_00e1b9d0(**(int **)(param_1 + 0x10),
                 (**(int **)(param_1 + 0x30) - **(int **)(param_1 + 0x10)) +
                 **(int **)(param_1 + 0x20));
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00e1e780(local_20);
  }
  else {
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (uint)local_20[0]._1_3_ << 8;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00e1e780(local_20);
  }
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  __security_check_cookie(local_4 ^ (uint)local_20);
  return;
}

