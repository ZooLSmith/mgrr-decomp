// src/unsorted/unit_00A866A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A866A0..00A873E0, 6 functions

#include "mgrr.h"

// 00A866A0  FUN_00a866a0  size=1139  [run]
int __thiscall
FUN_00a866a0(int param_1,float *param_2,int *param_3,undefined4 *param_4,float *param_5,
            float param_6,float param_7,int param_8,float param_9,float param_10)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int unaff_ESI;
  float10 fVar10;
  float *pfVar11;
  int local_50;
  int local_4c;
  float local_48;
  int local_3c;
  int local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  
  local_50 = -1;
  iVar6 = FUN_00f98a90();
  fVar2 = (float)iVar6 * 0.5;
  iVar6 = FUN_00f98aa0();
  bVar5 = false;
  fVar3 = (float)iVar6 * 0.5;
  if ((*(int *)(param_1 + 0xc) != 0) && (local_4c = 0, 0 < *(int *)(param_1 + 0xc))) {
    iVar6 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 8) + 0x1c + iVar6) != 0) {
        *(undefined2 *)(*(int *)(param_1 + 8) + 6 + iVar6) = 0;
        if ((-1 < local_4c) && (local_4c < *(int *)(param_1 + 0xc))) {
          iVar8 = *(int *)(*(int *)(param_1 + 8) + iVar6);
          D3DXVec3TransformNormal(&local_30,*(int *)(param_1 + 8) + iVar6 + 0xc,iVar8 + 0x10);
          local_30 = *(float *)(iVar8 + 0x40) + local_30;
          fStack_2c = *(float *)(iVar8 + 0x44) + fStack_2c;
          fStack_28 = *(float *)(iVar8 + 0x48) + fStack_28;
        }
        FUN_00d9fa80(&fStack_20,&local_30);
        if ((((1.0 < fStack_14) && (fVar2 - param_6 < fStack_20)) && (fStack_20 < param_6 + fVar2))
           && ((fVar3 - param_7 < fStack_1c && (fStack_1c < param_7 + fVar3)))) {
          puVar1 = (ushort *)(*(int *)(param_1 + 8) + 6 + iVar6);
          *puVar1 = *puVar1 | 1;
          bVar5 = true;
        }
        iVar8 = *(int *)(param_1 + 8) + iVar6;
        if (((*(float *)(*(int *)(param_1 + 8) + 0x20 + iVar6) != 0.0) ||
            (*(float *)(iVar8 + 0x24) != 0.0)) &&
           ((param_2[1] < *(float *)(iVar8 + 0x20) + fStack_2c &&
            (fVar4 = fStack_2c + *(float *)(iVar8 + 0x24),
            fVar4 < param_2[1] != (fVar4 == param_2[1]))))) {
          *(ushort *)(iVar8 + 6) = *(ushort *)(iVar8 + 6) | 2;
        }
      }
      local_4c = local_4c + 1;
      iVar6 = iVar6 + 0x30;
    } while (local_4c < *(int *)(param_1 + 0xc));
  }
  iVar6 = -1;
  local_3c = -1;
  if (bVar5) {
    *param_3 = 0;
    local_48 = 1e+06;
    iVar8 = *(int *)(param_1 + 0xc);
    local_4c = 0;
    if (0 < iVar8) {
      local_38 = 0;
      do {
        piVar9 = (int *)(*(int *)(param_1 + 8) + local_38);
        if (piVar9[7] != 0) {
          iVar6 = *piVar9;
          if ((-1 < local_4c) && (local_4c < iVar8)) {
            piVar7 = (int *)(*(int *)(param_1 + 8) + local_38);
            iVar8 = *piVar7;
            D3DXVec3TransformNormal(&local_30,piVar7 + 3,iVar8 + 0x10);
            local_30 = *(float *)(iVar8 + 0x40) + local_30;
            fStack_2c = *(float *)(iVar8 + 0x44) + fStack_2c;
            fStack_28 = *(float *)(iVar8 + 0x48) + fStack_28;
          }
          FUN_00d9fa80(&fStack_20,&local_30);
          if ((((1.0 < fStack_14) && (fVar2 - param_6 < fStack_20)) && (fStack_20 < param_6 + fVar2)
              ) && ((fVar3 - param_7 < fStack_1c && (fStack_1c < param_7 + fVar3)))) {
            if (param_8 != 0) {
              pfVar11 = &local_30;
              FUN_00a7c8a0(pfVar11);
              fVar10 = (float10)FUN_009f8c60(pfVar11);
              fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)param_9));
              if ((float10)param_10 < ABS(fVar10)) goto LAB_00a86a2f;
            }
            iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x18 + local_38);
            fVar4 = (param_2[2] - fStack_28) * (param_2[2] - fStack_28) +
                    (param_2[1] - fStack_2c) * (param_2[1] - fStack_2c) +
                    (*param_2 - local_30) * (*param_2 - local_30);
            if (((*(byte *)(piVar9 + 1) & 1) != 0) &&
               (fVar4 < (float)piVar9[0xb] * (float)piVar9[0xb])) {
              iVar8 = iVar8 + *(short *)((int)piVar9 + 0x2a);
            }
            if (local_3c <= iVar8) {
              bVar5 = false;
              if ((local_3c < iVar8) && ((*(byte *)((int)piVar9 + 6) & 1) != 0)) {
                bVar5 = true;
              }
              if ((fVar4 < local_48) || (bVar5)) {
                *param_3 = iVar6;
                local_50 = local_4c;
                local_48 = fVar4;
                local_3c = iVar8;
              }
            }
          }
        }
