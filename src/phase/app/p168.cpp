// src/phase/app/p168.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47ED0..00D701C0, 5 functions

#include "types.h"

// 00D47ED0  P168::vf0C  size=94  [class]
void P168::vf0C(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00a6e640();
  iVar2 = (**(code **)(*piVar1 + 0x20))(0x50,1,2);
  if (iVar2 == 0) {
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x20))(0x51,1,2);
    if (iVar2 == 0) {
      piVar1 = (int *)FUN_00a6e640();
      iVar2 = (**(code **)(*piVar1 + 0x20))(0x52,1,2);
      if (iVar2 == 0) {
        DAT_01bea060 = DAT_01bea060 & 0xfff7ffff;
        return;
      }
    }
  }
  DAT_01bea060 = DAT_01bea060 | 0x80000;
  return;
}

// 00D47F30  P168::vf08  size=27  [class]
void __fastcall P168::vf08(int param_1)

{
  FUN_00c81e90(0x27);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}

// 00D47F50  P168::vf10  size=13  [class]
void P168::vf10(void)

{
  FUN_00c81e90(0x27);
  return;
}

// 00D61820  P168::vf14  size=558  [class]
/* WARNING: Removing unreachable block (ram,0x00d61962) */
/* WARNING: Removing unreachable block (ram,0x00d61957) */
/* WARNING: Removing unreachable block (ram,0x00d619ee) */
/* WARNING: Removing unreachable block (ram,0x00d619f8) */

void __thiscall P168::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar2 = FUN_00d45860(param_2,param_3);
  iVar3 = FUN_00d45860(param_2,"P168_FLOOR");
  if (iVar2 < iVar3) {
    piVar4 = (int *)FUN_00c18350();
    (**(code **)(*piVar4 + 0x5c))(0x145);
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x145,0);
    piVar4 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar4 + 0x20))("wall_floor",0x143);
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x20))();
    }
    piVar4 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar4 + 0x20))("wall_no",0x143);
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x1c))();
    }
  }
  else if (*(int *)(param_1 + 0x11c) == 0) {
    piVar4 = (int *)FUN_00c18350();
    (**(code **)(*piVar4 + 0x60))(0x145);
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x145,1);
    FUN_00a6eda0(0x20,&DAT_01b7bd48);
    FUN_00a814d0(&stack0xffffffe0,0x49200);
    piVar4 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar4 + 0x20))("wall_floor",0x143);
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x1c))();
    }
    piVar4 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar4 + 0x20))("wall_no",0x143);
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
  pcVar5 = "P168_FACTORY";
  do {
    bVar1 = *param_3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d61a30:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d61a35;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d61a30;
    param_3 = param_3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d61a35:
  if (iVar2 == 0) {
    FUN_00c3d6e0(0);
  }
  return;
}

// 00D701C0  P168::vf00  size=54  [class]
undefined4 * __thiscall P168::vf00(undefined4 *param_1,byte param_2)

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

