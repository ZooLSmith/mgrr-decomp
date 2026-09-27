// src/unsorted/unit_00855BA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00855BA0..00856470, 5 functions

#include "mgrr.h"

// 00855BA0  FUN_00855ba0  size=840  [run]
void __fastcall FUN_00855ba0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float unaff_ESI;
  float10 fVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined1 auStack_1ac [32];
  float fStack_18c;
  undefined1 local_160 [348];
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    param_1[0x248] = 0x42f00000;
    param_1[0x249] = 0;
    param_1[0x2b0] = 0;
    param_1[0x2b1] = 0;
    param_1[0x2b2] = 0x3e99999a;
    FUN_004039a0(7,param_1,0);
    if (param_1 + 0x280 != (int *)0x0) {
      FUN_00dffb20(param_1 + 0x280);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    FUN_00a9f3c0(param_1 + 0x125,1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar6 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar6 - (float)param_1[0x244]);
  fVar7 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar7 - (float)param_1[0x244]);
  if (fVar7 - (float)param_1[0x244] < 0.0) {
    param_1[0x249] = 0x40a00000;
  }
  if ((fVar6 - (float)param_1[0x244] < 0.0) || (iVar1 = FUN_00847ba0(), iVar1 == 0)) {
    FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(param_1[0x280] + 8))(0x3f800000,0,0);
    param_1[0x2ad] = 0x42700000;
    param_1[0x186] = 0;
    param_1[0x2ac] = 1;
  }
  D3DXVec3TransformNormal(&local_1b0,param_1 + 0x2b0,param_1 + 4);
  fVar6 = (float)param_1[0x244];
  param_1[0x14] = (int)((float)param_1[0x14] + fStack_1bc * fVar6);
  param_1[0x15] = (int)(fStack_1b8 * fVar6 + (float)param_1[0x15]);
  param_1[0x16] = (int)(fStack_1b4 * fVar6 + (float)param_1[0x16]);
  param_1[0x17] = (int)(local_1b0 * fVar6 + (float)param_1[0x17]);
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar5 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      iVar1 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      goto LAB_00855dcb;
    }
  }
  uVar3 = 0;
LAB_00855dcb:
  FUN_00a8e880(uVar3 + 0x40);
  D3DXMatrixInverse(auStack_1ac,0,param_1 + 4);
  D3DXVec3TransformNormal(&stack0xfffffe38,uVar3 + 0x40,&fStack_1b8);
  fVar6 = 0.04363323;
  fVar7 = 2.0;
  iVar1 = FUN_009c4bf0();
  if (iVar1 == 0) {
    fVar6 = 0.017453292;
    fVar7 = 5.0;
  }
  iVar1 = FUN_009c4bf0();
  if (iVar1 == 3) {
    fVar6 = 0.05235988;
    fVar7 = 2.0;
  }
  iVar1 = FUN_009c4bf0();
  if (iVar1 == 4) {
    fVar6 = 0.05235988;
    fVar7 = 1.5;
  }
  if (fVar7 < fStack_18c + unaff_ESI == (fVar7 == fStack_18c + unaff_ESI)) {
    return;
  }
  iVar1 = *param_1;
  fVar4 = (float10)FUN_00fdc1f0(0x393702d3,fVar6 * (float)param_1[0x244],0);
  (**(code **)(iVar1 + 0x308))((float)fVar4);
  return;
}

// 00855EF0  FUN_00855ef0  size=596  [run]
void __fastcall FUN_00855ef0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar3 = param_1[0x187];
  bVar2 = false;
  if (iVar3 == 0) {
    param_1[0x187] = 1;
    FUN_00a9f3c0(param_1 + 0x125,2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00854220(1,param_1 + 0x10,param_1 + 0x280);
    param_1[0x248] = 0x44ca8000;
    param_1[0x2b5] = 0;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    FUN_00eaa6e0(0x42200000,0);
    param_1[0x2ad] = 0x42200000;
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x186] = 0;
    param_1[0x2ac] = 1;
    (*pcVar1)();
    FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar6 = &DAT_01b35ab8;
    (**(code **)(*piVar4 + 4))(&DAT_01b35ab8);
    iVar3 = FUN_00dd6d80(puVar6);
    if ((iVar3 != 0) && (iVar3 = FUN_00847a60(), 1 < *(byte *)(iVar3 + 0x1784))) {
      bVar2 = true;
    }
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar6 = &DAT_01b35ab8;
    (**(code **)(*piVar4 + 4))(&DAT_01b35ab8);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 != 0) {
      iVar3 = param_1[0x129];
      iVar5 = FUN_00847a60();
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar5 + 0x1790);
      }
      else if (iVar3 == 1) {
        iVar3 = *(int *)(iVar5 + 0x1794);
      }
      else {
        if (iVar3 != 2) goto LAB_008560c4;
        iVar3 = *(int *)(iVar5 + 0x1798);
      }
      if (iVar3 != 0) {
        bVar2 = true;
      }
    }
  }
LAB_008560c4:
  if (param_1[0x2b5] != 0) {
    bVar2 = true;
  }
  if ((0.0 <= (float)param_1[0x248]) && (!bVar2)) {
    return;
  }
  FUN_00eaa6e0(0x42f00000,0);
  FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 00856150  FUN_00856150  size=426  [run]
void __fastcall FUN_00856150(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    FUN_00854130(3,param_1 + 0x280);
    param_1[0x248] = 0x43960000;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00847a60();
    if ((iVar3 != 0) && (iVar3 = FUN_00847a60(), 1 < *(byte *)(iVar3 + 0x178c))) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00a9f3c0(param_1 + 0x125,3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00854130(4,param_1 + 0x280);
  case 3:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x20);
      param_1[0x2ad] = 0x43340000;
      param_1[0x186] = 0;
      param_1[0x2ac] = 1;
      (*pcVar2)();
      FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 00856310  FUN_00856310  size=330  [run]
void __fastcall FUN_00856310(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    FUN_00854130(5,param_1 + 0x280);
    param_1[0x248] = 0x43960000;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00847a60();
    if ((iVar3 != 0) && (iVar3 = FUN_00847a60(), 1 < *(byte *)(iVar3 + 0x178c))) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00854130(6,param_1 + 0x280);
    param_1[0x2ad] = 0x43340000;
    param_1[0x186] = 0;
    param_1[0x2ac] = 1;
  case 3:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x20);
      param_1[0x2ad] = 0x43340000;
      param_1[0x186] = 0;
      param_1[0x2ac] = 1;
      (*pcVar2)();
      FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 00856470  FUN_00856470  size=177  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00856470(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00a92fb0();
  fVar3 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0xae8) - _DAT_01be942c;
  *(float *)(param_1 + 0xae8) = fVar1;
  if (fVar1 < -1.0) {
    *(undefined4 *)(param_1 + 0xae8) = 0xbf800000;
  }
  BehaviorAppBase::vf48();
  iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xad4));
  if ((((iVar2 != 0) && (iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xad8)), iVar2 != 0)) &&
      (iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xadc)), iVar2 != 0)) &&
     (iVar2 = FUN_00c52a30(*(undefined4 *)(param_1 + 0xae0)), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0xaf4);
  }
  FUN_008543d0();
  return;
}