LAB_00a86a2f:
        iVar8 = *(int *)(param_1 + 0xc);
        local_4c = local_4c + 1;
        local_38 = local_38 + 0x30;
      } while (local_4c < iVar8);
      if (-1 < local_50) {
        if (local_50 < *(int *)(param_1 + 0xc)) {
          iVar6 = *(int *)(*(int *)(param_1 + 8) + local_50 * 0x30);
          D3DXVec3TransformNormal
                    (param_5,*(int *)(param_1 + 8) + local_50 * 0x30 + 0xc,iVar6 + 0x10);
          *param_5 = *param_5 + *(float *)(iVar6 + 0x40);
          param_5[1] = *(float *)(iVar6 + 0x44) + param_5[1];
          param_5[2] = *(float *)(iVar6 + 0x48) + param_5[2];
          local_50 = unaff_ESI;
        }
        iVar6 = *(int *)(param_1 + 8) + 0xc + local_50 * 0x30;
        *param_4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc + local_50 * 0x30);
        param_4[1] = *(undefined4 *)(iVar6 + 4);
        param_4[2] = *(undefined4 *)(iVar6 + 8);
        param_4[3] = 0x3f800000;
        return local_50;
      }
      iVar8 = *param_3;
      iVar6 = local_50;
      if (iVar8 != 0) {
        *param_5 = *(float *)(iVar8 + 0x40);
        param_5[1] = *(float *)(iVar8 + 0x44);
        param_5[2] = *(float *)(iVar8 + 0x48);
        param_5[3] = *(float *)(iVar8 + 0x4c);
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        return local_50;
      }
    }
  }
  else {
    *param_3 = 0;
  }
  return iVar6;
}

