// src/misc/cCodecForcedLoadingDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD11C0..00D2C3E0, 5 functions

#include "mgrr.h"
#include "cCodecForcedLoadingDispParts.h"

// 00CD11C0  cCodecForcedLoadingDispParts::vf04  size=60  [class]
void __fastcall cCodecForcedLoadingDispParts::vf04(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    iVar1 = FUN_00ccdda0(param_1[2]);
    if (iVar1 == 0) {
      param_1[1] = -1;
      return;
    }
    (**(code **)(*param_1 + 8))();
    param_1[1] = param_1[1] + 1;
  }
  else if (param_1[1] != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cd11fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

// 00CE3270  cCodecForcedLoadingDispParts::vf00  size=63  [class]
undefined4 * __thiscall cCodecForcedLoadingDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEB110  cCodecForcedLoadingDispParts::vf08  size=118  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCodecForcedLoadingDispParts::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  if ((_DAT_01dc5050 & 1) == 0) {
    _DAT_01dc5050 = _DAT_01dc5050 | 1;
    _DAT_01dc5040 = 0;
    _DAT_01dc5044 = 0;
    _DAT_01dc5048 = 0;
  }
  uVar2 = _DAT_01dc5048;
  uVar1 = _DAT_01dc5044;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = _DAT_01dc5040;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = uVar2;
    return;
  }
  return;
}

// 00D2C380  cCodecForcedLoadingDispParts::cCodecForcedLoadingDispParts  size=85  [class]
undefined4 * cCodecForcedLoadingDispParts::cCodecForcedLoadingDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x1c,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[3] = "cCodecForcedLoadingDispParts";
    puVar1[2] = 9;
    uVar2 = FUN_00d29960(10);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D2C3E0  FUN_00d2c3e0  size=83  [callgraph]
void __fastcall FUN_00d2c3e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00d45490();
  if (((DAT_01bea094 & 0x100000) == 0) || (iVar1 == 0)) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    uVar2 = cCodecForcedLoadingDispParts::cCodecForcedLoadingDispParts();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d2c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    return;
  }
  return;
}

