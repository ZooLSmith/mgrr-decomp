// src/unsorted/unit_00EC8000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC8000..00EC9700, 12 functions

#include "mgrr.h"

// 00EC8000  FUN_00ec8000  size=69  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00ec8000(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_01ede1d0 == 0) {
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      DAT_01eddae8 = 0;
      DAT_01ede1b0 = 0;
      DAT_01ede1b4 = 0;
      _DAT_01eddae4 = 0;
      DAT_01eddae0 = param_1;
      return 1;
    }
  }
  return 0;
}

// 00EC8050  FUN_00ec8050  size=769  [run]
void FUN_00ec8050(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  for (iVar2 = DAT_01ede1b0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    if (*(float *)(iVar2 + 0x78) == -1.0) {
      iVar3 = FUN_00f9a380(&local_4c,*(undefined4 *)(iVar2 + 0x18));
      if (iVar3 == 0) {
        fVar1 = *(float *)(iVar2 + 0x84);
        *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar2 + 0x7c);
        *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x80);
      }
      else {
        local_50 = 0.0;
        if ((((*(float *)(iVar2 + 0x50) == *(float *)(iVar2 + 0x60)) &&
             (*(float *)(iVar2 + 0x54) == *(float *)(iVar2 + 100))) &&
            (*(float *)(iVar2 + 0x58) == *(float *)(iVar2 + 0x68))) &&
           (*(float *)(iVar2 + 0x5c) == *(float *)(iVar2 + 0x6c))) {
          local_20 = *(float *)(iVar2 + 0x50) - *(float *)(iVar2 + 0x30);
          local_1c = *(float *)(iVar2 + 0x54) - *(float *)(iVar2 + 0x34);
          local_18 = *(float *)(iVar2 + 0x58) - *(float *)(iVar2 + 0x38);
          fVar5 = (float10)FUN_00fdef70();
          local_50 = (float)fVar5;
        }
        else {
          local_40 = *(float *)(iVar2 + 0x60) - *(float *)(iVar2 + 0x50);
          local_3c = *(float *)(iVar2 + 100) - *(float *)(iVar2 + 0x54);
          local_38 = *(float *)(iVar2 + 0x68) - *(float *)(iVar2 + 0x58);
          local_34 = *(float *)(iVar2 + 0x6c) - *(float *)(iVar2 + 0x5c);
          if (((*(float *)(iVar2 + 0x50) != *(float *)(iVar2 + 0x30)) ||
              (*(float *)(iVar2 + 0x54) != *(float *)(iVar2 + 0x34))) ||
             ((*(float *)(iVar2 + 0x58) != *(float *)(iVar2 + 0x38) ||
              (*(float *)(iVar2 + 0x5c) != *(float *)(iVar2 + 0x3c))))) {
            local_30 = *(float *)(iVar2 + 0x30) - *(float *)(iVar2 + 0x50);
            local_2c = *(float *)(iVar2 + 0x34) - *(float *)(iVar2 + 0x54);
            local_28 = *(float *)(iVar2 + 0x38) - *(float *)(iVar2 + 0x58);
            FUN_00ddf460(&local_40,&local_40);
            local_50 = local_28 * local_38 + local_30 * local_40 + local_2c * local_3c;
          }
        }
        local_48 = *(float *)(iVar2 + 0x48) * 0.5;
        fVar5 = (float10)FUN_00fe0ac0();
        local_44 = (float)fVar5 * local_50 + (float)fVar5 * local_50;
        local_48 = *(float *)(iVar2 + 0x4c) * local_44;
        if (local_44 == 0.0) {
          local_44 = 0.0;
        }
        else {
          local_44 = *(float *)(iVar2 + 0x20) / local_44;
        }
        if (local_48 == 0.0) {
          local_48 = 0.0;
        }
        else {
          local_48 = *(float *)(iVar2 + 0x1c) / local_48;
        }
        iVar3 = FUN_00fdbc60();
        iVar4 = FUN_00fdbc60();
        *(int *)(iVar2 + 0x74) = iVar3 * iVar4;
        iVar3 = FUN_00f99150();
        if (iVar3 == 2) {
          *(int *)(iVar2 + 0x74) = *(int *)(iVar2 + 0x74) * 2;
        }
        else if (iVar3 == 4) {
          *(int *)(iVar2 + 0x74) = *(int *)(iVar2 + 0x74) * 4;
        }
        else if (iVar3 == 8) {
          *(int *)(iVar2 + 0x74) = *(int *)(iVar2 + 0x74) * 8;
        }
        *(int *)(iVar2 + 0x70) = local_4c;
        local_44 = *(float *)(iVar2 + 0x74);
        if (local_44 == 0.0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = (float)local_4c / (float)(int)local_44;
          if (0.0 < fVar1) {
            if (1.0 < fVar1) {
              fVar1 = 1.0;
            }
          }
          else {
            fVar1 = 0.0;
          }
        }
      }
      *(float *)(iVar2 + 0x78) = fVar1;
    }
  }
  return;
}

