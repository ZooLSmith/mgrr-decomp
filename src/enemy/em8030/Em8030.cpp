// src/enemy/em8030/Em8030.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0064B420..00ABA300, 170 functions

#include "types.h"

// 0064B420  Em8030::vfFC  size=86  [class]
void __fastcall Em8030::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0xa0000000;
  if (*(int *)(param_1 + 0xf24) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf24) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xf24) + 0xbb0) = 0;
  }
  if (*(int *)(param_1 + 0xf28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf28) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xf28) + 0xbb0) = 0;
  }
  return;
}

// 0064B480  Em8030::vf100  size=96  [class]
void __fastcall Em8030::vf100(int param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf100();
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0x5fffffff;
  if (*(int *)(param_1 + 0xf24) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf24) + 0xbac) = 1;
  }
  if (*(int *)(param_1 + 0xf28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf28) + 0xbac) = 1;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(7);
    }
  }
  return;
}

// 0064B4E0  Em8030::vf54  size=5  [class]
void __fastcall Em8030::vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 0064B4F0  Em8030::vfC8  size=45  [class]
void __thiscall Em8030::vfC8(int param_1,undefined4 param_2)

{
  Bh0064::vfC8(param_2);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(param_2);
  }
  return;
}

// 0064B750  FUN_0064b750  size=286  [between]
void __fastcall FUN_0064b750(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x669] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x668] != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 0064B8D0  FUN_0064b8d0  size=21  [between]
void FUN_0064b8d0(void)

{
  FUN_00c272a0(0x40a00000);
  return;
}

// 0064BBA0  FUN_0064bba0  size=355  [between]
void __fastcall FUN_0064bba0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1aa,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined2 *)(param_1 + 0x209) = 1;
    param_1[0x20a] = 0x78;
  case 1:
    goto LAB_0064bc10;
  case 2:
    FUN_00aa4080(0x1ab,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x3ce] & 0x100U) == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
LAB_0064bc10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00aa4080(0x1ac,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064bcff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0064BF20  FUN_0064bf20  size=361  [between]
void __fastcall FUN_0064bf20(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x45,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x46,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (param_1[0x250] = param_1[0x250] + 1, 2 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x47,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064c084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0064C0B0  Em8030::vf1B0  size=5  [class]
undefined4 Em8030::vf1B0(void)

{
  return 0;
}

// 0064C0C0  Em8030::vf208  size=36  [class]
void __thiscall Em8030::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 0064C0F0  Em8030::vf6C  size=86  [class]
void __thiscall Em8030::vf6C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  Bh0064::vf6C(param_2);
  fVar1 = *(float *)(param_1 + 0x50) - *param_2;
  fVar2 = *(float *)(param_1 + 0x58) - param_2[2];
  *(float *)(param_1 + 0xef0) = *(float *)(param_1 + 0xef0) + fVar1;
  *(float *)(param_1 + 0xef8) = *(float *)(param_1 + 0xef8) + fVar2;
  *(float *)(param_1 + 0xf00) = *(float *)(param_1 + 0xf00) + fVar1;
  *(float *)(param_1 + 0xf08) = fVar2 + *(float *)(param_1 + 0xf08);
  return;
}

// 0064C150  Em8030::vf70  size=77  [class]
void __thiscall Em8030::vf70(int param_1,float *param_2)

{
  Bh0064::vf70(param_2);
  *(float *)(param_1 + 0xef0) = *param_2 + *(float *)(param_1 + 0xef0);
  *(float *)(param_1 + 0xef8) = param_2[2] + *(float *)(param_1 + 0xef8);
  *(float *)(param_1 + 0xf00) = *(float *)(param_1 + 0xf00) + *param_2;
  *(float *)(param_1 + 0xf08) = param_2[2] + *(float *)(param_1 + 0xf08);
  return;
}

// 0064C1A0  Em8030::vf184  size=6  [class]
undefined4 Em8030::vf184(void)

{
  return 0xffffffff;
}

// 0064C2B0  FUN_0064c2b0  size=168  [between]
void __fastcall FUN_0064c2b0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x61c) == 1)) &&
     (*(float *)(param_1 + 0xa8c) < 4.0)) {
    iVar2 = FUN_00ac82f0();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x93c) = 0x42b40000;
      FUN_00a8cb60(2);
    }
  }
  iVar2 = FUN_00ac4d60(1);
  if (iVar2 != 0) {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 3) {
      FUN_00a8cb60(4);
    }
  }
  if (((*(uint *)(param_1 + 0xf38) & 0x4000) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x928) = fVar1, fVar1 < 0.0)) {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 3) {
      FUN_00a8cb60(4);
    }
  }
  return;
}

// 0064C360  FUN_0064c360  size=47  [between]
void __fastcall FUN_0064c360(int *param_1)

{
  if (param_1[0x2a1] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  if (1 < param_1[0x187]) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  return;
}

// 0064C3C0  FUN_0064c3c0  size=399  [between]
void __fastcall FUN_0064c3c0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x81,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x250] = 0;
    return;
  case 2:
    FUN_00aa4080(0x82,0,0x3daaaaab,0x3f800000,param_1[0x3c8],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (param_1[0x250] = param_1[0x250] + 1, 4 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x83,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064c54a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0064C730  FUN_0064c730  size=392  [between]
void __fastcall FUN_0064c730(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x112,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x113,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (param_1[0x250] = param_1[0x250] + 1, 9 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x114,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064c8b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0064C9A0  FUN_0064c9a0  size=255  [between]
void __fastcall FUN_0064c9a0(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x40000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1a6,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x1a7,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064ca9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0064CAD0  FUN_0064cad0  size=92  [between]
void __fastcall FUN_0064cad0(int param_1)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x61c) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x920) = fVar1, fVar1 < 0.0)) {
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
  }
  return;
}

// 0064CFA0  Em8030::vf158  size=32  [class]
undefined4 Em8030::vf158(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0xc030001) {
      return 1;
    }
  }
  return 0;
}

// 0064CFC0  Em8030::vf15C  size=33  [class]
void Em8030::vf15C(undefined4 param_1,undefined4 param_2)

{
  BehaviorAppBase::vf15C(param_1,param_2);
  FUN_00a93090(6);
  return;
}

// 0064CFF0  FUN_0064cff0  size=140  [between]
void __thiscall FUN_0064cff0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_ESI;
  float10 fVar4;
  float fStack_38;
  float fStack_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  if (param_2 != 0) {
    iVar3 = FUN_00a8c760(0x1c);
    if (iVar3 == 0) {
      FUN_00a8ce90(local_30,local_20);
      fVar4 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + local_1c);
      *(float *)(param_2 + 0x94) = (float)fVar4;
      D3DXVec3TransformNormal(local_30,local_30,param_1 + 0x10);
      fVar1 = *(float *)(param_1 + 0x44);
      fVar2 = *(float *)(param_1 + 0x48);
      *(float *)(param_2 + 0x50) = *(float *)(param_1 + 0x40) + unaff_ESI;
      *(float *)(param_2 + 0x54) = fVar1 + fStack_38;
      *(float *)(param_2 + 0x58) = fVar2 + fStack_34;
      *(undefined4 *)(param_2 + 0x5c) = local_30[0];
    }
  }
  return;
}

// 0064D080  FUN_0064d080  size=22  [between]
void FUN_0064d080(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 0064D0A0  FUN_0064d0a0  size=22  [between]
void FUN_0064d0a0(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 0064D0D0  FUN_0064d0d0  size=193  [between]
bool __thiscall FUN_0064d0d0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x50001) {
    if (param_2 == 0x50000) {
      if (*(float *)(param_1 + 0xa9c) <= 0.0) {
        return false;
      }
      return true;
    }
    if (param_2 != 0x40000) {
      return false;
    }
  }
  else if (param_2 < 0x5000c) {
    if (param_2 != 0x5000b) {
      switch(param_2) {
      case 0x50001:
      case 0x50003:
      case 0x50004:
        goto switchD_0064d127_caseD_50001;
      case 0x50002:
      case 0x50005:
        if (0.0 <= *(float *)(param_1 + 0xa9c)) {
          return false;
        }
        return true;
      default:
        return false;
      }
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x50000) {
      if (iVar1 != 0x50002) {
        return false;
      }
      if ((*(uint *)(param_1 + 0xe98) & 0x80000000) != 0) {
        return false;
      }
      return true;
    }
  }
  else if (param_2 != 0xc030000) {
    return false;
  }
switchD_0064d127_caseD_50001:
  return (*(uint *)(param_1 + 0xe98) & 0x80000000) != 0;
}

// 0064D1E0  Em8030::vf20  size=49  [class]
void __fastcall Em8030::vf20(int param_1)

{
  int iVar1;
  
  BehaviorEmBase::vf20();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
    }
  }
  return;
}

// 0064D220  Em8030::vf1C  size=49  [class]
void __fastcall Em8030::vf1C(int param_1)

{
  int iVar1;
  
  BehaviorEmBase::vf1C();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(1);
    }
  }
  return;
}

// 0064D270  Em8030::vf110  size=165  [class]
void __thiscall Em8030::vf110(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf110(param_2);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) | 0x20000;
    return;
  }
  *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) & 0xfffdffff;
  return;
}

// 0064D380  FUN_0064d380  size=39  [callgraph]
bool __fastcall FUN_0064d380(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_00ac4d60(1);
  if (iVar1 != 0) {
    return false;
  }
  bVar2 = false;
  if (*(int *)(param_1 + 0x18cc) == 0) {
    bVar2 = *(int *)(param_1 + 0x18e0) != 0;
  }
  return bVar2;
}

// 0064D3B0  FUN_0064d3b0  size=51  [callgraph]
bool __fastcall FUN_0064d3b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4d60(2);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_00ac4d60(1);
  if (iVar1 != 0) {
    return false;
  }
  return *(int *)(param_1 + 0x18cc) == 0;
}

// 0064D3F0  FUN_0064d3f0  size=67  [callgraph]
undefined4 __fastcall FUN_0064d3f0(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xf38) & 0x100) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 0064D440  FUN_0064d440  size=66  [callgraph]
undefined4 __thiscall FUN_0064d440(int param_1,float *param_2)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xa84) == 0) {
    return 0;
  }
  fVar1 = (float10)FUN_00a8ec30(param_1 + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(*(int *)(param_1 + 0xa84) + 0x94
                                                                   )));
  *param_2 = (float)fVar1;
  return 1;
}

// 0064D490  FUN_0064d490  size=34  [callgraph]
void __thiscall FUN_0064d490(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(3,param_2,param_3);
  }
  return;
}

// 0064D4C0  FUN_0064d4c0  size=25  [callgraph]
uint __fastcall FUN_0064d4c0(int param_1)

{
  if ((*(uint *)(param_1 + 0xf38) & 0x10000) != 0) {
    return 0;
  }
  return ~(*(uint *)(param_1 + 0xf38) >> 0x1a) & 1;
}

// 0064D4E0  FUN_0064d4e0  size=39  [callgraph]
bool __fastcall FUN_0064d4e0(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x3ce] & 0x10000U) == 0) && ((param_1[0x3ce] & 0x4000000U) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    return iVar1 == 0;
  }
  return false;
}

// 0064D620  Em8030::vf1C0  size=5  [class]
void __thiscall Em8030::vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 0064D630  Em8030::vf294  size=1  [class]
void Em8030::vf294(void)

{
  return;
}

// 0064D640  Em8030::vf29C  size=15  [class]
void __fastcall Em8030::vf29C(int param_1)

{
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffffffb;
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 8;
  return;
}

// 0064D650  Em8030::vf2A8  size=15  [class]
void __fastcall Em8030::vf2A8(int param_1)

{
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffffff7;
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 4;
  return;
}

// 0064D660  Em8030::vf2AC  size=15  [class]
void __fastcall Em8030::vf2AC(int param_1)

{
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffffff7;
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 4;
  return;
}

// 0064D670  Em8030::vf2B0  size=1  [class]
void Em8030::vf2B0(void)

{
  return;
}

// 0064D680  Em8030::vf2B4  size=1  [class]
void Em8030::vf2B4(void)

{
  return;
}

// 0064D690  Em8030::vf2B8  size=1  [class]
void Em8030::vf2B8(void)

{
  return;
}

// 0064D6A0  Em8030::vf2BC  size=1  [class]
void Em8030::vf2BC(void)

{
  return;
}

// 0064D6B0  Em8030::vf2C0  size=1  [class]
void Em8030::vf2C0(void)

{
  return;
}

// 0064D6C0  Em8030::vf2C4  size=1  [class]
void Em8030::vf2C4(void)

{
  return;
}

// 0064D6D0  Em8030::vf2C8  size=1  [class]
void Em8030::vf2C8(void)

{
  return;
}

// 0064D6E0  Em8030::vf2CC  size=1  [class]
void Em8030::vf2CC(void)

{
  return;
}

// 0064D6F0  Em8030::vf2D0  size=1  [class]
void Em8030::vf2D0(void)

{
  return;
}

// 0064D700  Em8030::vf2D4  size=11  [class]
bool Em8030::vf2D4(void)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  return iVar1 == 0;
}

// 0064D710  FUN_0064d710  size=42  [between]
uint FUN_0064d710(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35570;
  (**(code **)(*param_1 + 4))(&DAT_01b35570);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0064D800  FUN_0064d800  size=665  [between]
void __fastcall FUN_0064d800(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(8,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x44160000;
    param_1[0x669] = 1;
    param_1[0x250] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0064d8dd;
  case 3:
LAB_0064d8dd:
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 9 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_0064d81a_default;
  case 4:
    FUN_00aa4080(10,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0064d94c;
  case 5:
LAB_0064d94c:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto LAB_0064d88c;
  default:
    goto switchD_0064d81a_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_0064d88c:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0064d81a_default:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] == 0) || (3 < param_1[0x187])) {
    return;
  }
  if (((float)param_1[0x2a3] <= 49.0) && (0.0 < (float)param_1[0x248])) {
    if (param_1[0x250] == 1) {
      param_1[0x23c] = (int)((float)param_1[0x23c] - 1.5707964);
      param_1[0x23d] = (int)((float)param_1[0x23d] - 1.5707964);
      param_1[0x23e] = (int)((float)param_1[0x23e] - 1.5707964);
      fVar1 = (float)param_1[0x23f] - 1.5707964;
    }
    else {
      if (param_1[0x250] != 2) goto LAB_0064da61;
      param_1[0x23c] = (int)((float)param_1[0x23c] + 1.5707964);
      param_1[0x23d] = (int)((float)param_1[0x23d] + 1.5707964);
      param_1[0x23e] = (int)((float)param_1[0x23e] + 1.5707964);
      fVar1 = (float)param_1[0x23f] + 1.5707964;
    }
    param_1[0x23f] = (int)fVar1;
  }
LAB_0064da61:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 0064DAC0  FUN_0064dac0  size=369  [between]
void __fastcall FUN_0064dac0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  int local_18 [2];
  int local_10;
  float local_c [2];
  float local_4;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 == 0) {
      FUN_009f8ea0(local_18,10,param_1[300],0);
      FUN_00dd5650(&DAT_0163d460,local_18,param_1[0x2c9]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00a5dcc0(iVar1);
    }
    FUN_00aa4080(9,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0x3d4ccccd;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float10)FUN_00a581b0(local_18,(float)param_1[0x24a] * (float)param_1[0x244],
                                param_1[0x249]);
  param_1[0x249] = (int)(float)fVar2;
  param_1[0x14] = local_18[0];
  param_1[0x16] = local_10;
  FUN_00a585a0(local_c,0x3e800000,(float)fVar2);
  fVar2 = (float10)fpatan((float10)local_c[0],(float10)local_4);
  param_1[0x25] = (int)(float)fVar2;
  iVar1 = FUN_00a54a60(param_1[0x249]);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 0064DC40  FUN_0064dc40  size=192  [between]
void __fastcall FUN_0064dc40(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a96030(0,0);
    FUN_00a92f90();
    FUN_00e2d400();
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00a96030(0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
      return;
    }
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  return;
}

// 0064DD10  Em8030::vf2F8  size=46  [class]
void __fastcall Em8030::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(3,0,0);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 0064DD40  Em8030::vf130  size=725  [class]
undefined4 __thiscall Em8030::vf130(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  FUN_00ac8520(*param_2);
  uVar4 = FUN_00fdbc60();
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[2] = uVar5;
  puVar1[1] = uVar4;
  puVar1[3] = unaff_ESI;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  *puVar1 = (uint)*param_2;
  switch(*param_2) {
  case 4:
    *puVar1 = 0xbe;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    break;
  default:
    goto switchD_0064de1f_caseD_5;
  case 6:
    *puVar1 = 0xbf;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    goto switchD_0064de1f_caseD_5;
  case 8:
    *puVar1 = 0xc0;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3001;
    break;
  case 10:
    *puVar1 = 0xc1;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    break;
  case 0xc:
    *puVar1 = 0xc2;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 3;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    goto switchD_0064de1f_caseD_5;
  case 0xe:
    *puVar1 = 0xc3;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3002;
    goto switchD_0064de1f_caseD_5;
  case 0x10:
    *puVar1 = 0xc4;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3001;
    break;
  case 0x12:
    *puVar1 = 0xc5;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    goto LAB_0064dfef;
  case 0x14:
    *puVar1 = 0xc6;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    break;
  case 0x15:
    *puVar1 = 199;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    break;
  case 0x17:
    *puVar1 = 0xc9;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
LAB_0064dfef:
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
  }
  *(undefined1 *)((int)puVar1 + 0x11) = 7;
switchD_0064de1f_caseD_5:
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 0064E060  FUN_0064e060  size=439  [between]
void __fastcall FUN_0064e060(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x5a,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x5b,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    goto LAB_0064e15b;
  case 3:
LAB_0064e15b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
    }
  default:
    goto switchD_0064e087_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0064e087_default:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0064E230  FUN_0064e230  size=435  [between]
void __fastcall FUN_0064e230(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(99,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(100,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3d8f5c29,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0064E400  FUN_0064e400  size=435  [between]
void __fastcall FUN_0064e400(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x76,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x77,0,0x3c888889,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0064E5D0  FUN_0064e5d0  size=583  [between]
void __fastcall FUN_0064e5d0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x67,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x68,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  if (((((param_1[0x3a6] & 0x40000U) != 0) && (param_1[0x2a1] != 0)) &&
      (iVar4 = FUN_00a8c760(10), iVar4 != 0)) && (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
    fVar1 = *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = *(float *)(iVar4 + 0x48);
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x14] =
         (int)((float)param_1[0x14] +
              (*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar4 + 0x40)) * 0.1);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.1 + (float)param_1[0x16]);
    (*pcVar3)(0x3e99999a,0x393702d3,0x3c0efa35,0);
  }
  return;
}

// 0064E830  FUN_0064e830  size=707  [between]
void __fastcall FUN_0064e830(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x67,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
    break;
  case 1:
  case 5:
    break;
  case 2:
    FUN_00aa4080(0x6a,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x19);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x358))((param_1[0x3c8] != 0) * '\x02' + '\x15',param_1 + 0x528);
    }
    goto LAB_0064e9aa;
  case 4:
    FUN_00aa4080(0x6b,0,0x3daaaaab,0x3f800000,param_1[0x3c8],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    break;
  case 6:
    FUN_00aa4080(0x6c,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x31);
    if (iVar1 != 0) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
    }
  default:
    goto switchD_0064e85b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0064e9aa:
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0064e85b_default:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0064EB20  FUN_0064eb20  size=439  [between]
void __fastcall FUN_0064eb20(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6f,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x70,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0x40490fdb);
  }
  return;
}

// 0064ECF0  FUN_0064ecf0  size=724  [between]
void __fastcall FUN_0064ecf0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x7a,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
    break;
  case 1:
  case 5:
    break;
  case 2:
    FUN_00aa4080(0x7b,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      uVar1 = FUN_00dde2a0(0,0x32);
      if (((uVar1 & 0xffff) % 5 == 0) || (25.0 < (float)param_1[0x2a3])) {
        param_1[0x187] = 8;
      }
    }
    goto switchD_0064ed1b_default;
  case 4:
    FUN_00aa4080(0x7d,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4080(0x7e,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto switchD_0064ed1b_default;
  case 8:
    FUN_00aa4080(0x7c,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 7;
  default:
    goto switchD_0064ed1b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0064ed1b_default:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0064EFF0  FUN_0064eff0  size=166  [between]
undefined4 __thiscall FUN_0064eff0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (((((((*(byte *)(param_1 + 0x130) & 1) != 0) && (iVar1 = *param_2, iVar1 != 0)) && (iVar1 != 1)
        ) && ((iVar1 != 2 && (iVar1 != 0x1b0)))) &&
      ((iVar1 != 0x147 &&
       ((iVar1 = FUN_00a81330(), iVar1 != 0 && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))))) &&
     ((*(byte *)(iVar1 + 0x4c0) & 0x10) != 0)) {
    (**(code **)(*param_1 + 0x21c))(iVar1,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    (**(code **)(*param_1 + 0x198))(iVar1,param_2,1);
  }
  return 0;
}

// 0064F0A0  FUN_0064f0a0  size=90  [between]
undefined4 __thiscall FUN_0064f0a0(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x56) && (*(char *)((int)param_2 + 0x11) == '\n')) {
    return 1;
  }
  if (((param_1[0x3cf] & 0x40000U) == 0) && ((param_1[0x3ce] & 0x4010000U) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 == 0) {
      FUN_00a8eeb0();
      FUN_00a8eea0();
    }
  }
  return 0;
}

// 0064F100  FUN_0064f100  size=109  [between]
void __thiscall FUN_0064f100(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2[1];
  if (*param_2 != 0x54) {
    FUN_00aa4080(param_3,1,0x3d088889,0x3f800000,0x8000010,0,0x3f800000);
  }
  if ((*(byte *)(param_1 + 0x4a8) & 2) != 0) {
    iVar2 = 0;
  }
  iVar1 = FUN_00ac8a50();
  if (iVar1 != 0) {
    *param_4 = *param_4;
    return;
  }
  *param_4 = *param_4 - iVar2;
  return;
}

// 0064F170  FUN_0064f170  size=296  [between]
void __fastcall FUN_0064f170(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_0064f25a;
  }
  uVar3 = 0x9e;
  if ((param_1[0x3a6] & 0xffffU) == 5) {
    if ((param_1[0x3cf] & 0x100U) != 0) {
      uVar3 = 0x9f;
    }
    param_1[0x3cf] = param_1[0x3cf] ^ 0x100;
  }
  if ((param_1[0x3a6] & 0xffffU) == 3) {
    uVar1 = 0x80;
    uVar3 = 0xa0;
    if ((*(byte *)(param_1 + 0x3cf) & 0x80) != 0) {
      uVar3 = 0xa1;
    }
LAB_0064f1fe:
    param_1[0x3cf] = param_1[0x3cf] ^ uVar1;
  }
  else if ((param_1[0x3a6] & 0xffffU) == 4) {
    uVar1 = 0x40;
    uVar3 = 0xa2;
    if ((*(byte *)(param_1 + 0x3cf) & 0x40) != 0) {
      uVar3 = 0xa3;
    }
    goto LAB_0064f1fe;
  }
  FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x42f00000;
  FUN_0043f5b0(9,0x41200000);
LAB_0064f25a:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
  }
  return;
}

// 0064F4E0  Em8030::vf14C  size=126  [class]
undefined4 __thiscall Em8030::vf14C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((0 < param_1[0x21c]) && (param_1[0x139] == 0)) {
    if ((param_2 != 0x34) && (param_2 != 0x35)) {
      iVar1 = FUN_00ac4d60(1);
      if (iVar1 == 0) {
        if ((param_2 == 0x24) || (param_2 == 0x31)) {
          iVar1 = (**(code **)(*param_1 + 0x1d8))();
          if (iVar1 == 0) {
            return 1;
          }
        }
        else if (param_2 == 0x36) {
          return 1;
        }
      }
      return 0;
    }
    return 1;
  }
  return 0;
}

// 0064F560  FUN_0064f560  size=672  [between]
void __fastcall FUN_0064f560(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b35570;
    (**(code **)(*piVar2 + 4))(&DAT_01b35570);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    if (uVar4 != 0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x1b6,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (uVar4 != 0) {
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b80920(iVar1,0x40400000,0x3dcccccd,0x3e99999a,1);
    FUN_00db3e80(0x41880000,0,&DAT_01bea1d0);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    break;
  case 1:
  case 3:
    break;
  case 2:
    if (uVar4 != 0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x1b7,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (uVar4 != 0) {
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    if (uVar4 != 0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x1b8,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (uVar4 != 0) {
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a7c950();
      FUN_00ba6810(1,1);
      (**(code **)(*param_1 + 0x388))(0);
    }
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    iVar1 = FUN_00a8c760(0x35);
    if ((iVar1 != 0) && (param_1[0x1d9] != 0)) {
      FUN_008e6d00();
      FUN_008e4580(param_1 + 0x14,1);
      return;
    }
  default:
    goto switchD_0064f5ed_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0064f5ed_default:
  return;
}

// 0064F820  FUN_0064f820  size=580  [between]
void __fastcall FUN_0064f820(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b35570;
    (**(code **)(*piVar2 + 4))(&DAT_01b35570);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    if (uVar4 != 0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x1b7,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (uVar4 != 0) {
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b80920(iVar1,0x40400000,0x3dcccccd,0x3e99999a,1);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    if (uVar4 != 0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x1b8,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (uVar4 != 0) {
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a7c950();
      FUN_00ba6810(1,1);
      (**(code **)(*param_1 + 0x388))(0);
    }
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    iVar1 = FUN_00a8c760(0x35);
    if ((iVar1 != 0) && (param_1[0x1d9] != 0)) {
      FUN_008e6d00();
      FUN_008e4580(param_1 + 0x14,1);
      return;
    }
  }
  return;
}

// 0064FA80  FUN_0064fa80  size=130  [between]
void FUN_0064fa80(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x24) == 0x3030a) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          puVar3 = &DAT_01b35450;
          (**(code **)(*piVar2 + 4))(&DAT_01b35450);
          FUN_00dd6d80(puVar3);
        }
        FUN_005ff620();
      }
    }
    FUN_00ac8b20(param_1);
    FUN_00a805f0();
    FUN_00a7c950();
  }
  return;
}

// 0064FB10  FUN_0064fb10  size=502  [between]
void __thiscall
FUN_0064fb10(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xffff0000;
  if ((param_1[0x3ce] & 0x800U) != 0) {
    FUN_009f8b10();
  }
  if (param_1[0x54e] != 0) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  if (uVar3 != 0x80000) {
    iVar1 = FUN_00a8cab0();
    param_1[0x3af] = iVar1;
    iVar1 = FUN_00a8cac0();
    param_1[0x3b0] = iVar1;
    param_1[0x3b1] = param_1[0x3a6];
    iVar1 = FUN_0064d0d0(param_2);
    if (iVar1 != 0) {
      param_3 = param_3 | 0x80000000;
    }
    param_1[0x3ce] = param_1[0x3ce] & 0xebff17ff;
    if (param_1[0x3c9] != 0) {
      *(undefined4 *)(param_1[0x3c9] + 0xbb0) = 0;
      *(undefined4 *)(param_1[0x3c9] + 0xbac) = 1;
    }
    if (param_1[0x3ca] != 0) {
      *(undefined4 *)(param_1[0x3ca] + 0xbb0) = 0;
      *(undefined4 *)(param_1[0x3ca] + 0xbac) = 1;
    }
    if ((int)uVar3 < 0x50001) {
      if (uVar3 == 0x50000) {
        param_1[0x3ce] = param_1[0x3ce] | 0x28000000;
        FUN_00c27260(param_1[0x6b3]);
      }
      else if (uVar3 == 0x10000) {
        param_1[0x3ce] = param_1[0x3ce] & 0xf7ffffff;
      }
      else if (uVar3 == 0x40000) {
        param_1[0x3ce] = param_1[0x3ce] | 0x8000000;
      }
    }
    else if (uVar3 == 0x70000) {
      param_1[0x3ce] = param_1[0x3ce] | 0x4000000;
    }
    else if (uVar3 == 0x90000) {
      param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
    }
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  param_1[0x3a6] = param_3;
  if ((int)param_3 < 0) {
    FUN_00a962d0(1,0);
    param_1[0x3c8] = 0x40;
  }
  else {
    FUN_00a962d0(0,0);
    param_1[0x3c8] = 0;
  }
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 4;
    }
  }
  if (param_1[0x1d9] != 0) {
    iVar1 = FUN_008e24a0(2);
    if (iVar1 != 0) {
      FUN_008e5ac0(2);
    }
  }
  return;
}

