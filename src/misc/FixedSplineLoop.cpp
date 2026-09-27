// src/misc/FixedSplineLoop.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E78D0..00ECF950, 19 functions

#include "mgrr.h"

// 009E78D0  FixedSplineLoop<float>::vf04  size=177  [class]
void __thiscall FixedSplineLoop<float>::vf04(int param_1,void *param_2,uint param_3)

{
  if (param_3 < 3) {
    FUN_00dd5650(&DAT_0165a7a8,param_3);
    return;
  }
  if (*(uint *)(param_1 + 0x18) < param_3 + 4) {
    FUN_00dd5650(&DAT_0165b140,param_3,*(uint *)(param_1 + 0x18));
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00dd5650(&DAT_0165a738);
    return;
  }
  FID_conflict__memcpy((void *)(*(int *)(param_1 + 0x1c) + 8),param_2,param_3 * 4);
  **(undefined4 **)(param_1 + 0x1c) = *(undefined4 *)((int)param_2 + param_3 * 4 + -0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = *(undefined4 *)((int)param_2 + param_3 * 4 + -8);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8 + param_3 * 4) = *(undefined4 *)((int)param_2 + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc + param_3 * 4) = *(undefined4 *)((int)param_2 + 8);
  StaticSpline<float,18>::vf04(*(undefined4 *)(param_1 + 0x1c),param_3 + 4);
  *(uint *)(param_1 + 0x14) = param_3;
  return;
}

// 009E7990  FixedSplineLoop<float>::vf08  size=163  [class]
void __thiscall FixedSplineLoop<float>::vf08(int param_1,float *param_2,float param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  int local_8;
  
  fVar2 = (float10)FUN_00fddce0((double)param_3);
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)4.2949673e+09;
  }
  if (fVar2 <= (float10)0) {
    fVar2 = (float10)0;
  }
  if (fVar3 < fVar2) {
    fVar2 = fVar3;
  }
  local_8 = (int)(longlong)ROUND(fVar2);
  fVar2 = (float10)param_3 - fVar2;
  *param_2 = (float)((((float10)*(float *)(*(int *)(param_1 + 0x10) + 8 + local_8 * 4) * fVar2 +
                      (float10)*(float *)(*(int *)(param_1 + 0xc) + 8 + local_8 * 4)) * fVar2 +
                     (float10)*(float *)(*(int *)(param_1 + 8) + 8 + local_8 * 4)) * fVar2 +
                    (float10)*(float *)(*(int *)(param_1 + 4) + 8 + local_8 * 4));
  return;
}

// 009E7A40  FUN_009e7a40  size=104  [between]
undefined4 __thiscall FUN_009e7a40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009d4070;
  piVar2[2] = 0x520;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009E7AB0  FUN_009e7ab0  size=104  [between]
undefined4 __thiscall FUN_009e7ab0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009d40e0;
  piVar2[2] = 0x480;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009E7B40  FUN_009e7b40  size=43  [between]
