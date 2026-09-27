// src/graphics/cModelDataResource.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A16210..00A163B0, 2 functions

#include "mgrr.h"

// 00A16210  cModelDataResource::release  size=405  [class]
void __fastcall cModelDataResource::release(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *param_1) {
    FUN_00dd5650(&DAT_0165c9d8);
  }
  FUN_00a147a0();
  if (param_1[10] != 0) {
    FUN_00a14990(3);
  }
  if (param_1[0xc] != 0) {
    FUN_00dd4940(param_1[0xc]);
  }
  if (param_1[0x18] != 0) {
    FUN_00dd4940(param_1[0x18]);
  }
  if (param_1[0xe] != 0) {
    FUN_00dd4940(param_1[0xe]);
  }
  iVar1 = param_1[0x2c];
  if (iVar1 != 0) {
    FUN_00a071e0();
    FUN_00dd4920(iVar1);
  }
  if (param_1[0x1a] != 0) {
    FUN_00dd4940(param_1[0x1a]);
  }
  if (param_1[0x1c] != 0) {
    FUN_00dd4940(param_1[0x1c]);
  }
  if (param_1[0x1e] != 0) {
    FUN_00dd4940(param_1[0x1e]);
  }
  if (param_1[0x28] != 0) {
    FUN_00dd4940(param_1[0x28]);
  }
  if (param_1[0x24] != 0) {
    FUN_00dd4940(param_1[0x24]);
  }
  if (param_1[0x26] != 0) {
    FUN_00dd4940(param_1[0x26]);
  }
  if (param_1[0x20] != 0) {
    iVar1 = 0;
    if (0 < param_1[0x21]) {
      iVar2 = 0;
      do {
        iVar3 = param_1[0x20] + iVar2;
        if (*(char *)(iVar3 + 0x44) != '\0') {
          if (*(int *)(iVar3 + 0x30) != 0) {
            FUN_00dd4940(*(int *)(iVar3 + 0x30));
            *(undefined4 *)(iVar3 + 0x30) = 0;
          }
          *(undefined1 *)(iVar3 + 0x44) = 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x50;
      } while (iVar1 < param_1[0x21]);
    }
    FUN_00dd4940(param_1[0x20]);
  }
  if (param_1[0x22] != 0) {
    iVar1 = 0;
    if (0 < param_1[0x23]) {
      iVar2 = 0;
      do {
        iVar3 = *(int *)(param_1[0x22] + 0xc + iVar2);
        if (iVar3 != 0) {
          FUN_00dd4940(iVar3);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x14;
      } while (iVar1 < param_1[0x23]);
    }
    FUN_00dd4940(param_1[0x22]);
  }
  FUN_00a06470();
  return;
}

// 00A163B0  FUN_00a163b0  size=443  [callgraph]
undefined4 __thiscall
FUN_00a163b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  cModelDataResource::release();
  if ((param_3 != 0) && (*(int *)(param_1 + 4) = param_3, (*(byte *)(param_3 + 0xc) & 2) == 0)) {
    iVar2 = FUN_00a14a50(param_6);
    if (iVar2 != 0) {
      iVar2 = FUN_00a14b80(param_6);
      if (iVar2 != 0) {
        iVar2 = FUN_00a0e470(param_6);
        if (iVar2 != 0) {
          iVar2 = FUN_00a0e4f0(param_6);
          if (iVar2 != 0) {
            iVar2 = FUN_00a0e690(param_6);
            if (iVar2 != 0) {
              iVar2 = FUN_00a0e710(param_6);
              if (iVar2 != 0) {
                *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
                *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
                *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
                *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
                *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
                *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
                *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
                *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
                iVar2 = *(int *)(param_1 + 4);
                if ((*(int *)(iVar2 + 0x40) < 1) || (*(int *)(iVar2 + 0x3c) == 0)) {
                  *(undefined4 *)(param_2 + 0x40) = 0;
                  *(undefined4 *)(param_2 + 0x44) = 0;
                }
                else {
                  *(int *)(param_2 + 0x40) = *(int *)(iVar2 + 0x3c) + iVar2;
                  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x40);
                }
                iVar2 = *(int *)(param_1 + 4);
                if ((*(int *)(iVar2 + 0x60) < 1) || (*(int *)(iVar2 + 0x5c) == 0)) {
                  *(undefined4 *)(param_2 + 0x54) = 0;
                  *(undefined4 *)(param_2 + 0x58) = 0;
                }
                else {
                  *(int *)(param_2 + 0x54) = *(int *)(iVar2 + 0x5c) + iVar2;
                  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x60);
                }
                *(undefined4 *)(param_1 + 0xb4) = param_5;
                *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(*(int *)(param_1 + 4) + 0xe);
                *(int *)(param_2 + 0x3c) = param_1 + 8;
                *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 100);
                iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x44);
                if (iVar2 == 0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = *(int *)(param_1 + 4) + iVar2;
                }
                *(int *)(param_2 + 0x48) = iVar2;
                *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
                *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
                *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x30);
                *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x34);
                *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x38);
                uVar1 = *(undefined4 *)(param_1 + 0x3c);
                *(int *)(param_2 + 0x6c) = param_1 + 0x40;
                *(undefined4 *)(param_2 + 0x68) = uVar1;
                *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x60);
                *(undefined4 *)(param_2 + 0xd8) = 0;
                *(undefined4 *)(param_2 + 0xdc) = param_5;
                iVar2 = FUN_00a0f9d0(param_2,param_6);
                if (iVar2 != 0) {
                  iVar2 = FUN_00a14d00(param_2,param_4,param_6);
                  if (iVar2 != 0) {
                    *(int *)(param_2 + 0xf8) = param_1;
                    return 1;
                  }
                }
                FUN_00a0ffd0();
                cModelDataResource::release();
                return 0;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  return 0;
}

