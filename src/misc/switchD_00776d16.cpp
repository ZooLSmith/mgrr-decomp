// src/misc/switchD_00776d16.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00776180..00776AE0, 3 functions

#include "mgrr.h"

// 00776180  FUN_00776180  size=473  [callgraph]
void __fastcall FUN_00776180(int param_1)

{
  if (((*(uint *)(param_1 + 0x11f4) & 0x800000) != 0) && (*(int *)(param_1 + 0x618) == 2)) {
    FUN_00763e70();
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_00771bb0();
    break;
  case 1:
    FUN_00766c40();
    break;
  case 2:
    FUN_00766cf0();
    break;
  case 3:
    FUN_00766ef0();
    break;
  case 4:
    FUN_00767090();
    break;
  case 5:
    FUN_0075eca0();
    break;
  case 6:
    FUN_007670d0();
    break;
  case 7:
    FUN_0075ed40();
    break;
  case 0xd:
    FUN_0075edf0();
    break;
  case 0xe:
    FUN_0075efd0();
    break;
  case 0xf:
    FUN_007676c0();
    break;
  case 0x10:
    FUN_0075f3c0();
    break;
  case 0x11:
    FUN_0075f400();
    break;
  case 0x12:
    FUN_0075f440();
    break;
  case 0x15:
    FUN_007611b0();
    break;
  case 0x1b:
    FUN_00767ea0();
    break;
  case 0x1d:
    FUN_00761420();
    break;
  case 0x1e:
    FUN_00761830();
    break;
  case 0x26:
    FUN_00773740();
    break;
  case 0x2b:
    FUN_00775ed0();
    break;
  case 0x47:
    FUN_00759100();
    break;
  case 0x48:
    FUN_00761d50();
    break;
  case 0x49:
    FUN_00761e40();
    break;
  case 0x4d:
    FUN_00767890();
    break;
  case 0x4e:
    FUN_00771ef0();
    break;
  case 0x4f:
    FUN_00767920();
    break;
  case 0x54:
    FUN_00771f70();
    break;
  case 0x55:
    FUN_0075f890();
    break;
  case 0x56:
    FUN_00751c10();
    break;
  case 0x59:
    FUN_00767d60();
    break;
  case 0x5e:
    FUN_007795c0();
    break;
  case 0x5f:
    FUN_007795d0();
    break;
  case 0x60:
    FUN_0077a760();
    break;
  case 0x62:
    FUN_00765310();
    break;
  case 100:
    FUN_007654c0();
    break;
  case 0x66:
    FUN_00765600();
    break;
  case 0x68:
    FUN_00765670();
    break;
  case 0x6c:
    FUN_00765860();
    break;
  case 0x7c:
    FUN_00762fc0();
    break;
  case 0x7e:
    FUN_00775fb0();
    break;
  case 0x7f:
    FUN_00763520();
    break;
  case 0x80:
    FUN_00763550();
    break;
  case 0x81:
    FUN_00763710();
    break;
  case 0xab:
    FUN_007795e0();
    break;
  case 0xac:
    FUN_007795f0();
  }
  if (*(int *)(param_1 + 0x1750) != 0) {
    FUN_007517c0();
    return;
  }
  return;
}

