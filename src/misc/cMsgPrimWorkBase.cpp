// src/misc/cMsgPrimWorkBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCCB80..00CCCCD0, 3 functions

#include "mgrr.h"
#include "cMsgPrimWorkBase.h"

// 00CCCB80  cMsgPrimWorkBase::cMsgPrimWorkBase  size=223  [class]
undefined4 * __fastcall cMsgPrimWorkBase::cMsgPrimWorkBase(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x16] = 0;
  param_1[0x28] = 0;
  param_1[0x13] = 0;
  param_1[0x29] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar1 = FUN_00f98a90();
  param_1[0x3b] = -0.5 / (float)iVar1;
  iVar1 = FUN_00f98aa0();
  param_1[0x3f] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 1;
  param_1[0x3c] = -0.5 / (float)iVar1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0x3f800000;
  param_1[0x41] = 0x3f800000;
  param_1[0x42] = 0x3f800000;
  param_1[0x43] = 0x3f800000;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0xffffffff;
  return param_1;
}

// 00CCCC60  cMsgPrimWorkBase::vf00  size=47  [class]
undefined4 * __thiscall cMsgPrimWorkBase::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCCCD0  cMsgPrimWorkBase::draw  size=1506  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cMsgPrimWorkBase::draw(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  bool bVar11;
  int iStack_5c;
  undefined *local_58;
  undefined *local_54;
  undefined4 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [48];
  
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  local_58 = (undefined *)param_1[0x29];
  bVar11 = false;
  local_54 = (undefined *)0x0;
  bVar1 = false;
  if (param_1[0x39] != 0) {
    if (param_1[0x14] != 0) {
      FUN_00f99d30();
    }
    if (param_1[0x15] != 0) {
      FUN_00f99a40();
    }
    param_1[0x39] = 0;
  }
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (0 < iVar4) {
    FUN_00f9d760(param_1[0x4b]);
    iVar4 = param_1[0x49];
    if (iVar4 != param_1[0x4a]) {
      if (param_1[0x48] == 0) {
        puVar5 = DAT_01f6c7a8;
        if ((iVar4 != 2) && (iVar4 != 3)) {
          if (iVar4 == 1) {
            puVar5 = &DAT_01dc2b80;
          }
          else {
            puVar5 = &DAT_01dc2c80;
          }
        }
      }
      else {
        puVar5 = &DAT_01dc2c40;
      }
      FUN_00fa1ed0(puVar5);
      iVar4 = param_1[0x49];
      param_1[0x4a] = iVar4;
    }
    switch(param_1[0x28]) {
    case 2:
    case 4:
      local_58 = DAT_01b83bdc;
      break;
    case 5:
      local_54 = DAT_01b83bdc;
      break;
    case 7:
    case 9:
      local_58 = &DAT_01be0bb0;
      break;
    case 10:
      local_54 = &DAT_01be0bb0;
    }
    if (((iVar4 != 3) && (param_1[0x47] != 1)) && (local_58 != (undefined *)0x0)) {
      puVar5 = (undefined *)FUN_00f98ed0(0);
      bVar11 = puVar5 != local_58;
      if (bVar11) {
        FUN_00f9bf20(local_30);
        FUN_00a28210(local_58,0,0,1);
      }
    }
    if (((param_1[0x28] == 0) && (local_58 == DAT_01b83bdc)) && (param_1[0x38] != 0)) {
      FUN_00f98b60(0,0x3f800000,0,1);
      bVar1 = true;
    }
    iStack_5c = 0;
    piVar10 = param_1 + 0x2c;
    do {
      iVar4 = param_1[0x13];
      iVar6 = FUN_00f96e50();
      if (((iVar6 != 0) && (iVar6 = FUN_00f96f20(), iVar6 != 0)) && (piVar10[-2] != 3)) {
        fStack_40 = (float)piVar10[1];
        fStack_3c = (float)piVar10[2];
        fStack_38 = (float)piVar10[3];
        fStack_34 = (float)piVar10[4];
        param_1[0x3a] = piVar10[-2];
        if (piVar10[-1] != 2) {
          fStack_40 = _DAT_01dc2050 * fStack_40;
          fStack_3c = _DAT_01dc2054 * fStack_3c;
          fStack_38 = _DAT_01dc2058 * fStack_38;
          fStack_34 = fStack_34 * _DAT_01dc205c;
        }
        fStack_40 = (float)param_1[0x40] * fStack_40;
        fStack_3c = (float)param_1[0x41] * fStack_3c;
        fStack_38 = fStack_38 * (float)param_1[0x42];
        fStack_34 = fStack_34 * (float)param_1[0x43];
        FUN_00f9d850(1);
        FUN_00f9d890(8,1);
        switch(param_1[0x28]) {
        case 2:
        case 7:
          FUN_00f9da90(0);
          FUN_00f9d8f0(1);
          FUN_00f9d970(5,6,1);
          FUN_00f9da00(5,6,1);
          break;
        default:
          switch(piVar10[-1]) {
          case 0:
            FUN_00f9d8f0(1);
            FUN_00f9d970(5,6,1);
            break;
          case 1:
            FUN_00f9d8f0(1);
            FUN_00f9d970(5,2,1);
            break;
          case 2:
            FUN_00f9d8f0(1);
            FUN_00f9d970(5,2,3);
            break;
          case 3:
            FUN_00f9d970(5,6,1);
            iVar4 = 1;
            break;
          case 4:
            FUN_00f9d970(5,6,1);
            iVar4 = 3;
            break;
          case 5:
            FUN_00f9d970(5,6,1);
            iVar4 = 4;
          }
          if ((local_58 != (undefined *)param_1[0x29]) || (bVar1)) {
            FUN_00f9d970(2,1,1);
            FUN_00f9da00(2,7,5);
          }
          else {
            FUN_00f9da00(5,7,1);
          }
          break;
        case 4:
        case 9:
          FUN_00f9da90(0);
          FUN_00f9d8f0(1);
          FUN_00f9d970(5,6,1);
          FUN_00f9da00(5,2,3);
        }
        if (param_1[0x16] == 0) {
          puVar7 = (undefined4 *)FUN_00f9e370(0x5864a24f);
          if ((int *)*puVar7 == (int *)0x0) {
            if ((int *)puVar7[1] == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)puVar7[1];
            }
          }
          else {
            iVar6 = *(int *)*puVar7;
          }
          param_1[0x16] = iVar6;
        }
        if (local_54 == (undefined *)0x0) {
          piVar8 = (int *)FUN_00f9e370(0x5864a24f);
          if ((undefined4 *)*piVar8 == (undefined4 *)0x0) {
            if ((undefined4 *)piVar8[1] == (undefined4 *)0x0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined4 *)piVar8[1];
            }
          }
          else {
            uVar9 = *(undefined4 *)*piVar8;
          }
        }
        else {
          uVar9 = FUN_00fa0740(0);
        }
        switch(iVar4) {
        case 1:
          FUN_00cb0b30(iStack_5c,&fStack_40,(int)(short)*piVar10,uVar9);
          break;
        default:
          FUN_00cb0a50(iStack_5c,&fStack_40,(int)(short)*piVar10,uVar9);
          break;
        case 3:
          FUN_00cb0c30(iStack_5c,&fStack_40,(int)(short)*piVar10,uVar9);
          break;
        case 4:
          FUN_00cb0d30(iStack_5c,&fStack_40,(int)(short)*piVar10,uVar9);
          break;
        case 5:
          FUN_00cb0e30(iStack_5c,&fStack_40,(int)(short)*piVar10,uVar9);
          break;
        case 7:
          FUN_00cb0fa0(iStack_5c,&fStack_40,(int)(short)*piVar10,uVar9);
        }
        if (param_1[0x28] == 0xb) {
          uStack_48 = (undefined4)(longlong)ROUND(_DAT_01dc2cfc);
          uVar9 = uStack_48;
          uStack_48 = (undefined4)(longlong)ROUND(_DAT_01dc2cf8);
          uVar2 = uStack_48;
          uStack_48 = (undefined4)(longlong)ROUND(_DAT_01dc2cf4);
          uVar3 = uStack_48;
          uStack_48 = (undefined4)(longlong)ROUND(_DAT_01dc2cf0);
          thunk_FUN_00f98510(uStack_48,uVar3,uVar2,uVar9);
        }
        FUN_00f98f80(&DAT_01dc417c);
        FUN_00f99010(0,param_1 + 1);
        FUN_00f99090(param_1 + 0xb);
        uVar9 = (**(code **)(*param_1 + 0xc))();
        uVar9 = (**(code **)(*param_1 + 8))(uVar9);
        FUN_00f9f6d0(uVar9);
        if (param_1[0x28] == 0xb) {
          FUN_00f98c00();
        }
      }
      iStack_5c = iStack_5c + 1;
      piVar10 = piVar10 + 7;
    } while (iStack_5c < 2);
    switch(param_1[0x28]) {
    case 2:
    case 4:
    case 7:
    case 9:
      FUN_00f9da90(1);
    }
    if (bVar11) {
      thunk_FUN_00fa5730(local_30,1);
    }
  }
  Hw::cRenderTargetInfo::~cRenderTargetInfo();
  return;
}