void __fastcall FUN_009e7b40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009E7B70  FUN_009e7b70  size=60  [between]
void __thiscall FUN_009e7b70(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 4;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 009E7C00  FUN_009e7c00  size=43  [between]
void __fastcall FUN_009e7c00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009E7C30  FUN_009e7c30  size=60  [between]
void __thiscall FUN_009e7c30(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 4;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 009E7CC0  FUN_009e7cc0  size=43  [between]
void __fastcall FUN_009e7cc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009E7E80  FUN_009e7e80  size=93  [between]
undefined4 __thiscall FUN_009e7e80(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_009dea10();
  return 1;
}

// 009E7EE0  FUN_009e7ee0  size=65  [between]
void __fastcall FUN_009e7ee0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 009E7F40  FixedSplineLoop<float>::vf00  size=85  [class]
undefined4 * __thiscall FixedSplineLoop<float>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_1[10] != 0) {
    FUN_00dd3d90(param_1[8],0);
    param_1[10] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = Spline<float>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F1D70  FixedSplineLoop<float>::FixedSplineLoop<float>_3  size=1587  [class]
undefined4 __thiscall FixedSplineLoop<float>::FixedSplineLoop<float>_3(int param_1,uint *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  
  if ((*param_2 & 0x80000000) != 0) {
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x100), puVar2 == (undefined4 *)0x0)) {
      puVar7 = (undefined2 *)0x0;
    }
    else {
      puVar7 = (undefined2 *)*puVar2;
      if ((undefined2 *)((int)puVar7 + 0xfU & 0xfffffff0) != puVar7) {
        uVar6 = FUN_00f59ed0(0x10);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0x484);
    uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
    if (uVar3 < 0x20) {
      FUN_00dd5650(&DAT_0165a65c,0x20,uVar3);
LAB_009f1e1f:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
      *(ushort *)(param_1 + 0x484) = uVar1 + 0x20;
      if (puVar2 == (undefined4 *)0x0) goto LAB_009f1e1f;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined2 *)(puVar2 + 3) = 0;
    }
    *(undefined4 **)(param_1 + 0x450) = puVar2;
    iVar4 = FUN_00ec90d0(puVar7,param_1 + 0x114,*(undefined4 *)(param_1 + 100));
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_0165b940,*puVar7);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x488) & 1) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x484);
      uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
      if (uVar3 < 0x30) {
        FUN_00dd5650(&DAT_0165a65c,0x30,uVar3);
LAB_009f1e89:
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
        *(ushort *)(param_1 + 0x484) = uVar1 + 0x30;
        if (puVar2 == (undefined4 *)0x0) goto LAB_009f1e89;
        puVar2[6] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
      }
      *(undefined4 **)(param_1 + 0x45c) = puVar2;
      FUN_00ec9270(puVar7 + 10,param_1 + 0x114);
    }
  }
  if ((*param_2 & 0x40000000) != 0) {
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x110), puVar2 == (undefined4 *)0x0)) {
      puVar7 = (undefined2 *)0x0;
    }
    else {
      puVar7 = (undefined2 *)*puVar2;
      if ((undefined2 *)((int)puVar7 + 0xfU & 0xfffffff0) != puVar7) {
        uVar6 = FUN_00f59ed0(0x11);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0x484);
    uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
    if (uVar3 < 0x20) {
      FUN_00dd5650(&DAT_0165a65c,0x20,uVar3);
LAB_009f1f79:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
      *(ushort *)(param_1 + 0x484) = uVar1 + 0x20;
      if (puVar2 == (undefined4 *)0x0) goto LAB_009f1f79;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined2 *)(puVar2 + 3) = 0;
    }
    *(undefined4 **)(param_1 + 0x454) = puVar2;
    iVar4 = FUN_00ec90d0(puVar7,param_1 + 0x114,*(undefined4 *)(param_1 + 100));
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_0165b8f8,*puVar7);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x488) & 2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x484);
      uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
      if (uVar3 < 0x30) {
        FUN_00dd5650(&DAT_0165a65c,0x30,uVar3);
LAB_009f1fe3:
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
        *(ushort *)(param_1 + 0x484) = uVar1 + 0x30;
        if (puVar2 == (undefined4 *)0x0) goto LAB_009f1fe3;
        puVar2[6] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
      }
      *(undefined4 **)(param_1 + 0x460) = puVar2;
      FUN_00ec9270(puVar7 + 10,param_1 + 0x114);
    }
  }
  if ((*param_2 & 0x20000000) != 0) {
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x120), puVar2 == (undefined4 *)0x0)) {
      puVar7 = (undefined2 *)0x0;
    }
    else {
      puVar7 = (undefined2 *)*puVar2;
      if ((undefined2 *)((int)puVar7 + 0xfU & 0xfffffff0) != puVar7) {
        uVar6 = FUN_00f59ed0(0x12);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0x484);
    uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
    if (uVar3 < 0x20) {
      FUN_00dd5650(&DAT_0165a65c,0x20,uVar3);
LAB_009f20d3:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
      *(ushort *)(param_1 + 0x484) = uVar1 + 0x20;
      if (puVar2 == (undefined4 *)0x0) goto LAB_009f20d3;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined2 *)(puVar2 + 3) = 0;
    }
    *(undefined4 **)(param_1 + 0x458) = puVar2;
    iVar4 = FUN_00ec90d0(puVar7,param_1 + 0x114,*(undefined4 *)(param_1 + 100));
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_0165b8a8,*puVar7);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x488) & 4) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x484);
      uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
      if (uVar3 < 0x30) {
        FUN_00dd5650(&DAT_0165a65c,0x30,uVar3);
LAB_009f2141:
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
        *(ushort *)(param_1 + 0x484) = uVar1 + 0x30;
        if (puVar2 == (undefined4 *)0x0) goto LAB_009f2141;
        puVar2[6] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
      }
      *(undefined4 **)(param_1 + 0x464) = puVar2;
      FUN_00ec9270(puVar7 + 10,param_1 + 0x114);
    }
  }
  if ((*param_2 & 0x8000000) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x484);
    uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
    if (uVar3 < 0x40) {
      FUN_00dd5650(&DAT_0165a65c,0x40,uVar3);
LAB_009f219b:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
      *(ushort *)(param_1 + 0x484) = uVar1 + 0x40;
      if (puVar2 == (undefined4 *)0x0) goto LAB_009f219b;
      puVar2[4] = vftable;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xbf800000;
    }
    *(undefined4 **)(param_1 + 0x468) = puVar2;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x140), puVar5 != (uint *)0x0)) {
      uVar3 = *puVar5;
      if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
        uVar6 = FUN_00f59ed0(0x14);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
      if (uVar3 != 0) {
        *(float *)(*(int *)(param_1 + 0x468) + 0xc) = (float)*(int *)(param_1 + 0x120);
        iVar4 = FUN_00eca5a0(uVar3,param_1 + 0x114,&DAT_01b7bdf8);
        if (iVar4 == 0) {
          FUN_009cca90(param_1,&DAT_0165b884);
          return 0;
        }
      }
    }
  }
  if ((*param_2 & 0x4000000) == 0) {
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + 0x484);
  uVar3 = (uint)*(ushort *)(param_1 + 0x486) - (uint)uVar1;
  if (uVar3 < 0x40) {
    FUN_00dd5650(&DAT_0165a65c,0x40,uVar3);
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x480) + (uint)uVar1);
    *(ushort *)(param_1 + 0x484) = uVar1 + 0x40;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[5] = vftable;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0xbf800000;
      goto LAB_009f2341;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_009f2341:
  *(undefined4 **)(param_1 + 0x46c) = puVar2;
  iVar4 = FUN_009d4c80();
  if (iVar4 != 0) {
    *(float *)(*(int *)(param_1 + 0x46c) + 0x10) = (float)*(int *)(param_1 + 0x120);
    iVar4 = FUN_00eca3b0(iVar4,param_1 + 0x114,&DAT_01b7bdf8);
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_0165b858);
      return 0;
    }
  }
  return 1;
}

// 009F23B0  FUN_009f23b0  size=390  [callgraph]
void __thiscall FUN_009f23b0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x478) == 0) {
    return;
  }
  iVar1 = FUN_00a0b4a0(*(int *)(param_1 + 0x478),&local_24,*(undefined4 *)(param_1 + 0x47c),
                       *(undefined4 *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x474));
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x330) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a06ff0();
    }
    param_3[2] = uVar2;
    *param_3 = *(undefined4 *)(param_1 + 0x478);
    param_3[1] = local_24;
    iVar1 = *(int *)(param_1 + 0x494);
    if (*(float *)(param_2 + 0x45c) < 1.0) {
      iVar1 = iVar1 + 0x800;
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x2000000) == 0) {
      iVar3 = FUN_00a7c990(&DAT_01ee11f4);
      if ((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
        iVar3 = FUN_00a7c800();
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x360) != 0) {
        iVar3 = *(int *)(iVar3 + 0x360);
      }
      local_20 = *(undefined4 *)(iVar3 + 0x40);
      local_1c = *(undefined4 *)(iVar3 + 0x44);
      local_18 = *(undefined4 *)(iVar3 + 0x48);
      local_14 = *(undefined4 *)(iVar3 + 0x4c);
      FUN_00a30850(&LAB_009f0bf0,param_3,&local_20,iVar1,0,1);
      if ((*(byte *)(param_1 + 0x488) & 0x40) != 0) {
        FUN_00a30850(&LAB_009f0bf0,param_3,&local_20,iVar1,0,0);
      }
      return;
    }
    FUN_00a212c0(*(undefined4 *)(param_1 + 0x490),iVar1,&LAB_009f0bf0,param_3,1);
    if ((*(byte *)(param_1 + 0x488) & 0x40) == 0) {
      return;
    }
    FUN_00a212c0(*(undefined4 *)(param_1 + 0x490),iVar1,&LAB_009f0bf0,param_3,0);
    return;
  }
  return;
}

