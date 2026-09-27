// src/misc/esp03.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0420..00F2DF00, 5 functions

#include "types.h"

// 00ED0420  esp03::esp03  size=18  [class]
undefined4 * __fastcall esp03::esp03(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0770  esp03::vf00  size=30  [class]
undefined4 __thiscall esp03::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EE0D10  esp03::vf14  size=45  [class]
void __fastcall esp03::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00F22F60  esp03::vf08  size=26  [class]
void __fastcall esp03::vf08(int param_1)

{
  int local_c [3];
  
  local_c[0] = param_1 + 0x3a0;
  FUN_00f12e40(local_c);
  return;
}

// 00F2DF00  esp03::vf04  size=634  [class]
/* WARNING: Removing unreachable block (ram,0x00f2e086) */
/* WARNING: Removing unreachable block (ram,0x00f2dfd0) */
/* WARNING: Removing unreachable block (ram,0x00f2e035) */
/* WARNING: Removing unreachable block (ram,0x00f2e0db) */

undefined4 __thiscall
esp03::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if ((iVar2 != 0) && (iVar2 = FUN_00f12b50(), iVar2 != 0)) {
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (undefined4 *)0x0)) {
      pfVar1 = (float *)*puVar3;
      if ((float *)((int)pfVar1 + 0xfU & 0xfffffff0) != pfVar1) {
        uVar4 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (pfVar1 != (float *)0x0) {
        *(float *)(param_1 + 0x47c) = *pfVar1 * 0.1;
        *(float *)(param_1 + 0x494) = pfVar1[1] * 0.001;
        *(float *)(param_1 + 0x498) = pfVar1[2] * 0.001;
        *(float *)(param_1 + 0x488) = pfVar1[3];
        *(float *)(param_1 + 0x48c) = pfVar1[4];
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x488) =
             (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) * pfVar1[5] +
             *(float *)(param_1 + 0x488);
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x48c) =
             (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) * pfVar1[6] +
             *(float *)(param_1 + 0x48c);
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x494) =
             pfVar1[7] * 0.001 * (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) +
             *(float *)(param_1 + 0x494);
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x498) =
             pfVar1[8] * 0.001 * (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) +
             *(float *)(param_1 + 0x498);
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar6 != (uint *)0x0)) {
      uVar5 = *puVar6;
      if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (uVar5 != 0) {
        *(int *)(param_1 + 0x470) = (int)*(char *)(uVar5 + 0x11);
      }
    }
    if (((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) &&
       ((*(int *)(param_1 + 0x490) != 0 || (*(int *)(param_1 + 0x470) != 0)))) {
      FUN_00ed5150();
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
    return 1;
  }
  return 0;
}

