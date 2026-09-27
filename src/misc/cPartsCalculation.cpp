// src/misc/cPartsCalculation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A86470..00A86470, 1 functions

#include "types.h"

// 00A86470  cPartsCalculation::update  size=375  [class]
void __fastcall cPartsCalculation::update(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    iVar2 = *(int *)*param_1;
    if ((*(ushort *)(iVar2 + 0xa2) & 0x4002) == 0) {
      FUN_00ddb590(iVar2 + 0x60,iVar2 + 0x90);
    }
    if (*(int *)(iVar2 + 0xa8) == 0) {
      if ((*(byte *)(iVar2 + 0xa2) & 4) == 0) {
        if (param_1[2] == 0) {
          FUN_00dd5650(&DAT_0166412c);
        }
        else {
          iVar1 = iVar2 + 0x10;
          D3DXMatrixRotationQuaternion(iVar1,iVar2 + 0x60);
          FUN_00ddd140(&stack0xffffffa8,iVar2 + 0x70);
          D3DXMatrixMultiply(iVar1,&stack0xffffffa8,iVar1);
          *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x50);
          *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x54);
          *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x58);
          D3DXMatrixMultiply(iVar1,iVar1,param_1[2]);
          *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x50);
          *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x54);
          *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x58);
        }
      }
    }
    else if ((*(ushort *)(iVar2 + 0xa2) & 0x8004) == 0) {
      FUN_00a15310();
    }
    if (param_1[1] != 0) {
      iVar2 = 1;
      if (1 < param_1[1] + -1) {
        do {
          iVar1 = *(int *)(*param_1 + iVar2 * 4);
          if ((*(ushort *)(iVar1 + 0xa2) & 0x4002) == 0) {
            FUN_00ddb590(iVar1 + 0x60,iVar1 + 0x90);
          }
          if ((*(ushort *)(iVar1 + 0xa2) & 0x8004) == 0) {
            FUN_00a15310();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1[1] + -1);
      }
      iVar2 = *(int *)(*param_1 + -4 + param_1[1] * 4);
      if ((*(ushort *)(iVar2 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar2 + 0x60,iVar2 + 0x90);
      }
      if ((*(ushort *)(iVar2 + 0xa2) & 0x8004) == 0) {
        FUN_00a15310();
      }
    }
  }
  return;
}