// 0064FD10  Em8030::vf34C  size=42  [class]
void __fastcall Em8030::vf34C(int param_1)

{
  if ((*(uint *)(param_1 + 0xf38) & 0x8000000) != 0) {
    FUN_0064fb10(0x40000,0,0,0,0);
    return;
  }
  FUN_0064fb10(0x10000,0,0,0,0);
  return;
}

// 0064FD40  Em8030::vf350  size=42  [class]
void __fastcall Em8030::vf350(int param_1)

{
  if ((*(uint *)(param_1 + 0xf38) & 0x8000000) != 0) {
    FUN_0064fb10(0x40008,0,0,0,0);
    return;
  }
  FUN_0064fb10(0x1000a,0,0,0,0);
  return;
}

// 0064FD70  FUN_0064fd70  size=274  [between]
undefined4 __fastcall FUN_0064fd70(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int local_60 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar9 = FUN_00907560(param_1 + 0x18fc,0,0,0,0,0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  iVar10 = *(int *)(param_1 + 0xa84);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(iVar10 + 0x40);
  uVar6 = *(undefined4 *)(iVar10 + 0x48);
  uVar7 = *(undefined4 *)(iVar10 + 0x4c);
  fVar8 = *(float *)(iVar10 + 0x44);
  iVar10 = FUN_009f8b40();
  local_30 = iVar10 << 0x10 | 7;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_60[1] = 0x1e;
  local_2c = 0x3ff001b;
  local_28 = 0x10;
  local_20 = "Em8030UsePath";
  local_60[0] = param_1 + 0x18fc;
  local_50 = uVar1;
  local_4c = fVar2 + 0.5;
  local_48 = uVar3;
  local_44 = uVar4;
  local_40 = uVar5;
  local_3c = fVar8 + 0.5;
  local_38 = uVar6;
  local_34 = uVar7;
  HavokRayCastManager::set(local_60);
  return uVar9;
}

// 0064FE90  FUN_0064fe90  size=278  [between]
undefined4 __fastcall FUN_0064fe90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float fStack_74;
  float local_70;
  int local_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  
  uVar4 = FUN_00907640(param_1 + 0x1930,0,param_1 + 0x1920);
  local_70 = 0.0;
  local_6c[0] = 0x40000000;
  local_6c[1] = 0xbf000000;
  D3DXVec3TransformNormal(&local_70,&local_70,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  local_70 = *(float *)(param_1 + 0x4c) + local_70;
  iVar5 = FUN_009f8b40();
  uStack_38 = iVar5 << 0x10 | 7;
  fStack_50 = local_70;
  local_6c[1] = 1;
  uStack_4c = 0;
  uStack_34 = 0;
  uStack_30 = 0x60;
  uStack_48 = 0xc2c80000;
  uStack_2c = 0;
  pcStack_28 = "Em8030FloorCheck";
  uStack_44 = 0;
  fStack_40 = local_70;
  uStack_3c = 0x3e4ccccd;
  local_6c[0] = param_1 + 0x1930;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + fStack_74;
  FUN_0090fb00(local_6c);
  return uVar4;
}

// 0064FFB0  FUN_0064ffb0  size=501  [between]
/* WARNING: Removing unreachable block (ram,0x0065001e) */

int __thiscall FUN_0064ffb0(int param_1,float *param_2,float *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8c;
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  local_84 = param_1 + 0x1a50;
  local_88 = param_1;
  iVar2 = FUN_00907640(local_84,&local_8c,0);
  if ((iVar2 != 0) && (FUN_0112bcf0(), 0 < *(int *)(local_8c + 0x14))) {
    iVar3 = *(int *)(*(int *)(local_8c + 0x10) + 0x28);
    iVar4 = 0;
    iVar5 = 0;
    if (*(char *)(iVar3 + 0x18) == '\x01') {
      iVar4 = *(char *)(iVar3 + 0x10) + iVar3;
    }
    if (*(char *)(iVar3 + 0x18) == '\x02') {
      if (*(char *)(iVar3 + 0x18) == '\x02') {
        iVar5 = *(char *)(iVar3 + 0x10) + iVar3;
      }
      else {
        iVar5 = 0;
      }
    }
    if ((iVar4 != 0) && (iVar3 = FUN_008f7780(iVar4), iVar3 != 0)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x4b0);
      iVar3 = FUN_009f93b0(uVar1);
      if ((iVar3 != 0) || (iVar3 = FUN_009f9350(uVar1), iVar3 != 0)) {
        iVar2 = 0;
      }
    }
    if ((iVar5 != 0) && (iVar3 = FUN_008f7780(iVar5), iVar3 != 0)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x4b0);
      iVar3 = FUN_009f93b0(uVar1);
      if ((iVar3 != 0) || (iVar3 = FUN_009f9350(uVar1), iVar3 != 0)) {
        iVar2 = 0;
      }
    }
  }
  local_80 = *param_2;
  local_78 = param_2[2];
  local_74 = param_2[3];
  if (param_4 == 0) {
    local_7c = 3.5;
  }
  else {
    local_7c = 5.0;
  }
  local_7c = param_2[1] + local_7c;
  local_70 = *param_3 - *param_2;
  local_6c = param_3[1] - param_2[1];
  local_68 = param_3[2] - param_2[2];
  local_64 = param_3[3] - param_2[3];
  iVar3 = FUN_009f8b40();
  local_50 = local_80;
  local_2c = iVar3 << 0x10 | 7;
  local_4c = local_7c;
  local_48 = local_78;
  local_44 = local_74;
  local_60[0] = local_84;
  local_60[1] = 0;
  local_40 = local_70;
  local_28 = 0x3ff001b;
  local_24 = 2;
  local_3c = local_6c;
  local_20 = 0;
  local_1c = "Em8030JumpWallCheck";
  local_38 = local_68;
  local_34 = local_64;
  local_30 = 0x3e4ccccd;
  FUN_0090fb00(local_60);
  return iVar2;
}

// 006501B0  FUN_006501b0  size=591  [between]
/* WARNING: Removing unreachable block (ram,0x0065024a) */

int __fastcall FUN_006501b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    local_84 = param_1 + 0x18d0;
    local_94 = FUN_00907640(local_84,&local_88,0);
    if (local_94 != 0) {
      FUN_0112bcf0();
      local_90 = 0;
      if (0 < *(int *)(local_88 + 0x14)) {
        local_98 = 0;
        do {
          iVar3 = 0;
          iVar2 = *(int *)(*(int *)(local_88 + 0x10) + local_98 + 0x28);
          iVar4 = 0;
          if (*(char *)(iVar2 + 0x18) == '\x01') {
            iVar3 = *(char *)(iVar2 + 0x10) + iVar2;
          }
          if (*(char *)(iVar2 + 0x18) == '\x02') {
            if (*(char *)(iVar2 + 0x18) == '\x02') {
              iVar4 = *(char *)(iVar2 + 0x10) + iVar2;
            }
            else {
              iVar4 = 0;
            }
          }
          if ((iVar3 != 0) && (iVar2 = FUN_008f7780(iVar3), iVar2 != 0)) {
            uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
            iVar2 = FUN_009f93b0(uVar1);
            if ((iVar2 != 0) || (iVar2 = FUN_009f9350(uVar1), iVar2 != 0)) {
              local_94 = 0;
            }
          }
          if ((iVar4 != 0) && (iVar2 = FUN_008f7780(iVar4), iVar2 != 0)) {
            uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
            iVar2 = FUN_009f93b0(uVar1);
            if ((iVar2 != 0) || (iVar2 = FUN_009f9350(uVar1), iVar2 != 0)) {
              local_94 = 0;
            }
          }
          local_98 = local_98 + 0x30;
          local_90 = local_90 + 1;
        } while (local_90 < *(int *)(local_88 + 0x14));
      }
    }
    local_70 = *(float *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0xa84);
    local_68 = *(float *)(param_1 + 0x48);
    local_64 = *(float *)(param_1 + 0x4c);
    local_6c = *(float *)(param_1 + 0x44) + 2.0;
    local_80 = *(float *)(iVar2 + 0x40) - local_70;
    local_7c = (*(float *)(iVar2 + 0x44) + 1.5) - local_6c;
    local_78 = *(float *)(iVar2 + 0x48) - local_68;
    local_74 = *(float *)(iVar2 + 0x4c) - local_64;
    iVar2 = FUN_009f8b40();
    local_50 = local_70;
    local_2c = iVar2 << 0x10 | 7;
    local_4c = local_6c;
    local_48 = local_68;
    local_24 = 0;
    local_20 = 0;
    local_44 = local_64;
    local_40 = local_80;
    local_60[0] = local_84;
    local_3c = local_7c;
    local_60[1] = 10;
    local_28 = 0x3ff001b;
    local_38 = local_78;
    local_1c = "Em8030AttackLine";
    local_34 = local_74;
    local_30 = 0x3dcccccd;
    FUN_0090fb00(local_60);
    return local_94;
  }
  return 0;
}

// 00650400  FUN_00650400  size=58  [between]
int FUN_00650400(undefined4 param_1)

{
  int iVar1;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00907640(param_1,local_24,local_20);
  if (iVar1 != 0) {
    FUN_0112bcf0();
  }
  return iVar1;
}

// 00650440  FUN_00650440  size=313  [between]
void __thiscall FUN_00650440(int param_1,undefined4 param_2)

{
  int iVar1;
  float unaff_ESI;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  
  local_70 = *(float *)(param_1 + 0x40);
  local_6c = *(float *)(param_1 + 0x44) + 1.5;
  local_68 = *(undefined4 *)(param_1 + 0x48);
  local_64 = local_64 + *(float *)(param_1 + 0x4c);
  iVar1 = FUN_009f8b40();
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  D3DXVec3TransformNormal(&local_80,param_2,param_1 + 0x10);
  local_6c = (float)(param_1 + 0x18d8);
  local_68 = 0;
  uStack_2c = 0;
  uStack_38 = iVar1 << 0x10 | 7;
  uStack_34 = 0x3ff001b;
  uStack_30 = 2;
  pcStack_28 = "Em8030Space";
  local_80 = local_80 + local_70 + *(float *)(param_1 + 0x4c);
  fStack_4c = (unaff_ESI + *(float *)(param_1 + 0x40)) - local_7c;
  fStack_48 = (*(float *)(param_1 + 0x44) + 1.5 + fStack_88) - local_78;
  fStack_44 = (*(float *)(param_1 + 0x48) + fStack_84) - fStack_74;
  fStack_40 = local_80 - local_70;
  fStack_5c = local_7c;
  fStack_58 = local_78;
  fStack_54 = fStack_74;
  fStack_50 = local_70;
  uStack_3c = 0x3e4ccccd;
  FUN_0090fb00(&local_6c);
  return;
}

// 00650580  Em8030::vf360  size=123  [class]
void __fastcall Em8030::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  iVar1 = FUN_00a81330();
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x4f0);
  }
  else {
    uVar2 = FUN_00a81330(0);
  }
  FUN_00e03080(uVar2,uVar3);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = 1;
    uVar3 = FUN_00a81330(1);
    FUN_00e03080(uVar3,uVar2);
  }
  iVar1 = FUN_00ac45b0();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,2);
  }
  return;
}

// 00650600  Em8030::vf268  size=233  [class]
undefined4 __thiscall
Em8030::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return 0;
  }
  local_20 = param_4[8];
  local_1c = param_4[9];
  local_18 = param_4[10];
  local_14 = 0x3f800000;
  switch(*param_4) {
  case 1:
    FUN_00a883f0(2,0,&local_20);
    return 1;
  case 2:
    FUN_00a883f0(4,0,&local_20);
    return 1;
  default:
    return 0;
  case 9:
    *(undefined4 *)(param_1 + 0xbe8) = 0;
    return 1;
  case 0xf:
    *(undefined4 *)(param_1 + 0xbe8) = 1;
    return 1;
  case 0x15:
    FUN_00ac4710(param_4[0xb]);
    FUN_00a8d710(param_1 + 0x40);
    return 1;
  }
}

// 00650720  FUN_00650720  size=226  [between]
void __fastcall FUN_00650720(int *param_1)

{
  int iVar1;
  
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa6e0(0x3f800000,0);
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x358))(2,0);
    param_1[0x1af] = 1;
    FUN_00940450(param_1[0x20f]);
    iVar1 = FUN_00e5e0c0("em0030_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x6bb] = iVar1;
    (**(code **)(*param_1 + 0x364))(0x20030);
  }
  (**(code **)(*param_1 + 0x20))();
  FUN_00c4d1a0(param_1[0x13c],0);
  return;
}

// 00650810  Em8030::vf368  size=123  [class]
undefined4 __fastcall Em8030::vf368(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar2 = 0;
  if (iVar1 == 0x28030) {
    if ((*(uint *)(param_1 + 0xf38) & 0x40) != 0) {
      uVar2 = 2;
    }
    if ((*(uint *)(param_1 + 0xf38) & 0x20) != 0) {
      uVar2 = 1;
    }
  }
  if (iVar1 == 0x28033) {
    uVar2 = 3;
    if ((*(uint *)(param_1 + 0xf38) & 0x40) != 0) {
      uVar2 = 5;
    }
    if ((*(uint *)(param_1 + 0xf38) & 0x20) != 0) {
      uVar2 = 4;
    }
  }
  if (iVar1 == 0x28035) {
    uVar2 = 6;
    if ((*(uint *)(param_1 + 0xf38) & 0x40) != 0) {
      uVar2 = 8;
    }
    if ((*(uint *)(param_1 + 0xf38) & 0x20) != 0) {
      uVar2 = 7;
    }
  }
  return uVar2;
}

// 00650890  FUN_00650890  size=227  [between]
undefined4 __fastcall FUN_00650890(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00a9b930();
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x4b0) != 0x11400)) {
    iVar1 = FUN_00ac8a50();
    if ((iVar1 == 0) && (((param_1[0x3ce] & 0x4000000U) == 0 && (param_1[0x139] == 0)))) {
      iVar1 = (**(code **)(*param_1 + 0x1d8))();
      if ((iVar1 == 0) && ((0 < param_1[0x21c] && (param_1[0x187] != 0)))) {
        iVar1 = FUN_00a82e80();
        if ((iVar1 == 0) || ((param_1[0x3ce] & 0x100U) != 0)) {
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x40a00000,0x3fc00000,0x40490fdb,
                       0x3f060a92,0x1003,10);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00650980  Em8030::vf13C  size=87  [class]
bool __fastcall Em8030::vf13C(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 == 0) && ((param_1[0x3ce] & 0x4000000U) == 0)) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (((iVar1 == 0) && (0 < param_1[0x21c])) && (param_1[0x187] != 0)) {
      iVar1 = FUN_00a82e80();
      return iVar1 == 0;
    }
  }
  return false;
}

// 006509E0  FUN_006509e0  size=170  [callgraph]
undefined4 __fastcall FUN_006509e0(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 == 0) && (param_1[0x139] == 0)) && ((DAT_01bea060 & 0x2000000) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (((iVar1 == 0) && (0 < param_1[0x21c])) && ((param_1[0x3ce] & 0x40000U) != 0)) {
      iVar1 = FUN_0064d3b0();
      if (iVar1 != 0) {
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40600000,0x3fc00000,2,8);
        return 1;
      }
    }
  }
  return 0;
}

// 00650A90  FUN_00650a90  size=700  [callgraph]
void __thiscall FUN_00650a90(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_2 == 0) {
    if (((uint)param_1[0x3cf] >> 0x15 & 1) != param_3) {
      FUN_00ac95a0("_EFD01",param_3);
      if (param_3 == 0) {
        param_1[0x3cf] = param_1[0x3cf] & 0xffdfffff;
      }
      else {
        param_1[0x3cf] = param_1[0x3cf] | 0x200000;
      }
      FUN_00ac8d80(0,param_3);
      FUN_00ac8d80(1,param_3);
      FUN_00ac8d80(4,param_3);
      FUN_00ac8d80(5,param_3);
      FUN_00ac8d80(6,param_3);
      if (param_3 != 0) {
        if (param_4 != 0) {
          (**(code **)(*param_1 + 0x358))(400,param_1 + 0x5d8);
        }
        iVar1 = FUN_00ac8a30();
        if (iVar1 != 0) {
          iVar1 = FUN_00a10040(0x1f);
          if (iVar1 != 2) {
            uStack_30 = 0;
            uStack_2c = 0;
            uStack_28 = 0;
            uStack_20 = 0;
            uStack_1c = 0;
            uStack_18 = 0;
            iVar1 = FUN_0093c1f0((int)*(char *)((int)param_1 + 0xbab),param_1[0x13c],4,7,&uStack_20,
                                 &uStack_30,0x41200000,0x3f000000,0xbf800000);
            param_1[0x6bc] = iVar1;
          }
        }
        FUN_00eaa6e0(0x3f800000,0);
        (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x604);
      }
    }
  }
  else if (param_2 == 1) {
    if (((uint)param_1[0x3cf] >> 0x13 & 1) != param_3) {
      FUN_00ac95a0("_EFD03",param_3);
      if (param_3 == 0) {
        param_1[0x3cf] = param_1[0x3cf] & 0xfff7ffff;
      }
      else {
        param_1[0x3cf] = param_1[0x3cf] | 0x80000;
      }
      FUN_00ac8d80(7,param_3);
      FUN_00ac8d80(8,param_3);
      if (param_3 != 0) {
        if (param_4 != 0) {
          (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x5d8);
        }
        if ((param_1[0x3cf] & 0x300000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
          return;
        }
      }
    }
  }
  else if ((param_2 == 2) && (((uint)param_1[0x3cf] >> 0x14 & 1) != param_3)) {
    FUN_00ac95a0("_EFD02",param_3);
    if (param_3 == 0) {
      param_1[0x3cf] = param_1[0x3cf] & 0xffefffff;
    }
    else {
      param_1[0x3cf] = param_1[0x3cf] | 0x100000;
    }
    FUN_00ac8d80(2,param_3);
    FUN_00ac8d80(3,param_3);
    if (param_3 != 0) {
      if (param_4 != 0) {
        (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x5ac);
      }
      if ((param_1[0x3cf] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
        return;
      }
    }
  }
  return;
}

// 00650D50  FUN_00650d50  size=672  [callgraph]
void __fastcall FUN_00650d50(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = FUN_00a82e60();
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(iVar3 + 0x4c);
  }
  iVar3 = FUN_00a82e70();
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0xf38) & 8) != 0)) {
    *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0xd30);
    *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0xd34);
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0xd38);
    *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0xd3c);
  }
  local_20 = *(undefined4 *)(param_1 + 0x1960);
  local_1c = *(undefined4 *)(param_1 + 0x1964);
  local_18 = *(undefined4 *)(param_1 + 0x1968);
  local_14 = *(undefined4 *)(param_1 + 0x196c);
  *(undefined4 *)(param_1 + 0x19a0) = 0;
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x20000;
  iVar3 = FUN_00a979d0();
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x19a4) != 0)) {
    FUN_00a8d330(param_1 + 0x40,&local_20);
    *(undefined4 *)(param_1 + 0x19a4) = 0;
  }
  if (*(int *)(param_1 + 0x618) == 0x40002) {
    uVar2 = 0x40800000;
  }
  else {
    uVar2 = 0x3fc00000;
  }
  iVar3 = FUN_00aa09c0(&local_20,uVar2,0);
  if ((iVar3 != 0) && (iVar3 = FUN_00a8d380(), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x19a0) = 1;
  }
  if ((*(byte *)(param_1 + 0xf38) & 0x80) == 0) {
    iVar3 = FUN_00a979d0();
    if (iVar3 == 0) {
      iVar3 = FUN_00a8d400(*(int *)(param_1 + 0xa84) + 0x40);
      *(int *)(param_1 + 0x1904) = iVar3;
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x80;
      }
    }
  }
  else {
    iVar3 = FUN_00a8d400(*(int *)(param_1 + 0xa84) + 0x40);
    if (((*(int *)(param_1 + 0x1904) != 0) && (iVar3 != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x1904) + 0xc) != *(int *)(iVar3 + 0xc))) {
      *(undefined4 *)(param_1 + 0x19a4) = 1;
      *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xffffff7f;
    }
  }
  FUN_00a979f0(&local_2c);
  *(undefined4 *)(param_1 + 0x19b0) = local_2c;
  *(undefined4 *)(param_1 + 0x19b4) = local_28;
  *(undefined4 *)(param_1 + 0x19b8) = local_24;
  *(undefined4 *)(param_1 + 0x19bc) = 0x3f800000;
  if (*(int *)(param_1 + 0x18c4) == 0) {
    if (*(int *)(param_1 + 0x19a0) == 0) goto LAB_00650fac;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1900);
    iVar4 = FUN_00a8d3d0(6);
    fVar1 = *(float *)(param_1 + 0xa8c);
    if ((!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) ||
       (*(int *)(param_1 + 0x19a0) == 0 && (iVar4 != 0 || iVar3 != 0))) {
LAB_00650fac:
      local_20 = *(undefined4 *)(param_1 + 0x19b0);
      local_1c = *(undefined4 *)(param_1 + 0x19b4);
      local_18 = *(undefined4 *)(param_1 + 0x19b8);
      local_14 = *(undefined4 *)(param_1 + 0x19bc);
      *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x20000;
      goto LAB_00650fda;
    }
  }
  local_20 = *(undefined4 *)(param_1 + 0x1960);
  local_1c = *(undefined4 *)(param_1 + 0x1964);
  local_18 = *(undefined4 *)(param_1 + 0x1968);
  local_14 = *(undefined4 *)(param_1 + 0x196c);
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffdffff;
LAB_00650fda:
  FUN_00a8e880(&local_20);
  return;
}

// 00650FF0  FUN_00650ff0  size=159  [callgraph]
undefined4 __thiscall FUN_00650ff0(int param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((((DAT_01bea060 & 0x2000000) == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
     ((DAT_01bea060 & 0x8000000) == 0)) {
    iVar1 = FUN_00ac82f0();
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 0;
    iVar1 = FUN_00ac48f0(0);
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x18c4) == 0)) {
      FUN_00a92fb0();
      fVar3 = (float10)FUN_00e049b0();
      fVar3 = fVar3 + (float10)*(float *)(param_1 + 0xbd0);
      *(float *)(param_1 + 0xbd0) = (float)fVar3;
      if ((float10)param_2 <= fVar3) {
        uVar2 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xbd0) = 0;
    }
    if (param_3 * param_3 < *(float *)(param_1 + 0xa8c) !=
        (param_3 * param_3 == *(float *)(param_1 + 0xa8c))) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 1;
}

// 00651090  FUN_00651090  size=312  [callgraph]
undefined4 __fastcall FUN_00651090(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xf38) & 0x100) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffffeff;
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x618) & 0xffff0000;
  if ((*(uint *)(param_1 + 0xf38) & 0x100) == 0) {
    *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x100;
    if (uVar1 == 0x60000) {
      return 0;
    }
    if (uVar1 == 0x90000) {
      return 0;
    }
    if (uVar1 == 0x80000) {
      return 0;
    }
    if (uVar1 == 0xc0000) {
      return 0;
    }
    if (uVar1 == 0xa0000) {
      return 0;
    }
    uVar3 = 0;
    if ((*(byte *)(param_1 + 0xf3a) & 1) != 0) {
      uVar2 = 0xb0004;
      goto LAB_0065119a;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x618) == 0x40007) {
      return 0;
    }
    if (uVar1 == 0x60000) {
      return 0;
    }
    if (uVar1 == 0x90000) {
      return 0;
    }
    if (uVar1 == 0x80000) {
      return 0;
    }
    if (uVar1 == 0xc0000) {
      return 0;
    }
    if (uVar1 == 0xa0000) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0xf38) & 0x10000) != 0) {
      uVar3 = 1;
      uVar2 = 0xb0004;
      goto LAB_0065119a;
    }
    uVar3 = 2;
  }
  uVar2 = 0x40007;
LAB_0065119a:
  FUN_0064fb10(uVar2,0,uVar3,0,0);
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x4000000;
  return 1;
}

// 006511D0  FUN_006511d0  size=113  [callgraph]
void __thiscall FUN_006511d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == param_2) {
      *(undefined4 *)(param_1 + 0xf24) = 0;
      FUN_0064fa80(0);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == param_2) {
      *(undefined4 *)(param_1 + 0xf28) = 0;
      FUN_0064fa80(1);
    }
  }
  return;
}

// 00651250  FUN_00651250  size=107  [callgraph]
int * FUN_00651250(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a82090("Em8030Wire",0x3830b,0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b35574;
        (**(code **)(*piVar2 + 4))(&DAT_01b35574);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c7f0();
          FUN_00a7c960(uVar3);
          return piVar2;
        }
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}

