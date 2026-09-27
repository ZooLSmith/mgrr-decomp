// src/collision/cUICollision.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFBE10..00D12450, 7 functions

#include "mgrr.h"

// 00CFBE10  FUN_00cfbe10  size=96  [callgraph]
undefined4 __thiscall FUN_00cfbe10(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x314);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x31c) * 3) {
    piVar1 = piVar2 + *(int *)(param_1 + 0x31c) * 3;
    do {
      if (((*piVar2 == param_2) && (piVar2[1] == param_3)) && (piVar2[2] == param_4)) {
        return 1;
      }
      piVar2 = piVar2 + 3;
    } while (piVar2 != piVar1);
  }
  return 0;
}

// 00CFBE70  FUN_00cfbe70  size=119  [callgraph]
undefined4 __thiscall FUN_00cfbe70(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_4 == (int *)0x0) {
    return 0;
  }
  piVar4 = *(int **)(param_1 + 0x314);
  if (piVar4 != piVar4 + *(int *)(param_1 + 0x31c) * 3) {
    piVar1 = piVar4 + *(int *)(param_1 + 0x31c) * 3;
    do {
      iVar2 = piVar4[1];
      iVar3 = piVar4[2];
      if ((*piVar4 == param_2) && (iVar2 == param_3)) {
        *param_4 = *piVar4;
        param_4[1] = iVar2;
        param_4[2] = iVar3;
        return 1;
      }
      piVar4 = piVar4 + 3;
    } while (piVar4 != piVar1);
  }
  return 0;
}

// 00CFBFA0  cUICollision::sUICollisionTouchInfo  size=130  [class]
undefined4 __thiscall
cUICollision::sUICollisionTouchInfo
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    local_4 = param_1;
    if (*(int *)(param_1 + 0x31c) < *(int *)(param_1 + 0x318)) {
      iVar1 = FUN_00cfbe10(param_2,param_3,param_4);
      if (iVar1 == 1) {
        FUN_00dd5650(&DAT_016b9300);
        return 0;
      }
      FUN_00cf6140(&local_4,&param_2);
      return 1;
    }
    FUN_00dd5650(&DAT_016b9334);
  }
  return 0;
}

// 00CFC030  cUICollision::collisionWork  size=174  [class]
undefined4 __thiscall cUICollision::collisionWork(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x370) < *(int *)(param_1 + 0x36c)) {
      piVar1 = *(int **)(param_1 + 0x368);
      piVar2 = piVar1;
      while( true ) {
        if (piVar2 == piVar1 + *(int *)(param_1 + 0x370) * 2) {
          if (*(int *)(param_1 + 0x370) < *(int *)(param_1 + 0x36c)) {
            piVar1 = piVar1 + *(int *)(param_1 + 0x370) * 2;
            if (piVar1 != (int *)0x0) {
              *piVar1 = param_2;
              piVar1[1] = param_3;
            }
            *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + 1;
          }
          return 1;
        }
        if (*piVar2 == param_2) break;
        piVar2 = piVar2 + 2;
      }
      FUN_00dd5650(&DAT_016b9368);
      return 0;
    }
    FUN_00dd5650(&DAT_016b9398);
  }
  return 0;
}

// 00D12300  FUN_00d12300  size=160  [callgraph]
undefined4 FUN_00d12300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  iVar1 = FUN_00cfc0e0(param_1,local_8);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016badcc,param_1);
  }
  else {
    iVar1 = FUN_00cfbe10(param_1,param_2,param_3);
    if (iVar1 == 1) {
      FUN_00dd5650(&DAT_016b9300);
      return 0;
    }
    iVar1 = FUN_00d121b0(param_2,param_3,local_4);
    if (iVar1 != 0) {
      uVar2 = cUICollision::sUICollisionTouchInfo(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

// 00D12400  cUICollision::ID  size=80  [class]
int __fastcall cUICollision::ID(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int in_stack_00000010;
  int in_stack_00000020;
  uint in_stack_00000028;
  
  uVar2 = *(undefined4 *)(param_2 + 4 + param_1 * 8);
  uVar3 = *(undefined4 *)(param_2 + param_1 * 8);
  piVar4 = *(int **)(unaff_ESI + 0x368);
  piVar1 = piVar4 + *(int *)(unaff_ESI + 0x370) * 2;
  while( true ) {
    if (piVar4 == piVar1) {
      FUN_00dd5650(&DAT_016badcc,in_stack_00000020);
      return 0;
    }
    iVar6 = piVar4[1];
    if (*piVar4 == in_stack_00000020) break;
    piVar4 = piVar4 + 2;
  }
  iVar5 = FUN_00cfbe10(in_stack_00000020,uVar3,uVar2);
  if (iVar5 == 1) {
    FUN_00dd5650(&DAT_016b9300);
  }
  else {
    iVar6 = FUN_00d121b0(uVar3,uVar2,iVar6);
    if (iVar6 != 0) {
      iVar6 = sUICollisionTouchInfo(in_stack_00000020,uVar3,uVar2);
      if (iVar6 == 0) {
        return 0;
      }
      if (in_stack_00000028 <= in_stack_00000010 + 1U) {
        return iVar6;
      }
      iVar6 = ID();
      return iVar6;
    }
  }
  return 0;
}

// 00D12450  cUICollision::sUICollisionTouchInfo_2  size=124  [class]
int __fastcall cUICollision::sUICollisionTouchInfo_2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  int in_stack_00000010;
  undefined4 in_stack_00000020;
  uint in_stack_00000028;
  
  iVar1 = FUN_00cfbe10(in_stack_00000020,unaff_EBX,unaff_EDI);
  if (iVar1 == 1) {
    FUN_00dd5650(&DAT_016b9300);
  }
  else {
    iVar1 = FUN_00d121b0(unaff_EBX,unaff_EDI,param_2);
    if (iVar1 != 0) {
      iVar1 = sUICollisionTouchInfo(in_stack_00000020,unaff_EBX,unaff_EDI);
      if (iVar1 == 0) {
        return 0;
      }
      if (in_stack_00000028 <= in_stack_00000010 + 1U) {
        return iVar1;
      }
      iVar1 = ID();
      return iVar1;
    }
  }
  return 0;
}

