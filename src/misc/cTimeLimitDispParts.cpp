// src/misc/cTimeLimitDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD8DE0..00D35000, 6 functions

#include "mgrr.h"
#include "cTimeLimitDispParts.h"

// 00CD8DE0  cTimeLimitDispParts::cTimeLimitDispParts  size=77  [class]
undefined4 * cTimeLimitDispParts::cTimeLimitDispParts(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x34] = 0;
  extraout_EDX[0x35] = 0;
  extraout_EDX[0x38] = 0xffffffff;
  extraout_EDX[0x36] = 0;
  extraout_EDX[0x39] = 0xffffffff;
  extraout_EDX[0x37] = 0;
  *extraout_EDX = vftable;
  extraout_EDX[0x32] = 1;
  extraout_EDX[0x33] = 0;
  return extraout_EDX;
}

// 00CE3F60  cTimeLimitDispParts::vf00  size=63  [class]
undefined4 * __thiscall cTimeLimitDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D03B80  cTimeLimitDispParts::vf08  size=789  [class]
void __fastcall cTimeLimitDispParts::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x8a);
  }
  *(uint *)(param_1 + 0x94) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9e);
  }
  *(uint *)(param_1 + 0x98) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  *(uint *)(param_1 + 0x9c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa2);
  }
  *(uint *)(param_1 + 0xa0) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa4);
  }
  *(uint *)(param_1 + 0xa4) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb2);
  }
  *(uint *)(param_1 + 0xa8) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb4);
  }
  *(uint *)(param_1 + 0xac) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x13c);
  }
  *(uint *)(param_1 + 0xb0) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0xb4) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xae);
  }
  *(uint *)(param_1 + 0xb8) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0xbc) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb0);
  }
  *(uint *)(param_1 + 0xc0) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  }
  *(uint *)(param_1 + 0xc4) = uVar4;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x94),1,3);
  *(undefined4 *)(param_1 + 0xec) = 0;
  iVar2 = FUN_00d467c0();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xe8) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0xbc) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0xbc) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  FUN_0095bfa0();
  iVar2 = FUN_0095c300();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0xe8) == 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xb8) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0xb8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 0;
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
       (piVar1 = *(int **)(*(uint *)(param_1 + 0x90) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
       piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 3) {
        uVar3 = FUN_00e03ea0("HUD_PIECE_08");
        piVar1[0x2a] = -1;
        piVar1[0x2b] = 0;
        iVar2 = FUN_00cc8f60(2);
        if ((iVar2 != 0) && (piVar1[5] = iVar2, *(int *)(iVar2 + 4) != 0)) {
          iVar2 = FUN_00cb1cd0(uVar3);
          if (-1 < iVar2) {
            piVar1[0x2a] = iVar2;
            piVar1[0x2b] = 0;
            piVar1[0x2e] = 0;
            FUN_00cf25d0(1);
            return;
          }
        }
      }
    }
  }
  FUN_00cf25d0(1);
  return;
}

// 00D34E40  FUN_00d34e40  size=72  [callgraph]
int FUN_00d34e40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xf0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cTimeLimitDispParts::cTimeLimitDispParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cTimeLimitDispParts";
      *(undefined4 *)(iVar1 + 8) = 8;
      uVar2 = FUN_00d29960(0x4b);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D34E90  cTimeLimitDispParts::create  size=362  [class]
void __fastcall cTimeLimitDispParts::create(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_64 [16];
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    if (*(int *)(param_1 + 200) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    }
    else {
      FUN_00cf25d0(0);
    }
  }
  else if ((*(int *)(param_1 + 0xcc) == 1) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_00cdf400(1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xcc) = 2;
    }
  }
  iVar1 = *(int *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (iVar1 != *(int *)(param_1 + 0xe4)) {
    if (iVar1 != -1) {
      if (DAT_018b9174 == 0xd72) {
        FUN_0099a460(local_64,"VR_MSG_21");
        uVar2 = 1;
      }
      else {
        FUN_0099a460(local_64,"VR_MSG_%02d",iVar1);
        uVar2 = 0xffffffff;
      }
      FUN_00cf9770(*(undefined4 *)(param_1 + 0xb0),local_64,0,uVar2);
      local_54 = 0;
      local_50 = 0.0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar1 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0xb0),&local_54);
      if ((iVar1 != 0) && (0.0 < local_50)) {
        FUN_00cb2900(*(undefined4 *)(param_1 + 0xb4),0x41a00000);
      }
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xb0),1,3);
    }
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xe0);
  }
  return;
}

// 00D35000  FUN_00d35000  size=134  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d35000(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_01dc1360 == 0) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    if ((puVar2 != (undefined4 *)0x0) && (1 < (int)puVar2[0x33])) {
      (**(code **)*puVar2)(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      uVar4 = FUN_00d34e40();
      *(undefined4 *)(param_1 + 4) = uVar4;
    }
    uVar3 = _DAT_01dc135c;
    uVar4 = DAT_018b5700;
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0xd0) = _DAT_01dc1358;
    *(undefined4 *)(iVar1 + 0xe0) = uVar4;
    *(undefined4 *)(iVar1 + 200) = 1;
    *(undefined4 *)(iVar1 + 0xd4) = uVar3;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  DAT_01dc1360 = 0;
  return;
}

