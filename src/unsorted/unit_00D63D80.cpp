// src/unsorted/unit_00D63D80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D63D80..00D63D80, 1 functions

#include "mgrr.h"

// 00D63D80  FUN_00d63d80  size=308  [run]
void __fastcall FUN_00d63d80(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  int iStack_128;
  undefined1 auStack_124 [288];
  
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d70(puVar5);
      if (iVar3 != 0) {
        FUN_00a8caf0(0x13d,0xb,0,0);
      }
    }
  }
  iVar3 = FUN_00c19c00(0,1,0);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01b34eb0;
      (**(code **)(*piVar2 + 4))(&DAT_01b34eb0);
      iVar3 = FUN_00dd6d70(puVar5);
      if (iVar3 != 0) {
        FUN_00a8cb60(0xb);
        cVar1 = FUN_00a55810();
        if (cVar1 != '\0') {
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            iVar3 = FUN_00a7c8a0();
            if (iVar3 != 0) {
              iStack_134 = piVar2[0x14];
              iStack_12c = piVar2[0x16];
              iStack_128 = piVar2[0x17];
              uStack_130 = *(undefined4 *)(iVar3 + 0x44);
              FUN_00e01ca0();
              FUN_00dffb30(param_1 + 0x220);
              uVar4 = (**(code **)(*piVar2 + 0x84))(auStack_124);
              FUN_00e01430(0x20120,0xe,&iStack_134,uVar4);
            }
          }
        }
      }
    }
  }
  return;
}