// 009F2540  FUN_009f2540  size=366  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f2540(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_120 [284];
  
  if ((DAT_01b78850 == 1) && (_DAT_01b78854 = _DAT_01b78854 + -1, _DAT_01b78854 == 0)) {
    _DAT_01b78854 = 0;
    DAT_01b78850 = 0;
  }
  FUN_009d1ca0();
  piVar2 = DAT_01b7a888;
  if (DAT_01b7a888 != DAT_01b7a888 + DAT_01b7a890) {
    do {
      iVar3 = *piVar2;
      iVar1 = *(int *)(iVar3 + 0x5c);
      if (iVar1 == 1) {
        FUN_009ec750(iVar3);
      }
      else if (iVar1 == 3) {
        EffectAttrSystem::CallPLParentForce(iVar3);
      }
      else if (iVar1 == 4) {
        FUN_00e01ca0();
        FUN_00e020f0(*(undefined4 *)(iVar3 + 0x44));
        if (*(int *)(iVar3 + 0x60) != 0) {
          FUN_00dffac0(*(int *)(iVar3 + 0x60));
        }
        FUN_00e00fb0(*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58),local_120);
      }
      else {
        FUN_00e01ca0();
        FUN_00dffb20(*(undefined4 *)(iVar3 + 0x48));
        if (*(int *)(iVar3 + 100) != 0) {
          FUN_00e020f0(*(int *)(iVar3 + 100));
        }
        if (*(int *)(iVar3 + 0x60) != 0) {
          FUN_00dffac0(*(int *)(iVar3 + 0x60));
        }
        thunk_FUN_00e00b80(*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58),iVar3,
                           local_120);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_01b7a888 + DAT_01b7a890);
  }
  piVar2 = DAT_01b7a888;
  iVar3 = DAT_01b7a890;
  piVar4 = DAT_01b7a888;
  if (DAT_01b7a888 != DAT_01b7a888 + DAT_01b7a890) {
    do {
      if (*piVar4 != 0) {
        FUN_00dd4920(*piVar4);
        *piVar4 = 0;
        piVar2 = DAT_01b7a888;
        iVar3 = DAT_01b7a890;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2 + iVar3);
  }
  DAT_01b7a97c = 0;
  DAT_01b7a890 = 0;
  return;
}

// 009F26B0  FUN_009f26b0  size=513  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009f26b0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [124];
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if ((*(int *)(param_1 + 0x44) == -1) && (iVar2 = FUN_00a7c800(), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x4bc);
    }
    if (((*(int *)(param_1 + 0x3c) == 0) && (iVar2 = FUN_00a7c800(), iVar2 != 0)) &&
       (iVar2 = FUN_00a12210((int)*(short *)(param_1 + 0x24)), iVar2 != 0)) {
      *(int *)(param_1 + 0x3c) = iVar2 + 0x10;
    }
  }
  FUN_009d1f40(param_1);
  iVar2 = FUN_00a4a2d0();
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    uVar3 = 0;
    if ((&DAT_01b7a93c)[DAT_01b78858 * 2] != 0) {
      piVar5 = (int *)((&DAT_01b7a938)[DAT_01b78858 * 2] + 0xc);
      do {
        if (*piVar5 == iVar2) {
          iVar2 = *(int *)((&DAT_01b7a938)[DAT_01b78858 * 2] + 0x10 + uVar3 * 0x1c);
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 7;
      } while (uVar3 < (uint)(&DAT_01b7a93c)[DAT_01b78858 * 2]);
    }
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  bVar1 = (byte)DAT_01bea060 & 0x40;
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  iVar2 = FUN_009f9350(uVar4);
  if (((iVar2 == 0) && (iVar2 = FUN_009f93b0(uVar4), iVar2 == 0)) && (bVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 0x13;
  }
  iVar2 = EffectAttrDataManager::searchCallData(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (DAT_01b7a968 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b7a950);
    }
    local_88 = *(int *)(param_1 + 0x44);
    for (piVar5 = DAT_01b7a974; piVar5 != DAT_01b7a974 + DAT_01b7a97c; piVar5 = piVar5 + 1) {
      if (*piVar5 == local_88) {
        if (DAT_01b7a968 == 0) {
          return 0;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7a950);
        return 0;
      }
    }
    FUN_009e7c30(local_84,&local_88);
    _DAT_01b78854 = DAT_0188f5dc;
    DAT_01b78850 = 1;
    if (DAT_01b7a968 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7a950);
    }
  }
  if ((*(int *)(iVar2 + 0xc) != 2) &&
     ((*(float *)(iVar2 + 0x14) == 0.0 || (*(float *)(iVar2 + 0x14) <= *(float *)(param_1 + 0x40))))
     ) {
    FUN_009dbf90();
    FUN_009e5d90(param_1,iVar2);
    uVar4 = FUN_009f0b50(local_80);
    return uVar4;
  }
  return 1;
}

// 009F2A20  FixedSplineLoop<float>::FixedSplineLoop<float>_2  size=1974  [class]
/* WARNING: Removing unreachable block (ram,0x009f30d0) */

undefined4 __fastcall FixedSplineLoop<float>::FixedSplineLoop<float>_2(undefined4 *param_1)

