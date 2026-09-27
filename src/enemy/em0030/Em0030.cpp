// src/enemy/em0030/Em0030.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAC5A0..00B741F0, 208 functions

#include "mgrr.h"
#include "Em0030.h"

// 00AAC5A0  Em0030::Em0030  size=230  [class]
undefined4 * __fastcall Em0030::Em0030(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  iVar1 = 2;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 8;
  do {
    cEspControler::cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00a603a0();
  FUN_00904d60();
  FUN_00a603a0();
  return param_1;
}

// 00AAC690  Em0030::vf04  size=6  [class]
undefined * Em0030::vf04(void)

{
  return &DAT_01be9d50;
}

// 00AAC6A0  Em0030::vf17C  size=6  [class]
undefined4 Em0030::vf17C(void)

{
  return 1;
}

// 00AAC6B0  Em0030::vf180  size=6  [class]
undefined4 Em0030::vf180(void)

{
  return 1;
}

// 00AAC6C0  Em0030::vf20C  size=7  [class]
float10 Em0030::vf20C(void)

{
  return (float10)3.5;
}

// 00AAC6D0  Em0030::vf1DC  size=6  [class]
undefined4 Em0030::vf1DC(void)

{
  return 1;
}

// 00AAC6E0  Em0030::vf140  size=7  [class]
float10 Em0030::vf140(void)

{
  return (float10)5.0;
}

// 00AAC6F0  Em0030::vf144  size=7  [class]
float10 Em0030::vf144(void)

{
  return (float10)5.2;
}

// 00AAC700  FUN_00aac700  size=141  [callgraph]
void FUN_00aac700(void)

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
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB6CC0  Em0030::vf00  size=30  [class]
undefined4 __thiscall Em0030::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aac700();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B60AB0  Em0030::vfFC  size=86  [class]
void __fastcall Em0030::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0xa0000000;
  if (*(int *)(param_1 + 0xe54) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xe54) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xe54) + 0xbb0) = 0;
  }
  if (*(int *)(param_1 + 0xe58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xe58) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xe58) + 0xbb0) = 0;
  }
  return;
}

// 00B60B10  Em0030::vf100  size=96  [class]
void __fastcall Em0030::vf100(int param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf100();
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) & 0x5fffffff;
  if (*(int *)(param_1 + 0xe54) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xe54) + 0xbac) = 1;
  }
  if (*(int *)(param_1 + 0xe58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xe58) + 0xbac) = 1;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(7);
    }
  }
  return;
}

// 00B60B70  Em0030::thunk_vf54  size=5  [class]
void __fastcall Em0030::thunk_vf54(int *param_1)

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

// 00B60B80  Em0030::vfC8  size=45  [class]
void __thiscall Em0030::vfC8(int param_1,undefined4 param_2)

{
  Bh0064::vfC8(param_2);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(param_2);
  }
  return;
}

