// src/ui/cUIEx0002.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB4210..00CFBA90, 9 functions

#include "types.h"

// 00CB4210  cUIEx0002::vf04  size=35  [class]
void __fastcall cUIEx0002::vf04(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00CB4250  cUIEx0002::vf0C  size=8  [class]
void __fastcall cUIEx0002::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

// 00CB4260  FUN_00cb4260  size=360  [callgraph]
undefined4 FUN_00cb4260(float param_1,float param_2,float param_3)

{
  undefined1 *puStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  fStack_94 = param_2;
  fStack_98 = 0.0;
  puStack_9c = local_50;
  D3DXMatrixInverse();
  D3DXMatrixMultiply();
  if (((((ABS((float)&puStack_9c - 1.0) <= param_3) &&
        (ABS(param_1) < param_3 != (ABS(param_1) == param_3))) &&
       (ABS((float)auStack_5c) < param_3 != (ABS((float)auStack_5c) == param_3))) &&
      (((ABS((float)puStack_9c) < param_3 != (ABS((float)puStack_9c) == param_3) &&
        (ABS(fStack_98) < param_3 != (ABS(fStack_98) == param_3))) &&
       ((ABS(fStack_94 - 1.0) < param_3 != (ABS(fStack_94 - 1.0) == param_3) &&
        ((ABS(fStack_90) < param_3 != (ABS(fStack_90) == param_3) &&
         (ABS(fStack_8c) < param_3 != (ABS(fStack_8c) == param_3))))))))) &&
     ((ABS(fStack_88) < param_3 != (ABS(fStack_88) == param_3) &&
      (((((ABS(fStack_84) < param_3 != (ABS(fStack_84) == param_3) &&
          (ABS(fStack_80 - 1.0) < param_3 != (ABS(fStack_80 - 1.0) == param_3))) &&
         (ABS(fStack_7c) < param_3 != (ABS(fStack_7c) == param_3))) &&
        ((ABS(fStack_78) < param_3 != (ABS(fStack_78) == param_3) &&
         (ABS(fStack_74) < param_3 != (ABS(fStack_74) == param_3))))) &&
       ((ABS(fStack_70) < param_3 != (ABS(fStack_70) == param_3) &&
        (ABS(fStack_6c - 1.0) < param_3 != (ABS(fStack_6c - 1.0) == param_3))))))))) {
    return 1;
  }
  return 0;
}

// 00CB43D0  FUN_00cb43d0  size=50  [callgraph]
undefined4 FUN_00cb43d0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
          (*param_2 - *param_1) * (*param_2 - *param_1);
  if (fVar1 < param_3 != (fVar1 == param_3)) {
    return 1;
  }
  return 0;
}

// 00CB4410  FUN_00cb4410  size=166  [callgraph]
void __thiscall FUN_00cb4410(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar3 = 0;
        do {
          puVar5 = param_2;
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar3);
          for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar1 = *(int *)(param_1 + 0xc);
          *(undefined4 *)(iVar3 + 0x44 + iVar1) = *param_3;
          *(undefined4 *)(iVar3 + 0x48 + iVar1) = param_3[1];
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x50;
        } while (uVar4 < *(uint *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    if (iVar3 != 0) {
      iVar1 = iVar3 * 0x50;
      do {
        puVar5 = (undefined4 *)(iVar1 + *(int *)(param_1 + 0xc));
        puVar6 = puVar5 + -0x14;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar2 = *(int *)(param_1 + 0xc) + iVar1;
        *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 0xc) + -0xc + iVar1);
        iVar1 = iVar1 + -0x50;
        iVar3 = iVar3 + -1;
        *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + -8);
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar3 + 0x44) = *param_3;
    *(undefined4 *)(iVar3 + 0x48) = param_3[1];
  }
  return;
}

// 00CC5C50  cUIEx0002::cUIEx0002  size=81  [class]
undefined4 * cUIEx0002::cUIEx0002(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0x2c,0x20,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x2c);
  _Dst[9] = 0;
  _Dst[2] = 0;
  _Dst[10] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  *_Dst = vftable;
  return _Dst;
}