// 00A86B20  FUN_00a86b20  size=1084  [run]
int __thiscall
FUN_00a86b20(int param_1,float *param_2,int *param_3,undefined4 *param_4,float *param_5,
            float param_6,float param_7)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int unaff_EBX;
  int *piVar9;
  int local_50;
  int local_4c;
  float local_48;
  int local_3c;
  int local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  
  local_4c = -1;
  iVar6 = FUN_00f98a90();
  fVar2 = (float)iVar6 * 0.5;
  iVar6 = FUN_00f98aa0();
  bVar5 = false;
  fVar3 = (float)iVar6 * 0.5;
  if ((*(int *)(param_1 + 0xc) != 0) && (local_50 = 0, 0 < *(int *)(param_1 + 0xc))) {
    iVar6 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 8) + 0x1c + iVar6) != 0) {
        *(undefined2 *)(*(int *)(param_1 + 8) + 6 + iVar6) = 0;
        if ((-1 < local_50) && (local_50 < *(int *)(param_1 + 0xc))) {
          iVar8 = *(int *)(*(int *)(param_1 + 8) + iVar6);
          D3DXVec3TransformNormal(&local_30,*(int *)(param_1 + 8) + iVar6 + 0xc,iVar8 + 0x10);
          local_30 = *(float *)(iVar8 + 0x40) + local_30;
          fStack_2c = *(float *)(iVar8 + 0x44) + fStack_2c;
          fStack_28 = *(float *)(iVar8 + 0x48) + fStack_28;
        }
        FUN_00d9fa80(&fStack_20,&local_30);
        if ((((1.0 < fStack_14) && (fVar2 - param_6 < fStack_20)) && (fStack_20 < param_6 + fVar2))
           && ((fVar3 - param_7 < fStack_1c && (fStack_1c < param_7 + fVar3)))) {
          puVar1 = (ushort *)(*(int *)(param_1 + 8) + 6 + iVar6);
          *puVar1 = *puVar1 | 1;
          bVar5 = true;
        }
        iVar8 = *(int *)(param_1 + 8) + iVar6;
        if (((*(float *)(*(int *)(param_1 + 8) + 0x20 + iVar6) != 0.0) ||
            (*(float *)(iVar8 + 0x24) != 0.0)) &&
           ((param_2[1] < *(float *)(iVar8 + 0x20) + fStack_2c &&
            (fVar4 = fStack_2c + *(float *)(iVar8 + 0x24),
            fVar4 < param_2[1] != (fVar4 == param_2[1]))))) {
          *(ushort *)(iVar8 + 6) = *(ushort *)(iVar8 + 6) | 2;
        }
      }
      local_50 = local_50 + 1;
      iVar6 = iVar6 + 0x30;
    } while (local_50 < *(int *)(param_1 + 0xc));
  }
  iVar6 = -1;
  local_3c = -1;
  if (bVar5) {
    *param_3 = 0;
    local_48 = 1e+06;
    iVar8 = *(int *)(param_1 + 0xc);
    local_50 = 0;
    if (0 < iVar8) {
      local_38 = 0;
      do {
        piVar9 = (int *)(*(int *)(param_1 + 8) + local_38);
        if (piVar9[7] != 0) {
          iVar6 = *piVar9;
          if ((-1 < local_50) && (local_50 < iVar8)) {
            piVar7 = (int *)(*(int *)(param_1 + 8) + local_38);
            iVar8 = *piVar7;
            D3DXVec3TransformNormal(&local_30,piVar7 + 3,iVar8 + 0x10);
            local_30 = *(float *)(iVar8 + 0x40) + local_30;
            fStack_2c = *(float *)(iVar8 + 0x44) + fStack_2c;
            fStack_28 = *(float *)(iVar8 + 0x48) + fStack_28;
          }
          FUN_00d9fa80(&fStack_20,&local_30);
          if ((((1.0 < fStack_14) && (fVar2 - param_6 < fStack_20)) && (fStack_20 < param_6 + fVar2)
              ) && ((fVar3 - param_7 < fStack_1c && (fStack_1c < param_7 + fVar3)))) {
            iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x18 + local_38);
            fVar4 = (param_2[2] - fStack_28) * (param_2[2] - fStack_28) +
                    (param_2[1] - fStack_2c) * (param_2[1] - fStack_2c) +
                    (*param_2 - local_30) * (*param_2 - local_30);
            if (((*(byte *)(piVar9 + 1) & 1) != 0) &&
               (fVar4 < (float)piVar9[0xb] * (float)piVar9[0xb])) {
              iVar8 = iVar8 + *(short *)((int)piVar9 + 0x2a);
            }
            if (local_3c <= iVar8) {
              bVar5 = false;
              if ((local_3c < iVar8) && ((*(byte *)((int)piVar9 + 6) & 1) != 0)) {
                bVar5 = true;
              }
              if ((fVar4 < local_48) || (bVar5)) {
                *param_3 = iVar6;
                local_4c = local_50;
                local_48 = fVar4;
                local_3c = iVar8;
              }
            }
          }
        }
        iVar8 = *(int *)(param_1 + 0xc);
        local_50 = local_50 + 1;
        local_38 = local_38 + 0x30;
      } while (local_50 < iVar8);
      if (-1 < local_4c) {
        if (local_4c < *(int *)(param_1 + 0xc)) {
          iVar6 = *(int *)(*(int *)(param_1 + 8) + local_4c * 0x30);
          D3DXVec3TransformNormal
                    (param_5,*(int *)(param_1 + 8) + local_4c * 0x30 + 0xc,iVar6 + 0x10);
          *param_5 = *param_5 + *(float *)(iVar6 + 0x40);
          param_5[1] = *(float *)(iVar6 + 0x44) + param_5[1];
          param_5[2] = *(float *)(iVar6 + 0x48) + param_5[2];
          local_4c = unaff_EBX;
        }
        iVar6 = *(int *)(param_1 + 8) + 0xc + local_4c * 0x30;
        *param_4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc + local_4c * 0x30);
        param_4[1] = *(undefined4 *)(iVar6 + 4);
        param_4[2] = *(undefined4 *)(iVar6 + 8);
        param_4[3] = 0x3f800000;
        return local_4c;
      }
      iVar8 = *param_3;
      iVar6 = local_4c;
      if (iVar8 != 0) {
        *param_5 = *(float *)(iVar8 + 0x40);
        param_5[1] = *(float *)(iVar8 + 0x44);
        param_5[2] = *(float *)(iVar8 + 0x48);
        param_5[3] = *(float *)(iVar8 + 0x4c);
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        return local_4c;
      }
    }
  }
  else {
    *param_3 = 0;
  }
  return iVar6;
}