// 00B60BC0  FUN_00b60bc0  size=244  [between]
void __fastcall FUN_00b60bc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00ac46d0();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000000;
  }
  if ((*(uint *)(param_1 + 0xe6c) & 0x4000) == 0) {
    piVar3 = (int *)(param_1 + 0xe54);
    iVar1 = 2;
    do {
      if ((*piVar3 != 0) && (iVar2 = FUN_00c158c0(), iVar2 != 0)) {
        *(undefined4 *)(*piVar3 + 0xbb0) = 1;
        FUN_00c272a0(0x40a00000);
      }
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00b60c91;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b60c91:
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 00B60CC0  FUN_00b60cc0  size=238  [between]
void __fastcall FUN_00b60cc0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x28,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42b40000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x635] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b60d4e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b60d4e:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if (param_1[0x2a1] == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00B60DE0  FUN_00b60de0  size=286  [between]
void __fastcall FUN_00b60de0(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x635] = 1;
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
    if (param_1[0x634] != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 00B60F60  FUN_00b60f60  size=21  [between]
void FUN_00b60f60(void)

{
  FUN_00c272a0(0x40a00000);
  return;
}

// 00B60F90  FUN_00b60f90  size=234  [between]
void __fastcall FUN_00b60f90(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x13;
    if ((param_1[0x372] & 0xffffU) == 4) {
      uVar1 = 0x14;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  }
  else if (param_1[0x187] != 1) goto LAB_00b61030;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b61030:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 00B61090  FUN_00b61090  size=234  [between]
void __fastcall FUN_00b61090(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x15;
    if ((param_1[0x372] & 0xffffU) == 4) {
      uVar1 = 0x16;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  }
  else if (param_1[0x187] != 1) goto LAB_00b61130;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b61130:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d8efa35,0);
  }
  return;
}

// 00B61190  FUN_00b61190  size=130  [between]
void __fastcall FUN_00b61190(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b61210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B61230  FUN_00b61230  size=355  [between]
void __fastcall FUN_00b61230(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1aa,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined2 *)(param_1 + 0x209) = 1;
    param_1[0x20a] = 0x78;
  case 1:
    goto LAB_00b612a0;
  case 2:
    FUN_00aa4080(0x1ab,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x39a] & 0x100U) == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
LAB_00b612a0:
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
                    /* WARNING: Could not recover jumptable at 0x00b6138f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B613E0  FUN_00b613e0  size=201  [between]
void __fastcall FUN_00b613e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    uVar1 = param_1[0x372] & 0xffff;
    uVar3 = 0xc3;
    if (uVar1 == 3) {
      uVar3 = 0xc1;
    }
    if (uVar1 == 4) {
      uVar3 = 0xc2;
    }
    if (uVar1 == 6) {
      uVar3 = 0xc4;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0043f5b0(9,0x41200000);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b614a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B614C0  FUN_00b614c0  size=201  [between]
void __fastcall FUN_00b614c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    uVar1 = param_1[0x372] & 0xffff;
    uVar3 = 0xbe;
    if (uVar1 == 3) {
      uVar3 = 0xbc;
    }
    if (uVar1 == 4) {
      uVar3 = 0xbd;
    }
    if (uVar1 == 6) {
      uVar3 = 0xbf;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0043f5b0(9,0x41200000);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b61587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B615A0  FUN_00b615a0  size=361  [between]
void __fastcall FUN_00b615a0(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
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
                    /* WARNING: Could not recover jumptable at 0x00b61704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B61730  Em0030::vf208  size=36  [class]
void __thiscall Em0030::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 00B61760  Em0030::vf6C  size=86  [class]
void __thiscall Em0030::vf6C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  Bh0064::vf6C(param_2);
  fVar1 = *(float *)(param_1 + 0x50) - *param_2;
  fVar2 = *(float *)(param_1 + 0x58) - param_2[2];
  *(float *)(param_1 + 0xe20) = *(float *)(param_1 + 0xe20) + fVar1;
  *(float *)(param_1 + 0xe28) = *(float *)(param_1 + 0xe28) + fVar2;
  *(float *)(param_1 + 0xe30) = *(float *)(param_1 + 0xe30) + fVar1;
  *(float *)(param_1 + 0xe38) = fVar2 + *(float *)(param_1 + 0xe38);
  return;
}

// 00B617C0  Em0030::vf70  size=77  [class]
void __thiscall Em0030::vf70(int param_1,float *param_2)

{
  Bh0064::vf70(param_2);
  *(float *)(param_1 + 0xe20) = *param_2 + *(float *)(param_1 + 0xe20);
  *(float *)(param_1 + 0xe28) = param_2[2] + *(float *)(param_1 + 0xe28);
  *(float *)(param_1 + 0xe30) = *(float *)(param_1 + 0xe30) + *param_2;
  *(float *)(param_1 + 0xe38) = param_2[2] + *(float *)(param_1 + 0xe38);
  return;
}

// 00B61810  Em0030::vf184  size=6  [class]
undefined4 Em0030::vf184(void)

{
  return 0xffffffff;
}

// 00B61880  FUN_00b61880  size=156  [between]
void __fastcall FUN_00b61880(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x73,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b6191a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B61920  FUN_00b61920  size=168  [between]
void __fastcall FUN_00b61920(int param_1)

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
  if (((*(uint *)(param_1 + 0xe68) & 0x4000) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x928) = fVar1, fVar1 < 0.0)) {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 3) {
      FUN_00a8cb60(4);
    }
  }
  return;
}

// 00B619D0  FUN_00b619d0  size=47  [between]
void __fastcall FUN_00b619d0(int *param_1)

{
  if (param_1[0x2a1] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  if (1 < param_1[0x187]) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  return;
}

// 00B61A30  FUN_00b61a30  size=399  [between]
void __fastcall FUN_00b61a30(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x81,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
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
    FUN_00aa4080(0x82,0,0x3daaaaab,0x3f800000,param_1[0x394],0xbf800000,0x3f800000);
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
    FUN_00aa4080(0x83,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b61bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B61C30  FUN_00b61c30  size=141  [between]
void __fastcall FUN_00b61c30(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xad,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x39a] = param_1[0x39a] & 0xfdffffff;
  }
  return;
}

// 00B61CF0  FUN_00b61cf0  size=141  [between]
void __fastcall FUN_00b61cf0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xb3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x39a] = param_1[0x39a] & 0xfeffffff;
  }
  return;
}

// 00B61DA0  FUN_00b61da0  size=392  [between]
void __fastcall FUN_00b61da0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00b61f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B61F50  FUN_00b61f50  size=168  [between]
void __fastcall FUN_00b61f50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  param_1[0x39a] = param_1[0x39a] | 0xa0000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x170,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(0);
                    /* WARNING: Could not recover jumptable at 0x00b61ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B62010  FUN_00b62010  size=255  [between]
void __fastcall FUN_00b62010(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x40000;
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
                    /* WARNING: Could not recover jumptable at 0x00b6210b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B62140  FUN_00b62140  size=92  [between]
void __fastcall FUN_00b62140(int param_1)

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

// 00B621D0  FUN_00b621d0  size=306  [between]
void __fastcall FUN_00b621d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20800000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xe50) = 0;
    switch(*(undefined4 *)(param_1 + 0xdc0)) {
    case 8:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 7:
      uVar1 = 0xe0;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 9:
      uVar1 = 0xd1;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xb:
      uVar1 = 0xf9;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xd:
      uVar1 = 0xec;
      break;
    case 0xf:
      uVar1 = 0xf2;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,*(undefined4 *)(param_1 + 0xe50),0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00b622b6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b622b6:
  iVar2 = FUN_00c158c0();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xe54) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xe54) + 0xbb0) = 1;
    }
    if (*(int *)(param_1 + 0xe58) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xe58) + 0xbb0) = 1;
    }
    FUN_00c272a0(0x40a00000);
  }
  return;
}

// 00B62330  FUN_00b62330  size=331  [between]
void __fastcall FUN_00b62330(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x39a] = param_1[0x39a] | 0x20800000;
  if (param_1[0x187] == 0) {
    uVar1 = 0;
    param_1[0x394] = 0;
    switch(param_1[0x370]) {
    case 8:
      param_1[0x394] = 0x40;
    case 7:
      uVar1 = 0xdf;
      break;
    case 10:
      param_1[0x394] = 0x40;
    case 9:
      uVar1 = 0xd0;
      break;
    case 0xc:
      param_1[0x394] = 0x40;
    case 0xb:
      uVar1 = 0xfb;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,param_1[0x394],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b623f4;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b623f4:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c0efa35,0);
  }
  iVar2 = FUN_00c158c0();
  if (iVar2 != 0) {
    if (param_1[0x395] != 0) {
      *(undefined4 *)(param_1[0x395] + 0xbb0) = 1;
    }
    if (param_1[0x396] != 0) {
      *(undefined4 *)(param_1[0x396] + 0xbb0) = 1;
    }
    FUN_00c272a0(0x40a00000);
  }
  return;
}

// 00B624E0  FUN_00b624e0  size=260  [between]
void __fastcall FUN_00b624e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000000;
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x824) = 1;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_00b625d1;
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0xe50) = 0;
  switch(*(undefined4 *)(param_1 + 0xdc0)) {
  case 8:
    *(undefined4 *)(param_1 + 0xe50) = 0x40;
  case 7:
    uVar2 = 0xe0;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0xe50) = 0x40;
  case 9:
    uVar2 = 0xd1;
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0xe50) = 0x40;
  case 0xb:
    uVar2 = 0xf9;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0xe50) = 0x40;
  case 0xd:
    uVar2 = 0xec;
    break;
  case 0xf:
    uVar2 = 0xf2;
  }
  FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,*(undefined4 *)(param_1 + 0xe50),0xbf800000,0x3f800000)
  ;
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0x940) = 0;
LAB_00b625d1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B62610  Em0030::vf158  size=108  [class]
undefined4 Em0030::vf158(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x30001) {
      return 1;
    }
  }
  else if (param_1 == 0x32) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0xa0002) {
      return 1;
    }
  }
  else if (param_1 == 0x2d) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0xa0000) {
      return 1;
    }
  }
  else if (param_1 == 0x31) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0xa0001) {
      return 1;
    }
  }
  return 0;
}

// 00B62680  Em0030::vf15C  size=33  [class]
void Em0030::vf15C(undefined4 param_1,undefined4 param_2)

{
  BehaviorAppBase::vf15C(param_1,param_2);
  FUN_00a93090(6);
  return;
}

// 00B626B0  FUN_00b626b0  size=140  [between]
void __thiscall FUN_00b626b0(int param_1,int param_2)

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

// 00B62770  FUN_00b62770  size=176  [between]
undefined4 __thiscall FUN_00b62770(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 < 0x50001) {
    if (param_2 == 0x50000) {
      if (*(float *)(param_1 + 0xa9c) <= 0.0) {
        return 0;
      }
      return 1;
    }
    if ((param_2 != 0x30000) && (param_2 != 0x40000)) {
      return 0;
    }
    goto switchD_00b627d5_caseD_50001;
  }
  switch(param_2) {
  case 0x50002:
  case 0x50005:
    if (*(float *)(param_1 + 0xa9c) < 0.0) {
      return 1;
    }
    break;
  case 0x5000b:
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x50000) {
      if (iVar1 != 0x50002) {
        return 0;
      }
      if ((*(uint *)(param_1 + 0xdc8) & 0x80000000) != 0) {
        return 0;
      }
      return 1;
    }
  case 0x50001:
  case 0x50003:
  case 0x50004:
switchD_00b627d5_caseD_50001:
    if ((*(uint *)(param_1 + 0xdc8) & 0x80000000) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// 00B62870  Em0030::vf20  size=49  [class]
void __fastcall Em0030::vf20(int param_1)

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

// 00B628B0  Em0030::vf1C  size=49  [class]
void __fastcall Em0030::vf1C(int param_1)

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

// 00B62900  Em0030::vf110  size=165  [class]
void __thiscall Em0030::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0xe6c) = *(uint *)(param_1 + 0xe6c) | 0x20000;
    return;
  }
  *(uint *)(param_1 + 0xe6c) = *(uint *)(param_1 + 0xe6c) & 0xfffdffff;
  return;
}

// 00B629F0  FUN_00b629f0  size=31  [callgraph]
bool __fastcall FUN_00b629f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4d60(1);
  if (iVar1 != 0) {
    return false;
  }
  return *(int *)(param_1 + 0x17fc) == 0;
}

// 00B62A10  FUN_00b62a10  size=39  [callgraph]
bool __fastcall FUN_00b62a10(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_00ac4d60(1);
  if (iVar1 != 0) {
    return false;
  }
  bVar2 = false;
  if (*(int *)(param_1 + 0x17fc) == 0) {
    bVar2 = *(int *)(param_1 + 0x1810) != 0;
  }
  return bVar2;
}

// 00B62A40  FUN_00b62a40  size=51  [callgraph]
bool __fastcall FUN_00b62a40(int param_1)

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
  return *(int *)(param_1 + 0x17fc) == 0;
}

// 00B62A80  FUN_00b62a80  size=67  [callgraph]
undefined4 __fastcall FUN_00b62a80(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xe68) & 0x100) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 00B62AD0  FUN_00b62ad0  size=66  [callgraph]
undefined4 __thiscall FUN_00b62ad0(int param_1,float *param_2)

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

// 00B62B20  FUN_00b62b20  size=34  [callgraph]
void __thiscall FUN_00b62b20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(3,param_2,param_3);
  }
  return;
}

// 00B62B50  FUN_00b62b50  size=25  [callgraph]
uint __fastcall FUN_00b62b50(int param_1)

{
  if ((*(uint *)(param_1 + 0xe68) & 0x10000) != 0) {
    return 0;
  }
  return ~(*(uint *)(param_1 + 0xe68) >> 0x1a) & 1;
}

// 00B62B70  FUN_00b62b70  size=39  [callgraph]
bool __fastcall FUN_00b62b70(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x39a] & 0x10000U) == 0) && ((param_1[0x39a] & 0x4000000U) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    return iVar1 == 0;
  }
  return false;
}

// 00B62D20  Em0030::vf1C0  size=5  [class]
void __thiscall Em0030::vf1C0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined *puVar8;
  
  piVar5 = param_2;
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    param_2 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  piVar5 = param_3;
  if (param_3 != (int *)0x0) {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
  }
  uVar3 = FUN_009f8b40();
  FUN_009f8ae0(uVar3);
  if (uVar6 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    FUN_00a7c960(&param_2);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  uVar1 = param_1[300];
  if (uVar1 < 0x20141) {
    if (uVar1 != 0x20140) {
      switch(uVar1) {
      case 0x20010:
      case 0x20050:
        goto switchD_00ace80d_caseD_20010;
      case 0x20030:
      case 0x20033:
      case 0x20035:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2003f,0x20030);
        break;
      case 0x20071:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20070);
        break;
      case 0x20081:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20080);
      }
      goto switchD_00ace80d_caseD_20011;
    }
switchD_00ace80d_caseD_20010:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20012,0x20010);
    FUN_00a92f90();
    iVar2 = 0x2014f;
  }
  else {
    switch(uVar1) {
    case 0x20142:
    case 0x20144:
    case 0x20160:
      goto switchD_00ace80d_caseD_20010;
    default:
      goto switchD_00ace80d_caseD_20011;
    case 0x20150:
    case 0x20152:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      FUN_00a92f90();
      iVar2 = 0x2015f;
      break;
    case 0x20170:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      iVar2 = param_1[300];
      FUN_00a92f90();
    }
  }
  FUN_00e27330(iVar2,0x20010);
switchD_00ace80d_caseD_20011:
  iVar2 = 0;
  iVar4 = FUN_00ac89d0();
  if (iVar4 == 0) {
    iVar4 = param_1[0xcc];
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x330);
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xcc);
  }
  param_1[0x295] = iVar2;
  if ((unaff_retaddr != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9c78;
    (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      iVar2 = *param_1;
      param_1[0x139] = piVar5[0x139];
      uVar3 = (**(code **)(*piVar5 + 0x1d8))();
      (**(code **)(iVar2 + 0x1d4))(uVar3);
      if ((piVar5[0x351] & 0x80000000U) != 0) {
        uVar7 = 0;
        uVar3 = FUN_00a82d50(0);
        FUN_00a88b50(uVar3,uVar7);
      }
      FUN_0040ac60(piVar5 + 0x2ac);
      *(short *)(param_1 + 0x36b) = (short)piVar5[0x36b];
      param_1[0x36c] = piVar5[0x36c];
      *(char *)(param_1 + 0x36d) = (char)piVar5[0x36d];
      param_1[0x28c] = piVar5[0x28c];
      param_1[0x28d] = piVar5[0x28d];
      param_1[0x28e] = piVar5[0x28e];
      param_1[0x28f] = piVar5[0x28f];
      param_1[0x290] = piVar5[0x290];
      *(char *)(param_1 + 0x291) = (char)piVar5[0x291];
      param_1[0x292] = piVar5[0x292];
      param_1[0x12a] = piVar5[0x12a];
      param_1[0x296] = piVar5[0x296];
    }
  }
  (**(code **)(*param_1 + 0x334))(uVar6,unaff_retaddr);
  return;
}

// 00B62D30  Em0030::vf294  size=1  [class]
void Em0030::vf294(void)

{
  return;
}

// 00B62D40  Em0030::vf298  size=1  [class]
void Em0030::vf298(void)

{
  return;
}

// 00B62D50  Em0030::vf29C  size=1  [class]
void Em0030::vf29C(void)

{
  return;
}

// 00B62D60  Em0030::vf2A8  size=1  [class]
void Em0030::vf2A8(void)

{
  return;
}

// 00B62D70  Em0030::vf2AC  size=1  [class]
void Em0030::vf2AC(void)

{
  return;
}

// 00B62D80  Em0030::vf2B0  size=1  [class]
void Em0030::vf2B0(void)

{
  return;
}

// 00B62D90  Em0030::vf2B4  size=1  [class]
void Em0030::vf2B4(void)

{
  return;
}

// 00B62DA0  Em0030::vf2B8  size=1  [class]
void Em0030::vf2B8(void)

{
  return;
}

// 00B62DB0  Em0030::vf2BC  size=1  [class]
void Em0030::vf2BC(void)

{
  return;
}

// 00B62DC0  Em0030::vf2C0  size=1  [class]
void Em0030::vf2C0(void)

{
  return;
}

// 00B62DD0  Em0030::vf2C4  size=1  [class]
void Em0030::vf2C4(void)

{
  return;
}

// 00B62DE0  Em0030::vf2C8  size=1  [class]
void Em0030::vf2C8(void)

{
  return;
}

// 00B62DF0  Em0030::vf2CC  size=1  [class]
void Em0030::vf2CC(void)

{
  return;
}

// 00B62E00  Em0030::vf2D0  size=1  [class]
void Em0030::vf2D0(void)

{
  return;
}

// 00B62E10  Em0030::vf2D4  size=11  [class]
bool Em0030::vf2D4(void)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  return iVar1 == 0;
}

// 00B62E20  FUN_00b62e20  size=42  [between]
uint FUN_00b62e20(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9d54;
  (**(code **)(*param_1 + 4))(&DAT_01be9d54);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B62E50  FUN_00b62e50  size=42  [between]
uint FUN_00b62e50(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9d50;
  (**(code **)(*param_1 + 4))(&DAT_01be9d50);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B62EB0  FUN_00b62eb0  size=665  [between]
void __fastcall FUN_00b62eb0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(8,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x44160000;
    param_1[0x635] = 1;
    param_1[0x250] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b62f8d;
  case 3:
LAB_00b62f8d:
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 9 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_00b62eca_default;
  case 4:
    FUN_00aa4080(10,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b62ffc;
  case 5:
LAB_00b62ffc:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto LAB_00b62f3c;
  default:
    goto switchD_00b62eca_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_00b62f3c:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00b62eca_default:
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
      if (param_1[0x250] != 2) goto LAB_00b63111;
      param_1[0x23c] = (int)((float)param_1[0x23c] + 1.5707964);
      param_1[0x23d] = (int)((float)param_1[0x23d] + 1.5707964);
      param_1[0x23e] = (int)((float)param_1[0x23e] + 1.5707964);
      fVar1 = (float)param_1[0x23f] + 1.5707964;
    }
    param_1[0x23f] = (int)fVar1;
  }
LAB_00b63111:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 00B63170  FUN_00b63170  size=369  [between]
void __fastcall FUN_00b63170(int *param_1)

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

// 00B632F0  FUN_00b632f0  size=113  [between]
void __fastcall FUN_00b632f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*piVar2 + 0x158))(0,param_1[0x13c]);
        if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b6334e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b6335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B63370  FUN_00b63370  size=192  [between]
void __fastcall FUN_00b63370(int *param_1)

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
      param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
      return;
    }
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  return;
}

// 00B63440  Em0030::vf1B0  size=133  [class]
undefined4 __thiscall Em0030::vf1B0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if ((param_2 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0xe4) {
      uVar3 = FUN_00ac8660(0,0x1e);
      *(undefined4 *)(param_1 + 0x940) = uVar3;
    }
    else {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0xe2) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

// 00B634D0  Em0030::vf2F8  size=46  [class]
void __fastcall Em0030::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(3,0,0);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 00B63500  Em0030::vf130  size=837  [class]
undefined4 __thiscall Em0030::vf130(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_EBP;
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
  puVar1[3] = unaff_EBP;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  *puVar1 = (uint)*param_2;
  switch(*param_2) {
  case 4:
    *puVar1 = 0xbe;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  default:
    goto switchD_00b635e5_caseD_5;
  case 6:
    *puVar1 = 0xbf;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 8:
    *puVar1 = 0xc0;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3001;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 10:
    *puVar1 = 0xc1;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 0xc:
    *puVar1 = 0xc2;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    *(undefined1 *)((int)puVar1 + 0x11) = 3;
    return unaff_EBX;
  case 0xe:
    *puVar1 = 0xc3;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3002;
    return unaff_EBX;
  case 0x10:
    *puVar1 = 0xc4;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3001;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 0x12:
    *puVar1 = 0xc5;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    break;
  case 0x14:
    *puVar1 = 0xc6;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 0x15:
    *puVar1 = 199;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 0x17:
    *puVar1 = 0xc9;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
  }
  *(undefined2 *)(puVar1 + 0x21) = 0x3000;
  *(undefined1 *)((int)puVar1 + 0x11) = 7;
switchD_00b635e5_caseD_5:
  return unaff_EBX;
}

// 00B63890  FUN_00b63890  size=439  [between]
void __fastcall FUN_00b63890(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x5a,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x5b,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    goto LAB_00b6398b;
  case 3:
LAB_00b6398b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
    }
  default:
    goto switchD_00b638b7_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00b638b7_default:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B63A60  FUN_00b63a60  size=435  [between]
void __fastcall FUN_00b63a60(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(99,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
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
    FUN_00aa4080(100,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
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

// 00B63C30  FUN_00b63c30  size=435  [between]
void __fastcall FUN_00b63c30(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x76,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
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
    FUN_00aa4080(0x77,0,0x3c888889,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
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

// 00B63E00  FUN_00b63e00  size=583  [between]
void __fastcall FUN_00b63e00(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x67,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
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
    FUN_00aa4080(0x68,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  if (((((param_1[0x372] & 0x40000U) != 0) && (param_1[0x2a1] != 0)) &&
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

// 00B64060  FUN_00b64060  size=807  [between]
void __fastcall FUN_00b64060(int *param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x67,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x6a,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x19);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x358))((param_1[0x394] != 0) * '\x02' + '\x15',param_1 + 0x4f4);
    }
    goto LAB_00b64100;
  case 4:
    FUN_00aa4080(0x6b,0,0x3daaaaab,0x3f800000,param_1[0x394],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 5:
    if ((param_1[0x12a] & 0x200U) == 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      FUN_00c593a0(param_1[0x13c],0xffffffff,&local_20,0x40400000,0x3fc00000,0x27,6);
    }
    break;
  case 6:
    FUN_00aa4080(0x6c,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
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
      param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
    }
  default:
    goto switchD_00b64094_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b64100:
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00b64094_default:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B643B0  FUN_00b643b0  size=439  [between]
void __fastcall FUN_00b643b0(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6f,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
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
    FUN_00aa4080(0x70,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
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

// 00B64580  FUN_00b64580  size=724  [between]
void __fastcall FUN_00b64580(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x7a,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
    break;
  case 1:
  case 5:
    break;
  case 2:
    FUN_00aa4080(0x7b,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
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
    goto switchD_00b645ab_default;
  case 4:
    FUN_00aa4080(0x7d,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4080(0x7e,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto switchD_00b645ab_default;
  case 8:
    FUN_00aa4080(0x7c,0,0x3daaaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 7;
  default:
    goto switchD_00b645ab_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00b645ab_default:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B64880  FUN_00b64880  size=166  [between]
undefined4 __thiscall FUN_00b64880(int *param_1,int *param_2)

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

// 00B64930  FUN_00b64930  size=90  [between]
undefined4 __thiscall FUN_00b64930(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x56) && (*(char *)((int)param_2 + 0x11) == '\n')) {
    return 1;
  }
  if (((param_1[0x39b] & 0x40000U) == 0) && ((param_1[0x39a] & 0x4010000U) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 == 0) {
      FUN_00a8eeb0();
      FUN_00a8eea0();
    }
  }
  return 0;
}

// 00B64990  FUN_00b64990  size=109  [between]
void __thiscall FUN_00b64990(int param_1,int *param_2,undefined4 param_3,int *param_4)

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

// 00B64A00  FUN_00b64a00  size=296  [between]
void __fastcall FUN_00b64a00(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_00b64aea;
  }
  uVar3 = 0x9e;
  if ((param_1[0x372] & 0xffffU) == 5) {
    if ((param_1[0x39b] & 0x100U) != 0) {
      uVar3 = 0x9f;
    }
    param_1[0x39b] = param_1[0x39b] ^ 0x100;
  }
  if ((param_1[0x372] & 0xffffU) == 3) {
    uVar1 = 0x80;
    uVar3 = 0xa0;
    if ((*(byte *)(param_1 + 0x39b) & 0x80) != 0) {
      uVar3 = 0xa1;
    }
LAB_00b64a8e:
    param_1[0x39b] = param_1[0x39b] ^ uVar1;
  }
  else if ((param_1[0x372] & 0xffffU) == 4) {
    uVar1 = 0x40;
    uVar3 = 0xa2;
    if ((*(byte *)(param_1 + 0x39b) & 0x40) != 0) {
      uVar3 = 0xa3;
    }
    goto LAB_00b64a8e;
  }
  FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x42f00000;
  FUN_0043f5b0(9,0x41200000);
LAB_00b64aea:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
  }
  return;
}

// 00B64B30  FUN_00b64b30  size=212  [between]
void __fastcall FUN_00b64b30(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar1 = param_1[0x372] & 0xffff;
    uVar3 = 0xa6;
    if (uVar1 == 2) {
      uVar3 = 0xa7;
    }
    if (uVar1 == 3) {
      uVar3 = 0xa9;
    }
    if (uVar1 == 4) {
      uVar3 = 0xa8;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0043f5b0(9,0x41200000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
  }
  return;
}

// 00B64C10  FUN_00b64c10  size=332  [between]
void __fastcall FUN_00b64c10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_4;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  param_1[0x139] = 1;
  if (param_1[0x187] == 0) {
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
      *(undefined4 *)param_1[0xdc] = 1;
    }
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x1af] = 1;
    param_1[0x362] = 1;
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(3,3,1);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar5 = (float10)FUN_00ac8f80();
  fVar5 = fVar5 - (float10)0.011111111;
  local_4 = (float)fVar5;
  if (fVar5 < (float10)0) {
    local_4 = (float)(float10)0;
    (**(code **)(*param_1 + 0x20))();
    FUN_009fdde0();
    fVar5 = (float10)local_4;
  }
  FUN_00ac8fd0((float)fVar5);
  param_1 = param_1 + 0x395;
  iVar4 = 2;
  do {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      iVar3 = 0;
      iVar2 = 0;
      if (0 < *(short *)(iVar1 + 0x324)) {
        do {
          *(float *)(iVar3 + 0x1c + *(int *)(iVar1 + 800)) = local_4;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar2 < *(short *)(iVar1 + 0x324));
      }
    }
    param_1 = param_1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

// 00B64D60  Em0030::vf14C  size=136  [class]
undefined4 __thiscall Em0030::vf14C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((param_1[0x21c] < 1) || (param_1[0x139] != 0)) {
    return 0;
  }
  if ((param_2 == 0x34) || (param_2 == 0x35)) {
    return 1;
  }
  iVar1 = FUN_00ac4d60(1);
  if (iVar1 == 0) {
    if ((param_2 == 0x24) || (param_2 == 0x31)) {
      iVar1 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar1 == 0) {
        return 1;
      }
    }
    else {
      if (param_2 == 0x32) {
        return 1;
      }
      if (param_2 == 0x33) {
        return 1;
      }
      if (param_2 == 0x36) {
        return 1;
      }
    }
  }
  return 0;
}

// 00B64DF0  FUN_00b64df0  size=1643  [between]
void __fastcall FUN_00b64df0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01be9d50;
    (**(code **)(*piVar4 + 4))(&DAT_01be9d50);
    iVar5 = FUN_00dd6d80(puVar7);
    if ((iVar5 != 0) && (iVar5 = (**(code **)(*piVar4 + 0x158))(0x2d,0), iVar5 == 0)) {
      if (param_1[0x187] == 3) {
        FUN_00b7d640(0x2000);
      }
      switch(param_1[0x187]) {
      case 0:
        FUN_00b8a620();
        FUN_00b7aa80();
        FUN_00ac4c70(1);
        FUN_00aa4520(300,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        FUN_00b94790(0x3f800000,0x3f800000);
        param_1[0x2dd] = 0;
        FUN_00b80920(iVar3,0x40400000,0x3f000000,0x3e99999a,1);
        switchD_0080dbae::default();
        FUN_00a8ce90(aiStack_30,auStack_20);
        fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
        piVar4[0x25] = (int)(float)fVar6;
        D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
        fVar1 = (float)param_1[0x11];
        fVar2 = (float)param_1[0x12];
        piVar4[0x14] = (int)((float)param_1[0x10] + unaff_ESI);
        piVar4[0x15] = (int)(fVar1 + unaff_EBX);
        piVar4[0x16] = (int)(fVar2 + fStack_34);
        piVar4[0x17] = aiStack_30[0];
        return;
      case 1:
        uVar8 = 0;
        FUN_00a92f90(0);
        FUN_00404b90(uVar8);
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar3 = FUN_00a94ce0(0);
        if (iVar3 == 0) {
          return;
        }
        param_1[0x187] = param_1[0x187] + 1;
        return;
      case 2:
        FUN_00a9f4c0("RushBlock",0,0,0);
        FUN_00ac4c70(1);
        FUN_00a9f650(iVar3,0xffffffff,0,0,0,0,0x12e,0,0);
        FUN_00a9f650(iVar3,0xffffffff,0,0,1,0,0x12d,0,0);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x3f800000;
        param_1[0x250] = 100;
        param_1[0x251] = 2;
        param_1[0x252] = 0x168;
      case 3:
        uVar8 = 0;
        FUN_00a92f90(0);
        FUN_00404b90(uVar8);
        if ((float)param_1[0xd0f] < 1.0) {
          param_1[0x248] =
               (int)(((float)param_1[0x250] * 0.0025 - (float)param_1[0x248]) * 1.3 * 0.1 +
                    (float)param_1[0x248]);
          fStack_34 = (float)param_1[0x250] * 0.0025;
          if (0.0 <= fStack_34) {
            if (1.0 < fStack_34) {
              fStack_34 = 1.0;
            }
          }
          else {
            fStack_34 = 0.0;
          }
          FUN_00a947e0(0,0,fStack_34,0);
          param_1[0x24f] = (int)fStack_34;
          param_1[0x250] = param_1[0x250] - param_1[0x251];
          if ((param_1[0x33f] & param_1[0x398]) != 0) {
            param_1[0x250] = param_1[0x250] + 0x1e;
          }
          iVar3 = param_1[0x252];
          param_1[0x252] = iVar3 + -1;
          if (iVar3 == 0) {
            param_1[0x252] = 0x5a;
            param_1[0x251] = param_1[0x251] + 1;
          }
        }
        if (param_1[0x250] < 0) {
          param_1[0x250] = 0;
          param_1[0x187] = 6;
          FUN_00a8cb60(6);
        }
        if (400 < param_1[0x250]) {
          param_1[0x250] = 400;
          param_1[0x187] = 4;
          FUN_00a8cb60(4);
        }
        param_1[0x24e] = (int)((float)param_1[0x248] + 1.0);
        if (1.7 < (float)param_1[0x248] + 1.0) {
          param_1[0x24e] = 0x3fd9999a;
        }
        FUN_00a96030(0,param_1[0x24e]);
        BehaviorAppBase::thunk_vf64();
        return;
      case 4:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x12f,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
      case 5:
        uVar8 = 0;
        FUN_00a92f90(0);
        FUN_00404b90(uVar8);
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar3 = FUN_00a94ce0(0);
        if (iVar3 == 0) {
          return;
        }
        FUN_00dc1270(0x41700000,0);
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
        }
        FUN_00a7c950();
        FUN_00ba6810(1,1);
        (**(code **)(*param_1 + 0x388))(0);
        return;
      case 6:
        goto switchD_00b64e7d_caseD_6;
      case 7:
        goto switchD_00b64e7d_caseD_7;
      default:
        return;
      }
    }
  }
  FUN_00dc1270(0x41700000,0);
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  FUN_00a7c950();
  FUN_00ba6810(1,1);
  (**(code **)(*param_1 + 0x388))(0);
  return;
switchD_00b64e7d_caseD_6:
  FUN_00ac4c70(1);
  FUN_00aa4520(0x130,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_00ac4c70(0);
  param_1[0x187] = param_1[0x187] + 1;
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
switchD_00b64e7d_caseD_7:
  uVar8 = 0;
  FUN_00a92f90(0);
  FUN_00404b90(uVar8);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  FUN_00dc1270(0x41700000,0);
  uVar8 = FUN_00ac8520(0xe);
  (**(code **)(*param_1 + 0x30c))(uVar8,0);
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  FUN_00a7c950();
  FUN_00ba6810(1,1);
  iVar3 = FUN_00b7c970();
  if (iVar3 < 1) {
    FUN_00a8caf0(0xdb,0,0,0);
    return;
  }
  FUN_00a8caf0(0xcd,0,0,0);
  return;
}

// 00B65480  FUN_00b65480  size=1341  [between]
void __fastcall FUN_00b65480(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar6 = &DAT_01be9d50;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d50);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 != 0) {
      FUN_00a92fb0();
      fVar5 = (float10)FUN_00e049b0();
      param_1[0x244] = (int)(float)fVar5;
      switch(param_1[0x187]) {
      case 0:
        param_1[0x24f] = 0;
        FUN_00a9f4c0("HeadAttack",0,0x8000000,0);
        FUN_00ac4c70(1);
        FUN_00a9f650(iVar1,0xffffffff,0,0,0,0,0x169,0,0x8000000);
        FUN_00a9f650(iVar1,0xffffffff,0,0,1,0,0x16d,0,0x8000000);
        FUN_00ac4c70(0);
        FUN_00a95fb0(0);
        iVar3 = FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
        }
        param_1[0x187] = param_1[0x187] + 1;
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        FUN_00b94790(0x3f800000,0x3f800000);
        param_1[0x2dd] = 0;
        FUN_00b80920(iVar1,0x40400000,0x3dcccccd,0x3e99999a,1);
        return;
      case 1:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar1 = FUN_00a8c760(0xb);
        if (iVar1 != 0) {
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x2ee] = 0x437e0000;
          param_1[599] = 0;
          param_1[0x256] = 0;
          param_1[0x2ef] = 0x2000;
          return;
        }
        break;
      case 2:
        iVar1 = FUN_00a8c760(0x16);
        if (iVar1 != 0) {
          param_1[0x24f] = 0;
          FUN_004168f0(5);
          iVar1 = FUN_00a92f90();
          iVar3 = FUN_00e26e90();
          if (iVar3 != 0) {
            *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffff7;
          }
        }
        iVar1 = FUN_00a8c760(0xb);
        if ((iVar1 != 0) && (param_1[599] != 0)) {
          param_1[0x24f] = 0x3f800000;
          DAT_01bea060 = DAT_01bea060 | 0x4000000;
          iVar1 = FUN_00a92f90();
          iVar3 = FUN_00e26e90();
          if (iVar3 != 0) {
            *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 8;
          }
          (**(code **)(*piVar2 + 0x30c))(param_1[599],0);
          iVar1 = FUN_00a8eea0();
          if (iVar1 < 1) {
            piVar2[0x139] = 1;
          }
          FUN_00ac4160();
          param_1[0x256] = param_1[0x256] + param_1[599];
          param_1[599] = 0;
          DAT_018b56b4 = 1;
        }
        FUN_00a947e0(0,0,param_1[0x24f],0);
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        FUN_00b94790(0x3f800000,0x3f800000);
        if ((*(byte *)(param_1 + 0x33f) & 0x80) != 0) {
          param_1[599] = param_1[599] + 1;
        }
        iVar1 = FUN_00a94d60("HeadAttack");
        if ((iVar1 != 0) && (param_1[0x187] = param_1[0x187] + 1, piVar2[0x139] != 0)) {
          param_1[0x187] = 4;
          return;
        }
        break;
      case 3:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x16b,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = 5;
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        FUN_00b94790(0x3f800000,0x3f800000);
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
          return;
        }
        break;
      case 4:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x16c,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
        }
        param_1[0x187] = param_1[0x187] + 1;
      case 5:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 != 0) {
          if (param_1[0x1d9] != 0) {
            FUN_008e6d00();
          }
          FUN_00dc1270(0x41700000,0);
          FUN_00aa4080(0x75,0,0,0x3f800000,0,0xbf800000,0x3f800000);
          param_1[0x24a] = 0;
          FUN_00b88d70();
          FUN_00ba6810(1,1);
          FUN_00a8caf0(0xb,1,0,0);
        }
      }
      return;
    }
  }
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  FUN_00dc1270(0x41700000,0);
  FUN_00a7c950();
  FUN_00ba6810(1,1);
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B659E0  FUN_00b659e0  size=797  [between]
void __fastcall FUN_00b659e0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar6 = &DAT_01be9d50;
    (**(code **)(*piVar3 + 4))(&DAT_01be9d50);
    iVar4 = FUN_00dd6d80(puVar6);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*piVar3 + 0x158))(0x32,0), iVar4 == 0)) {
      iVar4 = FUN_00a8c760(0x16);
      if (iVar4 == 0) {
        FUN_00a8ce90(&fStack_30,auStack_20);
        fVar5 = (float10)FUN_00ddba30((float)piVar3[0x25] + fStack_1c);
        param_1[0x25] = (int)(float)fVar5;
        D3DXVec3TransformNormal(&fStack_30,&fStack_30,piVar3 + 4);
        fVar8 = (float)piVar3[0x11];
        fVar1 = (float)piVar3[0x12];
        param_1[0x14] = (int)((float)piVar3[0x10] + fStack_30);
        param_1[0x15] = (int)(fVar8 + fStack_2c);
        param_1[0x16] = (int)(fVar1 + fStack_28);
        param_1[0x17] = iStack_24;
      }
      FUN_00a92fb0();
      fVar5 = (float10)FUN_00e049b0();
      param_1[0x244] = (int)(float)fVar5;
      switch(param_1[0x187]) {
      case 0:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x185,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        FUN_00b94790(0x3f800000,0x3f800000);
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        param_1[0x2dd] = 0;
        FUN_00b80920(iVar2,0x40400000,0x3dcccccd,0x3e99999a,1);
        return;
      case 1:
      case 3:
      case 5:
      case 7:
        goto switchD_00b65ade_caseD_1;
      case 2:
        FUN_00ac4c70(1);
        uVar7 = 0x187;
        break;
      case 4:
        FUN_00ac4c70(1);
        uVar7 = 0x188;
        break;
      case 6:
        FUN_00ac4c70(1);
        uVar7 = 0x189;
        break;
      default:
        goto switchD_00b65ade_default;
      }
      FUN_00aa4520(uVar7,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac4c70(0);
      param_1[0x187] = param_1[0x187] + 1;
switchD_00b65ade_caseD_1:
      uVar7 = 0;
      FUN_00a92f90(0);
      FUN_00404b90(uVar7);
      uVar7 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar7);
      fVar8 = (float)fVar5;
      uVar7 = 0;
      FUN_00a92f90(0,fVar8);
      FUN_004b4c60(uVar7,fVar8);
      FUN_00b94790(0x3f800000,0x3f800000);
      return;
    }
  }
  FUN_00dc1270(0x41700000,0);
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  FUN_00a7c950();
  FUN_00ba6810(1,1);
  (**(code **)(*param_1 + 0x388))(0);
switchD_00b65ade_default:
  return;
}

// 00B66210  FUN_00b66210  size=1047  [between]
void __fastcall FUN_00b66210(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar6 = &DAT_01be9d50;
    (**(code **)(*piVar3 + 4))(&DAT_01be9d50);
    iVar4 = FUN_00dd6d80(puVar6);
    if (iVar4 != 0) {
      FUN_00a92fb0();
      fVar5 = (float10)FUN_00e049b0();
      param_1[0x244] = (int)(float)fVar5;
      switch(param_1[0x187]) {
      case 0:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x19a,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        param_1[0x2dd] = 0;
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        param_1[0x250] = 0;
        FUN_00b7dbe0(0xd);
        FUN_00b94790(0x3f800000,0x3f800000);
        FUN_00b80920(iVar2,0x40400000,0x3dcccccd,0x3e99999a,1);
        piVar3 = (int *)FUN_00c209f0();
        (**(code **)(*piVar3 + 0x14))(0x10);
        return;
      case 1:
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar4 = FUN_00a94ce0(0);
        if (iVar4 != 0) {
          param_1[0x187] = param_1[0x187] + 1;
        }
        iVar4 = FUN_00a8c760(0x20);
        if ((iVar4 != 0) && (param_1[0x250] == 0)) {
          param_1[0x1029] = param_1[0x102a];
          param_1[0x250] = 1;
          FUN_00b89db0(0,0x3dcccccd);
        }
        uVar7 = 0;
        if ((float)param_1[0x1029] <= 0.0) {
          param_1[0x1029] = -0x40800000;
        }
        else {
          uVar7 = 0x40a00000;
        }
        FUN_00b7ab30(uVar7);
        if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
          fVar1 = (float)param_1[0x1029] - 1.0;
          param_1[0x1029] = (int)fVar1;
          if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
              ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
             ((param_1[0x33e] & param_1[0x394]) != 0)) {
            uVar7 = 0;
            FUN_00a92f90(0);
            fVar5 = (float10)FUN_00407b40(uVar7);
            param_1[0x24f] = (int)(float)fVar5;
            FUN_00b89c20(0xb,0,0xd,iVar2,0x43340000,0x41f00000,0x41f00000,0);
            DAT_01dc08d4 = 0;
            DAT_01dc08d8 = 1;
            iVar2 = FUN_00a7c8a0();
            if (iVar2 != 0) {
              FUN_00a8cb60(5);
            }
            param_1[0x1029] = -0x40800000;
            return;
          }
        }
        break;
      case 2:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x193,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
      case 3:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          if (param_1[0x1d9] != 0) {
            FUN_008e6d00();
          }
          FUN_00dc1270(0x41700000,0);
          FUN_00aa4080(0x75,0,0,0x3f800000,0,0xbf800000,0x3f800000);
          param_1[0x24a] = 0;
          FUN_00b88d70();
          FUN_00ba6810(1,1);
          FUN_00a8caf0(0xb,1,0,0);
          return;
        }
      }
      return;
    }
  }
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  FUN_00dc1270(0x41700000,0);
  FUN_00a7c950();
  FUN_00ba6810(1,1);
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B66640  FUN_00b66640  size=1066  [between]
void __fastcall FUN_00b66640(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar6 = &DAT_01be9d50;
    (**(code **)(*piVar3 + 4))(&DAT_01be9d50);
    iVar4 = FUN_00dd6d80(puVar6);
    if (iVar4 != 0) {
      switch(param_1[0x187]) {
      case 0:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x1a1,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        param_1[0x2dd] = 0;
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        FUN_00b94790(0x3f800000,0x3f800000);
        FUN_00b80920(iVar2,0x40400000,0x3dcccccd,0x3e99999a,1);
        return;
      case 2:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x1a2,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
      case 1:
      case 3:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          param_1[0x187] = param_1[0x187] + 1;
          return;
        }
        break;
      case 4:
        FUN_00ac4c70(1);
        FUN_00aa4520(0x1a3,iVar2,0,0,0x3f800000,0x9000000,0xbf800000,0x3f800000);
        FUN_00ac4c70(0);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x250] = 0;
        uVar7 = FUN_00a95df0(0);
        FUN_00b7df20(0x4d3,uVar7);
      case 5:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e22f10(0);
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar4 = FUN_00a94ce0(0);
        if (iVar4 != 0) {
          FUN_00dc1270(0x41700000,0);
          if (param_1[0x1d9] != 0) {
            FUN_008e6d00();
          }
          FUN_00a7c950();
          FUN_00ba6810(1,1);
          (**(code **)(*param_1 + 0x388))(0);
        }
        iVar4 = FUN_00a8c760(0x20);
        if ((iVar4 != 0) && (param_1[0x250] == 0)) {
          param_1[0x1029] = param_1[0x102a];
          param_1[0x250] = 1;
          FUN_00b89db0(1,0x3dcccccd);
        }
        uVar7 = 0;
        if ((float)param_1[0x1029] <= 0.0) {
          param_1[0x1029] = -0x40800000;
        }
        else {
          uVar7 = 0x40a00000;
        }
        FUN_00b7ab30(uVar7);
        if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
          fVar1 = (float)param_1[0x1029] - 1.0;
          param_1[0x1029] = (int)fVar1;
          if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
              ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
             ((param_1[0x33e] & param_1[0x394]) != 0)) {
            uVar7 = 0;
            FUN_00a92f90(0);
            fVar5 = (float10)FUN_00407b40(uVar7);
            param_1[0x24f] = (int)(float)fVar5;
            FUN_00b89c20(0x10f,6,0xf,iVar2,0x43340000,0x41f00000,0x41f00000,0);
            DAT_01dc08d4 = 0;
            DAT_01dc08d8 = 1;
            param_1[0x1029] = -0x40800000;
            return;
          }
        }
      }
      return;
    }
  }
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  FUN_00dc1270(0x41700000,0);
  FUN_00a7c950();
  FUN_00ba6810(1,1);
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B66A90  FUN_00b66a90  size=130  [between]
void FUN_00b66a90(undefined4 param_1)

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

// 00B66B20  FUN_00b66b20  size=476  [between]
void __thiscall
FUN_00b66b20(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xffff0000;
  if ((param_1[0x39a] & 0x800U) != 0) {
    FUN_009f8b10();
  }
  if (param_1[0x51a] != 0) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  if (uVar3 != 0x80000) {
    iVar1 = FUN_00a8cab0();
    param_1[0x37b] = iVar1;
    iVar1 = FUN_00a8cac0();
    param_1[0x37c] = iVar1;
    param_1[0x37d] = param_1[0x372];
    iVar1 = FUN_00b62770(param_2);
    if (iVar1 != 0) {
      param_3 = param_3 | 0x80000000;
    }
    param_1[0x39a] = param_1[0x39a] & 0xebff17ff;
    if (param_1[0x395] != 0) {
      *(undefined4 *)(param_1[0x395] + 0xbb0) = 0;
      *(undefined4 *)(param_1[0x395] + 0xbac) = 1;
    }
    if (param_1[0x396] != 0) {
      *(undefined4 *)(param_1[0x396] + 0xbb0) = 0;
      *(undefined4 *)(param_1[0x396] + 0xbac) = 1;
    }
    if ((int)uVar3 < 0x50001) {
      if (uVar3 == 0x50000) {
        param_1[0x39a] = param_1[0x39a] | 0x28000000;
        FUN_00c27260(param_1[0x67f]);
      }
      else if (uVar3 == 0x10000) {
        param_1[0x39a] = param_1[0x39a] & 0xf7ffffff;
      }
      else if (uVar3 == 0x40000) {
        param_1[0x39a] = param_1[0x39a] | 0x8000000;
      }
    }
    else if (uVar3 == 0x70000) {
      param_1[0x39a] = param_1[0x39a] | 0x4000000;
    }
    else if (uVar3 == 0x90000) {
      param_1[0x39a] = param_1[0x39a] | 0x20000000;
    }
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  param_1[0x372] = param_3;
  if ((int)param_3 < 0) {
    FUN_00a962d0(1,0);
    param_1[0x394] = 0x40;
  }
  else {
    FUN_00a962d0(0,0);
    param_1[0x394] = 0;
  }
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 4;
    }
  }
  return;
}

// 00B66D00  Em0030::vf34C  size=42  [class]
void __fastcall Em0030::vf34C(int param_1)

{
  if ((*(uint *)(param_1 + 0xe68) & 0x8000000) != 0) {
    FUN_00b66b20(0x40000,0,0,0,0);
    return;
  }
  FUN_00b66b20(0x10000,0,0,0,0);
  return;
}

// 00B66D30  Em0030::vf350  size=42  [class]
void __fastcall Em0030::vf350(int param_1)

{
  if ((*(uint *)(param_1 + 0xe68) & 0x8000000) != 0) {
    FUN_00b66b20(0x40008,0,0,0,0);
    return;
  }
  FUN_00b66b20(0x1000a,0,0,0,0);
  return;
}

// 00B66D60  FUN_00b66d60  size=274  [between]
undefined4 __fastcall FUN_00b66d60(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0x182c,0,0,0,0,0,0,0);
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
  local_20 = "Em0030UsePath";
  local_60[0] = param_1 + 0x182c;
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

// 00B66E80  FUN_00b66e80  size=278  [between]
undefined4 __fastcall FUN_00b66e80(int param_1)

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
  
  uVar4 = FUN_00907640(param_1 + 0x1860,0,param_1 + 0x1850);
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
  pcStack_28 = "Em0030FloorCheck";
  uStack_44 = 0;
  fStack_40 = local_70;
  uStack_3c = 0x3e4ccccd;
  local_6c[0] = param_1 + 0x1860;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + fStack_74;
  FUN_0090fb00(local_6c);
  return uVar4;
}

// 00B66FA0  FUN_00b66fa0  size=501  [between]
/* WARNING: Removing unreachable block (ram,0x00b6700e) */

int __thiscall FUN_00b66fa0(int param_1,float *param_2,float *param_3,int param_4)

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
  
  local_84 = param_1 + 0x1980;
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
  local_1c = "Em0030JumpWallCheck";
  local_38 = local_68;
  local_34 = local_64;
  local_30 = 0x3e4ccccd;
  FUN_0090fb00(local_60);
  return iVar2;
}

// 00B671A0  FUN_00b671a0  size=591  [between]
/* WARNING: Removing unreachable block (ram,0x00b6723a) */

int __fastcall FUN_00b671a0(int param_1)

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
    local_84 = param_1 + 0x1800;
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
    local_1c = "Em0030AttackLine";
    local_34 = local_74;
    local_30 = 0x3dcccccd;
    FUN_0090fb00(local_60);
    return local_94;
  }
  return 0;
}