// 007764D0  FUN_007764d0  size=813  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0075f946) */
/* WARNING: Removing unreachable block (ram,0x0075f973) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007764d0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (((param_1[0x47d] & 0x800000U) != 0) && (param_1[0x186] == 2)) {
    FUN_00774d20();
    return;
  }
  switch(param_1[0x186]) {
  case 0:
    FUN_007518c0();
    return;
  case 1:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x7;
      puStack_24 = (undefined1 *)0x77526f;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
      param_1[0x250] = 0;
      param_1[0x4f9] = 0;
      param_1[0x4fa] = -1;
      param_1[0x47d] = param_1[0x47d] | 0x100;
      param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
    }
    else if (param_1[0x187] == 1) {
      iVar8 = FUN_007725e0();
      if (iVar8 == 0) {
        param_1[0x47d] = param_1[0x47d] | 0x80;
      }
      else {
        param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
      }
      FUN_00ac80a0();
      return;
    }
    return;
  case 2:
    FUN_007752c0();
    return;
  case 3:
    FUN_00775470();
    return;
  case 4:
    FUN_007756d0();
    return;
  case 5:
    FUN_007758c0();
    return;
  case 6:
    FUN_007671a0();
    return;
  case 7:
    FUN_0075ed80();
    return;
  case 8:
    FUN_007558b0();
    return;
  case 9:
    FUN_007559b0();
    return;
  case 10:
    FUN_00755ab0();
    return;
  case 0xb:
    FUN_00755b80();
    return;
  case 0xc:
    FUN_00755c50();
    return;
  case 0xd:
    FUN_00755d40();
    return;
  case 0xe:
    FUN_0075f030();
    return;
  case 0xf:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x3e4ccccd;
      puStack_24 = (undefined1 *)0x0;
      uStack_28 = 8;
      uStack_2c = 0x75f2f9;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      iVar8 = FUN_00c19c30();
      if (((iVar8 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
         ((iVar8 == param_1[0x13c] ||
          (iVar8 = FUN_00a7c8a0(),
          0.0 < ((float)param_1[0x12] - (float)param_1[0x46e]) *
                (*(float *)(iVar8 + 0x40) - (float)param_1[0x46c]) -
                ((float)param_1[0x10] - (float)param_1[0x46c]) *
                (*(float *)(iVar8 + 0x48) - (float)param_1[0x46e]))))) {
        iVar8 = 0x3f860a92;
      }
      else {
        iVar8 = -0x4079f56e;
      }
      param_1[0x248] = iVar8;
      param_1[0x249] = 0;
      param_1[0x24a] = param_1[0x469];
      if (param_1[0x128] == 5) {
        param_1[0x47d] = param_1[0x47d] | 0x40;
      }
      RayCastManager::getWork();
    }
    else if (param_1[0x187] == 1) {
      FUN_00a8e880();
      iVar8 = FUN_00a8e9b0();
      param_1[0x24b] = (int)(*(float *)(iVar8 + 4) + (float)param_1[0x248]);
      FUN_00ddba30();
      fVar9 = (float10)FUN_00ddba30();
      param_1[0x25] = (int)(float)fVar9;
      FUN_00ac80a0();
      return;
    }
    return;
  case 0x10:
    FUN_00755ef0();
    return;
  case 0x11:
    FUN_00755fc0();
    return;
  case 0x12:
    FUN_00756090();
    return;
  case 0x13:
  case 0x38:
    FUN_00752c80();
    return;
  case 0x14:
    FUN_00760b70();
    return;
  case 0x15:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5;
      puStack_24 = (undefined1 *)0x7612a2;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (120.0 < (float)param_1[0x244] + fVar1) {
      FUN_0075fad0();
    }
    return;
  case 0x16:
    FUN_007612f0();
    return;
  case 0x17:
    FUN_00772ce0();
    return;
  case 0x18:
    FUN_00758350();
    return;
  case 0x19:
    FUN_00751cc0();
    return;
  case 0x1a:
    FUN_00775bf0();
    return;
  case 0x1b:
    if ((param_1[0x4e7] == 0) || (iVar8 = FUN_00a81330(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_00a7c8a0();
    }
    if (param_1[0x187] == 0) {
      if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x007565d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x3f800000;
      puStack_24 = (undefined1 *)0x3e4ccccd;
      uStack_28 = 0;
      uStack_2c = 8;
      puStack_30 = (undefined1 *)0x756604;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      puStack_1c = (undefined1 *)0x756623;
      iVar3 = FUN_00c19c30();
      if ((((iVar3 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) || (iVar3 == param_1[0x13c])) ||
         (iVar3 = FUN_00a7c8a0(),
         0.0 < ((float)param_1[0x12] - (float)param_1[0x46e]) *
               (*(float *)(iVar3 + 0x40) - *(float *)(iVar8 + 0x40)) -
               ((float)param_1[0x10] - (float)param_1[0x46c]) *
               (*(float *)(iVar3 + 0x48) - *(float *)(iVar8 + 0x48)))) {
        iVar8 = 0x3f860a92;
      }
      else {
        iVar8 = -0x4079f56e;
      }
      param_1[0x248] = iVar8;
      param_1[0x249] = 0;
      param_1[0x24a] = param_1[0x469];
      param_1[0x24b] = 0x41200000;
    }
    else if (param_1[0x187] == 1) {
      if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0075655f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00a8e880();
      iVar8 = FUN_00a8e9b0();
      param_1[0x24b] = (int)(*(float *)(iVar8 + 4) + (float)param_1[0x248]);
      FUN_00ddba30();
      fVar9 = (float10)FUN_00ddba30();
      param_1[0x25] = (int)(float)fVar9;
      FUN_00ac80a0();
      return;
    }
    return;
  case 0x1c:
    FUN_007566b0();
    return;
  case 0x1d:
    FUN_007614a0();
    return;
  case 0x1e:
    FUN_007618c0();
    return;
  case 0x1f:
    FUN_00757fc0();
    return;
  case 0x20:
    FUN_00772870();
    return;
  case 0x21:
    FUN_00752540();
    return;
  case 0x22:
    FUN_00752590();
    return;
  case 0x23:
    FUN_00758120();
    return;
  case 0x24:
    FUN_007581a0();
    return;
  case 0x25:
    FUN_00758c40();
    return;
  case 0x26:
    FUN_00773800();
    return;
  case 0x27:
    FUN_00773eb0();
    return;
  case 0x28:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
      param_1[0x139] = 1;
      FUN_0076a070();
      FUN_007594b0();
      FUN_0075fad0();
    }
    return;
  case 0x29:
    FUN_007585f0();
    return;
  case 0x2a:
    FUN_00772db0();
    return;
  case 0x2b:
    FUN_00758a30();
    return;
  default:
    return;
  case 0x2d:
    FUN_00759660();
    return;
  case 0x2e:
    FUN_00759760();
    return;
  case 0x2f:
    FUN_00759860();
    return;
  case 0x30:
    break;
  case 0x31:
    FUN_007624a0();
    return;
  case 0x32:
    FUN_00759c30();
    return;
  case 0x33:
    FUN_00759e70();
    return;
  case 0x34:
    FUN_0075a0c0();
    return;
  case 0x35:
    iVar8 = param_1[0x187];
    if (iVar8 == 0) {
      FUN_007593a0();
      FUN_00757a80();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x81;
      puStack_24 = (undefined1 *)0x7627f8;
      FUN_00aa4080();
      param_1[0x478] = param_1[0x478] + 1;
      param_1[0x248] = 0x43960000;
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      FUN_00ac80a0();
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (0.0 < fVar1 - (float)param_1[0x244]) {
        return;
      }
      FUN_0075fad0();
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      if (param_1[0x478] < 2) {
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = (undefined1 *)0x2b;
        puStack_24 = (undefined1 *)0x762868;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00756fd0();
      param_1[0x187] = 3;
    }
    return;
  case 0x36:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x2c;
      puStack_24 = (undefined1 *)0x752b35;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00752b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x37:
    FUN_00752b80();
    return;
  case 0x39:
    FUN_00762890();
    return;
  case 0x3a:
    FUN_0075a1d0();
    return;
  case 0x3b:
    FUN_0076a210();
    return;
  case 0x3c:
    FUN_0076a560();
    return;
  case 0x3d:
    FUN_0076a6b0();
    return;
  case 0x3e:
    if (param_1[0x187] == 0) {
      FUN_007593a0();
      FUN_00757a80();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
      FUN_00769fa0();
      puStack_20 = (undefined1 *)0x31;
      if ((float)param_1[0x245] < 0.0) {
        puStack_20 = (undefined1 *)0x30;
      }
      puStack_1c = (undefined1 *)0x0;
      puStack_24 = (undefined1 *)0x76a970;
      FUN_00aa4080();
      param_1[0x248] = 0x3fa66666;
      (**(code **)(*param_1 + 0x1f8))();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00a8e520();
    FUN_00a96030();
    iVar8 = FUN_00a8c760();
    if (iVar8 != 0) {
      param_1[0x188] = param_1[0x188] + 1;
    }
    FUN_00ac80a0();
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar8 = FUN_00a94ce0();
    if ((iVar8 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_0076a070();
      FUN_0075fad0();
    }
    return;
  case 0x3f:
    FUN_0076aa40();
    return;
  case 0x40:
    FUN_0076ad00();
    return;
  case 0x41:
    FUN_0076af40();
    return;
  case 0x42:
    FUN_0076b180();
    return;
  case 0x43:
    FUN_0076b2d0();
    return;
  case 0x44:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5;
      puStack_24 = (undefined1 *)0x76b432;
      FUN_00aa4120();
      FUN_00769fa0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x41f00000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_0076a070();
      FUN_0075fad0();
      param_1[0x2a] = 0;
    }
    return;
  case 0x45:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x83;
      puStack_24 = (undefined1 *)0x76b4e8;
      FUN_00aa4120();
      FUN_00769fa0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x41f00000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_0076a070();
      FUN_0075fad0();
    }
    return;
  case 0x46:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
      param_1[0x248] = 0x40000000;
      param_1[0x249] = 0x42700000;
    }
    else if (param_1[0x187] == 1) {
      if ((param_1[0x1af] == 0) &&
         (fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668,
         param_1[0x248] = (int)fVar1, fVar1 < 0.0)) {
        param_1[0x1af] = 1;
      }
      fVar1 = (float)param_1[0x249] - (float)param_1[0x244];
      param_1[0x249] = (int)fVar1;
      if ((fVar1 < 0.0 != (fVar1 == 0.0)) && (iVar8 = thunk_FUN_00e58ed0(), iVar8 == 0)) {
        FUN_00a805f0();
        return;
      }
    }
    return;
  case 0x47:
    iVar8 = FUN_00a81330();
    if (iVar8 != 0) {
      FUN_00a7c8a0();
    }
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x0;
      puStack_24 = (undefined1 *)0x4d;
      uStack_28 = 0x761d09;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00759080();
    }
    else if (param_1[0x187] != 1) {
      FUN_00752680();
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      FUN_0075fad0();
    }
    FUN_00752680();
    return;
  case 0x48:
    FUN_007527e0();
    return;
  case 0x49:
    FUN_00752880();
    return;
  case 0x4a:
    FUN_00759160();
    return;
  case 0x4b:
    FUN_00761f30();
    return;
  case 0x4c:
    FUN_007742b0();
    return;
  case 0x4d:
    FUN_00771d80();
    return;
  case 0x4e:
    FUN_0075f480();
    return;
  case 0x4f:
    FUN_00767990();
    return;
  case 0x50:
    FUN_0075f620();
    return;
  case 0x51:
    FUN_00767bf0();
    return;
  case 0x52:
    FUN_00756160();
    return;
  case 0x53:
    FUN_00751a60();
    return;
  case 0x54:
    FUN_00751bd0();
    return;
  case 0x55:
    FUN_00775a90();
    return;
  case 0x56:
    FUN_00751c50();
    return;
  case 0x57:
    FUN_007720e0();
    return;
  case 0x58:
    iVar8 = param_1[0x187];
    if (iVar8 == 0) {
      FUN_00aa9280();
      param_1[600] = param_1[0x2e3];
      param_1[0x259] = param_1[0x2e4];
      param_1[0x25a] = param_1[0x2e5];
      param_1[0x25b] = 0x3f800000;
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      DAT_01dd0814 = (DAT_01dd0814 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
      iVar8 = FUN_00756810();
      if (iVar8 == 0) {
        return;
      }
      FUN_008e5c50();
                    /* WARNING: Could not recover jumptable at 0x0075f9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00ac80a0();
    puStack_1c = (undefined1 *)0x75fa5a;
    FUN_007515a0();
    fVar1 = ((float)param_1[0x25a] - (float)param_1[0x12]) *
            ((float)param_1[0x25a] - (float)param_1[0x12]) +
            ((float)param_1[600] - (float)param_1[0x10]) *
            ((float)param_1[600] - (float)param_1[0x10]);
    if (fVar1 < 2.25 != (fVar1 == 2.25)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = *(int *)(param_1[0x1d9] + 0x110);
      FUN_008e5c50();
    }
    return;
  case 0x59:
    FUN_00772520();
    return;
  case 0x5a:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    return;
  case 0x5b:
    FUN_0075e530();
    return;
  case 0x5c:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    return;
  case 0x5d:
    FUN_0075e590();
    return;
  case 0x5e:
    FUN_0077f4b0();
    return;
  case 0x5f:
    FUN_0077f890();
    return;
  case 0x60:
    FUN_007813c0();
    return;
  case 0x61:
    FUN_0075d180();
    return;
  case 0x62:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5c;
      puStack_24 = (undefined1 *)0x753fa2;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    FUN_00ac80a0();
    return;
  case 99:
    FUN_0075d2c0();
    return;
  case 100:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5e;
      puStack_24 = (undefined1 *)0x754032;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_007515a0();
    FUN_00ac80a0();
    return;
  case 0x65:
    FUN_0075d400();
    return;
  case 0x66:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x60;
      puStack_24 = (undefined1 *)0x7540d5;
      FUN_00aa4080();
      FUN_00a8d280();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0075410d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x67:
    FUN_0075d560();
    return;
  case 0x68:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x62;
      puStack_24 = (undefined1 *)0x754165;
      FUN_00aa4080();
      FUN_00a8d280();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0075419d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x69:
    FUN_0075d6c0();
    return;
  case 0x6a:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x64;
      puStack_24 = (undefined1 *)0x754205;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00754236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x6b:
    FUN_007656e0();
    return;
  case 0x6c:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x66;
      puStack_24 = (undefined1 *)0x765905;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a8c760();
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 0x220))();
    }
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      FUN_0075fad0();
    }
    return;
  case 0x6d:
    FUN_0075d820();
    return;
  case 0x6e:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x68;
      puStack_24 = (undefined1 *)0x7542b5;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x007542e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x6f:
    FUN_0075d980();
    return;
  case 0x70:
    FUN_00754310();
    return;
  case 0x71:
    FUN_0076bfb0();
    return;
  case 0x72:
    iVar8 = FUN_00a81330();
    piVar4 = (int *)0x0;
    if (iVar8 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
    }
    switch(param_1[0x187]) {
    case 0:
      FUN_008e3c10();
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x3f800000;
      puStack_24 = (undefined1 *)0x3e4ccccd;
      uStack_28 = 0;
      uStack_2c = 5;
      puStack_30 = (undefined1 *)0x76c192;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
    case 1:
      (**(code **)(*param_1 + 0x220))();
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x76c1cb;
      FUN_00ac80a0();
      if (piVar4 != (int *)0x0) {
        puStack_1c = (undefined1 *)0x76c1db;
        FUN_00a92f90();
        puStack_1c = (undefined1 *)0x76c1e4;
        iVar3 = FUN_00e26e90();
        if (iVar3 != 0) {
          puStack_1c = (undefined1 *)0x0;
          puStack_20 = (undefined1 *)0x76c1f9;
          fVar9 = (float10)FUN_00e36970();
          if ((float10)0.5 <= fVar9) {
            puStack_1c = (undefined1 *)0x76c211;
            FUN_00756fd0();
            param_1[0x542] = -0x3e100000;
            puStack_1c = (undefined1 *)0x3f800000;
            puStack_20 = (undefined1 *)0x0;
            puStack_24 = (undefined1 *)0x76c22c;
            FUN_00a92f90();
            puStack_24 = (undefined1 *)0x76c233;
            fVar9 = (float10)FUN_00407b40();
            puStack_20 = (undefined1 *)
                         (float)((float10)(float)param_1[0x542] * (float10)0.016666668 + fVar9);
            puStack_24 = (undefined1 *)0x8000000;
            uStack_28 = 0x3f800000;
            uStack_2c = 0;
            puStack_30 = (undefined1 *)0x0;
            uStack_38 = 0xd5;
            puStack_3c = (undefined1 *)0x76c267;
            iStack_34 = iVar8;
            FUN_00aa4520();
            puStack_1c = (undefined1 *)0x3f800000;
            puStack_20 = (undefined1 *)0x3f800000;
            puStack_24 = (undefined1 *)0x76c27a;
            FUN_00ac80a0();
            param_1[0x3a] = 0;
            param_1[0x39] = 0;
            param_1[0x38] = 0;
            param_1[0x37] = 0;
            param_1[0x35] = 0;
            param_1[0x34] = 0;
            param_1[0x33] = 0;
            param_1[0x32] = 0;
            param_1[0x30] = 0;
            param_1[0x2f] = 0;
            param_1[0x2e] = 0;
            param_1[0x2d] = 0;
            param_1[0x3b] = 0x3f800000;
            param_1[0x36] = 0x3f800000;
            param_1[0x31] = 0x3f800000;
            param_1[0x2c] = 0x3f800000;
            param_1[0x4b] = 0x3f800000;
            param_1[0x46] = 0x3f800000;
            param_1[0x41] = 0x3f800000;
            param_1[0x3c] = 0x3f800000;
            param_1[0x4a] = 0;
            param_1[0x49] = 0;
            param_1[0x48] = 0;
            param_1[0x47] = 0;
            param_1[0x45] = 0;
            param_1[0x44] = 0;
            param_1[0x43] = 0;
            param_1[0x42] = 0;
            param_1[0x40] = 0;
            param_1[0x3f] = 0;
            param_1[0x3e] = 0;
            param_1[0x3d] = 0;
            param_1[0x47d] = param_1[0x47d] & 0xff3fffff;
            iVar8 = *param_1;
            puStack_1c = (undefined1 *)0x76c356;
            puStack_1c = (undefined1 *)(**(code **)(*piVar4 + 0x84))();
            puStack_20 = (undefined1 *)0x76c360;
            puStack_20 = (undefined1 *)(**(code **)(*piVar4 + 0x68))();
            puStack_24 = (undefined1 *)0x76c368;
            (**(code **)(iVar8 + 0x7c))();
            param_1[0x187] = param_1[0x187] + 1;
          }
        }
      }
      break;
    case 2:
      (**(code **)(*param_1 + 0x220))();
      piVar7 = (int *)(**(code **)(*piVar4 + 0x68))();
      param_1[0x14] = *piVar7;
      param_1[0x15] = piVar7[1];
      param_1[0x16] = piVar7[2];
      param_1[0x17] = piVar7[3];
      piVar4 = (int *)(**(code **)(*piVar4 + 0x84))();
      param_1[0x24] = *piVar4;
      param_1[0x25] = piVar4[1];
      param_1[0x26] = piVar4[2];
      param_1[0x27] = piVar4[3];
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = &LAB_0076c402;
        FUN_00e36970();
      }
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = &LAB_0076c43d;
        Animation::Motion::Unit::setCurrentTime();
      }
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x76c450;
      FUN_00ac80a0();
      if (param_1[0x250] == 0) {
        puStack_1c = (undefined1 *)0x76c462;
        FUN_00a92f90();
        puStack_1c = (undefined1 *)0x76c469;
        fVar9 = (float10)FUN_00407b40();
        if ((float10)1.3333334 <= fVar9) {
          param_1[0x250] = 1;
          param_1[0x1af] = 1;
          FUN_00753150();
          puStack_1c = (undefined1 *)0x76c497;
          FUN_0076b5b0();
        }
      }
      puStack_1c = (undefined1 *)0x76c4a7;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        (**(code **)(*param_1 + 0x20))();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 3:
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
      if (120.0 < (float)param_1[0x244] + fVar1) {
        FUN_009fdde0();
        return;
      }
    }
    return;
  case 0x73:
    FUN_0076c510();
    return;
  case 0x74:
    iVar8 = FUN_00a81330();
    piVar4 = (int *)0x0;
    if (iVar8 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
    }
    switch(param_1[0x187]) {
    case 0:
      FUN_008e3c10();
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x3f800000;
      puStack_24 = (undefined1 *)0x3e4ccccd;
      uStack_28 = 0;
      uStack_2c = 5;
      puStack_30 = (undefined1 *)0x76c6f2;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
    case 1:
      (**(code **)(*param_1 + 0x220))();
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x76c72b;
      FUN_00ac80a0();
      if (piVar4 != (int *)0x0) {
        puStack_1c = (undefined1 *)0x76c73b;
        FUN_00a92f90();
        puStack_1c = (undefined1 *)0x76c744;
        iVar3 = FUN_00e26e90();
        if (iVar3 != 0) {
          puStack_1c = (undefined1 *)0x0;
          puStack_20 = (undefined1 *)0x76c759;
          fVar9 = (float10)FUN_00e36970();
          if ((float10)0.6166667 <= fVar9) {
            puStack_1c = (undefined1 *)0x76c771;
            FUN_00756fd0();
            param_1[0x542] = -0x3de80000;
            puStack_1c = (undefined1 *)0x3f800000;
            puStack_20 = (undefined1 *)0x0;
            puStack_24 = (undefined1 *)0x76c78c;
            FUN_00a92f90();
            puStack_24 = (undefined1 *)0x76c793;
            fVar9 = (float10)FUN_00407b40();
            puStack_20 = (undefined1 *)
                         (float)((float10)(float)param_1[0x542] * (float10)0.016666668 + fVar9);
            puStack_24 = (undefined1 *)0x8000000;
            uStack_28 = 0x3f800000;
            uStack_2c = 0;
            puStack_30 = (undefined1 *)0x0;
            uStack_38 = 0xd9;
            puStack_3c = (undefined1 *)0x76c7c7;
            iStack_34 = iVar8;
            FUN_00aa4520();
            puStack_1c = (undefined1 *)0x3f800000;
            puStack_20 = (undefined1 *)0x3f800000;
            puStack_24 = (undefined1 *)0x76c7da;
            FUN_00ac80a0();
            param_1[0x3a] = 0;
            param_1[0x39] = 0;
            param_1[0x38] = 0;
            param_1[0x37] = 0;
            param_1[0x35] = 0;
            param_1[0x34] = 0;
            param_1[0x33] = 0;
            param_1[0x32] = 0;
            param_1[0x30] = 0;
            param_1[0x2f] = 0;
            param_1[0x2e] = 0;
            param_1[0x2d] = 0;
            param_1[0x3b] = 0x3f800000;
            param_1[0x36] = 0x3f800000;
            param_1[0x31] = 0x3f800000;
            param_1[0x2c] = 0x3f800000;
            param_1[0x4b] = 0x3f800000;
            param_1[0x46] = 0x3f800000;
            param_1[0x41] = 0x3f800000;
            param_1[0x3c] = 0x3f800000;
            param_1[0x4a] = 0;
            param_1[0x49] = 0;
            param_1[0x48] = 0;
            param_1[0x47] = 0;
            param_1[0x45] = 0;
            param_1[0x44] = 0;
            param_1[0x43] = 0;
            param_1[0x42] = 0;
            param_1[0x40] = 0;
            param_1[0x3f] = 0;
            param_1[0x3e] = 0;
            param_1[0x3d] = 0;
            param_1[0x47d] = param_1[0x47d] & 0xff3fffff;
            iVar8 = *param_1;
            puStack_1c = (undefined1 *)0x76c8b6;
            puStack_1c = (undefined1 *)(**(code **)(*piVar4 + 0x84))();
            puStack_20 = (undefined1 *)0x76c8c0;
            puStack_20 = (undefined1 *)(**(code **)(*piVar4 + 0x68))();
            puStack_24 = (undefined1 *)0x76c8c8;
            (**(code **)(iVar8 + 0x7c))();
            param_1[0x187] = param_1[0x187] + 1;
          }
        }
      }
      break;
    case 2:
      (**(code **)(*param_1 + 0x220))();
      piVar7 = (int *)(**(code **)(*piVar4 + 0x68))();
      param_1[0x14] = *piVar7;
      param_1[0x15] = piVar7[1];
      param_1[0x16] = piVar7[2];
      param_1[0x17] = piVar7[3];
      piVar4 = (int *)(**(code **)(*piVar4 + 0x84))();
      param_1[0x24] = *piVar4;
      param_1[0x25] = piVar4[1];
      param_1[0x26] = piVar4[2];
      param_1[0x27] = piVar4[3];
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = &LAB_0076c962;
        FUN_00e36970();
      }
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = &LAB_0076c99d;
        Animation::Motion::Unit::setCurrentTime();
      }
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x76c9b0;
      FUN_00ac80a0();
      if (param_1[0x250] == 0) {
        puStack_1c = (undefined1 *)0x76c9c2;
        FUN_00a92f90();
        puStack_1c = (undefined1 *)0x76c9c9;
        fVar9 = (float10)FUN_00407b40();
        if ((float10)1.3833333 <= fVar9) {
          param_1[0x250] = 1;
          param_1[0x1af] = 1;
          FUN_00753150();
          puStack_1c = (undefined1 *)0x76c9f7;
          FUN_0076b5b0();
        }
      }
      puStack_1c = (undefined1 *)0x76ca07;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        (**(code **)(*param_1 + 0x20))();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 3:
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
      if (120.0 < (float)param_1[0x244] + fVar1) {
        FUN_009fdde0();
        return;
      }
    }
    return;
  case 0x75:
    FUN_0076ca70();
    return;
  case 0x76:
    iVar8 = FUN_00a81330();
    piVar4 = (int *)0x0;
    if (iVar8 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
    }
    switch(param_1[0x187]) {
    case 0:
      FUN_008e3c10();
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x3f800000;
      puStack_24 = (undefined1 *)0x3e4ccccd;
      uStack_28 = 0;
      uStack_2c = 5;
      puStack_30 = (undefined1 *)0x76cc52;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
    case 1:
      (**(code **)(*param_1 + 0x220))();
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x76cc8b;
      FUN_00ac80a0();
      if (piVar4 != (int *)0x0) {
        puStack_1c = (undefined1 *)0x76cc9b;
        FUN_00a92f90();
        puStack_1c = (undefined1 *)0x76cca4;
        iVar3 = FUN_00e26e90();
        if (iVar3 != 0) {
          puStack_1c = (undefined1 *)0x0;
          puStack_20 = (undefined1 *)0x76ccb9;
          fVar9 = (float10)FUN_00e36970();
          if ((float10)0.6166667 <= fVar9) {
            puStack_1c = (undefined1 *)0x76ccd1;
            FUN_00756fd0();
            param_1[0x542] = -0x3de80000;
            puStack_1c = (undefined1 *)0x3f800000;
            puStack_20 = (undefined1 *)0x0;
            puStack_24 = (undefined1 *)0x76ccec;
            FUN_00a92f90();
            puStack_24 = (undefined1 *)0x76ccf3;
            fVar9 = (float10)FUN_00407b40();
            puStack_20 = (undefined1 *)
                         (float)((float10)(float)param_1[0x542] * (float10)0.016666668 + fVar9);
            puStack_24 = (undefined1 *)0x8000000;
            uStack_28 = 0x3f800000;
            uStack_2c = 0;
            puStack_30 = (undefined1 *)0x0;
            uStack_38 = 0xd8;
            puStack_3c = (undefined1 *)0x76cd27;
            iStack_34 = iVar8;
            FUN_00aa4520();
            puStack_1c = (undefined1 *)0x3f800000;
            puStack_20 = (undefined1 *)0x3f800000;
            puStack_24 = (undefined1 *)0x76cd3a;
            FUN_00ac80a0();
            param_1[0x3a] = 0;
            param_1[0x39] = 0;
            param_1[0x38] = 0;
            param_1[0x37] = 0;
            param_1[0x35] = 0;
            param_1[0x34] = 0;
            param_1[0x33] = 0;
            param_1[0x32] = 0;
            param_1[0x30] = 0;
            param_1[0x2f] = 0;
            param_1[0x2e] = 0;
            param_1[0x2d] = 0;
            param_1[0x3b] = 0x3f800000;
            param_1[0x36] = 0x3f800000;
            param_1[0x31] = 0x3f800000;
            param_1[0x2c] = 0x3f800000;
            param_1[0x4b] = 0x3f800000;
            param_1[0x46] = 0x3f800000;
            param_1[0x41] = 0x3f800000;
            param_1[0x3c] = 0x3f800000;
            param_1[0x4a] = 0;
            param_1[0x49] = 0;
            param_1[0x48] = 0;
            param_1[0x47] = 0;
            param_1[0x45] = 0;
            param_1[0x44] = 0;
            param_1[0x43] = 0;
            param_1[0x42] = 0;
            param_1[0x40] = 0;
            param_1[0x3f] = 0;
            param_1[0x3e] = 0;
            param_1[0x3d] = 0;
            param_1[0x47d] = param_1[0x47d] & 0xff3fffff;
            iVar8 = *param_1;
            puStack_1c = (undefined1 *)0x76ce16;
            puStack_1c = (undefined1 *)(**(code **)(*piVar4 + 0x84))();
            puStack_20 = (undefined1 *)0x76ce20;
            puStack_20 = (undefined1 *)(**(code **)(*piVar4 + 0x68))();
            puStack_24 = (undefined1 *)0x76ce28;
            (**(code **)(iVar8 + 0x7c))();
            param_1[0x187] = param_1[0x187] + 1;
          }
        }
      }
      break;
    case 2:
      (**(code **)(*param_1 + 0x220))();
      piVar7 = (int *)(**(code **)(*piVar4 + 0x68))();
      param_1[0x14] = *piVar7;
      param_1[0x15] = piVar7[1];
      param_1[0x16] = piVar7[2];
      param_1[0x17] = piVar7[3];
      piVar4 = (int *)(**(code **)(*piVar4 + 0x84))();
      param_1[0x24] = *piVar4;
      param_1[0x25] = piVar4[1];
      param_1[0x26] = piVar4[2];
      param_1[0x27] = piVar4[3];
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = &LAB_0076cec2;
        FUN_00e36970();
      }
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = &LAB_0076cefd;
        Animation::Motion::Unit::setCurrentTime();
      }
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x76cf10;
      FUN_00ac80a0();
      if (param_1[0x250] == 0) {
        puStack_1c = (undefined1 *)0x76cf22;
        FUN_00a92f90();
        puStack_1c = (undefined1 *)0x76cf29;
        fVar9 = (float10)FUN_00407b40();
        if ((float10)1.3666667 <= fVar9) {
          param_1[0x250] = 1;
          param_1[0x1af] = 1;
          FUN_00753150();
          puStack_1c = (undefined1 *)0x76cf57;
          FUN_0076b5b0();
        }
      }
      puStack_1c = (undefined1 *)0x76cf67;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        (**(code **)(*param_1 + 0x20))();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 3:
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
      if (120.0 < (float)param_1[0x244] + fVar1) {
        FUN_009fdde0();
        return;
      }
    }
    return;
  case 0x77:
    FUN_0076cfd0();
    return;
  case 0x78:
    FUN_00762db0();
    return;
  case 0x79:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5;
      puStack_24 = (undefined1 *)0x7532b2;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43160000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    FUN_00ac80a0();
    return;
  case 0x7a:
    puVar6 = (undefined1 *)FUN_00a81330();
    iVar8 = 0;
    if (puVar6 != (undefined1 *)0x0) {
      iVar8 = FUN_00a7c8a0();
    }
    if (param_1[0x187] == 0) {
      if (iVar8 == 0) {
        param_1[0x482] = 2;
        param_1[0x128] = 3;
        FUN_009f8b10();
        param_1[0x47d] = param_1[0x47d] & 0xfffbffdf;
        FUN_00a7c950();
        (**(code **)(*param_1 + 0x34c))();
        param_1[0x1bb] = 1;
      }
      param_1[0x14] = *(int *)(iVar8 + 0x50);
      param_1[0x15] = *(int *)(iVar8 + 0x54);
      param_1[0x16] = *(int *)(iVar8 + 0x58);
      param_1[0x17] = *(int *)(iVar8 + 0x5c);
      puStack_1c = (undefined1 *)0xbf800000;
      puStack_20 = (undefined1 *)0x8000000;
      puStack_24 = (undefined1 *)0x3f800000;
      uStack_28 = 0x3e4ccccd;
      uStack_2c = 0;
      iStack_34 = 0xa2;
      uStack_38 = 0x75e6b9;
      puStack_30 = puVar6;
      FUN_00aa4520();
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = &LAB_0075e6e2;
        FUN_00e36970();
      }
      FUN_00a92f90();
      iVar8 = FUN_00e26e90();
      if (iVar8 != 0) {
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = &LAB_0075e70f;
        Animation::Motion::Unit::setCurrentTime();
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    puStack_1c = (undefined1 *)0x3f800000;
    puStack_20 = (undefined1 *)0x75e730;
    FUN_00ac80a0();
    puStack_1c = (undefined1 *)0x75e739;
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      param_1[0x482] = 2;
      param_1[0x128] = 3;
      FUN_009f8b10();
      param_1[0x47d] = param_1[0x47d] & 0xfffbffdf;
      FUN_00a7c950();
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x1bb] = 1;
    }
    return;
  case 0x7b:
    FUN_0075a640();
    return;
  case 0x7c:
    FUN_0075a860();
    return;
  case 0x7d:
    FUN_00763020();
    return;
  case 0x7e:
    iVar8 = param_1[0x187];
    if (iVar8 == 0) {
      param_1[0x544] = 0x41a00000;
      param_1[0x248] = 0;
      fVar9 = (float10)FUN_00dde300();
      param_1[0x249] = (int)(float)fVar9;
      param_1[599] = 0;
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x3e4ccccd;
      puStack_24 = (undefined1 *)0x0;
      uStack_28 = 5;
      uStack_2c = 0x75aad3;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      FUN_00ac80a0();
      if (((param_1[0x2a1] != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) &&
         (fVar1 = (float)param_1[0x469], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        FUN_00755760();
      }
      iVar8 = FUN_00a94ce0();
      if (iVar8 == 0) {
        return;
      }
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x3e4ccccd;
      puStack_24 = (undefined1 *)0x0;
      uStack_28 = 5;
      uStack_2c = 0x75aa4a;
      FUN_00aa4080();
      param_1[0x187] = 1;
      param_1[0x544] = 0x41200000;
      return;
    }
    param_1[0x59d] = (int)((float)param_1[0x59d] - (float)param_1[0x244]);
    FUN_00ac80a0();
    FUN_00a8ec30();
    (**(code **)(*param_1 + 0x84))();
    fVar9 = (float10)FUN_00ddba30();
    if (((param_1[0x47d] & 0x400000U) == 0) && ((float10)0.5235988 < ABS(fVar9))) {
      uStack_28 = 10;
      if (ABS(fVar9) <= (float10)2.0943952) {
        if ((fVar9 <= (float10)0) && (fVar9 < (float10)0)) {
          uStack_28 = 9;
        }
      }
      else {
        uStack_28 = 0xd;
      }
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x3e4ccccd;
      puStack_24 = (undefined1 *)0x0;
      uStack_2c = 0x75abc5;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x2a1] != 0) && (iVar8 = FUN_00a8cab0(), iVar8 == 0x10001e)) {
      param_1[0x544] = 0x42a00000;
    }
    iVar8 = FUN_00a81330();
    if ((iVar8 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 4))();
      iVar8 = FUN_00dd6d80();
      if ((iVar8 != 0) && (iVar8 = FUN_004b8b70(), iVar8 != 0)) {
        FUN_004b8c20();
        return;
      }
    }
    param_1[0x544] = 0x42a00000;
    return;
  case 0x7f:
    FUN_0075ac50();
    return;
  case 0x80:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x3e4ccccd;
      puStack_24 = (undefined1 *)0x0;
      uStack_28 = 8;
      uStack_2c = 0x75adc9;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x188] = 0;
      iVar8 = FUN_00c19c30();
      if ((((iVar8 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) || (iVar8 == param_1[0x13c])) ||
         (iVar8 = FUN_00a7c8a0(),
         0.0 < ((float)param_1[0x12] - (float)param_1[0x46e]) *
               (*(float *)(iVar8 + 0x40) - (float)param_1[0x46c]) -
               ((float)param_1[0x10] - (float)param_1[0x46c]) *
               (*(float *)(iVar8 + 0x48) - (float)param_1[0x46e]))) {
        iVar8 = 0x3f860a92;
      }
      else {
        iVar8 = -0x4079f56e;
      }
      param_1[0x248] = iVar8;
      param_1[0x249] = 0;
      param_1[0x24a] = param_1[0x469];
      param_1[0x47d] = param_1[0x47d] | 0x40;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    FUN_00a8e880();
    iVar8 = FUN_00a8e9b0();
    param_1[0x24b] = (int)(*(float *)(iVar8 + 4) + (float)param_1[0x248]);
    FUN_00ddba30();
    fVar9 = (float10)FUN_00ddba30();
    param_1[0x25] = (int)(float)fVar9;
    return;
  case 0x81:
    if (param_1[0x187] == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5;
      puStack_24 = (undefined1 *)0x753372;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    return;
  case 0x82:
    FUN_00774ab0();
    return;
  case 0x83:
  case 0x84:
  case 0x85:
    if (param_1[0x187] == 0) {
      puStack_20 = *(undefined1 **)("EmC010NextPointView" + param_1[0x186] * 4 + 8);
      puStack_1c = (undefined1 *)0x0;
      puStack_24 = (undefined1 *)0x753400;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00753431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x86:
    FUN_0075b9f0();
    return;
  case 0x87:
    FUN_0076d190();
    return;
  case 0x88:
    iVar8 = FUN_00a81330();
    if (iVar8 == 0) {
      uVar5 = 0;
    }
    else {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        (**(code **)(*piVar4 + 4))();
        iVar8 = FUN_00dd6d80();
        uVar5 = -(uint)(iVar8 != 0) & (uint)piVar4;
      }
    }
    (**(code **)(*param_1 + 0x220))();
    iVar8 = param_1[0x187];
    if (iVar8 == 0) {
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x3f800000;
      puStack_24 = (undefined1 *)0x3ecccccd;
      uStack_28 = 0;
      uStack_2c = 5;
      puStack_30 = (undefined1 *)0x75b02b;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      puStack_1c = (undefined1 *)0x75af7e;
      FUN_00ac80a0();
      if ((uVar5 != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) {
        puStack_1c = &LAB_0075afa4;
        FUN_00755760();
      }
      iVar8 = FUN_00a94ce0();
      if (iVar8 == 0) {
        return;
      }
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x3f800000;
      puStack_24 = (undefined1 *)0x3e4ccccd;
      uStack_28 = 0;
      uStack_2c = 5;
      puStack_30 = (undefined1 *)0x75afe4;
      FUN_00aa4080();
      param_1[0x544] = 0x41200000;
      param_1[0x187] = 1;
      return;
    }
    puStack_1c = (undefined1 *)0x75b044;
    FUN_00ac80a0();
    FUN_00a8ec30();
    (**(code **)(*param_1 + 0x84))();
    fVar9 = (float10)FUN_00ddba30();
    if (((param_1[0x47d] & 0x400000U) == 0) && ((float10)0.5235988 < ABS(fVar9))) {
      uStack_2c = 10;
      if (ABS(fVar9) <= (float10)2.0943952) {
        if ((fVar9 <= (float10)0) && (fVar9 < (float10)0)) {
          uStack_2c = 9;
        }
      }
      else {
        uStack_2c = 0xd;
      }
      puStack_1c = (undefined1 *)0x8000000;
      puStack_20 = (undefined1 *)0x3f800000;
      puStack_24 = (undefined1 *)0x3e4ccccd;
      uStack_28 = 0;
      puStack_30 = (undefined1 *)0x75b100;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    return;
  case 0x89:
    FUN_007637d0();
    return;
  case 0x8b:
    FUN_0075bb40();
    return;
  case 0x8c:
    FUN_00763ff0();
    return;
  case 0x8d:
    FUN_0076d570();
    return;
  case 0x8e:
    FUN_0075be60();
    return;
  case 0x8f:
    FUN_0075b120();
    return;
  case 0xa2:
    FUN_0076fe60();
    return;
  case 0xa3:
    FUN_00765960();
    return;
  case 0xa4:
    FUN_0076fff0();
    return;
  case 0xa5:
    switch(param_1[0x187]) {
    case 0:
      FUN_007593a0();
      FUN_00757a80();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      puStack_20 = (undefined1 *)param_1[0x575];
      puStack_1c = (undefined1 *)0x0;
      puStack_24 = (undefined1 *)0x770236;
      FUN_00aa4120();
      if (param_1[0x57a] != 0) {
        puStack_1c = (undefined1 *)0x1;
        puStack_20 = (undefined1 *)0x87;
        puStack_24 = &LAB_00770270;
        FUN_00aa4080();
      }
      param_1[0x187] = param_1[0x187] + 1;
    case 1:
      FUN_00ac80a0();
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        if (param_1[0x574] < 3) {
          puStack_20 = (undefined1 *)0x2b;
        }
        else {
          puStack_20 = (undefined1 *)0x86;
        }
        puStack_1c = (undefined1 *)0x0;
        puStack_24 = (undefined1 *)0x7702f1;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = (int)((float)param_1[0x5a5] * 60.0);
        return;
      }
      break;
    case 2:
      FUN_00ac80a0();
      fVar1 = (float)param_1[0x248];
      if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
         (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
         fVar1 - (float)param_1[0x244] < 0.0)) {
        FUN_00769fa0();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x42280000;
        param_1[0x139] = 1;
        return;
      }
      break;
    case 3:
      FUN_00ac80a0();
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        FUN_0076a070();
        FUN_0075fad0();
        return;
      }
    }
    return;
  case 0xa6:
    iVar8 = param_1[0x187];
    if (iVar8 == 0) {
      FUN_007593a0();
      FUN_00757a80();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      puStack_24 = (undefined1 *)param_1[0x575];
      puStack_1c = (undefined1 *)0x3dcccccd;
      puStack_20 = (undefined1 *)0x0;
      uStack_28 = 0x7704e3;
      FUN_00aa4120();
      FUN_00769fa0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42400000;
      param_1[0x139] = 1;
    }
    else if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      FUN_00ac80a0();
      FUN_00a8ec30();
      fVar9 = (float10)FUN_00ddba30();
      iVar8 = (**(code **)(*param_1 + 0x84))();
      param_1[0x25] = (int)(((float)fVar9 - *(float *)(iVar8 + 4)) * 0.15 + *(float *)(iVar8 + 4));
      fVar1 = (float)param_1[0x2a4];
      if (NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0)) {
        return;
      }
      FUN_00a805f0();
      return;
    }
    FUN_00ac80a0();
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar8 = FUN_00a94ce0();
    if ((iVar8 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_0076a070();
      FUN_0075fad0();
    }
    return;
  case 0xa7:
    FUN_00770570();
    return;
  case 0xa8:
    FUN_00770830();
    return;
  case 0xa9:
    FUN_00771090();
    return;
  case 0xaa:
    FUN_00771380();
    return;
  case 0xab:
    FUN_0078d220();
    return;
  case 0xac:
    FUN_0078d490();
    return;
  case 0xb5:
    if (param_1[0x187] == 0) {
      FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a8d710(param_1 + 0x10);
      param_1[0x4f9] = 0;
      param_1[0x4fa] = -1;
      param_1[0x47d] = param_1[0x47d] | 0x100;
      param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
    }
    else if (param_1[0x187] == 1) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      puStack_3c = (undefined1 *)0x0;
      uStack_38 = 0;
      iStack_34 = 0;
      FUN_00a8d790(&puStack_3c);
      FUN_00a97e60(0x3f000000,~param_1[0x47d] & 1);
      puStack_30 = puStack_3c;
      uStack_2c = uStack_38;
      uStack_28 = iStack_34;
      puStack_24 = (undefined1 *)0x3f800000;
      FUN_007515a0(&puStack_30,0x3dcccccd,0x3d567750);
      puStack_20 = puStack_3c;
      puStack_1c = (undefined1 *)uStack_38;
      iVar8 = FUN_007725e0(&puStack_20,8);
      if (iVar8 == 0) {
        param_1[0x47d] = param_1[0x47d] | 0x80;
        return;
      }
      param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
      return;
    }
    return;
  case 0xb6:
    FUN_00760a10();
    return;
  }
  iVar8 = param_1[0x187];
  if (iVar8 == 0) {
    FUN_007593a0();
    FUN_00757a80();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
    puStack_20 = (undefined1 *)0x31;
    if ((float)param_1[0x245] < 0.0) {
      puStack_20 = (undefined1 *)0x30;
    }
    puStack_1c = (undefined1 *)0x0;
    puStack_24 = (undefined1 *)0x759b59;
    FUN_00aa4080();
    (**(code **)(*param_1 + 0x1f8))();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x188] = 0;
  }
  else if (iVar8 != 1) {
    if (iVar8 != 2) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00759ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00a8e520();
  FUN_00a96030();
  iVar8 = FUN_00a8c760();
  if (iVar8 != 0) {
    param_1[0x188] = param_1[0x188] + 1;
  }
  FUN_00756cc0();
  FUN_00ac80a0();
  iVar8 = FUN_00a94ce0();
  if (iVar8 != 0) {
    FUN_00aa3f60();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00776AE0  switchD_00776d16::default  size=536  [class]
void __fastcall switchD_00776d16::default(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  
  param_1[0x469] = param_1[0x2a4];
  param_1[0x468] = param_1[0x2a1];
  if (((param_1[0x128] == 5) && ((param_1[0x47d] & 0x80000U) == 0)) &&
     (iVar3 = FUN_0075a5a0(), iVar3 == 0)) {
    iVar3 = FUN_00a81330();
    if ((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) goto LAB_00776b62;
  }
  else {
    if ((DAT_01bea094 & 0x20000) == 0) goto LAB_00776b62;
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00776b62;
    iVar3 = FUN_00a7c8a0();
  }
  param_1[0x468] = iVar3;
LAB_00776b62:
  iVar3 = param_1[0x468];
  if (iVar3 != 0) {
    param_1[0x46c] = *(int *)(iVar3 + 0x40);
    param_1[0x46d] = *(int *)(iVar3 + 0x44);
    param_1[0x46e] = *(int *)(iVar3 + 0x48);
    param_1[0x46f] = *(int *)(iVar3 + 0x4c);
    fVar1 = *(float *)(param_1[0x468] + 0x40) - (float)param_1[0x10];
    fVar2 = *(float *)(param_1[0x468] + 0x48) - (float)param_1[0x12];
    param_1[0x469] = (int)(fVar2 * fVar2 + fVar1 * fVar1);
  }
  if ((param_1[0x128] != 5) && (param_1[0x128] != 0x10)) {
    FUN_00769010();
    iVar3 = FUN_00a8d400(param_1 + 0x46c);
    if ((param_1[0x5e0] != 0) &&
       ((iVar3 != 0 && (*(int *)(param_1[0x5e0] + 0xc) != *(int *)(iVar3 + 0xc))))) {
      param_1[0x5e1] = 0;
    }
    param_1[0x5e0] = iVar3;
  }
  iVar3 = (**(code **)(*param_1 + 0x200))();
  if (iVar3 != 0) {
    FUN_00766200();
  }
  fVar1 = (float)param_1[0x472];
  param_1[0x472] = (int)((float)param_1[0x244] + fVar1);
  if (90.0 < (float)param_1[0x244] + fVar1) {
    param_1[0x472] = 0;
    param_1[0x473] = 0;
  }
  if ((param_1[0x47d] & 0x20000000U) == 0) {
    if ((param_1[0x47d] & 0x10000000U) != 0) {
      fVar1 = (float)param_1[0x5a3] - (float)param_1[0x244];
      param_1[0x5a3] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        (**(code **)(*param_1 + 0x110))(0);
      }
    }
  }
  else {
    fVar1 = (float)param_1[0x5a3] - (float)param_1[0x244];
    param_1[0x5a3] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_0075ec00();
    }
  }
  if ((param_1[0x47d] & 0x800U) != 0) {
    FUN_0075fad0(param_1[0x461]);
    param_1[0x47d] = param_1[0x47d] & 0xfffff7ff;
  }
  iVar3 = FUN_00ac4770();
  if (iVar3 == 0) {
    FUN_00776180();
  }
  FUN_007764d0();
  if (param_1[0x128] == 0x10) {
    return;
  }
  FUN_00760300();
  return;
}

