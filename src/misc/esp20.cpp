// src/misc/esp20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8630..00F40860, 5 functions

#include "mgrr.h"
#include "esp20.h"

// 00ED8630  esp20::vf10  size=1  [class]
void esp20::vf10(void)

{
  return;
}

// 00F177F0  esp20::esp20  size=77  [class]
undefined4 * __fastcall esp20::esp20(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x11a] = 0;
  param_1[0x116] = 0;
  param_1[0x11b] = 0;
  param_1[0x117] = 0;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  param_1[0x118] = 0;
  *param_1 = vftable;
  param_1[0x119] = 0;
  return param_1;
}

// 00F17840  esp20::vf08  size=657  [class]
void __fastcall esp20::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0x468) == 0) && (iVar4 = FUN_009d58f0(param_1), iVar4 != 0)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  if ((*(float *)(*(int *)(param_1 + 0x28) + 0x1ed4) == 0.0) &&
     ((*(int *)(param_1 + 0x46c) == 0 || (1.0 <= *(float *)(param_1 + 0x110))))) {
    local_3c = 1.0;
    local_38 = -1.0;
    local_34 = -1.0;
    if (*(float *)(param_1 + 0x450) != 0.0) {
      uVar5 = FUN_00e9fe70();
      FUN_00f3ec70(&local_38,uVar5);
      fVar3 = local_38;
      fVar2 = *(float *)(param_1 + 0x454) * *(float *)(param_1 + 0x454);
      if (fVar2 <= local_38) {
        fVar2 = *(float *)(param_1 + 0x450) * *(float *)(param_1 + 0x450);
        if (fVar2 <= local_38) {
          return;
        }
        local_38 = fVar2;
        FUN_00f3a570(&local_34,fVar3);
        local_3c = 1.0 - (local_34 - *(float *)(param_1 + 0x454)) * *(float *)(param_1 + 0x458);
      }
      else {
        local_3c = 1.0;
        local_38 = fVar2;
      }
    }
    FUN_00efed20();
    local_3c = *(float *)(param_1 + 0x124) * local_3c;
    iVar4 = *(int *)(param_1 + 0x84);
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 8) != 0)) {
      local_3c = *(float *)(iVar4 + 0x3c) * local_3c;
    }
    if (*(char *)(param_1 + 0x471) == '\0') {
      local_30 = local_3c * *(float *)(param_1 + 0x25c);
      local_2c = *(float *)(param_1 + 0x250) * 3.0 * local_3c;
      FUN_00db1fc0(local_30,local_2c,0x3f800000,0x3f800000,*(undefined1 *)(param_1 + 0x470));
      return;
    }
    if (*(char *)(param_1 + 0x471) == '\x01') {
      local_3c = *(float *)(param_1 + 0x25c) * local_3c;
      local_30 = local_3c * *(float *)(param_1 + 0x170);
      local_2c = *(float *)(param_1 + 0x174) * local_3c;
      local_28 = *(float *)(param_1 + 0x178) * local_3c;
      local_24 = *(float *)(param_1 + 0x17c) * local_3c;
      local_20 = local_3c * *(float *)(param_1 + 0x1c0);
      local_1c = *(float *)(param_1 + 0x1c4) * local_3c;
      local_18 = *(float *)(param_1 + 0x1c8) * local_3c;
      local_14 = local_3c * *(float *)(param_1 + 0x1cc);
      FUN_00da39c0(&local_30,&local_20,*(undefined1 *)(param_1 + 0x470));
      return;
    }
  }
  return;
}

// 00F34640  esp20::vf04  size=468  [class]
undefined4 __thiscall esp20::vf04(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  undefined1 *puVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar4 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar4 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (undefined4 *)0x0)) {
    puVar2 = (undefined1 *)*puVar5;
    if ((undefined1 *)((uint)(puVar2 + 0xf) & 0xfffffff0) != puVar2) {
      uVar6 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (puVar2 != (undefined1 *)0x0) {
      if ((*(short *)(puVar2 + 2) == 1) || (*(short *)(puVar2 + 2) == 2)) {
        *(undefined4 *)(param_1 + 0x468) = 1;
      }
      if (*(short *)(puVar2 + 2) == 2) {
        *(undefined4 *)(param_1 + 0x46c) = 1;
      }
      *(undefined1 *)(param_1 + 0x470) = *puVar2;
      *(undefined1 *)(param_1 + 0x471) = puVar2[4];
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar5 != (undefined4 *)0x0)) {
    pfVar3 = (float *)*puVar5;
    if ((float *)((int)pfVar3 + 0xfU & 0xfffffff0) != pfVar3) {
      uVar6 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (pfVar3 != (float *)0x0) {
      param_4 = *pfVar3;
      if (param_4 <= 0.0) {
        param_4 = 0.0;
      }
      *(float *)(param_1 + 0x450) = param_4;
      fVar1 = pfVar3[1];
      if (param_4 < fVar1) {
        fVar1 = param_4;
      }
      *(float *)(param_1 + 0x454) = fVar1;
      if (param_4 - fVar1 == 0.0) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = 1.0 / (param_4 - fVar1);
      }
      *(float *)(param_1 + 0x458) = fVar1;
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar7 == (uint *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar7;
    if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
      uVar6 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
  }
  *(float *)(param_1 + 0x45c) = *(float *)(uVar8 + 0xc) + *(float *)(uVar8 + 0x10);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(uVar8 + 0xc);
  if (*(float *)(uVar8 + 0x10) == 0.0) {
    *(undefined4 *)(param_1 + 0x464) = 0;
    return 1;
  }
  *(float *)(param_1 + 0x464) = 1.0 / *(float *)(uVar8 + 0x10);
  return 1;
}

// 00F40860  esp20::vf00  size=72  [class]
undefined4 * __thiscall esp20::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

