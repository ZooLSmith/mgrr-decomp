// src/unsorted/unit_00EDB1A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDB1A0..00EDC5C0, 12 functions

#include "types.h"

// 00EDB1A0  FUN_00edb1a0  size=203  [run]
undefined4 FUN_00edb1a0(undefined4 *param_1,int *param_2)

{
  float fVar1;
  float *pfVar2;
  uint *puVar3;
  
  if ((param_2[2] != 0) &&
     (fVar1 = (float)param_2[2], fVar1 < *(float *)param_1[1] != (fVar1 == *(float *)param_1[1]))) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x80000000;
    return 0;
  }
  if (((*(byte *)(*param_2 + 7) & 1) == 0) && ((*(uint *)*param_1 & 0x2000) == 0)) {
    fVar1 = (float)param_2[3];
  }
  else {
    fVar1 = *(float *)(param_2[1] + 0x24);
  }
  pfVar2 = (float *)param_1[1];
  pfVar2[1] = *pfVar2;
  puVar3 = (uint *)*param_1;
  *pfVar2 = *pfVar2 + fVar1;
  if ((*puVar3 & 0x10) != 0) {
    pfVar2 = (float *)param_1[2];
    if (*pfVar2 <= 0.0) {
      fVar1 = *(float *)(param_2[1] + 0x24);
      pfVar2 = (float *)param_1[3];
      pfVar2[1] = *pfVar2;
      *pfVar2 = *pfVar2 + -fVar1;
      if (*pfVar2 <= 0.0) {
        *puVar3 = *puVar3 | 0x80000000;
        return 0;
      }
    }
    else {
      fVar1 = *(float *)(param_2[1] + 0x24);
      pfVar2[1] = *pfVar2;
      *pfVar2 = *pfVar2 + -fVar1;
    }
  }
  return 1;
}

// 00EDB270  FUN_00edb270  size=239  [run]
undefined4 __thiscall FUN_00edb270(int param_1,int param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x120) != 0) &&
     (fVar1 = (float)*(int *)(param_1 + 0x120),
     fVar1 < *(float *)(param_1 + 0x118) != (fVar1 == *(float *)(param_1 + 0x118)))) {
LAB_00edb290:
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return 0;
  }
  if (((*(byte *)(param_1 + 0x3f) & 1) == 0) && ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    fVar1 = *(float *)(param_1 + 0x110);
  }
  else {
    fVar1 = *(float *)(param_2 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x118);
  *(float *)(param_1 + 0x118) = fVar1 + *(float *)(param_1 + 0x118);
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
    if (0.0 < *(float *)(param_1 + 0x94)) {
      fVar1 = *(float *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
      *(float *)(param_1 + 0x94) = -fVar1 + *(float *)(param_1 + 0x94);
      return 1;
    }
    fVar1 = *(float *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) + -fVar1;
    if (*(float *)(param_1 + 0x9c) <= 0.0) goto LAB_00edb290;
  }
  return 1;
}

// 00EDB3C0  FUN_00edb3c0  size=80  [run]
void __thiscall FUN_00edb3c0(int param_1,int param_2)

{
  if ((((*(byte *)(param_1 + 0x6c) & 1) == 0) && ((*(byte *)(param_1 + 0x38) & 2) == 0)) &&
     ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    *(float *)(param_1 + 0x110) = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x20);
    return;
  }
  *(float *)(param_1 + 0x110) = *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20);
  return;
}

