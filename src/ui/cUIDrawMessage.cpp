// src/ui/cUIDrawMessage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3CA0..00D1FCF0, 12 functions

#include "mgrr.h"
#include "cUIDrawMessage.h"

// 00CB3CA0  cUIDrawMessage::vf18  size=14  [class]
void cUIDrawMessage::vf18(void)

{
  FUN_00dd5650(&DAT_016b72cc);
  return;
}

// 00CCED40  cUIDrawMessage::cUIDrawMessage  size=249  [class]
undefined4 * __fastcall cUIDrawMessage::cUIDrawMessage(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00cc7d30();
  param_1[1] = 0;
  param_1[9] = 1;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  param_1[0x29] = 0x3f800000;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  return param_1;
}

// 00CCEE40  cUIDrawMessage::vf08  size=6  [class]
undefined4 cUIDrawMessage::vf08(void)

{
  return 3;
}

// 00CCEF90  cUIDrawMessage::vf10  size=97  [class]
void __thiscall
cUIDrawMessage::vf10
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00cc86d0(param_1 + 0x18,param_1 + 0x1c,param_1 + 0x20,param_3,param_4,param_5);
  }
  if ((0 < *(int *)(param_1 + 0xb4)) &&
     (*(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1,
     *(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0xb0))) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return;
}

// 00CCF000  FUN_00ccf000  size=130  [between]
undefined4 __thiscall FUN_00ccf000(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0xa8) < 0) {
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0xa8);
  param_2[1] = *(int *)(param_1 + 0xac);
  param_2[2] = *(int *)(param_1 + 0x18);
  param_2[3] = *(int *)(param_1 + 0x1c);
  param_2[4] = *(int *)(param_1 + 0x20);
  param_2[5] = 0x3f800000;
  param_2[6] = 0x3f800000;
  param_2[7] = 0x3f800000;
  param_2[8] = 0x3f800000;
  param_2[9] = 0x3f800000;
  param_2[10] = 0x3f800000;
  param_2[0xb] = 0x3f800000;
  param_2[0xc] = 0x3f800000;
  param_2[0xd] = 0;
  param_2[0xe] = *(int *)(param_1 + 0xc);
  param_2[0xf] = *(int *)(param_1 + 0x10);
  param_2[0x17] = *(int *)(param_1 + 0x6c);
  piVar2 = (int *)(param_1 + 0x170);
  piVar3 = param_2 + 0x2d;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  return 1;
}

// 00CCF090  cUIDrawMessage::vf0C  size=57  [class]
void __fastcall cUIDrawMessage::vf0C(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ccf000(param_1 + 0xbc);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    if (*(int *)(param_1 + 0x174) == 0) {
      FUN_00ccd4b0(param_1 + 0xbc);
    }
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  return;
}

// 00CE6680  cUIDrawMessage::vf00  size=103  [class]
undefined4 * __thiscall cUIDrawMessage::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x45] != 0) {
    FUN_00dd4940(param_1[0x45]);
    param_1[0x45] = 0;
  }
  param_1[0x44] = 0;
  if (param_1[0x43] != 0) {
    FUN_00dd4940(param_1[0x43]);
    param_1[0x43] = 0;
  }
  param_1[0x42] = 0;
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D1FA60  FUN_00d1fa60  size=185  [callgraph]
undefined4 FUN_00d1fa60(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_110 [76];
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b0 [44];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_00cc7d30();
    local_c4 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_b8 = 0;
    iVar1 = FUN_00ccf000(local_110);
    if (iVar1 != 0) {
      FUN_00ccd4b0(local_110);
      FUN_00d1e780(local_110);
      if (local_c0 != 0) {
        FUN_00dd4920(local_c0);
      }
      if (local_b8 != 0) {
        FUN_00dd4920(local_b8);
      }
      puVar2 = local_b0;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    }
  }
  return 0;
}

// 00D1FB20  FUN_00d1fb20  size=108  [callgraph]
bool __thiscall
FUN_00d1fb20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = FUN_00cc9000(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x40) + 8))(&DAT_01b7be50,iVar1,param_6);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = unaff_retaddr;
      *(undefined4 *)(param_1 + 0x1fc) = param_2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x18) = 1;
      iVar1 = FUN_00d1e000();
      return iVar1 != 0;
    }
  }
  return false;
}

// 00D1FB90  FUN_00d1fb90  size=87  [callgraph]
void __thiscall FUN_00d1fb90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00cac210(param_2);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b8e2c,param_2);
    return;
  }
  iVar1 = FUN_00cc9000(iVar1,*(undefined4 *)(param_2 + 0x10));
  if ((iVar1 != 0) && (iVar1 = FUN_00d0d100(param_1 + 0x10), iVar1 != 0)) {
    return;
  }
  FUN_00cc7640();
  return;
}

