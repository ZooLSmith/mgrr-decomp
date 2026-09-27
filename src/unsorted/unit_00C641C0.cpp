// src/unsorted/unit_00C641C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C641C0..00C647E0, 4 functions

#include "types.h"

// 00C641C0  FUN_00c641c0  size=589  [run]
undefined4 __thiscall
FUN_00c641c0(int param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6,
            int *param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_40;
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
  
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  iVar6 = 0;
  FUN_00c15370(&local_40);
  local_30 = local_40;
  local_28 = local_38;
  local_24 = local_34;
  local_2c = *(float *)(param_1 + 0x40) + local_3c;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x30) + local_3c;
  fVar3 = (local_38 - param_3[2]) * (local_38 - param_3[2]) +
          (local_40 - *param_3) * (local_40 - *param_3);
  param_5 = *(float *)(param_1 + 0x14) + param_5;
  if ((fVar3 <= param_5 * param_5) &&
     ((((local_3c < param_3[1] != (local_3c == param_3[1]) && (param_3[1] <= fVar2)) ||
       ((param_6 = param_6 + param_3[1], local_3c <= param_6 &&
        (param_6 < fVar2 != (param_6 == fVar2))))) ||
      ((param_3[1] < local_3c != (param_3[1] == local_3c) && (fVar2 <= param_6)))))) {
    fVar2 = *(float *)(param_1 + 0x34);
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a81330();
      iVar6 = FUN_00a7c8a0();
    }
    bVar4 = true;
    if (iVar6 == 0) {
      fVar7 = (float10)fVar2;
    }
    else {
      fVar7 = (float10)FUN_00ddba30(*(float *)(iVar6 + 0x94) + *(float *)(param_1 + 0x34));
      if (*(int *)(iVar6 + 0x4e4) != 0) {
        bVar4 = false;
      }
    }
    fVar8 = (float10)fpatan((float10)*param_3 - (float10)local_40,
                            (float10)param_3[2] - (float10)local_38);
    fVar7 = (float10)FUN_00ddba30((float)(fVar8 - fVar7));
    if ((bVar4) &&
       (fVar7 * fVar7 <= (float10)*(float *)(param_1 + 0x38) * (float10)*(float *)(param_1 + 0x38)))
    {
      if ((*(int *)(param_1 + 0x5c) == 8) || (*(int *)(param_1 + 0x5c) == 10)) {
        fVar7 = (float10)fpatan((float10)local_40 - (float10)*param_3,
                                (float10)local_38 - (float10)param_3[2]);
        fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)param_4));
        if (fVar7 * fVar7 < (float10)0.6168503 == (fVar7 * fVar7 == (float10)0.6168503)) {
          return 0;
        }
        iVar5 = *(int *)(param_1 + 0x48);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x48);
      }
      if (iVar5 != 0) {
        local_20 = local_30 - *param_2;
        local_1c = local_2c - param_2[1];
        local_18 = local_28 - param_2[2];
        local_14 = local_24 - param_2[3];
        iVar6 = hkpAllCdPointCollector::hkpAllCdPointCollector_33(param_2,uVar1,&local_20,iVar6);
        if (iVar6 != 0) {
          return 0;
        }
      }
      param_7[1] = (int)fVar3;
      *param_7 = param_1;
      return 1;
    }
  }
  return 0;
}