// 00CCF7B0  cUIEx0002::vf00  size=31  [class]
undefined4 * __thiscall cUIEx0002::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIExtendObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCF7D0  cUIEx0002::vf08  size=245  [class]
void __thiscall cUIEx0002::vf08(int param_1,uint *param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = *param_2 & ((int)*param_2 < 1) - 1;
  *(uint *)(param_1 + 0x10) = uVar5;
  if (1 < uVar5) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00dd4940(*(int *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x50;
    uVar6 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_3);
    *(undefined4 *)(param_1 + 0xc) = uVar6;
  }
  uVar5 = (int)param_2[1] >> 0x1f;
  *(uint *)(param_1 + 0x1c) = (uint)((param_2[1] ^ uVar5) != uVar5);
  *(uint *)(param_1 + 0x14) = param_2[2] & ((int)param_2[2] < 1) - 1;
  uVar5 = (int)param_2[3] >> 0x1f;
  *(uint *)(param_1 + 0x20) = (uint)((param_2[3] ^ uVar5) != uVar5);
  *(undefined4 *)(param_1 + 0x18) = 0;
  fVar1 = (float)param_2[6];
  fVar3 = 0.0;
  if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 < fVar1)) {
    fVar3 = 1.0;
  }
  fVar4 = 0.0;
  *(float *)(param_1 + 0x24) = fVar3;
  fVar1 = (float)param_2[7];
  if ((0.0 <= fVar1) && (fVar4 = fVar1, 1.0 < fVar1)) {
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
  *(float *)(param_1 + 0x28) = fVar4;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

// 00CFBA90  cUIEx0002::vf1C  size=584  [class]
void __thiscall cUIEx0002::vf1C(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint uStack_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  undefined4 local_a0 [19];
  float fStack_54;
  float fStack_44;
  
  local_ac = 0;
  local_a8 = 0;
  local_b0 = (int *)0x0;
  local_a4 = (int *)0x0;
  FUN_00ce7fd0(param_3);
  if (param_4 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*param_4 + 8))();
  if (iVar3 == 3) {
    local_b0 = param_4;
  }
  else {
    if (iVar3 != 4) goto LAB_00cfbaf6;
    local_a4 = param_4;
  }
  local_ac = param_4[6];
  local_a8 = param_4[7];
LAB_00cfbaf6:
  if ((*(int *)(param_1 + 0xc) == 0) || (*(uint *)(param_1 + 0x10) < 2)) {
    (**(code **)(*param_4 + 0x14))(param_2,param_3);
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x18)) {
      FUN_00cb4410(param_3,&local_ac);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    puVar6 = param_3;
    puVar8 = *(undefined4 **)(param_1 + 0xc);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar3 = 0;
      do {
        fVar2 = (float)(int)uVar7;
        if ((int)uVar7 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        fVar1 = (float)*(int *)(param_1 + 0x10);
        if (*(int *)(param_1 + 0x10) < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        *(float *)(iVar3 + 0x40 + *(int *)(param_1 + 0xc)) =
             (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * (fVar2 / fVar1) +
             *(float *)(param_1 + 0x24);
        if ((*(int *)(param_1 + 0x20) == 0) && (uVar7 != 0)) {
          if ((local_b0 == (int *)0x0) && (local_a4 == (int *)0x0)) {
            iVar4 = FUN_00cb4260(param_3,*(int *)(param_1 + 0xc) + iVar3,0x3dcccccd);
            if (iVar4 != 0) {
              *(undefined4 *)(iVar3 + 0x40 + *(int *)(param_1 + 0xc)) = 0;
            }
          }
          else {
            iVar4 = FUN_00cb4260(param_3,*(int *)(param_1 + 0xc) + iVar3,0x3dcccccd);
            if (iVar4 != 0) {
              uVar9 = FUN_00cb43d0(&local_ac,iVar3 + *(int *)(param_1 + 0xc) + 0x44,0x3a83126f);
              if ((int)uVar9 != 0) {
                *(undefined4 *)((int)((ulonglong)uVar9 >> 0x20) + 0x40) = 0;
              }
            }
          }
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 0x50;
      } while (uVar7 < *(uint *)(param_1 + 0x10));
    }
    uStack_b4 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        uVar7 = uStack_b4;
        if (*(int *)(param_1 + 0x1c) != 0) {
          uVar7 = (*(int *)(param_1 + 0x10) - uStack_b4) - 1;
        }
        puVar5 = (undefined4 *)(uVar7 * 0x50 + *(int *)(param_1 + 0xc));
        puVar6 = puVar5;
        puVar8 = local_a0;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        fStack_54 = (float)param_3[0x13] * (float)puVar5[0x10];
        fStack_44 = (float)param_3[0x17] * (float)puVar5[0x10];
        if (local_b0 != (int *)0x0) {
          iVar3 = puVar5[0x12];
          local_b0[6] = puVar5[0x11];
          local_b0[7] = iVar3;
        }
        if (local_a4 != (int *)0x0) {
          iVar3 = puVar5[0x12];
          local_a4[6] = puVar5[0x11];
          local_a4[7] = iVar3;
        }
        if (0.0 < fStack_54) {
          (**(code **)(*param_4 + 0x14))(param_2,local_a0);
        }
        uStack_b4 = uStack_b4 + 1;
      } while (uStack_b4 < *(uint *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