// 00D1FBF0  FUN_00d1fbf0  size=244  [callgraph]
undefined4 __thiscall FUN_00d1fbf0(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0xa8) < 0)) {
    return 0;
  }
  iVar3 = FUN_00ccf000(param_1 + 0xbc);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  puVar6 = (undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x44);
  puVar1 = (undefined4 *)(param_2 + 0x50);
  puVar4 = (undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0x4c);
  *puVar4 = *puVar1;
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xb8);
  if (0.0 <= *(float *)(param_2 + 100)) {
    if (*(float *)(param_2 + 100) <= 0.0) goto LAB_00d1fcc3;
    fVar2 = *(float *)(param_2 + 100);
    puVar5 = puVar1;
  }
  else {
    fVar2 = *(float *)(param_2 + 100);
    puVar4 = (undefined4 *)(param_1 + 0xd0);
    puVar5 = puVar6;
    puVar6 = puVar1;
  }
  FUN_00ca82a0(puVar4,puVar5,puVar6,ABS(fVar2));
LAB_00d1fcc3:
  FUN_00d1e780(param_1 + 0xbc);
  return 1;
}

// 00D1FCF0  cUIDrawMessage::vf14  size=1378  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cUIDrawMessage::vf14(int param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  undefined4 local_50 [19];
  
  iVar4 = FUN_00d1fbf0(param_3);
  if ((iVar4 != 0) && ((*(int *)(param_1 + 0x170) == 0 || (*(int *)(param_1 + 0x180) != 0)))) {
    puVar5 = param_3;
    puVar9 = local_50;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_00cacde0(local_50,param_3[0x1b]);
    if (*(int *)(param_1 + 0xb4) < 1) {
      local_6c = 0;
      if (0 < *(int *)(param_1 + 0x108)) {
        local_70 = 0;
        do {
          iVar4 = *(int *)(local_70 + *(int *)(param_1 + 0x10c));
          iVar3 = *(int *)(param_1 + 0x114);
          if ((*param_2 != 0) &&
             (puVar5 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar5 != (undefined4 *)0x0
             )) {
            cMsgPrimWorkBase::cMsgPrimWorkBase();
            *puVar5 = cMsgPrimWork::vftable;
            if (local_6c != 0) {
              puVar5[0x38] = 0;
            }
            iVar7 = *(int *)(local_70 + 4 + *(int *)(param_1 + 0x10c));
            if ((iVar7 != 0) && (iVar6 = FUN_00cb0890(param_2,iVar7 * 4,iVar7 * 6), iVar6 != 0)) {
              puVar5[0x13] = 0;
              puVar5[0x4c] = 0;
              puVar5[0x4d] = iVar7;
            }
            fVar1 = *(float *)(param_1 + 0x2c);
            fVar2 = *(float *)(param_1 + 0x30);
            iVar7 = FUN_00f98a90();
            puVar5[0x3d] = fVar1 / (float)iVar7;
            iVar7 = FUN_00f98aa0();
            puVar5[0x3e] = -(fVar2 / (float)iVar7);
            iVar7 = param_3[0x1b];
            puVar5[0x49] = iVar7;
            puVar5[0x4b] = (uint)(iVar7 == 3);
            FUN_00cb0980(local_50,param_3[0x1a],0);
            FUN_00ce4380(param_1 + 0x34,param_1 + 0x50);
            uVar10 = param_3[0x1d];
            puVar5[0x16] = *(undefined4 *)(local_70 + 8 + *(int *)(param_1 + 0x10c));
            puVar5[0x29] = uVar10;
            FUN_00cb1440(iVar4 * 0x70 + iVar3,
                         *(undefined4 *)(local_70 + 4 + *(int *)(param_1 + 0x10c)));
            puVar5[0x48] = param_3[0x20];
            puVar5[0x47] = 0;
            puVar5[0x40] = 0x3f800000;
            puVar5[0x41] = 0x3f800000;
            puVar5[0x42] = 0x3f800000;
            puVar5[0x43] = 0x3f800000;
            uVar10 = _DAT_018d5df0;
            if ((param_3[0x1e] == 2) && ((DAT_01bea070._3_1_ & 1) == 0)) {
              puVar5[0x40] = _DAT_018d5df0;
              puVar5[0x41] = uVar10;
              puVar5[0x42] = uVar10;
              puVar5[0x43] = 0x3f800000;
              puVar5[0x47] = 1;
            }
            if (puVar5[0x14] != 0) {
              FUN_00f99d30();
            }
            if (puVar5[0x15] != 0) {
              FUN_00f99a40();
            }
            puVar5[0x39] = 0;
            if (param_3[0x1e] == 2) {
              iVar4 = 0;
              uVar10 = 0x3e;
            }
            else if (param_3[0x1e] == 1) {
              iVar4 = param_3[0x1c];
              iVar3 = param_3[0x1f];
              if (DAT_01dc5030 != 0) {
                if (iVar3 == 0) {
                  iVar4 = iVar4 + -1;
                  uVar10 = 0x69;
                  goto LAB_00d1ffa2;
                }
                if ((iVar3 != 1) && (iVar3 == 2)) {
                  iVar4 = iVar4 + 1;
                }
              }
              uVar10 = 0x69;
            }
            else if (param_3[0x1b] == 3) {
              iVar4 = 0;
              uVar10 = 0x61;
            }
            else {
              iVar4 = FUN_00cb3840(param_3[0x1f],param_3[0x1c]);
              uVar10 = 0x67;
            }
LAB_00d1ffa2:
            FUN_00a30800(puVar5,uVar10,iVar4);
          }
          local_70 = local_70 + 0xc;
          local_6c = local_6c + 1;
          if (*(int *)(param_1 + 0x108) <= local_6c) {
            return;
          }
        } while( true );
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x104);
      local_64 = 0;
      if (0 < *(int *)(param_1 + 0x108)) {
        local_60 = 0;
        local_6c = iVar4;
        do {
          piVar8 = (int *)(local_60 + *(int *)(param_1 + 0x10c));
          iVar3 = *piVar8;
          iVar7 = piVar8[1];
          iVar6 = *(int *)(param_1 + 0x114);
          if (iVar4 < iVar7) {
            iVar7 = iVar4;
          }
          if (iVar7 < 1) break;
          if ((*param_2 != 0) &&
             (puVar5 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), iVar4 = local_6c,
             puVar5 != (undefined4 *)0x0)) {
            cMsgPrimWorkBase::cMsgPrimWorkBase();
            *puVar5 = cMsgPrimWork::vftable;
            if (local_64 != 0) {
              puVar5[0x38] = 0;
            }
            FUN_00cb10b0(param_2,iVar7,0);
            fVar1 = *(float *)(param_1 + 0x2c);
            fVar2 = *(float *)(param_1 + 0x30);
            iVar4 = FUN_00f98a90();
            puVar5[0x3d] = fVar1 / (float)iVar4;
            iVar4 = FUN_00f98aa0();
            puVar5[0x3e] = -(fVar2 / (float)iVar4);
            iVar4 = param_3[0x1b];
            puVar5[0x49] = iVar4;
            puVar5[0x4b] = (uint)(iVar4 == 3);
            FUN_00cb0980(local_50,param_3[0x1a],0);
            FUN_00ce4380(param_1 + 0x34,param_1 + 0x50);
            uVar10 = *(undefined4 *)(local_60 + 8 + *(int *)(param_1 + 0x10c));
            puVar5[0x29] = param_3[0x1d];
            puVar5[0x16] = uVar10;
            FUN_00cb1440(iVar3 * 0x70 + iVar6,iVar7);
            puVar5[0x48] = param_3[0x20];
            puVar5[0x47] = 0;
            puVar5[0x40] = 0x3f800000;
            puVar5[0x41] = 0x3f800000;
            puVar5[0x42] = 0x3f800000;
            puVar5[0x43] = 0x3f800000;
            uVar10 = _DAT_018d5df0;
            if ((param_3[0x1e] == 2) && ((DAT_01bea070._3_1_ & 1) == 0)) {
              puVar5[0x40] = _DAT_018d5df0;
              puVar5[0x41] = uVar10;
              puVar5[0x42] = uVar10;
              puVar5[0x43] = 0x3f800000;
              puVar5[0x47] = 1;
            }
            if (puVar5[0x14] != 0) {
              FUN_00f99d30();
            }
            if (puVar5[0x15] != 0) {
              FUN_00f99a40();
            }
            puVar5[0x39] = 0;
            if (param_3[0x1e] == 2) {
              uVar10 = 0;
              uVar11 = 0x3e;
            }
            else if (param_3[0x1e] == 1) {
              uVar10 = FUN_00cb3840(param_3[0x1f],param_3[0x1c]);
              uVar11 = 0x69;
            }
            else if (param_3[0x1b] == 3) {
              uVar10 = 0;
              uVar11 = 0x61;
            }
            else {
              uVar10 = FUN_00cb3840(param_3[0x1f],param_3[0x1c]);
              uVar11 = 0x67;
            }
            FUN_00a30800(puVar5,uVar11,uVar10);
            iVar4 = local_6c - iVar7;
            local_6c = iVar4;
          }
          local_64 = local_64 + 1;
          local_60 = local_60 + 0xc;
        } while (local_64 < *(int *)(param_1 + 0x108));
      }
      if (0 < iVar4) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x104);
    }
  }
  return;
}

