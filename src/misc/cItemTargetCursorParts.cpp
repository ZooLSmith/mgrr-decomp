// src/misc/cItemTargetCursorParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB2B0..00D30ED0, 5 functions

#include "mgrr.h"
#include "cItemTargetCursorParts.h"

// 00CBB2B0  cItemTargetCursorParts::vf08  size=86  [class]
void __fastcall cItemTargetCursorParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CE3990  cItemTargetCursorParts::vf00  size=63  [class]
undefined4 * __thiscall cItemTargetCursorParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D01450  cItemTargetCursorParts::vf14  size=808  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemTargetCursorParts::vf14(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 fVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_60 [4];
  undefined1 local_50 [76];
  
  fVar7 = (float10)*(float *)(param_1 + 0x40) * (float10)0.05;
  if ((float10)1 < fVar7) {
    fVar7 = (float10)1;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  fVar7 = (float10)1.2 - fVar7 * (float10)0.3;
  fVar1 = (float)fVar7;
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_00d0152a;
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
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else if (iVar3 != 1) {
    if (((iVar3 == 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (iVar3 = FUN_00cdf400(1), fVar7 = extraout_ST0, iVar3 != 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    goto LAB_00d0152a;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
      fVar7 = (float10)fVar1;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
LAB_00d0152a:
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((float10)*(float *)(param_1 + 0x44) <= fVar7) {
      if (((float10)*(float *)(param_1 + 0x44) < fVar7) &&
         (fVar8 = (float10)*(float *)(param_1 + 0x44) + (float10)_DAT_018b7a50,
         *(float *)(param_1 + 0x44) = (float)fVar8, fVar7 < fVar8)) {
        *(float *)(param_1 + 0x44) = (float)fVar7;
      }
    }
    else {
      fVar8 = (float10)*(float *)(param_1 + 0x44) - (float10)_DAT_018b7a50;
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
    if (((DAT_01bea090 & 1) == 0) && (iVar3 = FUN_00d9fa80(&uStack_70,param_1 + 0x30), iVar3 != 0))
    {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = uStack_70;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = uStack_6c;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)(*(int *)(param_1 + 0x2c) == 3);
      }
    }
    else if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x50) != iVar3) {
      if (iVar3 == -1) {
        iVar3 = *(int *)(param_1 + 0x18);
        if (((iVar3 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar3 + 0x80))) &&
           (iVar3 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x3b0) = 0;
        }
      }
      else {
        _sprintf_s(&stack0xffffff80,0x10,"%d",iVar3);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x20),&stack0xffffff80);
        iVar3 = *(int *)(param_1 + 0x18);
        if (((iVar3 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar3 + 0x80))) &&
           (iVar3 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x3b0) = 1;
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x54) != iVar3) {
      if (iVar3 < 0) {
        puVar4 = (undefined *)0x0;
      }
      else if (iVar3 < 0x9c) {
        puVar4 = (&PTR_s_HUD_ITEM_NAME_S_0001_018b23d8)[iVar3 * 3];
      }
      else {
        puVar4 = (undefined *)0x0;
      }
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),puVar4,0,0xffffffff);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x1c);
    if ((((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= uVar2)) ||
        ((iVar3 = uVar2 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 == 0 ||
         (*(int *)(iVar3 + 0x3b0) == 0)))) && ((DAT_01bea090 & 0x40) != 0)) {
      FUN_00ccdf90(uVar2,1,3);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(uint *)(iVar3 + 0x3b0) = DAT_01bea090 >> 6 & 1;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// 00D30E40  cItemTargetCursorParts::cItemTargetCursorParts  size=129  [class]
undefined4 * cItemTargetCursorParts::cItemTargetCursorParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x60,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x10] = 0;
    puVar1[2] = 0;
    puVar1[0x11] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x12] = 0xffffffff;
    puVar1[0x15] = 0xffffffff;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[3] = "cItemTargetCursorParts";
    puVar1[2] = 7;
    uVar2 = FUN_00d29960(0x27);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D30ED0  FUN_00d30ed0  size=605  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d30ed0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  
  uVar13 = 0;
  do {
    param_1 = param_1 + 1;
    if (*(int *)((int)&DAT_01dbfb90 + uVar13) == 0) {
      *(undefined4 *)((int)&DAT_01dbfbe0 + uVar13) = 0;
    }
    iVar12 = *(int *)((int)&DAT_01dbfbe0 + uVar13);
    if (iVar12 != 0) {
      if ((*(char *)(iVar12 + 0x470) == '\0') && (*(int *)(iVar12 + 0x488) != 0)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      iVar12 = FUN_00a12210(*(undefined4 *)((int)&DAT_01dbfc30 + uVar13));
      if (iVar12 == 0) {
        iVar12 = *(int *)((int)&DAT_01dbfbe0 + uVar13);
      }
      fVar1 = *(float *)(iVar12 + 0x40);
      fVar2 = *(float *)(iVar12 + 0x44);
      fVar3 = *(float *)(iVar12 + 0x48);
      uVar4 = *(undefined4 *)(iVar12 + 0x4c);
      fVar8 = fVar1 - DAT_01bea380;
      fVar10 = fVar2 - DAT_01bea384;
      fVar9 = fVar3 - DAT_01bea388;
      fVar8 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
      if (fVar8 <= 20.0) {
        if (*param_1 == 0) {
          iVar12 = cItemTargetCursorParts::cItemTargetCursorParts();
          *param_1 = iVar12;
        }
        iVar12 = *param_1;
        uVar5 = *(undefined4 *)((int)&DAT_01dc0e20 + uVar13);
        uVar6 = *(undefined4 *)((int)&DAT_01dc0e70 + uVar13);
        if (*(uint *)(iVar12 + 0x4c) < 0x9c) {
          *(undefined4 *)(iVar12 + 0x28) = 1;
          if (bVar11) {
            *(uint *)(iVar12 + 0x2c) =
                 (uint)(*(int *)(iVar12 + 0x2c) != 3) + *(int *)(iVar12 + 0x2c);
          }
          else {
            *(undefined4 *)(iVar12 + 0x2c) = 0;
          }
          *(float *)(iVar12 + 0x30) = fVar1;
          *(float *)(iVar12 + 0x34) = fVar2;
          *(float *)(iVar12 + 0x38) = fVar3;
          *(undefined4 *)(iVar12 + 0x3c) = uVar4;
          *(undefined4 *)(iVar12 + 0x48) = uVar5;
          *(undefined4 *)(iVar12 + 0x4c) = uVar6;
          *(float *)(iVar12 + 0x40) = fVar8;
        }
      }
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
      puVar7 = (undefined4 *)*param_1;
      if ((puVar7[9] == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
        *param_1 = 0;
      }
    }
    uVar13 = uVar13 + 4;
  } while (uVar13 < 0x50);
  DAT_01dbfb90 = 0;
  DAT_01dbfb94 = 0;
  _DAT_01dbfb98 = 0;
  _DAT_01dbfb9c = 0;
  _DAT_01dbfba0 = 0;
  _DAT_01dbfba4 = 0;
  _DAT_01dbfba8 = 0;
  _DAT_01dbfbac = 0;
  _DAT_01dbfbb0 = 0;
  _DAT_01dbfbb4 = 0;
  _DAT_01dbfbb8 = 0;
  _DAT_01dbfbbc = 0;
  _DAT_01dbfbc0 = 0;
  _DAT_01dbfbc4 = 0;
  _DAT_01dbfbc8 = 0;
  _DAT_01dbfbcc = 0;
  _DAT_01dbfbd0 = 0;
  _DAT_01dbfbd4 = 0;
  _DAT_01dbfbd8 = 0;
  _DAT_01dbfbdc = 0;
  DAT_01dbfc30 = 0;
  DAT_01dbfc34 = 0;
  _DAT_01dbfc38 = 0;
  _DAT_01dbfc3c = 0;
  _DAT_01dbfc40 = 0;
  _DAT_01dbfc44 = 0;
  _DAT_01dbfc48 = 0;
  _DAT_01dbfc4c = 0;
  _DAT_01dbfc50 = 0;
  _DAT_01dbfc54 = 0;
  _DAT_01dbfc58 = 0;
  _DAT_01dbfc5c = 0;
  _DAT_01dbfc60 = 0;
  _DAT_01dbfc64 = 0;
  _DAT_01dbfc68 = 0;
  _DAT_01dbfc6c = 0;
  _DAT_01dbfc70 = 0;
  _DAT_01dbfc74 = 0;
  _DAT_01dbfc78 = 0;
  _DAT_01dbfc7c = 0;
  return;
}