// 00651990  Em8030::vf33C  size=2420  [class]
void __thiscall Em8030::vf33C(int param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int local_2c;
  int local_24;
  undefined1 local_20 [28];
  
  param_2[2] = 0;
  local_2c = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  uVar2 = 2;
  local_24 = 5;
  do {
    bVar1 = (byte)uVar2;
    uVar6 = 0x80000000 >> (bVar1 - 2 & 0x1f);
    uVar5 = uVar2 - 2 >> 5;
    if (((param_3[uVar5 + 4] & uVar6) != 0) && ((param_3[uVar5 + 2] & uVar6) == 0)) {
      local_2c = local_2c + 1;
    }
    uVar6 = 0x80000000 >> (bVar1 - 1 & 0x1f);
    uVar5 = uVar2 - 1 >> 5;
    if (((param_3[uVar5 + 4] & uVar6) != 0) && ((param_3[uVar5 + 2] & uVar6) == 0)) {
      local_2c = local_2c + 1;
    }
    uVar5 = 0x80000000 >> (bVar1 & 0x1f);
    if (((param_3[(uVar2 >> 5) + 4] & uVar5) != 0) && ((param_3[(uVar2 >> 5) + 2] & uVar5) == 0)) {
      local_2c = local_2c + 1;
    }
    uVar6 = 0x80000000 >> (bVar1 + 1 & 0x1f);
    uVar5 = uVar2 + 1 >> 5;
    if (((param_3[uVar5 + 4] & uVar6) != 0) && ((param_3[uVar5 + 2] & uVar6) == 0)) {
      local_2c = local_2c + 1;
    }
    uVar6 = 0x80000000 >> (bVar1 + 2 & 0x1f);
    uVar5 = uVar2 + 2 >> 5;
    if (((param_3[uVar5 + 4] & uVar6) != 0) && ((param_3[uVar5 + 2] & uVar6) == 0)) {
      local_2c = local_2c + 1;
    }
    uVar2 = uVar2 + 5;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  if (local_2c < 3) {
    param_3[6] = 0x42000;
    return;
  }
  uVar2 = param_3[4];
  if ((((-1 < (int)uVar2) || ((~(*param_3 >> 0x1f) & 1) == 0)) &&
      (((uVar2 & 0x40000000) == 0 || ((~(*param_3 >> 0x1e) & 1) == 0)))) &&
     (((uVar2 & 0x100000) == 0 || ((~(*param_3 >> 0x14) & 1) == 0)))) {
    iVar3 = FUN_0043f830(2);
    if ((iVar3 == 0) || (iVar3 = FUN_0043f830(4), iVar3 == 0)) {
      iVar3 = FUN_0043f830(2);
      if ((iVar3 != 0) && (iVar3 = FUN_0043f830(4), iVar3 == 0)) {
        iVar3 = FUN_0043f860(5);
        if (iVar3 == 0) {
          *param_2 = 0xb;
          param_2[2] = 0x10003;
          if (*(int *)(param_1 + 0xe90) == 7) {
            *param_2 = 0x12;
          }
          if (*(int *)(param_1 + 0xe90) == 9) {
            *param_2 = 0x17;
          }
          if (*(int *)(param_1 + 0xe90) == 10) {
            *param_2 = 0x17;
          }
          if (*(int *)(param_1 + 0x4e4) == 0) goto LAB_00651d25;
          *param_2 = 3;
LAB_00651d0d:
          if ((*(byte *)(param_1 + 0xf3a) & 1) != 0) {
            *param_2 = 0x1d;
            param_2[1] = *(uint *)(param_1 + 0xe90);
          }
        }
        else {
          param_2[2] = 0x10000;
          if ((*(uint *)(param_1 + 0xf38) & 0x400000) == 0) {
            if ((*(uint *)(param_1 + 0xf38) & 0x200000) == 0) {
              uVar2 = FUN_00dde2a0(0,100);
              if ((uVar2 & 1) == 0) {
                *param_2 = 0xf;
                goto LAB_00651da2;
              }
              *param_2 = 0xd;
              param_2[2] = 0x10001;
            }
            else {
              *param_2 = 0xf;
              param_2[2] = 0x10001;
            }
          }
          else {
            *param_2 = 0xd;
LAB_00651da2:
            param_2[2] = 0x10002;
          }
          if (*(int *)(param_1 + 0x4e4) == 0) goto LAB_00651df4;
LAB_00651db2:
          if (*param_2 == 0xd) {
            *param_2 = 3;
            if ((*(byte *)(param_1 + 0xf3a) & 1) != 0) {
              *param_2 = 0x1d;
              param_2[1] = *(uint *)(param_1 + 0xe90);
            }
          }
          else if (*param_2 == 0xf) {
            *param_2 = 4;
            goto LAB_00651d0d;
          }
        }
LAB_00651d25:
        if ((*(uint *)(param_1 + 0xf38) & 0x200) != 0) {
          *param_2 = 0x1c;
        }
        goto LAB_00651d37;
      }
      iVar3 = FUN_0043f830(4);
      if ((iVar3 != 0) && (iVar3 = FUN_0043f830(2), iVar3 == 0)) {
        iVar3 = FUN_0043f860(3);
        if (iVar3 == 0) {
          *param_2 = 0xc;
          if (*(int *)(param_1 + 0xe90) == 8) {
            *param_2 = 0x13;
          }
          if (*(int *)(param_1 + 0xe90) == 10) {
            *param_2 = 0x17;
          }
          if (*(int *)(param_1 + 0xe90) == 9) {
            *param_2 = 0x17;
          }
          if ((*(int *)(param_1 + 0x4e4) != 0) &&
             (*param_2 = 3, (*(byte *)(param_1 + 0xf3a) & 1) != 0)) {
            *param_2 = 0x1d;
            param_2[1] = *(uint *)(param_1 + 0xe90);
          }
          if ((*(uint *)(param_1 + 0xf38) & 0x200) != 0) {
            *param_2 = 0x1c;
          }
          param_3[6] = *(uint *)(param_1 + 0x4b4);
          return;
        }
        param_2[2] = 0x10000;
        if ((*(uint *)(param_1 + 0xf38) & 0x400000) == 0) {
          if ((*(uint *)(param_1 + 0xf38) & 0x200000) == 0) {
            uVar2 = FUN_00dde2a0(0,100);
            *param_2 = ((uVar2 & 0xff ^ 0xffffffff) & 1) * 2 | 0xd;
          }
          else {
            *param_2 = 0xf;
          }
        }
        else {
          *param_2 = 0xd;
        }
        if (*(int *)(param_1 + 0x4e4) != 0) goto LAB_00651db2;
LAB_00651df4:
        if (*(int *)(param_1 + 0xe90) == 7) {
          *param_2 = 0x14;
        }
        if (*(int *)(param_1 + 0xe90) == 8) {
          *param_2 = 0x15;
        }
        if (*(int *)(param_1 + 0xe90) == 9) {
          *param_2 = 0x18;
        }
        if (*(int *)(param_1 + 0xe90) == 10) {
          *param_2 = 0x19;
        }
        if (*(int *)(param_1 + 0xe90) == 0xb) {
          *param_2 = 0x1a;
        }
        if (*(int *)(param_1 + 0xe90) == 0xc) {
          *param_2 = 0x1b;
        }
        if (*(int *)(param_1 + 0xe90) == 0xd) {
          *param_2 = 0xd;
        }
        if (*(int *)(param_1 + 0xe90) == 0xe) {
          *param_2 = 0xe;
        }
        if (*(int *)(param_1 + 0xe90) == 0xf) {
          *param_2 = 0xf;
        }
        goto LAB_00651d25;
      }
      iVar3 = FUN_0043f830(3);
      if ((iVar3 == 0) || (iVar3 = FUN_0043f830(5), iVar3 == 0)) {
        iVar3 = FUN_0043f830(3);
        if (iVar3 == 0) {
          iVar3 = FUN_0043f830(5);
          if (iVar3 == 0) goto LAB_00652095;
          *param_2 = 8;
        }
        else {
          *param_2 = 7;
        }
        if (*(int *)(param_1 + 0x4e4) == 0) goto LAB_00651c65;
        *param_2 = 3;
      }
      else {
        uVar2 = param_2[0x32];
        pfVar4 = (float *)FUN_00a92640(local_20);
        if (*(float *)(uVar2 + 0x18) * pfVar4[2] +
            *(float *)(uVar2 + 0x10) * *pfVar4 + *(float *)(uVar2 + 0x14) * pfVar4[1] <= 0.0) {
          *param_2 = 9;
        }
        else {
          *param_2 = 10;
        }
        if (*(int *)(param_1 + 0x4e4) == 0) {
          if (*(int *)(param_1 + 0xe90) == 8) {
            *param_2 = 0x11;
          }
          if (*(int *)(param_1 + 0xe90) == 7) {
            *param_2 = 0x10;
          }
          if (*(int *)(param_1 + 0xe90) == 9) {
            *param_2 = 9;
          }
          if (*(int *)(param_1 + 0xe90) == 10) {
            *param_2 = 10;
          }
          goto LAB_00651c65;
        }
        *param_2 = 3;
      }
    }
    else {
      if ((*(uint *)(param_1 + 0xf38) & 0x400000) == 0) {
        if ((*(uint *)(param_1 + 0xf38) & 0x200000) == 0) {
          uVar2 = FUN_00dde2a0(0,100);
          *param_2 = ((uVar2 & 0xff ^ 0xffffffff) & 1) * 2 | 0xd;
        }
        else {
          *param_2 = 0xd;
        }
      }
      else {
        *param_2 = 0xf;
      }
      if (*(int *)(param_1 + 0x4e4) == 0) {
        if (*(int *)(param_1 + 0xe90) == 7) {
          *param_2 = 0x14;
        }
        if (*(int *)(param_1 + 0xe90) == 8) {
          *param_2 = 0x15;
        }
        if (*(int *)(param_1 + 0xe90) == 9) {
          *param_2 = 0x18;
        }
        if (*(int *)(param_1 + 0xe90) == 10) {
          *param_2 = 0x19;
        }
        if (*(int *)(param_1 + 0xe90) == 0xb) {
          *param_2 = 0x1a;
        }
        if (*(int *)(param_1 + 0xe90) == 0xc) {
          *param_2 = 0x1b;
        }
        if (*(int *)(param_1 + 0xe90) == 0xd) {
          *param_2 = 0xd;
        }
        if (*(int *)(param_1 + 0xe90) == 0xe) {
          *param_2 = 0xe;
        }
        if (*(int *)(param_1 + 0xe90) == 0xf) {
          *param_2 = 0xf;
        }
        goto LAB_00651c65;
      }
      if (*param_2 == 0xd) {
        *param_2 = 3;
        if ((*(byte *)(param_1 + 0xf3a) & 1) != 0) {
          *param_2 = 0x1d;
          param_2[1] = *(uint *)(param_1 + 0xe90);
        }
        goto LAB_00651c65;
      }
      if (*param_2 != 0xf) goto LAB_00651c65;
      *param_2 = 4;
    }
    if ((*(byte *)(param_1 + 0xf3a) & 1) != 0) {
      *param_2 = 0x1d;
      param_2[1] = *(uint *)(param_1 + 0xe90);
    }
LAB_00651c65:
    if ((*(uint *)(param_1 + 0xf38) & 0x200) != 0) {
      *param_2 = 0x1c;
    }
    param_3[6] = *(uint *)(param_1 + 0x4b4);
    return;
  }
LAB_00652095:
  if (((int)uVar2 < 0) && ((~(*param_3 >> 0x1f) & 1) != 0)) {
    if ((uVar2 & 0x40000000) == 0) goto LAB_0065214c;
    if ((~(*param_3 >> 0x1e) & 1) == 0) goto LAB_00652134;
    if (((uVar2 & 0x20000000) == 0) || ((param_3[2] >> 0x1d & 1) == 0)) {
      *param_2 = 1;
      param_3[6] = *(uint *)(param_1 + 0x4b4);
    }
    else {
      iVar3 = FUN_0043f860(4);
      if (iVar3 != 0) goto LAB_00652134;
      *param_2 = 2;
      param_3[6] = *(uint *)(param_1 + 0x4b4);
    }
LAB_006520ea:
    if ((*(byte *)(param_1 + 0xf3a) & 1) != 0) {
      *param_2 = 0x1d;
      param_2[1] = *(uint *)(param_1 + 0xe90);
      return;
    }
  }
  else {
LAB_00652134:
    if (((uVar2 & 0x40000000) == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) {
LAB_0065214c:
      if (((uVar2 & 0x100000) == 0) || ((~(*param_3 >> 0x14) & 1) == 0)) {
        if ((-1 < (int)uVar2) || ((~(*param_3 >> 0x1f) & 1) == 0)) {
          iVar3 = FUN_0043f830(0x1e);
          *param_2 = 0x1c;
          if (iVar3 == 0) {
            param_3[6] = *(uint *)(param_1 + 0x4b4);
            return;
          }
LAB_00651d37:
          param_3[6] = *(uint *)(param_1 + 0x4b4);
          return;
        }
        iVar3 = FUN_0043f860(3);
        if ((iVar3 != 0) && (iVar3 = FUN_0043f860(5), iVar3 != 0)) {
          uVar2 = *(uint *)(param_1 + 0xf38);
          if ((uVar2 & 0x10000) == 0) {
            if ((uVar2 & 0x400000) != 0) {
LAB_0065221f:
              *param_2 = 6;
              param_3[6] = *(uint *)(param_1 + 0x4b4);
              return;
            }
            if ((uVar2 & 0x200000) == 0) {
              bVar1 = FUN_00dde2a0(0,100);
              *param_2 = 6 - ((bVar1 & 1) != 0);
              param_3[6] = *(uint *)(param_1 + 0x4b4);
              return;
            }
          }
          else {
            iVar3 = FUN_00a8c760(5);
            if (iVar3 == 0) {
              iVar3 = FUN_00a8c760(6);
              if (iVar3 == 0) {
                *param_2 = ((*(uint *)(param_1 + 0xf38) & 0x400000) != 0) + 5;
                param_3[6] = *(uint *)(param_1 + 0x4b4);
                return;
              }
              goto LAB_0065221f;
            }
          }
          *param_2 = 5;
          param_3[6] = *(uint *)(param_1 + 0x4b4);
          return;
        }
        *param_2 = 0;
        param_3[6] = *(uint *)(param_1 + 0x4b4);
        goto LAB_006520ea;
      }
    }
    if (((((uVar2 & 0x10000000) != 0) && ((param_3[2] >> 0x1c & 1) != 0)) &&
        ((uVar2 & 0x4000000) != 0)) && ((param_3[2] >> 0x1a & 1) != 0)) {
      param_3[6] = 0x42000;
      return;
    }
    *param_2 = 0;
    param_3[6] = *(uint *)(param_1 + 0x4b4);
    if ((*(byte *)(param_1 + 0xf3a) & 1) != 0) {
      *param_2 = 0x1d;
      param_2[1] = *(uint *)(param_1 + 0xe90);
    }
  }
  return;
}

// 00652310  Em8030::vf338  size=97  [class]
void __thiscall Em8030::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  
  if (0 < param_4) {
    piVar2 = (int *)(param_3 + 0x18);
    bVar1 = true;
    do {
      if (*piVar2 == param_1[0x12d]) {
        bVar1 = false;
      }
      piVar2 = piVar2 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (!bVar1) {
      return;
    }
  }
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(3,1,1);
    (**(code **)(*param_1 + 0x364))(0x20030);
  }
  return;
}

// 00652380  Em8030::vf258  size=168  [class]
void __thiscall Em8030::vf258(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_4 == 0) {
    return;
  }
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar4 = &DAT_01be9d70;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d70);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x4f0);
      FUN_00a7c950();
      if (iVar3 != 0) {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c960(uVar1);
      }
      piVar2[0x2eb] = 1;
      *(int **)(param_1 + 0xf24 + param_2 * 4) = piVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xf24 + param_2 * 4) = 0;
  return;
}

// 00652430  Em8030::vf260  size=105  [class]
void __thiscall Em8030::vf260(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01be9d70;
      (**(code **)(*piVar1 + 4))(&DAT_01be9d70);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00a7c950();
        piVar1[0x2eb] = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xf24 + param_2 * 4) = 0;
  }
  return;
}

// 006524A0  Em8030::vf334  size=921  [class]
void __thiscall Em8030::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  
  EmBaseDLC::vf334(param_2,param_3);
  if (param_3 == (int *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar13 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar4 = FUN_00dd6d80(puVar13);
    uVar9 = -(uint)(iVar4 != 0) & (uint)param_3;
  }
  FUN_009fd240();
  if ((uVar9 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
    puVar13 = &DAT_01b35570;
    (**(code **)(*piVar3 + 4))(&DAT_01b35570);
    iVar4 = FUN_00dd6d80(puVar13);
    if ((iVar4 != 0) && (piVar3 != param_1)) {
      uVar5 = FUN_00a8cae0();
      uVar6 = FUN_00a8cad0(uVar5);
      uVar7 = FUN_00a8cac0(uVar6);
      iVar4 = piVar3[0x3a6];
      uVar8 = FUN_00a8cab0(iVar4,uVar7);
      FUN_0064fb10(uVar8,iVar4,uVar7,uVar6,uVar5);
      uVar14 = 0x3f800000;
      uVar12 = 0xbf800000;
      uVar5 = FUN_00a95d20(0);
      uVar11 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = FUN_00a95df0(0);
      FUN_00a9e290(uVar6,uVar7,uVar8,uVar11,uVar5,uVar12,uVar14);
      fVar10 = (float10)FUN_00a958c0(0);
      FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        Animation::Motion::Unit::setCurrentTime(0,(float)fVar10);
      }
      FUN_0040ac60(piVar3 + 0x2ac);
      param_1[0x3ce] = piVar3[0x3ce];
      param_1[0x3cf] = piVar3[0x3cf];
      param_1[0x3d0] = piVar3[0x3d0];
      param_1[0x3d1] = piVar3[0x3d1];
      uVar6 = 0;
      param_1[0x139] = piVar3[0x139];
      uVar5 = FUN_00a82d50(0);
      FUN_00a88b50(uVar5,uVar6);
    }
  }
  FUN_00ac8d40(0);
  if ((param_1[0x3cf] & 0x200000U) != 0) {
    FUN_00ac8d80(0,1);
    FUN_00ac8d80(1,1);
    FUN_00ac8d80(4,1);
    FUN_00ac8d80(5,1);
    FUN_00ac8d80(6,1);
  }
  if ((param_1[0x3cf] & 0x100000U) != 0) {
    FUN_00ac8d80(2,1);
    FUN_00ac8d80(3,1);
  }
  if ((param_1[0x3cf] & 0x80000U) != 0) {
    FUN_00ac8d80(7,1);
    FUN_00ac8d80(8,1);
  }
  param_1[0x3cf] = param_1[0x3cf] | 0x8000;
  piVar3 = (int *)FUN_00ac8a30();
  iVar4 = param_1[0x3a4];
  iVar1 = *piVar3;
  param_1[0x3a4] = iVar1;
  iVar2 = piVar3[2];
  switch(iVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    if (iVar4 != iVar1) {
      param_1[0x139] = 1;
      if (param_1[0x294] != 0) {
        (**(code **)(*param_1 + 0x344))(3,1,1);
      }
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      FUN_0064fb10(0x80001,iVar2,0,0,0);
      return;
    }
    break;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if (param_1[0x139] == 0) {
      FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
      if (iVar4 != param_1[0x3a4]) {
        FUN_0064fb10(0x90000,0,0,0,0);
        FUN_00a88b50(4,0);
        return;
      }
      if ((*(byte *)((int)param_1 + 0xf3a) & 1) != 0) {
        FUN_0064fb10(0x60005,0,0,0,0);
        return;
      }
    }
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    if (param_1[0x139] == 0) {
      FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
      FUN_0064fb10(0xb0003,0,0,0,0);
      return;
    }
    break;
  case 0x1d:
    if (param_1[0x139] == 0) {
      FUN_0064fb10(0x80004,0,0,0,0);
      param_1[0x3a4] = piVar3[1];
    }
  }
  return;
}

// 00652870  Em8030::vf298  size=33  [class]
void __fastcall Em8030::vf298(int param_1)

{
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffffffb;
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 8;
  FUN_0064fb10(0x10008,0,0,0,0);
  return;
}

// 006528A0  FUN_006528a0  size=151  [between]
void __fastcall FUN_006528a0(int param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_54 = 0x3f000000;
  local_38 = 0xffffffff;
  local_50 = 0;
  local_4 = 0xffffffff;
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_4c = 0xffffffff;
  local_44 = (int)*(short *)(param_1 + 0xab2);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  local_40 = 0xfffffffe;
  local_3c = 0;
  local_2c = 0;
  local_34 = 0x1010101;
  local_30 = 0;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 00652940  FUN_00652940  size=150  [between]
void __fastcall FUN_00652940(int param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_54 = 0x3f000000;
  local_38 = 0xffffffff;
  local_50 = 0;
  local_4 = 0xffffffff;
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_4c = 0xffffffff;
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  local_44 = (int)*(short *)(param_1 + 0xab2);
  local_30 = 1;
  local_40 = 0xfffffffe;
  local_3c = 0;
  local_2c = 0;
  local_34 = 0x1010101;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 006529E0  Em8030::vf2A0  size=45  [class]
void __fastcall Em8030::vf2A0(int param_1)

{
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffffffb;
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 8;
  if ((*(uint *)(param_1 + 0xf38) & 0x8010000) == 0) {
    FUN_0064fb10(0x20000,0,0,0,0);
  }
  return;
}

// 00652A10  FUN_00652a10  size=354  [between]
void __fastcall FUN_00652a10(int param_1)

{
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_54 = 0x3f000000;
  local_44 = (int)*(short *)(param_1 + 0xab2);
  local_50 = 0;
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  local_3c = 0;
  local_2c = 0;
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_40 = 0xfffffffe;
  local_38 = 0xffffffff;
  local_4 = 0xffffffff;
  local_34 = 0x1010101;
  local_4c = 0xffffffff;
  local_30 = 2;
  FUN_00c5e350(param_1,&local_54,&local_30);
  local_10 = 0;
  local_c = 0;
  local_48 = 0xffffffff;
  local_8 = 0;
  local_44 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_54 = 0x3f000000;
  local_3c = 0;
  local_38 = 0xffffffff;
  local_2c = 0;
  local_50 = 0;
  local_4 = 0xffffffff;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_34 = 0x1010101;
  local_4c = 0xffffffff;
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_30 = 2;
  local_5c = *(float *)(param_1 + 0x44) - 1.0;
  FUN_00c15bb0(&local_60,0x41f00000,0x41700000);
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 00652B80  Em8030::vf2A4  size=209  [class]
void __fastcall Em8030::vf2A4(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xfffffff7;
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 4;
  if ((*(uint *)(param_1 + 0xf38) & 0x10000) == 0) {
    if ((*(uint *)(param_1 + 0xf38) & 0x8000000) != 0) {
      FUN_0064fb10(0x20001,0,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0xb08) == -1) {
      *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0x1980);
      *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0x1984);
      *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x1988);
      *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0x198c);
      *(undefined4 *)(param_1 + 0x19a0) = 0;
    }
    else {
      FUN_00a8d790(&local_c);
      *(undefined4 *)(param_1 + 0x1960) = local_c;
      *(undefined4 *)(param_1 + 0x1964) = local_8;
      *(undefined4 *)(param_1 + 0x1968) = local_4;
      *(undefined4 *)(param_1 + 0x196c) = 0x3f800000;
    }
    FUN_0064fb10(0x10008,0,0,0,0);
  }
  return;
}

// 00652C60  Em8030::vf104  size=634  [class]
void __fastcall Em8030::vf104(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x20000000;
  Bh0064::vf104();
  iVar6 = 0;
  iVar4 = thunk_FUN_00e6c310();
  if (0 < iVar4) {
    do {
      iVar4 = FUN_00e71c70(iVar6);
      if (*(int *)(iVar4 + 4) == 0x46) {
        piVar5 = (int *)FUN_00c13920();
        (**(code **)(*piVar5 + 0x28))(0);
        uVar11 = 0xf00;
        FUN_00a7c8a0(0xf00);
        iVar4 = FUN_00a12210(uVar11);
        puVar7 = (undefined4 *)(iVar4 + 0x10);
        puVar8 = (undefined4 *)(param_1 + 0x10);
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
        local_20 = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                        *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                        *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18));
        local_1c = SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                        *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                        *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
        fVar3 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                     *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                     *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
        fVar1 = *(float *)(param_1 + 0x28);
        fVar2 = *(float *)(param_1 + 0x38);
        fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar3));
        fVar10 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
        *(float *)(param_1 + 0x90) = (float)fVar10;
        *(float *)(param_1 + 0x94) = (float)fVar9;
        fVar9 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) / (float10)local_1c,
                                (float10)*(float *)(param_1 + 0x10) / (float10)local_20);
        *(float *)(param_1 + 0x98) = (float)fVar9;
        switchD_0080dbae::default();
        break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = thunk_FUN_00e6c310();
    } while (iVar6 < iVar4);
  }
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  switchD_0080dbae::default();
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0;
  FUN_00a84780(&local_20,0,0,0,0,0x3f800000);
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0;
  FUN_00a84780(&local_20,0,0,0,0,0x3f800000);
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0;
  FUN_00a84780(&local_20,0,0,0,0,0x3f800000);
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0;
  FUN_00a84780(&local_20,0,0,0,0,0x3f800000);
  if (*(int *)(param_1 + 0xf24) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf24) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xf24) + 0xbb0) = 0;
  }
  if (*(int *)(param_1 + 0xf28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf28) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xf28) + 0xbb0) = 0;
  }
  return;
}

// 00652EE0  Em8030::vf108  size=41  [class]
void __thiscall Em8030::vf108(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_0064fb10(0x10000,0,0,0,0);
  return;
}

// 00652F10  Em8030::vf44  size=346  [class]
void __fastcall Em8030::vf44(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  FUN_00a9d8a0();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_0064fa80(2);
  iVar1 = param_1 + 0x1290;
  iVar2 = 9;
  do {
    if (*(int *)(iVar1 + 0x98) != 0) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    iVar1 = iVar1 + 0xb0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00983fd0(param_1);
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  RayCastManager::getWork(param_1 + 0x18c8);
  RayCastManager::getWork(param_1 + 0x18d8);
  RayCastManager::getWork(param_1 + 0x18d0);
  RayCastManager::getWork(param_1 + 0x18fc);
  RayCastManager::getWork(param_1 + 0x1908);
  RayCastManager::getWork(param_1 + 0x1a50);
  FUN_00ac4bd0();
  FUN_00a92a00();
  FUN_00a92ef0();
  FUN_00a92a90(0x20030);
  BehaviorEmBase::vf44();
  return;
}

// 00653070  Em8030::vf264  size=674  [class]
undefined4 __thiscall Em8030::vf264(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040ac60(param_2);
  *(undefined4 *)(param_1 + 0x1ab8) = *(undefined4 *)(param_1 + 0xafc);
  *(undefined4 *)(param_1 + 0x1abc) = *(undefined4 *)(param_1 + 0xb84);
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  if ((*(int *)(param_1 + 0xb08) != -1) && (*(int *)(param_1 + 0x1ab8) == 1)) {
    *(undefined4 *)(param_1 + 0x1980) = *(undefined4 *)(param_1 + 0xb8c);
    *(undefined4 *)(param_1 + 0x1984) = *(undefined4 *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x1988) = *(undefined4 *)(param_1 + 0xb94);
    *(undefined4 *)(param_1 + 0x198c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1940) = *(undefined4 *)(param_1 + 0x1980);
    *(undefined4 *)(param_1 + 0x1944) = *(undefined4 *)(param_1 + 0x1984);
    *(undefined4 *)(param_1 + 0x1948) = *(undefined4 *)(param_1 + 0x1988);
    *(undefined4 *)(param_1 + 0x194c) = *(undefined4 *)(param_1 + 0x198c);
    FUN_0064fb10(0x10005,0,0,0,0);
  }
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (*(int *)(param_1 + 0xb24) != -1) {
    FUN_0064fb10(0x10009,0,0,0,0);
  }
  if ((*(int *)(param_1 + 0x1abc) == 1) || (*(int *)(param_1 + 0x1abc) == 2)) {
    *(undefined4 *)(param_1 + 0x1980) = *(undefined4 *)(param_1 + 0xb8c);
    *(undefined4 *)(param_1 + 0x1984) = *(undefined4 *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x1988) = *(undefined4 *)(param_1 + 0xb94);
    *(undefined4 *)(param_1 + 0x198c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a30) = *(undefined4 *)(param_1 + 0x1980);
    *(undefined4 *)(param_1 + 0x1a34) = *(undefined4 *)(param_1 + 0x1984);
    *(undefined4 *)(param_1 + 0x1a38) = *(undefined4 *)(param_1 + 0x1988);
    *(undefined4 *)(param_1 + 0x1a3c) = *(undefined4 *)(param_1 + 0x198c);
    if (*(int *)(param_1 + 0xb24) == -1) {
      uVar2 = 0xc0000;
    }
    else {
      uVar2 = 0xc0001;
    }
    FUN_0064fb10(uVar2,0,0,0,0);
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e59c0(2);
    }
  }
  if ((*(byte *)(param_1 + 0x4a8) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0xec8) = 0x40006;
  }
  if (*(int *)(param_1 + 0xd80) != 0) {
    if (0.0 < *(float *)(param_1 + 0xbb4)) {
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0xc) = *(float *)(param_1 + 0xbac) * 0.017453292;
      *(float *)(iVar1 + 0x10) = *(float *)(param_1 + 0xbb0) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0xbb4);
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0x30) = *(float *)(param_1 + 0xbac) * 0.017453292;
      *(float *)(iVar1 + 0x34) = *(float *)(param_1 + 0xbb0) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0xbb4);
    }
    if (0.0 < *(float *)(param_1 + 0xbc0)) {
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0x18) = *(float *)(param_1 + 3000) * 0.017453292;
      *(float *)(iVar1 + 0x1c) = *(float *)(param_1 + 0xbbc) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0xbc0);
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0x3c) = *(float *)(param_1 + 3000) * 0.017453292;
      *(float *)(iVar1 + 0x40) = *(float *)(param_1 + 0xbbc) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0xbc0);
    }
    FUN_00a82b40(*(undefined4 *)(param_1 + 0xd80),4);
    uVar2 = FUN_00a82d50();
    FUN_00a85340(uVar2);
  }
  return 1;
}

