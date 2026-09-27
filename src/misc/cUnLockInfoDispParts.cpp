// src/misc/cUnLockInfoDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD92D0..00D43790, 5 functions

#include "types.h"

// 00CD92D0  cUnLockInfoDispParts::cUnLockInfoDispParts  size=122  [class]
undefined4 * __fastcall cUnLockInfoDispParts::cUnLockInfoDispParts(undefined4 *param_1)

{
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  *param_1 = vftable;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  _memset(param_1 + 0x24,0,0x2c);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return param_1;
}

// 00CF2AD0  cUnLockInfoDispParts::vf00  size=30  [class]
undefined4 __thiscall cUnLockInfoDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D40160  cUnLockInfoDispParts::vf08  size=483  [class]
void __fastcall cUnLockInfoDispParts::vf08(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xb0);
  }
  *(uint *)(param_1 + 0x98) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xb2);
  }
  *(uint *)(param_1 + 0x9c) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xb4);
  }
  *(uint *)(param_1 + 0xa0) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xb8);
  }
  *(uint *)(param_1 + 0xa8) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xba);
  }
  *(uint *)(param_1 + 0xac) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x148);
  }
  *(uint *)(param_1 + 0xb0) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14a);
  }
  *(uint *)(param_1 + 0xb4) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14c);
  }
  *(uint *)(param_1 + 0xb8) = uVar2;
  if (iVar3 != 0) {
    FUN_00cab4a0(1);
  }
  fVar6 = (float10)FUN_00d35790(*(undefined4 *)(param_1 + 0x90));
  iVar3 = *(int *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0xb4);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar6 = (float10)FUN_00ddb510((float)fVar6,0);
    *(float *)(iVar3 + 0xc0) = (float)fVar6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  iVar3 = FUN_00d29960(4);
  *(int *)(param_1 + 0xe4) = iVar3;
  *(undefined4 *)(iVar3 + 0x214) = 9;
  puVar1 = (uint *)(*(int *)(param_1 + 0xe4) + 0x28);
  *puVar1 = *puVar1 | 0x40000000;
  puVar1 = (uint *)(*(int *)(param_1 + 0xe4) + 0x28);
  *puVar1 = *puVar1 | 0x10000;
  *(undefined4 *)(*(int *)(param_1 + 0xe4) + 4) = 0;
  piVar5 = (int *)(param_1 + 0xe8);
  iVar3 = 2;
  do {
    iVar4 = FUN_00d29960(5);
    *piVar5 = iVar4;
    *(undefined4 *)(iVar4 + 0x1e8) = 9;
    *(uint *)(*piVar5 + 0x28) = *(uint *)(*piVar5 + 0x28) | 0x40000000;
    *(uint *)(*piVar5 + 0x28) = *(uint *)(*piVar5 + 0x28) | 0x10000;
    iVar4 = *piVar5;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 4) = 0;
  } while (iVar3 != 0);
  return;
}

// 00D40350  FUN_00d40350  size=699  [callgraph]
undefined4 __fastcall FUN_00d40350(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 local_18 [24];
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 200)) {
  case 0:
    if (*(int *)(param_1 + 0xcc) != 0) {
      iVar2 = *(int *)(param_1 + 0xd0);
      if (iVar2 == 4) {
        FUN_0099a350(local_18,"HUD_ITEM_NAME_S_0084");
      }
      else if (iVar2 == 5) {
        FUN_0099a350(local_18,"HUD_ITEM_NAME_S_0089");
      }
      else if (iVar2 == 6) {
        FUN_0099a350(local_18,"COLLECT_TITLE_00");
      }
      else {
        FUN_0099a350(local_18,"COLLECT_TITLE_%02d",iVar2);
      }
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x9c),local_18,1,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0xa0),local_18,1,0xffffffff);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x9c),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa0),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x9c),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa0),1,3);
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x98),0);
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      return 0;
    }
    break;
  case 1:
    fVar4 = (float10)FUN_00d35790(*(undefined4 *)(param_1 + 0x9c));
    fVar1 = (float)fVar4;
    iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x9c));
    if (iVar2 == 0) {
      FUN_00cd93e0();
      if ((*(int *)(param_1 + 0xd0) == 4) || (*(int *)(param_1 + 0xd0) == 5)) {
        *(undefined4 *)(param_1 + 200) = 3;
        return 0;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa4),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa8),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xac),1);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0xa8),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0xac),1,3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xa4),fVar1);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xa8),fVar1);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xac),fVar1);
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xa4),0);
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    }
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x98),(fVar1 + 24.0) * 0.029411765);
    return 0;
  case 2:
    fVar4 = (float10)FUN_00d03f90(*(undefined4 *)(param_1 + 0xa8));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xa4),
                 (float)((fVar4 + (float10)24.0) * (float10)0.029411765));
    iVar2 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0xa8));
    if (iVar2 == 0) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      return 0;
    }
    break;
  case 3:
    uVar3 = 1;
  }
  return uVar3;
}

// 00D43790  cUnLockInfoDispParts::vf14  size=492  [class]
void __fastcall cUnLockInfoDispParts::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_00f98aa0();
  iVar2 = FUN_00f98a90();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x40) = (float)iVar2 * 0.00078125 * 96.0;
    *(float *)(*(int *)(param_1 + 0x18) + 0x44) = (float)iVar1 * 0.0013888889 * 639.0;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0xc0)) {
  case 0:
    if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(param_1 + 0xd0) != -1)) {
      FUN_00e5e050("core_se_sys_item_collect",0);
      FUN_00cc0c50();
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(4);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      return;
    }
    break;
  case 1:
    iVar1 = FUN_00cc0d80();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      return;
    }
    break;
  case 2:
    uVar3 = FUN_00d03ea0();
    uVar4 = FUN_00d40350();
    FUN_00cc0d80();
    if ((uVar3 & 1 & uVar4) != 0) {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      return;
    }
    break;
  case 3:
    FUN_00cc0d80();
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    if (0xb4 < *(int *)(param_1 + 0xd8)) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      return;
    }
    break;
  case 4:
    FUN_00cc0d80();
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(2), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
    }
  }
  return;
}