// 00A86F60  FUN_00a86f60  size=410  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_00a86f60(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = 1e+06;
  local_24 = -1;
  local_2c = -1;
  iVar6 = *(int *)(param_1 + 0xc);
  if ((iVar6 != 0) && (local_28 = 0, 0 < iVar6)) {
    iVar8 = 0;
    fVar2 = local_18;
    fVar4 = local_1c;
    fVar5 = local_20;
    do {
      iVar1 = *(int *)(param_1 + 8);
      if ((*(int *)(iVar1 + 0x1c + iVar8) != 0) && (local_2c <= *(int *)(iVar1 + 0x18 + iVar8))) {
        if ((-1 < local_28) && (local_28 < iVar6)) {
          iVar6 = *(int *)(iVar8 + iVar1);
          D3DXVec3TransformNormal(&local_20,iVar8 + iVar1 + 0xc,iVar6 + 0x10);
          fVar5 = local_20 + *(float *)(iVar6 + 0x40);
          fVar4 = *(float *)(iVar6 + 0x44) + local_1c;
          fVar2 = *(float *)(iVar6 + 0x48) + local_18;
          local_20 = fVar5;
          local_1c = fVar4;
          local_18 = fVar2;
        }
        fVar3 = (*param_3 - fVar5) * (*param_3 - fVar5) +
                (param_3[1] - fVar4) * (param_3[1] - fVar4) +
                (param_3[2] - fVar2) * (param_3[2] - fVar2);
        if (fVar3 < local_30) {
          local_2c = *(int *)(iVar8 + 0x18 + *(int *)(param_1 + 8));
          local_30 = fVar3;
          local_24 = local_28;
        }
      }
      iVar6 = *(int *)(param_1 + 0xc);
      local_28 = local_28 + 1;
      iVar8 = iVar8 + 0x30;
    } while (local_28 < iVar6);
    if (-1 < local_24) {
      if (*(int *)(param_1 + 0xc) <= local_24) {
        return param_2;
      }
      piVar7 = (int *)(local_24 * 0x30 + *(int *)(param_1 + 8));
      iVar6 = *piVar7;
      D3DXVec3TransformNormal(param_2,piVar7 + 3,iVar6 + 0x10);
      *param_2 = *(float *)(iVar6 + 0x40) + *param_2;
      param_2[1] = *(float *)(iVar6 + 0x44) + param_2[1];
      param_2[2] = *(float *)(iVar6 + 0x48) + param_2[2];
      return param_2;
    }
  }
  *param_2 = _DAT_00000040;
  param_2[1] = _DAT_00000044;
  param_2[2] = _DAT_00000048;
  param_2[3] = _DAT_0000004c;
  return param_2;
}