// 00EDB410  FUN_00edb410  size=897  [run]
undefined4 __thiscall FUN_00edb410(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  float10 fVar6;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)((int)param_2 + 4);
  if ((*(float *)(param_1 + 0x118) <=
       (float)(int)*(short *)(iVar2 + 0xea) + (float)(int)*(short *)(iVar2 + 0xe8)) ||
     ((float)(int)*(short *)(iVar2 + 0xe8) == 0.0)) {
    if (*(float *)(param_1 + 0x274) == 0.0) {
      fVar1 = (float)*(int *)(param_1 + 0x120);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x274);
    }
    if (fVar1 != 0.0) {
      fVar3 = *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x270);
      *(float *)(param_1 + 0x270) = fVar3;
      if ((*(uint *)(iVar2 + 0x140) & 0x80000000) == 0) {
        if (fVar3 <= fVar1) {
          *(float *)(param_1 + 0x270) = fVar3;
        }
        else {
          *(float *)(param_1 + 0x270) = fVar1;
        }
      }
      else if (fVar1 <= fVar3) {
        fVar6 = (float10)FUN_00dde300(0,0x3f800000);
        *(float *)(param_1 + 0x274) =
             (float)*(ushort *)(iVar2 + 0x13c) + (float)*(byte *)(iVar2 + 0x13f) * (float)fVar6;
        if ((*(uint *)(param_1 + 0x34) & 0x8000000) == 0) {
          *(float *)(param_1 + 0x270) = *(float *)(param_1 + 0x270) - fVar1;
        }
        else {
          *(undefined4 *)(param_1 + 0x270) = 0;
        }
      }
      local_10 = *(float *)(iVar2 + 0xfc);
      uVar5 = 0;
      local_c = *(float *)(iVar2 + 0x100);
      local_8 = *(float *)(iVar2 + 0x104);
      local_4 = *(float *)(iVar2 + 0x108);
      param_2 = 0.0;
      pfVar4 = (float *)(iVar2 + 0x100);
      do {
        fVar3 = *(float *)(iVar2 + 0xec + uVar5 * 4) * fVar1;
        if (*(float *)(param_1 + 0x270) <= fVar3) {
          if (fVar3 - param_2 == 0.0) {
            fVar1 = 0.0;
          }
          else {
            fVar1 = 1.0 / (fVar3 - param_2);
          }
          iVar2 = iVar2 + 0xec + uVar5 * 0x10;
          fVar1 = fVar1 * (*(float *)(param_1 + 0x270) - param_2);
          fVar3 = 1.0 - fVar1;
          local_10 = fVar3 * local_10 + *(float *)(iVar2 + 0x10) * fVar1;
          local_c = fVar3 * local_c + *(float *)(iVar2 + 0x14) * fVar1;
          local_8 = fVar3 * local_8 + *(float *)(iVar2 + 0x18) * fVar1;
          local_4 = fVar3 * local_4 + *(float *)(iVar2 + 0x1c) * fVar1;
          break;
        }
        uVar5 = uVar5 + 1;
        local_10 = pfVar4[-1];
        local_c = *pfVar4;
        local_8 = pfVar4[1];
        local_4 = pfVar4[2];
        pfVar4 = pfVar4 + 4;
        param_2 = fVar3;
      } while (uVar5 < 4);
      *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x240) * local_10;
      *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x244) * local_c;
      *(float *)(param_1 + 600) = *(float *)(param_1 + 0x248) * local_8;
      *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x24c) * local_4;
      return 1;
    }
  }
  else if (*(float *)(iVar2 + 0x144) != 1.0) {
    fVar1 = *(float *)(iVar2 + 0x144);
    fVar1 = (fVar1 / ((*(float *)(param_1 + 0x110) - fVar1 * *(float *)(param_1 + 0x110)) + fVar1))
            * *(float *)(param_1 + 0x25c);
    *(float *)(param_1 + 0x25c) = fVar1;
    if (fVar1 < 0.01) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return 0;
    }
  }
  return 1;
}