// 00B673F0  FUN_00b673f0  size=58  [between]
int FUN_00b673f0(undefined4 param_1)

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

// 00B67430  FUN_00b67430  size=313  [between]
void __thiscall FUN_00b67430(int param_1,undefined4 param_2)

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
  local_6c = (float)(param_1 + 0x1808);
  local_68 = 0;
  uStack_2c = 0;
  uStack_38 = iVar1 << 0x10 | 7;
  uStack_34 = 0x3ff001b;
  uStack_30 = 2;
  pcStack_28 = "Em0030Space";
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

// 00B67570  Em0030::vf360  size=123  [class]
void __fastcall Em0030::vf360(int param_1)

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

// 00B675F0  Em0030::vf268  size=233  [class]
undefined4 __thiscall
Em0030::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

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

// 00B67710  FUN_00b67710  size=226  [between]
void __fastcall FUN_00b67710(int *param_1)

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
    param_1[0x687] = iVar1;
    (**(code **)(*param_1 + 0x364))(0x20030);
  }
  (**(code **)(*param_1 + 0x20))();
  FUN_00c4d1a0(param_1[0x13c],0);
  return;
}

// 00B67800  Em0030::vf368  size=123  [class]
undefined4 __fastcall Em0030::vf368(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar2 = 0;
  if (iVar1 == 0x20030) {
    if ((*(uint *)(param_1 + 0xe68) & 0x40) != 0) {
      uVar2 = 2;
    }
    if ((*(uint *)(param_1 + 0xe68) & 0x20) != 0) {
      uVar2 = 1;
    }
  }
  if (iVar1 == 0x20033) {
    uVar2 = 3;
    if ((*(uint *)(param_1 + 0xe68) & 0x40) != 0) {
      uVar2 = 5;
    }
    if ((*(uint *)(param_1 + 0xe68) & 0x20) != 0) {
      uVar2 = 4;
    }
  }
  if (iVar1 == 0x20035) {
    uVar2 = 6;
    if ((*(uint *)(param_1 + 0xe68) & 0x40) != 0) {
      uVar2 = 8;
    }
    if ((*(uint *)(param_1 + 0xe68) & 0x20) != 0) {
      uVar2 = 7;
    }
  }
  return uVar2;
}

// 00B67880  FUN_00b67880  size=192  [between]
undefined4 __fastcall FUN_00b67880(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 == 0) && ((param_1[0x39a] & 0x4000000U) == 0)) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (((iVar1 == 0) && (0 < param_1[0x21c])) && (param_1[0x187] != 0)) {
      iVar1 = FUN_00a82e80();
      if (iVar1 == 0) {
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x40400000,0x3fc00000,0x40490fdb,
                     0x3f060a92,0x1003,0);
        return 1;
      }
    }
  }
  return 0;
}

// 00B67940  Em0030::vf13C  size=87  [class]
bool __fastcall Em0030::vf13C(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 == 0) && ((param_1[0x39a] & 0x4000000U) == 0)) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (((iVar1 == 0) && (0 < param_1[0x21c])) && (param_1[0x187] != 0)) {
      iVar1 = FUN_00a82e80();
      return iVar1 == 0;
    }
  }
  return false;
}

// 00B679A0  FUN_00b679a0  size=235  [callgraph]
undefined4 __fastcall FUN_00b679a0(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 == 0) && (param_1[0x139] == 0)) && ((DAT_01bea060 & 0x2000000) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (((iVar1 == 0) && (0 < param_1[0x21c])) && ((param_1[0x39a] & 0x40000U) != 0)) {
      iVar1 = FUN_00b62a40();
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4d60(2);
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        if (iVar1 != 0) {
          FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40600000,0x3fc00000,2,8);
          return 1;
        }
        FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40800000,0x3fc00000,0x28,8);
        return 1;
      }
    }
  }
  return 0;
}

// 00B67A90  FUN_00b67a90  size=700  [callgraph]
void __thiscall FUN_00b67a90(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_2 == 0) {
    if (((uint)param_1[0x39b] >> 0x15 & 1) != param_3) {
      FUN_00ac95a0("_EFD01",param_3);
      if (param_3 == 0) {
        param_1[0x39b] = param_1[0x39b] & 0xffdfffff;
      }
      else {
        param_1[0x39b] = param_1[0x39b] | 0x200000;
      }
      FUN_00ac8d80(0,param_3);
      FUN_00ac8d80(1,param_3);
      FUN_00ac8d80(4,param_3);
      FUN_00ac8d80(5,param_3);
      FUN_00ac8d80(6,param_3);
      if (param_3 != 0) {
        if (param_4 != 0) {
          (**(code **)(*param_1 + 0x358))(400,param_1 + 0x5a4);
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
            param_1[0x688] = iVar1;
          }
        }
        FUN_00eaa6e0(0x3f800000,0);
        (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x5d0);
      }
    }
  }
  else if (param_2 == 1) {
    if (((uint)param_1[0x39b] >> 0x13 & 1) != param_3) {
      FUN_00ac95a0("_EFD03",param_3);
      if (param_3 == 0) {
        param_1[0x39b] = param_1[0x39b] & 0xfff7ffff;
      }
      else {
        param_1[0x39b] = param_1[0x39b] | 0x80000;
      }
      FUN_00ac8d80(7,param_3);
      FUN_00ac8d80(8,param_3);
      if (param_3 != 0) {
        if (param_4 != 0) {
          (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x5a4);
        }
        if ((param_1[0x39b] & 0x300000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
          return;
        }
      }
    }
  }
  else if ((param_2 == 2) && (((uint)param_1[0x39b] >> 0x14 & 1) != param_3)) {
    FUN_00ac95a0("_EFD02",param_3);
    if (param_3 == 0) {
      param_1[0x39b] = param_1[0x39b] & 0xffefffff;
    }
    else {
      param_1[0x39b] = param_1[0x39b] | 0x100000;
    }
    FUN_00ac8d80(2,param_3);
    FUN_00ac8d80(3,param_3);
    if (param_3 != 0) {
      if (param_4 != 0) {
        (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x578);
      }
      if ((param_1[0x39b] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
        return;
      }
    }
  }
  return;
}

// 00B67D50  FUN_00b67d50  size=615  [callgraph]
void __fastcall FUN_00b67d50(int param_1)

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
  
  iVar3 = FUN_00a82e80();
  if ((iVar3 != 0) || (iVar3 = FUN_00a82e70(), iVar3 != 0)) {
    iVar3 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x1898) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x189c) = *(undefined4 *)(iVar3 + 0x4c);
  }
  local_20 = *(undefined4 *)(param_1 + 0x1890);
  local_1c = *(undefined4 *)(param_1 + 0x1894);
  local_18 = *(undefined4 *)(param_1 + 0x1898);
  local_14 = *(undefined4 *)(param_1 + 0x189c);
  *(undefined4 *)(param_1 + 0x18d0) = 0;
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000;
  iVar3 = FUN_00a979d0();
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x18d4) != 0)) {
    FUN_00a8d330(param_1 + 0x40,&local_20);
    *(undefined4 *)(param_1 + 0x18d4) = 0;
  }
  if (*(int *)(param_1 + 0x618) == 0x40002) {
    uVar2 = 0x40800000;
  }
  else {
    uVar2 = 0x3fc00000;
  }
  iVar3 = FUN_00aa09c0(&local_20,uVar2,0);
  if ((iVar3 != 0) && (iVar3 = FUN_00a8d380(), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x18d0) = 1;
  }
  if ((*(byte *)(param_1 + 0xe68) & 0x80) == 0) {
    iVar3 = FUN_00a979d0();
    if (iVar3 == 0) {
      iVar3 = FUN_00a8d400(*(int *)(param_1 + 0xa84) + 0x40);
      *(int *)(param_1 + 0x1834) = iVar3;
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x80;
      }
    }
  }
  else {
    iVar3 = FUN_00a8d400(*(int *)(param_1 + 0xa84) + 0x40);
    if (((*(int *)(param_1 + 0x1834) != 0) && (iVar3 != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x1834) + 0xc) != *(int *)(iVar3 + 0xc))) {
      *(undefined4 *)(param_1 + 0x18d4) = 1;
      *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) & 0xffffff7f;
    }
  }
  FUN_00a979f0(&local_2c);
  *(undefined4 *)(param_1 + 0x18e0) = local_2c;
  *(undefined4 *)(param_1 + 0x18e4) = local_28;
  *(undefined4 *)(param_1 + 0x18e8) = local_24;
  *(undefined4 *)(param_1 + 0x18ec) = 0x3f800000;
  if (*(int *)(param_1 + 0x17f4) == 0) {
    if (*(int *)(param_1 + 0x18d0) == 0) goto LAB_00b67f73;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1830);
    iVar4 = FUN_00a8d3d0(6);
    fVar1 = *(float *)(param_1 + 0xa8c);
    if ((!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) ||
       (*(int *)(param_1 + 0x18d0) == 0 && (iVar4 != 0 || iVar3 != 0))) {
LAB_00b67f73:
      local_20 = *(undefined4 *)(param_1 + 0x18e0);
      local_1c = *(undefined4 *)(param_1 + 0x18e4);
      local_18 = *(undefined4 *)(param_1 + 0x18e8);
      local_14 = *(undefined4 *)(param_1 + 0x18ec);
      *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000;
      goto LAB_00b67fa1;
    }
  }
  local_20 = *(undefined4 *)(param_1 + 0x1890);
  local_1c = *(undefined4 *)(param_1 + 0x1894);
  local_18 = *(undefined4 *)(param_1 + 0x1898);
  local_14 = *(undefined4 *)(param_1 + 0x189c);
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) & 0xfffdffff;
LAB_00b67fa1:
  FUN_00a8e880(&local_20);
  return;
}

// 00B67FC0  FUN_00b67fc0  size=159  [callgraph]
undefined4 __thiscall FUN_00b67fc0(int param_1,float param_2,float param_3)

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
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x17f4) == 0)) {
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

// 00B68060  FUN_00b68060  size=38  [callgraph]
bool __fastcall FUN_00b68060(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x4a8) & 0x80) == 0) {
    iVar1 = FUN_00ac4d60(1);
    if (iVar1 == 0) {
      return *(int *)(param_1 + 0x17fc) == 0;
    }
  }
  return false;
}

// 00B68090  FUN_00b68090  size=312  [callgraph]
undefined4 __fastcall FUN_00b68090(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xe68) & 0x100) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) & 0xfffffeff;
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x618) & 0xffff0000;
  if ((*(uint *)(param_1 + 0xe68) & 0x100) == 0) {
    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x100;
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
    if ((*(byte *)(param_1 + 0xe6a) & 1) != 0) {
      uVar2 = 0xb0004;
      goto LAB_00b6819a;
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
    if ((*(uint *)(param_1 + 0xe68) & 0x10000) != 0) {
      uVar3 = 1;
      uVar2 = 0xb0004;
      goto LAB_00b6819a;
    }
    uVar3 = 2;
  }
  uVar2 = 0x40007;
LAB_00b6819a:
  FUN_00b66b20(uVar2,0,uVar3,0,0);
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x4000000;
  return 1;
}

// 00B681D0  FUN_00b681d0  size=113  [callgraph]
void __thiscall FUN_00b681d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == param_2) {
      *(undefined4 *)(param_1 + 0xe54) = 0;
      FUN_00b66a90(0);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == param_2) {
      *(undefined4 *)(param_1 + 0xe58) = 0;
      FUN_00b66a90(1);
    }
  }
  return;
}

// 00B68250  FUN_00b68250  size=107  [callgraph]
int * FUN_00b68250(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a82090("Em0030Wire",0x3030b,0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01be9d54;
        (**(code **)(*piVar2 + 4))(&DAT_01be9d54);
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

// 00B688A0  Em0030::vf33C  size=2420  [class]
void __thiscall Em0030::vf33C(int param_1,uint *param_2,uint *param_3)

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
          if (*(int *)(param_1 + 0xdc0) == 7) {
            *param_2 = 0x12;
          }
          if (*(int *)(param_1 + 0xdc0) == 9) {
            *param_2 = 0x17;
          }
          if (*(int *)(param_1 + 0xdc0) == 10) {
            *param_2 = 0x17;
          }
          if (*(int *)(param_1 + 0x4e4) == 0) goto LAB_00b68c35;
          *param_2 = 3;
LAB_00b68c1d:
          if ((*(byte *)(param_1 + 0xe6a) & 1) != 0) {
            *param_2 = 0x1d;
            param_2[1] = *(uint *)(param_1 + 0xdc0);
          }
        }
        else {
          param_2[2] = 0x10000;
          if ((*(uint *)(param_1 + 0xe68) & 0x400000) == 0) {
            if ((*(uint *)(param_1 + 0xe68) & 0x200000) == 0) {
              uVar2 = FUN_00dde2a0(0,100);
              if ((uVar2 & 1) == 0) {
                *param_2 = 0xf;
                goto LAB_00b68cb2;
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
LAB_00b68cb2:
            param_2[2] = 0x10002;
          }
          if (*(int *)(param_1 + 0x4e4) == 0) goto LAB_00b68d04;
LAB_00b68cc2:
          if (*param_2 == 0xd) {
            *param_2 = 3;
            if ((*(byte *)(param_1 + 0xe6a) & 1) != 0) {
              *param_2 = 0x1d;
              param_2[1] = *(uint *)(param_1 + 0xdc0);
            }
          }
          else if (*param_2 == 0xf) {
            *param_2 = 4;
            goto LAB_00b68c1d;
          }
        }
LAB_00b68c35:
        if ((*(uint *)(param_1 + 0xe68) & 0x200) != 0) {
          *param_2 = 0x1c;
        }
        goto LAB_00b68c47;
      }
      iVar3 = FUN_0043f830(4);
      if ((iVar3 != 0) && (iVar3 = FUN_0043f830(2), iVar3 == 0)) {
        iVar3 = FUN_0043f860(3);
        if (iVar3 == 0) {
          *param_2 = 0xc;
          if (*(int *)(param_1 + 0xdc0) == 8) {
            *param_2 = 0x13;
          }
          if (*(int *)(param_1 + 0xdc0) == 10) {
            *param_2 = 0x17;
          }
          if (*(int *)(param_1 + 0xdc0) == 9) {
            *param_2 = 0x17;
          }
          if ((*(int *)(param_1 + 0x4e4) != 0) &&
             (*param_2 = 3, (*(byte *)(param_1 + 0xe6a) & 1) != 0)) {
            *param_2 = 0x1d;
            param_2[1] = *(uint *)(param_1 + 0xdc0);
          }
          if ((*(uint *)(param_1 + 0xe68) & 0x200) != 0) {
            *param_2 = 0x1c;
          }
          param_3[6] = *(uint *)(param_1 + 0x4b4);
          return;
        }
        param_2[2] = 0x10000;
        if ((*(uint *)(param_1 + 0xe68) & 0x400000) == 0) {
          if ((*(uint *)(param_1 + 0xe68) & 0x200000) == 0) {
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
        if (*(int *)(param_1 + 0x4e4) != 0) goto LAB_00b68cc2;
LAB_00b68d04:
        if (*(int *)(param_1 + 0xdc0) == 7) {
          *param_2 = 0x14;
        }
        if (*(int *)(param_1 + 0xdc0) == 8) {
          *param_2 = 0x15;
        }
        if (*(int *)(param_1 + 0xdc0) == 9) {
          *param_2 = 0x18;
        }
        if (*(int *)(param_1 + 0xdc0) == 10) {
          *param_2 = 0x19;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xb) {
          *param_2 = 0x1a;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xc) {
          *param_2 = 0x1b;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xd) {
          *param_2 = 0xd;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xe) {
          *param_2 = 0xe;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xf) {
          *param_2 = 0xf;
        }
        goto LAB_00b68c35;
      }
      iVar3 = FUN_0043f830(3);
      if ((iVar3 == 0) || (iVar3 = FUN_0043f830(5), iVar3 == 0)) {
        iVar3 = FUN_0043f830(3);
        if (iVar3 == 0) {
          iVar3 = FUN_0043f830(5);
          if (iVar3 == 0) goto LAB_00b68fa5;
          *param_2 = 8;
        }
        else {
          *param_2 = 7;
        }
        if (*(int *)(param_1 + 0x4e4) == 0) goto LAB_00b68b75;
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
          if (*(int *)(param_1 + 0xdc0) == 8) {
            *param_2 = 0x11;
          }
          if (*(int *)(param_1 + 0xdc0) == 7) {
            *param_2 = 0x10;
          }
          if (*(int *)(param_1 + 0xdc0) == 9) {
            *param_2 = 9;
          }
          if (*(int *)(param_1 + 0xdc0) == 10) {
            *param_2 = 10;
          }
          goto LAB_00b68b75;
        }
        *param_2 = 3;
      }
    }
    else {
      if ((*(uint *)(param_1 + 0xe68) & 0x400000) == 0) {
        if ((*(uint *)(param_1 + 0xe68) & 0x200000) == 0) {
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
        if (*(int *)(param_1 + 0xdc0) == 7) {
          *param_2 = 0x14;
        }
        if (*(int *)(param_1 + 0xdc0) == 8) {
          *param_2 = 0x15;
        }
        if (*(int *)(param_1 + 0xdc0) == 9) {
          *param_2 = 0x18;
        }
        if (*(int *)(param_1 + 0xdc0) == 10) {
          *param_2 = 0x19;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xb) {
          *param_2 = 0x1a;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xc) {
          *param_2 = 0x1b;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xd) {
          *param_2 = 0xd;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xe) {
          *param_2 = 0xe;
        }
        if (*(int *)(param_1 + 0xdc0) == 0xf) {
          *param_2 = 0xf;
        }
        goto LAB_00b68b75;
      }
      if (*param_2 == 0xd) {
        *param_2 = 3;
        if ((*(byte *)(param_1 + 0xe6a) & 1) != 0) {
          *param_2 = 0x1d;
          param_2[1] = *(uint *)(param_1 + 0xdc0);
        }
        goto LAB_00b68b75;
      }
      if (*param_2 != 0xf) goto LAB_00b68b75;
      *param_2 = 4;
    }
    if ((*(byte *)(param_1 + 0xe6a) & 1) != 0) {
      *param_2 = 0x1d;
      param_2[1] = *(uint *)(param_1 + 0xdc0);
    }
LAB_00b68b75:
    if ((*(uint *)(param_1 + 0xe68) & 0x200) != 0) {
      *param_2 = 0x1c;
    }
    param_3[6] = *(uint *)(param_1 + 0x4b4);
    return;
  }
LAB_00b68fa5:
  if (((int)uVar2 < 0) && ((~(*param_3 >> 0x1f) & 1) != 0)) {
    if ((uVar2 & 0x40000000) == 0) goto LAB_00b6905c;
    if ((~(*param_3 >> 0x1e) & 1) == 0) goto LAB_00b69044;
    if (((uVar2 & 0x20000000) == 0) || ((param_3[2] >> 0x1d & 1) == 0)) {
      *param_2 = 1;
      param_3[6] = *(uint *)(param_1 + 0x4b4);
    }
    else {
      iVar3 = FUN_0043f860(4);
      if (iVar3 != 0) goto LAB_00b69044;
      *param_2 = 2;
      param_3[6] = *(uint *)(param_1 + 0x4b4);
    }
LAB_00b68ffa:
    if ((*(byte *)(param_1 + 0xe6a) & 1) != 0) {
      *param_2 = 0x1d;
      param_2[1] = *(uint *)(param_1 + 0xdc0);
      return;
    }
  }
  else {
LAB_00b69044:
    if (((uVar2 & 0x40000000) == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) {
LAB_00b6905c:
      if (((uVar2 & 0x100000) == 0) || ((~(*param_3 >> 0x14) & 1) == 0)) {
        if ((-1 < (int)uVar2) || ((~(*param_3 >> 0x1f) & 1) == 0)) {
          iVar3 = FUN_0043f830(0x1e);
          *param_2 = 0x1c;
          if (iVar3 == 0) {
            param_3[6] = *(uint *)(param_1 + 0x4b4);
            return;
          }
LAB_00b68c47:
          param_3[6] = *(uint *)(param_1 + 0x4b4);
          return;
        }
        iVar3 = FUN_0043f860(3);
        if ((iVar3 != 0) && (iVar3 = FUN_0043f860(5), iVar3 != 0)) {
          uVar2 = *(uint *)(param_1 + 0xe68);
          if ((uVar2 & 0x10000) == 0) {
            if ((uVar2 & 0x400000) != 0) {
LAB_00b6912f:
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
                *param_2 = ((*(uint *)(param_1 + 0xe68) & 0x400000) != 0) + 5;
                param_3[6] = *(uint *)(param_1 + 0x4b4);
                return;
              }
              goto LAB_00b6912f;
            }
          }
          *param_2 = 5;
          param_3[6] = *(uint *)(param_1 + 0x4b4);
          return;
        }
        *param_2 = 0;
        param_3[6] = *(uint *)(param_1 + 0x4b4);
        goto LAB_00b68ffa;
      }
    }
    if (((((uVar2 & 0x10000000) != 0) && ((param_3[2] >> 0x1c & 1) != 0)) &&
        ((uVar2 & 0x4000000) != 0)) && ((param_3[2] >> 0x1a & 1) != 0)) {
      param_3[6] = 0x42000;
      return;
    }
    *param_2 = 0;
    param_3[6] = *(uint *)(param_1 + 0x4b4);
    if ((*(byte *)(param_1 + 0xe6a) & 1) != 0) {
      *param_2 = 0x1d;
      param_2[1] = *(uint *)(param_1 + 0xdc0);
    }
  }
  return;
}

// 00B69220  Em0030::vf338  size=97  [class]
void __thiscall Em0030::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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

// 00B69290  Em0030::vf258  size=168  [class]
void __thiscall Em0030::vf258(int param_1,int param_2,undefined4 param_3,int param_4)

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
      *(int **)(param_1 + 0xe54 + param_2 * 4) = piVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xe54 + param_2 * 4) = 0;
  return;
}

