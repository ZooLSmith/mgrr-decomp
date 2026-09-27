// src/misc/cNowLoadingDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD5910..00D31B90, 5 functions

#include "mgrr.h"
#include "cNowLoadingDispParts.h"

// 00CD5910  cNowLoadingDispParts::vf04  size=60  [class]
void __fastcall cNowLoadingDispParts::vf04(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00cd594a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

// 00CE3B10  cNowLoadingDispParts::vf00  size=63  [class]
undefined4 * __thiscall cNowLoadingDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEF970  cNowLoadingDispParts::vf08  size=75  [class]
void __fastcall cNowLoadingDispParts::vf08(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  switch(DAT_01b77e30) {
  case 0:
  case 1:
    if (*(int *)(param_1 + 0x18) == 0) goto switchD_00cef98b_default;
    uVar1 = 2;
    break;
  case 2:
  case 3:
    if (*(int *)(param_1 + 0x18) == 0) goto switchD_00cef98b_default;
    uVar1 = 1;
    break;
  default:
    goto switchD_00cef98b_default;
  }
  FUN_00cdeec0(uVar1);
switchD_00cef98b_default:
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D31B30  cNowLoadingDispParts::cNowLoadingDispParts  size=85  [class]
undefined4 * cNowLoadingDispParts::cNowLoadingDispParts(void)

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
    puVar1[3] = "cNowLoadingDispParts";
    puVar1[2] = 0xb;
    uVar2 = FUN_00d29960(0x31);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D31B90  FUN_00d31b90  size=195  [callgraph]
void __fastcall FUN_00d31b90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    iVar1 = FUN_00cac360(1);
    if ((iVar1 != 0) && (DAT_01be9210 != 0)) {
      if (*(int *)(param_1 + 8) == 0) {
        if (1 < DAT_01be8e50) {
          if (*(int *)(param_1 + 0xc) == 0) {
            uVar2 = cNowLoadingDispParts::cNowLoadingDispParts();
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = 2;
      }
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 8) == 0) {
      if (DAT_01be8e50 < 2) {
        if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
    else {
      if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_00cac360(1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d31c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
    return;
  }
  return;
}

