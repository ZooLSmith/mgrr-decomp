// src/unsorted/unit_00CB54E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB54E0..00CB59F0, 9 functions

#include "mgrr.h"

// 00CB54E0  FUN_00cb54e0  size=54  [run]
void FUN_00cb54e0(int param_1)

{
  int *piVar1;
  
  if (DAT_018b3a2c != param_1) {
    DAT_01dc0744 = 1;
  }
  DAT_018b3a2c = param_1;
  DAT_01dc0740 = 1;
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x9c))(param_1);
  return;
}

// 00CB5520  FUN_00cb5520  size=20  [run]
void FUN_00cb5520(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x9c))(0);
  return;
}

// 00CB5540  FUN_00cb5540  size=635  [run]
void __thiscall FUN_00cb5540(int param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float local_f8;
  float local_f4;
  undefined4 uStack_f0;
  float afStack_ec [23];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (param_4 == 0.0) {
      *(float *)(param_1 + 0x1f0) = *param_2;
      *(float *)(param_1 + 500) = param_2[1];
      *(float *)(param_1 + 0x1f8) = param_2[2];
      *(float *)(param_1 + 0x1fc) = param_2[3];
      *(float *)(param_1 + 0x200) = *param_3;
      *(float *)(param_1 + 0x204) = param_3[1];
      *(float *)(param_1 + 0x208) = param_3[2];
      *(float *)(param_1 + 0x20c) = param_3[3];
      return;
    }
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_54 = 0x3f800000;
    local_68 = 0x3f800000;
    local_7c = 0x3f800000;
    local_90 = 0x3f800000;
    local_f8 = (float)((float10)*param_3 - (float10)*param_2);
    puVar4 = &local_90;
    local_f4 = (float)((float10)param_3[1] - (float10)param_2[1]);
    fVar2 = (float10)fpatan((float10)param_3[1] - (float10)param_2[1],
                            (float10)*param_3 - (float10)*param_2);
    afStack_ec[2] = (float)fVar2;
    D3DXMatrixRotationZ(puVar4,(float)fVar2);
    uStack_f0 = 0;
    D3DXMatrixRotationZ(&local_58,-afStack_ec[0]);
    D3DXVec3TransformNormal(&stack0xffffff00,&stack0xffffff00,&local_60);
    afStack_ec[0xe] = 0.0;
    afStack_ec[0xd] = 0.0;
    afStack_ec[0xc] = 0.0;
    afStack_ec[0xb] = 0.0;
    afStack_ec[9] = 0.0;
    afStack_ec[8] = 0.0;
    afStack_ec[7] = 0.0;
    afStack_ec[6] = 0.0;
    afStack_ec[4] = 0.0;
    afStack_ec[3] = 0.0;
    afStack_ec[2] = 0.0;
    afStack_ec[1] = 0.0;
    afStack_ec[0xf] = 1.0;
    afStack_ec[10] = 1.0;
    afStack_ec[5] = 1.0;
    afStack_ec[0] = 1.0;
    local_f8 = 1.0;
    local_f4 = 1.0;
    FUN_00ddd140(&local_6c,&stack0xffffff04);
    pfVar3 = afStack_ec;
    D3DXMatrixMultiply(pfVar3,&local_6c,pfVar3);
    D3DXMatrixMultiply(param_1 + 0x50,&local_f8);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    *(float *)(param_1 + 0x80) = *param_2;
    *(float *)(param_1 + 0x84) = param_2[1];
    *(float *)(param_1 + 0x1f0) = *param_2;
    *(float *)(param_1 + 500) = param_2[1];
    *(float *)(param_1 + 0x1f8) = param_2[2];
    *(float *)(param_1 + 0x1fc) = param_2[3];
    fVar1 = param_2[1];
    *(float *)(param_1 + 0x200) = (float)(afStack_ec + 0xd) * param_4 + *param_2;
    *(float *)(param_1 + 0x204) = (float)pfVar3 * param_4 + fVar1;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 **)(param_1 + 0x20c) = puVar4;
  }
  return;
}

// 00CB57C0  FUN_00cb57c0  size=10  [run]
void __thiscall FUN_00cb57c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00CB57F0  FUN_00cb57f0  size=24  [run]
void __thiscall FUN_00cb57f0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x200);
  param_2[1] = *(undefined4 *)(param_1 + 0x204);
  return;
}

// 00CB5810  FUN_00cb5810  size=29  [run]
void __thiscall FUN_00cb5810(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
    *(undefined4 *)(param_1 + 0x84) = param_3;
  }
  return;
}

// 00CB5830  FUN_00cb5830  size=10  [run]
void __thiscall FUN_00cb5830(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00CB5840  FUN_00cb5840  size=432  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cb5840(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_00f98a90();
  iVar1 = *(int *)(param_1 + 0x18);
  fVar2 = (float)iVar4 * 0.00078125 * 154.0;
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa4) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if ((0.0 < *(float *)(iVar1 + 0xc0)) &&
         (fVar2 = *(float *)(iVar1 + 0xc0) - _DAT_018b619c * fVar2, *(float *)(iVar1 + 0xc0) = fVar2
         , fVar2 < 0.0)) {
        *(undefined4 *)(iVar1 + 0xc0) = 0;
      }
    }
    else if ((*(float *)(iVar1 + 0xc0) < fVar2) &&
            (fVar3 = _DAT_018b619c * fVar2 + *(float *)(iVar1 + 0xc0),
            *(float *)(iVar1 + 0xc0) = fVar3, fVar2 < fVar3)) {
      *(float *)(iVar1 + 0xc0) = fVar2;
    }
  }
  fVar3 = _DAT_018b6198;
  fVar2 = _DAT_018b6190;
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa0) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if (_DAT_018b6190 < *(float *)(iVar1 + 0xe4)) {
        fVar3 = _DAT_018b6194 * _DAT_018b6190 + *(float *)(iVar1 + 0xe4);
        *(float *)(iVar1 + 0xe4) = fVar3;
        if (fVar3 < fVar2) {
          *(float *)(iVar1 + 0xe4) = fVar2;
        }
        FUN_00cb2a90(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(iVar1 + 0xe4));
        return;
      }
    }
    else if (*(float *)(iVar1 + 0xe4) < _DAT_018b6198) {
      fVar2 = _DAT_018b6194 * _DAT_018b6198 + *(float *)(iVar1 + 0xe4);
      *(float *)(iVar1 + 0xe4) = fVar2;
      if (fVar3 < fVar2) {
        *(float *)(iVar1 + 0xe4) = fVar3;
      }
      FUN_00cb2a90(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(iVar1 + 0xe4));
      return;
    }
  }
  return;
}

// 00CB59F0  FUN_00cb59f0  size=129  [run]
void __thiscall FUN_00cb59f0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f98a90();
  *(float *)(param_1 + 0xc0) = *param_2 / ((float)iVar1 * 0.00078125);
  iVar1 = FUN_00f98aa0();
  *(float *)(param_1 + 0xc4) = param_2[1] / ((float)iVar1 * 0.0013888889);
  iVar1 = FUN_00f98a90();
  *(float *)(param_1 + 0xd0) = *param_3 / ((float)iVar1 * 0.00078125);
  iVar1 = FUN_00f98aa0();
  *(float *)(param_1 + 0xd4) = param_3[1] / ((float)iVar1 * 0.0013888889);
  return;
}

