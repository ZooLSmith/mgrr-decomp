// src/misc/cItemBoxTargetCursorParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB170..00D30CF0, 5 functions

#include "types.h"

// 00CBB170  cItemBoxTargetCursorParts::vf08  size=37  [class]
void __fastcall cItemBoxTargetCursorParts::vf08(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CE3920  cItemBoxTargetCursorParts::vf00  size=63  [class]
undefined4 * __thiscall cItemBoxTargetCursorParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEF320  cItemBoxTargetCursorParts::vf14  size=672  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemBoxTargetCursorParts::vf14(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 unaff_EDI;
  undefined4 *puVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 fVar8;
  undefined4 auStack_60 [4];
  undefined1 local_50 [76];
  
  fVar7 = (float10)*(float *)(param_1 + 0x40) * (float10)0.05;
  if ((float10)1 < fVar7) {
    fVar7 = (float10)1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  fVar7 = (float10)1.2 - fVar7 * (float10)0.3;
  fVar1 = (float)fVar7;
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_00cef3fa;
    *(float *)(param_1 + 0x44) = (float)fVar7;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
      fVar7 = (float10)fVar1;
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  else if (iVar3 != 1) {
    if (((iVar3 == 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (iVar3 = FUN_00cdf400(1), fVar7 = extraout_ST0, iVar3 != 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    goto LAB_00cef3fa;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
      fVar7 = (float10)fVar1;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
LAB_00cef3fa:
  if (*(int *)(param_1 + 0x20) != 0) {
    if ((float10)*(float *)(param_1 + 0x44) <= fVar7) {
      if (((float10)*(float *)(param_1 + 0x44) < fVar7) &&
         (fVar8 = (float10)*(float *)(param_1 + 0x44) + (float10)_DAT_018b7810,
         *(float *)(param_1 + 0x44) = (float)fVar8, fVar7 < fVar8)) {
        *(float *)(param_1 + 0x44) = (float)fVar7;
      }
    }
    else {
      fVar8 = (float10)*(float *)(param_1 + 0x44) - (float10)_DAT_018b7810;
      *(float *)(param_1 + 0x44) = (float)fVar8;
      if (fVar8 < fVar7) {
        *(float *)(param_1 + 0x44) = (float)fVar7;
      }
    }
    D3DXMatrixScaling(local_50,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x44),
                      *(undefined4 *)(param_1 + 0x44));
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar5 = auStack_60;
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if ((((byte)DAT_01bea090 & 1) == 0) &&
       (iVar3 = FUN_00d9fa80(&stack0xffffff90,param_1 + 0x30), iVar3 != 0)) {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = unaff_EDI;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = unaff_ESI;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    if (((byte)DAT_01bea090 & 0x40) == 0) {
      iVar3 = *(int *)(param_1 + 0x18);
      if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        return;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      uVar2 = *(uint *)(param_1 + 0x1c);
      if (((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= uVar2)) ||
         ((iVar4 = uVar2 * 0x400 + *(int *)(iVar3 + 0x7c), iVar4 == 0 ||
          (*(int *)(iVar4 + 0x3b0) == 0)))) {
        if (*(float *)(param_1 + 0x40) < 10.0 != (*(float *)(param_1 + 0x40) == 10.0)) {
          FUN_00cb2310(uVar2,1);
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
          *(undefined4 *)(param_1 + 0x24) = 0;
          return;
        }
      }
      else if ((uVar2 < *(uint *)(iVar3 + 0x80)) &&
              (iVar3 = uVar2 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(uint *)(iVar3 + 0x3b0) = (uint)(*(float *)(param_1 + 0x40) <= 11.0);
        *(undefined4 *)(param_1 + 0x24) = 0;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 00D30C80  cItemBoxTargetCursorParts::cItemBoxTargetCursorParts  size=108  [class]
undefined4 * cItemBoxTargetCursorParts::cItemBoxTargetCursorParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x10] = 0;
    puVar1[2] = 0;
    puVar1[0x11] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[4] = 1;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[2] = 1;
    puVar1[3] = "cItemBoxTargetCursorParts";
    uVar2 = FUN_00d29960(0x26);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D30CF0  FUN_00d30cf0  size=326  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d30cf0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = 0;
  do {
    param_1 = param_1 + 1;
    if (*(int *)((int)&DAT_01dbfc80 + uVar10) == 0) {
      *(undefined4 *)((int)&DAT_01dbfcd0 + uVar10) = 0;
    }
    if (*(int *)((int)&DAT_01dbfcd0 + uVar10) != 0) {
      if (*param_1 == 0) {
        iVar9 = cItemBoxTargetCursorParts::cItemBoxTargetCursorParts();
        *param_1 = iVar9;
      }
      if (DAT_01dc1490 != 0) {
        iVar9 = *(int *)((int)&DAT_01dbfcd0 + uVar10);
        fVar1 = *(float *)(iVar9 + 0x40);
        fVar2 = *(float *)(iVar9 + 0x44);
        fVar3 = *(float *)(iVar9 + 0x48);
        uVar4 = *(undefined4 *)(iVar9 + 0x4c);
        fVar6 = fVar1 - *(float *)(DAT_01dc1490 + 0x40);
        fVar8 = fVar2 - *(float *)(DAT_01dc1490 + 0x44);
        fVar7 = fVar3 - *(float *)(DAT_01dc1490 + 0x48);
        fVar6 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
        if (fVar6 <= 60.0) {
          iVar9 = *param_1;
          *(undefined4 *)(iVar9 + 0x24) = 1;
          *(float *)(iVar9 + 0x30) = fVar1;
          *(float *)(iVar9 + 0x34) = fVar2;
          *(float *)(iVar9 + 0x38) = fVar3;
          *(undefined4 *)(iVar9 + 0x3c) = uVar4;
          *(float *)(iVar9 + 0x40) = fVar6;
        }
      }
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
      puVar5 = (undefined4 *)*param_1;
      if ((puVar5[8] == 0) && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
        *param_1 = 0;
      }
    }
    uVar10 = uVar10 + 4;
  } while (uVar10 < 0x50);
  DAT_01dbfc80 = 0;
  DAT_01dbfc84 = 0;
  _DAT_01dbfc88 = 0;
  _DAT_01dbfc8c = 0;
  _DAT_01dbfc90 = 0;
  _DAT_01dbfc94 = 0;
  _DAT_01dbfc98 = 0;
  _DAT_01dbfc9c = 0;
  _DAT_01dbfca0 = 0;
  _DAT_01dbfca4 = 0;
  _DAT_01dbfca8 = 0;
  _DAT_01dbfcac = 0;
  _DAT_01dbfcb0 = 0;
  _DAT_01dbfcb4 = 0;
  _DAT_01dbfcb8 = 0;
  _DAT_01dbfcbc = 0;
  _DAT_01dbfcc0 = 0;
  _DAT_01dbfcc4 = 0;
  _DAT_01dbfcc8 = 0;
  _DAT_01dbfccc = 0;
  return;
}