{
  ushort uVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  void *_Dst;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  
  uVar1 = *(ushort *)(param_1 + 0x13);
  uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
  if (uVar5 < 0x50) {
    FUN_00dd5650(&DAT_0165a690,0x50,uVar5);
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(param_1[0x12] + (uint)uVar1);
    *(ushort *)(param_1 + 0x13) = uVar1 + 0x50;
  }
  param_1[8] = _Dst;
  FID_conflict__memcpy(_Dst,&DAT_0188f680,0x50);
  if ((*(int *)(param_1[0xc] + 0x58) == 0) ||
     (piVar6 = (int *)(*(int *)(param_1[0xc] + 0x58) + 0xf0), piVar6 == (int *)0x0))
  goto LAB_009f3180;
  puVar2 = (uint *)*piVar6;
  if ((uint *)((int)puVar2 + 0xfU & 0xfffffff0) != puVar2) {
    uVar7 = FUN_00f59ed0(0xf);
    FUN_00dd5650(&DAT_016597b4,uVar7);
  }
  if (puVar2 == (uint *)0x0) goto LAB_009f3180;
  if ((*puVar2 & 0x80000000) != 0) {
    if ((*(int *)(param_1[0xc] + 0x58) == 0) ||
       (puVar8 = (undefined4 *)(*(int *)(param_1[0xc] + 0x58) + 0x100), puVar8 == (undefined4 *)0x0)
       ) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)*puVar8;
      if ((undefined2 *)((int)puVar10 + 0xfU & 0xfffffff0) != puVar10) {
        uVar7 = FUN_00f59ed0(0x10);
        FUN_00dd5650(&DAT_016597b4,uVar7);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0x13);
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
    if (uVar5 < 0x20) {
      FUN_00dd5650(&DAT_0165a690,0x20,uVar5);
LAB_009f2b1d:
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
      *(ushort *)(param_1 + 0x13) = uVar1 + 0x20;
      if (puVar8 == (undefined4 *)0x0) goto LAB_009f2b1d;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *puVar8 = 0;
      puVar8[6] = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0;
    }
    *param_1 = puVar8;
    iVar9 = FUN_00ec90d0(puVar10,param_1[0xc] + 0x114,*(undefined4 *)(param_1[0xc] + 100));
    if (iVar9 == 0) {
      FUN_009cca90(param_1[0xc],&DAT_0165b940,*puVar10);
      return 0;
    }
    if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x13);
      uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
      if (uVar5 < 0x30) {
        FUN_00dd5650(&DAT_0165a690,0x30,uVar5);
LAB_009f2baa:
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
        *(ushort *)(param_1 + 0x13) = uVar1 + 0x30;
        if (puVar8 == (undefined4 *)0x0) goto LAB_009f2baa;
        puVar8[6] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
      }
      param_1[5] = puVar8;
      FUN_00ec9270(puVar10 + 10,param_1[0xc] + 0x114);
    }
    if ((*(uint *)(puVar10 + 0x24) & 0x80000000) == 0) {
      param_1[0xf] = param_1[0xf] & 0xffffff7f;
    }
    else {
      param_1[0xf] = param_1[0xf] | 0x80;
    }
    if ((*(uint *)(puVar10 + 0x24) & 0x40000000) == 0) {
      param_1[0xf] = param_1[0xf] & 0xfffffeff;
    }
    else {
      param_1[0xf] = param_1[0xf] | 0x100;
    }
  }
  if ((*puVar2 & 0x40000000) != 0) {
    puVar10 = (undefined2 *)FUN_009d4c00();
    uVar1 = *(ushort *)(param_1 + 0x13);
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
    if (uVar5 < 0x20) {
      FUN_00dd5650(&DAT_0165a690,0x20,uVar5);
LAB_009f2c5f:
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
      *(ushort *)(param_1 + 0x13) = uVar1 + 0x20;
      if (puVar8 == (undefined4 *)0x0) goto LAB_009f2c5f;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *puVar8 = 0;
      puVar8[6] = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0;
    }
    param_1[1] = puVar8;
    iVar9 = FUN_00ec90d0(puVar10,param_1[0xc] + 0x114,*(undefined4 *)(param_1[0xc] + 100));
    if (iVar9 == 0) {
      FUN_009cca90(param_1[0xc],&DAT_0165b8f8,*puVar10);
      return 0;
    }
    if ((*(byte *)(param_1 + 0xf) & 2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x13);
      uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
      if (uVar5 < 0x30) {
        FUN_00dd5650(&DAT_0165a690,0x30,uVar5);
LAB_009f2ced:
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
        *(ushort *)(param_1 + 0x13) = uVar1 + 0x30;
        if (puVar8 == (undefined4 *)0x0) goto LAB_009f2ced;
        puVar8[6] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
      }
      param_1[6] = puVar8;
      FUN_00ec9270(puVar10 + 10,param_1[0xc] + 0x114);
    }
    if ((*(uint *)(puVar10 + 0x24) & 0x80000000) == 0) {
      param_1[0xf] = param_1[0xf] & 0xfffffdff;
    }
    else {
      param_1[0xf] = param_1[0xf] | 0x200;
    }
    if ((*(uint *)(puVar10 + 0x24) & 0x40000000) == 0) {
      param_1[0xf] = param_1[0xf] & 0xfffffbff;
    }
    else {
      param_1[0xf] = param_1[0xf] | 0x400;
    }
  }
  if ((*puVar2 & 0x20000000) != 0) {
    puVar10 = (undefined2 *)FUN_009d4c40();
    uVar1 = *(ushort *)(param_1 + 0x13);
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
    if (uVar5 < 0x20) {
      FUN_00dd5650(&DAT_0165a690,0x20,uVar5);
LAB_009f2da2:
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
      *(ushort *)(param_1 + 0x13) = uVar1 + 0x20;
      if (puVar8 == (undefined4 *)0x0) goto LAB_009f2da2;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *puVar8 = 0;
      puVar8[6] = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0;
    }
    param_1[2] = puVar8;
    iVar9 = FUN_00ec90d0(puVar10,param_1[0xc] + 0x114,*(undefined4 *)(param_1[0xc] + 100));
    if (iVar9 == 0) {
      FUN_009cca90(param_1[0xc],&DAT_0165b8a8,*puVar10);
      return 0;
    }
    if ((*(byte *)(param_1 + 0xf) & 4) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x13);
      uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
      if (uVar5 < 0x30) {
        FUN_00dd5650(&DAT_0165a690,0x30,uVar5);
LAB_009f2e30:
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
        *(ushort *)(param_1 + 0x13) = uVar1 + 0x30;
        if (puVar8 == (undefined4 *)0x0) goto LAB_009f2e30;
        puVar8[6] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
      }
      param_1[7] = puVar8;
      FUN_00ec9270(puVar10 + 10,param_1[0xc] + 0x114);
    }
    if ((*(uint *)(puVar10 + 0x24) & 0x80000000) == 0) {
      param_1[0xf] = param_1[0xf] & 0xfffff7ff;
    }
    else {
      param_1[0xf] = param_1[0xf] | 0x800;
    }
    if ((*(uint *)(puVar10 + 0x24) & 0x40000000) == 0) {
      param_1[0xf] = param_1[0xf] & 0xfffff7ff;
    }
    else {
      param_1[0xf] = param_1[0xf] | 0x800;
    }
  }
  if ((*puVar2 & 0x8000000) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x13);
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
    if (uVar5 < 0x40) {
      FUN_00dd5650(&DAT_0165a690,0x40,uVar5);
LAB_009f2ed7:
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
      *(ushort *)(param_1 + 0x13) = uVar1 + 0x40;
      if (puVar8 == (undefined4 *)0x0) goto LAB_009f2ed7;
      puVar8[4] = vftable;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0xbf800000;
    }
    param_1[3] = puVar8;
    iVar9 = FUN_009d4cc0();
    if (iVar9 != 0) {
      *(float *)(param_1[3] + 0xc) = (float)*(int *)(param_1[0xc] + 0x120);
      iVar9 = FUN_00eca5a0(iVar9,param_1[0xc] + 0x114,&DAT_01b7bdf8);
      if (iVar9 == 0) {
        FUN_009cca90(param_1[0xc],&DAT_0165b884);
        return 0;
      }
    }
  }
  if ((*puVar2 & 0x4000000) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x13);
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x4e) - (uint)uVar1;
    if (uVar5 < 0x40) {
      FUN_00dd5650(&DAT_0165a690,0x40,uVar5);
LAB_009f2fa9:
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)(param_1[0x12] + (uint)uVar1);
      *(ushort *)(param_1 + 0x13) = uVar1 + 0x40;
      if (puVar8 == (undefined4 *)0x0) goto LAB_009f2fa9;
      puVar8[5] = vftable;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0xbf800000;
    }
    param_1[4] = puVar8;
    iVar9 = FUN_009d4c80();
    if (iVar9 != 0) {
      *(float *)(param_1[4] + 0x10) = (float)*(int *)(param_1[0xc] + 0x120);
      iVar9 = FUN_00eca3b0(iVar9,param_1[0xc] + 0x114,&DAT_01b7bdf8);
      if (iVar9 == 0) {
        FUN_009cca90(param_1[0xc],&DAT_0165b858);
        return 0;
      }
      *(undefined4 *)(param_1[8] + 0xc) = *(undefined4 *)(param_1[4] + 4);
    }
  }
  if (((*puVar2 & 0x200000) != 0) &&
     (puVar8 = (undefined4 *)FUN_009d4d40(), puVar8 != (undefined4 *)0x0)) {
    *(float *)(param_1[8] + 0x1c) = (float)puVar8[4] * 0.1;
    *(float *)(param_1[8] + 0x20) = (float)puVar8[5] * 0.1;
    *(undefined4 *)(param_1[8] + 0x24) = puVar8[6];
    *(undefined4 *)(param_1[8] + 0x28) = puVar8[7];
    uVar5 = *(int *)(param_1[0xc] + 0x114) * 0x19660d + 0x3c6ef35f;
    *(uint *)(param_1[0xc] + 0x114) = uVar5;
    fVar4 = (float)(uVar5 >> 8) * 5.960465e-08;
    *(float *)(param_1[8] + 0x2c) = (1.0 - (fVar4 + fVar4)) * (float)puVar8[8];
    *(undefined4 *)(param_1[8] + 0x30) = *puVar8;
    *(undefined4 *)(param_1[8] + 0x34) = puVar8[1];
    *(undefined4 *)(param_1[8] + 0x38) = puVar8[2];
  }
  if (((*puVar2 & 0x800000) != 0) &&
     (puVar8 = (undefined4 *)FUN_009d4d00(), puVar8 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1[8] + 0x10) = *puVar8;
    *(undefined4 *)(param_1[8] + 0x14) = puVar8[1];
  }
  if ((*puVar2 & 0x20000) != 0) {
    *(float *)(param_1[8] + 0x10) = -*(float *)(param_1[8] + 0x10);
    *(float *)(param_1[8] + 0x14) = -*(float *)(param_1[8] + 0x14);
  }
  if ((*puVar2 & 0x10000000) != 0) {
    *(uint *)param_1[8] = puVar2[4];
  }
  if ((*puVar2 & 0x2000000) != 0) {
    *(undefined4 *)(param_1[8] + 0x18) = 0x3f800000;
  }
  if ((*puVar2 & 0x100000) != 0) {
    *(undefined4 *)(param_1[8] + 0x44) = 0x3f800000;
  }