// 00EC83C0  FUN_00ec83c0  size=284  [run]
void __thiscall FUN_00ec83c0(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_48;
  
  fVar1 = *(float *)(*param_2 + 0x110);
  if ((float)param_1[1] != 0.0) {
    local_48 = (float)param_1[2];
    if (fVar1 != 1.0) {
      if (local_48 < 2.0) {
        local_48 = local_48 / ((fVar1 - local_48 * fVar1) + local_48);
      }
      else {
        fVar3 = (float10)FUN_00fdc1f0();
        local_48 = (float)fVar3;
      }
    }
    iVar2 = *param_1;
    local_48 = (float)param_1[1] * local_48;
    param_1[1] = (int)local_48;
    *(float *)(iVar2 + 0x70) = local_48 * fVar1 + *(float *)(iVar2 + 0x70);
    *(float *)(iVar2 + 0x74) = local_48 * fVar1 + *(float *)(iVar2 + 0x74);
    *(float *)(iVar2 + 0x78) = local_48 * fVar1 + *(float *)(iVar2 + 0x78);
    *(float *)(iVar2 + 0x7c) = fVar1 * 0.0 + *(float *)(iVar2 + 0x7c);
  }
  return;
}

// 00EC84E0  FUN_00ec84e0  size=1934  [run]
void __thiscall FUN_00ec84e0(int *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  float10 fVar6;
  undefined1 auStack_c4 [8];
  undefined1 auStack_bc [4];
  float local_b8;
  int *local_b4;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  int *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 auStack_6c [8];
  int local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_c4;
  puVar4 = (uint *)param_2[1];
  iVar5 = *param_2;
  local_88 = *(float *)(iVar5 + 0x110);
  local_84 = param_2;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_74 = 0.0;
  local_b4 = (int *)(*(float *)(iVar5 + 0x118) + 1.0);
  if ((float)local_b4 <= 0.0001) {
    local_b4 = (int *)0x38d1b717;
  }
  fVar2 = (float)(int)puVar4[0x1f];
  if ((int)puVar4[0x1f] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_64 = iVar5;
  if (fVar2 <= (float)local_b4) {
    local_80 = (float)puVar4[0xe] * local_88;
    local_7c = (float)puVar4[0xf] * local_88;
    local_78 = (float)puVar4[0x10] * local_88;
    if ((float)puVar4[0x5e] != 0.0) {
      local_b8 = (float)puVar4[0x5e];
      local_8c = local_b8;
      if (local_88 != 1.0) {
        if (local_b8 < 2.0) {
          local_8c = local_b8 / ((local_88 - local_b8 * local_88) + local_b8);
        }
        else {
          fVar6 = (float10)FUN_00fdc1f0();
          local_8c = (float)fVar6;
        }
      }
      local_b8 = local_8c;
      local_80 = local_8c * local_80;
      local_7c = local_7c * local_8c;
      local_78 = local_78 * local_8c;
      local_74 = local_8c * 0.0;
    }
  }
  if ((float)puVar4[0xd] != 1.0) {
    if ((*puVar4 & 0x4000) == 0) {
      fVar2 = (float)puVar4[0xd];
      if (local_88 != 1.0) {
        local_b0 = (double)CONCAT44(local_b0._4_4_,fVar2);
        if (fVar2 < 2.0) {
          fVar2 = fVar2 / ((local_88 - fVar2 * local_88) + fVar2);
        }
        else {
          fVar6 = (float10)FUN_00fdc1f0();
          local_b0 = (double)CONCAT44(local_b0._4_4_,(float)fVar6);
          fVar2 = (float)fVar6;
        }
      }
      local_b8 = fVar2;
      param_1[4] = (int)(local_b8 * (float)param_1[4]);
      param_1[5] = (int)(local_b8 * (float)param_1[5]);
      param_1[6] = (int)(local_b8 * (float)param_1[6]);
      param_1[7] = (int)(local_b8 * (float)param_1[7]);
    }
    else {
      pfVar1 = (float *)(param_1 + 4);
      fVar2 = *pfVar1 * *pfVar1;
      local_b0 = (double)fVar2;
      local_b8 = (float)param_1[5] * (float)param_1[5] + fVar2 +
                 (float)param_1[6] * (float)param_1[6];
      fVar6 = (float10)FUN_00fdef70();
      fVar2 = (float)fVar6;
      local_8c = 0.0;
      if (fVar2 != 0.0) {
        if ((float)puVar4[0x5b] <= fVar2) {
          local_8c = fVar2 * 10.0 - (float)puVar4[0x5b];
          if (1.0 < local_8c) {
            local_8c = 1.0;
          }
        }
        else {
          local_8c = 1.0;
          local_b8 = (float)param_1[5] * (float)param_1[5] + (float)local_b0 +
                     (float)param_1[6] * (float)param_1[6];
          if (local_b8 <= 0.0) {
            FUN_00dd5650(&DAT_0163d0ac);
            local_a0 = 0.0;
            local_9c = 1.0;
            local_98 = 0.0;
          }
          else {
            FUN_00ddf460(&local_a0,pfVar1);
          }
          fVar2 = (float)puVar4[0x5b];
          local_b0 = (double)CONCAT44(local_9c * fVar2,fVar2 * local_a0);
          local_a8 = local_98 * fVar2;
          local_a4 = fVar2 * local_94;
          *pfVar1 = fVar2 * local_a0;
          param_1[5] = (int)(local_9c * fVar2);
          param_1[6] = (int)local_a8;
          param_1[7] = (int)local_a4;
        }
      }
      fVar2 = 1.0 - local_8c;
      local_b8 = (float)puVar4[0xd];
      local_b0._0_4_ = fVar2;
      if (local_88 != 1.0) {
        if (local_b8 < 2.0) {
          local_b8 = local_b8 / ((local_88 - local_b8 * local_88) + local_b8);
        }
        else {
          fVar6 = (float10)FUN_00fdc1f0();
          local_b8 = (float)fVar6;
        }
      }
      local_b0._0_4_ = local_b8 * local_8c + (float)local_b0;
      *pfVar1 = (float)local_b0 * *pfVar1;
      param_1[5] = (int)((float)local_b0 * (float)param_1[5]);
      param_1[6] = (int)((float)local_b0 * (float)param_1[6]);
      param_1[7] = (int)((float)local_b0 * (float)param_1[7]);
      iVar5 = local_64;
    }
  }
  fVar2 = (float)(int)puVar4[0x1f];
  if ((int)puVar4[0x1f] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (((fVar2 <= (float)local_b4) && ((*puVar4 & 0x40000) != 0)) &&
     ((*(byte *)(iVar5 + 0x30) & 0x40) == 0)) {
    local_b0 = *(double *)(iVar5 + 0x140);
    local_a8 = *(float *)(iVar5 + 0x148);
    local_a4 = *(float *)(iVar5 + 0x14c);
    if (*(int *)(local_64 + 0x50) == 0) {
      if (local_84[3] != 0) {
        D3DXMatrixInverse(local_60,0,local_84[2]);
        D3DXVec3TransformNormal(auStack_bc,iVar5 + 0x140,auStack_6c);
      }
      local_a0 = (float)local_b0 * local_88;
      local_9c = local_b0._4_4_ * local_88;
      local_98 = local_a8 * local_88;
      local_94 = local_a4 * local_88;
      if ((float)puVar4[0x5e] == 0.0) {
        param_1[4] = (int)(local_a0 + (float)param_1[4]);
        param_1[5] = (int)(local_9c + (float)param_1[5]);
        param_1[6] = (int)(local_98 + (float)param_1[6]);
        param_1[7] = (int)(local_94 + (float)param_1[7]);
      }
      else {
        local_84 = (int *)puVar4[0x5e];
        if (local_88 != 1.0) {
          if ((float)local_84 < 2.0) {
            local_84 = (int *)((float)local_84 /
                              ((local_88 - (float)local_84 * local_88) + (float)local_84));
          }
          else {
            fVar6 = (float10)FUN_00fdc1f0();
            local_84 = (int *)(float)fVar6;
          }
        }
        local_b4 = local_84;
        local_84 = local_b4;
        local_b0 = (double)CONCAT44(local_9c * (float)local_b4,(float)local_b4 * local_a0);
        local_a8 = local_98 * (float)local_b4;
        local_a4 = (float)local_b4 * local_94;
        param_1[4] = (int)((float)local_b4 * local_a0 + (float)param_1[4]);
        param_1[5] = (int)(local_9c * (float)local_b4 + (float)param_1[5]);
        param_1[6] = (int)(local_a8 + (float)param_1[6]);
        param_1[7] = (int)(local_a4 + (float)param_1[7]);
      }
    }
    else {
      local_a0 = *(float *)(iVar5 + 0x140) * local_88;
      local_9c = *(float *)(iVar5 + 0x144) * local_88;
      local_98 = local_a8 * local_88;
      local_94 = local_a4 * local_88;
      if ((float)puVar4[0x5e] == 0.0) {
        param_1[4] = (int)((float)param_1[4] + local_a0);
        param_1[5] = (int)(local_9c + (float)param_1[5]);
        param_1[6] = (int)(local_98 + (float)param_1[6]);
        param_1[7] = (int)(local_94 + (float)param_1[7]);
      }
      else {
        piVar3 = (int *)puVar4[0x5e];
        if (local_88 != 1.0) {
          local_b0 = (double)CONCAT44(*(float *)(iVar5 + 0x144),piVar3);
          if ((float)piVar3 < 2.0) {
            piVar3 = (int *)((float)piVar3 / ((local_88 - (float)piVar3 * local_88) + (float)piVar3)
                            );
          }
          else {
            fVar6 = (float10)FUN_00fdc1f0();
            piVar3 = (int *)(float)fVar6;
          }
        }
        local_b4 = piVar3;
        local_b0 = (double)CONCAT44(local_9c * (float)local_b4,(float)local_b4 * local_a0);
        local_a8 = local_98 * (float)local_b4;
        local_a4 = (float)local_b4 * local_94;
        param_1[4] = (int)((float)param_1[4] + (float)local_b4 * local_a0);
        param_1[5] = (int)(local_9c * (float)local_b4 + (float)param_1[5]);
        param_1[6] = (int)(local_a8 + (float)param_1[6]);
        param_1[7] = (int)(local_a4 + (float)param_1[7]);
      }
    }
  }
  iVar5 = *param_1;
  param_1[4] = (int)((float)param_1[4] + local_80);
  param_1[5] = (int)(local_7c + (float)param_1[5]);
  param_1[6] = (int)(local_78 + (float)param_1[6]);
  param_1[7] = (int)((float)param_1[7] + local_74);
  local_a0 = (float)param_1[4] * local_88;
  local_9c = local_88 * (float)param_1[5];
  local_98 = local_88 * (float)param_1[6];
  local_94 = local_88 * (float)param_1[7];
  *(float *)(iVar5 + 0x50) = local_a0 + *(float *)(iVar5 + 0x50);
  *(float *)(iVar5 + 0x54) = *(float *)(iVar5 + 0x54) + local_9c;
  *(float *)(iVar5 + 0x58) = *(float *)(iVar5 + 0x58) + local_98;
  *(float *)(iVar5 + 0x5c) = *(float *)(iVar5 + 0x5c) + local_94;
  __security_check_cookie(local_14 ^ (uint)auStack_c4);
  return;
}

// 00EC8C70  FUN_00ec8c70  size=559  [run]
void __thiscall FUN_00ec8c70(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  
  pfVar2 = param_2;
  fVar5 = (float)*(ushort *)(param_2 + 0xf);
  if ((fVar5 == 0.0) && (fVar5 = param_1[4], fVar5 == 0.0)) {
    return;
  }
  param_1[3] = param_1[2];
  param_1[2] = param_3 * (1.0 / fVar5) + param_1[2];
  if ((1.0 < param_1[2]) && (((uint)param_2[0x10] & 0x80000000) != 0)) {
    param_1[3] = param_1[2];
    param_1[2] = param_1[2] - 1.0;
  }
  if ((((uint)param_2[0x10] & 0x40000000) != 0) && (param_1[10] != 0.0)) {
    fVar5 = 0.0;
    if (param_1[10] != 0.0) {
      do {
        param_3 = param_2[(int)fVar5 + 5];
        if (1.0 <= param_3) {
          *param_1 = *param_2 * param_2[(int)fVar5 + 10];
          return;
        }
        if ((param_3 <= param_1[2]) && (param_1[2] < param_2[(int)fVar5 + 6])) {
          fVar1 = (float)(int)fVar5;
          if ((int)fVar5 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          param_2 = (float *)(fVar1 + (param_1[2] - param_3) / (param_2[(int)fVar5 + 6] - param_3));
          pfVar3 = (float *)(**(code **)((int)param_1[5] + 8))(&param_2,param_2);
          *param_1 = *pfVar2 * *pfVar3;
          return;
        }
        fVar5 = (float)((int)fVar5 + 1);
      } while ((uint)fVar5 < (uint)param_1[10]);
    }
    *param_1 = *param_2 * 0.0;
    return;
  }
  uVar4 = 0;
  while( true ) {
    if (1.0 < param_2[uVar4 + 5] != (param_2[uVar4 + 5] == 1.0)) {
      *param_1 = *param_2 * param_2[uVar4 + 10];
      return;
    }
    if ((param_2[uVar4 + 5] < param_1[2] != (param_2[uVar4 + 5] == param_1[2])) &&
       (param_1[2] < param_2[uVar4 + 6])) break;
    uVar4 = uVar4 + 1;
    if (4 < uVar4) {
      *param_1 = *param_2 * 0.0;
      return;
    }
  }
  fVar5 = (param_1[2] - param_2[uVar4 + 5]) / (param_2[uVar4 + 6] - param_2[uVar4 + 5]);
  *param_1 = *param_2 * ((1.0 - fVar5) * param_2[uVar4 + 10] + param_2[uVar4 + 0xb] * fVar5);
  return;
}

// 00EC8EA0  FUN_00ec8ea0  size=549  [run]
void __thiscall FUN_00ec8ea0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  
  pfVar2 = param_2;
  fVar5 = (float)*(ushort *)(param_2 + 0xe);
  if ((fVar5 == 0.0) && (fVar5 = param_1[3], fVar5 == 0.0)) {
    return;
  }
  param_1[2] = param_1[1];
  param_1[1] = param_3 * (1.0 / fVar5) + param_1[1];
  if ((1.0 < param_1[1]) && (((uint)param_2[0xf] & 0x80000000) != 0)) {
    param_1[2] = param_1[1];
    param_1[1] = param_1[1] - 1.0;
  }
  if (((uint)param_2[0xf] & 0x40000000) == 0) {
    uVar4 = 0;
    while( true ) {
      if (1.0 < param_2[uVar4 + 4] != (param_2[uVar4 + 4] == 1.0)) {
        *param_1 = *param_2 * param_2[uVar4 + 9];
        return;
      }
      if ((param_2[uVar4 + 4] < param_1[1] != (param_2[uVar4 + 4] == param_1[1])) &&
         (param_1[1] < param_2[uVar4 + 5])) break;
      uVar4 = uVar4 + 1;
      if (4 < uVar4) {
        *param_1 = *param_2 * 0.0;
        return;
      }
    }
    fVar5 = (param_1[1] - param_2[uVar4 + 4]) / (param_2[uVar4 + 5] - param_2[uVar4 + 4]);
    *param_1 = *param_2 * ((1.0 - fVar5) * param_2[uVar4 + 9] + param_2[uVar4 + 10] * fVar5);
    return;
  }
  fVar5 = 0.0;
  if (param_1[9] != 0.0) {
    do {
      param_3 = param_2[(int)fVar5 + 4];
      if (1.0 <= param_3) {
        *param_1 = *param_2 * param_2[(int)fVar5 + 9];
        return;
      }
      if ((param_3 <= param_1[1]) && (param_1[1] < param_2[(int)fVar5 + 5])) {
        fVar1 = (float)(int)fVar5;
        if ((int)fVar5 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        param_2 = (float *)(fVar1 + (param_1[1] - param_3) / (param_2[(int)fVar5 + 5] - param_3));
        pfVar3 = (float *)(**(code **)((int)param_1[4] + 8))(&param_2,param_2);
        *param_1 = *pfVar2 * *pfVar3;
        return;
      }
      fVar5 = (float)((int)fVar5 + 1);
    } while ((uint)fVar5 < (uint)param_1[9]);
  }
  *param_1 = *param_2 * 0.0;
  return;
}

// 00EC90D0  FUN_00ec90d0  size=416  [run]
undefined4 __thiscall
FUN_00ec90d0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  
  uVar1 = *param_2;
  *(ushort *)(param_1 + 2) = uVar1;
  uVar4 = (uint)uVar1;
  *param_1 = 0;
  if (((uVar4 < 0xfc) || (0x11f < uVar4)) ||
     (iVar5 = DAT_01eddb74 + (uVar4 - 0xfc) * 0x1c, iVar5 == 0)) {
    iVar5 = FUN_00f20580(uVar4,param_1,param_4);
    if (iVar5 == 0) {
      return 0;
    }
    param_1[1] = *param_1 + 8;
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(*param_1 + 0x14);
  }
  else {
    param_1[1] = iVar5;
    *(undefined2 *)((int)param_1 + 0xe) = 1;
  }
  *(char *)((int)param_1 + 10) = (char)param_2[8];
  *(ushort *)(param_1 + 3) = (ushort)(byte)param_2[8];
  param_1[7] = *(int *)(param_2 + 6);
  param_1[5] = (int)(float)(int)(short)param_2[2];
  if (param_2[3] != 0) {
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    param_4._0_2_ = (short)(int)ROUND((float)((short)param_2[3] + 1) * (float)fVar7 * 0.999);
    *(short *)(param_1 + 3) = (short)param_1[3] + (short)param_4;
  }
  if (*(ushort *)((int)param_1 + 0xe) <= *(ushort *)(param_1 + 3)) {
    *(ushort *)(param_1 + 3) = *(ushort *)((int)param_1 + 0xe) - 1;
  }
  bVar6 = *(char *)((int)param_1 + 0xe) - 1;
  if ((param_2[1] == 0) ||
     (bVar3 = ((char)param_2[1] + (char)param_2[8]) - 1, *(byte *)((int)param_1 + 0xb) = bVar3,
     bVar6 < bVar3)) {
    *(byte *)((int)param_1 + 0xb) = bVar6;
  }
  param_1[4] = (int)(float)*(ushort *)(param_1 + 3);
  uVar1 = param_2[4];
  fVar2 = (float)(int)(short)uVar1 * 0.01;
  if (param_2[5] != 0) {
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    fVar2 = (float)(int)(short)param_2[5] * 0.01 * (float)fVar7 + (float)(int)(short)uVar1 * 0.01;
  }
  param_2 = (ushort *)fVar2;
  param_1[6] = (int)param_2;
  return 1;
}

// 00EC9270  FUN_00ec9270  size=550  [run]
/* WARNING: Removing unreachable block (ram,0x00ec9356) */
/* WARNING: Removing unreachable block (ram,0x00ec92a4) */
/* WARNING: Removing unreachable block (ram,0x00ec930a) */
/* WARNING: Removing unreachable block (ram,0x00ec939a) */

undefined4 __thiscall FUN_00ec9270(float *param_1,float *param_2,uint *param_3)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  float10 fVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = *param_3 * 0x19660d + 0x3c6ef35f;
  *param_3 = uVar3;
  param_1[2] = param_2[2] * 0.001 +
               param_2[8] * 0.001 * (1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0);
  uVar3 = *param_3 * 0x19660d + 0x3c6ef35f;
  *param_3 = uVar3;
  param_1[3] = param_2[9] * 0.001 * (1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0) +
               param_2[3] * 0.001;
  uVar3 = *param_3 * 0x19660d + 0x3c6ef35f;
  *param_3 = uVar3;
  param_1[4] = (1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0) * param_2[6] + param_2[4];
  uVar3 = *param_3 * 0x19660d + 0x3c6ef35f;
  *param_3 = uVar3;
  param_1[5] = (1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0) * param_2[7] + param_2[5];
  if (param_2[10] == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = param_2[10];
  }
  param_1[7] = fVar1;
  param_1[8] = param_2[0xb];
  fVar4 = (float10)FUN_00fe090a();
  param_1[9] = (float)fVar4 + 0.0;
  if ((*param_1 == 0.0) && (param_1[1] == 0.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    param_1[6] = (float)((uint)param_1[6] | 1);
  }
  else {
    param_1[6] = (float)((uint)param_1[6] & 0xfffffffe);
  }
  if ((param_1[2] == 0.0) && (param_1[3] == 0.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    param_1[6] = (float)((uint)param_1[6] | 2);
    return 1;
  }
  param_1[6] = (float)((uint)param_1[6] & 0xfffffffd);
  return 1;
}

// 00EC94A0  FUN_00ec94a0  size=133  [run]
void FUN_00ec94a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00f8f040();
  local_34 = *param_1;
  local_30 = param_1[1];
  local_2c = param_1[2];
  local_28 = param_1[3];
  local_24 = param_1[4];
  local_20 = param_1[5];
  local_1c = param_1[6];
  local_18 = param_1[7];
  local_14 = param_1[8];
  local_10 = param_1[9];
  local_c = param_1[10];
  local_8 = param_1[0xb];
  local_4 = param_1[0xc];
  FUN_00ec9270(&local_34,param_2);
  return;
}

// 00EC9530  FUN_00ec9530  size=300  [run]
void __thiscall FUN_00ec9530(int param_1,float param_2)

{
  float10 fVar1;
  float local_8 [2];
  
  if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
    if (*(float *)(param_1 + 0x20) <= 0.0) {
      local_8[0] = *(float *)(param_1 + 0x1c);
      if (param_2 != 1.0) {
        if (local_8[0] < 2.0) {
          local_8[0] = local_8[0] / ((param_2 - local_8[0] * param_2) + local_8[0]);
        }
        else {
          fVar1 = (float10)FUN_00fdc1f0();
          local_8[0] = (float)fVar1;
        }
      }
      *(float *)(param_1 + 8) = local_8[0] * *(float *)(param_1 + 8);
      *(float *)(param_1 + 0xc) = local_8[0] * *(float *)(param_1 + 0xc);
    }
    else {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - param_2;
    }
    if (*(float *)(param_1 + 8) != 0.0) {
      local_8[0] = param_2 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x10);
      fVar1 = (float10)FUN_00fe0930((double)local_8[0],local_8);
      local_8[0] = (float)fVar1;
      *(float *)(param_1 + 0x10) = local_8[0];
    }
    if (*(float *)(param_1 + 0xc) != 0.0) {
      fVar1 = (float10)FUN_00fe0930((double)(param_2 * *(float *)(param_1 + 0xc) +
                                            *(float *)(param_1 + 0x14)),local_8);
      *(float *)(param_1 + 0x14) = (float)fVar1;
      return;
    }
  }
  return;
}

// 00EC96C0  FUN_00ec96c0  size=56  [run]
int __fastcall FUN_00ec96c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x3000);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 0;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00EC9700  FUN_00ec9700  size=56  [run]
int __fastcall FUN_00ec9700(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x3000);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 0;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