// 00B69340  Em0030::vf260  size=105  [class]
void __thiscall Em0030::vf260(int param_1,int param_2,int param_3)

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
    *(undefined4 *)(param_1 + 0xe54 + param_2 * 4) = 0;
  }
  return;
}

// 00B693B0  Em0030::vf334  size=948  [class]
void __thiscall Em0030::vf334(int *param_1,undefined4 param_2,int *param_3)

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
  
  BehaviorEmBase::vf334(param_2,param_3);
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
    puVar13 = &DAT_01be9d50;
    (**(code **)(*piVar3 + 4))(&DAT_01be9d50);
    iVar4 = FUN_00dd6d80(puVar13);
    if ((iVar4 != 0) && (piVar3 != param_1)) {
      uVar5 = FUN_00a8cae0();
      uVar6 = FUN_00a8cad0(uVar5);
      uVar7 = FUN_00a8cac0(uVar6);
      iVar4 = piVar3[0x372];
      uVar8 = FUN_00a8cab0(iVar4,uVar7);
      FUN_00b66b20(uVar8,iVar4,uVar7,uVar6,uVar5);
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
      param_1[0x39a] = piVar3[0x39a];
      param_1[0x39b] = piVar3[0x39b];
      param_1[0x39c] = piVar3[0x39c];
      param_1[0x39d] = piVar3[0x39d];
      uVar6 = 0;
      param_1[0x139] = piVar3[0x139];
      uVar5 = FUN_00a82d50(0);
      FUN_00a88b50(uVar5,uVar6);
    }
  }
  FUN_00ac8d40(0);
  if ((param_1[0x39b] & 0x200000U) != 0) {
    FUN_00ac8d80(0,1);
    FUN_00ac8d80(1,1);
    FUN_00ac8d80(4,1);
    FUN_00ac8d80(5,1);
    FUN_00ac8d80(6,1);
  }
  if ((param_1[0x39b] & 0x100000U) != 0) {
    FUN_00ac8d80(2,1);
    FUN_00ac8d80(3,1);
  }
  if ((param_1[0x39b] & 0x80000U) != 0) {
    FUN_00ac8d80(7,1);
    FUN_00ac8d80(8,1);
  }
  param_1[0x39b] = param_1[0x39b] | 0x8000;
  piVar3 = (int *)FUN_00ac8a30();
  iVar4 = param_1[0x370];
  iVar1 = *piVar3;
  param_1[0x370] = iVar1;
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
      FUN_00b66b20(0x80001,iVar2,0,0,0);
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
      if (iVar4 != param_1[0x370]) {
        FUN_00b66b20(0x90000,0,0,0,0);
        FUN_00a88b50(4,0);
        return;
      }
      if ((*(byte *)((int)param_1 + 0xe6a) & 1) != 0) {
        FUN_00b66b20(0x60005,0,0,0,0);
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
      FUN_00b66b20(0xb0003,0,0,0,0);
      return;
    }
    break;
  case 0x1d:
    if (param_1[0x139] == 0) {
      FUN_00b66b20(0x80004,0,0,0,0);
      if (param_1[0x294] != 0) {
        (**(code **)(*param_1 + 0x344))(3,1,1);
      }
      param_1[0x370] = piVar3[1];
    }
  }
  return;
}

// 00B697A0  FUN_00b697a0  size=151  [between]
void __fastcall FUN_00b697a0(int param_1)

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

// 00B69840  FUN_00b69840  size=150  [between]
void __fastcall FUN_00b69840(int param_1)

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

// 00B698E0  Em0030::vf2A0  size=31  [class]
void __fastcall Em0030::vf2A0(int param_1)

{
  if ((*(uint *)(param_1 + 0xe68) & 0x8010000) == 0) {
    FUN_00b66b20(0x20000,0,0,0,0);
  }
  return;
}

// 00B69A70  Em0030::vf2A4  size=195  [class]
void __fastcall Em0030::vf2A4(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 0xe68) & 0x10000) == 0) {
    if ((*(uint *)(param_1 + 0xe68) & 0x8000000) != 0) {
      FUN_00b66b20(0x20001,0,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0xb08) == -1) {
      *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(param_1 + 0x18b0);
      *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(param_1 + 0x18b4);
      *(undefined4 *)(param_1 + 0x1898) = *(undefined4 *)(param_1 + 0x18b8);
      *(undefined4 *)(param_1 + 0x189c) = *(undefined4 *)(param_1 + 0x18bc);
      *(undefined4 *)(param_1 + 0x18d0) = 0;
    }
    else {
      FUN_00a8d790(&local_c);
      *(undefined4 *)(param_1 + 0x1890) = local_c;
      *(undefined4 *)(param_1 + 0x1894) = local_8;
      *(undefined4 *)(param_1 + 0x1898) = local_4;
      *(undefined4 *)(param_1 + 0x189c) = 0x3f800000;
    }
    FUN_00b66b20(0x10008,0,0,0,0);
  }
  return;
}

// 00B69B40  Em0030::vf104  size=634  [class]
void __fastcall Em0030::vf104(int param_1)

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
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000000;
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
  if (*(int *)(param_1 + 0xe54) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xe54) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xe54) + 0xbb0) = 0;
  }
  if (*(int *)(param_1 + 0xe58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xe58) + 0xbac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xe58) + 0xbb0) = 0;
  }
  return;
}

// 00B69DC0  Em0030::vf108  size=41  [class]
void __thiscall Em0030::vf108(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00b66b20(0x10000,0,0,0,0);
  return;
}

// 00B69DF0  Em0030::vf44  size=346  [class]
void __fastcall Em0030::vf44(int param_1)

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
  FUN_00b66a90(2);
  iVar1 = param_1 + 0x11c0;
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
  RayCastManager::getWork(param_1 + 0x17f8);
  RayCastManager::getWork(param_1 + 0x1808);
  RayCastManager::getWork(param_1 + 0x1800);
  RayCastManager::getWork(param_1 + 0x182c);
  RayCastManager::getWork(param_1 + 0x1838);
  RayCastManager::getWork(param_1 + 0x1980);
  FUN_00ac4bd0();
  FUN_00a92a00();
  FUN_00a92ef0();
  FUN_00a92a90(0x20030);
  BehaviorEmBase::vf44();
  return;
}

// 00B69F50  Em0030::vf264  size=674  [class]
undefined4 __thiscall Em0030::vf264(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040ac60(param_2);
  *(undefined4 *)(param_1 + 0x19e8) = *(undefined4 *)(param_1 + 0xafc);
  *(undefined4 *)(param_1 + 0x19ec) = *(undefined4 *)(param_1 + 0xb84);
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  if ((*(int *)(param_1 + 0xb08) != -1) && (*(int *)(param_1 + 0x19e8) == 1)) {
    *(undefined4 *)(param_1 + 0x18b0) = *(undefined4 *)(param_1 + 0xb8c);
    *(undefined4 *)(param_1 + 0x18b4) = *(undefined4 *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x18b8) = *(undefined4 *)(param_1 + 0xb94);
    *(undefined4 *)(param_1 + 0x18bc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1870) = *(undefined4 *)(param_1 + 0x18b0);
    *(undefined4 *)(param_1 + 0x1874) = *(undefined4 *)(param_1 + 0x18b4);
    *(undefined4 *)(param_1 + 0x1878) = *(undefined4 *)(param_1 + 0x18b8);
    *(undefined4 *)(param_1 + 0x187c) = *(undefined4 *)(param_1 + 0x18bc);
    FUN_00b66b20(0x10005,0,0,0,0);
  }
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (*(int *)(param_1 + 0xb24) != -1) {
    FUN_00b66b20(0x10009,0,0,0,0);
  }
  if ((*(int *)(param_1 + 0x19ec) == 1) || (*(int *)(param_1 + 0x19ec) == 2)) {
    *(undefined4 *)(param_1 + 0x18b0) = *(undefined4 *)(param_1 + 0xb8c);
    *(undefined4 *)(param_1 + 0x18b4) = *(undefined4 *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x18b8) = *(undefined4 *)(param_1 + 0xb94);
    *(undefined4 *)(param_1 + 0x18bc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0x18b0);
    *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0x18b4);
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x18b8);
    *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0x18bc);
    if (*(int *)(param_1 + 0xb24) == -1) {
      uVar2 = 0xc0000;
    }
    else {
      uVar2 = 0xc0001;
    }
    FUN_00b66b20(uVar2,0,0,0,0);
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e59c0(2);
    }
  }
  if ((*(byte *)(param_1 + 0x4a8) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0xdf8) = 0x40006;
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

// 00B6A200  FUN_00b6a200  size=107  [between]
void __fastcall FUN_00b6a200(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0xe6c) & 0x4000) == 0) && (0 < *(int *)(param_1 + 0x61c))) {
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00b66b20(0x10005,0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if (iVar1 != 0) {
      FUN_00b66b20(0x20000,0,0,0,0);
    }
  }
  return;
}

// 00B6A270  FUN_00b6a270  size=157  [between]
void __fastcall FUN_00b6a270(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if ((iVar1 != 3) || (*(float *)(param_1 + 0xaa0) <= 2.3561945)) {
    iVar1 = FUN_00a8cac0();
    if ((iVar1 != 3) || (144.0 <= *(float *)(param_1 + 0xa8c))) {
      iVar1 = FUN_00a82e60();
      if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
        FUN_00b66b20(0x10005,0,0,0,0);
      }
      iVar1 = FUN_00a82e80();
      if (iVar1 != 0) {
        FUN_00b66b20(0x20000,0,0,0,0);
      }
      return;
    }
  }
  FUN_00a8cb60(4);
  return;
}

// 00B6A310  FUN_00b6a310  size=86  [between]
void __fastcall FUN_00b6a310(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82e60();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
    FUN_00b66b20(0x10005,0,0,0,0);
  }
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_00b66b20(0x20000,0,0,0,0);
  }
  return;
}

// 00B6A370  FUN_00b6a370  size=228  [between]
void __fastcall FUN_00b6a370(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    if ((param_1[0x372] & 0x20000U) == 0) {
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
    FUN_00b66b20(0x10004,0,0,0,0);
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
  }
  return;
}

// 00B6A460  FUN_00b6a460  size=193  [between]
void __fastcall FUN_00b6a460(int *param_1)

{
  int iVar1;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
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
    FUN_00b66b20(0x40000,0,0,0,0);
  }
  param_1[0x63c] = (int)((float)param_1[0x67f] * 60.0);
  return;
}

// 00B6A530  FUN_00b6a530  size=40  [between]
void FUN_00b6a530(void)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_00b66b20(0x20000,0,0,0,0);
  }
  return;
}

// 00B6A560  FUN_00b6a560  size=536  [between]
void __fastcall FUN_00b6a560(int *param_1)

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
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    goto LAB_00b6a5d0;
  }
  FUN_00aa4120(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_00b6a5d0:
  local_2c = (float)param_1[0x61c];
  local_28 = param_1[0x61d];
  local_24 = (float)param_1[0x61e];
  FUN_00a8d790(&local_2c);
  if (param_1[0x202] == 0) {
    param_1[0x624] = param_1[0x61c];
    param_1[0x625] = param_1[0x61d];
    param_1[0x626] = param_1[0x61e];
    param_1[0x627] = param_1[0x61f];
    fVar1 = ((float)param_1[0x12] - local_24) * ((float)param_1[0x12] - local_24) +
            ((float)param_1[0x10] - local_2c) * ((float)param_1[0x10] - local_2c);
    if (fVar1 < 2.25 != (fVar1 == 2.25)) {
      FUN_00b66b20(0x10006,0,0,0,0);
    }
  }
  else {
    iVar3 = FUN_00a97e60(0x3fc00000,1);
    if (iVar3 != 0) {
      cVar2 = FUN_00c9db60(1);
      if (cVar2 != '\0') {
        FUN_00a8d790(&local_2c);
        param_1[0x658] = (int)local_2c;
        param_1[0x659] = local_28;
        param_1[0x65a] = (int)local_24;
        param_1[0x65b] = 0x3f800000;
        FUN_00b66b20(0x10007,0,0,0,0);
        param_1[0x37e] = 0x10005;
        param_1[0x37f] = 1;
        param_1[0x380] = 0;
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

// 00B6A780  FUN_00b6a780  size=40  [between]
void FUN_00b6a780(void)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_00b66b20(0x20000,0,0,0,0);
  }
  return;
}

// 00B6A7B0  FUN_00b6a7b0  size=273  [between]
void __fastcall FUN_00b6a7b0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x808) != 0) {
      FUN_00b66b20(0x10005,0,0,0,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(param_1 + 0x1870);
    *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(param_1 + 0x1874);
    *(undefined4 *)(param_1 + 0x1898) = *(undefined4 *)(param_1 + 0x1878);
    *(undefined4 *)(param_1 + 0x189c) = *(undefined4 *)(param_1 + 0x187c);
    fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x1890);
    fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1898);
    fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
    if (fVar1 < 2.25 != (fVar1 == 2.25)) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      return;
    }
    FUN_00b66b20(0x10005,0,1,0,0);
  }
  return;
}

// 00B6A8D0  FUN_00b6a8d0  size=195  [between]
void __fastcall FUN_00b6a8d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_00b66b20(0x20000,0,0,0,0);
  }
  iVar1 = FUN_00a8d3d0(7);
  iVar2 = FUN_00a8d3d0(8);
  iVar3 = FUN_00a8d3d0(10);
  if ((iVar3 != 0) || (iVar2 != 0 || iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xdf8) = 0x10008;
    *(undefined4 *)(param_1 + 0xdfc) = 0;
    *(undefined4 *)(param_1 + 0xe00) = 0;
    *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0x18e0);
    *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0x18e4);
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x18e8);
    *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0x18ec);
    FUN_00b66b20(0x10007,0,0,0,0);
  }
  return;
}

// 00B6A9A0  FUN_00b6a9a0  size=1075  [between]
void __fastcall FUN_00b6a9a0(int *param_1)

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
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x318))();
    uVar4 = 0xe;
    if (param_1[0x67b] == 2) {
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
    FUN_00a8e880(param_1 + 0x658);
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
    if (param_1[0x67b] == 2) {
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
    if (param_1[0x67b] == 2) {
      uVar4 = 0x8e;
    }
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(uVar4,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x39a] = param_1[0x39a] & 0xf7ffffff;
      if (param_1[0x67b] == 2) {
        param_1[0x39a] = param_1[0x39a] | 0x8000000;
      }
      if (param_1[0x37e] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00b66b20(param_1[0x37e],0,0,0,0);
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

// 00B6ADF0  FUN_00b6adf0  size=151  [between]
void __fastcall FUN_00b6adf0(int param_1)

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
    FUN_00b66b20(0x40000,0,0,0,0);
    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x8000000;
  }
  return;
}

// 00B6AE90  FUN_00b6ae90  size=283  [between]
void __fastcall FUN_00b6ae90(int param_1)

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
      *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(param_1 + 0x18b0);
      *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(param_1 + 0x18b4);
      *(undefined4 *)(param_1 + 0x1898) = *(undefined4 *)(param_1 + 0x18b8);
      *(undefined4 *)(param_1 + 0x189c) = *(undefined4 *)(param_1 + 0x18bc);
      *(undefined4 *)(param_1 + 0x18d0) = 0;
    }
    else {
      FUN_00a8d790(&local_c);
      *(undefined4 *)(param_1 + 0x1890) = local_c;
      *(undefined4 *)(param_1 + 0x1894) = local_8;
      *(undefined4 *)(param_1 + 0x1898) = local_4;
      *(undefined4 *)(param_1 + 0x189c) = 0x3f800000;
    }
    FUN_00b66b20(0x10008,0,0,0,0);
    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) & 0xf7ffffff;
  }
  return;
}

// 00B6AFB0  FUN_00b6afb0  size=418  [between]
void __fastcall FUN_00b6afb0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x31,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x635] = 1;
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
      FUN_00b66b20(param_1[0x37e],param_1[0x380],0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
  }
  return;
}

// 00B6B170  FUN_00b6b170  size=442  [between]
void __fastcall FUN_00b6b170(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x36,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x635] = 1;
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
      FUN_00b66b20(param_1[0x37e],param_1[0x380],0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 00B6B350  FUN_00b6b350  size=348  [between]
void __fastcall FUN_00b6b350(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x187] != 0) {
    return;
  }
  if (((param_1[0x372] & 0xffffU) != 2) || (param_1[0x605] != 0)) goto LAB_00b6b3a9;
  uVar1 = FUN_00dde2a0(0,100);
  if ((uVar1 & 1) == 0) {
    if (param_1[0x607] == 0) {
      if (param_1[0x606] == 0) goto LAB_00b6b39f;
      goto LAB_00b6b410;
    }
  }
  else {
    if (param_1[0x606] != 0) {
LAB_00b6b410:
      FUN_00b66b20(0x40003,4,0,0,0);
      goto LAB_00b6b3a9;
    }
    if (param_1[0x607] == 0) {
LAB_00b6b39f:
      (**(code **)(*param_1 + 0x34c))();
      goto LAB_00b6b3a9;
    }
  }
  FUN_00b66b20(0x40003,3,0,0,0);
LAB_00b6b3a9:
  if (((param_1[0x372] & 0xffffU) == 3) && (param_1[0x607] == 0)) {
    if (param_1[0x606] == 0) {
      if (param_1[0x605] == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00b66b20(0x40003,2,0,0,0);
      }
    }
    else {
      FUN_00b66b20(0x40003,4,0,0,0);
    }
  }
  if (((param_1[0x372] & 0xffffU) == 4) && (param_1[0x606] == 0)) {
    if (param_1[0x607] == 0) {
      if (param_1[0x605] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b6b4aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00b66b20(0x40003,2,0,0,0);
      return;
    }
    FUN_00b66b20(0x40003,3,0,0,0);
  }
  return;
}