LAB_009f3180:
  if ((*(int *)(param_1[0xc] + 0x58) != 0) &&
     (puVar8 = (undefined4 *)(*(int *)(param_1[0xc] + 0x58) + 0x70), puVar8 != (undefined4 *)0x0)) {
    pfVar3 = (float *)*puVar8;
    if ((float *)((int)pfVar3 + 0xfU & 0xfffffff0) != pfVar3) {
      uVar7 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if ((pfVar3 != (float *)0x0) && (*pfVar3 != 0.0)) {
      *(float *)(param_1[8] + 0x48) = *pfVar3;
    }
  }
  return 1;
}

// 009F32F0  FixedSplineLoop<float>::FixedSplineLoop<float>  size=2476  [class]
/* WARNING: Removing unreachable block (ram,0x009f39b2) */

undefined4 __fastcall FixedSplineLoop<float>::FixedSplineLoop<float>(undefined4 *param_1)

{
  ushort uVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  void *_Dst;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  undefined2 local_c;
  ushort local_a;
  undefined4 local_8;
  undefined1 local_4;
  
  uVar1 = *(ushort *)(param_1 + 0x17);
  uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
  if (uVar4 < 0x80) {
    FUN_00dd5650(&DAT_0165a6c4,0x80,uVar4);
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(param_1[0x16] + (uint)uVar1);
    *(ushort *)(param_1 + 0x17) = uVar1 + 0x80;
  }
  param_1[0xc] = _Dst;
  FID_conflict__memcpy(_Dst,&DAT_0188f790,0x80);
  if ((*(int *)(param_1[0x10] + 0x58) != 0) &&
     (piVar5 = (int *)(*(int *)(param_1[0x10] + 0x58) + 0xf0), piVar5 != (int *)0x0)) {
    puVar9 = (uint *)*piVar5;
    if ((uint *)((int)puVar9 + 0xfU & 0xfffffff0) != puVar9) {
      uVar6 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (puVar9 != (uint *)0x0) {
      if ((*puVar9 & 0x80000000) != 0) {
        if ((*(int *)(param_1[0x10] + 0x58) == 0) ||
           (puVar7 = (undefined4 *)(*(int *)(param_1[0x10] + 0x58) + 0x100),
           puVar7 == (undefined4 *)0x0)) {
          puVar11 = (undefined2 *)0x0;
        }
        else {
          puVar11 = (undefined2 *)*puVar7;
          if ((undefined2 *)((int)puVar11 + 0xfU & 0xfffffff0) != puVar11) {
            uVar6 = FUN_00f59ed0(0x10);
            FUN_00dd5650(&DAT_016597b4,uVar6);
          }
        }
        uVar1 = *(ushort *)(param_1 + 0x17);
        uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
        if (uVar4 < 0x20) {
          FUN_00dd5650(&DAT_0165a6c4,0x20,uVar4);
LAB_009f33f5:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
          *(ushort *)(param_1 + 0x17) = uVar1 + 0x20;
          if (puVar7 == (undefined4 *)0x0) goto LAB_009f33f5;
          puVar7[4] = 0;
          puVar7[5] = 0;
          *puVar7 = 0;
          puVar7[6] = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *(undefined2 *)(puVar7 + 3) = 0;
        }
        *param_1 = puVar7;
        iVar8 = FUN_00ec90d0(puVar11,param_1[0x10] + 0x114,*(undefined4 *)(param_1[0x10] + 100));
        if (iVar8 == 0) {
          FUN_009cca90(param_1[0x10],&DAT_0165b940,*puVar11);
          return 0;
        }
        if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
          uVar1 = *(ushort *)(param_1 + 0x17);
          uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
          if (uVar4 < 0x30) {
            FUN_00dd5650(&DAT_0165a6c4,0x30,uVar4);
LAB_009f3484:
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
            *(ushort *)(param_1 + 0x17) = uVar1 + 0x30;
            if (puVar7 == (undefined4 *)0x0) goto LAB_009f3484;
            puVar7[6] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[3] = 0;
            puVar7[2] = 0;
            puVar7[5] = 0;
            puVar7[4] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
          }
          param_1[6] = puVar7;
          FUN_00ec9270(puVar11 + 10,param_1[0x10] + 0x114);
        }
        if ((*(uint *)(puVar11 + 0x24) & 0x80000000) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffeff;
        }
        else {
          param_1[0x13] = param_1[0x13] | 0x100;
        }
        if ((*(uint *)(puVar11 + 0x24) & 0x40000000) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffdff;
        }
        else {
          param_1[0x13] = param_1[0x13] | 0x200;
        }
      }
      if ((*puVar9 & 0x40000000) != 0) {
        puVar11 = (undefined2 *)FUN_009d4c00();
        uVar1 = *(ushort *)(param_1 + 0x17);
        uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
        if (uVar4 < 0x20) {
          FUN_00dd5650(&DAT_0165a6c4,0x20,uVar4);
LAB_009f3539:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
          *(ushort *)(param_1 + 0x17) = uVar1 + 0x20;
          if (puVar7 == (undefined4 *)0x0) goto LAB_009f3539;
          puVar7[4] = 0;
          puVar7[5] = 0;
          *puVar7 = 0;
          puVar7[6] = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *(undefined2 *)(puVar7 + 3) = 0;
        }
        param_1[1] = puVar7;
        iVar8 = FUN_00ec90d0(puVar11,param_1[0x10] + 0x114,*(undefined4 *)(param_1[0x10] + 100));
        if (iVar8 == 0) {
          FUN_009cca90(param_1[0x10],&DAT_0165b8f8,*puVar11);
          return 0;
        }
        if ((*(byte *)(param_1 + 0x13) & 2) != 0) {
          uVar1 = *(ushort *)(param_1 + 0x17);
          uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
          if (uVar4 < 0x30) {
            FUN_00dd5650(&DAT_0165a6c4,0x30,uVar4);
LAB_009f35c9:
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
            *(ushort *)(param_1 + 0x17) = uVar1 + 0x30;
            if (puVar7 == (undefined4 *)0x0) goto LAB_009f35c9;
            puVar7[6] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[3] = 0;
            puVar7[2] = 0;
            puVar7[5] = 0;
            puVar7[4] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
          }
          param_1[7] = puVar7;
          FUN_00ec9270(puVar11 + 10,param_1[0x10] + 0x114);
        }
        if ((*(uint *)(puVar11 + 0x24) & 0x80000000) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffbff;
        }
        else {
          param_1[0x13] = param_1[0x13] | 0x400;
        }
        if ((*(uint *)(puVar11 + 0x24) & 0x40000000) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffff7ff;
        }
        else {
          param_1[0x13] = param_1[0x13] | 0x800;
        }
      }
      if ((*puVar9 & 0x20000000) != 0) {
        puVar11 = (undefined2 *)FUN_009d4c40();
        uVar1 = *(ushort *)(param_1 + 0x17);
        uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
        if (uVar4 < 0x20) {
          FUN_00dd5650(&DAT_0165a6c4,0x20,uVar4);
LAB_009f367e:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
          *(ushort *)(param_1 + 0x17) = uVar1 + 0x20;
          if (puVar7 == (undefined4 *)0x0) goto LAB_009f367e;
          puVar7[4] = 0;
          puVar7[5] = 0;
          *puVar7 = 0;
          puVar7[6] = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *(undefined2 *)(puVar7 + 3) = 0;
        }
        param_1[2] = puVar7;
        iVar8 = FUN_00ec90d0(puVar11,param_1[0x10] + 0x114,*(undefined4 *)(param_1[0x10] + 100));
        if (iVar8 == 0) {
          FUN_009cca90(param_1[0x10],&DAT_0165b8a8,*puVar11);
          return 0;
        }
        if ((*(byte *)(param_1 + 0x13) & 4) != 0) {
          uVar1 = *(ushort *)(param_1 + 0x17);
          uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
          if (uVar4 < 0x30) {
            FUN_00dd5650(&DAT_0165a6c4,0x30,uVar4);
LAB_009f370e:
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
            *(ushort *)(param_1 + 0x17) = uVar1 + 0x30;
            if (puVar7 == (undefined4 *)0x0) goto LAB_009f370e;
            puVar7[6] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[3] = 0;
            puVar7[2] = 0;
            puVar7[5] = 0;
            puVar7[4] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
          }
          param_1[8] = puVar7;
          FUN_00ec9270(puVar11 + 10,param_1[0x10] + 0x114);
        }
        if ((*(uint *)(puVar11 + 0x24) & 0x80000000) == 0) {
          param_1[0x13] = param_1[0x13] & 0xffffefff;
        }
        else {
          param_1[0x13] = param_1[0x13] | 0x1000;
        }
        if ((*(uint *)(puVar11 + 0x24) & 0x40000000) == 0) {
          param_1[0x13] = param_1[0x13] & 0xffffefff;
        }
        else {
          param_1[0x13] = param_1[0x13] | 0x1000;
        }
      }
      if ((*puVar9 & 0x8000000) != 0) {
        uVar1 = *(ushort *)(param_1 + 0x17);
        uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
        if (uVar4 < 0x40) {
          FUN_00dd5650(&DAT_0165a6c4,0x40,uVar4);
LAB_009f37b5:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
          *(ushort *)(param_1 + 0x17) = uVar1 + 0x40;
          if (puVar7 == (undefined4 *)0x0) goto LAB_009f37b5;
          puVar7[4] = vftable;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0xbf800000;
        }
        param_1[4] = puVar7;
        iVar8 = FUN_009d4cc0();
        if (iVar8 != 0) {
          *(float *)(param_1[4] + 0xc) = (float)*(int *)(param_1[0x10] + 0x120);
          iVar8 = FUN_00eca5a0(iVar8,param_1[0x10] + 0x114,&DAT_01b7bdf8);
          if (iVar8 == 0) {
            FUN_009cca90(param_1[0x10],&DAT_0165b884);
            return 0;
          }
        }
      }
      if ((*puVar9 & 0x4000000) != 0) {
        uVar1 = *(ushort *)(param_1 + 0x17);
        uVar4 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
        if (uVar4 < 0x40) {
          FUN_00dd5650(&DAT_0165a6c4,0x40,uVar4);
LAB_009f3889:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
          *(ushort *)(param_1 + 0x17) = uVar1 + 0x40;
          if (puVar7 == (undefined4 *)0x0) goto LAB_009f3889;
          puVar7[5] = vftable;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0xbf800000;
        }
        param_1[5] = puVar7;
        iVar8 = FUN_009d4c80();
        if (iVar8 != 0) {
          *(float *)(param_1[5] + 0x10) = (float)*(int *)(param_1[0x10] + 0x120);
          iVar8 = FUN_00eca3b0(iVar8,param_1[0x10] + 0x114,&DAT_01b7bdf8);
          if (iVar8 == 0) {
            FUN_009cca90(param_1[0x10],&DAT_0165b858);
            return 0;
          }
          *(undefined4 *)(param_1[0xc] + 0xc) = *(undefined4 *)(param_1[5] + 4);
        }
      }
      if (((*puVar9 & 0x200000) != 0) &&
         (puVar7 = (undefined4 *)FUN_009d4d40(), puVar7 != (undefined4 *)0x0)) {
        *(float *)(param_1[0xc] + 0x1c) = (float)puVar7[4] * 0.1;
        *(float *)(param_1[0xc] + 0x20) = (float)puVar7[5] * 0.1;
        *(undefined4 *)(param_1[0xc] + 0x24) = puVar7[6];
        *(undefined4 *)(param_1[0xc] + 0x28) = puVar7[7];
        uVar4 = *(int *)(param_1[0x10] + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1[0x10] + 0x114) = uVar4;
        fVar3 = (float)(uVar4 >> 8) * 5.960465e-08;
        *(float *)(param_1[0xc] + 0x2c) = (1.0 - (fVar3 + fVar3)) * (float)puVar7[8];
        *(undefined4 *)(param_1[0xc] + 0x30) = *puVar7;
        *(undefined4 *)(param_1[0xc] + 0x34) = puVar7[1];
        *(undefined4 *)(param_1[0xc] + 0x38) = puVar7[2];
      }
      if (((*puVar9 & 0x800000) != 0) &&
         (puVar7 = (undefined4 *)FUN_009d4d00(), puVar7 != (undefined4 *)0x0)) {
        *(undefined4 *)(param_1[0xc] + 0x10) = *puVar7;
        *(undefined4 *)(param_1[0xc] + 0x14) = puVar7[1];
      }
      if ((*puVar9 & 0x20000) != 0) {
        *(float *)(param_1[0xc] + 0x10) = -*(float *)(param_1[0xc] + 0x10);
        *(float *)(param_1[0xc] + 0x14) = -*(float *)(param_1[0xc] + 0x14);
      }
      if ((*puVar9 & 0x10000000) != 0) {
        *(uint *)param_1[0xc] = puVar9[4];
      }
      if ((*puVar9 & 0x2000000) != 0) {
        *(undefined4 *)(param_1[0xc] + 0x18) = 0x3f800000;
      }
      if ((*puVar9 & 0x100000) != 0) {
        *(undefined4 *)(param_1[0xc] + 0x44) = 0x3f800000;
      }
    }
  }
  if ((*(int *)(param_1[0x10] + 0x58) != 0) &&
     (puVar7 = (undefined4 *)(*(int *)(param_1[0x10] + 0x58) + 0x70), puVar7 != (undefined4 *)0x0))
  {
    pfVar2 = (float *)*puVar7;
    if ((float *)((int)pfVar2 + 0xfU & 0xfffffff0) != pfVar2) {
      uVar6 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (pfVar2 != (float *)0x0) {
      if (*pfVar2 != 0.0) {
        *(float *)(param_1[0xc] + 0x48) = *pfVar2;
      }
      *(float *)(param_1[0xc] + 0x40) = pfVar2[5];
      *(float *)(param_1[0xc] + 0x3c) = pfVar2[2];
      *(float *)(param_1[0xc] + 0x70) = pfVar2[6];
      *(float *)(param_1[0xc] + 0x74) = pfVar2[7];
      *(float *)(param_1[0xc] + 0x78) = pfVar2[8];
    }
  }
  if ((*(int *)(param_1[0x10] + 0x58) == 0) ||
     (puVar9 = (uint *)(*(int *)(param_1[0x10] + 0x58) + 0x30), puVar9 == (uint *)0x0))
  goto LAB_009f3c5b;
  uVar4 = *puVar9;
  if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
    uVar6 = FUN_00f59ed0(3);
    FUN_00dd5650(&DAT_016597b4,uVar6);
  }
  if (uVar4 == 0) goto LAB_009f3c5b;
  if (*(char *)(uVar4 + 0x2f) != '\0') {
    FUN_00f8f070();
    local_14 = *(undefined2 *)(uVar4 + 4);
    local_12 = (ushort)*(byte *)(uVar4 + 0x1f);
    local_c = *(undefined2 *)(uVar4 + 0x1c);
    local_10 = (ushort)*(byte *)(uVar4 + 0x27);
    local_e = (ushort)*(byte *)(uVar4 + 0x24);
    local_8 = *(undefined4 *)(uVar4 + 0x20);
    local_4 = *(undefined1 *)(uVar4 + 0x1e);
    uVar1 = *(ushort *)(param_1 + 0x17);
    local_a = (ushort)*(byte *)(uVar4 + 0x2e);
    uVar10 = (uint)*(ushort *)((int)param_1 + 0x5e) - (uint)uVar1;
    if (uVar10 < 0x20) {
      FUN_00dd5650(&DAT_0165a6c4,0x20,uVar10);
LAB_009f3b93:
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(param_1[0x16] + (uint)uVar1);
      *(ushort *)(param_1 + 0x17) = uVar1 + 0x20;
      if (puVar7 == (undefined4 *)0x0) goto LAB_009f3b93;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *puVar7 = 0;
      puVar7[6] = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined2 *)(puVar7 + 3) = 0;
    }
    param_1[3] = puVar7;
    iVar8 = FUN_00ec90d0(&local_14,param_1[0x10] + 0x114,*(undefined4 *)(param_1[0x10] + 100));
    if (iVar8 == 0) {
      FUN_009cca90(param_1[0x10],&DAT_0165b9a0,local_14);
      return 0;
    }
  }
  *(undefined4 *)(param_1[0xc] + 0x50) = *(undefined4 *)(uVar4 + 0x30);
  *(undefined4 *)(param_1[0xc] + 0x54) = *(undefined4 *)(uVar4 + 0x34);
  *(undefined4 *)(param_1[0xc] + 0x58) = *(undefined4 *)(uVar4 + 0x38);
  *(undefined4 *)(param_1[0xc] + 0x5c) = *(undefined4 *)(uVar4 + 0x3c);
  *(undefined4 *)(param_1[0xc] + 0x60) = *(undefined4 *)(uVar4 + 0x40);
  *(undefined4 *)(param_1[0xc] + 100) = *(undefined4 *)(uVar4 + 0x44);
  *(undefined4 *)(param_1[0xc] + 0x68) = *(undefined4 *)(uVar4 + 0x48);
  *(undefined4 *)(param_1[0xc] + 0x6c) = *(undefined4 *)(uVar4 + 0x4c);
  if (*(char *)(uVar4 + 0x50) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  *(undefined4 *)(param_1[0xc] + 0x4c) = uVar6;
LAB_009f3c5b:
  if (*(float *)(param_1[0xc] + 0x5c) == 0.0) {
    *(undefined4 *)(param_1[0xc] + 0x60) = 0x47c35000;
    *(undefined4 *)(param_1[0xc] + 100) = 0x47c35080;
    *(undefined4 *)(param_1[0xc] + 0x68) = 0x47c35000;
    *(undefined4 *)(param_1[0xc] + 0x6c) = 0x47c35080;
  }
  return 1;
}

// 00ECF950  FixedSplineLoop::create  size=204  [class]
undefined4 __thiscall
FixedSplineLoop::create(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (0x80 < param_2 + 4U) {
    FUN_00dd5650(&DAT_016d7674,param_2,0x80);
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar2 = (param_2 + 5) * 0x10;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = FUN_00dd29b0(iVar2,param_4,0,0);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016d777c);
    return 0;
  }
  *(int *)(param_1 + 8) = iVar1 + 0x14 + param_2 * 4;
  *(int *)(param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x24) = iVar2;
  *(int *)(param_1 + 0xc) = iVar1 + 0x28 + param_2 * 8;
  *(int *)(param_1 + 0x10) = iVar1 + (param_2 * 3 + 0xf) * 4;
  *(uint *)(param_1 + 0x18) = param_2 + 4U;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return 1;
}