// 00EDB7A0  FUN_00edb7a0  size=696  [run]
void FUN_00edb7a0(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float local_24;
  
  iVar5 = *(int *)(*(int *)(param_2 + 8) + 4);
  if (*(float *)(iVar5 + 0x98) != 1.0) {
    fVar1 = *(float *)(param_2 + 0x10);
    if (fVar1 == 1.0) {
      local_24 = *(float *)(iVar5 + 0x98);
    }
    else {
      local_24 = *(float *)(iVar5 + 0x98);
      if (local_24 < 2.0) {
        local_24 = local_24 / ((fVar1 - local_24 * fVar1) + local_24);
      }
      else {
        fVar8 = (float10)FUN_00fdc1f0();
        local_24 = (float)fVar8;
      }
    }
    *(float *)param_1[1] = local_24 * *(float *)param_1[1];
  }
  if (*(float *)(iVar5 + 0x9c) != 1.0) {
    fVar1 = *(float *)(param_2 + 0x10);
    if (fVar1 == 1.0) {
      local_24 = *(float *)(iVar5 + 0x9c);
    }
    else {
      local_24 = *(float *)(iVar5 + 0x9c);
      if (local_24 < 2.0) {
        local_24 = local_24 / ((fVar1 - local_24 * fVar1) + local_24);
      }
      else {
        fVar8 = (float10)FUN_00fdc1f0();
        local_24 = (float)fVar8;
      }
    }
    *(float *)(param_1[1] + 4) = *(float *)(param_1[1] + 4) * local_24;
  }
  if (*(float *)(iVar5 + 0xb0) != 1.0) {
    fVar1 = *(float *)(param_2 + 0x10);
    if (fVar1 == 1.0) {
      local_24 = *(float *)(iVar5 + 0xb0);
    }
    else {
      local_24 = *(float *)(iVar5 + 0xb0);
      if (local_24 < 2.0) {
        local_24 = local_24 / ((fVar1 - local_24 * fVar1) + local_24);
      }
      else {
        fVar8 = (float10)FUN_00fdc1f0();
        local_24 = (float)fVar8;
      }
    }
    *(float *)(param_1[1] + 8) = *(float *)(param_1[1] + 8) * local_24;
  }
  if (*(float *)(iVar5 + 0xa4) != 1.0) {
    fVar1 = *(float *)(param_2 + 0x10);
    if (fVar1 == 1.0) {
      *(float *)(param_1[1] + 0xc) = *(float *)(param_1[1] + 0xc) * *(float *)(iVar5 + 0xa4);
    }
    else {
      fVar2 = *(float *)(iVar5 + 0xa4);
      if (fVar2 < 2.0) {
        *(float *)(param_1[1] + 0xc) =
             *(float *)(param_1[1] + 0xc) * (fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2));
      }
      else {
        fVar8 = (float10)FUN_00fdc1f0();
        *(float *)(param_1[1] + 0xc) = *(float *)(param_1[1] + 0xc) * (float)fVar8;
      }
    }
  }
  fVar1 = *(float *)(param_2 + 0x10);
  pfVar6 = (float *)param_1[1];
  pfVar7 = (float *)*param_1;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar4 = pfVar6[3];
  *pfVar7 = fVar1 * *pfVar6 + *pfVar7;
  pfVar7[1] = pfVar7[1] + fVar2 * fVar1;
  pfVar7[2] = pfVar7[2] + fVar3 * fVar1;
  pfVar7[3] = pfVar7[3] + fVar1 * fVar4;
  return;
}

// 00EDBA60  FUN_00edba60  size=717  [run]
void __thiscall FUN_00edba60(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_24;
  
  iVar3 = *(int *)(param_2 + 4);
  if (*(float *)(iVar3 + 0x98) != 1.0) {
    fVar1 = *(float *)(param_1 + 0x110);
    if (fVar1 == 1.0) {
      local_24 = *(float *)(iVar3 + 0x98);
    }
    else {
      local_24 = *(float *)(iVar3 + 0x98);
      if (local_24 < 2.0) {
        local_24 = local_24 / ((fVar1 - local_24 * fVar1) + local_24);
      }
      else {
        fVar4 = (float10)FUN_00fdc1f0();
        local_24 = (float)fVar4;
      }
    }
    *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x260) * local_24;
  }
  if (*(float *)(iVar3 + 0x9c) != 1.0) {
    fVar1 = *(float *)(param_1 + 0x110);
    if (fVar1 == 1.0) {
      local_24 = *(float *)(iVar3 + 0x9c);
    }
    else {
      local_24 = *(float *)(iVar3 + 0x9c);
      if (local_24 < 2.0) {
        local_24 = local_24 / ((fVar1 - local_24 * fVar1) + local_24);
      }
      else {
        fVar4 = (float10)FUN_00fdc1f0();
        local_24 = (float)fVar4;
      }
    }
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x264) * local_24;
  }
  if (*(float *)(iVar3 + 0xb0) != 1.0) {
    fVar1 = *(float *)(param_1 + 0x110);
    if (fVar1 == 1.0) {
      local_24 = *(float *)(iVar3 + 0xb0);
    }
    else {
      local_24 = *(float *)(iVar3 + 0xb0);
      if (local_24 < 2.0) {
        local_24 = local_24 / ((fVar1 - local_24 * fVar1) + local_24);
      }
      else {
        fVar4 = (float10)FUN_00fdc1f0();
        local_24 = (float)fVar4;
      }
    }
    *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) * local_24;
  }
  if (*(float *)(iVar3 + 0xa4) != 1.0) {
    fVar1 = *(float *)(param_1 + 0x110);
    if (fVar1 == 1.0) {
      fVar2 = *(float *)(iVar3 + 0xa4);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0xa4);
      if (fVar2 < 2.0) {
        fVar2 = fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2);
      }
      else {
        fVar4 = (float10)FUN_00fdc1f0();
        fVar2 = (float)fVar4;
      }
    }
    *(float *)(param_1 + 0x26c) = fVar2 * *(float *)(param_1 + 0x26c);
  }
  fVar1 = *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) + fVar1 * *(float *)(param_1 + 0x260);
  *(float *)(param_1 + 500) = *(float *)(param_1 + 500) + *(float *)(param_1 + 0x264) * fVar1;
  *(float *)(param_1 + 0x1f8) = *(float *)(param_1 + 0x1f8) + *(float *)(param_1 + 0x268) * fVar1;
  *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1fc) + fVar1 * *(float *)(param_1 + 0x26c);
  return;
}