// 00B6B4B0  FUN_00b6b4b0  size=707  [between]
void __fastcall FUN_00b6b4b0(int *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] == 0) {
    uVar4 = 0x3c;
    if ((param_1[0x372] & 0xffffU) == 3) {
      uVar4 = 0x3f;
    }
    if ((param_1[0x372] & 0xffffU) == 4) {
      uVar4 = 0x42;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    if ((param_1[0x372] & 0x40000U) == 0) {
      FUN_00a92f90();
      FUN_00e36b50(0,8,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
  }
  else if (param_1[0x187] != 1) goto LAB_00b6b729;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((param_1[0x372] & 0xffffU) == 2) {
      if ((param_1[0x372] & 0x40000U) != 0) {
        sVar1 = FUN_00dde2a0(0,7);
        if (sVar1 == 1) {
          if (param_1[0x60a] != 0) {
            param_1[0x37e] = 0x50008;
          }
        }
        else if (sVar1 == 2) {
          param_1[0x37e] = 0x50009;
        }
        else {
          if (sVar1 != 5) {
                    /* WARNING: Could not recover jumptable at 0x00b6b5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
          iVar3 = FUN_00b68060();
          if (iVar3 == 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          else {
            param_1[0x37e] = 0x5000a;
          }
        }
        param_1[0x24f] = 0x41400000;
        param_1[0x380] = 0x40000;
        FUN_00b66b20(0x40000,0x40000,0,0,0);
        return;
      }
      if ((param_1[0x37d] != 2) || (1.0 <= (float)param_1[0x2a6])) {
        if (((float)param_1[0x2a3] < 36.0) && (sVar1 = FUN_00dde2a0(0,5), sVar1 == 2)) {
          FUN_00b66b20(0x40003,2,0,0,0);
          return;
        }
      }
      else {
        uVar2 = FUN_00dde2a0(0,5);
        switch(uVar2) {
        case 0:
        case 2:
          iVar3 = FUN_00b62a10();
          if ((iVar3 != 0) && ((float)param_1[0x2a3] < 225.0)) {
            FUN_00b66b20(0x50007,0,0,0,0);
            return;
          }
          break;
        case 1:
        case 3:
          iVar3 = FUN_00b68060();
          if ((iVar3 != 0) && ((float)param_1[0x2a3] < 100.0)) {
            FUN_00b66b20(0x5000a,0,0,0,0);
            return;
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b6b729:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B6B790  Em0030::vf19C  size=179  [class]
void __thiscall Em0030::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00B6B850  Em0030::vf1A4  size=624  [class]
void __thiscall Em0030::vf1A4(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = FUN_00a81330();
  if ((param_3 & 6) != 0) {
    if (*param_2 == 0xc3) {
      iVar2 = FUN_00acf0b0(iVar1);
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c8a0();
        piVar5 = (int *)FUN_00412580(uVar4);
        iVar2 = (**(code **)(*piVar5 + 0x14c))(0x2d,param_1[0x13c]);
        if (iVar2 != 0) {
          (**(code **)(*piVar5 + 0x150))(0x2d,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x2d,iVar1);
        }
      }
    }
    else if (*param_2 == 0xc4) {
      (**(code **)(*param_1 + 0x314))();
      (**(code **)(*param_1 + 0x1d4))(0);
    }
    else if (((param_2[0x23] & 0x10000000U) == 0) &&
            (((param_3 & 4) == 0 || ((param_1[0x39b] & 0x380000U) == 0)))) {
      iVar2 = FUN_00a8eeb0();
      iVar3 = FUN_00a8eea0();
      if (iVar2 / 2 < iVar3) {
        FUN_00b66b20(0x40003,0x40002,0,0,0);
        if (*param_2 == 0xc1) {
          param_1[0x39a] = param_1[0x39a] | 0x10;
          param_1[0x25] = (int)((float)param_1[0x25] + 3.1415927);
        }
      }
      else if (param_1[0x186] != 0x30002) {
        param_1[0x37e] = 0x30002;
        param_1[0x380] = 0;
        switch(*param_2) {
        case 0xbe:
        case 0xc6:
          param_1[0x380] = 3;
          if ((param_1[0x372] & 0x80000000U) != 0) {
            param_1[0x380] = 4;
          }
          break;
        case 0xbf:
        case 0xc1:
        case 199:
          param_1[0x380] = 4;
          if ((param_1[0x372] & 0x80000000U) != 0) {
            param_1[0x380] = -0x80000000;
          }
          break;
        case 0xc0:
        case 0xc5:
          param_1[0x380] = 4;
          if ((param_1[0x372] & 0x80000000U) != 0) {
            param_1[0x380] = 3;
          }
          break;
        default:
          param_1[0x37e] = 0x40003;
          param_1[0x380] = 0x40002;
        }
        FUN_00b66b20(param_1[0x37e],param_1[0x380],0,0,0);
      }
    }
  }
  if ((param_3 & 1) != 0) {
    switch(*param_2) {
    case 0xbe:
      param_1[0x39a] = param_1[0x39a] | 0x2000;
      return;
    case 0xc3:
      param_1[0x39a] = param_1[0x39a] | 0x4000;
      param_1[0x24a] = 0x41f00000;
    case 0xc4:
    case 0xc5:
      param_1[0x39a] = param_1[0x39a] | 0x800;
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        uVar4 = FUN_009f8b40();
        FUN_00ac8a80(uVar4);
      }
    }
  }
  return;
}

// 00B6BB00  Em0030::vf188  size=127  [class]
void __thiscall Em0030::vf188(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 1) {
      iVar2 = FUN_00a8cab0();
      if (iVar2 != 0x30000) {
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdec) = uVar1;
        uVar1 = FUN_00a8cac0();
        *(undefined4 *)(param_1 + 0xdf0) = uVar1;
        *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(param_1 + 0xdc8);
        FUN_00b66b20(0x30000,*(undefined4 *)(param_1 + 0xdc8),0,0,0);
      }
    }
  }
  return;
}

// 00B6BB80  FUN_00b6bb80  size=215  [between]
void __fastcall FUN_00b6bb80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((2 < *(int *)(param_1 + 0x61c)) && ((*(uint *)(param_1 + 0xe68) & 0x2000) == 0)) &&
     (*(float *)(param_1 + 0xa8c) < 64.0)) {
    iVar1 = FUN_00a952e0(0,0x42340000);
    if (iVar1 != 0) {
      FUN_00b66b20(0x50001,0,0,0,0);
      if ((*(uint *)(param_1 + 0xe6c) & 0x2000) != 0) {
        uVar2 = FUN_00dde2a0(0,0x32);
        if ((uVar2 & 0xffff) % 3 != 0) {
          iVar1 = FUN_00b629f0();
          if (iVar1 != 0) {
            FUN_00b66b20(0x50004,0,0,0,0);
            *(uint *)(param_1 + 0xe6c) = *(uint *)(param_1 + 0xe6c) ^ 0x2000;
            return;
          }
        }
        FUN_00b66b20(0x50003,0,0,0,0);
      }
      *(uint *)(param_1 + 0xe6c) = *(uint *)(param_1 + 0xe6c) ^ 0x2000;
    }
  }
  return;
}

// 00B6BC60  FUN_00b6bc60  size=443  [between]
void __fastcall FUN_00b6bc60(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00b68250(param_1[0x13c]);
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
      FUN_00b66a90(2);
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B6BE30  FUN_00b6be30  size=2420  [between]
int __thiscall FUN_00b6be30(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_EDI;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  int local_8;
  uint local_4;
  
  iVar2 = FUN_00a8cab0();
  local_8 = 0;
  if ((param_1[0x186] & 0xffff0000U) == 0xc0000) {
    return 0;
  }
  iVar3 = *param_2;
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) ||
     (((iVar3 == 0x1b0 || (iVar3 == 0x147)) || ((*(byte *)(param_2 + 0x23) & 0x10) != 0)))) {
    return 0;
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (local_8 = FUN_00a7c8a0(), local_8 != 0)) {
    if (*(int *)(local_8 + 0x4b0) == 0x20600) {
      if ((param_1[0x2a1] != 0) && (iVar5 = param_1[0x13c], iVar4 = FUN_00a81330(), iVar4 == iVar5))
      {
        (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
      }
      (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    }
    if ((*(byte *)(local_8 + 0x4c0) & 0x10) != 0) {
      (**(code **)(*param_1 + 0x21c))(local_8,(char)param_2[4],0x3c23d70a,0);
      (**(code **)(*param_1 + 0x220))(0x40000000);
    }
  }
  local_4 = 1;
  if ((DAT_01bea060 & 0x2000000) != 0) {
    uVar10 = 1;
LAB_00b6bf87:
    (**(code **)(*param_1 + 0x198))(local_8,param_2,uVar10);
    return 1;
  }
  if ((*param_2 == 0x93) && (param_1[300] == 0x20035)) {
    uVar10 = 0x40000;
    goto LAB_00b6bf87;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    uVar1 = param_1[0x39b];
    iVar5 = FUN_00ac8120();
    if (iVar5 != 0) {
      FUN_00ac8120();
      iVar5 = FUN_00bda170();
      if (iVar5 == 0) goto LAB_00b6bfe8;
    }
    if ((uVar1 & 0x380000) != 0) {
      local_4 = 0x41;
    }
  }
LAB_00b6bfe8:
  if (((param_2[0x23] & 0x8000U) != 0) && ((param_1[0x39b] & 0x380000U) != 0)) {
    local_4 = local_4 & 0xffffffbf | 0x20;
  }
  if ((param_2[0x23] & 2U) != 0) {
    (**(code **)(*param_1 + 0x358))(399,0);
    FUN_00b67a90(0,1,0);
    if ((param_1[0x39b] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x39b] = param_1[0x39b] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x39b] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
      }
    }
    if ((param_1[0x39b] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x39b] = param_1[0x39b] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x39b] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
      }
    }
  }
  bVar7 = iVar2 == 0x60004;
  if ((param_1[0x186] == 0x60000) || (param_1[0x186] == 0x60001)) {
    if ((*param_2 == 0x4b) || (*param_2 == 0x4c)) {
      FUN_00b66b20(0x60003,0,0,0,0);
      local_4 = local_4 | 0x20000;
    }
    goto LAB_00b6c45d;
  }
  param_1[0x379] = param_2[0x4a];
  if ((*(byte *)((int)param_1 + 0xe6a) & 1) == 0) {
    uVar10 = 0x9a;
    if ((param_1[0x39b] & 0x1000U) != 0) {
      uVar10 = 0x9b;
    }
    param_1[0x39b] = param_1[0x39b] ^ 0x1000;
    FUN_00b64990(param_2,uVar10,param_1 + 0x373);
  }
  iVar5 = FUN_00a8eea0();
  if ((iVar5 < param_1[0x375]) && (FUN_00b67a90(param_1[0x379],1,1), param_1[0x379] == 0)) {
    if ((param_1[0x39b] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x39b] = param_1[0x39b] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x39b] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
      }
    }
    if ((param_1[0x39b] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x39b] = param_1[0x39b] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x39b] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
      }
    }
  }
  if ((param_1[0x373] < 0) && (iVar5 = FUN_00b62b70(), iVar5 != 0)) {
    iVar5 = param_1[0x379];
    if (iVar5 == 0) {
      uVar10 = 5;
LAB_00b6c288:
      FUN_00b66b20(0x60000,uVar10,0,0,0);
    }
    else {
      if (iVar5 == 1) {
        uVar10 = 3;
        goto LAB_00b6c288;
      }
      if (iVar5 == 2) {
        uVar10 = 4;
        goto LAB_00b6c288;
      }
    }
    param_1[0x373] = param_1[0x374];
  }
  iVar5 = FUN_00b62b50();
  if (iVar5 == 0) {
LAB_00b6c2f2:
    param_1[0x682] = 0;
    if (!bVar7) {
LAB_00b6c304:
      if (((param_2[0x23] & 0x800U) != 0) && (iVar5 = FUN_00b62b50(), iVar5 != 0)) {
        FUN_00b66b20(0x60004,0,0,0,0);
      }
      if (((*(byte *)(param_2 + 0x23) & 1) != 0) && (iVar5 = FUN_00b62b50(), iVar5 != 0)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_00b66b20(0x60004,0,0,0,0);
      }
      if ((param_2[0x23] & 0x20000U) != 0) {
        FUN_00b66b20(0x60002,0,0,0,0);
      }
    }
  }
  else {
    param_1[0x681] = param_1[0x680];
    param_1[0x682] = param_1[0x682] + param_2[1];
    if (bVar7) goto LAB_00b6c2f2;
    if (param_1[0x682] < param_1[0x683]) goto LAB_00b6c304;
    param_1[0x682] = 0;
    FUN_00b66b20(0x60004,0,0,0,0);
    bVar7 = true;
  }
  (**(code **)(*param_1 + 0x1d8))();
  iVar5 = FUN_00b64930(param_2);
  if ((iVar5 != 0) && (local_8 != 0)) {
    fVar8 = (float10)FUN_00a8ec30(local_8 + 0x40);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)(float)param_1[0x25]));
    fVar9 = ABS(fVar8);
    uVar10 = 1;
    if ((float10)2.3561945 < fVar9 == ((float10)2.3561945 == fVar9)) {
      if ((float10)0.7853982 <= fVar9) {
        if ((float10)0 <= fVar8) {
          uVar10 = 4;
        }
        else {
          uVar10 = 3;
        }
      }
    }
    else {
      uVar10 = 2;
    }
    FUN_00b66b20(0x60001,uVar10,0,0,0);
    param_1[0x39b] = param_1[0x39b] | 0x40000;
  }
LAB_00b6c45d:
  if (*param_2 == 0x92) {
    local_4 = local_4 & 0xffffffbf | 0x20;
    FUN_00b67a90(0,1,1);
    if ((param_1[0x39b] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x39b] = param_1[0x39b] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x5a4);
      if ((param_1[0x39b] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
      }
    }
    if ((param_1[0x39b] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x39b] = param_1[0x39b] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x578);
      if ((param_1[0x39b] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
      }
    }
  }
  iVar5 = param_2[1];
  if ((*(byte *)(param_2 + 0x23) & 0x10) != 0) {
    iVar5 = 0;
  }
  if ((param_2[0x24] & 0x4000U) != 0) {
    FUN_00b66b20(0x70007,0,0,0,0);
    iVar5 = 0;
  }
  if ((*(byte *)((int)param_1 + 0xe6a) & 1) != 0) {
    if (iVar2 != 0x60006) {
      FUN_00b66b20(0x60005,0,0,0,0);
    }
    if ((!bVar7) && ((param_2[0x23] & 0x20000U) != 0)) {
      FUN_00b66b20(0x60006,0,0,0,0);
    }
  }
  if ((*(byte *)(param_1 + 0x12a) & 2) == 0) {
    (**(code **)(*param_1 + 0x30c))(iVar5,0);
  }
  if (*param_2 == 0x185) {
    param_1[0x21c] = 0;
  }
  if (param_1[0x21c] < 1) {
    if ((param_1[0x2a1] != 0) && (iVar2 = param_1[0x13c], iVar5 = FUN_00a81330(), iVar5 == iVar2)) {
      (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
    }
    (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    if (((local_8 != 0) && ((*(byte *)(local_8 + 0x4c0) & 0x10) != 0)) &&
       ((*(byte *)((int)param_2 + 0x92) & 1) != 0)) {
      piVar6 = (int *)FUN_00c209f0();
      (**(code **)(*piVar6 + 0x14))(0xe);
    }
    local_4 = local_4 | 0x80;
    param_1[0x139] = 1;
    uVar10 = 0;
    if ((param_2[0x24] & 0x200U) != 0) {
      uVar10 = 4;
    }
    FUN_00b62b20(uVar10,(uint)param_2[0x24] >> 0xb & 1);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    FUN_00b66b20(0x80000,0,0,0,0);
    if ((*(byte *)((int)param_1 + 0xe6a) & 1) != 0) {
      FUN_00b66b20(0x80004,0,0,0,0);
    }
  }
  if (iVar3 != 0) {
    FUN_00a88250(iVar3,param_2 + 0x40);
    piVar6 = (int *)FUN_00c206d0();
    (**(code **)(*piVar6 + 4))(0,param_1[0x13c],param_1 + 0x10);
  }
  (**(code **)(*param_1 + 0x198))(local_8,param_2,local_4);
  if (param_1[0x186] != 0x5000a) {
    FUN_00b66a90(2);
  }
  if (unaff_EDI != 0) {
    FUN_0043fa90();
  }
  return unaff_EDI;
}

// 00B6C7B0  FUN_00b6c7b0  size=472  [between]
undefined4 __thiscall FUN_00b6c7b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = param_2;
  if ((*(uint *)(param_2 + 0x90) & 0x20000) != 0) {
    FUN_00b67a90(0,1,1);
    if ((param_1[0x39b] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x39b] = param_1[0x39b] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x5a4);
      if ((param_1[0x39b] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
      }
    }
    if ((param_1[0x39b] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x39b] = param_1[0x39b] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x578);
      if ((param_1[0x39b] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
      }
    }
  }
  if ((param_1[0x39b] & 0x380000U) != 0) {
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

// 00B6C990  FUN_00b6c990  size=170  [between]
void __fastcall FUN_00b6c990(int param_1)

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
    FUN_00b66b20(0x70001,0,0,0,0);
    *(undefined4 *)(param_1 + 0xde8) = 0x43960000;
  }
  return;
}

// 00B6CA40  FUN_00b6ca40  size=305  [between]
void __fastcall FUN_00b6ca40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x82000000;
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    uVar2 = 0xae;
    if ((*(byte *)(param_1 + 0xe6c) & 0x20) != 0) {
      uVar2 = 0xaf;
    }
    *(uint *)(param_1 + 0xe6c) = *(uint *)(param_1 + 0xe6c) ^ 0x20;
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0xdec) == 0xa0000) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_00b6cb5b;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x40400000,0x3fc00000,10,1);
  *(undefined2 *)(param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x820) = 7;
  if (*(float *)(param_1 + 0xde8) < 0.0) {
    FUN_00b66b20(0x70002,0,0,0,0);
  }
LAB_00b6cb5b:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B6CB80  FUN_00b6cb80  size=170  [between]
void __fastcall FUN_00b6cb80(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xb2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0043f5b0(9,0x41200000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b66b20(0x70004,0,0,0,0);
    *(undefined4 *)(param_1 + 0xde8) = 0x43960000;
  }
  return;
}

// 00B6CC30  FUN_00b6cc30  size=175  [between]
void __fastcall FUN_00b6cc30(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x81000000;
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0xb4;
    if ((*(byte *)(param_1 + 0xe6c) & 0x10) != 0) {
      uVar1 = 0xb5;
    }
    *(uint *)(param_1 + 0xe6c) = *(uint *)(param_1 + 0xe6c) ^ 0x10;
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(float *)(param_1 + 0xde8) < 0.0) {
    FUN_00b66b20(0x70005,0,0,0,0);
  }
  return;
}

// 00B6CCE0  FUN_00b6cce0  size=195  [between]
void __fastcall FUN_00b6cce0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0xb8;
    if ((*(uint *)(param_1 + 0xdc8) & 0xffff) == 4) {
      uVar1 = 0xb9;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0043f5b0(9,0x41200000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b66b20(0x70004,0,0,0,0);
    *(undefined4 *)(param_1 + 0xde8) = 0x43960000;
  }
  return;
}

// 00B6CDB0  FUN_00b6cdb0  size=166  [between]
void __fastcall FUN_00b6cdb0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1af,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(3,0,0);
    }
    FUN_00b66b20(0x80003,0,0,0,0);
  }
  return;
}

// 00B6CE60  FUN_00b6ce60  size=285  [between]
void __fastcall FUN_00b6ce60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x26000000;
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xe50) = 0;
    switch(*(undefined4 *)(param_1 + 0xdc0)) {
    case 8:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 7:
      uVar1 = 0xde;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 9:
      uVar1 = 0xcf;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xb:
      uVar1 = 0xf8;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xd:
      uVar1 = 0xeb;
      break;
    case 0xf:
      uVar1 = 0xf1;
    }
    FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,*(uint *)(param_1 + 0xe50) | 0x8000000,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x10000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x10000;
    FUN_00b66b20(0xb0000,0,0,0,0);
  }
  return;
}

// 00B6CFB0  FUN_00b6cfb0  size=737  [between]
void __fastcall FUN_00b6cfb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x2a1] != 0) && (iVar4 = param_1[0x13c], iVar2 = FUN_00a81330(), iVar2 == iVar4)) {
      (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
    }
    (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    FUN_00eaa6e0(0x3f800000,0);
    uVar1 = param_1[0x39a];
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
    (**(code **)(*param_1 + 0x358))(1,param_1 + 0x49c);
    FUN_00e5e0c0("em0030_se_dmg_spark_death",param_1,0xffffffff,0);
    param_1[0x248] = 0x41200000;
    FUN_00b67a90(0,1,0);
    if ((param_1[0x39b] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x39b] = param_1[0x39b] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x39b] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
      }
    }
    if ((param_1[0x39b] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x39b] = param_1[0x39b] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x39b] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
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
      FUN_00b67710();
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
    iVar4 = thunk_FUN_00e58ed0(param_1[0x687]);
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

// 00B6D2B0  FUN_00b6d2b0  size=484  [between]
void __fastcall FUN_00b6d2b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x2a1] != 0) && (iVar3 = param_1[0x13c], iVar1 = FUN_00a81330(), iVar1 == iVar3)) {
      (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
    }
    (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    uVar2 = 0x108;
    switch(param_1[0x370]) {
    case 1:
      uVar2 = 0x109;
      break;
    case 2:
      uVar2 = 0x10a;
      break;
    case 3:
      uVar2 = 0xeb;
      break;
    case 4:
      uVar2 = 0xf1;
      break;
    case 5:
      uVar2 = 199;
      if ((*(byte *)((int)param_1 + 0xe6a) & 1) != 0) {
        uVar2 = 0xca;
      }
      break;
    case 6:
      uVar2 = 200;
      if ((*(byte *)((int)param_1 + 0xe6a) & 1) != 0) {
        uVar2 = 0xcb;
      }
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0043f5b0(9,0x41200000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00b67710();
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
    iVar3 = thunk_FUN_00e58ed0(param_1[0x687]);
    if (iVar3 == 0) {
      FUN_009fdde0();
      return;
    }
    break;
  case 3:
    fVar4 = (float10)FUN_00ac8f80();
    if (fVar4 - (float10)0.011111111 < (float10)0) {
      FUN_009fdde0();
      FUN_00ac8fd0((float)(float10)0);
      return;
    }
    FUN_00ac8fd0((float)(fVar4 - (float10)0.011111111));
  }
  return;
}

// 00B6D4C0  FUN_00b6d4c0  size=203  [between]
void __fastcall FUN_00b6d4c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    if ((param_1[0x2a1] != 0) && (iVar1 = param_1[0x13c], iVar2 = FUN_00a81330(), iVar2 == iVar1)) {
      (**(code **)(*(int *)param_1[0x2a1] + 0x15c))(0xffffffff,0);
    }
    (**(code **)(*param_1 + 0x15c))(0xffffffff,0);
    param_1[0x139] = 1;
    FUN_00b67710();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42480000;
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(3,0,1);
    }
  }
  else if (param_1[0x187] == 1) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = thunk_FUN_00e58ed0(param_1[0x687]);
    if (iVar1 == 0) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00B6D590  FUN_00b6d590  size=118  [between]
void __fastcall FUN_00b6d590(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b67fc0(*(undefined4 *)(param_1 + 0x19f0),*(undefined4 *)(param_1 + 0x19f4));
  if (iVar1 != 0) {
    FUN_00b66b20(0x80003,0,0,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xdc0);
  if ((((iVar1 != 0xd) && (iVar1 != 0xe)) && (iVar1 != 0xf)) && (25.0 < *(float *)(param_1 + 0xa8c))
     ) {
    FUN_00b66b20(0xb0001,0,0,0,0);
  }
  return;
}

// 00B6D610  FUN_00b6d610  size=125  [between]
void __fastcall FUN_00b6d610(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b67fc0(*(undefined4 *)(param_1 + 0x19f0),*(undefined4 *)(param_1 + 0x19f4));
  if (iVar1 != 0) {
    FUN_00b66b20(0x80003,0,0,0,0);
    return;
  }
  if (*(float *)(param_1 + 0xa8c) < 12.25) {
    if (*(int *)(param_1 + 0xdc0) - 7U < 4) {
      FUN_00b66b20(0xb0002,0,0,0,0);
      return;
    }
    FUN_00b66b20(0xb0000,0,0,0,0);
  }
  return;
}

// 00B6D690  FUN_00b6d690  size=56  [between]
void __fastcall FUN_00b6d690(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b67fc0(*(undefined4 *)(param_1 + 0x19f0),*(undefined4 *)(param_1 + 0x19f4));
  if (iVar1 != 0) {
    FUN_00b66b20(0x80003,0,0,0,0);
  }
  return;
}

// 00B6D6D0  FUN_00b6d6d0  size=273  [between]
void __fastcall FUN_00b6d6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20800000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0;
    switch(*(undefined4 *)(param_1 + 0xdc0)) {
    case 8:
      *(uint *)(param_1 + 0xe50) = *(uint *)(param_1 + 0xe50) | 0x40;
    case 7:
      uVar2 = 0xe1;
      break;
    case 10:
      *(uint *)(param_1 + 0xe50) = *(uint *)(param_1 + 0xe50) | 0x40;
    case 9:
      uVar2 = 0xd2;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,*(uint *)(param_1 + 0xe50) | 0x8000000,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00b6d795;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b66b20(0xb0000,0,0,0,0);
  }
LAB_00b6d795:
  iVar1 = FUN_00c158c0();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xe54) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xe54) + 0xbb0) = 1;
    }
    if (*(int *)(param_1 + 0xe58) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xe58) + 0xbb0) = 1;
    }
    FUN_00c272a0(0x40a00000);
  }
  return;
}

// 00B6D800  FUN_00b6d800  size=254  [between]
void __fastcall FUN_00b6d800(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xe50) = 0;
    switch(*(undefined4 *)(param_1 + 0xdc0)) {
    case 8:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 7:
      uVar1 = 0xe2;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 9:
      uVar1 = 0xd3;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xb:
      uVar1 = 0xfc;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xd:
      uVar1 = 0xee;
      break;
    case 0xf:
      uVar1 = 0xf4;
    }
    FUN_00aa4080(uVar1,0,0,0x3f800000,*(uint *)(param_1 + 0xe50) | 0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b66b20(0xb0000,0,0,0,0);
  }
  return;
}

// 00B6D930  FUN_00b6d930  size=270  [between]
void __fastcall FUN_00b6d930(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x824) = 4;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xe50) = 0;
    switch(*(undefined4 *)(param_1 + 0xdc0)) {
    case 8:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 7:
      uVar1 = 0xe4;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 9:
      uVar1 = 0xd5;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xb:
      uVar1 = 0xfd;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0xe50) = 0x40;
    case 0xd:
      uVar1 = 0xef;
      break;
    case 0xf:
      uVar1 = 0xf5;
    }
    FUN_00aa4080(uVar1,0,0,0x3f800000,*(undefined4 *)(param_1 + 0xe50),0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b66b20(0xb0000,0,0,0,0);
  }
  return;
}

// 00B6DA70  FUN_00b6da70  size=479  [between]
void __fastcall FUN_00b6da70(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    uVar2 = 0;
    param_1[0x394] = 0;
    switch(param_1[0x370]) {
    case 8:
      param_1[0x394] = 0x40;
    case 7:
      uVar2 = 0xe3;
      break;
    case 10:
      param_1[0x394] = 0x40;
    case 9:
      uVar2 = 0xd4;
      break;
    case 0xc:
      param_1[0x394] = 0x40;
    case 0xb:
      uVar2 = 0xfa;
      break;
    case 0xe:
      param_1[0x394] = 0x40;
    case 0xd:
      uVar2 = 0xed;
      break;
    case 0xf:
      uVar2 = 0xf3;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,param_1[0x394] | 0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(1,param_1 + 0x49c);
    FUN_00e5e0c0("em0030_se_dmg_spark_death",param_1,0xffffffff,0);
    FUN_0043f5b0(9,0x41200000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00b67710();
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
    iVar3 = thunk_FUN_00e58ed0(param_1[0x687]);
    if (iVar3 == 0) {
      FUN_009fdde0();
      return;
    }
    break;
  case 3:
    fVar4 = (float10)FUN_00ac8f80();
    if ((float10)0 <= fVar4 - (float10)0.011111111) {
      FUN_00ac8fd0((float)(fVar4 - (float10)0.011111111));
      return;
    }
    FUN_009fdde0();
    FUN_00ac8fd0((float)(float10)0);
    return;
  }
  return;
}

// 00B6DC90  FUN_00b6dc90  size=368  [between]
void __fastcall FUN_00b6dc90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x20000000;
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00b6ddcc;
  }
  uVar1 = 0;
  uVar3 = 0x8000000;
  switch(*(undefined4 *)(param_1 + 0xdc0)) {
  case 0x10:
    *(undefined4 *)(param_1 + 0xdc0) = 9;
    uVar1 = 0xe6;
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0xdc0) = 10;
    uVar1 = 0xe6;
    goto LAB_00b6dd94;
  case 0x12:
    *(undefined4 *)(param_1 + 0xdc0) = 0xb;
    uVar1 = 0xe7;
    break;
  case 0x13:
    *(undefined4 *)(param_1 + 0xdc0) = 0xc;
    uVar1 = 0xe7;
    goto LAB_00b6dd94;
  case 0x14:
    *(undefined4 *)(param_1 + 0xdc0) = 0xd;
    uVar1 = 0xe8;
    break;
  case 0x15:
    uVar1 = 0xe8;
    goto LAB_00b6dd8a;
  case 0x16:
    *(undefined4 *)(param_1 + 0xdc0) = 0xb;
    uVar1 = 0xd7;
    break;
  case 0x17:
    *(undefined4 *)(param_1 + 0xdc0) = 0xc;
    uVar1 = 0xd7;
    goto LAB_00b6dd94;
  case 0x18:
    *(undefined4 *)(param_1 + 0xdc0) = 0xd;
    uVar1 = 0xd8;
    break;
  case 0x19:
    uVar1 = 0xd8;
    goto LAB_00b6dd8a;
  case 0x1a:
    *(undefined4 *)(param_1 + 0xdc0) = 0xd;
    uVar1 = 0xff;
    break;
  case 0x1b:
    uVar1 = 0xff;
LAB_00b6dd8a:
    *(undefined4 *)(param_1 + 0xdc0) = 0xe;
LAB_00b6dd94:
    uVar3 = 0x8000040;
  }
  FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_00b6ddcc:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b66b20(0xb0000,0,0,0,0);
  }
  return;
}

// 00B6DE30  FUN_00b6de30  size=31  [between]
void __fastcall FUN_00b6de30(int param_1)

{
  if ((*(uint *)(param_1 + 0xe68) & 0x100) == 0) {
    FUN_00b66b20(0xb0000,0,0,0,0);
  }
  return;
}

// 00B6DE50  Em0030::vf150  size=399  [class]
void __thiscall Em0030::vf150(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_retaddr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    if (unaff_retaddr == 0) {
      FUN_00b66b20(0x30001,0,0,0,0);
      return;
    }
    if (unaff_retaddr == 0x24) {
      FUN_00b66b20(0x30004,0,0,0,0);
      return;
    }
    if (unaff_retaddr == 0x2d) {
      FUN_00b66b20(0xa0000,0,0,0,0);
      return;
    }
    if (unaff_retaddr == 0x32) {
      FUN_00a93090(2);
      FUN_00b66b20(0xa0002,0,0,0,0);
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 2;
          FUN_00a81330(2,0,0,0);
          uVar1 = FUN_00a7c8a0();
          FUN_00b62e20(uVar1);
          FUN_00a8caf0(uVar3,uVar4,uVar5,uVar6);
          return;
        }
      }
    }
    else {
      if (unaff_retaddr == 0x31) {
        FUN_00b66b20(0xa0001,0,0,0,0);
        return;
      }
      if (unaff_retaddr == 0x34) {
        FUN_00b66b20(0xa0003,0,0,0,0);
        return;
      }
      if (unaff_retaddr == 0x35) {
        FUN_00b66b20(0xa0004,0,0,0,0);
        return;
      }
      if (unaff_retaddr == 0x36) {
        FUN_00b66b20(0xa0005,0,0,0,0);
      }
    }
  }
  return;
}

// 00B6DFE0  FUN_00b6dfe0  size=741  [between]
void __fastcall FUN_00b6dfe0(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  float fVar6;
  
  iVar1 = FUN_00a81330();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if ((iVar1 == 0) || (piVar2 = (int *)FUN_00a7c8a0(), piVar2 == (int *)0x0)) {
LAB_00b6e020:
    (**(code **)(*param_1 + 0x15c))(0x2d,0);
    FUN_009f8b10();
                    /* WARNING: Could not recover jumptable at 0x00b6e043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  puVar4 = &DAT_01be9db8;
  (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
  iVar1 = FUN_00dd6d80(puVar4);
  if (iVar1 == 0) goto LAB_00b6e020;
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  param_1[0x39a] = param_1[0x39a] & 0x7fffffff;
  FUN_00c27260(param_1[0x67f]);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x126,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar5 = FUN_009f8b40();
    FUN_00ac8a80(uVar5);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00a9f4c0("RushBlock",0,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x128,0,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x127,0,0);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b6e158;
  case 3:
LAB_00b6e158:
    uVar5 = 0;
    FUN_00a92f90(0);
    fVar3 = (float10)FUN_00407b40(uVar5);
    fVar6 = (float)fVar3;
    uVar5 = 0;
    FUN_00a92f90(0,fVar6);
    FUN_004b4c60(uVar5,fVar6);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a947e0(0,0,piVar2[0x24f],0);
    FUN_00a96030(0,piVar2[0x24e]);
    return;
  case 4:
    FUN_00aa4080(0x129,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    param_1[0x39a] = param_1[0x39a] | 0x40000;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x19);
    if (iVar1 != 0) {
      FUN_009f8b10();
    }
    FUN_00b679a0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b6e252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x12a,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_009f8b10();
                    /* WARNING: Could not recover jumptable at 0x00b6e2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B6E2F0  FUN_00b6e2f0  size=818  [between]
void __fastcall FUN_00b6e2f0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  iVar2 = FUN_00a81330();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      iVar2 = FUN_00a8cac0();
      if (((iVar2 != 0) && (iVar2 = FUN_00a8cab0(), iVar2 == 0xe3)) && (param_1[0x187] != 0)) {
        FUN_00a8ce90(&fStack_30,auStack_20);
        fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
        piVar3[0x25] = (int)(float)fVar4;
        D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
        fVar7 = (float)param_1[0x11];
        fVar1 = (float)param_1[0x12];
        piVar3[0x14] = (int)((float)param_1[0x10] + fStack_30);
        piVar3[0x15] = (int)(fVar7 + fStack_2c);
        piVar3[0x16] = (int)(fVar1 + fStack_28);
        piVar3[0x17] = iStack_24;
      }
      param_1[0x39a] = param_1[0x39a] | 0x20000000;
      FUN_00c27260(param_1[0x67f]);
      switch(param_1[0x187]) {
      case 0:
        FUN_00aa4080(0x164,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        uVar6 = 0;
        FUN_00a92f90(0);
        fVar4 = (float10)FUN_00407b40(uVar6);
        fVar7 = (float)fVar4;
        uVar6 = 0;
        FUN_00a92f90(0,fVar7);
        FUN_00407b10(uVar6,fVar7);
        if ((param_1[0x39b] & 0x800000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0xfa,param_1 + 0x4c8);
          param_1[0x39b] = param_1[0x39b] | 0x800000;
        }
      case 1:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar2 = FUN_00a8c760(0x1f);
        if (iVar2 != 0) {
          if ((param_1[0x39b] & 0x200000U) == 0) {
            FUN_00b67a90(0,1,1);
          }
          else {
            param_1[0x139] = 1;
          }
        }
        iVar2 = FUN_00a94ce0(0);
        if ((iVar2 != 0) && (param_1[0x187] = param_1[0x187] + 1, param_1[0x139] != 0)) {
          param_1[0x187] = 3;
          return;
        }
        break;
      case 2:
        FUN_00aa4080(0x166,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 4;
        FUN_00ac80a0(0x3f800000,0x3f800000);
        return;
      case 3:
        FUN_00aa4080(0x167,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      case 4:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar2 = FUN_00a94ce0(0);
        if ((iVar2 != 0) && ((**(code **)(*param_1 + 0x34c))(), param_1[0x139] != 0)) {
          FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
          FUN_00b66b20(0x80000,0,0,0,0);
          return;
        }
      }
      return;
    }
  }
  (**(code **)(*param_1 + 0x15c))(0x31,0);
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B6E640  FUN_00b6e640  size=1456  [between]
void __fastcall FUN_00b6e640(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_EBX;
  uint uVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  
  param_1[0x39a] = param_1[0x39a] | 0xa0000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  piVar5 = (int *)0x0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar9);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
  }
  uVar4 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar9 = &DAT_01be9d54;
        (**(code **)(*piVar2 + 4))(&DAT_01be9d54);
        iVar3 = FUN_00dd6d80(puVar9);
        uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
      }
    }
  }
  if (piVar5 != (int *)0x0) {
    FUN_00a92fb0();
    fVar6 = (float10)FUN_00e049b0();
    param_1[0x244] = (int)(float)fVar6;
    FUN_00c27260(param_1[0x67f]);
    switch(param_1[0x187]) {
    case 0:
      FUN_00aa4080(0x179,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        FUN_00aa4080(0x17b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar1 = FUN_00ac8660(0,0x1e);
        param_1[0x250] = iVar1;
        FUN_00a8cb60(2);
        FUN_00a8cb60(2);
        if (uVar4 != 0) {
          FUN_00a8cb60(2);
          return;
        }
      }
      break;
    case 2:
      FUN_00cbc8f0(0x4000,1);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar1 = FUN_00b7a7c0();
      param_1[0x250] = param_1[0x250] - iVar1;
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        if (param_1[0x250] < 0) {
          DAT_018b56b4 = 1;
          FUN_00aa4080(0x17c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00ac80a0(0x3f800000,0x3f800000);
          FUN_00a8cb60(4);
          FUN_00a8cb60(4);
          if (uVar4 != 0) {
            FUN_00a8cb60(4);
            return;
          }
        }
        else {
          FUN_00aa4080(0x17d,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00ac80a0(0x3f800000,0x3f800000);
          param_1[0x254] = 0;
          iVar1 = FUN_00ac84d0(0x1f);
          param_1[0x255] = iVar1;
          iVar1 = FUN_00ac84d0(0x20);
          param_1[0x256] = iVar1;
          iVar1 = FUN_00ac84d0(0x21);
          param_1[599] = iVar1;
          FUN_00a8cb60(6);
          FUN_00a8cb60(6);
          if (uVar4 != 0) {
            FUN_00a8cb60(6);
            return;
          }
        }
      }
      break;
    case 3:
    case 5:
      break;
    case 4:
      (**(code **)(*param_1 + 0x220))(0x40a00000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar1 = FUN_00a8c760(0xb);
      if (iVar1 != 0) {
        iVar1 = *param_1;
        uVar8 = 0;
        uVar7 = FUN_00ac84d0(0x22);
        (**(code **)(iVar1 + 0x30c))(uVar7,uVar8);
        FUN_00ac4160();
      }
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        FUN_00b66a90(2);
        (**(code **)(*param_1 + 0x15c))(0x32,unaff_EBX);
        if (param_1[0x21c] < 1) {
          param_1[0x39a] = param_1[0x39a] | 0x1000000;
          uVar7 = 0x80000;
        }
        else {
          uVar7 = 0x70005;
        }
        FUN_00b66b20(uVar7,0,0,0,0);
        (**(code **)(*piVar5 + 0x15c))(0x32,param_1[0x13c]);
        FUN_00a7c950();
        if (piVar5[0x1d9] != 0) {
          FUN_008e6d00();
        }
        FUN_00dc1270(0x41700000,0);
        FUN_00ba6810(1,1);
        (**(code **)(*piVar5 + 0x388))(0);
                    /* WARNING: Could not recover jumptable at 0x00b6ea9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x314))();
        return;
      }
      break;
    case 6:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a8c760(0xb);
      if (iVar3 != 0) {
        if (param_1[0x254] == 0) {
          (**(code **)(*piVar5 + 0x30c))(param_1[0x255],0);
        }
        if (param_1[0x254] == 1) {
          (**(code **)(*piVar5 + 0x30c))(param_1[0x256],0);
        }
        if (param_1[0x254] == 2) {
          (**(code **)(*piVar5 + 0x30c))(param_1[599],0);
        }
        param_1[0x254] = param_1[0x254] + 1;
      }
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_009f8b10();
        FUN_00b66a90(2);
        (**(code **)(*param_1 + 0x15c))(0x32,iVar1);
        (**(code **)(*param_1 + 0x34c))();
        (**(code **)(*piVar5 + 0x15c))(0x32,param_1[0x13c]);
        FUN_00a7c950();
        if (piVar5[0x1d9] != 0) {
          FUN_008e6d00();
        }
        FUN_00dc1270(0x41700000,0);
        FUN_00ba6810(1,1);
        iVar1 = FUN_00b7c970();
        if (iVar1 < 1) {
          uVar7 = 0xdb;
        }
        else {
          uVar7 = 0xcd;
        }
        FUN_00a8caf0(uVar7,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00b6ebe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x314))();
        return;
      }
    }
    return;
  }
  FUN_00b66a90(2);
  (**(code **)(*param_1 + 0x15c))(0x32,0);
  (**(code **)(*param_1 + 0x34c))();
                    /* WARNING: Could not recover jumptable at 0x00b6e72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x314))();
  return;
}

// 00B6EC10  FUN_00b6ec10  size=811  [between]
void __fastcall FUN_00b6ec10(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined *puVar5;
  float fVar6;
  uint local_4;
  
  local_4 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      local_4 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar5);
      local_4 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  param_1[0x39a] = param_1[0x39a] | 0x20000200;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x18c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x362] = 1;
    if (local_4 != 0) {
      uVar4 = 0;
      FUN_00a92f90(0);
      fVar3 = (float10)FUN_00407b40(uVar4);
      fVar6 = (float)fVar3;
      uVar4 = 0;
      FUN_00a92f90(0,fVar6);
      FUN_00407b10(uVar4,fVar6);
    }
    param_1[0x301] = 1;
    param_1[0x39a] = param_1[0x39a] | 0x40;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 2:
    FUN_00aa4080(0x18d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x1f);
    if (iVar1 != 0) {
      FUN_00b67a90(0,1,0);
      if ((param_1[0x39b] & 0x80000U) == 0) {
        FUN_00ac95a0("_EFD03",1);
        param_1[0x39b] = param_1[0x39b] | 0x80000;
        FUN_00ac8d80(7,1);
        FUN_00ac8d80(8,1);
        if ((param_1[0x39b] & 0x300000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
        }
      }
      if ((param_1[0x39b] & 0x100000U) == 0) {
        FUN_00ac95a0("_EFD02",1);
        param_1[0x39b] = param_1[0x39b] | 0x100000;
        FUN_00ac8d80(2,1);
        FUN_00ac8d80(3,1);
        if ((param_1[0x39b] & 0x280000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
        }
      }
    }
    break;
  case 4:
    uVar4 = 0x18e;
    goto LAB_00b6ee8b;
  case 5:
  case 8:
    goto switchD_00b6ec83_caseD_5;
  case 6:
  case 9:
    if (param_1[0x4c2] == 0) {
      FUN_009fdde0();
      FUN_00b626b0(local_4);
      return;
    }
    goto switchD_00b6ec83_default;
  case 7:
    uVar4 = 399;
LAB_00b6ee8b:
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
switchD_00b6ec83_caseD_5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00b66b20(0x80002,0,0,0,0);
      FUN_00b626b0(local_4);
      return;
    }
  default:
    goto switchD_00b6ec83_default;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b626b0(local_4);
    return;
  }
switchD_00b6ec83_default:
  FUN_00b626b0(local_4);
  return;
}

// 00B6EF70  FUN_00b6ef70  size=788  [between]
void __fastcall FUN_00b6ef70(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  float fVar7;
  uint local_4;
  
  local_4 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      local_4 = 0;
    }
    else {
      puVar6 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar6);
      local_4 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  param_1[0x39a] = param_1[0x39a] | 0x20000200;
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x197,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x362] = 1;
    if (local_4 != 0) {
      uVar4 = 0;
      FUN_00a92f90(0);
      fVar3 = (float10)FUN_00407b40(uVar4);
      fVar7 = (float)fVar3;
      uVar4 = 0;
      FUN_00a92f90(0,fVar7);
      FUN_00407b10(uVar4,fVar7);
    }
    param_1[0x301] = 1;
    param_1[0x39a] = param_1[0x39a] | 0x40;
    break;
  case 1:
    break;
  case 2:
    uVar5 = 0;
    uVar4 = 0x18e;
    goto LAB_00b6f1b5;
  case 3:
  case 6:
    goto switchD_00b6efe3_caseD_3;
  case 4:
    if (param_1[0x4c2] == 0) {
      FUN_009fdde0();
    }
  case 5:
    uVar5 = 0x3d088889;
    uVar4 = 399;
LAB_00b6f1b5:
    FUN_00aa4080(uVar4,0,uVar5,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
switchD_00b6efe3_caseD_3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00b66b20(0x80002,0,0,0,0);
      FUN_00b626b0(local_4);
      return;
    }
    goto switchD_00b6efe3_default;
  case 7:
    if (param_1[0x4c2] == 0) {
      FUN_009fdde0();
      FUN_00b626b0(local_4);
      return;
    }
  default:
    goto switchD_00b6efe3_default;
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0x1f);
  if (iVar1 != 0) {
    FUN_00b67a90(0,1,0);
    if ((param_1[0x39b] & 0x80000U) == 0) {
      FUN_00ac95a0("_EFD03",1);
      param_1[0x39b] = param_1[0x39b] | 0x80000;
      FUN_00ac8d80(7,1);
      FUN_00ac8d80(8,1);
      if ((param_1[0x39b] & 0x300000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
      }
    }
    if ((param_1[0x39b] & 0x100000U) == 0) {
      FUN_00ac95a0("_EFD02",1);
      param_1[0x39b] = param_1[0x39b] | 0x100000;
      FUN_00ac8d80(2,1);
      FUN_00ac8d80(3,1);
      if ((param_1[0x39b] & 0x280000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
      }
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b626b0(local_4);
    return;
  }
switchD_00b6efe3_default:
  FUN_00b626b0(local_4);
  return;
}

// 00B6F2B0  FUN_00b6f2b0  size=806  [between]
void __fastcall FUN_00b6f2b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 uVar6;
  float fVar7;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  param_1[0x39a] = param_1[0x39a] | 0x20000200;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x19d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (uVar3 != 0) {
      uVar6 = 0;
      FUN_00a92f90(0);
      fVar4 = (float10)FUN_00407b40(uVar6);
      fVar7 = (float)fVar4;
      uVar6 = 0;
      FUN_00a92f90(0,fVar7);
      FUN_00407b10(uVar6,fVar7);
    }
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 100))();
    param_1[0x39a] = param_1[0x39a] | 0x20;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x34);
    if (iVar1 != 0) {
      FUN_00b67a90(0,1,0);
      FUN_00ac4160();
    }
    iVar1 = FUN_00a8c760(0x35);
    if (iVar1 != 0) {
      if ((param_1[0x39b] & 0x80000U) == 0) {
        FUN_00ac95a0("_EFD03",1);
        param_1[0x39b] = param_1[0x39b] | 0x80000;
        FUN_00ac8d80(7,1);
        FUN_00ac8d80(8,1);
        if ((param_1[0x39b] & 0x300000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x194,param_1 + 0x5d0);
        }
      }
      FUN_00ac4160();
    }
    iVar1 = FUN_00a8c760(0x36);
    if (iVar1 != 0) {
      if ((param_1[0x39b] & 0x100000U) == 0) {
        FUN_00ac95a0("_EFD02",1);
        param_1[0x39b] = param_1[0x39b] | 0x100000;
        FUN_00ac8d80(2,1);
        FUN_00ac8d80(3,1);
        if ((param_1[0x39b] & 0x280000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x5d0);
        }
      }
      FUN_00ac4160();
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00ac8d40(1);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00b626b0(uVar3);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x19e,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00b626b0(uVar3);
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x19f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x139] = 1;
      FUN_00b66b20(0x80003,0,0,0,0);
      param_1[0x682] = 0;
      FUN_00b626b0(uVar3);
      return;
    }
  }
  FUN_00b626b0(uVar3);
  return;
}

// 00B6F5F0  FUN_00b6f5f0  size=171  [between]
int __thiscall
FUN_00b6f5f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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

// 00B6F6A0  FUN_00b6f6a0  size=228  [between]
undefined4 __fastcall FUN_00b6f6a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x183c) == 0) && ((*(uint *)(param_1 + 0xe68) & 0x20000) != 0)) {
    return 0;
  }
  uVar2 = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    if ((1.2217305 < *(float *)(param_1 + 0xaa0)) && (*(float *)(param_1 + 0xaa0) < 2.3561945)) {
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        FUN_00b66b20(0x40004,3,0,0,0);
        return 1;
      }
      FUN_00b66b20(0x40004,4,0,0,0);
      return 1;
    }
    if (2.3561945 < *(float *)(param_1 + 0xaa0)) {
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        FUN_00b66b20(0x40005,3,0,0,0);
        return 1;
      }
      FUN_00b66b20(0x40005,4,0,0,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}

// 00B6F790  FUN_00b6f790  size=248  [between]
uint __fastcall FUN_00b6f790(int param_1)

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
  local_44 = FUN_00907640(param_1 + 0x17f8,local_48,&local_20);
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
    FUN_0090fa30(param_1 + 0x17f8,0,&local_20,0x3f000000,&local_30,iVar1 << 0x10 | 7,
                 "Em0030PlayerView");
  }
  return local_44;
}

// 00B6F890  FUN_00b6f890  size=280  [between]
int __fastcall FUN_00b6f890(int param_1)

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
  
  iVar1 = FUN_00907640(param_1 + 0x1838,&local_84,&local_70);
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
  pcStack_28 = "Em0030WallCheck";
  uStack_44 = local_84;
  uStack_40 = local_80;
  uStack_3c = 0x3dcccccd;
  aiStack_6c[0] = param_1 + 0x1838;
  FUN_0090fb00(aiStack_6c);
  return iVar1;
}

// 00B6F9B0  FUN_00b6f9b0  size=659  [between]
void __fastcall FUN_00b6f9b0(int param_1)

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
  
  fVar1 = *(float *)(param_1 + 0x180c) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x180c) = fVar1;
  if (fVar1 <= 0.0) {
    switch(*(undefined4 *)(param_1 + 0x1804)) {
    case 0:
      local_80 = 0;
      local_7c = 0;
      local_78 = 0x40e00000;
      FUN_00b67430(&local_80);
      *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
      return;
    case 1:
      iVar2 = FUN_00b673f0(param_1 + 0x1808);
      *(undefined4 *)(param_1 + 0x180c) = 0x42700000;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0xc0e00000;
      *(uint *)(param_1 + 0x1810) = (uint)(iVar2 == 0);
      FUN_00b67430(&local_70);
      *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
      return;
    case 2:
      iVar2 = FUN_00b673f0(param_1 + 0x1808);
      *(undefined4 *)(param_1 + 0x180c) = 0x42700000;
      local_60 = 0x40e00000;
      local_5c = 0;
      local_58 = 0;
      *(uint *)(param_1 + 0x1814) = (uint)(iVar2 == 0);
      FUN_00b67430(&local_60);
      *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
      return;
    case 3:
      iVar2 = FUN_00b673f0(param_1 + 0x1808);
      *(undefined4 *)(param_1 + 0x180c) = 0x42700000;
      local_50 = 0xc0e00000;
      *(uint *)(param_1 + 0x1818) = (uint)(iVar2 == 0);
      local_4c = 0;
      local_48 = 0;
      FUN_00b67430(&local_50);
      *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
      return;
    case 4:
      iVar2 = FUN_00b673f0(param_1 + 0x1808);
      *(undefined4 *)(param_1 + 0x180c) = 0x42700000;
      local_40 = 0x40000000;
      local_3c = 0;
      *(uint *)(param_1 + 0x181c) = (uint)(iVar2 == 0);
      local_38 = 0x40000000;
      FUN_00b67430(&local_40);
      *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
      return;
    case 5:
      iVar2 = FUN_00b673f0(param_1 + 0x1808);
      *(undefined4 *)(param_1 + 0x180c) = 0x42700000;
      local_30 = 0xc0000000;
      local_2c = 0;
      local_28 = 0x40000000;
      *(uint *)(param_1 + 0x1820) = (uint)(iVar2 == 0);
      FUN_00b67430(&local_30);
      *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
      return;
    case 6:
      iVar2 = FUN_00b673f0(param_1 + 0x1808);
      *(undefined4 *)(param_1 + 0x180c) = 0x42700000;
      local_20 = 0;
      *(uint *)(param_1 + 0x1824) = (uint)(iVar2 == 0);
      local_1c = 0x41200000;
      local_18 = 0;
      FUN_00b67430(&local_20);
      *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
      return;
    case 7:
      iVar2 = FUN_00b673f0(param_1 + 0x1808);
      *(undefined4 *)(param_1 + 0x180c) = 0x42700000;
      *(uint *)(param_1 + 0x1828) = (uint)(iVar2 == 0);
      *(undefined4 *)(param_1 + 0x1804) = 0;
      return;
    }
  }
  return;
}

// 00B6FC90  Em0030::vf48  size=333  [class]
void __fastcall Em0030::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  
  fVar1 = (float)param_1[0x63c];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x63c] = (int)((float)param_1[0x63c] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x37a] != ((float)param_1[0x37a] == 0.0)) {
    param_1[0x37a] = (int)((float)param_1[0x37a] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x681] != ((float)param_1[0x681] == 0.0)) {
    param_1[0x681] = (int)((float)param_1[0x681] - (float)param_1[0x244]);
  }
  if ((float)param_1[0x681] < 0.0) {
    param_1[0x682] = 0;
  }
  piVar3 = param_1 + 0x395;
  iVar2 = 2;
  do {
    if (*piVar3 != 0) {
      FUN_00b76a90(param_1[0x2a2]);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  BehaviorEmBase::vf48();
  if (((param_1[0x39b] & 0x20000U) != 0) &&
     (fVar1 = (float)param_1[0x67e], param_1[0x67e] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  param_1[0x5fd] = (uint)param_1[0x351] >> 0x19 & 1;
  iVar2 = FUN_00ac48f0(0);
  param_1[0x5fc] = iVar2;
  FUN_00b6f9b0();
  if (param_1[0x2a1] != 0) {
    iVar2 = FUN_00b66d60();
    param_1[0x60c] = iVar2;
  }
  iVar2 = FUN_00b671a0();
  param_1[0x5ff] = iVar2;
  FUN_00b67d50();
  FUN_00b679a0();
  FUN_00b68090();
  iVar2 = FUN_00b6f890();
  param_1[0x60f] = iVar2;
  return;
}

// 00B6FDE0  Em0030::vf32C  size=641  [class]
undefined4 __fastcall Em0030::vf32C(int param_1)

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
  undefined1 local_170 [16];
  undefined1 local_160 [348];
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  iVar14 = FUN_00a8c240();
  if ((iVar14 == 0) && ((*(byte *)(param_1 + 0x4c0) & 1) != 0)) {
    iVar14 = FUN_00a8ef10();
    if (iVar14 == 0) {
      iVar14 = FUN_00a8c760(9);
      if ((iVar14 == 0) && (*(int *)(param_1 + 0x18fc) != 6)) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa00);
        if (*(int *)(param_1 + 0xa18) != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        piVar18 = *(int **)(param_1 + 0x67c);
        piVar17 = piVar18 + *(int *)(param_1 + 0x684) * 0x54;
        FUN_00445db0();
        iVar14 = -1;
        bVar13 = false;
        if (piVar18 != piVar17) {
          do {
            if ((*piVar18 != 0x147) && (iVar14 < piVar18[1])) {
              bVar13 = true;
              FUN_00448f50(piVar18);
              iVar14 = piVar18[1];
            }
            piVar18 = piVar18 + 0x54;
          } while (piVar18 != piVar17);
          if (bVar13) {
            iVar14 = FUN_00a8f040(local_160);
            if (iVar14 == 0) {
              *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) & 0xff87ffff;
              FUN_00a81330();
              iVar14 = FUN_00a7c8a0();
              fVar1 = *(float *)(iVar14 + 0x40);
              fVar2 = *(float *)(iVar14 + 0x44);
              fVar3 = *(float *)(iVar14 + 0x48);
              fVar4 = *(float *)(param_1 + 0x40);
              fVar5 = *(float *)(param_1 + 0x44);
              fVar6 = *(float *)(param_1 + 0x48);
              pfVar15 = (float *)FUN_00a925a0(local_170);
              fVar7 = pfVar15[1];
              fVar8 = *pfVar15;
              fVar9 = pfVar15[2];
              fVar10 = *(float *)(param_1 + 0x40);
              fVar11 = *(float *)(param_1 + 0x44);
              fVar12 = *(float *)(param_1 + 0x48);
              pfVar15 = (float *)FUN_00a92640(local_170);
              fVar10 = pfVar15[2] * (fVar3 - fVar12) +
                       *pfVar15 * (fVar1 - fVar10) + pfVar15[1] * (fVar2 - fVar11);
              if (fVar10 <= 0.5) {
                if (-0.5 <= fVar10) {
                  if (fVar9 * (fVar3 - fVar6) + (fVar1 - fVar4) * fVar8 + fVar7 * (fVar2 - fVar5) <=
                      0.0) {
                    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x200000;
                  }
                  else {
                    *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x400000;
                  }
                }
                else {
                  *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x80000;
                }
              }
              else {
                *(uint *)(param_1 + 0xe68) = *(uint *)(param_1 + 0xe68) | 0x100000;
              }
              iVar14 = FUN_00b6c7b0(local_160);
              if (iVar14 == 0) {
                if (*(int *)(param_1 + 0x4e4) == 0) {
                  uVar16 = FUN_00b6be30(local_160);
                }
                else {
                  uVar16 = FUN_00b64880(local_160);
                }
                if (*(int *)(param_1 + 0xa18) != 0) {
                  LeaveCriticalSection(lpCriticalSection);
                }
                return uVar16;
              }
            }
          }
        }
        if (*(int *)(param_1 + 0xa18) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return 0;
}

// 00B70070  FUN_00b70070  size=216  [callgraph]
void __thiscall
FUN_00b70070(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  iVar1 = FUN_00b6f5f0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
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
      *(int **)(param_1 + 0xe54 + param_2 * 4) = piVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xe54 + param_2 * 4) = 0;
  return;
}

// 00B70150  FUN_00b70150  size=1827  [callgraph]
void __fastcall FUN_00b70150(int param_1)

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
  if ((*(uint *)(param_1 + 0xdc8) & 0x80000000) == 0) {
    fStack_248 = 1.6806459e-38;
    local_214 = FUN_00a12210();
    iStack_244 = 0xe11;
    fStack_248 = 1.6806482e-38;
    local_218 = (float)FUN_00a12210();
  }
  else {
    fStack_248 = 1.6806421e-38;
    local_218 = (float)FUN_00a12210();
    iStack_244 = 0xe11;
    fStack_248 = 1.6806444e-38;
    local_214 = FUN_00a12210();
  }
  iStack_244 = 0x62;
  fStack_248 = 1.68065e-38;
  iVar1 = FUN_00a12210();
  iStack_244 = 0x42;
  fStack_248 = 1.6806525e-38;
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
    puStack_250 = (undefined1 *)0xb7024a;
    D3DXMatrixInverse();
    puStack_250 = auStack_1ac;
    pfStack_254 = &fStack_21c;
    piStack_258 = &iStack_1dc;
    piStack_25c = (int *)0xb70261;
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
    bVar3 = *(char *)(param_1 + 0xe10) == '\0';
    bVar4 = *(char *)(param_1 + 0xe11) == '\0';
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
      if ((*(uint *)(param_1 + 0xdc8) & 0x80000000) == 0) {
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
      if ((*(uint *)(param_1 + 0xdc8) & 0x80000000) == 0) {
        bVar3 = false;
        bVar4 = true;
      }
      else {
        bVar3 = true;
        bVar4 = false;
      }
    }
    iVar1 = FUN_00a8c760(0x14);
    if ((iVar1 != 0) || ((*(uint *)(param_1 + 0xe68) & 0x80000000) != 0)) {
      bVar3 = false;
      bVar4 = false;
    }
    if ((DAT_01bea060 & 0x2000000) != 0) {
      bVar3 = false;
      bVar4 = false;
    }
    if (*(char *)(param_1 + 0xe10) == '\0') {
      if (*(float *)(unaff_EBX + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xe10) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xe10) == '\x01') && (0.089999996 < *(float *)(unaff_EBX + 0x54)))
    {
      local_20c = 1;
      *(undefined1 *)(param_1 + 0xe10) = 0;
    }
    if (*(char *)(param_1 + 0xe11) == '\0') {
      if (*(float *)(unaff_ESI + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xe11) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xe11) == '\x01') && (0.089999996 < *(float *)(unaff_ESI + 0x54)))
    {
      local_208 = 1;
      *(undefined1 *)(param_1 + 0xe11) = 0;
    }
    if (iStack_1dc != 0) {
      if (bVar3) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0xe20) - fStack_234);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xe24) - fStack_230);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xe28) - fStack_22c);
        fStack_248 = *(float *)(param_1 + 0xe2c) - fStack_228;
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
        *(undefined4 *)(param_1 + 0xe20) = *(undefined4 *)(iStack_1dc + 0x40);
        *(undefined4 *)(param_1 + 0xe24) = *(undefined4 *)(iStack_1dc + 0x44);
        *(undefined4 *)(param_1 + 0xe28) = *(undefined4 *)(iStack_1dc + 0x48);
        *(undefined4 *)(param_1 + 0xe2c) = *(undefined4 *)(iStack_1dc + 0x4c);
      }
    }
    if (iStack_1d8 != 0) {
      if (bVar4) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0xe30) - fStack_224);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xe34) - fStack_220);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xe38) - fStack_21c);
        fStack_248 = *(float *)(param_1 + 0xe3c) - local_218;
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
        *(undefined4 *)(param_1 + 0xe30) = *(undefined4 *)(iStack_1d8 + 0x40);
        *(undefined4 *)(param_1 + 0xe34) = *(undefined4 *)(iStack_1d8 + 0x44);
        *(undefined4 *)(param_1 + 0xe38) = *(undefined4 *)(iStack_1d8 + 0x48);
        *(undefined4 *)(param_1 + 0xe3c) = *(undefined4 *)(iStack_1d8 + 0x4c);
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
    *(undefined4 *)(param_1 + 0xe40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0xe44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0xe48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xe4c) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}

// 00B70DD0  Em0030::vf50  size=193  [class]
void __fastcall Em0030::vf50(int param_1)

{
  float fVar1;
  int iVar2;
  
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  FUN_00b70150();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x18f4) == 0) {
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

// 00B70EA0  FUN_00b70ea0  size=985  [callgraph]
void __fastcall FUN_00b70ea0(int *param_1)

{
  float fVar1;
  int iVar2;
  int local_c;
  int local_8;
  int local_4;
  
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xe,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      FUN_00b70880(param_1 + 0x640,param_1 + 0x10,param_1 + 0x658,0x41f00000,0x40400000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
    }
    FUN_00a8e880(param_1 + 0x658);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.04 + (float)param_1[0x249]);
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    FUN_00a8e880(param_1 + 0x658);
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
    FUN_00a8e880(param_1 + 0x658);
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
      FUN_00b66b20(param_1[0x37e],param_1[0x380],param_1[0x37f],0,0);
      return;
    }
  }
  return;
}

// 00B712A0  FUN_00b712a0  size=1146  [callgraph]
void __fastcall FUN_00b712a0(int *param_1)

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
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  switch(param_1[0x187]) {
  case 0:
    uVar5 = 0xe;
    if (param_1[0x67b] == 2) {
      uVar5 = 0x8c;
    }
    FUN_00aa4080(uVar5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      FUN_00b70880(param_1 + 0x640,param_1 + 0x10,param_1 + 0x658,0x41f00000,0x40400000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
    }
    FUN_00a8e880(param_1 + 0x658);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.04 + (float)param_1[0x249]);
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    FUN_00a8e880(param_1 + 0x658);
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
    if (param_1[0x67b] == 2) {
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
    FUN_00a8e880(param_1 + 0x658);
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
    if (param_1[0x67b] == 2) {
      uVar5 = 0x8e;
    }
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(uVar5,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x39a] = param_1[0x39a] & 0xf7ffffff;
      if (param_1[0x67b] == 2) {
        param_1[0x39a] = param_1[0x39a] | 0x8000000;
      }
      if (param_1[0x37e] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00b66b20(param_1[0x37e],0,0,0,0);
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e5ac0(2);
        return;
      }
    }
  }
  return;
}

// 00B722B0  Em0030::vf40  size=3468  [class]
undefined4 __fastcall Em0030::vf40(int *param_1)

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
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int iStack_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [124];
  
  iVar2 = BehaviorEmBase::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00ac9720(0x2003f,0xffffffff);
  param_1[0x63f] = param_1[0x128];
  iVar2 = 0;
  if (param_1[300] == 0x20030) {
    iVar2 = FUN_00acf600(0x20031,"Em0030Body");
  }
  if (param_1[300] == 0x20033) {
    iVar2 = FUN_00acf600(0x20034,"Em0033Body");
  }
  if (param_1[300] == 0x20035) {
    iVar2 = FUN_00acf600(0x20036,"Em0035Body");
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x370) != 0)) {
    FUN_00a1abe0(0);
  }
  iVar2 = FUN_00ac8a50();
  param_1[0x370] = -1;
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
  local_9c = 0x3f666666;
  local_98 = 0x3f99999a;
  local_94 = 0x3f8ccccd;
  local_c0 = 0x3e4ccccd;
  local_bc = 0x40400000;
  local_b8 = 0x40000000;
  local_ac = iVar2;
  FUN_00a8e4d0(&local_c0,&local_9c);
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
  param_1[0x684] = 0x3f800000;
  param_1[0x685] = 0x3f800000;
  param_1[0x686] = 0x3f800000;
  if (param_1[300] == 0x20033) {
    fVar6 = (float10)FUN_00ac85c0(5,0x29);
    param_1[0x684] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(5,0x2a);
    param_1[0x685] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(5,0x2b);
    param_1[0x686] = (int)(float)fVar6;
  }
  if (param_1[300] == 0x20035) {
    fVar6 = (float10)FUN_00ac85c0(6,0x29);
    param_1[0x684] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(6,0x2a);
    param_1[0x685] = (int)(float)fVar6;
    fVar6 = (float10)FUN_00ac85c0(6,0x2b);
    param_1[0x686] = (int)(float)fVar6;
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
  param_1[0x373] = iVar2;
  iVar2 = FUN_00ac8660(0,uVar3);
  param_1[0x375] = iVar2;
  param_1[0x374] = param_1[0x373];
  FUN_00ac8660(0,0x25);
  iVar2 = FUN_00fdbc60();
  param_1[0x683] = iVar2;
  fVar6 = (float10)FUN_00ac85c0(5,0x26);
  param_1[0x680] = (int)(float)fVar6;
  param_1[0x681] = 0;
  param_1[0x682] = 0;
  fVar6 = (float10)FUN_00ac85c0(5,0x32);
  param_1[0x67f] = (int)(float)fVar6;
  fVar6 = (float10)FUN_00ac85c0(5,0x2f);
  param_1[0x67c] = (int)(float)(fVar6 * (float10)60.0);
  fVar6 = (float10)FUN_00ac85c0(5,0x2e);
  param_1[0x67d] = (int)(float)fVar6;
  param_1[0x39a] = 0;
  param_1[0x39b] = 0;
  param_1[0x39c] = 0;
  param_1[0x39d] = 0;
  param_1[0x63c] = 0;
  param_1[0x37a] = 0;
  param_1[0x37e] = -1;
  FUN_00a8eeb0();
  iVar2 = FUN_00fdbc60();
  param_1[0x376] = iVar2;
  FUN_00a8eeb0();
  iVar2 = FUN_00fdbc60();
  param_1[0x377] = iVar2;
  FUN_00a8eeb0();
  iVar2 = FUN_00fdbc60();
  param_1[0x378] = iVar2;
  param_1[0x63e] = 0;
  param_1[0x601] = 0;
  param_1[0x62c] = param_1[0x14];
  param_1[0x62d] = param_1[0x15];
  param_1[0x62e] = param_1[0x16];
  param_1[0x62f] = param_1[0x17];
  param_1[0x628] = param_1[0x24];
  param_1[0x629] = param_1[0x25];
  param_1[0x62a] = param_1[0x26];
  param_1[0x62b] = param_1[0x27];
  param_1[0x630] = param_1[0x14];
  param_1[0x631] = param_1[0x15];
  param_1[0x632] = param_1[0x16];
  param_1[0x633] = param_1[0x17];
  param_1[0x624] = param_1[0x14];
  param_1[0x625] = param_1[0x15];
  param_1[0x626] = param_1[0x16];
  param_1[0x627] = param_1[0x17];
  param_1[0x369] = 1;
  if ((param_1[0x12a] & 0x100U) == 0) {
    puVar4 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
    param_1[0x360] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = &DAT_018a7ce0;
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
  puVar4 = &local_a8;
  param_1[0x1b7] = local_84;
  param_1[0x1ba] = 0x3fc00000;
  param_1[0x1b9] = 7;
  param_1[0x1b8] = 7;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  uVar10 = 0;
  uVar9 = 0x3fc00000;
  uVar8 = 0x3fb33333;
  uVar3 = FUN_00a12210(7);
  FUN_00a889e0(uVar3,uVar8,uVar9,uVar10,puVar4,uVar12);
  FUN_00405230();
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0xbe947ae1;
  FUN_00c151f0(1,param_1[0x13c],3,&local_c0,0,0x41f00000,0x3f800000,1,0);
  FUN_00c57830(local_80);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(0x2003f,0x20030);
  local_90 = 0;
  local_8c = 0;
  local_88 = 0xbf000000;
  fVar6 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x11);
  iVar2 = FUN_008ec660(param_1,0x40800000,0x3f800000,0x41a00000,(float)fVar6,0x78,8,&local_94);
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
  param_1[0x3a0] = param_1[0x3a0] | 2;
  FUN_00a82870(0x3f860a92,0xbf860a92,0x3e99999a,0x3ae4c388,0x3e32b8c2);
  FUN_00a82790(param_1[0x13c],6,0);
  param_1[0x3d4] = param_1[0x3d4] | 2;
  FUN_00a82840(0x3f060a92,0xbf060a92,0x3e99999a,0x3ae4c388,0x3e32b8c2);
  FUN_00a82790(param_1[0x13c],0x73,0);
  param_1[0x408] = param_1[0x408] | 2;
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82790(param_1[0x13c],0x74,0);
  param_1[0x43c] = param_1[0x43c] | 2;
  FUN_00a82870(0,0xbfb2b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  if (iStack_b0 != 0) goto LAB_00b72dff;
  iVar2 = param_1[0x63f];
  if (iVar2 == 0) {
LAB_00b72cde:
    if (param_1[300] == 0x20030) {
      FUN_00b70070(0,"Wp0300",0x30300,0,0x20,0xffffffff,9);
      uVar8 = 0;
      uVar3 = 0x30301;
      pcVar7 = "Wp0301";
    }
    else if (param_1[300] == 0x20033) {
      FUN_00b70070(0,"Wp0304",0x30304,0,0x20,0xffffffff,9);
      uVar8 = 0;
      uVar3 = 0x30305;
      pcVar7 = "Wp0305";
    }
    else {
      FUN_00b70070(0,"Wp030c",0x3030c,0,0x20,0xffffffff,9);
      uVar8 = 0;
      uVar3 = 0x3030d;
      pcVar7 = "Wp030d";
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 6) goto LAB_00b72dff;
      goto LAB_00b72cde;
    }
    if (param_1[300] == 0x20030) {
      FUN_00b70070(0,"Wp0302",0x30302,1,0x20,0xffffffff,9);
      uVar8 = 1;
      uVar3 = 0x30303;
      pcVar7 = "Wp0303";
    }
    else if (param_1[300] == 0x20033) {
      FUN_00b70070(0,"Wp0306",0x30306,1,0x20,0xffffffff,9);
      uVar8 = 1;
      uVar3 = 0x30307;
      pcVar7 = "Wp0307";
    }
    else {
      FUN_00b70070(0,"Wp030e",0x3030e,1,0x20,0xffffffff,9);
      uVar8 = 1;
      uVar3 = 0x3030f;
      pcVar7 = "Wp030f";
    }
  }
  FUN_00b70070(1,pcVar7,uVar3,uVar8,0x10,0xffffffff,8);
LAB_00b72dff:
  switchD_0080dbae::default();
  iVar2 = FUN_00a12210(0x62);
  param_1[0x388] = *(int *)(iVar2 + 0x40);
  param_1[0x389] = *(int *)(iVar2 + 0x44);
  param_1[0x38a] = *(int *)(iVar2 + 0x48);
  param_1[0x38b] = *(int *)(iVar2 + 0x4c);
  iVar2 = FUN_00a12210(0x42);
  param_1[0x38c] = *(int *)(iVar2 + 0x40);
  param_1[0x38d] = *(int *)(iVar2 + 0x44);
  param_1[0x38e] = *(int *)(iVar2 + 0x48);
  param_1[0x38f] = *(int *)(iVar2 + 0x4c);
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
  if (param_1[0x63f] == 6) {
    FUN_00b66b20(0x40000,0,0,0,0);
  }
  if (iStack_b0 == 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x470);
  }
  param_1[0x20b] = 7;
  param_1[0x20c] = 7;
  if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x67e] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x208,0);
  }
  return 1;
}

// 00B73040  FUN_00b73040  size=1659  [between]
/* WARNING: Removing unreachable block (ram,0x00b7328f) */
/* WARNING: Removing unreachable block (ram,0x00b73193) */
/* WARNING: Removing unreachable block (ram,0x00b731ca) */
/* WARNING: Removing unreachable block (ram,0x00b732c6) */

void __fastcall FUN_00b73040(float param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float local_4;
  
  if ((*(uint *)((int)param_1 + 0xe6c) & 0x4000) != 0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x18fc) == 6) {
    return;
  }
  local_4 = param_1;
  if ((*(uint *)((int)param_1 + 0xdc8) & 0x40000) != 0) {
    fVar1 = *(float *)((int)param_1 + 0x93c) - *(float *)((int)param_1 + 0x910);
    *(float *)((int)param_1 + 0x93c) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    FUN_00b66b20(*(undefined4 *)((int)param_1 + 0xdf8),*(undefined4 *)((int)param_1 + 0xe00),0,0,0);
    return;
  }
  iVar3 = FUN_00a82e60();
  if (iVar3 != 0) {
    FUN_00b66b20(0x20001,0,0,0,0);
    return;
  }
  local_4 = 0.0;
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_7();
  if (iVar3 != 0) {
    if (*(float *)((int)param_1 + 0xa8c) < 12.25) {
      if (*(int *)((int)param_1 + 0x18f8) == 0) {
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
          FUN_00b66b20(0x40003,uVar5,0,0,0);
          FUN_00b6b350();
        }
        uVar4 = FUN_00dde2a0(0,100);
        if ((uVar4 & 3) == 0) {
          if (*(int *)((int)param_1 + 0x1828) == 0) goto LAB_00b73206;
          uVar5 = 0x50008;
        }
        else {
          uVar4 = FUN_00dde2a0(0,100);
          if ((uVar4 & 3) == 0) {
            uVar5 = 0x50009;
          }
          else {
            iVar3 = FUN_00b629f0();
            if (iVar3 == 0) {
              uVar5 = 0x50003;
            }
            else {
              uVar5 = 0x50004;
            }
          }
        }
        FUN_00b66b20(uVar5,0,0,0,0);
LAB_00b73206:
        if (*(float *)((int)param_1 + 0xaa0) <= 2.3561945) {
          *(undefined4 *)((int)param_1 + 0xdf8) = 0x50000;
          FUN_00b66b20(*(undefined4 *)((int)param_1 + 0xdf8),0,0,0,0);
          return;
        }
        *(undefined4 *)((int)param_1 + 0xdf8) = 0x50005;
        FUN_00b66b20(*(undefined4 *)((int)param_1 + 0xdf8),0,0,0,0);
        return;
      }
LAB_00b73108:
      uVar5 = 2;
LAB_00b7310a:
      FUN_00b66b20(0x40003,uVar5,0,0,0);
      FUN_00b6b350();
      return;
    }
    if (*(float *)((int)param_1 + 0xa8c) < 36.0) {
      uVar4 = FUN_00dde2a0(0,100);
      if ((uVar4 & 3) == 0) {
        if (*(int *)((int)param_1 + 0x1828) == 0) goto LAB_00b73302;
        uVar5 = 0x50008;
      }
      else {
        uVar4 = FUN_00dde2a0(0,100);
        if ((uVar4 & 3) == 0) {
          uVar5 = 0x50009;
        }
        else {
          iVar3 = FUN_00b629f0();
          if (iVar3 == 0) {
            uVar5 = 0x50003;
          }
          else {
            uVar5 = 0x50004;
          }
        }
      }
      FUN_00b66b20(uVar5,0,0,0,0);
    }
LAB_00b73302:
    iVar3 = FUN_00b68060();
    if ((((iVar3 != 0) && (36.0 < *(float *)((int)param_1 + 0xa8c))) &&
        (*(float *)((int)param_1 + 0xa8c) < 100.0)) &&
       ((*(float *)((int)param_1 + 0xa98) < 1.0 &&
        (uVar4 = FUN_00dde2a0(0,0x32), (uVar4 & 0xffff) % 5 == 0)))) {
      FUN_00b66b20(0x5000a,0,0,0,0);
      return;
    }
    if (((25.0 < *(float *)((int)param_1 + 0xa8c)) && (*(float *)((int)param_1 + 0xa8c) < 900.0)) &&
       ((*(float *)((int)param_1 + 0xaa0) < 0.7853982 &&
        ((uVar4 = FUN_00dde2a0(0,1000), (uVar4 & 1) != 0 && (iVar3 = FUN_00b62a10(), iVar3 != 0)))))
       ) {
      FUN_00b66b20(0x50007,0,0,0,0);
      return;
    }
    if (((*(float *)((int)param_1 + 0xa8c) < 100.0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 1)) &&
       (*(float *)((int)param_1 + 0xaa0) < 1.7453293)) {
      uVar4 = FUN_00dde2d0(0,100);
      if ((uVar4 & 1) == 0) {
        FUN_00b66b20(0x50009,0,0,0,0);
        return;
      }
      fVar1 = *(float *)((int)param_1 + 0xa8c);
      if (NAN(fVar1) || 25.0 < fVar1 == (fVar1 == 25.0)) {
        return;
      }
      FUN_00b66b20(0x50002,0,0,0,0);
      return;
    }
    fVar1 = *(float *)((int)param_1 + 0xa8c);
    if (((!NAN(fVar1) && 225.0 < fVar1 != (fVar1 == 225.0)) &&
        (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 0xffff) % 6 < 2)) &&
       (*(int *)((int)param_1 + 0x1828) != 0)) {
      FUN_00b66b20(0x50008,0,0,0,0);
    }
    goto LAB_00b735b9;
  }
  if (*(float *)((int)param_1 + 0x18f0) == 0.0) {
LAB_00b73561:
    if (*(int *)((int)param_1 + 0x17f0) != 0) goto LAB_00b735b9;
  }
  else if (*(int *)((int)param_1 + 0x17f0) != 0) {
    if (*(int *)((int)param_1 + 0xdec) != 0x40003) {
      if ((12.25 <= *(float *)((int)param_1 + 0xa8c)) || (sVar2 = FUN_00dde2d0(0,0xf), sVar2 != 1))
      goto LAB_00b735b9;
      if (*(float *)((int)param_1 + 0xaa0) <= 2.0943952) {
        if (0.0 <= *(float *)((int)param_1 + 0xa9c)) {
          uVar5 = 4;
        }
        else {
          uVar5 = 3;
        }
        goto LAB_00b7310a;
      }
      goto LAB_00b73108;
    }
    goto LAB_00b73561;
  }
  if ((*(float *)((int)param_1 + 0xa8c) < 64.0) && (iVar3 = FUN_00b62ad0(&local_4), iVar3 != 0)) {
    if (local_4 <= 0.0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 4;
    }
    FUN_00b66b20(0x40003,uVar5,0,0,0);
    FUN_00b6b350();
  }
LAB_00b735b9:
  iVar3 = FUN_00b6f6a0();
  if (iVar3 == 0) {
    if (((*(float *)((int)param_1 + 0xa90) <= 400.0) &&
        (fVar1 = *(float *)((int)param_1 + 0xa98), !NAN(fVar1) && 3.0 < fVar1 != (fVar1 == 3.0))) &&
       (*(int *)((int)param_1 + 0x1828) != 0)) {
      FUN_00b66b20(0x50008,0,0,0,0);
    }
    if ((*(int *)((int)param_1 + 0x183c) == 0) &&
       ((64.0 < *(float *)((int)param_1 + 0xa8c) || (*(int *)((int)param_1 + 0x17f4) == 0)))) {
      FUN_00b66b20(0x40002,0,0,0,0);
    }
    if (((*(float *)((int)param_1 + 0x920) < 0.0) && (*(int *)((int)param_1 + 0x17f4) == 0)) &&
       (iVar3 = FUN_00b62ad0(&local_4), iVar3 != 0)) {
      if (local_4 <= 0.0) {
        FUN_00b66b20(0x40003,3,0,0,0);
        FUN_00b6b350();
        return;
      }
      FUN_00b66b20(0x40003,4,0,0,0);
      FUN_00b6b350();
      return;
    }
  }
  return;
}

// 00B736C0  FUN_00b736c0  size=272  [between]
void __fastcall FUN_00b736c0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  if (((*(int *)(param_1 + 0x618) == 0x40000) &&
      (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0))) &&
     ((*(uint *)(param_1 + 0xe6c) & 0x4000) == 0)) {
    piVar4 = (int *)(param_1 + 0xe54);
    iVar3 = 2;
    do {
      if ((*piVar4 != 0) &&
         (iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_7(), iVar2 != 0)) {
        *(undefined4 *)(*piVar4 + 0xbb0) = 1;
        FUN_00c272a0(0x40a00000);
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2e,0,0x3e2aaaab,0x3f800000,*(undefined4 *)(param_1 + 0xe50),0xbf800000,0x3f800000
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

// 00B737E0  FUN_00b737e0  size=293  [between]
void __fastcall FUN_00b737e0(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    return;
  }
  if (param_1[0x2a1] != 0) {
    iVar1 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_7();
    if ((iVar1 != 0) && ((float)param_1[0x2a3] < 25.0)) {
      param_1[0x380] = 3;
      param_1[0x187] = 4;
      if (2.3561945 < (float)param_1[0x2a8]) {
        param_1[0x37e] = 0x50005;
        return;
      }
      param_1[0x37e] = 0x50000;
      return;
    }
    if (param_1[0x604] == 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    if ((float)param_1[0x248] <= 0.0) {
      FUN_00b66b20(0x40002,0,2,0,0);
      return;
    }
    iVar1 = FUN_00b6f6a0();
    if (iVar1 != 0) {
      return;
    }
    if ((float)param_1[0x2a3] <= 9.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  iVar1 = FUN_00a82e60();
  if (iVar1 != 0) {
    FUN_00b66b20(0x20001,0,0,0,0);
  }
  if (((param_1[0x604] != 0) && (param_1[0x608] != 0)) && (param_1[0x609] != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b73903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B73910  FUN_00b73910  size=553  [between]
void __fastcall FUN_00b73910(int *param_1)

{
  short sVar1;
  int iVar2;
  int *local_4;
  
  if (3 < param_1[0x187]) {
    return;
  }
  local_4 = param_1;
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8d3d0(6), iVar2 == 0)) {
    iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_7();
    if ((iVar2 != 0) && ((float)param_1[0x2a3] < 12.25)) {
      param_1[0x380] = 0;
      if ((float)param_1[0x2a8] <= 2.3561945) {
        param_1[0x37e] = 0x50000;
      }
      else {
        param_1[0x37e] = 0x50005;
      }
      FUN_00b66b20(param_1[0x37e],0,0,0,0);
      return;
    }
    iVar2 = FUN_00a8cac0();
    if ((iVar2 != 0) && ((float)param_1[0x2a3] < 9.0)) {
      local_4 = (int *)0x0;
      iVar2 = FUN_00b62ad0(&local_4);
      if (iVar2 != 0) {
        param_1[0x37e] = -1;
        param_1[0x37e] = 0x40003;
        if (param_1[0x5fc] == 0) {
          if ((float)local_4 <= 0.0) {
            param_1[0x380] = 3;
          }
          else {
            param_1[0x380] = 4;
          }
          FUN_00b66b20(0x40003,param_1[0x380],0,0,0);
          return;
        }
        param_1[0x380] = 2;
        sVar1 = FUN_00dde2d0(0,2);
        if (sVar1 == 1) {
          param_1[0x380] = 4;
        }
        else {
          sVar1 = FUN_00dde2d0(0,2);
          if (sVar1 != 1) goto LAB_00b73a56;
          param_1[0x380] = 3;
        }
        param_1[0x37e] = 0x40003;
LAB_00b73a56:
        FUN_00b66b20(param_1[0x37e],param_1[0x380],0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar2 = FUN_00a8d3d0(7);
    if (((iVar2 != 0) || (iVar2 = FUN_00a8d3d0(8), iVar2 != 0)) ||
       (iVar2 = FUN_00a8d3d0(10), iVar2 != 0)) {
      FUN_00b66b20(0x50008,0,0,0,0);
    }
    iVar2 = FUN_00b6f6a0();
    if (iVar2 != 0) {
      return;
    }
  }
  if ((9.0 < (float)param_1[0x2a3]) && (param_1[0x60f] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b73b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B73B40  FUN_00b73b40  size=616  [between]
/* WARNING: Switch with 1 destination removed at 0x00b73ce9 : 6 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00b73d0e : 7 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00b73d35 : 4 cases all go to same destination */

void __fastcall FUN_00b73b40(int param_1)

{
  int iVar1;
  
  FUN_00a8d560(1);
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x20001) {
    if (iVar1 != 0x20000) {
      switch(iVar1) {
      case 0x10000:
        FUN_00b6a200();
        FUN_00b67880();
        return;
      case 0x10001:
        FUN_00b6a270();
        FUN_00b67880();
        return;
      case 0x10002:
        FUN_00b6a310();
        FUN_00b67880();
        return;
      case 0x10005:
        FUN_00b6a530();
        FUN_00b67880();
        return;
      case 0x10006:
        FUN_00b6a780();
        FUN_00b67880();
        return;
      case 0x10008:
        FUN_00b6a8d0();
        FUN_00b67880();
        return;
      }
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 != 0x60000) {
      if (iVar1 < 0x40001) {
        if (iVar1 == 0x40000) {
          FUN_00b73040();
          FUN_00b67880();
          return;
        }
        if (0x30000 < iVar1) {
          switch(iVar1) {
          case 0x30001:
            FUN_00b632f0();
            FUN_00b67880();
            return;
          }
        }
      }
      else if (iVar1 < 0x50001) {
        if (iVar1 == 0x50000) {
          FUN_00b6bb80();
          FUN_00b67880();
          return;
        }
        switch(iVar1) {
        case 0x40001:
          FUN_00b737e0();
          FUN_00b67880();
          return;
        case 0x40002:
          FUN_00b73910();
          FUN_00b67880();
          return;
        case 0x40003:
          FUN_00b6b350();
          FUN_00b67880();
          return;
        case 0x40008:
          FUN_00b60f60();
          FUN_00b67880();
          return;
        }
      }
      else {
        switch(iVar1) {
        case 0x50007:
          FUN_00b61920();
          FUN_00b67880();
          return;
        case 0x50008:
          FUN_00b619d0();
          FUN_00b67880();
          return;
        }
      }
    }
  }
  else if (0x70000 < iVar1) {
    if (iVar1 < 0x80001) {
      if (iVar1 == 0x80000) {
        FUN_00b62140();
        FUN_00b67880();
        return;
      }
    }
    else if (0x90000 < iVar1) {
      if (iVar1 < 0xb0001) {
        if (iVar1 != 0xb0000) {
          FUN_00b67880();
          return;
        }
        FUN_00b6d590();
        FUN_00b67880();
        return;
      }
      if ((iVar1 < 0xc0001) && (iVar1 != 0xc0000)) {
        switch(iVar1) {
        case 0xb0001:
          FUN_00b6d610();
          FUN_00b67880();
          return;
        case 0xb0002:
          FUN_00b6d690();
          FUN_00b67880();
          return;
        case 0xb0004:
          FUN_00b6de30();
        }
      }
    }
  }
  FUN_00b67880();
  return;
}

// 00B73E60  FUN_00b73e60  size=654  [between]
void __fastcall FUN_00b73e60(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = param_1[0x186];
  if (iVar2 < 0x20001) {
    if (iVar2 == 0x20000) {
      FUN_00b6adf0();
      return;
    }
    switch(iVar2) {
    case 0x10000:
    case 0x1000a:
      FUN_00b60bc0();
      return;
    case 0x10001:
      FUN_00b62eb0();
      return;
    case 0x10002:
      FUN_00b60cc0();
      return;
    case 0x10003:
      FUN_00b6a370();
      return;
    case 0x10004:
      FUN_00b6a460();
      return;
    case 0x10005:
      FUN_00b6a560();
      return;
    case 0x10006:
      FUN_00b6a7b0();
      return;
    case 0x10007:
      FUN_00b70ea0();
      return;
    case 0x10008:
      FUN_00b60de0();
      return;
    case 0x10009:
      FUN_00b63170();
      return;
    }
  }
  else if (iVar2 < 0x60001) {
    if (iVar2 == 0x60000) {
      FUN_00b64a00();
      return;
    }
    if (iVar2 < 0x40001) {
      if (iVar2 == 0x40000) {
switchD_00b73f2e_caseD_40008:
        FUN_00b736c0();
        return;
      }
      if (iVar2 < 0x30001) {
        if (iVar2 == 0x30000) {
          FUN_00b63370();
          return;
        }
        if (iVar2 == 0x20001) {
          FUN_00b6ae90();
          return;
        }
      }
      else {
        switch(iVar2) {
        case 0x30002:
          FUN_00b613e0();
          return;
        case 0x30003:
          FUN_00b614c0();
          return;
        case 0x30004:
          FUN_00b615a0();
          return;
        }
      }
    }
    else if (iVar2 < 0x50001) {
      if (iVar2 == 0x50000) {
        FUN_00b63890();
        return;
      }
      switch(iVar2) {
      case 0x40001:
        FUN_00b6afb0();
        return;
      case 0x40002:
        FUN_00b6b170();
        return;
      case 0x40003:
        FUN_00b6b4b0();
        return;
      case 0x40004:
        FUN_00b60f90();
        return;
      case 0x40005:
        FUN_00b61090();
        return;
      case 0x40006:
        FUN_00b61190();
        return;
      case 0x40007:
        FUN_00b61230();
        return;
      case 0x40008:
        goto switchD_00b73f2e_caseD_40008;
      }
    }
    else {
      switch(iVar2) {
      case 0x50001:
        FUN_00b63a60();
        return;
      case 0x50002:
        FUN_00b63c30();
        return;
      case 0x50003:
        FUN_00b63e00();
        return;
      case 0x50004:
        FUN_00b64060();
        return;
      case 0x50005:
        FUN_00b643b0();
        return;
      case 0x50006:
        FUN_00b61880();
        return;
      case 0x50007:
        FUN_00b71740();
        return;
      case 0x50008:
        param_1[0x39a] = param_1[0x39a] | 0x20000000;
        (**(code **)(*param_1 + 0x318))();
        *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
        switch(param_1[0x187]) {
        case 0:
          FUN_00aa4080(0x8c,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00a8d280();
          iVar2 = param_1[0x2a1];
          param_1[0x658] = *(int *)(iVar2 + 0x40);
          param_1[0x659] = *(int *)(iVar2 + 0x44);
          param_1[0x65a] = *(int *)(iVar2 + 0x48);
          param_1[0x65b] = *(int *)(iVar2 + 0x4c);
          param_1[0x187] = param_1[0x187] + 1;
        case 1:
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            param_1[0x187] = param_1[0x187] + 1;
          }
          FUN_00a8e880(param_1 + 0x658);
          (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
          return;
        case 2:
          goto switchD_00b71b5a_caseD_2;
        case 3:
          goto switchD_00b71b5a_caseD_3;
        case 4:
          FUN_00ac80a0(0x3f800000,0x3f800000);
          FUN_00a581b0(&fStack_40,0,param_1[0x249]);
          fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
          param_1[0x249] = (int)fVar1;
          if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
            param_1[0x249] = 0x40000000;
            FUN_00b66b20(0x10003,0,0,0,0);
          }
          iStack_30 = param_1[0x14];
          iStack_2c = param_1[0x15];
          iStack_28 = param_1[0x16];
          iStack_24 = param_1[0x17];
          param_1[0x14] = (int)fStack_40;
          param_1[0x15] = (int)fStack_3c;
          param_1[0x16] = (int)fStack_38;
          param_1[0x224] = (int)(fStack_40 - (float)param_1[0x65c]);
          param_1[0x225] = (int)(fStack_3c - (float)param_1[0x65d]);
          param_1[0x226] = (int)(fStack_38 - (float)param_1[0x65e]);
          param_1[0x227] = 0x3f800000;
          iStack_20 = param_1[0x14];
          iStack_1c = param_1[0x15];
          iStack_18 = param_1[0x16];
          iStack_14 = param_1[0x17];
          iVar2 = FUN_00b66fa0(&iStack_30,&iStack_20,0);
          if (iVar2 != 0) {
            param_1[0x224] = 0;
            param_1[0x225] = 0;
            param_1[0x226] = 0;
            FUN_00b66b20(0x10003,0,0,0,0);
          }
          param_1[0x65c] = (int)fStack_40;
          param_1[0x65d] = (int)fStack_3c;
          param_1[0x65e] = (int)fStack_38;
          param_1[0x65f] = 0x3f800000;
          iVar2 = (**(code **)(*param_1 + 800))(0x3d088889);
          if (iVar2 != 0) {
            FUN_00b66b20(0x10004,0,0,0,0);
            param_1[0x224] = 0;
            param_1[0x225] = 0;
            param_1[0x226] = 0;
          }
          uVar6 = 1;
          param_1 = param_1 + 0x658;
          uVar5 = 0x40000000;
          uVar3 = FUN_00a7c7f0(param_1,0x40000000,1);
          uVar4 = extraout_ECX;
          FUN_00a7c940(uVar3);
          FUN_00c62c50(uVar4,param_1,uVar5,uVar6);
          return;
        default:
          return;
        }
      case 0x50009:
        FUN_00b64580();
        return;
      case 0x5000a:
        FUN_00b6bc60();
        return;
      case 0x5000b:
        FUN_00b61a30();
        return;
      }
    }
  }
  else if (iVar2 < 0x70001) {
    if (iVar2 == 0x70000) {
      FUN_00b6c990();
      return;
    }
    switch(iVar2) {
    case 0x60001:
      FUN_00b64b30();
      return;
    case 0x60002:
      FUN_00b61da0();
      return;
    case 0x60003:
      FUN_00b61f50();
      return;
    case 0x60004:
      FUN_00b62010();
      return;
    case 0x60005:
      FUN_00b6d800();
      return;
    case 0x60006:
      FUN_00b6d930();
      return;
    }
  }
  else if (iVar2 < 0x80001) {
    if (iVar2 == 0x80000) {
      FUN_00b6cfb0();
      return;
    }
    switch(iVar2) {
    case 0x70001:
      FUN_00b6ca40();
      return;
    case 0x70002:
      FUN_00b61c30();
      return;
    case 0x70003:
      FUN_00b6cb80();
      return;
    case 0x70004:
      FUN_00b6cc30();
      return;
    case 0x70005:
      FUN_00b61cf0();
      return;
    case 0x70006:
      FUN_00b6cce0();
      return;
    case 0x70007:
      FUN_00b6cdb0();
      return;
    }
  }
  else if (iVar2 < 0x90001) {
    if (iVar2 == 0x90000) {
      FUN_00b6ce60();
      return;
    }
    switch(iVar2) {
    case 0x80001:
      FUN_00b6d2b0();
      return;
    case 0x80002:
      FUN_00b64c10();
      return;
    case 0x80003:
      FUN_00b6d4c0();
      return;
    case 0x80004:
      FUN_00b6da70();
      return;
    }
  }
  else if (iVar2 < 0xb0001) {
    if (iVar2 == 0xb0000) {
      FUN_00b621d0();
      return;
    }
    switch(iVar2) {
    case 0xa0000:
      FUN_00b6dfe0();
      return;
    case 0xa0001:
      FUN_00b6e2f0();
      return;
    case 0xa0002:
      FUN_00b6e640();
      return;
    case 0xa0003:
      FUN_00b6ec10();
      return;
    case 0xa0004:
      FUN_00b6ef70();
      return;
    case 0xa0005:
      FUN_00b6f2b0();
      return;
    }
  }
  else if (iVar2 < 0xc0001) {
    if (iVar2 == 0xc0000) {
      FUN_00b712a0();
      return;
    }
    switch(iVar2) {
    case 0xb0001:
      FUN_00b62330();
      return;
    case 0xb0002:
      FUN_00b6d6d0();
      return;
    case 0xb0003:
      FUN_00b6dc90();
      return;
    case 0xb0004:
      FUN_00b624e0();
      return;
    }
  }
  else if (iVar2 == 0xc0001) {
    FUN_00b6a9a0();
    return;
  }
  return;
switchD_00b71b5a_caseD_2:
  param_1[0x39a] = param_1[0x39a] | 0x20000000;
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00aa4080(0x8d,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  iVar2 = param_1[0x2a1];
  fStack_40 = *(float *)(iVar2 + 0x40) - (float)param_1[0x10];
  fStack_38 = *(float *)(iVar2 + 0x48) - (float)param_1[0x12];
  fStack_34 = *(float *)(iVar2 + 0x4c) - (float)param_1[0x13];
  fStack_3c = 0.0;
  fVar1 = fStack_40 * fStack_40 + fStack_38 * fStack_38;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_40,&fStack_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_38 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 1.0;
  }
  iVar2 = param_1[0x2a1];
  fStack_40 = fStack_40 * 2.5;
  fStack_3c = fStack_3c * 2.5;
  fStack_38 = fStack_38 * 2.5;
  fStack_34 = fStack_34 * 2.5;
  param_1[0x658] = *(int *)(iVar2 + 0x40);
  param_1[0x659] = *(int *)(iVar2 + 0x44);
  param_1[0x65a] = *(int *)(iVar2 + 0x48);
  param_1[0x65b] = *(int *)(iVar2 + 0x4c);
  FUN_00b70880(param_1 + 0x640,param_1 + 0x10,param_1 + 0x658,0x40c00000,0x40400000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x249] = 0;
switchD_00b71b5a_caseD_3:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&fStack_40,0,param_1[0x249]);
  fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
  param_1[0x249] = (int)fVar1;
  if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iStack_20 = param_1[0x14];
  iStack_1c = param_1[0x15];
  iStack_18 = param_1[0x16];
  iStack_14 = param_1[0x17];
  param_1[0x14] = (int)fStack_40;
  param_1[0x15] = (int)fStack_3c;
  param_1[0x16] = (int)fStack_38;
  iStack_30 = param_1[0x14];
  iStack_2c = param_1[0x15];
  iStack_28 = param_1[0x16];
  iStack_24 = param_1[0x17];
  iVar2 = FUN_00b66fa0(&iStack_20,&iStack_30,1);
  if (iVar2 == 0) {
    param_1[0x65c] = (int)fStack_40;
    param_1[0x65d] = (int)fStack_3c;
    param_1[0x65e] = (int)fStack_38;
    param_1[0x65f] = 0x3f800000;
    FUN_00a8e880(param_1 + 0x658);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  }
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  FUN_00b66b20(0x10003,0,0,0,0);
  return;
}

// 00B741F0  Em0030::vf4C  size=539  [class]
void __fastcall Em0030::vf4C(int *param_1)

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
  param_1[0x39a] = param_1[0x39a] & 0xdffbffff;
  param_1[0x63d] = 0;
  if ((param_1[0x2a1] != 0) && (*(int *)(param_1[0x2a1] + 0x4e4) != 0)) {
    param_1[0x39b] = param_1[0x39b] | 0x4000;
  }
  param_1[0x39a] = param_1[0x39a] | 0xc0000000;
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = FUN_00ac82f0();
  param_1[0x63e] = iVar1;
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    FUN_00b73b40();
  }
  FUN_00b73e60();
  if ((param_1[0x39a] & 0x40000U) != 0) {
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
  if ((iVar1 != 0) || ((param_1[0x39a] & 0x24000000U) != 0)) {
    uVar2 = 0;
    uStack_30 = 0;
    uStack_34 = 0;
  }
  if ((param_1[0x39a] & 0x800000U) != 0) {
    uVar2 = 1;
  }
  if (param_1[0x395] != 0) {
    *(undefined4 *)(param_1[0x395] + 0xbac) = uVar2;
  }
  if (param_1[0x396] != 0) {
    *(undefined4 *)(param_1[0x396] + 0xbac) = uVar2;
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