// 00A87100  FUN_00a87100  size=449  [run]
undefined4 __thiscall FUN_00a87100(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_3c;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float local_1c;
  float local_14;
  
  iVar3 = FUN_00f98a90();
  fVar1 = (float)iVar3 * 0.5;
  iVar4 = FUN_00f98aa0();
  iVar3 = *(int *)(param_1 + 0xc);
  iVar6 = 0;
  fVar2 = (float)iVar4 * 0.5;
  if (iVar3 == 0) {
    FUN_00a8d230(&local_30);
    FUN_00d9fa80(&local_20,&local_30);
    if ((((1.0 < local_14) && (fVar1 - param_2 < local_20)) && (local_20 < param_2 + fVar1)) &&
       ((fVar2 - param_3 < local_1c && (local_1c < param_3 + fVar2)))) {
      return 1;
    }
  }
  else if (0 < iVar3) {
    local_3c = 0;
    while( true ) {
      if ((-1 < iVar6) && (iVar6 < iVar3)) {
        piVar5 = (int *)(*(int *)(param_1 + 8) + local_3c);
        iVar3 = *piVar5;
        D3DXVec3TransformNormal(&local_30,piVar5 + 3,iVar3 + 0x10);
        local_30 = *(float *)(iVar3 + 0x40) + local_30;
        fStack_2c = *(float *)(iVar3 + 0x44) + fStack_2c;
        fStack_28 = *(float *)(iVar3 + 0x48) + fStack_28;
      }
      FUN_00d9fa80(&local_20,&local_30);
      if ((((1.0 < local_14) && (fVar1 - param_2 < local_20)) && (local_20 < param_2 + fVar1)) &&
         ((fVar2 - param_3 < local_1c && (local_1c < param_3 + fVar2)))) break;
      iVar3 = *(int *)(param_1 + 0xc);
      local_3c = local_3c + 0x30;
      iVar6 = iVar6 + 1;
      if (iVar3 <= iVar6) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

// 00A872D0  FUN_00a872d0  size=266  [run]
undefined4 __thiscall FUN_00a872d0(int param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_14;
  
  iVar2 = FUN_00f98a90();
  iVar3 = FUN_00f98aa0();
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xc))) {
    piVar4 = (int *)(param_2 * 0x30 + *(int *)(param_1 + 8));
    iVar1 = *piVar4;
    D3DXVec3TransformNormal(&local_30,piVar4 + 3,iVar1 + 0x10);
    local_30 = *(float *)(iVar1 + 0x40) + local_30;
    fStack_2c = *(float *)(iVar1 + 0x44) + fStack_2c;
    fStack_28 = *(float *)(iVar1 + 0x48) + fStack_28;
  }
  FUN_00d9fa80(&local_20,&local_30);
  if ((((1.0 < fStack_14) && ((float)iVar2 * 0.5 - param_3 < local_20)) &&
      (local_20 < param_3 + (float)iVar2 * 0.5)) &&
     (((float)iVar3 * 0.5 - param_4 < fStack_1c && (fStack_1c < param_4 + (float)iVar3 * 0.5)))) {
    return 1;
  }
  return 0;
}

// 00A873E0  FUN_00a873e0  size=79  [run]
void __fastcall FUN_00a873e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      if (piVar2[0x139] != 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        return;
      }
      (**(code **)(*piVar2 + 0x294))();
    }
  }
  return;
}

