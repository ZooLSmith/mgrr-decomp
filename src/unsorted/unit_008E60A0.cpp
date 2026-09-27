// src/unsorted/unit_008E60A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E60A0..008E62E0, 2 functions

#include "mgrr.h"

// 008E60A0  FUN_008e60a0  size=562  [run]
undefined4 __thiscall FUN_008e60a0(float param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int unaff_ESI;
  int unaff_EDI;
  int iVar8;
  float10 fVar9;
  int iVar10;
  int iVar11;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  if (param_2 != 0) {
    iVar4 = *(int *)((int)param_1 + 300);
    fVar6 = (float)FUN_008f7780(param_2);
    FUN_008e4320(local_20);
    iVar11 = *(int *)((int)param_1 + 0xf0);
    D3DXVec3TransformNormal(local_20,local_20,iVar11 + 0xf0);
    fStack_2c = fStack_2c + *(float *)(iVar11 + 0x120);
    fStack_28 = *(float *)(iVar11 + 0x124) + fStack_28;
    iVar10 = *(int *)((int)param_1 + 0xf0);
    fStack_24 = *(float *)(iVar11 + 0x128) + fStack_24;
    uStack_3c = 0;
    uStack_38 = 0x3f800000;
    fStack_34 = 0.0;
    D3DXVec3TransformNormal(&uStack_3c,&uStack_3c,iVar10 + 0xb0);
    param_1 = *(float *)(iVar10 + 0xe0) + param_1;
    iVar11 = 0;
    fVar6 = *(float *)(iVar10 + 0xe4) + fVar6;
    fVar5 = *(float *)(iVar10 + 0xe8) + fStack_40;
    if (0 < *(int *)(iVar4 + 0x14)) {
      iVar10 = 0;
      do {
        iVar8 = *(int *)(iVar4 + 0x10) + iVar10;
        fVar1 = *(float *)(iVar8 + 4);
        iVar7 = *(int *)(unaff_EDI + 0xf0);
        D3DXVec3TransformNormal(&stack0xffffffa8,&stack0xffffffa8,iVar7 + 0xf0);
        if (0.01 < (*(float *)(iVar7 + 0x124) + fVar1) - fStack_34) {
          if (param_3 != 0) {
            fVar1 = *(float *)(iVar8 + 0x10);
            fVar2 = *(float *)(iVar8 + 0x14);
            fVar3 = *(float *)(iVar8 + 0x18);
            fVar9 = (float10)FUN_00ddbb50((fVar2 * fVar6 + fVar1 * param_1 + fVar3 * fVar5) /
                                          (SQRT(fVar5 * fVar5 + param_1 * param_1 + fVar6 * fVar6) *
                                          SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)));
            if (fVar9 < (float10)0.7853982) goto LAB_008e62a2;
          }
          iVar7 = *(int *)(iVar8 + 0x28);
          if ((*(char *)(iVar7 + 0x18) == '\x01') &&
             (iVar7 = *(char *)(iVar7 + 0x10) + iVar7, iVar7 != 0)) {
            iVar7 = FUN_008f7780(iVar7);
            if (unaff_ESI == iVar7) {
              return 1;
            }
          }
        }
LAB_008e62a2:
        iVar10 = iVar10 + 0x30;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(iVar4 + 0x14));
    }
  }
  return 0;
}

// 008E62E0  FUN_008e62e0  size=135  [run]
undefined4 __thiscall FUN_008e62e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar1 = *(int *)(param_1 + 300);
  FUN_008e4320(local_20);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    iVar4 = 0;
    do {
      if (((local_1c + *(float *)(param_1 + 0xfc) < *(float *)(*(int *)(iVar1 + 0x10) + 4 + iVar4))
          && (iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x28 + iVar4),
             *(char *)(iVar2 + 0x18) == '\x01')) &&
         (iVar2 = *(char *)(iVar2 + 0x10) + iVar2, iVar2 != 0)) {
        iVar2 = FUN_008f7780(iVar2);
        if (param_2 == iVar2) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar3 < *(int *)(iVar1 + 0x14));
  }
  return 0;
}

