// src/unsorted/unit_00F38A30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F38A30..00F38A30, 1 functions

#include "types.h"

// 00F38A30  FUN_00f38a30  size=253  [run]
undefined4 __thiscall FUN_00f38a30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00ef7ec0();
  uVar4 = extraout_ECX;
  if (iVar1 != 0) {
    iVar1 = FUN_00f2cfb0();
    uVar4 = extraout_ECX_00;
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      uVar4 = extraout_ECX_01;
      if (iVar1 != 0) {
        iVar2 = FUN_00a7c800();
        uVar4 = extraout_ECX_02;
        if (iVar2 != 0) {
          iVar3 = FUN_00ef7fe0();
          uVar4 = extraout_ECX_03;
          if (iVar3 != 0) {
            iVar3 = FUN_009f6260(param_1,iVar1,param_2);
            uVar4 = extraout_ECX_04;
            if (iVar3 != 0) {
              iVar1 = FUN_009d2840(param_1,iVar1);
              uVar4 = extraout_ECX_05;
              if (iVar1 != 0) {
                if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 1)) {
                  *(undefined1 *)(iVar2 + 0x44d) = 4;
                }
                iVar1 = FUN_009d4a40();
                if (iVar1 != 0) {
                  *(undefined1 *)(iVar2 + 0x44c) = *(undefined1 *)(iVar1 + 0x2c);
                }
                iVar1 = FUN_009d49d0();
                if (iVar1 != 0) {
                  *(uint *)(iVar2 + 0x338) = (uint)*(byte *)(iVar1 + 0x17);
                }
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x4b0) != 0) {
    uVar5 = 0x50000;
    iVar1 = param_1;
    FUN_00a7c940(param_1 + 0x4b4);
    FUN_009d5aa0(uVar4,uVar5,iVar1);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  Spline<float>::Spline<float>_2();
  return 0;
}