// 00C64410  FUN_00c64410  size=738  [run]
undefined1 * __thiscall
FUN_00c64410(int param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,
            float param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar3;
  undefined1 *puVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 auStack_c0 [4];
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [8];
  undefined1 local_90 [28];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_64 [24];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  local_f0 = 0.0;
  local_ec = 0.0;
  local_e8 = 0.0;
  FUN_00c15370(&local_f0);
  local_d0 = local_f0;
  local_c8 = local_e8;
  local_c4 = local_e4;
  local_cc = *(float *)(param_1 + 0x40) + local_ec;
  local_bc = *(undefined4 *)(param_1 + 0x44);
  local_b4 = local_ec + *(float *)(param_1 + 0x30);
  local_b8 = (local_e8 - param_3[2]) * (local_e8 - param_3[2]) +
             (local_f0 - *param_3) * (local_f0 - *param_3);
  fVar7 = *(float *)(param_1 + 0x3c);
  D3DXMatrixRotationY(local_90,fVar7);
  local_e8 = 0.0;
  local_e4 = 0.0;
  fStack_e0 = *(float *)(param_1 + 0x14);
  pfVar6 = &local_e8;
  D3DXVec3TransformNormal(pfVar6,pfVar6,auStack_98);
  fVar5 = 0.0;
  puVar4 = auStack_64;
  local_f0 = local_f0 + unaff_EDI;
  local_ec = local_ec + unaff_ESI;
  local_e8 = local_e8 + unaff_EBX;
  fStack_74 = fVar7 + 0.0;
  fStack_70 = local_f0;
  fStack_6c = local_ec;
  D3DXMatrixInverse(puVar4,0);
  D3DXVec3TransformNormal(auStack_c0,param_3,&fStack_70);
  local_cc = fStack_4c + local_cc;
  local_c8 = fStack_48 + local_c8;
  local_c4 = fStack_44 + local_c4;
  if (NAN(local_c4) || 0.0 < local_c4 == (local_c4 == 0.0)) {
    return puVar4;
  }
  if (((((local_c4 <= *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x38)) &&
        (-*(float *)(param_1 + 0x34) < local_cc != (-*(float *)(param_1 + 0x34) == local_cc))) &&
       (local_cc < *(float *)(param_1 + 0x34) != (local_cc == *(float *)(param_1 + 0x34)))) &&
      (((((float)auStack_a4 < param_3[1] != ((float)auStack_a4 == param_3[1]) &&
         (param_3[1] <= fStack_e0)) ||
        ((param_6 = param_3[1] + param_6, (float)auStack_a4 <= param_6 &&
         (param_6 < fStack_e0 != (param_6 == fStack_e0))))) ||
       ((param_3[1] < (float)auStack_a4 != (param_3[1] == (float)auStack_a4) &&
        (fStack_e0 < param_6 != (fStack_e0 == param_6))))))) &&
     ((iVar2 = FUN_005f4370(), iVar2 == 0 || (*(int *)(iVar2 + 0x4e4) == 0)))) {
    if (*(int *)(param_1 + 0x5c) == 8) {
      fVar3 = (float10)fpatan((float10)fVar5 - (float10)*param_3,
                              (float10)(float)pfVar6 - (float10)param_3[2]);
      fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)param_4));
      if (fVar3 * fVar3 < (float10)0.6168503 == (fVar3 * fVar3 == (float10)0.6168503)) {
        return puVar4;
      }
      iVar1 = *(int *)(param_1 + 0x48);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    if (iVar1 != 0) {
      fStack_dc = unaff_ESI - *param_2;
      fStack_d8 = unaff_EBX - param_2[1];
      fStack_d4 = (fVar7 + 0.0) - param_2[2];
      local_d0 = local_f0 - param_2[3];
      iVar2 = hkpAllCdPointCollector::hkpAllCdPointCollector_33(param_2,local_e8,&fStack_dc,iVar2);
      if (iVar2 != 0) {
        return puVar4;
      }
    }
    param_7[1] = (int)local_e4;
    *param_7 = param_1;
    return (undefined1 *)0x1;
  }
  return puVar4;
}

// 00C64750  FUN_00c64750  size=65  [run]
bool FUN_00c64750(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x115d8,param_1);
  if (iVar1 != 0) {
    DAT_01bea180 = SceneBgManagerImplement::EntityDeletedSlot::EntityDeletedSlot(param_1);
    return DAT_01bea180 != 0;
  }
  DAT_01bea180 = 0;
  return false;
}

// 00C647E0  FUN_00c647e0  size=62  [run]
bool FUN_00c647e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x1c,param_1);
  if (iVar1 != 0) {
    DAT_01bea188 = lib::AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>::
                   AllocatedArray<NinjaRunEventManagerImplement::EventUnit*>(param_1);
    return DAT_01bea188 != 0;
  }
  DAT_01bea188 = 0;
  return false;
}