// 00EDBD30  FUN_00edbd30  size=244  [run]
void FUN_00edbd30(undefined4 *param_1,byte *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_8;
  
  if (((*param_2 & 0x20) == 0) || ((*(uint *)*param_1 & 0x4000000) == 0)) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x10;
    local_8 = *(float *)(param_2 + 0x10);
    fVar3 = (float)*(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    if (fVar3 != 0.0) {
      local_8 = fVar3;
    }
    fVar3 = (float)*(int *)(param_2 + 8);
    if (*(int *)(param_2 + 8) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    param_2 = (byte *)*(float *)(param_2 + 0xc);
    if (fVar3 != 0.0) {
      param_2 = (byte *)fVar3;
    }
    pfVar1 = (float *)param_1[1];
    if ((*pfVar1 == 0.0) || ((float)param_2 < *pfVar1)) {
      *pfVar1 = (float)param_2;
      pfVar1 = (float *)param_1[2];
      if ((*pfVar1 == 0.0) || ((float)param_2 < *pfVar1)) {
        pfVar2 = (float *)param_1[3];
        *pfVar1 = (float)param_2;
        pfVar1[1] = (float)param_2 - 1.0;
        *pfVar2 = local_8;
        pfVar2[1] = local_8 - 1.0;
        return;
      }
    }
  }
  return;
}

// 00EDBE30  FUN_00edbe30  size=248  [run]
void __thiscall FUN_00edbe30(int param_1,float param_2,float param_3)

{
  float local_4;
  
  if (((*(byte *)(param_1 + 0x6c) & 0x20) == 0) || ((*(uint *)(param_1 + 0x30) & 0x4000000) == 0)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
    local_4 = param_2;
    if ((float10)0 != (float10)*(byte *)(param_1 + 0x40e)) {
      local_4 = (float)*(byte *)(param_1 + 0x40e);
    }
    if (((float10)*(byte *)(param_1 + 0x40f) != (float10)0) &&
       (param_3 = (float)*(byte *)(param_1 + 0x40f), param_3 == 0.0)) {
      param_3 = 1.0;
    }
    if (((*(float *)(param_1 + 0x90) == 0.0) || (param_3 < *(float *)(param_1 + 0x90))) &&
       ((*(float *)(param_1 + 0x90) = param_3, *(float *)(param_1 + 0x9c) == 0.0 ||
        (param_3 < *(float *)(param_1 + 0x9c))))) {
      *(float *)(param_1 + 0x9c) = param_3;
      *(float *)(param_1 + 0xa0) = param_3 - 1.0;
      *(float *)(param_1 + 0x94) = local_4;
      *(float *)(param_1 + 0x98) = local_4 - 1.0;
      return;
    }
  }
  return;
}

// 00EDBF30  FUN_00edbf30  size=262  [run]
float10 FUN_00edbf30(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = param_4 + param_3;
  if (fVar1 != 0.0) {
    fVar2 = (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
            (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
            (*param_1 - *param_2) * (*param_1 - *param_2);
    if (fVar2 < param_3 * param_3) {
      return (float10)0.0;
    }
    if (fVar1 * fVar1 <= fVar2) {
      return (float10)1.0;
    }
    if (0.0 < param_4) {
      fVar3 = (float10)FUN_00fdef70();
      return (float10)(((float)fVar3 - param_3) / param_4);
    }
  }
  return (float10)1.0;
}

// 00EDC040  FUN_00edc040  size=307  [run]
float10 FUN_00edc040(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = param_4 + param_3;
  if (fVar1 != 0.0) {
    fVar2 = (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
            (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
            (*param_1 - *param_2) * (*param_1 - *param_2);
    if (param_4 * param_4 < fVar2) {
      return (float10)0.0;
    }
    if (fVar2 < param_3 * param_3) {
      return (float10)1.0;
    }
    if (fVar2 < fVar1 * fVar1) {
      fVar3 = (float10)FUN_00fdef70(param_4);
      fVar3 = (float10)FUN_00e04780(param_3,(float)fVar3);
      return (float10)(float)((float10)1 - fVar3);
    }
  }
  return (float10)1.0;
}

// 00EDC180  FUN_00edc180  size=1078  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00edc180(undefined4 *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  uint *puVar5;
  float fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float *pfStack_ec;
  float *pfStack_e8;
  float fStack_e4;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 *local_c8;
  undefined1 auStack_c4 [48];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_84 [76];
  uint uStack_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_d4;
  pfVar3 = (float *)*param_1;
  fVar4 = (float)param_2[2];
  local_c8 = param_1;
  fStack_f0 = 2.18345e-38;
  pfStack_ec = pfVar3;
  pfStack_e8 = pfVar3;
  fStack_e4 = fVar4;
  D3DXVec3TransformNormal();
  fVar6 = fStack_d4;
  *pfVar3 = *(float *)((int)fVar4 + 0x30) + *pfVar3;
  pfVar3[1] = *(float *)((int)fVar4 + 0x34) + pfVar3[1];
  pfVar3[2] = *(float *)((int)fVar4 + 0x38) + pfVar3[2];
  fStack_f0 = (float)param_2[2];
  fStack_f8 = *(float *)((int)fStack_d4 + 4);
  fStack_f4 = fStack_f8;
  D3DXVec3TransformNormal();
  D3DXVec3TransformNormal
            (*(undefined4 *)((int)fVar6 + 8),*(undefined4 *)((int)fVar6 + 8),param_2[2]);
  if ((*(byte *)param_2[1] & 1) == 0) {
    puVar5 = (uint *)*param_2;
    if (((((*puVar5 & 0x100000) == 0) && ((*puVar5 & 0x21) == 0)) && ((puVar5[1] & 1) == 0)) &&
       ((puVar5[1] & 0x80000) == 0)) goto LAB_00edc5a1;
    pfVar3 = (float *)param_2[2];
    if ((puVar5[1] & 0x40000000) == 0) {
      if ((_DAT_01ee1210 & 1) == 0) {
        _DAT_01ee1210 = _DAT_01ee1210 | 1;
        _DAT_01ee1200 = 0;
        _DAT_01ee1204 = 0;
        _DAT_01ee1208 = 0;
        _DAT_01ee120c = 0x3f800000;
      }
      FID_conflict__memcpy(auStack_c4,pfVar3,0x40);
      uStack_94 = _DAT_01ee1200;
      uStack_90 = _DAT_01ee1204;
      uStack_8c = _DAT_01ee1208;
    }
    else {
      if ((_DAT_01b7b250 & 1) == 0) {
        _DAT_01b7b250 = _DAT_01b7b250 | 1;
        _DAT_01b7b240 = 0;
        _DAT_01b7b244 = 0;
        _DAT_01b7b248 = 0;
        _DAT_01b7b24c = 0x3f800000;
      }
      pfStack_e8 = (float *)pfVar3[2];
      fVar4 = pfVar3[4];
      fStack_f4 = pfVar3[5];
      fVar1 = pfVar3[6];
      fStack_e4 = pfVar3[8];
      fStack_f0 = pfVar3[9];
      pfStack_ec = (float *)pfVar3[10];
      fStack_f8 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3 + (float)pfStack_e8 * (float)pfStack_e8;
      fVar7 = (float10)FUN_00fdef70();
      fStack_d4 = 1.0 / (float)fVar7;
      fStack_f8 = fStack_f4 * fStack_f4 + fVar4 * fVar4 + fVar1 * fVar1;
      fVar7 = (float10)FUN_00fdef70();
      fStack_d0 = 1.0 / (float)fVar7;
      fStack_f8 = fStack_f0 * fStack_f0 + fStack_e4 * fStack_e4 +
                  (float)pfStack_ec * (float)pfStack_ec;
      fVar7 = (float10)FUN_00fdef70();
      fStack_f8 = (float)fVar7;
      fStack_cc = 1.0 / fStack_f8;
      FUN_00ddd140(auStack_84,&fStack_d4);
      D3DXMatrixMultiply(auStack_c4,auStack_84,pfVar3);
      uStack_94 = _DAT_01b7b240;
      uStack_90 = _DAT_01b7b244;
      uStack_8c = _DAT_01b7b248;
    }
    uVar8 = *(undefined4 *)((int)fVar6 + 0xc);
  }
  else {
    if ((*(uint *)(*param_2 + 4) & 0x40000000) != 0) goto LAB_00edc5a1;
    pfVar3 = (float *)param_2[2];
    fStack_e4 = *pfVar3;
    pfStack_ec = (float *)pfVar3[1];
    fVar4 = pfVar3[4];
    fVar1 = pfVar3[5];
    fStack_f4 = pfVar3[6];
    fVar2 = pfVar3[8];
    pfStack_e8 = (float *)pfVar3[9];
    fStack_f8 = pfVar3[10];
    fStack_f0 = (float)pfStack_ec * (float)pfStack_ec + fStack_e4 * fStack_e4 +
                pfVar3[2] * pfVar3[2];
    fVar7 = (float10)FUN_00fdef70();
    fStack_f0 = (float)fVar7;
    fStack_f4 = fVar1 * fVar1 + fVar4 * fVar4 + fStack_f4 * fStack_f4;
    fStack_d4 = fStack_f0;
    fVar7 = (float10)FUN_00fdef70();
    fStack_f4 = (float)fVar7;
    fStack_f8 = (float)pfStack_e8 * (float)pfStack_e8 + fVar2 * fVar2 + fStack_f8 * fStack_f8;
    fStack_d0 = fStack_f4;
    fVar7 = (float10)FUN_00fdef70();
    fStack_f8 = (float)fVar7;
    fStack_cc = fStack_f8;
    D3DXMatrixScaling(auStack_c4,fStack_d4,fStack_d0,fStack_f8);
    uVar8 = *(undefined4 *)((int)fVar6 + 0xc);
  }
  D3DXMatrixMultiply(uVar8,uVar8,auStack_c4);
LAB_00edc5a1:
  __security_check_cookie(uStack_38 ^ (uint)&fStack_f8);
  return;
}

// 00EDC5C0  FUN_00edc5c0  size=1051  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00edc5c0(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fStack_f8;
  float fStack_f4;
  undefined4 *puStack_f0;
  float *pfStack_ec;
  float *pfStack_e8;
  undefined4 *puStack_e4;
  undefined4 *puStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c4 [48];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_84 [76];
  uint uStack_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&puStack_d4;
  puStack_e4 = param_2;
  pfVar1 = (float *)(param_1 + 0x180);
  puStack_f0 = (undefined4 *)0xedc5f0;
  pfStack_ec = pfVar1;
  pfStack_e8 = pfVar1;
  D3DXVec3TransformNormal();
  fStack_f8 = (float)(param_1 + 0x150);
  puStack_f0 = param_2;
  *pfVar1 = (float)param_2[0xc] + *pfVar1;
  *(float *)(param_1 + 0x184) = (float)param_2[0xd] + *(float *)(param_1 + 0x184);
  *(float *)(param_1 + 0x188) = (float)param_2[0xe] + *(float *)(param_1 + 0x188);
  fStack_f4 = fStack_f8;
  D3DXVec3TransformNormal();
  D3DXVec3TransformNormal(param_1 + 0x160,param_1 + 0x160,param_2);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (((((*(uint *)(param_1 + 0x38) & 0x100000) == 0) && ((*(uint *)(param_1 + 0x38) & 0x21) == 0)
         ) && ((*(uint *)(param_1 + 0x3c) & 1) == 0)) &&
       ((*(uint *)(param_1 + 0x3c) & 0x80000) == 0)) goto LAB_00edc9c4;
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      if ((_DAT_01ee1210 & 1) == 0) {
        _DAT_01ee1210 = _DAT_01ee1210 | 1;
        _DAT_01ee1200 = 0;
        _DAT_01ee1204 = 0;
        _DAT_01ee1208 = 0;
        _DAT_01ee120c = 0x3f800000;
      }
      FID_conflict__memcpy(auStack_c4,param_2,0x40);
      uStack_94 = _DAT_01ee1200;
      uStack_90 = _DAT_01ee1204;
      uStack_8c = _DAT_01ee1208;
    }
    else {
      if ((_DAT_01b7b250 & 1) == 0) {
        _DAT_01b7b250 = _DAT_01b7b250 | 1;
        _DAT_01b7b240 = 0;
        _DAT_01b7b244 = 0;
        _DAT_01b7b248 = 0;
        _DAT_01b7b24c = 0x3f800000;
      }
      pfStack_e8 = (float *)*param_2;
      pfStack_ec = (float *)param_2[2];
      fVar2 = (float)param_2[4];
      fStack_f4 = (float)param_2[5];
      fVar3 = (float)param_2[6];
      puStack_e4 = (undefined4 *)param_2[8];
      puStack_f0 = (undefined4 *)param_2[9];
      fVar4 = (float)param_2[10];
      fStack_f8 = (float)param_2[1] * (float)param_2[1] + (float)pfStack_e8 * (float)pfStack_e8 +
                  (float)pfStack_ec * (float)pfStack_ec;
      fVar5 = (float10)FUN_00fdef70();
      puStack_d4 = (undefined4 *)(1.0 / (float)fVar5);
      fStack_f8 = fStack_f4 * fStack_f4 + fVar2 * fVar2 + fVar3 * fVar3;
      fVar5 = (float10)FUN_00fdef70();
      fStack_d0 = 1.0 / (float)fVar5;
      fStack_f8 = (float)puStack_f0 * (float)puStack_f0 + (float)puStack_e4 * (float)puStack_e4 +
                  fVar4 * fVar4;
      fVar5 = (float10)FUN_00fdef70();
      fStack_f8 = (float)fVar5;
      fStack_cc = 1.0 / fStack_f8;
      FUN_00ddd140(auStack_84,&puStack_d4);
      D3DXMatrixMultiply(auStack_c4,auStack_84,param_2);
      uStack_94 = _DAT_01b7b240;
      uStack_90 = _DAT_01b7b244;
      uStack_8c = _DAT_01b7b248;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0) goto LAB_00edc9c4;
    puStack_e4 = (undefined4 *)*param_2;
    fVar2 = (float)param_2[4];
    fVar3 = (float)param_2[5];
    fStack_f4 = (float)param_2[6];
    pfStack_e8 = (float *)param_2[8];
    pfStack_ec = (float *)param_2[9];
    fStack_f8 = (float)param_2[10];
    puStack_f0 = (undefined4 *)
                 ((float)param_2[1] * (float)param_2[1] + (float)puStack_e4 * (float)puStack_e4 +
                 (float)param_2[2] * (float)param_2[2]);
    fVar5 = (float10)FUN_00fdef70();
    puStack_f0 = (undefined4 *)(float)fVar5;
    fStack_f4 = fVar3 * fVar3 + fVar2 * fVar2 + fStack_f4 * fStack_f4;
    puStack_d4 = puStack_f0;
    fVar5 = (float10)FUN_00fdef70();
    fStack_f4 = (float)fVar5;
    fStack_f8 = (float)pfStack_ec * (float)pfStack_ec + (float)pfStack_e8 * (float)pfStack_e8 +
                fStack_f8 * fStack_f8;
    fStack_d0 = fStack_f4;
    fVar5 = (float10)FUN_00fdef70();
    fStack_f8 = (float)fVar5;
    fStack_cc = fStack_f8;
    D3DXMatrixScaling(auStack_c4,puStack_d4,fStack_d0,fStack_f8);
  }
  D3DXMatrixMultiply(param_1 + 0x200,param_1 + 0x200,auStack_c4);
LAB_00edc9c4:
  __security_check_cookie(uStack_38 ^ (uint)&fStack_f8);
  return;
}