// 00653320  FUN_00653320  size=107  [between]
void __fastcall FUN_00653320(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0xf3c) & 0x4000) == 0) && (0 < *(int *)(param_1 + 0x61c))) {
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_0064fb10(0x10005,0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if (iVar1 != 0) {
      FUN_0064fb10(0x20000,0,0,0,0);
    }
  }
  return;
}

// 00653390  FUN_00653390  size=157  [between]
void __fastcall FUN_00653390(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if ((iVar1 != 3) || (*(float *)(param_1 + 0xaa0) <= 2.3561945)) {
    iVar1 = FUN_00a8cac0();
    if ((iVar1 != 3) || (144.0 <= *(float *)(param_1 + 0xa8c))) {
      iVar1 = FUN_00a82e60();
      if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
        FUN_0064fb10(0x10005,0,0,0,0);
      }
      iVar1 = FUN_00a82e80();
      if (iVar1 != 0) {
        FUN_0064fb10(0x20000,0,0,0,0);
      }
      return;
    }
  }
  FUN_00a8cb60(4);
  return;
}

// 00653430  FUN_00653430  size=86  [between]
void __fastcall FUN_00653430(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82e60();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
    FUN_0064fb10(0x10005,0,0,0,0);
  }
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_0064fb10(0x20000,0,0,0,0);
  }
  return;
}

// 00653490  FUN_00653490  size=228  [between]
void __fastcall FUN_00653490(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    if ((param_1[0x3a6] & 0x20000U) == 0) {
      FUN_00a92f90();
      FUN_00e36b50(0,0x10,0);
    }
    FUN_00aa4080(0x8f,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d088889);
  if (iVar1 != 0) {
    FUN_0064fb10(0x10004,0,0,0,0);
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
  }
  return;
}

// 00653580  FUN_00653580  size=193  [between]
void __fastcall FUN_00653580(int *param_1)

{
  int iVar1;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  (**(code **)(*param_1 + 0x1d4))(0);
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x8e,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00ac8ab0();
    FUN_0064fb10(0x40000,0,0,0,0);
  }
  param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
  return;
}

// 00653650  FUN_00653650  size=40  [between]
void FUN_00653650(void)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_0064fb10(0x20000,0,0,0,0);
  }
  return;
}

// 00653680  FUN_00653680  size=536  [between]
void __fastcall FUN_00653680(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    goto LAB_006536f0;
  }
  FUN_00aa4120(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_006536f0:
  local_2c = (float)param_1[0x650];
  local_28 = param_1[0x651];
  local_24 = (float)param_1[0x652];
  FUN_00a8d790(&local_2c);
  if (param_1[0x202] == 0) {
    param_1[0x658] = param_1[0x650];
    param_1[0x659] = param_1[0x651];
    param_1[0x65a] = param_1[0x652];
    param_1[0x65b] = param_1[0x653];
    fVar1 = ((float)param_1[0x12] - local_24) * ((float)param_1[0x12] - local_24) +
            ((float)param_1[0x10] - local_2c) * ((float)param_1[0x10] - local_2c);
    if (fVar1 < 2.25 != (fVar1 == 2.25)) {
      FUN_0064fb10(0x10006,0,0,0,0);
    }
  }
  else {
    iVar3 = FUN_00a97e60(0x3fc00000,1);
    if (iVar3 != 0) {
      cVar2 = FUN_00c9db60(1);
      if (cVar2 != '\0') {
        FUN_00a8d790(&local_2c);
        param_1[0x68c] = (int)local_2c;
        param_1[0x68d] = local_28;
        param_1[0x68e] = (int)local_24;
        param_1[0x68f] = 0x3f800000;
        FUN_0064fb10(0x10007,0,0,0,0);
        param_1[0x3b2] = 0x10005;
        param_1[0x3b3] = 1;
        param_1[0x3b4] = 0;
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  FUN_00a8e880(&local_20);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 006538A0  FUN_006538a0  size=40  [between]
void FUN_006538a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_0064fb10(0x20000,0,0,0,0);
  }
  return;
}

// 006539F0  FUN_006539f0  size=195  [between]
void __fastcall FUN_006539f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_0064fb10(0x20000,0,0,0,0);
  }
  iVar1 = FUN_00a8d3d0(7);
  iVar2 = FUN_00a8d3d0(8);
  iVar3 = FUN_00a8d3d0(10);
  if ((iVar3 != 0) || (iVar2 != 0 || iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xec8) = 0x10008;
    *(undefined4 *)(param_1 + 0xecc) = 0;
    *(undefined4 *)(param_1 + 0xed0) = 0;
    *(undefined4 *)(param_1 + 0x1a30) = *(undefined4 *)(param_1 + 0x19b0);
    *(undefined4 *)(param_1 + 0x1a34) = *(undefined4 *)(param_1 + 0x19b4);
    *(undefined4 *)(param_1 + 0x1a38) = *(undefined4 *)(param_1 + 0x19b8);
    *(undefined4 *)(param_1 + 0x1a3c) = *(undefined4 *)(param_1 + 0x19bc);
    FUN_0064fb10(0x10007,0,0,0,0);
  }
  return;
}

// 00653AC0  FUN_00653ac0  size=1075  [between]
void __fastcall FUN_00653ac0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  int local_18;
  int local_14;
  int local_10;
  float local_c [2];
  float local_4;
  
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && (iVar2 = FUN_00e26e90(), iVar2 != 0)) {
    *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffb;
  }
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x318))();
    uVar4 = 0xe;
    if (param_1[0x6af] == 2) {
      uVar4 = 0x8c;
    }
    FUN_00aa4080(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(10);
    if (iVar1 != 0) {
      iVar1 = FUN_00d46690((char)param_1[0x2c9]);
      if (iVar1 == 0) {
        FUN_009f8ea0(&local_18,10,param_1[300],0);
        FUN_00dd5650(&DAT_0163d460,&local_18,param_1[0x2c9]);
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00a5dcc0(iVar1);
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      param_1[0x24a] = (int)((float)param_1[0x244] * 0.7);
    }
    FUN_00a8e880(param_1 + 0x68c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x24a] = (int)((float)param_1[0x244] * 0.7);
    fVar5 = (float10)FUN_00a581b0(&local_18,(float)param_1[0x244] * 0.7,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar5;
    param_1[0x14] = local_18;
    param_1[0x15] = local_14;
    param_1[0x16] = local_10;
    FUN_00a585a0(local_c,0x3e800000,(float)fVar5);
    fVar5 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    param_1[0x25] = (int)(float)fVar5;
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    uVar3 = 0;
    uVar4 = 0xf;
    if (param_1[0x6af] == 2) {
      uVar4 = 0x8d;
      uVar3 = 0x8000000;
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(uVar4,0,0x3daaaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x24a] = (int)((float)param_1[0x244] * 0.7);
    fVar5 = (float10)FUN_00a581b0(&local_18,(float)param_1[0x244] * 0.7,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar5;
    param_1[0x14] = local_18;
    param_1[0x15] = local_14;
    param_1[0x16] = local_10;
    FUN_00a585a0(local_c,0x3e800000,(float)fVar5);
    fVar5 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    param_1[0x25] = (int)(float)fVar5;
    iVar1 = FUN_00a54a60(param_1[0x249]);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    uVar4 = 0x10;
    if (param_1[0x6af] == 2) {
      uVar4 = 0x8e;
    }
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(uVar4,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x3ce] = param_1[0x3ce] & 0xf7ffffff;
      if (param_1[0x6af] == 2) {
        param_1[0x3ce] = param_1[0x3ce] | 0x8000000;
      }
      if (param_1[0x3b2] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_0064fb10(param_1[0x3b2],0,0,0,0);
      }
      (**(code **)(*param_1 + 0x314))();
      if (param_1[0x1d9] != 0) {
        FUN_008e5ac0(2);
        return;
      }
    }
  }
  return;
}

// 00653F10  FUN_00653f10  size=151  [between]
void __fastcall FUN_00653f10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42b40000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_0064fb10(0x40000,0,0,0,0);
    *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x8000000;
  }
  return;
}

// 00653FC0  FUN_00653fc0  size=283  [between]
void __fastcall FUN_00653fc0(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x4d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42b40000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xb08) == -1) {
      *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0x1980);
      *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0x1984);
      *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x1988);
      *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0x198c);
      *(undefined4 *)(param_1 + 0x19a0) = 0;
    }
    else {
      FUN_00a8d790(&local_c);
      *(undefined4 *)(param_1 + 0x1960) = local_c;
      *(undefined4 *)(param_1 + 0x1964) = local_8;
      *(undefined4 *)(param_1 + 0x1968) = local_4;
      *(undefined4 *)(param_1 + 0x196c) = 0x3f800000;
    }
    FUN_0064fb10(0x10008,0,0,0,0);
    *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) & 0xf7ffffff;
  }
  return;
}

// 006540E0  FUN_006540e0  size=418  [between]
void __fastcall FUN_006540e0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x31,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x669] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x32,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  case 3:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x33,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_0064fb10(param_1[0x3b2],param_1[0x3b4],0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
  }
  return;
}

// 006542A0  FUN_006542a0  size=442  [between]
void __fastcall FUN_006542a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x36,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x669] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x37,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    uVar2 = 0x38;
    iVar1 = FUN_00a950a0(0,0x41b80000);
    if (iVar1 != 0) {
      uVar2 = 0x39;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_0064fb10(param_1[0x3b2],param_1[0x3b4],0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 00654480  FUN_00654480  size=348  [between]
void __fastcall FUN_00654480(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x187] != 0) {
    return;
  }
  if (((param_1[0x3a6] & 0xffffU) != 2) || (param_1[0x639] != 0)) goto LAB_006544d9;
  uVar1 = FUN_00dde2a0(0,100);
  if ((uVar1 & 1) == 0) {
    if (param_1[0x63b] == 0) {
      if (param_1[0x63a] == 0) goto LAB_006544cf;
      goto LAB_00654540;
    }
  }
  else {
    if (param_1[0x63a] != 0) {
LAB_00654540:
      FUN_0064fb10(0x40003,4,0,0,0);
      goto LAB_006544d9;
    }
    if (param_1[0x63b] == 0) {
LAB_006544cf:
      (**(code **)(*param_1 + 0x34c))();
      goto LAB_006544d9;
    }
  }
  FUN_0064fb10(0x40003,3,0,0,0);
LAB_006544d9:
  if (((param_1[0x3a6] & 0xffffU) == 3) && (param_1[0x63b] == 0)) {
    if (param_1[0x63a] == 0) {
      if (param_1[0x639] == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_0064fb10(0x40003,2,0,0,0);
      }
    }
    else {
      FUN_0064fb10(0x40003,4,0,0,0);
    }
  }
  if (((param_1[0x3a6] & 0xffffU) == 4) && (param_1[0x63a] == 0)) {
    if (param_1[0x63b] == 0) {
      if (param_1[0x639] == 0) {
                    /* WARNING: Could not recover jumptable at 0x006545da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_0064fb10(0x40003,2,0,0,0);
      return;
    }
    FUN_0064fb10(0x40003,3,0,0,0);
  }
  return;
}

// 00654840  Em8030::vf19C  size=179  [class]
void __thiscall Em8030::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 00654900  Em8030::vf1A4  size=519  [class]
void __thiscall Em8030::vf1A4(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00a81330();
  if ((param_3 & 6) != 0) {
    if (*param_2 == 0xc4) {
      (**(code **)(*param_1 + 0x314))();
      (**(code **)(*param_1 + 0x1d4))(0);
    }
    else if (((param_2[0x23] & 0x10000000U) == 0) &&
            (((param_3 & 4) == 0 || ((param_1[0x3cf] & 0x380000U) == 0)))) {
      iVar2 = FUN_00a8eeb0();
      iVar3 = FUN_00a8eea0();
      if (iVar2 / 2 < iVar3) {
        FUN_0064fb10(0x40003,0x40002,0,0,0);
        if (*param_2 == 0xc1) {
          param_1[0x3ce] = param_1[0x3ce] | 0x10;
          param_1[0x25] = (int)((float)param_1[0x25] + 3.1415927);
        }
      }
      else if (param_1[0x186] != 0xc030002) {
        param_1[0x3b2] = 0xc030002;
        param_1[0x3b4] = 0;
        switch(*param_2) {
        case 0xbe:
        case 0xc6:
          param_1[0x3b4] = 3;
          if ((param_1[0x3a6] & 0x80000000U) != 0) {
            param_1[0x3b4] = 4;
          }
          break;
        case 0xbf:
        case 0xc1:
        case 199:
          param_1[0x3b4] = 4;
          if ((param_1[0x3a6] & 0x80000000U) != 0) {
            param_1[0x3b4] = -0x80000000;
          }
          break;
        case 0xc0:
        case 0xc5:
          param_1[0x3b4] = 4;
          if ((param_1[0x3a6] & 0x80000000U) != 0) {
            param_1[0x3b4] = 3;
          }
          break;
        default:
          param_1[0x3b2] = 0x40003;
          param_1[0x3b4] = 0x40002;
        }
        FUN_0064fb10(param_1[0x3b2],param_1[0x3b4],0,0,0);
      }
    }
  }
  if ((param_3 & 1) != 0) {
    switch(*param_2) {
    case 0xbe:
      param_1[0x3ce] = param_1[0x3ce] | 0x2000;
      return;
    case 0xc3:
      param_1[0x3ce] = param_1[0x3ce] | 0x4000;
      param_1[0x24a] = 0x41f00000;
    case 0xc4:
    case 0xc5:
      param_1[0x3ce] = param_1[0x3ce] | 0x800;
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        uVar4 = FUN_009f8b40();
        FUN_00ac8a80(uVar4);
      }
    }
  }
  return;
}

// 00654B50  Em8030::vf188  size=127  [class]
void __thiscall Em8030::vf188(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 1) {
      iVar2 = FUN_00a8cab0();
      if (iVar2 != 0xc030000) {
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xebc) = uVar1;
        uVar1 = FUN_00a8cac0();
        *(undefined4 *)(param_1 + 0xec0) = uVar1;
        *(undefined4 *)(param_1 + 0xec4) = *(undefined4 *)(param_1 + 0xe98);
        FUN_0064fb10(0xc030000,*(undefined4 *)(param_1 + 0xe98),0,0,0);
      }
    }
  }
  return;
}

// 00654BD0  FUN_00654bd0  size=157  [between]
void __fastcall FUN_00654bd0(int param_1)

{
  int iVar1;
  
  if (((2 < *(int *)(param_1 + 0x61c)) && ((*(uint *)(param_1 + 0xf38) & 0x2000) == 0)) &&
     (*(float *)(param_1 + 0xa8c) < 64.0)) {
    iVar1 = FUN_00a952e0(0,0x42340000);
    if (iVar1 != 0) {
      FUN_0064fb10(0x50001,0,0,0,0);
      if ((*(uint *)(param_1 + 0xf3c) & 0x2000) != 0) {
        FUN_00dde2a0(0,0x32);
        FUN_0064fb10(0x50003,0,0,0,0);
      }
      *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) ^ 0x2000;
    }
  }
  return;
}

// 00654C70  FUN_00654c70  size=443  [between]
void __fastcall FUN_00654c70(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00651250(param_1[0x13c]);
    if (iVar2 != 0) {
      FUN_00ac8ad0(2,param_1[0x13c],*(undefined4 *)(iVar2 + 0x4f0),0,0xffffffff,0xffffffff);
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
      FUN_00a8caf0(1,0,0,0);
    }
    FUN_00aa4080(0x173,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x174,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0064fa80(2);
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00654E40  FUN_00654e40  size=2362  [between]
int __thiscall FUN_00654e40(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_EDI;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  int local_4;
  
  piVar2 = param_2;
  iVar3 = FUN_00a8cab0();
  local_4 = 0;
  if ((param_1[0x186] & 0xffff0000U) == 0xc0000) {
    return 0;
  }
  iVar4 = *param_2;
  if (((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) || ((iVar4 == 0x1b0 || (iVar4 == 0x147))))
     || ((*(byte *)(param_2 + 0x23) & 0x10) != 0)) {
    return 0;
  }
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (local_4 = FUN_00a7c8a0(), local_4 != 0)) {
    if (*(int *)(local_4 + 0x4b0) == 0x20600) {
      if ((param_1[0x2a1] != 0) && (iVar6 = param_1[0x13c], iVar5 = FUN_00a81330(), iVar5 == iVar6))
      {
        (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
      }
      (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    }
    if ((*(byte *)(local_4 + 0x4c0) & 0x10) != 0) {
      (**(code **)(*param_1 + 0x21c))(local_4,(char)param_2[4],0x3c23d70a,0);
      (**(code **)(*param_1 + 0x220))(0x40000000);
    }
  }
  param_2 = (int *)0x1;
  if ((DAT_01bea060 & 0x2000000) != 0) {
    uVar11 = 1;
LAB_00654f97:
    (**(code **)(*param_1 + 0x198))(local_4,piVar2,uVar11);
    return 1;
  }
  if ((*piVar2 == 0x93) && (param_1[300] == 0x28035)) {
    uVar11 = 0x40000;
    goto LAB_00654f97;
  }
  if ((*(byte *)((int)piVar2 + 0x8e) & 1) != 0) {
    uVar1 = param_1[0x3cf];
    iVar6 = FUN_00a9b930();
    if (iVar6 != 0) {
      FUN_00a9b930();
      iVar6 = FUN_00bda170();
      if (iVar6 == 0) goto LAB_00654ff8;
    }
    if ((uVar1 & 0x380000) != 0) {
      param_2 = (int *)0x41;
    }
  }
LAB_00654ff8:
  if (((piVar2[0x23] & 0x8000U) != 0) && ((param_1[0x3cf] & 0x380000U) != 0)) {
    param_2 = (int *)((uint)param_2 & 0xffffffbf | 0x20);
  }
  if ((piVar2[0x23] & 2U) != 0) {
    (**(code **)(*param_1 + 0x358))(399,0);
    FUN_00650a90(0,1,0);
    if ((param_1[0x3cf] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x3cf] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
      }
    }
    if ((param_1[0x3cf] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x3cf] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
      }
    }
  }
  bVar8 = iVar3 == 0x60004;
  if ((param_1[0x186] == 0x60000) || (param_1[0x186] == 0x60001)) {
    if ((*piVar2 == 0x4b) || (*piVar2 == 0x4c)) {
      FUN_0064fb10(0x60003,0,0,0,0);
      param_2 = (int *)((uint)param_2 | 0x20000);
    }
    goto LAB_0065546e;
  }
  param_1[0x3ad] = piVar2[0x4a];
  if ((*(byte *)((int)param_1 + 0xf3a) & 1) == 0) {
    uVar11 = 0x9a;
    if ((param_1[0x3cf] & 0x1000U) != 0) {
      uVar11 = 0x9b;
    }
    param_1[0x3cf] = param_1[0x3cf] ^ 0x1000;
    FUN_0064f100(piVar2,uVar11,param_1 + 0x3a7);
  }
  iVar6 = FUN_00a8eea0();
  if ((iVar6 < param_1[0x3a9]) && (FUN_00650a90(param_1[0x3ad],1,1), param_1[0x3ad] == 0)) {
    if ((param_1[0x3cf] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x3cf] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
      }
    }
    if ((param_1[0x3cf] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x3cf] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
      }
    }
  }
  if ((param_1[0x3a7] < 0) && (iVar6 = FUN_0064d4e0(), iVar6 != 0)) {
    iVar6 = param_1[0x3ad];
    if (iVar6 == 0) {
      uVar11 = 5;
LAB_0065529a:
      FUN_0064fb10(0x60000,uVar11,0,0,0);
    }
    else {
      if (iVar6 == 1) {
        uVar11 = 3;
        goto LAB_0065529a;
      }
      if (iVar6 == 2) {
        uVar11 = 4;
        goto LAB_0065529a;
      }
    }
    param_1[0x3a7] = param_1[0x3a8];
  }
  iVar6 = FUN_0064d4c0();
  if (iVar6 == 0) {
LAB_00655307:
    param_1[0x6b6] = 0;
    if (!bVar8) {
LAB_00655319:
      if (((piVar2[0x23] & 0x800U) != 0) && (iVar6 = FUN_0064d4c0(), iVar6 != 0)) {
        FUN_0064fb10(0x60004,0,0,0,0);
      }
      if (((*(byte *)(piVar2 + 0x23) & 1) != 0) && (iVar6 = FUN_0064d4c0(), iVar6 != 0)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_0064fb10(0x60004,0,0,0,0);
      }
      if ((piVar2[0x23] & 0x20000U) != 0) {
        FUN_0064fb10(0x60002,0,0,0,0);
      }
    }
  }
  else {
    param_1[0x6b5] = param_1[0x6b4];
    param_1[0x6b6] = param_1[0x6b6] + piVar2[1];
    if (bVar8) goto LAB_00655307;
    if (param_1[0x6b6] < param_1[0x6b7]) goto LAB_00655319;
    param_1[0x6b6] = 0;
    FUN_0064fb10(0x60004,0,0,0,0);
    bVar8 = true;
  }
  (**(code **)(*param_1 + 0x1d8))();
  iVar6 = FUN_0064f0a0(piVar2);
  if ((iVar6 != 0) && (local_4 != 0)) {
    fVar9 = (float10)FUN_00a8ec30(local_4 + 0x40);
    fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)(float)param_1[0x25]));
    fVar10 = ABS(fVar9);
    uVar11 = 1;
    if ((float10)2.3561945 < fVar10 == ((float10)2.3561945 == fVar10)) {
      if ((float10)0.7853982 <= fVar10) {
        if ((float10)0 <= fVar9) {
          uVar11 = 4;
        }
        else {
          uVar11 = 3;
        }
      }
    }
    else {
      uVar11 = 2;
    }
    FUN_0064fb10(0x60001,uVar11,0,0,0);
    param_1[0x3cf] = param_1[0x3cf] | 0x40000;
  }
LAB_0065546e:
  if (*piVar2 == 0x92) {
    param_2 = (int *)((uint)param_2 & 0xffffffbf | 0x20);
    (**(code **)(*param_1 + 0x358))(399,0);
    FUN_00650a90(0,1,0);
    if ((param_1[0x3cf] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x3cf] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
      }
    }
    if ((param_1[0x3cf] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x3cf] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
      }
    }
  }
  iVar6 = piVar2[1];
  if ((*(byte *)(piVar2 + 0x23) & 0x10) != 0) {
    iVar6 = 0;
  }
  if ((piVar2[0x24] & 0x4000U) != 0) {
    FUN_0064fb10(0x70007,0,0,0,0);
    iVar6 = 0;
  }
  if ((*(byte *)((int)param_1 + 0xf3a) & 1) != 0) {
    if (iVar3 != 0x60006) {
      FUN_0064fb10(0x60005,0,0,0,0);
    }
    if ((!bVar8) && ((piVar2[0x23] & 0x20000U) != 0)) {
      FUN_0064fb10(0x60006,0,0,0,0);
    }
  }
  if ((*(byte *)(param_1 + 0x12a) & 2) == 0) {
    (**(code **)(*param_1 + 0x30c))(iVar6,0);
  }
  if (*piVar2 == 0x185) {
    param_1[0x21c] = 0;
  }
  if (param_1[0x21c] < 1) {
    if ((param_1[0x2a1] != 0) && (iVar3 = param_1[0x13c], iVar6 = FUN_00a81330(), iVar6 == iVar3)) {
      (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
    }
    (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    param_2 = (int *)((uint)param_2 | 0x80);
    param_1[0x139] = 1;
    uVar11 = 0;
    if ((piVar2[0x24] & 0x200U) != 0) {
      uVar11 = 4;
    }
    FUN_0064d490(uVar11,(uint)piVar2[0x24] >> 0xb & 1);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    FUN_0064fb10(0x80000,0,0,0,0);
    if ((*(byte *)((int)param_1 + 0xf3a) & 1) != 0) {
      FUN_0064fb10(0x80004,0,0,0,0);
    }
  }
  if (iVar4 != 0) {
    if (*piVar2 == 0x1c3) {
      FUN_00a88320(iVar4,piVar2 + 0x40);
    }
    else {
      FUN_00a88250(iVar4,piVar2 + 0x40);
      piVar7 = (int *)FUN_00c206d0();
      (**(code **)(*piVar7 + 4))(0,param_1[0x13c],param_1 + 0x10);
    }
  }
  (**(code **)(*param_1 + 0x198))(local_4,piVar2,param_2);
  if (param_1[0x186] != 0x5000a) {
    FUN_0064fa80(2);
  }
  if (unaff_EDI != 0) {
    FUN_0043fa90();
  }
  return unaff_EDI;
}

// 00655780  FUN_00655780  size=472  [between]
undefined4 __thiscall FUN_00655780(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = param_2;
  if ((*(uint *)(param_2 + 0x90) & 0x20000) != 0) {
    FUN_00650a90(0,1,1);
    if ((param_1[0x3cf] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x5d8);
      if ((param_1[0x3cf] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
      }
    }
    if ((param_1[0x3cf] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x5ac);
      if ((param_1[0x3cf] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
      }
    }
  }
  if ((param_1[0x3cf] & 0x380000U) != 0) {
    param_2 = 0;
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      param_2 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a8e520();
    bVar3 = iVar2 != 0;
    iVar2 = FUN_00ac8cd0(iVar1);
    if (((*(uint *)(iVar1 + 0x8c) & 0x600) != 0) || ((*(uint *)(iVar1 + 0x90) & 0x40000) != 0)) {
      bVar3 = true;
    }
    if ((*(uint *)(iVar1 + 0x90) & 0x20000) == 0) {
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      bVar3 = true;
    }
    if ((*(int *)(iVar1 + 0x94) != 0) && (bVar3)) {
      FUN_00ac8d00(param_1,iVar1,0);
      (**(code **)(*param_1 + 0x198))(param_2,iVar1,0x100);
      return 1;
    }
  }
  return 0;
}

// 00655960  FUN_00655960  size=170  [between]
void __fastcall FUN_00655960(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xac,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0043f5b0(9,0x41200000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_0064fb10(0x70001,0,0,0,0);
    *(undefined4 *)(param_1 + 0xeb8) = 0x43960000;
  }
  return;
}

// 00655A10  FUN_00655a10  size=280  [between]
void __fastcall FUN_00655a10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x82000000;
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    uVar2 = 0xae;
    if ((*(byte *)(param_1 + 0xf3c) & 0x20) != 0) {
      uVar2 = 0xaf;
    }
    *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) ^ 0x20;
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_00655b12;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x40400000,0x3fc00000,10,1);
  *(undefined2 *)(param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x820) = 7;
  if (*(float *)(param_1 + 0xeb8) < 0.0) {
    FUN_0064fb10(0x70002,0,0,0,0);
  }
LAB_00655b12:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00655E10  FUN_00655e10  size=285  [between]
void __fastcall FUN_00655e10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x26000000;
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xf20) = 0;
    switch(*(undefined4 *)(param_1 + 0xe90)) {
    case 8:
      *(undefined4 *)(param_1 + 0xf20) = 0x40;
    case 7:
      uVar1 = 0xde;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0xf20) = 0x40;
    case 9:
      uVar1 = 0xcf;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0xf20) = 0x40;
    case 0xb:
      uVar1 = 0xf8;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0xf20) = 0x40;
    case 0xd:
      uVar1 = 0xeb;
      break;
    case 0xf:
      uVar1 = 0xf1;
    }
    FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,*(uint *)(param_1 + 0xf20) | 0x8000000,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x10000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xf38) = *(uint *)(param_1 + 0xf38) | 0x10000;
    FUN_0064fb10(0xb0000,0,0,0,0);
  }
  return;
}

// 00655F60  FUN_00655f60  size=737  [between]
void __fastcall FUN_00655f60(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x2a1] != 0) && (iVar4 = param_1[0x13c], iVar2 = FUN_00a81330(), iVar2 == iVar4)) {
      (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
    }
    (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    FUN_00eaa6e0(0x3f800000,0);
    uVar1 = param_1[0x3ce];
    uVar3 = 0x102;
    if ((uVar1 & 0x8000000) != 0) {
      uVar3 = 0x103;
    }
    if ((uVar1 & 0x2000000) != 0) {
      uVar3 = 0x104;
    }
    if ((uVar1 & 0x1000000) != 0) {
      uVar3 = 0x105;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x358))(1,param_1 + 0x4d0);
    FUN_00e5e0c0("em0030_se_dmg_spark_death",param_1,0xffffffff,0);
    param_1[0x248] = 0x41200000;
    FUN_00650a90(0,1,0);
    if ((param_1[0x3cf] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x3cf] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
      }
    }
    if ((param_1[0x3cf] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x3cf] = param_1[0x3cf] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x3cf] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0043f5b0(9,0x41200000);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(3,0,1);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00650720();
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x294] == 0) {
        param_1[0x187] = 3;
      }
      param_1[0x248] = 0x42480000;
      return;
    }
    break;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar4 = thunk_FUN_00e58ed0(param_1[0x6bb]);
    if (iVar4 == 0) {
      FUN_009fdde0();
      return;
    }
    break;
  case 3:
    fVar5 = (float10)FUN_00ac8f80();
    if (fVar5 - (float10)0.011111111 < (float10)0) {
      FUN_009fdde0();
      FUN_00ac8fd0((float)(float10)0);
      return;
    }
    FUN_00ac8fd0((float)(fVar5 - (float10)0.011111111));
  }
  return;
}

// 00656560  FUN_00656560  size=118  [between]
void __fastcall FUN_00656560(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00650ff0(*(undefined4 *)(param_1 + 0x1ac0),*(undefined4 *)(param_1 + 0x1ac4));
  if (iVar1 != 0) {
    FUN_0064fb10(0x80003,0,0,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe90);
  if ((((iVar1 != 0xd) && (iVar1 != 0xe)) && (iVar1 != 0xf)) && (25.0 < *(float *)(param_1 + 0xa8c))
     ) {
    FUN_0064fb10(0xb0001,0,0,0,0);
  }
  return;
}

// 006565E0  FUN_006565e0  size=125  [between]
void __fastcall FUN_006565e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00650ff0(*(undefined4 *)(param_1 + 0x1ac0),*(undefined4 *)(param_1 + 0x1ac4));
  if (iVar1 != 0) {
    FUN_0064fb10(0x80003,0,0,0,0);
    return;
  }
  if (*(float *)(param_1 + 0xa8c) < 12.25) {
    if (*(int *)(param_1 + 0xe90) - 7U < 4) {
      FUN_0064fb10(0xb0002,0,0,0,0);
      return;
    }
    FUN_0064fb10(0xb0000,0,0,0,0);
  }
  return;
}

// 00656660  FUN_00656660  size=56  [between]
void __fastcall FUN_00656660(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00650ff0(*(undefined4 *)(param_1 + 0x1ac0),*(undefined4 *)(param_1 + 0x1ac4));
  if (iVar1 != 0) {
    FUN_0064fb10(0x80003,0,0,0,0);
  }
  return;
}

// 00656E00  FUN_00656e00  size=31  [between]
void __fastcall FUN_00656e00(int param_1)

{
  if ((*(uint *)(param_1 + 0xf38) & 0x100) == 0) {
    FUN_0064fb10(0xb0000,0,0,0,0);
  }
  return;
}

// 00656E20  Em8030::vf150  size=194  [class]
void __thiscall Em8030::vf150(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_retaddr;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    if (unaff_retaddr == 0x24) {
      FUN_0064fb10(0xc030004,0,0,0,0);
      return;
    }
    if (unaff_retaddr == 0x34) {
      FUN_0064fb10(0xb0005,0,0,0,0);
      return;
    }
    if (unaff_retaddr == 0x35) {
      FUN_0064fb10(0xb0006,0,0,0,0);
      return;
    }
    if (unaff_retaddr == 0x36) {
      FUN_0064fb10(0xb0007,0,0,0,0);
    }
  }
  return;
}

// 00656EF0  FUN_00656ef0  size=882  [between]
void __fastcall FUN_00656ef0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  undefined4 auStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  uVar5 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  param_1[0x3ce] = param_1[0x3ce] | 0x20000200;
  param_1[0x139] = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1b2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x362] = 1;
    if (uVar5 != 0) {
      FUN_00a95ee0(0,uVar5);
    }
    FUN_00a900b0(1);
    param_1[0x3ce] = param_1[0x3ce] | 0x40;
    goto LAB_00656ffa;
  case 1:
LAB_00656ffa:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x1b3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x1f);
    if (iVar3 != 0) {
      FUN_00650a90(0,1,0);
      if ((param_1[0x3cf] & 0x80000U) == 0) {
        FUN_00ac95a0("_EFD03",1);
        param_1[0x3cf] = param_1[0x3cf] | 0x80000;
        FUN_00ac8d80(7,1);
        FUN_00ac8d80(8,1);
        if ((param_1[0x3cf] & 0x300000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
        }
      }
      if ((param_1[0x3cf] & 0x100000U) == 0) {
        FUN_00ac95a0("_EFD02",1);
        param_1[0x3cf] = param_1[0x3cf] | 0x100000;
        FUN_00ac8d80(2,1);
        FUN_00ac8d80(3,1);
        if ((param_1[0x3cf] & 0x280000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
        }
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x1b4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0064fb10(0x80002,0,0,0,0);
    }
  }
  if ((uVar5 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) {
    switchD_0080dbae::default();
    FUN_00a8ce90(auStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    *(float *)(uVar5 + 0x94) = (float)fVar6;
    D3DXVec3TransformNormal(auStack_30,auStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    *(float *)(uVar5 + 0x58) = (float)param_1[0x12] + fStack_34;
    *(float *)(uVar5 + 0x50) = fVar1 + unaff_ESI;
    *(float *)(uVar5 + 0x54) = fVar2 + unaff_EBX;
    *(undefined4 *)(uVar5 + 0x5c) = auStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 00657280  FUN_00657280  size=738  [between]
void __fastcall FUN_00657280(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  undefined4 auStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  uVar5 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  param_1[0x3ce] = param_1[0x3ce] | 0x20000200;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1b3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x362] = 1;
    if (uVar5 != 0) {
      FUN_00a95ee0(0,uVar5);
    }
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    FUN_00a900b0(1);
    param_1[0x3ce] = param_1[0x3ce] | 0x40;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x1f);
    if (iVar3 != 0) {
      FUN_00650a90(0,1,0);
      if ((param_1[0x3cf] & 0x80000U) == 0) {
        FUN_00ac95a0("_EFD03",1);
        param_1[0x3cf] = param_1[0x3cf] | 0x80000;
        FUN_00ac8d80(7,1);
        FUN_00ac8d80(8,1);
        if ((param_1[0x3cf] & 0x300000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x604);
        }
      }
      if ((param_1[0x3cf] & 0x100000U) == 0) {
        FUN_00ac95a0("_EFD02",1);
        param_1[0x3cf] = param_1[0x3cf] | 0x100000;
        FUN_00ac8d80(2,1);
        FUN_00ac8d80(3,1);
        if ((param_1[0x3cf] & 0x280000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x604);
        }
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x1b4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0064fb10(0x80002,0,0,0,0);
    }
  }
  if ((uVar5 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) {
    switchD_0080dbae::default();
    FUN_00a8ce90(auStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    *(float *)(uVar5 + 0x94) = (float)fVar6;
    D3DXVec3TransformNormal(auStack_30,auStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    *(float *)(uVar5 + 0x58) = (float)param_1[0x12] + fStack_34;
    *(float *)(uVar5 + 0x50) = unaff_ESI + fVar1;
    *(float *)(uVar5 + 0x54) = fVar2 + unaff_EBX;
    *(undefined4 *)(uVar5 + 0x5c) = auStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 00657580  FUN_00657580  size=171  [between]
int __thiscall
FUN_00657580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,short param_6,short param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_90;
  undefined4 local_8c;
  
  FUN_0040b190();
  local_90 = param_5;
  local_8c = param_2;
  iVar1 = FUN_00a82090(param_3,param_4,&local_90);
  if (iVar1 != 0) {
    if (param_6 != 0xfff) {
      FUN_00ac8ad0(param_2,*(undefined4 *)(param_1 + 0x4f0),iVar1,(int)param_6,(int)param_7,param_8)
      ;
    }
    uVar2 = FUN_00ac89d0();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(iVar3 + 0x518) = uVar2;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return iVar1;
}

// 00657630  FUN_00657630  size=228  [between]
undefined4 __fastcall FUN_00657630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x190c) == 0) && ((*(uint *)(param_1 + 0xf38) & 0x20000) != 0)) {
    return 0;
  }
  uVar2 = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    if ((1.2217305 < *(float *)(param_1 + 0xaa0)) && (*(float *)(param_1 + 0xaa0) < 2.3561945)) {
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        FUN_0064fb10(0x40004,3,0,0,0);
        return 1;
      }
      FUN_0064fb10(0x40004,4,0,0,0);
      return 1;
    }
    if (2.3561945 < *(float *)(param_1 + 0xaa0)) {
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        FUN_0064fb10(0x40005,3,0,0,0);
        return 1;
      }
      FUN_0064fb10(0x40005,4,0,0,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}

// 00657720  FUN_00657720  size=248  [between]
uint __fastcall FUN_00657720(int param_1)

{
  int iVar1;
  undefined1 local_48 [4];
  uint local_44;
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
  
  iVar1 = FUN_00a12210(7);
  if (iVar1 == 0) {
    return 0;
  }
  local_44 = FUN_00907640(param_1 + 0x18c8,local_48,&local_20);
  if (local_44 != 0) {
    FUN_0112bcf0();
  }
  local_44 = (uint)(local_44 == 0);
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8d230(&local_40);
    local_20 = *(float *)(iVar1 + 0x40);
    local_1c = *(float *)(iVar1 + 0x44);
    local_18 = *(float *)(iVar1 + 0x48);
    local_14 = *(float *)(iVar1 + 0x4c);
    local_30 = local_40 - local_20;
    local_2c = local_3c - local_1c;
    local_28 = local_38 - local_18;
    local_24 = local_34 - local_14;
    iVar1 = FUN_009f8b40();
    FUN_0090fa30(param_1 + 0x18c8,0,&local_20,0x3f000000,&local_30,iVar1 << 0x10 | 7,
                 "Em8030PlayerView");
  }
  return local_44;
}

// 00657820  FUN_00657820  size=280  [between]
int __fastcall FUN_00657820(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int aiStack_6c [4];
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  
  iVar1 = FUN_00907640(param_1 + 0x1908,&local_84,&local_70);
  if (iVar1 != 0) {
    FUN_0112bcf0();
  }
  local_80 = 0;
  local_7c = 0;
  local_78 = 2.0;
  D3DXVec3TransformNormal(&local_80,&local_80,param_1 + 0x10);
  local_7c = *(undefined4 *)(param_1 + 0x40);
  uStack_74 = *(undefined4 *)(param_1 + 0x48);
  local_70 = *(undefined4 *)(param_1 + 0x4c);
  local_78 = *(float *)(param_1 + 0x44) + 2.0;
  iVar2 = FUN_009f8b40();
  uStack_5c = local_7c;
  uStack_38 = iVar2 << 0x10 | 7;
  fStack_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = local_70;
  aiStack_6c[1] = 0x1e;
  uStack_34 = 0x3ff001b;
  uStack_30 = 0;
  uStack_2c = 0;
  pcStack_28 = "Em8030WallCheck";
  uStack_44 = local_84;
  uStack_40 = local_80;
  uStack_3c = 0x3dcccccd;
  aiStack_6c[0] = param_1 + 0x1908;
  FUN_0090fb00(aiStack_6c);
  return iVar1;
}

// 00657940  FUN_00657940  size=659  [between]
void __fastcall FUN_00657940(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  fVar1 = *(float *)(param_1 + 0x18dc) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x18dc) = fVar1;
  if (fVar1 <= 0.0) {
    switch(*(undefined4 *)(param_1 + 0x18d4)) {
    case 0:
      local_80 = 0;
      local_7c = 0;
      local_78 = 0x40e00000;
      FUN_00650440(&local_80);
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x18d4) + 1;
      return;
    case 1:
      iVar2 = FUN_00650400(param_1 + 0x18d8);
      *(undefined4 *)(param_1 + 0x18dc) = 0x42700000;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0xc0e00000;
      *(uint *)(param_1 + 0x18e0) = (uint)(iVar2 == 0);
      FUN_00650440(&local_70);
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x18d4) + 1;
      return;
    case 2:
      iVar2 = FUN_00650400(param_1 + 0x18d8);
      *(undefined4 *)(param_1 + 0x18dc) = 0x42700000;
      local_60 = 0x40e00000;
      local_5c = 0;
      local_58 = 0;
      *(uint *)(param_1 + 0x18e4) = (uint)(iVar2 == 0);
      FUN_00650440(&local_60);
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x18d4) + 1;
      return;
    case 3:
      iVar2 = FUN_00650400(param_1 + 0x18d8);
      *(undefined4 *)(param_1 + 0x18dc) = 0x42700000;
      local_50 = 0xc0e00000;
      *(uint *)(param_1 + 0x18e8) = (uint)(iVar2 == 0);
      local_4c = 0;
      local_48 = 0;
      FUN_00650440(&local_50);
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x18d4) + 1;
      return;
    case 4:
      iVar2 = FUN_00650400(param_1 + 0x18d8);
      *(undefined4 *)(param_1 + 0x18dc) = 0x42700000;
      local_40 = 0x40000000;
      local_3c = 0;
      *(uint *)(param_1 + 0x18ec) = (uint)(iVar2 == 0);
      local_38 = 0x40000000;
      FUN_00650440(&local_40);
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x18d4) + 1;
      return;
    case 5:
      iVar2 = FUN_00650400(param_1 + 0x18d8);
      *(undefined4 *)(param_1 + 0x18dc) = 0x42700000;
      local_30 = 0xc0000000;
      local_2c = 0;
      local_28 = 0x40000000;
      *(uint *)(param_1 + 0x18f0) = (uint)(iVar2 == 0);
      FUN_00650440(&local_30);
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x18d4) + 1;
      return;
    case 6:
      iVar2 = FUN_00650400(param_1 + 0x18d8);
      *(undefined4 *)(param_1 + 0x18dc) = 0x42700000;
      local_20 = 0;
      *(uint *)(param_1 + 0x18f4) = (uint)(iVar2 == 0);
      local_1c = 0x41200000;
      local_18 = 0;
      FUN_00650440(&local_20);
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x18d4) + 1;
      return;
    case 7:
      iVar2 = FUN_00650400(param_1 + 0x18d8);
      *(undefined4 *)(param_1 + 0x18dc) = 0x42700000;
      *(uint *)(param_1 + 0x18f8) = (uint)(iVar2 == 0);
      *(undefined4 *)(param_1 + 0x18d4) = 0;
      return;
    }
  }
  return;
}

// 00657C20  Em8030::vf48  size=333  [class]
void __fastcall Em8030::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  
  fVar1 = (float)param_1[0x670];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x670] = (int)((float)param_1[0x670] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x3ae] != ((float)param_1[0x3ae] == 0.0)) {
    param_1[0x3ae] = (int)((float)param_1[0x3ae] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x6b5] != ((float)param_1[0x6b5] == 0.0)) {
    param_1[0x6b5] = (int)((float)param_1[0x6b5] - (float)param_1[0x244]);
  }
  if ((float)param_1[0x6b5] < 0.0) {
    param_1[0x6b6] = 0;
  }
  piVar3 = param_1 + 0x3c9;
  iVar2 = 2;
  do {
    if (*piVar3 != 0) {
      FUN_00b76a90(param_1[0x2a2]);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  EmBaseDLC::vf48();
  if (((param_1[0x3cf] & 0x20000U) != 0) &&
     (fVar1 = (float)param_1[0x6b2], param_1[0x6b2] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  param_1[0x631] = (uint)param_1[0x351] >> 0x19 & 1;
  iVar2 = FUN_00ac48f0(0);
  param_1[0x630] = iVar2;
  FUN_00657940();
  if (param_1[0x2a1] != 0) {
    iVar2 = FUN_0064fd70();
    param_1[0x640] = iVar2;
  }
  iVar2 = FUN_006501b0();
  param_1[0x633] = iVar2;
  FUN_00650d50();
  FUN_006509e0();
  FUN_00651090();
  iVar2 = FUN_00657820();
  param_1[0x643] = iVar2;
  return;
}

// 00657D80  Em8030::vf32C  size=681  [class]
undefined4 __fastcall Em8030::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  float *pfVar15;
  undefined4 uVar16;
  int *piVar17;
  int *piVar18;
  int local_184;
  undefined1 auStack_170 [16];
  undefined1 local_160 [348];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  iVar14 = FUN_00a8c240();
  if ((iVar14 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
    iVar14 = FUN_00a8ef10();
    if (iVar14 == 0) {
      iVar14 = FUN_00a8c760(9);
      if ((iVar14 == 0) && (param_1[0x673] != 6)) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
        if (param_1[0x286] != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        piVar18 = (int *)param_1[0x19f];
        piVar17 = piVar18 + param_1[0x1a1] * 0x54;
        FUN_00445db0();
        local_184 = -1;
        bVar13 = false;
        if (piVar18 != piVar17) {
          do {
            if (*piVar18 != 0x147) {
              if (*piVar18 == 0x1b0) {
                (**(code **)(*param_1 + 0x370))(local_160);
              }
              else if (local_184 < piVar18[1]) {
                bVar13 = true;
                FUN_00448f50(piVar18);
                local_184 = piVar18[1];
              }
            }
            piVar18 = piVar18 + 0x54;
          } while (piVar18 != piVar17);
          if (bVar13) {
            iVar14 = FUN_00a8f040(local_160);
            if (iVar14 == 0) {
              param_1[0x3ce] = param_1[0x3ce] & 0xff87ffff;
              FUN_00a81330();
              iVar14 = FUN_00a7c8a0();
              fVar1 = *(float *)(iVar14 + 0x40);
              fVar2 = *(float *)(iVar14 + 0x44);
              fVar3 = *(float *)(iVar14 + 0x48);
              fVar4 = (float)param_1[0x10];
              fVar5 = (float)param_1[0x11];
              fVar6 = (float)param_1[0x12];
              pfVar15 = (float *)FUN_00a925a0(auStack_170);
              fVar7 = pfVar15[1];
              fVar8 = *pfVar15;
              fVar9 = pfVar15[2];
              fVar10 = (float)param_1[0x10];
              fVar11 = (float)param_1[0x11];
              fVar12 = (float)param_1[0x12];
              pfVar15 = (float *)FUN_00a92640(auStack_170);
              fVar10 = pfVar15[2] * (fVar3 - fVar12) +
                       *pfVar15 * (fVar1 - fVar10) + pfVar15[1] * (fVar2 - fVar11);
              if (fVar10 <= 0.5) {
                if (-0.5 <= fVar10) {
                  if (fVar9 * (fVar3 - fVar6) + (fVar1 - fVar4) * fVar8 + fVar7 * (fVar2 - fVar5) <=
                      0.0) {
                    param_1[0x3ce] = param_1[0x3ce] | 0x200000;
                  }
                  else {
                    param_1[0x3ce] = param_1[0x3ce] | 0x400000;
                  }
                }
                else {
                  param_1[0x3ce] = param_1[0x3ce] | 0x80000;
                }
              }
              else {
                param_1[0x3ce] = param_1[0x3ce] | 0x100000;
              }
              iVar14 = FUN_00655780(local_160);
              if (iVar14 == 0) {
                if (param_1[0x139] == 0) {
                  uVar16 = FUN_00654e40(local_160);
                }
                else {
                  uVar16 = FUN_0064eff0(local_160);
                }
                if (param_1[0x286] != 0) {
                  LeaveCriticalSection(lpCriticalSection);
                }
                return uVar16;
              }
            }
          }
        }
        if (param_1[0x286] != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return 0;
}

// 00658030  FUN_00658030  size=216  [callgraph]
void __thiscall
FUN_00658030(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  iVar1 = FUN_00657580(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar5 = &DAT_01be9d70;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d70);
    iVar1 = FUN_00dd6d80(puVar5);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x4f0);
      FUN_00a7c950();
      if (iVar1 != 0) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
      iVar1 = FUN_00ac89d0();
      piVar2[0x146] = iVar1;
      uVar3 = FUN_00ac8660(0,0x37);
      uVar4 = FUN_00ac8660(0,0x36);
      FUN_00b76ab0(uVar4,uVar3);
      *(int **)(param_1 + 0xf24 + param_2 * 4) = piVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xf24 + param_2 * 4) = 0;
  return;
}

// 00658110  FUN_00658110  size=1827  [callgraph]
void __fastcall FUN_00658110(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_ESI;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  float *pfStack_260;
  int *piStack_25c;
  int *piStack_258;
  float *pfStack_254;
  undefined1 *puStack_250;
  undefined1 *puStack_24c;
  float fStack_248;
  int iStack_244;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  int local_214;
  undefined4 local_210;
  int local_20c;
  int local_208;
  float *local_204;
  float local_200;
  undefined1 *local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [16];
  int local_1b8;
  int local_1b4;
  undefined1 auStack_1ac [12];
  undefined1 local_1a0 [12];
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iStack_244 = 0xe10;
  if ((*(uint *)(param_1 + 0xe98) & 0x80000000) == 0) {
    fStack_248 = 9.321776e-39;
    local_214 = FUN_00a12210();
    iStack_244 = 0xe11;
    fStack_248 = 9.321799e-39;
    local_218 = (float)FUN_00a12210();
  }
  else {
    fStack_248 = 9.321739e-39;
    local_218 = (float)FUN_00a12210();
    iStack_244 = 0xe11;
    fStack_248 = 9.321761e-39;
    local_214 = FUN_00a12210();
  }
  iStack_244 = 0x62;
  fStack_248 = 9.321817e-39;
  iVar1 = FUN_00a12210();
  iStack_244 = 0x42;
  fStack_248 = 9.321842e-39;
  local_1b8 = iVar1;
  local_1b4 = FUN_00a12210();
  if ((local_214 != 0) && (local_218 != 0.0)) {
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_200 = 0.0;
    local_1fc = (undefined1 *)0x0;
    local_1f8 = 0.0;
    if (iVar1 != 0) {
      local_210 = *(undefined4 *)(iVar1 + 0x40);
      local_20c = *(undefined4 *)(iVar1 + 0x44);
      local_208 = *(undefined4 *)(iVar1 + 0x48);
      local_204 = *(float **)(iVar1 + 0x4c);
    }
    if (local_1b4 != 0) {
      local_200 = *(float *)(local_1b4 + 0x40);
      local_1fc = *(undefined1 **)(local_1b4 + 0x44);
      local_1f8 = *(float *)(local_1b4 + 0x48);
      local_1f4 = *(undefined4 *)(local_1b4 + 0x4c);
    }
    iStack_244 = param_1 + 0x10;
    fStack_248 = 0.0;
    puStack_24c = local_1a0;
    puStack_250 = (undefined1 *)0x65820a;
    D3DXMatrixInverse();
    puStack_250 = auStack_1ac;
    pfStack_254 = &fStack_21c;
    piStack_258 = &iStack_1dc;
    piStack_25c = (int *)0x658221;
    D3DXVec3TransformNormal();
    fStack_1e8 = fStack_188 + fStack_1e8;
    piStack_25c = &local_1b8;
    pfStack_260 = &local_218;
    fStack_1e4 = fStack_184 + fStack_1e4;
    fStack_1e0 = fStack_180 + fStack_1e0;
    D3DXVec3TransformNormal(auStack_1c8);
    fStack_1d4 = fStack_194 + fStack_1d4;
    fStack_1d0 = fStack_190 + fStack_1d0;
    fStack_1cc = fStack_18c + fStack_1cc;
    local_20c = 0;
    local_208 = 0;
    bVar3 = *(char *)(param_1 + 0xee0) == '\0';
    bVar4 = *(char *)(param_1 + 0xee1) == '\0';
    if ((bVar3) && (bVar4)) {
      if (fStack_1cc < fStack_1ec) {
        bVar3 = false;
      }
      else {
        bVar4 = false;
      }
    }
    iVar1 = FUN_00a8c760(0x11);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1 + 0xe98) & 0x80000000) == 0) {
        bVar3 = true;
        bVar4 = false;
      }
      else {
        bVar3 = false;
        bVar4 = true;
      }
    }
    iVar1 = FUN_00a8c760(0x12);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1 + 0xe98) & 0x80000000) == 0) {
        bVar3 = false;
        bVar4 = true;
      }
      else {
        bVar3 = true;
        bVar4 = false;
      }
    }
    iVar1 = FUN_00a8c760(0x14);
    if ((iVar1 != 0) || ((*(uint *)(param_1 + 0xf38) & 0x80000000) != 0)) {
      bVar3 = false;
      bVar4 = false;
    }
    if ((DAT_01bea060 & 0x2000000) != 0) {
      bVar3 = false;
      bVar4 = false;
    }
    if (*(char *)(param_1 + 0xee0) == '\0') {
      if (*(float *)(unaff_EBX + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xee0) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xee0) == '\x01') && (0.089999996 < *(float *)(unaff_EBX + 0x54)))
    {
      local_20c = 1;
      *(undefined1 *)(param_1 + 0xee0) = 0;
    }
    if (*(char *)(param_1 + 0xee1) == '\0') {
      if (*(float *)(unaff_ESI + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xee1) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xee1) == '\x01') && (0.089999996 < *(float *)(unaff_ESI + 0x54)))
    {
      local_208 = 1;
      *(undefined1 *)(param_1 + 0xee1) = 0;
    }
    if (iStack_1dc != 0) {
      if (bVar3) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0xef0) - fStack_234);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xef4) - fStack_230);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xef8) - fStack_22c);
        fStack_248 = *(float *)(param_1 + 0xefc) - fStack_228;
        D3DXVec3TransformNormal(&pfStack_254,&pfStack_254,param_1 + 0xf0);
        pfStack_260 = (float *)(*(float *)(param_1 + 0x120) + (float)pfStack_260);
        piStack_258 = (int *)(*(float *)(param_1 + 0x128) + (float)piStack_258);
        piStack_25c = (int *)0x0;
        D3DXVec3TransformNormal(&pfStack_260,&pfStack_260,param_1 + 0xb0);
        pfStack_254 = (float *)((float)pfStack_254 + *(float *)(param_1 + 0xe0));
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xe4) + (float)puStack_250);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xe8) + (float)puStack_24c);
        *(float *)(param_1 + 0x50) = (float)pfStack_254 + *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x54) = (float)puStack_250 + *(float *)(param_1 + 0x54);
        *(float *)(param_1 + 0x58) = (float)puStack_24c + *(float *)(param_1 + 0x58);
        *(float *)(param_1 + 0x5c) = fStack_248 + *(float *)(param_1 + 0x5c);
        switchD_0080dbae::default();
      }
      else {
        *(undefined4 *)(param_1 + 0xef0) = *(undefined4 *)(iStack_1dc + 0x40);
        *(undefined4 *)(param_1 + 0xef4) = *(undefined4 *)(iStack_1dc + 0x44);
        *(undefined4 *)(param_1 + 0xef8) = *(undefined4 *)(iStack_1dc + 0x48);
        *(undefined4 *)(param_1 + 0xefc) = *(undefined4 *)(iStack_1dc + 0x4c);
      }
    }
    if (iStack_1d8 != 0) {
      if (bVar4) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0xf00) - fStack_224);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xf04) - fStack_220);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xf08) - fStack_21c);
        fStack_248 = *(float *)(param_1 + 0xf0c) - local_218;
        D3DXVec3TransformNormal(&pfStack_254,&pfStack_254,param_1 + 0xf0);
        pfStack_260 = (float *)((float)pfStack_260 + *(float *)(param_1 + 0x120));
        piStack_258 = (int *)(*(float *)(param_1 + 0x128) + (float)piStack_258);
        piStack_25c = (int *)0x0;
        D3DXVec3TransformNormal(&pfStack_260,&pfStack_260,param_1 + 0xb0);
        pfStack_254 = (float *)(*(float *)(param_1 + 0xe0) + (float)pfStack_254);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xe4) + (float)puStack_250);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xe8) + (float)puStack_24c);
        *(float *)(param_1 + 0x50) = (float)pfStack_254 + *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x54) = (float)puStack_250 + *(float *)(param_1 + 0x54);
        *(float *)(param_1 + 0x58) = (float)puStack_24c + *(float *)(param_1 + 0x58);
        *(float *)(param_1 + 0x5c) = fStack_248 + *(float *)(param_1 + 0x5c);
        switchD_0080dbae::default();
      }
      else {
        *(undefined4 *)(param_1 + 0xf00) = *(undefined4 *)(iStack_1d8 + 0x40);
        *(undefined4 *)(param_1 + 0xf04) = *(undefined4 *)(iStack_1d8 + 0x44);
        *(undefined4 *)(param_1 + 0xf08) = *(undefined4 *)(iStack_1d8 + 0x48);
        *(undefined4 *)(param_1 + 0xf0c) = *(undefined4 *)(iStack_1d8 + 0x4c);
      }
    }
    if ((local_20c != 0) && (iVar1 = FUN_00a12210(0x62), iVar1 != 0)) {
      uVar5 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0x1f,uVar2,uVar5);
      FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
      uStack_64 = *(undefined4 *)(iVar1 + 0x40);
      uStack_60 = *(undefined4 *)(iVar1 + 0x44);
      uStack_5c = *(undefined4 *)(iVar1 + 0x48);
      uStack_58 = *(undefined4 *)(iVar1 + 0x4c);
      pfStack_254 = *(float **)(iVar1 + 0x40);
      puStack_24c = *(undefined1 **)(iVar1 + 0x48);
      fStack_248 = *(float *)(iVar1 + 0x4c);
      puStack_250 = (undefined1 *)(*(float *)(iVar1 + 0x44) + 1.0);
      local_200 = *(float *)(iVar1 + 0x44) - 5.0;
      local_204 = pfStack_254;
      local_1fc = puStack_24c;
      local_1f8 = fStack_248;
      iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&pfStack_254,0,0,0,&pfStack_254,&local_204,0x1e,"em0030_gekko");
      if (iVar1 != 0) {
        FUN_0041cdb0(&pfStack_254);
      }
    }
    if ((local_208 != 0) && (iVar1 = FUN_00a12210(0x42), iVar1 != 0)) {
      uVar5 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0x1f,uVar2,uVar5);
      FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
      uStack_64 = *(undefined4 *)(iVar1 + 0x40);
      uStack_60 = *(undefined4 *)(iVar1 + 0x44);
      uStack_5c = *(undefined4 *)(iVar1 + 0x48);
      uStack_58 = *(undefined4 *)(iVar1 + 0x4c);
      pfStack_254 = *(float **)(iVar1 + 0x40);
      puStack_24c = *(undefined1 **)(iVar1 + 0x48);
      fStack_248 = *(float *)(iVar1 + 0x4c);
      puStack_250 = (undefined1 *)(*(float *)(iVar1 + 0x44) + 1.0);
      local_200 = *(float *)(iVar1 + 0x44) - 5.0;
      local_204 = pfStack_254;
      local_1fc = puStack_24c;
      local_1f8 = fStack_248;
      iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&pfStack_254,0,0,0,&pfStack_254,&local_204,0x1e,"em0030_gekko");
      if (iVar1 != 0) {
        FUN_0041cdb0(&pfStack_254);
      }
    }
    *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0xf14) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0xf18) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xf1c) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}

// 00658D90  Em8030::vf50  size=193  [class]
void __fastcall Em8030::vf50(int param_1)

{
  float fVar1;
  int iVar2;
  
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  FUN_00658110();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x19c4) == 0) {
        FUN_008f3cb0(param_1);
      }
      else {
        FUN_008f5990(param_1);
      }
    }
  }
  if (*(int *)(param_1 + 0xbf8) == 0) {
    fVar1 = *(float *)(param_1 + 0xbf4) + 1.0;
    *(float *)(param_1 + 0xbf4) = fVar1;
    if (3.0 < fVar1) {
      *(undefined4 *)(param_1 + 0xbf8) = 1;
      *(undefined4 *)(param_1 + 0xbf4) = 0;
    }
  }
  else {
    FUN_00c45fd0(*(undefined4 *)(param_1 + 0x4f0),*(float *)(param_1 + 0xbf4));
    fVar1 = *(float *)(param_1 + 0xbf4) + 1.0;
    *(float *)(param_1 + 0xbf4) = fVar1;
    if (10000.0 < fVar1) {
      *(undefined4 *)(param_1 + 0xbf4) = 0;
      return;
    }
  }
  return;
}

// 00658E70  FUN_00658e70  size=985  [callgraph]
void __fastcall FUN_00658e70(int *param_1)

{
  float fVar1;
  int iVar2;
  int local_c;
  int local_8;
  int local_4;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xe,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      FUN_00658840(param_1 + 0x674,param_1 + 0x10,param_1 + 0x68c,0x41f00000,0x40400000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
    }
    FUN_00a8e880(param_1 + 0x68c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.04 + (float)param_1[0x249]);
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    FUN_00a8e880(param_1 + 0x68c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0xf,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    FUN_00a8e880(param_1 + 0x68c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0x40000000;
    }
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    return;
  case 6:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(0x10,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0064fb10(param_1[0x3b2],param_1[0x3b4],param_1[0x3b3],0,0);
      return;
    }
  }
  return;
}

// 00659270  FUN_00659270  size=1146  [callgraph]
void __fastcall FUN_00659270(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = FUN_00a92f90();
  if ((iVar2 != 0) && (iVar3 = FUN_00e26e90(), iVar3 != 0)) {
    *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
  }
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    uVar5 = 0xe;
    if (param_1[0x6af] == 2) {
      uVar5 = 0x8c;
    }
    FUN_00aa4080(uVar5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      FUN_00658840(param_1 + 0x674,param_1 + 0x10,param_1 + 0x68c,0x41f00000,0x40400000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
    }
    FUN_00a8e880(param_1 + 0x68c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.04 + (float)param_1[0x249]);
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    FUN_00a8e880(param_1 + 0x68c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    uVar4 = 0;
    uVar5 = 0xf;
    if (param_1[0x6af] == 2) {
      uVar5 = 0x8d;
      uVar4 = 0x8000000;
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(uVar5,0,0x3daaaaab,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    FUN_00a8e880(param_1 + 0x68c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0x40000000;
    }
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    return;
  case 6:
    uVar5 = 0x10;
    if (param_1[0x6af] == 2) {
      uVar5 = 0x8e;
    }
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(uVar5,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x3ce] = param_1[0x3ce] & 0xf7ffffff;
      if (param_1[0x6af] == 2) {
        param_1[0x3ce] = param_1[0x3ce] | 0x8000000;
      }
      if (param_1[0x3b2] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_0064fb10(param_1[0x3b2],0,0,0,0);
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e5ac0(2);
        return;
      }
    }
  }
  return;
}

// 0065A280  Em8030::vf40  size=3524  [class]
undefined4 __fastcall Em8030::vf40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int iStack_b8;
  int local_b4 [7];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  iVar2 = EmBaseDLC::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00ac9720(0x2803f,0xffffffff);
  param_1[0x673] = param_1[0x128];
  iVar2 = 0;
  if (param_1[300] == 0x28030) {
    iVar2 = FUN_00acf600(0x28031,"Em8030Body");
  }
  if (param_1[300] == 0x28033) {
    iVar2 = FUN_00acf600(0x28034,"Em8033Body");
  }
  if (param_1[300] == 0x28035) {
    iVar2 = FUN_00acf600(0x28036,"Em8035Body");
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x370) != 0)) {
    FUN_00a1abe0(0);
  }
  iVar2 = FUN_00ac8a50();
  param_1[0x3a4] = -1;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 3;
  }
  local_8c = 0x3f666666;
  local_88 = 0x3f99999a;
  local_84 = 0x3f8ccccd;
  local_d0 = 0x3e4ccccd;
  local_cc = 0x40400000;
  local_c8 = 0x40000000;
  local_b4[0] = iVar2;
  FUN_00a8e4d0(&local_d0,&local_8c);
  if (iVar2 == 0) {
    FUN_00ac94e0(&DAT_0163d9a8);
  }
  FUN_00ac4c70(1);
  lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>();
  FUN_00a929d0();
  if (param_1[0x1d6] != 0) {
    FUN_00a92a90(0xffffffff);
  }
  FUN_00a92a30(0x20030);
  FUN_00ac4c70(0);
  param_1[0x6b8] = 0x3f800000;
  param_1[0x6b9] = 0x3f800000;
  param_1[0x6ba] = 0x3f800000;
  if (param_1[300] == 0x28033) {
    fVar6 = (float10)FUN_00ac85c0(5,0x29);
    param_1[0x6b8] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(5,0x2a);
    param_1[0x6b9] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(5,0x2b);
    param_1[0x6ba] = (int)(float)fVar6;
  }
  if (param_1[300] == 0x28035) {
    fVar6 = (float10)FUN_00ac85c0(6,0x29);
    param_1[0x6b8] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(6,0x2a);
    param_1[0x6b9] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(6,0x2b);
    param_1[0x6ba] = (int)(float)fVar6;
  }
  if ((param_1[0x12a] & 0x400U) == 0) {
    FUN_00ac8660(0,0x14);
    uVar3 = FUN_00fdbc60();
    FUN_00a8edf0(uVar3);
    iVar2 = FUN_00ac8660(0,0x15);
    uVar3 = 0x16;
  }
  else {
    FUN_00ac8660(0,0x3e);
    uVar3 = FUN_00fdbc60();
    FUN_00a8edf0(uVar3);
    iVar2 = FUN_00ac8660(0,0x3f);
    uVar3 = 0x40;
  }
  param_1[0x3a7] = iVar2;
  iVar2 = FUN_00ac8660(0,uVar3);
  param_1[0x3a9] = iVar2;
  param_1[0x3a8] = param_1[0x3a7];
  FUN_00ac8660(0,0x25);
  iVar2 = FUN_00fdbc60();
  param_1[0x6b7] = iVar2;
  fVar6 = (float10)FUN_00ac85c0(5,0x26);
  param_1[0x6b4] = (int)(float)fVar6;
  param_1[0x6b5] = 0;
  param_1[0x6b6] = 0;
  fVar6 = (float10)FUN_00ac85c0(5,0x32);
  param_1[0x6b3] = (int)(float)fVar6;
  fVar6 = (float10)FUN_00ac85c0(5,0x2f);
  param_1[0x6b0] = (int)(float)(fVar6 * (float10)60.0);
  fVar6 = (float10)FUN_00ac85c0(5,0x2e);
  param_1[0x6b1] = (int)(float)fVar6;
  param_1[0x3ce] = 0;
  param_1[0x3cf] = 0;
  param_1[0x3d0] = 0;
  param_1[0x3d1] = 0;
  param_1[0x670] = 0;
  param_1[0x3ae] = 0;
  param_1[0x3b2] = -1;
  FUN_00a8eeb0();
  iVar2 = FUN_00fdbc60();
  param_1[0x3aa] = iVar2;
  FUN_00a8eeb0();
  iVar2 = FUN_00fdbc60();
  param_1[0x3ab] = iVar2;
  FUN_00a8eeb0();
  iVar2 = FUN_00fdbc60();
  param_1[0x3ac] = iVar2;
  param_1[0x672] = 0;
  param_1[0x635] = 0;
  param_1[0x660] = param_1[0x14];
  param_1[0x661] = param_1[0x15];
  param_1[0x662] = param_1[0x16];
  param_1[0x663] = param_1[0x17];
  param_1[0x65c] = param_1[0x24];
  param_1[0x65d] = param_1[0x25];
  param_1[0x65e] = param_1[0x26];
  param_1[0x65f] = param_1[0x27];
  param_1[0x664] = param_1[0x14];
  param_1[0x665] = param_1[0x15];
  param_1[0x666] = param_1[0x16];
  param_1[0x667] = param_1[0x17];
  param_1[0x658] = param_1[0x14];
  param_1[0x659] = param_1[0x15];
  param_1[0x65a] = param_1[0x16];
  param_1[0x65b] = param_1[0x17];
  param_1[0x369] = 1;
  if ((param_1[0x12a] & 0x100U) == 0) {
    puVar4 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
    param_1[0x360] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = &DAT_01882010;
      for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (param_1[0x13c],7,param_1[0x360],4);
      FUN_00a88b50(1,0);
    }
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_00a88b50(4,0);
    }
  }
  else if ((param_1[0x12a] & 0x10U) == 0) {
    FUN_00a82ac0(param_1[0x13c],1,0,0xffffffff);
  }
  else {
    FUN_00a82ac0(param_1[0x13c],4,1,0xffffffff);
  }
  iVar2 = FUN_00c5def0(param_1[0x13c]);
  param_1[0x25c] = iVar2;
  param_1[0x1b1] = 7;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  uVar12 = 1;
  param_1[0x1b6] = 0;
  puVar4 = &local_98;
  param_1[0x1b7] = local_b4[4];
  param_1[0x1ba] = 0x3fc00000;
  param_1[0x1b9] = 7;
  param_1[0x1b8] = 7;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  uVar10 = 0;
  uVar9 = 0x3fc00000;
  uVar8 = 0x3fb33333;
  uVar3 = FUN_00a12210(7);
  FUN_00a889e0(uVar3,uVar8,uVar9,uVar10,puVar4,uVar12);
  FUN_00405230();
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0xbe947ae1;
  FUN_00c151f0(1,param_1[0x13c],3,&local_d0,0,0x41f00000,0x3f800000,1,0);
  FUN_00c57830(local_80);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(0x2803f,0x20030);
  local_b4[1] = 0;
  local_b4[2] = 0;
  local_b4[3] = 0xbf000000;
  fVar6 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x11);
  if ((param_1[0x12a] & 0x800U) == 0) {
    uVar8 = 0x3f800000;
    uVar3 = 0x40800000;
  }
  else {
    uVar8 = 0x3f400000;
    uVar3 = 0x40400000;
  }
  iVar2 = FUN_008ec660(param_1,uVar3,uVar8,0x41a00000,(float)fVar6,0x78,8,local_b4);
  param_1[0x1d9] = iVar2;
  FUN_008e7400(0x400000);
  FUN_008e5610(0x100);
  FUN_008e5610(0x80);
  FUN_008e6d00();
  uVar3 = FUN_00de3850(0,"_col.hkx",0);
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar2;
  if (iVar2 != 0) {
    iVar2 = param_1[0x13c];
    uVar8 = FUN_00de3ee0(uVar3);
    uVar3 = FUN_00de3cf0(uVar3);
    iVar2 = FUN_008f6410(iVar2,uVar3,uVar8);
    if (iVar2 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(7);
      puVar4 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar4);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f1600(0x40);
      FUN_008f1040(0x400000);
      FUN_008f12d0(0x400000);
      FUN_008f18c0(0x100);
      FUN_008f18c0(0x10000);
      FUN_008f1600(0x100);
      FUN_008f1600(0x80);
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar2 != 0)) {
    Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_BODY");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_FOOTL");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_FOOTR");
    FUN_00a93730(1);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5(0xb,"_FOOTL");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5(0xb,"_FOOTR");
  }
  FUN_00a82790(param_1[0x13c],5,0);
  param_1[0x3d4] = param_1[0x3d4] | 2;
  FUN_00a82870(0x3f860a92,0xbf860a92,0x3e99999a,0x3ae4c388,0x3e32b8c2);
  FUN_00a82790(param_1[0x13c],6,0);
  param_1[0x408] = param_1[0x408] | 2;
  FUN_00a82840(0x3f060a92,0xbf060a92,0x3e99999a,0x3ae4c388,0x3e32b8c2);
  FUN_00a82790(param_1[0x13c],0x73,0);
  param_1[0x43c] = param_1[0x43c] | 2;
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82790(param_1[0x13c],0x74,0);
  param_1[0x470] = param_1[0x470] | 2;
  FUN_00a82870(0,0xbfb2b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  if (iStack_b8 != 0) goto LAB_0065ae07;
  iVar2 = param_1[0x673];
  if (iVar2 == 0) {
LAB_0065ace6:
    if (param_1[300] == 0x28030) {
      FUN_00658030(0,"Wp0300",0x30300,0,0x20,0xffffffff,9);
      uVar8 = 0;
      uVar3 = 0x30301;
      pcVar7 = "Wp0301";
    }
    else if (param_1[300] == 0x28033) {
      FUN_00658030(0,"Wp0304",0x30304,0,0x20,0xffffffff,9);
      uVar8 = 0;
      uVar3 = 0x30305;
      pcVar7 = "Wp0305";
    }
    else {
      FUN_00658030(0,"Wp030c",0x3030c,0,0x20,0xffffffff,9);
      uVar8 = 0;
      uVar3 = 0x3030d;
      pcVar7 = "Wp030d";
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 6) goto LAB_0065ae07;
      goto LAB_0065ace6;
    }
    if (param_1[300] == 0x28030) {
      FUN_00658030(0,"Wp0302",0x30302,1,0x20,0xffffffff,9);
      uVar8 = 1;
      uVar3 = 0x30303;
      pcVar7 = "Wp0303";
    }
    else if (param_1[300] == 0x28033) {
      FUN_00658030(0,"Wp0306",0x30306,1,0x20,0xffffffff,9);
      uVar8 = 1;
      uVar3 = 0x30307;
      pcVar7 = "Wp0307";
    }
    else {
      FUN_00658030(0,"Wp030e",0x3030e,1,0x20,0xffffffff,9);
      uVar8 = 1;
      uVar3 = 0x3030f;
      pcVar7 = "Wp030f";
    }
  }
  FUN_00658030(1,pcVar7,uVar3,uVar8,0x10,0xffffffff,8);
LAB_0065ae07:
  switchD_0080dbae::default();
  iVar2 = FUN_00a12210(0x62);
  param_1[0x3bc] = *(int *)(iVar2 + 0x40);
  param_1[0x3bd] = *(int *)(iVar2 + 0x44);
  param_1[0x3be] = *(int *)(iVar2 + 0x48);
  param_1[0x3bf] = *(int *)(iVar2 + 0x4c);
  iVar2 = FUN_00a12210(0x42);
  param_1[0x3c0] = *(int *)(iVar2 + 0x40);
  param_1[0x3c1] = *(int *)(iVar2 + 0x44);
  param_1[0x3c2] = *(int *)(iVar2 + 0x48);
  param_1[0x3c3] = *(int *)(iVar2 + 0x4c);
  param_1[0x1e3] = 0;
  iVar2 = FUN_00dd3580(0x58,&DAT_01b7bd48);
  param_1[0x1e2] = iVar2;
  FUN_00a8c720(0x50,0x30);
  FUN_00a8c720(0x51,0x31);
  FUN_00a8c720(0x52,0x32);
  FUN_00a8c720(0x53,0x33);
  FUN_00a8c720(0x54,0x34);
  FUN_00a8c720(0x55,0x35);
  FUN_00a8c720(0x56,0x36);
  FUN_00a8c720(0x57,0x37);
  FUN_00a8c720(0x58,0x38);
  FUN_00a8c720(0x59,0x39);
  FUN_00a8c720(0x60,0x40);
  FUN_00a8c720(0x61,0x41);
  FUN_00a8c720(0x62,0x42);
  FUN_00a8c720(99,0x43);
  FUN_00a8c720(100,0x44);
  FUN_00a8c720(0x65,0x45);
  FUN_00a8c720(0x66,0x46);
  FUN_00a8c720(0x67,0x47);
  FUN_00a8c720(0x68,0x48);
  FUN_00a8c720(0x10,0xffffffff);
  FUN_00a8c720(0x20,0xffffffff);
  FUN_00a8c720(0x73,0xffffffff);
  FUN_00a95e20(param_1[0x1e2],param_1[0x1e3]);
  piVar11 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar11);
  FUN_00987dd0(param_1);
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x36a] = 0;
  param_1[0x36c] = 0;
  (*pcVar1)();
  if (param_1[0x673] == 6) {
    FUN_0064fb10(0x40000,0,0,0,0);
  }
  if (iStack_b8 == 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x4a4);
  }
  param_1[0x20b] = 7;
  param_1[0x20c] = 7;
  if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x6b2] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x208,0);
  }
  return 1;
}

// 0065B050  FUN_0065b050  size=1500  [between]
/* WARNING: Removing unreachable block (ram,0x0065b289) */
/* WARNING: Removing unreachable block (ram,0x0065b1aa) */
/* WARNING: Removing unreachable block (ram,0x0065b1e2) */
/* WARNING: Removing unreachable block (ram,0x0065b2c1) */

void __fastcall FUN_0065b050(float param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float local_4;
  
  if ((*(uint *)((int)param_1 + 0xf3c) & 0x4000) != 0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x19cc) == 6) {
    return;
  }
  local_4 = param_1;
  if ((*(uint *)((int)param_1 + 0xe98) & 0x40000) != 0) {
    fVar1 = *(float *)((int)param_1 + 0x93c) - *(float *)((int)param_1 + 0x910);
    *(float *)((int)param_1 + 0x93c) = fVar1;
    if (*(int *)((int)param_1 + 0xec8) != -1) {
      if (0.0 <= fVar1) {
        return;
      }
      FUN_0064fb10(*(int *)((int)param_1 + 0xec8),*(undefined4 *)((int)param_1 + 0xed0),0,0,0);
      return;
    }
  }
  iVar3 = FUN_00a82e60();
  if (iVar3 != 0) {
    FUN_0064fb10(0x20001,0,0,0,0);
    return;
  }
  local_4 = 0.0;
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>();
  if (iVar3 != 0) {
    if (*(float *)((int)param_1 + 0xa8c) < 12.25) {
      if (*(int *)((int)param_1 + 0x19c8) == 0) {
        sVar2 = FUN_00dde2d0(0,10);
        if (sVar2 == 1) {
          if (*(float *)((int)param_1 + 0xaa0) <= 2.0943952) {
            if (0.0 <= *(float *)((int)param_1 + 0xa9c)) {
              uVar5 = 4;
            }
            else {
              uVar5 = 3;
            }
          }
          else {
            uVar5 = 2;
          }
          FUN_0064fb10(0x40003,uVar5,0,0,0);
          FUN_00654480();
        }
        uVar4 = FUN_00dde2a0(0,100);
        if ((uVar4 & 3) == 0) {
          if (*(int *)((int)param_1 + 0x18f8) == 0) goto LAB_0065b204;
          uVar5 = 0x50008;
        }
        else {
          uVar4 = FUN_00dde2a0(0,100);
          if ((uVar4 & 3) == 0) {
            uVar5 = 0x50009;
          }
          else {
            uVar5 = 0x50003;
          }
        }
        FUN_0064fb10(uVar5,0,0,0,0);
LAB_0065b204:
        if (*(float *)((int)param_1 + 0xaa0) <= 2.3561945) {
          *(undefined4 *)((int)param_1 + 0xec8) = 0x50000;
          FUN_0064fb10(*(undefined4 *)((int)param_1 + 0xec8),0,0,0,0);
          return;
        }
        *(undefined4 *)((int)param_1 + 0xec8) = 0x50005;
        FUN_0064fb10(*(undefined4 *)((int)param_1 + 0xec8),0,0,0,0);
        return;
      }
LAB_0065b11f:
      uVar5 = 2;
LAB_0065b121:
      FUN_0064fb10(0x40003,uVar5,0,0,0);
      FUN_00654480();
      return;
    }
    if (*(float *)((int)param_1 + 0xa8c) < 36.0) {
      uVar4 = FUN_00dde2a0(0,100);
      if ((uVar4 & 3) == 0) {
        if (*(int *)((int)param_1 + 0x18f8) == 0) goto LAB_0065b2e3;
        uVar5 = 0x50008;
      }
      else {
        uVar4 = FUN_00dde2a0(0,100);
        if ((uVar4 & 3) == 0) {
          uVar5 = 0x50009;
        }
        else {
          uVar5 = 0x50003;
        }
      }
      FUN_0064fb10(uVar5,0,0,0,0);
    }
LAB_0065b2e3:
    if ((((25.0 < *(float *)((int)param_1 + 0xa8c)) && (*(float *)((int)param_1 + 0xa8c) < 900.0))
        && (*(float *)((int)param_1 + 0xaa0) < 0.7853982)) &&
       ((uVar4 = FUN_00dde2a0(0,1000), (uVar4 & 1) != 0 && (iVar3 = FUN_0064d380(), iVar3 != 0)))) {
      FUN_0064fb10(0x50007,0,0,0,0);
      return;
    }
    if (((*(float *)((int)param_1 + 0xa8c) < 100.0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 1)) &&
       (*(float *)((int)param_1 + 0xaa0) < 1.7453293)) {
      uVar4 = FUN_00dde2d0(0,100);
      if ((uVar4 & 1) == 0) {
        FUN_0064fb10(0x50009,0,0,0,0);
        return;
      }
      fVar1 = *(float *)((int)param_1 + 0xa8c);
      if (NAN(fVar1) || 25.0 < fVar1 == (fVar1 == 25.0)) {
        return;
      }
      FUN_0064fb10(0x50002,0,0,0,0);
      return;
    }
    fVar1 = *(float *)((int)param_1 + 0xa8c);
    if (((!NAN(fVar1) && 225.0 < fVar1 != (fVar1 == 225.0)) &&
        (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 0xffff) % 6 < 2)) &&
       (*(int *)((int)param_1 + 0x18f8) != 0)) {
      FUN_0064fb10(0x50008,0,0,0,0);
    }
    goto LAB_0065b52a;
  }
  if (*(float *)((int)param_1 + 0x19c0) == 0.0) {
LAB_0065b4d2:
    if (*(int *)((int)param_1 + 0x18c0) != 0) goto LAB_0065b52a;
  }
  else if (*(int *)((int)param_1 + 0x18c0) != 0) {
    if (*(int *)((int)param_1 + 0xebc) != 0x40003) {
      if ((12.25 <= *(float *)((int)param_1 + 0xa8c)) || (sVar2 = FUN_00dde2d0(0,0xf), sVar2 != 1))
      goto LAB_0065b52a;
      if (*(float *)((int)param_1 + 0xaa0) <= 2.0943952) {
        if (0.0 <= *(float *)((int)param_1 + 0xa9c)) {
          uVar5 = 4;
        }
        else {
          uVar5 = 3;
        }
        goto LAB_0065b121;
      }
      goto LAB_0065b11f;
    }
    goto LAB_0065b4d2;
  }
  if ((*(float *)((int)param_1 + 0xa8c) < 64.0) && (iVar3 = FUN_0064d440(&local_4), iVar3 != 0)) {
    if (local_4 <= 0.0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 4;
    }
    FUN_0064fb10(0x40003,uVar5,0,0,0);
    FUN_00654480();
  }
LAB_0065b52a:
  iVar3 = FUN_00657630();
  if (iVar3 == 0) {
    if (((*(float *)((int)param_1 + 0xa90) <= 400.0) &&
        (fVar1 = *(float *)((int)param_1 + 0xa98), !NAN(fVar1) && 3.0 < fVar1 != (fVar1 == 3.0))) &&
       (*(int *)((int)param_1 + 0x18f8) != 0)) {
      FUN_0064fb10(0x50008,0,0,0,0);
    }
    if ((*(int *)((int)param_1 + 0x190c) == 0) &&
       ((64.0 < *(float *)((int)param_1 + 0xa8c) || (*(int *)((int)param_1 + 0x18c4) == 0)))) {
      FUN_0064fb10(0x40002,0,0,0,0);
    }
    if (((*(float *)((int)param_1 + 0x920) < 0.0) && (*(int *)((int)param_1 + 0x18c4) == 0)) &&
       (iVar3 = FUN_0064d440(&local_4), iVar3 != 0)) {
      if (local_4 <= 0.0) {
        FUN_0064fb10(0x40003,3,0,0,0);
        FUN_00654480();
        return;
      }
      FUN_0064fb10(0x40003,4,0,0,0);
      FUN_00654480();
      return;
    }
  }
  return;
}

// 0065B630  FUN_0065b630  size=272  [between]
void __fastcall FUN_0065b630(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  if (((*(int *)(param_1 + 0x618) == 0x40000) &&
      (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0))) &&
     ((*(uint *)(param_1 + 0xf3c) & 0x4000) == 0)) {
    piVar4 = (int *)(param_1 + 0xf24);
    iVar3 = 2;
    do {
      if ((*piVar4 != 0) &&
         (iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>(), iVar2 != 0)) {
        *(undefined4 *)(*piVar4 + 0xbb0) = 1;
        FUN_00c272a0(0x40a00000);
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2e,0,0x3e2aaaab,0x3f800000,*(undefined4 *)(param_1 + 0xf20),0xbf800000,0x3f800000
                );
    fVar5 = (float10)FUN_00dde300(0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(float *)(param_1 + 0x920) = (float)((fVar5 + (float10)1) * (float10)60.0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0065B750  FUN_0065b750  size=293  [between]
void __fastcall FUN_0065b750(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    return;
  }
  if (param_1[0x2a1] != 0) {
    iVar1 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>();
    if ((iVar1 != 0) && ((float)param_1[0x2a3] < 25.0)) {
      param_1[0x3b4] = 3;
      param_1[0x187] = 4;
      if (2.3561945 < (float)param_1[0x2a8]) {
        param_1[0x3b2] = 0x50005;
        return;
      }
      param_1[0x3b2] = 0x50000;
      return;
    }
    if (param_1[0x638] == 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    if ((float)param_1[0x248] <= 0.0) {
      FUN_0064fb10(0x40002,0,2,0,0);
      return;
    }
    iVar1 = FUN_00657630();
    if (iVar1 != 0) {
      return;
    }
    if ((float)param_1[0x2a3] <= 9.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  iVar1 = FUN_00a82e60();
  if (iVar1 != 0) {
    FUN_0064fb10(0x20001,0,0,0,0);
  }
  if (((param_1[0x638] != 0) && (param_1[0x63c] != 0)) && (param_1[0x63d] != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0065b873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0065B880  FUN_0065b880  size=553  [between]
void __fastcall FUN_0065b880(int *param_1)

{
  short sVar1;
  int iVar2;
  int *local_4;
  
  if (3 < param_1[0x187]) {
    return;
  }
  local_4 = param_1;
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8d3d0(6), iVar2 == 0)) {
    iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>();
    if ((iVar2 != 0) && ((float)param_1[0x2a3] < 12.25)) {
      param_1[0x3b4] = 0;
      if ((float)param_1[0x2a8] <= 2.3561945) {
        param_1[0x3b2] = 0x50000;
      }
      else {
        param_1[0x3b2] = 0x50005;
      }
      FUN_0064fb10(param_1[0x3b2],0,0,0,0);
      return;
    }
    iVar2 = FUN_00a8cac0();
    if ((iVar2 != 0) && ((float)param_1[0x2a3] < 9.0)) {
      local_4 = (int *)0x0;
      iVar2 = FUN_0064d440(&local_4);
      if (iVar2 != 0) {
        param_1[0x3b2] = -1;
        param_1[0x3b2] = 0x40003;
        if (param_1[0x630] == 0) {
          if ((float)local_4 <= 0.0) {
            param_1[0x3b4] = 3;
          }
          else {
            param_1[0x3b4] = 4;
          }
          FUN_0064fb10(0x40003,param_1[0x3b4],0,0,0);
          return;
        }
        param_1[0x3b4] = 2;
        sVar1 = FUN_00dde2d0(0,2);
        if (sVar1 == 1) {
          param_1[0x3b4] = 4;
        }
        else {
          sVar1 = FUN_00dde2d0(0,2);
          if (sVar1 != 1) goto LAB_0065b9c6;
          param_1[0x3b4] = 3;
        }
        param_1[0x3b2] = 0x40003;
LAB_0065b9c6:
        FUN_0064fb10(param_1[0x3b2],param_1[0x3b4],0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar2 = FUN_00a8d3d0(7);
    if (((iVar2 != 0) || (iVar2 = FUN_00a8d3d0(8), iVar2 != 0)) ||
       (iVar2 = FUN_00a8d3d0(10), iVar2 != 0)) {
      FUN_0064fb10(0x50008,0,0,0,0);
    }
    iVar2 = FUN_00657630();
    if (iVar2 != 0) {
      return;
    }
  }
  if ((9.0 < (float)param_1[0x2a3]) && (param_1[0x643] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0065baa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0065BAB0  FUN_0065bab0  size=551  [between]
/* WARNING: Switch with 1 destination removed at 0x0065bc2e : 6 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0065bc53 : 7 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0065bc7a : 4 cases all go to same destination */

void __fastcall FUN_0065bab0(int param_1)

{
  int iVar1;
  
  FUN_00a8d560(1);
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x20001) {
    if (iVar1 != 0x20000) {
      switch(iVar1) {
      case 0x10000:
        FUN_00653320();
        FUN_00650890();
        return;
      case 0x10001:
        FUN_00653390();
        FUN_00650890();
        return;
      case 0x10002:
        FUN_00653430();
        FUN_00650890();
        return;
      case 0x10005:
        FUN_00653650();
        FUN_00650890();
        return;
      case 0x10006:
        FUN_006538a0();
        FUN_00650890();
        return;
      case 0x10008:
        FUN_006539f0();
        FUN_00650890();
        return;
      }
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 != 0x60000) {
      if (iVar1 < 0x50001) {
        if (iVar1 == 0x50000) {
          FUN_00654bd0();
          FUN_00650890();
          return;
        }
        if (iVar1 < 0x40001) {
          if (iVar1 == 0x40000) {
            FUN_0065b050();
            FUN_00650890();
            return;
          }
        }
        else {
          switch(iVar1) {
          case 0x40001:
            FUN_0065b750();
            FUN_00650890();
            return;
          case 0x40002:
            FUN_0065b880();
            FUN_00650890();
            return;
          case 0x40003:
            FUN_00654480();
            FUN_00650890();
            return;
          case 0x40008:
            FUN_0064b8d0();
            FUN_00650890();
            return;
          }
        }
      }
      else {
        switch(iVar1) {
        case 0x50007:
          FUN_0064c2b0();
          FUN_00650890();
          return;
        case 0x50008:
          FUN_0064c360();
          FUN_00650890();
          return;
        }
      }
    }
  }
  else if (0x70000 < iVar1) {
    if (iVar1 < 0x80001) {
      if (iVar1 == 0x80000) {
        FUN_0064cad0();
        FUN_00650890();
        return;
      }
    }
    else if (((0x90000 < iVar1) && (iVar1 < 0xc0001)) && (iVar1 != 0xc0000)) {
      switch(iVar1) {
      case 0xb0000:
        FUN_00656560();
        FUN_00650890();
        return;
      case 0xb0001:
        FUN_006565e0();
        FUN_00650890();
        return;
      case 0xb0002:
        FUN_00656660();
        FUN_00650890();
        return;
      case 0xb0004:
        FUN_00656e00();
      }
    }
  }
  FUN_00650890();
  return;
}

// 0065BD80  FUN_0065bd80  size=1086  [between]
void __fastcall FUN_0065bd80(int *param_1)

{
  code *pcVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char *local_18;
  float fVar15;
  
  iVar4 = param_1[0x186];
  if (0x20000 < iVar4) {
    if (0x70000 < iVar4) {
      if (iVar4 < 0x80001) {
        if (iVar4 == 0x80000) {
          FUN_00655f60();
          return;
        }
        switch(iVar4) {
        case 0x70001:
          FUN_00655a10();
          return;
        case 0x70002:
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
          if (param_1[0x187] == 0) {
            local_18 = (char *)0x3e2aaaab;
            puStack_1c = (undefined1 *)0x0;
            puStack_20 = (undefined1 *)0xad;
            iStack_24 = 0x64c60f;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            (**(code **)(*param_1 + 0x34c))();
            param_1[0x3ce] = param_1[0x3ce] & 0xfdffffff;
          }
          return;
        case 0x70003:
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
          if (param_1[0x187] == 0) {
            local_18 = (char *)0x3e2aaaab;
            puStack_1c = (undefined1 *)0x0;
            puStack_20 = (undefined1 *)0xb2;
            iStack_24 = 0x655b7f;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
            FUN_0043f5b0();
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            local_18 = (char *)0x70004;
            puStack_1c = (undefined1 *)0x655bcc;
            FUN_0064fb10();
            param_1[0x3ae] = 0x43960000;
          }
          return;
        case 0x70004:
          param_1[0x3ce] = param_1[0x3ce] | 0x81000000;
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
          if (param_1[0x187] == 0) {
            puStack_20 = (undefined1 *)0xb4;
            if ((*(byte *)(param_1 + 0x3cf) & 0x10) != 0) {
              puStack_20 = (undefined1 *)0xb5;
            }
            param_1[0x3cf] = param_1[0x3cf] ^ 0x10;
            local_18 = (char *)0x3e2aaaab;
            puStack_1c = (undefined1 *)0x0;
            iStack_24 = 0x655c51;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          if ((float)param_1[0x3ae] < 0.0) {
            local_18 = (char *)0x70005;
            puStack_1c = &LAB_00655c8d;
            FUN_0064fb10();
          }
          return;
        case 0x70005:
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
          if (param_1[0x187] == 0) {
            local_18 = (char *)0x3e2aaaab;
            puStack_1c = (undefined1 *)0x0;
            puStack_20 = (undefined1 *)0xb3;
            iStack_24 = 0x64c6cf;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            (**(code **)(*param_1 + 0x34c))();
            param_1[0x3ce] = param_1[0x3ce] & 0xfeffffff;
          }
          return;
        case 0x70006:
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
          if (param_1[0x187] == 0) {
            puStack_20 = (undefined1 *)0xb8;
            if ((param_1[0x3a6] & 0xffffU) == 4) {
              puStack_20 = (undefined1 *)0xb9;
            }
            local_18 = (char *)0x3e2aaaab;
            puStack_1c = (undefined1 *)0x0;
            iStack_24 = 0x655cf8;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
            FUN_0043f5b0();
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            local_18 = (char *)0x70004;
            puStack_1c = (undefined1 *)0x655d45;
            FUN_0064fb10();
            param_1[0x3ae] = 0x43960000;
          }
          return;
        case 0x70007:
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
          if (param_1[0x187] == 0) {
            local_18 = (char *)0x3daaaaab;
            puStack_1c = (undefined1 *)0x0;
            puStack_20 = (undefined1 *)0x1af;
            iStack_24 = 0x655daf;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            if (param_1[0x294] != 0) {
              (**(code **)(*param_1 + 0x344))();
            }
            local_18 = (char *)0x80003;
            puStack_1c = &LAB_00655e04;
            FUN_0064fb10();
          }
          return;
        }
switchD_0065bd9d_default:
        return;
      }
      if (iVar4 < 0x90001) {
        if (iVar4 == 0x90000) {
          FUN_00655e10();
          return;
        }
        switch(iVar4) {
        case 0x80001:
          goto LAB_00656260;
        case 0x80002:
          param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
          param_1[0x139] = 1;
          if (param_1[0x187] == 0) {
            if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
              param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
              *(undefined4 *)param_1[0xdc] = 1;
            }
            local_18 = (char *)0x64f3de;
            FUN_00eaa6e0();
            local_18 = (char *)0x64f3f1;
            FUN_00c4d1a0();
            param_1[0xd9] = param_1[0xd9] & 0xffefffff;
            param_1[0x1af] = 1;
            param_1[0x362] = 1;
            if (param_1[0x294] != 0) {
              local_18 = (char *)0x3;
              puStack_1c = &LAB_0064f421;
              (**(code **)(*param_1 + 0x344))();
            }
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          local_18 = (char *)0x64f43a;
          FUN_00ac80a0();
          fVar11 = (float10)FUN_00ac8f80();
          fVar11 = fVar11 - (float10)0.011111111;
          fVar15 = (float)fVar11;
          if (fVar11 < (float10)0) {
            fVar15 = (float)(float10)0;
            (**(code **)(*param_1 + 0x364))();
            (**(code **)(*param_1 + 0x20))();
            FUN_009fdde0();
            fVar11 = (float10)fVar15;
          }
          local_18 = (char *)(float)fVar11;
          puStack_1c = (undefined1 *)0x64f492;
          FUN_00ac8fd0();
          param_1 = param_1 + 0x3c9;
          iVar4 = 2;
          do {
            iVar5 = *param_1;
            if (iVar5 != 0) {
              iVar9 = 0;
              iVar8 = 0;
              if (0 < *(short *)(iVar5 + 0x324)) {
                do {
                  *(float *)(iVar9 + 0x1c + *(int *)(iVar5 + 800)) = fVar15;
                  iVar8 = iVar8 + 1;
                  iVar9 = iVar9 + 0x70;
                } while (iVar8 < *(short *)(iVar5 + 0x324));
              }
            }
            param_1 = param_1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          return;
        case 0x80003:
          if (param_1[0x187] == 0) {
            if ((param_1[0x2a1] != 0) &&
               (iVar4 = param_1[0x13c], iVar5 = FUN_00a81330(), iVar5 == iVar4)) {
              (**(code **)(*(int *)param_1[0x2a1] + 0x15c))();
            }
            (**(code **)(*param_1 + 0x15c))();
            param_1[0x139] = 1;
            FUN_00650720();
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x248] = 0x42480000;
            if (param_1[0x294] != 0) {
              local_18 = (char *)0x0;
              puStack_1c = (undefined1 *)0x3;
              puStack_20 = &LAB_00656558;
              (**(code **)(*param_1 + 0x344))();
            }
          }
          else if (param_1[0x187] == 1) {
            param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
            iVar4 = thunk_FUN_00e58ed0();
            if (iVar4 == 0) {
              FUN_009fdde0();
              return;
            }
          }
          return;
        case 0x80004:
          param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
          param_1[0x139] = 1;
          switch(param_1[0x187]) {
          case 0:
            iStack_24 = 0;
            param_1[0x3c8] = 0;
            switch(param_1[0x3a4]) {
            case 8:
              param_1[0x3c8] = 0x40;
            case 7:
              iStack_24 = 0xe3;
              break;
            case 10:
              param_1[0x3c8] = 0x40;
            case 9:
              iStack_24 = 0xd4;
              break;
            case 0xc:
              param_1[0x3c8] = 0x40;
            case 0xb:
              iStack_24 = 0xfa;
              break;
            case 0xe:
              param_1[0x3c8] = 0x40;
            case 0xd:
              iStack_24 = 0xed;
              break;
            case 0xf:
              iStack_24 = 0xf3;
            }
            local_18 = (char *)0x3f800000;
            puStack_1c = (undefined1 *)0x3e2aaaab;
            puStack_20 = (undefined1 *)0x0;
            iStack_28 = 0x656b11;
            FUN_00aa4080();
            pcVar1 = *(code **)(*param_1 + 0x358);
            param_1[0x187] = param_1[0x187] + 1;
            (*pcVar1)();
            local_18 = "em0030_se_dmg_spark_death";
            puStack_1c = (undefined1 *)0x656b3b;
            FUN_00e5e0c0();
            FUN_0043f5b0();
          case 1:
            FUN_00ac80a0();
            iVar4 = FUN_00a94ce0();
            if (iVar4 != 0) {
              FUN_00650720();
              param_1[0x187] = param_1[0x187] + 1;
              if (param_1[0x294] == 0) {
                param_1[0x187] = 3;
              }
              param_1[0x248] = 0x42480000;
              return;
            }
            break;
          case 2:
            param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
            iVar4 = thunk_FUN_00e58ed0();
            if (iVar4 == 0) {
              FUN_009fdde0();
              return;
            }
            break;
          case 3:
            fVar11 = (float10)FUN_00ac8f80();
            if (fVar11 - (float10)0.011111111 < (float10)0) {
              FUN_009fdde0();
              FUN_00ac8fd0();
              return;
            }
            FUN_00ac8fd0();
            return;
          }
          return;
        default:
          return;
        }
      }
      if (0xc0000 < iVar4) {
        if (iVar4 < 0xc030001) {
          if (iVar4 == 0xc030000) {
            FUN_0064dc40();
            return;
          }
          if (iVar4 == 0xc0001) {
            FUN_00653ac0();
            return;
          }
          return;
        }
        switch(iVar4) {
        default:
          return;
        case 0xc030002:
          goto LAB_0064bd60;
        case 0xc030003:
          if (param_1[0x187] == 0) {
            uVar6 = param_1[0x3a6] & 0xffff;
            puStack_20 = (undefined1 *)0xbe;
            if (uVar6 == 3) {
              puStack_20 = (undefined1 *)0xbc;
            }
            if (uVar6 == 4) {
              puStack_20 = (undefined1 *)0xbd;
            }
            if (uVar6 == 6) {
              puStack_20 = (undefined1 *)0xbf;
            }
            local_18 = (char *)0x3e2aaaab;
            puStack_1c = (undefined1 *)0x0;
            iStack_24 = 0x64bebf;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
            FUN_0043f5b0();
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064bf07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
          return;
        case 0xc030004:
          FUN_0064bf20();
          return;
        }
      }
      if (iVar4 == 0xc0000) {
        FUN_00659270();
        return;
      }
      switch(iVar4) {
      case 0xb0000:
        param_1[0x3ce] = param_1[0x3ce] | 0x20800000;
        if (param_1[0x187] == 0) {
          puStack_20 = (undefined1 *)0x0;
          param_1[0x3c8] = 0;
          switch(param_1[0x3a4]) {
          case 8:
            param_1[0x3c8] = 0x40;
          case 7:
            puStack_20 = (undefined1 *)0xe0;
            break;
          case 10:
            param_1[0x3c8] = 0x40;
          case 9:
            puStack_20 = (undefined1 *)0xd1;
            break;
          case 0xc:
            param_1[0x3c8] = 0x40;
          case 0xb:
            puStack_20 = (undefined1 *)0xf9;
            break;
          case 0xe:
            param_1[0x3c8] = 0x40;
          case 0xd:
            puStack_20 = (undefined1 *)0xec;
            break;
          case 0xf:
            puStack_20 = (undefined1 *)0xf2;
          }
          local_18 = (char *)0x3e2aaaab;
          puStack_1c = (undefined1 *)0x0;
          iStack_24 = 0x64cc23;
          FUN_00aa4080();
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x250] = 0;
        }
        else if (param_1[0x187] != 1) goto LAB_0064cc46;
        FUN_00ac80a0();
LAB_0064cc46:
        iVar4 = FUN_00c158c0();
        if (iVar4 != 0) {
          if (param_1[0x3c9] != 0) {
            *(undefined4 *)(param_1[0x3c9] + 0xbb0) = 1;
          }
          if (param_1[0x3ca] != 0) {
            *(undefined4 *)(param_1[0x3ca] + 0xbb0) = 1;
          }
          FUN_00c272a0();
        }
        return;
      case 0xb0001:
        param_1[0x3ce] = param_1[0x3ce] | 0x20800000;
        if (param_1[0x187] == 0) {
          puStack_20 = (undefined1 *)0x0;
          param_1[0x3c8] = 0;
          switch(param_1[0x3a4]) {
          case 8:
            param_1[0x3c8] = 0x40;
          case 7:
            puStack_20 = (undefined1 *)0xdf;
            break;
          case 10:
            param_1[0x3c8] = 0x40;
          case 9:
            puStack_20 = (undefined1 *)0xd0;
            break;
          case 0xc:
            param_1[0x3c8] = 0x40;
          case 0xb:
            puStack_20 = (undefined1 *)0xfb;
          }
          local_18 = (char *)0x3e2aaaab;
          puStack_1c = (undefined1 *)0x0;
          iStack_24 = 0x64cd6b;
          FUN_00aa4080();
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) goto LAB_0064cd84;
        FUN_00ac80a0();
LAB_0064cd84:
        if (param_1[0x2a1] != 0) {
          local_18 = &LAB_0064cdbf;
          (**(code **)(*param_1 + 0x308))();
        }
        iVar4 = FUN_00c158c0();
        if (iVar4 != 0) {
          if (param_1[0x3c9] != 0) {
            *(undefined4 *)(param_1[0x3c9] + 0xbb0) = 1;
          }
          if (param_1[0x3ca] != 0) {
            *(undefined4 *)(param_1[0x3ca] + 0xbb0) = 1;
          }
          FUN_00c272a0();
        }
        return;
      case 0xb0002:
        param_1[0x3ce] = param_1[0x3ce] | 0x20800000;
        if (param_1[0x187] == 0) {
          puStack_20 = (undefined1 *)0x0;
          switch(param_1[0x3a4]) {
          case 8:
            param_1[0x3c8] = param_1[0x3c8] | 0x40;
          case 7:
            puStack_20 = (undefined1 *)0xe1;
            break;
          case 10:
            param_1[0x3c8] = param_1[0x3c8] | 0x40;
          case 9:
            puStack_20 = (undefined1 *)0xd2;
          }
          local_18 = (char *)0x3e2aaaab;
          puStack_1c = (undefined1 *)0x0;
          iStack_24 = 0x65672b;
          FUN_00aa4080();
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) goto LAB_00656765;
        FUN_00ac80a0();
        iVar4 = FUN_00a94ce0();
        if (iVar4 != 0) {
          local_18 = (char *)0xb0000;
          puStack_1c = &LAB_00656765;
          FUN_0064fb10();
        }
LAB_00656765:
        iVar4 = FUN_00c158c0();
        if (iVar4 != 0) {
          if (param_1[0x3c9] != 0) {
            *(undefined4 *)(param_1[0x3c9] + 0xbb0) = 1;
          }
          if (param_1[0x3ca] != 0) {
            *(undefined4 *)(param_1[0x3ca] + 0xbb0) = 1;
          }
          FUN_00c272a0();
        }
        return;
      case 0xb0003:
        goto LAB_00656c60;
      case 0xb0004:
        param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
        iVar4 = param_1[0x187];
        if (iVar4 == 0) {
          *(undefined2 *)(param_1 + 0x209) = 1;
          param_1[0x20a] = 0x78;
          param_1[0x187] = 1;
        }
        else if (iVar4 != 1) {
          if (iVar4 != 2) {
            return;
          }
          goto LAB_0064cf61;
        }
        puStack_20 = (undefined1 *)0x0;
        param_1[0x3c8] = 0;
        switch(param_1[0x3a4]) {
        case 8:
          param_1[0x3c8] = 0x40;
        case 7:
          puStack_20 = (undefined1 *)0xe0;
          break;
        case 10:
          param_1[0x3c8] = 0x40;
        case 9:
          puStack_20 = (undefined1 *)0xd1;
          break;
        case 0xc:
          param_1[0x3c8] = 0x40;
        case 0xb:
          puStack_20 = (undefined1 *)0xf9;
          break;
        case 0xe:
          param_1[0x3c8] = 0x40;
        case 0xd:
          puStack_20 = (undefined1 *)0xec;
          break;
        case 0xf:
          puStack_20 = (undefined1 *)0xf2;
        }
        local_18 = (char *)0x3e2aaaab;
        puStack_1c = (undefined1 *)0x0;
        iStack_24 = 0x64cf4f;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x250] = 0;
LAB_0064cf61:
        FUN_00ac80a0();
        return;
      case 0xb0005:
        FUN_00656ef0();
        return;
      case 0xb0006:
        FUN_00657280();
        return;
      default:
        goto switchD_0065bd9d_default;
      }
    }
    if (iVar4 == 0x70000) {
      FUN_00655960();
      return;
    }
    if (0x50000 < iVar4) {
      if (0x60000 < iVar4) {
        switch(iVar4) {
        case 0x60001:
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
          if (param_1[0x187] == 0) {
            uVar6 = param_1[0x3a6] & 0xffff;
            puStack_20 = (undefined1 *)0xa6;
            if (uVar6 == 2) {
              puStack_20 = (undefined1 *)0xa7;
            }
            if (uVar6 == 3) {
              puStack_20 = (undefined1 *)0xa9;
            }
            if (uVar6 == 4) {
              puStack_20 = (undefined1 *)0xa8;
            }
            local_18 = (char *)0x3d088889;
            puStack_1c = (undefined1 *)0x0;
            iStack_24 = 0x64f31b;
            FUN_00aa4080();
            FUN_0043f5b0();
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            (**(code **)(*param_1 + 0x34c))();
            param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
          }
          return;
        case 0x60002:
          FUN_0064c730();
          return;
        case 0x60003:
          goto LAB_0064c8e0;
        case 0x60004:
          FUN_0064c9a0();
          return;
        case 0x60005:
          param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
          if (param_1[0x187] == 0) {
            puStack_20 = (undefined1 *)0x0;
            param_1[0x3c8] = 0;
            switch(param_1[0x3a4]) {
            case 8:
              param_1[0x3c8] = 0x40;
            case 7:
              puStack_20 = (undefined1 *)0xe2;
              break;
            case 10:
              param_1[0x3c8] = 0x40;
            case 9:
              puStack_20 = (undefined1 *)0xd3;
              break;
            case 0xc:
              param_1[0x3c8] = 0x40;
            case 0xb:
              puStack_20 = (undefined1 *)0xfc;
              break;
            case 0xe:
              param_1[0x3c8] = 0x40;
            case 0xd:
              puStack_20 = (undefined1 *)0xee;
              break;
            case 0xf:
              puStack_20 = (undefined1 *)0xf4;
            }
            local_18 = (char *)0x0;
            puStack_1c = (undefined1 *)0x0;
            iStack_24 = 0x656892;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            local_18 = (char *)0xb0000;
            puStack_1c = &LAB_006568cc;
            FUN_0064fb10();
          }
          return;
        case 0x60006:
          *(undefined2 *)(param_1 + 0x209) = 4;
          param_1[0x20a] = 0x78;
          if (param_1[0x187] == 0) {
            puStack_20 = (undefined1 *)0x0;
            param_1[0x3c8] = 0;
            switch(param_1[0x3a4]) {
            case 8:
              param_1[0x3c8] = 0x40;
            case 7:
              puStack_20 = (undefined1 *)0xe4;
              break;
            case 10:
              param_1[0x3c8] = 0x40;
            case 9:
              puStack_20 = (undefined1 *)0xd5;
              break;
            case 0xc:
              param_1[0x3c8] = 0x40;
            case 0xb:
              puStack_20 = (undefined1 *)0xfd;
              break;
            case 0xe:
              param_1[0x3c8] = 0x40;
            case 0xd:
              puStack_20 = (undefined1 *)0xef;
              break;
            case 0xf:
              puStack_20 = (undefined1 *)0xf5;
            }
            local_18 = (char *)0x0;
            puStack_1c = (undefined1 *)0x0;
            iStack_24 = 0x6569c8;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x250] = 0;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar4 = FUN_00a94ce0();
          if (iVar4 != 0) {
            local_18 = (char *)0xb0000;
            puStack_1c = &LAB_00656a0c;
            FUN_0064fb10();
          }
          return;
        default:
          return;
        }
      }
      if (iVar4 != 0x60000) {
        switch(iVar4) {
        case 0x50001:
          FUN_0064e230();
          return;
        case 0x50002:
          FUN_0064e400();
          return;
        case 0x50003:
          FUN_0064e5d0();
          return;
        case 0x50004:
          FUN_0064e830();
          return;
        case 0x50005:
          FUN_0064eb20();
          return;
        case 0x50006:
          goto LAB_0064c210;
        case 0x50007:
          FUN_00659710();
          return;
        case 0x50008:
          param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
          (**(code **)(*param_1 + 0x318))();
          *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
          switch(param_1[0x187]) {
          case 0:
            FUN_00aa4080(0x8c,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            FUN_00a8d280();
            iVar4 = param_1[0x2a1];
            param_1[0x68c] = *(int *)(iVar4 + 0x40);
            param_1[0x68d] = *(int *)(iVar4 + 0x44);
            param_1[0x68e] = *(int *)(iVar4 + 0x48);
            param_1[0x68f] = *(int *)(iVar4 + 0x4c);
            param_1[0x187] = param_1[0x187] + 1;
          case 1:
            FUN_00ac80a0(0x3f800000,0x3f800000);
            iVar4 = FUN_00a94ce0(0);
            if (iVar4 != 0) {
              param_1[0x187] = param_1[0x187] + 1;
            }
            FUN_00a8e880(param_1 + 0x68c);
            (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
            return;
          case 2:
            goto switchD_00659b2a_caseD_2;
          case 3:
            goto switchD_00659b2a_caseD_3;
          case 4:
            FUN_00ac80a0(0x3f800000,0x3f800000);
            FUN_00a581b0(&fStack_40,0,param_1[0x249]);
            fVar15 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
            param_1[0x249] = (int)fVar15;
            if (!NAN(fVar15) && 2.0 < fVar15 != (fVar15 == 2.0)) {
              param_1[0x249] = 0x40000000;
              FUN_0064fb10(0x10003,0,0,0,0);
            }
            iStack_30 = param_1[0x14];
            iStack_2c = param_1[0x15];
            iStack_28 = param_1[0x16];
            iStack_24 = param_1[0x17];
            param_1[0x14] = (int)fStack_40;
            param_1[0x15] = (int)fStack_3c;
            param_1[0x16] = (int)fStack_38;
            param_1[0x224] = (int)(fStack_40 - (float)param_1[0x690]);
            param_1[0x225] = (int)(fStack_3c - (float)param_1[0x691]);
            param_1[0x226] = (int)(fStack_38 - (float)param_1[0x692]);
            param_1[0x227] = 0x3f800000;
            puStack_20 = (undefined1 *)param_1[0x14];
            puStack_1c = (undefined1 *)param_1[0x15];
            local_18 = (char *)param_1[0x16];
            iVar4 = FUN_0064ffb0(&iStack_30,&puStack_20,0);
            if (iVar4 != 0) {
              param_1[0x224] = 0;
              param_1[0x225] = 0;
              param_1[0x226] = 0;
              FUN_0064fb10(0x10003,0,0,0,0);
            }
            param_1[0x690] = (int)fStack_40;
            param_1[0x691] = (int)fStack_3c;
            param_1[0x692] = (int)fStack_38;
            param_1[0x693] = 0x3f800000;
            iVar4 = (**(code **)(*param_1 + 800))(0x3d088889);
            if (iVar4 != 0) {
              FUN_0064fb10(0x10004,0,0,0,0);
              param_1[0x224] = 0;
              param_1[0x225] = 0;
              param_1[0x226] = 0;
            }
            uVar14 = 1;
            param_1 = param_1 + 0x68c;
            uVar13 = 0x40000000;
            uVar7 = FUN_00a7c7f0(param_1,0x40000000,1);
            uVar12 = extraout_ECX;
            FUN_00a7c940(uVar7);
            FUN_00c62c50(uVar12,param_1,uVar13,uVar14);
            return;
          default:
            return;
          }
        case 0x50009:
          FUN_0064ecf0();
          return;
        case 0x5000a:
          FUN_00654c70();
          return;
        case 0x5000b:
          FUN_0064c3c0();
          return;
        default:
          return;
        }
      }
      FUN_0064f170();
      return;
    }
    if (iVar4 == 0x50000) {
      FUN_0064e060();
      return;
    }
    if (iVar4 < 0x40001) {
      if (iVar4 != 0x40000) {
        if (iVar4 == 0x20001) {
          FUN_00653fc0();
          return;
        }
        return;
      }
switchD_0065be1c_caseD_40008:
      FUN_0065b630();
      return;
    }
    switch(iVar4) {
    case 0x40001:
      FUN_006540e0();
      return;
    case 0x40002:
      FUN_006542a0();
      return;
    case 0x40003:
      goto LAB_006545e0;
    case 0x40004:
      if (param_1[0x187] == 0) {
        puStack_20 = (undefined1 *)0x13;
        if ((param_1[0x3a6] & 0xffffU) == 4) {
          puStack_20 = (undefined1 *)0x14;
        }
        local_18 = (char *)0x3e2aaaab;
        puStack_1c = (undefined1 *)0x0;
        iStack_24 = 0x64b962;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x42b40000;
      }
      else if (param_1[0x187] != 1) goto LAB_0064b9a0;
      FUN_00ac80a0();
      iVar4 = FUN_00a94ce0();
      if (iVar4 != 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
LAB_0064b9a0:
      if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(), iVar4 != 0)) {
        local_18 = &LAB_0064b9e8;
        (**(code **)(*param_1 + 0x308))();
      }
      return;
    case 0x40005:
      if (param_1[0x187] == 0) {
        puStack_20 = (undefined1 *)0x15;
        if ((param_1[0x3a6] & 0xffffU) == 4) {
          puStack_20 = (undefined1 *)0x16;
        }
        local_18 = (char *)0x3e2aaaab;
        puStack_1c = (undefined1 *)0x0;
        iStack_24 = 0x64ba62;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x42b40000;
      }
      else if (param_1[0x187] != 1) goto LAB_0064baa0;
      FUN_00ac80a0();
      iVar4 = FUN_00a94ce0();
      if (iVar4 != 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
LAB_0064baa0:
      if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(), iVar4 != 0)) {
        local_18 = &LAB_0064bae8;
        (**(code **)(*param_1 + 0x308))();
      }
      return;
    case 0x40006:
      param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
      if (param_1[0x187] == 0) {
        local_18 = (char *)0x3e2aaaab;
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = (undefined1 *)0x4a;
        iStack_24 = 0x64bb4f;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0();
      iVar4 = FUN_00a94ce0();
      if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064bb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x40007:
      FUN_0064bba0();
      return;
    case 0x40008:
      goto switchD_0065be1c_caseD_40008;
    default:
      goto switchD_0065bd9d_default;
    }
  }
  if (iVar4 == 0x20000) {
    FUN_00653f10();
    return;
  }
  switch(iVar4) {
  case 0x10000:
  case 0x1000a:
    goto LAB_0064b530;
  case 0x10001:
    FUN_0064d800();
    return;
  case 0x10002:
    if (param_1[0x187] == 0) {
      local_18 = (char *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x28;
      iStack_24 = 0x64b675;
      FUN_00aa4080();
      param_1[0x248] = 0x42b40000;
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x669] = 1;
    }
    else if (param_1[0x187] != 1) goto LAB_0064b6be;
    FUN_00ac80a0();
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
LAB_0064b6be:
    if (0.0 < (float)param_1[0x248]) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    }
    if (param_1[0x2a1] != 0) {
      local_18 = (char *)0x64b718;
      (**(code **)(*param_1 + 0x308))();
      return;
    }
    return;
  case 0x10003:
    FUN_00653490();
    return;
  case 0x10004:
    FUN_00653580();
    return;
  case 0x10005:
    FUN_00653680();
    return;
  case 0x10006:
    param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
    if (param_1[0x187] == 0) {
      local_18 = (char *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5;
      iStack_24 = 0x65391f;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      if (param_1[0x202] != 0) {
        local_18 = (char *)0x10005;
        puStack_1c = (undefined1 *)0x653966;
        FUN_0064fb10();
        return;
      }
      param_1[0x658] = param_1[0x650];
      param_1[0x659] = param_1[0x651];
      param_1[0x65a] = param_1[0x652];
      param_1[0x65b] = param_1[0x653];
      fVar15 = ((float)param_1[0x12] - (float)param_1[0x65a]) *
               ((float)param_1[0x12] - (float)param_1[0x65a]) +
               ((float)param_1[0x10] - (float)param_1[0x658]) *
               ((float)param_1[0x10] - (float)param_1[0x658]);
      if (fVar15 < 2.25 != (fVar15 == 2.25)) {
        param_1[0x187] = 0;
        return;
      }
      local_18 = (char *)0x10005;
      puStack_1c = &LAB_006539df;
      FUN_0064fb10();
    }
    return;
  case 0x10007:
    FUN_00658e70();
    return;
  case 0x10008:
    FUN_0064b750();
    return;
  case 0x10009:
    FUN_0064dac0();
    return;
  default:
    goto switchD_0065bd9d_default;
  }
LAB_00656260:
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x2a1] != 0) && (iVar4 = param_1[0x13c], iVar5 = FUN_00a81330(), iVar5 == iVar4)) {
      local_18 = &LAB_006562c5;
      (**(code **)(*(int *)param_1[0x2a1] + 0x15c))();
    }
    local_18 = (char *)0x6562d5;
    (**(code **)(*param_1 + 0x15c))();
    iStack_28 = 0x108;
    switch(param_1[0x3a4]) {
    case 1:
      iStack_28 = 0x109;
      break;
    case 2:
      iStack_28 = 0x10a;
      break;
    case 3:
      iStack_28 = 0xeb;
      break;
    case 4:
      iStack_28 = 0xf1;
      break;
    case 5:
      iStack_28 = 199;
      if ((*(byte *)((int)param_1 + 0xf3a) & 1) != 0) {
        iStack_28 = 0xca;
      }
      break;
    case 6:
      iStack_28 = 200;
      if ((*(byte *)((int)param_1 + 0xf3a) & 1) != 0) {
        iStack_28 = 0xcb;
      }
    }
    local_18 = (char *)0x8000000;
    puStack_1c = (undefined1 *)0x3f800000;
    puStack_20 = (undefined1 *)0x3e2aaaab;
    iStack_24 = 0;
    iStack_2c = 0x65635f;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    local_18 = (char *)0x656378;
    FUN_0043f5b0();
  case 1:
    local_18 = "j";
    FUN_00ac80a0();
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      if ((*(byte *)(param_1 + 0x3ce) & 0x40) != 0) {
        local_18 = (char *)0x0;
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = (undefined1 *)0x80002;
        iStack_24 = 0x6563b9;
        FUN_0064fb10();
        return;
      }
      FUN_00650720();
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x294] == 0) {
        param_1[0x187] = 3;
      }
      param_1[0x248] = 0x42480000;
      return;
    }
    break;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar4 = thunk_FUN_00e58ed0();
    if (iVar4 == 0) {
      FUN_009fdde0();
      return;
    }
    break;
  case 3:
    fVar11 = (float10)FUN_00ac8f80();
    if (fVar11 - (float10)0.011111111 < (float10)0) {
      FUN_009fdde0();
      FUN_00ac8fd0();
      return;
    }
    FUN_00ac8fd0();
  }
  return;
LAB_0064bd60:
  if (param_1[0x187] == 0) {
    uVar6 = param_1[0x3a6] & 0xffff;
    puStack_20 = (undefined1 *)0xc3;
    if (uVar6 == 3) {
      puStack_20 = (undefined1 *)0xc1;
    }
    if (uVar6 == 4) {
      puStack_20 = (undefined1 *)0xc2;
    }
    if (uVar6 == 6) {
      puStack_20 = (undefined1 *)0xc4;
    }
    local_18 = (char *)0x3e2aaaab;
    puStack_1c = (undefined1 *)0x0;
    iStack_24 = 0x64bddf;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0043f5b0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0();
  iVar4 = FUN_00a94ce0();
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064be27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
LAB_0064c8e0:
  param_1[0x3ce] = param_1[0x3ce] | 0xa0000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    local_18 = (char *)0x3d088889;
    puStack_1c = (undefined1 *)0x0;
    puStack_20 = (undefined1 *)0x170;
    iStack_24 = 0x64c939;
    FUN_00aa4080();
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0();
  iVar4 = FUN_00a94ce0();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x1d4))();
                    /* WARNING: Could not recover jumptable at 0x0064c986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
switchD_00659b2a_caseD_2:
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00aa4080(0x8d,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  iVar4 = param_1[0x2a1];
  fStack_40 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
  fStack_38 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
  fStack_34 = *(float *)(iVar4 + 0x4c) - (float)param_1[0x13];
  fStack_3c = 0.0;
  fVar15 = fStack_40 * fStack_40 + fStack_38 * fStack_38;
  if (fVar15 < 0.0 == (fVar15 == 0.0)) {
    FUN_00ddf460(&fStack_40,&fStack_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_38 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 1.0;
  }
  iVar4 = param_1[0x2a1];
  fStack_40 = fStack_40 * 2.5;
  fStack_3c = fStack_3c * 2.5;
  fStack_38 = fStack_38 * 2.5;
  fStack_34 = fStack_34 * 2.5;
  param_1[0x68c] = *(int *)(iVar4 + 0x40);
  param_1[0x68d] = *(int *)(iVar4 + 0x44);
  param_1[0x68e] = *(int *)(iVar4 + 0x48);
  param_1[0x68f] = *(int *)(iVar4 + 0x4c);
  FUN_00658840(param_1 + 0x674,param_1 + 0x10,param_1 + 0x68c,0x40c00000,0x40400000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x249] = 0;
switchD_00659b2a_caseD_3:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&fStack_40,0,param_1[0x249]);
  fVar15 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
  param_1[0x249] = (int)fVar15;
  if (!NAN(fVar15) && 1.0 < fVar15 != (fVar15 == 1.0)) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  puStack_20 = (undefined1 *)param_1[0x14];
  puStack_1c = (undefined1 *)param_1[0x15];
  local_18 = (char *)param_1[0x16];
  param_1[0x14] = (int)fStack_40;
  param_1[0x15] = (int)fStack_3c;
  param_1[0x16] = (int)fStack_38;
  iStack_30 = param_1[0x14];
  iStack_2c = param_1[0x15];
  iStack_28 = param_1[0x16];
  iStack_24 = param_1[0x17];
  iVar4 = FUN_0064ffb0(&puStack_20,&iStack_30,1);
  if (iVar4 != 0) {
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    FUN_0064fb10(0x10003,0,0,0,0);
    return;
  }
  param_1[0x690] = (int)fStack_40;
  param_1[0x691] = (int)fStack_3c;
  param_1[0x692] = (int)fStack_38;
  param_1[0x693] = 0x3f800000;
  FUN_00a8e880(param_1 + 0x68c);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  return;
LAB_0064c210:
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    local_18 = (char *)0x3daaaaab;
    puStack_1c = (undefined1 *)0x0;
    puStack_20 = (undefined1 *)0x73;
    iStack_24 = 0x64c266;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0();
  iVar4 = FUN_00a94ce0();
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064c2aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
LAB_006545e0:
  if (param_1[0x187] == 0) {
    puStack_20 = (undefined1 *)0x3c;
    if ((param_1[0x3a6] & 0xffffU) == 3) {
      puStack_20 = (undefined1 *)0x3f;
    }
    if ((param_1[0x3a6] & 0xffffU) == 4) {
      puStack_20 = (undefined1 *)0x42;
    }
    local_18 = (char *)0x3e2aaaab;
    puStack_1c = (undefined1 *)0x0;
    iStack_24 = 0x65464a;
    FUN_00aa4080();
    if ((param_1[0x3a6] & 0x40000U) == 0) {
      FUN_00a92f90();
      FUN_00e36b50();
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  }
  else if (param_1[0x187] != 1) goto LAB_006547e5;
  FUN_00ac80a0();
  iVar4 = FUN_00a94ce0();
  if (iVar4 != 0) {
    if ((param_1[0x3a6] & 0xffffU) == 2) {
      if ((param_1[0x3a6] & 0x40000U) != 0) {
        sVar2 = FUN_00dde2a0();
        if (sVar2 == 1) {
          if (param_1[0x63e] != 0) {
            param_1[0x3b2] = 0x50008;
          }
        }
        else {
          if (sVar2 != 2) {
                    /* WARNING: Could not recover jumptable at 0x006546e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
          param_1[0x3b2] = 0x50009;
        }
        param_1[0x24f] = 0x41400000;
        local_18 = (char *)0x40000;
        param_1[0x3b4] = 0x40000;
        puStack_1c = (undefined1 *)0x654732;
        FUN_0064fb10();
        return;
      }
      if ((param_1[0x3b1] != 2) || (1.0 <= (float)param_1[0x2a6])) {
        if (((float)param_1[0x2a3] < 36.0) && (sVar2 = FUN_00dde2a0(), sVar2 == 2)) {
          local_18 = (char *)0x40003;
          puStack_1c = (undefined1 *)0x6547d7;
          FUN_0064fb10();
          return;
        }
      }
      else {
        uVar3 = FUN_00dde2a0();
        switch(uVar3) {
        case 0:
        case 2:
          iVar4 = FUN_0064d380();
          if ((iVar4 != 0) && ((float)param_1[0x2a3] < 225.0)) {
            local_18 = (char *)0x50007;
            puStack_1c = (undefined1 *)0x65479b;
            FUN_0064fb10();
            return;
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_006547e5:
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(), iVar4 != 0)) {
    local_18 = &LAB_0065482d;
    (**(code **)(*param_1 + 0x308))();
  }
  return;
LAB_0064b530:
  iVar4 = FUN_00ac46d0();
  if (iVar4 != 0) {
    param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  }
  if ((param_1[0x3cf] & 0x4000U) == 0) {
    piVar10 = param_1 + 0x3c9;
    iVar4 = 2;
    do {
      if ((*piVar10 != 0) && (iVar5 = FUN_00c158c0(), iVar5 != 0)) {
        *(undefined4 *)(*piVar10 + 0xbb0) = 1;
        FUN_00c272a0();
      }
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_1[0x187] == 0) {
    local_18 = (char *)0x3e4ccccd;
    puStack_1c = (undefined1 *)0x0;
    puStack_20 = (undefined1 *)0x5;
    iStack_24 = 0x64b5dc;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  }
  else if (param_1[0x187] != 1) goto LAB_0064b601;
  FUN_00ac80a0();
LAB_0064b601:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
LAB_00656c60:
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_00656d9c;
  }
  puStack_20 = (undefined1 *)0x0;
  switch(param_1[0x3a4]) {
  case 0x10:
    param_1[0x3a4] = 9;
    puStack_20 = (undefined1 *)0xe6;
    break;
  case 0x11:
    param_1[0x3a4] = 10;
    puStack_20 = (undefined1 *)0xe6;
    break;
  case 0x12:
    param_1[0x3a4] = 0xb;
    puStack_20 = (undefined1 *)0xe7;
    break;
  case 0x13:
    param_1[0x3a4] = 0xc;
    puStack_20 = (undefined1 *)0xe7;
    break;
  case 0x14:
    param_1[0x3a4] = 0xd;
    puStack_20 = (undefined1 *)0xe8;
    break;
  case 0x15:
    puStack_20 = (undefined1 *)0xe8;
    goto LAB_00656d5a;
  case 0x16:
    param_1[0x3a4] = 0xb;
    puStack_20 = (undefined1 *)0xd7;
    break;
  case 0x17:
    param_1[0x3a4] = 0xc;
    puStack_20 = (undefined1 *)0xd7;
    break;
  case 0x18:
    param_1[0x3a4] = 0xd;
    puStack_20 = (undefined1 *)0xd8;
    break;
  case 0x19:
    puStack_20 = (undefined1 *)0xd8;
    goto LAB_00656d5a;
  case 0x1a:
    param_1[0x3a4] = 0xd;
    puStack_20 = (undefined1 *)0xff;
    break;
  case 0x1b:
    puStack_20 = (undefined1 *)0xff;
LAB_00656d5a:
    param_1[0x3a4] = 0xe;
  }
  local_18 = (char *)0x3e2aaaab;
  puStack_1c = (undefined1 *)0x0;
  iStack_24 = 0x656d94;
  FUN_00aa4080();
  param_1[0x187] = param_1[0x187] + 1;
LAB_00656d9c:
  FUN_00ac80a0();
  iVar4 = FUN_00a94ce0();
  if (iVar4 != 0) {
    local_18 = (char *)0xb0000;
    puStack_1c = &LAB_00656dce;
    FUN_0064fb10();
  }
  return;
}

// 0065C0D0  Em8030::vf4C  size=539  [class]
void __fastcall Em8030::vf4C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00a92fb0();
  fVar3 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar3;
  BehaviorEmBase::vf4C();
  param_1[0x3ce] = param_1[0x3ce] & 0xdffbffff;
  param_1[0x671] = 0;
  if ((param_1[0x2a1] != 0) && (*(int *)(param_1[0x2a1] + 0x4e4) != 0)) {
    param_1[0x3cf] = param_1[0x3cf] | 0x4000;
  }
  param_1[0x3ce] = param_1[0x3ce] | 0xc0000000;
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = FUN_00ac82f0();
  param_1[0x672] = iVar1;
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    FUN_0065bab0();
  }
  FUN_0065bd80();
  if ((param_1[0x3ce] & 0x40000U) != 0) {
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  iVar1 = FUN_00ac45b0();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      uStack_24 = *(undefined4 *)(iVar1 + 0x40);
      uStack_20 = *(undefined4 *)(iVar1 + 0x44);
      uStack_1c = *(undefined4 *)(iVar1 + 0x48);
      uStack_18 = *(undefined4 *)(iVar1 + 0x4c);
    }
  }
  uStack_30 = 1;
  uStack_34 = 1;
  uVar2 = 1;
  iVar1 = FUN_00a8c760(0x13);
  if ((iVar1 != 0) || ((param_1[0x3ce] & 0x24000000U) != 0)) {
    uVar2 = 0;
    uStack_30 = 0;
    uStack_34 = 0;
  }
  if ((param_1[0x3ce] & 0x800000U) != 0) {
    uVar2 = 1;
  }
  if (param_1[0x3c9] != 0) {
    *(undefined4 *)(param_1[0x3c9] + 0xbac) = uVar2;
  }
  if (param_1[0x3ca] != 0) {
    *(undefined4 *)(param_1[0x3ca] + 0xbac) = uVar2;
  }
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  switchD_0080dbae::default();
  FUN_00a84780(&uStack_24,uStack_30,uStack_34,0,0,0x3f800000);
  FUN_00a84780(&uStack_24,uStack_30,uStack_34,0,0,0x3f800000);
  FUN_00a84780(&uStack_24,0,1,0,0,0x3f800000);
  FUN_00a84780(&uStack_24,1,0,0,0,0x3f800000);
  return;
}

// 00AB4900  Em8030::vf04  size=6  [class]
undefined * Em8030::vf04(void)

{
  return &DAT_01b35570;
}

// 00AB4910  Em8030::vf17C  size=6  [class]
undefined4 Em8030::vf17C(void)

{
  return 1;
}

// 00AB4920  Em8030::vf180  size=6  [class]
undefined4 Em8030::vf180(void)

{
  return 1;
}

// 00AB4930  Em8030::vf20C  size=7  [class]
float10 Em8030::vf20C(void)

{
  return (float10)3.5;
}

// 00AB4940  Em8030::vf1DC  size=6  [class]
undefined4 Em8030::vf1DC(void)

{
  return 1;
}

// 00AB4950  Em8030::vf140  size=7  [class]
float10 Em8030::vf140(void)

{
  return (float10)5.0;
}

// 00AB4960  Em8030::vf144  size=7  [class]
float10 Em8030::vf144(void)

{
  return (float10)5.2;
}

// 00AB4970  FUN_00ab4970  size=152  [callgraph]
void FUN_00ab4970(void)

{
  int iVar1;
  
  cXml::cXml_7();
  FUN_00905ce0();
  cXml::cXml_7();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  iVar1 = 8;
  do {
    cEspControler::~cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00ABA300  Em8030::vf00  size=30  [class]
undefined4 __thiscall Em8030::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab4970();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

