// src/lib/StaticArray.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00420A50..00E955B0, 437 functions

#include "mgrr.h"

// 00420A50  lib::StaticArray<Collision*,256>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Collision*,256>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0045C4F0  FUN_0045c4f0  size=256  [callgraph]
void __fastcall FUN_0045c4f0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    param_1[0x187] = 1;
    param_1[0x250] = 0;
LAB_0045c51e:
    FUN_00aa4080(0x22,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = param_1[0x250] + 1;
  }
  else {
    if (iVar1 == 1) goto LAB_0045c51e;
    if (iVar1 != 2) {
      return;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 == 0) goto LAB_0045c5af;
  }
  if (param_1[0x250] < 3) {
    param_1[0x187] = 1;
  }
  else {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00455790(1);
  }
LAB_0045c5af:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 0045C630  lib::StaticArray<Em0060Team::_Em0060TeamInfo,3>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Em0060Team::_Em0060TeamInfo,3>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Em0060Team::_Em0060TeamInfo>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0045FE60  lib::StaticArray<Em0060Team::_Em0060TeamInfo,3>::StaticArray<Em0060Team::_Em0060TeamInfo,3>  size=97  [class]
undefined4 __thiscall
lib::StaticArray<Em0060Team::_Em0060TeamInfo,3>::StaticArray<Em0060Team::_Em0060TeamInfo,3>
          (int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 3;
    *puVar1 = vftable;
  }
  *(undefined4 **)(param_1 + 0x78) = puVar1;
  iVar2 = FUN_00dd7240();
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return 1;
}

// 004784F0  lib::StaticArray<RigidBodyList::ConnectMap,256>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<RigidBodyList::ConnectMap,256>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<RigidBodyList::ConnectMap>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00479D90  FUN_00479d90  size=881  [callgraph]
void __fastcall FUN_00479d90(int *param_1)

{
  float fVar1;
  int iVar2;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3c0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    FUN_00a8c760(0);
    return;
  case 2:
    FUN_00aa4080(0x24,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    goto LAB_00479f35;
  case 3:
LAB_00479f35:
    FUN_00a97e60(0x40000000,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&iStack_c,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = iStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    param_1[0x24a] = 0x3da3d70a;
    param_1[0x249] = (int)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    FUN_00a8c760(0);
    return;
  case 4:
    FUN_00aa4080(0x26,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    break;
  case 5:
    break;
  default:
    goto switchD_00479db2_default;
  }
  FUN_00a97e60(0x3f000000,0);
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0,1,0,0);
    FUN_00a8c760(0);
    return;
  }
switchD_00479db2_default:
  FUN_00a8c760(0);
  return;
}

// 0047A120  FUN_0047a120  size=1571  [callgraph]
void __fastcall FUN_0047a120(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3c0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    FUN_00a8c760(0);
    return;
  case 2:
    FUN_00aa4080(0x24,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    param_1[0x250] = 0;
    if ((param_1[0x202] != 0) && (cVar2 = FUN_00c9db20(6), cVar2 != '\0')) {
      param_1[0x250] = 1;
    }
    goto LAB_0047a2f1;
  case 3:
LAB_0047a2f1:
    FUN_00a97e60(0x40000000,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&iStack_c,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = iStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    param_1[0x24a] = 0x3da3d70a;
    param_1[0x249] = (int)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    FUN_00a8c760(0);
    return;
  case 4:
    FUN_00aa4080(0xd5,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00eaa6e0(0x41200000,0);
    break;
  case 5:
    break;
  case 6:
    FUN_00aa4080(0x25,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00a8d790(&iStack_c);
    param_1[0x4f0] = iStack_c;
    param_1[0x4f1] = iStack_8;
    param_1[0x4f2] = iStack_4;
    param_1[0x4f3] = 0x3f800000;
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3c0);
    goto LAB_0047a597;
  case 7:
LAB_0047a597:
    FUN_00a97e60(0x3f000000,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.05 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0x40000000;
    }
    param_1[0x14] = iStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    FUN_00a8c760(0);
    return;
  case 8:
    FUN_00aa4080(0x26,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    goto LAB_0047a6d6;
  case 9:
LAB_0047a6d6:
    FUN_00a97e60(0x3f000000,0);
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0,1,0,0);
      FUN_00a8c760(0);
      return;
    }
  default:
    goto switchD_0047a148_default;
  }
  FUN_00a97e60(0x40000000,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) && (param_1[0x187] = param_1[0x187] + 1, param_1[0x250] != 0)) {
    FUN_00a8d790(&iStack_c);
    param_1[0x4f0] = iStack_c;
    param_1[0x4f1] = iStack_8;
    param_1[0x4f2] = iStack_4;
    param_1[0x4f3] = 0x3f800000;
    FUN_00a8caf0(4,2,0,0);
    FUN_00a8c760(0);
    return;
  }
switchD_0047a148_default:
  FUN_00a8c760(0);
  return;
}

// 0047A770  FUN_0047a770  size=950  [callgraph]
void __fastcall FUN_0047a770(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x24,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x44a] == 0) {
      param_1[0x4f0] = param_1[0x514];
      param_1[0x4f1] = param_1[0x515];
      param_1[0x4f2] = param_1[0x516];
      fVar3 = (float)param_1[0x517];
    }
    else {
      iVar4 = param_1[0x2a1];
      fVar3 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
      fVar1 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
      fVar3 = fVar1 * fVar1 + fVar3 * fVar3;
      if (fVar3 < 225.0 == (fVar3 == 225.0)) {
        param_1[0x4f0] = param_1[0x378];
        param_1[0x4f1] = param_1[0x379];
        param_1[0x4f2] = param_1[0x37a];
        fVar3 = (float)param_1[0x37b];
      }
      else {
        fStack_20 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
        fStack_18 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
        fStack_14 = *(float *)(iVar4 + 0x4c) - (float)param_1[0x13];
        fStack_1c = 0.0;
        fVar3 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
        if (fVar3 < 0.0 == (fVar3 == 0.0)) {
          FUN_00ddf460(&fStack_20,&fStack_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_20 = 0.0;
          fStack_1c = 1.0;
          fStack_18 = 0.0;
        }
        iVar4 = FUN_00464930();
        if (iVar4 == 0) {
          fVar3 = -4.5;
        }
        else {
          fVar3 = 2.5;
        }
        fStack_20 = fStack_20 * fVar3;
        iVar4 = param_1[0x2a1];
        fStack_1c = fStack_1c * fVar3;
        fStack_18 = fStack_18 * fVar3;
        fStack_14 = fStack_14 * fVar3;
        fVar1 = *(float *)(iVar4 + 0x44);
        fVar2 = *(float *)(iVar4 + 0x48);
        fVar3 = fStack_14 + *(float *)(iVar4 + 0x4c);
        param_1[0x4f0] = (int)(*(float *)(iVar4 + 0x40) + fStack_20);
        param_1[0x4f1] = (int)(fVar1 + fStack_1c);
        param_1[0x4f2] = (int)(fVar2 + fStack_18);
      }
    }
    param_1[0x4f3] = (int)fVar3;
    FUN_00477e40(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    param_1[0x249] = 0;
    param_1[0x38b] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0046b790(param_1 + 0x4d7,param_1 + 0x10,param_1[0x38b]);
    param_1[0x38b] = param_1[0x249];
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar3 = (float)param_1[0x244] * 0.06666667 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar3;
    if (2.0 <= fVar3) {
      FUN_00a8caf0(0x10,0,0,0);
      (**(code **)(*param_1 + 0x314))();
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  default:
    return;
  }
}

// 0047AB40  FUN_0047ab40  size=155  [callgraph]
void FUN_0047ab40(int param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar4 = *(undefined4 **)(param_1 + 0x3c);
  pfVar1 = (float *)(puVar4 + *(int *)(param_1 + 0x44) * 3 + -3);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  local_30 = *pfVar1 + (*param_2 - (float)puVar4[*(int *)(param_1 + 0x44) * 3 + -3]) * param_3;
  *pfVar1 = local_30;
  local_2c = pfVar1[1] + (fVar2 - pfVar1[1]) * param_3;
  pfVar1[1] = local_2c;
  local_28 = pfVar1[2] + param_3 * (fVar3 - pfVar1[2]);
  pfVar1[2] = local_28;
  local_20 = *puVar4;
  local_1c = puVar4[1];
  local_18 = puVar4[2];
  local_14 = 0x3f800000;
  local_24 = 0x3f800000;
  FUN_00477950(param_1,&local_20,&local_30);
  return;
}

// 0047ABE0  FUN_0047abe0  size=189  [callgraph]
void __fastcall FUN_0047abe0(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 local_160 [348];
  
  FUN_004039a0(5,param_1,0);
  FUN_00a8c8b0(param_1[300],local_160);
  (**(code **)(*param_1 + 0x20))();
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b34d50;
      (**(code **)(*piVar3 + 4))(&DAT_01b34d50);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          piVar3 = (int *)FUN_00a7c8a0();
          if (piVar3 != (int *)0x0) {
            puVar4 = &DAT_01b34d50;
            (**(code **)(*piVar3 + 4))(&DAT_01b34d50);
            iVar2 = FUN_00dd6d80(puVar4);
            pbVar1 = (byte *)((-(uint)(iVar2 != 0) & (uint)piVar3) + 0x148a);
            *pbVar1 = *pbVar1 | 0x80;
            return;
          }
        }
        bRam0000148a = bRam0000148a | 0x80;
      }
    }
  }
  return;
}

// 0047ACA0  lib::StaticArray<RigidBodyList::ConnectMap,256>::StaticArray<RigidBodyList::ConnectMap,256>  size=83  [class]
void __fastcall
lib::StaticArray<RigidBodyList::ConnectMap,256>::StaticArray<RigidBodyList::ConnectMap,256>
          (undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = param_1 + 5;
  param_1[3] = 0;
  param_1[4] = 0x100;
  param_1[1] = vftable;
  param_1[0x606] = param_1 + 0x609;
  param_1[0x607] = 0;
  param_1[0x608] = 0x100;
  param_1[0x605] = vftable;
  param_1[0xc09] = 0xffffffff;
  param_1[0xc0a] = 0;
  return;
}

// 0047AD00  FUN_0047ad00  size=2170  [callgraph]
void __fastcall FUN_0047ad00(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pcVar4 = *(code **)(*param_1 + 0x318);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar4)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x31,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    param_1[0x4f0] = param_1[0x4fc];
    param_1[0x4f1] = param_1[0x4fd];
    param_1[0x4f2] = param_1[0x4fe];
    param_1[0x4f3] = param_1[0x4ff];
    param_1[0x4f4] = param_1[0x500];
    param_1[0x4f5] = param_1[0x501];
    param_1[0x4f6] = param_1[0x502];
    param_1[0x4f7] = param_1[0x503];
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3c0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    FUN_00a8c760(0);
    return;
  case 2:
    FUN_00aa4080(0x32,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    param_1[0x4f0] = param_1[0x4fc];
    param_1[0x4f1] = param_1[0x4fd];
    param_1[0x4f2] = param_1[0x4fe];
    param_1[0x4f3] = param_1[0x4ff];
    param_1[0x4f4] = param_1[0x500];
    param_1[0x4f5] = param_1[0x501];
    param_1[0x4f6] = param_1[0x502];
    param_1[0x4f7] = param_1[0x503];
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&fStack_20,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    param_1[0x24a] = 0x3da3d70a;
    param_1[0x249] = (int)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    FUN_00a8c760(0);
    return;
  case 4:
    FUN_00aa4080(0x46,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00eaa6e0(0x41200000,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a8c760(0);
      return;
    }
    goto switchD_0047ad35_default;
  case 6:
    FUN_00aa4080(0x4a,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    iVar5 = param_1[0x2a1];
    fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
    fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
    fStack_1c = 0.0;
    fVar1 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_18 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 1.0;
    }
    iVar5 = param_1[0x2a1];
    fStack_20 = fStack_20 * -1.5;
    fStack_1c = fStack_1c * -1.5;
    fStack_18 = fStack_18 * -1.5;
    fStack_14 = fStack_14 * -1.5;
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    fVar3 = *(float *)(iVar5 + 0x4c);
    param_1[0x4f0] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x4f1] = (int)(fVar1 + fStack_1c);
    param_1[0x4f2] = (int)(fVar2 + fStack_18);
    param_1[0x4f3] = (int)(fStack_14 + fVar3);
    FUN_00477950(param_1 + 0x4d7,param_1 + 0x10,param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3c0);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x249] <= 1.8) {
      iVar5 = param_1[0x2a1];
      fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      fStack_1c = 0.0;
      fVar1 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_18 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 1.0;
      }
      iVar5 = param_1[0x2a1];
      fStack_20 = fStack_20 * -1.5;
      fStack_1c = fStack_1c * -1.5;
      fStack_18 = fStack_18 * -1.5;
      fStack_14 = fStack_14 * -1.5;
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      param_1[0x4f0] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
      param_1[0x4f1] = (int)(fVar1 + fStack_1c);
      param_1[0x4f2] = (int)(fVar2 + fStack_18);
      param_1[0x4f3] = (int)(fStack_14 + fVar3);
      FUN_0047ab40(param_1 + 0x4d7,param_1 + 0x4f0,0x3dcccccd);
    }
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.05 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&fStack_20,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    FUN_00a8e880(param_1 + 0x4f0);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    FUN_00a8c760(0);
    return;
  case 8:
    FUN_00aa4080(0x4c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    FUN_00eaa6e0(0x41200000,0);
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
    break;
  case 9:
    break;
  default:
    goto switchD_0047ad35_default;
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8c760(0);
    return;
  }
switchD_0047ad35_default:
  FUN_00a8c760(0);
  return;
}

// 004D1DD0  lib::StaticArray<Entity*,16>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004D1E00  lib::StaticArray<Collision*,64>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Collision*,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004D1E30  lib::StaticArray<Collision*,8>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Collision*,8>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004D2660  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>  size=380  [class]
int * __thiscall
lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *local_7c;
  float local_78;
  undefined **local_60;
  int *local_5c;
  int local_58;
  undefined4 local_54;
  int local_50 [19];
  
  local_5c = local_50;
  local_58 = 0;
  local_54 = 0x10;
  local_60 = vftable;
  FUN_00c27cb0(*(undefined4 *)(param_1 + 0x4f0),param_2,&local_60,0x20040);
  local_78 = 0.0;
  piVar1 = local_5c + local_58;
  iVar12 = *(int *)(param_1 + 0xa84);
  fVar2 = *(float *)(iVar12 + 0x40);
  fVar3 = *(float *)(param_1 + 0x40);
  local_7c = (int *)0x0;
  fVar4 = *(float *)(iVar12 + 0x44);
  fVar5 = *(float *)(param_1 + 0x44);
  fVar6 = *(float *)(iVar12 + 0x48);
  fVar7 = *(float *)(param_1 + 0x48);
  piVar13 = local_5c;
  if (local_5c == piVar1) {
    return (int *)0x0;
  }
  do {
    if (((((*piVar13 != 0) && (piVar11 = (int *)FUN_00a7c8a0(), piVar11 != (int *)0x0)) &&
         (piVar11[0x139] == 0)) && (iVar12 = (**(code **)(*piVar11 + 0x14c))(0x53,0), iVar12 != 0))
       && ((((*(int *)(param_1 + 0x10b8) != 1 || (param_3 == 0)) ||
            (((float)piVar11[0x12] - *(float *)(param_1 + 0x48)) * (fVar6 - fVar7) +
             ((float)piVar11[0x10] - *(float *)(param_1 + 0x40)) * (fVar2 - fVar3) +
             ((float)piVar11[0x11] - *(float *)(param_1 + 0x44)) * (fVar4 - fVar5) <= 0.0)) &&
           ((fVar8 = *(float *)(param_1 + 0x40) - (float)piVar11[0x10],
            fVar10 = *(float *)(param_1 + 0x44) - (float)piVar11[0x11],
            fVar9 = *(float *)(param_1 + 0x48) - (float)piVar11[0x12],
            fVar8 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8, local_7c == (int *)0x0 ||
            (fVar8 < local_78)))))) {
      local_7c = piVar11;
      local_78 = fVar8;
    }
    piVar13 = piVar13 + 1;
  } while (piVar13 != piVar1);
  return local_7c;
}

// 004D27E0  FUN_004d27e0  size=563  [callgraph]
void __fastcall FUN_004d27e0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x10b8);
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      uVar7 = 1;
    }
    else {
      if (iVar4 != 2) goto LAB_004d2839;
      uVar7 = 5;
    }
    iVar4 = FUN_00c198f0(uVar7);
    if (((iVar4 == 0) && (iVar4 = FUN_004bb050(), iVar4 != 0)) &&
       (fVar1 = *(float *)(param_1 + 0x11b4), !NAN(fVar1) && 1800.0 < fVar1 != (fVar1 == 1800.0))) {
      FUN_004beea0(0x1000c);
      return;
    }
  }
LAB_004d2839:
  fVar6 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar6 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar6));
  fVar6 = ABS(fVar6);
  fVar1 = (float)fVar6;
  if ((fVar6 <= (float10)0.6981317) ||
     (fVar2 = *(float *)(param_1 + 0xa90), NAN(fVar2) || 9.0 < fVar2 == (fVar2 == 9.0))) {
    iVar4 = FUN_004ccd40();
    if (iVar4 == 0) {
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 100.0 < fVar2 != (fVar2 == 100.0)) {
        *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_1 + 0xa84);
        FUN_004beea0(0x10003);
        return;
      }
      if (2.1816616 < fVar1) {
        uVar5 = FUN_00dde2d0(0,100);
        if ((uVar5 & 1) == 0) {
          FUN_004beea0(0x50001);
          return;
        }
        goto LAB_004d28cb;
      }
      if (1.0471976 < fVar1) {
        FUN_004cc150();
        return;
      }
      FUN_004beea0(0x10002);
    }
  }
  else {
    if ((float10)2.5307274 < fVar6) {
      if (9.0 < *(float *)(param_1 + 0xa90)) {
        FUN_004beea0(0x50001);
        return;
      }
      uVar5 = FUN_00dde2d0(0,100);
      if ((uVar5 & 3) != 0) {
        FUN_004beea0(0x20006);
        return;
      }
LAB_004d28cb:
      FUN_004beea0(0x10004);
      return;
    }
    fVar2 = *(float *)(param_1 + 0xa90);
    if (!NAN(fVar2) && 100.0 < fVar2 != (fVar2 == 100.0)) {
      iVar4 = *(int *)(param_1 + 0x10b8);
      sVar3 = FUN_00dde2d0(0,100);
      if (((-(uint)(iVar4 != 2) & 0xfffffffa) + 7 & (int)sVar3) == 0) {
        FUN_004bf1e0();
        return;
      }
      FUN_004cc150();
      return;
    }
    iVar4 = FUN_004ccd40();
    if (iVar4 == 0) {
      if (fVar1 <= 1.0471976) {
        FUN_004beea0(0x10002);
        return;
      }
      FUN_004cc150();
      return;
    }
  }
  return;
}

// 004D2A20  FUN_004d2a20  size=881  [callgraph]
void __fastcall FUN_004d2a20(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bee20(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if ((param_1[0x2a1] != 0) &&
       (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      FUN_004b9650(0x3dcccccd,0x3d0efa35);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be9b0(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if ((param_1[0x2a1] != 0) &&
       (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      FUN_004b9650(0x3dcccccd,0x3d0efa35);
    }
    fVar1 = 25.0;
    if (param_1[0x42e] == 1) {
      fVar1 = 64.0;
    }
    if (((float)param_1[0x2a4] < fVar1) &&
       (((fVar4 = (float10)FUN_004b58a0(), (float10)0.6981317 <= fVar4 ||
         (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 3) == 0)) || (iVar3 = FUN_004ccd40(), iVar3 == 0))))
    {
      uVar7 = 1;
      uVar6 = 0x8000000;
      uVar5 = 0;
      FUN_00a92f90(0,0x8000000,1);
      FUN_00e3a1a0(uVar5,uVar6,uVar7);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if ((param_1[0x2a1] != 0) &&
       (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      FUN_004b9650(0x3dcccccd,0x3d0efa35);
    }
    fVar4 = (float10)FUN_004b58a0();
    if (((((float10)0.6981317 <= fVar4) || (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 3) == 0)) ||
        (iVar3 = FUN_004ccd40(), iVar3 == 0)) && (iVar3 = FUN_00a94ce0(0), iVar3 != 0)) {
      FUN_00aa4080(8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004d2d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004D2DB0  FUN_004d2db0  size=2582  [callgraph]
void __fastcall FUN_004d2db0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  short sVar3;
  int *piVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 fVar10;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [92];
  
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x42e] == 2) && (iVar7 = FUN_004b7fe0(), iVar7 == 0)) {
      local_98 = ((float)param_1[0x12] - (float)param_1[0x426]) *
                 ((float)param_1[0x12] - (float)param_1[0x426]) +
                 ((float)param_1[0x10] - (float)param_1[0x424]) *
                 ((float)param_1[0x10] - (float)param_1[0x424]);
      fVar10 = (float10)FUN_004b58a0();
      if ((fVar10 < (float10)0.34906584) && ((local_98 < 64.0 && (49.0 < local_98)))) {
        FUN_004beea0(0x1000d);
        return;
      }
    }
    if (param_1[0x458] != 0) {
      RayCastManager::getWork(param_1 + 0x458);
    }
    if (param_1[0x404] == 0x1000b) {
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004cbf10();
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = 3;
      return;
    }
    FUN_004b5020();
    fVar10 = (float10)FUN_004b58a0();
    if (fVar10 <= (float10)1.5707964) {
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 1;
    }
    else {
      FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
    }
    sVar3 = FUN_00dde2d0(0,100);
    param_1[0x250] = (int)sVar3;
    param_1[0x251] = 0;
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    return;
  case 1:
    if (param_1[0x428] == 0) {
      piVar4 = param_1 + 0x424;
    }
    else {
      piVar4 = (int *)(param_1[0x428] + 0x40);
    }
    FUN_004b94a0(piVar4,0x3e800000,0x3e32b8c2);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar7 = FUN_00a8c760(10);
    if (iVar7 != 0) {
      param_1[0x248] = 0;
      param_1[0x187] = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if (param_1[0x428] == 0) {
      piVar4 = param_1 + 0x424;
    }
    else {
      piVar4 = (int *)(param_1[0x428] + 0x40);
    }
    FUN_004b94a0(piVar4,0x3e800000,0x3e32b8c2);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      param_1[0x248] = 0;
      param_1[0x187] = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 3:
    uVar9 = 0;
    if (param_1[0x428] == 0) {
      piVar4 = param_1 + 0x424;
    }
    else {
      piVar4 = (int *)(param_1[0x428] + 0x40);
    }
    FUN_004b94a0(piVar4,0x3e800000,0x3e32b8c2);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar7 = FUN_004cbf60();
    if (iVar7 != 0) {
      return;
    }
    if (param_1[0x42e] == 1) {
      if (param_1[0x458] != 0) {
        local_94 = 0.0;
        local_98 = 0.0;
        iVar7 = FUN_00907560(param_1 + 0x458,0,0,&local_94,&local_98,0,0,0);
        if (iVar7 != 0) {
          uVar8 = 0;
          if (local_94 != 0.0) {
            uVar9 = FUN_009184c0(local_94);
            uVar9 = uVar9 >> 0x10;
            uVar8 = FUN_008f7780(local_94);
          }
          if (local_98 != 0.0) {
            local_7c = 0.0;
            local_78 = 0.0;
            local_74 = 0.0;
            local_80 = local_98;
            uVar9 = FUN_009015c0();
            uVar8 = FUN_008f7780(local_98);
          }
          if ((param_1[0x428] == 0) || (uVar5 = FUN_009f8b40(), uVar5 != uVar9)) {
            FUN_004beea0(0x1000b);
            param_1[0x405] = 0x10003;
            FUN_004bad90(uVar8);
            return;
          }
        }
      }
      local_80 = (float)param_1[0x10];
      local_78 = (float)param_1[0x12];
      local_74 = (float)param_1[0x13];
      local_7c = (float)param_1[0x11] + 0.1;
      pfVar6 = (float *)FUN_00a8b8a0(local_70,0x3fe66666);
      local_90 = local_80 + *pfVar6;
      local_8c = pfVar6[1] + local_7c;
      local_88 = pfVar6[2] + local_78;
      local_84 = pfVar6[3] + local_74;
      uVar8 = FUN_009f8b40(0,0,0);
      uVar8 = FUN_00410130(7,uVar8);
      FUN_00468970(param_1 + 0x458,0,&local_80,&local_90,uVar8,0,0,0,"em0110_dash_check",0,0);
      HavokRayCastManager::set(local_60);
    }
    local_98 = (float)param_1[0x248];
    fVar10 = (float10)FUN_00fdc1f0();
    fVar10 = ((float10)1 - fVar10) * ((float10)0.4 - (float10)local_98) + (float10)local_98;
    param_1[0x248] = (int)(float)fVar10;
    FUN_00a8b8a0(&local_90,(float)(fVar10 * (float10)(float)param_1[0x244]));
    param_1[0x14] = (int)((float)param_1[0x14] + local_90);
    param_1[0x15] = (int)((float)param_1[0x15] + local_8c);
    param_1[0x16] = (int)((float)param_1[0x16] + local_88);
    param_1[0x17] = (int)((float)param_1[0x17] + local_84);
    iVar7 = param_1[0x428];
    if (iVar7 != 0) {
      param_1[0x424] = *(int *)(iVar7 + 0x40);
      param_1[0x425] = *(int *)(iVar7 + 0x44);
      param_1[0x426] = *(int *)(iVar7 + 0x48);
      param_1[0x427] = *(int *)(iVar7 + 0x4c);
      if (*(int *)(*(int *)(param_1[0x428] + 0x4f0) + 0x50) != 0) {
        param_1[0x428] = 0;
      }
    }
    local_94 = ((float)param_1[0x12] - (float)param_1[0x426]) *
               ((float)param_1[0x12] - (float)param_1[0x426]) +
               ((float)param_1[0x10] - (float)param_1[0x424]) *
               ((float)param_1[0x10] - (float)param_1[0x424]);
    if (((param_1[0x370] & 0x10000000U) != 0) && (iVar7 = FUN_004ba1b0(), iVar7 != 0)) {
      FUN_004ba0a0();
      uVar9 = FUN_004b72d0();
      if (6 < uVar9) {
        if (9.0 <= local_94) {
          return;
        }
        FUN_004beea0(0x2000b);
        return;
      }
    }
    if ((param_1[0x42e] == 2) && (iVar7 = FUN_004b7fe0(), iVar7 != 0)) {
      fVar2 = 42.25;
LAB_004d3581:
      if (local_94 < fVar2) goto LAB_004d359c;
    }
    else {
      if ((param_1[0x42e] == 0) &&
         (fVar10 = (float10)FUN_004b5050(), fVar10 < (float10)0.75 != (fVar10 == (float10)0.75))) {
        fVar2 = 24.01;
        goto LAB_004d3581;
      }
      if (param_1[0x42e] == 1) {
        fVar2 = 49.0;
        goto LAB_004d3581;
      }
      if (local_94 < 12.25) {
        iVar7 = FUN_004c0ec0();
        if (iVar7 != 0) {
          FUN_004cbe70(0,param_1 + 0x3a4);
          return;
        }
        goto LAB_004d359c;
      }
    }
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
LAB_004d359c:
      FUN_00aa4080(10,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(10,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004b9460();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_004c0ec0();
      return;
    }
    break;
  case 4:
    iVar7 = FUN_00a8c760(10);
    if (iVar7 != 0) {
      FUN_004cbe70(0,param_1 + 0x3a4);
    }
    local_98 = (float)param_1[0x248];
    fVar10 = (float10)FUN_00fdc1f0();
    fVar10 = (float10)local_98 + -(float10)local_98 * ((float10)1 - fVar10);
    param_1[0x248] = (int)(float)fVar10;
    if (fVar10 < (float10)0.01) {
      param_1[0x248] = 0;
    }
    FUN_00a8b8a0(&local_90,(float)param_1[0x244] * (float)param_1[0x248]);
    param_1[0x14] = (int)((float)param_1[0x14] + local_90);
    param_1[0x15] = (int)((float)param_1[0x15] + local_8c);
    param_1[0x16] = (int)((float)param_1[0x16] + local_88);
    param_1[0x17] = (int)((float)param_1[0x17] + local_84);
    iVar7 = FUN_00a8c760(4);
    if ((iVar7 != 0) && (param_1[0x251] == 0)) {
      param_1[0x251] = 1;
      iVar7 = FUN_004ccd40();
      if (iVar7 != 0) {
        return;
      }
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x428] = 0;
      (*pcVar1)();
    }
  }
  return;
}

// 004D37E0  FUN_004d37e0  size=538  [callgraph]
void __fastcall FUN_004d37e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xa2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x370] = param_1[0x370] | 0x4000;
    param_1[0x418] = 0;
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a952e0(0,0x42540000);
    if (iVar2 != 0) {
      iVar2 = FUN_004ba180();
      if (iVar2 == 0) {
        param_1[0x187] = 3;
        return;
      }
      FUN_004bf8d0();
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
        uVar5 = 0x3f800000;
        uVar4 = 0;
        FUN_00a92f90(0,0x3f800000);
        fVar3 = (float10)FUN_00407b40(uVar4);
        FUN_004bed90(0xb,0,0,0x3f800000,0x8000000,
                     (float)(fVar3 - (float10)(float)param_1[0x244] * (float10)0.016666668),uVar5);
        (**(code **)(*piVar1 + 0x1c))();
        (**(code **)(*piVar1 + 100))();
      }
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        FUN_004bda70(7);
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      FUN_004cbe70(0,param_1 + 0x3a4);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004d39c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004d39f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004D3A10  FUN_004d3a10  size=1820  [callgraph]
void __fastcall FUN_004d3a10(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [92];
  
  iVar3 = FUN_00a81330();
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(param_1[0x3a4] + 8))(0x3f800000,0,0);
    (**(code **)(param_1[0x3a4] + 0xc))();
    if (param_1[0x458] != 0) {
      RayCastManager::getWork(param_1 + 0x458);
    }
    if (iVar6 != 0) {
      fVar7 = (float10)FUN_004b5870(iVar6 + 0x40);
      if (fVar7 <= (float10)1.5707964) {
        FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 1;
      }
      else {
        FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 2;
      }
      sVar2 = FUN_00dde2d0(0,100);
      param_1[0x250] = (int)sVar2;
      param_1[0x251] = 0;
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      return;
    }
    goto LAB_004d411b;
  case 1:
    if (iVar6 != 0) {
      FUN_004b94a0(iVar6 + 0x40,0x3e4ccccd,0x3e32b8c2);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      param_1[0x248] = 0;
      param_1[0x187] = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 2:
    if (iVar6 != 0) {
      FUN_004b94a0(iVar6 + 0x40,0x3e4ccccd,0x3e32b8c2);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      param_1[0x248] = 0;
      param_1[0x187] = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 3:
    if (iVar6 != 0) {
      FUN_004b94a0(iVar6 + 0x40,0x3e4ccccd,0x3e32b8c2);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_004cbf60();
    if (iVar3 == 0) {
      if (param_1[0x42e] == 1) {
        if ((param_1[0x458] != 0) &&
           (iVar3 = FUN_00907560(param_1 + 0x458,0,0,0,0,0,0,0), iVar3 != 0)) {
          FUN_004beea0(0x1000b);
          param_1[0x405] = 0x70000;
          return;
        }
        local_80 = (float)param_1[0x10];
        local_78 = (float)param_1[0x12];
        local_74 = (float)param_1[0x13];
        local_7c = (float)param_1[0x11] + 0.1;
        pfVar4 = (float *)FUN_00a8b8a0(local_70,0x3fe66666);
        local_90 = *pfVar4 + local_80;
        local_8c = pfVar4[1] + local_7c;
        local_88 = pfVar4[2] + local_78;
        local_84 = pfVar4[3] + local_74;
        uVar5 = FUN_009f8b40(0,0,0);
        uVar5 = FUN_00410130(7,uVar5);
        FUN_00468970(param_1 + 0x458,0,&local_80,&local_90,uVar5,0,0,0,"em0110_dash_check",0,0);
        HavokRayCastManager::set(local_60);
      }
      fVar1 = (float)param_1[0x248];
      fVar7 = (float10)FUN_00fdc1f0();
      fVar7 = ((float10)1 - fVar7) * ((float10)0.4 - (float10)fVar1) + (float10)fVar1;
      param_1[0x248] = (int)(float)fVar7;
      FUN_00a8b8a0(&local_90,(float)(fVar7 * (float10)(float)param_1[0x244]));
      param_1[0x14] = (int)((float)param_1[0x14] + local_90);
      param_1[0x15] = (int)((float)param_1[0x15] + local_8c);
      param_1[0x16] = (int)((float)param_1[0x16] + local_88);
      param_1[0x17] = (int)((float)param_1[0x17] + local_84);
      if (iVar6 != 0) {
        param_1[0x424] = *(int *)(iVar6 + 0x40);
        param_1[0x425] = *(int *)(iVar6 + 0x44);
        param_1[0x426] = *(int *)(iVar6 + 0x48);
        param_1[0x427] = *(int *)(iVar6 + 0x4c);
      }
      iVar3 = FUN_004bf240();
      if (iVar3 != 0) {
        FUN_004cbe70(0,param_1 + 0x3a4);
        return;
      }
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_00aa4080(10,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(10,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 4:
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      FUN_004cbe70(0,param_1 + 0x3a4);
    }
    fVar1 = (float)param_1[0x248];
    fVar7 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar7);
    param_1[0x248] = (int)(float)fVar7;
    if (fVar7 < (float10)0.01) {
      param_1[0x248] = 0;
    }
    FUN_00a8b8a0(&local_90,(float)param_1[0x248] * (float)param_1[0x244]);
    param_1[0x14] = (int)((float)param_1[0x14] + local_90);
    param_1[0x15] = (int)((float)param_1[0x15] + local_8c);
    param_1[0x16] = (int)((float)param_1[0x16] + local_88);
    param_1[0x17] = (int)((float)param_1[0x17] + local_84);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    param_1[0x428] = 0;
LAB_004d411b:
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004D4140  FUN_004d4140  size=1188  [callgraph]
void __fastcall FUN_004d4140(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar2 = FUN_00a81330();
  if ((((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) ||
      (piVar3[0x139] != 0)) || (iVar2 = (**(code **)(*piVar3 + 0x14c))(0x53,0), iVar2 == 0)) {
    piVar3 = (int *)lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>(0x41a00000,0);
  }
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    if (piVar3 != (int *)0x0) {
      fVar4 = (float10)FUN_00a8ec30(piVar3 + 0x10);
      fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
      if ((float10)2.1816616 <= ABS(fVar4)) {
        param_1[0x187] = 1;
        FUN_00aa4080(0x10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0x10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be8c0(0x3f800000,0x3f800000);
        FUN_004beaa0();
        return;
      }
    }
    FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x370] = param_1[0x370] | 0x10;
    param_1[0x248] = 0x43960000;
    param_1[0x187] = 2;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if ((piVar3 == (int *)0x0) || (piVar3[0x139] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004d42d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_004b94a0(piVar3 + 0x10,0x3e4ccccd,0x3db2b8c2);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar2 = FUN_004bf240();
    if ((iVar2 == 0) && ((float)param_1[0x248] <= 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x004d4239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    fVar1 = (float)piVar3[0x10] - (float)param_1[0x10];
    fVar1 = ((float)piVar3[0x12] - (float)param_1[0x12]) *
            ((float)piVar3[0x12] - (float)param_1[0x12]) + fVar1 * fVar1;
    if (fVar1 <= (float)param_1[0x2a4]) {
      return;
    }
    if (2.25 <= (float)param_1[0x2a4]) {
      return;
    }
    if (0.43633232 <= (float)param_1[0x2a8]) {
      return;
    }
    if (fVar1 < 6.25) {
      FUN_004beea0(0x50001);
      param_1[0x405] = 0x70001;
      return;
    }
    FUN_004beea0(0x1000b);
    param_1[0x405] = 0x70001;
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (piVar3 != (int *)0x0)) {
    FUN_004b94a0(piVar3 + 0x10,0x3dcccccd,0x3c8efa35);
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x42f00000;
  return;
}

// 004D45F0  FUN_004d45f0  size=1403  [callgraph]
void __fastcall FUN_004d45f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_00a81330();
  if ((((iVar1 == 0) || (piVar2 = (int *)FUN_00a7c8a0(), piVar2 == (int *)0x0)) ||
      (piVar2[0x139] != 0)) || (iVar1 = (**(code **)(*piVar2 + 0x14c))(0x53,0), iVar1 == 0)) {
    piVar2 = (int *)lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>(0x41a00000,0);
  }
  switch(param_1[0x187]) {
  case 0:
    if ((piVar2 != (int *)0x0) &&
       (fVar3 = (float10)FUN_004b5870(piVar2 + 0x10), (float10)2.1816616 <= fVar3)) {
      param_1[0x187] = 1;
      FUN_00aa4080(0x10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      return;
    }
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
    param_1[0x187] = 2;
  case 1:
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && (piVar2 != (int *)0x0)) {
      FUN_004b94a0(piVar2 + 0x10,0x3dcccccd,0x3c8efa35);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42f00000;
      return;
    }
    break;
  case 2:
    if (piVar2 != (int *)0x0) {
      FUN_004b94a0(piVar2 + 0x10,0x3dcccccd,0x3cd67750);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be9b0(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    if ((piVar2 == (int *)0x0) || (piVar2[0x139] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x004d4a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_004b94a0(piVar2 + 0x10,0x3dcccccd,0x3cd67750);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = FUN_004bf240();
    if ((iVar1 == 0) && (((float)param_1[0x248] <= 0.0 || (piVar2[0x139] != 0)))) {
      uVar6 = 1;
      uVar5 = 0x8000000;
      uVar4 = 0;
      FUN_00a92f90(0,0x8000000,1);
      FUN_00e3a1a0(uVar4,uVar5,uVar6);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    if (piVar2 != (int *)0x0) {
      FUN_004b94a0(piVar2 + 0x10,0x3dcccccd,0x3cd67750);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    if (piVar2 != (int *)0x0) {
      FUN_004b94a0(piVar2 + 0x10,0x3dcccccd,0x3cd67750);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004d4b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004D4B90  FUN_004d4b90  size=836  [callgraph]
void __fastcall FUN_004d4b90(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x188] = 0;
    param_1[0x370] = param_1[0x370] | 2;
    (**(code **)(*param_1 + 0x318))();
    iVar2 = param_1[0x1d9];
    if (*(int *)(iVar2 + 0x104) != 1) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
    piVar1 = (int *)FUN_008e0d60();
    param_1[600] = *piVar1;
    param_1[0x259] = piVar1[1];
    param_1[0x25a] = piVar1[2];
    param_1[0x25b] = piVar1[3];
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    if (param_1[0x188] == 0) {
      uVar3 = 0xd;
    }
    else {
      if (param_1[0x188] != 1) goto LAB_004d4d24;
      uVar3 = 7;
    }
    FUN_008e5c50(uVar3);
    param_1[0x188] = param_1[0x188] + 1;
  }
LAB_004d4d24:
  iVar2 = FUN_00a8c760(0xc);
  if (iVar2 == 0) {
    if ((param_1[0x494] != 0) && (param_1[0x494] = 0, param_1[0x1d9] != 0)) {
      FUN_008e0d30(param_1 + 0x490);
    }
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
  }
  else {
    iVar2 = FUN_00a12210(0);
    if (iVar2 != 0) {
      local_20 = (float)param_1[600] + *(float *)(iVar2 + 0x50);
      local_1c = (float)param_1[0x259] +
                 (*(float *)(iVar2 + 0x54) - *(float *)(param_1[0x1d9] + 0xf8) * 0.5);
      local_18 = *(float *)(iVar2 + 0x58) + (float)param_1[0x25a];
      local_14 = *(float *)(iVar2 + 0x5c) + (float)param_1[0x25b];
      param_1[0x494] = 1;
      FUN_008e0d30(&local_20);
    }
    (**(code **)(*param_1 + 0x318))();
    iVar2 = param_1[0x1d9];
    if (*(int *)(iVar2 + 0x104) != 1) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
    *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
  }
  if (((param_1[0x405] == 0x10003) && ((float)param_1[0x2a4] < 25.0)) &&
     (iVar2 = FUN_004c0ec0(), iVar2 != 0)) {
    FUN_004cbe70(0,param_1 + 0x3a4);
    return;
  }
  if (param_1[0x405] == -1) {
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_004beea0(param_1[0x405]);
  return;
}

// 004D5180  FUN_004d5180  size=80  [callgraph]
void __fastcall FUN_004d5180(int param_1)

{
  if (*(int *)(param_1 + 0xf2c) != -0x54325433) {
    if (*(int *)(param_1 + 0xf2c) != -0x21124111) {
      FUN_00dd5650(&DAT_0163eef4);
    }
    FUN_004cbe70(0,param_1 + 0xe90);
  }
  *(undefined4 *)(param_1 + 0x10c4) = 0;
  FUN_004beea0(0x40000);
  return;
}

// 004D51D0  FUN_004d51d0  size=2461  [callgraph]
void __fastcall FUN_004d51d0(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x15,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x15,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x46d] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    FUN_004b5cc0();
    param_1[0x370] = param_1[0x370] | 0x4002;
    param_1[0x4a9] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x250] = 0;
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x248] = (int)(float)fVar4;
    param_1[0x24f] = 0x42900000;
    param_1[600] = (int)((float)param_1[0x45c] - (float)param_1[0x14]);
    param_1[0x259] = (int)((float)param_1[0x45d] - (float)param_1[0x15]);
    param_1[0x25a] = (int)((float)param_1[0x45e] - (float)param_1[0x16]);
    param_1[0x25b] = (int)((float)param_1[0x45f] - (float)param_1[0x17]);
    param_1[0x460] = (int)((float)param_1[600] * 0.033333335);
    param_1[0x461] = (int)((float)param_1[0x259] * 0.033333335);
    param_1[0x462] = (int)((float)param_1[0x25a] * 0.033333335);
    param_1[0x463] = (int)((float)param_1[0x25b] * 0.033333335);
    param_1[0x48b] = 0;
    goto LAB_004d53ad;
  case 1:
LAB_004d53ad:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    switchD_0080dbae::default();
    FUN_00da9630(1,1);
    puVar5 = local_20;
    uVar6 = (**(code **)(*param_1 + 0x204))(puVar5,0);
    FUN_00da9660(1,uVar6,puVar5);
    iVar3 = FUN_00a8c760(10);
    if ((iVar3 != 0) &&
       ((((float)param_1[600] != 0.0 || ((float)param_1[0x259] != 0.0)) ||
        ((float)param_1[0x25a] != 0.0)))) {
      fVar1 = (float)param_1[0x244];
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x460] * fVar1);
      param_1[0x15] = (int)((float)param_1[0x461] * fVar1 + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x462] * fVar1 + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x463] * fVar1 + (float)param_1[0x17]);
      param_1[600] = (int)((float)param_1[600] - (float)param_1[0x460] * fVar1);
      param_1[0x259] = (int)((float)param_1[0x259] - (float)param_1[0x461] * fVar1);
      param_1[0x25a] = (int)((float)param_1[0x25a] - (float)param_1[0x462] * fVar1);
      param_1[0x25b] = (int)((float)param_1[0x25b] - (float)param_1[0x463] * fVar1);
      if ((((ABS((float)param_1[600]) <= 0.001) &&
           (ABS((float)param_1[0x259]) < 0.001 != (ABS((float)param_1[0x259]) == 0.001))) &&
          (ABS((float)param_1[0x25a]) < 0.001 != (ABS((float)param_1[0x25a]) == 0.001))) ||
         (fVar1 = (float)param_1[0x462] * (float)param_1[0x25a] +
                  (float)param_1[0x461] * (float)param_1[0x259] +
                  (float)param_1[0x460] * (float)param_1[600], fVar1 < 0.0 != (fVar1 == 0.0))) {
        param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[600]);
        param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x259]);
        param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x25a]);
        param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
        param_1[600] = 0;
        param_1[0x259] = 0;
        param_1[0x25a] = 0;
        param_1[0x25b] = 0;
      }
    }
    FUN_00c27f40(1,0xbf800000);
    if (param_1[0x188] < 7) {
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 == 0) {
        fVar4 = (float10)-1.0;
      }
      else {
        fVar4 = (float10)FUN_00e36970(0);
      }
      iVar3 = param_1[0x188] * 4;
      if ((float10)*(float *)(&DAT_0163f370 + param_1[0x188] * 4) - (float10)1.0 <
          fVar4 * (float10)60.0 !=
          ((float10)*(float *)(&DAT_0163f370 + param_1[0x188] * 4) - (float10)1.0 ==
          fVar4 * (float10)60.0)) {
        FUN_004badc0(*(undefined4 *)(&DAT_0163f340 + iVar3),*(float *)(&DAT_0163f370 + iVar3) + 36.0
                     ,*(undefined4 *)(&DAT_0163f328 + iVar3),*(undefined4 *)(&DAT_0163f358 + iVar3))
        ;
        param_1[0x188] = param_1[0x188] + 1;
      }
      iVar3 = FUN_00a8c760(0);
      if (iVar3 != 0) {
        FUN_004b9650(0x3e4ccccd,0x3d567750);
      }
    }
    else {
      iVar3 = FUN_00a8c760(0);
      if (iVar3 != 0) {
        fVar1 = (float)param_1[0x24f];
        param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
        if (0.0 < fVar1 - (float)param_1[0x244]) {
          FUN_004b9650(0x3e4ccccd,0x3d567750);
        }
        else {
          param_1[0x370] = param_1[0x370] & 0xfffffffd;
          fVar1 = (float)param_1[0x25];
          fVar4 = (float10)FUN_00ddba30((float)param_1[0x248] - fVar1);
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.1 + (float10)fVar1));
          param_1[0x25] = (int)(float)fVar4;
        }
      }
    }
    iVar3 = FUN_00a8c760(1);
    if (((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_004cb520(3,param_1[0x250]);
      param_1[0x250] = (uint)(param_1[0x250] == 0);
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
       ((*(uint *)(iVar3 + 0x4c0) & 1) == 0)) {
      iVar3 = FUN_00a8c760(0xf);
      if (iVar3 != 0) {
        param_1[0x48a] = 1;
        param_1[0x187] = 2;
        FUN_00aa4080(0xa2,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
        FUN_004be9b0(0xa2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x370] = param_1[0x370] | 2;
        param_1[0x370] = param_1[0x370] | 0x4000;
        return;
      }
    }
    else {
      iVar3 = FUN_00a8c760(0x10);
      if (iVar3 == 0) {
        param_1[0x4a9] = 0;
        if ((param_1[0x1d9] != 0) && (*(int *)(param_1[0x1d9] + 0x10c) == 0)) {
          (**(code **)(*param_1 + 0x314))();
          if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
            *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          }
          FUN_008e0ae0(1);
        }
      }
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        param_1[0x48a] = 1;
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(1);
        }
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    break;
  case 2:
    FUN_004b58d0();
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a952e0(0,0x42540000);
    if (iVar3 != 0) {
      iVar3 = FUN_004ba180();
      if (iVar3 == 0) {
        param_1[0x187] = 4;
        return;
      }
      FUN_004bf8d0();
      piVar2 = (int *)FUN_004ba0c0();
      if (piVar2 != (int *)0x0) {
        uVar7 = 0x3f800000;
        uVar6 = 0;
        FUN_00a92f90(0,0x3f800000);
        fVar4 = (float10)FUN_00407b40(uVar6);
        FUN_004bed90(0xb,0,0,0x3f800000,0x8000000,
                     (float)(fVar4 - (float10)(float)param_1[0x244] * (float10)0.016666668),uVar7);
        (**(code **)(*piVar2 + 0x1c))();
        (**(code **)(*piVar2 + 100))();
      }
      iVar3 = FUN_004ba0a0();
      if (iVar3 != 0) {
        FUN_004bda70(7);
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_004b58d0();
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      FUN_004cbe70(0,param_1 + 0x3a4);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x370] = param_1[0x370] & 0xfffffffd;
      FUN_00aa4080(0x17,0,0x3d088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x17,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a8c760(0x10);
    if (iVar3 == 0) {
      param_1[0x4a9] = 0;
    }
    iVar3 = FUN_00a952e0(0,0x42b00000);
    if (((iVar3 != 0) && (param_1[0x1d9] != 0)) && (*(int *)(param_1[0x1d9] + 0x10c) == 0)) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_008e0ae0(1);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(1);
      }
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004D64E0  FUN_004d64e0  size=1744  [callgraph]
void __fastcall FUN_004d64e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    iVar4 = FUN_00ac9790();
    param_1[0x48c] = iVar4;
    FUN_00aa4080(0x16,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x16,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x318))();
    iVar4 = param_1[0x1d9];
    if (*(int *)(iVar4 + 0x104) != 1) {
      *(undefined4 *)(iVar4 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
    }
    param_1[0x370] = param_1[0x370] | 2;
    param_1[0x370] = param_1[0x370] | 0x4000;
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x4a9] = 1;
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 0x1000;
    param_1[600] = (int)((float)param_1[0x45c] - (float)param_1[0x14]);
    param_1[0x259] = (int)((float)param_1[0x45d] - (float)param_1[0x15]);
    param_1[0x25a] = (int)((float)param_1[0x45e] - (float)param_1[0x16]);
    param_1[0x25b] = (int)((float)param_1[0x45f] - (float)param_1[0x17]);
    param_1[0x460] = (int)((float)param_1[600] * 0.033333335);
    param_1[0x461] = (int)((float)param_1[0x259] * 0.033333335);
    param_1[0x462] = (int)((float)param_1[0x25a] * 0.033333335);
    param_1[0x463] = (int)((float)param_1[0x25b] * 0.033333335);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x48b] = 0;
    goto LAB_004d6695;
  case 1:
LAB_004d6695:
    FUN_00da9630(1,1);
    puVar6 = local_20;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar6,0);
    FUN_00da9660(1,uVar7,puVar6);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar4 = FUN_00a8c760(10);
    if ((iVar4 != 0) &&
       ((((float)param_1[600] != 0.0 || ((float)param_1[0x259] != 0.0)) ||
        ((float)param_1[0x25a] != 0.0)))) {
      fVar1 = (float)param_1[0x244];
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x460] * fVar1);
      param_1[0x15] = (int)((float)param_1[0x461] * fVar1 + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x462] * fVar1);
      param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x463] * fVar1);
      param_1[600] = (int)((float)param_1[600] - (float)param_1[0x460] * fVar1);
      param_1[0x259] = (int)((float)param_1[0x259] - (float)param_1[0x461] * fVar1);
      param_1[0x25a] = (int)((float)param_1[0x25a] - (float)param_1[0x462] * fVar1);
      param_1[0x25b] = (int)((float)param_1[0x25b] - (float)param_1[0x463] * fVar1);
      if ((((ABS((float)param_1[600]) <= 0.001) &&
           (ABS((float)param_1[0x259]) < 0.001 != (ABS((float)param_1[0x259]) == 0.001))) &&
          (ABS((float)param_1[0x25a]) < 0.001 != (ABS((float)param_1[0x25a]) == 0.001))) ||
         (fVar1 = (float)param_1[0x462] * (float)param_1[0x25a] +
                  (float)param_1[600] * (float)param_1[0x460] +
                  (float)param_1[0x259] * (float)param_1[0x461], fVar1 < 0.0 != (fVar1 == 0.0))) {
        param_1[600] = 0;
        param_1[0x259] = 0;
        param_1[0x25a] = 0;
        param_1[0x25b] = 0;
      }
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) & 0xefff;
      FUN_00aa4080(0xa2,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      FUN_004be9b0(0xa2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x370] = param_1[0x370] | 2;
      param_1[0x370] = param_1[0x370] | 0x4000;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_004b58d0();
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar4 = FUN_00a952e0(0,0x42540000);
    if (iVar4 != 0) {
      iVar4 = FUN_004ba180();
      if (iVar4 == 0) {
        param_1[0x187] = 4;
        return;
      }
      FUN_004bf8d0();
      piVar3 = (int *)FUN_004ba0c0();
      if (piVar3 != (int *)0x0) {
        uVar8 = 0x3f800000;
        uVar7 = 0;
        FUN_00a92f90(0,0x3f800000);
        fVar5 = (float10)FUN_00407b40(uVar7);
        FUN_004bed90(0xb,0,0,0x3f800000,0x8000000,
                     (float)(fVar5 - (float10)(float)param_1[0x244] * (float10)0.016666668),uVar8);
        (**(code **)(*piVar3 + 0x1c))();
        (**(code **)(*piVar3 + 100))();
      }
      iVar4 = FUN_004ba0a0();
      if (iVar4 != 0) {
        FUN_004bda70(7);
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_004b58d0();
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      FUN_004cbe70(0,param_1 + 0x3a4);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x370] = param_1[0x370] & 0xfffffffd;
      FUN_00aa4080(0x17,0,0x3d088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x17,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar4 = FUN_00a8c760(0x10);
    if (iVar4 == 0) {
      param_1[0x4a9] = 0;
    }
    iVar4 = FUN_00a952e0(0,0x42b00000);
    if (((iVar4 != 0) && (param_1[0x1d9] != 0)) && (*(int *)(param_1[0x1d9] + 0x10c) == 0)) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_008e0ae0(1);
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(1);
      }
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x48a] = 1;
      (*pcVar2)();
    }
  }
  return;
}

// 004D6BD0  FUN_004d6bd0  size=2115  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d6bd0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
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
  
  iVar2 = FUN_00a81330();
  bVar1 = false;
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0x428d999a;
    local_5c = 0x42c80000;
    local_58 = 0xc3358000;
    (**(code **)(*param_1 + 0x7c))(&local_60,&local_70);
    FUN_00a93090(2);
    FUN_00c187b0(1);
    FUN_00c18580(1,1);
    FUN_00951930();
    (**(code **)(param_1[0x3a4] + 8))(0x3f800000,0,0);
    (**(code **)(param_1[0x3a4] + 0xc))();
    FUN_004ba260();
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00a9e290(&DAT_0163f390,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
    }
    FUN_00aa4080(0xb4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xb4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x2d,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004b93e0(0x129,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x20))();
    }
    FUN_00e5e1b0("bgm_Mystral_Scene1to2");
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    iVar2 = FUN_004b8a90();
    if (iVar2 != 0) {
      param_1[0x189] = 1;
      param_1[0x188] = 3;
    }
    switch(param_1[0x188]) {
    case 0:
      iVar2 = FUN_00a8e520();
      if (iVar2 != 0) {
        param_1[0x188] = param_1[0x188] + 1;
      }
      break;
    case 1:
      bVar1 = true;
      iVar2 = FUN_00a8e520();
      if (iVar2 == 0) {
        param_1[0x188] = param_1[0x188] + 1;
      }
      break;
    case 2:
      param_1[0x188] = 5;
      goto LAB_004d7116;
    case 3:
      iVar2 = FUN_004b8a90();
      if (iVar2 == 0) {
        param_1[0x188] = param_1[0x188] + 1;
      }
      iVar2 = FUN_004ba140();
      if (((iVar2 == 0) || (iVar2 = FUN_004ba140(), (*(byte *)(iVar2 + 0x4c0) & 1) == 0)) ||
         (iVar2 = FUN_004ba140(), *(int *)(iVar2 + 0x674) != 0)) {
        fVar7 = (float)param_1[0x479] - _DAT_01be942c;
        param_1[0x250] = param_1[0x250] + 1;
        param_1[0x479] = (int)fVar7;
      }
      break;
    case 4:
      param_1[0x188] = 2;
LAB_004d7116:
      bVar1 = true;
    }
    fVar7 = (float)param_1[0x47a] - _DAT_01be942c;
    param_1[0x47a] = (int)fVar7;
    if (0.0 < fVar7) {
      param_1[0x251] = 0;
    }
    if (0 < param_1[0x189]) {
      iVar2 = FUN_00a8c760(10);
      if ((iVar2 != 0) || (iVar2 = FUN_00a8e520(), iVar2 == 0)) {
        param_1[0x189] = 2;
      }
      if ((1 < param_1[0x189]) && ((float)param_1[0x47a] <= 0.0)) {
        param_1[0x370] = param_1[0x370] | 0x10000;
      }
    }
    iVar2 = param_1[0x251];
    FUN_00a92f90();
    FUN_00e36b50(0,2,iVar2);
    fVar7 = _DAT_01be942c;
    if (bVar1) {
      uVar6 = 0;
      FUN_00a92f90(0);
      fVar4 = (float10)FUN_00407ae0(uVar6);
      uVar6 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar6);
      fVar7 = (float)(fVar5 + (float10)(float)(fVar4 * (float10)fVar7 * (float10)0.016666668));
      uVar6 = 0;
      FUN_00a92f90(0,fVar7);
      FUN_00407b10(uVar6,fVar7);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] == 0)) {
      FUN_00a92f90();
      FUN_00e36b50(0,2,1);
      local_30 = 0;
      local_2c = 0xbf20d97c;
      local_28 = 0;
      local_20 = 0x42140000;
      local_1c = 0x42b80000;
      local_18 = 0xc2ef0000;
      (**(code **)(*param_1 + 0x7c))(&local_20,&local_30);
      FUN_00aa4080(0xa8,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xa8,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_004bed90(0x1d,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      FUN_008e3c10();
      piVar3 = (int *)FUN_004ba140();
      if (piVar3 != (int *)0x0) {
        FUN_00a9e0d0(piVar3[0x13c]);
        (**(code **)(*piVar3 + 0x20))();
        E3_EnemyBoardDebrisSokushi::vf4C();
        FUN_00a7c950();
      }
      piVar3 = (int *)FUN_004ba0c0();
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x1c))();
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_004d6c0f_default;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_008e6d00();
      FUN_004be3c0();
      FUN_004cbe70(0,param_1 + 0x3a4);
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_004d6c0f_default;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a9e0d0(iVar2);
      FUN_00a805f0();
    }
    iVar2 = FUN_004bfab0();
    FUN_00a92f90();
    FUN_00e36b50(0,0x10,1);
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_40 = 0x428d999a;
    local_3c = 0x42c80000;
    local_38 = 0xc3338000;
    (**(code **)(*param_1 + 0x7c))(&local_40,&local_50);
    FUN_00aa4080(0xa7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xa7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004b93e0(0x128,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (iVar2 != 0) {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        FUN_00a9e290(&DAT_0163f388,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
      }
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    switchD_0080dbae::default();
    param_1[0x370] = param_1[0x370] & 0xfffeffff;
    param_1[0x47a] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x479] = 0x41f00000;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 1;
  }
switchD_004d6c0f_default:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return;
}

// 004D7890  lib::StaticArray<Collision*,8>::StaticArray<Collision*,8>  size=671  [class]
void __fastcall lib::StaticArray<Collision*,8>::StaticArray<Collision*,8>(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined **ppuStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int aiStack_20 [8];
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar8 = &DAT_01b34e80;
    (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
    FUN_00dd6d70(puVar8);
  }
  uVar3 = FUN_009f8b40();
  uStack_3c = 0;
  iVar1 = FUN_00a54ae0(&uStack_3c,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar4 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = RigidBodyCollision::RigidBodyCollision();
    }
    *(undefined4 *)(param_1 + 0x7b0) = uVar5;
    iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,uStack_3c);
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(uVar3);
      FUN_008f1600(0x20);
      FUN_008f18c0(0x100);
    }
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xfc0) = 1;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
    StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(iVar1);
    Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
    FUN_00a93730(1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&iStack_40,iVar4);
        if (iStack_40 != 0) {
          uVar3 = FUN_009124a0();
          iVar6 = FUN_00fdc7b0(uVar3,0x2e);
          if (iVar6 == 0) {
            uVar7 = 0;
          }
          else {
            iVar6 = FUN_00e044e0(iVar6 + 2,0);
            if (iVar6 - 300U < 0x38) {
              uVar7 = iVar6 - 300U >> 2;
            }
            else {
              uVar7 = 0;
            }
          }
          uVar3 = FUN_009124a0();
          StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(uVar7,uVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    iStack_40 = param_1 + 0xde8;
    iVar1 = 0;
    do {
      uStack_38 = FUN_00a8d2a0();
      if (((iVar1 < 0xe) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
         (iStack_34 = FUN_00a7c8a0(), iStack_34 != 0)) {
        uVar3 = FUN_009f8b40();
        piStack_2c = aiStack_20;
        iStack_28 = 0;
        uStack_24 = 8;
        ppuStack_30 = vftable;
        FUN_00a936d0(&ppuStack_30,iVar1);
        for (piVar2 = piStack_2c; piVar2 != piStack_2c + iStack_28; piVar2 = piVar2 + 1) {
          iVar4 = *piVar2;
          if (iVar4 != 0) {
            *(uint *)(iVar4 + 900) = *(uint *)(iVar4 + 900) | 2;
            *(undefined4 *)(iVar4 + 0x374) = uStack_38;
            *(undefined4 *)(iVar4 + 0x370) = uVar3;
          }
        }
        uVar3 = FUN_009f8b40();
        FUN_009f8ae0(uVar3);
      }
      iStack_40 = iStack_40 + 0x24;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xe);
  }
  return;
}

// 004E9550  FUN_004e9550  size=988  [callgraph]
void __fastcall FUN_004e9550(int *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x344))(8,param_1[0x372],param_1[0x371]);
    FUN_00aa4080(0xbd,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      FUN_008e0d30(&uStack_17c);
    }
    (**(code **)(*param_1 + 0x358))(0xb,param_1 + 1000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_004e9611;
  case 1:
LAB_004e9611:
    iVar2 = FUN_00a8c760(0xc);
    if (iVar2 == 0) {
      pcVar3 = *(code **)(*param_1 + 0x314);
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x318);
    }
    (*pcVar3)();
    break;
  case 2:
    FUN_00aa4080(0xbe,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    if (param_1[0x1d9] != 0) {
      CharacterControl::setHeight(0x3f800000);
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      FUN_008e0d30(&uStack_180);
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_008e6d00();
    }
    param_1[0x481] = 0;
    param_1[0x249] = (int)((float)param_1[0x475] * 60.0);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00a8cb60(6);
    }
    iVar2 = FUN_00907640(param_1 + 0x43b,0,param_1 + 0x37c);
    fVar1 = (float)param_1[0x380] - (float)param_1[0x11];
    if (iVar2 == 0) {
      if (fVar1 < 0.001 != (fVar1 == 0.001)) {
        param_1[0x481] = param_1[0x481] + 1;
      }
      param_1[0x380] = param_1[0x11];
      if (4 < (uint)param_1[0x481]) {
        FUN_00a8cb60(6);
      }
    }
    else {
      if (fVar1 < 0.001 != (fVar1 == 0.001)) {
        param_1[0x481] = param_1[0x481] + 1;
      }
      param_1[0x380] = param_1[0x11];
      fVar1 = (float)param_1[0x37d] + 0.01 + 0.16;
      if (((float)param_1[0x11] < fVar1 != ((float)param_1[0x11] == fVar1)) ||
         (4 < (uint)param_1[0x481])) {
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    iVar2 = (**(code **)(*param_1 + 800))(0x3d088889);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    FUN_00aa4080(0xbf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00901540(0x1f);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x482] = 1;
    break;
  case 5:
    break;
  case 6:
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
      FUN_004cb9a0(3);
      FUN_00e020f0(param_1[0x13c]);
      FUN_00a963e0(local_160);
      iVar2 = FUN_00e5e0c0("em0120_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x4d5] = iVar2;
    }
    (**(code **)(param_1[1000] + 8))(0x3f800000,0,0);
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_004e9906;
  case 7:
LAB_004e9906:
    iVar2 = thunk_FUN_00e58ed0(param_1[0x4d5]);
    if (iVar2 == 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  default:
    goto switchD_004e9576_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_004e9576_default:
  return;
}

// 004E9950  FUN_004e9950  size=1334  [callgraph]
void __fastcall FUN_004e9950(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xc1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x8e,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x8f,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x8d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0x8c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 10:
    FUN_00aa4080(0xc2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e1c60();
    }
    iVar3 = FUN_008ec660(param_1,0x40000000,0x3ecccccd,0x41a00000,0x41a00000,0x78,7,&local_170);
    param_1[0x1d9] = iVar3;
    (**(code **)(*param_1 + 0x314))();
    CharacterControl::setHeight(0x3f800000);
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    FUN_008e6d00();
    param_1[0x481] = 0;
    FUN_00901540(0x1f);
    param_1[0x482] = 1;
    param_1[0x249] = (int)((float)param_1[0x475] * 60.0);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00a8cb60(0xe);
    }
    iVar3 = FUN_00907640(param_1 + 0x43b,0,param_1 + 0x37c);
    if (iVar3 != 0) {
      if ((float)param_1[0x380] - (float)param_1[0x11] < 0.001 !=
          ((float)param_1[0x380] - (float)param_1[0x11] == 0.001)) {
        param_1[0x481] = param_1[0x481] + 1;
      }
      param_1[0x380] = param_1[0x11];
      fVar1 = (float)param_1[0x37d] + 0.01 + 0.16;
      if (((float)param_1[0x11] < fVar1 != ((float)param_1[0x11] == fVar1)) ||
         (4 < (uint)param_1[0x481])) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 0xc:
    (**(code **)(*param_1 + 0x344))(8,param_1[0x372],param_1[0x371]);
    FUN_00aa4080(0xc3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 0xe:
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
      FUN_004cb9a0(3);
      FUN_00e020f0(param_1[0x13c]);
      FUN_00a963e0(local_160);
      iVar3 = FUN_00e5e0c0("em0120_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x4d5] = iVar3;
    }
    (**(code **)(*param_1 + 0x20))();
    pcVar2 = *(code **)(*param_1 + 0x364);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(0xffffffff);
    goto LAB_004e9e60;
  case 0xf:
LAB_004e9e60:
    iVar3 = thunk_FUN_00e58ed0(param_1[0x4d5]);
    if (iVar3 == 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 004E9ED0  FUN_004e9ed0  size=95  [callgraph]
void __thiscall FUN_004e9ed0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [4];
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  local_1c = param_3;
  (**(code **)(*param_1 + 0x360))(local_160);
  FUN_00a8c8b0(param_1[300],auStack_164);
  return;
}

// 004E9F30  FUN_004e9f30  size=193  [callgraph]
void __fastcall FUN_004e9f30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4120(0xde,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar2 = FUN_004039a0(9,param_1,0);
    FUN_00a963e0(uVar2);
    FUN_00dda360(0,0x3f800000,0x3f800000,7);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004EA000  FUN_004ea000  size=166  [callgraph]
void __fastcall FUN_004ea000(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4120(0xdf,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    uVar2 = FUN_004039a0(9,param_1,0);
    FUN_00a963e0(uVar2);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004EA0B0  FUN_004ea0b0  size=333  [callgraph]
void __fastcall FUN_004ea0b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4120(0xe0,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_004ea1e4;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar2 != 0) {
    uVar4 = 0xb;
    FUN_00a7c8a0(0xb);
    iVar2 = FUN_00a8c760(uVar4);
    if (iVar2 != 0) {
      FUN_00a8c9b0(0,9,0,0);
      uVar4 = FUN_004039a0(3,param_1,0);
      FUN_00a963e0(uVar4);
      FUN_00eaa5b0(0,0,0);
      FUN_00eaa5b0(1,0,0);
      (**(code **)(*param_1 + 0x20))();
      pcVar1 = *(code **)(*param_1 + 0x344);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar1)(8,0,1);
    }
  }
LAB_004ea1e4:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004EA200  FUN_004ea200  size=273  [callgraph]
void __fastcall FUN_004ea200(int *param_1)

{
  int iVar1;
  undefined1 auStack_164 [352];
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xe6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_004cb9a0(3);
    FUN_00e020f0(param_1[0x13c]);
    FUN_00a963e0(auStack_164);
    FUN_00eaa5b0(0,0,0);
    FUN_00eaa5b0(1,0,0);
    (**(code **)(*param_1 + 0x20))();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 004EA320  FUN_004ea320  size=323  [callgraph]
void __fastcall FUN_004ea320(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  iVar3 = FUN_00a8cad0();
  if (iVar3 == 0) {
    sVar2 = FUN_00dde2d0(0,2);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    *(undefined4 *)(param_1 + 0x1544) = 0;
    *(float *)(param_1 + 0x1540) = (float)(int)sVar2 + 1.0;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x1548) - *(float *)(param_1 + 0x910) * 0.016666668;
    *(float *)(param_1 + 0x1548) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    *(int *)(param_1 + 0x1544) = *(int *)(param_1 + 0x1544) + -1;
    if (*(int *)(param_1 + 0x1544) < 1) {
      FUN_00a8cb70(1);
    }
    fVar5 = (float10)FUN_00dde300(0,0x3d4ccccd);
    *(float *)(param_1 + 0x1548) = (float)(fVar5 + (float10)0.1);
    FUN_004e7b90();
    return;
  }
  fVar1 = *(float *)(param_1 + 0x1540) - *(float *)(param_1 + 0x910) * 0.016666668;
  *(float *)(param_1 + 0x1540) = fVar1;
  if (fVar1 <= 0.0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1548) = 0;
      sVar2 = FUN_00dde2d0(1,2);
      *(float *)(param_1 + 0x1540) = (float)(int)sVar2;
      sVar2 = FUN_00dde2d0(8,0x10);
      *(int *)(param_1 + 0x1544) = (int)sVar2;
    }
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
  }
  return;
}

// 004EA4B0  lib::StaticArray<Entity*,64>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004EFD30  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_6  size=306  [class]
bool __fastcall lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_6(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined **ppuStack_124;
  undefined1 *puStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_114 [272];
  
  if ((DAT_01bea060 & 0x20000) != 0) {
    return false;
  }
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  iVar2 = FUN_00a7c8a0();
  uStack_134 = *(undefined4 *)(iVar2 + 0x40);
  uStack_130 = *(undefined4 *)(iVar2 + 0x44);
  puStack_120 = auStack_114;
  uStack_12c = *(undefined4 *)(iVar2 + 0x48);
  uStack_128 = *(undefined4 *)(iVar2 + 0x4c);
  iStack_11c = 0;
  uStack_118 = 0x40;
  ppuStack_124 = vftable;
  iVar2 = FUN_00c27b40(&uStack_134,0x41700000,&ppuStack_124,0xffffffff);
  puVar4 = puStack_120;
  if (puStack_120 != puStack_120 + iStack_11c * 4) {
    do {
      iVar3 = FUN_00a7c8a0();
      if (*(int *)(iVar3 + 0x4b4) == 0x20121) {
        iVar2 = iVar2 + -1;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puStack_120 + iStack_11c * 4);
  }
  iVar3 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
  if ((iVar3 != 0) &&
     (iVar3 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98),0),
     iVar3 == 0)) {
    iVar2 = FUN_004ec720();
    return iVar2 != 0;
  }
  return iVar2 != 0;
}

// 00513B00  lib::StaticArray<Entity*,2>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,2>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00513B30  FUN_00513b30  size=179  [between]
void __thiscall FUN_00513b30(int param_1,int param_2)

{
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0xecc) & 8) == 0) {
    FUN_00e5e0c0("et0020_se_mov_hovering_down",param_1,1,0);
  }
  *(undefined4 *)(param_1 + 0xedc) = 0;
  *(undefined4 *)(param_1 + 0xfb4) = 0x41b8cccd;
  *(float *)(param_1 + 0x1250) = *(float *)(param_1 + 0x15f8) * 60.0;
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 8;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xdfffffff;
    FUN_004039a0(0xd,param_1,0);
  }
  else {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x20000000;
    FUN_004039a0(0x207,param_1,0);
  }
  FUN_00a963e0(local_160);
  FUN_004fd6e0();
  return;
}

// 00513BF0  FUN_00513bf0  size=596  [between]
void __fastcall FUN_00513bf0(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  undefined4 local_2c;
  float local_20 [2];
  float local_18;
  
  iVar3 = FUN_00502430();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_004fd2b0(param_1[0x2a1] + 0x40);
  local_2c = 0xffffffff;
  if ((param_1[0x40b] == 10) || (param_1[0x40b] == 0xb)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (param_1[0x571] == 0) {
    if ((param_1[0x128] == 3) || ((param_1[0x3b3] & 0x8000U) != 0)) {
      fVar1 = 8.0;
    }
    else {
      fVar1 = 18.0;
    }
    if (((float)param_1[0x2a4] <= fVar1 * fVar1) || (bVar2)) {
      iVar4 = FUN_00c19f60(param_1[0x2e7],1);
      FUN_00502810(local_20,iVar4,param_1[0x2a1] + 0x40);
      fVar1 = (local_18 - (float)param_1[0x12]) * (local_18 - (float)param_1[0x12]) +
              (local_20[0] - (float)param_1[0x10]) * (local_20[0] - (float)param_1[0x10]);
      if ((bVar2) || (225.0 <= fVar1)) {
        iVar6 = FUN_004fe460(0x41c80000);
        if ((iVar6 == 0) || (fVar7 = (float10)FUN_004fa5e0(), (float10)1.0471976 <= fVar7)) {
          if (iVar4 == 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          else {
            if ((20.0 <= fVar1) && (iVar3 == 0)) {
              iVar3 = FUN_00a81330();
              local_2c = 0x10;
              if (iVar3 == 0) goto LAB_00513e00;
            }
            local_2c = 0xf;
          }
        }
        else {
          local_2c = 0xe;
        }
        goto LAB_00513e00;
      }
    }
    else {
      fVar7 = (float10)FUN_00501c90();
      if ((fVar7 < (float10)(float)param_1[0x2a4] != (fVar7 == (float10)(float)param_1[0x2a4])) &&
         ((float)param_1[0x528] <= 0.0)) {
        local_2c = 9;
        goto LAB_00513e00;
      }
      if (0.0 < (float)param_1[0x528]) goto LAB_00513e00;
    }
  }
  local_2c = 10;
  iVar3 = FUN_004fe6e0(0x41200000);
  if ((iVar3 == 0) ||
     ((iVar3 = FUN_004fe580(0x41200000), iVar3 != 0 &&
      (uVar5 = FUN_00dde2d0(0,100), (uVar5 & 1) != 0)))) {
    local_2c = 0xb;
  }
LAB_00513e00:
  if ((param_1[0x3b3] & 0x8000U) == 0) {
    if ((*(byte *)(param_1 + 0x2c0) & 0x40) == 0) {
      iVar3 = param_1[0x583];
    }
    else {
      iVar3 = param_1[0x584];
    }
  }
  else {
    iVar3 = 0x40066666;
  }
  param_1[0x3c1] = iVar3;
  FUN_00502030(local_2c);
  return;
}

// 00513E50  FUN_00513e50  size=46  [between]
void __fastcall FUN_00513e50(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(1,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 00513E80  lib::StaticArray<Entity*,2>::StaticArray<Entity*,2>  size=253  [class]
void __fastcall lib::StaticArray<Entity*,2>::StaticArray<Entity*,2>(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined **local_18;
  undefined1 *local_14;
  uint local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  if ((*(byte *)(param_1 + 0xb00) & 0x80) != 0) {
    local_14 = local_8;
    local_10 = 0;
    local_c = 2;
    local_18 = vftable;
    FUN_00c27cb0(*(undefined4 *)(param_1 + 0x4f0),0x42c80000,&local_18,0x20190);
    uVar1 = 0;
    if (local_10 != 0) {
      do {
        if ((*(int *)(local_14 + uVar1 * 4) != 0) &&
           (*(int *)(local_14 + uVar1 * 4) != *(int *)(param_1 + 0x4f0))) {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_10);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar5 = &DAT_01b34f20;
      (**(code **)(*piVar4 + 4))(&DAT_01b34f20);
      iVar3 = FUN_00dd6d70(puVar5);
      if ((iVar3 != 0) && ((*(byte *)(piVar4 + 0x3b3) & 8) != 0)) {
        if (*(float *)(param_1 + 0x1498) < 0.1) {
          *(undefined4 *)(param_1 + 0x1498) = 0x3dcccccd;
          return;
        }
        *(float *)(param_1 + 0x1498) = *(float *)(param_1 + 0x1498);
      }
    }
  }
  return;
}

// 00513F80  FUN_00513f80  size=982  [callgraph]
void __thiscall FUN_00513f80(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  param_1[0x3b3] = param_1[0x3b3] & 0xefffffff;
  if (param_1[0x2a1] != 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x3e) {
      return;
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x3d) {
      return;
    }
  }
  if ((param_2[0x23] & 2U) != 0) {
    FUN_00aa92c0(399);
    param_1[0x3ba] = param_1[0x3ba] + 1;
    param_1[0x3b8] = 0;
    if (param_1[0x186] == 0x10) {
      (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
      FUN_008e0ae0(1);
    }
    FUN_00502030(0x2e);
    if ((param_1[0x3b3] & 0x40000000U) == 0) {
      param_1[0x3b3] = param_1[0x3b3] | 0x40000000;
      FUN_00aa92c0(0x191);
    }
    FUN_004fea90();
    return;
  }
  bVar2 = false;
  if (((param_2[0x23] & 1U) != 0) && ((float)param_1[0x586] <= 0.0)) {
    bVar2 = true;
  }
  if ((((*param_2 == 0x55) || (bVar2)) && (iVar1 = FUN_00a8eea0(), 1 < iVar1)) &&
     ((param_1[0x3ba] < 3 && (param_1[0x128] != 5)))) {
    if (bVar2) {
      param_1[0x586] = param_1[0x587];
      FUN_00aa92c0(0x18e);
    }
    param_1[0x3b3] = param_1[0x3b3] | 0x10000000;
    if ((param_1[0x3b3] & 8U) == 0) {
      FUN_00513b30(0);
    }
    else if ((param_1[0x3b3] & 0x20000000U) != 0) {
      param_1[0x3b3] = param_1[0x3b3] & 0xdfffffff;
      FUN_004faa30();
      FUN_0050f630();
    }
    DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
    param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
    param_1[0x57c] = 0;
    FUN_004fb2e0();
    param_1[0x3ba] = 0;
    FUN_00502030(0x18);
    return;
  }
  if (((param_2[0x23] & 0x20000U) != 0) && (param_1[0x128] != 5)) {
    if ((param_1[0x3b3] & 8U) == 0) {
      FUN_00513b30(1);
    }
    else if ((param_1[0x3b3] & 0x20000000U) == 0) {
      param_1[0x3b3] = param_1[0x3b3] | 0x20000000;
      FUN_0050f660();
      FUN_004faa10();
    }
    DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
    param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
    param_1[0x57c] = 0;
    FUN_004fb2e0();
    param_1[0x3ba] = 0;
    FUN_00502030(0x32);
    return;
  }
  if (*param_2 != 0x56) {
    if (*(byte *)((int)param_2 + 0x11) < 7) {
      bVar2 = SBORROW4(param_1[0x3b8],5);
      iVar1 = param_1[0x3b8] + -5;
    }
    else {
      bVar2 = SBORROW4(param_1[0x3b8],3);
      iVar1 = param_1[0x3b8] + -3;
    }
    if (bVar2 != iVar1 < 0) goto LAB_00514263;
  }
  iVar1 = FUN_00a8eea0();
  if ((1 < iVar1) && (param_1[0x3ba] < 3)) {
    param_1[0x3b8] = 0;
    param_1[0x3ba] = param_1[0x3ba] + 1;
    FUN_004fb2e0();
    if ((param_1[0x128] != 5) &&
       ((param_1[0x585] <= param_1[0x3b7] || ((*(byte *)(param_1 + 0x3b3) & 8) != 0)))) {
      if ((*(byte *)(param_1 + 0x3b3) & 8) == 0) {
        FUN_00513b30(0);
      }
      FUN_004fefb0();
      FUN_004fb2e0();
      FUN_00502030(0x18);
      return;
    }
    FUN_00502030(0x2e);
    return;
  }
LAB_00514263:
  if ((*param_2 == 0x4f) && ((param_1[0x3b3] & 0x100U) != 0)) {
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffeff;
    FUN_004fb2e0();
    FUN_00502030(0x17);
    return;
  }
  if ((param_1[0x3b3] & 0x400U) == 0) {
    fVar3 = (float10)1;
    if (param_1[0x519] == 4) {
      param_1[0x519] = 0x2f;
      fVar3 = (float10)FUN_00dde300(0,(float)fVar3);
      fVar3 = (float10)0.5 + fVar3 * (float10)0.5;
    }
    else {
      param_1[0x519] = 4;
    }
    FUN_00aa4080(param_1[0x519],1,0,(float)fVar3,0x8000000,0xbf800000,0x3f800000);
  }
  if (((*(byte *)(param_1 + 0x3b3) & 8) != 0) && (param_1[0x585] <= param_1[0x3b7])) {
    FUN_004fd560();
    FUN_00502530();
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00514360  FUN_00514360  size=406  [callgraph]
void __fastcall FUN_00514360(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_10 [4];
  
  local_10[0] = 0x29;
  local_10[1] = 0x2a;
  local_10[2] = 0x2b;
  local_10[3] = 0x2c;
  if (param_1[0x187] == 0) {
    if (0.2617994 < ABS((float)param_1[0x518])) {
      if (ABS((float)param_1[0x518]) < 2.8797932) {
        iVar3 = 2;
        if ((float)param_1[0x518] <= 0.0) {
          iVar3 = 3;
        }
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 0;
    }
    iVar1 = param_1[0x40b];
    if ((((iVar1 == 0xc) || (iVar1 == 0x2c)) || (iVar1 == 0x2a)) ||
       ((iVar1 == 0x2b || (iVar1 == 0x14)))) {
      param_1[0x250] = 1;
    }
    else if (iVar1 != param_1[0x186]) {
      param_1[0x250] = 0;
    }
    FUN_00aa4080(local_10[iVar3],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    uVar2 = param_1[0x3b3];
    if ((uVar2 & 8) != 0) {
      param_1[0x494] = 0;
      if ((uVar2 & 0x20000000) == 0) {
        FUN_00502030(0x19);
        return;
      }
      FUN_00502030(0x33);
      return;
    }
    if (param_1[0x128] == 5) {
                    /* WARNING: Could not recover jumptable at 0x005144cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (((uVar2 & 0x8000) == 0) && (param_1[0x250] == 0)) {
      FUN_00513bf0();
      return;
    }
    FUN_00502030(0x2a);
  }
  return;
}

// 00514500  FUN_00514500  size=181  [callgraph]
void __fastcall FUN_00514500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a12290(0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x13e0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x13e4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    *(undefined4 *)(param_1 + 0x13e0) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x13e4) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(iVar1 + 0x48);
    uVar2 = *(undefined4 *)(iVar1 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x13ec) = uVar2;
  uVar2 = FUN_00a8cab0();
  switch(uVar2) {
  case 1:
    FUN_004fb3d0();
    break;
  case 2:
    FUN_00507580();
    break;
  case 3:
    FUN_004fb710();
    break;
  case 4:
    FUN_005079c0();
    break;
  case 5:
    FUN_004fb7a0();
    break;
  case 6:
    FUN_004fee30();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_004fd390();
  return;
}

// 005145D0  FUN_005145d0  size=927  [callgraph]
void __fastcall FUN_005145d0(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float local_4;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x15ec) == 0)) &&
      ((iVar3 = FUN_004fcfd0(), iVar3 == 0 || (*(int *)(iVar3 + 0x618) != 2)))) &&
     (iVar3 = FUN_00502da0(), iVar3 == 0)) {
    fVar5 = (float10)FUN_004fa5e0();
    if ((((float10)0.5235988 < ABS(fVar5)) && (0.1 < *(float *)(param_1 + 0xf40))) &&
       (64.0 < *(float *)(param_1 + 0xa90))) {
      FUN_00502200();
      return;
    }
    iVar3 = FUN_00c19eb0(*(undefined4 *)(param_1 + 0xb9c),2);
    if ((iVar3 != 0) &&
       (iVar3 = FUN_00c19f10(*(undefined4 *)(param_1 + 0xb9c),2,param_1 + 0x40), iVar3 == 0)) {
      FUN_00502030(0x29);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x15cc);
    if (!NAN(fVar1) && 40.0 < fVar1 != (fVar1 == 40.0)) {
      iVar3 = FUN_004fe460(0x41700000);
      if (iVar3 == 0) {
        FUN_00513bf0();
        return;
      }
      FUN_00502030(0x2d);
      return;
    }
    if ((*(uint *)(param_1 + 0xecc) & 0x80000) == 0) {
      fVar1 = *(float *)(param_1 + 0x15c8) - *(float *)(param_1 + 0x910) * 0.016666668 * 5.0;
      *(float *)(param_1 + 0x15c8) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x15c8) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x15c8);
      *(float *)(param_1 + 0x15c8) = fVar1;
      if (5.0 <= fVar1) {
        *(undefined4 *)(param_1 + 0x15c4) = 1;
        FUN_00513bf0();
        return;
      }
    }
    bVar2 = false;
    if ((*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xf04)) - *(float *)(param_1 + 0xef4) <
        -1.5) {
      bVar2 = true;
      fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x930);
      *(float *)(param_1 + 0x930) = fVar1;
      if (60.0 < fVar1) {
        if ((*(int *)(param_1 + 0x102c) != 0xe) && (iVar3 = FUN_004fe460(0x41200000), iVar3 != 0)) {
          FUN_00502030(0xe);
          return;
        }
        if (*(int *)(param_1 + 0x102c) != 9) {
          FUN_00502030(9);
          return;
        }
      }
    }
    if ((*(float *)(param_1 + 0xed0) <= 0.5) &&
       ((*(float *)(param_1 + 0x92c) <= 1.5 || (*(float *)(param_1 + 0xed0) <= 0.33333334)))) {
      *(undefined4 *)(param_1 + 0x1044) = 0;
      iVar3 = FUN_00502430();
      if (iVar3 != 0) {
        return;
      }
    }
    fVar5 = (float10)FUN_00501c90();
    if ((float10)*(float *)(param_1 + 0xa90) <= fVar5) {
      if (100.0 < *(float *)(param_1 + 0xa90)) {
        fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910) * 0.016666668;
        *(float *)(param_1 + 0x924) = fVar1;
        if (0.0 < fVar1) {
          return;
        }
        uVar4 = FUN_00dde2d0(0,100);
        if (((uVar4 & 3) != 0) && (iVar3 = FUN_00502430(), iVar3 != 0)) {
          return;
        }
        iVar3 = FUN_004fe1b0();
        if (iVar3 != 0) {
          FUN_00502030(0x14);
          return;
        }
        if ((2 < *(int *)(param_1 + 0x948)) && (!bVar2)) {
          return;
        }
        *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + 1;
        FUN_004fde50();
        return;
      }
      local_4 = 1.0;
      fVar1 = ABS(*(float *)(param_1 + 0x44) - *(float *)(*(int *)(param_1 + 0xa84) + 0x44));
      if (fVar1 < 5.0) {
        local_4 = 1.2;
      }
      if ((10.0 <= fVar1) ||
         (fVar5 = (float10)FUN_004fa300(), fVar5 < (float10)0.5 != (fVar5 == (float10)0.5))) {
        local_4 = 0.5;
      }
      fVar1 = *(float *)(param_1 + 0x92c) - *(float *)(param_1 + 0x910) * 0.016666668 * local_4;
      *(float *)(param_1 + 0x92c) = fVar1;
    }
    else {
      if (bVar2) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0x1498);
    }
    if (fVar1 <= 0.0) {
      FUN_00513bf0();
      return;
    }
  }
  return;
}

// 00514970  FUN_00514970  size=831  [callgraph]
void __fastcall FUN_00514970(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x1000000;
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0xb8c);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0xb94);
    *(undefined4 *)(param_1 + 0x96c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1644) = 0x3eb33333;
    *(undefined4 *)(param_1 + 0x1640) = 0;
    *(undefined4 *)(param_1 + 0x1650) = 0;
    *(undefined4 *)(param_1 + 0x1648) = 0x3e3851ec;
    FUN_004fa3b0(0x13,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x1038);
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffffdff;
    *(undefined4 *)(param_1 + 0x164c) = 0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1654) = 0x3e00adfd;
  case 1:
    fVar2 = (float10)*(float *)(param_1 + 0x910) + (float10)*(float *)(param_1 + 0x164c);
    *(float *)(param_1 + 0x164c) = (float)fVar2;
    fVar2 = (float10)fcos((float10)3.1415927 - fVar2 * (float10)*(float *)(param_1 + 0x1654));
    fVar3 = (float10)0.5 + fVar2 * (float10)0.5;
    *(float *)(param_1 + 0x1650) = (float)fVar3;
    fVar2 = (float10)*(float *)(param_1 + 0x1648) * fVar3;
    *(float *)(param_1 + 0x1640) = (float)fVar2;
    *(float *)(param_1 + 0x54) =
         (float)((float10)*(float *)(param_1 + 0x54) - fVar2 * (float10)*(float *)(param_1 + 0x910))
    ;
    FUN_00a947e0(0,(float)(fVar3 * (float10)*(float *)(param_1 + 0x1644) *
                          (float10)*(float *)(param_1 + 0x1454)),0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x164c);
    if (!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) {
      *(undefined4 *)(param_1 + 0x1650) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1640) = *(undefined4 *)(param_1 + 0x1648);
      FUN_00a947e0(0,*(float *)(param_1 + 0x1454) * *(float *)(param_1 + 0x1644),0,0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x1640) * *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x54) = fVar1;
    if ((fVar1 - *(float *)(param_1 + 0xf04)) - *(float *)(param_1 + 0xef4) < 2.0) {
      FUN_00503da0(param_1 + 0x960);
      *(undefined4 *)(param_1 + 0x1654) = 0x3d80adfd;
      *(undefined4 *)(param_1 + 0x164c) = 0x42480000;
      FUN_004fa450(*(undefined4 *)(param_1 + 0x1644));
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 3:
    fVar2 = (float10)*(float *)(param_1 + 0x164c) - (float10)*(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x164c) = (float)fVar2;
    fVar2 = (float10)fcos((float10)3.1415927 - fVar2 * (float10)*(float *)(param_1 + 0x1654));
    fVar3 = (float10)0.5 + fVar2 * (float10)0.5;
    *(float *)(param_1 + 0x1650) = (float)fVar3;
    fVar2 = (float10)*(float *)(param_1 + 0x1648) * fVar3;
    *(float *)(param_1 + 0x1640) = (float)fVar2;
    *(float *)(param_1 + 0x54) =
         (float)((float10)*(float *)(param_1 + 0x54) - fVar2 * (float10)*(float *)(param_1 + 0x910))
    ;
    FUN_00a947e0(0,(float)(fVar3 * (float10)*(float *)(param_1 + 0x1644) *
                          (float10)*(float *)(param_1 + 0x1454)),0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(float *)(param_1 + 0x164c) <= 0.0) {
      FUN_00aa4080(0xd,0,0x3f000000,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x200;
      fVar2 = (float10)FUN_004fddd0();
      *(float *)(param_1 + 0xf04) = (float)fVar2;
      return;
    }
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 <= 0.0) {
      FUN_00513bf0();
      return;
    }
  }
  return;
}

// 00514EC0  lib::StaticArray<EntityHandle,8>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<EntityHandle,8>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<EntityHandle>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00515340  lib::StaticArray<EntityHandle,8>::StaticArray<EntityHandle,8>  size=163  [class]
void __fastcall lib::StaticArray<EntityHandle,8>::StaticArray<EntityHandle,8>(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x148c) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a7f5b0(0xe0056);
  }
  *(int *)(param_1 + 0x1490) = iVar1;
  *(int *)(param_1 + 0x148c) = iVar1;
  if (iVar1 != 0) {
    local_2c = local_20;
    local_28 = 0;
    local_24 = 8;
    local_30 = vftable;
    FUN_00a7f4a0(0xe0056,&local_30);
    if (0 < *(int *)(param_1 + 0x148c)) {
      do {
        FUN_00a7c960(local_2c + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x148c));
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x148c) = 0xffffffff;
  return;
}

// 005552B0  lib::StaticArray<Entity*,256>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,256>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005552E0  FUN_005552e0  size=1666  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005552e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  undefined1 auStack_440 [4];
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  uint uStack_42c;
  undefined4 uStack_424;
  undefined1 uStack_420;
  undefined1 uStack_41f;
  int iStack_41c;
  uint uStack_3a4;
  undefined4 uStack_33c;
  undefined4 uStack_2dc;
  undefined1 local_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(9,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 1;
    param_1[0x1bb] = 1;
    param_1[0x58d] = 0;
    param_1[0x839] = param_1[0x838];
    if (param_1[0x838] != 0) {
      param_1[0x83c] = 1;
      param_1[0x83d] = 0x40a00000;
      param_1[0x83e] = _DAT_01881420;
    }
    param_1[0x838] = 0;
    FUN_00546f50();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(10,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43700000;
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x590);
    FUN_00e021c0(param_1);
    uVar3 = FUN_00e00260(param_1[300]);
    FUN_00e00fb0(uVar3,4,local_120);
  case 3:
    fVar5 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar5 - (float)param_1[0x244]);
    if (fVar5 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(0xb,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_005555ab;
  case 5:
LAB_005555ab:
    iVar1 = FUN_00a952e0(0,0x43e10000);
    if (iVar1 != 0) {
      if (param_1[0x57c] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x57c] = 0;
    }
    iVar1 = FUN_00a952e0(0,0x42200000);
    if (iVar1 != 0) {
      (**(code **)(param_1[0x590] + 8))(0x42700000,0,0);
      if (param_1[0x57c] != 0) {
        FUN_00ad0a90();
      }
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_33c = 0x14;
      uStack_2dc = FUN_009f8b40();
      uStack_438 = 100;
      uStack_430 = 0x1e;
      uStack_42c = uStack_42c & 0xffffff00;
      uStack_434 = 0x96;
      uStack_43c = 0xbd;
      uVar2 = FUN_00ac84d0(0x1a);
      uVar3 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x1a);
      (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x1a);
      uStack_420 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x1a);
      uStack_3a4 = uStack_3a4 | 0x8000000;
      iStack_41c = param_1[0x13c];
      uStack_41f = 10;
      uStack_42c = uVar2;
      uStack_424 = uVar3;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      iVar1 = FUN_00ad09e0(param_1[0x13c],6,auStack_440);
      param_1[0x57c] = iVar1;
    }
    iVar1 = FUN_00a952e0(0,0x43480000);
    if (iVar1 != 0) {
      if (param_1[0x57c] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x57c] = 0;
    }
    iVar1 = FUN_00a952e0(0,0x43820000);
    if (iVar1 != 0) {
      (**(code **)(param_1[0x590] + 8))(0x42700000,0,0);
      if (param_1[0x57c] != 0) {
        FUN_00ad0a90();
      }
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_33c = 0x14;
      uStack_2dc = FUN_009f8b40();
      uStack_438 = 100;
      uStack_430 = 0x1e;
      uStack_42c = uStack_42c & 0xffffff00;
      uStack_434 = 0x96;
      uStack_43c = 0xbd;
      uVar2 = FUN_00ac84d0(0x1a);
      uVar3 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x1a);
      (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x1a);
      uStack_420 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x1a);
      iStack_41c = param_1[0x13c];
      uStack_3a4 = uStack_3a4 | 0x8000000;
      uStack_41f = 10;
      uStack_42c = uVar2;
      uStack_424 = uVar3;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      iVar1 = FUN_00ad09e0(param_1[0x13c],6,auStack_440);
      param_1[0x57c] = iVar1;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x57c] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x57c] = 0;
      fVar4 = (float10)FUN_00dde300(0x40400000,0x40800000);
      param_1[0x3a1] = (int)(float)(fVar4 * (float10)60.0);
      iVar1 = FUN_00ac4780();
      if (iVar1 == 2) {
        fVar4 = (float10)FUN_00dde300(0x3f000000,0x40000000);
        param_1[0x3a1] = (int)(float)(fVar4 * (float10)60.0);
      }
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        param_1[0x3a1] = 0x40c00000;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  FUN_00551c80();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar5 = (float)param_1[0x244] * 0.3;
  uVar3 = 0x3c23d70a;
  fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar5);
  FUN_00a981b0(param_1 + 0x15,param_1 + 0x15,param_1 + 0x83a,(float)fVar4,uVar3,fVar5);
  fVar5 = (float)param_1[0x244] * 0.5;
  uVar3 = 0x3c23d70a;
  fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar5);
  FUN_00a981b0(param_1 + 0x14,param_1 + 0x14,&DAT_01881410 + param_1[0x250] * 0x10,(float)fVar4,
               uVar3,fVar5);
  fVar5 = (float)param_1[0x244] * 1.5;
  uVar3 = 0x3c23d70a;
  fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar5);
  FUN_00a981b0(param_1 + 0x16,param_1 + 0x16,&DAT_01881418 + param_1[0x250] * 0x10,(float)fVar4,
               uVar3,fVar5);
  return;
}

// 00555980  FUN_00555980  size=1643  [between]
void __fastcall FUN_00555980(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((param_1[0x187] != 0) && (param_1[0x83f] != 0)) {
    FUN_00a8caf0(0xc,0,0,0);
    param_1[0x81d] = 0;
    FUN_00a8caf0(0xc,0,0,0);
    param_1[0x840] = -1;
    if ((*(byte *)(param_1 + 0x371) & 3) != 3) {
      param_1[0x840] = 0xc;
      param_1[0x842] = 0x41200000;
      param_1[0x841] = 0x42340000;
      return;
    }
switchD_00555a11_default:
    return;
  }
  switch(param_1[0x187]) {
  case 0:
    uVar2 = 0xd;
    if (param_1[0x186] == 7) {
      uVar2 = 0x10;
    }
    FUN_00aa4080(uVar2,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1bb] = 1;
    param_1[0x58d] = 0;
    sVar3 = FUN_00dde2d0(0,2);
    param_1[0x250] = (int)sVar3;
    param_1[0x249] = param_1[0x10];
    if (param_1[0x2a1] != 0) {
      fVar8 = *(float *)(param_1[0x2a1] + 0x40) + 3.0;
      param_1[0x249] = (int)fVar8;
      if (337.0 < fVar8) {
        param_1[0x249] = 0x43a88000;
      }
      if ((float)param_1[0x249] < 318.0) {
        param_1[0x249] = 0x439f0000;
      }
    }
    param_1[0x839] = param_1[0x838];
    if (param_1[0x838] != 0) {
      param_1[0x83c] = 1;
      param_1[0x83d] = 0x40a00000;
      param_1[0x83e] = param_1[0x249];
    }
    param_1[0x838] = 0;
    FUN_00546f50();
    FUN_00a8d280();
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0xe;
    if (param_1[0x186] == 7) {
      uVar2 = 0x11;
    }
    FUN_00aa4080(uVar2,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x43700000;
    iVar4 = FUN_00ac4780();
    if (2 < iVar4) {
      param_1[0x249] = 0x42700000;
    }
  case 3:
    fVar8 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar8 - (float)param_1[0x244]);
    if (fVar8 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    uVar2 = 0xf;
    if (param_1[0x186] == 7) {
      uVar2 = 0x12;
    }
    FUN_00aa4080(uVar2,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00555f04;
  case 5:
LAB_00555f04:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      fVar5 = (float10)FUN_00dde300(0x40400000,0x40800000);
      param_1[0x3a1] = (int)(float)(fVar5 * (float10)60.0);
      iVar4 = FUN_00ac4780();
      if (iVar4 == 2) {
        fVar5 = (float10)FUN_00dde300(0x3f000000,0x40000000);
        param_1[0x3a1] = (int)(float)(fVar5 * (float10)60.0);
      }
      iVar4 = FUN_00ac4780();
      if (2 < iVar4) {
        param_1[0x3a1] = 0x40c00000;
      }
      param_1[0x16] = *(int *)(&DAT_01881418 + param_1[0x250] * 0x10);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x16] =
         (int)((*(float *)(&DAT_01881418 + param_1[0x250] * 0x10) - (float)param_1[0x16]) * 0.2 +
              (float)param_1[0x16]);
    return;
  default:
    goto switchD_00555a11_default;
  }
  FUN_00551c80();
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  fVar8 = (float)param_1[0x244] * 0.3;
  uVar7 = 0x3c23d70a;
  fVar5 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar8);
  FUN_00a981b0(param_1 + 0x15,param_1 + 0x15,param_1 + 0x83a,(float)fVar5,uVar7,fVar8);
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    if (param_1[0x186] == 7) {
      fVar8 = (float)param_1[0x244] * 0.5;
      piVar1 = param_1 + 0x14;
      uVar7 = 0x3c23d70a;
      fVar5 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar8);
      if (param_1[0x839] == 0) {
        FUN_00a981b0(piVar1,piVar1,&DAT_01881420,(float)fVar5,uVar7,fVar8);
        local_c = *(float *)(&DAT_01881418 + param_1[0x250] * 0x10) - 3.0;
        fVar8 = (float)param_1[0x244] * 0.5;
        uVar7 = 0x3c23d70a;
        fVar5 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar8);
        pfVar6 = &local_c;
      }
      else {
        FUN_00a981b0(piVar1,piVar1,&DAT_01881420,(float)fVar5,uVar7,fVar8);
        local_10 = *(float *)(&DAT_01881418 + param_1[0x250] * 0x10) - 3.0;
        fVar8 = (float)param_1[0x244] * 1.5;
        uVar7 = 0x3c23d70a;
        fVar5 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar8);
        pfVar6 = &local_10;
      }
    }
    else {
      if (param_1[0x2a1] != 0) {
        fVar8 = *(float *)(param_1[0x2a1] + 0x40) + 3.0;
        param_1[0x249] = (int)fVar8;
        if (318.5 < fVar8) {
          param_1[0x249] = 0x439f4000;
        }
        if ((float)param_1[0x249] < 300.5) {
          param_1[0x249] = 0x43964000;
        }
      }
      fVar8 = (float)param_1[0x244] * 0.5;
      piVar1 = param_1 + 0x14;
      uVar7 = 0x3c23d70a;
      fVar5 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar8);
      if (param_1[0x839] == 0) {
        FUN_00a981b0(piVar1,piVar1,param_1 + 0x249,(float)fVar5,uVar7,fVar8);
        local_4 = *(float *)(&DAT_01881418 + param_1[0x250] * 0x10) - 3.0;
        fVar8 = (float)param_1[0x244] * 0.5;
        uVar7 = 0x3c23d70a;
        fVar5 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar8);
        pfVar6 = &local_4;
      }
      else {
        FUN_00a981b0(piVar1,piVar1,param_1 + 0x249,(float)fVar5,uVar7,fVar8);
        local_8 = *(float *)(&DAT_01881418 + param_1[0x250] * 0x10) - 3.0;
        fVar8 = (float)param_1[0x244] * 0.8;
        uVar7 = 0x3c23d70a;
        fVar5 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar8);
        pfVar6 = &local_8;
      }
    }
    FUN_00a981b0(param_1 + 0x16,param_1 + 0x16,pfVar6,(float)fVar5,uVar7,fVar8);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00556010  FUN_00556010  size=4330  [between]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00556010(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  undefined *puVar9;
  float fVar10;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float afStack_3e8 [4];
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  undefined1 auStack_3bc [8];
  float afStack_3b4 [17];
  undefined1 auStack_370 [40];
  uint auStack_348 [2];
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  undefined4 uStack_334;
  undefined4 uStack_328;
  int iStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined4 uStack_68;
  
  piVar1 = (int *)param_1[0x2a1];
  piVar6 = (int *)0x0;
  afStack_3b4[1] = 2.87827e-42;
  afStack_3b4[2] = 2.87967e-42;
  afStack_3b4[3] = 2.88107e-42;
  afStack_3b4[4] = 2.88247e-42;
  afStack_3b4[5] = 2.88387e-42;
  afStack_3b4[6] = 2.88527e-42;
  afStack_3b4[7] = 2.88667e-42;
  afStack_3b4[8] = 2.88808e-42;
  afStack_3b4[9] = 2.88948e-42;
  afStack_3b4[10] = 2.89088e-42;
  afStack_3b4[0xb] = 2.89228e-42;
  afStack_3b4[0xc] = 2.89368e-42;
  afStack_3b4[0xd] = 2.89508e-42;
  afStack_3b4[0xe] = 2.89648e-42;
  afStack_3b4[0xf] = 2.89789e-42;
  afStack_3b4[0x10] = 2.89929e-42;
  if (piVar1 != (int *)0x0) {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar9);
    piVar6 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar1);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x14,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1bb] = 1;
    param_1[0x58d] = 0;
    if (param_1[0x838] != 0) {
      param_1[0x83c] = 1;
      param_1[0x83d] = 0x40a00000;
      param_1[0x83e] = (int)_DAT_01881430;
    }
    param_1[0x24a] = 0;
    param_1[0x838] = 0;
    FUN_00546f50();
    FUN_00a8d280();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x15,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24b] = 0x44340000;
    param_1[0x249] = 0x42b40000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x252] = 0;
    iVar4 = FUN_00a12210(0x12);
    *(undefined4 *)(iVar4 + 0x90) = 0;
    switchD_0080dbae::default();
  case 3:
    fVar10 = (float)param_1[0x24b];
    param_1[0x24b] = (int)(fVar10 - (float)param_1[0x244]);
    if ((fVar10 - (float)param_1[0x244] < 0.0) || (1 < param_1[0x252])) {
      param_1[0x187] = 6;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 0x354))(), iVar4 != 0)) {
      param_1[0x187] = 6;
      return;
    }
    switchD_0080dbae::default();
    iVar4 = FUN_00a12210(0x12);
    if (iVar4 != 0) {
      iVar4 = FUN_00a12210(0x12);
      D3DXMatrixInverse(auStack_370,0,iVar4 + 0x10);
      D3DXVec3TransformNormal(&fStack_3fc,param_1[0x2a1] + 0x40,afStack_3b4 + 0xe);
      fStack_3f0 = fStack_3f0 + fStack_340;
      fVar8 = (float10)fStack_3ec;
      fStack_3ec = (float)((float10)fStack_33c + fVar8);
      fVar7 = (float10)afStack_3e8[0];
      afStack_3e8[0] = (float)((float10)fStack_338 + fVar7);
      fVar8 = (float10)fpatan((float10)fStack_338 + fVar7,-((float10)fStack_33c + fVar8));
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)-1.0 - (float10)(float)param_1[0x24a]))
      ;
      fStack_3f8 = (float)fVar8;
      fStack_3f4 = (float)param_1[0x24a];
      fVar8 = (float10)FUN_00fdc1f0();
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)fStack_3f8 + (float10)fStack_3f4));
      param_1[0x24a] = (int)(float)fVar8;
      iVar4 = FUN_00a12210(0x12);
      fVar8 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x90) + (float)param_1[0x24a]);
      fStack_3f8 = (float)fVar8;
      iVar4 = FUN_00a12210(0x12);
      *(float *)(iVar4 + 0x90) = fStack_3f8;
    }
    switchD_0080dbae::default();
    if (param_1[0x251] != 0) {
      return;
    }
    fVar10 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar10 - (float)param_1[0x244]);
    if (0.0 <= fVar10 - (float)param_1[0x244]) {
      return;
    }
    FUN_00c81b30(0x33);
    iVar4 = FUN_00a12210(afStack_3b4[param_1[0x250] + 1]);
    afStack_3e8[2] =
         SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
              *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
              *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    afStack_3e8[3] =
         SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
              *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
              *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar10 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                  *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                  *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    fStack_3f8 = *(float *)(iVar4 + 0x28) / fVar10;
    fStack_3f4 = *(float *)(iVar4 + 0x38) / fVar10;
    fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar10));
    fVar7 = (float10)fpatan((float10)fStack_3f8,(float10)fStack_3f4);
    fStack_3d0 = (float)fVar7;
    fStack_3cc = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)afStack_3e8[3],
                            (float10)*(float *)(iVar4 + 0x10) / (float10)afStack_3e8[2]);
    fStack_3c8 = (float)fVar8;
    afStack_3e8[2] = *(float *)(iVar4 + 0x40);
    afStack_3e8[3] = *(float *)(iVar4 + 0x44);
    uStack_3d8 = *(undefined4 *)(iVar4 + 0x48);
    uStack_3d4 = *(undefined4 *)(iVar4 + 0x4c);
    fStack_3f0 = 0.0;
    fStack_3ec = 0.0;
    afStack_3e8[0] = 30.0;
    D3DXVec3TransformNormal(&fStack_3f0,&fStack_3f0,(float *)(iVar4 + 0x10));
    fStack_3fc = *(float *)(iVar4 + 0x40) + fStack_3fc;
    fStack_3f8 = *(float *)(iVar4 + 0x44) + fStack_3f8;
    fStack_3f4 = *(float *)(iVar4 + 0x48) + fStack_3f4;
    FUN_0041fee0();
    uStack_228 = 0xb;
    fStack_338 = 3.38645e-40;
    uStack_22c = 0x41;
    uStack_1cc = FUN_009f8b40();
    uStack_328 = 0x14;
    uStack_320 = 0x1e;
    uStack_31c = 0;
    iStack_324 = 0x96;
    uVar5 = FUN_00ac84d0(0x18);
    (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x18);
    (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x18);
    uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x18);
    iStack_324 = param_1[0x13c];
    uStack_328._0_2_ = CONCAT11(10,uVar2);
    uStack_334 = uVar5;
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    auStack_348[0] = auStack_348[0] | 4;
    uStack_1ce = *(undefined2 *)(iVar4 + 0xa0);
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 == 2) {
      uStack_68 = 1;
    }
    FUN_00416e30(&fStack_3f8,&stack0xfffffbf8,afStack_3e8,0x3e99999a,0x43480000);
    uVar5 = FUN_00ac45b0();
    afStack_3e8[0] = 0.0;
    afStack_3e8[1] = 0.0;
    afStack_3e8[2] = 0.0;
    FUN_0043fed0(uVar5,0,afStack_3e8);
    iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))();
    if (iVar4 == 0) {
      FUN_00ad3be0(param_1[0x13c],auStack_348);
    }
    param_1[0x249] = 0x40c00000;
    iVar4 = FUN_00ac4780();
    if (2 < iVar4) {
      param_1[0x249] = 0x40800000;
    }
    param_1[0x250] = param_1[0x250] + 1;
    if ((*(byte *)(param_1 + 0x250) & 1) != 0) {
      param_1[0x249] = 0x41400000;
      iVar4 = FUN_00ac4780();
      if (2 < iVar4) {
        param_1[0x249] = 0x41000000;
      }
    }
    if ((uint)param_1[0x250] < 0x10) {
      return;
    }
    param_1[0x252] = param_1[0x252] + 1;
    param_1[0x249] = 0x42700000;
    param_1[0x250] = 0;
    return;
  case 4:
    FUN_00aa4080(0x17,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43340000;
    param_1[0x187] = param_1[0x187] + 1;
    iVar4 = FUN_00a12210(0x12);
    *(undefined4 *)(iVar4 + 0x90) = 0;
    switchD_0080dbae::default();
    goto LAB_005569ae;
  case 5:
LAB_005569ae:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    fVar10 = (float)param_1[0x14];
    param_1[0x14] = (int)(fVar10 - 0.04);
    if ((fVar10 - 0.04 < 311.5) ||
       ((piVar6 != (int *)0x0 && (iVar4 = (**(code **)(*piVar6 + 0x354))(), iVar4 != 0)))) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    switchD_0080dbae::default();
    iVar4 = FUN_00a12210(0x12);
    if (iVar4 != 0) {
      iVar4 = FUN_00a12210(0x12);
      D3DXMatrixInverse(auStack_370,0,iVar4 + 0x10);
      D3DXVec3TransformNormal(&fStack_3fc,param_1[0x2a1] + 0x40,afStack_3b4 + 0xe);
      fStack_3f0 = fStack_340 + fStack_3f0;
      fVar8 = (float10)fStack_3ec;
      fStack_3ec = (float)((float10)fStack_33c + fVar8);
      fVar7 = (float10)afStack_3e8[0];
      afStack_3e8[0] = (float)((float10)fStack_338 + fVar7);
      fVar8 = (float10)fpatan((float10)fStack_338 + fVar7,-((float10)fStack_33c + fVar8));
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)-1.0 - (float10)(float)param_1[0x24a]))
      ;
      fStack_3f8 = (float)fVar8;
      fStack_3f4 = (float)param_1[0x24a];
      fVar8 = (float10)FUN_00fdc1f0();
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)fStack_3f8 + (float10)fStack_3f4));
      param_1[0x24a] = (int)(float)fVar8;
      iVar4 = FUN_00a12210(0x12);
      fVar8 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x90) + (float)param_1[0x24a]);
      fStack_3f8 = (float)fVar8;
      iVar4 = FUN_00a12210(0x12);
      *(float *)(iVar4 + 0x90) = fStack_3f8;
    }
    switchD_0080dbae::default();
    if (param_1[0x251] == 0) {
      iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))();
      if (iVar4 != 0) {
        return;
      }
      fVar10 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar10 - (float)param_1[0x244]);
      if (fVar10 - (float)param_1[0x244] < 0.0) {
        iVar4 = FUN_00a12210(afStack_3b4[param_1[0x250] + 1]);
        afStack_3e8[2] =
             SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                  *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                  *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
        afStack_3e8[3] =
             SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                  *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                  *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
        fVar10 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                      *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                      *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
        fStack_3f8 = *(float *)(iVar4 + 0x28) / fVar10;
        fStack_3f4 = *(float *)(iVar4 + 0x38) / fVar10;
        fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar10));
        fVar7 = (float10)fpatan((float10)fStack_3f8,(float10)fStack_3f4);
        fStack_3d0 = (float)fVar7;
        fStack_3cc = (float)fVar8;
        fVar8 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)afStack_3e8[3],
                                (float10)*(float *)(iVar4 + 0x10) / (float10)afStack_3e8[2]);
        fStack_3c8 = (float)fVar8;
        afStack_3e8[2] = *(float *)(iVar4 + 0x40);
        afStack_3e8[3] = *(float *)(iVar4 + 0x44);
        uStack_3d8 = *(undefined4 *)(iVar4 + 0x48);
        uStack_3d4 = *(undefined4 *)(iVar4 + 0x4c);
        fStack_3f0 = 0.0;
        fStack_3ec = 0.0;
        afStack_3e8[0] = 30.0;
        D3DXVec3TransformNormal(&fStack_3f0,&fStack_3f0,(float *)(iVar4 + 0x10));
        fStack_3fc = fStack_3fc + *(float *)(iVar4 + 0x40);
        fStack_3f8 = *(float *)(iVar4 + 0x44) + fStack_3f8;
        fStack_3f4 = *(float *)(iVar4 + 0x48) + fStack_3f4;
        FUN_0041fee0();
        uStack_228 = 0xb;
        fStack_338 = 3.38645e-40;
        uStack_22c = 0x41;
        uStack_1cc = FUN_009f8b40();
        uStack_328 = 0x14;
        uStack_320 = 0x1e;
        uStack_31c = 0;
        iStack_324 = 0x96;
        uVar5 = FUN_00ac84d0(0x18);
        (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x18);
        (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x18);
        uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x18);
        iStack_324 = param_1[0x13c];
        uStack_328._0_2_ = CONCAT11(10,uVar2);
        uStack_334 = uVar5;
        uVar5 = FUN_00a7c7f0();
        FUN_00a7c960(uVar5);
        auStack_348[0] = auStack_348[0] | 4;
        uStack_1ce = *(undefined2 *)(iVar4 + 0xa0);
        sVar3 = FUN_00dde2d0(0,3);
        if (sVar3 == 2) {
          uStack_68 = 1;
        }
        FUN_00416e30(&fStack_3f8,&stack0xfffffbf8,afStack_3e8,0x3e19999a,0x43480000);
        uVar5 = FUN_00ac45b0();
        afStack_3e8[0] = 0.0;
        afStack_3e8[1] = 0.0;
        afStack_3e8[2] = 0.0;
        FUN_0043fed0(uVar5,0,afStack_3e8);
        FUN_00ad3be0(param_1[0x13c],auStack_348);
        param_1[0x249] = 0x41000000;
        iVar4 = FUN_00ac4780();
        if (2 < iVar4) {
          param_1[0x249] = 0x40800000;
        }
        param_1[0x250] = param_1[0x250] + 1;
        if ((*(byte *)(param_1 + 0x250) & 1) != 0) {
          param_1[0x249] = 0x41700000;
          iVar4 = FUN_00ac4780();
          if (2 < iVar4) {
            param_1[0x249] = 0x41100000;
          }
        }
        if (0xf < (uint)param_1[0x250]) {
          param_1[0x250] = 0;
          param_1[0x249] = 0x42700000;
          return;
        }
        return;
      }
      return;
    }
    return;
  case 6:
    FUN_00aa4080(0x15,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
    iVar4 = FUN_00a12210(0x12);
    *(undefined4 *)(iVar4 + 0x90) = 0;
    switchD_0080dbae::default();
  case 7:
    fVar10 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
    if (fVar10 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
    iVar4 = FUN_00a12210(0x12);
    if (iVar4 == 0) goto LAB_005563ab;
    if (0.0 < (float)param_1[0x24a]) {
      fVar8 = (float10)FUN_00ddba30((float)param_1[0x24a] - 0.008726646);
      param_1[0x24a] = (int)(float)fVar8;
      if (fVar8 < (float10)0) {
        param_1[0x24a] = (int)(float)(float10)0;
      }
    }
    if ((float)param_1[0x24a] < 0.0) {
      fVar7 = (float10)FUN_00ddba30((float)param_1[0x24a] + 0.008726646);
      param_1[0x24a] = (int)(float)fVar7;
      fVar8 = (float10)0;
      if (fVar7 <= fVar8) goto LAB_00556373;
      goto LAB_0055636d;
    }
    goto LAB_00556373;
  case 8:
    FUN_00aa4080(0x16,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00557016;
  case 9:
LAB_00557016:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      fVar8 = (float10)FUN_00dde300(0x40400000,0x40800000);
      param_1[0x3a1] = (int)(float)(fVar8 * (float10)60.0);
      iVar4 = FUN_00ac4780();
      if (iVar4 == 2) {
        fVar8 = (float10)FUN_00dde300(0x3f000000,0x40000000);
        param_1[0x3a1] = (int)(float)(fVar8 * (float10)60.0);
      }
      iVar4 = FUN_00ac4780();
      if (2 < iVar4) {
        param_1[0x3a1] = 0x40c00000;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x14] = (int)((_DAT_01881420 - (float)param_1[0x14]) * 0.06 + (float)param_1[0x14]);
    param_1[0x16] = (int)((_DAT_01881428 - (float)param_1[0x16]) * 0.06 + (float)param_1[0x16]);
    return;
  default:
    return;
  }
  FUN_00551c80();
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar10 = (float)param_1[0x244] * 0.3;
  uVar5 = 0x3c23d70a;
  fVar8 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar10);
  FUN_00a981b0(param_1 + 0x15,param_1 + 0x15,param_1 + 0x83a,(float)fVar8,uVar5,fVar10);
  afStack_3b4[0] = (_DAT_01881430 + 5.0) - 2.0;
  fVar10 = (float)param_1[0x244] * 0.5;
  uVar5 = 0x3c23d70a;
  fVar8 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar10);
  FUN_00a981b0(param_1 + 0x14,param_1 + 0x14,afStack_3b4,(float)fVar8,uVar5,fVar10);
  fVar10 = (float)param_1[0x244] * 1.5;
  uVar5 = 0x3c23d70a;
  fVar8 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar10);
  FUN_00a981b0(param_1 + 0x16,param_1 + 0x16,&DAT_01881438,(float)fVar8,uVar5,fVar10);
  switchD_0080dbae::default();
  iVar4 = FUN_00a12210(0x12);
  if (iVar4 != 0) {
    iVar4 = FUN_00a12210(0x12);
    D3DXMatrixInverse(afStack_3b4 + 1,0,iVar4 + 0x10);
    D3DXVec3TransformNormal(&fStack_3fc,param_1[0x2a1] + 0x40,auStack_3bc);
    fStack_3f0 = fStack_3f0 + afStack_3b4[0xd];
    fVar8 = (float10)fStack_3ec;
    fStack_3ec = (float)((float10)afStack_3b4[0xe] + fVar8);
    fVar7 = (float10)afStack_3e8[0];
    afStack_3e8[0] = (float)((float10)afStack_3b4[0xf] + fVar7);
    fVar8 = (float10)fpatan((float10)afStack_3b4[0xf] + fVar7,-((float10)afStack_3b4[0xe] + fVar8));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)-1.0 - (float10)(float)param_1[0x24a]));
    fStack_3f4 = (float)fVar8;
    fStack_3f8 = (float)param_1[0x24a];
    fVar8 = (float10)FUN_00fdc1f0();
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)fStack_3f4 + (float10)fStack_3f8));
LAB_0055636d:
    param_1[0x24a] = (int)(float)fVar8;
LAB_00556373:
    iVar4 = FUN_00a12210(0x12);
    fVar8 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x90) + (float)param_1[0x24a]);
    fStack_3f8 = (float)fVar8;
    iVar4 = FUN_00a12210(0x12);
    *(float *)(iVar4 + 0x90) = fStack_3f8;
  }
LAB_005563ab:
  switchD_0080dbae::default();
  return;
}

// 00557130  FUN_00557130  size=3212  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00557130(int *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float local_390 [4];
  float local_380 [18];
  undefined4 local_338;
  undefined4 local_334;
  uint auStack_330 [2];
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined1 uStack_30f;
  int iStack_30c;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  undefined2 uStack_1b6;
  undefined4 uStack_50;
  
  iVar8 = param_1[0x187];
  if (((iVar8 != 0) && (iVar8 < 2)) && (param_1[0x83f] != 0)) {
    FUN_00a8caf0(0xc,0,0,0);
    param_1[0x81d] = 0;
    FUN_00a8caf0(0xc,0,0,0);
    param_1[0x840] = -1;
    if ((*(byte *)(param_1 + 0x371) & 3) == 3) {
      return;
    }
    param_1[0x840] = 0xc;
    param_1[0x842] = 0x41200000;
    param_1[0x841] = 0x42340000;
    return;
  }
  local_380[0] = 2.87827e-42;
  local_380[1] = 2.88107e-42;
  local_380[2] = 2.88387e-42;
  local_380[3] = 2.88667e-42;
  local_380[4] = 2.88948e-42;
  local_380[5] = 2.89228e-42;
  local_380[6] = 2.89508e-42;
  local_380[7] = 2.89789e-42;
  local_380[8] = 2.87967e-42;
  local_380[9] = 2.88247e-42;
  local_380[10] = 2.88527e-42;
  local_380[0xb] = 2.88808e-42;
  local_380[0xc] = 2.89088e-42;
  local_380[0xd] = 2.89368e-42;
  local_380[0xe] = 2.89648e-42;
  local_380[0xf] = 2.89929e-42;
  switch(iVar8) {
  case 0:
    sVar5 = FUN_00dde2d0(0,1);
    param_1[0x252] = (int)sVar5;
    uVar9 = 0x19;
    if (sVar5 != 0) {
      uVar9 = 0x20;
    }
    FUN_00aa4080(uVar9,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1bb] = 1;
    param_1[0x58d] = 0;
    param_1[0x249] = param_1[0x10];
    if (param_1[0x2a1] != 0) {
      fVar12 = *(float *)(param_1[0x2a1] + 0x40);
      param_1[0x249] = (int)fVar12;
      if (337.0 < fVar12) {
        param_1[0x249] = 0x43a88000;
      }
      if ((float)param_1[0x249] < 319.0) {
        param_1[0x249] = 0x439f8000;
      }
    }
    if (param_1[0x838] != 0) {
      param_1[0x83c] = 1;
      param_1[0x83d] = 0x40a00000;
      param_1[0x83e] = param_1[0x249];
    }
    param_1[0x838] = 0;
    FUN_00546f50();
    FUN_00a8d280();
    break;
  case 1:
    break;
  case 2:
    uVar9 = 0x1a;
    if (param_1[0x252] != 0) {
      uVar9 = 0x21;
    }
    FUN_00aa4080(uVar9,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c4d210(param_1[0x13c],0,0);
    if (param_1[0x252] == 0) {
      FUN_00c4d210(param_1[0x13c],2,1);
    }
    else {
      FUN_00c4d210(param_1[0x13c],1,1);
    }
    goto LAB_0055754d;
  case 3:
LAB_0055754d:
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (fVar12 - (float)param_1[0x244] < 0.0) {
      iVar8 = param_1[0x2a1];
      param_1[0x187] = param_1[0x187] + 1;
      if (iVar8 != 0) {
        if ((param_1[0x252] == 1) && (*(float *)(iVar8 + 0x40) < (float)param_1[0x10])) {
          param_1[0x187] = 0xc;
        }
        if (((iVar8 != 0) && (param_1[0x252] == 0)) &&
           ((float)param_1[0x10] < *(float *)(iVar8 + 0x40))) {
          param_1[0x187] = 0xc;
        }
      }
    }
LAB_005575ba:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    uVar9 = 0x1b;
    if (param_1[0x252] != 0) {
      uVar9 = 0x22;
    }
    FUN_00aa4080(uVar9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00557625;
  case 5:
LAB_00557625:
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x2a1] != 0) && (param_1[0x252] == 1)) &&
       (((float)param_1[0x10] <= *(float *)(param_1[0x2a1] + 0x40) &&
        (pfVar1 = (float *)(param_1 + 0x14), 305.5 < *pfVar1)))) {
      local_338 = 0x4398c000;
      fVar12 = (float)param_1[0x244] * 0.2;
      uVar7 = 0x3c23d70a;
      fVar10 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar12);
      FUN_00a981b0(pfVar1,pfVar1,&local_338,(float)fVar10,uVar7,fVar12);
    }
    if (param_1[0x2a1] == 0) {
      return;
    }
    if (param_1[0x252] != 0) {
      return;
    }
    if ((float)param_1[0x10] < *(float *)(param_1[0x2a1] + 0x40)) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0x14);
    if (312.5 <= *pfVar1) {
      return;
    }
    local_334 = 0x439c4000;
    fVar12 = (float)param_1[0x244] * 0.2;
    uVar7 = 0x3c23d70a;
    fVar10 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar12);
    FUN_00a981b0(pfVar1,pfVar1,&local_334,(float)fVar10,uVar7,fVar12);
    return;
  case 6:
    uVar9 = 0x1c;
    if (param_1[0x252] != 0) {
      uVar9 = 0x23;
    }
    FUN_00aa4080(uVar9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x250] = 0;
    param_1[0x248] = 0x43700000;
    param_1[0x251] = 0;
    param_1[0x253] = 0;
  case 7:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (param_1[0x253] == 1) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x251] == 0) &&
       (fVar12 = (float)param_1[0x249], param_1[0x249] = (int)(fVar12 - (float)param_1[0x244]),
       fVar12 - (float)param_1[0x244] < 0.0)) {
      FUN_00c81b30(0x33);
      iVar8 = FUN_00a12210(local_380[param_1[0x250] + 8]);
      if (param_1[0x252] != 0) {
        iVar8 = FUN_00a12210(local_380[param_1[0x250]]);
      }
      local_380[0] = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                          *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                          *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
      local_380[1] = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                          *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                          *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
      fVar4 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                   *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                   *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
      fVar12 = *(float *)(iVar8 + 0x28);
      fVar2 = *(float *)(iVar8 + 0x38);
      fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar8 + 0x18) / fVar4));
      fVar11 = (float10)fpatan((float10)(fVar12 / fVar4),(float10)(fVar2 / fVar4));
      local_380[8] = (float)fVar11;
      local_380[9] = (float)fVar10;
      fVar10 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)local_380[1],
                               (float10)*(float *)(iVar8 + 0x10) / (float10)local_380[0]);
      local_380[10] = (float)fVar10;
      local_380[0] = *(float *)(iVar8 + 0x40);
      local_380[1] = *(float *)(iVar8 + 0x44);
      local_380[2] = *(float *)(iVar8 + 0x48);
      local_380[3] = *(float *)(iVar8 + 0x4c);
      local_390[0] = 0.0;
      local_390[1] = 0.0;
      local_390[2] = 30.0;
      D3DXVec3TransformNormal(local_390,local_390,(float *)(iVar8 + 0x10));
      uVar7 = *(undefined4 *)(iVar8 + 0x44);
      uVar3 = *(undefined4 *)(iVar8 + 0x48);
      local_390[0] = *(float *)(iVar8 + 0x4c) + local_390[0];
      FUN_0041fee0();
      uStack_228 = 10;
      local_338 = 0x3b001;
      uStack_22c = 0x41;
      uStack_1cc = FUN_009f8b40();
      uStack_328 = 10;
      uStack_320 = 0x1e;
      uStack_31c = uStack_31c & 0xffffff00;
      uStack_324 = 0x96;
      uVar6 = FUN_00ac84d0(0x18);
      (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x18);
      (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x18);
      uStack_310 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x18);
      iStack_30c = param_1[0x13c];
      uStack_30f = 10;
      uStack_31c = uVar6;
      uStack_318 = uVar3;
      uStack_314 = uVar7;
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
      auStack_330[0] = auStack_330[0] | 4;
      uStack_1b6 = *(undefined2 *)(iVar8 + 0xa0);
      sVar5 = FUN_00dde2d0(0,3);
      if (sVar5 == 2) {
        uStack_50 = 1;
      }
      FUN_0043fe30(local_380,local_390,local_380 + 8,0x3e99999a,0x43480000);
      uVar7 = FUN_00ac45b0();
      local_380[8] = 0.0;
      local_380[9] = 0.0;
      local_380[10] = 0.0;
      FUN_0043fed0(uVar7,0,local_380 + 8);
      FUN_00ad3be0(param_1[0x13c],auStack_330);
      param_1[0x249] = 0x41700000;
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x249] = 0x41000000;
      }
      param_1[0x250] = param_1[0x250] + 1;
      if (7 < (uint)param_1[0x250]) {
        param_1[0x250] = 0;
        param_1[0x253] = 1;
        param_1[0x249] = (int)((float)param_1[0x249] + 90.0);
      }
    }
    goto LAB_005575ba;
  case 8:
    uVar9 = 0x1d;
    if (param_1[0x252] != 0) {
      uVar9 = 0x24;
    }
    FUN_00aa4080(uVar9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00557bc7;
  case 9:
LAB_00557bc7:
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_005575ba;
  case 10:
    uVar9 = 0x1a;
    if (param_1[0x252] != 0) {
      uVar9 = 0x21;
    }
    FUN_00aa4080(uVar9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  case 0xb:
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (fVar12 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_005575ba;
  case 0xc:
    uVar9 = 0x1e;
    if (param_1[0x252] != 0) {
      uVar9 = 0x25;
    }
    FUN_00aa4080(uVar9,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c4d210(param_1[0x13c],0,1);
    FUN_00c4d210(param_1[0x13c],1,0);
    FUN_00c4d210(param_1[0x13c],2,0);
    goto LAB_00557cea;
  case 0xd:
LAB_00557cea:
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      fVar10 = (float10)FUN_00dde300(0x40400000,0x40800000);
      param_1[0x3a1] = (int)(float)(fVar10 * (float10)60.0);
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        fVar10 = (float10)FUN_00dde300(0x3f000000,0x40000000);
        param_1[0x3a1] = (int)(float)(fVar10 * (float10)60.0);
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x3a1] = 0x40c00000;
      }
    }
    param_1[0x14] = (int)((_DAT_01881420 - (float)param_1[0x14]) * 0.05 + (float)param_1[0x14]);
    param_1[0x16] = (int)((_DAT_01881428 - (float)param_1[0x16]) * 0.05 + (float)param_1[0x16]);
    goto LAB_005575ba;
  default:
    goto switchD_0055724e_default;
  }
  FUN_00551c80();
  iVar8 = FUN_00a94ce0(0);
  if (iVar8 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar12 = (float)param_1[0x244] * 0.3;
  uVar7 = 0x3c23d70a;
  fVar10 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar12);
  FUN_00a981b0(param_1 + 0x15,param_1 + 0x15,param_1 + 0x83a,(float)fVar10,uVar7,fVar12);
  iVar8 = FUN_00a8c760(0);
  if (iVar8 != 0) {
    if (param_1[0x2a1] != 0) {
      fVar12 = *(float *)(param_1[0x2a1] + 0x40);
      param_1[0x249] = (int)fVar12;
      if (318.5 < fVar12) {
        param_1[0x249] = 0x439f4000;
      }
      if ((float)param_1[0x249] < 300.5) {
        param_1[0x249] = 0x43964000;
      }
    }
    fVar12 = (float)param_1[0x244] * 0.5;
    uVar7 = 0x3c23d70a;
    fVar10 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar12);
    FUN_00a981b0(param_1 + 0x14,param_1 + 0x14,param_1 + 0x249,(float)fVar10,uVar7,fVar12);
    fVar12 = (float)param_1[0x244] * 1.5;
    uVar7 = 0x3c23d70a;
    fVar10 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar12);
    FUN_00a981b0(param_1 + 0x16,param_1 + 0x16,&DAT_01881428,(float)fVar10,uVar7,fVar12);
    return;
  }
switchD_0055724e_default:
  return;
}

// 00557E00  FUN_00557e00  size=1088  [between]
void __fastcall FUN_00557e00(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  undefined1 *puStack_22c;
  undefined4 uStack_228;
  int iStack_224;
  undefined1 *local_214;
  float fStack_210;
  undefined1 *puStack_20c;
  undefined4 uStack_208;
  undefined1 auStack_1ec [4];
  undefined1 auStack_1e8 [8];
  undefined4 local_1e0;
  undefined4 local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 auStack_1b8 [12];
  undefined1 auStack_1ac [12];
  undefined1 local_1a0 [12];
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_178;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iStack_224 = 0xe10;
  uStack_228 = 0x557e1b;
  iVar3 = FUN_00a12210();
  iStack_224 = 0xe11;
  uStack_228 = 0x557e29;
  local_214 = (undefined1 *)FUN_00a12210();
  iStack_224 = 0x2b;
  uStack_228 = 0x557e36;
  iVar4 = FUN_00a12210();
  iStack_224 = 0x20;
  uStack_228 = 0x557e41;
  iVar5 = FUN_00a12210();
  if ((iVar3 != 0) && (local_214 != (undefined1 *)0x0)) {
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = 0.0;
    local_1d0 = 0.0;
    local_1cc = 0.0;
    local_1c8 = 0;
    if (iVar4 != 0) {
      local_1e0 = *(undefined4 *)(iVar4 + 0x40);
      local_1dc = *(undefined4 *)(iVar4 + 0x44);
      local_1d8 = *(float *)(iVar4 + 0x48);
      local_1d4 = *(float *)(iVar4 + 0x4c);
    }
    if (iVar5 != 0) {
      local_1d0 = *(float *)(iVar5 + 0x40);
      local_1cc = *(float *)(iVar5 + 0x44);
      local_1c8 = *(undefined4 *)(iVar5 + 0x48);
      local_1c4 = *(undefined4 *)(iVar5 + 0x4c);
    }
    iStack_224 = param_1 + 0x10;
    uStack_228 = 0;
    puStack_22c = local_1a0;
    puStack_230 = (undefined1 *)0x557ec1;
    D3DXMatrixInverse();
    puStack_230 = auStack_1ac;
    puStack_234 = auStack_1ec;
    D3DXVec3TransformNormal();
    local_1d8 = fStack_188 + local_1d8;
    local_1d4 = fStack_184 + local_1d4;
    local_1d0 = fStack_180 + local_1d0;
    D3DXVec3TransformNormal(&local_1c8,auStack_1e8,auStack_1b8);
    bVar1 = false;
    local_1d4 = fStack_194 + local_1d4;
    bVar2 = false;
    local_1d0 = fStack_190 + local_1d0;
    local_1cc = fStack_18c + local_1cc;
    FUN_00a8c760(0x11);
    FUN_00a8c760(0x12);
    FUN_00a8c760(0x14);
    if (*(char *)(param_1 + 0xe92) == '\0') {
      if (*(float *)(iVar3 + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xe92) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xe92) == '\x01') &&
            (bVar1 = 0.089999996 < *(float *)(iVar3 + 0x54), bVar1)) {
      *(undefined1 *)(param_1 + 0xe92) = 0;
    }
    if (*(char *)(param_1 + 0xe93) == '\0') {
      if (fStack_178 < 0.01) {
        *(undefined1 *)(param_1 + 0xe93) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xe93) == '\x01') && (0.089999996 < fStack_178)) {
      bVar2 = true;
      *(undefined1 *)(param_1 + 0xe93) = 0;
    }
    if ((bVar1) && (iVar3 = FUN_00a12210(0x2b), iVar3 != 0)) {
      uVar7 = 0;
      uVar6 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar6,uVar7);
      FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
      uStack_64 = *(undefined4 *)(iVar3 + 0x40);
      uStack_60 = *(undefined4 *)(iVar3 + 0x44);
      uStack_5c = *(undefined4 *)(iVar3 + 0x48);
      uStack_58 = *(undefined4 *)(iVar3 + 0x4c);
      puStack_234 = *(undefined1 **)(iVar3 + 0x40);
      puStack_22c = *(undefined1 **)(iVar3 + 0x48);
      uStack_228 = *(undefined4 *)(iVar3 + 0x4c);
      puStack_230 = (undefined1 *)(*(float *)(iVar3 + 0x44) + 1.0);
      fStack_210 = *(float *)(iVar3 + 0x44) - 5.0;
      local_214 = puStack_234;
      puStack_20c = puStack_22c;
      uStack_208 = uStack_228;
      iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&puStack_234,0,0,0,&puStack_234,&local_214,0x1e,"em0200_ray");
      if (iVar3 != 0) {
        FUN_0041cdb0(&puStack_234);
      }
      pfVar8 = &fStack_184;
      uVar6 = FUN_00e00b40(0x20200,pfVar8);
      FUN_00a8c930(uVar6,pfVar8);
    }
    if ((bVar2) && (iVar3 = FUN_00a12210(0x20), iVar3 != 0)) {
      uVar7 = 0;
      uVar6 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar6,uVar7);
      FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
      uStack_64 = *(undefined4 *)(iVar3 + 0x40);
      uStack_60 = *(undefined4 *)(iVar3 + 0x44);
      uStack_5c = *(undefined4 *)(iVar3 + 0x48);
      uStack_58 = *(undefined4 *)(iVar3 + 0x4c);
      puStack_234 = *(undefined1 **)(iVar3 + 0x40);
      puStack_22c = *(undefined1 **)(iVar3 + 0x48);
      uStack_228 = *(undefined4 *)(iVar3 + 0x4c);
      puStack_230 = (undefined1 *)(*(float *)(iVar3 + 0x44) + 1.0);
      fStack_210 = *(float *)(iVar3 + 0x44) - 5.0;
      local_214 = puStack_234;
      puStack_20c = puStack_22c;
      uStack_208 = uStack_228;
      iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&puStack_234,0,0,0,&puStack_234,&local_214,0x1e,"em0200_ray");
      if (iVar3 != 0) {
        FUN_0041cdb0(&puStack_234);
      }
      pfVar8 = &fStack_184;
      uVar6 = FUN_00e00b40(0x20200,pfVar8);
      FUN_00a8c930(uVar6,pfVar8);
    }
    *(undefined4 *)(param_1 + 0x1e00) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1e04) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x1e08) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x1e0c) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}

// 00558280  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>  size=122  [class]
void lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined **local_410;
  undefined1 *local_40c;
  int local_408;
  undefined4 local_404;
  undefined1 local_400 [1024];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a7f440(param_1,&local_410);
  puVar1 = local_40c;
  if (local_40c != local_40c + local_408 * 4) {
    do {
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
      puVar1 = puVar1 + 4;
    } while (puVar1 != local_40c + local_408 * 4);
  }
  return;
}

// 00593080  lib::StaticArray<Entity*,4>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005940D0  lib::StaticArray<Entity*,4>::StaticArray<Entity*,4>  size=229  [class]
void __fastcall lib::StaticArray<Entity*,4>::StaticArray<Entity*,4>(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined **local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  int local_10 [4];
  
  local_1c = local_10;
  local_18 = 0;
  local_14 = 4;
  local_20 = vftable;
  FUN_00a7f440(0xf0421,&local_20);
  piVar1 = local_1c + local_18;
  *(undefined4 *)(param_1 + 0x1860) = 0;
  for (piVar5 = local_1c; piVar5 != piVar1; piVar5 = piVar5 + 1) {
    if ((*piVar5 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)((*(int *)(param_1 + 0x1860) + 0xbf) * 0x20 + param_1) = 1;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      iVar4 = FUN_00a7c8a0();
      iVar2 = *(int *)(param_1 + 0x1860) * 0x20;
      *(undefined4 *)(iVar2 + 0x17f0 + param_1) = *(undefined4 *)(iVar4 + 0x40);
      iVar2 = iVar2 + 0x17f0 + param_1;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar4 + 0x44);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 0x48);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar4 + 0x4c);
      *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
    }
  }
  return;
}

// 005A7700  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5  size=122  [class]
void lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined **local_410;
  undefined1 *local_40c;
  int local_408;
  undefined4 local_404;
  undefined1 local_400 [1024];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a7f440(param_1,&local_410);
  puVar1 = local_40c;
  if (local_40c != local_40c + local_408 * 4) {
    do {
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
      puVar1 = puVar1 + 4;
    } while (puVar1 != local_40c + local_408 * 4);
  }
  return;
}

// 005A7780  FUN_005a7780  size=259  [callgraph]
void FUN_005a7780(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_ESI;
  undefined4 uVar6;
  float fStack_178;
  float fStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20607);
  iVar4 = FUN_00a12210(0x401);
  local_170 = 0xc0e9999a;
  local_16c = 0xbf99999a;
  local_168 = 0;
  if (iVar4 != 0) {
    D3DXVec3TransformNormal(&local_170,&local_170,iVar4 + 0x10);
    fVar1 = *(float *)(iVar4 + 0x40);
    uVar6 = 0;
    fVar2 = *(float *)(iVar4 + 0x44);
    fVar3 = *(float *)(iVar4 + 0x48);
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(0x14d,uVar5,uVar6);
    uStack_40 = local_170;
    fStack_4c = fVar1 + unaff_ESI;
    fStack_48 = fVar2 + fStack_178;
    fStack_44 = fVar3 + fStack_174;
    FUN_00a8c930(0,&local_16c);
    FUN_00e5e080("em0600_se_dmg_foot_explosion_1_explo",&stack0xfffffe84,0,0xffffffff,0);
    FUN_00e5e080("em0600_se_dmg_foot_explosion_2_explo",&stack0xfffffe84,0,0xffffffff,0);
  }
  return;
}

// 005A7890  FUN_005a7890  size=259  [callgraph]
void FUN_005a7890(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_ESI;
  undefined4 uVar6;
  float fStack_178;
  float fStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20608);
  iVar4 = FUN_00a12210(0x601);
  local_170 = 0x40e9999a;
  local_16c = 0xbf99999a;
  local_168 = 0;
  if (iVar4 != 0) {
    D3DXVec3TransformNormal(&local_170,&local_170,iVar4 + 0x10);
    fVar1 = *(float *)(iVar4 + 0x40);
    uVar6 = 0;
    fVar2 = *(float *)(iVar4 + 0x44);
    fVar3 = *(float *)(iVar4 + 0x48);
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(0x14d,uVar5,uVar6);
    uStack_40 = local_170;
    fStack_4c = fVar1 + unaff_ESI;
    fStack_48 = fVar2 + fStack_178;
    fStack_44 = fVar3 + fStack_174;
    FUN_00a8c930(0,&local_16c);
    FUN_00e5e080("em0600_se_dmg_foot_explosion_1_explo",&stack0xfffffe84,0,0xffffffff,0);
    FUN_00e5e080("em0600_se_dmg_foot_explosion_2_explo",&stack0xfffffe84,0,0xffffffff,0);
  }
  return;
}

// 005F3BC0  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_5  size=1650  [class]
void __fastcall lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_5(int *param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float local_120;
  float *pfStack_11c;
  undefined4 local_118;
  float *local_114;
  undefined **local_110;
  float *local_10c;
  int local_108;
  undefined4 local_104;
  float local_100 [64];
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_005f1470(5,0x3ca3d70a);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)((int)param_1 + 0xdc5) = 0;
    if (param_1[0x39e] != 0) {
      param_1[0x39f] = 0;
    }
    if (param_1[0x3c2] != 0) {
      param_1[0x3c3] = 0;
      return;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 1) {
      local_118 = 0;
      if (param_1[0x3ec] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e6));
      }
      local_10c = local_100;
      local_108 = 0;
      local_104 = 0x40;
      local_110 = vftable;
      iVar2 = FUN_00c27cb0(param_1[0x13c],0x42480000,&local_110,0xffffffff);
      if ((0 < iVar2) &&
         (local_114 = local_10c, pfVar6 = local_10c, local_10c != local_10c + local_108)) {
        do {
          local_120 = *pfVar6;
          local_114 = pfVar6;
          iVar2 = FUN_00a7c8a0();
          iVar2 = FUN_009f93b0(*(undefined4 *)(iVar2 + 0x4b4));
          if (iVar2 != 0) {
            if (param_1[0x39f] != 0) {
              pfVar3 = (float *)param_1[0x39e];
              pfVar8 = pfVar3 + param_1[0x39f];
              for (; pfVar3 != pfVar8; pfVar3 = pfVar3 + 1) {
                if (*pfVar3 == local_120) goto LAB_005f3d3a;
              }
            }
            (**(code **)(param_1[0x39d] + 8))(&local_120);
            iVar2 = FUN_00a7c8a0();
            local_120 = *(float *)(iVar2 + 0x51c);
            (**(code **)(param_1[0x3c1] + 8))(&local_120);
LAB_005f3d3a:
            piVar7 = (int *)param_1[0x3c2];
            if (piVar7 != piVar7 + param_1[0x3c3]) {
              do {
                iVar2 = *piVar7;
                iVar4 = FUN_00a7c8a0();
                pfVar6 = local_114;
                if (iVar2 == *(int *)(iVar4 + 0x51c)) break;
                piVar7 = piVar7 + 1;
              } while (piVar7 != (int *)(param_1[0x3c2] + param_1[0x3c3] * 4));
            }
          }
          pfVar6 = pfVar6 + 1;
          local_114 = pfVar6;
        } while (pfVar6 != local_10c + local_108);
      }
      puVar10 = (undefined4 *)param_1[0x39e];
      if (puVar10 != puVar10 + param_1[0x39f]) {
        do {
          iVar2 = FUN_00a7c7e0();
          if (iVar2 == 0) {
            uVar1 = param_1[0x39f];
            iVar2 = param_1[0x39e];
            puVar9 = (undefined4 *)(iVar2 + uVar1 * 4);
            if ((((puVar10 != puVar9) && (iVar2 != 0)) && (uVar1 != 0)) &&
               ((uint)((int)puVar10 - iVar2 >> 2) < uVar1)) {
              for (puVar5 = puVar10; puVar5 != puVar9 + -1; puVar5 = puVar5 + 1) {
                *puVar5 = puVar5[1];
              }
              param_1[0x39f] = param_1[0x39f] + -1;
              puVar9 = puVar10;
            }
          }
          else {
            puVar9 = puVar10 + 1;
          }
          puVar10 = puVar9;
        } while (puVar9 != (undefined4 *)(param_1[0x39e] + param_1[0x39f] * 4));
      }
      local_120 = (float)param_1[0x39e];
      if (local_120 != (float)((int)local_120 + param_1[0x39f] * 4)) {
        do {
          iVar4 = -1;
          iVar2 = FUN_00a7c8a0();
          if (((*(int *)(iVar2 + 0x4b0) == 0x20140) ||
              (iVar2 = FUN_00a7c8a0(), *(int *)(iVar2 + 0x4b0) == 0x20142)) ||
             ((iVar2 = FUN_00a7c8a0(), *(int *)(iVar2 + 0x4b0) == 0x20144 ||
              (iVar2 = FUN_00a7c8a0(), *(int *)(iVar2 + 0x4b0) == 0x20160)))) {
            FUN_00a7c8a0();
            iVar4 = FUN_00a8cab0();
          }
          iVar2 = FUN_00a7c8a0();
          if (3 < *(int *)(iVar2 + 0x814)) {
LAB_005f3fba:
            local_118 = 1;
            break;
          }
          pfStack_11c = (float *)(**(code **)(*param_1 + 0x68))();
          pfVar6 = (float *)FUN_00a7c8b0();
          if (SQRT((*pfVar6 - *pfStack_11c) * (*pfVar6 - *pfStack_11c) +
                   (pfVar6[1] - pfStack_11c[1]) * (pfVar6[1] - pfStack_11c[1]) +
                   (pfVar6[2] - pfStack_11c[2]) * (pfVar6[2] - pfStack_11c[2])) < 8.0) {
            if (((iVar4 != 0xb0000) && (iVar4 != 0xb0001)) &&
               (((iVar4 != 0xb0002 &&
                 (((iVar4 != 0xb0004 && (iVar4 != 0xb0003)) && (iVar4 != 0xb0006)))) &&
                ((iVar4 < 0xa0000 || (0xa001f < iVar4)))))) {
              if (iVar4 != 0xb0005) goto LAB_005f3f96;
              uVar12 = 0;
              FUN_00a7c8a0(0);
              pfStack_11c = (float *)FUN_00a959f0(uVar12);
              if ((float)(int)pfStack_11c < 0.6666667) {
                FUN_00a7c8a0();
                iVar2 = FUN_00a8cac0();
                if (iVar2 < 2) goto LAB_005f3f96;
              }
            }
            goto LAB_005f3fba;
          }
LAB_005f3f96:
          local_120 = (float)((int)local_120 + 4);
        } while (local_120 != (float)(param_1[0x39e] + param_1[0x39f] * 4));
      }
      iVar2 = param_1[0x39f];
      if (param_1[0x3ec] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e6));
      }
      piVar7 = (int *)FUN_00c13920();
      local_118 = (**(code **)(*piVar7 + 0x28))(0xffffffff);
      pfVar6 = (float *)(**(code **)(*param_1 + 0x68))();
      pfVar8 = (float *)FUN_00a7c8b0();
      local_120 = SQRT((pfVar8[2] - pfVar6[2]) * (pfVar8[2] - pfVar6[2]) +
                       (pfVar8[1] - pfVar6[1]) * (pfVar8[1] - pfVar6[1]) +
                       (*pfVar8 - *pfVar6) * (*pfVar8 - *pfVar6));
      if (((char)param_1[0x371] == '\0') &&
         ((pfStack_11c != (float *)0x0 || (iVar4 = FUN_00c1bd80(), iVar4 != 0)))) {
        *(undefined1 *)(param_1 + 0x371) = 1;
        FUN_005f1470(8,0x3ca3d70a);
        FUN_00a96070(0,0x8000000,1);
        *(undefined1 *)((int)param_1 + 0xdc5) = 1;
      }
      if ((*(char *)((int)param_1 + 0xdc5) != '\0') && (iVar4 = FUN_00a94ce0(0), iVar4 != 0)) {
        FUN_005f1470(9,0x3ca3d70a);
        *(undefined1 *)((int)param_1 + 0xdc5) = 0;
      }
      iVar4 = FUN_00c1bd80();
      if ((((iVar4 == 0) && (iVar2 == 0)) && (pfStack_11c == (float *)0x0)) &&
         ((DAT_01bea060 & 0x2000000) == 0)) {
        FUN_00a5f590(param_1[0x13c],param_1[0x2e7],(int)*(short *)((int)param_1 + 0xab2),
                     (int)(short)param_1[0x2ad]);
        puVar10 = (undefined4 *)param_1[0x3c2];
        if (puVar10 != puVar10 + param_1[0x3c3]) {
          do {
            iVar2 = FUN_0093db40(*puVar10);
            if (iVar2 != 0) goto LAB_005f4176;
            puVar10 = puVar10 + 1;
          } while (puVar10 != (undefined4 *)(param_1[0x3c2] + param_1[0x3c3] * 4));
        }
        if ((DAT_018b9174 == 0x128) && ((char)param_1[0x372] == '\0')) {
          FUN_0093b4a0("P128_HELP_ON",0,0);
          *(undefined1 *)(param_1 + 0x372) = 1;
        }
LAB_005f4176:
        piVar7 = (int *)FUN_00a7c8a0();
        if (piVar7 != (int *)0x0) {
          puVar11 = &DAT_01be9db8;
          (**(code **)(*piVar7 + 4))(&DAT_01be9db8);
          iVar2 = FUN_00dd6d80(puVar11);
          if (((iVar2 != 0) && (local_120 <= 2.0)) &&
             (iVar2 = (**(code **)(*piVar7 + 0x380))(), iVar2 != 0)) {
            uVar12 = (**(code **)(*param_1 + 0x68))();
            iVar2 = FUN_00a55950(uVar12);
            if (iVar2 != 0) {
              DAT_01dc1300 = 1;
              DAT_01dc12fc = 4;
              if ((piVar7[0x33f] & piVar7[0x38e]) != 0) {
                FUN_00a8caf0(5,0,0,0);
                *(undefined1 *)((int)param_1 + 0xdc6) = 1;
                DAT_01bea070 = DAT_01bea070 | 0x180000;
                DAT_01bea090 = DAT_01bea090 | 0x8000;
              }
            }
          }
        }
      }
    }
  }
  return;
}

// 005FD990  lib::StaticArray<cQteArea,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<cQteArea,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cQteArea>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005FD9C0  FUN_005fd9c0  size=2385  [between]
void __fastcall FUN_005fd9c0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  float *pfVar10;
  uint uVar11;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [7];
  
  FUN_005fcb40();
  iVar7 = FUN_00a8eea0();
  if (iVar7 < 1) {
    if (param_1[0x3af] != 0) {
      iVar7 = FUN_00a8cab0();
      if ((iVar7 == 0x1c) && (*(char *)((int)param_1 + 0xdb5) == '\0')) {
        return;
      }
      *(undefined1 *)((int)param_1 + 0xdbe) = 0;
      FUN_00a8caf0(0x1c,0,0,0);
      return;
    }
    if (param_1[0x4f8] == 0) {
      iVar7 = FUN_00a8cab0();
      if ((iVar7 == 4) && (*(char *)((int)param_1 + 0xdb5) == '\0')) {
        return;
      }
      *(undefined1 *)((int)param_1 + 0xdbe) = 0;
      FUN_00a8caf0(4,0,0,0);
      return;
    }
    iVar7 = FUN_00a8cab0();
    if ((iVar7 == 0x1d) && (*(char *)((int)param_1 + 0xdb5) == '\0')) {
      return;
    }
    *(undefined1 *)((int)param_1 + 0xdbe) = 0;
    FUN_00a8caf0(0x1d,0,0,0);
    return;
  }
  if (((DAT_01bea090 & 0x8000000) != 0) && ((param_1[0x449] == 2 || (param_1[0x128] == 2)))) {
    iVar7 = FUN_00a8cab0();
    if ((iVar7 == 0x1e) && (*(char *)((int)param_1 + 0xdb5) == '\0')) {
      return;
    }
    *(undefined1 *)((int)param_1 + 0xdbe) = 0;
    FUN_00a8caf0(0x1e,0,0,0);
    return;
  }
  iVar7 = FUN_00a8cab0();
  if (*(char *)((int)param_1 + 0xdb3) == '\0') {
    if (iVar7 == 9) {
      iVar7 = FUN_00a8cac0();
      if (iVar7 == 2) {
LAB_005fdb3b:
        local_20[0] = 0.0;
        local_20[1] = -1.0;
        local_20[2] = 0.0;
        local_30 = (float)param_1[0x10];
        local_2c = (float)param_1[0x11];
        local_28 = (float)param_1[0x12];
        local_24 = (float)param_1[0x13];
        iVar7 = hkpCdPointCollector::hkpCdPointCollector(local_20,&local_30,1,0,0x3c23d70a);
        if (iVar7 != 0) {
          param_1[0x14] = (int)local_30;
          param_1[0x15] = (int)local_2c;
          param_1[0x16] = (int)local_28;
          param_1[0x17] = (int)local_24;
        }
      }
    }
    else if ((((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 2)) || (iVar7 == 3)) goto LAB_005fdb3b;
  }
  if ((float)param_1[0x4ae] <= 90000.0) {
    *(undefined1 *)((int)param_1 + 0xdb1) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0xdb1) = 1;
  }
  piVar8 = (int *)FUN_00a6e640();
  iVar7 = *piVar8;
  uVar9 = (**(code **)(*param_1 + 0x68))(0x96,2);
  cVar5 = (**(code **)(iVar7 + 0x2c))(uVar9);
  if ((char)param_1[0x36f] != '\0') {
    if (cVar5 != '\0') goto LAB_005fddcb;
    if (param_1[0x1d9] != 0) {
      FUN_008e5720(8);
    }
    *(undefined1 *)(param_1 + 0x36f) = 0;
    param_1[0x4e5] = 0;
    if (((unaff_ESI != 0x13) && (unaff_ESI != 0x14)) && (unaff_ESI != 0x17)) goto LAB_005fddcb;
    uVar9 = 0x1a;
    goto LAB_005fdecb;
  }
  if (cVar5 != '\0') {
    *(undefined1 *)((int)param_1 + 0xdc3) = 0;
    *(undefined1 *)(param_1 + 0x36f) = 1;
    if (((DAT_018b9174 == 0x230) && (iVar7 = FUN_00c78580(1,&fStack_4c), iVar7 != 0)) &&
       (iVar7 = FUN_00c78580(2,&local_2c), iVar7 != 0)) {
      pfVar10 = (float *)(**(code **)(*param_1 + 0x68))();
      fVar1 = *pfVar10 - fStack_4c;
      fVar2 = pfVar10[2] - fStack_44;
      pfVar10 = (float *)(**(code **)(*param_1 + 0x68))();
      if (SQRT((pfVar10[2] - local_24) * (pfVar10[2] - local_24) +
               (*pfVar10 - local_2c) * (*pfVar10 - local_2c)) <= SQRT(fVar1 * fVar1 + fVar2 * fVar2)
         ) {
        fStack_34 = local_24;
        local_30 = local_20[0];
        fVar1 = fStack_44;
        fVar2 = fStack_4c;
        fStack_4c = local_2c;
        fStack_38 = local_28;
        fVar3 = fStack_48;
        fVar4 = fStack_40;
      }
      else {
        fStack_34 = fStack_44;
        local_30 = fStack_40;
        fVar1 = local_24;
        fVar2 = local_2c;
        fStack_38 = fStack_48;
        fVar3 = local_28;
        fVar4 = local_20[0];
      }
      pfVar10 = (float *)(param_1 + 0x3a8);
      *pfVar10 = 0.0;
      param_1[0x3a9] = 0;
      param_1[0x3aa] = 0;
      param_1[0x3ab] = 0x3f800000;
      *pfVar10 = fVar2 - fStack_4c;
      param_1[0x3a9] = (int)(fVar3 - fStack_38);
      param_1[0x3aa] = (int)(fVar1 - fStack_34);
      param_1[0x3ab] = (int)(fVar4 - local_30);
      fStack_3c = fStack_4c;
      FUN_005f4f60(&fStack_3c,pfVar10);
      param_1[0x4f0] = (int)fVar2;
      param_1[0x4f1] = (int)fVar3;
      param_1[0x4f2] = (int)fVar1;
      param_1[0x4f3] = (int)fVar4;
      param_1[0x4e5] = 1;
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e5610(8);
    }
  }
LAB_005fddcb:
  piVar8 = (int *)FUN_00a6e640();
  iVar7 = *piVar8;
  uVar9 = (**(code **)(*param_1 + 0x68))(200,2);
  uVar6 = (**(code **)(iVar7 + 0x2c))(uVar9);
  *(undefined1 *)((int)param_1 + 0xdba) = uVar6;
  piVar8 = (int *)FUN_00a6e640();
  iVar7 = *piVar8;
  uVar9 = (**(code **)(*param_1 + 0x68))(100,2);
  uVar6 = (**(code **)(iVar7 + 0x2c))(uVar9);
  *(undefined1 *)((int)param_1 + 0xdb9) = uVar6;
  if (((char)param_1[0x36e] != '\0') || (unaff_ESI == 0x1a)) goto LAB_005fded2;
  if (unaff_EDI == 0) {
    *(undefined1 *)((int)param_1 + 0xdc3) = 0;
    *(undefined1 *)(param_1 + 0x36c) = 1;
    if (unaff_EBX != 0) {
      if (param_1[0x36a] != 6) {
        FUN_005f4410(0xb,0,0,0);
        *(undefined1 *)((int)param_1 + 0xdb1) = 0;
        return;
      }
      FUN_005f4410(0xd,0,0,0);
      *(undefined1 *)((int)param_1 + 0xdb1) = 0;
      return;
    }
    if (*(char *)((int)param_1 + 0xdb3) != '\0') {
      return;
    }
    FUN_005f4410(7,0,0,0);
    return;
  }
  if (unaff_EBX != 0) {
    *(undefined1 *)((int)param_1 + 0xdc3) = 0;
    if (param_1[0x36a] == 5) {
      FUN_005f4410(10,0,0,0);
      *(undefined1 *)((int)param_1 + 0xdb1) = 0;
      *(undefined1 *)(param_1 + 0x36c) = 0;
      return;
    }
    if (param_1[0x36a] != 6) {
      FUN_005f4410(6,0,0,0);
      *(undefined1 *)((int)param_1 + 0xdb1) = 0;
      *(undefined1 *)(param_1 + 0x36c) = 0;
      return;
    }
    FUN_005f4410(0xd,0,0,0);
    *(undefined1 *)((int)param_1 + 0xdb1) = 0;
    *(undefined1 *)(param_1 + 0x36c) = 0;
    return;
  }
  if (((*(char *)((int)param_1 + 0xdaf) != '\0') || (*(char *)((int)param_1 + 0xdad) != '\0')) ||
     (*(char *)((int)param_1 + 0xdae) != '\0')) goto LAB_005fded2;
  if (*(char *)((int)param_1 + 0xdb2) != '\0') {
    if (param_1[0x288] == 0) {
      uVar11 = 0x10;
    }
    else {
      uVar11 = *(uint *)(param_1[0x288] + 0xe18);
    }
    if ((((param_1[0x3ce] & uVar11) != 0) && (*(char *)((int)param_1 + 0xdba) == '\0')) &&
       ((char)param_1[0x36f] == '\0')) {
      *(undefined1 *)((int)param_1 + 0xdc3) = 0;
      FUN_005f4410(8,0,0,0);
      *(undefined1 *)(param_1 + 0x36c) = 0;
      return;
    }
  }
  if (*(char *)((int)param_1 + 0xdb3) != '\0') goto LAB_005fe303;
  *(undefined1 *)((int)param_1 + 0xdc3) = 1;
  if (param_1[0x288] == 0) {
    uVar11 = 0x40;
  }
  else {
    uVar11 = *(uint *)(param_1[0x288] + 0xe20);
  }
  if (((param_1[0x3ce] & uVar11) != 0) && (*(char *)((int)param_1 + 0xdba) == '\0')) {
    uVar9 = 0x15;
    goto LAB_005fdecb;
  }
  if (*(char *)((int)param_1 + 0xdb1) == '\0') {
    cVar5 = FUN_005f4570();
    if ((cVar5 != '\0') && (*(undefined1 *)((int)param_1 + 0xdc3) = 0, unaff_ESI != 0x14)) {
      uVar9 = 0x13;
LAB_005fe27a:
      FUN_005f4410(uVar9,0,0,0);
    }
  }
  else {
    if ((*(char *)((int)param_1 + 0xdbe) != '\0') ||
       ((*(char *)((int)param_1 + 0xdba) != '\0' && (iVar7 = FUN_00a8cab0(), iVar7 == 0x17))))
    goto LAB_005fded2;
    iVar7 = FUN_00416d50(0x21);
    if (iVar7 == 0) {
      cVar5 = FUN_005f4570();
      if (cVar5 == '\0') {
        if ((unaff_ESI != 0x14) && (unaff_ESI != 0x13)) {
          if ((char)param_1[0x36b] == '\0') {
            if ((unaff_ESI != 9) && ((float)param_1[0x3ac] <= 0.0)) {
              fVar1 = (float)param_1[0x4ae];
              if ((NAN(fVar1) || 640000.0 < fVar1 == (fVar1 == 640000.0)) ||
                 (iVar7 = FUN_00416d50(7), iVar7 != 0)) {
                uVar9 = 1;
              }
              else {
                uVar9 = 2;
              }
              FUN_005f4410(uVar9,0,0,0);
            }
            if ((unaff_ESI == 3) && (0.0 < (float)param_1[0x3ac])) {
              if (*(char *)((int)param_1 + 0xdba) == '\0') {
                if (*(char *)((int)param_1 + 0xdb9) != '\0') {
                  FUN_005f4410(0x18,0,0,0);
                  *(undefined1 *)((int)param_1 + 0xdc3) = 0;
                }
              }
              else {
                FUN_005f4410(0x17,0,0,0);
                *(undefined1 *)((int)param_1 + 0xdc3) = 0;
              }
            }
          }
          else {
            iVar7 = FUN_00416d50(7);
            if (iVar7 == 0) {
              if (param_1[0x288] == 0) {
                uVar11 = 0x80;
              }
              else {
                uVar11 = *(uint *)(param_1[0x288] + 0xe24);
              }
              if ((param_1[0x3ce] & uVar11) == 0) {
                if (*(char *)((int)param_1 + 0xdba) == '\0') {
                  if (*(char *)((int)param_1 + 0xdb9) == '\0') {
                    if (((float)param_1[0x3ac] <= 0.0) && (unaff_ESI != 9)) {
                      FUN_005f4410(3,0,0,0);
                      *(undefined1 *)((int)param_1 + 0xdc3) = 0;
                    }
                    goto LAB_005fe27f;
                  }
                  uVar9 = 0x18;
                }
                else {
                  uVar9 = 0x17;
                }
LAB_005fdecb:
                FUN_005f4410(uVar9,0,0,0);
                goto LAB_005fded2;
              }
              FUN_005f4410(0x16,0,0,0);
              *(undefined1 *)((int)param_1 + 0xdc3) = 0;
            }
            else if ((float)param_1[0x3ac] <= 0.0) {
              uVar9 = 1;
              goto LAB_005fe27a;
            }
          }
        }
      }
      else {
        if (unaff_ESI != 0x13) {
          FUN_005f4410(0x14,0,0,0);
        }
        *(undefined1 *)((int)param_1 + 0xdc3) = 0;
      }
    }
  }
LAB_005fe27f:
  if (*(char *)((int)param_1 + 0xdc3) != '\0') {
    if ((*(char *)((int)param_1 + 0xdba) != '\0') || ((char)param_1[0x36f] != '\0')) {
LAB_005fded2:
      *(undefined1 *)((int)param_1 + 0xdc3) = 0;
      return;
    }
    if (unaff_ESI != 0x13) {
      if (param_1[0x288] == 0) {
        uVar11 = 0x400;
      }
      else {
        uVar11 = *(uint *)(param_1[0x288] + 0xe3c);
      }
      if ((param_1[0x3ce] & uVar11) != 0) {
        FUN_005f4410(0x11,0,0,0);
      }
      if (param_1[0x288] == 0) {
        uVar11 = 0x80;
      }
      else {
        uVar11 = *(uint *)(param_1[0x288] + 0xe24);
      }
      if ((param_1[0x3ce] & uVar11) != 0) {
        FUN_005f4410(0x12,0,0,0);
      }
    }
  }
LAB_005fe303:
  *(undefined1 *)(param_1 + 0x36c) = 0;
  return;
}

// 005FE320  lib::StaticArray<cQteArea,32>::StaticArray<cQteArea,32>  size=596  [class]
void __fastcall lib::StaticArray<cQteArea,32>::StaticArray<cQteArea,32>(int *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iStack_c14;
  undefined **ppuStack_c10;
  undefined1 *puStack_c0c;
  int iStack_c08;
  undefined4 uStack_c04;
  undefined1 auStack_c00 [3072];
  
  FUN_00c15320();
  bVar1 = *(byte *)(param_1 + 0x130);
  param_1[0x4b5] = 0;
  iVar5 = param_1[0x21c];
  iVar4 = (**(code **)(*param_1 + 0x1fc))();
  iVar2 = param_1[0x449];
  if (((((iVar2 != 1) && (param_1[0x128] != 1)) && (iVar2 != 2)) && (param_1[0x128] != 2)) ||
     (*(char *)((int)param_1 + 0xdad) != '\0' ||
      ((char)param_1[0x36f] != '\0' ||
      (*(char *)((int)param_1 + 0xdba) != '\0' ||
      (*(char *)((int)param_1 + 0xdb9) != '\0' ||
      ((char)param_1[0x36e] != '\0' ||
      (*(char *)((int)param_1 + 0xdb3) != '\0' ||
      (param_1[0x139] != 0 || (iVar4 != 0 || (iVar5 < 1 || (bVar1 & 1) == 0)))))))))) {
    param_1[0x4b3] = 0;
    if (((iVar2 == 1) || (param_1[0x128] == 1)) || ((iVar2 == 2 || (param_1[0x128] == 2)))) {
      FUN_00c59380();
    }
    param_1[0x4b4] = 1;
    return;
  }
  bVar3 = false;
  puStack_c0c = auStack_c00;
  iStack_c08 = 0;
  uStack_c04 = 0x20;
  ppuStack_c10 = vftable;
  if ((((byte)DAT_01bea090 & 0x10) == 0) &&
     (FUN_00c66140(param_1 + 0x10,param_1[0x25],0x3f800000,0x40000000,&ppuStack_c10),
     puVar6 = puStack_c0c, puStack_c0c != puStack_c0c + iStack_c08 * 0x60)) {
    do {
      iVar5 = FUN_005f9e80(puVar6,&iStack_c14);
      if (iVar5 != 0) {
        DAT_018b56b4 = 1;
        FUN_005f5330(puVar6);
        goto LAB_005fe4d8;
      }
      if (iStack_c14 != 0) {
        bVar3 = true;
      }
      puVar6 = puVar6 + 0x60;
    } while (puVar6 != puStack_c0c + iStack_c08 * 0x60);
    if (bVar3) {
LAB_005fe4d8:
      if (param_1[0x4b3] == 0) {
        param_1[0x4b5] = 1;
      }
      param_1[0x4b3] = 1;
      goto LAB_005fe51b;
    }
  }
  param_1[0x4b3] = 0;
LAB_005fe51b:
  if ((((iStack_c08 != 0) &&
       (FUN_00c594f0(&ppuStack_c10), puVar6 = puStack_c0c, (DAT_01bea060 & 0x2000000) == 0)) &&
      (iVar5 = FUN_00c15530(), iVar5 != 0)) && (*(int *)(puVar6 + 0x5c) == 7)) {
    FUN_00cbc8f0(2,1);
  }
  FUN_00c59380();
  param_1[0x4b4] = 1;
  return;
}

// 0063EF70  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3  size=292  [class]
bool __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar2 = FUN_00a9b930();
  iVar5 = 0;
  if (((iVar2 == 0) || (param_1[300] == 0x28170)) || ((param_1[0x12a] & 0x400000U) != 0)) {
    return false;
  }
  bVar6 = false;
  if (((*(int *)(iVar2 + 0x2664) == 0) &&
      (fVar1 = (float)param_1[0x2a5], !NAN(fVar1) && 1.5 < fVar1 != (fVar1 == 1.5))) &&
     (bVar6 = param_1[0x670] != 0, param_1[0x5fa] != 0)) {
    bVar6 = true;
  }
  if ((param_1[0x3aa] & 0x8000U) == 0) {
    if (bVar6 == false) {
      return false;
    }
  }
  else {
    bVar6 = true;
  }
  local_4c = local_40;
  local_48 = 0;
  local_44 = 0x10;
  local_50 = vftable;
  iVar2 = FUN_00c27c10(&local_50);
  if (iVar2 < 1) {
    return bVar6;
  }
  do {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar7 = &DAT_01b35540;
      (**(code **)(*piVar3 + 4))(&DAT_01b35540);
      iVar4 = FUN_00dd6d80(puVar7);
      if (((iVar4 != 0) && (piVar3 != param_1)) && (piVar3[0x186] == 0x1000c)) {
        return false;
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar2 <= iVar5) {
      return bVar6;
    }
  } while( true );
}

// 0063F0A0  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2  size=276  [class]
undefined4 __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  if (((*(int *)(param_1 + 0x4b0) == 0x28170) || ((*(uint *)(param_1 + 0x4a8) & 0x400000) != 0)) ||
     (0.0 < *(float *)(param_1 + 0x1a48))) {
    return 0;
  }
  iVar4 = 0;
  if ((((*(int *)(param_1 + 0x1498) != 0) && (*(float *)(param_1 + 0xa8c) <= 20.25)) &&
      ((6.25 <= *(float *)(param_1 + 0xa8c) &&
       ((*(float *)(param_1 + 0xaa0) <= 0.7853982 &&
        (*(int *)(param_1 + 0x1034) < *(int *)(param_1 + 0x1030))))))) &&
     (*(int *)(param_1 + 0x1a3c) == 0)) {
    local_4c = local_40;
    uVar3 = 1;
    local_48 = 0;
    local_44 = 0x10;
    local_50 = vftable;
    iVar1 = FUN_00c27c10(&local_50);
    if (0 < iVar1) {
      while( true ) {
        uVar3 = FUN_00a7c8a0();
        iVar2 = FUN_0061cfe0(uVar3);
        if (((iVar2 != 0) && (iVar2 != param_1)) && (*(int *)(iVar2 + 0x618) == 0x10008)) break;
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) {
          return 1;
        }
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

// 0065A0F0  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>  size=385  [class]
bool __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>(int *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar3 = FUN_00a90070(5);
  if (iVar3 == 0) {
    return false;
  }
  iVar3 = 0;
  bVar1 = (float)param_1[0x670] <= 0.0 && (param_1[0x631] != 0 && param_1[0x630] != 0);
  if ((param_1[0x2fa] == 0) &&
     ((float)param_1[0x670] <= 0.0 && (param_1[0x631] != 0 && param_1[0x630] != 0))) {
    local_4c = local_40;
    local_48 = 0;
    local_44 = 0x10;
    local_50 = vftable;
    iVar4 = FUN_00c27cb0(param_1[0x13c],0x42c80000,&local_50,0x28030);
    if (iVar4 < 1) {
      return bVar1;
    }
    do {
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        puVar7 = &DAT_01b35570;
        (**(code **)(*piVar5 + 4))(&DAT_01b35570);
        iVar6 = FUN_00dd6d80(puVar7);
        if (((iVar6 != 0) && (piVar5 != param_1)) &&
           (((piVar5[0x186] & 0xffff0000U) == 0x50000 || ((piVar5[0x186] & 0xffff0000U) == 0xa0000))
           )) {
          sVar2 = FUN_00dde2d0(1,10);
          param_1[0x670] = (int)((float)(int)sVar2 * 0.1 * 60.0 + (float)param_1[0x670]);
          if ((param_1[0x36c] != 2) && (param_1[0x36c] != -1)) {
            return false;
          }
          param_1[0x36c] = 1;
          return false;
        }
      }
      iVar3 = iVar3 + 1;
      if (iVar4 <= iVar3) {
        return bVar1;
      }
    } while( true );
  }
  if ((param_1[0x36c] == 2) || (param_1[0x36c] == -1)) {
    param_1[0x36c] = 1;
  }
  return false;
}

// 006984F0  lib::StaticArray<Em8060Team::_Em8060TeamInfo,3>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Em8060Team::_Em8060TeamInfo,3>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Em8060Team::_Em8060TeamInfo>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0069BC10  lib::StaticArray<Em8060Team::_Em8060TeamInfo,3>::StaticArray<Em8060Team::_Em8060TeamInfo,3>  size=97  [class]
undefined4 __thiscall
lib::StaticArray<Em8060Team::_Em8060TeamInfo,3>::StaticArray<Em8060Team::_Em8060TeamInfo,3>
          (int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 3;
    *puVar1 = vftable;
  }
  *(undefined4 **)(param_1 + 0x78) = puVar1;
  iVar2 = FUN_00dd7240();
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return 1;
}

// 00730C00  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9  size=372  [class]
undefined4 __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9(int param_1)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar7 = *(int *)(param_1 + 0x4b0);
  if (((iVar7 != 0x2c150) && (iVar7 != 0x2c152)) && (iVar7 != 0x2c170)) {
    iVar7 = 0;
    sVar2 = FUN_00dde2d0(0,100);
    uVar3 = (int)sVar2 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    if ((((uVar3 == 0) && (*(int *)(param_1 + 0x1498) != 0)) &&
        ((fVar1 = *(float *)(param_1 + 0x108c), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0) &&
         ((fVar1 = *(float *)(param_1 + 0xa8c), NAN(fVar1) || 30.25 < fVar1 == (fVar1 == 30.25) &&
          (2.25 < *(float *)(param_1 + 0xa8c))))))) &&
       (fVar1 = *(float *)(param_1 + 0xaa0), NAN(fVar1) || 0.5235988 < fVar1 == (fVar1 == 0.5235988)
       )) {
      iVar4 = FUN_00c27750(*(int *)(param_1 + 0xa84) + 0x40,0x40e00000,0xffffffff);
      if ((1 < iVar4) && ((*(uint *)(param_1 + 0xeac) & 0x8000) == 0)) {
        local_4c = local_40;
        uVar6 = 1;
        local_48 = 0;
        local_44 = 0x10;
        local_50 = vftable;
        iVar4 = FUN_00c27c10(&local_50);
        if (0 < iVar4) {
          while( true ) {
            uVar6 = FUN_00a7c8a0();
            iVar5 = FUN_0070ef00(uVar6);
            if (((iVar5 != 0) && (iVar5 != param_1)) &&
               ((*(int *)(iVar5 + 0x618) == 0xa0021 || (*(int *)(iVar5 + 0x618) == 0xa0022))))
            break;
            iVar7 = iVar7 + 1;
            if (iVar4 <= iVar7) {
              return 1;
            }
          }
          uVar6 = 0;
        }
        return uVar6;
      }
    }
    return 0;
  }
  return 0;
}

// 00730D80  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10  size=292  [class]
bool __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar2 = FUN_00a9b930();
  iVar5 = 0;
  if (((iVar2 == 0) || (param_1[300] == 0x2c170)) || ((param_1[0x12a] & 0x400000U) != 0)) {
    return false;
  }
  bVar6 = false;
  if (((*(int *)(iVar2 + 0x2664) == 0) &&
      (fVar1 = (float)param_1[0x2a5], !NAN(fVar1) && 1.5 < fVar1 != (fVar1 == 1.5))) &&
     (bVar6 = param_1[0x670] != 0, param_1[0x5fa] != 0)) {
    bVar6 = true;
  }
  if ((param_1[0x3aa] & 0x8000U) == 0) {
    if (bVar6 == false) {
      return false;
    }
  }
  else {
    bVar6 = true;
  }
  local_4c = local_40;
  local_48 = 0;
  local_44 = 0x10;
  local_50 = vftable;
  iVar2 = FUN_00c27c10(&local_50);
  if (iVar2 < 1) {
    return bVar6;
  }
  do {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar7 = &DAT_01b357a0;
      (**(code **)(*piVar3 + 4))(&DAT_01b357a0);
      iVar4 = FUN_00dd6d80(puVar7);
      if (((iVar4 != 0) && (piVar3 != param_1)) && (piVar3[0x186] == 0x1000c)) {
        return false;
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar2 <= iVar5) {
      return bVar6;
    }
  } while( true );
}

// 00730EB0  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11  size=276  [class]
undefined4 __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  if (((*(int *)(param_1 + 0x4b0) == 0x2c170) || ((*(uint *)(param_1 + 0x4a8) & 0x400000) != 0)) ||
     (0.0 < *(float *)(param_1 + 0x1a48))) {
    return 0;
  }
  iVar4 = 0;
  if ((((*(int *)(param_1 + 0x1498) != 0) && (*(float *)(param_1 + 0xa8c) <= 20.25)) &&
      ((6.25 <= *(float *)(param_1 + 0xa8c) &&
       ((*(float *)(param_1 + 0xaa0) <= 0.7853982 &&
        (*(int *)(param_1 + 0x1034) < *(int *)(param_1 + 0x1030))))))) &&
     (*(int *)(param_1 + 0x1a3c) == 0)) {
    local_4c = local_40;
    uVar3 = 1;
    local_48 = 0;
    local_44 = 0x10;
    local_50 = vftable;
    iVar1 = FUN_00c27c10(&local_50);
    if (0 < iVar1) {
      while( true ) {
        uVar3 = FUN_00a7c8a0();
        iVar2 = FUN_0070ef00(uVar3);
        if (((iVar2 != 0) && (iVar2 != param_1)) && (*(int *)(iVar2 + 0x618) == 0x10008)) break;
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) {
          return 1;
        }
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

// 0074EC30  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_13  size=409  [class]
undefined1 __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_13(int *param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  if ((param_1[0x3a0] != 0) && (param_1[0x2fa] == 0)) {
    return 1;
  }
  iVar2 = FUN_00a90070(5);
  if (iVar2 != 0) {
    if ((param_1[0x2fa] == 0) &&
       ((float)param_1[0x670] <= 0.0 && (param_1[0x631] != 0 && param_1[0x630] != 0))) {
      local_4c = local_40;
      local_48 = 0;
      local_44 = 0x10;
      local_50 = vftable;
      iVar2 = FUN_00c27cb0(param_1[0x13c],0x42c80000,&local_50,0x2c030);
      if (iVar2 < 1) {
        return 1;
      }
      iVar5 = 0;
      do {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          puVar6 = &DAT_01b357d0;
          (**(code **)(*piVar3 + 4))(&DAT_01b357d0);
          iVar4 = FUN_00dd6d80(puVar6);
          if (((iVar4 != 0) && (piVar3 != param_1)) &&
             (((piVar3[0x186] & 0xffff0000U) == 0x50000 ||
              ((piVar3[0x186] & 0xffff0000U) == 0xa0000)))) {
            sVar1 = FUN_00dde2d0(1,10);
            param_1[0x670] = (int)((float)(int)sVar1 * 0.1 * 60.0 + (float)param_1[0x670]);
            if ((param_1[0x36c] != 2) && (param_1[0x36c] != -1)) {
              return 0;
            }
            param_1[0x36c] = 1;
            return 0;
          }
        }
        iVar5 = iVar5 + 1;
        if (iVar2 <= iVar5) {
          return 1;
        }
      } while( true );
    }
    if ((param_1[0x36c] == 2) || (param_1[0x36c] == -1)) {
      param_1[0x36c] = 1;
    }
  }
  return 0;
}

// 00774EE0  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_4  size=602  [class]
void __fastcall lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_4(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  float10 fVar6;
  int local_590;
  int local_58c;
  int local_588;
  float local_584;
  int local_580;
  float local_57c;
  int local_578;
  float local_574;
  undefined **local_570;
  undefined1 *local_56c;
  int local_568;
  undefined4 local_564;
  undefined1 local_560 [1372];
  
  iVar2 = FUN_00a8cac0();
  iVar4 = 0;
  if (iVar2 == 0) {
    FUN_00aa4080(0x3d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 1;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    local_56c = local_560;
    local_568 = 0;
    local_564 = 0x100;
    local_570 = vftable;
    FUN_00a7f440(0x2c040,&local_570);
    puVar5 = local_56c;
    if (local_56c != local_56c + local_568 * 4) {
      do {
        iVar2 = FUN_00a7c8a0();
        if (*(int *)(iVar2 + 0x4ac) == 2) {
          iVar4 = iVar4 + 1;
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != local_56c + local_568 * 4);
      if (4 < iVar4) {
        FUN_00a8ca80(0,0,0);
        uVar3 = FUN_004039a0(0x3d,param_1,0);
        FUN_00a963e0(uVar3);
        (**(code **)(*param_1 + 0x20))();
        param_1[0x3c2] = 0x40400000;
        FUN_00a8caf0(0x9d,0,0,0);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3c3] = 0x40400000;
    param_1[0x3d9] = 0;
    return;
  }
  if (iVar2 == 1) {
    fVar6 = (float10)FUN_00a93060();
    fVar6 = fVar6 + (float10)(float)param_1[0x3d9];
    param_1[0x3d9] = (int)(float)fVar6;
    fVar6 = (float10)0.98 * fVar6 * fVar6;
    param_1[0x15] = (int)(float)((float10)(float)param_1[0x15] - fVar6);
    local_590 = param_1[0x14];
    local_58c = param_1[0x15];
    local_588 = param_1[0x16];
    local_584 = (float)param_1[0x17];
    local_580 = param_1[0x14];
    local_57c = (float)(-fVar6 + (float10)(float)param_1[0x15]);
    local_578 = param_1[0x16];
    local_574 = (float)param_1[0x17] + local_584;
    iVar2 = FUN_009f8b40();
    iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (0,0,0,0,&local_590,&local_580,iVar2 << 0x10 | 0x1e,&DAT_0163d54c);
    if (iVar2 != 0) {
      FUN_0075cb10();
      param_1[0x128] = 3;
      param_1[299] = 2;
      HoldEntitySlot::HoldEntitySlot_4();
      return;
    }
  }
  else if (iVar2 == 2) {
    fVar1 = (float)param_1[0x3c3];
    fVar6 = (float10)FUN_00a93060();
    param_1[0x3c3] = (int)(float)((float10)fVar1 - fVar6);
    if ((float10)fVar1 - fVar6 < (float10)0) {
      param_1[0x3c3] = (int)(float)(float10)0;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  return;
}

// 00775140  FUN_00775140  size=151  [callgraph]
void __fastcall FUN_00775140(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x63c) + 8)) {
    do {
      piVar1 = (int *)FUN_00a92f50(iVar3);
      if (*piVar1 == 1) {
        FUN_00a8caf0(0x99,0,0,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x63c) + 8));
  }
  FUN_00a9d860();
  FUN_00a8cab0();
  uVar2 = FUN_00a8cab0();
  switch(uVar2) {
  case 0x99:
    FUN_00753870();
    break;
  case 0x9a:
    FUN_0076ec40();
    break;
  case 0x9b:
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_4();
    break;
  case 0x9c:
    FUN_0076f160();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007752C0  FUN_007752c0  size=418  [callgraph]
void __fastcall FUN_007752c0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    fVar2 = (float10)FUN_00dde300(0x3f000000,0x3fc00000);
    *(undefined4 *)(param_1 + 0x13e4) = 0;
    *(undefined4 *)(param_1 + 0x13e8) = 0xffffffff;
    *(float *)(param_1 + 0x920) = (float)(fVar2 * fVar2);
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffdfffff;
    if (*(int *)(param_1 + 0x4a0) == 5) {
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x40;
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = FUN_007725e0(param_1 + 0x11b0,8);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffff7f;
      }
      if (((((*(byte *)(param_1 + 0x11f4) & 1) == 0) && (*(int *)(param_1 + 0xf70) != 0)) &&
          (*(int *)(param_1 + 0x1034) != 0)) &&
         ((*(int *)(param_1 + 0x4a0) != 5 && (*(int *)(param_1 + 0x13e4) != 8)))) {
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_00756810((undefined4 *)(param_1 + 0x620),0x3e4ccccd,0x3da3d70a);
      if (iVar1 != 0) {
        FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x620) = 0;
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
    }
  }
  return;
}

// 00775470  FUN_00775470  size=607  [callgraph]
void __fastcall FUN_00775470(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x188] = 0;
    if (param_1[0x468] != 0) {
      iVar1 = FUN_00a979d0();
      if (iVar1 == 0) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x468] + 0x40);
        iVar1 = FUN_00c68b60();
        param_1[0x477] = iVar1;
      }
    }
    param_1[0x4f9] = 0;
    param_1[0x4fa] = -1;
    param_1[0x47d] = param_1[0x47d] | 0x100;
    param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
    param_1[0x47d] = param_1[0x47d] | 0x8000000;
  }
  else {
    if (iVar1 == 1) {
      if ((param_1[0x468] != 0) && (param_1[0x188] == 0)) {
        FUN_00a979f0(&local_2c);
        local_20 = local_2c;
        local_1c = local_28;
        local_18 = local_24;
        local_14 = 0x3f800000;
        iVar1 = FUN_007725e0(&local_20,8);
        if (iVar1 == 0) {
          param_1[0x47d] = param_1[0x47d] | 0x80;
        }
        else {
          param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
          if (param_1[0x425] != 0) {
            FUN_00a8d330(param_1 + 0x10,param_1[0x468] + 0x40);
          }
          iVar1 = FUN_00aa09c0(param_1[0x468] + 0x40,0x3f800000,param_1[0x47d] & 1);
          if (iVar1 != 0) {
            iVar1 = FUN_00a8d380();
            if (iVar1 != 0) {
              FUN_00a8d2f0();
              (**(code **)(*param_1 + 0x34c))();
              param_1[0x5e1] = 1;
              return;
            }
            iVar1 = FUN_00c68b60();
            param_1[0x477] = iVar1;
          }
        }
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_00756810(param_1 + 0x188,0x3e19999a,0x3cf5c28f);
      if (iVar1 != 0) {
        if ((*(byte *)(param_1 + 0x47d) & 1) == 0) {
          uVar2 = 8;
        }
        else {
          uVar2 = 7;
        }
        FUN_00aa4120(uVar2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = 1;
        param_1[0x188] = 0;
        return;
      }
    }
  }
  return;
}

// 007756D0  FUN_007756d0  size=482  [callgraph]
void __fastcall FUN_007756d0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a8d710(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x13e4) = 0;
    *(undefined4 *)(param_1 + 0x13e8) = 0xffffffff;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffdfffff;
  }
  else {
    if (iVar3 == 1) {
      FUN_00a8d790(&local_2c);
      cVar2 = FUN_00c9db20(0);
      iVar3 = FUN_00a97e60(0x3f000000,(*(uint *)(param_1 + 0x11f4) & 1) == 0);
      if ((iVar3 != 0) && (cVar2 != '\0')) {
        FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x920) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
      local_20 = local_2c;
      local_1c = local_28;
      local_18 = local_24;
      local_14 = 0x3f800000;
      iVar3 = FUN_007725e0(&local_20,7);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffff7f;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar3 == 2) {
      fVar1 = *(float *)(param_1 + 0x920) - 0.016666668;
      *(float *)(param_1 + 0x920) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
  }
  return;
}

// 007758C0  FUN_007758c0  size=455  [callgraph]
void __fastcall FUN_007758c0(int *param_1)

{
  int iVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    local_20 = local_4c;
    local_1c = local_48;
    local_18 = local_44;
    local_14 = 0x3f800000;
    FUN_00a8d330(param_1 + 0x10,&local_20);
    param_1[0x4f9] = 0;
    param_1[0x4fa] = -1;
    param_1[0x47d] = param_1[0x47d] | 0x100;
    param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
  }
  else if (param_1[0x187] == 1) {
    iVar1 = FUN_00a979d0();
    if (iVar1 == 0) {
      FUN_00ac46b0(&local_4c,1);
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      iVar1 = FUN_007725e0(&local_40,8);
      if (iVar1 == 0) {
        param_1[0x47d] = param_1[0x47d] | 0x80;
      }
      else {
        param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
      }
    }
    else {
      FUN_00a979f0(&local_4c);
      iVar1 = FUN_00aa09c0(param_1[0x468] + 0x40,0x3f800000,param_1[0x47d] & 1);
      if (iVar1 != 0) {
        iVar1 = FUN_00a8d380();
        if (iVar1 != 0) {
          FUN_00a8d2f0();
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
    }
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    local_24 = 0x3f800000;
    iVar1 = FUN_007725e0(&local_30,8);
    if (iVar1 == 0) {
      param_1[0x47d] = param_1[0x47d] | 0x80;
    }
    else {
      param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00775A90  FUN_00775a90  size=338  [callgraph]
void __fastcall FUN_00775a90(int param_1)

{
  int iVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa9280(8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    local_30 = *(undefined4 *)(param_1 + 0xb8c);
    local_2c = *(undefined4 *)(param_1 + 0xb90);
    local_28 = *(undefined4 *)(param_1 + 0xb94);
    local_24 = 0x3f800000;
    FUN_00a8d330(param_1 + 0x40,&local_30);
    *(undefined4 *)(param_1 + 0x13e4) = 0;
    *(undefined4 *)(param_1 + 0x13e8) = 0xffffffff;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffdfffff;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  local_3c = *(undefined4 *)(param_1 + 0xb8c);
  local_38 = *(undefined4 *)(param_1 + 0xb90);
  local_34 = *(undefined4 *)(param_1 + 0xb94);
  iVar1 = FUN_00a979d0();
  if (iVar1 != 0) {
    FUN_00a979f0(&local_3c);
    iVar1 = FUN_00aa09c0(*(int *)(param_1 + 0x11a0) + 0x40,0x3f800000,
                         *(uint *)(param_1 + 0x11f4) & 1);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8d380();
      if (iVar1 != 0) {
        FUN_00a8d2f0();
      }
    }
  }
  local_20 = local_3c;
  local_1c = local_38;
  local_18 = local_34;
  local_14 = 0x3f800000;
  iVar1 = FUN_007725e0(&local_20,8);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x80;
  }
  else {
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffff7f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00775BF0  FUN_00775bf0  size=734  [callgraph]
void __fastcall FUN_00775bf0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  
  if ((param_1[0x4e7] == 0) || (iVar2 = FUN_00a81330(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c8a0();
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    fVar6 = (float10)FUN_00dde300(0x3f000000,0x3fc00000);
    param_1[0x4f9] = 0;
    param_1[0x4fa] = -1;
    param_1[0x248] = (int)(float)(fVar6 * fVar6);
    param_1[0x249] = 0x41200000;
    param_1[0x47d] = param_1[0x47d] | 0x100;
    param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0);
    if ((iVar3 != 0) && (iVar2 != 0)) {
      FUN_007515a0(iVar2 + 0x40,0x3e4ccccd,0x3db2b8c2);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_0075fad0(0x1c);
    return;
  }
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00775d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  pfVar5 = (float *)(iVar2 + 0x40);
  iVar3 = FUN_007725e0(pfVar5,8);
  if (iVar3 == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x80;
  }
  else {
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
  }
  fVar1 = ((float)param_1[0x25a] - (float)param_1[0x16]) *
          ((float)param_1[0x25a] - (float)param_1[0x16]) +
          ((float)param_1[600] - (float)param_1[0x14]) *
          ((float)param_1[600] - (float)param_1[0x14]);
  if (fVar1 < 0.0121 == (fVar1 == 0.0121)) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[0x244] + (float)param_1[0x24b];
  }
  param_1[0x24b] = (int)fVar1;
  param_1[600] = param_1[0x14];
  param_1[0x259] = param_1[0x15];
  param_1[0x25a] = param_1[0x16];
  param_1[0x25b] = param_1[0x17];
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x12] - *(float *)(iVar2 + 0x48);
  fVar1 = fVar1 * fVar1 + ((float)param_1[0x10] - *pfVar5) * ((float)param_1[0x10] - *pfVar5);
  if ((2.25 < fVar1) && (((float)param_1[0x24b] <= 10.0 || (fVar1 < 16.0 == (fVar1 == 16.0))))) {
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(pfVar5);
  fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
  if ((float10)0.5235988 < ABS(fVar6)) {
    uVar4 = 10;
    iVar2 = FUN_00752340(pfVar5);
    if (iVar2 != 8) {
      if (iVar2 == 9) {
        uVar4 = 9;
      }
      else if (iVar2 == 0xc) {
        uVar4 = 0xd;
      }
    }
    FUN_00aa4080(uVar4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  FUN_0075fad0(0x1c);
  return;
}

// 00791080  lib::StaticArray<Emc060Team::_Emc060TeamInfo,3>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Emc060Team::_Emc060TeamInfo,3>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Emc060Team::_Emc060TeamInfo>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 007945A0  lib::StaticArray<Emc060Team::_Emc060TeamInfo,3>::StaticArray<Emc060Team::_Emc060TeamInfo,3>  size=97  [class]
undefined4 __thiscall
lib::StaticArray<Emc060Team::_Emc060TeamInfo,3>::StaticArray<Emc060Team::_Emc060TeamInfo,3>
          (int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 3;
    *puVar1 = vftable;
  }
  *(undefined4 **)(param_1 + 0x78) = puVar1;
  iVar2 = FUN_00dd7240();
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return 1;
}

// 007EC270  FUN_007ec270  size=920  [callgraph]
void __fastcall FUN_007ec270(int *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x344))(8,param_1[0x3a6],param_1[0x3a5]);
    FUN_00aa4080(0xbd,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      FUN_008e0d30(&uStack_17c);
    }
    (**(code **)(*param_1 + 0x358))(0xb,param_1 + 0x41c);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_007ec331;
  case 1:
LAB_007ec331:
    iVar2 = FUN_00a8c760(0xc);
    if (iVar2 == 0) {
      pcVar3 = *(code **)(*param_1 + 0x314);
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x318);
    }
    (*pcVar3)();
    break;
  case 2:
    FUN_00aa4080(0xbe,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    if (param_1[0x1d9] != 0) {
      CharacterControl::setHeight(0x3f800000);
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      FUN_008e0d30(&uStack_180);
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_008e6d00();
    }
    param_1[0x4b5] = 0;
    param_1[0x249] = (int)((float)param_1[0x4a9] * 60.0);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00a8cb60(6);
    }
    iVar2 = FUN_00907640(param_1 + 0x46f,0,param_1 + 0x3b0);
    if (iVar2 == 0) {
      return;
    }
    if ((float)param_1[0x3b4] - (float)param_1[0x11] < 0.001 !=
        ((float)param_1[0x3b4] - (float)param_1[0x11] == 0.001)) {
      param_1[0x4b5] = param_1[0x4b5] + 1;
    }
    param_1[0x3b4] = param_1[0x11];
    fVar1 = (float)param_1[0x3b1] + 0.01 + 0.16;
    if (((float)param_1[0x11] < fVar1 == ((float)param_1[0x11] == fVar1)) &&
       ((uint)param_1[0x4b5] < 5)) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    FUN_00aa4080(0xbf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00901540(0x1f);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4b6] = 1;
    break;
  case 5:
    break;
  case 6:
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
      FUN_004cb9a0(3);
      FUN_00e020f0(param_1[0x13c]);
      FUN_00a963e0(local_160);
      iVar2 = FUN_00e5e0c0("em0120_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x509] = iVar2;
    }
    (**(code **)(param_1[0x41c] + 8))(0x3f800000,0,0);
    (**(code **)(*param_1 + 0x20))();
    pcVar3 = *(code **)(*param_1 + 0x364);
    param_1[0x1af] = 1;
    (*pcVar3)(0xffffffff);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_007ec5e2;
  case 7:
LAB_007ec5e2:
    iVar2 = thunk_FUN_00e58ed0(param_1[0x509]);
    if (iVar2 == 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  default:
    goto switchD_007ec296_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_007ec296_default:
  return;
}

// 007EC630  FUN_007ec630  size=1340  [callgraph]
void __fastcall FUN_007ec630(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xc1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x8e,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x8f,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x8d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0x8c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 10:
    FUN_00aa4080(0xc2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e1c60();
    }
    iVar3 = FUN_008ec660(param_1,0x40000000,0x3ecccccd,0x41a00000,0x41a00000,0x78,7,&local_170);
    param_1[0x1d9] = iVar3;
    (**(code **)(*param_1 + 0x314))();
    CharacterControl::setHeight(0x3f800000);
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    FUN_008e6d00();
    param_1[0x4b5] = 0;
    FUN_00901540(0x1f);
    param_1[0x4b6] = 1;
    param_1[0x249] = (int)((float)param_1[0x4a9] * 60.0);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00a8cb60(0xe);
    }
    iVar3 = FUN_00907640(param_1 + 0x46f,0,param_1 + 0x3b0);
    if (iVar3 != 0) {
      if ((float)param_1[0x3b4] - (float)param_1[0x11] < 0.001 !=
          ((float)param_1[0x3b4] - (float)param_1[0x11] == 0.001)) {
        param_1[0x4b5] = param_1[0x4b5] + 1;
      }
      param_1[0x3b4] = param_1[0x11];
      fVar1 = (float)param_1[0x3b1] + 0.01 + 0.16;
      if (((float)param_1[0x11] < fVar1 != ((float)param_1[0x11] == fVar1)) ||
         (4 < (uint)param_1[0x4b5])) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 0xc:
    (**(code **)(*param_1 + 0x344))(8,param_1[0x3a6],param_1[0x3a5]);
    FUN_00aa4080(0xc3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 0xe:
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
      FUN_004cb9a0(3);
      FUN_00e020f0(param_1[0x13c]);
      FUN_00a963e0(local_160);
      iVar3 = FUN_00e5e0c0("em0120_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x509] = iVar3;
    }
    (**(code **)(*param_1 + 0x20))();
    pcVar2 = *(code **)(*param_1 + 0x364);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1af] = 1;
    (*pcVar2)(0xffffffff);
    goto LAB_007ecb46;
  case 0xf:
LAB_007ecb46:
    iVar3 = thunk_FUN_00e58ed0(param_1[0x509]);
    if (iVar3 == 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 007ECBB0  FUN_007ecbb0  size=95  [callgraph]
void __thiscall FUN_007ecbb0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [4];
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  local_1c = param_3;
  (**(code **)(*param_1 + 0x360))(local_160);
  FUN_00a8c8b0(param_1[300],auStack_164);
  return;
}

// 007ECC10  FUN_007ecc10  size=193  [callgraph]
void __fastcall FUN_007ecc10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4120(0xde,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar2 = FUN_004039a0(9,param_1,0);
    FUN_00a963e0(uVar2);
    FUN_00dda360(0,0x3f800000,0x3f800000,7);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007ECCE0  FUN_007ecce0  size=166  [callgraph]
void __fastcall FUN_007ecce0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4120(0xdf,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    uVar2 = FUN_004039a0(9,param_1,0);
    FUN_00a963e0(uVar2);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007ECD90  FUN_007ecd90  size=333  [callgraph]
void __fastcall FUN_007ecd90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4120(0xe0,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_007ecec4;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar2 != 0) {
    uVar4 = 0xb;
    FUN_00a7c8a0(0xb);
    iVar2 = FUN_00a8c760(uVar4);
    if (iVar2 != 0) {
      FUN_00a8c9b0(0,9,0,0);
      uVar4 = FUN_004039a0(3,param_1,0);
      FUN_00a963e0(uVar4);
      FUN_00eaa5b0(0,0,0);
      FUN_00eaa5b0(1,0,0);
      (**(code **)(*param_1 + 0x20))();
      pcVar1 = *(code **)(*param_1 + 0x344);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar1)(8,0,1);
    }
  }
LAB_007ecec4:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007ECEE0  FUN_007ecee0  size=273  [callgraph]
void __fastcall FUN_007ecee0(int *param_1)

{
  int iVar1;
  undefined1 auStack_164 [352];
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xe6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_004cb9a0(3);
    FUN_00e020f0(param_1[0x13c]);
    FUN_00a963e0(auStack_164);
    FUN_00eaa5b0(0,0,0);
    FUN_00eaa5b0(1,0,0);
    (**(code **)(*param_1 + 0x20))();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 007ED000  FUN_007ed000  size=323  [callgraph]
void __fastcall FUN_007ed000(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  iVar3 = FUN_00a8cad0();
  if (iVar3 == 0) {
    sVar2 = FUN_00dde2d0(0,2);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    *(undefined4 *)(param_1 + 0x1614) = 0;
    *(float *)(param_1 + 0x1610) = (float)(int)sVar2 + 1.0;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x1618) - *(float *)(param_1 + 0x910) * 0.016666668;
    *(float *)(param_1 + 0x1618) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    *(int *)(param_1 + 0x1614) = *(int *)(param_1 + 0x1614) + -1;
    if (*(int *)(param_1 + 0x1614) < 1) {
      FUN_00a8cb70(1);
    }
    fVar5 = (float10)FUN_00dde300(0,0x3d4ccccd);
    *(float *)(param_1 + 0x1618) = (float)(fVar5 + (float10)0.1);
    FUN_007ea890();
    return;
  }
  fVar1 = *(float *)(param_1 + 0x1610) - *(float *)(param_1 + 0x910) * 0.016666668;
  *(float *)(param_1 + 0x1610) = fVar1;
  if (fVar1 <= 0.0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1618) = 0;
      sVar2 = FUN_00dde2d0(1,2);
      *(float *)(param_1 + 0x1610) = (float)(int)sVar2;
      sVar2 = FUN_00dde2d0(8,0x10);
      *(int *)(param_1 + 0x1614) = (int)sVar2;
    }
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
  }
  return;
}

// 007ED150  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_7  size=3489  [class]
void __fastcall lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_7(int param_1)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined **local_110;
  undefined1 *local_10c;
  int local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  if ((((*(int *)(param_1 + 0x4a0) != 4) && (*(int *)(param_1 + 0x4a0) != 5)) &&
      (*(float *)(param_1 + 0xa8c) < 16.0)) &&
     ((*(float *)(param_1 + 0xaa0) < 0.6981317 && (sVar2 = FUN_00dde2a0(0,1), sVar2 != 0)))) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar5 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar5;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    FUN_00a8caf0(0x20006,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
    return;
  }
  fVar1 = *(float *)(param_1 + 0x12cc) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x12cc) = fVar1;
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) < 25.0) && (uVar3 = FUN_00dde2a0(0,10), 5 < uVar3)) {
    FUN_007e39f0();
    return;
  }
  if (*(int *)(param_1 + 0x4a0) - 4U < 2) {
    if ((*(int *)(param_1 + 0x141c) == 0) || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
      if ((0.0 < *(float *)(param_1 + 0xf04)) ||
         ((*(float *)(param_1 + 0x1414) != 0.0 ||
          (*(float *)(param_1 + 0x44) <= *(float *)(param_1 + 0x1418) + 2.5)))) {
LAB_007ed619:
        uVar3 = FUN_00dde2a0(0,10);
        if (1 < uVar3) {
LAB_007ed6c9:
          if (*(float *)(param_1 + 0xa8c) <= 400.0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x11dc) = 2;
          iVar6 = FUN_007de010(2,0x40000000);
          if (iVar6 != 0) {
            return;
          }
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
          *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
          uVar5 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xe9c) = uVar5;
          *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
          uVar5 = 0x10004;
          goto LAB_007edebf;
        }
        uVar4 = FUN_00dde2a0(0,3);
        switch(uVar4) {
        case 0:
          *(undefined4 *)(param_1 + 0x11dc) = 2;
          break;
        case 1:
          *(undefined4 *)(param_1 + 0x11dc) = 4;
          break;
        case 2:
          *(undefined4 *)(param_1 + 0x11dc) = 8;
          break;
        case 3:
          *(undefined4 *)(param_1 + 0x11dc) = 0x10;
        }
        iVar6 = FUN_007de010(*(undefined4 *)(param_1 + 0x11dc),0x40000000);
        if (iVar6 != 0) goto LAB_007ed6c9;
LAB_007ed691:
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
LAB_007ed697:
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(param_1 + 0xe9c) = uVar5;
        uVar5 = 0x10004;
        goto LAB_007edebf;
      }
      local_10c = local_100;
      local_108 = 0;
      local_104 = 0x40;
      local_110 = vftable;
      FUN_00c27b40(*(int *)(param_1 + 0xa84) + 0x40,0x41f00000,&local_110,0x2c120);
      puVar8 = local_10c;
      if (local_10c != local_10c + local_108 * 4) {
        do {
          FUN_00a7c8a0();
          iVar6 = FUN_00a8cab0();
          if (((iVar6 == 0x20003) || (iVar6 == 0x20000)) && (*(float *)(param_1 + 0xa8c) < 25.0))
          goto LAB_007ed619;
          puVar8 = puVar8 + 4;
        } while (puVar8 != local_10c + local_108 * 4);
      }
      uVar3 = FUN_00dde2a0(0,10);
      if (*(int *)(param_1 + 0x11e8) != 0) {
        if ((((1 < uVar3) || (*(float *)(param_1 + 0xa8c) <= 25.0)) ||
            (400.0 <= *(float *)(param_1 + 0xa8c))) ||
           (((0.5235988 <= *(float *)(param_1 + 0xaa0) ||
             (iVar6 = FUN_007e38d0(0x40a00000,1,1), iVar6 != 0)) ||
            (iVar6 = FUN_007deb70(), iVar6 != 0)))) {
          if (((uVar3 < 8) && (*(float *)(param_1 + 0xa8c) < 900.0)) &&
             ((*(float *)(param_1 + 0xaa0) < 0.34906584 && (iVar6 = FUN_007deba0(), iVar6 == 0)))) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
            uVar5 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xe9c) = uVar5;
            *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
            uVar5 = 0x20000;
            goto LAB_007edebf;
          }
          if ((((10 < uVar3) ||
               (fVar1 = *(float *)(param_1 + 0xa8c), NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)
               )) || (900.0 <= *(float *)(param_1 + 0xa8c))) ||
             ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_007deba0(), iVar6 != 0))))
          goto LAB_007ed619;
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
          *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
          uVar7 = FUN_00a8cab0();
          uVar5 = 0x20005;
          goto LAB_007edead;
        }
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
LAB_007ed432:
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(param_1 + 0xe9c) = uVar5;
        uVar5 = 0x20001;
        goto LAB_007edebf;
      }
      if (((5 < uVar3) || (900.0 <= *(float *)(param_1 + 0xa8c))) ||
         ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_007deba0(), iVar6 != 0)))) {
        if (((10 < uVar3) ||
            (fVar1 = *(float *)(param_1 + 0xa8c), NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)))
           || ((900.0 <= *(float *)(param_1 + 0xa8c) ||
               ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_007deba0(), iVar6 != 0))))
              )) goto LAB_007ed619;
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
LAB_007ed5e5:
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(param_1 + 0xe9c) = uVar5;
        uVar5 = 0x20005;
        goto LAB_007edebf;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    }
    else {
LAB_007ed292:
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    }
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar5 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    *(undefined4 *)(param_1 + 0xe9c) = uVar5;
    uVar5 = 0x20000;
  }
  else {
    if (((*(uint *)(param_1 + 0xeb0) & 0x80000000) == 0) && (*(int *)(param_1 + 0x141c) != 0)) {
      sVar2 = FUN_00dde2a0(0,1);
      if (sVar2 == 0) {
        if (((*(float *)(param_1 + 0xa8c) < 900.0) && (*(float *)(param_1 + 0xaa0) < 0.34906584)) &&
           (iVar6 = FUN_007deba0(), iVar6 == 0)) goto LAB_007ed292;
        goto LAB_007ed80f;
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (((NAN(fVar1) || 25.0 < fVar1 == (fVar1 == 25.0)) || (900.0 <= *(float *)(param_1 + 0xa8c))
          ) || ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_007deba0(), iVar6 != 0))))
      goto LAB_007ed80f;
LAB_007ed7b1:
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
      uVar7 = FUN_00a8cab0();
      uVar5 = 0x20005;
    }
    else {
LAB_007ed80f:
      if (((*(float *)(param_1 + 0xf04) <= 0.0) && (*(float *)(param_1 + 0x1414) == 0.0)) &&
         (*(float *)(param_1 + 0x1418) + 3.0 < *(float *)(param_1 + 0x44))) {
        local_10c = local_100;
        local_108 = 0;
        local_104 = 0x40;
        local_110 = vftable;
        FUN_00c27b40(*(int *)(param_1 + 0xa84) + 0x40,0x41f00000,&local_110,0x2c120);
        puVar8 = local_10c;
        if (local_10c != local_10c + local_108 * 4) {
          do {
            FUN_00a7c8a0();
            iVar6 = FUN_00a8cab0();
            if (((iVar6 == 0x20001) || (iVar6 == 0x20005)) && (*(float *)(param_1 + 0xa8c) < 400.0))
            goto LAB_007edc9d;
            puVar8 = puVar8 + 4;
          } while (puVar8 != local_10c + local_108 * 4);
        }
        uVar3 = FUN_00dde2a0(0,10);
        if (*(int *)(param_1 + 0x11e8) == 0) {
          if ((*(uint *)(param_1 + 0xeb0) & 0x80000000) == 0) {
            if ((((uVar3 < 5) &&
                 (fVar1 = *(float *)(param_1 + 0xa8c),
                 !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) &&
                (*(float *)(param_1 + 0xa8c) < 900.0)) &&
               ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_007deba0(), iVar6 == 0))))
            goto LAB_007ed7b1;
            if (((uVar3 < 8) &&
                ((*(float *)(param_1 + 0xa8c) < 900.0 && (*(float *)(param_1 + 0xaa0) < 0.34906584))
                )) && (iVar6 = FUN_007deba0(), iVar6 == 0)) goto LAB_007ed292;
          }
          else if ((((uVar3 < 8) &&
                    (fVar1 = *(float *)(param_1 + 0xa8c),
                    !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) &&
                   (*(float *)(param_1 + 0xa8c) < 900.0)) &&
                  ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_007deba0(), iVar6 == 0))
                  )) {
LAB_007edc07:
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            goto LAB_007ed5e5;
          }
        }
        else if ((*(uint *)(param_1 + 0xeb0) & 0x80000000) == 0) {
          if ((((uVar3 < 2) && (25.0 < *(float *)(param_1 + 0xa8c))) &&
              ((*(float *)(param_1 + 0xa8c) < 400.0 &&
               ((*(float *)(param_1 + 0xaa0) < 0.5235988 &&
                (iVar6 = FUN_007e38d0(0x40a00000,1,1), iVar6 == 0)))))) &&
             (iVar6 = FUN_007deb70(), iVar6 == 0)) goto LAB_007ed96f;
          if ((((uVar3 < 4) && (*(float *)(param_1 + 0xa8c) < 900.0)) &&
              (*(float *)(param_1 + 0xaa0) < 0.34906584)) && (iVar6 = FUN_007deba0(), iVar6 == 0)) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
            uVar5 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
            *(undefined4 *)(param_1 + 0xe9c) = uVar5;
            uVar5 = 0x20000;
            goto LAB_007edebf;
          }
          if (((uVar3 < 0xb) &&
              (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)))
             && ((*(float *)(param_1 + 0xa8c) < 900.0 &&
                 ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_007deba0(), iVar6 == 0)))
                 ))) goto LAB_007ed7b1;
          if ((400.0 < *(float *)(param_1 + 0xa8c)) &&
             ((*(float *)(param_1 + 0xaa0) < 0.17453292 && (iVar6 = FUN_007deba0(), iVar6 == 0)))) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
            uVar5 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
            *(undefined4 *)(param_1 + 0xe9c) = uVar5;
            uVar5 = 0x20005;
            goto LAB_007edebf;
          }
        }
        else {
          if ((((uVar3 < 5) && (25.0 < *(float *)(param_1 + 0xa8c))) &&
              (*(float *)(param_1 + 0xa8c) < 400.0)) &&
             (((*(float *)(param_1 + 0xaa0) < 0.5235988 &&
               (iVar6 = FUN_007e38d0(0x40a00000,1,1), iVar6 == 0)) &&
              (iVar6 = FUN_007deb70(), iVar6 == 0)))) {
LAB_007ed96f:
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            goto LAB_007ed432;
          }
          if (((uVar3 < 0xb) &&
              (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)))
             && ((*(float *)(param_1 + 0xa8c) < 900.0 &&
                 ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_007deba0(), iVar6 == 0)))
                 ))) goto LAB_007edc07;
          if ((400.0 < *(float *)(param_1 + 0xa8c)) &&
             ((*(float *)(param_1 + 0xaa0) < 0.17453292 && (iVar6 = FUN_007deba0(), iVar6 == 0))))
          goto LAB_007ed7b1;
        }
      }
LAB_007edc9d:
      uVar3 = FUN_00dde2a0(0,10);
      if (uVar3 < 2) {
        if (*(int *)(param_1 + 0x11e8) == 0) {
          uVar4 = FUN_00dde2a0(0,9);
          switch(uVar4) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
            goto switchD_007edcde_caseD_0;
          case 5:
          case 6:
          case 7:
            goto switchD_007edcde_caseD_3;
          case 8:
          case 9:
            goto switchD_007edcde_caseD_4;
          }
        }
        else if ((*(uint *)(param_1 + 0xeb0) & 0x80000000) == 0) {
          uVar4 = FUN_00dde2a0(0,4);
          switch(uVar4) {
          case 0:
            goto switchD_007edcde_caseD_0;
          case 1:
          case 2:
            goto switchD_007edcde_caseD_2;
          case 3:
            goto switchD_007edcde_caseD_3;
          case 4:
            goto switchD_007edcde_caseD_4;
          }
        }
        else {
          uVar4 = FUN_00dde2a0(0,4);
          switch(uVar4) {
          case 0:
          case 1:
switchD_007edcde_caseD_0:
            *(undefined4 *)(param_1 + 0x11dc) = 2;
            break;
          case 2:
switchD_007edcde_caseD_2:
            *(undefined4 *)(param_1 + 0x11dc) = 4;
            break;
          case 3:
switchD_007edcde_caseD_3:
            *(undefined4 *)(param_1 + 0x11dc) = 8;
            break;
          case 4:
switchD_007edcde_caseD_4:
            *(undefined4 *)(param_1 + 0x11dc) = 0x10;
          }
        }
        iVar6 = FUN_007de010(*(undefined4 *)(param_1 + 0x11dc),0x40000000);
        if (iVar6 != 0) goto LAB_007edd69;
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        goto LAB_007ed697;
      }
LAB_007edd69:
      if (*(float *)(param_1 + 0xa8c) <= 400.0) {
        return;
      }
      if (0.6981317 <= *(float *)(param_1 + 0xaa0)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x11dc) = 2;
      iVar6 = FUN_007de010(2,0x41a00000);
      if (iVar6 == 0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(param_1 + 0xe9c) = uVar5;
        uVar5 = 0x20001;
        goto LAB_007edebf;
      }
      iVar6 = FUN_007de010(*(undefined4 *)(param_1 + 0x11dc),0x40000000);
      if (iVar6 == 0) goto LAB_007ed691;
      sVar2 = FUN_00dde2a0(0,1);
      if (sVar2 != 0) {
        *(undefined4 *)(param_1 + 0x11dc) = 8;
        iVar6 = FUN_007de010(8,0x40000000);
        if (iVar6 != 0) {
          return;
        }
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(param_1 + 0xe9c) = uVar5;
        uVar5 = 0x10004;
        goto LAB_007edebf;
      }
      *(undefined4 *)(param_1 + 0x11dc) = 0x10;
      iVar6 = FUN_007de010(0x10,0x40000000);
      if (iVar6 != 0) {
        return;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
      uVar7 = FUN_00a8cab0();
      uVar5 = 0x10004;
    }
LAB_007edead:
    *(undefined4 *)(param_1 + 0xe9c) = uVar7;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
  }
LAB_007edebf:
  FUN_00a8caf0(uVar5,0,0,0);
  *(undefined4 *)(param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  return;
}

// 00804570  lib::StaticArray<Entity*,2>::StaticArray<Entity*,2>_2  size=253  [class]
void __fastcall lib::StaticArray<Entity*,2>::StaticArray<Entity*,2>_2(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined **local_18;
  undefined1 *local_14;
  uint local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  if ((*(byte *)(param_1 + 0xb00) & 0x80) != 0) {
    local_14 = local_8;
    local_10 = 0;
    local_c = 2;
    local_18 = vftable;
    FUN_00c27cb0(*(undefined4 *)(param_1 + 0x4f0),0x42c80000,&local_18,0x2c190);
    uVar1 = 0;
    if (local_10 != 0) {
      do {
        if ((*(int *)(local_14 + uVar1 * 4) != 0) &&
           (*(int *)(local_14 + uVar1 * 4) != *(int *)(param_1 + 0x4f0))) {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_10);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar5 = &DAT_01b35970;
      (**(code **)(*piVar4 + 4))(&DAT_01b35970);
      iVar3 = FUN_00dd6d80(puVar5);
      if ((iVar3 != 0) && ((*(byte *)(piVar4 + 0x3a4) & 8) != 0)) {
        if (*(float *)(param_1 + 0x1458) < 0.1) {
          *(undefined4 *)(param_1 + 0x1458) = 0x3dcccccd;
          return;
        }
        *(float *)(param_1 + 0x1458) = *(float *)(param_1 + 0x1458);
      }
    }
  }
  return;
}

// 00805610  lib::StaticArray<EntityHandle,8>::StaticArray<EntityHandle,8>_3  size=163  [class]
void __fastcall lib::StaticArray<EntityHandle,8>::StaticArray<EntityHandle,8>_3(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x144c) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a7f5b0(0xe0056);
  }
  *(int *)(param_1 + 0x1450) = iVar1;
  *(int *)(param_1 + 0x144c) = iVar1;
  if (iVar1 != 0) {
    local_2c = local_20;
    local_28 = 0;
    local_24 = 8;
    local_30 = vftable;
    FUN_00a7f4a0(0xe0056,&local_30);
    if (0 < *(int *)(param_1 + 0x144c)) {
      do {
        FUN_00a7c960(local_2c + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x144c));
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x144c) = 0xffffffff;
  return;
}

// 0081E5E0  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_2  size=122  [class]
void lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_2(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined **local_410;
  undefined1 *local_40c;
  int local_408;
  undefined4 local_404;
  undefined1 local_400 [1024];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a7f440(param_1,&local_410);
  puVar1 = local_40c;
  if (local_40c != local_40c + local_408 * 4) {
    do {
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
      puVar1 = puVar1 + 4;
    } while (puVar1 != local_40c + local_408 * 4);
  }
  return;
}

// 00860750  lib::StaticArray<float,20>::vf04  size=4  [class]
undefined4 __fastcall lib::StaticArray<float,20>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00878020  lib::StaticArray<Hw::cVec4,5>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Hw::cVec4,5>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Hw::cVec4>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00878050  lib::StaticArray<Hw::cVec4,10>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Hw::cVec4,10>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Hw::cVec4>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00878080  lib::StaticArray<float,20>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<float,20>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<float>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0088D870  FUN_0088d870  size=2246  [callgraph]
void FUN_0088d870(undefined4 *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined *puVar11;
  float local_a8;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar11 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar11);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar5 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar11 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar6 = FUN_00dd6d80(puVar11);
    uVar5 = -(uint)(iVar6 != 0) & (uint)piVar2;
  }
  FUN_00f98a90();
  FUN_00f98aa0();
  local_50 = *param_2;
  local_4c = param_2[1];
  local_48 = 0.0;
  local_30 = param_2[2];
  local_2c = param_2[3];
  local_28 = 0.0;
  local_54 = local_44 + local_24;
  local_40 = (local_30 + local_50) * 0.5;
  local_3c = (local_4c + local_2c) * 0.5;
  local_34 = local_54 * 0.5;
  local_20 = (local_50 - local_40) * 100.0 + local_50;
  local_1c = (local_4c - local_3c) * 100.0 + local_4c;
  local_18 = 0;
  local_14 = (local_44 - local_34) * 100.0 + local_44;
  local_90 = local_30 - local_40;
  local_8c = local_2c - local_3c;
  local_84 = local_24 - local_34;
  local_60 = local_90 * 100.0;
  local_5c = local_8c * 100.0;
  local_70 = local_60 + local_30;
  local_6c = local_5c + local_2c;
  local_68 = 0;
  local_64 = local_84 * 100.0 + local_24;
  local_a0 = local_40 - local_20;
  local_9c = local_3c - local_1c;
  local_94 = local_34 - local_14;
  local_98 = 0;
  if ((local_a0 != 0.0) || (local_9c != 0.0)) {
    fVar1 = local_a0 * local_a0 + local_9c * local_9c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_a0,&local_a0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_a0 = 0.0;
      local_9c = 1.0;
      local_98 = 0;
    }
  }
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 0;
  FUN_00860410(&local_50,&local_20,&local_a0,&local_60,0x447a0000);
  local_a0 = local_40 - local_70;
  local_9c = local_3c - local_6c;
  local_94 = local_34 - local_64;
  local_98 = 0;
  if ((local_a0 != 0.0) || (local_9c != 0.0)) {
    fVar1 = local_9c * local_9c + local_a0 * local_a0;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_a0,&local_a0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_a0 = 0.0;
      local_9c = 1.0;
      local_98 = 0;
    }
  }
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 0;
  FUN_00860410(&local_30,&local_70,&local_a0,&local_60,0x447a0000);
  local_90 = (local_50 + local_30) * 0.5;
  local_8c = (local_4c + local_2c) * 0.5;
  local_88 = (local_48 + local_28) * 0.5;
  fVar1 = local_30 - local_90;
  fVar3 = local_2c - local_8c;
  fVar4 = local_28 - local_88;
  fVar8 = (float10)FUN_00ddbb50((fVar1 * 300.0 + fVar3 * 0.0 + fVar4 * 0.0) /
                                (SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4) * 300.0));
  if (local_2c < local_4c) {
    fVar8 = fVar8 * (float10)-1.0;
  }
  local_a8 = SQRT(local_88 * local_88 + local_8c * local_8c + local_90 * local_90);
  if (100.0 <= local_a8) {
    local_74 = 1;
    fVar9 = (fVar8 + (float10)1.5707964) * (float10)57.29578;
    fVar1 = (float)fVar9;
    if ((float10)180.0 < fVar9) {
      fVar9 = fVar9 - (float10)360.0;
    }
    fVar10 = (float10)30.0;
    if (fVar10 <= ABS(fVar9)) {
      if (ABS(fVar9 - (float10)180.0) < fVar10) {
        if (0.0 <= local_90) {
          uVar7 = 0x154;
        }
        else {
          uVar7 = 0x162;
        }
      }
      else if (ABS(fVar9 - (float10)90.0) < fVar10) {
        if (0.0 <= local_8c) {
          uVar7 = 0x160;
        }
        else {
          uVar7 = 0x15e;
        }
      }
      else if (ABS(fVar9 - (float10)-90.0) < fVar10) {
        if (0.0 <= local_8c) {
          uVar7 = 0x15f;
        }
        else {
          uVar7 = 0x15d;
        }
      }
      else if (ABS(fVar9 - (float10)45.0) < fVar10) {
        if (local_8c <= 0.0) {
          uVar7 = 0x15b;
        }
        else {
          uVar7 = 0x15a;
        }
      }
      else if (ABS(fVar9 - (float10)-135.0) < fVar10) {
        if (local_8c <= 0.0) {
          uVar7 = 0x15c;
        }
        else {
          uVar7 = 0x159;
        }
      }
      else if (ABS(fVar9 - (float10)-45.0) < fVar10) {
        if (local_90 <= 0.0) {
          uVar7 = 0x151;
        }
        else {
          uVar7 = 0x158;
        }
      }
      else {
        if (fVar10 <= ABS(fVar9 - (float10)135.0)) {
          FUN_00874a50(param_1,*param_3,(float)fVar8,param_5);
          local_74 = 0;
          FUN_00a947e0(*param_3,0,fVar1,0);
          *param_4 = 0xffffffff;
          if (*(int *)(uVar5 + 0x40c8) != 0x13) goto LAB_0088df8b;
          uVar7 = *param_3;
          goto LAB_0088df84;
        }
        uVar7 = 0x150;
      }
    }
    else if (0.0 <= local_90) {
      uVar7 = 0x14d;
    }
    else {
      uVar7 = 0x161;
    }
    if (param_5 == 0) {
      switch(uVar7) {
      case 0x157:
        uVar7 = 0x181;
        break;
      case 0x158:
        uVar7 = 0x182;
        break;
      case 0x159:
        uVar7 = 0x183;
        break;
      case 0x15a:
        uVar7 = 0x184;
        break;
      case 0x15b:
        uVar7 = 0x185;
        break;
      case 0x15c:
        uVar7 = 0x186;
        break;
      case 0x15d:
        uVar7 = 0x187;
        break;
      case 0x15e:
        uVar7 = 0x188;
        break;
      case 0x15f:
        uVar7 = 0x189;
        break;
      case 0x160:
        uVar7 = 0x18a;
        break;
      case 0x161:
        uVar7 = 0x18b;
        break;
      case 0x162:
        uVar7 = 0x18c;
      }
    }
    FUN_00874a50(param_1,*param_3,(float)fVar8,param_5);
    FUN_00aa4080(uVar7,*param_4,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    local_a8 = local_a8 * 0.0011111111;
    if (1.0 < local_a8) {
      local_a8 = 1.0;
    }
    uVar7 = *param_3;
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 != 0) {
      FUN_00e36ac0(uVar7,1.0 - local_a8);
    }
    uVar7 = *param_4;
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 != 0) {
      FUN_00e36ac0(uVar7,local_a8);
    }
    if (*(int *)(uVar5 + 0x40c8) != 0x13) goto LAB_0088df8b;
    FUN_00a96030(*param_3,0x3f000000);
    uVar7 = *param_4;
  }
  else {
    FUN_00874a50(param_1,*param_3,(float)fVar8,param_5);
    local_74 = 0;
    if (*(int *)(uVar5 + 0x40c8) != 0x13) goto LAB_0088df8b;
    uVar7 = *param_3;
  }
LAB_0088df84:
  FUN_00a96030(uVar7,0x3f000000);
LAB_0088df8b:
  FUN_00a95fb0(0);
  if (local_74 == 0) {
    uVar7 = *param_3;
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 != 0) {
      FUN_00e36ac0(uVar7,0x3f7d70a4);
    }
  }
  FUN_00e25500(0x3d088889);
  return;
}

// 0088E170  FUN_0088e170  size=3494  [callgraph]
void FUN_0088e170(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 *puVar14;
  float fVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float *pfVar19;
  float fVar20;
  float *local_334;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined4 local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float fStack_290;
  undefined1 auStack_28c [4];
  float fStack_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264 [13];
  float fStack_230;
  float afStack_22c [19];
  float fStack_1e0;
  float afStack_1dc [2];
  undefined1 auStack_1d4 [8];
  undefined1 auStack_1cc [20];
  undefined1 auStack_1b8 [4];
  float local_1b4;
  undefined1 local_170 [216];
  float fStack_98;
  float *pfStack_94;
  float *pfStack_90;
  float *pfStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float *pfStack_7c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    local_334 = (float *)&DAT_01b35b78;
    (**(code **)*param_1)();
    iVar3 = FUN_00dd6d80();
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    local_334 = (float *)&DAT_01b35b20;
    (**(code **)(*piVar1 + 4))();
    iVar3 = FUN_00dd6d80();
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  local_334 = (float *)0x88e1d6;
  local_2d8 = (float)FUN_00f98a90();
  local_2d4 = (float)(int)local_2d8 * 0.5;
  local_334 = (float *)0x88e1ed;
  local_2d8 = (float)FUN_00f98aa0();
  local_27c = (float)(int)local_2d8 * 0.5;
  local_280 = local_2d4;
  local_278 = 0.0;
  local_2a0 = *param_2;
  local_29c = param_2[1];
  local_298 = 0.0;
  local_2c0 = param_2[2];
  local_2bc = param_2[3];
  local_2b8 = 0.0;
  local_2d0 = (local_2c0 + local_2a0) * 0.5;
  local_2cc = (local_29c + local_2bc) * 0.5;
  local_2c4 = (local_2b4 + local_294) * 0.5;
  local_300 = (local_2a0 - local_2d0) * 100.0 + local_2a0;
  local_2fc = (local_29c - local_2cc) * 100.0 + local_29c;
  local_2f8 = 0.0;
  local_2f4 = (local_294 - local_2c4) * 100.0 + local_294;
  local_310 = (local_2c0 - local_2d0) * 100.0;
  local_30c = (local_2bc - local_2cc) * 100.0;
  local_320 = local_310 + local_2c0;
  local_31c = local_2bc + local_30c;
  local_318 = 0.0;
  local_314 = (local_2b4 - local_2c4) * 100.0 + local_2b4;
  local_2f0 = local_2d0 - local_300;
  local_2ec = local_2cc - local_2fc;
  local_2e4 = local_2c4 - local_2f4;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar18 = local_2f0 * local_2f0 + local_2ec * local_2ec;
    if (fVar18 < 0.0 == (fVar18 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0;
  local_334 = (float *)0x461c4000;
  FUN_00860410(&local_2a0,&local_300,&local_2f0,&local_310);
  local_2f0 = local_2d0 - local_320;
  local_2ec = local_2cc - local_31c;
  local_2e4 = local_2c4 - local_314;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar18 = local_2ec * local_2ec + local_2f0 * local_2f0;
    if (fVar18 < 0.0 == (fVar18 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0;
  local_334 = (float *)0x461c4000;
  FUN_00860410(&local_2c0,&local_320,&local_2f0,&local_310);
  local_300 = (local_2a0 + local_2c0) * 0.5;
  local_2fc = (local_29c + local_2bc) * 0.5;
  local_2f8 = (local_298 + local_2b8) * 0.5;
  local_2f4 = (local_294 + local_2b4) * 0.5;
  fVar18 = local_2c0 - local_300;
  fVar15 = local_2bc - local_2fc;
  fVar20 = local_2b8 - local_2f8;
  local_334 = (float *)((fVar20 * 0.0 + fVar18 * 300.0 + fVar15 * 0.0) /
                       (SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar20 * fVar20) * 300.0));
  fVar7 = (float10)FUN_00ddbb50();
  if (local_2bc < local_29c) {
    fVar7 = fVar7 * (float10)-1.0;
  }
  local_2d8 = (float)fVar7;
  local_2f0 = (local_2c0 * 0.4 + local_280) - (local_2a0 * 0.4 + local_280);
  local_2ec = (local_2bc * 0.4 + local_27c) - (local_29c * 0.4 + local_27c);
  local_2e4 = local_1b4 - local_1b4;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar18 = local_2ec * local_2ec + local_2f0 * local_2f0;
    if (fVar18 < 0.0 == (fVar18 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_334 = &local_280;
  FUN_00d9fab0(&local_2b0);
  local_334 = &local_320;
  local_320 = local_300 * 0.0 + local_280;
  local_31c = local_2fc * 0.0 + local_27c;
  local_318 = local_2f8 * 0.0 + local_278;
  local_314 = local_2f4 * 0.0 + local_274;
  FUN_00d9fab0(&local_270);
  local_334 = &local_310;
  pfVar2 = (float *)FUN_00a925a0();
  local_334 = &local_310;
  local_2b0 = local_2b0 - *pfVar2;
  local_2ac = local_2ac - pfVar2[1];
  local_2a8 = local_2a8 - pfVar2[2];
  local_2a4 = local_2a4 - pfVar2[3];
  pfVar2 = (float *)FUN_00a925a0();
  local_270 = (local_270 - *pfVar2) - local_2b0;
  local_26c = (local_26c - pfVar2[1]) - local_2ac;
  local_268 = (local_268 - pfVar2[2]) - local_2a8;
  local_264[0] = (local_264[0] - pfVar2[3]) - local_2a4;
  local_334 = (float *)0xffffffff;
  local_2b0 = local_270 + local_2b0;
  local_2ac = local_2ac + local_26c;
  local_2a8 = local_268 + local_2a8;
  local_2a4 = local_264[0] + local_2a4;
  iVar3 = FUN_00a12210();
  local_2d0 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                   *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                   *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
  local_2cc = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                   *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                   *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
  fVar18 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
  local_284 = *(float *)(iVar3 + 0x28) / fVar18;
  local_2d4 = *(float *)(iVar3 + 0x38) / fVar18;
  local_334 = (float *)-(*(float *)(iVar3 + 0x18) / fVar18);
  fVar7 = (float10)FUN_00ddbaa0();
  fVar13 = (float10)fpatan((float10)local_284,(float10)local_2d4);
  local_264[5] = (float)fVar13;
  local_264[6] = (float)fVar7;
  fVar7 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_2cc,
                          (float10)*(float *)(iVar3 + 0x10) / (float10)local_2d0);
  local_264[7] = (float)fVar7;
  local_320 = *(float *)(iVar3 + 0x40);
  local_31c = *(float *)(iVar3 + 0x44);
  local_318 = *(float *)(iVar3 + 0x48);
  local_314 = *(float *)(iVar3 + 0x4c);
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0x3f800000;
  FUN_00ddc1d0(afStack_22c + 0xb,local_264 + 5,5);
  local_334 = afStack_22c + 0xb;
  pfVar2 = &local_310;
  puVar14 = local_170;
  D3DXVec3TransformNormal(puVar14,pfVar2);
  local_31c = 1.0;
  local_318 = 0.0;
  local_314 = 0.0;
  FUN_00ddc1d0(afStack_22c + 8,local_264 + 2,5);
  pfVar17 = afStack_22c + 8;
  pfVar16 = &local_31c;
  D3DXVec3TransformNormal(auStack_1cc,pfVar16,pfVar17);
  local_320 = 0.0;
  FUN_00ddc1d0(afStack_22c + 5,&local_268,5);
  pfVar19 = afStack_22c + 5;
  D3DXVec3TransformNormal(&local_278,&stack0xfffffcd8,pfVar19);
  fVar18 = (float)pfVar16 + local_284 * 1.35;
  fVar20 = local_280 * 1.35 + (float)pfVar17;
  fVar15 = local_27c * 1.35 + (float)puVar14;
  local_2e8 = local_278 * 1.35 + (float)pfVar2;
  local_334 = (float *)(local_2e4 - local_2c4);
  local_2f4 = fVar18;
  local_2f0 = fVar20;
  local_2ec = fVar15;
  iVar3 = FUN_008604e0(&local_2c4,&local_334,&local_2a4,0x43480000);
  if (iVar3 != 0) {
    fVar15 = local_320 * 0.0011111111;
    fVar18 = (local_2f4 - fVar15 * local_284) - afStack_22c[0x12] * 0.0011111111;
    fVar20 = (local_2f0 - fVar15 * local_280) - fStack_1e0 * 0.0011111111;
    fVar15 = (local_2ec - fVar15 * local_27c) - afStack_1dc[0] * 0.0011111111;
  }
  local_264[0xb] = 0.0;
  local_264[9] = 0.0;
  local_264[8] = 0.0;
  local_264[7] = 0.0;
  local_264[6] = 0.0;
  local_264[4] = 0.0;
  local_264[3] = 0.0;
  local_264[2] = 0.0;
  local_264[1] = 0.0;
  afStack_22c[1] = 1.0;
  local_264[10] = 1.0;
  local_264[5] = 1.0;
  local_264[0] = 1.0;
  afStack_22c[0x10] = 0.0;
  afStack_22c[0xf] = 0.0;
  afStack_22c[0xe] = 0.0;
  afStack_22c[0xd] = 0.0;
  afStack_22c[0xb] = 0.0;
  afStack_22c[10] = 0.0;
  afStack_22c[9] = 0.0;
  afStack_22c[8] = 0.0;
  afStack_22c[6] = 0.0;
  afStack_22c[5] = 0.0;
  afStack_22c[4] = 0.0;
  afStack_22c[3] = 0.0;
  afStack_22c[0x11] = 1.0;
  afStack_22c[0xc] = 1.0;
  afStack_22c[7] = 1.0;
  afStack_22c[2] = 1.0;
  local_264[0xc] = fVar18;
  fStack_230 = fVar20;
  afStack_22c[0] = fVar15;
  if (local_26c != 0.0) {
    D3DXMatrixRotationZ(auStack_1d4,local_26c);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  if (local_270 != 0.0) {
    D3DXMatrixRotationY(auStack_1d4,local_270);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  if (local_274 != 0.0) {
    D3DXMatrixRotationX(auStack_1d4,local_274);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  D3DXMatrixMultiply(local_264,afStack_22c + 2,local_264);
  D3DXMatrixRotationX(&fStack_1e0,*(undefined4 *)(uVar5 + 0x374));
  pfVar2 = &local_278;
  pfVar16 = afStack_22c + 0x11;
  pfVar17 = pfVar2;
  D3DXMatrixMultiply(pfVar2,pfVar16,pfVar2);
  fVar15 = local_31c + 3.1415927;
  D3DXMatrixRotationZ(afStack_22c + 0xe,fVar15);
  D3DXMatrixMultiply(auStack_28c,afStack_22c + 0xc,auStack_28c);
  fVar7 = (float10)local_294;
  fVar13 = (float10)local_298;
  fVar8 = (float10)fStack_290;
  fVar9 = (float10)local_284;
  fVar10 = (float10)local_280;
  fVar11 = (float10)local_270;
  fVar12 = SQRT(fVar11 * fVar11 +
                (float10)local_274 * (float10)local_274 + (float10)local_278 * (float10)local_278);
  fVar11 = (float10)fpatan(fVar10 / fVar12,fVar11 / fVar12);
  fVar18 = (float)fVar11;
  fVar11 = (float10)FUN_00ddbaa0((float)-(fVar8 / fVar12));
  fStack_84 = (float)fVar11;
  fVar7 = (float10)fpatan((float10)local_294 /
                          (float10)(float)SQRT(fVar10 * fVar10 +
                                               (float10)fStack_288 * (float10)fStack_288 +
                                               fVar9 * fVar9),
                          (float10)local_298 /
                          (float10)(float)SQRT(fVar8 * fVar8 + fVar13 * fVar13 + fVar7 * fVar7));
  fStack_80 = (float)fVar7;
  if (((param_3 & 1) != 0) && (*(int *)(uVar5 + 0x528) == 0)) {
    FUN_004039a0(3,uVar6,0);
    fStack_98 = fVar15;
    pfStack_94 = pfVar2;
    pfStack_90 = pfVar16;
    pfStack_8c = pfVar17;
    fStack_88 = fVar18;
    pfStack_7c = pfVar19;
    FUN_00dffb90(0x40000000);
    puVar14 = auStack_1b8;
    uVar4 = FUN_00e00b40(*(undefined4 *)(uVar6 + 0x4b0),puVar14);
    FUN_00a8c930(uVar4,puVar14);
  }
  return;
}

// 0088EF20  FUN_0088ef20  size=1387  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088ef20(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  undefined4 local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined4 local_258;
  float local_254;
  undefined1 auStack_24c [8];
  float local_244;
  undefined1 auStack_240 [4];
  float local_23c;
  undefined4 uStack_238;
  float local_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float afStack_1fc [2];
  float fStack_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e4;
  undefined1 local_1e0 [48];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [288];
  float *pfStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 *puStack_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar15 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar15);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar15 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar15);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  iVar4 = FUN_00f98a90();
  local_244 = (float)iVar4 * 0.5;
  iVar4 = FUN_00f98aa0();
  local_25c = (float)iVar4 * 0.5;
  local_260 = local_244;
  local_258 = 0;
  local_23c = param_2[1];
  local_1ec = param_2[3];
  local_280 = (param_2[2] + *param_2) * 0.5;
  local_27c = (local_23c + local_1ec) * 0.5;
  local_274 = (local_234 + local_1e4) * 0.5;
  fVar2 = param_2[2] - local_280;
  fVar13 = local_1ec - local_27c;
  fVar6 = (float10)FUN_00ddbb50((fVar2 * 300.0 + fVar13 * 0.0) /
                                (SQRT(fVar13 * fVar13 + fVar2 * fVar2) * 300.0));
  if (local_1ec < local_23c) {
    fVar6 = fVar6 * (float10)-1.0;
  }
  local_294 = (float)fVar6;
  FUN_00d9fab0(&local_290,&local_260);
  local_280 = local_280 * 12.0 + local_260;
  local_27c = local_27c * 12.0 + local_25c;
  local_278 = local_258;
  local_274 = local_274 * 12.0 + local_254;
  FUN_00d9fab0(&local_270,&local_280);
  pfVar5 = (float *)FUN_00da0690(&local_1f0,0x3f800000);
  local_290 = local_290 - *pfVar5 * 3.0;
  local_28c = local_28c - pfVar5[1] * 3.0;
  local_288 = local_288 - pfVar5[2] * 3.0;
  local_284 = local_284 - pfVar5[3] * 3.0;
  pfVar5 = (float *)FUN_00da0690(&local_1f0,0x3f800000);
  local_270 = (local_270 - *pfVar5 * 3.0) - local_290;
  puVar14 = local_1e0;
  local_26c = (local_26c - pfVar5[1] * 3.0) - local_28c;
  local_268 = (local_268 - pfVar5[2] * 3.0) - local_288;
  local_264 = (local_264 - pfVar5[3] * 3.0) - local_284;
  local_290 = local_270 + local_290;
  local_28c = local_28c + local_26c;
  local_288 = local_268 + local_288;
  local_284 = local_264 + local_284;
  D3DXMatrixRotationZ(puVar14,local_294 + 3.1415927);
  local_234 = 0.0;
  afStack_1fc[0] = 1.0;
  fStack_210 = 1.0;
  uStack_224 = 0x3f800000;
  uStack_238 = 0x3f800000;
  fStack_230 = local_234;
  fStack_22c = local_234;
  fStack_228 = local_234;
  fStack_220 = local_234;
  fStack_21c = local_234;
  fStack_218 = local_234;
  fStack_214 = local_234;
  fStack_20c = local_234;
  fStack_208 = local_234;
  fStack_204 = local_234;
  fStack_200 = local_234;
  if (_DAT_01bea3b8 != 0.0) {
    D3DXMatrixRotationZ(auStack_1a8,_DAT_01bea3b8);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  if (_DAT_01bea3b4 != 0.0) {
    D3DXMatrixRotationY(auStack_1a8,_DAT_01bea3b4);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  if (_DAT_01bea3b0 != 0.0) {
    D3DXMatrixRotationX(auStack_1a8,_DAT_01bea3b0);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  D3DXMatrixRotationY(auStack_1a8,0x40490fdb);
  puVar11 = auStack_240;
  puVar12 = auStack_1b0;
  D3DXMatrixMultiply(puVar11,puVar12,puVar11);
  puVar10 = auStack_24c;
  pfVar5 = afStack_1fc;
  D3DXMatrixMultiply(pfVar5,pfVar5,puVar10);
  D3DXMatrixMultiply(&fStack_208,&fStack_208,uVar3 + 0xb0);
  fVar6 = (float10)fStack_20c;
  local_274 = (float)SQRT(fVar6 * fVar6 +
                          (float10)fStack_214 * (float10)fStack_214 +
                          (float10)fStack_210 * (float10)fStack_210);
  fVar7 = (float10)afStack_1fc[0];
  local_270 = (float)SQRT(fVar7 * fVar7 +
                          (float10)fStack_204 * (float10)fStack_204 +
                          (float10)fStack_200 * (float10)fStack_200);
  fVar8 = (float10)local_1ec;
  fVar9 = SQRT(fVar8 * fVar8 +
               (float10)fStack_1f4 * (float10)fStack_1f4 + (float10)local_1f0 * (float10)local_1f0);
  fVar7 = (float10)fpatan(fVar7 / fVar9,fVar8 / fVar9);
  fVar13 = (float)fVar7;
  fVar6 = (float10)FUN_00ddbaa0((float)-(fVar6 / fVar9));
  fStack_60 = (float)fVar6;
  fVar6 = (float10)fpatan((float10)fStack_210 / (float10)local_270,
                          (float10)fStack_214 / (float10)local_274);
  fStack_5c = (float)fVar6;
  if ((param_3 & 2) != 0) {
    FUN_004039a0(0x60,uVar3,0);
    pfStack_74 = pfVar5;
    puStack_70 = puVar10;
    puStack_6c = puVar11;
    puStack_68 = puVar12;
    fStack_64 = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  return;
}

// 0088F490  FUN_0088f490  size=1243  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088f490(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  undefined1 auStack_230 [8];
  undefined4 uStack_228;
  float local_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e0 [48];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [288];
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 *puStack_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar19 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar19);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar19 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar19);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  FUN_00f98a90();
  FUN_00f98aa0();
  local_25c = param_2[1];
  local_24c = param_2[3];
  fVar13 = param_2[2] - (param_2[2] + *param_2) * 0.5;
  fVar11 = local_24c - (local_25c + local_24c) * 0.5;
  fVar5 = (float10)FUN_00ddbb50((fVar13 * 300.0 + fVar11 * 0.0) /
                                (SQRT(fVar13 * fVar13 + fVar11 * fVar11) * 300.0));
  if (local_24c < local_25c) {
    fVar5 = fVar5 * (float10)-1.0;
  }
  local_224 = (float)fVar5;
  local_260 = *(float *)(uVar2 + 0x40);
  local_25c = *(float *)(uVar2 + 0x44);
  local_258 = *(float *)(uVar2 + 0x48);
  local_254 = *(float *)(uVar2 + 0x4c);
  pfVar4 = (float *)FUN_00a926e0(&local_250);
  local_240 = *pfVar4 * 1.35 + local_260;
  local_23c = pfVar4[1] * 1.35 + local_25c;
  local_238 = pfVar4[2] * 1.35 + local_258;
  local_234 = pfVar4[3] * 1.35 + local_254;
  pfVar4 = (float *)FUN_00a925a0(&local_260);
  puVar18 = local_1e0;
  local_250 = *pfVar4 * 3.0 + local_240;
  local_24c = pfVar4[1] * 3.0 + local_23c;
  local_248 = pfVar4[2] * 3.0 + local_238;
  local_244 = pfVar4[3] * 3.0 + local_234;
  D3DXMatrixRotationZ(puVar18,local_224 + 3.1415927);
  local_224 = 0.0;
  fStack_1ec = 1.0;
  fStack_200 = 1.0;
  fStack_214 = 1.0;
  uStack_228 = 0x3f800000;
  fStack_220 = local_224;
  fStack_21c = local_224;
  fStack_218 = local_224;
  fStack_210 = local_224;
  fStack_20c = local_224;
  fStack_208 = local_224;
  fStack_204 = local_224;
  fStack_1fc = local_224;
  fStack_1f8 = local_224;
  fStack_1f4 = local_224;
  fStack_1f0 = local_224;
  if (_DAT_01bea3b8 != 0.0) {
    D3DXMatrixRotationZ(auStack_1a8,_DAT_01bea3b8);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  if (_DAT_01bea3b4 != 0.0) {
    D3DXMatrixRotationY(auStack_1a8,_DAT_01bea3b4);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  if (_DAT_01bea3b0 != 0.0) {
    D3DXMatrixRotationX(auStack_1a8,_DAT_01bea3b0);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  puVar16 = auStack_1a8;
  uVar17 = 0x40490fdb;
  D3DXMatrixRotationY(puVar16,0x40490fdb);
  puVar15 = auStack_230;
  puVar14 = auStack_1b0;
  D3DXMatrixMultiply(puVar15,puVar14,puVar15);
  D3DXMatrixMultiply(&fStack_1fc,&fStack_1fc,&local_23c);
  D3DXMatrixMultiply(&fStack_208,&fStack_208,uVar2 + 0xb0);
  fVar5 = (float10)fStack_20c;
  fVar13 = (float)SQRT(fVar5 * fVar5 +
                       (float10)fStack_214 * (float10)fStack_214 +
                       (float10)fStack_210 * (float10)fStack_210);
  fVar6 = (float10)fStack_200;
  fVar7 = (float10)fStack_204;
  fVar8 = (float10)fStack_1fc;
  fVar9 = (float10)fStack_1ec;
  fVar10 = SQRT(fVar9 * fVar9 +
                (float10)fStack_1f4 * (float10)fStack_1f4 +
                (float10)fStack_1f0 * (float10)fStack_1f0);
  fVar9 = (float10)fpatan(fVar8 / fVar10,fVar9 / fVar10);
  fVar11 = (float)fVar9;
  fVar5 = (float10)FUN_00ddbaa0((float)-(fVar5 / fVar10));
  fVar12 = (float)fVar5;
  fVar5 = (float10)fpatan((float10)fStack_210 /
                          (float10)(float)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6),
                          (float10)fStack_214 / (float10)fVar13);
  fVar13 = (float)fVar5;
  if ((param_3 & 1) != 0) {
    FUN_004039a0(0x5f,uVar2,0);
    puStack_74 = puVar15;
    puStack_70 = puVar16;
    uStack_6c = uVar17;
    puStack_68 = puVar18;
    fStack_64 = fVar11;
    fStack_60 = fVar12;
    fStack_5c = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  if ((param_3 & 2) != 0) {
    FUN_004039a0(0x60,uVar2,0);
    puStack_74 = puVar15;
    puStack_70 = puVar16;
    uStack_6c = uVar17;
    puStack_68 = puVar18;
    fStack_64 = fVar11;
    fStack_60 = fVar12;
    fStack_5c = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  return;
}

// 0088F970  FUN_0088f970  size=303  [callgraph]
int FUN_0088f970(undefined4 param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  int local_2c;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_2c = 0;
  iVar5 = FUN_00a7c800();
  if (iVar5 == 0) {
    return 0;
  }
  iVar6 = FUN_00c1c880();
  iVar6 = *(int *)(iVar6 + 4);
  iVar7 = FUN_00c1c880();
  iVar1 = *(int *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 4);
  for (; iVar6 != iVar7 + iVar1 * 4; iVar6 = iVar6 + 4) {
    iVar8 = FUN_00a81330();
    if ((((iVar8 != 0) && ((*(byte *)(iVar8 + 0x28) & 2) == 0)) &&
        (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) &&
       (((piVar9[0x1a4] == 0 && (iVar10 = FUN_00a7c800(), iVar10 != 0)) &&
        ((**(code **)(*piVar9 + 0x204))(&local_20), fVar2 = local_20 - *(float *)(iVar5 + 0x50),
        fVar4 = fStack_1c - *(float *)(iVar5 + 0x54), fVar3 = fStack_18 - *(float *)(iVar5 + 0x58),
        fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= param_4 * param_4)))) {
      fVar11 = (float10)FUN_009f8c60(iVar10 + 0x50);
      FUN_00ddba30((float)(fVar11 - (float10)param_2));
      local_2c = iVar8;
    }
  }
  return local_2c;
}

// 0088FAA0  FUN_0088faa0  size=569  [callgraph]
int FUN_0088faa0(undefined4 *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                int param_6,int param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  undefined *puVar13;
  uint local_3c;
  undefined1 auStack_24 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar13 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar13);
    uVar10 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar9 = *(int **)(uVar10 + 0x5e0);
  if (piVar9 == (int *)0x0) {
    local_3c = 0;
  }
  else {
    puVar13 = &DAT_01b35b20;
    (**(code **)(*piVar9 + 4))(&DAT_01b35b20);
    iVar5 = FUN_00dd6d80(puVar13);
    local_3c = -(uint)(iVar5 != 0) & (uint)piVar9;
  }
  *(undefined4 *)(uVar10 + 0x350) = 0;
  iVar5 = FUN_00a7c800();
  if (iVar5 != 0) {
    iVar6 = FUN_00c1c880();
    iVar6 = *(int *)(iVar6 + 4);
    iVar7 = FUN_00c1c880();
    iVar1 = *(int *)(iVar7 + 0xc);
    iVar7 = *(int *)(iVar7 + 4);
    for (; iVar6 != iVar7 + iVar1 * 4; iVar6 = iVar6 + 4) {
      iVar8 = FUN_00a81330();
      if ((((iVar8 != 0) && ((*(byte *)(iVar8 + 0x28) & 2) == 0)) &&
          ((param_6 == 0 || (iVar8 != param_6)))) &&
         (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) {
        puVar13 = &DAT_01be9ca8;
        (**(code **)(*piVar9 + 4))(&DAT_01be9ca8);
        iVar8 = FUN_00dd6d80(puVar13);
        uVar11 = -(uint)(iVar8 != 0) & (uint)piVar9;
        FUN_00a7c940(uVar11 + 0x968);
        iVar8 = FUN_00a81330();
        if (iVar8 != 0) {
          FUN_00a7c8a0();
        }
        iVar8 = FUN_00a7c800();
        if ((((iVar8 != 0) &&
             (((param_7 != 0 || (*(float *)(local_3c + 0x44) <= *(float *)(uVar11 + 0x44))) ||
              (ABS(*(float *)(local_3c + 0x44) - *(float *)(uVar11 + 0x44)) <= 3.0)))) &&
            ((*(int *)(uVar11 + 0x910) != 0 && (*(int *)(uVar11 + 0x988) == 0)))) &&
           ((**(code **)(*piVar9 + 0x204))(&fStack_20), fVar2 = fStack_20 - *(float *)(iVar5 + 0x50)
           , fVar4 = fStack_1c - *(float *)(iVar5 + 0x54),
           fVar3 = fStack_18 - *(float *)(iVar5 + 0x58),
           fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= param_5 * param_5)) {
          fVar12 = (float10)FUN_009f8c60(iVar8 + 0x50);
          fVar12 = (float10)FUN_00ddba30((float)(fVar12 - (float10)param_3));
          if (ABS(fVar12) <= (float10)param_4) {
            FUN_00878130(auStack_24,iVar6);
          }
        }
      }
    }
  }
  return uVar10 + 0x344;
}

// 0088FCE0  FUN_0088fce0  size=720  [callgraph]
void FUN_0088fce0(undefined4 *param_1,float param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar5 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  local_40 = 1.0;
  if (((*(int *)(uVar5 + 0x504) != 0) && (0.0 < *(float *)(uVar5 + 0x508))) &&
     (local_40 = 1.0 / *(float *)(uVar5 + 0x508), 1.0 < local_40)) {
    local_40 = 1.0;
  }
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    iVar2 = FUN_00da97e0();
    if (iVar2 == 0) {
      return;
    }
    if ((*(uint *)(uVar4 + 0xcf8) & 0x8000) != 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_00da97c0();
    if (iVar2 == 0) {
      return;
    }
    if ((*(uint *)(uVar4 + 0xcf8) & 0x1000) != 0) {
      return;
    }
  }
  if ((*(int *)(uVar5 + 0x2f4) == 0) && (*(int *)(uVar5 + 0x5e8) == 0)) {
    if (0.0 < *(float *)(uVar5 + 0x5ec)) {
      fVar1 = *(float *)(uVar5 + 0x5ec) - 1.0;
      *(float *)(uVar5 + 0x5ec) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(uVar5 + 0x5ec) = 0;
      }
      local_40 = 1.0 / *(float *)(uVar5 + 0x5ec);
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
    }
    FUN_00da7500();
    fVar6 = (float10)FUN_00da7570();
    local_3c = param_2;
    local_38 = param_3;
    if (*(float *)(uVar5 + 0x37c) != 0.0) {
      local_3c = *(float *)(uVar5 + 0x37c) * 57.29578;
      local_38 = -*(float *)(uVar5 + 0x37c) * 57.29578;
    }
    piVar3 = (int *)FUN_00c13920();
    (**(code **)(*piVar3 + 0x28))(0);
    piVar3 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar3 + 0x84))();
    fStack_20 = *(float *)(uVar5 + 0x378);
    fVar1 = *(float *)(uVar5 + 0x374);
    FUN_00877d10(&fStack_2c,param_1);
    fVar7 = (float10)FUN_00ddba30(fStack_20 - fStack_2c * fStack_44 * local_38);
    if (param_4 == 0) {
      FUN_00b8bbb0((float)fVar7);
    }
    fVar6 = (float10)FUN_00ddba30(fStack_28 * fStack_44 * (float)fVar6 + fVar1);
    if ((float10)(local_40 * 2.3999999e-05) < (float10)57.29578 * fVar6) {
      fVar6 = (float10)FUN_00ddba30((float)((float10)(local_40 * 2.3999999e-05) *
                                           (float10)0.017453292));
    }
    if ((float10)57.29578 * fVar6 < (float10)local_3c) {
      fVar6 = (float10)FUN_00ddba30((float)((float10)local_3c * (float10)0.017453292));
    }
    if (param_5 == 0) {
      FUN_00b8bb40((float)fVar6);
      return;
    }
  }
  return;
}

// 0088FFB0  FUN_0088ffb0  size=427  [callgraph]
void FUN_0088ffb0(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  float local_8;
  float local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar7 + 0x500) == 0) {
    FUN_00877b60(&local_8,param_1);
    if (*(int *)(uVar7 + 0x330) == 0xf) {
      local_8 = local_8 * -1.0;
      local_4 = local_4 * -1.0;
    }
    uVar5 = *(uint *)(*(int *)(uVar7 + 0x170) + 8);
    if (*(uint *)(*(int *)(uVar7 + 0x170) + 0xc) <= uVar5) {
      uVar4 = 0;
      if (uVar5 != 1) {
        do {
          iVar6 = *(int *)(*(int *)(uVar7 + 0x170) + 4);
          puVar3 = (undefined4 *)(iVar6 + uVar4 * 8);
          *puVar3 = *(undefined4 *)(iVar6 + 8 + uVar4 * 8);
          puVar3[1] = puVar3[3];
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(int *)(*(int *)(uVar7 + 0x170) + 8) - 1U);
      }
      iVar6 = *(int *)(uVar7 + 0x170);
      if ((*(int *)(iVar6 + 4) != 0) && (*(int *)(iVar6 + 8) != 0)) {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
      }
    }
    (**(code **)(**(int **)(uVar7 + 0x170) + 8))(&local_8);
    if (*(int *)(*(int *)(uVar7 + 0x17c) + 8) == 0) {
      *(undefined4 *)(uVar7 + 0x180) = *(undefined4 *)(uVar7 + 0x184);
      return;
    }
    if (0.0 < *(float *)(uVar7 + 0x180)) {
      fVar2 = *(float *)(uVar7 + 0x180) - 1.0;
      *(float *)(uVar7 + 0x180) = fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        uVar5 = 0;
        *(undefined4 *)(uVar7 + 0x180) = *(undefined4 *)(uVar7 + 0x184);
        if (*(int *)(*(int *)(uVar7 + 0x17c) + 8) != 1) {
          iVar6 = 0;
          do {
            iVar1 = *(int *)(*(int *)(uVar7 + 0x17c) + 4);
            puVar3 = (undefined4 *)(iVar1 + iVar6);
            *puVar3 = *(undefined4 *)(iVar1 + 0x10 + iVar6);
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 0x10;
            puVar3[1] = puVar3[5];
            puVar3[2] = puVar3[6];
            puVar3[3] = puVar3[7];
          } while (uVar5 < *(int *)(*(int *)(uVar7 + 0x17c) + 8) - 1U);
        }
        iVar6 = *(int *)(uVar7 + 0x17c);
        if ((*(int *)(iVar6 + 4) != 0) && (*(int *)(iVar6 + 8) != 0)) {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
          return;
        }
      }
    }
  }
  return;
}

// 00890170  FUN_00890170  size=447  [callgraph]
void FUN_00890170(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar3 + 0xe4) == 0) {
    iVar4 = FUN_008779b0(param_1);
    if (iVar4 != 0) {
      uVar6 = 0x199;
      goto LAB_00890226;
    }
    iVar4 = FUN_00876530(param_1);
    if ((iVar4 == 0) && (uVar6 = 0x199, *(int *)(uVar5 + 0x188) != 0)) goto LAB_00890226;
  }
  uVar6 = 0x149;
LAB_00890226:
  if (*(int *)(uVar7 + 0x40c8) != 8) {
    FUN_00aa4080(uVar6,param_4,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  if (*(int *)(uVar5 + 0x330) != 1) {
    iVar4 = FUN_008779b0(param_1);
    if ((iVar4 == 0) && (iVar4 = FUN_00869990(param_1), iVar4 == 0)) {
      return;
    }
    uVar2 = 0;
    if (*(int *)(param_2 + 0x2c) == 8) {
      uVar2 = 0x3e4ccccd;
    }
    FUN_00aa4080(uVar6,param_4,uVar2,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  FUN_00a92f90();
  iVar4 = FUN_00e26e90();
  if (iVar4 != 0) {
    FUN_00e36ac0(0,0x3f800000);
  }
  FUN_00aa4080(uVar6,param_4,0x3dcccccd,0x3c23d70a,0,0xbf800000,0x3f800000);
  return;
}

// 00890330  FUN_00890330  size=294  [callgraph]
void FUN_00890330(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar3 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar5 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar5 != 0) & (uint)piVar2;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar4 + 0xe4) == 0) {
    iVar5 = FUN_008779b0(param_1);
    iVar5 = (-(uint)(iVar5 != 0) & 0x52) + 0x14a;
  }
  else {
    iVar5 = 0x14a;
  }
  if (*(int *)(uVar3 + 0x40c8) == 8) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3dcccccd;
  }
  FUN_00aa4080(iVar5,param_3,uVar1,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  iVar5 = FUN_00876530(param_1);
  if (iVar5 == 0) {
    FUN_00a95fb0(0);
  }
  iVar5 = FUN_00a92f90();
  FUN_00e26e90();
  *(undefined4 *)(iVar5 + 0xe4) = 0;
  *(undefined4 *)(iVar5 + 0xe8) = 0;
  *(undefined4 *)(iVar5 + 0xec) = 0;
  return;
}

// 00890460  FUN_00890460  size=340  [callgraph]
void FUN_00890460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar2 + 0xe4) == 0) {
    iVar3 = FUN_008779b0(param_1);
    if (iVar3 != 0) {
      uVar4 = 0x199;
      goto LAB_00890517;
    }
    iVar3 = FUN_00876530(param_1);
    if ((iVar3 == 0) && (uVar4 = 0x199, *(int *)(uVar5 + 0x188) != 0)) goto LAB_00890517;
  }
  uVar4 = 0x149;
LAB_00890517:
  if (*(int *)(uVar6 + 0x40c8) != 8) {
    FUN_00aa4080(uVar4,param_4,0,0x3dcccccd,0,0,0);
    FUN_00a96030(param_4,0);
  }
  iVar3 = FUN_00a92f90();
  FUN_00e26e90();
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  FUN_00aa4080(0x19e,param_5,0,0x3f800000,0x10,0xbf800000,0x3f800000);
  return;
}

// 008905C0  FUN_008905c0  size=1054  [callgraph]
void FUN_008905c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  float fStack_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  uVar7 = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar8);
    param_1 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_1);
  }
  piVar1 = *(int **)((int)param_1 + 0x5e0);
  if (piVar1 != (int *)0x0) {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  local_4 = 0x14b;
  uVar6 = 0x1c7;
  if (param_5 <= 1.0) {
    if (param_5 < 0.0) {
      param_5 = 0.0;
    }
  }
  else {
    param_5 = 1.0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*puVar3)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar4 != 0) & (uint)puVar3;
  }
  if (*(int *)(uVar5 + 0xe4) == 0) {
    iVar4 = FUN_008779b0(puVar3);
    if ((iVar4 != 0) ||
       ((iVar4 = FUN_00876530(puVar3), iVar4 == 0 && (*(int *)((int)param_1 + 0x188) != 0)))) {
      local_4 = 0x174;
      uVar6 = 0x1c8;
    }
  }
  else {
    local_4 = 0x14b;
    uVar6 = 0x1c7;
  }
  if (*(int *)(uVar7 + 0x40c8) != 8) {
    FUN_00a95e60(param_2,0);
    FUN_00a96030(param_2,0);
  }
  if (param_5 <= 0.5) {
    fStack_8 = param_5 + param_5;
    if (fStack_8 <= 1.0) {
      if (fStack_8 < 0.0) {
        fStack_8 = 0.0;
      }
    }
    else {
      fStack_8 = 1.0;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) goto LAB_00890770;
    fStack_8 = 1.0 - fStack_8;
  }
  else {
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) goto LAB_00890770;
    fStack_8 = 0.0;
  }
  FUN_00e36ac0(param_2,fStack_8);
LAB_00890770:
  if (*(int *)(uVar7 + 0x40c8) == 8) {
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_2,1.0 - param_5);
    }
  }
  if (param_5 <= 0.5) {
    fVar2 = 1.0 - param_5;
    FUN_00aa4080(uVar6,param_4,0x3e2aaaab,fVar2,0,param_6 * 0.016666668,0);
    FUN_00a96030(param_4,0);
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_4,param_5);
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_3,param_5);
    }
    if (*(int *)((int)param_1 + 0x330) != 1) {
      return;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    FUN_00a9f560("ZangekiHold",0x3e2aaaab,0,param_4);
    FUN_00a9f600(0xffffffff,param_4,0,1,0,local_4,0x3e2aaaab,0);
    FUN_00a9f600(0xffffffff,param_4,0,0,0,uVar6,0x3e2aaaab,0);
    fVar2 = (param_5 + param_5) - 1.0;
    if (1.0 < fVar2 == (fVar2 == 1.0)) {
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
    }
    else {
      fVar2 = 0.99;
    }
    FUN_00a947e0(param_4,0,fVar2,0);
    FUN_00a95e60(param_4,param_6 * 0.016666668);
    FUN_00a96030(param_4,0);
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_4,0x3f800000);
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_3,0x3f800000);
    }
    if (*(int *)((int)param_1 + 0x330) != 1) {
      return;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      return;
    }
    fVar2 = 0.0;
  }
  FUN_00e36ac0(0,fVar2);
  return;
}

// 008909E0  FUN_008909e0  size=302  [callgraph]
void FUN_008909e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  float local_4;
  
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  if (((((DAT_01bea094 & 0x40000000) == 0) && (iVar4 = *(int *)(uVar6 + 0x40c8), iVar4 != 8)) &&
      (iVar4 != 9)) && (iVar4 != 0xf)) {
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
        local_4 = *(float *)(uVar6 + 0x3bdc);
        uVar2 = *(uint *)(uVar6 + 0xcf8) & 0x8000;
        param_1 = *(undefined4 **)(uVar6 + 0x3be0);
      }
      else {
        local_4 = *(float *)(uVar6 + 0x3bd4);
        uVar2 = *(uint *)(uVar6 + 0xcf8) & 0x1000;
        param_1 = *(undefined4 **)(uVar6 + 0x3bd8);
      }
      if (uVar2 != 0) {
        iVar4 = FUN_00876530(puVar3);
        if (((iVar4 != 0) || (*(int *)(uVar5 + 0x188) == 0)) &&
           (100.0 < ABS((float)param_1 + local_4))) {
          FUN_00d82510(0x10,param_3);
        }
      }
    }
  }
  return;
}

// 00890B10  FUN_00890b10  size=214  [callgraph]
void FUN_00890b10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  float local_8;
  float local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  FUN_00877b60(&local_8,param_1);
  if (200.0 < ABS(local_4) + ABS(local_8)) {
    FUN_00d82510(8,param_3);
    return;
  }
  if ((DAT_01d6192c == 0) &&
     (((*(int *)(uVar3 + 0x40c8) == 0xf || (*(int *)(uVar3 + 0x40c8) == 0xc)) ||
      (*(int *)(uVar4 + 0xf0) != 0)))) {
    FUN_00d82510(8,param_3);
  }
  return;
}

// 00890BF0  FUN_00890bf0  size=190  [callgraph]
void FUN_00890bf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x500) == 0) && ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe50)) != 0)
     ) {
    if ((*(int *)(uVar2 + 0x40c8) == 8) && (iVar3 = FUN_00869420(param_1), iVar3 != 0)) {
      return;
    }
    iVar3 = FUN_008765a0(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_00876be0(param_1);
      if (iVar3 == 0) {
        return;
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_00d82510(4,param_3);
    *(undefined4 *)(uVar4 + 0x568) = uVar5;
  }
  return;
}

// 00890CB0  FUN_00890cb0  size=59  [callgraph]
void FUN_00890cb0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar1 + 0x2f4) == 0) {
    FUN_00876030(param_1);
  }
  return;
}

// 00890CF0  FUN_00890cf0  size=7666  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00891237) */
/* WARNING: Removing unreachable block (ram,0x00891239) */
/* WARNING: Removing unreachable block (ram,0x0089123b) */
/* WARNING: Removing unreachable block (ram,0x00891c10) */
/* WARNING: Removing unreachable block (ram,0x00891c12) */
/* WARNING: Removing unreachable block (ram,0x00891c14) */
/* WARNING: Removing unreachable block (ram,0x008923d9) */
/* WARNING: Removing unreachable block (ram,0x00892a66) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00890cf0(undefined4 *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  float unaff_EDI;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 auStack_170 [8];
  float fStack_168;
  int *piStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  int local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [2];
  float fStack_d8;
  float fStack_d4;
  float fStack_c4;
  float afStack_c0 [2];
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [12];
  float fStack_a4;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar19 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar19);
    uVar9 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar10 = *(int **)(uVar9 + 0x5e0);
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    puVar19 = &DAT_01b35b20;
    (**(code **)(*piVar10 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar19);
    piVar10 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar10);
  }
  if (*(int *)(uVar9 + 0xec) != 0) {
    return;
  }
  pfVar1 = (float *)(uVar9 + 0x550);
  *pfVar1 = 0.0;
  *(undefined4 *)(uVar9 + 0x554) = 0;
  *(undefined4 *)(uVar9 + 0x558) = 0;
  *(undefined4 *)(uVar9 + 0x55c) = 0x3f800000;
  *(undefined4 *)(uVar9 + 0x69c) = 0;
  *(undefined4 *)(uVar9 + 0x59c) = 0;
  fVar4 = *(float *)(uVar9 + 0x574) * 1.2;
  local_138 = piVar10[0x13c];
  uVar17 = 0x3f490fdb;
  iVar3 = (**(code **)(*piVar10 + 0x84))(0x3f490fdb,fVar4);
  FUN_00c4d770(uVar9 + 0x590,local_138,*(undefined4 *)(iVar3 + 4),uVar17,fVar4);
  *(undefined4 *)(uVar9 + 0x5b0) = 0;
  fVar4 = *(float *)(uVar9 + 0x574) * 1.2;
  local_138 = piVar10[0x13c];
  uVar17 = 0x3f490fdb;
  iVar3 = (**(code **)(*piVar10 + 0x84))(0x3f490fdb,fVar4);
  FUN_00c58b60(uVar9 + 0x5a4,local_138,*(undefined4 *)(iVar3 + 4),uVar17,fVar4);
  *(undefined4 *)(uVar9 + 0x5c4) = 0;
  local_138 = piVar10[0x13c];
  fVar4 = *(float *)(uVar9 + 0x574) * 1.2 * 30.0;
  uVar17 = 0x3f490fdb;
  iVar3 = (**(code **)(*piVar10 + 0x84))(0x3f490fdb,fVar4);
  FUN_00c58e90(uVar9 + 0x5b8,local_138,*(undefined4 *)(iVar3 + 4),uVar17,fVar4);
  local_138 = 0;
  iVar3 = FUN_00a7f600(0x2070a);
  if ((iVar3 != 0) && (piStack_164 = (int *)FUN_00a7c8a0(), piStack_164 != (int *)0x0)) {
    puVar19 = &DAT_01b351c0;
    (**(code **)(*piStack_164 + 4))(&DAT_01b351c0);
    iVar3 = FUN_00dd6d80(puVar19);
    if ((iVar3 != 0) && (iVar3 = FUN_00a8cbe0(0x20016), iVar3 != 0)) {
      local_138 = 1;
    }
  }
  fVar11 = -(float10)_DAT_01bea3b0;
  piStack_164 = (int *)(float)fVar11;
  fStack_168 = (_DAT_01bea3b4 + 3.1415927) - 0.17453292;
  if ((float10)35.0 < (float10)57.29578 * fVar11) {
    fVar11 = (float10)FUN_00ddba30(0x3f1c61aa);
    piStack_164 = (int *)(float)fVar11;
  }
  if ((float10)57.29578 * fVar11 < (float10)-40.0) {
    fVar11 = (float10)FUN_00ddba30(0xbf32b8c2);
    piStack_164 = (int *)(float)fVar11;
  }
  fStack_c4 = (float)fVar11;
  if ((DAT_01bea094 & 0x200000) != 0) goto LAB_00892aba;
  fStack_19c = (float)FUN_00a7f600(0x20200);
  iVar3 = FUN_00a7f600(0x2020a);
  if ((fStack_19c == 0.0) && (iVar3 == 0)) {
    iVar3 = (**(code **)(*piVar10 + 0x84))();
    fStack_168 = *(float *)(iVar3 + 4);
  }
  FUN_004fc8e0(&fStack_180,piVar10,0xffffffff);
  fStack_19c = (float)FUN_00c4ec80();
  fStack_198 = (float)FUN_00b7b200();
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (fVar4 = (float)FUN_00a7c8a0(), fVar4 != 0.0)) {
    fStack_198 = fVar4;
  }
  if ((fStack_198 == 0.0) || (iVar3 = FUN_00877250(param_1,fStack_198), iVar3 == 0)) {
    if ((fStack_19c != 0.0) &&
       ((*(int *)((int)fStack_19c + 0x50) != 0 && (iVar3 = FUN_0085bf90(), iVar3 != 0)))) {
      FUN_00a81330();
      fStack_198 = (float)FUN_00a7c8a0();
      if ((fStack_198 == 0.0) ||
         ((*(int *)((int)fStack_198 + 0x330) != 0 &&
          (0 < *(int *)(*(int *)((int)fStack_198 + 0x330) + 0xcc))))) goto LAB_00891e80;
      FUN_004fc8e0(&fStack_160,fStack_198,0xffffffff);
      FUN_00c15010(&fStack_160);
      fVar11 = (float10)fStack_160 - (float10)fStack_180;
      fVar12 = (float10)fStack_158 - (float10)fStack_178;
      fVar13 = (float10)fpatan(fVar11,fVar12);
      fStack_168 = (float)fVar13;
      if (SQRT(((float10)fStack_15c - (float10)fStack_17c) *
               ((float10)fStack_15c - (float10)fStack_17c) + fVar11 * fVar11 + fVar12 * fVar12) <
          (float10)*(float *)(uVar9 + 0x574) * (float10)1.2 +
          (float10)*(float *)((int)fStack_19c + 0x18)) {
        *pfVar1 = fStack_160;
        *(float *)(uVar9 + 0x554) = fStack_15c;
        *(float *)(uVar9 + 0x558) = fStack_158;
        *(float *)(uVar9 + 0x55c) = fStack_154;
        if (*(int *)((int)fStack_198 + 0x6c4) < 1) {
          if (0 < *(int *)((int)fStack_198 + 0x6fc)) {
            fStack_134 = (float)FUN_00a12210(0xffffffff);
            fStack_150 = 0.0;
            fStack_194 = (float)piVar10[0x13c];
            fStack_14c = 1.35;
            fStack_148 = 0.0;
            uVar14 = 0x3f860a92;
            iVar3 = (**(code **)(*piVar10 + 0x84))(0x3f860a92);
            uVar17 = *(undefined4 *)(iVar3 + 4);
            iVar5 = FUN_00f98aa0(fStack_194,uVar17);
            fVar4 = (float)iVar5;
            iVar3 = (int)fStack_194;
            fStack_194 = (float)iVar5;
            fVar6 = (float)FUN_00f98a90(fVar4);
            iVar3 = (int)fStack_194;
            fStack_194 = fVar6;
            iVar3 = FUN_00a866a0(piVar10 + 0x10,&fStack_134,&fStack_150,&fStack_190,
                                 (float)(int)fVar6,fVar4,iVar3,uVar17,uVar14);
            if (iVar3 < 0) {
              *pfVar1 = 0.0;
              *(undefined4 *)(uVar9 + 0x554) = 0;
              *(undefined4 *)(uVar9 + 0x558) = 0;
              *(undefined4 *)(uVar9 + 0x55c) = 0x3f800000;
            }
            else {
              *pfVar1 = fStack_190;
              *(float *)(uVar9 + 0x554) = fStack_18c;
              *(float *)(uVar9 + 0x558) = fStack_188;
              *(float *)(uVar9 + 0x55c) = fStack_184;
            }
          }
        }
        else {
          iVar3 = FUN_00a12210(*(int *)((int)fStack_198 + 0x6c4));
          fStack_190 = *(float *)((int)fStack_198 + 0x6d0);
          fStack_194 = (float)(iVar3 + 0x10);
          fStack_18c = *(float *)((int)fStack_198 + 0x6d4);
          fStack_188 = *(float *)((int)fStack_198 + 0x6d8);
          fStack_184 = *(float *)((int)fStack_198 + 0x6dc);
          D3DXVec3TransformNormal(&fStack_190,&fStack_190,fStack_194);
          fVar4 = *(float *)((int)fStack_194 + 0x34);
          fVar6 = *(float *)((int)fStack_194 + 0x38);
          fVar2 = *(float *)((int)fStack_194 + 0x3c);
          *pfVar1 = *(float *)((int)fStack_194 + 0x30) + fStack_190;
          *(float *)(uVar9 + 0x554) = fVar4 + fStack_18c;
          *(float *)(uVar9 + 0x558) = fVar6 + fStack_188;
          *(float *)(uVar9 + 0x55c) = fVar2 + fStack_184;
        }
      }
      goto LAB_00891e78;
    }
    if (*(int *)(uVar9 + 0x59c) < 1) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        if (*(int *)(uVar9 + 0x5c4) < 1) {
          if (*(int *)(uVar9 + 0x5b0) < 1) {
            fStack_194 = (float)piVar10[0x13c];
            fVar4 = *(float *)(uVar9 + 0x574) * 1.2;
            uVar20 = 1;
            uVar21 = 0;
            uVar16 = 0;
            uVar15 = 1;
            uVar14 = 0;
            uVar17 = 0x3f860a92;
            iVar3 = (**(code **)(*piVar10 + 0x84))(0x3f860a92,fVar4,0,1,0,0,1);
            iVar3 = FUN_00c25110(fStack_194,*(undefined4 *)(iVar3 + 4),uVar17,fVar4,uVar14,uVar15,
                                 uVar16,uVar21,uVar20);
            if (((((iVar3 != 0) && (fStack_198 = (float)FUN_00a7c8a0(), fStack_198 != 0.0)) &&
                 (iVar3 = *(int *)((int)fStack_198 + 0x330), iVar3 != 0)) &&
                ((*(int *)(iVar3 + 0xcc) < 1 && (iVar3 != 0)))) && (*(int *)(iVar3 + 0xcc) == 0)) {
              FUN_004fc8e0(&fStack_190,fStack_198,0xffffffff);
              if (*(int *)((int)fStack_198 + 0x6c4) < 1) {
                if (0 < *(int *)((int)fStack_198 + 0x6fc)) {
                  fStack_134 = (float)FUN_00a12210(0xffffffff);
                  fStack_100 = 0.0;
                  fStack_194 = (float)piVar10[0x13c];
                  fStack_fc = 1.35;
                  fStack_f8 = 0.0;
                  uVar14 = 0x3f860a92;
                  iVar3 = (**(code **)(*piVar10 + 0x84))(0x3f860a92);
                  uVar17 = *(undefined4 *)(iVar3 + 4);
                  iVar5 = FUN_00f98aa0(fStack_194,uVar17);
                  fVar4 = (float)iVar5;
                  iVar3 = (int)fStack_194;
                  fStack_194 = (float)iVar5;
                  fVar6 = (float)FUN_00f98a90(fVar4);
                  iVar3 = (int)fStack_194;
                  fStack_194 = fVar6;
                  iVar3 = FUN_00a866a0(piVar10 + 0x10,&fStack_134,&fStack_100,&fStack_150,
                                       (float)(int)fVar6,fVar4,iVar3,uVar17,uVar14);
                  if (iVar3 < 0) {
                    *pfVar1 = 0.0;
                    *(undefined4 *)(uVar9 + 0x554) = 0;
                    *(undefined4 *)(uVar9 + 0x558) = 0;
                    fVar4 = 1.0;
                  }
                  else {
                    *pfVar1 = fStack_150;
                    *(float *)(uVar9 + 0x554) = fStack_14c;
                    *(float *)(uVar9 + 0x558) = fStack_148;
                    fVar4 = fStack_144;
                  }
                  goto LAB_00891e2a;
                }
                if (SQRT((fStack_190 - fStack_180) * (fStack_190 - fStack_180) +
                         (fStack_18c - fStack_17c) * (fStack_18c - fStack_17c) +
                         (fStack_188 - fStack_178) * (fStack_188 - fStack_178)) <
                    *(float *)(uVar9 + 0x574) * 1.2) {
                  pfVar8 = (float *)FUN_00a926e0(afStack_e0);
                  fVar6 = pfVar8[1];
                  fVar2 = pfVar8[2] * 1.35 + fStack_188;
                  fVar4 = pfVar8[3] * 1.35 + fStack_184;
                  *pfVar1 = *pfVar8 * 1.35 + fStack_190;
                  *(float *)(uVar9 + 0x554) = fVar6 * 1.35 + fStack_18c;
                  goto LAB_00891e27;
                }
              }
              else {
                iVar3 = FUN_00a12210(*(int *)((int)fStack_198 + 0x6c4));
                fStack_190 = *(float *)((int)fStack_198 + 0x6d0);
                fStack_194 = (float)(iVar3 + 0x10);
                fStack_18c = *(float *)((int)fStack_198 + 0x6d4);
                fStack_188 = *(float *)((int)fStack_198 + 0x6d8);
                fStack_184 = *(float *)((int)fStack_198 + 0x6dc);
                D3DXVec3TransformNormal(&fStack_190,&fStack_190,fStack_194);
                fVar6 = *(float *)((int)fStack_194 + 0x34);
                fVar2 = *(float *)((int)fStack_194 + 0x38) + fStack_188;
                fVar4 = *(float *)((int)fStack_194 + 0x3c) + fStack_184;
                *pfVar1 = *(float *)((int)fStack_194 + 0x30) + fStack_190;
                *(float *)(uVar9 + 0x554) = fVar6 + fStack_18c;
LAB_00891e27:
                *(float *)(uVar9 + 0x558) = fVar2;
LAB_00891e2a:
                *(float *)(uVar9 + 0x55c) = fVar4;
              }
              if (((*pfVar1 != 0.0) || (*(float *)(uVar9 + 0x554) != 0.0)) ||
                 (*(float *)(uVar9 + 0x558) != 0.0)) {
                fVar11 = (float10)fpatan((float10)*pfVar1 - (float10)fStack_180,
                                         (float10)*(float *)(uVar9 + 0x558) - (float10)fStack_178);
                fStack_168 = (float)fVar11;
              }
              goto LAB_00891e78;
            }
          }
          else {
            fStack_19c = *(float *)(uVar9 + 0x5a8);
            fStack_194 = (float)(*(int *)(uVar9 + 0x5b0) * 0x70 + (int)fStack_19c);
            if (fStack_19c != fStack_194) {
              do {
                FUN_00c15010(&fStack_160);
                fVar11 = (float10)fpatan((float10)fStack_160 - (float10)fStack_180,
                                         (float10)fStack_158 - (float10)fStack_178);
                fStack_168 = (float)fVar11;
                *pfVar1 = fStack_160;
                *(float *)(uVar9 + 0x554) = fStack_15c;
                *(float *)(uVar9 + 0x558) = fStack_158;
                *(float *)(uVar9 + 0x55c) = fStack_154;
                iVar3 = FUN_00c152b0();
                if (iVar3 != 0) {
                  *pfVar1 = fStack_180;
                  *(float *)(uVar9 + 0x554) = fStack_17c;
                  *(float *)(uVar9 + 0x558) = fStack_178;
                  *(float *)(uVar9 + 0x55c) = fStack_174;
                }
                fStack_19c = (float)((int)fStack_19c + 0x70);
              } while (fStack_19c != fStack_194);
            }
          }
        }
        else {
          fStack_19c = *(float *)(uVar9 + 0x5bc);
          fStack_194 = (float)(*(int *)(uVar9 + 0x5c4) * 0x70 + (int)fStack_19c);
          if (fStack_19c != fStack_194) {
            do {
              FUN_00c15010(&fStack_160);
              fStack_15c = (float)piVar10[0x11];
              fVar11 = (float10)fpatan((float10)fStack_160 - (float10)fStack_180,
                                       (float10)fStack_158 - (float10)fStack_178);
              fStack_168 = (float)fVar11;
              FUN_00c15010(&fStack_160);
              *pfVar1 = fStack_160;
              fStack_19c = (float)((int)fStack_19c + 0x70);
              *(float *)(uVar9 + 0x554) = fStack_15c;
              *(float *)(uVar9 + 0x558) = fStack_158;
              *(float *)(uVar9 + 0x55c) = fStack_154;
            } while (fStack_19c != fStack_194);
          }
        }
      }
      else {
        FUN_00a81330();
        pfVar8 = (float *)FUN_00a7c8b0();
        fStack_160 = *pfVar8;
        fStack_158 = pfVar8[2];
        fStack_154 = pfVar8[3];
        fStack_15c = (float)piVar10[0x11];
        fVar11 = (float10)fpatan((float10)fStack_160 - (float10)fStack_180,
                                 (float10)fStack_158 - (float10)fStack_178);
        fStack_168 = (float)fVar11;
        *pfVar1 = fStack_180;
        *(float *)(uVar9 + 0x554) = fStack_17c;
        *(float *)(uVar9 + 0x558) = fStack_178;
        *(float *)(uVar9 + 0x55c) = fStack_174;
      }
    }
    else {
      fStack_19c = *(float *)(uVar9 + 0x594);
      fStack_194 = (float)(*(int *)(uVar9 + 0x59c) * 0x70 + (int)fStack_19c);
      if (fStack_19c != fStack_194) {
        do {
          FUN_00c15010(&fStack_160);
          fVar11 = (float10)fpatan((float10)fStack_160 - (float10)fStack_180,
                                   (float10)fStack_158 - (float10)fStack_178);
          fStack_168 = (float)fVar11;
          *pfVar1 = fStack_160;
          *(float *)(uVar9 + 0x554) = fStack_15c;
          *(float *)(uVar9 + 0x558) = fStack_158;
          *(float *)(uVar9 + 0x55c) = fStack_154;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a81330();
            iVar3 = FUN_00a7c8a0();
            if (iVar3 != 0) {
              FUN_008694f0(param_1,iVar3);
            }
          }
          fStack_19c = (float)((int)fStack_19c + 0x70);
        } while (fStack_19c != fStack_194);
      }
    }
  }
  else {
    iVar3 = *(int *)((int)fStack_198 + 0x330);
    if ((((iVar3 == 0) || (0 < *(int *)(iVar3 + 0xcc))) || (iVar3 == 0)) ||
       ((*(int *)(iVar3 + 0xcc) != 0 ||
        (iVar3 = FUN_0093e3a0(*(undefined4 *)((int)fStack_198 + 0x51c)), iVar3 != 0))))
    goto LAB_00891e80;
    FUN_004fc8e0(&fStack_160,fStack_198,0xffffffff);
    if (*(int *)((int)fStack_198 + 0x6c4) < 1) {
      if (0 < *(int *)((int)fStack_198 + 0x6fc)) {
        fStack_114 = (float)FUN_00a12210(0xffffffff);
        fStack_19c = (float)piVar10[0x13c];
        fStack_110 = 0.0;
        fStack_10c = 1.35;
        fStack_108 = 0.0;
        uVar14 = 0x3f860a92;
        iVar3 = (**(code **)(*piVar10 + 0x84))(0x3f860a92);
        uVar17 = *(undefined4 *)(iVar3 + 4);
        iVar5 = FUN_00f98aa0(fStack_19c,uVar17);
        fVar4 = (float)iVar5;
        iVar3 = (int)fStack_19c;
        fStack_19c = (float)iVar5;
        fVar6 = (float)FUN_00f98a90(fVar4);
        iVar3 = (int)fStack_19c;
        fStack_19c = fVar6;
        iVar3 = FUN_00a866a0(piVar10 + 0x10,&fStack_114,&fStack_110,&fStack_190,(float)(int)fVar6,
                             fVar4,iVar3,uVar17,uVar14);
        if (iVar3 < 0) {
          *pfVar1 = 0.0;
          *(undefined4 *)(uVar9 + 0x554) = 0;
          *(undefined4 *)(uVar9 + 0x558) = 0;
          fVar4 = 1.0;
        }
        else {
          *pfVar1 = fStack_190;
          *(float *)(uVar9 + 0x554) = fStack_18c;
          *(float *)(uVar9 + 0x558) = fStack_188;
          fVar4 = fStack_184;
        }
        goto LAB_00891486;
      }
      if (SQRT((fStack_160 - fStack_180) * (fStack_160 - fStack_180) +
               (fStack_15c - fStack_17c) * (fStack_15c - fStack_17c) +
               (fStack_158 - fStack_178) * (fStack_158 - fStack_178)) <
          *(float *)(uVar9 + 0x574) * 1.2) {
        if (*(int *)((int)fStack_198 + 0x4b4) != 0x2c120) {
          pfVar8 = (float *)FUN_00a926e0(afStack_e0);
          fVar6 = pfVar8[1];
          fVar2 = pfVar8[2] * 1.35 + fStack_158;
          fVar4 = pfVar8[3] * 1.35 + fStack_154;
          *pfVar1 = *pfVar8 * 1.35 + fStack_160;
          *(float *)(uVar9 + 0x554) = fVar6 * 1.35 + fStack_15c;
          goto LAB_00891483;
        }
        iVar3 = FUN_00a12210(0);
        *pfVar1 = *(float *)(iVar3 + 0x40);
        *(undefined4 *)(uVar9 + 0x554) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(uVar9 + 0x558) = *(undefined4 *)(iVar3 + 0x48);
        fVar4 = *(float *)(iVar3 + 0x4c);
        goto LAB_00891486;
      }
    }
    else {
      iVar3 = FUN_00a12210(*(int *)((int)fStack_198 + 0x6c4));
      fStack_190 = *(float *)((int)fStack_198 + 0x6d0);
      fStack_19c = (float)(iVar3 + 0x10);
      fStack_18c = *(float *)((int)fStack_198 + 0x6d4);
      fStack_188 = *(float *)((int)fStack_198 + 0x6d8);
      fStack_184 = *(float *)((int)fStack_198 + 0x6dc);
      D3DXVec3TransformNormal(&fStack_190,&fStack_190,fStack_19c);
      fVar6 = *(float *)((int)fStack_19c + 0x34);
      fVar2 = *(float *)((int)fStack_19c + 0x38) + fStack_188;
      fVar4 = *(float *)((int)fStack_19c + 0x3c) + fStack_184;
      *pfVar1 = *(float *)((int)fStack_19c + 0x30) + fStack_190;
      *(float *)(uVar9 + 0x554) = fVar6 + fStack_18c;
LAB_00891483:
      *(float *)(uVar9 + 0x558) = fVar2;
LAB_00891486:
      *(float *)(uVar9 + 0x55c) = fVar4;
    }
    if (((*pfVar1 != 0.0) || (*(float *)(uVar9 + 0x554) != 0.0)) ||
       (*(float *)(uVar9 + 0x558) != 0.0)) {
      fVar11 = (float10)fpatan((float10)*pfVar1 - (float10)fStack_180,
                               (float10)*(float *)(uVar9 + 0x558) - (float10)fStack_178);
      fStack_168 = (float)fVar11;
    }
LAB_00891e78:
    FUN_008694f0(param_1,fStack_198);
  }
LAB_00891e80:
  iVar3 = FUN_00a7f600(0x2c080);
  if ((((iVar3 != 0) || (iVar3 = FUN_00a7f600(0x2c081), iVar3 != 0)) &&
      (*(int *)(uVar9 + 0x52c) != 0)) &&
     ((iVar3 = FUN_00a7c8a0(), iVar3 != 0 && (iVar3 = FUN_00a12210(0x36), iVar3 != 0)))) {
    *pfVar1 = *(float *)(iVar3 + 0x40);
    *(undefined4 *)(uVar9 + 0x554) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(uVar9 + 0x558) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(uVar9 + 0x55c) = *(undefined4 *)(iVar3 + 0x4c);
    *pfVar1 = *pfVar1;
    *(float *)(uVar9 + 0x554) = *(float *)(uVar9 + 0x554) + 1.1;
    *(undefined4 *)(uVar9 + 0x558) = *(undefined4 *)(uVar9 + 0x558);
    *(float *)(uVar9 + 0x55c) = *(float *)(uVar9 + 0x55c) + fStack_d4;
    fVar11 = (float10)fpatan((float10)*pfVar1 - (float10)fStack_180,
                             (float10)*(float *)(uVar9 + 0x558) - (float10)fStack_178);
    fStack_168 = (float)fVar11;
  }
  if ((((*pfVar1 != 0.0) || (*(float *)(uVar9 + 0x554) != 0.0)) ||
      (*(float *)(uVar9 + 0x558) != 0.0)) &&
     (((fVar6 = *(float *)(uVar9 + 0x554) - (float)piVar10[0x11],
       fVar4 = *(float *)(uVar9 + 0x558) - (float)piVar10[0x12],
       SQRT(fVar4 * fVar4 +
            fVar6 * fVar6 + (*pfVar1 - (float)piVar10[0x10]) * (*pfVar1 - (float)piVar10[0x10])) <
       4.0 && (*(int *)(uVar9 + 0x188) == 0)) && (iVar3 = FUN_008e2740(), iVar3 != 0)))) {
    fStack_180 = (float)piVar10[0x10];
    fStack_19c = (float)piVar10[0x11];
    fStack_178 = (float)piVar10[0x12];
    fStack_174 = (float)piVar10[0x13];
    fStack_d4 = *(float *)(uVar9 + 0x55c);
    fStack_110 = *pfVar1 - fStack_180;
    fStack_108 = *(float *)(uVar9 + 0x558) - fStack_178;
    fStack_194 = SQRT(fStack_110 * fStack_110 + 0.0 + fStack_108 * fStack_108);
    fStack_10c = 0.0;
    fStack_104 = fStack_d4 - fStack_174;
    fStack_17c = fStack_19c;
    if ((fStack_110 != 0.0) || (fStack_108 != 0.0)) {
      fVar4 = fStack_108 * fStack_108 + fStack_110 * fStack_110 + 0.0;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        FUN_00ddf460(&fStack_110,&fStack_110);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_110 = 0.0;
        fStack_10c = 1.0;
        fStack_108 = 0.0;
      }
    }
    if (param_1 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar19 = &DAT_01b35b78;
      (**(code **)*param_1)(&DAT_01b35b78);
      iVar3 = FUN_00dd6d80(puVar19);
      uVar7 = -(uint)(iVar3 != 0) & (uint)param_1;
    }
    iVar3 = *(int *)(uVar7 + 0x69c);
    if (iVar3 == 0) {
LAB_00892168:
      fVar4 = 0.8;
    }
    else if (iVar3 == 1) {
      fVar4 = 1.0;
    }
    else {
      if (iVar3 != 2) goto LAB_00892168;
      fVar4 = 1.5;
    }
    fVar4 = fStack_194 - fVar4 * *(float *)(uVar9 + 0x574);
    fStack_e8 = fStack_108 * fVar4 + fStack_178;
    fStack_e4 = fVar4 * fStack_104 + fStack_174;
    fStack_190 = fStack_180;
    fStack_18c = fStack_17c + 1.5;
    fStack_188 = fStack_178;
    fStack_184 = fStack_d4 + fStack_174;
    fStack_194 = (fStack_110 * fVar4 + fStack_180) - fStack_180;
    fStack_134 = (fStack_10c * fVar4 + fStack_17c) - fStack_18c;
    fStack_128 = fStack_e8 - fStack_178;
    fStack_198 = fStack_e4 - fStack_184;
    fStack_17c = fStack_18c;
    fStack_174 = fStack_184;
    fStack_130 = fStack_194;
    fStack_12c = fStack_134;
    fStack_124 = fStack_198;
    fStack_114 = fStack_128;
    if (((fStack_194 != 0.0) || (fStack_134 != 0.0)) || (fStack_128 != 0.0)) {
      fVar4 = fStack_128 * fStack_128 + fStack_194 * fStack_194 + fStack_134 * fStack_134;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        FUN_00ddf460(&fStack_130,&fStack_130);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_130 = 0.0;
        fStack_12c = 1.0;
        fStack_128 = 0.0;
      }
    }
    fVar4 = *(float *)(uVar9 + 0x574);
    fStack_d8 = fStack_128 * fVar4;
    fStack_150 = fStack_130 * fVar4 + fStack_190;
    fStack_14c = fStack_12c * fVar4 + fStack_18c;
    fStack_148 = fStack_188 + fStack_d8;
    fStack_144 = fStack_184 + fStack_124 * fVar4;
    FUN_00445d40(&fStack_180,&fStack_150,0xffff0006,0,0x60,0,"zangekiReadyPosCheck1",0);
    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(afStack_c0,auStack_b0,0,0,auStack_a0);
    if (iVar3 == 0) {
      fVar4 = SQRT(fStack_134 * fStack_134 + fStack_194 * fStack_194 + fStack_114 * fStack_114);
      fStack_150 = fStack_194;
      fStack_14c = fStack_134;
      fStack_148 = fStack_114;
      fStack_144 = fStack_198;
      if (((fStack_194 != 0.0) || (fStack_134 != 0.0)) || (fStack_114 != 0.0)) {
        fVar6 = fStack_114 * fStack_114 + fStack_194 * fStack_194 + fStack_134 * fStack_134;
        fStack_194 = fVar4;
        if (fVar6 < 0.0 == (fVar6 == 0.0)) {
          FUN_00ddf460(&fStack_150,&fStack_150);
          fVar4 = fStack_194;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_150 = 0.0;
          fStack_14c = 1.0;
          fStack_148 = 0.0;
          fVar4 = fStack_194;
        }
      }
      fStack_194 = fVar4;
      if (param_1 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        puVar19 = &DAT_01b35b78;
        (**(code **)*param_1)(&DAT_01b35b78);
        iVar3 = FUN_00dd6d80(puVar19);
        uVar7 = -(uint)(iVar3 != 0) & (uint)param_1;
      }
      iVar3 = *(int *)(uVar7 + 0x69c);
      if (iVar3 == 0) {
LAB_0089257d:
        fVar4 = 0.6;
      }
      else if (iVar3 == 1) {
        fVar4 = 0.9;
      }
      else {
        if (iVar3 != 2) goto LAB_0089257d;
        fVar4 = 1.2;
      }
      fVar4 = fStack_194 - fVar4 * *(float *)(uVar9 + 0x574);
      fStack_fc = fStack_14c * fVar4 + fStack_18c;
      fStack_e8 = fStack_148 * fVar4 + fStack_188;
      fStack_e4 = fVar4 * fStack_144 + fStack_184;
      fStack_18c = fStack_18c + 1.5;
      fStack_184 = fStack_a4 + fStack_184;
      fStack_180 = fStack_190;
      fStack_178 = fStack_188;
      fStack_100 = (fStack_190 + fVar4 * fStack_150) - fStack_190;
      fStack_fc = fStack_fc - fStack_18c;
      fStack_f8 = fStack_e8 - fStack_188;
      fStack_f4 = fStack_e4 - fStack_184;
      fStack_17c = fStack_18c;
      fStack_174 = fStack_184;
      if (((fStack_100 != 0.0) || (fStack_fc != 0.0)) || (fStack_f8 != 0.0)) {
        fVar4 = fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc;
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          FUN_00ddf460(&fStack_100,&fStack_100);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_100 = 0.0;
          fStack_fc = 1.0;
          fStack_f8 = 0.0;
        }
      }
      fVar4 = *(float *)(uVar9 + 0x574);
      uVar21 = 0;
      pcVar18 = "zangekiReadyPosCheck2";
      uVar16 = 0;
      uVar15 = 0x60;
      uVar14 = 0;
      fStack_e8 = fStack_f8 * fVar4;
      fStack_190 = fStack_100 * fVar4 + fStack_190;
      fStack_18c = fStack_18c + fStack_fc * fVar4;
      fStack_188 = fStack_e8 + fStack_188;
      fStack_184 = fStack_184 + fStack_f4 * fVar4;
      uVar17 = FUN_00410130(6,0xffffffff,0,0,0,0,0x60,0,"zangekiReadyPosCheck2",0);
      FUN_00445d40(&fStack_180,&fStack_190,uVar17,uVar14,uVar15,uVar16,pcVar18,uVar21);
      iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(afStack_e0,auStack_60,0,0,auStack_50);
      if (iVar3 == 0) goto LAB_008927ed;
      fStack_190 = afStack_e0[0];
      fStack_188 = fStack_d8;
      fStack_b4 = fStack_d4;
    }
    else {
      fStack_190 = afStack_c0[0];
      fStack_188 = fStack_b8;
    }
    fStack_18c = fStack_19c;
    fStack_184 = fStack_b4;
    (**(code **)(*piVar10 + 0x6c))(&fStack_190);
  }
LAB_008927ed:
  if (((*pfVar1 != 0.0) || (*(float *)(uVar9 + 0x554) != 0.0)) || (*(float *)(uVar9 + 0x558) != 0.0)
     ) {
    fStack_198 = 0.0;
    piStack_164 = (int *)0x0;
    fStack_180 = (float)piVar10[0x10];
    fStack_17c = (float)piVar10[0x11];
    fStack_178 = (float)piVar10[0x12];
    fStack_174 = (float)piVar10[0x13];
    fStack_190 = 0.0;
    fStack_18c = 1.0;
    fStack_188 = 0.0;
    D3DXVec3TransformNormal(&fStack_190,&fStack_190,piVar10 + 4);
    fStack_18c = fStack_19c * 1.35 + fStack_18c;
    fStack_188 = fStack_198 * 1.35 + fStack_188;
    fStack_184 = fStack_194 * 1.35 + fStack_184;
    fStack_180 = fStack_190 * 1.35 + fStack_180;
    thunk_FUN_00dde510(&fStack_1a4,auStack_170,pfVar1,&fStack_18c);
    FUN_00b8bbb0(fStack_174);
    if (fStack_144 != 0.0) {
      fStack_1a4 = fStack_1a4 + 0.17453292;
    }
    fStack_1a0 = -fStack_1a4;
    pfVar8 = (float *)(**(code **)(*piVar10 + 0x84))();
    FUN_00b8bb40(fStack_1a0 - *pfVar8);
    pfVar8 = (float *)(**(code **)(*piVar10 + 0x84))();
    if (ABS(*pfVar8) <= 0.0) {
      return;
    }
    fStack_18c = (float)piVar10[0x10];
    fStack_188 = (float)piVar10[0x11];
    fStack_184 = (float)piVar10[0x12];
    fStack_180 = (float)piVar10[0x13];
    fStack_15c = 0.0;
    fStack_158 = 1.0;
    fStack_154 = 0.0;
    D3DXVec3TransformNormal(&fStack_15c,&fStack_15c,piVar10 + 4);
    fStack_198 = fStack_168 * 1.35 + fStack_198;
    fStack_194 = (float)piStack_164 * 1.35 + fStack_194;
    fStack_190 = fStack_160 * 1.35 + fStack_190;
    fStack_18c = fStack_15c * 1.35 + fStack_18c;
    thunk_FUN_00dde510(&stack0xfffffe50,&fStack_17c,pfVar1,&fStack_198);
    iVar3 = (**(code **)(*piVar10 + 0x84))();
    fStack_124 = *(float *)(iVar3 + 4);
    uStack_120 = *(undefined4 *)(iVar3 + 8);
    uStack_11c = *(undefined4 *)(iVar3 + 0xc);
    fStack_128 = -unaff_EDI;
    (**(code **)(*piVar10 + 0x88))(&fStack_128);
    FUN_00b8bb40(0);
    FUN_00b8bbb0(fStack_184);
    return;
  }
  if (local_138 != 0) {
    piStack_164 = (int *)(fStack_c4 - 0.34906584);
  }
LAB_00892aba:
  FUN_00b8bbb0(fStack_168);
  FUN_00b8bb40(piStack_164);
  return;
}

// 00892AF0  FUN_00892af0  size=322  [callgraph]
void FUN_00892af0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_160 [348];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x528) != 0) &&
     ((*(int *)(uVar4 + 0x530) != 0 || (*(int *)(uVar4 + 0x52c) != 0)))) {
    FUN_004039a0(0,uVar3,0);
    FUN_00dffb30(uVar4 + 400);
    FUN_00e03080(*(undefined4 *)(uVar3 + 0x4f0),0);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00e03080(iVar2,1);
    }
    FUN_00a8c8b0(0x11400,local_160);
    return;
  }
  FUN_004039a0(2,uVar3,0);
  FUN_00dffb30(uVar4 + 400);
  FUN_00e03080(*(undefined4 *)(uVar3 + 0x4f0),0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,1);
  }
  FUN_00a8c8b0(0x11400,local_160);
  return;
}

// 00892C40  FUN_00892c40  size=203  [callgraph]
void FUN_00892c40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_160 [348];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00b8c220();
  if (iVar2 != 0) {
    FUN_004039a0(0,uVar3,0);
    FUN_00dffb30(uVar4 + 0x240);
    FUN_00a8c930(0,local_160);
    return;
  }
  FUN_004039a0(2,uVar3,0);
  FUN_00dffb30(uVar4 + 0x240);
  FUN_00a8c930(0,local_160);
  return;
}

// 00892D90  lib::StaticArray<Entity*,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00892DC0  lib::StaticArray<Hw::cVec2,20>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Hw::cVec2,20>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Hw::cVec2>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00896BB0  lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>  size=3255  [class]
/* WARNING: Removing unreachable block (ram,0x00896e68) */
/* WARNING: Removing unreachable block (ram,0x00896e6a) */
/* WARNING: Removing unreachable block (ram,0x00896e6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>(undefined4 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float *pfVar7;
  int *piVar8;
  float unaff_EBX;
  int *piVar9;
  undefined4 *puVar10;
  float unaff_EDI;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  float fVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float *pfStack_244;
  float fVar24;
  float fStack_234;
  float fStack_228;
  float local_224;
  float fStack_220;
  float local_21c;
  float fStack_218;
  float *pfStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_184 [12];
  undefined4 uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 auStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [4];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [12];
  undefined1 auStack_104 [20];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined **ppuStack_d0;
  float *pfStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  float afStack_c0 [47];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar11 = 0;
  }
  else {
    pfStack_244 = (float *)&DAT_01b35b78;
    (**(code **)*param_1)();
    iVar20 = FUN_00dd6d80();
    uVar11 = -(uint)(iVar20 != 0) & (uint)param_1;
  }
  piVar9 = *(int **)(uVar11 + 0x5e0);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    pfStack_244 = (float *)&DAT_01b35b20;
    (**(code **)(*piVar9 + 4))();
    iVar20 = FUN_00dd6d80();
    piVar9 = (int *)(-(uint)(iVar20 != 0) & (uint)piVar9);
  }
  pfVar1 = (float *)(piVar9 + 4);
  local_1d0 = 0.0;
  local_1cc = 0.0;
  local_1c8 = 0.0;
  local_1c4 = 0x3f800000;
  local_ec = 0x3f800000;
  local_1f8 = 0.0;
  local_f0 = 0;
  local_e8 = 0;
  pfStack_244 = pfVar1;
  D3DXVec3TransformNormal(&local_f0);
  uStack_11c = 0x3f800000;
  puVar10 = &uStack_11c;
  uStack_118 = 0;
  uStack_114 = 0;
  D3DXVec3TransformNormal(puVar10,puVar10,pfVar1);
  fStack_168 = 0.0;
  fStack_164 = 0.0;
  auStack_160[0] = 0x3f800000;
  D3DXVec3TransformNormal(&fStack_168,&fStack_168,pfVar1);
  fVar21 = *(float *)(uVar11 + 0x574) * 10.0;
  pfStack_214 = (float *)piVar9[0x10];
  fStack_210 = (float)piVar9[0x11];
  fStack_20c = (float)piVar9[0x12];
  fStack_1d4 = ((float)piVar9[0x10] + fStack_174) - (float)pfStack_214;
  local_1d0 = ((float)piVar9[0x11] + fStack_170) - fStack_210;
  local_1cc = ((float)piVar9[0x12] + fStack_16c) - fStack_20c;
  local_1c8 = ((float)piVar9[0x13] + fStack_168) - (float)piVar9[0x13];
  fVar13 = (float10)FUN_00b8bbf0();
  FUN_00ddcfe0(auStack_104,auStack_134,(float)fVar13);
  D3DXVec3TransformNormal(&fStack_1d4,&fStack_1d4,auStack_104);
  if (((fStack_1e0 != 0.0) || (fStack_1dc != 0.0)) || (fStack_1d8 != 0.0)) {
    fVar17 = fStack_1d8 * fStack_1d8 + fStack_1dc * fStack_1dc + fStack_1e0 * fStack_1e0;
    if (fVar17 < 0.0 == (fVar17 == 0.0)) {
      FUN_00ddf460(&fStack_1e0,&fStack_1e0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_1e0 = 0.0;
      fStack_1dc = 1.0;
      fStack_1d8 = 0.0;
    }
  }
  local_224 = 0.0;
  iVar12 = 0;
  iVar20 = 0xc;
  do {
    iVar4 = FUN_0093e4a0(iVar12);
    if (iVar4 != 0) {
      puVar15 = &stack0xfffffdc0;
      FUN_0093e4a0(iVar12);
      FUN_0093fc70(puVar15);
      iVar4 = FUN_0085f8f0(&stack0xfffffdc0);
      if (iVar4 != 0) {
        fVar17 = local_21c - fVar21;
        fVar17 = 1.0 - SQRT((fStack_218 - unaff_EBX) * (fStack_218 - unaff_EBX) +
                            fVar17 * fVar17 + (fStack_220 - unaff_EDI) * (fStack_220 - unaff_EDI)) /
                       (float)&local_f0;
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        fVar13 = (float10)FUN_00dde970(&stack0xfffffdc0,&DAT_01bea630,_DAT_01bea3b4,0x40490fdb);
        fVar14 = (float10)3.1415927;
        if ((float10)1.5707964 < fVar13) {
          fVar13 = fVar13 - fVar14;
        }
        if (fVar13 < (float10)-1.5707964) {
          fVar13 = fVar13 + fVar14;
        }
        fVar13 = (fVar14 - ABS(fVar13)) * (float10)0.31830987;
        if (((float10)0.2 <= fVar13) &&
           (fVar13 = fVar13 + fVar13 + (float10)fVar17, (float10)local_224 < fVar13)) {
          local_224 = (float)fVar13;
          fStack_228 = 0.0;
          fStack_1f4 = fStack_234;
          fStack_200 = unaff_EDI;
          fStack_1fc = fVar21;
          local_1f8 = unaff_EBX;
        }
      }
    }
    iVar12 = iVar12 + 1;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  pfStack_cc = afStack_c0;
  iStack_c8 = 0;
  uStack_c4 = 0x20;
  ppuStack_d0 = vftable;
  FUN_00c27cb0(piVar9[0x13c],&local_f0,&ppuStack_d0,0xffffffff);
  pfStack_244 = pfStack_cc + iStack_c8;
  pfVar7 = pfStack_cc;
  if (pfStack_cc != pfStack_244) {
    do {
      fStack_204 = *pfVar7;
      if ((fStack_204 != 0.0) && (iVar20 = FUN_00a7c8a0(), iVar20 != 0)) {
        uStack_1a0 = *(undefined4 *)(iVar20 + 0x40);
        pfVar2 = (float *)(iVar20 + 0x40);
        uStack_19c = *(undefined4 *)(iVar20 + 0x44);
        uStack_198 = *(undefined4 *)(iVar20 + 0x48);
        uStack_194 = *(undefined4 *)(iVar20 + 0x4c);
        iVar12 = FUN_00a12210(0);
        if (iVar12 != 0) {
          uStack_1a0 = *(undefined4 *)(iVar12 + 0x40);
          uStack_19c = *(undefined4 *)(iVar12 + 0x44);
          uStack_198 = *(undefined4 *)(iVar12 + 0x48);
          uStack_194 = *(undefined4 *)(iVar12 + 0x4c);
        }
        iVar12 = FUN_0085f8f0(&uStack_1a0);
        if (iVar12 != 0) {
          fVar17 = local_21c - *(float *)(iVar20 + 0x44);
          fVar21 = fStack_218 - *(float *)(iVar20 + 0x48);
          fVar21 = 1.0 - SQRT(fVar21 * fVar21 +
                              fVar17 * fVar17 + (fStack_220 - *pfVar2) * (fStack_220 - *pfVar2)) /
                         (float)&local_f0;
          if (fVar21 < 0.0) {
            fVar21 = 0.0;
          }
          fVar13 = (float10)FUN_00dde970(pfVar2,&DAT_01bea630,_DAT_01bea3b4,0x40490fdb);
          fVar14 = (float10)3.1415927;
          if ((float10)1.5707964 < fVar13) {
            fVar13 = fVar13 - fVar14;
          }
          if (fVar13 < (float10)-1.5707964) {
            fVar13 = fVar13 + fVar14;
          }
          fVar13 = (fVar14 - ABS(fVar13)) * (float10)0.31830987;
          if (((float10)0.2 <= fVar13) &&
             (fVar13 = fVar13 + fVar13 + (float10)fVar21, (float10)local_224 < fVar13)) {
            local_224 = (float)fVar13;
            fStack_200 = *pfVar2;
            fStack_228 = fStack_204;
            fStack_1fc = *(float *)(iVar20 + 0x44);
            local_1f8 = *(float *)(iVar20 + 0x48);
            fStack_1f4 = *(float *)(iVar20 + 0x4c);
          }
        }
      }
      pfVar7 = pfVar7 + 1;
    } while (pfVar7 != pfStack_244);
    if (fStack_228 != 0.0) {
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        puVar16 = &DAT_01be9c78;
        (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
        iVar20 = FUN_00dd6d80(puVar16);
        if (iVar20 != 0) {
          local_1d0 = 0.0;
          pfVar7 = &local_1d0;
          local_1cc = 1.0;
          local_1c8 = 0.0;
          D3DXVec3TransformNormal(pfVar7,pfVar7,pfVar1);
          fStack_1fc = 0.0;
          local_1f8 = 0.0;
          fStack_1f4 = 1.0;
          D3DXVec3TransformNormal(&fStack_1fc,&fStack_1fc,pfVar1);
          uStack_178 = 0x3f800000;
          fStack_174 = 0.0;
          fStack_170 = 0.0;
          D3DXVec3TransformNormal(&uStack_178,&uStack_178,pfVar1);
          fStack_16c = fStack_1ec * 1.35;
          fStack_1d4 = fStack_1f4 * 1.35 + (float)piVar9[0x10];
          local_1d0 = fStack_1f0 * 1.35 + (float)piVar9[0x11];
          local_1cc = (float)piVar9[0x12] + fStack_16c;
          local_1c8 = fStack_1e8 * 1.35 + (float)piVar9[0x13];
          pfStack_244 = pfStack_214;
          FUN_00ddcfe0(auStack_134,auStack_184,pfVar7[0xdd]);
          D3DXVec3TransformNormal(&pfStack_244,&pfStack_244,auStack_134);
          fStack_1c0 = fStack_200;
          fStack_1bc = fStack_1fc;
          fStack_1b8 = local_1f8;
          fStack_1b4 = fStack_1f4;
          fVar13 = (float10)FUN_00ddba30((pfVar7[0xfe] + 90.0) * 0.017453292);
          FUN_00ddcfe0(auStack_140,&fStack_220,(float)fVar13);
          D3DXVec3TransformNormal(&fStack_1c0,&fStack_1c0,auStack_140);
          FUN_00ddcfe0(&fStack_14c,&uStack_19c,pfVar7[0xdd]);
          D3DXVec3TransformNormal(&local_1cc,&local_1cc,&fStack_14c);
          fStack_204 = SQRT(((float)piVar9[0x12] - (float)piVar5[0x12]) *
                            ((float)piVar9[0x12] - (float)piVar5[0x12]) +
                            ((float)piVar9[0x11] - (float)piVar5[0x11]) *
                            ((float)piVar9[0x11] - (float)piVar5[0x11]) +
                            ((float)piVar9[0x10] - (float)piVar5[0x10]) *
                            ((float)piVar9[0x10] - (float)piVar5[0x10])) * 1.5;
          fStack_130 = fStack_1b0;
          fStack_12c = fStack_1ac;
          fStack_128 = fStack_1a8;
          fStack_124 = fStack_1a4;
          fStack_148 = fStack_218 * fStack_204;
          fStack_170 = fStack_1b0 + fStack_220 * fStack_204;
          iVar20 = 0;
          fStack_16c = local_21c * fStack_204 + fStack_1ac;
          fStack_168 = fStack_1a8 + fStack_148;
          fStack_164 = fStack_1a4 + (float)pfStack_214 * fStack_204;
          fVar21 = 0.0;
          fVar17 = 0.0;
          fVar24 = 0.0;
          do {
            fStack_1c0 = fStack_1f0;
            fStack_1bc = fStack_1ec;
            fStack_1b8 = fStack_1e8;
            fStack_1b4 = fStack_1e4;
            FUN_00ddcfe0(auStack_110,auStack_160,puVar10[0xdd]);
            D3DXVec3TransformNormal(&fStack_1c0,&fStack_1c0,auStack_110);
            fVar13 = (float10)fpatan((float10)(float)piVar5[0x10] - (float10)(float)piVar9[0x10],
                                     (float10)(float)piVar5[0x12] - (float10)(float)piVar9[0x12]);
            fVar22 = (float)fVar13;
            iVar12 = (**(code **)(*piVar9 + 0x84))();
            FUN_00ddcfe0(&uStack_11c,&uStack_19c,
                         (float)(iVar20 + -5) * 0.08726646 - (fVar22 - *(float *)(iVar12 + 4)));
            D3DXVec3TransformNormal(&local_1cc,&local_1cc,&uStack_11c);
            fStack_170 = fStack_1b0 + fStack_1c0 * fStack_204;
            fStack_16c = fStack_1bc * fStack_204 + fStack_1ac;
            fStack_168 = fStack_1b8 * fStack_204 + fStack_1a8;
            fStack_164 = fStack_1b4 * fStack_204 + fStack_1a4;
            iVar12 = FUN_00867e00(param_1,&fStack_130,&fStack_170,&fStack_150,piVar5);
            if ((iVar12 != 0) &&
               (SQRT(((float)piVar9[0x12] - fStack_148) * ((float)piVar9[0x12] - fStack_148) +
                     ((float)piVar9[0x11] - fStack_14c) * ((float)piVar9[0x11] - fStack_14c) +
                     ((float)piVar9[0x10] - fStack_150) * ((float)piVar9[0x10] - fStack_150)) <
                100.0)) {
              fVar21 = fStack_150;
              fVar17 = fStack_14c;
              fVar24 = fStack_148;
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 < 0xb);
          if (((fVar21 != 0.0) || (fVar17 != 0.0)) || (fVar24 != 0.0)) {
            iVar12 = 0;
            bVar3 = false;
            iVar20 = 0;
            fVar22 = 100.0;
            while( true ) {
              piVar9 = (int *)piVar5[0xd8];
              piVar8 = piVar9;
              if (piVar9 == (int *)0x0) {
                piVar8 = piVar5;
              }
              if ((short)piVar8[0xd6] <= iVar12) break;
              if (piVar9 == (int *)0x0) {
                piVar9 = piVar5;
              }
              if (((iVar12 < 0) || ((short)piVar9[0xd6] <= iVar12)) ||
                 (iVar4 = piVar9[0xd4] + iVar20, iVar4 == 0)) {
LAB_00897804:
                iVar12 = iVar12 + 1;
                iVar20 = iVar20 + 0xb0;
              }
              else {
                iVar18 = iVar12;
                FID_conflict__memcpy(auStack_110,(void *)(iVar4 + 0x10),0x40);
                fVar23 = SQRT((fVar24 - fStack_d8) * (fVar24 - fStack_d8) +
                              (fVar17 - fStack_dc) * (fVar17 - fStack_dc) +
                              (fVar21 - fStack_e0) * (fVar21 - fStack_e0));
                if (fVar22 <= fVar23) goto LAB_00897804;
                bVar3 = true;
                uVar6 = FUN_00a7c7f0();
                puVar19 = puVar10;
                FUN_00a7c960(uVar6);
                puVar10[0x185] = (int)*(short *)(iVar4 + 0xa0);
                iVar12 = iVar18 + 1;
                iVar20 = iVar20 + 0xb0;
                puVar10 = puVar19;
                fVar22 = fVar23;
              }
            }
            if (bVar3) {
              return;
            }
          }
        }
      }
      uVar6 = FUN_00a7c7f0();
      FUN_00a7c960(uVar6);
      goto LAB_00897847;
    }
  }
  FUN_00a7c950();
LAB_00897847:
  puVar10[0x180] = fStack_200;
  puVar10[0x181] = fStack_1fc;
  puVar10[0x182] = local_1f8;
  puVar10[0x183] = fStack_1f4;
  return;
}

// 008D0740  lib::StaticArray<cLockOnParts,64>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<cLockOnParts,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cLockOnParts>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008D0BF0  lib::StaticArray<cLockOnParts,64>::StaticArray<cLockOnParts,64>  size=727  [class]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall
lib::StaticArray<cLockOnParts,64>::StaticArray<cLockOnParts,64>(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float unaff_EBX;
  float unaff_ESI;
  undefined1 *puVar6;
  int iVar7;
  float10 fVar8;
  float fStack_1ca4;
  float local_1ca0;
  int local_1c9c;
  undefined1 *local_1c98;
  float local_1c94;
  float fStack_1c84;
  float local_1c80 [4];
  float fStack_1c70;
  float fStack_1c6c;
  float fStack_1c68;
  float fStack_1c64;
  float fStack_1c60;
  float fStack_1c5c;
  float fStack_1c54;
  undefined4 local_1c50;
  float fStack_1c4c;
  undefined4 local_1c48;
  float fStack_1c44;
  float fStack_1c38;
  undefined **ppuStack_1c2c;
  undefined1 *puStack_1c28;
  int iStack_1c24;
  undefined4 uStack_1c20;
  undefined1 auStack_1c1c [7176];
  undefined4 uStack_14;
  
  uStack_14 = 0x8d0c00;
  iVar7 = *(int *)(param_1 + 0x4f0);
  if ((iVar7 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    iVar2 = FUN_00a7c8a0();
    local_1c50 = *(undefined4 *)(iVar2 + 0x40);
    local_1c48 = *(undefined4 *)(iVar2 + 0x48);
    local_1ca0 = *(float *)(param_1 + 0x40);
    local_1c9c = *(int *)(param_1 + 0x44);
    local_1c98 = *(undefined1 **)(param_1 + 0x48);
    local_1c94 = *(float *)(param_1 + 0x4c);
    iVar3 = FUN_00a12210(0);
    if (iVar3 != 0) {
      local_1ca0 = *(float *)(iVar3 + 0x40);
      local_1c9c = *(int *)(iVar3 + 0x44);
      local_1c98 = *(undefined1 **)(iVar3 + 0x48);
      local_1c94 = *(float *)(iVar3 + 0x4c);
    }
    local_1c80[0] = 0.0;
    local_1c80[1] = 2.0;
    local_1c80[2] = 2.5;
    D3DXVec3TransformNormal(local_1c80,local_1c80,iVar2 + 0x10);
    fStack_1c6c = unaff_ESI + 0.0;
    puStack_1c28 = auStack_1c1c;
    fStack_1c68 = param_2 * param_2 + unaff_EBX;
    fStack_1c64 = fStack_1c84 + fStack_1ca4;
    iStack_1c24 = 0;
    uStack_1c20 = 0x40;
    fStack_1c60 = local_1c80[0] + local_1ca0;
    ppuStack_1c2c = vftable;
    fStack_1c70 = unaff_EBX + 1.0;
    FUN_00c4d5f0(&ppuStack_1c2c,iVar7,0,0x40490fdb,0x42c80000);
    puVar6 = puStack_1c28;
    if (puStack_1c28 != puStack_1c28 + iStack_1c24 * 0x70) {
      do {
        if (((((puVar6[8] & 1) != 0) && (iVar2 = FUN_00c15010(&fStack_1c4c), iVar2 != 0)) &&
            (iVar2 = FUN_00c414c0(), iVar2 != 0)) && (iVar2 = FUN_00a81330(), iVar7 != iVar2)) {
          FUN_00a81330();
          piVar4 = (int *)FUN_00a7c8a0();
          fStack_1c38 = (float)piVar4[0x11];
          fVar1 = (fStack_1c44 - fStack_1c54) * (fStack_1c44 - fStack_1c54) +
                  (fStack_1c4c - fStack_1c5c) * (fStack_1c4c - fStack_1c5c);
          iVar7 = local_1c9c;
          if (((piVar4[0x139] == 0) && (iVar2 = (**(code **)(*piVar4 + 0x13c))(), iVar2 != 0)) &&
             (fVar1 < local_1c94)) {
            fVar8 = (float10)(**(code **)(*piVar4 + 0x148))();
            if ((((float10)fStack_1c38 < (float10)fStack_1c70 - fVar8) &&
                ((float10)fStack_1c70 - (float10)fStack_1c38 < (float10)26.0)) &&
               (iVar2 = FUN_008a6b40(piVar4,&stack0xffffe354,&fStack_1c6c,&fStack_1c4c), iVar2 != 0)
               ) {
              local_1c98 = puVar6;
              local_1c94 = fVar1;
            }
          }
        }
        puVar6 = puVar6 + 0x70;
      } while (puVar6 != puStack_1c28 + iStack_1c24 * 0x70);
      if (local_1c98 != (undefined1 *)0x0) {
        uVar5 = FUN_00c4d470(*(undefined4 *)(local_1c98 + 0x40));
        return uVar5;
      }
    }
  }
  return 0;
}

// 008DED80  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_4  size=410  [class]
void __fastcall lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_164;
  undefined1 local_160 [4];
  int local_15c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined **local_120;
  int *local_11c;
  int local_118;
  undefined4 local_114;
  int local_110 [67];
  
  if (*(int *)(param_1 + 0x18) == 0) {
    local_11c = local_110;
    local_118 = 0;
    local_114 = 0x40;
    local_120 = vftable;
    FUN_00a7f440(0x40005,&local_120);
    local_164 = local_11c;
    if (local_11c != local_11c + local_118) {
      do {
        FUN_00a7c930();
        iVar3 = 1;
        do {
          FUN_00a7c930();
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        iVar3 = *local_164;
        local_130 = 0;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        if (iVar4 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 + iVar4) {
          do {
            iVar1 = FUN_00a81330();
            if (iVar1 == iVar3) goto LAB_008deeee;
            iVar4 = iVar4 + 0x40;
          } while (iVar4 != *(int *)(*(int *)(param_1 + 0x1c) + 8) * 0x40 +
                            *(int *)(*(int *)(param_1 + 0x1c) + 4));
        }
        iVar3 = FUN_00a7c8a0();
        iVar3 = FUN_008dc460(*(undefined4 *)(iVar3 + 0x4ec));
        if (iVar3 != -1) {
          local_15c = iVar3;
          iVar3 = FUN_00a7c8a0();
          local_150 = *(undefined4 *)(iVar3 + 0x40);
          local_14c = *(undefined4 *)(iVar3 + 0x44);
          local_148 = *(undefined4 *)(iVar3 + 0x48);
          local_144 = *(undefined4 *)(iVar3 + 0x4c);
          iVar3 = FUN_00a7c8a0();
          local_140 = *(undefined4 *)(iVar3 + 0x90);
          local_13c = *(undefined4 *)(iVar3 + 0x94);
          local_138 = *(undefined4 *)(iVar3 + 0x98);
          local_134 = *(undefined4 *)(iVar3 + 0x9c);
          FUN_00a00a60(local_15c,0);
          (**(code **)(**(int **)(param_1 + 0x1c) + 8))(local_160);
        }
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
        FUN_00a805f0();
LAB_008deeee:
        local_164 = local_164 + 1;
      } while (local_164 != local_11c + local_118);
    }
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}

// 008E6D00  FUN_008e6d00  size=634  [callgraph]
void __fastcall FUN_008e6d00(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 auStack_50 [76];
  
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xfffffffe;
  iVar3 = *(int *)(param_1 + 0xf0);
  if (iVar3 != 0) {
    local_98 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_cc = 0;
    local_94 = 0x3f800000;
    local_a8 = 0x3f800000;
    local_bc = 0x3f800000;
    local_d0 = 0x3f800000;
    if (*(float *)(iVar3 + 0x98) != 0.0) {
      D3DXMatrixRotationZ(local_90,*(undefined4 *)(iVar3 + 0x98));
      D3DXMatrixMultiply(&stack0xffffff28,&local_98,&stack0xffffff28);
    }
    if (*(float *)(iVar3 + 0x94) != 0.0) {
      D3DXMatrixRotationY(local_90,*(undefined4 *)(iVar3 + 0x94));
      D3DXMatrixMultiply(&stack0xffffff28,&local_98,&stack0xffffff28);
    }
    if (*(float *)(iVar3 + 0x90) != 0.0) {
      D3DXMatrixRotationX(local_90,*(undefined4 *)(iVar3 + 0x90));
      D3DXMatrixMultiply(&stack0xffffff28,&local_98,&stack0xffffff28);
    }
    D3DXMatrixMultiply(auStack_50,&local_d0,iVar3 + 0xb0);
    FUN_008e43f0(*(int *)(param_1 + 0xf0) + 0x50,auStack_50);
    iVar3 = *(int *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(iVar3 + 0x5c);
    iVar3 = *(int *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(iVar3 + 0x5c);
  }
  FUN_004066f0();
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x110);
  FUN_008e2520(*(int *)(param_1 + 0x100) << 0x10 | *(uint *)(param_1 + 0x110) & 0x1f);
  puVar2 = *(undefined4 **)(param_1 + 0xd0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10c) = 1;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0x447a0000;
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e6d00();
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E6FE0  FUN_008e6fe0  size=517  [callgraph]
void __thiscall FUN_008e6fe0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  FUN_004066f0();
  iVar5 = FUN_012696c0();
  FUN_004066f0();
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((iVar5 != 0) && (uVar2 = *(uint *)(iVar5 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 1;
    puVar6[2] = puVar6[2] | 0x40;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  if ((iVar5 != 0) && (uVar2 = *(uint *)(iVar5 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 4;
    puVar6[4] = puVar6[4] | param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  iVar7 = FUN_012696c0();
  iVar7 = (int)*(char *)(iVar7 + 0x20) + iVar7 + 0x10;
  FUN_004066f0();
  if ((iVar7 != 0) && (uVar2 = *(uint *)(iVar7 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 1;
    puVar6[2] = puVar6[2] | 0x40;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  if ((iVar7 != 0) && (uVar2 = *(uint *)(iVar7 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 4;
    puVar6[4] = puVar6[4] | param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_01194c70(iVar5,1);
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 != iVar5 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e6fe0(param_2);
      iVar5 = iVar5 + 4;
    } while (iVar5 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E71F0  FUN_008e71f0  size=517  [callgraph]
void __thiscall FUN_008e71f0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  FUN_004066f0();
  iVar5 = FUN_012696c0();
  FUN_004066f0();
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((iVar5 != 0) && (uVar2 = *(uint *)(iVar5 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 1;
    puVar6[2] = puVar6[2] | 0x40;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  if ((iVar5 != 0) && (uVar2 = *(uint *)(iVar5 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 4;
    puVar6[4] = puVar6[4] & ~param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  iVar7 = FUN_012696c0();
  iVar7 = (int)*(char *)(iVar7 + 0x20) + iVar7 + 0x10;
  FUN_004066f0();
  if ((iVar7 != 0) && (uVar2 = *(uint *)(iVar7 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 1;
    puVar6[2] = puVar6[2] | 0x40;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  if ((iVar7 != 0) && (uVar2 = *(uint *)(iVar7 + 0xc), uVar2 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar6 = *puVar6 | 4;
    puVar6[4] = puVar6[4] & ~param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_01194c70(iVar5,1);
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 != iVar5 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e71f0(param_2);
      iVar5 = iVar5 + 4;
    } while (iVar5 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E7400  FUN_008e7400  size=230  [callgraph]
void __thiscall FUN_008e7400(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  iVar2 = _tls_index;
  if (iVar3 != 0) {
    FUN_004066f0();
    puVar4 = (uint *)(-(uint)(*(uint *)(iVar3 + 0xc) != 0) & *(uint *)(iVar3 + 0xc));
    *puVar4 = *puVar4 | 8;
    puVar4[5] = param_2;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_01194c70(iVar3,1);
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e7400(param_2);
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E74F0  FUN_008e74f0  size=230  [callgraph]
void __thiscall FUN_008e74f0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  iVar2 = _tls_index;
  if (iVar3 != 0) {
    FUN_004066f0();
    puVar4 = (uint *)(-(uint)(*(uint *)(iVar3 + 0xc) != 0) & *(uint *)(iVar3 + 0xc));
    *puVar4 = *puVar4 | 2;
    puVar4[3] = param_2;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_01194c70(iVar3,1);
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e74f0(param_2);
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E76D0  lib::StaticArray<CharacterControl*,8>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<CharacterControl*,8>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<CharacterControl*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008E8220  lib::StaticArray<CharacterControl*,8>::StaticArray<CharacterControl*,8>  size=265  [class]
undefined4 * __fastcall
lib::StaticArray<CharacterControl*,8>::StaticArray<CharacterControl*,8>(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[4] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 8;
  param_1[0x14] = vftable;
  param_1[0x15] = param_1 + 0x18;
  param_1[0x41] = 0;
  param_1[0x45] = 1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_00904d60();
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0x3f800000;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[100] = 0;
  param_1[0x71] = 0xffffffff;
  param_1[0x72] = 0xffffffff;
  param_1[0x74] = 0xffffffff;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x42] = 1;
  param_1[0x5a] = param_1[0x5a] | 2;
  return param_1;
}

// 008F9130  lib::StaticArray<EntityHandle,16>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<EntityHandle,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<EntityHandle>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008F9660  lib::StaticArray<EntityHandle,16>::StaticArray<EntityHandle,16>  size=30  [class]
void __fastcall lib::StaticArray<EntityHandle,16>::StaticArray<EntityHandle,16>(undefined4 *param_1)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 0x10;
  *param_1 = vftable;
  param_1[0x14] = 0;
  return;
}

// 00901880  lib::StaticArray<hkpCollidable_const*,256>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<hkpCollidable_const*,256>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<hkpCollidable_const*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00902130  lib::StaticArray<hkpCollidable_const*,256>::StaticArray<hkpCollidable_const*,256>  size=100  [class]
void __fastcall
lib::StaticArray<hkpCollidable_const*,256>::StaticArray<hkpCollidable_const*,256>(int *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (*param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x414);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = Phantom::OverlapCollector::vftable;
      puVar2[2] = puVar2 + 5;
      puVar2[3] = 0;
      puVar2[4] = 0x100;
      puVar2[1] = vftable;
      param_1[3] = (int)puVar2;
      FUN_011a31e0(puVar2);
      return;
    }
    param_1[3] = 0;
    FUN_011a31e0(0);
  }
  return;
}

// 0093A540  FUN_0093a540  size=76  [callgraph]
void __fastcall FUN_0093a540(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (uVar2 = *(uint *)(param_1 + 0x28), uVar2 < *(uint *)(*(int *)(param_1 + 4) + 0xc))) {
    while (((*(int *)(param_1 + 0xc) != 0 &&
            (((iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4), iVar1 != 0 && (iVar1 != 1)) &&
             (iVar1 != 3)))) && ((iVar1 != 4 && (iVar1 != 5))))) {
      FUN_0093a230();
      if (*(int *)(param_1 + 4) == 0) {
        return;
      }
      uVar2 = uVar2 + 1;
      if (*(uint *)(*(int *)(param_1 + 4) + 0xc) <= uVar2) {
        return;
      }
    }
  }
  return;
}

// 0093A590  FUN_0093a590  size=304  [callgraph]
void __fastcall FUN_0093a590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar3 + 0xc);
  if ((((iVar1 == 0) || (iVar1 == 0xd)) || (iVar1 == 0xe)) || ((iVar1 == 99 || (iVar1 == 0x62)))) {
    FUN_0093a230();
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x42) = 0;
    if (*(int *)(iVar3 + 8) == 1) {
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_009849b0(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x14));
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        return;
      }
      FUN_00985d60(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x14));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
    if (*(int *)(iVar3 + 8) == 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_00cae0a0();
        FUN_009849f0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        return;
      }
      FUN_00cae000();
      FUN_00984680(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      FUN_0093a230();
      return;
    }
    if (*(int *)(iVar3 + 8) == 1) {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar3 = FUN_00984770(iVar1);
      }
      else {
        iVar3 = FUN_00984a30(iVar1);
      }
    }
    else {
      if (*(int *)(iVar3 + 8) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar3 = FUN_009847c0(iVar1);
      }
      else {
        iVar3 = FUN_00984a60(iVar1);
      }
    }
    if (iVar3 != 1) {
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}

// 0093A6C0  FUN_0093a6c0  size=211  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0093a72c) */

void __thiscall FUN_0093a6c0(int *param_1,int param_2)

{
  float10 fVar1;
  
  if (param_1[0xb] != 0) goto LAB_0093a75a;
  *(undefined1 *)((int)param_1 + 0x42) = 1;
  param_1[0xb] = 1;
  if (*(int *)(*param_1 + 8) == 0) {
    fVar1 = (float10)*(int *)(param_1[3] + 8);
    if (*(int *)(param_1[3] + 8) < 0) {
      fVar1 = fVar1 + (float10)4.2949673e+09;
    }
LAB_0093a749:
    fVar1 = fVar1 * (float10)1000.0;
  }
  else {
    fVar1 = (float10)FUN_00936960(*(undefined4 *)(param_1[1] + 0x10),param_1[10]);
    param_1[0xee] = (int)(float)fVar1;
    if (fVar1 <= (float10)0) {
      fVar1 = (float10)(*(uint *)(param_1[3] + 8) >> 0x10) +
              (float10)(*(uint *)(param_1[3] + 8) & 0xffff) * (float10)0.001;
      goto LAB_0093a749;
    }
  }
  param_1[0xd] = (int)(float)fVar1;
  fVar1 = (float10)thunk_FUN_00df81d0();
  param_1[0xe] = (int)(float)fVar1;
LAB_0093a75a:
  fVar1 = (float10)thunk_FUN_00df81d0();
  param_1[0xc] = (int)(float)((fVar1 - (float10)(float)param_1[0xe]) + (float10)(float)param_1[0xc])
  ;
  param_1[0xe] = (int)(float)fVar1;
  if ((((float)param_1[0xd] < (float)param_1[0xc]) || (param_2 != 0)) ||
     ((char)param_1[0x11] != '\0')) {
    FUN_0093a230();
  }
  return;
}

// 0093A7A0  FUN_0093a7a0  size=1174  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0093a7a0(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  bVar8 = false;
  if (*(char *)((int)param_1 + 0x43) != '\0') {
    if (param_2 != 1) {
      return;
    }
    FUN_0093a230();
    *(undefined1 *)((int)param_1 + 0x43) = 0;
    return;
  }
  if (param_1[0xb] == 0) {
    *(undefined1 *)((int)param_1 + 0x42) = 1;
    param_1[0xc] = 0;
    param_1[0xb] = 1;
    param_1[0xd] = 0;
    fVar9 = (float10)thunk_FUN_00df81d0();
    param_1[0xe] = (int)(float)fVar9;
    if (param_1[5] == 0) {
      FUN_00cae000();
    }
    else {
      FUN_00cae0a0();
    }
    iVar6 = *(int *)(param_1[3] + 0xc) + 0x10 + *param_1;
    if (iVar6 != 0) {
      if (param_1[5] == 0) {
        _DAT_01dc3d4c = 0;
      }
      else {
        _DAT_01dc3d68 = 0;
      }
      iVar4 = _DAT_01dc3d68;
      if ((char)param_1[0x11] == '\0') {
        iVar4 = FUN_00e5e050(iVar6,1);
        param_1[0xf] = iVar4;
        if (param_1[5] == 0) {
          _DAT_01dc3d4c = iVar4;
          iVar4 = _DAT_01dc3d68;
        }
      }
      _DAT_01dc3d68 = iVar4;
      iVar4 = param_1[1];
      if ((iVar4 == 0) ||
         ((*(int *)(iVar4 + 4) != 4 && ((iVar4 == 0 || (*(int *)(iVar4 + 4) != 5)))))) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      uVar11 = 0xffffffff;
      uVar10 = 0;
      if (param_1[5] == 0) {
        uVar5 = FUN_00e03ea0(iVar6);
        FUN_00ce3040(uVar5,uVar10,uVar11,uVar12);
      }
      else {
        uVar5 = FUN_00e03ea0(iVar6,0,0xffffffff,uVar12);
        FUN_00ce30b0(uVar5,uVar10,uVar11,uVar12);
      }
      bVar8 = true;
    }
    if ((char)param_1[0x11] == '\0') {
      if ((param_1[1] == 0) || (*(int *)(param_1[1] + 4) != 0)) {
        iVar6 = param_1[3];
        if ((*(int *)(iVar6 + 0xc) != 99) && (*(int *)(iVar6 + 0xc) != 0x62)) {
          iVar4 = FUN_00416910(0x30);
          if (param_1[5] != 0) {
            if (iVar4 == 0) {
              uVar12 = *(undefined4 *)(iVar6 + 0x18);
              uVar10 = *(undefined4 *)(iVar6 + 8);
            }
            else {
              uVar12 = *(undefined4 *)(iVar6 + 0x10);
              uVar10 = *(undefined4 *)(iVar6 + 8);
            }
            goto LAB_0093a982;
          }
          if (iVar4 == 0) {
            FUN_00984810(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0x18));
          }
          else {
            FUN_00984810(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0x10));
          }
        }
      }
      else {
        iVar6 = param_1[3];
        iVar4 = *(int *)(iVar6 + 0xc);
        if (((iVar4 != 99) && (iVar4 != 0)) && (iVar4 != 0x62)) {
          iVar4 = FUN_00416910(0x30);
          if (param_1[5] == 0) {
            if (iVar4 == 0) {
              FUN_00984810(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0x18));
            }
            else {
              FUN_00984810(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0x10));
            }
          }
          else {
            if (iVar4 == 0) {
              uVar12 = *(undefined4 *)(iVar6 + 0x18);
              uVar10 = *(undefined4 *)(iVar6 + 8);
            }
            else {
              uVar12 = *(undefined4 *)(iVar6 + 0x10);
              uVar10 = *(undefined4 *)(iVar6 + 8);
            }
LAB_0093a982:
            FUN_00984a90(uVar10,uVar12);
          }
        }
      }
    }
    if (!bVar8) {
      if (param_1[5] == 0) {
        FUN_00ce3040(*(undefined4 *)(param_1[3] + 0xc),0,0xffffffff,0);
      }
      else {
        FUN_00ce30b0(*(undefined4 *)(param_1[3] + 0xc),0,0xffffffff,0);
      }
      iVar6 = FUN_00e5e050("rr01_001_001",1);
      param_1[0xf] = iVar6;
    }
    iVar6 = param_1[3];
    if (*(int *)(iVar6 + 0x14) == 0) {
      param_1[0xb] = 2;
    }
    if ((char)param_1[0x11] != '\0') {
      return;
    }
    if (*(int *)(iVar6 + 8) == 99) {
      bVar1 = *(byte *)(iVar6 + 0x1f);
      param_1[7] = (uint)bVar1;
      bVar2 = *(byte *)(iVar6 + 0x1e);
      param_1[8] = (uint)bVar2;
      bVar3 = *(byte *)(iVar6 + 0x1d);
      param_1[9] = (uint)bVar3;
      iVar6 = FUN_00c19c00((uint)bVar1,(uint)bVar2,(uint)bVar3);
      param_1[6] = iVar6;
    }
    else {
      if (*(int *)(iVar6 + 8) != 0) goto LAB_0093aa5b;
      bVar1 = *(byte *)(iVar6 + 0x1f);
      param_1[7] = (uint)bVar1;
      bVar2 = *(byte *)(iVar6 + 0x1e);
      param_1[8] = (uint)bVar2;
      bVar3 = *(byte *)(iVar6 + 0x1d);
      param_1[9] = (uint)bVar3;
      if (((bVar1 == 99) && (bVar2 == 99)) && (bVar3 == 99)) {
        piVar7 = (int *)FUN_00c13920();
        iVar6 = (**(code **)(*piVar7 + 0x28))(0xffffffff);
        param_1[6] = iVar6;
      }
      iVar6 = param_1[6];
    }
    if (iVar6 != 0) {
      *(undefined1 *)((int)param_1 + 0x46) = 1;
    }
LAB_0093aa5b:
    if ((char)param_1[0x11] == '\0') {
      param_1[0xd] = 0x447a0000;
      fVar9 = (float10)thunk_FUN_00df81d0();
      param_1[0xe] = (int)(float)fVar9;
    }
    return;
  }
  if (param_1[0xb] == 1) {
    fVar9 = (float10)thunk_FUN_00df81d0();
    param_1[0xc] = (int)(float)((fVar9 - (float10)(float)param_1[0xe]) +
                               (float10)(float)param_1[0xc]);
    param_1[0xe] = (int)(float)fVar9;
    if ((char)param_1[0x11] == '\0') {
      if (param_1[0xf] != 0) {
        fVar9 = (float10)thunk_FUN_00df81d0();
        param_1[0xc] = (int)(float)((fVar9 - (float10)(float)param_1[0xe]) +
                                   (float10)(float)param_1[0xc]);
        param_1[0xe] = (int)(float)fVar9;
        iVar6 = thunk_FUN_00e58ed0(param_1[0xf]);
        if (iVar6 != 0) goto LAB_0093aad7;
      }
      if ((float)param_1[0xd] < (float)param_1[0xc]) {
        param_1[0xb] = param_1[0xb] + 1;
      }
    }
    else {
      fVar9 = (float10)thunk_FUN_00df81d0();
      param_1[0xc] = (int)(float)((fVar9 - (float10)(float)param_1[0xe]) +
                                 (float10)(float)param_1[0xc]);
      param_1[0xe] = (int)(float)fVar9;
      if (200.0 < (float)param_1[0xc]) {
        param_1[0xb] = param_1[0xb] + 1;
        return;
      }
    }
LAB_0093aad7:
    if (param_1[0xe2] == 0) {
      if (*(char *)((int)param_1 + 0x46) != '\0') {
        FUN_009369d0();
      }
    }
    else {
      FUN_00936a20(param_1[3]);
    }
  }
  if (param_1[0xb] != 2) {
    if (param_2 != 1) {
      return;
    }
    if ((float)param_1[0xc] <= 200.0) {
      return;
    }
  }
  if (*(int *)(param_1[3] + 0x14) == 1) {
LAB_0093ab70:
    FUN_00e5ca30(param_1[0xf],0);
    param_1[0xf] = 0;
    if ((param_1[1] == 0) || (*(int *)(param_1[1] + 4) != 0)) {
      iVar6 = param_1[3];
      if ((*(int *)(iVar6 + 0xc) != 99) && (*(int *)(iVar6 + 0xc) != 0x62)) {
        if (param_1[5] != 0) {
          uVar12 = *(undefined4 *)(iVar6 + 8);
          goto LAB_0093abed;
        }
        FUN_00984810(*(undefined4 *)(iVar6 + 8),100);
      }
    }
    else {
      iVar6 = param_1[3];
      iVar4 = *(int *)(iVar6 + 0xc);
      if (((iVar4 != 99) && (iVar4 != 0)) && (iVar4 != 0x62)) {
        if (param_1[5] == 0) {
          FUN_00984810(*(undefined4 *)(iVar6 + 8),100);
        }
        else {
          uVar12 = *(undefined4 *)(iVar6 + 8);
LAB_0093abed:
          FUN_00984a90(uVar12,100);
        }
      }
    }
    if (param_2 != 1) goto LAB_0093ac0f;
  }
  else {
    if (param_2 != 1) goto LAB_0093ac0f;
    if (200.0 < (float)param_1[0xc]) goto LAB_0093ab70;
  }
  if ((float)param_1[0xc] <= 200.0) {
    return;
  }
LAB_0093ac0f:
  FUN_0093a230();
  return;
}

// 0093AC40  FUN_0093ac40  size=231  [callgraph]
void __fastcall FUN_0093ac40(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    DAT_01b360a4 = iVar1;
    return;
  }
  if (iVar1 == 1) {
    cVar2 = FUN_00cac640(4,0);
    if (cVar2 == '\0') {
      cVar2 = FUN_00cac640(8,0);
      if ((cVar2 != '\0') && (DAT_01b360a4 = DAT_01b360a4 + -1, DAT_01b360a4 < 0)) {
        DAT_01b360a4 = 1;
      }
    }
    else {
      DAT_01b360a4 = DAT_01b360a4 + 1;
      if (1 < DAT_01b360a4) {
        DAT_01b360a4 = 0;
      }
    }
    cVar2 = FUN_00ce12f0(0);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      *(uint *)(param_1 + 0x2c) = (DAT_01b360a4 != 0) + 3;
      return;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x2c) = 4;
      return;
    }
    if (iVar1 == 4) {
      if (DAT_01b360a4 == 0) {
        FUN_0093a4d0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
        return;
      }
      FUN_0093a4d0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10));
    }
  }
  return;
}

// 0093AD30  FUN_0093ad30  size=19  [callgraph]
void __fastcall FUN_0093ad30(int param_1)

{
  undefined4 uStack00000004;
  
  *(undefined1 *)(param_1 + 0x42) = 0;
  uStack00000004 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
  FUN_0093a4d0();
  return;
}

// 0093AD50  FUN_0093ad50  size=245  [callgraph]
void __fastcall FUN_0093ad50(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    if ((((iVar1 != 0) && (iVar1 != 0xd)) && (iVar1 != 0xe)) && ((iVar1 != 99 && (iVar1 != 0x62))))
    {
      FUN_009845e0(iVar1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
    FUN_009845d0();
LAB_0093ad94:
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    return;
  }
  if (iVar1 == 1) {
    iVar1 = FUN_00984600();
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
      if ((((iVar1 == 2) || (iVar1 == 0x1e)) || (iVar1 == 0x1f)) ||
         ((((iVar1 == 0x20 || (iVar1 == 0x21)) ||
           ((iVar1 == 0x22 || ((iVar1 == 0x46 || (iVar1 == 0x47)))))) || (iVar1 == 0x48)))) {
        *(undefined4 *)(param_1 + 0x2c) = 3;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return;
      }
      goto LAB_0093ad94;
    }
  }
  else {
    if (iVar1 == 2) {
      FUN_0093a230();
      return;
    }
    if (iVar1 == 3) {
      fVar2 = (float10)FUN_00e03a90(0);
      fVar2 = fVar2 * (float10)0.016666668 + (float10)*(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x30) = (float)fVar2;
      if ((float10)1 < fVar2 != ((float10)1 == fVar2)) {
        DAT_01bea094 = DAT_01bea094 | 0x100000;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
    }
  }
  return;
}

// 0093AE50  FUN_0093ae50  size=885  [callgraph]
void __thiscall FUN_0093ae50(int *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *local_2c;
  int local_28;
  uint local_24;
  float local_1c;
  
  iVar3 = FUN_00f96440(0xfffffffd);
  if (iVar3 != 0) {
    iVar3 = FUN_00dd93a0(0x9d);
    if (iVar3 != 0) {
      iVar3 = FUN_00dd94c0(0x8f);
      if (iVar3 != 0) {
        piVar1 = param_1 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          param_1[1] = 0;
        }
      }
      iVar3 = FUN_00dd94c0(0x8c);
      if ((iVar3 != 0) && (param_1[1] = param_1[1] + 1, 5 < param_1[1])) {
        param_1[1] = 6;
      }
    }
    param_1[2] = param_2;
    if (param_2 == 0) {
      puVar5 = &DAT_01b360a8;
      local_2c = &DAT_01b360a8;
    }
    else {
      local_2c = &DAT_018863a8;
      puVar5 = &DAT_018863a8;
    }
    if ((*(int *)(puVar5 + param_1[1] * 4) == 0) || (*(int *)(puVar5 + param_1[1] * 4 + 0x18) == 0))
    {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(*(int *)(puVar5 + param_1[1] * 4 + 0x18) + 4);
    }
    iVar3 = 0;
    if (((DAT_01bea060 & 0x800000) == 0) && (iVar4 = FUN_00dd93a0(0x9b), iVar4 != 0)) {
      iVar4 = FUN_00dd94c0(0x8f);
      if ((iVar4 != 0) && (*param_1 = *param_1 + -1, *param_1 < 0)) {
        *param_1 = 0;
      }
      iVar4 = FUN_00dd94c0(0x8c);
      if ((iVar4 != 0) && (*param_1 = *param_1 + 1, (int)uVar7 <= *param_1)) {
        *param_1 = uVar7 - 1;
      }
      iVar4 = FUN_00dd9400(10);
      if (iVar4 != 0) {
        FUN_00938ab0(*param_1,param_1[1],0,0);
      }
      iVar4 = FUN_00dd9400(8);
      if (iVar4 != 0) {
        FUN_009395c0();
      }
    }
    FUN_00f96580(0x443b8000,0x42f00000,0x41400000,0xffffffff,0xfffffffd,
                 "BufferNo [MOVE:ALT and UPorDOWN]");
    FUN_00f96580(0x443b8000,0x43060000,0x41400000,0xffffffff,0xfffffffd,"[%02d/%02d]",param_1[1],6);
    FUN_00f96580(0x443b8000,0x43140000,0x41400000,0xffffffff,0xfffffffd,
                 "List [MOVE:CTRL and UPorDOWN, PLAY:CTRL and ENTER]");
    if (uVar7 == 0) {
      uVar8 = 0;
      iVar4 = 0;
    }
    else {
      iVar4 = *param_1 + 1;
      uVar8 = uVar7;
    }
    FUN_00f96580(0x443b8000,0x43220000,0x41400000,0xffffffff,0xfffffffd,"[%d/%d]",iVar4,uVar8);
    fVar2 = 176.0;
    local_1c = 176.0;
    local_24 = 0;
    if (uVar7 != 0) {
      local_28 = 0;
      do {
        iVar4 = param_1[1];
        if ((((*(int *)(local_2c + iVar4 * 4) != 0) && (*(int *)(local_2c + iVar4 * 4 + 0x18) != 0))
            && (local_24 < *(uint *)(*(int *)(local_2c + iVar4 * 4 + 0x18) + 4))) &&
           (puVar6 = (undefined4 *)(*(int *)(local_2c + iVar4 * 4 + 0x30) + local_28),
           puVar6 != (undefined4 *)0x0)) {
          if ((int)uVar7 < 10) {
LAB_0093b16b:
            if ((int)(uVar7 - 10) <= iVar3) {
              FUN_00f96580(0x443b8000,fVar2,0x41400000,(-(uint)(iVar3 != *param_1) & 0xff) - 0x100,
                           0xfffffffd,"%03d:%s",*puVar6,puVar6 + 5);
              fVar2 = local_1c + 14.0;
              local_1c = fVar2;
            }
          }
          else {
            iVar4 = *param_1;
            if ((int)uVar7 < iVar4 + 10) goto LAB_0093b16b;
            if ((iVar4 <= iVar3) && (iVar3 < iVar4 + 10)) {
              FUN_00f96580(0x443b8000,fVar2,0x41400000,(-(uint)(iVar3 != iVar4) & 0xff) - 0x100,
                           0xfffffffd,"%03d:%s",*puVar6,puVar6 + 5);
              fVar2 = local_1c + 14.0;
              local_1c = fVar2;
            }
          }
          iVar3 = iVar3 + 1;
        }
        local_28 = local_28 + 0x24;
        local_24 = local_24 + 1;
      } while (local_24 < uVar7);
    }
  }
  return;
}

// 0093B230  lib::StaticArray<unsigned_int,128>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<unsigned_int,128>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<unsigned_int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093B260  FUN_0093b260  size=574  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0093b260(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  if (*(char *)(param_1 + 0x40) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x41) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  cVar4 = '\0';
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x42) == '\x01')) {
    cVar4 = '\x01';
  }
  if (((((iVar2 == 2) || (iVar2 == 0x1e)) || (iVar2 == 0x1f)) ||
      ((iVar2 == 0x14 || (iVar2 == 0x15)))) &&
     (((((*(char *)(param_1 + 0x42) == '\x01' &&
         ((iVar2 = FUN_00a4c810(0xfffffffe), iVar2 != 0 && (iVar2 = FUN_00d45b10(), iVar2 != 0))))
        && (iVar2 = FUN_009c56a0(), iVar2 == 0)) &&
       ((((iVar2 = FUN_00ca5a30(), iVar2 == 0 && (iVar2 = FUN_00ca5630(), iVar2 != 0)) &&
         (*(int *)(param_1 + 0x3a0) != 0)) &&
        ((*(int *)(param_1 + 0x3a4) != 0 && (DAT_018b9174 == *(int *)(param_1 + 0x3a4))))))) &&
      (iVar2 = FUN_00d4f040(*(int *)(param_1 + 0x3a0),1), iVar2 != 0)))) {
    cVar4 = '\x01';
  }
  else if (cVar4 == '\0') goto LAB_0093b32e;
  FUN_00984990(1);
LAB_0093b32e:
  cVar1 = FUN_00cac7e0(0x80,0);
  if ((((cVar1 != '\0') || (iVar2 = FUN_00dd94c0(0x5a), iVar2 != 0)) ||
      (cVar1 = FUN_00cac970(), cVar1 != '\0')) &&
     ((*(char *)(param_1 + 0x41) == '\0' && (*(char *)(param_1 + 0x44) == '\0')))) {
    *(char *)(param_1 + 0x41) = cVar4;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    if (iVar2 == 0) {
      FUN_0093a590((int)*(char *)(param_1 + 0x41));
      *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
    }
    else if ((((iVar2 == 1) || (iVar2 == 2)) && (*(int *)(param_1 + 0x28) == 0)) &&
            (*(int *)(param_1 + 0x3c0) != -1)) {
      FUN_00936ad0((int)*(char *)(param_1 + 0x41));
    }
    else if (iVar2 == 1) {
      FUN_0093a7a0((int)*(char *)(param_1 + 0x41));
    }
    else if (iVar2 == 2) {
      FUN_0093a6c0((int)*(char *)(param_1 + 0x41));
    }
    else if (iVar2 == 3) {
      FUN_0093ac40((int)*(char *)(param_1 + 0x41));
    }
    else if (iVar2 == 4) {
      FUN_0093ad30((int)*(char *)(param_1 + 0x41));
    }
    else if (iVar2 == 5) {
      FUN_0093ad50((int)*(char *)(param_1 + 0x41));
    }
  }
  if ((*(char *)(param_1 + 0x41) == '\x01') && (*(char *)(param_1 + 0x43) == '\0')) {
    FUN_0093a540();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (0 < *(int *)(param_1 + 0x150)) {
      iVar2 = *(int *)(param_1 + 0x150) + -1;
      *(int *)(param_1 + 0x150) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x150) = 0;
      }
      if ((undefined4 *)(param_1 + 0x50) != (undefined4 *)0x0) {
        uVar3 = FUN_009390b0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                             *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58));
        *(char *)(param_1 + 0x40) = (char)uVar3;
        if (*(int *)(param_1 + 0x14) == 0) {
          _DAT_0188dd78 = uVar3;
          FUN_00936c50();
          return;
        }
        _DAT_0188dd7c = uVar3;
        FUN_00936c50();
        return;
      }
    }
  }
  return;
}

// 0093B4A0  FUN_0093b4a0  size=38  [between]
void FUN_0093b4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0(param_1,param_2,param_3);
  FUN_00938db0(uVar1,param_2,param_3);
  return;
}

// 0093B520  lib::StaticArray<unsigned_int,128>::StaticArray<unsigned_int,128>_2  size=241  [class]
int __fastcall lib::StaticArray<unsigned_int,128>::StaticArray<unsigned_int,128>_2(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  iVar2 = 0xf;
  puVar1 = (undefined4 *)(param_1 + 0x58);
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[-2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)(param_1 + 0x58);
  iVar2 = 0x10;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[-2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(int *)(param_1 + 0x158) = param_1 + 0x164;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0x80;
  *(undefined ***)(param_1 + 0x154) = vftable;
  if (param_1 + 0x164 != 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00dd7240();
  if (*(int *)(param_1 + 0x158) != 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  FUN_00937530();
  puVar1 = (undefined4 *)(param_1 + 0x58);
  iVar2 = 0x10;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[-2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  *(undefined **)(param_1 + 0x10) = &DAT_01b360a8;
  return param_1;
}

// 0093B620  lib::StaticArray<unsigned_int,128>::StaticArray<unsigned_int,128>  size=265  [class]
int __thiscall
lib::StaticArray<unsigned_int,128>::StaticArray<unsigned_int,128>(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  iVar2 = 0xf;
  puVar1 = (undefined4 *)(param_1 + 0x58);
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[-2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)(param_1 + 0x58);
  iVar2 = 0x10;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[-2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(int *)(param_1 + 0x158) = param_1 + 0x164;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0x80;
  *(undefined ***)(param_1 + 0x154) = vftable;
  if (param_1 + 0x164 != 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00dd7240();
  if (*(int *)(param_1 + 0x158) != 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  FUN_00937530();
  puVar1 = (undefined4 *)(param_1 + 0x58);
  iVar2 = 0x10;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[-2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01b360a8;
    return param_1;
  }
  *(undefined **)(param_1 + 0x10) = &DAT_018863a8;
  return param_1;
}

// 00942B70  lib::StaticArray<DebrisHandleList::_DebrisHandleNode,400>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<DebrisHandleList::_DebrisHandleNode,400>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<DebrisHandleList::_DebrisHandleNode>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0094C590  lib::StaticArray<eObjId,128>::vf04  size=4  [class]
undefined4 __fastcall lib::StaticArray<eObjId,128>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 0094C5F0  lib::StaticArray<cItemPossessionBase*,64>::vf04  size=4  [class]
undefined4 __fastcall lib::StaticArray<cItemPossessionBase*,64>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00952810  lib::StaticArray<Entity*,10>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,10>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009528A0  lib::StaticArray<eObjId,128>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<eObjId,128>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<eObjId>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00954330  lib::StaticArray<stItemFieldInstallationUnit*,32>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<stItemFieldInstallationUnit*,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<stItemFieldInstallationUnit*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00954360  lib::StaticArray<eObjId,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<eObjId,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<eObjId>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00954390  lib::StaticArray<cItemPossessionBase*,64>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<cItemPossessionBase*,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cItemPossessionBase*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009543C0  lib::StaticArray<stItemDropEmObjUnit*,16>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<stItemDropEmObjUnit*,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<stItemDropEmObjUnit*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009543F0  lib::StaticArray<cItemStageDrop*,64>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<cItemStageDrop*,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cItemStageDrop*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00954E50  lib::StaticArray<Hw::cVec3,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Hw::cVec3,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Hw::cVec3>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00957040  lib::StaticArray<Hw::cVec3,32>::StaticArray<Hw::cVec3,32>  size=748  [class]
int * lib::StaticArray<Hw::cVec3,32>::StaticArray<Hw::cVec3,32>
                (float *param_1,int param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  uint uVar8;
  int *piVar9;
  int local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  int local_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined **ppuStack_1a0;
  float *pfStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  float afStack_190 [99];
  
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  iVar5 = FUN_00d466f0();
  if (iVar5 != 0) {
    local_1ac = (int)param_3;
    piVar9 = (int *)0x0;
    iVar5 = FUN_0094c060(param_2,local_1ac);
    if (iVar5 == 0) {
      local_1c0 = *param_1;
      local_1bc = param_1[1];
      local_1b8 = param_1[2];
      local_1b4 = param_1[3];
      if (((DAT_018b9174 == 0xd40) && (param_2 == 0x3855170f)) && (param_3 == '\b')) {
        piVar6 = (int *)FUN_00a6e640();
        iVar5 = (**(code **)(*piVar6 + 0x2c))(param_1,30000,1);
        if (iVar5 != 0) {
          pfStack_19c = afStack_190;
          iStack_198 = 0;
          uStack_194 = 0x20;
          ppuStack_1a0 = vftable;
          uVar8 = 1;
          do {
            iVar5 = FUN_00c84800(uVar8,&fStack_1dc);
            if (iVar5 != 0) {
              Array<Hw::cVec3>::vf08(&fStack_1dc);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0xe);
          fStack_1dc = 0.0;
          fStack_1d8 = 0.0;
          fStack_1d4 = 0.0;
          if (pfStack_19c != pfStack_19c + iStack_198 * 3) {
            fStack_1a4 = param_1[1];
            fStack_1a8 = param_1[2];
            fVar1 = 100.0;
            pfVar7 = pfStack_19c;
            do {
              fVar2 = *param_1 - *pfVar7;
              fVar3 = fStack_1a4 - pfVar7[1];
              fVar4 = fStack_1a8 - pfVar7[2];
              fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
              if (fVar2 < fVar1 != (fVar2 == fVar1)) {
                fVar1 = fVar2;
                fStack_1dc = *pfVar7;
                fStack_1d8 = pfVar7[1];
                fStack_1d4 = pfVar7[2];
              }
              pfVar7 = pfVar7 + 3;
            } while (pfVar7 != pfStack_19c + iStack_198 * 3);
          }
          local_1c0 = fStack_1dc;
          local_1bc = fStack_1d8;
          local_1b8 = fStack_1d4;
        }
      }
      local_1d0 = 0.0;
      local_1cc = 0.0;
      local_1c8 = 0.0;
      local_1c4 = 1.0;
      local_1e0 = 0;
      iVar5 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                        (&local_1d0,&local_1e0,&local_1c0,0x40000000,0x41200000,
                         "CollectableDlcCheck");
      if (iVar5 == 0) {
        local_1d0 = local_1c0;
        local_1cc = local_1bc;
        local_1c8 = local_1b8;
        local_1c4 = local_1b4;
      }
      else {
        local_1cc = local_1cc + 0.5;
      }
      iVar5 = FUN_0094dfd0(param_2);
      if (iVar5 != 0) {
        FUN_00e5e080("core_se_sys_item_drop",&local_1d0,0,0xffffffff,0);
        piVar9 = (int *)FUN_00952950(iVar5,&local_1d0);
        if (piVar9 != (int *)0x0) {
          piVar9[0x19] = local_1e0;
          (**(code **)(*piVar9 + 0x14))();
          (**(code **)(*piVar9 + 0x24))();
          FUN_00950a70(piVar9);
          FUN_0094f250(local_1ac);
        }
      }
      if (DAT_01b37398 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
      }
      return piVar9;
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return (int *)0x0;
}

// 00958650  lib::StaticArray<stQTEPositionParam*,64>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<stQTEPositionParam*,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<stQTEPositionParam*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095F110  lib::StaticArray<Entity*,128>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,128>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0095F140  FUN_0095f140  size=285  [between]
undefined4 FUN_0095f140(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_50 = local_40;
  uVar1 = 0;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  FUN_00a814d0(&local_54,0x40501);
  if (0 < local_48) {
    puVar2 = local_50;
    if (local_50 != local_50 + local_48 * 4) {
      do {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c940(uVar1);
        uVar1 = extraout_ECX;
        FUN_00a7c940(local_58);
        FUN_0095e440(uVar1);
        puVar2 = puVar2 + 4;
      } while (puVar2 != local_50 + local_48 * 4);
    }
    uVar1 = 1;
  }
  local_48 = 0;
  FUN_00a814d0(&local_54,0x40520);
  if (0 < local_48) {
    puVar2 = local_50;
    if (local_50 != local_50 + local_48 * 4) {
      do {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c940(uVar1);
        uVar1 = extraout_ECX_00;
        FUN_00a7c940(local_58);
        FUN_0095e440(uVar1);
        puVar2 = puVar2 + 4;
      } while (puVar2 != local_50 + local_48 * 4);
    }
    uVar1 = 1;
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return uVar1;
}

// 0095F260  FUN_0095f260  size=285  [between]
undefined4 FUN_0095f260(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_50 = local_40;
  uVar1 = 0;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  FUN_00a814d0(&local_54,0x40501);
  if (0 < local_48) {
    puVar2 = local_50;
    if (local_50 != local_50 + local_48 * 4) {
      do {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c940(uVar1);
        uVar1 = extraout_ECX;
        FUN_00a7c940(local_58);
        FUN_0095e690(uVar1);
        puVar2 = puVar2 + 4;
      } while (puVar2 != local_50 + local_48 * 4);
    }
    uVar1 = 1;
  }
  local_48 = 0;
  FUN_00a814d0(&local_54,0x40520);
  if (0 < local_48) {
    puVar2 = local_50;
    if (local_50 != local_50 + local_48 * 4) {
      do {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c940(uVar1);
        uVar1 = extraout_ECX_00;
        FUN_00a7c940(local_58);
        FUN_0095e690(uVar1);
        puVar2 = puVar2 + 4;
      } while (puVar2 != local_50 + local_48 * 4);
    }
    uVar1 = 1;
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return uVar1;
}

// 0095F380  lib::StaticArray<Entity*,128>::StaticArray<Entity*,128>  size=200  [class]
void __fastcall lib::StaticArray<Entity*,128>::StaticArray<Entity*,128>(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined **local_210;
  undefined1 *local_20c;
  int local_208;
  undefined4 local_204;
  undefined1 local_200 [512];
  
  local_20c = local_200;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_208 = 0;
  local_204 = 0x80;
  local_210 = vftable;
  StaticArray<Entity*,256>::StaticArray<Entity*,256>_3(&local_210);
  puVar2 = local_20c;
  if (local_20c != local_20c + local_208 * 4) {
    do {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 != 0) &&
         ((((iVar1 = FUN_00a7c8a0(), *(int *)(iVar1 + 0x4b0) == 0x2c300 ||
            (iVar1 = FUN_00a7c8a0(), *(int *)(iVar1 + 0x4b0) == 0x2c330)) ||
           (iVar1 = FUN_00a7c8a0(), *(int *)(iVar1 + 0x4b0) == 0x21010)) ||
          (iVar1 = FUN_00a7c8a0(), *(int *)(iVar1 + 0x4b0) == 0x2c310)))) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != local_20c + local_208 * 4);
  }
  return;
}

// 0095F510  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_2  size=168  [class]
void __fastcall lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_2(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined **local_110;
  int *local_10c;
  int local_108;
  undefined4 local_104;
  int local_100 [64];
  
  if (*(int *)(param_1 + 0x20) != 0x12040) {
    local_10c = local_100;
    local_108 = 0;
    local_104 = 0x40;
    local_110 = vftable;
    iVar2 = StaticArray<Entity*,256>::StaticArray<Entity*,256>_3(&local_110);
    if ((0 < iVar2) && (piVar1 = local_10c + local_108, local_10c != piVar1)) {
      while ((*local_10c == 0 || (*(int *)(*local_10c + 0x24) != 0x12040))) {
        local_10c = local_10c + 1;
        if (local_10c == piVar1) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0x12040;
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  return;
}

// 0095F5C0  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>  size=170  [class]
void __fastcall lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined **local_110;
  undefined1 *local_10c;
  int local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    local_10c = local_100;
    *(undefined4 *)(param_1 + 0x14) = 0;
    local_108 = 0;
    local_104 = 0x40;
    local_110 = vftable;
    StaticArray<Entity*,256>::StaticArray<Entity*,256>_3(&local_110);
    puVar2 = local_10c;
    if (local_10c != local_10c + local_108 * 4) {
      do {
        iVar1 = FUN_00a7c7e0();
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          iVar1 = *(int *)(iVar1 + 0x4b0);
          if (((iVar1 == 0x20140) || (iVar1 == 0x20142)) || (iVar1 == 0x20144)) {
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          }
        }
        puVar2 = puVar2 + 4;
      } while (puVar2 != local_10c + local_108 * 4);
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return;
}

// 0095F670  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3  size=237  [class]
void lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  undefined **local_110;
  int *local_10c;
  int local_108;
  undefined4 local_104;
  int local_100 [64];
  
  DAT_01bea074 = DAT_01bea074 | 0x8000;
  local_10c = local_100;
  local_108 = 0;
  local_104 = 0x40;
  local_110 = vftable;
  iVar1 = StaticArray<Entity*,256>::StaticArray<Entity*,256>_3(&local_110);
  if ((0 < iVar1) && (piVar3 = local_10c, local_10c != local_10c + local_108)) {
    do {
      if ((*piVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        puVar4 = &DAT_01be9c78;
        (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
        iVar1 = FUN_00dd6d80(puVar4);
        if ((((iVar1 != 0) && (iVar1 = (**(code **)(*piVar2 + 0x200))(), iVar1 != 0)) &&
            (piVar2[0x139] != 1)) &&
           ((param_1 != 1 || (iVar1 = FUN_0095b7d0(piVar2[300]), iVar1 != 0)))) {
          (**(code **)(*piVar2 + 0x34c))();
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != local_10c + local_108);
  }
  return;
}

// 0095F760  FUN_0095f760  size=58  [callgraph]
void FUN_0095f760(void)

{
  DAT_01bea090 = DAT_01bea090 | 0x80c400;
  DAT_01bea094 = DAT_01bea094 | 0x48000100;
  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_3(1);
  DAT_01bea064 = DAT_01bea064 | 0x8000000;
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  return;
}

// 00A561D0  lib::StaticArray<AntiqueScrollMultiple,20>::vf04  size=4  [class]
undefined4 __fastcall lib::StaticArray<AntiqueScrollMultiple,20>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00A5FEB0  lib::StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cAntiqueScrollWork::TunnelEntityHolder>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A60250  lib::StaticArray<eObjId,10>::StaticArray<eObjId,10>  size=57  [class]
undefined4 * __thiscall
lib::StaticArray<eObjId,10>::StaticArray<eObjId,10>(undefined4 *param_1,int param_2)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 10;
  *param_1 = vftable;
  FUN_00a5d370(*(int *)(param_2 + 4),*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 4);
  return param_1;
}

// 00A603A0  FUN_00a603a0  size=88  [callgraph]
undefined2 * __fastcall FUN_00a603a0(undefined2 *param_1)

{
  cXmlBinary::cXmlBinary();
  FUN_00a7c930();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  return param_1;
}

// 00A60F10  lib::StaticArray<eObjId,10>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<eObjId,10>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<eObjId>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A61140  lib::StaticArray<stHostageUnit*,16>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<stHostageUnit*,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<stHostageUnit*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A61170  lib::StaticArray<stHostageGroupUnit*,16>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<stHostageGroupUnit*,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<stHostageGroupUnit*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A611A0  FUN_00a611a0  size=38  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a611a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00A611D0  FUN_00a611d0  size=74  [between]
void __fastcall FUN_00a611d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
    while (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
      FUN_00dd4920(iVar1);
      iVar1 = iVar2;
    }
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00A61270  lib::StaticArray<int,10>::StaticArray<int,10>  size=57  [class]
undefined4 * __thiscall
lib::StaticArray<int,10>::StaticArray<int,10>(undefined4 *param_1,int param_2)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 10;
  *param_1 = vftable;
  FUN_00a5d3c0(*(int *)(param_2 + 4),*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 4);
  return param_1;
}

// 00A612B0  lib::StaticArray<AntiqueScrollMultiple::sOffset,10>::StaticArray<AntiqueScrollMultiple::sOffset,10>  size=60  [class]
undefined4 * __thiscall
lib::StaticArray<AntiqueScrollMultiple::sOffset,10>::StaticArray<AntiqueScrollMultiple::sOffset,10>
          (undefined4 *param_1,int param_2)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 10;
  *param_1 = vftable;
  FUN_00a5d410(*(int *)(param_2 + 4),*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 0xc);
  return param_1;
}

// 00A61310  FUN_00a61310  size=21  [between]
undefined4 * __fastcall FUN_00a61310(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00A61350  FUN_00a61350  size=239  [between]
void __fastcall FUN_00a61350(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  param_1[7] = 0;
  param_1[8] = 0;
  piVar1 = param_1 + 0x1c;
  iVar3 = 0x10;
  do {
    piVar1[-0x13] = 0;
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x2c] = -1;
  iVar3 = (**(code **)(param_1[0xdc] + 0xc))();
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)(**(code **)(param_1[0xdc] + 0x1c))(0);
    while (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(param_1[0xdc] + 0x1c))(puVar2);
      FUN_00dd4920(puVar2);
      puVar2 = puVar4;
    }
    (**(code **)(param_1[0xdc] + 8))();
  }
  FUN_00a5ed10();
  param_1[4] = (int)puVar4;
  if ((undefined4 *)param_1[2] != puVar4) {
    FUN_00a805f0();
    param_1[2] = (int)puVar4;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != puVar4) {
    if ((undefined4 *)puVar2[8] != puVar4) {
      (*(code *)**(undefined4 **)puVar2[8])(1);
      puVar2[8] = puVar4;
    }
    FUN_00a5a590();
    FUN_00dd4920(puVar2);
    *param_1 = (int)puVar4;
  }
  if ((undefined4 *)param_1[1] != puVar4) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = (int)puVar4;
  }
  return;
}

// 00A61440  FUN_00a61440  size=36  [between]
undefined4 __thiscall FUN_00a61440(undefined4 param_1,byte param_2)

{
  FUN_00a611d0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A61470  FUN_00a61470  size=20  [between]
void __fastcall FUN_00a61470(int *param_1)

{
  if ((*param_1 != 0) && (param_1[2] == 1)) {
    FUN_00a61350();
    return;
  }
  return;
}

// 00A61490  lib::StaticArray<stHostageUnit*,16>::StaticArray<stHostageUnit*,16>  size=55  [class]
void __fastcall
lib::StaticArray<stHostageUnit*,16>::StaticArray<stHostageUnit*,16>(undefined4 *param_1)

{
  param_1[5] = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = 0x10;
  param_1[4] = vftable;
  if (param_1[5] != 0) {
    param_1[6] = 0;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 00A61600  FUN_00a61600  size=423  [callgraph]
void __thiscall
FUN_00a61600(int *param_1,undefined4 *param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 unaff_retaddr;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if (param_1[0x72] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6c));
  }
  puVar4 = param_5;
  piVar3 = param_4;
  iVar2 = param_3;
  piVar5 = (int *)param_1[1];
  piVar7 = piVar5 + param_1[2];
  for (; piVar5 != piVar7; piVar5 = piVar5 + 1) {
    piVar1 = (int *)*piVar5;
    if ((*piVar1 == param_3) && ((int *)piVar1[1] == param_4)) {
      if (piVar1 != (int *)0x0) {
        piVar7 = (int *)piVar1[5];
        if (piVar7 == piVar7 + piVar1[6]) goto LAB_00a616a7;
        piVar5 = piVar7 + piVar1[6];
        goto LAB_00a61693;
      }
      break;
    }
  }
  iVar6 = FUN_00dd3500(0x60,&DAT_01b7bd48);
  if (iVar6 == 0) {
    param_4 = (int *)0x0;
  }
  else {
    param_4 = (int *)lib::StaticArray<stHostageUnit*,16>::StaticArray<stHostageUnit*,16>();
  }
  *param_4 = iVar2;
  param_4[1] = (int)piVar3;
  (**(code **)(*param_1 + 8))(&param_4);
  param_2 = (undefined4 *)FUN_00dd3500(0x10,&DAT_01b7bd48);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0xffffffff;
    param_2[3] = 0;
  }
  param_2[2] = param_4;
  param_2[3] = unaff_retaddr;
  (**(code **)(*(int *)(param_3 + 0x10) + 8))(&param_2);
  param_4[2] = param_4[2] + 1;
  goto LAB_00a6178e;
  while (piVar7 = piVar7 + 1, piVar7 != piVar5) {
LAB_00a61693:
    iVar2 = *piVar7;
    if (*(undefined4 **)(iVar2 + 8) == param_5) {
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0xc) == 0) {
          *(undefined4 **)(iVar2 + 0xc) = param_2;
        }
        else {
          FUN_00dd5650(&DAT_016628b4);
        }
        goto LAB_00a6178e;
      }
      break;
    }
  }
LAB_00a616a7:
  param_5 = (undefined4 *)FUN_00dd3500(0x10,&DAT_01b7bd48);
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)0x0;
  }
  else {
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0xffffffff;
    param_5[3] = 0;
  }
  param_5[2] = puVar4;
  param_5[3] = param_2;
  (**(code **)(piVar1[4] + 8))(&param_5);
  piVar1[2] = piVar1[2] + 1;
LAB_00a6178e:
  if (param_1[0x72] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6c));
  }
  return;
}

// 00A61830  lib::StaticArray<int,10>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<int,10>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A61860  lib::StaticArray<AntiqueScrollMultiple::sOffset,10>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<AntiqueScrollMultiple::sOffset,10>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<AntiqueScrollMultiple::sOffset>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A61970  lib::StaticArray<eObjId,10>::StaticArray<eObjId,10>  size=328  [class]
undefined4 * __thiscall
lib::StaticArray<eObjId,10>::StaticArray<eObjId,10>(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_2;
  *param_1 = *param_2;
  param_1[2] = param_1 + 5;
  param_1[3] = 0;
  param_1[4] = 10;
  param_1[1] = vftable;
  FUN_00a5d370(param_2[2],param_2[2] + param_2[3] * 4);
  param_1[0x10] = param_1 + 0x13;
  param_1[0x11] = 0;
  param_1[0x12] = 10;
  param_1[0xf] = StaticArray<int,10>::vftable;
  FUN_00a5d3c0(param_2[0x10],param_2[0x10] + param_2[0x11] * 4);
  param_1[0x1e] = param_1 + 0x21;
  param_1[0x1f] = 0;
  param_1[0x20] = 10;
  param_1[0x1d] = StaticArray<AntiqueScrollMultiple::sOffset,10>::vftable;
  FUN_00a5d410(param_2[0x1e],param_2[0x1e] + param_2[0x1f] * 0xc);
  param_1[0x3f] = param_2[0x3f];
  puVar2 = param_2 + 0x4d;
  param_1[0x40] = param_2[0x40];
  param_2 = (undefined4 *)0x9;
  param_1[0x44] = puVar1[0x44];
  param_1[0x45] = puVar1[0x45];
  param_1[0x46] = puVar1[0x46];
  param_1[0x47] = puVar1[0x47];
  param_1[0x48] = puVar1[0x48];
  param_1[0x49] = puVar1[0x49];
  param_1[0x4a] = puVar1[0x4a];
  param_1[0x4b] = puVar1[0x4b];
  param_1[0x4c] = puVar1[0x4c];
  do {
    FUN_00a7c940(puVar2);
    puVar2 = puVar2 + 1;
    param_2 = (undefined4 *)((int)param_2 + -1);
  } while (-1 < (int)param_2);
  param_1[0x57] = puVar1[0x57];
  return param_1;
}

// 00A61AC0  lib::StaticArray<eObjId,10>::StaticArray<eObjId,10>_2  size=305  [class]
undefined4 * __thiscall
lib::StaticArray<eObjId,10>::StaticArray<eObjId,10>_2
          (undefined4 *param_1,undefined4 param_2,float *param_3,undefined4 *param_4,
          undefined4 param_5,undefined4 param_6)

{
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *param_1 = param_2;
  param_1[1] = vftable;
  param_1[2] = param_1 + 5;
  param_1[3] = 0;
  param_1[4] = 10;
  param_1[0x12] = 10;
  param_1[0x11] = 0;
  param_1[0xf] = StaticArray<int,10>::vftable;
  param_1[0x10] = param_1 + 0x13;
  param_1[0x20] = 10;
  param_1[0x1f] = 0;
  param_1[0x1d] = StaticArray<AntiqueScrollMultiple::sOffset,10>::vftable;
  param_1[0x1e] = param_1 + 0x21;
  param_1[0x3f] = param_5;
  param_1[0x40] = param_6;
  param_1[0x44] = *param_3;
  local_24 = 9;
  param_1[0x45] = param_3[1];
  param_1[0x46] = param_3[2];
  param_1[0x47] = param_3[3];
  param_1[0x48] = *param_4;
  param_1[0x49] = param_4[1];
  param_1[0x4a] = param_4[2];
  param_1[0x4b] = param_4[3];
  param_1[0x4c] = 0;
  do {
    FUN_00a7c930();
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  local_20 = (float)param_1[0x48] + *param_3;
  local_1c = (float)param_1[0x49] + param_3[1];
  local_18 = (float)param_1[0x4a] + param_3[2];
  local_14 = (float)param_1[0x4b] + param_3[3];
  FUN_00a7ce90(&local_20);
  param_1[0x57] = 0;
  return param_1;
}

// 00A649B0  lib::StaticArray<AntiqueScrollMultiple,20>::vf00  size=44  [class]
undefined4 * __thiscall
lib::StaticArray<AntiqueScrollMultiple,20>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<AntiqueScrollMultiple>::vftable;
  Array<eObjId>::Array<eObjId>_4();
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A64A90  lib::StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>::StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>  size=366  [class]
undefined4 __thiscall
lib::StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>::
StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>(int param_1,int param_2)

{
  undefined4 *puVar1;
  int local_90;
  undefined1 local_8c [4];
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 0x14));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = AllocatedArray<cAntiqueScrollWork::PlaneInfo>::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  local_90 = *(int *)(param_1 + 0x14);
  FUN_00a62980(*(undefined4 *)(param_1 + 0x10),&local_90);
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  if (param_2 != 0) {
    local_90 = param_2;
    do {
      _memset(local_8c,0,0x8c);
      local_80 = (undefined4 *)FUN_00dd3500(0x810,*(undefined4 *)(param_1 + 0x14));
      if (local_80 == (undefined4 *)0x0) {
        local_80 = (undefined4 *)0x0;
      }
      else {
        local_80[1] = local_80 + 4;
        local_80[2] = 0;
        local_80[3] = 0x200;
        *local_80 = vftable;
      }
      local_7c = (undefined4 *)FUN_00dd3500(0x810,*(undefined4 *)(param_1 + 0x14));
      if (local_7c == (undefined4 *)0x0) {
        local_7c = (undefined4 *)0x0;
      }
      else {
        local_7c[1] = local_7c + 4;
        local_7c[2] = 0;
        local_7c[3] = 0x200;
        *local_7c = vftable;
      }
      local_88 = (undefined4 *)FUN_00dd3500(0x1b90,*(undefined4 *)(param_1 + 0x14));
      if (local_88 == (undefined4 *)0x0) {
        local_88 = (undefined4 *)0x0;
      }
      else {
        local_88[1] = local_88 + 4;
        local_88[2] = 0;
        local_88[3] = 0x14;
        *local_88 = StaticArray<AntiqueScrollMultiple,20>::vftable;
      }
      local_84 = (undefined4 *)FUN_00dd3500(0x1b90,*(undefined4 *)(param_1 + 0x14));
      if (local_84 == (undefined4 *)0x0) {
        local_84 = (undefined4 *)0x0;
      }
      else {
        local_84[1] = local_84 + 4;
        local_84[2] = 0;
        local_84[3] = 0x14;
        *local_84 = StaticArray<AntiqueScrollMultiple,20>::vftable;
      }
      (**(code **)(**(int **)(param_1 + 0x18) + 8))(local_8c);
      local_90 = local_90 + -1;
    } while (local_90 != 0);
  }
  return 1;
}

// 00A64C00  FUN_00a64c00  size=164  [between]
undefined4 __fastcall FUN_00a64c00(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined1 local_410 [1036];
  
  uVar3 = *(uint *)(*param_1 + 0x1c);
  if (uVar3 < 0x11) {
    param_1[4] = uVar3;
    cVar1 = lib::StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>::
            StaticArray<cAntiqueScrollWork::TunnelEntityHolder,512>(uVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_00dde2a0(0xe,0x12);
      uVar3 = 0;
      if (param_1[4] != 0) {
        do {
          local_420 = 0;
          local_41c = 0x42c80000;
          local_418 = 0;
          FUN_00a5a780(uVar3,uVar2,&local_420,uVar3 == 0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_1[4]);
      }
      param_1[3] = 1;
      return 1;
    }
  }
  else {
    FUN_00959930(local_410,&DAT_01662b1c,0x10);
  }
  return 0;
}

// 00A64CB0  FUN_00a64cb0  size=469  [between]
undefined1 __thiscall
FUN_00a64cb0(int param_1,int *param_2,float *param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 local_29;
  int *local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x324) == 0) {
    return 1;
  }
  local_20 = *param_3;
  local_29 = 1;
  local_1c = param_3[1];
  local_18 = param_3[2];
  local_14 = param_3[3];
  if ((param_2 == (int *)0x0) ||
     (((iVar2 = param_2[0xe], iVar2 != 0 && (iVar2 != 1)) && (iVar2 != 2)))) {
    return 0;
  }
  local_24 = 0;
  if (*(int *)(param_1 + 0x324) != 0) {
    local_28 = (int *)(param_1 + 0x328);
    do {
      fVar1 = 0.0;
      iVar2 = *local_28;
      if (NAN(param_6) || 0.0 < param_6 == (param_6 == 0.0)) {
        switch(iVar2) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 6:
          fVar1 = (float)param_2[10];
          break;
        case 4:
          fVar1 = (float)param_2[0x11];
          break;
        case 5:
          fVar1 = (float)param_2[0x13];
        }
        fVar1 = fVar1 + param_5;
      }
      else {
        switch(iVar2) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 6:
          fVar1 = (float)param_2[0xb] + param_4;
          break;
        case 4:
          fVar1 = (float)param_2[0x12] + param_4;
          break;
        case 5:
          fVar1 = (float)param_2[0x14];
        default:
          fVar1 = fVar1 + param_4;
        }
      }
      iVar3 = param_2[0xe];
      fVar1 = fVar1 * param_6;
      if (iVar3 == 0) {
        local_20 = fVar1 + local_20;
      }
      else if (iVar3 == 1) {
        local_1c = fVar1 + local_1c;
      }
      else {
        if (iVar3 != 2) {
          local_29 = 0;
          break;
        }
        local_18 = fVar1 + local_18;
      }
      FUN_00a61d20(param_2,iVar2,&local_20,(*param_2 + 9) * 0x20 + param_1);
      if (iVar2 == 5) {
        param_2[0x1f] = 2;
      }
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
    } while (local_24 < *(uint *)(param_1 + 0x324));
  }
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x330) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x334) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  FUN_00a64580(param_2);
  return local_29;
}

// 00A64EC0  lib::StaticArray<AntiqueScrollMultiple,20>::StaticArray<AntiqueScrollMultiple,20>  size=992  [class]
undefined4 __thiscall
lib::StaticArray<AntiqueScrollMultiple,20>::StaticArray<AntiqueScrollMultiple,20>
          (int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  int *local_17c;
  int local_178;
  float local_174;
  undefined1 local_170 [252];
  float fStack_74;
  float local_70;
  
  if ((param_2 == (int *)0x0) ||
     (local_178 = param_1, piVar5 = (int *)FUN_00dd3500(0x1b90,*(undefined4 *)(param_1 + 0x14)),
     piVar5 == (int *)0x0)) {
    return 0;
  }
  piVar5[1] = (int)(piVar5 + 4);
  piVar5[2] = 0;
  piVar5[3] = 0x14;
  *piVar5 = (int)vftable;
  puVar6 = *(undefined4 **)(param_2[1] + 4);
  local_17c = piVar5;
  if (puVar6 != puVar6 + *(int *)(param_2[1] + 8) * 0x58) {
    do {
      StaticArray<eObjId,10>::StaticArray<eObjId,10>_2(*puVar6,puVar6 + 0x44,puVar6 + 0x48,0,0);
      FUN_00a59920(puVar6);
      (**(code **)(*piVar5 + 8))(local_170);
      puVar6 = (undefined4 *)FUN_00a64240(puVar6);
    } while (puVar6 != (undefined4 *)(*(int *)(param_2[1] + 8) * 0x160 + *(int *)(param_2[1] + 4)));
  }
  Array<eObjId>::Array<eObjId>_4();
  local_174 = 0.0;
  FUN_00a555e0(param_2,param_4,&local_174);
  local_190 = 0.0;
  puVar6 = (undefined4 *)piVar5[1];
  local_18c = 0.0;
  local_188 = 0.0;
  local_184 = 0;
  local_194 = 0.0;
  local_198 = 0.0;
  if (puVar6 != puVar6 + piVar5[2] * 0x58) {
    do {
      StaticArray<eObjId,10>::StaticArray<eObjId,10>_2(*puVar6,puVar6 + 0x44,puVar6 + 0x48,0,0);
      iVar4 = local_178;
      local_1b0 = (float)puVar6[0x44];
      iVar1 = param_2[0xe];
      local_1ac = (float)puVar6[0x45];
      local_1a8 = (float)puVar6[0x46];
      local_1a4 = puVar6[0x47];
      fVar2 = local_1b0;
      if ((iVar1 != 0) &&
         ((fVar3 = local_1ac, iVar1 == 1 || (fVar2 = local_1a8, fVar3 = 0.0, iVar1 != 2)))) {
        fVar2 = fVar3;
      }
      if (fVar2 < local_174) {
        FUN_00a59920(puVar6);
        (**(code **)(*(int *)param_2[1] + 8))(local_170);
LAB_00a65248:
        local_190 = local_1b0;
        local_18c = local_1ac;
        local_188 = local_1a8;
        local_184 = local_1a4;
      }
      else {
        if (local_198 == 0.0) {
          fVar7 = (float10)FUN_00a551c0(param_2,param_3);
          local_198 = (float)fVar7;
          fVar7 = (float10)FUN_00a55220(param_2,param_3);
          iVar1 = param_2[0xe];
          fVar2 = (float)puVar6[0x40] * -1.0;
          if (iVar1 == 0) {
            local_1b0 = fVar2 + local_1b0;
          }
          else if (iVar1 == 1) {
            local_1ac = fVar2 + local_1ac;
          }
          else if (iVar1 == 2) {
            local_1a8 = fVar2 + local_1a8;
          }
          if (iVar1 == 0) {
            local_1b0 = (float)(fVar7 + (float10)local_1b0);
          }
          else if (iVar1 == 1) {
            local_1ac = (float)(fVar7 + (float10)local_1ac);
          }
          else if (iVar1 == 2) {
            local_1a8 = (float)(fVar7 + (float10)local_1a8);
          }
          FUN_00a61d20(param_2,param_3,&local_1b0,(*param_2 + 9) * 0x20 + iVar4);
          FUN_00a59920(puVar6);
          iVar1 = param_2[0xe];
          fVar2 = local_70 + local_198;
          if (iVar1 == 0) {
            local_1b0 = fVar2 + local_1b0;
          }
          else if (iVar1 == 1) {
            local_1ac = fVar2 + local_1ac;
          }
          else if (iVar1 == 2) {
            local_1a8 = fVar2 + local_1a8;
          }
          FUN_00a59770(&local_1b0);
          (**(code **)(*(int *)param_2[1] + 8))(local_170);
          local_198 = 1.4013e-45;
          goto LAB_00a65248;
        }
        FUN_00a59920(puVar6);
        iVar1 = param_2[0xe];
        fVar2 = local_70 + local_194;
        if (iVar1 == 0) {
          local_190 = fVar2 + local_190;
        }
        else if (iVar1 == 1) {
          local_18c = fVar2 + local_18c;
        }
        else if (iVar1 == 2) {
          local_188 = fVar2 + local_188;
        }
        FUN_00a59770(&local_190);
        (**(code **)(*(int *)param_2[1] + 8))(local_170);
      }
      piVar5 = local_17c;
      local_194 = fStack_74;
      puVar6 = (undefined4 *)FUN_00a64240(puVar6);
    } while (puVar6 != (undefined4 *)(piVar5[2] * 0x160 + piVar5[1]));
    if (local_198 != 0.0) goto LAB_00a64fc3;
  }
  iVar1 = local_178;
  FUN_00a55590(param_2,local_194,&local_190);
  FUN_00a61d20(param_2,param_3,&local_190,(*param_2 + 9) * 0x20 + iVar1);
LAB_00a64fc3:
  (**(code **)*piVar5)(1);
  return 1;
}

// 00A733D0  lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cRoomAbstract::stRoomEspUnit*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A7A750  lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>_2  size=69  [class]
undefined4 * __fastcall
lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>_2
          (undefined4 *param_1)

{
  param_1[5] = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = 0x10;
  param_1[4] = vftable;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  *param_1 = cR004::vftable;
  cEspControler::cEspControler();
  EspControllerBullet::EspControllerBullet();
  return param_1;
}

// 00A7A8A0  lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>  size=58  [class]
undefined4 * __fastcall
lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>
          (undefined4 *param_1)

{
  param_1[5] = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = 0x10;
  param_1[4] = vftable;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  *param_1 = cR00C::vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00A7BD20  lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>_3  size=66  [class]
undefined4 *
lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>_3
          (undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x88,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[5] = puVar1 + 8;
    puVar1[6] = 0;
    puVar1[7] = 0x10;
    puVar1[4] = vftable;
    puVar1[0x1e] = 0;
    puVar1[0x20] = 0;
    *puVar1 = cR002::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00A7C620  lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>_4  size=66  [class]
undefined4 *
lib::StaticArray<cRoomAbstract::stRoomEspUnit*,16>::StaticArray<cRoomAbstract::stRoomEspUnit*,16>_4
          (undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x88,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[5] = puVar1 + 8;
    puVar1[6] = 0;
    puVar1[7] = 0x10;
    puVar1[4] = vftable;
    puVar1[0x1e] = 0;
    puVar1[0x20] = 0;
    *puVar1 = cRfff::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00A7C6C0  FUN_00a7c6c0  size=65  [callgraph]
bool FUN_00a7c6c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xc0,param_1);
  if (iVar1 != 0) {
    DAT_01be9a30 = ScenarioManagerImplement::ScenarioManagerImplement(param_1);
    return DAT_01be9a30 != 0;
  }
  DAT_01be9a30 = 0;
  return false;
}

// 00A7C740  FUN_00a7c740  size=54  [callgraph]
void __thiscall FUN_00a7c740(int param_1,float param_2)

{
  if ((param_2 != *(float *)(param_1 + 0xe0)) && (param_2 != *(float *)(param_1 + 0xe0))) {
    *(float *)(param_1 + 0xe0) = param_2;
    return;
  }
  return;
}

// 00A7C7E0  FUN_00a7c7e0  size=13  [callgraph]
bool __fastcall FUN_00a7c7e0(int param_1)

{
  return (*(byte *)(param_1 + 0x28) & 3) == 0;
}

// 00A7C7F0  FUN_00a7c7f0  size=4  [callgraph]
int __fastcall FUN_00a7c7f0(int param_1)

{
  return param_1 + 0x2c;
}

// 00A7C800  FUN_00a7c800  size=4  [callgraph]
undefined4 __fastcall FUN_00a7c800(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}

// 00A88C40  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_12  size=1363  [class]
int __thiscall
lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_12
          (int param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  float10 fVar11;
  undefined *puVar12;
  int *local_c4;
  float fStack_c0;
  int local_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  int local_80;
  float fStack_7c;
  int local_78;
  undefined1 auStack_74 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined **local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_5c = local_50;
  local_58 = 0;
  local_54 = 0x10;
  local_60 = vftable;
  iVar7 = FUN_00c27c10(&local_60);
  if (iVar7 == 0) {
    return 0;
  }
  iVar8 = FUN_00a81330();
  if (iVar8 != 0) {
    if ((*(byte *)(iVar8 + 0x28) & 2) != 0) {
      local_c4 = (int *)0x0;
      goto LAB_00a88cea;
    }
    FUN_00a81330();
    local_c4 = (int *)FUN_00a7c8a0();
    if (local_c4 != (int *)0x0) {
      if (local_c4[0x139] == 0) goto LAB_00a88cea;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  local_c4 = (int *)0x0;
LAB_00a88cea:
  if (0 < iVar7) {
    local_bc = param_1 + 0x13c;
    local_78 = -0x13c - param_1;
    local_80 = iVar7;
    do {
      piVar9 = (int *)FUN_00a7c8a0();
      if (piVar9 != (int *)0x0) {
        puVar12 = &DAT_01be9d20;
        (**(code **)(*piVar9 + 4))(&DAT_01be9d20);
        iVar7 = FUN_00dd6d80(puVar12);
        if (((iVar7 != 0) && (piVar9 != local_c4)) && ((piVar9[0x376] & 0x200000U) != 0)) {
          fStack_a0 = (float)local_c4[0x10];
          fStack_9c = (float)local_c4[0x11];
          fStack_98 = (float)local_c4[0x12];
          fStack_94 = (float)local_c4[0x13];
          fStack_7c = (float)local_c4[0x25];
          fStack_c0 = 0.0;
          if ((*(int *)(param_1 + 0x44) != -1) &&
             (iVar7 = FUN_00a12210(*(int *)(param_1 + 0x44)), iVar7 != 0)) {
            fStack_a0 = *(float *)(iVar7 + 0x40);
            fStack_9c = *(float *)(iVar7 + 0x44);
            fStack_98 = *(float *)(iVar7 + 0x48);
            fStack_94 = *(float *)(iVar7 + 0x4c);
            fStack_70 = *(float *)(iVar7 + 0x30) + fStack_a0;
            fStack_6c = *(float *)(iVar7 + 0x34) + fStack_9c;
            fStack_68 = fStack_98 + *(float *)(iVar7 + 0x38);
            fStack_64 = fStack_94 + *(float *)(iVar7 + 0x3c);
            thunk_FUN_00dde510(&fStack_c0,&fStack_7c,&fStack_70,&fStack_a0);
            fStack_c0 = fStack_c0 * -1.0;
            if (*(int *)(param_1 + 0x110) == 0) {
              fStack_c0 = 0.0;
            }
          }
          fStack_b0 = (float)piVar9[0x10];
          fStack_a8 = (float)piVar9[0x12];
          iStack_a4 = piVar9[0x13];
          fStack_ac = (float)piVar9[0x11] + 1.7;
          fVar1 = fStack_b0 - fStack_a0;
          fStack_88 = fStack_a8 - fStack_98;
          thunk_FUN_00dde510(&fStack_b8,auStack_74,&fStack_b0,&fStack_a0);
          fStack_b8 = fStack_b8 * -1.0;
          thunk_FUN_00dde510(&fStack_b4,auStack_74,piVar9 + 0x10,&fStack_a0);
          fStack_b4 = fStack_b4 * -1.0;
          fStack_84 = (fStack_a8 - fStack_98) * (fStack_a8 - fStack_98) +
                      (fStack_ac - fStack_9c) * (fStack_ac - fStack_9c) +
                      (fStack_b0 - fStack_a0) * (fStack_b0 - fStack_a0);
          fVar11 = (float10)fpatan((float10)fVar1,(float10)fStack_88);
          fVar11 = (float10)FUN_00ddba30((float)(fVar11 - (float10)fStack_7c));
          fVar1 = fStack_b8;
          fStack_88 = (float)fVar11;
          bVar5 = false;
          bVar6 = false;
          if (fStack_b8 < fStack_b4) {
            fStack_b8 = fStack_b4;
            fStack_b4 = fVar1;
          }
          fVar3 = *(float *)(param_1 + 0x28) + fStack_c0;
          fVar4 = fStack_c0 - *(float *)(param_1 + 0x28);
          fVar2 = *(float *)(param_1 + 0x34) + fStack_c0;
          fVar1 = fStack_c0 - *(float *)(param_1 + 0x34);
          if ((fVar3 <= fStack_b4) || (fStack_b4 <= fVar4)) {
            if ((fVar3 <= fStack_b8) || (fStack_b8 <= fVar4)) {
              if ((fStack_b8 <= fVar3) || (fVar4 <= fStack_b4)) {
                if ((fStack_b8 < fVar3) && (fVar4 < fStack_b4)) {
                  bVar6 = true;
                }
              }
              else {
                bVar6 = true;
              }
            }
            else {
              bVar6 = true;
            }
          }
          else {
            bVar6 = true;
          }
          if ((fVar2 <= fStack_b4) || (fStack_b4 <= fVar1)) {
            if ((fVar2 <= fStack_b8) || (fStack_b8 <= fVar1)) {
              if ((fStack_b8 <= fVar2) || (fVar1 <= fStack_b4)) {
                if ((fStack_b8 < fVar2) && (fVar1 < fStack_b4)) {
                  bVar5 = true;
                }
              }
              else {
                bVar5 = true;
              }
            }
            else {
              bVar5 = true;
            }
          }
          else {
            bVar5 = true;
          }
          iVar7 = FUN_00907640(local_bc,0,0);
          fVar1 = ABS(fStack_88);
          if (((fVar1 < *(float *)(param_1 + 0x30) == (fVar1 == *(float *)(param_1 + 0x30))) ||
              (*(float *)(param_1 + 0x38) < fStack_84)) || (!bVar5)) {
            if (((fVar1 < *(float *)(param_1 + 0x24) != (fVar1 == *(float *)(param_1 + 0x24))) &&
                (fStack_84 <= *(float *)(param_1 + 0x2c))) && ((bVar6 && (iVar7 == 0)))) {
              *param_2 = 1;
              *param_3 = 1;
              goto LAB_00a890f7;
            }
          }
          else if (iVar7 == 0) {
            *param_2 = 1;
            *param_3 = 1;
LAB_00a890f7:
            *(float *)(param_1 + 0x120) = fStack_b0;
            *(float *)(param_1 + 0x124) = fStack_ac;
            *(float *)(param_1 + 0x128) = fStack_a8;
            *(int *)(param_1 + 300) = iStack_a4;
            uVar10 = FUN_00a7c7f0();
            FUN_00a7c960(uVar10);
          }
          FUN_00a858d0(local_c4,&fStack_a0,&fStack_b0,local_bc);
        }
      }
      local_bc = local_bc + 4;
      local_80 = local_80 + -1;
    } while (local_80 != 0);
  }
  if ((*param_2 != 0) && (local_c4 != (int *)0x0)) {
    puVar12 = &DAT_01be9d20;
    (**(code **)(*local_c4 + 4))(&DAT_01be9d20);
    iVar7 = FUN_00dd6d80(puVar12);
    if (iVar7 != 0) {
      local_c4[0x6d5] = 1;
    }
  }
  return *param_2;
}

// 00AA2EF0  lib::StaticArray<BehaviorData*,2048>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<BehaviorData*,2048>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<BehaviorData*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA2F50  lib::StaticArray<Constraints,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Constraints,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Constraints>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA2F80  lib::StaticArray<Collision*,250>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Collision*,250>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA2FB0  lib::StaticArray<Behavior::EffectIntegrationContainer,32>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Behavior::EffectIntegrationContainer,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Behavior::EffectIntegrationContainer>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA3920  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>  size=76  [class]
void __fastcall lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(int param_1)

{
  undefined4 *puVar1;
  
  FUN_00a933e0();
  puVar1 = (undefined4 *)FUN_00dd3500(0x3f8,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0xfa;
    *puVar1 = vftable;
  }
  *(undefined4 **)(param_1 + 0x7a4) = puVar1;
  if (puVar1[1] != 0) {
    puVar1[2] = 0;
  }
  return;
}

// 00AA3970  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_3  size=76  [class]
void __fastcall lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_3(int param_1)

{
  undefined4 *puVar1;
  
  FUN_00a93450();
  puVar1 = (undefined4 *)FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x40;
    *puVar1 = vftable;
  }
  *(undefined4 **)(param_1 + 0x7ac) = puVar1;
  if (puVar1[1] != 0) {
    puVar1[2] = 0;
  }
  return;
}

// 00AA39C0  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2  size=76  [class]
void __fastcall lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(int param_1)

{
  undefined4 *puVar1;
  
  FUN_00a934c0();
  puVar1 = (undefined4 *)FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x40;
    *puVar1 = vftable;
  }
  *(undefined4 **)(param_1 + 0x7a8) = puVar1;
  if (puVar1[1] != 0) {
    puVar1[2] = 0;
  }
  return;
}

// 00AA3A10  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3  size=121  [class]
void lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3
               (undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined **local_410;
  int *local_40c;
  int local_408;
  undefined4 local_404;
  int local_400 [256];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a93660(&local_410,param_2);
  piVar1 = local_40c;
  if (local_40c != local_40c + local_408) {
    do {
      if (*piVar1 != 0) {
        *(undefined4 *)(*piVar1 + 0x380) = param_1;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != local_40c + local_408);
  }
  return;
}

// 00AA3A90  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2  size=137  [class]
/* WARNING: Removing unreachable block (ram,0x00aa3ae9) */
/* WARNING: Removing unreachable block (ram,0x00aa3af1) */
/* WARNING: Removing unreachable block (ram,0x00aa3af7) */
/* WARNING: Removing unreachable block (ram,0x00aa3b01) */
/* WARNING: Removing unreachable block (ram,0x00aa3b0f) */

void __fastcall lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7a8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7a8) + 4);
    FUN_00a9c270(iVar1,iVar1 + *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4);
  }
  return;
}

// 00AA3BB0  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_4  size=139  [class]
void lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_4
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined **local_410;
  int *local_40c;
  int local_408;
  undefined4 local_404;
  int local_400 [256];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a936d0(&local_410,param_2);
  piVar2 = local_40c;
  if (local_40c != local_40c + local_408) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x374) = param_1;
      }
      if (param_3 != 0) {
        *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 2;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != local_40c + local_408);
  }
  return;
}

// 00AA3C40  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_6  size=155  [class]
/* WARNING: Removing unreachable block (ram,0x00aa3c97) */
/* WARNING: Removing unreachable block (ram,0x00aa3ca7) */
/* WARNING: Removing unreachable block (ram,0x00aa3cad) */
/* WARNING: Removing unreachable block (ram,0x00aa3cb7) */
/* WARNING: Removing unreachable block (ram,0x00aa3cbe) */
/* WARNING: Removing unreachable block (ram,0x00aa3cd0) */

void __fastcall lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_6(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7a8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7a8) + 4);
    FUN_00a9c270(iVar1,iVar1 + *(int *)(*(int *)(param_1 + 0x7a8) + 8) * 4);
  }
  return;
}

// 00AA3CE0  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5  size=123  [class]
void lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5
               (undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined **local_410;
  int *local_40c;
  int local_408;
  undefined4 local_404;
  int local_400 [256];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a93660(&local_410,param_2);
  piVar1 = local_40c;
  piVar2 = local_40c;
  if (local_40c != local_40c + local_408) {
    do {
      if (*piVar2 != 0) {
        FUN_00d771d0(param_1);
        piVar1 = local_40c;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1 + local_408);
  }
  return;
}

// 00AA3D60  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_7  size=121  [class]
void lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_7
               (uint param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined **local_410;
  int *local_40c;
  int local_408;
  undefined4 local_404;
  int local_400 [256];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a936d0(&local_410,param_2);
  piVar2 = local_40c;
  if (local_40c != local_40c + local_408) {
    do {
      if (*piVar2 != 0) {
        puVar1 = (uint *)(*piVar2 + 900);
        *puVar1 = *puVar1 | param_1;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != local_40c + local_408);
  }
  return;
}

// 00AA3EB0  lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>  size=163  [class]
undefined4 __fastcall lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)(param_1 + 0x7c4) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00dd5650("Behavior::initializeConstraint failed.");
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00dd3500(0xa10,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x20;
    *puVar2 = vftable;
  }
  *puVar1 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x7c4) != 0) {
      FUN_00dd4920(*(int *)(param_1 + 0x7c4));
      *(undefined4 *)(param_1 + 0x7c4) = 0;
    }
    return 0;
  }
  return 1;
}

// 00AA3F60  FUN_00aa3f60  size=284  [between]
int __thiscall FUN_00aa3f60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (*(int *)(param_1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return -1;
  }
  iVar1 = FUN_008d7fd0(param_2);
  iVar2 = FUN_008d8010(param_2);
  iVar3 = FUN_008d7db0(param_2);
  iVar4 = FUN_008d8050(param_2);
  fVar8 = (float10)FUN_008d7e50(param_2);
  fVar9 = (float10)FUN_008d7df0(param_2);
  uVar5 = FUN_008d7d70(param_2);
  iVar2 = FUN_00a9e290(uVar5,0,(float)fVar9,0x3f800000,
                       -(uint)(iVar1 != 0) & 0x10000 | -(uint)(iVar2 != 0) & 0x20000 |
                       (-(uint)(iVar3 != 0) & 0xf8000000) + 0x8000000 | -(uint)(iVar4 != 0) & 0x40,
                       (float)fVar8,0x3f800000);
  iVar1 = *(int *)(param_1 + 0x774);
  piVar6 = *(int **)(iVar1 + 4);
  if (piVar6 != piVar6 + *(int *)(iVar1 + 8) * 0xc) {
    piVar7 = piVar6 + *(int *)(iVar1 + 8) * 0xc;
    while (*piVar6 != iVar2) {
      piVar6 = piVar6 + 0xc;
      if (piVar6 == piVar7) {
        return iVar2;
      }
    }
    piVar6[1] = param_2;
  }
  return iVar2;
}

// 00AA4080  FUN_00aa4080  size=157  [between]
int __thiscall
FUN_00aa4080(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return -1;
  }
  uVar2 = FUN_008d7d70(param_2);
  iVar3 = FUN_00a9e290(uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = *(int *)(param_1 + 0x774);
  piVar5 = *(int **)(iVar1 + 4);
  if (piVar5 != piVar5 + *(int *)(iVar1 + 8) * 0xc) {
    piVar4 = piVar5 + *(int *)(iVar1 + 8) * 0xc;
    while (*piVar5 != iVar3) {
      piVar5 = piVar5 + 0xc;
      if (piVar5 == piVar4) {
        return iVar3;
      }
    }
    piVar5[1] = param_2;
  }
  return iVar3;
}

// 00AA4120  FUN_00aa4120  size=157  [between]
int __thiscall
FUN_00aa4120(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return -1;
  }
  uVar2 = FUN_008d7d70(param_2);
  iVar3 = FUN_00a9f2f0(uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = *(int *)(param_1 + 0x774);
  piVar5 = *(int **)(iVar1 + 4);
  if (piVar5 != piVar5 + *(int *)(iVar1 + 8) * 0xc) {
    piVar4 = piVar5 + *(int *)(iVar1 + 8) * 0xc;
    while (*piVar5 != iVar3) {
      piVar5 = piVar5 + 0xc;
      if (piVar5 == piVar4) {
        return iVar3;
      }
    }
    piVar5[1] = param_2;
  }
  return iVar3;
}

// 00AA41C0  FUN_00aa41c0  size=257  [between]
int __thiscall FUN_00aa41c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  
  if (*(int *)(param_1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return -1;
  }
  iVar1 = FUN_008d7fd0(param_2);
  iVar2 = FUN_008d8010(param_2);
  iVar3 = FUN_008d7db0(param_2);
  iVar4 = FUN_008d8050(param_2);
  fVar8 = (float10)FUN_008d7e50(param_2);
  uVar5 = FUN_008d7d70(param_2);
  iVar2 = FUN_00a9f2f0(uVar5,0,param_3,0x3f800000,
                       -(uint)(iVar1 != 0) & 0x10000 | -(uint)(iVar2 != 0) & 0x20000 |
                       (-(uint)(iVar3 != 0) & 0xf8000000) + 0x8000000 | -(uint)(iVar4 != 0) & 0x40,
                       (float)fVar8,0x3f800000);
  iVar1 = *(int *)(param_1 + 0x774);
  piVar6 = *(int **)(iVar1 + 4);
  if (piVar6 != piVar6 + *(int *)(iVar1 + 8) * 0xc) {
    piVar7 = piVar6 + *(int *)(iVar1 + 8) * 0xc;
    while (*piVar6 != iVar2) {
      piVar6 = piVar6 + 0xc;
      if (piVar6 == piVar7) {
        return iVar2;
      }
    }
    piVar6[1] = param_2;
  }
  return iVar2;
}

// 00AA42D0  FUN_00aa42d0  size=257  [between]
int __thiscall FUN_00aa42d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  
  if (*(int *)(param_1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return -1;
  }
  iVar1 = FUN_008d7fd0(param_2);
  iVar2 = FUN_008d8010(param_2);
  iVar3 = FUN_008d7db0(param_2);
  iVar4 = FUN_008d8050(param_2);
  fVar8 = (float10)FUN_008d7df0(param_2);
  uVar5 = FUN_008d7d70(param_2);
  iVar2 = FUN_00a9f2f0(uVar5,0,(float)fVar8,0x3f800000,
                       -(uint)(iVar1 != 0) & 0x10000 | -(uint)(iVar2 != 0) & 0x20000 |
                       (-(uint)(iVar3 != 0) & 0xf8000000) + 0x8000000 | -(uint)(iVar4 != 0) & 0x40,
                       param_3,0x3f800000);
  iVar1 = *(int *)(param_1 + 0x774);
  piVar6 = *(int **)(iVar1 + 4);
  if (piVar6 != piVar6 + *(int *)(iVar1 + 8) * 0xc) {
    piVar7 = piVar6 + *(int *)(iVar1 + 8) * 0xc;
    while (*piVar6 != iVar2) {
      piVar6 = piVar6 + 0xc;
      if (piVar6 == piVar7) {
        return iVar2;
      }
    }
    piVar6[1] = param_2;
  }
  return iVar2;
}

// 00AA43E0  FUN_00aa43e0  size=312  [between]
undefined4 FUN_00aa43e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  
  if (param_2 == 0) {
    FUN_00dd5650(&DAT_016653c4);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01665370);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return 0xffffffff;
  }
  iVar2 = FUN_008d7fd0(param_1);
  iVar3 = FUN_008d8010(param_1);
  iVar4 = FUN_008d7db0(param_1);
  iVar5 = FUN_008d8050(param_1);
  fVar7 = (float10)FUN_008d7e50(param_1);
  fVar8 = (float10)FUN_008d7df0(param_1);
  uVar6 = FUN_008d7d70(param_1);
  uVar6 = FUN_00a9e440(iVar1,uVar6,0,(float)fVar8,0x3f800000,
                       -(uint)(iVar2 != 0) & 0x10000 | -(uint)(iVar3 != 0) & 0x20000 |
                       (-(uint)(iVar4 != 0) & 0xf8000000) + 0x8000000 | -(uint)(iVar5 != 0) & 0x40,
                       (float)fVar7,0x3f800000);
  iVar1 = FUN_00a945c0(uVar6);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  return uVar6;
}

// 00AA4520  FUN_00aa4520  size=196  [between]
undefined4
FUN_00aa4520(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_00dd5650(&DAT_016653c4);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01665370);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return 0xffffffff;
  }
  uVar2 = FUN_008d7d70(param_1);
  uVar2 = FUN_00a9e440(iVar1,uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = FUN_00a945c0(uVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  return uVar2;
}

// 00AA45F0  FUN_00aa45f0  size=201  [between]
undefined4
FUN_00aa45f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    FUN_00dd5650(&DAT_016653c4);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01665370);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return 0xffffffff;
  }
  uVar2 = FUN_008d7d70(param_2);
  uVar2 = FUN_00a9e6a0(iVar1,param_1,uVar2,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar1 = FUN_00a945c0(uVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  return uVar2;
}

// 00AA46C0  FUN_00aa46c0  size=221  [between]
int FUN_00aa46c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    FUN_00dd5650(&DAT_016653c4);
    return -1;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (*(int *)(iVar1 + 0x75c) != 0) {
      uVar2 = FUN_008d7d70(param_1);
      iVar3 = FUN_00a94c20(uVar2);
      if (iVar3 == -1) {
        uVar2 = FUN_008d7d70(param_1);
        iVar3 = FUN_00a9e440(iVar1,uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
        iVar1 = FUN_00a945c0(iVar3);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 4) = param_1;
        }
      }
      return iVar3;
    }
    FUN_00dd5650("not found AnimationMap.");
    return -1;
  }
  FUN_00dd5650(&DAT_01665370);
  return -1;
}

// 00AA47A0  FUN_00aa47a0  size=196  [between]
undefined4
FUN_00aa47a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_00dd5650(&DAT_016653c4);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01665370);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return 0xffffffff;
  }
  uVar2 = FUN_008d7d70(param_1);
  uVar2 = FUN_00a9e8e0(iVar1,uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = FUN_00a945c0(uVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  return uVar2;
}

// 00AA4870  FUN_00aa4870  size=201  [between]
undefined4
FUN_00aa4870(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    FUN_00dd5650(&DAT_016653c4);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01665370);
    return 0xffffffff;
  }
  iVar1 = FUN_00a7c8a0();
  if (*(int *)(iVar1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return 0xffffffff;
  }
  uVar2 = FUN_008d7d70(param_2);
  uVar2 = FUN_00a9eb20(iVar1,param_1,uVar2,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar1 = FUN_00a945c0(uVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  return uVar2;
}

// 00AA4940  FUN_00aa4940  size=64  [between]
void FUN_00aa4940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00a9f2f0(param_1,param_2,param_3,param_4,param_5 | 0x8000000,param_6,param_7);
  return;
}

// 00AA4980  lib::StaticArray<Behavior::EffectIntegrationContainer,32>::StaticArray<Behavior::EffectIntegrationContainer,32>  size=221  [class]
undefined4 __thiscall
lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
StaticArray<Behavior::EffectIntegrationContainer,32>(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2[1] != 0) {
    puVar1 = (undefined4 *)FUN_00dd3500(0x390,&DAT_01b7bd48);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1 + 4;
      puVar1[2] = 0;
      puVar1[3] = 0x20;
      *puVar1 = vftable;
    }
    *(undefined4 **)(param_1 + 0x7a0) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar1[1] != 0) {
      puVar1[2] = 0;
    }
  }
  if (*param_2 != 0) {
    puVar1 = (undefined4 *)FUN_00dd3580(0xc0,&DAT_01b7bd48);
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar1 + 4;
      *puVar1 = 1;
      cEspControler::cEspControler();
    }
    *(undefined4 **)(param_1 + 0x79c) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (param_2[2] != 0) {
    iVar3 = FUN_00dd3500(0x590,&DAT_01b7bd48);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = EspCtrlCustomImpl::EspCtrlCustomImpl();
    }
    *(int *)(param_1 + 0x798) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00AA5E50  lib::StaticArray<Behavior::AnimationSlot,16>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Behavior::AnimationSlot,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Behavior::AnimationSlot>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA8F30  lib::StaticArray<Entity*,3>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Entity*,3>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Entity*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA9080  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>  size=147  [class]
void __fastcall lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(int param_1)

{
  undefined4 *puVar1;
  
  FUN_00a933e0();
  puVar1 = (undefined4 *)FUN_00dd3500(0x3f8,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0xfa;
    *puVar1 = StaticArray<Collision*,250>::vftable;
  }
  *(undefined4 **)(param_1 + 0x7a4) = puVar1;
  if (puVar1[1] != 0) {
    puVar1[2] = 0;
  }
  FUN_00a934c0();
  puVar1 = (undefined4 *)FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x40;
    *puVar1 = vftable;
  }
  *(undefined4 **)(param_1 + 0x7a8) = puVar1;
  if (puVar1[1] != 0) {
    puVar1[2] = 0;
  }
  return;
}

// 00AA9120  lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4  size=151  [class]
undefined4
lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined **local_90;
  int *local_8c;
  int local_88;
  undefined4 local_84;
  int local_80 [32];
  
  local_8c = local_80;
  local_88 = 0;
  local_84 = 0x20;
  local_90 = vftable;
  FUN_00a93220(&local_90,param_2,param_3,param_4,param_5,0);
  piVar1 = local_8c + local_88;
  while( true ) {
    if (local_8c == piVar1) {
      return 0;
    }
    if (*local_8c == param_1) break;
    local_8c = local_8c + 1;
  }
  return 1;
}

// 00AA91C0  lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>  size=182  [class]
void __fastcall
lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(undefined4 **)(param_1 + 0x774) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x774))(1);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x4f0) != 0) {
    iVar1 = FUN_00a7c890();
    if (iVar1 != 0) {
      FUN_00e26e50(1);
      puVar2 = (undefined4 *)FUN_00dd3500(0x310,&DAT_01b7bd48);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = puVar2 + 4;
        puVar2[2] = 0;
        puVar2[3] = 0x10;
        *puVar2 = vftable;
      }
      *(undefined4 **)(param_1 + 0x774) = puVar2;
      if (*(int *)(param_1 + 0x75c) != 0) {
        piVar3 = (int *)FUN_008d7570();
        (**(code **)(*piVar3 + 8))(*(undefined4 *)(param_1 + 0x4b4));
      }
      piVar3 = (int *)FUN_008d7570();
      uVar4 = (**(code **)(*piVar3 + 4))(*(undefined4 *)(param_1 + 0x4b4),param_1 + 0x494);
      *(undefined4 *)(param_1 + 0x75c) = uVar4;
    }
  }
  return;
}

// 00AA9280  FUN_00aa9280  size=61  [callgraph]
undefined4 __thiscall FUN_00aa9280(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x75c) == 0) {
    FUN_00dd5650("not found AnimationMap.");
    return 0xffffffff;
  }
  fVar2 = (float10)FUN_008d7e50(param_2);
  uVar1 = FUN_00aa42d0(param_2,(float)fVar2);
  return uVar1;
}

// 00AA92C0  FUN_00aa92c0  size=46  [callgraph]
void __thiscall FUN_00aa92c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004039a0(param_2,param_1,0);
  FUN_00a963e0(uVar1);
  return;
}

// 00AA9DC0  lib::StaticArray<int,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<int,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA9DF0  lib::StaticArray<Hw::cVec4,16>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Hw::cVec4,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Hw::cVec4>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AAB5C0  lib::StaticArray<int,32>::StaticArray<int,32>  size=116  [class]
undefined4 * __fastcall lib::StaticArray<int,32>::StaticArray<int,32>(undefined4 *param_1)

{
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = Pl0800::vftable;
  FUN_00a603a0();
  param_1[0x39c] = 0;
  param_1[0x39e] = param_1 + 0x3a1;
  param_1[0x39f] = 0;
  param_1[0x39d] = StaticArray<Entity*,32>::vftable;
  param_1[0x3a0] = 0x20;
  param_1[0x3c3] = 0;
  param_1[0x3c2] = param_1 + 0x3c5;
  param_1[0x3c4] = 0x20;
  param_1[0x3c1] = vftable;
  param_1[0x3ec] = 0;
  return param_1;
}

// 00AB0AC0  lib::StaticArray<Entity*,3>::StaticArray<Entity*,3>  size=75  [class]
undefined4 * __fastcall lib::StaticArray<Entity*,3>::StaticArray<Entity*,3>(undefined4 *param_1)

{
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = E3_EnemyBoard::vftable;
  param_1[0x378] = 0;
  param_1[0x37b] = param_1 + 0x37e;
  param_1[0x37c] = 0;
  param_1[0x37d] = 3;
  param_1[0x37a] = vftable;
  FUN_004ec5c0();
  return param_1;
}

// 00ABAEC0  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>  size=943  [class]
void __thiscall
lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>
          (int *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined *puVar6;
  int local_578;
  undefined1 local_570 [4];
  undefined4 uStack_56c;
  float local_550;
  float local_54c;
  float local_548;
  float local_544;
  float local_540;
  uint uStack_4e0;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_448;
  undefined4 local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined **local_420;
  int *local_41c;
  int local_418;
  undefined4 local_414;
  int local_410 [259];
  
  local_41c = local_410;
  local_418 = 0;
  local_414 = 0x100;
  local_420 = vftable;
  FUN_00a936d0(&local_420,param_3);
  piVar4 = local_41c;
  if (local_41c != local_41c + local_418) {
    do {
      if (*(int *)(*piVar4 + 0x41c) != 0) {
        local_578 = 0;
        iVar2 = FUN_00d77fd0();
        if (0 < iVar2) {
          do {
            iVar2 = FUN_00d77ec0(local_578);
            if (iVar2 != 0) {
              FUN_004105d0();
              FUN_00a7c930();
              FUN_00a7c930();
              FUN_00a7c950();
              FUN_00a7c950();
              local_430 = 0x3c23d70a;
              local_440 = 0.0;
              local_43c = 0.0;
              local_444 = 0xffffffff;
              local_438 = 0.0;
              local_42c = 0xb;
              FUN_0043e160(iVar2 + 0x60);
              local_470 = *(undefined4 *)(iVar2 + 0x30);
              local_46c = *(undefined4 *)(iVar2 + 0x34);
              local_468 = *(undefined4 *)(iVar2 + 0x38);
              local_464 = *(undefined4 *)(iVar2 + 0x3c);
              local_460 = *(undefined4 *)(iVar2 + 0x40);
              local_45c = *(undefined4 *)(iVar2 + 0x44);
              local_458 = *(undefined4 *)(iVar2 + 0x48);
              local_454 = *(undefined4 *)(iVar2 + 0x4c);
              uVar3 = FUN_00a7c7f0();
              FUN_00a7c960(uVar3);
              local_448 = param_3;
              local_42c = FUN_00d771e0();
              local_440 = *(float *)(iVar2 + 0x20);
              local_43c = *(float *)(iVar2 + 0x24);
              local_438 = *(float *)(iVar2 + 0x28);
              local_434 = *(float *)(iVar2 + 0x2c);
              local_430 = *(undefined4 *)(iVar2 + 0x50);
              fVar1 = local_548 * local_548 + local_54c * local_54c + local_550 * local_550;
              if (fVar1 < 0.010000001 != (fVar1 == 0.010000001)) {
                local_550 = (float)param_1[0x10] - local_440;
                local_54c = (float)param_1[0x11] - local_43c;
                local_548 = (float)param_1[0x12] - local_438;
                local_544 = (float)param_1[0x13] - local_434;
                fVar1 = local_548 * local_548 + local_54c * local_54c + local_550 * local_550;
                if (!NAN(fVar1) && 0.0001 < fVar1 != (fVar1 == 0.0001)) {
                  if (fVar1 <= 0.0) {
                    FUN_00dd5650(&DAT_0163d0ac);
                    local_550 = 0.0;
                    local_54c = 1.0;
                    local_548 = 0.0;
                    fVar5 = (float10)fpatan((float10)0.0,(float10)0.0);
                    local_540 = (float)fVar5;
                  }
                  else {
                    FUN_00ddf460(&local_550,&local_550);
                    fVar5 = (float10)fpatan((float10)local_550,(float10)local_548);
                    local_540 = (float)fVar5;
                  }
                }
              }
              if (*(int *)(iVar2 + 0x14) != 0) {
                uVar3 = FUN_00a7c7f0();
                FUN_00a7c960(uVar3);
              }
              if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
                puVar6 = &DAT_01be9c3c;
                (**(code **)(*param_1 + 4))(&DAT_01be9c3c);
                iVar2 = FUN_00dd6d80(puVar6);
                if ((iVar2 != 0) && (param_1[0x3a0] != 0)) {
                  uStack_4e0 = uStack_4e0 | 0x40000;
                  FUN_00aa2970();
                  uStack_56c = FUN_00fdbc60();
                }
                if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
                  if (*(int *)(param_2 + 0xc) * 0x150 + *(int *)(param_2 + 4) != 0) {
                    FUN_004adf40(local_570);
                  }
                  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
                }
              }
            }
            local_578 = local_578 + 1;
            iVar2 = FUN_00d77fd0();
          } while (local_578 < iVar2);
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != local_41c + local_418);
  }
  return;
}

// 00AC18F0  lib::StaticArray<BehaviorData*,2048>::StaticArray<BehaviorData*,2048>  size=151  [class]
undefined4 * __fastcall
lib::StaticArray<BehaviorData*,2048>::StaticArray<BehaviorData*,2048>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  *param_1 = BehaviorDatabaseImplement::vftable;
  param_1[10] = 0;
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x2010,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x800;
    *puVar1 = vftable;
  }
  param_1[2] = puVar1;
  FUN_00dd7240();
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = AllocatedArray<BehaviorDatabaseImplement::UsedContainer>::vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar1 = puVar2;
  }
  local_4 = &DAT_01b7bd48;
  FUN_00abc830(0x800,&local_4);
  param_1[1] = puVar1;
  return param_1;
}

// 00AFEB10  FUN_00afeb10  size=2268  [callgraph]
void __fastcall FUN_00afeb10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  undefined4 uVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uVar13;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float fStack_4c0;
  float afStack_4bc [11];
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  uint auStack_480 [2];
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  uint uStack_46c;
  float fStack_468;
  float fStack_464;
  undefined1 uStack_460;
  undefined1 uStack_45f;
  undefined4 uStack_45c;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_31c;
  undefined2 uStack_306;
  undefined4 uStack_1a0;
  undefined1 local_160 [348];
  
  if ((900.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x1fe8) <= 0.0)) {
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) &&
       ((iVar7 = FUN_00a7c8a0(), iVar7 != 0 && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)))) {
      *(undefined4 *)(iVar7 + 0xd90) = 1;
    }
    iVar7 = FUN_00a81330();
    if (((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
       (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      *(undefined4 *)(iVar7 + 0xd90) = 1;
    }
    iVar7 = FUN_00a81330();
    if (((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
       (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      *(undefined4 *)(iVar7 + 0xd90) = 1;
    }
    iVar7 = FUN_00a81330();
    if (((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
       (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      *(undefined4 *)(iVar7 + 0xd90) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x1550) = 1;
  afStack_4bc[3] = 2.86986e-42;
  afStack_4bc[4] = 2.87126e-42;
  afStack_4bc[5] = 2.87266e-42;
  afStack_4bc[6] = 2.87406e-42;
  afStack_4bc[7] = 2.87546e-42;
  afStack_4bc[8] = 2.87687e-42;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x69,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aed150();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x6a,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0x40800000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x920) = 0x421c0000;
    goto LAB_00afed35;
  case 3:
LAB_00afed35:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    if (5 < *(int *)(param_1 + 0x940)) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0xa84);
    *(float *)(param_1 + 0x924) = fVar1 + 4.0;
    local_4e0 = *(float *)(iVar7 + 0x40);
    local_4dc = *(float *)(iVar7 + 0x44);
    local_4d8 = *(float *)(iVar7 + 0x48);
    local_4d4 = *(float *)(iVar7 + 0x4c);
    local_4d0 = *(float *)(param_1 + 0x40) - local_4e0;
    local_4c8 = *(float *)(param_1 + 0x48) - local_4d8;
    local_4c4 = *(float *)(param_1 + 0x4c) - local_4d4;
    local_4cc = 0.0;
    fVar1 = local_4c8 * local_4c8 + local_4d0 * local_4d0;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_4d0,&local_4d0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_4d0 = 0.0;
      local_4cc = 1.0;
      local_4c8 = 0.0;
    }
    fVar11 = (float10)FUN_00dde300(0,0x40400000);
    fVar11 = fVar11 + (float10)5.0;
    local_4e0 = (float)((float10)local_4d0 * fVar11 + (float10)local_4e0);
    local_4dc = (float)(fVar11 * (float10)local_4cc + (float10)local_4dc);
    local_4d8 = (float)((float10)local_4c8 * fVar11 + (float10)local_4d8);
    local_4d4 = (float)((float10)local_4c4 * fVar11 + (float10)local_4d4);
    fVar11 = (float10)FUN_00dde300(0xc1000000,0x41000000);
    local_4e0 = (float)(fVar11 + (float10)local_4e0);
    fVar12 = (float10)FUN_00dde300(0xc1000000,0x41000000);
    fVar11 = (float10)local_4d8;
    local_4d8 = (float)(fVar12 + fVar11);
    pfVar8 = (float *)((*(int *)(param_1 + 0x940) + 0x221) * 0x10 + param_1);
    uVar13 = 0;
    *pfVar8 = local_4e0;
    pfVar8[1] = local_4dc;
    pfVar8[2] = (float)(fVar12 + fVar11);
    pfVar8[3] = local_4d4;
    uVar10 = FUN_00a7c8a0(0);
    FUN_004039a0(0xc4,uVar10,uVar13);
    FUN_00dffb20(*(int *)(param_1 + 0x940) * 0xb0 + 0x2330 + param_1);
    FUN_0041cdb0(&local_4e0);
    FUN_00a8c930(0,local_160);
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
    return;
  case 4:
    FUN_00aa4080(0x6a,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x429c0000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  case 5:
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if ((fVar1 < 0.0) && (*(int *)(param_1 + 0x940) < 6)) {
      FUN_00aa4080(0xd5,4,0,0x3e99999a,0x8000010,0,0x3f800000);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x940) * 0xb0 + 0x2330 + param_1) + 8))
                (0x3f800000,0,0);
      iVar7 = FUN_00a12210(afStack_4bc[*(int *)(param_1 + 0x940) % 6]);
      fVar1 = *(float *)(iVar7 + 0x10);
      fVar2 = *(float *)(iVar7 + 0x14);
      fVar3 = *(float *)(iVar7 + 0x18);
      fVar4 = *(float *)(iVar7 + 0x20);
      fVar5 = *(float *)(iVar7 + 0x24);
      fVar6 = *(float *)(iVar7 + 0x28);
      local_4c4 = *(float *)(iVar7 + 0x34);
      fStack_4c0 = *(float *)(iVar7 + 0x38);
      fVar11 = SQRT((float10)fStack_4c0 * (float10)fStack_4c0 +
                    (float10)local_4c4 * (float10)local_4c4 +
                    (float10)*(float *)(iVar7 + 0x30) * (float10)*(float *)(iVar7 + 0x30));
      fVar12 = (float10)fpatan((float10)*(float *)(iVar7 + 0x28) / fVar11,
                               (float10)*(float *)(iVar7 + 0x38) / fVar11);
      afStack_4bc[0] = (float)fVar12;
      fVar11 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)(iVar7 + 0x18) / fVar11));
      afStack_4bc[1] = (float)fVar11;
      fVar11 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)*(float *)(iVar7 + 0x10) /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      afStack_4bc[2] = (float)fVar11;
      local_4e0 = *(float *)(iVar7 + 0x4c);
      FUN_0041fee0();
      uStack_378 = 6;
      uStack_488 = 0x3b002;
      uStack_31c = FUN_009f8b40();
      uStack_37c = 0x16;
      uStack_478 = 0x1e;
      uStack_470 = 0x1e;
      uStack_46c = uStack_46c & 0xffffff00;
      uStack_474 = 0x96;
      uVar9 = FUN_00ac84d0(0x14);
      local_4c4 = (float)(**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x14);
      local_4cc = (float)(**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x14);
      uStack_460 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x14);
      fStack_464 = afStack_4bc[2];
      uStack_45c = *(undefined4 *)(param_1 + 0x4f0);
      fStack_468 = afStack_4bc[1];
      uStack_45f = 10;
      uStack_46c = uVar9;
      uVar10 = FUN_00a7c7f0();
      FUN_00a7c960(uVar10);
      auStack_480[0] = auStack_480[0] | 4;
      uStack_306 = *(undefined2 *)(iVar7 + 0xa0);
      iVar7 = (*(int *)(param_1 + 0x940) + 0x221) * 0x10;
      local_4d0 = *(float *)(iVar7 + param_1);
      iVar7 = iVar7 + param_1;
      local_4cc = *(float *)(iVar7 + 4);
      local_4c8 = *(float *)(iVar7 + 8);
      local_4c4 = *(float *)(iVar7 + 0xc);
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_488 = 0;
      FUN_0043fed0(0,0xffffffff,&uStack_490);
      uStack_1a0 = 1;
      FUN_00416e30(&local_4e0,&local_4d0,afStack_4bc + 3,0x3f800000,0x44480000);
      FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_480);
      FUN_00c81b30(0x2f);
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      *(undefined4 *)(param_1 + 0x924) = 0x40400000;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 6:
    FUN_00aa4080(0x6b,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    goto LAB_00aff371;
  case 7:
LAB_00aff371:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
      iVar7 = FUN_00ac4780();
      if (iVar7 == 2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
      }
      iVar7 = FUN_00ac4780();
      if (2 < iVar7) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
        return;
      }
    }
  default:
    goto switchD_00afec5d_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_00afec5d_default:
  return;
}

// 00AFF410  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_7  size=122  [class]
void lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_7(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined **local_410;
  undefined1 *local_40c;
  int local_408;
  undefined4 local_404;
  undefined1 local_400 [1024];
  
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  FUN_00a7f440(param_1,&local_410);
  puVar1 = local_40c;
  if (local_40c != local_40c + local_408 * 4) {
    do {
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
      puVar1 = puVar1 + 4;
    } while (puVar1 != local_40c + local_408 * 4);
  }
  return;
}

// 00B26B80  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_6  size=602  [class]
void __fastcall lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_6(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  float10 fVar6;
  int local_590;
  int local_58c;
  int local_588;
  float local_584;
  int local_580;
  float local_57c;
  int local_578;
  float local_574;
  undefined **local_570;
  undefined1 *local_56c;
  int local_568;
  undefined4 local_564;
  undefined1 local_560 [1372];
  
  iVar2 = FUN_00a8cac0();
  iVar4 = 0;
  if (iVar2 == 0) {
    FUN_00aa4080(0x3d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 1;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    local_56c = local_560;
    local_568 = 0;
    local_564 = 0x100;
    local_570 = vftable;
    FUN_00a7f440(0x20040,&local_570);
    puVar5 = local_56c;
    if (local_56c != local_56c + local_568 * 4) {
      do {
        iVar2 = FUN_00a7c8a0();
        if (*(int *)(iVar2 + 0x4ac) == 2) {
          iVar4 = iVar4 + 1;
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != local_56c + local_568 * 4);
      if (4 < iVar4) {
        FUN_00a8ca80(0,0,0);
        uVar3 = FUN_004039a0(0x3d,param_1,0);
        FUN_00a963e0(uVar3);
        (**(code **)(*param_1 + 0x20))();
        param_1[0x38e] = 0x40400000;
        FUN_00a8caf0(0x9d,0,0,0);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x38f] = 0x40400000;
    param_1[0x3a5] = 0;
    return;
  }
  if (iVar2 == 1) {
    fVar6 = (float10)FUN_00a93060();
    fVar6 = fVar6 + (float10)(float)param_1[0x3a5];
    param_1[0x3a5] = (int)(float)fVar6;
    fVar6 = (float10)0.98 * fVar6 * fVar6;
    param_1[0x15] = (int)(float)((float10)(float)param_1[0x15] - fVar6);
    local_590 = param_1[0x14];
    local_58c = param_1[0x15];
    local_588 = param_1[0x16];
    local_584 = (float)param_1[0x17];
    local_580 = param_1[0x14];
    local_57c = (float)(-fVar6 + (float10)(float)param_1[0x15]);
    local_578 = param_1[0x16];
    local_574 = (float)param_1[0x17] + local_584;
    iVar2 = FUN_009f8b40();
    iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (0,0,0,0,&local_590,&local_580,iVar2 << 0x10 | 0x1e,&DAT_0163d54c);
    if (iVar2 != 0) {
      FUN_00b0dd40();
      param_1[0x128] = 3;
      param_1[299] = 2;
      HoldEntitySlot::HoldEntitySlot();
      return;
    }
  }
  else if (iVar2 == 2) {
    fVar1 = (float)param_1[0x38f];
    fVar6 = (float10)FUN_00a93060();
    param_1[0x38f] = (int)(float)((float10)fVar1 - fVar6);
    if ((float10)fVar1 - fVar6 < (float10)0) {
      param_1[0x38f] = (int)(float)(float10)0;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  return;
}

// 00B26DE0  FUN_00b26de0  size=151  [callgraph]
void __fastcall FUN_00b26de0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x63c) + 8)) {
    do {
      piVar1 = (int *)FUN_00a92f50(iVar3);
      if (*piVar1 == 1) {
        FUN_00a8caf0(0x99,0,0,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x63c) + 8));
  }
  FUN_00a9d860();
  FUN_00a8cab0();
  uVar2 = FUN_00a8cab0();
  switch(uVar2) {
  case 0x99:
    FUN_00b048f0();
    break;
  case 0x9a:
    FUN_00b202e0();
    break;
  case 0x9b:
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_6();
    break;
  case 0x9c:
    FUN_00b20800();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B26E90  FUN_00b26e90  size=1088  [callgraph]
void __fastcall FUN_00b26e90(int param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  if (iVar2 == 0) {
    FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0x42100000;
    FUN_00a8d710(param_1 + 0x40);
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffffbf;
    *(undefined4 *)(param_1 + 0x1314) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xffffffff;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffdfffff;
    return;
  }
  if (iVar2 == 1) {
    FUN_00a8d790(&local_2c);
    cVar1 = FUN_00c9db20(0);
    iVar2 = FUN_00a97e60(0x3f000000,(*(uint *)(param_1 + 0x1124) & 1) == 0);
    if ((iVar2 != 0) && (cVar1 != '\0')) {
      FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x920) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    local_20 = local_2c;
    local_1c = local_28;
    local_18 = local_24;
    local_14 = 0x3f800000;
    iVar2 = FUN_00b24210(&local_20,7);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
    }
    else {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  if (iVar2 != 2) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x620);
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      if (*(int *)(param_1 + 0x10d0) == 0) {
        return;
      }
      fVar3 = (float10)FUN_00b02710(*(int *)(param_1 + 0x10d0) + 0x40);
      if (fVar3 <= (float10)0.34906584) {
        return;
      }
      iVar2 = FUN_00b033c0(*(int *)(param_1 + 0x10d0) + 0x40);
      if (iVar2 == 8) {
        uVar4 = 10;
      }
      else if (iVar2 == 9) {
        uVar4 = 9;
      }
      else {
        if (iVar2 != 0xc) goto LAB_00b26fb5;
        uVar4 = 0xd;
      }
      FUN_00aa4120(uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
LAB_00b26fb5:
      *(undefined4 *)(param_1 + 0x620) = 1;
      return;
    }
    goto LAB_00b27096;
  }
  if ((*(int *)(param_1 + 0x10d0) == 0) ||
     (fVar3 = (float10)FUN_00b02710(*(int *)(param_1 + 0x10d0) + 0x40), fVar3 <= (float10)0.34906584
     )) {
    FUN_00aa4120(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x620) = 2;
    return;
  }
  iVar2 = FUN_00b033c0(*(int *)(param_1 + 0x10d0) + 0x40);
  if (iVar2 == 8) {
    uVar4 = 10;
LAB_00b27089:
    FUN_00aa4120(uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  else {
    if (iVar2 == 9) {
      uVar4 = 9;
      goto LAB_00b27089;
    }
    if (iVar2 == 0xc) {
      uVar4 = 0xd;
      goto LAB_00b27089;
    }
  }
  *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
LAB_00b27096:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x10d0) != 0)) {
    FUN_00b02610(*(int *)(param_1 + 0x10d0) + 0x40,0x3dcccccd,0x3db2b8c2);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  FUN_00aa4120(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
  return;
}

// 00B272D0  FUN_00b272d0  size=477  [callgraph]
void __fastcall FUN_00b272d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar4 = FUN_00a81330();
  if (((iVar4 == 0) || (iVar4 = FUN_00a7c8a0(), iVar4 == 0)) || (*(int *)(param_1 + 0xff8) < 0)) {
    FUN_00b0f8a0();
  }
  else {
    iVar4 = FUN_00a12210(*(undefined4 *)(param_1 + 0xffc));
    if (iVar4 != 0) {
      fVar2 = *(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x40);
      fVar3 = *(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x48);
      fVar1 = *(float *)(param_1 + 0x94);
      fVar6 = (float10)FUN_00a8ec30((float *)(iVar4 + 0x40));
      fVar6 = (float10)FUN_00ddba30((float)((float10)fVar1 - fVar6));
      if (10.240001 <= fVar2 * fVar2 + fVar3 * fVar3) {
        FUN_00b10f60(0xb1);
        return;
      }
      if (ABS(fVar6) < (float10)0.6981317) {
        if (*(int *)(param_1 + 0xffc) != 0xf05) {
          FUN_00b10f60(0xb3);
          return;
        }
        FUN_00b10f60(0xb1);
        return;
      }
      FUN_00b10f60(0xb2);
      return;
    }
  }
  if (DAT_01bea740 == 0) {
    iVar4 = *(int *)(param_1 + 0x10b4);
    if ((iVar4 != -1) ||
       ((*(int *)(param_1 + 0x1138) == 2 && (iVar4 = FUN_00b07ca0(0), iVar4 != -1)))) {
      FUN_00b10f60(iVar4);
      return;
    }
    if (*(int *)(param_1 + 0x10d0) != 0) {
      fVar6 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)*(float *)(param_1 + 0x94)));
      if ((float10)0.7853982 < ABS(fVar6)) {
        uVar5 = FUN_00b033c0(param_1 + 0x10e0);
        FUN_00b10f60(uVar5);
      }
    }
    iVar4 = FUN_00b17dc0();
    if (((iVar4 == 0) && (*(float *)(param_1 + 0x924) <= *(float *)(param_1 + 0x920))) &&
       ((*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) <
         *(float *)(param_1 + 0x10d4) ==
         (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) ==
         *(float *)(param_1 + 0x10d4)) && (3 < *(int *)(param_1 + 0x814))))) {
      FUN_00b236c0();
      return;
    }
  }
  return;
}

// 00B274B0  FUN_00b274b0  size=193  [callgraph]
void __fastcall FUN_00b274b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x1314) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xffffffff;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffdfffff;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    iVar1 = FUN_00b24210(param_1 + 0x10e0,7);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
    }
    else {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B27580  FUN_00b27580  size=418  [callgraph]
void __fastcall FUN_00b27580(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    fVar2 = (float10)FUN_00dde300(0x3f000000,0x3fc00000);
    *(undefined4 *)(param_1 + 0x1314) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xffffffff;
    *(float *)(param_1 + 0x920) = (float)(fVar2 * fVar2);
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffdfffff;
    if (*(int *)(param_1 + 0x4a0) == 5) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x40;
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = FUN_00b24210(param_1 + 0x10e0,8);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
      }
      if (((((*(byte *)(param_1 + 0x1124) & 1) == 0) && (*(int *)(param_1 + 0xea0) != 0)) &&
          (*(int *)(param_1 + 0xf64) != 0)) &&
         ((*(int *)(param_1 + 0x4a0) != 5 && (*(int *)(param_1 + 0x1314) != 8)))) {
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_00b07a80((undefined4 *)(param_1 + 0x620),0x3e4ccccd,0x3da3d70a);
      if (iVar1 != 0) {
        FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x620) = 0;
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
    }
  }
  return;
}

// 00B27730  FUN_00b27730  size=605  [callgraph]
void __fastcall FUN_00b27730(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x188] = 0;
    if (param_1[0x434] != 0) {
      iVar1 = FUN_00a979d0();
      if (iVar1 == 0) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x434] + 0x40);
        iVar1 = FUN_00c68b60();
        param_1[0x443] = iVar1;
      }
    }
    param_1[0x4c5] = 0;
    param_1[0x4c6] = -1;
    param_1[0x449] = param_1[0x449] | 0x100;
    param_1[0x449] = param_1[0x449] & 0xffdfffff;
    param_1[0x449] = param_1[0x449] | 0x8000000;
  }
  else {
    if (iVar1 == 1) {
      if ((param_1[0x434] != 0) && (param_1[0x188] == 0)) {
        FUN_00a979f0(&local_2c);
        iVar1 = FUN_00aa09c0(param_1[0x434] + 0x40,0x3f800000,param_1[0x449] & 1);
        if (iVar1 != 0) {
          iVar1 = FUN_00a8d380();
          if (iVar1 != 0) {
            FUN_00a8d2f0();
            (**(code **)(*param_1 + 0x34c))();
            param_1[0x5ad] = 1;
            return;
          }
          iVar1 = FUN_00c68b60();
          param_1[0x443] = iVar1;
        }
        local_20 = local_2c;
        local_1c = local_28;
        local_18 = local_24;
        local_14 = 0x3f800000;
        iVar1 = FUN_00b24210(&local_20,8);
        FUN_00b05b20(iVar1 == 0);
        if ((iVar1 != 0) && (param_1[0x3f1] != 0)) {
          FUN_00a8d330(param_1 + 0x10,param_1[0x434] + 0x40);
        }
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_00b07a80(param_1 + 0x188,0x3e19999a,0x3cf5c28f);
      if (iVar1 != 0) {
        if ((*(byte *)(param_1 + 0x449) & 1) == 0) {
          uVar2 = 8;
        }
        else {
          uVar2 = 7;
        }
        FUN_00aa4120(uVar2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = 1;
        param_1[0x188] = 0;
        return;
      }
    }
  }
  return;
}

// 00B27990  FUN_00b27990  size=482  [callgraph]
void __fastcall FUN_00b27990(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a8d710(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1314) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xffffffff;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffdfffff;
  }
  else {
    if (iVar3 == 1) {
      FUN_00a8d790(&local_2c);
      cVar2 = FUN_00c9db20(0);
      iVar3 = FUN_00a97e60(0x3f000000,(*(uint *)(param_1 + 0x1124) & 1) == 0);
      if ((iVar3 != 0) && (cVar2 != '\0')) {
        FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x920) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
      local_20 = local_2c;
      local_1c = local_28;
      local_18 = local_24;
      local_14 = 0x3f800000;
      iVar3 = FUN_00b24210(&local_20,7);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar3 == 2) {
      fVar1 = *(float *)(param_1 + 0x920) - 0.016666668;
      *(float *)(param_1 + 0x920) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
  }
  return;
}

// 00B27B80  FUN_00b27b80  size=455  [callgraph]
void __fastcall FUN_00b27b80(int *param_1)

{
  int iVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    local_20 = local_4c;
    local_1c = local_48;
    local_18 = local_44;
    local_14 = 0x3f800000;
    FUN_00a8d330(param_1 + 0x10,&local_20);
    param_1[0x4c5] = 0;
    param_1[0x4c6] = -1;
    param_1[0x449] = param_1[0x449] | 0x100;
    param_1[0x449] = param_1[0x449] & 0xffdfffff;
  }
  else if (param_1[0x187] == 1) {
    iVar1 = FUN_00a979d0();
    if (iVar1 == 0) {
      FUN_00ac46b0(&local_4c,1);
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      iVar1 = FUN_00b24210(&local_40,8);
      if (iVar1 == 0) {
        param_1[0x449] = param_1[0x449] | 0x80;
      }
      else {
        param_1[0x449] = param_1[0x449] & 0xffffff7f;
      }
    }
    else {
      FUN_00a979f0(&local_4c);
      iVar1 = FUN_00aa09c0(param_1[0x434] + 0x40,0x3f800000,param_1[0x449] & 1);
      if (iVar1 != 0) {
        iVar1 = FUN_00a8d380();
        if (iVar1 != 0) {
          FUN_00a8d2f0();
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
    }
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    local_24 = 0x3f800000;
    iVar1 = FUN_00b24210(&local_30,8);
    if (iVar1 == 0) {
      param_1[0x449] = param_1[0x449] | 0x80;
    }
    else {
      param_1[0x449] = param_1[0x449] & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B27D50  FUN_00b27d50  size=338  [callgraph]
void __fastcall FUN_00b27d50(int param_1)

{
  int iVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa9280(8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    local_30 = *(undefined4 *)(param_1 + 0xb8c);
    local_2c = *(undefined4 *)(param_1 + 0xb90);
    local_28 = *(undefined4 *)(param_1 + 0xb94);
    local_24 = 0x3f800000;
    FUN_00a8d330(param_1 + 0x40,&local_30);
    *(undefined4 *)(param_1 + 0x1314) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xffffffff;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffdfffff;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  local_3c = *(undefined4 *)(param_1 + 0xb8c);
  local_38 = *(undefined4 *)(param_1 + 0xb90);
  local_34 = *(undefined4 *)(param_1 + 0xb94);
  iVar1 = FUN_00a979d0();
  if (iVar1 != 0) {
    FUN_00a979f0(&local_3c);
    iVar1 = FUN_00aa09c0(*(int *)(param_1 + 0x10d0) + 0x40,0x3f800000,
                         *(uint *)(param_1 + 0x1124) & 1);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8d380();
      if (iVar1 != 0) {
        FUN_00a8d2f0();
      }
    }
  }
  local_20 = local_3c;
  local_1c = local_38;
  local_18 = local_34;
  local_14 = 0x3f800000;
  iVar1 = FUN_00b24210(&local_20,8);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
  }
  else {
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B27EB0  FUN_00b27eb0  size=734  [callgraph]
void __fastcall FUN_00b27eb0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  
  if ((param_1[0x4b3] == 0) || (iVar2 = FUN_00a81330(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c8a0();
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    fVar6 = (float10)FUN_00dde300(0x3f000000,0x3fc00000);
    param_1[0x4c5] = 0;
    param_1[0x4c6] = -1;
    param_1[0x248] = (int)(float)(fVar6 * fVar6);
    param_1[0x249] = 0x41200000;
    param_1[0x449] = param_1[0x449] | 0x100;
    param_1[0x449] = param_1[0x449] & 0xffdfffff;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0);
    if ((iVar3 != 0) && (iVar2 != 0)) {
      FUN_00b02610(iVar2 + 0x40,0x3e4ccccd,0x3db2b8c2);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00b10f60(0x1c);
    return;
  }
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b2800d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  pfVar5 = (float *)(iVar2 + 0x40);
  iVar3 = FUN_00b24210(pfVar5,8);
  if (iVar3 == 0) {
    param_1[0x449] = param_1[0x449] | 0x80;
  }
  else {
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
  }
  fVar1 = ((float)param_1[0x25a] - (float)param_1[0x16]) *
          ((float)param_1[0x25a] - (float)param_1[0x16]) +
          ((float)param_1[600] - (float)param_1[0x14]) *
          ((float)param_1[600] - (float)param_1[0x14]);
  if (fVar1 < 0.0121 == (fVar1 == 0.0121)) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[0x244] + (float)param_1[0x24b];
  }
  param_1[0x24b] = (int)fVar1;
  param_1[600] = param_1[0x14];
  param_1[0x259] = param_1[0x15];
  param_1[0x25a] = param_1[0x16];
  param_1[0x25b] = param_1[0x17];
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x12] - *(float *)(iVar2 + 0x48);
  fVar1 = fVar1 * fVar1 + ((float)param_1[0x10] - *pfVar5) * ((float)param_1[0x10] - *pfVar5);
  if ((2.25 < fVar1) && (((float)param_1[0x24b] <= 10.0 || (fVar1 < 16.0 == (fVar1 == 16.0))))) {
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(pfVar5);
  fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
  if ((float10)0.5235988 < ABS(fVar6)) {
    uVar4 = 10;
    iVar2 = FUN_00b033c0(pfVar5);
    if (iVar2 != 8) {
      if (iVar2 == 9) {
        uVar4 = 9;
      }
      else if (iVar2 == 0xc) {
        uVar4 = 0xd;
      }
    }
    FUN_00aa4080(uVar4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  FUN_00b10f60(0x1c);
  return;
}

// 00B529E0  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4  size=372  [class]
undefined4 __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4(int param_1)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar7 = *(int *)(param_1 + 0x4b0);
  if (((iVar7 != 0x20150) && (iVar7 != 0x20152)) && (iVar7 != 0x20170)) {
    iVar7 = 0;
    sVar2 = FUN_00dde2d0(0,100);
    uVar3 = (int)sVar2 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    if ((((uVar3 == 0) && (*(int *)(param_1 + 0x13c8) != 0)) &&
        ((fVar1 = *(float *)(param_1 + 0xfbc), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0) &&
         ((fVar1 = *(float *)(param_1 + 0xa8c), NAN(fVar1) || 30.25 < fVar1 == (fVar1 == 30.25) &&
          (2.25 < *(float *)(param_1 + 0xa8c))))))) &&
       (fVar1 = *(float *)(param_1 + 0xaa0), NAN(fVar1) || 0.5235988 < fVar1 == (fVar1 == 0.5235988)
       )) {
      iVar4 = FUN_00c27750(*(int *)(param_1 + 0xa84) + 0x40,0x40e00000,0xffffffff);
      if ((1 < iVar4) && ((*(uint *)(param_1 + 0xddc) & 0x8000) == 0)) {
        local_4c = local_40;
        uVar6 = 1;
        local_48 = 0;
        local_44 = 0x10;
        local_50 = vftable;
        iVar4 = FUN_00c27c10(&local_50);
        if (0 < iVar4) {
          while( true ) {
            uVar6 = FUN_00a7c8a0();
            iVar5 = FUN_004ddcd0(uVar6);
            if (((iVar5 != 0) && (iVar5 != param_1)) &&
               ((*(int *)(iVar5 + 0x618) == 0xa0021 || (*(int *)(iVar5 + 0x618) == 0xa0022))))
            break;
            iVar7 = iVar7 + 1;
            if (iVar4 <= iVar7) {
              return 1;
            }
          }
          uVar6 = 0;
        }
        return uVar6;
      }
    }
    return 0;
  }
  return 0;
}

// 00B52B60  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5  size=292  [class]
bool __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar2 = FUN_00ac8120();
  iVar5 = 0;
  if (((iVar2 == 0) || (param_1[300] == 0x20170)) || ((param_1[0x12a] & 0x400000U) != 0)) {
    return false;
  }
  bVar6 = false;
  if (((*(int *)(iVar2 + 0x2664) == 0) &&
      (fVar1 = (float)param_1[0x2a5], !NAN(fVar1) && 1.5 < fVar1 != (fVar1 == 1.5))) &&
     (bVar6 = param_1[0x63c] != 0, param_1[0x5c6] != 0)) {
    bVar6 = true;
  }
  if ((param_1[0x376] & 0x8000U) == 0) {
    if (bVar6 == false) {
      return false;
    }
  }
  else {
    bVar6 = true;
  }
  local_4c = local_40;
  local_48 = 0;
  local_44 = 0x10;
  local_50 = vftable;
  iVar2 = FUN_00c27c10(&local_50);
  if (iVar2 < 1) {
    return bVar6;
  }
  do {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar7 = &DAT_01be9d20;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d20);
      iVar4 = FUN_00dd6d80(puVar7);
      if (((iVar4 != 0) && (piVar3 != param_1)) && (piVar3[0x186] == 0x1000c)) {
        return false;
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar2 <= iVar5) {
      return bVar6;
    }
  } while( true );
}

// 00B52C90  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6  size=276  [class]
undefined4 __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  if (((*(int *)(param_1 + 0x4b0) == 0x20170) || ((*(uint *)(param_1 + 0x4a8) & 0x400000) != 0)) ||
     (0.0 < *(float *)(param_1 + 0x1978))) {
    return 0;
  }
  iVar4 = 0;
  if ((((*(int *)(param_1 + 0x13c8) != 0) && (*(float *)(param_1 + 0xa8c) <= 20.25)) &&
      ((6.25 <= *(float *)(param_1 + 0xa8c) &&
       ((*(float *)(param_1 + 0xaa0) <= 0.7853982 &&
        (*(int *)(param_1 + 0xf64) < *(int *)(param_1 + 0xf60))))))) &&
     (*(int *)(param_1 + 0x196c) == 0)) {
    local_4c = local_40;
    uVar3 = 1;
    local_48 = 0;
    local_44 = 0x10;
    local_50 = vftable;
    iVar1 = FUN_00c27c10(&local_50);
    if (0 < iVar1) {
      while( true ) {
        uVar3 = FUN_00a7c8a0();
        iVar2 = FUN_004ddcd0(uVar3);
        if (((iVar2 != 0) && (iVar2 != param_1)) && (*(int *)(iVar2 + 0x618) == 0x10008)) break;
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) {
          return 1;
        }
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

// 00B72120  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_7  size=393  [class]
bool __fastcall lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_7(int *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  if ((*(byte *)((int)param_1 + 0xdae) < 5) ||
     ((iVar3 = param_1[0x36c], iVar3 != 2 && (iVar3 != -1)))) {
    return false;
  }
  iVar6 = 0;
  bVar1 = (float)param_1[0x63c] <= 0.0 && (param_1[0x5fd] != 0 && param_1[0x5fc] != 0);
  if ((param_1[0x2fa] != 0) ||
     ((float)param_1[0x63c] > 0.0 || (param_1[0x5fd] == 0 || param_1[0x5fc] == 0))) {
    if ((iVar3 == 2) || (iVar3 == -1)) {
      param_1[0x36c] = 1;
    }
    return false;
  }
  local_4c = local_40;
  local_48 = 0;
  local_44 = 0x10;
  local_50 = vftable;
  iVar3 = FUN_00c27cb0(param_1[0x13c],0x42c80000,&local_50,0x20030);
  if (iVar3 < 1) {
    return bVar1;
  }
  do {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar7 = &DAT_01be9d50;
      (**(code **)(*piVar4 + 4))(&DAT_01be9d50);
      iVar5 = FUN_00dd6d80(puVar7);
      if (((iVar5 != 0) && (piVar4 != param_1)) &&
         (((piVar4[0x186] & 0xffff0000U) == 0x50000 || ((piVar4[0x186] & 0xffff0000U) == 0xa0000))))
      {
        sVar2 = FUN_00dde2d0(1,10);
        param_1[0x63c] = (int)((float)(int)sVar2 * 0.1 * 60.0 + (float)param_1[0x63c]);
        if ((param_1[0x36c] != 2) && (param_1[0x36c] != -1)) {
          return false;
        }
        param_1[0x36c] = 1;
        return false;
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar3 <= iVar6) {
      return bVar1;
    }
  } while( true );
}

// 00BC7AF0  lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_8  size=1054  [class]
void __fastcall lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_8(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iStack_250;
  int iStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined **ppuStack_234;
  undefined1 *puStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined1 auStack_224 [544];
  
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    puStack_230 = auStack_224;
    iStack_22c = 0;
    uStack_228 = 0x40;
    ppuStack_234 = vftable;
    iVar2 = FUN_00a7f440(0x42006,&ppuStack_234);
    if ((iVar2 != 0) && (puVar7 = puStack_230, puStack_230 != puStack_230 + iStack_22c * 4)) {
      do {
        iVar2 = FUN_00a7c8a0();
        iStack_248 = 0;
        if (0 < *(short *)(iVar2 + 0x324)) {
          iStack_250 = 0;
          do {
            iVar6 = *(int *)(iVar2 + 800) + iStack_250;
            iVar3 = *(int *)(*(int *)(iVar6 + 0x60) + 0x40);
            if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163f64c), iVar3 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iStack_250 = iStack_250 + 0x70;
            iStack_248 = iStack_248 + 1;
          } while (iStack_248 < *(short *)(iVar2 + 0x324));
        }
        puVar7 = puVar7 + 4;
      } while (puVar7 != puStack_230 + iStack_22c * 4);
    }
    param_1[0x14] = 0x42910000;
    param_1[0x15] = 0x42ea0000;
    param_1[0x16] = -0x3de40000;
    param_1[0x17] = iStack_238;
    param_1[0x24] = 0;
    param_1[0x25] = -0x4036f025;
    param_1[0x26] = 0;
    param_1[0x27] = iStack_238;
    param_1[0x250] = 0;
    FUN_00aa4080(0x14f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = 0x80006;
      FUN_00a7c8a0(0x80006,0,0,0);
      FUN_00a8caf0(uVar5,uVar8,uVar9,uVar10);
    }
    puStack_230 = auStack_224;
    iStack_22c = 0;
    uStack_228 = 0x40;
    ppuStack_234 = vftable;
    iVar2 = FUN_00a7f440(0x20120,&ppuStack_234);
    if ((iVar2 != 0) && (puVar7 = puStack_230, puStack_230 != puStack_230 + iStack_22c * 4)) {
      do {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar5 = 0x80006;
        FUN_00a7c8a0(0x80006,0,0,0);
        FUN_00a8caf0(uVar5,uVar8,uVar9,uVar10);
        puVar7 = puVar7 + 4;
      } while (puVar7 != puStack_230 + iStack_22c * 4);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a95540(0,0x96);
  if (iVar2 != 0) {
    FUN_00dda360(0,0x3f333333,0x3f333333,0x32);
  }
  iVar2 = FUN_00a957b0(0);
  iVar2 = FUN_00a95120(0,iVar2 + -0xb);
  if (iVar2 != 0) {
    FUN_00d5ea40("P430_OUTER_WALL_RESTART",0,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar2 = FUN_00a95540(0,0x2a);
  if (iVar2 != 0) {
    FUN_00dda360(0,0x3fc00000,0x3fc00000,0xf);
    puStack_230 = auStack_224;
    iStack_22c = 0;
    uStack_228 = 0x40;
    ppuStack_234 = vftable;
    iVar2 = FUN_00a7f440(0x42006,&ppuStack_234);
    if ((iVar2 != 0) && (puVar7 = puStack_230, puStack_230 != puStack_230 + iStack_22c * 4)) {
      do {
        piVar4 = (int *)FUN_00a7c8a0();
        if (piVar4 != (int *)0x0) {
          puVar11 = &DAT_01b35328;
          (**(code **)(*piVar4 + 4))(&DAT_01b35328);
          iVar2 = FUN_00dd6d80(puVar11);
          if (iVar2 != 0) {
            FUN_005d8f40();
          }
        }
        puVar7 = puVar7 + 4;
      } while (puVar7 != puStack_230 + iStack_22c * 4);
    }
  }
  iVar2 = FUN_00a81330();
  if (((iVar2 == 0) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) && (param_1[0x250] == 0)) {
    param_1[0x250] = 1;
    iVar2 = FUN_00a12210(0xf00);
    uStack_244 = *(undefined4 *)(iVar2 + 0x40);
    uStack_240 = *(undefined4 *)(iVar2 + 0x44);
    uStack_23c = *(undefined4 *)(iVar2 + 0x48);
    iStack_238 = *(undefined4 *)(iVar2 + 0x4c);
    uVar5 = FUN_00e01ca0();
    FUN_00e013e0(0x20120,8,&uStack_244,uVar5);
  }
  return;
}

// 00BD3AF0  FUN_00bd3af0  size=2243  [callgraph]
void FUN_00bd3af0(undefined4 *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined *puVar11;
  float local_a8;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar11 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar11);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar5 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar11 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar11);
    uVar5 = -(uint)(iVar6 != 0) & (uint)piVar2;
  }
  FUN_00f98a90();
  FUN_00f98aa0();
  local_50 = *param_2;
  local_4c = param_2[1];
  local_48 = 0.0;
  local_30 = param_2[2];
  local_2c = param_2[3];
  local_28 = 0.0;
  local_54 = local_44 + local_24;
  local_40 = (local_30 + local_50) * 0.5;
  local_3c = (local_4c + local_2c) * 0.5;
  local_34 = local_54 * 0.5;
  local_20 = (local_50 - local_40) * 100.0 + local_50;
  local_1c = (local_4c - local_3c) * 100.0 + local_4c;
  local_18 = 0;
  local_14 = (local_44 - local_34) * 100.0 + local_44;
  local_90 = local_30 - local_40;
  local_8c = local_2c - local_3c;
  local_84 = local_24 - local_34;
  local_60 = local_90 * 100.0;
  local_5c = local_8c * 100.0;
  local_70 = local_60 + local_30;
  local_6c = local_5c + local_2c;
  local_68 = 0;
  local_64 = local_84 * 100.0 + local_24;
  local_a0 = local_40 - local_20;
  local_9c = local_3c - local_1c;
  local_94 = local_34 - local_14;
  local_98 = 0;
  if ((local_a0 != 0.0) || (local_9c != 0.0)) {
    fVar1 = local_a0 * local_a0 + local_9c * local_9c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_a0,&local_a0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_a0 = 0.0;
      local_9c = 1.0;
      local_98 = 0;
    }
  }
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 0;
  FUN_00b83ee0(&local_50,&local_20,&local_a0,&local_60,0x447a0000);
  local_a0 = local_40 - local_70;
  local_9c = local_3c - local_6c;
  local_94 = local_34 - local_64;
  local_98 = 0;
  if ((local_a0 != 0.0) || (local_9c != 0.0)) {
    fVar1 = local_9c * local_9c + local_a0 * local_a0;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_a0,&local_a0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_a0 = 0.0;
      local_9c = 1.0;
      local_98 = 0;
    }
  }
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 0;
  FUN_00b83ee0(&local_30,&local_70,&local_a0,&local_60,0x447a0000);
  local_90 = (local_50 + local_30) * 0.5;
  local_8c = (local_4c + local_2c) * 0.5;
  local_88 = (local_48 + local_28) * 0.5;
  fVar1 = local_30 - local_90;
  fVar3 = local_2c - local_8c;
  fVar4 = local_28 - local_88;
  fVar8 = (float10)FUN_00ddbb50((fVar1 * 300.0 + fVar3 * 0.0 + fVar4 * 0.0) /
                                (SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4) * 300.0));
  if (local_2c < local_4c) {
    fVar8 = fVar8 * (float10)-1.0;
  }
  local_a8 = SQRT(local_88 * local_88 + local_8c * local_8c + local_90 * local_90);
  if (100.0 <= local_a8) {
    local_74 = 1;
    fVar9 = (fVar8 + (float10)1.5707964) * (float10)57.29578;
    fVar1 = (float)fVar9;
    if ((float10)180.0 < fVar9) {
      fVar9 = fVar9 - (float10)360.0;
    }
    fVar10 = (float10)30.0;
    if (fVar10 <= ABS(fVar9)) {
      if (ABS(fVar9 - (float10)180.0) < fVar10) {
        if (0.0 <= local_90) {
          uVar7 = 0xf9;
        }
        else {
          uVar7 = 0x107;
        }
      }
      else if (ABS(fVar9 - (float10)90.0) < fVar10) {
        if (0.0 <= local_8c) {
          uVar7 = 0x105;
        }
        else {
          uVar7 = 0x103;
        }
      }
      else if (ABS(fVar9 - (float10)-90.0) < fVar10) {
        if (0.0 <= local_8c) {
          uVar7 = 0x104;
        }
        else {
          uVar7 = 0x102;
        }
      }
      else if (ABS(fVar9 - (float10)45.0) < fVar10) {
        if (local_8c <= 0.0) {
          uVar7 = 0x100;
        }
        else {
          uVar7 = 0xff;
        }
      }
      else if (ABS(fVar9 - (float10)-135.0) < fVar10) {
        if (local_8c <= 0.0) {
          uVar7 = 0x101;
        }
        else {
          uVar7 = 0xfe;
        }
      }
      else if (ABS(fVar9 - (float10)-45.0) < fVar10) {
        if (local_90 <= 0.0) {
          uVar7 = 0xf6;
        }
        else {
          uVar7 = 0xfd;
        }
      }
      else {
        if (fVar10 <= ABS(fVar9 - (float10)135.0)) {
          FUN_00bb9b10(param_1,*param_3,(float)fVar8,param_5);
          local_74 = 0;
          FUN_00a947e0(*param_3,0,fVar1,0);
          *param_4 = 0xffffffff;
          if (*(int *)(uVar5 + 0x40c8) != 0x13) goto LAB_00bd4208;
          uVar7 = *param_3;
          goto LAB_00bd4201;
        }
        uVar7 = 0xf5;
      }
    }
    else if (0.0 <= local_90) {
      uVar7 = 0xf2;
    }
    else {
      uVar7 = 0x106;
    }
    if (param_5 == 0) {
      switch(uVar7) {
      case 0xfc:
        uVar7 = 0x126;
        break;
      case 0xfd:
        uVar7 = 0x127;
        break;
      case 0xfe:
        uVar7 = 0x128;
        break;
      case 0xff:
        uVar7 = 0x129;
        break;
      case 0x100:
        uVar7 = 0x12a;
        break;
      case 0x101:
        uVar7 = 299;
        break;
      case 0x102:
        uVar7 = 300;
        break;
      case 0x103:
        uVar7 = 0x12d;
        break;
      case 0x104:
        uVar7 = 0x12e;
        break;
      case 0x105:
        uVar7 = 0x12f;
        break;
      case 0x106:
        uVar7 = 0x130;
        break;
      case 0x107:
        uVar7 = 0x131;
      }
    }
    FUN_00bb9b10(param_1,*param_3,(float)fVar8,param_5);
    FUN_00aa4080(uVar7,*param_4,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    local_a8 = local_a8 * 0.0011111111;
    if (1.0 < local_a8) {
      local_a8 = 1.0;
    }
    uVar7 = *param_3;
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 != 0) {
      FUN_00e36ac0(uVar7,1.0 - local_a8);
    }
    uVar7 = *param_4;
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 != 0) {
      FUN_00e36ac0(uVar7,local_a8);
    }
    if (*(int *)(uVar5 + 0x40c8) != 0x13) goto LAB_00bd4208;
    FUN_00a96030(*param_3,0x3f000000);
    uVar7 = *param_4;
  }
  else {
    FUN_00bb9b10(param_1,*param_3,(float)fVar8,param_5);
    local_74 = 0;
    if (*(int *)(uVar5 + 0x40c8) != 0x13) goto LAB_00bd4208;
    uVar7 = *param_3;
  }
LAB_00bd4201:
  FUN_00a96030(uVar7,0x3f000000);
LAB_00bd4208:
  FUN_00a95fb0(0);
  if (local_74 == 0) {
    uVar7 = *param_3;
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 != 0) {
      FUN_00e36ac0(uVar7,0x3f7d70a4);
    }
  }
  FUN_00e25500(0x3d088889);
  return;
}

// 00BD43F0  FUN_00bd43f0  size=3475  [callgraph]
void FUN_00bd43f0(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float *pfVar17;
  float fVar18;
  undefined1 *puVar19;
  float *local_334;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined4 local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float fStack_290;
  undefined1 auStack_28c [4];
  float fStack_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264 [13];
  float fStack_230;
  float afStack_22c [19];
  float fStack_1e0;
  float afStack_1dc [2];
  undefined1 auStack_1d4 [8];
  undefined1 auStack_1cc [20];
  undefined1 auStack_1b8 [4];
  float local_1b4;
  undefined1 local_170 [216];
  float fStack_98;
  float *pfStack_94;
  float *pfStack_90;
  float *pfStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float *pfStack_7c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    local_334 = (float *)&DAT_01be9ef4;
    (**(code **)*param_1)();
    iVar3 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    local_334 = (float *)&DAT_01be9db8;
    (**(code **)(*piVar1 + 4))();
    iVar3 = FUN_00dd6d80();
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  local_334 = (float *)0xbd4453;
  local_2d8 = (float)FUN_00f98a90();
  local_2d4 = (float)(int)local_2d8 * 0.5;
  local_334 = (float *)0xbd446a;
  local_2d8 = (float)FUN_00f98aa0();
  local_27c = (float)(int)local_2d8 * 0.5;
  local_280 = local_2d4;
  local_278 = 0.0;
  local_2a0 = *param_2;
  local_29c = param_2[1];
  local_298 = 0.0;
  local_2c0 = param_2[2];
  local_2bc = param_2[3];
  local_2b8 = 0.0;
  local_2d0 = (local_2c0 + local_2a0) * 0.5;
  local_2cc = (local_29c + local_2bc) * 0.5;
  local_2c4 = (local_2b4 + local_294) * 0.5;
  local_300 = (local_2a0 - local_2d0) * 100.0 + local_2a0;
  local_2fc = (local_29c - local_2cc) * 100.0 + local_29c;
  local_2f8 = 0.0;
  local_2f4 = (local_294 - local_2c4) * 100.0 + local_294;
  local_310 = (local_2c0 - local_2d0) * 100.0;
  local_30c = (local_2bc - local_2cc) * 100.0;
  local_320 = local_310 + local_2c0;
  local_31c = local_2bc + local_30c;
  local_318 = 0.0;
  local_314 = (local_2b4 - local_2c4) * 100.0 + local_2b4;
  local_2f0 = local_2d0 - local_300;
  local_2ec = local_2cc - local_2fc;
  local_2e4 = local_2c4 - local_2f4;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar16 = local_2f0 * local_2f0 + local_2ec * local_2ec;
    if (fVar16 < 0.0 == (fVar16 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0;
  local_334 = (float *)0x461c4000;
  FUN_00b83ee0(&local_2a0,&local_300,&local_2f0,&local_310);
  local_2f0 = local_2d0 - local_320;
  local_2ec = local_2cc - local_31c;
  local_2e4 = local_2c4 - local_314;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar16 = local_2f0 * local_2f0 + local_2ec * local_2ec;
    if (fVar16 < 0.0 == (fVar16 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0;
  local_334 = (float *)0x461c4000;
  FUN_00b83ee0(&local_2c0,&local_320,&local_2f0,&local_310);
  local_300 = (local_2a0 + local_2c0) * 0.5;
  local_2fc = (local_29c + local_2bc) * 0.5;
  local_2f8 = (local_298 + local_2b8) * 0.5;
  local_2f4 = (local_294 + local_2b4) * 0.5;
  fVar16 = local_2c0 - local_300;
  fVar13 = local_2bc - local_2fc;
  fVar18 = local_2b8 - local_2f8;
  local_334 = (float *)((fVar18 * 0.0 + fVar16 * 300.0 + fVar13 * 0.0) /
                       (SQRT(fVar13 * fVar13 + fVar16 * fVar16 + fVar18 * fVar18) * 300.0));
  fVar6 = (float10)FUN_00ddbb50();
  if (local_2bc < local_29c) {
    fVar6 = fVar6 * (float10)-1.0;
  }
  local_2d8 = (float)fVar6;
  local_2f0 = (local_2c0 * 0.4 + local_280) - (local_2a0 * 0.4 + local_280);
  local_2ec = (local_2bc * 0.4 + local_27c) - (local_29c * 0.4 + local_27c);
  local_2e4 = local_1b4 - local_1b4;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar16 = local_2ec * local_2ec + local_2f0 * local_2f0;
    if (fVar16 < 0.0 == (fVar16 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_334 = &local_280;
  FUN_00d9fab0(&local_2b0);
  local_334 = &local_320;
  local_320 = local_300 * 0.0 + local_280;
  local_31c = local_2fc * 0.0 + local_27c;
  local_318 = local_278 + local_2f8 * 0.0;
  local_314 = local_2f4 * 0.0 + local_274;
  FUN_00d9fab0(&local_270);
  local_334 = &local_310;
  pfVar2 = (float *)FUN_00a925a0();
  local_334 = &local_310;
  local_2b0 = local_2b0 - *pfVar2;
  local_2ac = local_2ac - pfVar2[1];
  local_2a8 = local_2a8 - pfVar2[2];
  local_2a4 = local_2a4 - pfVar2[3];
  pfVar2 = (float *)FUN_00a925a0();
  local_270 = (local_270 - *pfVar2) - local_2b0;
  local_26c = (local_26c - pfVar2[1]) - local_2ac;
  local_268 = (local_268 - pfVar2[2]) - local_2a8;
  local_264[0] = (local_264[0] - pfVar2[3]) - local_2a4;
  local_334 = (float *)0xffffffff;
  local_2b0 = local_270 + local_2b0;
  local_2ac = local_2ac + local_26c;
  local_2a8 = local_268 + local_2a8;
  local_2a4 = local_264[0] + local_2a4;
  iVar3 = FUN_00a12210();
  local_2d0 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                   *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                   *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
  local_2cc = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                   *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                   *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
  fVar16 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
  local_284 = *(float *)(iVar3 + 0x28) / fVar16;
  local_2d4 = *(float *)(iVar3 + 0x38) / fVar16;
  local_334 = (float *)-(*(float *)(iVar3 + 0x18) / fVar16);
  fVar6 = (float10)FUN_00ddbaa0();
  fVar12 = (float10)fpatan((float10)local_284,(float10)local_2d4);
  local_264[5] = (float)fVar12;
  local_264[6] = (float)fVar6;
  fVar6 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_2cc,
                          (float10)*(float *)(iVar3 + 0x10) / (float10)local_2d0);
  local_264[7] = (float)fVar6;
  local_320 = *(float *)(iVar3 + 0x40);
  local_31c = *(float *)(iVar3 + 0x44);
  local_318 = *(float *)(iVar3 + 0x48);
  local_314 = *(float *)(iVar3 + 0x4c);
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0x3f800000;
  FUN_00ddc1d0(afStack_22c + 0xb,local_264 + 5,5);
  local_334 = afStack_22c + 0xb;
  pfVar2 = &local_310;
  puVar19 = local_170;
  D3DXVec3TransformNormal(puVar19,pfVar2);
  local_31c = 1.0;
  local_318 = 0.0;
  local_314 = 0.0;
  FUN_00ddc1d0(afStack_22c + 8,local_264 + 2,5);
  pfVar15 = afStack_22c + 8;
  pfVar14 = &local_31c;
  D3DXVec3TransformNormal(auStack_1cc,pfVar14,pfVar15);
  local_320 = 0.0;
  FUN_00ddc1d0(afStack_22c + 5,&local_268,5);
  pfVar17 = afStack_22c + 5;
  D3DXVec3TransformNormal(&local_278,&stack0xfffffcd8,pfVar17);
  fVar16 = local_284 * 1.35 + (float)pfVar14;
  fVar18 = local_280 * 1.35 + (float)pfVar15;
  fVar13 = local_27c * 1.35 + (float)puVar19;
  local_2e8 = local_278 * 1.35 + (float)pfVar2;
  local_334 = (float *)(local_2e4 - local_2c4);
  local_2f4 = fVar16;
  local_2f0 = fVar18;
  local_2ec = fVar13;
  iVar3 = FUN_00b83fb0(&local_2c4,&local_334,&local_2a4,0x43480000);
  if (iVar3 != 0) {
    fVar13 = local_320 * 0.0011111111;
    fVar16 = (local_2f4 - fVar13 * local_284) - afStack_22c[0x12] * 0.0011111111;
    fVar18 = (local_2f0 - fVar13 * local_280) - fStack_1e0 * 0.0011111111;
    fVar13 = (local_2ec - fVar13 * local_27c) - afStack_1dc[0] * 0.0011111111;
  }
  local_264[0xb] = 0.0;
  local_264[9] = 0.0;
  local_264[8] = 0.0;
  local_264[7] = 0.0;
  local_264[6] = 0.0;
  local_264[4] = 0.0;
  local_264[3] = 0.0;
  local_264[2] = 0.0;
  local_264[1] = 0.0;
  afStack_22c[1] = 1.0;
  local_264[10] = 1.0;
  local_264[5] = 1.0;
  local_264[0] = 1.0;
  afStack_22c[0x10] = 0.0;
  afStack_22c[0xf] = 0.0;
  afStack_22c[0xe] = 0.0;
  afStack_22c[0xd] = 0.0;
  afStack_22c[0xb] = 0.0;
  afStack_22c[10] = 0.0;
  afStack_22c[9] = 0.0;
  afStack_22c[8] = 0.0;
  afStack_22c[6] = 0.0;
  afStack_22c[5] = 0.0;
  afStack_22c[4] = 0.0;
  afStack_22c[3] = 0.0;
  afStack_22c[0x11] = 1.0;
  afStack_22c[0xc] = 1.0;
  afStack_22c[7] = 1.0;
  afStack_22c[2] = 1.0;
  local_264[0xc] = fVar16;
  fStack_230 = fVar18;
  afStack_22c[0] = fVar13;
  if (local_26c != 0.0) {
    D3DXMatrixRotationZ(auStack_1d4,local_26c);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  if (local_270 != 0.0) {
    D3DXMatrixRotationY(auStack_1d4,local_270);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  if (local_274 != 0.0) {
    D3DXMatrixRotationX(auStack_1d4,local_274);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  D3DXMatrixMultiply(local_264,afStack_22c + 2,local_264);
  D3DXMatrixRotationX(&fStack_1e0,*(undefined4 *)(uVar4 + 0x374));
  pfVar2 = &local_278;
  pfVar14 = afStack_22c + 0x11;
  pfVar15 = pfVar2;
  D3DXMatrixMultiply(pfVar2,pfVar14,pfVar2);
  fVar13 = local_31c + 3.1415927;
  D3DXMatrixRotationZ(afStack_22c + 0xe,fVar13);
  D3DXMatrixMultiply(auStack_28c,afStack_22c + 0xc,auStack_28c);
  fVar6 = (float10)local_294;
  fVar12 = (float10)local_298;
  fVar7 = (float10)fStack_290;
  fVar8 = (float10)local_284;
  fVar9 = (float10)local_280;
  fVar10 = (float10)local_270;
  fVar11 = SQRT(fVar10 * fVar10 +
                (float10)local_274 * (float10)local_274 + (float10)local_278 * (float10)local_278);
  fVar10 = (float10)fpatan(fVar9 / fVar11,fVar10 / fVar11);
  fVar16 = (float)fVar10;
  fVar10 = (float10)FUN_00ddbaa0((float)-(fVar7 / fVar11));
  fStack_84 = (float)fVar10;
  fVar6 = (float10)fpatan((float10)local_294 /
                          (float10)(float)SQRT(fVar9 * fVar9 +
                                               (float10)fStack_288 * (float10)fStack_288 +
                                               fVar8 * fVar8),
                          (float10)local_298 /
                          (float10)(float)SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar6 * fVar6));
  fStack_80 = (float)fVar6;
  if (((param_3 & 1) != 0) && (*(int *)(uVar4 + 0x528) == 0)) {
    FUN_004039a0(5,uVar5,0);
    fStack_98 = fVar13;
    pfStack_94 = pfVar2;
    pfStack_90 = pfVar14;
    pfStack_8c = pfVar15;
    fStack_88 = fVar16;
    pfStack_7c = pfVar17;
    FUN_00dffb90(0x40000000);
    FUN_00a8c930(0,auStack_1b8);
  }
  return;
}

// 00BD5190  FUN_00bd5190  size=1384  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bd5190(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  undefined4 local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined4 local_258;
  float local_254;
  undefined1 auStack_24c [8];
  float local_244;
  undefined1 auStack_240 [4];
  float local_23c;
  undefined4 uStack_238;
  float local_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float afStack_1fc [2];
  float fStack_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e4;
  undefined1 local_1e0 [48];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [288];
  float *pfStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 *puStack_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar15 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar15);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar15 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar15);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  iVar4 = FUN_00f98a90();
  local_244 = (float)iVar4 * 0.5;
  iVar4 = FUN_00f98aa0();
  local_25c = (float)iVar4 * 0.5;
  local_260 = local_244;
  local_258 = 0;
  local_23c = param_2[1];
  local_1ec = param_2[3];
  local_280 = (param_2[2] + *param_2) * 0.5;
  local_27c = (local_23c + local_1ec) * 0.5;
  local_274 = (local_234 + local_1e4) * 0.5;
  fVar2 = param_2[2] - local_280;
  fVar13 = local_1ec - local_27c;
  fVar6 = (float10)FUN_00ddbb50((fVar2 * 300.0 + fVar13 * 0.0) /
                                (SQRT(fVar13 * fVar13 + fVar2 * fVar2) * 300.0));
  if (local_1ec < local_23c) {
    fVar6 = fVar6 * (float10)-1.0;
  }
  local_294 = (float)fVar6;
  FUN_00d9fab0(&local_290,&local_260);
  local_280 = local_280 * 12.0 + local_260;
  local_27c = local_27c * 12.0 + local_25c;
  local_278 = local_258;
  local_274 = local_274 * 12.0 + local_254;
  FUN_00d9fab0(&local_270,&local_280);
  pfVar5 = (float *)FUN_00da0690(&local_1f0,0x3f800000);
  local_290 = local_290 - *pfVar5 * 3.0;
  local_28c = local_28c - pfVar5[1] * 3.0;
  local_288 = local_288 - pfVar5[2] * 3.0;
  local_284 = local_284 - pfVar5[3] * 3.0;
  pfVar5 = (float *)FUN_00da0690(&local_1f0,0x3f800000);
  local_270 = (local_270 - *pfVar5 * 3.0) - local_290;
  puVar14 = local_1e0;
  local_26c = (local_26c - pfVar5[1] * 3.0) - local_28c;
  local_268 = (local_268 - pfVar5[2] * 3.0) - local_288;
  local_264 = (local_264 - pfVar5[3] * 3.0) - local_284;
  local_290 = local_270 + local_290;
  local_28c = local_28c + local_26c;
  local_288 = local_268 + local_288;
  local_284 = local_264 + local_284;
  D3DXMatrixRotationZ(puVar14,local_294 + 3.1415927);
  local_234 = 0.0;
  afStack_1fc[0] = 1.0;
  fStack_210 = 1.0;
  uStack_224 = 0x3f800000;
  uStack_238 = 0x3f800000;
  fStack_230 = local_234;
  fStack_22c = local_234;
  fStack_228 = local_234;
  fStack_220 = local_234;
  fStack_21c = local_234;
  fStack_218 = local_234;
  fStack_214 = local_234;
  fStack_20c = local_234;
  fStack_208 = local_234;
  fStack_204 = local_234;
  fStack_200 = local_234;
  if (_DAT_01bea3b8 != 0.0) {
    D3DXMatrixRotationZ(auStack_1a8,_DAT_01bea3b8);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  if (_DAT_01bea3b4 != 0.0) {
    D3DXMatrixRotationY(auStack_1a8,_DAT_01bea3b4);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  if (_DAT_01bea3b0 != 0.0) {
    D3DXMatrixRotationX(auStack_1a8,_DAT_01bea3b0);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  D3DXMatrixRotationY(auStack_1a8,0x40490fdb);
  puVar11 = auStack_240;
  puVar12 = auStack_1b0;
  D3DXMatrixMultiply(puVar11,puVar12,puVar11);
  puVar10 = auStack_24c;
  pfVar5 = afStack_1fc;
  D3DXMatrixMultiply(pfVar5,pfVar5,puVar10);
  D3DXMatrixMultiply(&fStack_208,&fStack_208,uVar3 + 0xb0);
  fVar6 = (float10)fStack_20c;
  local_274 = (float)SQRT(fVar6 * fVar6 +
                          (float10)fStack_214 * (float10)fStack_214 +
                          (float10)fStack_210 * (float10)fStack_210);
  fVar7 = (float10)afStack_1fc[0];
  local_270 = (float)SQRT(fVar7 * fVar7 +
                          (float10)fStack_204 * (float10)fStack_204 +
                          (float10)fStack_200 * (float10)fStack_200);
  fVar8 = (float10)local_1ec;
  fVar9 = SQRT(fVar8 * fVar8 +
               (float10)fStack_1f4 * (float10)fStack_1f4 + (float10)local_1f0 * (float10)local_1f0);
  fVar7 = (float10)fpatan(fVar7 / fVar9,fVar8 / fVar9);
  fVar13 = (float)fVar7;
  fVar6 = (float10)FUN_00ddbaa0((float)-(fVar6 / fVar9));
  fStack_60 = (float)fVar6;
  fVar6 = (float10)fpatan((float10)fStack_210 / (float10)local_270,
                          (float10)fStack_214 / (float10)local_274);
  fStack_5c = (float)fVar6;
  if ((param_3 & 2) != 0) {
    FUN_004039a0(0x60,uVar3,0);
    pfStack_74 = pfVar5;
    puStack_70 = puVar10;
    puStack_6c = puVar11;
    puStack_68 = puVar12;
    fStack_64 = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  return;
}

// 00BD5700  FUN_00bd5700  size=1240  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bd5700(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  undefined1 auStack_230 [8];
  undefined4 uStack_228;
  float local_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e0 [48];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [288];
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 *puStack_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar19 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar19);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar19 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar19);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  FUN_00f98a90();
  FUN_00f98aa0();
  local_25c = param_2[1];
  local_24c = param_2[3];
  fVar13 = param_2[2] - (param_2[2] + *param_2) * 0.5;
  fVar11 = local_24c - (local_25c + local_24c) * 0.5;
  fVar5 = (float10)FUN_00ddbb50((fVar13 * 300.0 + fVar11 * 0.0) /
                                (SQRT(fVar13 * fVar13 + fVar11 * fVar11) * 300.0));
  if (local_24c < local_25c) {
    fVar5 = fVar5 * (float10)-1.0;
  }
  local_224 = (float)fVar5;
  local_260 = *(float *)(uVar2 + 0x40);
  local_25c = *(float *)(uVar2 + 0x44);
  local_258 = *(float *)(uVar2 + 0x48);
  local_254 = *(float *)(uVar2 + 0x4c);
  pfVar4 = (float *)FUN_00a926e0(&local_250);
  local_240 = *pfVar4 * 1.35 + local_260;
  local_23c = pfVar4[1] * 1.35 + local_25c;
  local_238 = pfVar4[2] * 1.35 + local_258;
  local_234 = pfVar4[3] * 1.35 + local_254;
  pfVar4 = (float *)FUN_00a925a0(&local_260);
  puVar18 = local_1e0;
  local_250 = *pfVar4 * 3.0 + local_240;
  local_24c = pfVar4[1] * 3.0 + local_23c;
  local_248 = pfVar4[2] * 3.0 + local_238;
  local_244 = pfVar4[3] * 3.0 + local_234;
  D3DXMatrixRotationZ(puVar18,local_224 + 3.1415927);
  local_224 = 0.0;
  fStack_1ec = 1.0;
  fStack_200 = 1.0;
  fStack_214 = 1.0;
  uStack_228 = 0x3f800000;
  fStack_220 = local_224;
  fStack_21c = local_224;
  fStack_218 = local_224;
  fStack_210 = local_224;
  fStack_20c = local_224;
  fStack_208 = local_224;
  fStack_204 = local_224;
  fStack_1fc = local_224;
  fStack_1f8 = local_224;
  fStack_1f4 = local_224;
  fStack_1f0 = local_224;
  if (_DAT_01bea3b8 != 0.0) {
    D3DXMatrixRotationZ(auStack_1a8,_DAT_01bea3b8);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  if (_DAT_01bea3b4 != 0.0) {
    D3DXMatrixRotationY(auStack_1a8,_DAT_01bea3b4);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  if (_DAT_01bea3b0 != 0.0) {
    D3DXMatrixRotationX(auStack_1a8,_DAT_01bea3b0);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  puVar16 = auStack_1a8;
  uVar17 = 0x40490fdb;
  D3DXMatrixRotationY(puVar16,0x40490fdb);
  puVar15 = auStack_230;
  puVar14 = auStack_1b0;
  D3DXMatrixMultiply(puVar15,puVar14,puVar15);
  D3DXMatrixMultiply(&fStack_1fc,&fStack_1fc,&local_23c);
  D3DXMatrixMultiply(&fStack_208,&fStack_208,uVar2 + 0xb0);
  fVar5 = (float10)fStack_20c;
  fVar13 = (float)SQRT(fVar5 * fVar5 +
                       (float10)fStack_214 * (float10)fStack_214 +
                       (float10)fStack_210 * (float10)fStack_210);
  fVar6 = (float10)fStack_200;
  fVar7 = (float10)fStack_204;
  fVar8 = (float10)fStack_1fc;
  fVar9 = (float10)fStack_1ec;
  fVar10 = SQRT(fVar9 * fVar9 +
                (float10)fStack_1f4 * (float10)fStack_1f4 +
                (float10)fStack_1f0 * (float10)fStack_1f0);
  fVar9 = (float10)fpatan(fVar8 / fVar10,fVar9 / fVar10);
  fVar11 = (float)fVar9;
  fVar5 = (float10)FUN_00ddbaa0((float)-(fVar5 / fVar10));
  fVar12 = (float)fVar5;
  fVar5 = (float10)fpatan((float10)fStack_210 /
                          (float10)(float)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6),
                          (float10)fStack_214 / (float10)fVar13);
  fVar13 = (float)fVar5;
  if ((param_3 & 1) != 0) {
    FUN_004039a0(0x5f,uVar2,0);
    puStack_74 = puVar15;
    puStack_70 = puVar16;
    uStack_6c = uVar17;
    puStack_68 = puVar18;
    fStack_64 = fVar11;
    fStack_60 = fVar12;
    fStack_5c = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  if ((param_3 & 2) != 0) {
    FUN_004039a0(0x60,uVar2,0);
    puStack_74 = puVar15;
    puStack_70 = puVar16;
    uStack_6c = uVar17;
    puStack_68 = puVar18;
    fStack_64 = fVar11;
    fStack_60 = fVar12;
    fStack_5c = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  return;
}

// 00BD5BE0  FUN_00bd5be0  size=303  [callgraph]
int FUN_00bd5be0(undefined4 param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  int local_2c;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_2c = 0;
  iVar5 = FUN_00a7c800();
  if (iVar5 == 0) {
    return 0;
  }
  iVar6 = FUN_00c1c880();
  iVar6 = *(int *)(iVar6 + 4);
  iVar7 = FUN_00c1c880();
  iVar1 = *(int *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 4);
  for (; iVar6 != iVar7 + iVar1 * 4; iVar6 = iVar6 + 4) {
    iVar8 = FUN_00a81330();
    if ((((iVar8 != 0) && ((*(byte *)(iVar8 + 0x28) & 2) == 0)) &&
        (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) &&
       (((piVar9[0x1a4] == 0 && (iVar10 = FUN_00a7c800(), iVar10 != 0)) &&
        ((**(code **)(*piVar9 + 0x204))(&local_20), fVar2 = local_20 - *(float *)(iVar5 + 0x50),
        fVar4 = fStack_1c - *(float *)(iVar5 + 0x54), fVar3 = fStack_18 - *(float *)(iVar5 + 0x58),
        fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= param_4 * param_4)))) {
      fVar11 = (float10)FUN_009f8c60(iVar10 + 0x50);
      FUN_00ddba30((float)(fVar11 - (float10)param_2));
      local_2c = iVar8;
    }
  }
  return local_2c;
}

// 00BD5D10  FUN_00bd5d10  size=553  [callgraph]
int FUN_00bd5d10(undefined4 *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                int param_6,int param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  undefined *puVar13;
  uint local_3c;
  undefined1 auStack_24 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar13 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar13);
    uVar10 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar9 = *(int **)(uVar10 + 0xc);
  if (piVar9 == (int *)0x0) {
    local_3c = 0;
  }
  else {
    puVar13 = &DAT_01be9db8;
    (**(code **)(*piVar9 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar13);
    local_3c = -(uint)(iVar5 != 0) & (uint)piVar9;
  }
  *(undefined4 *)(uVar10 + 0x350) = 0;
  iVar5 = FUN_00a7c800();
  if (iVar5 != 0) {
    iVar6 = FUN_00c1c880();
    iVar6 = *(int *)(iVar6 + 4);
    iVar7 = FUN_00c1c880();
    iVar1 = *(int *)(iVar7 + 0xc);
    iVar7 = *(int *)(iVar7 + 4);
    for (; iVar6 != iVar7 + iVar1 * 4; iVar6 = iVar6 + 4) {
      iVar8 = FUN_00a81330();
      if ((((iVar8 != 0) && ((*(byte *)(iVar8 + 0x28) & 2) == 0)) &&
          ((param_6 == 0 || (iVar8 != param_6)))) &&
         (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) {
        puVar13 = &DAT_01be9ca8;
        (**(code **)(*piVar9 + 4))(&DAT_01be9ca8);
        iVar8 = FUN_00dd6d80(puVar13);
        uVar11 = -(uint)(iVar8 != 0) & (uint)piVar9;
        FUN_00a7c940(uVar11 + 0x968);
        iVar8 = FUN_00a81330();
        if (iVar8 != 0) {
          FUN_00a7c8a0();
        }
        iVar8 = FUN_00a7c800();
        if (((iVar8 != 0) &&
            (((param_7 != 0 || (*(float *)(local_3c + 0x44) <= *(float *)(uVar11 + 0x44))) ||
             (ABS(*(float *)(local_3c + 0x44) - *(float *)(uVar11 + 0x44)) <= 3.0)))) &&
           ((*(int *)(uVar11 + 0x910) != 0 &&
            ((**(code **)(*piVar9 + 0x204))(&fStack_20),
            fVar2 = fStack_20 - *(float *)(iVar5 + 0x50),
            fVar4 = fStack_1c - *(float *)(iVar5 + 0x54),
            fVar3 = fStack_18 - *(float *)(iVar5 + 0x58),
            fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= param_5 * param_5)))) {
          fVar12 = (float10)FUN_009f8c60(iVar8 + 0x50);
          fVar12 = (float10)FUN_00ddba30((float)(fVar12 - (float10)param_3));
          if (ABS(fVar12) <= (float10)param_4) {
            FUN_00878130(auStack_24,iVar6);
          }
        }
      }
    }
  }
  return uVar10 + 0x344;
}

// 00BD5F40  FUN_00bd5f40  size=623  [callgraph]
void FUN_00bd5f40(undefined4 *param_1,float param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar5 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  local_40 = 1.0;
  if (((*(int *)(uVar5 + 0x504) != 0) && (0.0 < *(float *)(uVar5 + 0x508))) &&
     (local_40 = 1.0 / *(float *)(uVar5 + 0x508), 1.0 < local_40)) {
    local_40 = 1.0;
  }
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    iVar2 = FUN_00da97e0();
    if (iVar2 == 0) {
      return;
    }
    if ((*(uint *)(uVar4 + 0xcf8) & 0x8000) != 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_00da97c0();
    if (iVar2 == 0) {
      return;
    }
    if ((*(uint *)(uVar4 + 0xcf8) & 0x1000) != 0) {
      return;
    }
  }
  if (*(int *)(uVar5 + 0x2f4) == 0) {
    FUN_00da7500();
    fVar6 = (float10)FUN_00da7570();
    local_3c = param_2;
    local_38 = param_3;
    if (*(float *)(uVar5 + 0x37c) != 0.0) {
      local_3c = *(float *)(uVar5 + 0x37c) * 57.29578;
      local_38 = -*(float *)(uVar5 + 0x37c) * 57.29578;
    }
    piVar3 = (int *)FUN_00c13920();
    (**(code **)(*piVar3 + 0x28))(0);
    piVar3 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar3 + 0x84))();
    fStack_20 = *(float *)(uVar5 + 0x378);
    fVar1 = *(float *)(uVar5 + 0x374);
    FUN_00bbcb90(&fStack_2c,param_1);
    fVar7 = (float10)FUN_00ddba30(fStack_20 - fStack_2c * fStack_44 * local_38);
    if (param_4 == 0) {
      FUN_00b8bbb0((float)fVar7);
    }
    fVar6 = (float10)FUN_00ddba30(fStack_28 * fStack_44 * (float)fVar6 + fVar1);
    if ((float10)(local_40 * 2.3999999e-05) < (float10)57.29578 * fVar6) {
      fVar6 = (float10)FUN_00ddba30((float)((float10)(local_40 * 2.3999999e-05) *
                                           (float10)0.017453292));
    }
    if ((float10)57.29578 * fVar6 < (float10)local_3c) {
      fVar6 = (float10)FUN_00ddba30((float)((float10)local_3c * (float10)0.017453292));
    }
    if (param_5 == 0) {
      FUN_00b8bb40((float)fVar6);
      return;
    }
  }
  return;
}

// 00BD61B0  FUN_00bd61b0  size=427  [callgraph]
void FUN_00bd61b0(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  float local_8;
  float local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar7 + 0x500) == 0) {
    FUN_00bbc9f0(&local_8,param_1);
    if (*(int *)(uVar7 + 0x330) == 0xf) {
      local_8 = local_8 * -1.0;
      local_4 = local_4 * -1.0;
    }
    uVar5 = *(uint *)(*(int *)(uVar7 + 0x170) + 8);
    if (*(uint *)(*(int *)(uVar7 + 0x170) + 0xc) <= uVar5) {
      uVar4 = 0;
      if (uVar5 != 1) {
        do {
          iVar6 = *(int *)(*(int *)(uVar7 + 0x170) + 4);
          puVar3 = (undefined4 *)(iVar6 + uVar4 * 8);
          *puVar3 = *(undefined4 *)(iVar6 + 8 + uVar4 * 8);
          puVar3[1] = puVar3[3];
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(int *)(*(int *)(uVar7 + 0x170) + 8) - 1U);
      }
      iVar6 = *(int *)(uVar7 + 0x170);
      if ((*(int *)(iVar6 + 4) != 0) && (*(int *)(iVar6 + 8) != 0)) {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
      }
    }
    (**(code **)(**(int **)(uVar7 + 0x170) + 8))(&local_8);
    if (*(int *)(*(int *)(uVar7 + 0x17c) + 8) == 0) {
      *(undefined4 *)(uVar7 + 0x180) = *(undefined4 *)(uVar7 + 0x184);
      return;
    }
    if (0.0 < *(float *)(uVar7 + 0x180)) {
      fVar2 = *(float *)(uVar7 + 0x180) - 1.0;
      *(float *)(uVar7 + 0x180) = fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        uVar5 = 0;
        *(undefined4 *)(uVar7 + 0x180) = *(undefined4 *)(uVar7 + 0x184);
        if (*(int *)(*(int *)(uVar7 + 0x17c) + 8) != 1) {
          iVar6 = 0;
          do {
            iVar1 = *(int *)(*(int *)(uVar7 + 0x17c) + 4);
            puVar3 = (undefined4 *)(iVar1 + iVar6);
            *puVar3 = *(undefined4 *)(iVar1 + 0x10 + iVar6);
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 0x10;
            puVar3[1] = puVar3[5];
            puVar3[2] = puVar3[6];
            puVar3[3] = puVar3[7];
          } while (uVar5 < *(int *)(*(int *)(uVar7 + 0x17c) + 8) - 1U);
        }
        iVar6 = *(int *)(uVar7 + 0x17c);
        if ((*(int *)(iVar6 + 4) != 0) && (*(int *)(iVar6 + 8) != 0)) {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
          return;
        }
      }
    }
  }
  return;
}

// 00BD6370  FUN_00bd6370  size=444  [callgraph]
void FUN_00bd6370(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar7 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar3 + 0xe4) == 0) {
    iVar4 = FUN_00bbc850(param_1);
    if (iVar4 != 0) {
      uVar6 = 0x13e;
      goto LAB_00bd6423;
    }
    iVar4 = FUN_00bbb570(param_1);
    if ((iVar4 == 0) && (uVar6 = 0x13e, *(int *)(uVar7 + 0x188) != 0)) goto LAB_00bd6423;
  }
  uVar6 = 0xeb;
LAB_00bd6423:
  if (*(int *)(uVar5 + 0x40c8) != 8) {
    FUN_00aa4080(uVar6,param_4,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  if (*(int *)(uVar7 + 0x330) != 1) {
    iVar4 = FUN_00bbc850(param_1);
    if ((iVar4 == 0) && (iVar4 = FUN_00b930d0(param_1), iVar4 == 0)) {
      return;
    }
    uVar2 = 0;
    if (*(int *)(param_2 + 0x2c) == 0x36) {
      uVar2 = 0x3e4ccccd;
    }
    FUN_00aa4080(uVar6,param_4,uVar2,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  FUN_00a92f90();
  iVar4 = FUN_00e26e90();
  if (iVar4 != 0) {
    FUN_00e36ac0(0,0x3f800000);
  }
  FUN_00aa4080(uVar6,param_4,0x3dcccccd,0x3c23d70a,0,0xbf800000,0x3f800000);
  return;
}

// 00BD6530  FUN_00bd6530  size=333  [callgraph]
void FUN_00bd6530(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar7 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar5 != 0) & (uint)piVar1;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar8);
    uVar4 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar4 + 0xe4) == 0) {
    iVar5 = FUN_00bbc850(param_1);
    iVar5 = (-(uint)(iVar5 != 0) & 0x54) + 0xed;
  }
  else {
    iVar5 = 0xed;
  }
  uVar3 = 0x3dcccccd;
  if (*(int *)(uVar6 + 0x40c8) == 8) {
    uVar3 = 0;
  }
  iVar2 = *(int *)(uVar7 + 0x330);
  if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 0x13)) {
    uVar3 = 0x3dcccccd;
  }
  FUN_00aa4080(iVar5,param_3,uVar3,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  iVar5 = FUN_00bbb570(param_1);
  if (iVar5 == 0) {
    FUN_00a95fb0(0);
  }
  iVar5 = FUN_00a92f90();
  FUN_00e26e90();
  *(undefined4 *)(iVar5 + 0xe4) = 0;
  *(undefined4 *)(iVar5 + 0xe8) = 0;
  *(undefined4 *)(iVar5 + 0xec) = 0;
  return;
}

// 00BD6680  FUN_00bd6680  size=466  [callgraph]
void FUN_00bd6680(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar2 + 0xe4) == 0) {
    iVar3 = FUN_00bbc850(param_1);
    if (iVar3 != 0) {
      uVar4 = 0x13e;
      goto LAB_00bd6734;
    }
    iVar3 = FUN_00bbb570(param_1);
    if ((iVar3 == 0) && (uVar4 = 0x13e, *(int *)(uVar5 + 0x188) != 0)) goto LAB_00bd6734;
  }
  uVar4 = 0xeb;
LAB_00bd6734:
  if (*(int *)(uVar6 + 0x40c8) == 8) {
    iVar3 = *(int *)(uVar5 + 0x330);
    if (((iVar3 == 3) || (iVar3 == 4)) || (iVar3 == 5)) {
      FUN_00aa4080(uVar4,param_4,0,0x3dcccccd,0,0,0);
      FUN_00a96030(param_4,0);
    }
    if (*(int *)(uVar5 + 0x330) == 1) {
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        FUN_00e36ac0(0,0);
      }
    }
  }
  else {
    FUN_00aa4080(uVar4,param_4,0,0x3dcccccd,0,0,0);
    FUN_00a96030(param_4,0);
  }
  iVar3 = FUN_00a92f90();
  FUN_00e26e90();
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  FUN_00aa4080(0x143,param_5,0,0x3f800000,0x10,0xbf800000,0x3f800000);
  return;
}

// 00BD6860  FUN_00bd6860  size=1078  [callgraph]
void FUN_00bd6860(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  float fStack_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  uVar7 = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar8);
    param_1 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_1);
  }
  piVar1 = *(int **)((int)param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  local_4 = 0xef;
  uVar6 = 0x527;
  if (param_5 <= 1.0) {
    if (param_5 < 0.0) {
      param_5 = 0.0;
    }
  }
  else {
    param_5 = 1.0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*puVar3)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar4 != 0) & (uint)puVar3;
  }
  if (*(int *)(uVar5 + 0xe4) == 0) {
    iVar4 = FUN_00bbc850(puVar3);
    if ((iVar4 != 0) ||
       ((iVar4 = FUN_00bbb570(puVar3), iVar4 == 0 && (*(int *)((int)param_1 + 0x188) != 0)))) {
      local_4 = 0x119;
      uVar6 = 0x528;
    }
  }
  else {
    local_4 = 0xef;
  }
  if ((((*(int *)(uVar7 + 0x40c8) != 8) || (iVar4 = *(int *)((int)param_1 + 0x330), iVar4 == 3)) ||
      (iVar4 == 4)) || (iVar4 == 5)) {
    FUN_00a95e60(param_2,0);
    FUN_00a96030(param_2,0);
  }
  if (param_5 <= 0.5) {
    fStack_8 = param_5 + param_5;
    if (fStack_8 <= 1.0) {
      if (fStack_8 < 0.0) {
        fStack_8 = 0.0;
      }
    }
    else {
      fStack_8 = 1.0;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) goto LAB_00bd6a28;
    fStack_8 = 1.0 - fStack_8;
  }
  else {
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) goto LAB_00bd6a28;
    fStack_8 = 0.0;
  }
  FUN_00e36ac0(param_2,fStack_8);
LAB_00bd6a28:
  if (*(int *)(uVar7 + 0x40c8) == 8) {
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_2,1.0 - param_5);
    }
  }
  if (param_5 <= 0.5) {
    fVar2 = 1.0 - param_5;
    FUN_00aa4080(uVar6,param_4,0x3e2aaaab,fVar2,0,param_6 * 0.016666668,0);
    FUN_00a96030(param_4,0);
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_4,param_5);
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_3,param_5);
    }
    if (*(int *)((int)param_1 + 0x330) != 1) {
      return;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    FUN_00a9f560("ZangekiHold",0x3e2aaaab,0,param_4);
    FUN_00a9f600(0xffffffff,param_4,0,1,0,local_4,0x3e2aaaab,0);
    FUN_00a9f600(0xffffffff,param_4,0,0,0,uVar6,0x3e2aaaab,0);
    fVar2 = (param_5 + param_5) - 1.0;
    if (1.0 < fVar2 == (fVar2 == 1.0)) {
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
    }
    else {
      fVar2 = 0.99;
    }
    FUN_00a947e0(param_4,0,fVar2,0);
    FUN_00a95e60(param_4,param_6 * 0.016666668);
    FUN_00a96030(param_4,0);
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_4,0x3f800000);
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_3,0x3f800000);
    }
    if (*(int *)((int)param_1 + 0x330) != 1) {
      return;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      return;
    }
    fVar2 = 0.0;
  }
  FUN_00e36ac0(0,fVar2);
  return;
}

// 00BD6CA0  FUN_00bd6ca0  size=299  [callgraph]
void FUN_00bd6ca0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  float local_4;
  
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  if (((((DAT_01bea094 & 0x40000000) == 0) && (iVar4 = *(int *)(uVar6 + 0x40c8), iVar4 != 8)) &&
      (iVar4 != 9)) && (iVar4 != 0xf)) {
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
        local_4 = *(float *)(uVar6 + 0x3bdc);
        uVar2 = *(uint *)(uVar6 + 0xcf8) & 0x8000;
        param_1 = *(undefined4 **)(uVar6 + 0x3be0);
      }
      else {
        local_4 = *(float *)(uVar6 + 0x3bd4);
        uVar2 = *(uint *)(uVar6 + 0xcf8) & 0x1000;
        param_1 = *(undefined4 **)(uVar6 + 0x3bd8);
      }
      if (uVar2 != 0) {
        iVar4 = FUN_00bbb570(puVar3);
        if (((iVar4 != 0) || (*(int *)(uVar5 + 0x188) == 0)) &&
           (100.0 < ABS((float)param_1 + local_4))) {
          FUN_00d82510(0x40,param_3);
        }
      }
    }
  }
  return;
}

// 00BD6DD0  FUN_00bd6dd0  size=211  [callgraph]
void FUN_00bd6dd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  float local_8;
  float local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  FUN_00bbc9f0(&local_8,param_1);
  if (200.0 < ABS(local_4) + ABS(local_8)) {
    FUN_00d82510(0x36,param_3);
    return;
  }
  if ((DAT_01d6192c == 0) &&
     (((*(int *)(uVar3 + 0x40c8) == 0xf || (*(int *)(uVar3 + 0x40c8) == 0xc)) ||
      (*(int *)(uVar4 + 0xf0) != 0)))) {
    FUN_00d82510(0x36,param_3);
  }
  return;
}

// 00BD6EB0  FUN_00bd6eb0  size=187  [callgraph]
void FUN_00bd6eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x500) == 0) && ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe50)) != 0)
     ) {
    if ((*(int *)(uVar2 + 0x40c8) == 8) && (iVar3 = FUN_00b92c60(param_1), iVar3 != 0)) {
      return;
    }
    iVar3 = FUN_00bbb5e0(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_00bbbc20(param_1);
      if (iVar3 == 0) {
        return;
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_00d82510(0x31,param_3);
    *(undefined4 *)(uVar4 + 0x568) = uVar5;
  }
  return;
}

// 00BD6F70  FUN_00bd6f70  size=1680  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void FUN_00bd6f70(undefined4 *param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  undefined *puVar13;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [5];
  undefined1 local_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar13 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar9 = FUN_00dd6d80(puVar13);
    uVar10 = -(uint)(iVar9 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar10 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar13 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar9 = FUN_00dd6d80(puVar13);
    uVar8 = -(uint)(iVar9 != 0) & (uint)piVar1;
  }
  if (*(int *)(uVar10 + 0x500) != 0) {
    return;
  }
  if ((*(uint *)(uVar8 + 0xcf8) & *(uint *)(uVar8 + 0xe50)) == 0) {
    return;
  }
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b8 = 0.0;
  local_b4 = 1.0;
  if ((*(byte *)(uVar8 + 0xcfc) & 0xc0) == 0) {
    iVar9 = FUN_00bbb5e0(param_1);
    if ((iVar9 == 0) && (iVar9 = FUN_00bbbc20(param_1), iVar9 == 0)) {
      return;
    }
    if (*(int *)(*(int *)(uVar10 + 0x178) + 8) != 0) {
      pfVar2 = *(float **)(*(int *)(uVar10 + 0x178) + 4);
      local_c0 = *pfVar2;
      local_bc = pfVar2[1];
      local_b8 = pfVar2[2];
      local_b4 = pfVar2[3];
      FUN_00bb9840(param_1);
    }
    local_a0 = local_b8;
    local_ac = local_bc;
    local_9c = local_b4;
    local_b0 = local_c0;
    if (iVar9 == 0) {
      return;
    }
  }
  else {
    local_b0 = 0.0;
    local_ac = -1000.0;
    local_a8 = 0;
    local_a0 = 0.0;
    local_9c = 1000.0;
    local_98 = 0;
    D3DXMatrixRotationZ(local_50,*(float *)(uVar10 + 0x3f8) * 0.017453292);
    D3DXVec3TransformNormal(&local_b8,&local_b8,local_64 + 3);
    D3DXMatrixRotationZ(local_64,*(float *)(uVar10 + 0x3f8) * 0.017453292);
    D3DXVec3TransformNormal(&local_bc,&local_bc,&local_6c);
  }
  local_88 = 0.0;
  local_68 = 0.0;
  local_64[4] = local_84 + local_64[0];
  local_80 = (local_a0 + local_b0) * 0.5;
  local_7c = (local_9c + local_ac) * 0.5;
  local_74 = local_64[4] * 0.5;
  fVar5 = (local_b0 - local_80) * 100.0 + local_b0;
  fVar6 = (local_ac - local_7c) * 100.0 + local_ac;
  local_98 = 0;
  local_94 = local_84 + (local_84 - local_74) * 100.0;
  fVar3 = (local_a0 - local_80) * 100.0 + local_a0;
  fVar7 = (local_9c - local_7c) * 100.0 + local_9c;
  local_a8 = 0;
  local_a4 = local_64[0] + (local_64[0] - local_74) * 100.0;
  local_c0 = local_80 - fVar5;
  local_bc = local_7c - fVar6;
  local_b4 = local_74 - local_94;
  local_b8 = 0.0;
  local_90 = local_b0;
  local_8c = local_ac;
  local_70 = local_a0;
  local_6c = local_9c;
  if ((local_c0 != 0.0) || (local_bc != 0.0)) {
    fVar4 = local_bc * local_bc + local_c0 * local_c0;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      local_b0 = fVar3;
      local_ac = fVar7;
      local_a0 = fVar5;
      local_9c = fVar6;
      FUN_00ddf460(&local_c0,&local_c0);
      fVar3 = local_b0;
      fVar7 = local_ac;
      fVar5 = local_a0;
      fVar6 = local_9c;
    }
    else {
      local_b0 = fVar3;
      local_ac = fVar7;
      local_a0 = fVar5;
      local_9c = fVar6;
      FUN_00dd5650(&DAT_0163d0ac);
      local_c0 = 0.0;
      local_bc = 1.0;
      local_b8 = 0.0;
      fVar3 = local_b0;
      fVar7 = local_ac;
      fVar5 = local_a0;
      fVar6 = local_9c;
    }
  }
  local_9c = fVar6;
  local_a0 = fVar5;
  local_ac = fVar7;
  local_b0 = fVar3;
  local_64[1] = 0.0;
  local_64[2] = 0.0;
  local_64[3] = 0.0;
  FUN_00b83ee0(&local_90,&local_a0,&local_c0,local_64 + 1,0x447a0000);
  local_c0 = local_80 - local_b0;
  local_bc = local_7c - local_ac;
  local_b4 = local_74 - local_a4;
  local_b8 = 0.0;
  if ((local_c0 != 0.0) || (local_bc != 0.0)) {
    fVar3 = local_bc * local_bc + local_c0 * local_c0;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_c0,&local_c0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_c0 = 0.0;
      local_bc = 1.0;
      local_b8 = 0.0;
    }
  }
  local_64[1] = 0.0;
  local_64[2] = 0.0;
  local_64[3] = 0.0;
  FUN_00b83ee0(&local_70,&local_b0,&local_c0,local_64 + 1,0x447a0000);
  fVar3 = local_70 - (local_90 + local_70) * 0.5;
  fVar5 = local_6c - (local_8c + local_6c) * 0.5;
  fVar6 = local_68 - (local_88 + local_68) * 0.5;
  fVar11 = (float10)FUN_00ddbb50((fVar3 * 300.0 + fVar5 * 0.0 + fVar6 * 0.0) /
                                 (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6) * 300.0));
  if (local_6c < local_8c) {
    fVar11 = fVar11 * (float10)-1.0;
  }
  fVar11 = (fVar11 + (float10)1.5707964) * (float10)57.29578;
  if ((float10)180.0 < fVar11) {
    fVar11 = fVar11 - (float10)360.0;
  }
  if (fVar11 < (float10)-180.0) {
    fVar11 = fVar11 + (float10)360.0;
  }
  if ((ABS(fVar11 - (float10)180.0) < (float10)15.0) ||
     (ABS(fVar11 - (float10)-180.0) < (float10)15.0)) {
    FUN_00d82510(0x37,100);
    return;
  }
  fVar12 = (float10)30.0;
  if (ABS(fVar11 - (float10)90.0) < fVar12) {
LAB_00bd752c:
    FUN_00d82510(0x39,100);
    return;
  }
  if (fVar12 <= ABS(fVar11 - (float10)-90.0)) {
    if (ABS(fVar11 - (float10)45.0) < fVar12) goto LAB_00bd752c;
    if (ABS(fVar11 - (float10)-135.0) < fVar12) {
      FUN_00d82510(0x3a,100);
      return;
    }
    if (fVar12 <= ABS(fVar11 - (float10)-45.0)) {
      if (fVar12 <= ABS(fVar11 - (float10)135.0)) {
        return;
      }
      FUN_00d82510(0x38,100);
      return;
    }
  }
  FUN_00d82510(0x3b,100);
  return;
}

// 00BD7600  FUN_00bd7600  size=59  [callgraph]
void FUN_00bd7600(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar1 + 0x2f4) == 0) {
    FUN_00bbb050(param_1);
  }
  return;
}

// 00BD7640  FUN_00bd7640  size=7119  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00bd7b88) */
/* WARNING: Removing unreachable block (ram,0x00bd7b8a) */
/* WARNING: Removing unreachable block (ram,0x00bd7b8c) */
/* WARNING: Removing unreachable block (ram,0x00bd8502) */
/* WARNING: Removing unreachable block (ram,0x00bd8504) */
/* WARNING: Removing unreachable block (ram,0x00bd8506) */
/* WARNING: Removing unreachable block (ram,0x00bd9176) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bd7640(undefined4 *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  float unaff_EBX;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int *piStack_18c;
  float fStack_188;
  int *piStack_184;
  float fStack_180;
  int *piStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int *piStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int *piStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  int local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float afStack_114 [3];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int *piStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [2];
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [2];
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [12];
  float fStack_a4;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar21 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar21);
    uVar10 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar12 = *(int **)(uVar10 + 0xc);
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    puVar21 = &DAT_01be9db8;
    (**(code **)(*piVar12 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar21);
    piVar12 = (int *)(-(uint)(iVar5 != 0) & (uint)piVar12);
  }
  if (*(int *)(uVar10 + 0xec) != 0) {
    return;
  }
  pfVar1 = (float *)(uVar10 + 0x550);
  *pfVar1 = 0.0;
  *(undefined4 *)(uVar10 + 0x554) = 0;
  *(undefined4 *)(uVar10 + 0x558) = 0;
  *(undefined4 *)(uVar10 + 0x55c) = 0x3f800000;
  *(undefined4 *)(uVar10 + 0x59c) = 0;
  fVar16 = *(float *)(uVar10 + 0x574) * 1.2;
  local_128 = piVar12[0x13c];
  uVar19 = 0x3f490fdb;
  iVar5 = (**(code **)(*piVar12 + 0x84))(0x3f490fdb,fVar16);
  FUN_00c4d770(uVar10 + 0x590,local_128,*(undefined4 *)(iVar5 + 4),uVar19,fVar16);
  *(undefined4 *)(uVar10 + 0x5b0) = 0;
  fVar16 = *(float *)(uVar10 + 0x574) * 1.2;
  local_128 = piVar12[0x13c];
  uVar19 = 0x3f490fdb;
  iVar5 = (**(code **)(*piVar12 + 0x84))(0x3f490fdb,fVar16);
  FUN_00c58b60(uVar10 + 0x5a4,local_128,*(undefined4 *)(iVar5 + 4),uVar19,fVar16);
  *(undefined4 *)(uVar10 + 0x5c4) = 0;
  local_128 = piVar12[0x13c];
  fVar16 = *(float *)(uVar10 + 0x574) * 1.2 * 30.0;
  uVar19 = 0x3f490fdb;
  iVar5 = (**(code **)(*piVar12 + 0x84))(0x3f490fdb,fVar16);
  FUN_00c58e90(uVar10 + 0x5b8,local_128,*(undefined4 *)(iVar5 + 4),uVar19,fVar16);
  local_128 = 0;
  iVar5 = FUN_00a7f600(0x2070a);
  if ((iVar5 != 0) && (piStack_18c = (int *)FUN_00a7c8a0(), piStack_18c != (int *)0x0)) {
    puVar21 = &DAT_01b351c0;
    (**(code **)(*piStack_18c + 4))(&DAT_01b351c0);
    iVar5 = FUN_00dd6d80(puVar21);
    if ((iVar5 != 0) && (iVar5 = FUN_00a8cbe0(0x20016), iVar5 != 0)) {
      local_128 = 1;
    }
  }
  fVar13 = -(float10)_DAT_01bea3b0;
  fStack_104 = (float)fVar13;
  fStack_144 = (_DAT_01bea3b4 + 3.1415927) - 0.17453292;
  if ((float10)35.0 < (float10)57.29578 * fVar13) {
    fVar13 = (float10)FUN_00ddba30(0x3f1c61aa);
    fStack_104 = (float)fVar13;
  }
  if ((float10)57.29578 * fVar13 < (float10)-40.0) {
    fVar13 = (float10)FUN_00ddba30(0xbf32b8c2);
    fStack_104 = (float)fVar13;
  }
  if ((DAT_01bea094 & 0x200000) == 0) {
    piStack_18c = (int *)FUN_00a7f600(0x20200);
    iVar5 = FUN_00a7f600(0x2020a);
    if ((piStack_18c == (int *)0x0) && (iVar5 == 0)) {
      iVar5 = (**(code **)(*piVar12 + 0x84))();
      fStack_144 = *(float *)(iVar5 + 4);
    }
    FUN_004fc8e0(&fStack_160,piVar12,0xffffffff);
    piStack_18c = (int *)FUN_00c4ec80();
    iVar5 = FUN_00a81330();
    if (iVar5 == 0) {
LAB_00bd7e83:
      if (((piStack_18c == (int *)0x0) || (piStack_18c[0x14] == 0)) ||
         (iVar5 = FUN_0085bf90(), iVar5 == 0)) {
        if (*(int *)(uVar10 + 0x59c) < 1) {
          iVar5 = FUN_00a81330();
          if (iVar5 == 0) {
            if (*(int *)(uVar10 + 0x5c4) < 1) {
              if (*(int *)(uVar10 + 0x5b0) < 1) {
                piStack_184 = (int *)piVar12[0x13c];
                fVar16 = *(float *)(uVar10 + 0x574) * 1.2;
                uVar23 = 1;
                uVar24 = 0;
                uVar18 = 0;
                uVar17 = 1;
                uVar22 = 0;
                uVar19 = 0x3f860a92;
                iVar5 = (**(code **)(*piVar12 + 0x84))(0x3f860a92,fVar16,0,1,0,0,1);
                iVar5 = FUN_00c25110(piStack_184,*(undefined4 *)(iVar5 + 4),uVar19,fVar16,uVar22,
                                     uVar17,uVar18,uVar24,uVar23);
                if ((((iVar5 != 0) && (fStack_188 = (float)FUN_00a7c8a0(), fStack_188 != 0.0)) &&
                    ((iVar5 = *(int *)((int)fStack_188 + 0x330), iVar5 != 0 &&
                     ((*(int *)(iVar5 + 0xcc) < 1 && (iVar5 != 0)))))) &&
                   (*(int *)(iVar5 + 0xcc) == 0)) {
                  FUN_004fc8e0(&fStack_180,fStack_188,0xffffffff);
                  if (*(int *)((int)fStack_188 + 0x6fc) < 1) {
                    if (0 < *(int *)((int)fStack_188 + 0x6c4)) {
                      iVar5 = FUN_00a12210(*(int *)((int)fStack_188 + 0x6c4));
                      fStack_180 = *(float *)((int)fStack_188 + 0x6d0);
                      piStack_184 = (int *)(iVar5 + 0x10);
                      piStack_17c = *(int **)((int)fStack_188 + 0x6d4);
                      fStack_178 = *(float *)((int)fStack_188 + 0x6d8);
                      fStack_174 = *(float *)((int)fStack_188 + 0x6dc);
                      D3DXVec3TransformNormal(&fStack_180,&fStack_180,piStack_184);
                      fVar2 = (float)piStack_184[0xd];
                      fVar3 = (float)piStack_184[0xe] + fStack_178;
                      fVar16 = (float)piStack_184[0xf] + fStack_174;
                      *pfVar1 = (float)piStack_184[0xc] + fStack_180;
                      *(float *)(uVar10 + 0x554) = fVar2 + (float)piStack_17c;
                      goto LAB_00bd7e36;
                    }
                    if (SQRT((fStack_180 - fStack_160) * (fStack_180 - fStack_160) +
                             ((float)piStack_17c - (float)piStack_15c) *
                             ((float)piStack_17c - (float)piStack_15c) +
                             (fStack_178 - fStack_158) * (fStack_178 - fStack_158)) <
                        *(float *)(uVar10 + 0x574) * 1.2) {
                      pfVar7 = (float *)FUN_00a926e0(afStack_d0);
                      fVar2 = pfVar7[1] * 1.35;
                      fVar3 = pfVar7[2] * 1.35;
                      fVar16 = pfVar7[3] * 1.35;
                      fVar4 = fStack_180 + *pfVar7 * 1.35;
                      goto LAB_00bd8785;
                    }
                  }
                  else {
                    fStack_124 = (float)FUN_00a12210(0xffffffff);
                    fStack_f0 = 0.0;
                    piStack_184 = (int *)piVar12[0x13c];
                    piStack_ec = (int *)0x3faccccd;
                    fStack_e8 = 0.0;
                    uVar22 = 0x3f490fdb;
                    iVar5 = (**(code **)(*piVar12 + 0x84))(0x3f490fdb);
                    uVar19 = *(undefined4 *)(iVar5 + 4);
                    iVar8 = FUN_00f98aa0(piStack_184,uVar19);
                    fVar16 = (float)iVar8 * 0.5;
                    iVar5 = (int)piStack_184;
                    piStack_184 = (int *)iVar8;
                    piVar9 = (int *)FUN_00f98a90(fVar16);
                    iVar5 = (int)piStack_184;
                    piStack_184 = piVar9;
                    iVar5 = FUN_00a866a0(piVar12 + 0x10,&fStack_124,&fStack_f0,&fStack_170,
                                         (float)(int)piVar9 * 0.5,fVar16,iVar5,uVar19,uVar22);
                    if (-1 < iVar5) {
                      *pfVar1 = fStack_170;
                      *(int **)(uVar10 + 0x554) = piStack_16c;
                      *(float *)(uVar10 + 0x558) = fStack_168;
                      fVar16 = fStack_164;
                      goto LAB_00bd7e39;
                    }
                    *pfVar1 = 0.0;
                    *(undefined4 *)(uVar10 + 0x554) = 0;
                    *(undefined4 *)(uVar10 + 0x558) = 0;
                    *(undefined4 *)(uVar10 + 0x55c) = 0x3f800000;
                  }
                  goto LAB_00bd7e3e;
                }
              }
              else {
                piStack_18c = *(int **)(uVar10 + 0x5a8);
                piStack_184 = piStack_18c + *(int *)(uVar10 + 0x5b0) * 0x1c;
                if (piStack_18c != piStack_184) {
                  do {
                    FUN_00c15010(&fStack_140);
                    fVar13 = (float10)fpatan((float10)fStack_140 - (float10)fStack_160,
                                             (float10)fStack_138 - (float10)fStack_158);
                    fStack_144 = (float)fVar13;
                    *pfVar1 = fStack_140;
                    *(float *)(uVar10 + 0x554) = fStack_13c;
                    *(float *)(uVar10 + 0x558) = fStack_138;
                    *(float *)(uVar10 + 0x55c) = fStack_134;
                    iVar5 = FUN_00c152b0();
                    if (iVar5 != 0) {
                      *pfVar1 = fStack_160;
                      *(int **)(uVar10 + 0x554) = piStack_15c;
                      *(float *)(uVar10 + 0x558) = fStack_158;
                      *(float *)(uVar10 + 0x55c) = fStack_154;
                    }
                    piStack_18c = piStack_18c + 0x1c;
                  } while (piStack_18c != piStack_184);
                }
              }
            }
            else {
              piStack_18c = *(int **)(uVar10 + 0x5bc);
              piStack_184 = piStack_18c + *(int *)(uVar10 + 0x5c4) * 0x1c;
              if (piStack_18c != piStack_184) {
                do {
                  FUN_00c15010(&fStack_140);
                  fStack_13c = (float)piVar12[0x11];
                  fVar13 = (float10)fpatan((float10)fStack_140 - (float10)fStack_160,
                                           (float10)fStack_138 - (float10)fStack_158);
                  fStack_144 = (float)fVar13;
                  FUN_00c15010(&fStack_140);
                  *pfVar1 = fStack_140;
                  piStack_18c = piStack_18c + 0x1c;
                  *(float *)(uVar10 + 0x554) = fStack_13c;
                  *(float *)(uVar10 + 0x558) = fStack_138;
                  *(float *)(uVar10 + 0x55c) = fStack_134;
                } while (piStack_18c != piStack_184);
              }
            }
          }
          else {
            FUN_00a81330();
            pfVar7 = (float *)FUN_00a7c8b0();
            fStack_140 = *pfVar7;
            fStack_138 = pfVar7[2];
            fStack_134 = pfVar7[3];
            fStack_13c = (float)piVar12[0x11];
            fVar13 = (float10)fpatan((float10)fStack_140 - (float10)fStack_160,
                                     (float10)fStack_138 - (float10)fStack_158);
            fStack_144 = (float)fVar13;
            *pfVar1 = fStack_160;
            *(int **)(uVar10 + 0x554) = piStack_15c;
            *(float *)(uVar10 + 0x558) = fStack_158;
            *(float *)(uVar10 + 0x55c) = fStack_154;
          }
        }
        else {
          piStack_18c = *(int **)(uVar10 + 0x594);
          piStack_184 = piStack_18c + *(int *)(uVar10 + 0x59c) * 0x1c;
          if (piStack_18c != piStack_184) {
            do {
              FUN_00c15010(&fStack_140);
              piStack_18c = piStack_18c + 0x1c;
              fVar13 = (float10)fpatan((float10)fStack_140 - (float10)fStack_160,
                                       (float10)fStack_138 - (float10)fStack_158);
              fStack_144 = (float)fVar13;
              *pfVar1 = fStack_140;
              *(float *)(uVar10 + 0x554) = fStack_13c;
              *(float *)(uVar10 + 0x558) = fStack_138;
              *(float *)(uVar10 + 0x55c) = fStack_134;
            } while (piStack_18c != piStack_184);
          }
        }
      }
      else {
        FUN_00a81330();
        fStack_188 = (float)FUN_00a7c8a0();
        if ((fStack_188 != 0.0) &&
           ((*(int *)((int)fStack_188 + 0x330) == 0 ||
            (*(int *)(*(int *)((int)fStack_188 + 0x330) + 0xcc) < 1)))) {
          FUN_004fc8e0(&fStack_140,fStack_188,0xffffffff);
          FUN_00c15010(&fStack_140);
          fVar13 = (float10)fStack_140 - (float10)fStack_160;
          fVar14 = (float10)fStack_138 - (float10)fStack_158;
          fVar15 = (float10)fpatan(fVar13,fVar14);
          fStack_144 = (float)fVar15;
          if (SQRT(((float10)fStack_13c - (float10)(float)piStack_15c) *
                   ((float10)fStack_13c - (float10)(float)piStack_15c) + fVar13 * fVar13 +
                   fVar14 * fVar14) <
              (float10)*(float *)(uVar10 + 0x574) * (float10)1.2 + (float10)(float)piStack_18c[6]) {
            *pfVar1 = fStack_140;
            *(float *)(uVar10 + 0x554) = fStack_13c;
            *(float *)(uVar10 + 0x558) = fStack_138;
            *(float *)(uVar10 + 0x55c) = fStack_134;
            if (*(int *)((int)fStack_188 + 0x6fc) < 1) {
              iVar5 = FUN_00a12210(*(undefined4 *)((int)fStack_188 + 0x6c4));
              fStack_180 = *(float *)((int)fStack_188 + 0x6d0);
              piStack_184 = (int *)(iVar5 + 0x10);
              piStack_17c = *(int **)((int)fStack_188 + 0x6d4);
              fStack_178 = *(float *)((int)fStack_188 + 0x6d8);
              fStack_174 = *(float *)((int)fStack_188 + 0x6dc);
              D3DXVec3TransformNormal(&fStack_180,&fStack_180,piStack_184);
              fVar16 = (float)piStack_184[0xd];
              fVar3 = (float)piStack_184[0xe];
              fVar2 = (float)piStack_184[0xf];
              *pfVar1 = (float)piStack_184[0xc] + fStack_180;
              *(float *)(uVar10 + 0x554) = fVar16 + (float)piStack_17c;
              *(float *)(uVar10 + 0x558) = fVar3 + fStack_178;
              *(float *)(uVar10 + 0x55c) = fVar2 + fStack_174;
            }
            else {
              fStack_124 = (float)FUN_00a12210(0xffffffff);
              piStack_184 = (int *)piVar12[0x13c];
              fStack_170 = 0.0;
              piStack_16c = (int *)0x3faccccd;
              fStack_168 = 0.0;
              uVar22 = 0x3f490fdb;
              iVar5 = (**(code **)(*piVar12 + 0x84))(0x3f490fdb);
              uVar19 = *(undefined4 *)(iVar5 + 4);
              iVar8 = FUN_00f98aa0(piStack_184,uVar19);
              fVar16 = (float)iVar8 * 0.5;
              iVar5 = (int)piStack_184;
              piStack_184 = (int *)iVar8;
              piVar9 = (int *)FUN_00f98a90(fVar16);
              iVar5 = (int)piStack_184;
              piStack_184 = piVar9;
              iVar5 = FUN_00a866a0(piVar12 + 0x10,&fStack_124,&fStack_170,&fStack_180,
                                   (float)(int)piVar9 * 0.5,fVar16,iVar5,uVar19,uVar22);
              if (iVar5 < 0) {
                *pfVar1 = 0.0;
                *(undefined4 *)(uVar10 + 0x554) = 0;
                *(undefined4 *)(uVar10 + 0x558) = 0;
                *(undefined4 *)(uVar10 + 0x55c) = 0x3f800000;
              }
              else {
                *pfVar1 = fStack_180;
                *(int **)(uVar10 + 0x554) = piStack_17c;
                *(float *)(uVar10 + 0x558) = fStack_178;
                *(float *)(uVar10 + 0x55c) = fStack_174;
              }
            }
          }
        }
      }
    }
    else {
      FUN_00a81330();
      iVar5 = FUN_00a7c8a0();
      if (iVar5 == 0) goto LAB_00bd7e83;
      fStack_188 = 0.0;
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a81330();
        fStack_188 = (float)FUN_00a7c8a0();
      }
      fVar16 = *(float *)((int)fStack_188 + 0x40) - fStack_160;
      fVar2 = *(float *)((int)fStack_188 + 0x44) - (float)piStack_15c;
      fVar3 = *(float *)((int)fStack_188 + 0x48) - fStack_158;
      if (*(float *)(uVar10 + 0x574) * 1.2 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar16 * fVar16))
      goto LAB_00bd7e83;
      fStack_188 = (float)FUN_00b7b200();
      if ((((fStack_188 == 0.0) || (iVar5 = *(int *)((int)fStack_188 + 0x330), iVar5 == 0)) ||
          (0 < *(int *)(iVar5 + 0xcc))) ||
         (((iVar5 == 0 || (*(int *)(iVar5 + 0xcc) != 0)) ||
          (iVar5 = FUN_0093e3a0(*(undefined4 *)((int)fStack_188 + 0x51c)), iVar5 != 0))))
      goto LAB_00bd87a2;
      FUN_004fc8e0(&fStack_140,fStack_188,0xffffffff);
      if (*(int *)((int)fStack_188 + 0x6fc) < 1) {
        if (*(int *)((int)fStack_188 + 0x6c4) < 1) {
          if (*(float *)(uVar10 + 0x574) * 1.2 <=
              SQRT((fStack_138 - fStack_158) * (fStack_138 - fStack_158) +
                   (fStack_13c - (float)piStack_15c) * (fStack_13c - (float)piStack_15c) +
                   (fStack_140 - fStack_160) * (fStack_140 - fStack_160))) goto LAB_00bd7e3e;
          if (*(int *)((int)fStack_188 + 0x4b4) == 0x20120) {
            iVar5 = FUN_00a12210(0);
            *pfVar1 = *(float *)(iVar5 + 0x40);
            *(undefined4 *)(uVar10 + 0x554) = *(undefined4 *)(iVar5 + 0x44);
            *(undefined4 *)(uVar10 + 0x558) = *(undefined4 *)(iVar5 + 0x48);
            fVar16 = *(float *)(iVar5 + 0x4c);
            goto LAB_00bd7e39;
          }
          pfVar7 = (float *)FUN_00a926e0(afStack_d0);
          fVar4 = fStack_140 + *pfVar7 * 1.35;
          fVar2 = pfVar7[1] * 1.35 + fStack_13c;
          fVar3 = pfVar7[2] * 1.35 + fStack_138;
          fVar16 = pfVar7[3] * 1.35 + fStack_134;
        }
        else {
          iVar5 = FUN_00a12210(*(int *)((int)fStack_188 + 0x6c4));
          fStack_180 = *(float *)((int)fStack_188 + 0x6d0);
          piStack_184 = (int *)(iVar5 + 0x10);
          piStack_17c = *(int **)((int)fStack_188 + 0x6d4);
          fStack_178 = *(float *)((int)fStack_188 + 0x6d8);
          fStack_174 = *(float *)((int)fStack_188 + 0x6dc);
          D3DXVec3TransformNormal(&fStack_180,&fStack_180,piStack_184);
          fVar2 = (float)piStack_184[0xd];
          fVar3 = (float)piStack_184[0xe];
          fVar16 = (float)piStack_184[0xf];
          fVar4 = fStack_180 + (float)piStack_184[0xc];
LAB_00bd8785:
          fVar2 = fVar2 + (float)piStack_17c;
          fVar3 = fVar3 + fStack_178;
          fVar16 = fVar16 + fStack_174;
        }
        *pfVar1 = fVar4;
        *(float *)(uVar10 + 0x554) = fVar2;
LAB_00bd7e36:
        *(float *)(uVar10 + 0x558) = fVar3;
LAB_00bd7e39:
        *(float *)(uVar10 + 0x55c) = fVar16;
      }
      else {
        fStack_124 = (float)FUN_00a12210(0xffffffff);
        piStack_18c = (int *)piVar12[0x13c];
        fStack_100 = 0.0;
        fStack_fc = 1.35;
        fStack_f8 = 0.0;
        uVar22 = 0x3f490fdb;
        iVar5 = (**(code **)(*piVar12 + 0x84))(0x3f490fdb);
        uVar19 = *(undefined4 *)(iVar5 + 4);
        piVar6 = (int *)FUN_00f98aa0(piStack_18c,uVar19);
        fVar16 = (float)(int)piVar6 * 0.5;
        piVar9 = piStack_18c;
        piStack_18c = piVar6;
        piVar6 = (int *)FUN_00f98a90(fVar16);
        piVar9 = piStack_18c;
        piStack_18c = piVar6;
        iVar5 = FUN_00a866a0(piVar12 + 0x10,&fStack_124,&fStack_100,&fStack_180,
                             (float)(int)piVar6 * 0.5,fVar16,piVar9,uVar19,uVar22);
        if (-1 < iVar5) {
          *pfVar1 = fStack_180;
          *(int **)(uVar10 + 0x554) = piStack_17c;
          *(float *)(uVar10 + 0x558) = fStack_178;
          fVar16 = fStack_174;
          goto LAB_00bd7e39;
        }
        *pfVar1 = 0.0;
        *(undefined4 *)(uVar10 + 0x554) = 0;
        *(undefined4 *)(uVar10 + 0x558) = 0;
        *(undefined4 *)(uVar10 + 0x55c) = 0x3f800000;
      }
LAB_00bd7e3e:
      if (((*pfVar1 != 0.0) || (*(float *)(uVar10 + 0x554) != 0.0)) ||
         (*(float *)(uVar10 + 0x558) != 0.0)) {
        fVar13 = (float10)fpatan((float10)*pfVar1 - (float10)fStack_160,
                                 (float10)*(float *)(uVar10 + 0x558) - (float10)fStack_158);
        fStack_144 = (float)fVar13;
      }
    }
LAB_00bd87a2:
    if (((((*pfVar1 != 0.0) || (*(float *)(uVar10 + 0x554) != 0.0)) ||
         (*(float *)(uVar10 + 0x558) != 0.0)) &&
        ((fVar3 = *(float *)(uVar10 + 0x554) - (float)piVar12[0x11],
         fVar16 = *(float *)(uVar10 + 0x558) - (float)piVar12[0x12],
         SQRT((*pfVar1 - (float)piVar12[0x10]) * (*pfVar1 - (float)piVar12[0x10]) + fVar3 * fVar3 +
              fVar16 * fVar16) < 4.0 && (*(int *)(uVar10 + 0x188) == 0)))) &&
       (iVar5 = FUN_008e2740(), iVar5 != 0)) {
      fStack_160 = (float)piVar12[0x10];
      piStack_15c = (int *)piVar12[0x11];
      fStack_158 = (float)piVar12[0x12];
      fStack_154 = (float)piVar12[0x13];
      fStack_b4 = *(float *)(uVar10 + 0x55c);
      piStack_184 = (int *)(*pfVar1 - fStack_160);
      fStack_124 = 0.0;
      fStack_188 = *(float *)(uVar10 + 0x558) - fStack_158;
      fStack_108 = SQRT(fStack_188 * fStack_188 + (float)piStack_184 * (float)piStack_184 + 0.0);
      fStack_11c = 0.0;
      afStack_114[0] = fStack_b4 - fStack_154;
      piStack_18c = piStack_15c;
      fStack_120 = (float)piStack_184;
      fStack_118 = fStack_188;
      fStack_c8 = fStack_188;
      if (((float)piStack_184 != 0.0) || (fStack_188 != 0.0)) {
        fVar16 = fStack_188 * fStack_188 + (float)piStack_184 * (float)piStack_184 + 0.0;
        if (fVar16 < 0.0 == (fVar16 == 0.0)) {
          FUN_00ddf460(&fStack_120,&fStack_120);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_120 = 0.0;
          fStack_11c = 1.0;
          fStack_118 = 0.0;
        }
      }
      fStack_108 = fStack_108 - *(float *)(uVar10 + 0x574) * 0.8;
      fStack_dc = fStack_11c * fStack_108;
      fStack_d8 = fStack_118 * fStack_108;
      piStack_17c = (int *)(fStack_dc + (float)piStack_15c);
      fStack_174 = fStack_108 * afStack_114[0] + fStack_154;
      piStack_16c = (int *)((float)piStack_15c + 1.5);
      fStack_164 = fStack_c4 + fStack_154;
      fStack_108 = (fStack_120 * fStack_108 + fStack_160) - fStack_160;
      piStack_184 = (int *)((float)piStack_17c - (float)piStack_16c);
      fStack_124 = (fStack_d8 + fStack_158) - fStack_158;
      fStack_188 = fStack_174 - fStack_164;
      fStack_170 = fStack_160;
      fStack_168 = fStack_158;
      piStack_15c = piStack_16c;
      fStack_154 = fStack_164;
      fStack_f0 = fStack_108;
      piStack_ec = piStack_184;
      fStack_e8 = fStack_124;
      fStack_e4 = fStack_188;
      if (((fStack_108 != 0.0) || ((float)piStack_184 != 0.0)) || (fStack_124 != 0.0)) {
        fVar16 = fStack_124 * fStack_124 +
                 (float)piStack_184 * (float)piStack_184 + fStack_108 * fStack_108;
        if (fVar16 < 0.0 == (fVar16 == 0.0)) {
          FUN_00ddf460(&fStack_f0,&fStack_f0);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_f0 = 0.0;
          piStack_ec = (int *)0x3f800000;
          fStack_e8 = 0.0;
        }
      }
      fVar16 = *(float *)(uVar10 + 0x574);
      fStack_c8 = fStack_e8 * fVar16;
      fStack_180 = fStack_f0 * fVar16 + fStack_170;
      piStack_17c = (int *)((float)piStack_ec * fVar16 + (float)piStack_16c);
      fStack_178 = fStack_c8 + fStack_168;
      fStack_174 = fStack_164 + fStack_e4 * fVar16;
      FUN_00445d40(&fStack_160,&fStack_180,0xffff0006,0,0x60,0,"zangekiReadyPosCheck1",0);
      iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_2(afStack_c0,auStack_b0,0,0,auStack_a0);
      if (iVar5 == 0) {
        fVar16 = SQRT(fStack_108 * fStack_108 + (float)piStack_184 * (float)piStack_184 +
                      fStack_124 * fStack_124);
        fStack_180 = fStack_108;
        piStack_17c = piStack_184;
        fStack_178 = fStack_124;
        fStack_174 = fStack_188;
        if (((fStack_108 != 0.0) || ((float)piStack_184 != 0.0)) || (fStack_124 != 0.0)) {
          fVar3 = fStack_124 * fStack_124 +
                  (float)piStack_184 * (float)piStack_184 + fStack_108 * fStack_108;
          fStack_108 = fVar16;
          if (fVar3 < 0.0 == (fVar3 == 0.0)) {
            FUN_00ddf460(&fStack_180,&fStack_180);
            fVar16 = fStack_108;
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_180 = 0.0;
            piStack_17c = (int *)0x3f800000;
            fStack_178 = 0.0;
            fVar16 = fStack_108;
          }
        }
        fStack_108 = fVar16;
        fVar16 = fStack_108 - *(float *)(uVar10 + 0x574) * 0.6;
        fStack_fc = fVar16 * (float)piStack_17c + (float)piStack_16c;
        fStack_d8 = fVar16 * fStack_178 + fStack_168;
        fStack_d4 = fVar16 * fStack_174 + fStack_164;
        piStack_16c = (int *)((float)piStack_16c + 1.5);
        fStack_164 = fStack_a4 + fStack_164;
        fStack_160 = fStack_170;
        fStack_158 = fStack_168;
        fStack_100 = (fStack_180 * fVar16 + fStack_170) - fStack_170;
        fStack_fc = fStack_fc - (float)piStack_16c;
        fStack_f8 = fStack_d8 - fStack_168;
        fStack_f4 = fStack_d4 - fStack_164;
        piStack_15c = piStack_16c;
        fStack_154 = fStack_164;
        if (((fStack_100 != 0.0) || (fStack_fc != 0.0)) || (fStack_f8 != 0.0)) {
          fVar16 = fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc;
          if (fVar16 < 0.0 == (fVar16 == 0.0)) {
            FUN_00ddf460(&fStack_100,&fStack_100);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_100 = 0.0;
            fStack_fc = 1.0;
            fStack_f8 = 0.0;
          }
        }
        fVar16 = *(float *)(uVar10 + 0x574);
        uVar24 = 0;
        pcVar20 = "zangekiReadyPosCheck2";
        uVar18 = 0;
        uVar17 = 0x60;
        fStack_dc = fStack_fc * fVar16;
        uVar22 = 0;
        fStack_170 = fStack_170 + fVar16 * fStack_100;
        piStack_16c = (int *)((float)piStack_16c + fStack_dc);
        fStack_168 = fStack_f8 * fVar16 + fStack_168;
        fStack_164 = fStack_164 + fVar16 * fStack_f4;
        uVar19 = FUN_00410130(6,0xffffffff,0,0,0,0,0x60,0,"zangekiReadyPosCheck2",0);
        FUN_00445d40(&fStack_160,&fStack_170,uVar19,uVar22,uVar17,uVar18,pcVar20,uVar24);
        iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_2(afStack_d0,auStack_60,0,0,auStack_50);
        if (iVar5 == 0) goto LAB_00bd9012;
        pfVar7 = &fStack_170;
        fStack_170 = afStack_d0[0];
        fStack_168 = fStack_c8;
        fStack_164 = fStack_c4;
        piStack_16c = piStack_18c;
      }
      else {
        pfVar7 = &fStack_180;
        fStack_180 = afStack_c0[0];
        fStack_178 = fStack_b8;
        fStack_174 = fStack_b4;
        piStack_17c = piStack_18c;
      }
      (**(code **)(*piVar12 + 0x6c))(pfVar7);
    }
LAB_00bd9012:
    if (((*pfVar1 != 0.0) || (*(float *)(uVar10 + 0x554) != 0.0)) ||
       (*(float *)(uVar10 + 0x558) != 0.0)) {
      piStack_18c = (int *)0x0;
      fStack_108 = 0.0;
      fStack_180 = (float)piVar12[0x10];
      piStack_17c = (int *)piVar12[0x11];
      fStack_178 = (float)piVar12[0x12];
      fStack_174 = (float)piVar12[0x13];
      fStack_170 = 0.0;
      piStack_16c = (int *)0x3f800000;
      fStack_168 = 0.0;
      D3DXVec3TransformNormal(&fStack_170,&fStack_170,piVar12 + 4);
      piStack_18c = (int *)((float)piStack_17c * 1.35 + (float)piStack_18c);
      fStack_188 = fStack_178 * 1.35 + fStack_188;
      piStack_184 = (int *)(fStack_174 * 1.35 + (float)piStack_184);
      fStack_180 = fStack_170 * 1.35 + fStack_180;
      thunk_FUN_00dde510(&stack0xfffffe68,afStack_114,pfVar1,&piStack_18c);
      puVar11 = (undefined4 *)piVar12[500];
      if (puVar11 != (undefined4 *)0x0) {
        puVar21 = &DAT_01be9ef4;
        (**(code **)*puVar11)(&DAT_01be9ef4);
        iVar5 = FUN_00dd6d80(puVar21);
        if (iVar5 != 0) {
          puVar11[0xde] = uStack_150;
        }
      }
      if (fStack_134 != 0.0) {
        unaff_EBX = unaff_EBX + 0.17453292;
      }
      FUN_00b8bb40(-unaff_EBX);
      return;
    }
    if (local_128 != 0) {
      fStack_104 = fStack_104 - 0.34906584;
    }
    puVar11 = (undefined4 *)piVar12[500];
    if (puVar11 != (undefined4 *)0x0) {
      puVar21 = &DAT_01be9ef4;
      (**(code **)*puVar11)(&DAT_01be9ef4);
      goto LAB_00bd91e4;
    }
  }
  else {
    puVar11 = (undefined4 *)piVar12[500];
    if (puVar11 == (undefined4 *)0x0) goto LAB_00bd9200;
    puVar21 = &DAT_01be9ef4;
    (**(code **)*puVar11)(&DAT_01be9ef4);
LAB_00bd91e4:
    iVar5 = FUN_00dd6d80(puVar21);
    if (iVar5 != 0) {
      puVar11[0xde] = fStack_144;
    }
  }
  fVar13 = (float10)fStack_104;
LAB_00bd9200:
  FUN_00b8bb40((float)fVar13);
  return;
}

// 00BD9220  FUN_00bd9220  size=319  [callgraph]
void FUN_00bd9220(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_160 [348];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x528) != 0) &&
     ((*(int *)(uVar4 + 0x530) != 0 || (*(int *)(uVar4 + 0x52c) != 0)))) {
    FUN_004039a0(0,uVar3,0);
    FUN_00dffb30(uVar4 + 400);
    FUN_00e03080(*(undefined4 *)(uVar3 + 0x4f0),0);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00e03080(iVar2,1);
    }
    FUN_00a8c8b0(0x10010,local_160);
    return;
  }
  FUN_004039a0(2,uVar3,0);
  FUN_00dffb30(uVar4 + 400);
  FUN_00e03080(*(undefined4 *)(uVar3 + 0x4f0),0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,1);
  }
  FUN_00a8c8b0(0x10010,local_160);
  return;
}

// 00BD9360  FUN_00bd9360  size=248  [callgraph]
void FUN_00bd9360(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 local_160 [348];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  puVar2 = *(undefined4 **)(uVar4 + 2000);
  if (puVar2 != (undefined4 *)0x0) {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*puVar2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    if ((iVar3 != 0) && ((puVar2[0x14c] != 0 || (puVar2[0x14b] != 0)))) {
      FUN_004039a0(0,uVar4,0);
      FUN_00dffb30(uVar5 + 0x240);
      FUN_00a8c930(0,local_160);
      return;
    }
  }
  FUN_004039a0(2,uVar4,0);
  FUN_00dffb30(uVar5 + 0x240);
  FUN_00a8c930(0,local_160);
  return;
}

// 00BD9460  lib::StaticArray<FreeRunActivity::Info,64>::StaticArray<FreeRunActivity::Info,64>  size=52  [class]
undefined4 * __thiscall
lib::StaticArray<FreeRunActivity::Info,64>::StaticArray<FreeRunActivity::Info,64>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 0x40;
  *param_1 = vftable;
  FUN_00bbcc50(param_2,param_3);
  return param_1;
}

// 00BD94E0  lib::StaticArray<FreeRunActivity::Info,64>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<FreeRunActivity::Info,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<FreeRunActivity::Info>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BE6620  FUN_00be6620  size=1572  [callgraph]
undefined4
FUN_00be6620(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  undefined *puVar10;
  int iStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  int iStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int *piStack_e4;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  float fStack_d4;
  float fStack_cc;
  undefined1 auStack_c0 [12];
  float fStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [76];
  
  if (((int)DAT_01bea090 < 0) || ((DAT_01bea090 & 0x800) != 0)) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar7 = *(int **)(uVar8 + 0xc);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar7 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar10);
    piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar7);
  }
  iVar3 = piVar7[0x13c];
  iVar2 = (**(code **)(*piVar7 + 0x84))(0x40490fdb,0x41200000,param_5,*(int *)(uVar8 + 0x32c) == 0);
  iVar3 = FUN_00bd5d10(param_1,iVar3,*(undefined4 *)(iVar2 + 4));
  if (*(int *)(iVar3 + 0xc) < 1) {
    if (*(int *)(uVar8 + 0x358) == 0) {
      return 0;
    }
    DAT_01dc08bc = 0;
    *(undefined4 *)(uVar8 + 0x358) = 0;
    return 0;
  }
  if (((*(byte *)(piVar7 + 0x33f) & 0x20) == 0) && (param_4 == 0)) {
    if (*(int *)(uVar8 + 0x358) == 0) {
      FUN_0085c270();
    }
    *(undefined4 *)(uVar8 + 0x358) = 1;
    piVar7[0x2ee] = 0x40000000;
    piVar7[0x2ef] = 2;
    return 0;
  }
  iStack_134 = 0;
  iStack_114 = *(int *)(uVar8 + 0x348);
  if (iStack_114 == iStack_114 + *(int *)(uVar8 + 0x350) * 4) {
    return 0;
  }
  do {
    iVar3 = FUN_00a81330();
    if (((((iVar3 != 0) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) &&
         (piStack_e4 = (int *)FUN_00a7c8a0(), piStack_e4 != (int *)0x0)) &&
        ((piStack_e4[0x1a4] == 0 && (iVar2 = FUN_00a7c800(), iVar2 != 0)))) &&
       ((**(code **)(*piStack_e4 + 0x204))(&fStack_130),
       (fStack_130 - (float)piVar7[0x14]) * (fStack_130 - (float)piVar7[0x14]) +
       (fStack_12c - (float)piVar7[0x15]) * (fStack_12c - (float)piVar7[0x15]) +
       (fStack_128 - (float)piVar7[0x16]) * (fStack_128 - (float)piVar7[0x16]) <= 100.0)) {
      fVar9 = (float10)FUN_009f8c60(iVar2 + 0x50);
      iVar2 = (**(code **)(*piVar7 + 0x84))();
      FUN_00ddba30((float)fVar9 - *(float *)(iVar2 + 4));
      iStack_134 = iVar3;
    }
    iStack_114 = iStack_114 + 4;
  } while (iStack_114 != *(int *)(uVar8 + 0x348) + *(int *)(uVar8 + 0x350) * 4);
  if (iStack_134 == 0) {
    return 0;
  }
  piVar4 = (int *)FUN_00a7c8a0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  puVar10 = &DAT_01be9ca8;
  (**(code **)(*piVar4 + 4))(&DAT_01be9ca8);
  iVar3 = FUN_00dd6d80(puVar10);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = FUN_00a7c7f0();
  FUN_00a7c960(uVar5);
  if (piVar4[0x21c] == 2) {
    FUN_00a7c940(piVar4 + 0x23e);
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar7[0x2ee] = 0;
  FUN_00c2de00();
  iVar3 = *(int *)(uVar8 + 0x330);
  if (((((iVar3 == 3) || (iVar3 == 0xb)) ||
       ((iVar3 == 0xd || (((iVar3 == 0xe || (iVar3 == 0xf)) || (iVar3 == 0x17)))))) ||
      ((iVar3 == 0x18 || (iVar3 == 0x19)))) ||
     ((iVar3 == 0x10 || (((iVar3 == 10 || (iVar3 == 7)) || (iVar3 == 0x1a)))))) {
    FUN_00d82510(0x32,param_3);
    return 1;
  }
  if (((piVar7[0x1032] != 8) || (piVar7[0xf7c] != 3)) && (iVar3 != 8)) {
    iVar3 = (**(code **)(*piVar7 + 800))(0x3c888889);
    if ((iVar3 == 0) || (*(int *)(uVar8 + 0x188) != 0)) {
      fStack_110 = (float)piVar7[0x10];
      fStack_10c = (float)piVar7[0x11];
      fStack_108 = (float)piVar7[0x12];
      fStack_104 = (float)piVar7[0x13];
      iVar3 = FUN_00a81330();
      fStack_130 = fStack_110;
      fStack_128 = fStack_108;
      fStack_f4 = fStack_104;
      if (iVar3 != 0) {
        uVar5 = FUN_00a7c8a0();
        iVar3 = FUN_00860b80(uVar5);
        fStack_130 = fStack_110;
        fStack_128 = fStack_108;
        fStack_f4 = fStack_104;
        if (iVar3 != 0) {
          pfVar6 = (float *)FUN_00ac70a0();
          fStack_10c = pfVar6[1];
          fStack_130 = *pfVar6;
          fStack_128 = pfVar6[2];
          fStack_f4 = pfVar6[3];
        }
      }
      fStack_12c = fStack_10c + 1.0;
      fStack_124 = fStack_d4 + fStack_f4;
      fStack_fc = fStack_10c - 10.0;
      fStack_f4 = fStack_f4 - fStack_d4;
      fStack_100 = fStack_130;
      fStack_f8 = fStack_128;
      uVar5 = FUN_00410130(6,0xffffffff,0,0,0);
      FUN_00445d40(&fStack_130,&fStack_100,uVar5,0,0x60,0,"datsuTransitionCheck",0);
      iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_e0,auStack_c0,0,0,auStack_90);
      if (iVar3 == 0) {
        fStack_dc = (float)piVar7[0x11];
      }
      fStack_130 = (float)piVar7[0x10];
      fStack_fc = (float)piVar7[0x11];
      fStack_128 = (float)piVar7[0x12];
      fStack_f4 = (float)piVar7[0x13];
      fStack_12c = fStack_fc - 1.5;
      fStack_124 = fStack_f4 - fStack_b4;
      fStack_100 = fStack_130;
      fStack_f8 = fStack_128;
      fStack_cc = fStack_dc;
      FUN_00445d40(&fStack_100,&fStack_130,uVar5,0,0x60,0,"datsuTransitionCheck",0);
      iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_a0,auStack_b0,0,0,auStack_50);
      if (((iVar3 != 0) && (fStack_10c < (float)piVar7[0x11] + 1.5)) &&
         (fStack_10c - fStack_cc < 1.5)) {
        *(undefined4 *)(uVar8 + 0x358) = 0;
        uVar5 = 0x33;
        goto LAB_00be6968;
      }
      *(undefined4 *)(uVar8 + 0x358) = 0;
    }
    else {
      pfVar6 = (float *)FUN_00ac70a0();
      fStack_130 = *pfVar6;
      fStack_12c = pfVar6[1];
      fStack_128 = pfVar6[2];
      fStack_124 = pfVar6[3];
      fVar1 = (float)piVar7[0x11];
      *(undefined4 *)(uVar8 + 0x358) = 0;
      if (fStack_12c - fVar1 <= 1.8) {
        uVar5 = 0x33;
        goto LAB_00be6968;
      }
    }
  }
  uVar5 = 0x32;
LAB_00be6968:
  FUN_00d82510(uVar5,param_3);
  *(undefined4 *)(uVar8 + 0x2f4) = 1;
  return 1;
}

// 00BE6C90  lib::StaticArray<cLockOnParts,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<cLockOnParts,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cLockOnParts>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BE9E40  lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_3  size=1082  [class]
void __fastcall lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_3(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int *piVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar5;
  undefined1 *local_ec4;
  int *local_ec0;
  int *local_ebc;
  LPCRITICAL_SECTION local_eb8;
  undefined **local_eb0;
  int *local_eac;
  int local_ea8;
  undefined4 local_ea4;
  int local_ea0 [32];
  undefined **local_e20;
  undefined1 *local_e1c;
  int local_e18;
  undefined4 local_e14;
  undefined1 local_e10 [3596];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xbc0);
  local_eb8 = lpCriticalSection;
  if (*(int *)(param_1 + 0xbd8) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_004066f0();
  if (*(int *)(param_1 + 0x2570) != 0) {
    iVar1 = FUN_00c25110(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x1070),
                         0x3f860a92,0x42200000,0,0,0,0,1);
    FUN_00a7c930();
    if ((iVar1 != 0) && (iVar1 = FUN_00bc4610(iVar1), iVar1 == 0)) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00878130(&local_ec4,&local_ec0);
    }
    local_eac = local_ea0;
    local_ea8 = 0;
    local_ea4 = 0x20;
    local_eb0 = vftable;
    FUN_00a93220(&local_eb0,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x1070),
                 0x3fb2b8c2,0x42200000,0);
    local_ebc = local_eac;
    if (local_eac != local_eac + local_ea8) {
      do {
        local_ec4 = (undefined1 *)*local_ebc;
        if (local_ec4 != (undefined1 *)0x0) {
          iVar5 = *(int *)(param_1 + 0x1044);
          iVar1 = iVar5 + *(int *)(param_1 + 0x104c) * 4;
          for (; iVar5 != iVar1; iVar5 = iVar5 + 4) {
            puVar3 = (undefined1 *)FUN_00a81330();
            if ((puVar3 != (undefined1 *)0x0) && (puVar3 == local_ec4)) goto LAB_00be9fd8;
          }
        }
        uVar2 = FUN_00a7c7f0();
        if (*(int *)(param_1 + 0x104c) < *(int *)(param_1 + 0x1048)) {
          if (*(int *)(param_1 + 0x1044) + *(int *)(param_1 + 0x104c) * 4 != 0) {
            FUN_00a7c940(uVar2);
          }
          *(int *)(param_1 + 0x104c) = *(int *)(param_1 + 0x104c) + 1;
        }
LAB_00be9fd8:
        local_ebc = local_ebc + 1;
        lpCriticalSection = local_eb8;
      } while (local_ebc != local_eac + local_ea8);
    }
  }
  if (*(int *)(param_1 + 0x2598) != 0) {
    local_e1c = local_e10;
    local_e18 = 0;
    local_e14 = 0x20;
    local_e20 = StaticArray<cLockOnParts,32>::vftable;
    FUN_00c4d5f0(&local_e20,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x1070),
                 0x40490fdb,0x42200000);
    local_ec4 = local_e1c;
    if (local_e1c != local_e1c + local_e18 * 0x70) {
      do {
        FUN_008a50c0(local_ec4);
        local_ec0 = (int *)FUN_00a81330();
        if (local_ec0 != (int *)0x0) {
          iVar5 = *(int *)(param_1 + 0x1044);
          iVar1 = iVar5 + *(int *)(param_1 + 0x104c) * 4;
          for (; iVar5 != iVar1; iVar5 = iVar5 + 4) {
            piVar4 = (int *)FUN_00a81330();
            if ((piVar4 != (int *)0x0) && (piVar4 == local_ec0)) goto LAB_00bea10f;
          }
        }
        FUN_00a81330();
        uVar2 = FUN_00a7c7f0();
        if (*(int *)(param_1 + 0x104c) < *(int *)(param_1 + 0x1048)) {
          if (*(int *)(param_1 + 0x1044) + *(int *)(param_1 + 0x104c) * 4 != 0) {
            FUN_00a7c940(uVar2);
          }
          *(int *)(param_1 + 0x104c) = *(int *)(param_1 + 0x104c) + 1;
        }
LAB_00bea10f:
        local_ec4 = local_ec4 + 0x70;
        lpCriticalSection = local_eb8;
      } while (local_ec4 != local_e1c + local_e18 * 0x70);
    }
    local_eac = local_ea0;
    local_ea4 = 0x20;
    local_eb0 = vftable;
    local_ea8 = 0;
    FUN_00a93220(&local_eb0,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x1070),
                 0x40490fdb,0x42200000,0);
    local_ec0 = local_eac;
    if (local_eac != local_eac + local_ea8) {
      do {
        local_ec4 = (undefined1 *)*local_ec0;
        if (local_ec4 != (undefined1 *)0x0) {
          iVar5 = *(int *)(param_1 + 0x1044);
          iVar1 = iVar5 + *(int *)(param_1 + 0x104c) * 4;
          for (; iVar5 != iVar1; iVar5 = iVar5 + 4) {
            puVar3 = (undefined1 *)FUN_00a81330();
            if ((puVar3 != (undefined1 *)0x0) && (puVar3 == local_ec4)) goto LAB_00bea208;
          }
          uVar2 = FUN_00a7c7f0();
          if (*(int *)(param_1 + 0x104c) < *(int *)(param_1 + 0x1048)) {
            if (*(int *)(param_1 + 0x1044) + *(int *)(param_1 + 0x104c) * 4 != 0) {
              FUN_00a7c940(uVar2);
            }
            *(int *)(param_1 + 0x104c) = *(int *)(param_1 + 0x104c) + 1;
          }
        }
LAB_00bea208:
        local_ec0 = local_ec0 + 1;
        lpCriticalSection = local_eb8;
      } while (local_ec0 != local_eac + local_ea8);
    }
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (DAT_01885d68 != 1) {
    piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar4 = *piVar4 + -1;
    if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00BEC620  FUN_00bec620  size=4443  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00bec620(int *param_1)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  float local_194 [10];
  int iStack_16c;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [288];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0;
    DAT_01bea090 = DAT_01bea090 & 0xfffffffb;
    DAT_01bea094 = DAT_01bea094 | 0x100;
    iVar8 = (**(code **)(*param_1 + 0x370))();
    if (iVar8 == 0) {
      iVar8 = FUN_00b89e20();
      if (iVar8 != 0) {
        FUN_00b8a040(1,0,0);
      }
      piVar10 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar10 + 0x44))(0,"bigbridgewall");
      iVar8 = (**(code **)(*param_1 + 0x324))();
      if (iVar8 != 0) {
        FUN_00be8e60();
        FUN_00a8caf0(0xe8,0,0,0);
        FUN_00aa4080((param_1[0x2dd] != 0) + '\x04',0,0,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x224] = 0;
        param_1[0x225] = 0;
        param_1[0x226] = 0;
        param_1[0x227] = iStack_16c;
        param_1[0x187] = 1;
        param_1[0x15] = 0x40b33333;
      }
      if (param_1[0x221] != 0) {
        param_1[0x221] = 0;
      }
      FUN_00b94790(0x3f800000,0x3f800000);
      switchD_0080dbae::default();
      return;
    }
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x227] = iStack_164;
    param_1[0x15] = 0x40b33333;
    FUN_00be8e60();
    FUN_00a8caf0(0xe8,0,0,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar8 = 0;
    do {
      fVar5 = (float)FUN_00c19cc0(4,0,0x20190,iVar8);
      local_194[iVar8] = fVar5;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    piVar10 = (int *)FUN_00a7c8a0();
    if (piVar10 != (int *)0x0) {
      puVar16 = &DAT_01b34f20;
      (**(code **)(*piVar10 + 4))(&DAT_01b34f20);
      FUN_00dd6d80(puVar16);
    }
    FUN_004fede0(1,&DAT_018b92f0);
    piVar10 = (int *)FUN_00a7c8a0();
    if (piVar10 != (int *)0x0) {
      puVar16 = &DAT_01b34f20;
      (**(code **)(*piVar10 + 4))(&DAT_01b34f20);
      FUN_00dd6d80(puVar16);
    }
    FUN_004fede0(3,&DAT_018b92f0);
    piVar10 = (int *)FUN_00a7c8a0();
    if (piVar10 != (int *)0x0) {
      puVar16 = &DAT_01b34f20;
      (**(code **)(*piVar10 + 4))(&DAT_01b34f20);
      FUN_00dd6d80(puVar16);
    }
    FUN_004fede0(5,&DAT_018b92f0);
    iVar8 = FUN_00a7f600(0xf0035);
    if (iVar8 != 0) {
      uVar9 = FUN_00a7c8b0();
      FUN_00a7ce90(uVar9);
      uVar9 = FUN_00a7c8b0();
      FUN_00a7ce90(uVar9);
      uVar9 = FUN_00a7c8b0();
      FUN_00a7ce90(uVar9);
    }
    param_1[0x14f8] = 0x3f666666;
    iVar8 = FUN_00b89e20();
    if (iVar8 != 0) {
      FUN_00b8a040(1,0,0);
    }
    iVar8 = (**(code **)(*param_1 + 0x3ec))();
    if (iVar8 != 0) {
      FUN_00b8a620();
    }
    DAT_01bea090 = DAT_01bea090 & 0xfffcffff;
    uStack_160 = 0;
    uStack_15c = 0x3fc90fdb;
    uStack_158 = 0;
    (**(code **)(*param_1 + 0x88))(&uStack_160);
    param_1[0x2dd] = 1;
    local_194[2] = (float)FUN_00a7f600(0xf0033);
    piVar10 = (int *)FUN_00a7c8a0();
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      puVar16 = &DAT_01b34b14;
      (**(code **)(*piVar10 + 4))(&DAT_01b34b14);
      iVar8 = FUN_00dd6d80(puVar16);
      piVar10 = (int *)(-(uint)(iVar8 != 0) & (uint)piVar10);
    }
    FUN_00a7f600(0x40001);
    FUN_00a7ce90(piVar10 + 0x10);
    uVar9 = (**(code **)(*piVar10 + 0x84))();
    FUN_00a7cf00(uVar9);
    iStack_198 = FUN_00a7f710("loverBand",0x40002);
    FUN_00a7ce90(piVar10 + 0x10);
    uVar9 = (**(code **)(*piVar10 + 0x84))();
    FUN_00a7cf00(uVar9);
    piVar10 = (int *)FUN_00a7c8a0();
    if (piVar10 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar16 = &DAT_01be9c80;
      (**(code **)(*piVar10 + 4))(&DAT_01be9c80);
      iVar8 = FUN_00dd6d80(puVar16);
      uVar11 = -(uint)(iVar8 != 0) & (uint)piVar10;
    }
    uStack_140 = 0x40400000;
    uStack_13c = 0;
    uStack_138 = 0;
    FUN_00ac4ec0(1,&uStack_140,0x3e99999a);
    FUN_00ac9d90(0xa101,0,0x8000000);
    uVar21 = 0x3f800000;
    *(undefined4 *)(uVar11 + 0xa30) = 0;
    uVar20 = 0xbf800000;
    uVar19 = 0x8000000;
    uVar18 = 0x3f800000;
    uVar17 = 0;
    uVar9 = 0;
    puVar15 = &DAT_0163b604;
    FUN_00a7c8a0(&DAT_0163b604,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a9e290(puVar15,uVar9,uVar17,uVar18,uVar19,uVar20,uVar21);
    param_1[0x187] = param_1[0x187] + 1;
    _DAT_01be9f08 = 2.3;
  case 2:
    fVar14 = (float10)FUN_00a92ff0();
    pcVar4 = *(code **)(*param_1 + 0x88);
    param_1[0x248] = (int)(float)(fVar14 + (float10)(float)param_1[0x248]);
    uStack_130 = 0;
    uStack_12c = 0x3fc90fdb;
    uStack_128 = 0;
    (*pcVar4)(&uStack_130);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94db0(0xd9);
    if (iVar8 != 0) {
      FUN_00d5ea40("P138_BREAKDOWN_2",1,0);
      param_1[0x2dd] = 1;
      piVar10 = (int *)FUN_00a6e640();
      (**(code **)(*piVar10 + 0x44))(4,1);
      (**(code **)(*param_1 + 0x388))(0);
      iStack_198 = FUN_00a7f600(0xf0033);
      if (iStack_198 != 0) {
        iVar8 = FUN_00a7c8a0();
        local_194[2] = 0.0;
        if (0 < *(short *)(iVar8 + 0x324)) {
          iStack_19c = 0;
          do {
            iVar12 = *(int *)(iVar8 + 800) + iStack_19c;
            iVar6 = *(int *)(*(int *)(iVar12 + 0x60) + 0x40);
            if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_appear"), iVar6 != 0)) {
              puVar1 = (uint *)(iVar12 + 0x38);
              *puVar1 = *puVar1 | 1;
            }
            iStack_19c = iStack_19c + 0x70;
            local_194[2] = (float)((int)local_194[2] + 1);
          } while ((int)local_194[2] < (int)*(short *)(iVar8 + 0x324));
        }
        iVar8 = FUN_00a7c8a0();
        local_194[2] = 0.0;
        if (0 < *(short *)(iVar8 + 0x324)) {
          iStack_19c = 0;
          do {
            iVar12 = *(int *)(iVar8 + 800) + iStack_19c;
            iVar6 = *(int *)(*(int *)(iVar12 + 0x60) + 0x40);
            if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_hide"), iVar6 != 0)) {
              puVar1 = (uint *)(iVar12 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iStack_19c = iStack_19c + 0x70;
            local_194[2] = (float)((int)local_194[2] + 1);
          } while ((int)local_194[2] < (int)*(short *)(iVar8 + 0x324));
        }
      }
    }
    fVar5 = (float)param_1[0x248];
    if ((!NAN(fVar5) && 50.0 < fVar5 != (fVar5 == 50.0)) && ((float)param_1[0x248] <= 52.0)) {
      local_194[2] = 0.1;
      local_194[3] = 0.8;
      local_194[0] = 0.8;
      iStack_198 = 0x3dcccccd;
      FUN_00dda3b0(0,local_194 + 2,&iStack_198,0x78);
    }
    fVar5 = (float)param_1[0x248];
    if ((!NAN(fVar5) && 170.0 < fVar5 != (fVar5 == 170.0)) && ((float)param_1[0x248] < 172.0)) {
      FUN_00dda360(0,0x3f800000,0x3f800000,10);
    }
    fVar5 = (float)param_1[0x248];
    if ((!NAN(fVar5) && 200.0 < fVar5 != (fVar5 == 200.0)) && ((float)param_1[0x248] < 202.0)) {
      FUN_00dda360(0,0x3f800000,0x3f800000,10);
    }
    fVar5 = (float)param_1[0x248];
    if ((!NAN(fVar5) && 260.0 < fVar5 != (fVar5 == 260.0)) && ((float)param_1[0x248] < 262.0)) {
      FUN_00dda360(0,0x3f800000,0x3f800000,10);
    }
    fVar5 = (float)param_1[0x248];
    if ((!NAN(fVar5) && 300.0 < fVar5 != (fVar5 == 300.0)) && ((float)param_1[0x248] < 302.0)) {
      FUN_00dda360(0,0x3f800000,0x3f800000,10);
    }
    iVar8 = FUN_00a95200(0xd9,0x432a0000);
    if ((iVar8 != 0) && ((param_1[0x33e] & param_1[0x392]) != 0)) {
      FUN_00dda360(0,0x3f800000,0x3f800000,10);
      FUN_00d5ea40("P138_BREAKDOWN_2",1,0);
      param_1[0x2dd] = 1;
      piVar10 = (int *)FUN_00a6e640();
      (**(code **)(*piVar10 + 0x44))(4,1);
      FUN_00b8a510();
      iStack_198 = FUN_00a7f600(0xf0033);
      if (iStack_198 != 0) {
        iVar8 = FUN_00a7c8a0();
        local_194[2] = 0.0;
        if (0 < *(short *)(iVar8 + 0x324)) {
          iStack_19c = 0;
          do {
            iVar12 = *(int *)(iVar8 + 800) + iStack_19c;
            iVar6 = *(int *)(*(int *)(iVar12 + 0x60) + 0x40);
            if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_appear"), iVar6 != 0)) {
              puVar1 = (uint *)(iVar12 + 0x38);
              *puVar1 = *puVar1 | 1;
            }
            iStack_19c = iStack_19c + 0x70;
            local_194[2] = (float)((int)local_194[2] + 1);
          } while ((int)local_194[2] < (int)*(short *)(iVar8 + 0x324));
        }
        iVar8 = FUN_00a7c8a0();
        iStack_198 = 0;
        if (0 < *(short *)(iVar8 + 0x324)) {
          iStack_19c = 0;
          do {
            iVar12 = *(int *)(iVar8 + 800) + iStack_19c;
            iVar6 = *(int *)(*(int *)(iVar12 + 0x60) + 0x40);
            if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_hide"), iVar6 != 0)) {
              puVar1 = (uint *)(iVar12 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iStack_19c = iStack_19c + 0x70;
            iStack_198 = iStack_198 + 1;
          } while (iStack_198 < *(short *)(iVar8 + 0x324));
        }
      }
    }
    if ((float)param_1[0x15] <= 5.0) {
      param_1[0x15] = 0x40a00000;
    }
    switchD_0080dbae::default();
    if (0.0 < _DAT_01be9f08) {
      fVar13 = (float10)FUN_00a93060();
      fVar14 = (float10)_DAT_01be9f08;
      _DAT_01be9f08 = (float)(fVar14 - fVar13);
      if (fVar14 - fVar13 <= (float10)0) {
        _DAT_01be9f08 = (float)(float10)0;
        FUN_00a7f600(0xf0033);
        uStack_154 = 0;
        uVar9 = 0x100;
        uStack_150 = 0x3fc90fdb;
        uStack_14c = 0;
        FUN_00a7c8a0(0x100);
        iVar8 = FUN_00a12210(uVar9);
        (**(code **)(*param_1 + 0x7c))(iVar8 + 0x40,&uStack_154);
        switchD_0080dbae::default();
        FUN_00aa3f60(0xd9);
        return;
      }
    }
    break;
  case 10:
    iVar8 = (**(code **)(*param_1 + 0x3ec))();
    if (iVar8 != 0) {
      FUN_00b8a620();
    }
    iVar8 = param_1[0x1d9];
    param_1[0x14f8] = 0x3f666666;
    if (*(int *)(iVar8 + 0x104) != 1) {
      *(undefined4 *)(iVar8 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar8 + 0xd0) + 4) = 0;
    }
    FUN_008e6c60(0);
    piVar10 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar10 + 0x40))(0,"bigbridgewall",0x11c);
    FUN_00aa4080(0xdf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x20))();
    FUN_00a7f600(0xf0036);
    uVar9 = FUN_00a7c8a0();
    piVar10 = (int *)FUN_00b84570(uVar9);
    FUN_00a9e290(&DAT_01641bcc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iStack_1a0 = 0;
    if (0 < (short)piVar10[0xc9]) {
      iStack_1a4 = 0;
      do {
        iVar8 = piVar10[200];
        iVar6 = *(int *)(*(int *)(iVar8 + iStack_1a4 + 0x60) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_hide"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar8 + iStack_1a4 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_1a4 = iStack_1a4 + 0x70;
        iStack_1a0 = iStack_1a0 + 1;
      } while (iStack_1a0 < (short)piVar10[0xc9]);
    }
    iStack_1a0 = 0;
    if (0 < (short)piVar10[0xc9]) {
      iStack_1a4 = 0;
      do {
        iVar8 = piVar10[200];
        iVar6 = *(int *)(*(int *)(iVar8 + iStack_1a4 + 0x60) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_appear"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar8 + iStack_1a4 + 0x38);
          *puVar1 = *puVar1 | 1;
        }
        iStack_1a4 = iStack_1a4 + 0x70;
        iStack_1a0 = iStack_1a0 + 1;
      } while (iStack_1a0 < (short)piVar10[0xc9]);
    }
    piVar7 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar7 + 0x20))("bridge_ba0036_006_appear",0x11c);
    piVar7 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar7 + 0x1c))();
    iVar8 = 0;
    do {
      uVar9 = FUN_00c19cc0(4,0,0x20190,iVar8);
      *(undefined4 *)(&stack0xfffffe58 + iVar8 * 4) = uVar9;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    if ((iStack_1a0 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      fVar14 = (float10)FUN_00a958c0(0);
      FUN_00a95e60(0,(float)(fVar14 + (float10)0.25));
    }
    FUN_00a7f600(0x40001);
    piVar7 = (int *)FUN_00a7c8a0();
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar16 = &DAT_01be9c80;
      (**(code **)(*piVar7 + 4))(&DAT_01be9c80);
      iVar8 = FUN_00dd6d80(puVar16);
      uVar11 = -(uint)(iVar8 != 0) & (uint)piVar7;
    }
    FUN_00ac9d90(0xa106,0,0x8000000);
    *(undefined4 *)(uVar11 + 0xa30) = 0;
    FUN_00a7ce90(piVar10 + 0x10);
    uVar9 = (**(code **)(*piVar10 + 0x84))();
    FUN_00a7cf00(uVar9);
    FUN_004fc8e0(local_194,piVar10,0x100);
    if (param_1[0x3da] != 0) {
      param_1[0x3dc] = 0;
      if (param_1[0x3dd] != 0) {
        FUN_00dd48d0(param_1[0x3da],0);
        param_1[0x3dd] = 0;
      }
      param_1[0x3da] = 0;
      param_1[0x3db] = 0;
    }
    FUN_00a5dc60();
    FUN_0041c8e0(4,&DAT_01b7bd48);
    iVar8 = param_1[0x11];
    iVar6 = param_1[0x12];
    if (param_1[0x3dc] < param_1[0x3db]) {
      piVar10 = (int *)(param_1[0x3da] + param_1[0x3dc] * 0xc);
      if (piVar10 == (int *)0x0) {
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
      else {
        *piVar10 = param_1[0x10];
        piVar10[1] = iVar8;
        piVar10[2] = iVar6;
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
    }
    fVar5 = (float)param_1[0x12];
    fVar3 = (float)param_1[0x12];
    if (param_1[0x3dc] < param_1[0x3db]) {
      pfVar2 = (float *)(param_1[0x3da] + param_1[0x3dc] * 0xc);
      if (pfVar2 == (float *)0x0) {
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
      else {
        *pfVar2 = (local_194[0] - (float)param_1[0x10]) * 0.3 + (float)param_1[0x10];
        pfVar2[1] = local_194[1] + 6.0;
        pfVar2[2] = (local_194[2] - fVar5) * 0.3 + fVar3;
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
    }
    fVar5 = (float)param_1[0x12];
    fVar3 = (float)param_1[0x12];
    if (param_1[0x3dc] < param_1[0x3db]) {
      pfVar2 = (float *)(param_1[0x3da] + param_1[0x3dc] * 0xc);
      if (pfVar2 == (float *)0x0) {
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
      else {
        *pfVar2 = (local_194[0] - (float)param_1[0x10]) * 0.6 + (float)param_1[0x10];
        pfVar2[1] = local_194[1] + 6.0;
        pfVar2[2] = (local_194[2] - fVar5) * 0.6 + fVar3;
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
    }
    if (param_1[0x3dc] < param_1[0x3db]) {
      pfVar2 = (float *)(param_1[0x3da] + param_1[0x3dc] * 0xc);
      if (pfVar2 == (float *)0x0) {
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
      else {
        *pfVar2 = local_194[0];
        pfVar2[1] = local_194[1];
        pfVar2[2] = local_194[2];
        param_1[0x3dc] = param_1[0x3dc] + 1;
      }
    }
    FUN_00a5e090(param_1 + 0x3d9);
    param_1[0x3f6] = 0;
    local_194[1] = 5.55;
    local_194[4] = 0.0;
    local_194[5] = 1.5707964;
    local_194[6] = 0.0;
    (**(code **)(*param_1 + 0x7c))(local_194,local_194 + 4);
    switchD_0080dbae::default();
    param_1[0x187] = param_1[0x187] + 1;
  case 0xb:
    fVar14 = (float10)FUN_00a93060();
    fVar5 = (float)param_1[0x3f6];
    param_1[0x3f6] = (int)(float)(fVar14 + (float10)fVar5);
    if ((float10)0.033333335 < fVar14 + (float10)fVar5) {
      pcVar4 = *(code **)(*param_1 + 0x1c);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar4)();
      iVar8 = FUN_00a81330();
      if (iVar8 != 0) {
        piVar10 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar10 + 0x1c))();
      }
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 0xc:
    param_1[0x15] = 0x40b1999a;
    FUN_00a581b0(local_194,0x3f800000,param_1[0x3f6]);
    fVar14 = (float10)FUN_00a93060();
    param_1[0x3f6] = (int)(float)(fVar14 + (float10)(float)param_1[0x3f6]);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_004fc8e0(local_194 + 5,param_1,0);
    if ((local_194[6] <= 5.5) ||
       ((iVar8 = FUN_00a95270(0xdf,0x28), iVar8 != 0 && (local_194[5] <= 345.0))))
    goto LAB_00bed784;
    iVar8 = FUN_00a95630(0xdf,0x10e);
    if (iVar8 != 0) {
      FUN_00d5ea40("P138_HELI01_START",1,0);
      piVar10 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar10 + 0x44))(1,"bigbridgewall");
    }
    iVar8 = FUN_00a94db0(0xdf);
    if (iVar8 != 0) {
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_008e6c60(1);
      iVar8 = FUN_00a7f600(0xf0036);
      if (iVar8 != 0) {
        uVar9 = FUN_00a7c8a0();
        FUN_00b84570(uVar9);
        FUN_00404bb0(0);
      }
      FUN_00a7f600(0x40001);
      uVar9 = FUN_00a7c8a0();
      iVar8 = FUN_008dca60(uVar9);
      FUN_00ac9fe0();
      *(undefined4 *)(iVar8 + 0xa30) = 1;
      FUN_00da0d70();
      if ((param_1[0x33e] & param_1[0x392]) == 0) {
        (**(code **)(*param_1 + 0x388))(0);
      }
      else {
        FUN_00b8a510();
      }
      piVar10 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar10 + 0x40))(1,"bigbridgewall",0x11c);
      switchD_0080dbae::default();
      return;
    }
    break;
  case 0xd:
    FUN_00a7f600(0x40001);
    uVar9 = FUN_00a7c8a0();
    FUN_008dca60(uVar9);
    FUN_00ac9fe0();
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    (**(code **)(*param_1 + 0xd4))(0);
    FUN_00d664e0(1);
    piVar10 = (int *)FUN_00c1bd10();
    (**(code **)(*piVar10 + 0x10))();
    FUN_00e01d00(10);
    EffectAreaScrSystem::SetEffectAreaEnable(0x100,4,0);
    EffectAreaScrSystem::SetEffectAreaEnable(0x11c,1,0);
    piVar10 = (int *)FUN_00a6dd90();
    uVar9 = (**(code **)(*piVar10 + 0x9c))(0x100,10,auStack_124);
    FUN_00e01f10(uVar9);
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    FUN_00c420c0(0x42a00000);
LAB_00bed784:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  return;
}

// 00BED7D0  lib::StaticArray<EntityHandle,16>::StaticArray<EntityHandle,16>_2  size=3827  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall lib::StaticArray<EntityHandle,16>::StaticArray<EntityHandle,16>_2(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  float *pfVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  uint local_1c4;
  float local_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  char *pcStack_180;
  undefined4 uStack_17c;
  undefined **local_170;
  undefined1 *local_16c;
  int local_168;
  undefined4 local_164;
  undefined1 local_160 [188];
  undefined4 uStack_a4;
  
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    local_16c = local_160;
    local_168 = 0;
    local_164 = 0x10;
    local_170 = vftable;
    FUN_00a7f4a0(0x20120,&local_170);
    puVar10 = local_16c;
    if (local_16c != local_16c + local_168 * 4) {
      do {
        iVar9 = FUN_00a81330();
        if (iVar9 != 0) {
          FUN_00a805f0();
        }
        puVar10 = puVar10 + 4;
      } while (puVar10 != local_16c + local_168 * 4);
    }
    FUN_0093db80();
    iVar9 = param_1[0x1d9];
    if (*(int *)(iVar9 + 0x104) != 1) {
      *(undefined4 *)(iVar9 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar9 + 0xd0) + 4) = 0;
    }
    local_1f0 = 1.0;
    local_1ec = 0.0;
    local_1e8 = 0.0;
    piVar7 = (int *)FUN_009f8b60();
    local_1b4 = local_1b4 * 10.0;
    iVar9 = *piVar7;
    pfVar11 = (float *)(**(code **)(*param_1 + 0x68))();
    fStack_1dc = pfVar11[1] + 1.0;
    fStack_1d8 = pfVar11[2];
    fStack_1e0 = *pfVar11 - 10.0;
    fStack_1d4 = pfVar11[3] + local_1b4 + local_1b4;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    uStack_1b0 = *puVar5;
    fStack_1ac = (float)puVar5[1] + 1.0;
    uStack_1a8 = puVar5[2];
    fStack_1a4 = (float)puVar5[3] + local_1b4;
    uStack_190 = iVar9 << 0x10 | 0x1e;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    pcStack_180 = "Stage4_3";
    uStack_17c = 0;
    fStack_1a0 = fStack_1e0;
    fStack_19c = fStack_1dc;
    fStack_198 = fStack_1d8;
    fStack_194 = fStack_1d4;
    RayCastSingleHitWork::RayCastSingleHitWork_2(0,&local_1f0,0,0,&uStack_1b0);
    param_1[0x2dd] = 1;
    FUN_00a94bc0(1,0);
    FUN_00a94bc0(2,0);
    FUN_00a94bc0(3,0);
    FUN_00a94bc0(4,0);
    FUN_00a94bc0(5,0);
    iVar9 = FUN_00de4500("pl0010_d140.mot");
    uVar4 = FUN_00de4500("pl0010_d140_0_seq.bxm");
    param_1[0x248] = 0;
    param_1[0x24d] = 0;
    if (iVar9 != 0) {
      FUN_00a9f180(iVar9,uVar4,&DAT_016a2a28,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[600] = (int)local_1f0;
    param_1[0x259] = (int)local_1ec;
    param_1[0x25a] = (int)local_1e8;
    param_1[0x25b] = (int)fStack_1e4;
    FUN_00b893e0(&local_1f0,1);
    param_1[0x187] = param_1[0x187] + 1;
    DAT_018a8550 = _DAT_018a8530;
    DAT_018a8544 = 0;
    DAT_018a8570 = 0;
    DAT_018a8554 = _DAT_018a8534;
    DAT_018a857c = 0;
    DAT_018a85a4 = 0;
    DAT_018a8558 = _DAT_018a8538;
    DAT_018a85d0 = 0;
    _DAT_018a85dc = 0;
    DAT_018a855c = _DAT_018a853c;
    _DAT_018a8604 = 0;
    _DAT_018a856c = _DAT_018a853c;
    _DAT_018a8630 = 0;
    _DAT_018a8560 = _DAT_018a8530;
    _DAT_018a8568 = _DAT_018a8538;
    DAT_018a8564 = _DAT_018a8534 - 27.5;
    DAT_018a8574 = 0x3e4ccccd;
    DAT_018a8578 = 0;
    DAT_018a8580 = 0;
    _DAT_018a85b0 = _DAT_018a8590;
    _DAT_018a85b4 = _DAT_018a8594;
    _DAT_018a85b8 = _DAT_018a8598;
    _DAT_018a85bc = _DAT_018a859c;
    _DAT_018a85cc = _DAT_018a859c;
    _DAT_018a85c0 = _DAT_018a8590;
    _DAT_018a85c8 = _DAT_018a8598;
    DAT_018a85c4 = _DAT_018a8594 - 27.5;
    _DAT_018a85d4 = 0x3e4ccccd;
    _DAT_018a85d8 = 0;
    _DAT_018a85e0 = 0;
    _DAT_018a8610 = _DAT_018a85f0;
    _DAT_018a8614 = _DAT_018a85f4;
    _DAT_018a8618 = _DAT_018a85f8;
    _DAT_018a861c = _DAT_018a85fc;
    _DAT_018a862c = _DAT_018a85fc;
    _DAT_018a8620 = _DAT_018a85f0;
    _DAT_018a8628 = _DAT_018a85f8;
    _DAT_018a8624 = _DAT_018a85f4 - 27.5;
    _DAT_018a8634 = 0x3e4ccccd;
    _DAT_018a863c = 0;
    _DAT_018a8638 = 0;
    _DAT_018a8664 = 0;
    _DAT_018a8640 = 0;
    _DAT_018a8690 = 0;
    _DAT_018a869c = 0;
    _DAT_018a8670 = _DAT_018a8650;
    _DAT_018a86c4 = 0;
    _DAT_018a86f0 = 0;
    _DAT_018a8674 = _DAT_018a8654;
    _DAT_018a86fc = 0;
    _DAT_018a8724 = 0;
    _DAT_018a8678 = _DAT_018a8658;
    _DAT_018a8750 = 0;
    _DAT_018a875c = 0;
    _DAT_018a867c = _DAT_018a865c;
    _DAT_018a8784 = 0;
    _DAT_018a868c = _DAT_018a865c;
    _DAT_018a8680 = _DAT_018a8650;
    _DAT_018a8688 = _DAT_018a8658;
    _DAT_018a8684 = _DAT_018a8654 - 27.5;
    _DAT_018a8694 = 0x3e4ccccd;
    _DAT_018a8698 = 0;
    _DAT_018a86a0 = 0;
    _DAT_018a86d0 = _DAT_018a86b0;
    _DAT_018a86d4 = _DAT_018a86b4;
    _DAT_018a86d8 = _DAT_018a86b8;
    _DAT_018a86dc = _DAT_018a86bc;
    _DAT_018a86ec = _DAT_018a86bc;
    _DAT_018a86e0 = _DAT_018a86b0;
    _DAT_018a86e8 = _DAT_018a86b8;
    _DAT_018a86e4 = _DAT_018a86b4 - 27.5;
    _DAT_018a86f4 = 0x3e4ccccd;
    _DAT_018a86f8 = 0;
    _DAT_018a8700 = 0;
    _DAT_018a8730 = _DAT_018a8710;
    _DAT_018a8734 = _DAT_018a8714;
    _DAT_018a8738 = _DAT_018a8718;
    _DAT_018a873c = _DAT_018a871c;
    _DAT_018a874c = _DAT_018a871c;
    _DAT_018a8740 = _DAT_018a8710;
    _DAT_018a8748 = _DAT_018a8718;
    _DAT_018a8744 = _DAT_018a8714 - 27.5;
    _DAT_018a8754 = 0x3e4ccccd;
    _DAT_018a8758 = 0;
    _DAT_018a8760 = 0;
    _DAT_018a8790 = _DAT_018a8770;
    _DAT_018a8794 = _DAT_018a8774;
    _DAT_018a8798 = _DAT_018a8778;
    _DAT_018a879c = _DAT_018a877c;
    _DAT_018a87ac = _DAT_018a877c;
    _DAT_018a87b0 = 0;
    _DAT_018a87bc = 0;
    _DAT_018a87a0 = _DAT_018a8770;
    _DAT_018a87e4 = 0;
    _DAT_018a8810 = 0;
    _DAT_018a87a8 = _DAT_018a8778;
    _DAT_018a881c = 0;
    _DAT_018a87a4 = _DAT_018a8774 - 27.5;
    _DAT_018a87b4 = 0x3e4ccccd;
    _DAT_018a87b8 = 0;
    _DAT_018a87c0 = 0;
    _DAT_018a87f0 = _DAT_018a87d0;
    _DAT_018a87f4 = _DAT_018a87d4;
    _DAT_018a87f8 = _DAT_018a87d8;
    _DAT_018a87fc = _DAT_018a87dc;
    _DAT_018a880c = _DAT_018a87dc;
    _DAT_018a8800 = _DAT_018a87d0;
    _DAT_018a8808 = _DAT_018a87d8;
    _DAT_018a8804 = _DAT_018a87d4 - 27.5;
    _DAT_018a8814 = 0x3e4ccccd;
    _DAT_018a8818 = 0;
    _DAT_018a8820 = 0;
    iVar9 = FUN_00da10c0();
    if (iVar9 != 4) {
      _DAT_01bea9ec = 0x3e32b8c2;
      _DAT_01bea9f0 = 0x3eb2b8c2;
      _DAT_01bea9f4 = 0x3fb2b8c2;
      FUN_00dc1300(4);
      FUN_00dc1270(0xbf800000,0);
      _DAT_01bea940 = 0;
      FUN_00da9480(0x41a00000);
    }
    break;
  case 1:
    break;
  case 2:
    goto LAB_00bedfd7;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar9 = FUN_00a94ce0(0);
    if (iVar9 != 0) {
      FUN_00dc1300(0);
      (**(code **)(*param_1 + 0x388))(0);
    }
    goto switchD_00bed7f3_default;
  case 4:
    uVar4 = FUN_00de4500("pl0010_d155.mot");
    uVar8 = FUN_00de4500("pl0010_d155_0_seq.bxm");
    FUN_00a9f180(uVar4,uVar8,&DAT_016a2998,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x318))();
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00bee55b;
  case 5:
LAB_00bee55b:
    param_1[0x249] = 0;
    fVar1 = _DAT_018a80e0;
    if (200.0 < (float)param_1[0x342]) {
      param_1[0x249] = (int)(((float)param_1[0x342] - 200.0) * 0.00125 * -0.06 * _DAT_018a80e0);
    }
    if ((float)param_1[0x342] < -200.0) {
      param_1[0x249] =
           (int)(((float)param_1[0x342] + 200.0) * -0.00125 * 0.06 * fVar1 + (float)param_1[0x249]);
    }
    fVar15 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
    FUN_00b7cf60((float)param_1[0x244] * (float)param_1[0x249],(float)fVar15);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar9 = FUN_00a8c760(0x11);
    if ((iVar9 != 0) && ((*(byte *)(param_1 + 0x33f) & 0x10) != 0)) {
      FUN_00a8cb60(4);
    }
    iVar9 = FUN_00a94ce0(0);
    if (iVar9 != 0) {
      FUN_00a8cb60(1);
      (**(code **)(*param_1 + 0x314))();
    }
  default:
    goto switchD_00bed7f3_default;
  }
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0;
  param_1[0x24e] = 0;
  FUN_00a9f560("WallRun",0,0,0);
  FUN_00a9f600(0xffffffff,0,0,0,0,0x40,0,0);
  FUN_00a9f600(0xffffffff,0,0,0x5a,0,0x45,0,0);
  FUN_00a9f600(0xffffffff,0,0,0xffffffa6,0,0x46,0,0);
  FUN_00a9f600(0xffffffff,0,1,0,0,0xe4,0,0);
  FUN_00a9f600(0xffffffff,0,1,0xffffffa6,0,0xe6,0,0);
  FUN_00a9f600(0xffffffff,0,1,0x5a,0,0xe5,0,0);
  FUN_00a96030(0,param_1[0x14f8]);
  FUN_00a95fb0(0);
  FUN_00a95f70(0);
  param_1[0x187] = param_1[0x187] + 1;
LAB_00bedfd7:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar9 = FUN_00ca5830(10);
  if (iVar9 != 0) {
    FUN_00dd5650(&DAT_016a29e4);
    EnemySetReader::requestEnd(10);
  }
  pfVar11 = (float *)&DAT_018a8558;
  local_1c4 = 0;
  do {
    if ((pfVar11[-5] == 0.0) &&
       (fVar1 = pfVar11[3], iVar9 = (**(code **)(*param_1 + 0x68))(), fVar1 <= *(float *)(iVar9 + 4)
       )) {
      fVar1 = pfVar11[-1];
      iVar9 = (**(code **)(*param_1 + 0x68))();
      if (*(float *)(iVar9 + 4) <= fVar1) {
        pfVar6 = (float *)(**(code **)(*param_1 + 0x68))();
        fVar1 = SQRT((pfVar11[-2] - *pfVar6) * (pfVar11[-2] - *pfVar6) +
                     (pfVar11[-1] - pfVar6[1]) * (pfVar11[-1] - pfVar6[1]) +
                     (*pfVar11 - pfVar6[2]) * (*pfVar11 - pfVar6[2]));
        if (((fVar1 < 5.0 != (fVar1 == 5.0)) && (pfVar11[-6] == 0.0)) &&
           ((DAT_01bea060 & 0x40000000) == 0)) {
          FUN_00dda360(0,0x3f800000,0x3f800000,10);
          FUN_00a8caf0(0xea,0,0,0);
          break;
        }
        fVar1 = pfVar11[8] - (float)param_1[0x244] * 0.016666668;
        pfVar11[8] = fVar1;
        if (fVar1 <= 0.0) {
          pfVar11[8] = pfVar11[7];
          local_1f0 = pfVar11[-2];
          local_1ec = pfVar11[-1];
          local_1e8 = *pfVar11;
          fStack_1e4 = pfVar11[1];
          if (pfVar11[6] != 0.0) {
            sVar3 = FUN_00dde2d0(0,10);
            local_1e8 = (float)(sVar3 + -5) + local_1e8;
            sVar3 = FUN_00dde2d0(0,10);
            local_1ec = (float)(sVar3 + -5) + local_1ec;
          }
          pfVar11[6] = (float)((int)pfVar11[6] + 1);
          fStack_1e0 = 0.0;
          fStack_1dc = 0.0;
          fVar15 = (float10)fpatan((float10)(float)param_1[600],(float10)(float)param_1[0x259]);
          fStack_1d8 = (float)-fVar15;
          piVar7 = (int *)FUN_00a6dd90();
          uVar4 = FUN_00e01ca0();
          uVar4 = (**(code **)(*piVar7 + 0x9c))(0x400,0,&local_1f0,&fStack_1e0,uVar4);
          FUN_00e01f60(uVar4);
          uStack_a4 = 0;
          FUN_00e5e080("r410_se_sidebldg_exp",&local_1f0,0,0xffffffff,0);
        }
      }
      else {
        pfVar11[-5] = 1.4013e-45;
      }
    }
    local_1c4 = local_1c4 + 0x60;
    pfVar11 = pfVar11 + 0x18;
  } while (local_1c4 < 0x300);
  fVar1 = (float)param_1[0x343];
  fVar2 = 0.1575;
  if (200.0 < fVar1) {
    fVar2 = 0.1575 - (fVar1 - 200.0) * 0.00125 * 0.035 * 1.05;
  }
  if (fVar1 < -200.0) {
    fVar2 = (fVar1 + 200.0) * -0.00125 * 0.05 * 1.05 + fVar2;
  }
  FUN_00b7cf60(fVar2 * (float)param_1[0x244],param_1[0x25]);
  param_1[0x249] = 0;
  if (200.0 < (float)param_1[0x342]) {
    param_1[0x249] = (int)(((float)param_1[0x342] - 200.0) * 0.00125 * -0.06 * 1.05);
  }
  if ((float)param_1[0x342] < -200.0) {
    param_1[0x249] =
         (int)(((float)param_1[0x342] + 200.0) * -0.00125 * 0.06 * 1.05 + (float)param_1[0x249]);
  }
  fVar15 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
  FUN_00b7cf60((float)param_1[0x244] * (float)param_1[0x249],(float)fVar15);
  fVar15 = (float10)0;
  fVar13 = -(float10)(float)param_1[0x343];
  if ((float10)200.0 <=
      SQRT(fVar13 * fVar13 + (float10)(float)param_1[0x342] * (float10)(float)param_1[0x342])) {
    fVar15 = (float10)fpatan((float10)(float)param_1[0x342],fVar13);
    fVar15 = fVar15 * (float10)57.29578;
    fVar13 = (float10)90.0;
    if (fVar13 < fVar15 != (fVar13 == fVar15)) {
      fVar15 = fVar13 - (fVar15 - fVar13);
    }
    if (fVar15 <= (float10)-90.0) {
      fVar15 = (float10)-90.0 - (fVar15 + fVar13);
    }
  }
  fVar13 = (float10)(float)param_1[0x24b] * (float10)0.017453292;
  fVar15 = (float10)FUN_00ddba30((float)(fVar15 * (float10)0.017453292 - fVar13));
  fVar15 = (float10)FUN_00ddba30((float)(fVar15 * (float10)0.5 + (float10)(float)fVar13));
  param_1[0x24b] = (int)(float)(fVar15 * (float10)57.29578);
  fVar13 = (float10)(float)param_1[0x343] * (float10)-0.001;
  if ((((float)param_1[0x343] <= 200.0) &&
      (fVar1 = (float)param_1[0x343], !NAN(fVar1) && -200.0 < fVar1 != (fVar1 == -200.0))) ||
     ((fVar14 = (float10)1, fVar14 < fVar13 == (fVar14 == fVar13) &&
      (fVar14 = fVar13, fVar13 <= (float10)0)))) {
    fVar14 = (float10)0;
  }
  fVar13 = (fVar14 - (float10)(float)param_1[0x24c]) * (float10)0.5;
  param_1[0x24c] = (int)(float)fVar13;
  FUN_00a947e0(0,(float)fVar13,(float)(fVar15 * (float10)57.29578 * (float10)0.5),0);
  iVar9 = FUN_00a8cab0();
  if ((iVar9 == 0xe9) && ((*(byte *)(param_1 + 0x33f) & 0x10) != 0)) {
    FUN_00a8cb60(4);
  }
switchD_00bed7f3_default:
  uVar12 = 0;
  do {
    if (0 < *(int *)((int)&DAT_018a8570 + uVar12)) {
      fVar15 = (float10)FUN_00a92ff0();
      fVar15 = fVar15 + (float10)*(float *)((int)&DAT_018a8580 + uVar12);
      *(float *)((int)&DAT_018a8580 + uVar12) = (float)fVar15;
      if (((float10)90.0 <= fVar15) && (*(int *)((int)&DAT_018a857c + uVar12) == 0)) {
        FUN_00dda360(0,0x3f800000,0x3f800000,0x14);
        *(undefined4 *)((int)&DAT_018a857c + uVar12) = 1;
      }
    }
    uVar12 = uVar12 + 0x60;
  } while (uVar12 < 0x300);
  return;
}

// 00BEE6E0  FUN_00bee6e0  size=328  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00bee6e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x439,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_00be86f0();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x21c] = 0;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    uStack_20 = 0;
    uStack_1c = 0x3f800000;
    uStack_18 = 0;
    FUN_00b893e0(&uStack_20,1);
    piVar3 = param_1 + 0x2c;
    piVar4 = &DAT_01bea560;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    D3DXMatrixInverse(&DAT_01bea5a0,0,&DAT_01bea560);
    _DAT_01bea6c0 = 0;
    FUN_00d664e0(2);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  BehaviorAppBase::thunk_vf64();
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00BEE830  FUN_00bee830  size=147  [callgraph]
void __fastcall FUN_00bee830(int param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00be8aa0();
  FUN_00b7aa80();
  DAT_01bea060 = DAT_01bea060 | 0x2000000;
  *(undefined4 *)(param_1 + 0x3e60) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3e64) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x3e68) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x3e6c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x3e70) = 0;
  *(undefined4 *)(param_1 + 0x3e74) = 0;
  *(undefined4 *)(param_1 + 0x3e78) = 0;
  FUN_00e5e0c0("core_se_btl_qte_in",param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined4 *)(param_1 + 0x1020) = 0;
  *(undefined4 *)(param_1 + 0x1024) = 0;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  return;
}

// 00BEEEF0  FUN_00beeef0  size=303  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00beeef0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x455,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_00be86f0();
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    uStack_1c = 0;
    FUN_00b893e0(&uStack_24,1);
    piVar3 = param_1 + 0x2c;
    piVar4 = &DAT_01bea560;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    D3DXMatrixInverse(&DAT_01bea5a0,0,&DAT_01bea560);
    _DAT_01bea6c0 = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
     (iVar2 = FUN_00e36060(0), iVar2 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00BF2630  lib::StaticArray<cLockOnParts,8>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<cLockOnParts,8>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cLockOnParts>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C05D50  lib::StaticArray<cQteArea,32>::StaticArray<cQteArea,32>_2  size=441  [class]
void __fastcall lib::StaticArray<cQteArea,32>::StaticArray<cQteArea,32>_2(int *param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iStack_c14;
  undefined **ppuStack_c10;
  undefined1 *puStack_c0c;
  int iStack_c08;
  undefined4 uStack_c04;
  undefined1 auStack_c00 [3072];
  
  FUN_00c15320();
  bVar3 = false;
  param_1[0x3d5] = 0;
  iVar6 = param_1[0x21c];
  iVar4 = (**(code **)(*param_1 + 0x1fc))();
  iVar1 = param_1[0x139];
  bVar2 = (byte)DAT_01bea090 & 0x10;
  iVar5 = (**(code **)(*param_1 + 0x32c))();
  if ((param_1[0x186] == 0x77) ||
     (iVar5 != 0 || (bVar2 != 0 || (iVar1 != 0 || (iVar4 != 0 || iVar6 < 1))))) {
    param_1[0x3d3] = 0;
    goto LAB_00c05eeb;
  }
  puStack_c0c = auStack_c00;
  iStack_c08 = 0;
  uStack_c04 = 0x20;
  ppuStack_c10 = vftable;
  if ((((byte)DAT_01bea090 & 0x10) == 0) &&
     (FUN_00c66140(param_1 + 0x10,param_1[0x25],0x3f800000,0x40000000,&ppuStack_c10),
     puVar7 = puStack_c0c, puStack_c0c != puStack_c0c + iStack_c08 * 0x60)) {
    do {
      iVar6 = FUN_00bf75d0(puVar7,&iStack_c14);
      if (iVar6 != 0) {
        DAT_018b56b4 = 1;
        FUN_005f5330(puVar7);
        goto LAB_00c05e78;
      }
      if (iStack_c14 != 0) {
        bVar3 = true;
      }
      puVar7 = puVar7 + 0x60;
    } while (puVar7 != puStack_c0c + iStack_c08 * 0x60);
    if (!bVar3) goto LAB_00c05eb3;
LAB_00c05e78:
    if (param_1[0x3d3] == 0) {
      param_1[0x3d5] = 1;
    }
    param_1[0x3d3] = 1;
  }
  else {
LAB_00c05eb3:
    param_1[0x3d3] = 0;
  }
  if ((iStack_c08 != 0) &&
     ((FUN_00c594f0(&ppuStack_c10), *(int *)(puStack_c0c + 0x58) != 2 || (param_1[0x186] != 0x76))))
  {
    FUN_00bc8c50(puStack_c0c);
  }
LAB_00c05eeb:
  FUN_00c59380();
  param_1[0x3d4] = 1;
  return;
}

// 00C4A710  lib::StaticArray<EntityHandle,2>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<EntityHandle,2>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<EntityHandle>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C4A800  lib::StaticArray<unsigned_int,64>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<unsigned_int,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<unsigned_int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C4CD10  lib::StaticArray<EntityHandle,2>::StaticArray<EntityHandle,2>  size=221  [class]
undefined4 * __fastcall
lib::StaticArray<EntityHandle,2>::StaticArray<EntityHandle,2>(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = PlayerManagerImplement::vftable;
  FUN_00a7c930();
  param_1[2] = 0;
  iVar2 = 4;
  do {
    Hw::cTexture::cTexture();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_00de3530();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bcf0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 2;
    *puVar1 = vftable;
  }
  param_1[0x3e] = puVar1;
  param_1[0x3d] = 1;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_00a7c950();
  FUN_00a7c950();
  return param_1;
}

// 00C4D210  FUN_00c4d210  size=115  [callgraph]
void __thiscall FUN_00c4d210(int param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != iVar1 * 0x70 + iVar2; iVar4 = iVar4 + 0x70) {
      if ((((*(byte *)(iVar4 + 8) & 1) != 0) && (iVar3 = FUN_00a81330(), iVar3 == param_2)) &&
         (*(short *)(iVar4 + 0x38) == param_3)) {
        *(undefined4 *)(iVar4 + 0x34) = param_4;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D290  FUN_00c4d290  size=89  [callgraph]
void __thiscall FUN_00c4d290(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != iVar1 * 0x70 + iVar2; iVar3 = iVar3 + 0x70) {
      if (((*(byte *)(iVar3 + 8) & 1) != 0) && (*(int *)(iVar3 + 0x40) == param_2)) {
        *(undefined4 *)(iVar3 + 0x34) = param_3;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D2F0  FUN_00c4d2f0  size=88  [callgraph]
void __fastcall FUN_00c4d2f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != iVar1 * 0x70 + iVar2; iVar3 = iVar3 + 0x70) {
      if ((*(byte *)(iVar3 + 8) & 1) != 0) {
        *(undefined1 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x50) = 0;
        *(undefined4 *)(iVar3 + 0x54) = 0;
        *(undefined4 *)(iVar3 + 0x58) = 0;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D350  FUN_00c4d350  size=89  [callgraph]
void __thiscall FUN_00c4d350(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != iVar1 * 0x70 + iVar2; iVar3 = iVar3 + 0x70) {
      if (((*(byte *)(iVar3 + 8) & 1) != 0) && (*(int *)(iVar3 + 0x40) == param_2)) {
        *(undefined4 *)(iVar3 + 0x50) = 1;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D3B0  FUN_00c4d3b0  size=89  [callgraph]
void __thiscall FUN_00c4d3b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != iVar1 * 0x70 + iVar2; iVar3 = iVar3 + 0x70) {
      if (((*(byte *)(iVar3 + 8) & 1) != 0) && (*(int *)(iVar3 + 0x40) == param_2)) {
        *(undefined4 *)(iVar3 + 0x54) = 1;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D410  FUN_00c4d410  size=92  [callgraph]
void __thiscall FUN_00c4d410(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != iVar1 * 0x70 + iVar2; iVar3 = iVar3 + 0x70) {
      if (((*(byte *)(iVar3 + 8) & 1) != 0) && (*(int *)(iVar3 + 0x40) == param_2)) {
        *(undefined1 *)(iVar3 + 0x4c) = 1;
        *(undefined4 *)(iVar3 + 0x58) = 1;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D470  FUN_00c4d470  size=111  [callgraph]
int __thiscall FUN_00c4d470(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c)) {
      if (*(int *)(param_1 + 0x30) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if (((*(byte *)(iVar1 + 8) & 1) != 0) && (*(int *)(iVar1 + 0x40) == param_2)) break;
    iVar1 = iVar1 + 0x70;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar1;
}

// 00C4D4E0  FUN_00c4d4e0  size=267  [callgraph]
void __fastcall FUN_00c4d4e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar3 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != iVar3 * 0x70 + iVar2; iVar4 = iVar4 + 0x70) {
      if ((((*(byte *)(iVar4 + 8) & 1) != 0) && (iVar1 = FUN_00a81330(), iVar1 == 0)) &&
         (iVar1 = *(int *)(iVar4 + 0x60), iVar1 != -1)) {
        FUN_00a7c950();
        *(undefined2 *)(iVar4 + 4) = 0xffff;
        *(undefined2 *)(iVar4 + 0x38) = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        if (*(int *)(iVar4 + 0x60) != -1) {
          RayCastManager::getWork(param_1 + 0x60 + iVar1 * 4);
        }
        *(undefined4 *)(iVar4 + 0x60) = 0xffffffff;
      }
    }
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 != iVar3 + *(int *)(param_1 + 0x58) * 4) {
      do {
        iVar2 = FUN_00a81330();
        if (iVar2 == 0) {
          FUN_00a7c950();
          iVar2 = iVar3 - *(int *)(param_1 + 0x50) >> 2;
          iVar3 = iVar2;
          if (iVar2 < *(int *)(param_1 + 0x58) + -1) {
            do {
              FUN_00a7c960(*(int *)(param_1 + 0x50) + iVar3 * 4 + 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x58) + -1);
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
          iVar3 = *(int *)(param_1 + 0x50) + iVar2 * 4;
        }
        else {
          iVar3 = iVar3 + 4;
        }
      } while (iVar3 != *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 4);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D5F0  FUN_00c4d5f0  size=371  [callgraph]
undefined4 __thiscall
FUN_00c4d5f0(int param_1,int *param_2,int param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  undefined4 local_3c;
  float local_20;
  float local_1c;
  float local_18;
  
  local_3c = 0;
  if (((param_3 != 0) && (*(int *)(param_1 + 0x30) != 0)) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0))
  {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    fVar1 = *(float *)(iVar10 + 0x40);
    fVar2 = *(float *)(iVar10 + 0x44);
    fVar3 = *(float *)(iVar10 + 0x48);
    iVar10 = *(int *)(param_1 + 0x44);
    iVar4 = *(int *)(param_1 + 0x3c);
    for (iVar12 = *(int *)(param_1 + 0x3c); iVar12 != iVar10 * 0x70 + iVar4; iVar12 = iVar12 + 0x70)
    {
      iVar5 = *(int *)(iVar12 + 0x30);
      if ((((((*(byte *)(iVar12 + 8) & 1) != 0) && (iVar11 = FUN_00c15010(&local_20), iVar11 != 0))
           && ((*(int *)(iVar12 + 100) != 0 &&
               ((iVar11 = FUN_00c26190(), iVar11 != 0 && ((*(byte *)(iVar12 + 8) & 4) == 0)))))) &&
          (iVar11 = FUN_00a81330(), iVar11 != param_3)) &&
         ((-2 < iVar5 &&
          (fVar6 = local_20 - fVar1, fVar9 = local_1c - fVar2, fVar8 = local_18 - fVar3,
          fVar7 = *(float *)(iVar12 + 0x10) + param_6,
          fVar8 * fVar8 + fVar9 * fVar9 + fVar6 * fVar6 < fVar7 * fVar7)))) {
        fVar13 = (float10)FUN_009f8c60(&local_20);
        fVar13 = (float10)FUN_00ddba30((float)(fVar13 - (float10)param_4));
        if (ABS(fVar13) < (float10)param_5 != (ABS(fVar13) == (float10)param_5)) {
          (**(code **)(*param_2 + 8))(iVar12);
          local_3c = 1;
        }
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    return local_3c;
  }
  return 0;
}

// 00C4D770  FUN_00c4d770  size=380  [callgraph]
undefined4 __thiscall
FUN_00c4d770(int param_1,int param_2,int param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 local_40;
  undefined1 local_34 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_40 = 0;
  if (((param_3 != 0) && (*(int *)(param_1 + 0x30) != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    local_30 = *(float *)(iVar4 + 0x40);
    local_2c = *(float *)(iVar4 + 0x44);
    local_28 = *(float *)(iVar4 + 0x48);
    *(undefined4 *)(param_2 + 0xc) = 0;
    iVar4 = *(int *)(param_1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x3c);
    for (iVar6 = *(int *)(param_1 + 0x3c); iVar6 != iVar4 * 0x70 + iVar1; iVar6 = iVar6 + 0x70) {
      iVar2 = *(int *)(iVar6 + 0x30);
      if ((((((*(byte *)(iVar6 + 8) & 1) != 0) && (iVar5 = FUN_00c15010(&local_20), iVar5 != 0)) &&
           ((*(int *)(iVar6 + 100) != 0 &&
            ((iVar5 = FUN_00c26190(), iVar5 != 0 && ((*(byte *)(iVar6 + 8) & 4) == 0)))))) &&
          (iVar5 = FUN_00a81330(), iVar5 != param_3)) &&
         ((-2 < iVar2 &&
          (fVar3 = *(float *)(iVar6 + 0x10) + param_6,
          (local_18 - local_28) * (local_18 - local_28) +
          (local_1c - local_2c) * (local_1c - local_2c) +
          (local_20 - local_30) * (local_20 - local_30) < fVar3 * fVar3)))) {
        fVar7 = (float10)FUN_009f8c60(&local_20);
        fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)param_4));
        if (ABS(fVar7) < (float10)param_5 != (ABS(fVar7) == (float10)param_5)) {
          FUN_00c4add0(local_34,iVar6);
          local_40 = 1;
        }
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    return local_40;
  }
  return 0;
}

// 00C4D900  lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_14  size=148  [class]
uint lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_14(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint local_48;
  int local_40 [16];
  
  iVar4 = *(int *)(param_1 + 4);
  local_48 = 0;
  iVar5 = *(int *)(param_1 + 8) * 0x70 + iVar4;
  do {
    if (iVar4 == iVar5) {
      return local_48;
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      piVar1 = local_40 + local_48;
      for (piVar3 = local_40; piVar3 != piVar1; piVar3 = piVar3 + 1) {
        if (*piVar3 == iVar2) goto LAB_00c4d97f;
      }
      if ((local_40 != (int *)0x0) && (local_48 < 0x10)) {
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar2;
        }
        local_48 = local_48 + 1;
      }
    }
LAB_00c4d97f:
    iVar4 = iVar4 + 0x70;
  } while( true );
}

// 00C4D9A0  FUN_00c4d9a0  size=582  [between]
int __thiscall FUN_00c4d9a0(int param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  LPCRITICAL_SECTION local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      local_74 = (LPCRITICAL_SECTION)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x30) != 0) {
        EnterCriticalSection(local_74);
      }
      FUN_00a8d230(&local_60);
      local_78 = *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c);
      iVar2 = *(int *)(param_1 + 0x3c);
      local_84 = 0;
      if (iVar2 != local_78) {
        do {
          if ((*(byte *)(iVar2 + 8) & 1) != 0) {
            iVar3 = FUN_00c15010(&local_70);
            if ((iVar3 != 0) && (*(int *)(iVar2 + 100) != 0)) {
              iVar3 = FUN_00c26190();
              if ((iVar3 != 0) && ((*(byte *)(iVar2 + 8) & 4) == 0)) {
                iVar3 = FUN_00a81330();
                if ((iVar3 != param_2) &&
                   (fVar1 = *(float *)(iVar2 + 0x10) + param_3,
                   (local_68 - local_58) * (local_68 - local_58) +
                   (local_6c - local_5c) * (local_6c - local_5c) +
                   (local_70 - local_60) * (local_70 - local_60) < fVar1 * fVar1)) {
                  local_80 = 0;
                  local_7c = 0;
                  iVar3 = FUN_00d466f0();
                  if (iVar3 == 0) {
                    FUN_00a7c8a0();
                    puVar4 = (undefined4 *)FUN_009f8b60();
                    pcVar10 = "LockCheck";
                    uVar5 = FUN_00410130(0x1e,*puVar4,0,0,0,"LockCheck");
                    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_4
                                      (0,0,&local_80,&local_7c,&local_60,&local_70,uVar5,pcVar10);
                  }
                  else {
                    FUN_00a7c8a0();
                    puVar4 = (undefined4 *)FUN_009f8b60();
                    uVar11 = 0;
                    pcVar10 = "LockCheck";
                    uVar9 = 0;
                    uVar8 = 8;
                    uVar7 = 0;
                    uVar5 = FUN_00410130(0x1e,*puVar4,0,0,0,0,8,0,"LockCheck",0);
                    FUN_00445d40(&local_60,&local_70,uVar5,uVar7,uVar8,uVar9,pcVar10,uVar11);
                    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2
                                      (0,0,&local_80,&local_7c,local_50);
                  }
                  if (iVar3 == 0) {
LAB_00c4dbb6:
                    local_84 = local_84 + 1;
                  }
                  else {
                    if (local_80 != 0) {
                      iVar3 = FUN_008f7780(local_80);
                      iVar6 = FUN_00a81330();
                      if (iVar6 != 0) {
                        FUN_00a81330();
                        iVar6 = FUN_00a7c8a0();
                        if (iVar3 == iVar6) {
                          local_84 = local_84 + 1;
                        }
                      }
                    }
                    if (local_7c != 0) {
                      iVar3 = FUN_008f7780(local_7c);
                      iVar6 = FUN_00a81330();
                      if (iVar6 != 0) {
                        FUN_00a81330();
                        iVar6 = FUN_00a7c8a0();
                        if (iVar3 == iVar6) goto LAB_00c4dbb6;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar2 = iVar2 + 0x70;
        } while (iVar2 != local_78);
      }
      if (local_74[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(local_74);
      }
      return local_84;
    }
  }
  return 0;
}

// 00C4DBF0  FUN_00c4dbf0  size=570  [between]
int __thiscall FUN_00c4dbf0(int param_1,float *param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  LPCRITICAL_SECTION local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  if ((param_3 == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  local_64 = lpCriticalSection;
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_68 = *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c);
  iVar6 = *(int *)(param_1 + 0x3c);
  local_74 = 0;
  if (iVar6 != local_68) {
    do {
      if (((((*(byte *)(iVar6 + 8) & 1) != 0) && (iVar2 = FUN_00c15010(&local_60), iVar2 != 0)) &&
          (*(int *)(iVar6 + 100) != 0)) &&
         (((iVar2 = FUN_00c26190(), iVar2 != 0 && ((*(byte *)(iVar6 + 8) & 4) == 0)) &&
          ((iVar2 = FUN_00a81330(), iVar2 != param_3 &&
           (fVar1 = *(float *)(iVar6 + 0x10) + param_4,
           (local_58 - param_2[2]) * (local_58 - param_2[2]) +
           (local_5c - param_2[1]) * (local_5c - param_2[1]) +
           (local_60 - *param_2) * (local_60 - *param_2) < fVar1 * fVar1)))))) {
        local_70 = 0;
        local_6c = 0;
        iVar2 = FUN_00d466f0();
        if (iVar2 == 0) {
          FUN_00a7c8a0();
          puVar3 = (undefined4 *)FUN_009f8b60();
          pcVar10 = "LockCheck";
          uVar4 = FUN_00410130(0x1e,*puVar3,0,0,0,"LockCheck");
          iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                            (0,0,&local_70,&local_6c,param_2,&local_60,uVar4,pcVar10);
        }
        else {
          FUN_00a7c8a0();
          puVar3 = (undefined4 *)FUN_009f8b60();
          uVar11 = 0;
          pcVar10 = "LockCheck";
          uVar9 = 0;
          uVar8 = 8;
          uVar7 = 0;
          uVar4 = FUN_00410130(0x1e,*puVar3,0,0,0,0,8,0,"LockCheck",0);
          FUN_00445d40(param_2,&local_60,uVar4,uVar7,uVar8,uVar9,pcVar10,uVar11);
          iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(0,0,&local_70,&local_6c,local_50);
        }
        if (iVar2 == 0) {
LAB_00c4ddfc:
          local_74 = local_74 + 1;
        }
        else {
          if (local_70 != 0) {
            iVar2 = FUN_008f7780(local_70);
            iVar5 = FUN_00a81330();
            if (iVar5 != 0) {
              FUN_00a81330();
              iVar5 = FUN_00a7c8a0();
              if (iVar2 == iVar5) {
                local_74 = local_74 + 1;
              }
            }
          }
          if (local_6c != 0) {
            iVar2 = FUN_008f7780(local_6c);
            iVar5 = FUN_00a81330();
            if (iVar5 != 0) {
              FUN_00a81330();
              iVar5 = FUN_00a7c8a0();
              if (iVar2 == iVar5) goto LAB_00c4ddfc;
            }
          }
        }
      }
      iVar6 = iVar6 + 0x70;
      lpCriticalSection = local_64;
    } while (iVar6 != local_68);
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return local_74;
}

// 00C4DE30  FUN_00c4de30  size=322  [between]
undefined4 __thiscall FUN_00c4de30(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    FUN_00a8d230(&local_20);
    iVar3 = *(int *)(param_1 + 0x44);
    local_3c = 250000.0;
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar5 = 0;
    for (iVar6 = *(int *)(param_1 + 0x3c); iVar6 != iVar3 * 0x70 + iVar1; iVar6 = iVar6 + 0x70) {
      if (((((*(byte *)(iVar6 + 8) & 1) != 0) && (iVar4 = FUN_00c15010(&local_30), iVar4 != 0)) &&
          ((*(int *)(iVar6 + 100) != 0 &&
           ((iVar4 = FUN_00c26190(), iVar4 != 0 && ((*(byte *)(iVar6 + 8) & 4) == 0)))))) &&
         (iVar4 = FUN_00a81330(), iVar4 != param_2)) {
        FUN_00a81330();
        iVar4 = FUN_00a7c8a0();
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x4e4) == 0)) &&
           (fVar2 = (local_30 - local_20) * (local_30 - local_20) +
                    (local_2c - local_1c) * (local_2c - local_1c) +
                    (local_28 - local_18) * (local_28 - local_18), fVar2 < local_3c)) {
          uVar5 = FUN_00a81330();
          local_3c = fVar2;
        }
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    return uVar5;
  }
  return 0;
}

// 00C4DF80  FUN_00c4df80  size=681  [between]
int __thiscall FUN_00c4df80(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 uVar17;
  int local_c8;
  float local_bc;
  int local_b8;
  float local_b4;
  int local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  int local_78;
  LPCRITICAL_SECTION local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  if (((param_2 == 0) || (*(int *)(param_1 + 0x30) == 0)) || (iVar7 = FUN_00a7c8a0(), iVar7 == 0)) {
    return 0;
  }
  local_74 = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(local_74);
  }
  local_bc = param_3 * param_3;
  fVar1 = *(float *)(iVar7 + 0x40);
  fVar2 = *(float *)(iVar7 + 0x44);
  local_c8 = 0;
  fVar3 = *(float *)(iVar7 + 0x48);
  local_b8 = 0;
  iVar12 = *(int *)(param_1 + 0x3c);
  local_70 = *(undefined4 *)(iVar7 + 0x40);
  local_68 = *(undefined4 *)(iVar7 + 0x48);
  local_64 = *(undefined4 *)(iVar7 + 0x4c);
  local_6c = *(float *)(iVar7 + 0x44) + 0.8;
  local_b4 = local_bc;
  if (iVar12 != *(int *)(param_1 + 0x44) * 0x70 + iVar12) {
    do {
      if (((((*(byte *)(iVar12 + 8) & 1) != 0) && (iVar7 = FUN_00c15010(&local_90), iVar7 != 0)) &&
          ((*(int *)(iVar12 + 100) != 0 &&
           ((iVar7 = FUN_00c26190(), iVar7 != 0 && ((*(byte *)(iVar12 + 8) & 4) == 0)))))) &&
         (iVar7 = FUN_00a81330(), param_2 != iVar7)) {
        FUN_00a81330();
        piVar8 = (int *)FUN_00a7c8a0();
        uVar17 = 0;
        pcVar16 = "Xcombo";
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar9 = FUN_009f8b40(0,0,0,0,0,0,"Xcombo",0);
        uVar9 = FUN_00410130(6,uVar9);
        FUN_00445d40(&local_70,&local_90,uVar9,uVar13,uVar14,uVar15,pcVar16,uVar17);
        iVar7 = RayCastSingleHitWork::RayCastSingleHitWork_2
                          (local_60,0,&local_94,&local_78,local_50);
        if ((iVar7 != 0) &&
           (((local_94 != 0 && (piVar10 = (int *)FUN_008f7780(local_94), piVar10 == piVar8)) ||
            ((local_78 != 0 && (piVar10 = (int *)FUN_008f7780(local_78), piVar10 == piVar8)))))) {
          iVar7 = 0;
        }
        if ((piVar8 != (int *)0x0) && (piVar8[0x139] == 0)) {
          iVar11 = (**(code **)(*piVar8 + 500))();
          if ((iVar11 != 0) &&
             ((iVar7 == 0 &&
              (fVar4 = local_90 - fVar1, fVar6 = fStack_8c - fVar2, fVar5 = fStack_88 - fVar3,
              fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4, fVar4 < local_b4)))) {
            local_c8 = iVar12;
            local_b4 = fVar4;
          }
          if (((piVar8[0x139] == 0) && (iVar7 == 0)) &&
             (fVar4 = local_90 - fVar1, fVar6 = fStack_8c - fVar2, fVar5 = fStack_88 - fVar3,
             fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4, fVar4 < local_bc)) {
            local_bc = fVar4;
            local_b8 = iVar12;
          }
        }
      }
      iVar12 = iVar12 + 0x70;
    } while (iVar12 != *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c));
    if (local_c8 != 0) goto LAB_00c4e20b;
  }
  local_c8 = local_b8;
LAB_00c4e20b:
  if (local_74[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(local_74);
  }
  return local_c8;
}

// 00C4E230  FUN_00c4e230  size=912  [between]
int __thiscall FUN_00c4e230(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float10 fVar11;
  char *pcVar12;
  int iStack_c8;
  float fStack_c4;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0 [4];
  LPCRITICAL_SECTION p_Stack_90;
  float fStack_8c;
  float fStack_88;
  LPCRITICAL_SECTION local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_4c;
  float fStack_44;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  float fStack_28;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
    local_84 = (LPCRITICAL_SECTION)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection(local_84);
    }
    local_b8 = param_3 * param_3;
    local_bc = 0.0;
    local_40 = *(undefined4 *)(iVar6 + 0x40);
    local_38 = *(undefined4 *)(iVar6 + 0x48);
    FUN_00a8d230(&local_b0);
    local_a0[0] = 0.0;
    local_a0[1] = 1.0;
    local_a0[2] = 1.2;
    D3DXVec3TransformNormal(local_a0,local_a0,iVar6 + 0x10);
    fVar1 = fStack_ac + local_bc;
    iVar6 = *(int *)(param_1 + 0x3c);
    fVar2 = fStack_a8 + local_b8;
    fVar3 = fStack_b4 + fStack_a4;
    fVar4 = local_a0[0] + local_b0;
    if (iVar6 != *(int *)(param_1 + 0x44) * 0x70 + iVar6) {
      do {
        if (((((*(byte *)(iVar6 + 8) & 1) != 0) && (iVar7 = FUN_00c15010(&fStack_8c), iVar7 != 0))
            && ((*(int *)(iVar6 + 100) != 0 &&
                ((iVar7 = FUN_00c26190(), iVar7 != 0 && ((*(byte *)(iVar6 + 8) & 4) == 0)))))) &&
           (iVar7 = FUN_00a81330(), param_2 != iVar7)) {
          FUN_00a81330();
          piVar8 = (int *)FUN_00a7c8a0();
          fStack_28 = (float)piVar8[0x11];
          fVar5 = ((float)local_84 - fStack_44) * ((float)local_84 - fStack_44) +
                  (fStack_8c - fStack_4c) * (fStack_8c - fStack_4c);
          if ((((piVar8[0x139] == 0) && (iVar7 = (**(code **)(*piVar8 + 0x13c))(), iVar7 != 0)) &&
              (fVar5 < fStack_c4)) &&
             (fVar11 = (float10)(**(code **)(*piVar8 + 0x148))(),
             (float10)fStack_28 < (float10)fVar2 - fVar11)) {
            puVar9 = (undefined4 *)FUN_009f8b60();
            fStack_6c = fVar1 - local_bc;
            pcVar12 = "isDiveKill AHEAD";
            fStack_68 = fVar2 - local_b8;
            fStack_64 = fVar3 - fStack_b4;
            fStack_60 = fVar4 - local_b0;
            uVar10 = FUN_00410130(6,*puVar9,0,0,0,"isDiveKill AHEAD");
            iVar7 = FUN_0090eea0(0,auStack_3c,&local_bc,0x3f000000,&fStack_6c,uVar10,pcVar12);
            if (iVar7 == 0) {
              puVar9 = (undefined4 *)FUN_009f8b60();
              fStack_7c = fStack_8c - fVar1;
              pcVar12 = "isDiveKill DOWN";
              fStack_78 = fStack_88 - fVar2;
              fStack_74 = (float)local_84 - fVar3;
              fStack_70 = fStack_80 - fVar4;
              uVar10 = FUN_00410130(6,*puVar9,0,0,0,"isDiveKill DOWN");
              iVar7 = FUN_0090eea0(0,auStack_3c,&stack0xffffff24,0x3f000000,&fStack_7c,uVar10,
                                   pcVar12);
              if (iVar7 == 0) {
                puVar9 = (undefined4 *)FUN_009f8b60();
                uStack_5c = 0;
                pcVar12 = "isDiveKill HEAD";
                uStack_58 = 0x40800000;
                uStack_54 = 0;
                uVar10 = FUN_00410130(6,*puVar9,0,0,0,"isDiveKill HEAD");
                iVar7 = FUN_0090eea0(0,auStack_3c,&fStack_8c,0x3f000000,&uStack_5c,uVar10,pcVar12);
                if (iVar7 == 0) {
                  iStack_c8 = iVar6;
                  fStack_c4 = fVar5;
                }
              }
            }
          }
        }
        iVar6 = iVar6 + 0x70;
      } while (iVar6 != *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c));
    }
    if (p_Stack_90[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(p_Stack_90);
    }
    return iStack_c8;
  }
  return 0;
}

// 00C4E5D0  FUN_00c4e5d0  size=312  [between]
undefined4 __thiscall FUN_00c4e5d0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    FUN_00a8d230(&local_20);
    iVar3 = *(int *)(param_1 + 0x44);
    local_3c = 250000.0;
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar5 = 0;
    for (iVar6 = *(int *)(param_1 + 0x3c); iVar6 != iVar3 * 0x70 + iVar1; iVar6 = iVar6 + 0x70) {
      if ((((*(byte *)(iVar6 + 8) & 1) != 0) && (iVar4 = FUN_00c15010(&local_30), iVar4 != 0)) &&
         ((iVar4 = FUN_00c26190(), iVar4 != 0 &&
          (((*(byte *)(iVar6 + 8) & 4) == 0 && (iVar4 = FUN_00a81330(), iVar4 != param_2)))))) {
        FUN_00a81330();
        iVar4 = FUN_00a7c8a0();
        if ((iVar4 != 0) &&
           ((*(int *)(iVar4 + 0x4e4) == 0 &&
            (fVar2 = (local_30 - local_20) * (local_30 - local_20) +
                     (local_2c - local_1c) * (local_2c - local_1c) +
                     (local_28 - local_18) * (local_28 - local_18), fVar2 < local_3c)))) {
          uVar5 = FUN_00a81330();
          local_3c = fVar2;
        }
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    return uVar5;
  }
  return 0;
}

// 00C4E710  FUN_00c4e710  size=267  [between]
int __thiscall FUN_00c4e710(int param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    local_28 = 250000.0;
    iVar4 = 0;
    if (iVar2 != *(int *)(param_1 + 0x44) * 0x70 + iVar2) {
      do {
        if ((((((*(byte *)(iVar2 + 8) & 1) != 0) && (iVar3 = FUN_00c15010(&local_20), iVar3 != 0))
             && ((*(int *)(iVar2 + 100) != 0 &&
                 ((iVar3 = FUN_00c26190(), iVar3 != 0 && ((*(byte *)(iVar2 + 8) & 4) == 0)))))) &&
            (iVar3 = FUN_00a81330(), param_2 == iVar3)) &&
           (fVar1 = (local_20 - *param_3) * (local_20 - *param_3) +
                    (local_1c - param_3[1]) * (local_1c - param_3[1]) +
                    (local_18 - param_3[2]) * (local_18 - param_3[2]), fVar1 < local_28)) {
          iVar4 = iVar2;
          local_28 = fVar1;
        }
        iVar2 = iVar2 + 0x70;
      } while (iVar2 != *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    return iVar4;
  }
  return 0;
}

// 00C4E820  FUN_00c4e820  size=82  [between]
void __thiscall FUN_00c4e820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x3c);
  for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != iVar1 * 0x70 + iVar2; iVar3 = iVar3 + 0x70) {
    if (((*(byte *)(iVar3 + 8) & 1) != 0) && (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8))) {
      if (*(int *)(param_2 + 0xc) * 0x70 + *(int *)(param_2 + 4) != 0) {
        FUN_008a50c0(iVar3);
      }
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
  }
  return;
}

// 00C4E880  FUN_00c4e880  size=104  [between]
void __thiscall FUN_00c4e880(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_3 + 0xc) = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != iVar1 * 0x70 + iVar2; iVar4 = iVar4 + 0x70) {
      if ((((*(byte *)(iVar4 + 8) & 1) != 0) && (iVar3 = FUN_00a81330(), iVar3 == param_2)) &&
         (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8))) {
        if (*(int *)(param_3 + 0xc) * 0x70 + *(int *)(param_3 + 4) != 0) {
          FUN_008a50c0(iVar4);
        }
        *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
      }
    }
  }
  return;
}

// 00C4E8F0  FUN_00c4e8f0  size=844  [between]
int __thiscall FUN_00c4e8f0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int local_6c;
  int local_68;
  float local_64;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_6c = 0;
  if (*(int *)(param_1 + 0x44) == 1) {
    iVar9 = *(int *)(param_1 + 0x3c);
    iVar8 = FUN_00a81330();
    if (iVar8 == param_3) {
      return iVar9;
    }
  }
  else {
    iVar9 = FUN_00f98a90();
    fVar1 = (float)iVar9 * 0.5;
    iVar9 = FUN_00f98a90();
    fVar2 = (float)iVar9 * 0.5;
    iVar9 = FUN_00f98a90();
    fVar3 = (float)iVar9 * 0.5;
    iVar9 = FUN_00f98aa0();
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    fVar4 = (float)iVar9 * 0.5;
    local_18 = 0;
    local_14 = 0;
    uVar10 = FUN_00a1d5c0();
    FUN_004b7c50(0x40,uVar10);
    FUN_00c4e880(param_3,&local_24);
    iVar8 = *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c);
    bVar5 = false;
    for (iVar9 = *(int *)(param_1 + 0x3c); iVar9 != iVar8; iVar9 = iVar9 + 0x70) {
      if ((((*(byte *)(iVar9 + 8) & 1) != 0) && (*(int *)(iVar9 + 0x34) != 0)) &&
         (iVar11 = FUN_00a81330(), iVar11 == param_3)) {
        *(undefined2 *)(iVar9 + 0xe) = 0;
        FUN_00c15010(&local_40);
        FUN_00d9fa80(&local_50,&local_40);
        if (((1.0 < local_44) && (fVar3 - fVar1 < local_50)) &&
           ((local_50 < fVar1 + fVar3 && ((fVar4 - fVar2 < local_4c && (local_4c < fVar2 + fVar4))))
           )) {
          *(ushort *)(iVar9 + 0xe) = *(ushort *)(iVar9 + 0xe) | 1;
          bVar5 = true;
        }
      }
    }
    local_68 = -1;
    if (bVar5) {
      iVar9 = *(int *)(param_1 + 0x3c);
      local_64 = 1e+06;
      iVar11 = local_6c;
      iVar6 = local_68;
      fVar7 = local_64;
      for (; local_6c = iVar11, iVar9 != iVar8; iVar9 = iVar9 + 0x70) {
        local_68 = iVar6;
        local_64 = fVar7;
        if (((((*(byte *)(iVar9 + 8) & 1) != 0) && (*(int *)(iVar9 + 100) != 0)) &&
            (iVar12 = FUN_00c26190(), iVar12 != 0)) &&
           (((*(byte *)(iVar9 + 8) & 4) == 0 && (iVar12 = FUN_00a81330(), iVar12 == param_3)))) {
          FUN_00c15010(&local_50);
          FUN_00d9fa80(&local_40,&local_50);
          if (1.0 < local_34) {
            if (fVar3 - fVar1 < local_40) {
              if (fVar1 + fVar3 <= local_40) goto LAB_00c4ec0a;
              if (fVar4 - fVar2 < local_3c) {
                if (fVar2 + fVar4 <= local_3c) goto LAB_00c4ec0a;
                local_68 = *(int *)(iVar9 + 0x30);
                local_64 = (param_2[2] - local_48) * (param_2[2] - local_48) +
                           (param_2[1] - local_4c) * (param_2[1] - local_4c) +
                           (*param_2 - local_50) * (*param_2 - local_50);
                if (((*(byte *)(iVar9 + 8) & 1) != 0) &&
                   (local_64 < *(float *)(iVar9 + 0x3c) * *(float *)(iVar9 + 0x3c))) {
                  local_68 = local_68 + *(short *)(iVar9 + 0x3a);
                }
                if (iVar6 <= local_68) {
                  bVar5 = false;
                  if ((iVar6 < local_68) && ((*(byte *)(iVar9 + 0xe) & 1) != 0)) {
                    bVar5 = true;
                  }
                  local_6c = iVar9;
                  if ((local_64 < fVar7) || (bVar5)) goto LAB_00c4ec0a;
                }
              }
            }
            local_6c = iVar11;
            local_68 = iVar6;
            local_64 = fVar7;
          }
        }
LAB_00c4ec0a:
        iVar11 = local_6c;
        iVar6 = local_68;
        fVar7 = local_64;
      }
    }
    if ((local_20 != 0) && (local_14 != 0)) {
      FUN_00dd48d0(local_20,0);
    }
  }
  return local_6c;
}

// 00C4EC80  FUN_00c4ec80  size=62  [between]
int __fastcall FUN_00c4ec80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar1 = 0;
  iVar4 = 0;
  if (iVar2 != iVar3) {
    do {
      if ((*(byte *)(iVar2 + 8) & 1) != 0) {
        if (*(int *)(iVar2 + 0x50) != 0) {
          iVar1 = iVar2;
        }
        if (*(int *)(iVar2 + 0x54) != 0) {
          iVar4 = iVar2;
        }
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != iVar3);
    if ((iVar1 == 0) && (iVar4 != 0)) {
      iVar1 = iVar4;
    }
  }
  return iVar1;
}

// 00C4ECF0  FUN_00c4ecf0  size=102  [between]
void __fastcall FUN_00c4ecf0(undefined4 *param_1)

{
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_00dd7270();
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

// 00C4ED60  FUN_00c4ed60  size=102  [between]
void __fastcall FUN_00c4ed60(undefined4 *param_1)

{
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_00dd7270();
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

// 00C4EDD0  FUN_00c4edd0  size=147  [between]
int __thiscall FUN_00c4edd0(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x38)) {
      FUN_005f5800(param_2);
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 < *(int *)(param_1 + 0x38)) {
        if (iVar1 * 0x60 + *(int *)(param_1 + 0x34) != 0) {
          FUN_005f5800(param_2);
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
      iVar2 = *(int *)(param_1 + 0x34);
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return iVar1 * 0x60 + iVar2;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 00C4F000  FUN_00c4f000  size=99  [between]
void __thiscall FUN_00c4f000(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 != *(int *)(param_1 + 0x3c) * 0x60 + iVar1) {
      do {
        if (*(int *)(iVar1 + 0x54) == param_2) {
          *(undefined4 *)(iVar1 + 0x50) = param_3;
        }
        iVar1 = iVar1 + 0x60;
      } while (iVar1 != *(int *)(param_1 + 0x3c) * 0x60 + *(int *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00C4F070  FUN_00c4f070  size=128  [between]
void __fastcall FUN_00c4f070(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    iVar3 = *(int *)(param_1 + 0x34);
    local_8 = iVar3;
    if (iVar3 != *(int *)(param_1 + 0x3c) * 0x60 + iVar3) {
      do {
        local_8 = iVar3;
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          piVar2 = (int *)FUN_00c4b000(local_4,&local_8);
          iVar3 = *piVar2;
        }
        else {
          iVar3 = iVar3 + 0x60;
        }
        local_8 = iVar3;
      } while (iVar3 != *(int *)(param_1 + 0x3c) * 0x60 + *(int *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00C4F0F0  FUN_00c4f0f0  size=172  [between]
undefined4 __thiscall
FUN_00c4f0f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != *(int *)(param_1 + 0x3c) * 0x60 + iVar2) {
    do {
      iVar1 = FUN_00c262a0(param_2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        FUN_005f5330(iVar2);
        if (*(int *)(param_1 + 0x28) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        return 1;
      }
      iVar2 = iVar2 + 0x60;
    } while (iVar2 != *(int *)(param_1 + 0x3c) * 0x60 + *(int *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00C4F210  FUN_00c4f210  size=164  [between]
void __fastcall FUN_00c4f210(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00dd7240();
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = FUN_00dd29b0(0x60c,0x20,0,0);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x80;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(int *)(param_1 + 0x40) = iVar1 + 0x600;
      FUN_00c3fc80();
    }
  }
  puVar3 = &DAT_016a6ca0;
  *(undefined4 *)(param_1 + 0x44) = 0x41f00000;
  puVar2 = (undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0x42b40000;
  do {
    FUN_00a7c950();
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 2;
  } while ((int)puVar3 < 0x16a6cb4);
  puVar2 = (undefined4 *)(param_1 + 0x7c);
  iVar1 = 0x10;
  do {
    *puVar2 = 0xbf800000;
    puVar2[-1] = 0;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C4F2C0  FUN_00c4f2c0  size=112  [between]
void __fastcall FUN_00c4f2c0(int param_1)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}

// 00C4F330  FUN_00c4f330  size=653  [between]
void FUN_00c4f330(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  
  iVar5 = param_1;
  if (0x1f < param_2) {
    return;
  }
  puVar1 = &DAT_01c78cd0 + param_2 * 0x7170;
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  if (puVar1 + param_3 * 0x660 + 0x40 == (undefined *)0x0) {
    return;
  }
  if (puVar1 + param_3 * 0x660 + 0x40 == (undefined *)0xffffffd0) {
    return;
  }
  iVar6 = FUN_00a81330();
  param_1 = 0;
  if (iVar6 != 0) {
    param_1 = FUN_00a7c8a0();
  }
  if (((((*(char *)(iVar5 + 0x24) != '\0') ||
        ((*(uint *)(iVar5 + 100 + (param_2 * 0x10 + param_3) * 4) & 0x8000) == 0)) &&
       (puVar1 != (undefined *)0x0)) &&
      ((iVar6 = FUN_00c9ea70(param_3), iVar6 != 0 && (iVar6 = FUN_00a7c7e0(), iVar6 != 0)))) &&
     ((piVar7 = (int *)FUN_00a7c8a0(), piVar7 == (int *)0x0 ||
      (iVar6 = FUN_00c41910(param_1,piVar7,iVar5), iVar6 != 0)))) {
    bVar3 = true;
    bVar4 = false;
    if ((*(int *)(iVar5 + 0x1c) != 0) &&
       (bVar3 = true, bVar4 = true, *(int *)(iVar5 + 0x1c) != piVar7[0x203])) {
      bVar3 = false;
      bVar4 = false;
    }
    if (-2 < *(int *)(iVar5 + 0x18)) {
      if (*(int *)(iVar5 + 0x18) != -1) goto LAB_00c4f496;
      bVar4 = true;
    }
    if (bVar3) {
      iVar6 = (**(code **)(*piVar7 + 0x268))(param_1,*(undefined4 *)(iVar5 + 0x5c),iVar5 + 0x28);
      if (iVar6 != 0) {
        iVar6 = param_2 * 0x10 + param_3;
        puVar2 = (uint *)(iVar5 + 100 + iVar6 * 4);
        if ((*(uint *)(iVar5 + 100 + iVar6 * 4) & 0x8000) == 0) {
          *puVar2 = *puVar2 | 0x8000;
          *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
        }
        if ((0 < *(int *)(iVar5 + 0xc)) && (*(int *)(iVar5 + 0xc) <= *(int *)(iVar5 + 0x60))) {
          return;
        }
      }
      if (bVar4) {
        return;
      }
    }
  }
LAB_00c4f496:
  uVar8 = 0;
  do {
    if ((((*(char *)(iVar5 + 0x24) != '\0') ||
         ((*(uint *)(iVar5 + 100 + (param_2 * 0x10 + (uVar8 >> 5) + param_3) * 4) &
          0x80000000U >> ((byte)uVar8 & 0x1f)) == 0)) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
       (((iVar6 = FUN_00a7c7e0(), iVar6 != 0 &&
         (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) &&
        (iVar6 = FUN_00c41910(param_1,piVar7,iVar5), iVar6 != 0)))) {
      bVar3 = false;
      if (*(int *)(iVar5 + 0x1c) != 0) {
        if (*(int *)(iVar5 + 0x1c) != piVar7[0x203]) goto LAB_00c4f5a4;
        bVar3 = true;
      }
      if (-1 < (int)*(uint *)(iVar5 + 0x18)) {
        if (*(uint *)(iVar5 + 0x18) != uVar8) goto LAB_00c4f5a4;
        bVar3 = true;
      }
      iVar6 = (**(code **)(*piVar7 + 0x268))(param_1,*(undefined4 *)(iVar5 + 0x5c),iVar5 + 0x28);
      if (iVar6 != 0) {
        uVar9 = 0x80000000 >> ((byte)uVar8 & 0x1f);
        if ((*(uint *)(iVar5 + 100 + ((uVar8 >> 5) + param_2 * 0x10 + param_3) * 4) & uVar9) == 0) {
          puVar2 = (uint *)(iVar5 + 100 + (param_2 * 0x10 + param_3) * 4 + (uVar8 >> 5) * 4);
          *puVar2 = *puVar2 | uVar9;
          *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
        }
        if ((0 < *(int *)(iVar5 + 0xc)) && (*(int *)(iVar5 + 0xc) <= *(int *)(iVar5 + 0x60))) {
          return;
        }
      }
      if (bVar3) {
        return;
      }
    }
LAB_00c4f5a4:
    uVar8 = uVar8 + 1;
    if (0xf < uVar8) {
      return;
    }
  } while( true );
}

// 00C4F5C0  FUN_00c4f5c0  size=130  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c4f5c0(void)

{
  float10 fVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  float10 fVar7;
  undefined *puVar8;
  
  switch(DAT_01be9f9c) {
  case 1:
    if ((((((DAT_01bea064 & 0x40000000) != 0) || (iVar3 = FUN_00416910(0x24), iVar3 != 0)) ||
         (DAT_01be8e44 != 2)) ||
        ((DAT_01be9f94 != -1 || (iVar3 = FUN_00eb4300(0xffffffff), iVar3 != 0)))) ||
       (iVar3 = FUN_00cc0bd0(), iVar3 != 0)) {
      return;
    }
    iVar3 = FUN_00d4f150();
    if (iVar3 != 0) {
      iVar3 = FUN_009c57f0();
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_009c5800();
      uVar5 = DAT_01be8e4c;
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_00eb4300(DAT_01be8e4c);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      uVar5 = FUN_00c78360();
      iVar3 = FUN_00eb4300(uVar5);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      DAT_01be9f9c = 0x12;
      DAT_01be9f98 = 0;
      return;
    }
    if ((((byte)DAT_01b7b914 & 3) != 0) && (iVar3 = FUN_00416d50(0x2e), iVar3 == 0)) {
      iVar3 = FUN_00416910(1);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00416910(4);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00416d50(0x24);
      uVar5 = DAT_01be8e4c;
      if (iVar3 != 0) {
        return;
      }
      if (DAT_01bea030 == 1) {
        return;
      }
      iVar3 = FUN_00eb4300(DAT_01be8e4c);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      uVar5 = FUN_00c78360();
      iVar3 = FUN_00eb4300(uVar5);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      iVar3 = (**(code **)(*DAT_01dc14c8 + 0x380))();
      if (iVar3 == 0) {
        return;
      }
      if (DAT_01dc087c != 0) {
        return;
      }
      if (DAT_01bea174 != 0) {
        return;
      }
      DAT_01be9f98 = 0;
      DAT_01be9f9c = 9;
      return;
    }
    if (DAT_01bea158 != 0) {
      FUN_00c29a20();
      DAT_01bea15c = 0;
      DAT_01bea160 = 0;
      DAT_01be9f98 = 0;
      DAT_01be9f9c = 7;
      return;
    }
    if ((DAT_01bea15c != 0) || (DAT_01bea160 != 0)) {
      FUN_00c29a20();
      DAT_01be9f98 = 0;
      DAT_01be9f9c = 8;
      return;
    }
    iVar3 = FUN_009c57f0();
    if ((iVar3 != 0) && (iVar3 = FUN_009c5800(), uVar5 = DAT_01be8e4c, iVar3 != 0)) {
      iVar3 = FUN_00eb4300(DAT_01be8e4c);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      uVar5 = FUN_00c78360();
      iVar3 = FUN_00eb4300(uVar5);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      DAT_01be9f98 = 0;
      DAT_01be9f9c = 0x12;
      return;
    }
    cVar2 = FUN_00cac640(0x100,0);
    if ((cVar2 == '\0') && (iVar3 = FUN_009c7c10(), iVar3 == 0)) {
      cVar2 = FUN_00cac640(0x200,0);
      uVar5 = DAT_01be8e4c;
      if (cVar2 == '\0') {
        return;
      }
      iVar3 = FUN_00eb4300(DAT_01be8e4c);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      uVar5 = FUN_00c78360();
      iVar3 = FUN_00eb4300(uVar5);
      if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
        return;
      }
      iVar3 = FUN_00932720();
      if (iVar3 == -1) {
        return;
      }
      if ((0x9ff < iVar3) && (iVar3 < 0xb00)) {
        return;
      }
      if ((0xbff < iVar3) && (iVar3 < 0xd00)) {
        return;
      }
      if ((0xcff < iVar3) && (iVar3 < 0xe00)) {
        return;
      }
      if ((0xdff < iVar3) && (iVar3 < 0xf00)) {
        return;
      }
      iVar3 = FUN_00a4a350(iVar3);
      if (iVar3 == 1) {
        return;
      }
      iVar3 = FUN_00416910(1);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00416910(4);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00416910(2);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00416910(6);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00416d50(0x2b);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_00984740();
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_009366d0();
      if (iVar3 != -1) {
        return;
      }
      if (DAT_01bea174 != 0) {
        return;
      }
      if (DAT_01bea178 != 0) {
        return;
      }
      iVar3 = FUN_00932720();
      if ((iVar3 == 0x330) && (iVar3 = FUN_00cad290(), iVar3 != 0)) {
        return;
      }
      iVar3 = FUN_00d454e0();
      if (iVar3 != 0) {
        return;
      }
      piVar6 = (int *)FUN_00d44850();
      iVar3 = (**(code **)(*piVar6 + 0x20))();
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_0099a2e0();
      piVar6 = DAT_01dc14c8;
      if (iVar3 != 0) {
        return;
      }
      if (DAT_01bea174 != 0) {
        return;
      }
      if (DAT_01dc14c8 != (int *)0x0) {
        iVar3 = FUN_00b7c970();
        if (iVar3 < 1) {
          return;
        }
        iVar3 = (**(code **)(*piVar6 + 0x338))();
        if (((iVar3 == 0) && (piVar6[0x998] == 0)) && (piVar6[0x997] == 0)) {
          return;
        }
      }
      DAT_01be9f98 = 0;
      DAT_01be9f9c = 4;
      goto LAB_00c167c0;
    }
    uVar5 = DAT_01be8e4c;
    iVar3 = FUN_00eb4300(DAT_01be8e4c);
    if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
      return;
    }
    uVar5 = FUN_00c78360();
    iVar3 = FUN_00eb4300(uVar5);
    if ((iVar3 != 0) && (iVar3 = FUN_00eb4340(uVar5), iVar3 == 0)) {
      return;
    }
    iVar3 = FUN_00416910(4);
    if (iVar3 == 0) {
      FUN_004168f0(0x25);
    }
    iVar3 = FUN_0099a2e0();
    if (iVar3 != 0) {
      return;
    }
    if ((DAT_018b9174 == 0xd20) && (iVar3 = FUN_00d45a70("PD20_EVE2"), iVar3 != 0)) {
      return;
    }
    if (DAT_01bea174 != 0) {
      return;
    }
    iVar3 = FUN_00416910(0x25);
    if (iVar3 != 0) {
      DAT_01be9f98 = 0;
      DAT_01be9f9c = 6;
      return;
    }
    FUN_00e5e1b0("bgm_Paused_Enter");
    FUN_00e5e050("core_se_sys_pause_in",0);
    DAT_01be9f98 = 0;
    DAT_01be9f9c = 3;
    break;
  case 2:
    DAT_01be9f98 = 0;
    DAT_01be9f9c = 3;
    return;
  case 3:
    break;
  case 4:
LAB_00c167c0:
    switch(DAT_01bea114) {
    case 0:
      DAT_01bea060 = DAT_01bea060 | 0x80;
      FUN_00e5e050("core_se_sys_se_pause",0,unaff_ESI);
      DAT_01bea084 = DAT_01bea084 | 0x4000;
      FUN_00983fa0();
      DAT_01bea114 = DAT_01bea114 + 1;
      break;
    case 1:
      DAT_01bea084 = DAT_01bea084 | 0x1000;
      DAT_01bea114 = DAT_01bea114 + 1;
      break;
    case 2:
      if ((DAT_01bea138 != (int *)0x0) ||
         (DAT_01bea138 = (int *)cPauseMenuBg::cPauseMenuBg_2(), DAT_01bea138 != (int *)0x0)) {
        FUN_00e5e050("core_se_sys_radio_in",0,unaff_ESI);
        FUN_00e5e1b0("bgm_Menu_enter");
        FUN_00cad1b0(1);
        _DAT_01dc2d78 = 1;
        FUN_0098a8b0();
        DAT_01bea114 = DAT_01bea114 + 1;
        break;
      }
      puVar8 = &DAT_016a3614;
      goto LAB_00c1692c;
    case 3:
      if (1.0 <= _DAT_01dc203c) {
        FUN_00cca200();
        DAT_01bea114 = DAT_01bea114 + 1;
      }
      break;
    case 4:
      iVar3 = FUN_00ce2140();
      if (iVar3 == 0) break;
      FUN_00ce2450();
      FUN_00936500();
      if ((DAT_01bea13c != (undefined4 *)0x0) ||
         (DAT_01bea13c = (undefined4 *)cCodecMenu::cCodecMenu(), DAT_01bea13c != (undefined4 *)0x0))
      goto LAB_00c16a22;
      puVar8 = &DAT_016a35d4;
LAB_00c1692c:
      FUN_00dd5650(puVar8);
      DAT_01bea114 = -1;
      break;
    case 5:
      iVar3 = FUN_00cb2670();
      if (iVar3 == 0) {
        iVar3 = FUN_00cb2660();
        if (iVar3 != 0) {
          DAT_01bea114 = DAT_01bea114 + 1;
        }
      }
      else {
        if (DAT_01bea138 != (int *)0x0) {
          (**(code **)*DAT_01bea138)(1);
          DAT_01bea138 = (int *)0x0;
        }
        if (DAT_01bea134 != (int *)0x0) {
          (**(code **)*DAT_01bea134)(1);
          DAT_01bea134 = (int *)0x0;
        }
        DAT_01bea114 = -1;
      }
      break;
    case 6:
      if ((DAT_01bea13c[2] == 3) || (DAT_01bea13c[2] == 2)) {
        FUN_00e5e050("core_se_sys_radio_out",0,unaff_ESI);
        FUN_00e5e1b0("bgm_Menu_exit");
        FUN_00936540();
        FUN_00ce1e40();
        FUN_00cad1b0(0);
        _DAT_01dc2d78 = 0;
        FUN_0098a900();
        DAT_01bea114 = DAT_01bea114 + 1;
      }
      break;
    case 7:
      if (0.0 < _DAT_01dc203c) break;
      DAT_01bea084 = DAT_01bea084 & 0xffffafff;
LAB_00c16a22:
      DAT_01bea114 = DAT_01bea114 + 1;
      break;
    case 8:
      DAT_01bea060 = DAT_01bea060 & 0xffffff7f;
      FUN_00e5e050("core_se_sys_se_resume",0,unaff_ESI);
      if (DAT_01bea13c != (undefined4 *)0x0) {
        (**(code **)*DAT_01bea13c)(1);
        DAT_01bea13c = (undefined4 *)0x0;
      }
      if (DAT_01bea138 != (int *)0x0) {
        (**(code **)*DAT_01bea138)(1);
        DAT_01bea138 = (int *)0x0;
      }
LAB_00c16a72:
      DAT_01bea114 = 0;
      DAT_01be9f98 = 0;
      DAT_01be9f9c = 0xc;
      break;
    case -1:
      FUN_00cad1b0(0);
      DAT_01bea060 = DAT_01bea060 & 0xffffff7f;
      _DAT_01dc2d78 = 0;
      FUN_00e5e050("core_se_sys_se_resume",0);
      DAT_01bea084 = DAT_01bea084 & 0xffffafff;
      goto LAB_00c16a72;
    }
    if (DAT_01bea138 != (int *)0x0) {
      (**(code **)(*DAT_01bea138 + 4))();
    }
    if (DAT_01bea13c == (undefined4 *)0x0) {
      return;
    }
    FUN_0099c660();
    return;
  default:
    return;
  case 6:
    switch(DAT_01bea118) {
    case 0:
      DAT_01bea060 = DAT_01bea060 | 0x1000;
      FUN_00e5e050("core_se_sys_se_pause",0);
      DAT_01bea084 = DAT_01bea084 | 0x4000;
      goto LAB_00c16b19;
    case 1:
      DAT_01bea084 = DAT_01bea084 | 0x1000;
      DAT_01bea118 = DAT_01bea118 + 1;
      break;
    case 2:
      if ((DAT_01bea140 == (int *)0x0) &&
         (DAT_01bea140 = (int *)cEventPauseMenu::cEventPauseMenu_3(), DAT_01bea140 == (int *)0x0)) {
        FUN_00dd5650(&DAT_016a365c);
        break;
      }
LAB_00c16b19:
      DAT_01bea118 = DAT_01bea118 + 1;
      break;
    case 3:
      iVar3 = FUN_00cb2660();
      if (iVar3 != 0) {
        DAT_01bea118 = DAT_01bea118 + 1;
      }
      break;
    case 4:
      if (DAT_01bea140[0xf] != -1) {
        DAT_01bea118 = DAT_01bea118 + 1;
      }
      break;
    case 5:
      if (_DAT_01dc203c <= 0.0) {
        DAT_01bea118 = DAT_01bea118 + 1;
      }
      break;
    case 6:
      if (DAT_01bea140 != (int *)0x0) {
        (**(code **)*DAT_01bea140)(1);
        DAT_01bea140 = (int *)0x0;
      }
      DAT_01be9f9c = 0xc;
      DAT_01be9f98 = 0;
      DAT_01bea118 = 0;
      FUN_00e5e050("core_se_sys_se_resume",0);
    }
    if (DAT_01bea140 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c16bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01bea140 + 4))();
    return;
  case 7:
    switch(DAT_01bea11c) {
    case 0:
      iVar3 = FUN_00cac330();
      if (iVar3 != 0) {
        FUN_00ce12e0();
      }
      DAT_01bea060 = DAT_01bea060 | 0x1000;
      DAT_01bea084 = DAT_01bea084 | 0x4000;
      goto LAB_00c16c65;
    case 1:
      DAT_01bea084 = DAT_01bea084 | 0x1000;
      DAT_01bea11c = DAT_01bea11c + 1;
      break;
    case 2:
      FUN_00e5e050("core_se_sys_failed_in",0);
      if ((DAT_01bea138 == (int *)0x0) &&
         (DAT_01bea138 = (int *)cPauseMenuBg::cPauseMenuBg_2(), DAT_01bea138 == (int *)0x0)) {
        FUN_00dd5650(&DAT_016a3614);
      }
      else {
        FUN_00cad1b0(1);
        DAT_01bea11c = DAT_01bea11c + 1;
        _DAT_01dc2d78 = 1;
      }
      break;
    case 3:
      if (1.0 <= _DAT_01dc203c) {
        DAT_01bea11c = DAT_01bea11c + 1;
      }
      break;
    case 4:
      iVar3 = FUN_00cac330();
      if (iVar3 == 0) break;
      if ((DAT_01bea144 == (int *)0x0) &&
         (DAT_01bea144 = (int *)cMessWindowCtrl::cMessWindowCtrl_15(), DAT_01bea144 == (int *)0x0))
      {
        FUN_00dd5650(&DAT_016a3690);
        break;
      }
LAB_00c16c65:
      DAT_01bea11c = DAT_01bea11c + 1;
      break;
    case 5:
      iVar3 = FUN_00cb2660();
      if (iVar3 != 0) {
        DAT_01bea11c = DAT_01bea11c + 1;
      }
      break;
    case 6:
      iVar3 = FUN_009c5690();
      if (((iVar3 == 0) && (DAT_018b5758 == 0)) && (DAT_01bea144[0x11] != -1)) {
        FUN_00e5e050("core_se_sys_failed_out",0);
        if (DAT_01bea168 != 0) {
          FUN_00ebdd50(DAT_01bea168);
        }
        DAT_01bea168 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
        DAT_01bea11c = DAT_01bea11c + 1;
      }
      break;
    case 7:
      iVar3 = FUN_00eb4340(DAT_01bea168);
      if (iVar3 != 0) {
        DAT_01be9f9c = 0xc;
        DAT_01be9f98 = 0;
        DAT_01bea11c = 0;
        DAT_01bea15c = 0;
        DAT_01bea160 = 0;
        iVar3 = DAT_01bea144[0x11];
        if (iVar3 == 0) {
          FUN_00a4aa90();
        }
        else if (iVar3 == 1) {
          iVar3 = FUN_00990d20();
          DAT_01be9f98 = 0;
          if (iVar3 == 0) {
            DAT_01be9f9c = 0xf;
          }
          else {
            DAT_01be9f9c = 0x11;
            DAT_01bea10c = 0;
          }
        }
        else if (iVar3 == 2) {
          DAT_01be9f9c = 0xd;
          DAT_01be9f98 = 0;
        }
        if (DAT_01bea138 != (int *)0x0) {
          (**(code **)*DAT_01bea138)(1);
          DAT_01bea138 = (int *)0x0;
        }
        if (DAT_01bea144 != (int *)0x0) {
          (**(code **)*DAT_01bea144)(1);
          DAT_01bea144 = (int *)0x0;
        }
      }
    }
    if (DAT_01bea138 != (int *)0x0) {
      (**(code **)(*DAT_01bea138 + 4))();
    }
    if (DAT_01bea144 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c16ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01bea144 + 4))();
    return;
  case 8:
    switch(DAT_01bea120) {
    case 0:
      iVar3 = FUN_00cac330();
      if (iVar3 != 0) {
        FUN_00ce12e0();
      }
      DAT_01bea120 = DAT_01bea120 + 1;
    case 1:
      if (DAT_01bea160 == 0) {
        _DAT_01bea164 = 0.0;
LAB_00c16f72:
        DAT_01bea120 = DAT_01bea120 + 1;
      }
      else {
        fVar7 = (float10)FUN_00e049b0();
        fVar1 = (float10)_DAT_01bea164;
        _DAT_01bea164 = (float)(fVar1 - fVar7);
        if (fVar1 - fVar7 <= (float10)0) {
          DAT_01bea120 = DAT_01bea120 + 1;
          _DAT_01bea164 = (float)(float10)0;
        }
      }
      break;
    case 2:
      DAT_01bea060 = DAT_01bea060 | 0x1000;
      DAT_01bea084 = DAT_01bea084 | 0x4000;
      DAT_01bea120 = DAT_01bea120 + 1;
      break;
    case 3:
      DAT_01bea084 = DAT_01bea084 | 0x1000;
      DAT_01bea120 = DAT_01bea120 + 1;
      break;
    case 4:
      FUN_00e5e050("core_se_sys_failed_in",0);
      if ((DAT_01bea138 == (int *)0x0) &&
         (DAT_01bea138 = (int *)cPauseMenuBg::cPauseMenuBg_2(), DAT_01bea138 == (int *)0x0)) {
        FUN_00dd5650(&DAT_016a3614);
      }
      else {
        FUN_00cad1b0(1);
        DAT_01bea120 = DAT_01bea120 + 1;
        _DAT_01dc2d78 = 1;
      }
      break;
    case 5:
      if (1.0 <= _DAT_01dc203c) {
        DAT_01bea120 = DAT_01bea120 + 1;
      }
      break;
    case 6:
      iVar3 = FUN_00cac330();
      if (iVar3 == 0) break;
      if ((DAT_01bea148 == (int *)0x0) &&
         (DAT_01bea148 = (int *)cMessWindowCtrl::cMessWindowCtrl_17(), DAT_01bea148 == (int *)0x0))
      {
        FUN_00dd5650(&DAT_016a36c8);
        break;
      }
      goto LAB_00c16f72;
    case 7:
      iVar3 = FUN_00cb2660();
      if (iVar3 != 0) {
        DAT_01bea120 = DAT_01bea120 + 1;
      }
      break;
    case 8:
      iVar3 = FUN_009c5690();
      if (((iVar3 == 0) && (DAT_018b5758 == 0)) && (DAT_01bea148[0xe] != -1)) {
        FUN_00e5e050("core_se_sys_failed_out",0);
        if (DAT_01bea168 != 0) {
          FUN_00ebdd50(DAT_01bea168);
        }
        DAT_01bea168 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
        DAT_01bea120 = DAT_01bea120 + 1;
      }
      break;
    case 9:
      iVar3 = FUN_00eb4340(DAT_01bea168);
      if (iVar3 != 0) {
        DAT_01be9f9c = 0xc;
        DAT_01be9f98 = 0;
        DAT_01bea120 = 0;
        DAT_01bea15c = 0;
        DAT_01bea160 = 0;
        if (DAT_01bea148[0xe] == 0) {
          FUN_00a4aa90();
        }
        else if (DAT_01bea148[0xe] == 1) {
          DAT_01be9f9c = 0xd;
          DAT_01be9f98 = 0;
        }
        if (DAT_01bea138 != (int *)0x0) {
          (**(code **)*DAT_01bea138)(1);
          DAT_01bea138 = (int *)0x0;
        }
        if (DAT_01bea148 != (int *)0x0) {
          (**(code **)*DAT_01bea148)(1);
          DAT_01bea148 = (int *)0x0;
        }
      }
    }
    if (DAT_01bea138 != (int *)0x0) {
      (**(code **)(*DAT_01bea138 + 4))();
    }
    if (DAT_01bea148 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c171bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01bea148 + 4))();
    return;
  case 9:
    if ((DAT_01dc14c8 == (int *)0x0) || (iVar3 = (**(code **)(*DAT_01dc14c8 + 0x380))(), iVar3 == 0)
       ) {
      if (DAT_01bea124 != 0) {
        if (DAT_01bea124 != 1) {
          if (DAT_01bea124 == 2) {
            DAT_01bea124 = 6;
          }
          goto LAB_00c29400;
        }
        DAT_01bea060 = DAT_01bea060 & 0xffffefff;
        FUN_00e5e050("core_se_sys_se_pause",0);
        DAT_01bea094 = DAT_01bea094 & 0xfffbffff;
        DAT_01bea084 = DAT_01bea084 & 0xffffbfff;
      }
      DAT_01be9f9c = 0xc;
      DAT_01be9f98 = 0;
    }
    else {
LAB_00c29400:
      switch(DAT_01bea124) {
      case 0:
        DAT_01bea060 = DAT_01bea060 | 0x1000;
        DAT_01bea094 = DAT_01bea094 | 0x40000;
        DAT_01bea084 = DAT_01bea084 | 0x4000;
        DAT_01bea124 = DAT_01bea124 + 1;
        break;
      case 1:
        DAT_01bea084 = DAT_01bea084 | 0x1000;
        DAT_01bea124 = DAT_01bea124 + 1;
        break;
      case 2:
        if ((DAT_01bea138 == (int *)0x0) &&
           (DAT_01bea138 = (int *)cPauseMenuBg::cPauseMenuBg_2(), DAT_01bea138 == (int *)0x0)) {
          FUN_00dd5650(&DAT_016a3614);
        }
        else if ((DAT_01bea14c == (int *)0x0) &&
                (DAT_01bea14c = (int *)FUN_009926a0(), DAT_01bea14c == (int *)0x0)) {
          FUN_00dd5650(&DAT_016a3dec);
        }
        else {
          FUN_00cad1b0(1);
          DAT_01bea124 = DAT_01bea124 + 1;
          _DAT_01dc2d78 = 1;
          DAT_01dc08ac = 1;
        }
        break;
      case 3:
        if (((1.0 <= _DAT_01dc203c) && (iVar3 = FUN_00cb2660(), iVar3 != 0)) &&
           (DAT_01bea14c[7] != 0)) {
          if (DAT_01bea14c[7] == 1) {
            iVar3 = FUN_00d466f0();
            if (iVar3 != 0) {
              DAT_01bea070 = DAT_01bea070 | 0x10000;
            }
            FUN_004168f0(0x13);
            DAT_01bea070 = DAT_01bea070 | 0x88200000;
            DAT_01bea124 = DAT_01bea124 + 1;
          }
          else {
            DAT_01bea124 = 6;
          }
        }
        break;
      case 4:
        if (((((DAT_01bea058 == 0) && (DAT_01bea054 == DAT_01bea050)) && (1 < DAT_01bea05c)) &&
            ((DAT_01bea044 == 0 && (DAT_01bea040 == DAT_01bea03c)))) &&
           ((DAT_01bea030 == 2 ||
            (((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) &&
               ((DAT_01bea018 == 0 &&
                (((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)) &&
                 (DAT_01bea000 == DAT_01be9ffc)))))) &&
              ((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)))) &&
             ((DAT_01be9ff0 == 0 &&
              (((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)) &&
               (DAT_01be9fc4 == DAT_01be9fc0)))))))))) {
          FUN_00992ab0();
          DAT_01bea124 = DAT_01bea124 + 1;
        }
        break;
      case 5:
        iVar3 = FUN_00992d40();
        if (iVar3 != 0) {
          (**(code **)(*DAT_01dc14c8 + 900))();
          DAT_01bea124 = DAT_01bea124 + 1;
        }
        break;
      case 6:
        DAT_01dc08ac = 0;
        FUN_00cad1b0(0);
        DAT_01bea124 = DAT_01bea124 + 1;
        _DAT_01dc2d78 = 0;
        break;
      case 7:
        if (_DAT_01dc203c <= 0.0) {
          DAT_01bea084 = DAT_01bea084 & 0xffffafff;
          DAT_01bea124 = DAT_01bea124 + 1;
        }
        break;
      case 8:
        DAT_01bea060 = DAT_01bea060 & 0xffffefff;
        DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
        DAT_01bea094 = DAT_01bea094 & 0xfffbffff;
        DAT_01be9f9c = 0xc;
        DAT_01be9f98 = 0;
        iVar3 = FUN_00d466f0();
        if (iVar3 != 0) {
          FUN_0049cd00(0xf);
        }
        DAT_01bea124 = 0;
        uVar5 = FUN_00b7f610();
        FUN_00951a30(uVar5);
        if (DAT_01bea138 != (int *)0x0) {
          (**(code **)*DAT_01bea138)(1);
          DAT_01bea138 = (int *)0x0;
        }
        if (DAT_01bea14c != (int *)0x0) {
          (**(code **)*DAT_01bea14c)(1);
          DAT_01bea14c = (int *)0x0;
        }
        FUN_00e5e050("core_se_sys_se_resume",0);
      }
      if (DAT_01bea138 != (int *)0x0) {
        (**(code **)(*DAT_01bea138 + 4))();
      }
      if (DAT_01bea14c != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c297d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*DAT_01bea14c + 4))();
        return;
      }
    }
    return;
  case 10:
    switch(DAT_01bea128) {
    case 0:
      DAT_01bea17c = 0;
      FUN_00ce12c0();
      DAT_01bea128 = DAT_01bea128 + 1;
      break;
    case 1:
      iVar3 = FUN_00cac330();
      if (iVar3 != 0) {
        DAT_01bea128 = DAT_01bea128 + 1;
      }
      break;
    case 2:
      DAT_01bea150 = (int *)FUN_009a8c20();
      if (DAT_01bea150 == (int *)0x0) {
        DAT_01bea128 = 4;
        goto LAB_00c17399;
      }
      *(undefined1 *)((int)DAT_01bea150 + 0x53d) = 1;
      DAT_01bea150[0xc] = (int)DAT_01bea138;
      DAT_01bea128 = DAT_01bea128 + 1;
      break;
    case 3:
      if ((char)DAT_01bea150[0x14f] != '\0') {
        (**(code **)*DAT_01bea150)(1);
        DAT_01bea150 = (int *)0x0;
        DAT_01bea128 = 4;
        goto LAB_00c17399;
      }
      if (DAT_01bea150[0x150] != 0) {
        DAT_01bea150[0x150] = 0;
        DAT_01bea17c = 1;
        DAT_01bea130 = 0;
        DAT_01bea128 = 6;
      }
      break;
    case 4:
      FUN_00ce12a0();
      DAT_01bea128 = DAT_01bea128 + 1;
      break;
    case 5:
      iVar3 = FUN_00cac330();
      if (iVar3 != 0) {
        DAT_01dc2d7c = 0;
        DAT_01bea128 = 0;
        DAT_01bea170 = 1;
        DAT_01be9f9c = 3;
        DAT_01be9f98 = 0;
      }
      break;
    case 6:
      DAT_01bea130 = DAT_01bea130 + 1;
      if (0x1e < DAT_01bea130) {
        DAT_01bea084 = DAT_01bea084 & 0xffffafff;
        DAT_01bea17c = 0;
        DAT_01bea130 = 0;
        DAT_01bea128 = 7;
      }
      break;
    case 7:
      DAT_01bea084 = DAT_01bea084 | 0x4000;
      DAT_01bea128 = 8;
      break;
    case 8:
      DAT_01bea084 = DAT_01bea084 | 0x1000;
      DAT_01bea128 = 3;
    }
    if (DAT_01bea150 != (int *)0x0) {
      (**(code **)(*DAT_01bea150 + 4))();
    }
LAB_00c17399:
    if (DAT_01bea138 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c173a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01bea138 + 4))();
    return;
  case 0xb:
    switch(DAT_01bea12c) {
    case 0:
      FUN_00ce12d0();
      DAT_01bea12c = DAT_01bea12c + 1;
      break;
    case 1:
      iVar3 = FUN_00cac330();
      if (iVar3 != 0) {
        DAT_01bea12c = DAT_01bea12c + 1;
      }
      break;
    case 2:
      DAT_01bea154 = (int *)FUN_0098d1a0();
      if (DAT_01bea154 == (int *)0x0) {
        DAT_01bea12c = 4;
        goto LAB_00c174d9;
      }
      DAT_01bea12c = DAT_01bea12c + 1;
      break;
    case 3:
      if ((DAT_01bea154[0x91] == 3) || (DAT_01bea154[0x91] == 2)) {
        (**(code **)*DAT_01bea154)(1);
        DAT_01bea154 = (int *)0x0;
        DAT_01bea12c = 4;
        goto LAB_00c174d9;
      }
      break;
    case 4:
      FUN_00ce12a0();
      DAT_01bea12c = DAT_01bea12c + 1;
      break;
    case 5:
      iVar3 = FUN_00cac330();
      if (iVar3 != 0) {
        DAT_01dc2d7c = 0;
        DAT_01bea12c = 0;
        DAT_01bea170 = 1;
        DAT_01be9f9c = 3;
        DAT_01be9f98 = 0;
      }
    }
    if (DAT_01bea154 != (int *)0x0) {
      (**(code **)(*DAT_01bea154 + 4))();
    }
LAB_00c174d9:
    if (DAT_01bea138 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c174e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01bea138 + 4))();
    return;
  case 0xc:
    DAT_01be9f9c = 1;
    DAT_01be9f98 = 0;
    return;
  case 0xd:
    if (DAT_01be9f98 != 0) {
      if (DAT_01be9f98 == 1) {
        _DAT_01bea098 = _DAT_01bea098 & 0x3fffffff;
        (**(code **)(*DAT_01bea184 + 0x18))();
        FUN_00cad0c0();
        FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
        DAT_01be9f98 = DAT_01be9f98 + 1;
      }
      return;
    }
    DAT_01be9f98 = 1;
    return;
  case 0xe:
    if (DAT_01be9f98 != 0) {
      if (DAT_01be9f98 == 1) {
        switch(DAT_01bea16c) {
        case 0:
          FUN_00a4ac40(0xf12,"slash_test_start",0xffffffff);
          DAT_01be9f98 = DAT_01be9f98 + 1;
          return;
        case 1:
          FUN_00a4ac40(0xf13,"cyborg_bt_start",0xffffffff);
          DAT_01be9f98 = DAT_01be9f98 + 1;
          return;
        case 2:
          FUN_00a4ac40(0xf13,"gekko_bt_start",0xffffffff);
          DAT_01be9f98 = DAT_01be9f98 + 1;
          return;
        case 3:
          FUN_00a4ac40(0xf10,"breakdown_start",0xffffffff);
          DAT_01be9f98 = DAT_01be9f98 + 1;
          return;
        case 4:
          FUN_00a4ac40(0xf10,"heli01_start",0xffffffff);
          DAT_01be9f98 = DAT_01be9f98 + 1;
          return;
        case 5:
          FUN_00a4ac40(0xf20,"mastiff_bt_start",0xffffffff);
        }
        DAT_01be9f98 = DAT_01be9f98 + 1;
      }
      return;
    }
    DAT_01be9f98 = 1;
    return;
  case 0xf:
    if (DAT_01be9f98 == 0) {
      DAT_01be9f98 = 1;
      return;
    }
    if (DAT_01be9f98 == 1) {
      FUN_00cad0a0(2);
      iVar3 = FUN_009c73f0(5);
      if (iVar3 == 1) {
        FUN_00a4ac40(0xf30,"START",0xffffffff);
        DAT_01be9f98 = DAT_01be9f98 + 1;
        return;
      }
      FUN_00a4ac40(0xf06,"START",0xffffffff);
      DAT_01be9f98 = DAT_01be9f98 + 1;
    }
    return;
  case 0x11:
    if (DAT_01be9f98 != 0) {
      if (DAT_01be9f98 == 1) {
        FUN_00d46910();
        iVar3 = FUN_00d46900();
        puVar4 = (undefined4 *)FUN_00d46900();
        FUN_00a4ac40(*puVar4,iVar3 + 8,0xffffffff);
        DAT_01be9f98 = DAT_01be9f98 + 1;
      }
      return;
    }
    DAT_01be9f98 = 1;
    return;
  case 0x12:
    switch(DAT_01bea10c) {
    case 0:
      DAT_01bea060 = DAT_01bea060 | 0x1000;
      FUN_00e5e050("core_se_sys_se_pause",0);
      DAT_01bea084 = DAT_01bea084 | 0x4000;
      DAT_01bea10c = DAT_01bea10c + 1;
      break;
    case 1:
      DAT_01bea084 = DAT_01bea084 | 0x1000;
      DAT_01bea10c = DAT_01bea10c + 1;
      break;
    case 2:
      if (DAT_01bea138 == (int *)0x0) {
        DAT_01bea138 = (int *)cPauseMenuBg::cPauseMenuBg_2();
        if (DAT_01bea138 == (int *)0x0) {
          FUN_00dd5650(&DAT_016a3614);
          DAT_01bea10c = -1;
          break;
        }
      }
      else {
        *(uint *)(DAT_01bea138[5] + 0x28) = *(uint *)(DAT_01bea138[5] + 0x28) & 0xfbffffff;
      }
      DAT_01bea10c = DAT_01bea10c + 1;
      break;
    case 3:
      iVar3 = FUN_00cb2660();
      if (iVar3 != 0) {
        FUN_00cad1b0(1);
        DAT_01bea10c = DAT_01bea10c + 1;
        _DAT_01dc2d78 = 1;
      }
      break;
    case 4:
      if (1.0 <= _DAT_01dc203c) {
        *(uint *)(DAT_01bea138[5] + 0x28) = *(uint *)(DAT_01bea138[5] + 0x28) | 0x4000000;
        DAT_01bea10c = DAT_01bea10c + 1;
      }
      break;
    case 5:
      FUN_00cad1b0(0);
      DAT_01bea10c = DAT_01bea10c + 1;
      _DAT_01dc2d78 = 0;
      break;
    case 6:
      if (_DAT_01dc203c <= 0.0) {
        DAT_01bea084 = DAT_01bea084 & 0xffffafff;
        DAT_01bea10c = DAT_01bea10c + 1;
      }
      break;
    case 7:
      DAT_01bea060 = DAT_01bea060 & 0xffffefff;
      FUN_00e5e050("core_se_sys_se_resume",0);
      if (DAT_01bea138 != (int *)0x0) {
        (**(code **)*DAT_01bea138)(1);
        DAT_01bea138 = (int *)0x0;
      }
      DAT_01be9f9c = 0xc;
      DAT_01be9f98 = 0;
      DAT_01bea10c = 0;
    }
    if (DAT_01bea138 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c299f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01bea138 + 4))();
    return;
  }
  switch(DAT_01bea10c) {
  case 0:
    DAT_01bea060 = DAT_01bea060 | 0x1000;
    FUN_00e5e050("core_se_sys_se_pause",0);
    DAT_01bea084 = DAT_01bea084 | 0x4000;
    DAT_01bea10c = DAT_01bea10c + 1;
    break;
  case 1:
    DAT_01bea084 = DAT_01bea084 | 0x1000;
    DAT_01bea10c = DAT_01bea10c + 1;
    break;
  case 2:
    if (DAT_01bea138 == (int *)0x0) {
      DAT_01bea138 = (int *)cPauseMenuBg::cPauseMenuBg_2();
      if (DAT_01bea138 != (int *)0x0) goto LAB_00c28f90;
      puVar8 = &DAT_016a3614;
    }
    else {
      *(uint *)(DAT_01bea138[5] + 0x28) = *(uint *)(DAT_01bea138[5] + 0x28) & 0xfbffffff;
LAB_00c28f90:
      if ((DAT_01bea134 != (int *)0x0) ||
         (DAT_01bea134 = (int *)FUN_009a5010(), DAT_01bea134 != (int *)0x0)) {
        if (DAT_01bea170 != 0) {
          FUN_00994270();
        }
        DAT_01bea10c = DAT_01bea10c + 1;
        break;
      }
      puVar8 = &DAT_016a35d4;
    }
    FUN_00dd5650(puVar8);
    goto LAB_00c28f77;
  case 3:
    iVar3 = FUN_00cb2670();
    if ((iVar3 == 0) && (iVar3 = FUN_00cb2670(), iVar3 == 0)) {
      iVar3 = FUN_00cb2660();
      if ((iVar3 != 0) && (iVar3 = FUN_00cb2660(), iVar3 != 0)) {
        FUN_00cad1b0(1);
        _DAT_01dc2d78 = 1;
        DAT_01bea134[0x2d] = 1;
        DAT_01bea10c = DAT_01bea10c + 1;
      }
      break;
    }
    if (DAT_01bea138 != (int *)0x0) {
      (**(code **)*DAT_01bea138)(1);
      DAT_01bea138 = (int *)0x0;
    }
    if (DAT_01bea134 != (int *)0x0) {
      (**(code **)*DAT_01bea134)(1);
      DAT_01bea134 = (int *)0x0;
      DAT_01bea10c = -1;
      break;
    }
LAB_00c28f77:
    DAT_01bea10c = -1;
    break;
  case 4:
    if (_DAT_01dc203c < 1.0) break;
    if (DAT_01bea134[0x2d] != 1) {
      *(uint *)(DAT_01bea138[5] + 0x28) = *(uint *)(DAT_01bea138[5] + 0x28) | 0x4000000;
    }
    iVar3 = DAT_01bea134[0x2d];
    if (iVar3 == 2) {
      DAT_01bea10c = DAT_01bea10c + 1;
      break;
    }
    if (iVar3 == 3) {
      DAT_01be9f9c = 0xd;
      DAT_01be9f98 = 0;
    }
    else if (iVar3 == 7) {
      DAT_01be9f9c = 0xf;
      DAT_01be9f98 = 0;
    }
    else {
      if (iVar3 == 4) {
        DAT_01bea10c = 0xc;
        break;
      }
      if (iVar3 == 5) {
        FUN_009942c0();
        DAT_01bea10c = 10;
        break;
      }
      if (iVar3 == 6) {
        FUN_009942c0();
        DAT_01bea10c = 0xb;
        break;
      }
      if (iVar3 != 8) break;
      DAT_01be9f9c = 0x11;
      DAT_01be9f98 = 0;
    }
    goto LAB_00c2930d;
  case 5:
    FUN_00cad1b0(0);
    DAT_01bea10c = DAT_01bea10c + 1;
    _DAT_01dc2d78 = 0;
    break;
  case 6:
    if (_DAT_01dc203c <= 0.0) {
      DAT_01bea084 = DAT_01bea084 & 0xffffafff;
      DAT_01bea10c = DAT_01bea10c + 1;
    }
    break;
  case 7:
    DAT_01bea060 = DAT_01bea060 & 0xffffefff;
    FUN_00e5e050("core_se_sys_se_resume",0);
    if (DAT_01bea134 != (int *)0x0) {
      (**(code **)*DAT_01bea134)(1);
      DAT_01bea134 = (int *)0x0;
    }
    if (DAT_01bea138 != (int *)0x0) {
      (**(code **)*DAT_01bea138)(1);
      DAT_01bea138 = (int *)0x0;
    }
LAB_00c28efc:
    DAT_01be9f9c = 0xc;
    DAT_01be9f98 = 0;
    goto LAB_00c2930d;
  case 10:
    iVar3 = FUN_009942e0();
    if (iVar3 == 0) break;
    if (DAT_01bea134 != (int *)0x0) {
      (**(code **)*DAT_01bea134)(1);
      DAT_01bea134 = (int *)0x0;
    }
    DAT_01be9f9c = 10;
    goto LAB_00c2922f;
  case 0xb:
    iVar3 = FUN_009942e0();
    if (iVar3 == 0) break;
    if (DAT_01bea134 != (int *)0x0) {
      (**(code **)*DAT_01bea134)(1);
      DAT_01bea134 = (int *)0x0;
    }
    DAT_01be9f9c = 0xb;
LAB_00c2922f:
    DAT_01dc2d7c = 1;
    DAT_01be9f98 = 0;
    DAT_01bea10c = 2;
    break;
  case 0xc:
    if ((DAT_018b9174 < 0xd76) && ((0xd70 < DAT_018b9174 || (DAT_018b9174 - 0xc71U < 5)))) {
      DAT_01be9f9c = 0xc;
      DAT_01be9f98 = 0;
      DAT_01bea10c = 0;
      FUN_00a4aa90();
      break;
    }
    iVar3 = FUN_009c5690(unaff_ESI);
    if ((iVar3 != 0) || (DAT_018b5758 != 0)) break;
    DAT_01be9f9c = 0x10;
    DAT_01be9f98 = 0;
    (**(code **)(*DAT_01bea184 + 0x18))();
    FUN_00d4e290(1);
    FUN_00a4d650();
LAB_00c2930d:
    DAT_01bea10c = 0;
    break;
  case -1:
    FUN_00cad1b0(0);
    DAT_01bea060 = DAT_01bea060 & 0xffffefff;
    _DAT_01dc2d78 = 0;
    FUN_00e5e050("core_se_sys_se_resume",0);
    DAT_01bea084 = DAT_01bea084 & 0xffffafff;
    goto LAB_00c28efc;
  }
  if (DAT_01bea134 != (int *)0x0) {
    (**(code **)(*DAT_01bea134 + 4))();
  }
  if (DAT_01bea138 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c29334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_01bea138 + 4))();
  return;
}

// 00C4F690  FUN_00c4f690  size=81  [between]
void __fastcall FUN_00c4f690(undefined4 *param_1)

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
  if (param_1[7] != 0) {
    FUN_00dd4920(param_1[7]);
  }
  param_1[7] = 0;
  FUN_00dd7270();
  return;
}

// 00C4F6F0  FUN_00c4f6f0  size=67  [between]
void __thiscall FUN_00c4f6f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 == param_2)) {
        if (param_3 == 0) {
          *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfffffffe;
        }
        else {
          *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 1;
        }
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
    } while (iVar2 != *(int *)(param_1 + 0x18));
  }
  return;
}

// 00C4F740  FUN_00c4f740  size=77  [between]
void __thiscall FUN_00c4f740(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_00a81330();
      if (((iVar1 != 0) && (iVar1 == param_2)) && (*(byte *)(iVar2 + 8) == param_4)) {
        if (param_3 == 0) {
          *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfffffffe;
        }
        else {
          *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 1;
        }
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
    } while (iVar2 != *(int *)(param_1 + 0x18));
  }
  return;
}

// 00C4F790  FUN_00c4f790  size=442  [between]
undefined4 __thiscall FUN_00c4f790(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (puVar3 != *(undefined4 **)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      if ((*(byte *)(puVar3 + 5) & 1) != 0) {
        if (iVar1 == 0) {
          iVar1 = FUN_00d900c0(puVar3[3],param_3);
          if (iVar1 != 0) {
            *param_2 = *puVar3;
            param_2[1] = puVar3[1];
            *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar3 + 2);
            param_2[3] = puVar3[3];
            FUN_00a7c960(puVar3 + 4);
            param_2[5] = puVar3[5];
            FUN_00d90320(puVar3[3],0xffff0000);
            return 1;
          }
        }
        else if ((*(byte *)(iVar1 + 0x4c0) & 1) != 0) {
          iVar2 = puVar3[3];
          iVar1 = iVar1 + 0x10;
          local_24 = 0;
          local_2c = 0;
          local_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_40 = 0;
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          local_14 = 0x3f800000;
          local_28 = 0x3f800000;
          local_3c = 0x3f800000;
          local_50 = 0x3f800000;
          local_20 = *(undefined4 *)(iVar2 + 0x10);
          local_1c = *(undefined4 *)(iVar2 + 0x14);
          local_18 = *(undefined4 *)(iVar2 + 0x18);
          if ((*(short *)((int)puVar3 + 2) != -1) &&
             (iVar2 = FUN_00a12210((int)*(short *)((int)puVar3 + 2)), iVar2 != 0)) {
            iVar1 = iVar2 + 0x10;
          }
          iVar2 = FUN_00d90100(puVar3[3],param_3,&local_50,iVar1);
          if (iVar2 != 0) {
            *param_2 = *puVar3;
            param_2[1] = puVar3[1];
            *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar3 + 2);
            param_2[3] = puVar3[3];
            FUN_00a7c960(puVar3 + 4);
            param_2[5] = puVar3[5];
            FUN_00d90330(puVar3[3],0xffff8080,&local_50,iVar1);
            return 1;
          }
        }
      }
      puVar3 = (undefined4 *)puVar3[7];
    } while (puVar3 != *(undefined4 **)(param_1 + 0x18));
  }
  return 0;
}

// 00C4F950  FUN_00c4f950  size=419  [between]
undefined4 __thiscall FUN_00c4f950(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (puVar3 != *(undefined4 **)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      if (((*(byte *)(puVar3 + 5) & 1) != 0) && (*(byte *)(puVar3 + 2) == param_4)) {
        if (iVar1 == 0) {
          iVar1 = FUN_00d900c0(puVar3[3],param_3);
          if (iVar1 != 0) {
            *param_2 = *puVar3;
            param_2[1] = puVar3[1];
            *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar3 + 2);
            param_2[3] = puVar3[3];
            FUN_00a7c960(puVar3 + 4);
            param_2[5] = puVar3[5];
            FUN_00d90320(puVar3[3],0xffff0000);
            return 1;
          }
        }
        else if ((*(byte *)(iVar1 + 0x4c0) & 1) != 0) {
          iVar2 = puVar3[3];
          iVar1 = iVar1 + 0x10;
          local_24 = 0;
          local_2c = 0;
          local_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_40 = 0;
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          local_14 = 0x3f800000;
          local_28 = 0x3f800000;
          local_3c = 0x3f800000;
          local_50 = 0x3f800000;
          local_20 = *(undefined4 *)(iVar2 + 0x10);
          local_1c = *(undefined4 *)(iVar2 + 0x14);
          local_18 = *(undefined4 *)(iVar2 + 0x18);
          if ((*(short *)((int)puVar3 + 2) != -1) &&
             (iVar2 = FUN_00a12210((int)*(short *)((int)puVar3 + 2)), iVar2 != 0)) {
            iVar1 = iVar2 + 0x10;
          }
          iVar2 = FUN_00d90100(puVar3[3],param_3,&local_50,iVar1);
          if (iVar2 != 0) {
            FUN_00b7a710(puVar3);
            FUN_00d90330(puVar3[3],0xffff8080,&local_50,iVar1);
            return 1;
          }
        }
      }
      puVar3 = (undefined4 *)puVar3[7];
    } while (puVar3 != *(undefined4 **)(param_1 + 0x18));
  }
  return 0;
}

// 00C4FB00  FUN_00c4fb00  size=336  [between]
undefined4 __thiscall
FUN_00c4fb00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_2 != 0) && (iVar3 = *(int *)(param_1 + 0x14), iVar3 != *(int *)(param_1 + 0x18))) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      if (((((*(byte *)(iVar3 + 0x14) & 1) != 0) && (*(int *)(iVar1 + 0x4f0) == param_2)) &&
          (*(byte *)(iVar3 + 8) == param_5)) && ((*(byte *)(iVar1 + 0x4c0) & 1) != 0)) {
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar1 = iVar1 + 0x10;
        local_24 = 0;
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_40 = 0;
        local_44 = 0;
        local_48 = 0;
        local_4c = 0;
        local_14 = 0x3f800000;
        local_28 = 0x3f800000;
        local_3c = 0x3f800000;
        local_50 = 0x3f800000;
        local_20 = *(undefined4 *)(iVar2 + 0x10);
        local_1c = *(undefined4 *)(iVar2 + 0x14);
        local_18 = *(undefined4 *)(iVar2 + 0x18);
        if (*(short *)(iVar3 + 2) != -1) {
          iVar2 = FUN_00a12210((int)*(short *)(iVar3 + 2));
          if (iVar2 != 0) {
            iVar1 = iVar2 + 0x10;
          }
        }
        iVar2 = FUN_00d90100(*(undefined4 *)(iVar3 + 0xc),param_4,&local_50,iVar1);
        if (iVar2 != 0) {
          FUN_00b7a710(iVar3);
          FUN_00d90330(*(undefined4 *)(iVar3 + 0xc),0xffff8080,&local_50,iVar1);
          return 1;
        }
      }
      iVar3 = *(int *)(iVar3 + 0x1c);
    } while (iVar3 != *(int *)(param_1 + 0x18));
  }
  return 0;
}

// 00C4FC50  FUN_00c4fc50  size=176  [between]
uint FUN_00c4fc50(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  
  FUN_00a7c930();
  FUN_00a7c950();
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    if (uVar2 != 0) {
      iVar1 = FUN_00c4fb00(unaff_retaddr,&stack0xffffffe4,uVar2 + 0x40,param_1);
      return -(uint)(iVar1 != 0) & uVar2;
    }
  }
  return 0;
}

// 00C4FD00  FUN_00c4fd00  size=338  [between]
undefined4 __thiscall FUN_00c4fd00(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (puVar3 != *(undefined4 **)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      if (((*(byte *)(puVar3 + 5) & 1) != 0) && (*(char *)(puVar3 + 2) != -1)) {
        if (iVar1 == 0) {
          iVar1 = FUN_00d900c0(puVar3[3],param_2);
        }
        else {
          iVar2 = puVar3[3];
          iVar1 = iVar1 + 0x10;
          local_24 = 0;
          local_2c = 0;
          local_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_40 = 0;
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          local_14 = 0x3f800000;
          local_28 = 0x3f800000;
          local_3c = 0x3f800000;
          local_50 = 0x3f800000;
          local_20 = *(undefined4 *)(iVar2 + 0x10);
          local_1c = *(undefined4 *)(iVar2 + 0x14);
          local_18 = *(undefined4 *)(iVar2 + 0x18);
          if ((*(short *)((int)puVar3 + 2) != -1) &&
             (iVar2 = FUN_00a12210((int)*(short *)((int)puVar3 + 2)), iVar2 != 0)) {
            iVar1 = iVar2 + 0x10;
          }
          iVar1 = FUN_00d90100(puVar3[3],param_2,&local_50,iVar1);
        }
        if (iVar1 != 0) {
          *param_3 = *puVar3;
          param_3[1] = puVar3[1];
          *(undefined2 *)(param_3 + 2) = *(undefined2 *)(puVar3 + 2);
          param_3[3] = puVar3[3];
          FUN_00a7c960(puVar3 + 4);
          param_3[5] = puVar3[5];
          return 1;
        }
      }
      puVar3 = (undefined4 *)puVar3[7];
    } while (puVar3 != *(undefined4 **)(param_1 + 0x18));
  }
  return 0;
}

// 00C4FE60  FUN_00c4fe60  size=409  [between]
undefined4 __thiscall
FUN_00c4fe60(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,short *param_5,
            float *param_6,int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  float unaff_EBX;
  undefined4 unaff_ESI;
  int iVar3;
  float unaff_EDI;
  float10 fVar4;
  undefined1 auStack_74 [12];
  int local_68;
  int local_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_68 = param_1;
  uVar1 = FUN_00a81330();
  *param_3 = uVar1;
  *param_5 = *(short *)(param_2 + 2);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != *(int *)(local_68 + 0x18)) {
    do {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        local_64 = FUN_00a81330();
        iVar2 = FUN_00a81330();
        if ((local_64 == iVar2) && (*(char *)(param_2 + 6) == *(char *)(iVar3 + 5))) {
          uVar1 = FUN_00a81330();
          *param_3 = uVar1;
          iVar2 = *(int *)(iVar3 + 0xc);
          *param_4 = *(undefined4 *)(iVar2 + 0x10);
          param_4[1] = *(undefined4 *)(iVar2 + 0x14);
          param_4[2] = *(undefined4 *)(iVar2 + 0x18);
          param_4[3] = *(undefined4 *)(iVar2 + 0x1c);
          *param_5 = *(short *)(param_2 + 2);
          iVar2 = FUN_00a81330();
          if (iVar2 == 0) {
            local_68 = 0;
          }
          else {
            FUN_00a81330();
            local_68 = FUN_00a7c8a0();
          }
          local_68 = local_68 + 0x10;
          if (*param_5 != 0xff) {
            iVar2 = FUN_00a81330();
            if (iVar2 != 0) {
              FUN_00a81330();
              FUN_00a7c8a0();
            }
            iVar2 = FUN_00a12210((int)*param_5);
            if (iVar2 != 0) {
              local_68 = iVar2 + 0x10;
            }
          }
          local_64 = (uint)*(byte *)(iVar3 + 4) * 2;
          D3DXMatrixRotationY(local_50,(float)local_64 * 3.1415927 * 0.003921569);
          local_68 = 0;
          local_64 = 0;
          uStack_60 = 0x3f800000;
          D3DXVec3TransformNormal(&local_68,&local_68,auStack_58);
          D3DXVec3TransformNormal(auStack_74,auStack_74,unaff_ESI);
          fVar4 = (float10)fpatan((float10)unaff_EDI,(float10)unaff_EBX);
          *param_6 = (float)fVar4;
          if (param_7 != (int *)0x0) {
            *param_7 = iVar3;
          }
          return 1;
        }
      }
      iVar3 = *(int *)(iVar3 + 0x1c);
    } while (iVar3 != *(int *)(local_68 + 0x18));
  }
  return 0;
}

// 00C50000  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_3  size=187  [class]
int __thiscall lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_3(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_418;
  uint local_414;
  undefined **local_410;
  undefined1 *local_40c;
  int local_408;
  undefined4 local_404;
  undefined1 local_400 [1024];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (param_2[1] != 0) {
    param_2[2] = 0;
  }
  local_40c = local_400;
  local_408 = 0;
  local_404 = 0x100;
  local_410 = vftable;
  local_418 = 0;
  local_414 = 0;
  param_1 = param_1 + 0x20;
  do {
    if (param_1 != 0) {
      iVar2 = FUN_00ca36d0(&local_410);
      local_418 = local_418 + iVar2;
      puVar1 = local_40c + local_408 * 4;
      iVar2 = param_2[1] + param_2[2] * 4;
      for (puVar3 = local_40c; puVar3 != puVar1; puVar3 = puVar3 + 4) {
        iVar2 = (**(code **)(*param_2 + 0xc))(iVar2,puVar3);
        iVar2 = iVar2 + 4;
      }
    }
    local_414 = local_414 + 1;
    param_1 = param_1 + 0x7170;
  } while (local_414 < 0x20);
  return local_418;
}

// 00C554F0  lib::StaticArray<RoomBaseUnit*,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<RoomBaseUnit*,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<RoomBaseUnit*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C55550  lib::StaticArray<SceneBgWork::LayoutUnit,128>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<SceneBgWork::LayoutUnit,128>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<SceneBgWork::LayoutUnit>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C55580  lib::StaticArray<stDoorUnit*,64>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<stDoorUnit*,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<stDoorUnit*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C59EB0  FUN_00c59eb0  size=798  [callgraph]
void FUN_00c59eb0(int param_1)

{
  undefined *puVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_14;
  uint local_4;
  
  iVar5 = param_1;
  if (*(int *)(param_1 + 0x10) < 0) {
    uVar9 = 0;
    do {
      uVar8 = 0;
      do {
        FUN_00c4f330(param_1,uVar9,uVar8);
        if ((-1 < *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x60)))
        break;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x10);
      uVar9 = uVar9 + 1;
      if (0x1f < uVar9) {
        return;
      }
    } while( true );
  }
  if (-1 < *(int *)(param_1 + 0x14)) {
    FUN_00c4f330(param_1,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
    return;
  }
  param_1 = 0;
  local_4 = 0;
  do {
    uVar9 = *(uint *)(iVar5 + 0x10);
    if ((((uVar9 < 0x20) && (puVar1 = &DAT_01c78cd0 + uVar9 * 0x7170, puVar1 != (undefined *)0x0))
        && (puVar1 + local_4 + 0x40 != (undefined *)0x0)) &&
       (puVar1 + local_4 + 0x40 != (undefined *)0xffffffd0)) {
      iVar6 = FUN_00a81330();
      local_14 = 0;
      if (iVar6 != 0) {
        local_14 = FUN_00a7c8a0();
      }
      if ((((*(char *)(iVar5 + 0x24) != '\0') ||
           ((*(uint *)(iVar5 + 100 + (uVar9 * 0x10 + param_1) * 4) & 0x8000) == 0)) &&
          ((puVar1 != (undefined *)0x0 &&
           ((iVar6 = FUN_00c9ea70(param_1), iVar6 != 0 && (iVar6 = FUN_00a7c7e0(), iVar6 != 0))))))
         && ((piVar7 = (int *)FUN_00a7c8a0(), piVar7 == (int *)0x0 ||
             (iVar6 = FUN_00c41910(local_14,piVar7,iVar5), iVar6 != 0)))) {
        bVar3 = true;
        bVar4 = false;
        if ((*(int *)(iVar5 + 0x1c) != 0) &&
           (bVar3 = true, bVar4 = true, *(int *)(iVar5 + 0x1c) != piVar7[0x203])) {
          bVar3 = false;
          bVar4 = false;
        }
        if (-2 < *(int *)(iVar5 + 0x18)) {
          if (*(int *)(iVar5 + 0x18) != -1) goto LAB_00c5a049;
          bVar4 = true;
        }
        if (bVar3) {
          iVar6 = (**(code **)(*piVar7 + 0x268))
                            (local_14,*(undefined4 *)(iVar5 + 0x5c),iVar5 + 0x28);
          if (iVar6 != 0) {
            iVar6 = uVar9 * 0x10 + param_1;
            puVar2 = (uint *)(iVar5 + 100 + iVar6 * 4);
            if ((*(uint *)(iVar5 + 100 + iVar6 * 4) & 0x8000) == 0) {
              *puVar2 = *puVar2 | 0x8000;
              *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
            }
            if ((0 < *(int *)(iVar5 + 0xc)) && (*(int *)(iVar5 + 0xc) <= *(int *)(iVar5 + 0x60)))
            goto LAB_00c5a165;
          }
          if (bVar4) goto LAB_00c5a165;
        }
      }
LAB_00c5a049:
      uVar8 = 0;
      do {
        if ((((*(char *)(iVar5 + 0x24) != '\0') ||
             ((*(uint *)(iVar5 + 100 + (uVar9 * 0x10 + (uVar8 >> 5) + param_1) * 4) &
              0x80000000U >> ((byte)uVar8 & 0x1f)) == 0)) && (iVar6 = FUN_00a81330(), iVar6 != 0))
           && (((iVar6 = FUN_00a7c7e0(), iVar6 != 0 &&
                (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) &&
               (iVar6 = FUN_00c41910(local_14,piVar7,iVar5), iVar6 != 0)))) {
          bVar3 = false;
          if (*(int *)(iVar5 + 0x1c) != 0) {
            if (*(int *)(iVar5 + 0x1c) != piVar7[0x203]) goto LAB_00c5a150;
            bVar3 = true;
          }
          if (-1 < (int)*(uint *)(iVar5 + 0x18)) {
            if (*(uint *)(iVar5 + 0x18) != uVar8) goto LAB_00c5a150;
            bVar3 = true;
          }
          iVar6 = (**(code **)(*piVar7 + 0x268))
                            (local_14,*(undefined4 *)(iVar5 + 0x5c),iVar5 + 0x28);
          if (iVar6 != 0) {
            uVar10 = 0x80000000 >> ((byte)uVar8 & 0x1f);
            if ((*(uint *)(iVar5 + 100 + ((uVar8 >> 5) + uVar9 * 0x10 + param_1) * 4) & uVar10) == 0
               ) {
              puVar2 = (uint *)(iVar5 + 100 + (uVar9 * 0x10 + param_1) * 4 + (uVar8 >> 5) * 4);
              *puVar2 = *puVar2 | uVar10;
              *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
            }
            if ((0 < *(int *)(iVar5 + 0xc)) && (*(int *)(iVar5 + 0xc) <= *(int *)(iVar5 + 0x60)))
            break;
          }
          if (bVar3) break;
        }
LAB_00c5a150:
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x10);
    }
LAB_00c5a165:
    if ((-1 < *(int *)(iVar5 + 0xc)) && (*(int *)(iVar5 + 0xc) <= *(int *)(iVar5 + 0x60))) {
      return;
    }
    param_1 = param_1 + 1;
    local_4 = local_4 + 0x660;
    if (0x65ff < local_4) {
      return;
    }
  } while( true );
}

// 00C5A1D0  FUN_00c5a1d0  size=130  [callgraph]
undefined4 * __fastcall FUN_00c5a1d0(LPCRITICAL_SECTION param_1)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  local_8 = (undefined4 *)param_1[3].RecursionCount;
  if (local_8 != param_1[3].OwningThread) {
    puVar1 = (undefined4 *)*local_8;
    FUN_00c55f20(local_4,&local_8);
    puVar1[0x17] = 0;
    *puVar1 = 0xffffffff;
    puVar1[0x18] = 0;
    _memset(puVar1 + 0x19,0,0x800);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return puVar1;
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return (undefined4 *)0x0;
}

// 00C5A260  FUN_00c5a260  size=25  [callgraph]
void __fastcall FUN_00c5a260(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  param_1[8] = 0;
  return;
}

// 00C5A280  FUN_00c5a280  size=128  [callgraph]
void __fastcall FUN_00c5a280(undefined4 *param_1)

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
  if (param_1[7] != 0) {
    FUN_00dd4920(param_1[7]);
  }
  param_1[7] = 0;
  FUN_00dd7270();
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

// 00C5A300  FUN_00c5a300  size=82  [callgraph]
void __fastcall FUN_00c5a300(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_00dd29b0(0x8020,0x20,0,0);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0x400;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(int *)(param_1 + 0x18) = iVar1 + 0x8000;
      FUN_00c4c430();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00dd7240();
  return;
}

// 00C5A360  FUN_00c5a360  size=673  [callgraph]
void __fastcall FUN_00c5a360(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [4];
  undefined1 local_70 [12];
  float local_64;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
LAB_00c5a4f8:
        FUN_00d9fa80(local_70,*(int *)(iVar3 + 0xc) + 0x10);
        if ((local_64 < 50.0) && (-10.0 < local_64)) {
          uVar4 = 0xff80ffff;
          if ((*(byte *)(iVar3 + 0x14) & 1) == 0) {
            uVar4 = 0xff104040;
          }
          FUN_00d90320(*(undefined4 *)(iVar3 + 0xc),uVar4);
        }
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
        if (iVar1 == 0) goto LAB_00c5a4f8;
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar5 = iVar1 + 0x10;
        local_24 = 0;
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_40 = 0;
        local_44 = 0;
        local_48 = 0;
        local_4c = 0;
        local_14 = 0x3f800000;
        local_28 = 0x3f800000;
        local_3c = 0x3f800000;
        local_50 = 0x3f800000;
        local_20 = *(undefined4 *)(iVar2 + 0x10);
        local_1c = *(undefined4 *)(iVar2 + 0x14);
        local_18 = *(undefined4 *)(iVar2 + 0x18);
        if ((*(short *)(iVar3 + 2) != -1) &&
           (iVar2 = FUN_00a12210((int)*(short *)(iVar3 + 2)), iVar2 != 0)) {
          iVar5 = iVar2 + 0x10;
        }
        D3DXVec3TransformNormal(&local_80,*(int *)(iVar3 + 0xc) + 0x10,iVar5);
        local_80 = *(float *)(iVar5 + 0x30) + local_80;
        fStack_7c = *(float *)(iVar5 + 0x34) + fStack_7c;
        fStack_78 = *(float *)(iVar5 + 0x38) + fStack_78;
        FUN_00d9fa80(local_70,&local_80);
        if ((local_64 < 50.0) && (-10.0 < local_64)) {
          uVar4 = 0xff80ffff;
          if ((*(byte *)(iVar3 + 0x14) & 1) == 0) {
            uVar4 = 0xff104040;
          }
          FUN_00d90330(*(undefined4 *)(iVar3 + 0xc),uVar4,&local_50,iVar5);
          FUN_00c178e0(iVar3,uVar4);
        }
      }
      if (iVar1 == 0) {
        iVar5 = *(int *)(iVar3 + 0x18);
        iVar1 = *(int *)(iVar3 + 0x1c);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x1c) = iVar1;
        }
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x18) = iVar5;
        }
        if (*(int *)(param_1 + 0x14) == iVar3) {
          *(int *)(param_1 + 0x14) = iVar1;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar5 + 0x18);
        }
        *(int *)(iVar3 + 0x18) = iVar2;
        *(int *)(iVar3 + 0x1c) = iVar5;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x1c) = iVar3;
        }
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x18) = iVar3;
        }
        *(int *)(param_1 + 0x10) = iVar3;
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x1c);
      }
      iVar3 = iVar1;
    } while (iVar1 != *(int *)(param_1 + 0x18));
  }
  iVar3 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = FUN_00a7c8a0();
  }
  FUN_00a91ca0();
  if (iVar1 != 0) {
    FUN_00c4f790(auStack_74,iVar1 + 0x50);
  }
  return;
}

// 00C5A750  FUN_00c5a750  size=853  [callgraph]
void __fastcall FUN_00c5a750(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  int local_18c;
  int iStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_170;
  undefined4 local_16c;
  
  fVar6 = (float10)FUN_00e03a90(0);
  fVar6 = fVar6 + (float10)*(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x4c) = (float)fVar6;
  if (fVar6 < (float10)*(float *)(param_1 + 0x48)) {
    return;
  }
  iVar1 = FUN_00a7c8a0();
  if ((iVar1 != 0) && (piVar4 = *(int **)(iVar1 + 0x7b0), piVar4 != (int *)0x0)) {
    FUN_008f0970();
    local_18c = 0;
    iVar1 = (**(code **)(*piVar4 + 0xc))();
    if (0 < iVar1) {
      do {
        iStack_188 = FUN_008f08f0(local_18c);
        iVar1 = 0;
        if (0 < iStack_188) {
          do {
            iVar2 = FUN_008f0930(local_18c,iVar1);
            if (iVar2 != 0) {
              piVar3 = (int *)FUN_00a7c8a0();
              (**(code **)(*piVar3 + 0x2e8))();
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < iStack_188);
        }
        iVar2 = local_18c + 1;
        local_18c = iVar2;
        iVar1 = (**(code **)(*piVar4 + 0xc))();
      } while (iVar2 < iVar1);
    }
    FUN_008f09c0();
  }
  local_16c = 0;
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    uStack_170 = *(undefined4 *)(iVar1 + 0x44);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    _sprintf_s((char *)&local_18c,5,"%04x",*(undefined4 *)(param_1 + 0x50));
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    piVar4 = &local_18c;
    uVar10 = 0;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e4ccccd;
    uVar7 = 0;
    FUN_00a7c8a0(piVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9f2b0(piVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    iVar1 = FUN_00a7c8a0();
    *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) & 0xfffffffd;
    _sprintf_s((char *)&local_18c,5,"%04x",*(undefined4 *)(param_1 + 0x58));
    uVar5 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      piVar4 = (int *)(param_1 + 0x18);
      do {
        if ((*piVar4 != 0) && ((*(byte *)(piVar4 + 2) & 1) == 0)) {
          iVar1 = FUN_00a7c7e0();
          if (iVar1 != 0) {
            uVar12 = 0x3f800000;
            piVar3 = &local_18c;
            uVar11 = 0xbf800000;
            uVar10 = 0;
            uVar9 = 0x3f800000;
            uVar8 = 0x3e4ccccd;
            uVar7 = 0;
            FUN_00a7c8a0(piVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
            FUN_00a9f2b0(piVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
          }
          piVar4[2] = piVar4[2] | 1;
          *piVar4 = 0;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 3;
      } while (uVar5 < *(uint *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 4) == 0) goto LAB_00c5aa61;
  }
  else {
    if (iVar1 == 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        FUN_00a8c480();
        puVar13 = &DAT_01be9c28;
        (**(code **)(*piVar4 + 4))(&DAT_01be9c28);
        iVar1 = FUN_00dd6d80(puVar13);
        if (iVar1 != 0) {
          FUN_00a8f660(1,0,0);
        }
        iVar1 = FUN_00a7c8a0();
        uStack_184 = *(undefined4 *)(iVar1 + 0x40);
        uStack_17c = *(undefined4 *)(iVar1 + 0x48);
        uStack_178 = *(undefined4 *)(iVar1 + 0x4c);
        uStack_180 = uStack_170;
        (**(code **)(*DAT_01bea1a4 + 4))(1,*(undefined4 *)(param_1 + 4),&uStack_184);
      }
      goto LAB_00c5aa61;
    }
    if ((iVar1 != 3) || (piVar4 = (int *)FUN_00a7c8a0(), piVar4 == (int *)0x0)) goto LAB_00c5aa61;
    FUN_00e5e0c0(param_1 + 0x80,piVar4,0xffffffff,0);
    uVar7 = FUN_004039a0(*(undefined4 *)(param_1 + 0x7c),piVar4,0);
    FUN_00a963e0(uVar7);
    (**(code **)(*piVar4 + 0x20))();
  }
  iVar1 = FUN_00a7c8a0();
  uStack_184 = *(undefined4 *)(iVar1 + 0x40);
  uStack_17c = *(undefined4 *)(iVar1 + 0x48);
  uStack_178 = *(undefined4 *)(iVar1 + 0x4c);
  uStack_180 = uStack_170;
  (**(code **)(*DAT_01bea1a4 + 4))(1,*(undefined4 *)(param_1 + 4),&uStack_184);
LAB_00c5aa61:
  piVar4 = (int *)FUN_00a7c8a0();
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x2ec))();
    FUN_00a8e740(1);
  }
  FUN_00c1a8e0();
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 6;
  if ((*(uint *)(param_1 + 0x54) & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffff0;
  }
  return;
}

// 00C5AAB0  FUN_00c5aab0  size=105  [callgraph]
void __fastcall FUN_00c5aab0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x5000) != 0) {
    puVar2 = (uint *)(param_1 + 0x54);
    do {
      if (puVar2[-0x14] == 0) {
LAB_00c5aaf6:
        if ((*puVar2 & 0x100) != 0) {
          FUN_00c2a9a0();
        }
      }
      else {
        iVar1 = FUN_00a7c7e0();
        if (iVar1 != 0) {
          if ((*puVar2 & 2) == 0) {
            if ((*puVar2 & 1) == 0) {
              FUN_00c1a700();
            }
            else {
              FUN_00c5a750();
            }
          }
          goto LAB_00c5aaf6;
        }
        puVar2[-0x14] = 0;
        *puVar2 = *puVar2 | 0x100;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x28;
    } while (uVar3 < *(uint *)(param_1 + 0x5000));
  }
  return;
}

// 00C5AB20  lib::StaticArray<RoomBaseUnit*,32>::StaticArray<RoomBaseUnit*,32>  size=67  [class]
undefined4 * __fastcall
lib::StaticArray<RoomBaseUnit*,32>::StaticArray<RoomBaseUnit*,32>(undefined4 *param_1)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 0x20;
  *param_1 = vftable;
  param_1[0x2a] = 0;
  FUN_00dd7240();
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  return param_1;
}

// 00C5C050  lib::StaticArray<stDoorUnit*,64>::StaticArray<stDoorUnit*,64>  size=42  [class]
undefined4 * __fastcall
lib::StaticArray<stDoorUnit*,64>::StaticArray<stDoorUnit*,64>(undefined4 *param_1)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 0x40;
  *param_1 = vftable;
  param_1[0x4a] = 0;
  FUN_00c47830();
  return param_1;
}

// 00C6E940  lib::StaticArray<std::pair<float,waypoint::WaypointNode_const*>,16>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<std::pair<float,waypoint::WaypointNode_const*>,16>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = Array<std::pair<float,waypoint::WaypointNode_const*>_>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C72060  lib::StaticArray<std::pair<float,waypoint::WaypointNode_const*>,16>::StaticArray<std::pair<float,waypoint::WaypointNode_const*>,16>  size=360  [class]
undefined4 __thiscall
lib::StaticArray<std::pair<float,waypoint::WaypointNode_const*>,16>::
StaticArray<std::pair<float,waypoint::WaypointNode_const*>,16>
          (int param_1,float *param_2,short param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined **local_a8;
  undefined1 *local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [148];
  
  piVar6 = *(int **)(param_1 + 0x30);
  piVar1 = piVar6 + *(int *)(param_1 + 0x34) * 6;
  local_a4 = local_98;
  local_a0 = 0;
  local_9c = 0x10;
  local_a8 = vftable;
  do {
    if (piVar6 == piVar1) {
      puVar2 = local_a4 + local_a0 * 8;
      puVar7 = local_a4;
      while( true ) {
        if (puVar7 == puVar2) {
          return 0;
        }
        puVar4 = (undefined4 *)**(undefined4 **)(puVar7 + 4);
        local_c0 = *puVar4;
        local_bc = puVar4[1];
        local_b8 = puVar4[2];
        local_b4 = 0x3f800000;
        iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_4
                          (0,0,0,0,param_2,&local_c0,0x1e,"Waypoint");
        if (iVar5 == 0) break;
        puVar7 = puVar7 + 8;
      }
      return **(undefined4 **)(puVar7 + 4);
    }
    if (((*(uint *)(param_1 + 0x118) & 1 << ((byte)*(undefined2 *)(*piVar6 + 0x1a) & 0x1f)) != 0) &&
       ((param_3 < 0 || (*(short *)(*piVar6 + 0x1c) == param_3)))) {
      pfVar3 = (float *)*piVar6;
      local_c4 = SQRT((pfVar3[2] - param_2[2]) * (pfVar3[2] - param_2[2]) +
                      (pfVar3[1] - param_2[1]) * (pfVar3[1] - param_2[1]) +
                      (*pfVar3 - *param_2) * (*pfVar3 - *param_2)) - pfVar3[4];
      if (local_a0 == local_9c) {
        if (*(float *)(local_a4 + local_a0 * 8 + -8) < local_c4) goto LAB_00c72150;
        if ((local_a4 != (undefined1 *)0x0) && (local_a0 != 0)) {
          local_a0 = local_a0 + -1;
        }
      }
      local_c8 = piVar6;
      FUN_00c71200(&local_c4,&local_c8);
    }
LAB_00c72150:
    piVar6 = piVar6 + 6;
  } while( true );
}

// 00C98020  lib::StaticArray<Trigger::cTriggerTask*,16>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Trigger::cTriggerTask*,16>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Trigger::cTriggerTask*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C9BCC0  lib::StaticArray<Trigger::cTriggerTask*,16>::StaticArray<Trigger::cTriggerTask*,16>_2  size=284  [class]
undefined4 * __thiscall
lib::StaticArray<Trigger::cTriggerTask*,16>::StaticArray<Trigger::cTriggerTask*,16>_2
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = param_1 + 0x14;
  iVar3 = 0x1f;
  do {
    puVar1[7] = 0x3c8efa35;
    *puVar1 = 0;
    puVar1[8] = 0xffffffff;
    puVar1 = puVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  param_1[0x196] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0x3f800000;
  param_1[0x19e] = 0;
  param_1[0x1a1] = 0;
  param_1[0x19c] = 0;
  param_1[0x1a2] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a5] = param_1 + 0x1a8;
  param_1[0x1a7] = 0x10;
  param_1[0x1a4] = vftable;
  param_1[0x1b8] = param_2;
  uVar2 = FUN_00e03ea0(&DAT_016a8a38);
  param_1[0x1b9] = uVar2;
  uVar2 = FUN_00e03ea0("@first");
  param_1[0x1ba] = uVar2;
  uVar2 = FUN_00e03ea0("@last");
  param_1[0x1bb] = uVar2;
  uVar2 = FUN_00e03ea0("@cleanup");
  param_1[0x1bc] = uVar2;
  return param_1;
}

// 00C9D0F0  lib::StaticArray<Trigger::cTriggerTask*,16>::StaticArray<Trigger::cTriggerTask*,16>  size=278  [class]
undefined4 * __fastcall
lib::StaticArray<Trigger::cTriggerTask*,16>::StaticArray<Trigger::cTriggerTask*,16>
          (undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = param_1 + 0x14;
  iVar3 = 0x1f;
  do {
    puVar1[7] = 0x3c8efa35;
    *puVar1 = 0;
    puVar1[8] = 0xffffffff;
    puVar1 = puVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  param_1[0x196] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0x3f800000;
  param_1[0x19e] = 0;
  param_1[0x1a1] = 0;
  param_1[0x19c] = 0;
  param_1[0x1a2] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a5] = param_1 + 0x1a8;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0x10;
  param_1[0x1a4] = vftable;
  param_1[0x1b8] = 0;
  uVar2 = FUN_00e03ea0(&DAT_016a8a38);
  param_1[0x1b9] = uVar2;
  uVar2 = FUN_00e03ea0("@first");
  param_1[0x1ba] = uVar2;
  uVar2 = FUN_00e03ea0("@last");
  param_1[0x1bb] = uVar2;
  uVar2 = FUN_00e03ea0("@cleanup");
  param_1[0x1bc] = uVar2;
  return param_1;
}

// 00CA50E0  lib::StaticArray<ScenarioRegion*,256>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<ScenarioRegion*,256>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<ScenarioRegion*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CA5130  FUN_00ca5130  size=43  [callgraph]
void __fastcall FUN_00ca5130(int param_1)

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

// 00CA5160  FUN_00ca5160  size=68  [callgraph]
void __thiscall FUN_00ca5160(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 8;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00CA51E0  FUN_00ca51e0  size=52  [callgraph]
void FUN_00ca51e0(undefined4 *param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_1;
  local_1c = param_1[1];
  local_18 = param_1[2];
  local_14 = 0x3f800000;
  FUN_00ca30d0(&local_20);
  return;
}

// 00CA5320  FUN_00ca5320  size=564  [callgraph]
undefined4 __fastcall FUN_00ca5320(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined1 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [128];
  
  param_1[0x464] = param_1[0x464] & 0x1fffffff;
  piVar6 = param_1 + 0x111;
  param_1[0x464] = 0;
  param_1[0x462] = 0;
  piVar1 = piVar6;
  iVar5 = 0x20;
  do {
    iVar2 = iVar5;
    piVar1[-0x10] = 0;
    piVar1[-0xf] = 0;
    piVar1[-0xe] = 0;
    piVar1[-0xd] = 0;
    piVar1[-0xc] = 0;
    piVar1[-0xb] = 0;
    piVar1[-10] = 0;
    piVar1[-9] = 0;
    piVar1[-8] = 0;
    piVar1[-7] = 0;
    piVar1[-6] = 0;
    piVar1[-5] = 0;
    piVar1[-4] = 0;
    piVar1[-3] = 0;
    piVar1[-2] = 0;
    piVar1[-1] = 0;
    piVar1[3] = 0;
    *piVar1 = 0;
    piVar1[5] = 0;
    piVar1[2] = 0;
    piVar1[1] = -1;
    piVar1[4] = 0;
    piVar1 = piVar1 + 0x16;
    iVar5 = iVar2 + -1;
  } while (iVar5 != 0);
  param_1[0x100] = 0;
  piVar1 = param_1 + 2;
  iVar2 = iVar2 + 0x3f;
  do {
    piVar1[-2] = -1;
    piVar1[-1] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x464] = param_1[0x464] | 0x20000000;
  local_94 = local_80;
  local_98 = 0;
  local_90 = 0x10;
  local_8c = 0;
  local_88 = 0;
  local_a0 = 0;
  do {
    local_84 = FUN_00c2a4c0(local_a0,&local_98);
    if (local_84 != 0) {
      iVar5 = FUN_00c2a4f0(local_a0);
      piVar6[4] = (uint)(iVar5 == 0);
      local_9c = 0;
      if (0 < local_84) {
        do {
          iVar5 = *(int *)(local_94 + local_9c * 8 + 4);
          iVar2 = param_1[0x100];
          if (iVar2 == 0x40) {
LAB_00ca54cd:
            FUN_00dd5650(&DAT_016b1b70);
            break;
          }
          iVar3 = 0;
          iVar4 = iVar2;
          piVar1 = param_1;
          if (0 < iVar2) {
            do {
              if ((*piVar1 == *(int *)(local_94 + local_9c * 8)) &&
                 (iVar4 = iVar3, piVar1[1] == iVar5)) break;
              iVar3 = iVar3 + 1;
              iVar4 = iVar2;
              piVar1 = piVar1 + 4;
            } while (iVar3 < iVar2);
          }
          if (iVar4 == iVar2) {
            piVar1 = param_1 + iVar2 * 4;
            *piVar1 = *(int *)(local_94 + local_9c * 8);
            piVar1[1] = iVar5;
            piVar1[2] = 0;
            piVar1[3] = 0;
            param_1[0x100] = param_1[0x100] + 1;
          }
          if (iVar4 == -1) goto LAB_00ca54cd;
          iVar5 = *piVar6;
          if (iVar5 == 0x10) {
            FUN_00dd5650(&DAT_016b1b70);
          }
          else {
            iVar2 = 0;
            if (0 < iVar5) {
              do {
                if ((int *)piVar6[iVar2 + -0x10] == param_1 + iVar4 * 4) goto LAB_00ca54b9;
                iVar2 = iVar2 + 1;
              } while (iVar2 < iVar5);
            }
            piVar6[iVar5 + -0x10] = (int)(param_1 + iVar4 * 4);
            *piVar6 = *piVar6 + 1;
          }
LAB_00ca54b9:
          local_9c = local_9c + 1;
        } while (local_9c < local_84);
      }
      piVar6[5] = piVar6[5] | 0x80000000;
    }
    local_a0 = local_a0 + 1;
    piVar6 = piVar6 + 0x16;
    if (0x1f < local_a0) {
      if (local_94 != (undefined1 *)0x0) {
        local_8c = 0;
        if (local_88 != 0) {
          FUN_00dd48d0(local_94,0);
          local_88 = 0;
        }
        local_94 = (undefined1 *)0x0;
        local_90 = 0;
      }
      param_1[0x464] = param_1[0x464] | 0x80000000;
      if ((local_94 != (undefined1 *)0x0) && (local_8c = 0, local_88 != 0)) {
        FUN_00dd48d0(local_94,0);
      }
      return 1;
    }
  } while( true );
}

// 00CA5560  FUN_00ca5560  size=134  [callgraph]
undefined4 __thiscall FUN_00ca5560(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (((((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0) && (-1 < (int)param_2)) &&
      (param_2 < 0x20)) &&
     (((param_1 = param_2 * 0x58 + 0x404 + param_1, param_1 != 0 &&
       (uVar1 = *(uint *)(param_1 + 0x54), (int)uVar1 < 0)) &&
      (((uVar1 & 0x20000000) == 0 && ((uVar1 & 0x40000000) != 0)))))) {
    if (0 < *(int *)(param_1 + 0x40)) {
      iVar4 = 0;
      do {
        puVar2 = *(undefined4 **)(param_1 + iVar4 * 4);
        iVar3 = FUN_00a00ca0(*puVar2,puVar2[1]);
        if (iVar3 == 0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x40));
    }
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x20000000;
    return 1;
  }
  return 1;
}

// 00CA5630  FUN_00ca5630  size=63  [callgraph]
undefined4 __fastcall FUN_00ca5630(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((int)*(uint *)(param_1 + 0x1190) < 0) && ((*(uint *)(param_1 + 0x1190) & 0x40000000) != 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00ca5560(uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    return 1;
  }
  return 1;
}

// 00D5DF70  lib::StaticArray<int,8>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<int,8>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D660E0  lib::StaticArray<int,64>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<int,64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D66110  lib::StaticArray<EntityHandle,32>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<EntityHandle,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<EntityHandle>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D66140  lib::StaticArray<P610::Obstacle,128>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<P610::Obstacle,128>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<P610::Obstacle>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D66170  lib::StaticArray<cEnemyBoardManager::stEnemyBoard*,32>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<cEnemyBoardManager::stEnemyBoard*,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<cEnemyBoardManager::stEnemyBoard*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D6D180  lib::StaticArray<int,64>::StaticArray<int,64>_21  size=99  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_21(undefined4 *param_1)

{
  int iVar1;
  
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP458::vftable;
  iVar1 = 5;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0xaa] = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0xe2] = 0;
  return param_1;
}

// 00D6E160  lib::StaticArray<int,64>::StaticArray<int,64>_18  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_18(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP720::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00D6E760  lib::StaticArray<int,64>::StaticArray<int,64>_19  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_19(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cPf07::vftable;
  cMessWindowCtrl::cMessWindowCtrl();
  return param_1;
}

// 00D6EBB0  lib::StaticArray<int,64>::StaticArray<int,64>_16  size=61  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_16(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = P138::vftable;
  FUN_00a7c930();
  param_1[0x51] = 0;
  return param_1;
}

// 00D6EDC0  lib::StaticArray<int,64>::StaticArray<int,64>_17  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_17(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP2d0::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00D6F050  lib::StaticArray<int,64>::StaticArray<int,64>_7  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_7(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP370::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00D6F0B0  lib::StaticArray<int,64>::StaticArray<int,64>_6  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_6(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP380::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00D6F180  lib::StaticArray<int,8>::StaticArray<int,8>  size=132  [class]
undefined4 * __fastcall lib::StaticArray<int,8>::StaticArray<int,8>(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = StaticArray<int,64>::vftable;
  *param_1 = P420::vftable;
  cEspControler::cEspControler();
  param_1[0x7e] = 0;
  param_1[0x7f] = 8;
  param_1[0x7c] = StaticArray<EntityHandle,8>::vftable;
  param_1[0x7d] = param_1 + 0x80;
  param_1[0x8b] = 8;
  param_1[0x89] = param_1 + 0x8c;
  param_1[0x8a] = 0;
  param_1[0x88] = vftable;
  return param_1;
}

// 00D6F380  lib::StaticArray<int,64>::StaticArray<int,64>_10  size=62  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_10(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP730::vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00D6F3E0  lib::StaticArray<int,64>::StaticArray<int,64>_9  size=62  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_9(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP740::vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00D6F440  lib::StaticArray<int,64>::StaticArray<int,64>_12  size=62  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_12(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cP750::vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00D6F4F0  lib::StaticArray<int,64>::StaticArray<int,64>_11  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_11(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = VRPhase::vftable;
  cMessWindowCtrl::cMessWindowCtrl();
  return param_1;
}

// 00D6F5B0  lib::StaticArray<int,64>::StaticArray<int,64>_13  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_13(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = Pf13::vftable;
  FUN_009003e0();
  return param_1;
}

// 00D6F840  lib::StaticArray<int,64>::StaticArray<int,64>  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cPc30::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00D6F940  lib::StaticArray<int,64>::StaticArray<int,64>_3  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_3(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = cPc60::vftable;
  FUN_00a7c930();
  return param_1;
}

// 00D6FB00  lib::StaticArray<int,64>::StaticArray<int,64>_5  size=51  [class]
undefined4 * __fastcall lib::StaticArray<int,64>::StaticArray<int,64>_5(undefined4 *param_1)

{
  param_1[4] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0x40;
  param_1[3] = vftable;
  *param_1 = Pf31::vftable;
  cMessWindowCtrl::cMessWindowCtrl();
  return param_1;
}

// 00D7AA50  lib::StaticArray<unsigned_int,1024>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<unsigned_int,1024>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<unsigned_int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7AAE0  lib::StaticArray<Collision::History,5>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Collision::History,5>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision::History>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7AB10  lib::StaticArray<Collision::WithinOneFrame,5>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<Collision::WithinOneFrame,5>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision::WithinOneFrame>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7AB40  lib::StaticArray<Collision*,128>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Collision*,128>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7AB70  lib::StaticArray<Collision*,1024>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Collision*,1024>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Collision*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7ABC0  lib::StaticArray<unsigned_int,1024>::StaticArray<unsigned_int,1024>  size=105  [class]
undefined4 * __thiscall
lib::StaticArray<unsigned_int,1024>::StaticArray<unsigned_int,1024>
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *param_1 = CollisionIDAllocatorImplement::vftable;
  param_1[1] = param_2;
  param_1[8] = 0;
  param_1[10] = 1;
  FUN_00dd7240();
  puVar1 = (undefined4 *)FUN_00dd3500(0x1010,param_1[1]);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x400;
    *puVar1 = vftable;
    param_1[0xb] = puVar1;
    return param_1;
  }
  param_1[0xb] = 0;
  return param_1;
}

// 00D7B620  lib::StaticArray<BattleCollisionFilterImplement::LayerPair,1024>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<BattleCollisionFilterImplement::LayerPair,1024>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = Array<BattleCollisionFilterImplement::LayerPair>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7BEB0  lib::StaticArray<BattleCollisionFilterImplement::LayerPair,1024>::StaticArray<BattleCollisionFilterImplement::LayerPair,1024>  size=132  [class]
bool lib::StaticArray<BattleCollisionFilterImplement::LayerPair,1024>::
     StaticArray<BattleCollisionFilterImplement::LayerPair,1024>(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xc,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    DAT_01dc52e0 = (undefined4 *)0x0;
    return false;
  }
  *puVar1 = BattleCollisionFilterImplement::vftable;
  puVar1[1] = param_1;
  puVar2 = (undefined4 *)FUN_00dd3500(0x2010,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x400;
    *puVar2 = vftable;
    puVar1[2] = puVar2;
    DAT_01dc52e0 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  puVar1[2] = 0;
  DAT_01dc52e0 = puVar1;
  return puVar1 != (undefined4 *)0x0;
}

// 00D82EC0  lib::StaticArray<StateMachineNode*,32>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<StateMachineNode*,32>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<StateMachineNode*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D82EF0  lib::StaticArray<StateMachineNode*,32>::StaticArray<StateMachineNode*,32>  size=71  [class]
undefined4 * __fastcall
lib::StaticArray<StateMachineNode*,32>::StaticArray<StateMachineNode*,32>(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined4 *)FUN_00dd3500(0x90,&DAT_01b7bd48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x20;
    *puVar1 = vftable;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

// 00D82F40  lib::StaticArray<StateMachineNode*,32>::StaticArray<StateMachineNode*,32>_2  size=117  [class]
undefined4 __fastcall
lib::StaticArray<StateMachineNode*,32>::StaticArray<StateMachineNode*,32>_2(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    return 1;
  }
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00dd3500(0x90,&DAT_01b7bd48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x20;
    *puVar2 = vftable;
    *puVar1 = puVar2;
    *param_1 = puVar1;
    return 1;
  }
  *puVar1 = 0;
  *param_1 = puVar1;
  return 1;
}

// 00D82FF0  FUN_00d82ff0  size=598  [between]
void __fastcall FUN_00d82ff0(undefined4 *param_1)

{
  *param_1 = 0x3c23d70a;
  param_1[1] = 0x3dc8b439;
  param_1[2] = 0x3dcccccd;
  param_1[3] = 0x41200000;
  param_1[4] = 0x41200000;
  param_1[5] = 0x41200000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x40000000;
  param_1[8] = 0x3d0efa35;
  param_1[9] = 0x3dcccccd;
  param_1[10] = 0x40a00000;
  param_1[0xb] = 0x3d0efa35;
  param_1[0xc] = 0x3dcccccd;
  param_1[0xd] = 0x40000000;
  param_1[0xe] = 0x40800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x40400000;
  param_1[0x11] = 0x40c00000;
  param_1[0x12] = 0x40000000;
  param_1[0x13] = 0x40800000;
  param_1[0x14] = 0x40800000;
  param_1[0x15] = 0x3e4ccccd;
  param_1[0x16] = 0x40c00000;
  param_1[0x17] = 0x3f7d70a4;
  param_1[0x18] = 0x3e4ccccd;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x40400000;
  param_1[0x1c] = 0x3fc00000;
  param_1[0x1d] = 0x3fc00000;
  param_1[0x1e] = 0x40800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x40400000;
  param_1[0x21] = 0x3e19999a;
  param_1[0x22] = 0x40800000;
  param_1[0x26] = 0x40800000;
  param_1[0x23] = 0x3fc00000;
  param_1[0x24] = 0x40000000;
  param_1[0x25] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x28] = 0x3f000000;
  param_1[0x29] = 0x40000000;
  param_1[0x2a] = 0x40200000;
  param_1[0x2b] = 0x40000000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0x3f666666;
  param_1[0x2e] = 0x3f800000;
  param_1[0x2f] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  param_1[0x35] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x30] = 0x3f000000;
  param_1[0x32] = 0x40000000;
  param_1[0x34] = 0x40000000;
  param_1[0x37] = 0x40000000;
  param_1[0x33] = 0x3fc00000;
  param_1[0x38] = 0x40200000;
  param_1[0x39] = 0x40400000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x40400000;
  param_1[0x3c] = 0x4000a3d7;
  param_1[0x3d] = 0x40400000;
  param_1[0x3f] = 0x40400000;
  param_1[0x41] = 0x40400000;
  param_1[0x3e] = 0x3fc00000;
  param_1[0x40] = 0;
  param_1[0x42] = 0x40a00000;
  param_1[0x43] = 0x4040a3d7;
  param_1[0x44] = 0x40a00000;
  param_1[0x45] = 0x40c00000;
  param_1[0x46] = 0x3f000000;
  param_1[0x47] = 0x3f000000;
  param_1[0x48] = 0x3f8ccccd;
  param_1[0x49] = 0x3f800000;
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x3f800000;
  param_1[0x4c] = 0x3f4ccccd;
  param_1[0x4d] = 0x3f800000;
  param_1[0x4e] = 0x3f800000;
  param_1[0x4f] = 0x3f800000;
  param_1[0x50] = 0x3f800000;
  param_1[0x51] = 0x3f800000;
  param_1[0x52] = 0x3f99999a;
  return;
}

// 00D83250  FUN_00d83250  size=56  [between]
undefined4 FUN_00d83250(float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_5;
  fVar2 = SQRT((fVar1 + fVar1) * (float10)param_4) / fVar1;
  fVar1 = fVar2 * fVar1;
  fVar2 = (float10)param_3 / fVar2;
  *param_2 = (float)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar1 = (float10)fpatan(fVar1,fVar2);
  *param_1 = (float)fVar1;
  return 1;
}

// 00D83290  FUN_00d83290  size=166  [between]
undefined4 FUN_00d83290(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)60.0;
  while( true ) {
    fVar2 = fVar1 * (float10)0.017453292;
    fVar3 = (float10)fsin(fVar2);
    fVar3 = fVar3 * (float10)param_5;
    fVar2 = (float10)fcos(fVar2);
    fVar2 = fVar2 * (float10)param_5 *
            -((-SQRT(fVar3 * fVar3 - (float10)param_4 * (float10)-2.0 * (float10)param_3) - fVar3) /
             (float10)param_4);
    if (((float10)param_2 < fVar2) && (fVar2 < (float10)param_2 + (float10)1.0)) break;
    fVar1 = fVar1 - (float10)1.0;
    if ((float10)0 < fVar1 == ((float10)0 == fVar1)) {
      *param_1 = 0.7853982;
      return 0;
    }
  }
  *param_1 = (float)((float10)0.017453292 * fVar1);
  return 1;
}

// 00D83440  FUN_00d83440  size=39  [between]
int __fastcall FUN_00d83440(int param_1)

{
  int *piVar1;
  undefined1 local_c [12];
  
  piVar1 = (int *)FUN_00c1bd10();
  (**(code **)(*piVar1 + 8))(local_c,param_1 + 0xd60);
  return param_1;
}

// 00D834C0  FUN_00d834c0  size=104  [between]
uint FUN_00d834c0(int *param_1,code *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  pcVar2 = param_2;
  piVar1 = param_1;
  iVar5 = *param_1;
  uVar4 = 0;
  if (iVar5 != param_1[1] * 0x30 + iVar5) {
    do {
      iVar3 = (int)*(char *)(*(int *)(iVar5 + 0x28) + 0x10) + *(int *)(iVar5 + 0x28);
      if (iVar3 != 0) {
        param_1 = (int *)0x0;
        iVar3 = (*pcVar2)(&param_1,iVar3);
        if (iVar3 != 0) {
          return (uint)param_1;
        }
        uVar4 = uVar4 | (uint)param_1;
      }
      iVar5 = iVar5 + 0x30;
    } while (iVar5 != piVar1[1] * 0x30 + *piVar1);
  }
  return uVar4;
}

// 00D83540  FUN_00d83540  size=54  [between]
void __thiscall FUN_00d83540(int param_1,float *param_2,float param_3)

{
  *param_2 = *(float *)(param_1 + 0xd70) * param_3;
  param_2[1] = *(float *)(param_1 + 0xd74) * param_3;
  param_2[2] = *(float *)(param_1 + 0xd78) * param_3;
  param_2[3] = param_3 * *(float *)(param_1 + 0xd7c);
  return;
}

// 00D83580  FUN_00d83580  size=54  [between]
void __thiscall FUN_00d83580(int param_1,float *param_2,float param_3)

{
  *param_2 = *(float *)(param_1 + 0xd80) * param_3;
  param_2[1] = *(float *)(param_1 + 0xd84) * param_3;
  param_2[2] = *(float *)(param_1 + 0xd88) * param_3;
  param_2[3] = param_3 * *(float *)(param_1 + 0xd8c);
  return;
}

// 00D835C0  FUN_00d835c0  size=44  [between]
void FUN_00d835c0(float *param_1,float param_2)

{
  float local_14;
  
  *param_1 = param_2 * 0.0;
  param_1[2] = param_2 * 0.0;
  param_1[1] = param_2;
  param_1[3] = param_2 * local_14;
  return;
}

// 00D835F0  FUN_00d835f0  size=20  [between]
void __thiscall FUN_00d835f0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x70 + *(int *)(param_1 + 0x18)) = param_3;
  return;
}

// 00D83610  FUN_00d83610  size=133  [between]
void __fastcall FUN_00d83610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != *(int *)(param_1 + 0x1c) * 0x70 + iVar1) {
    puVar2 = (undefined4 *)(iVar1 + 0x48);
    do {
      puVar2[-0x11] = 0;
      puVar2[-0x10] = 0;
      puVar2[-0xc] = 0;
      puVar2[-0xf] = 0;
      puVar2[-9] = 0;
      puVar2[-0xe] = 0;
      puVar2[-10] = 0;
      puVar2[-0xd] = 0;
      puVar2[-7] = 0;
      puVar2[-0xb] = 0;
      puVar2[-8] = 0;
      puVar2[-6] = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      FUN_00a7c950();
      FUN_00a7c950();
      iVar1 = iVar1 + 0x70;
      puVar2 = puVar2 + 0x1c;
    } while (iVar1 != *(int *)(param_1 + 0x1c) * 0x70 + *(int *)(param_1 + 0x18));
  }
  return;
}

// 00D836D0  FUN_00d836d0  size=145  [between]
byte __thiscall FUN_00d836d0(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  cVar1 = (**(code **)(*param_2 + 0x10))("dashGearSingle",7);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x2c))(param_1);
    (**(code **)(*param_2 + 0x14))("dashGearSingle",7);
  }
  bVar3 = 7;
  cVar1 = (**(code **)(*param_2 + 0x10))("wallRunFromJumpOnly");
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = (**(code **)(*param_2 + 0x2c))(param_1 + 4);
  (**(code **)(*param_2 + 0x14))("wallRunFromJumpOnly",7);
  return bVar2 & bVar3;
}

// 00D83770  FUN_00d83770  size=5909  [between]
byte __thiscall FUN_00d83770(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte unaff_DI;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  
  bVar81 = 0xc4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThresholdBase",0xb);
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*param_2 + 0x1c))(param_1);
    (**(code **)(*param_2 + 0x14))("kThresholdBase",0xb);
  }
  bVar80 = 0xb0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThicknessOfGround",0xb);
  if (cVar1 == '\0') {
    unaff_DI = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 4);
    (**(code **)(*param_2 + 0x14))("kThicknessOfGround",0xb);
  }
  bVar79 = 0x9c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThicknessOfWall",0xb);
  if (cVar1 == '\0') {
    bVar81 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 8);
    (**(code **)(*param_2 + 0x14))("kThicknessOfWall",0xb);
  }
  bVar78 = 0x78;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThresholdHeightOfSpecialLanding",0xb);
  if (cVar1 == '\0') {
    bVar80 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xc);
    (**(code **)(*param_2 + 0x14))("kThresholdHeightOfSpecialLanding",0xb);
  }
  bVar77 = 0x68;
  cVar1 = (**(code **)(*param_2 + 0x10))("kFrontMaxLenght",0xb);
  if (cVar1 == '\0') {
    bVar79 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x10);
    (**(code **)(*param_2 + 0x14))("kFrontMaxLenght",0xb);
  }
  bVar76 = 0x5c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kUpMxLength",0xb);
  if (cVar1 == '\0') {
    bVar78 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x14);
    (**(code **)(*param_2 + 0x14))("kUpMxLength",0xb);
  }
  bVar75 = 0x3c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThresholdAtCenterOfThickness",0xb);
  if (cVar1 == '\0') {
    bVar77 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x1c);
    (**(code **)(*param_2 + 0x14))("kThresholdAtCenterOfThickness",0xb);
  }
  bVar74 = 0x24;
  cVar1 = (**(code **)(*param_2 + 0x10))("kTurnMaxAngleForSliding",0xb);
  if (cVar1 == '\0') {
    bVar76 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x20);
    (**(code **)(*param_2 + 0x14))("kTurnMaxAngleForSliding",0xb);
  }
  bVar73 = 0x10;
  cVar1 = (**(code **)(*param_2 + 0x10))("kTurnRateForSliding",0xb);
  if (cVar1 == '\0') {
    bVar75 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x24);
    (**(code **)(*param_2 + 0x14))("kTurnRateForSliding",0xb);
  }
  bVar72 = 0xfc;
  cVar1 = (**(code **)(*param_2 + 0x10))("kDistanceOfSliding",0xb);
  if (cVar1 == '\0') {
    bVar74 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x28);
    (**(code **)(*param_2 + 0x14))("kDistanceOfSliding",0xb);
  }
  bVar71 = 0xe0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kTurnMaxAngleForDiveRoll",0xb);
  if (cVar1 == '\0') {
    bVar73 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x2c);
    (**(code **)(*param_2 + 0x14))("kTurnMaxAngleForDiveRoll",0xb);
  }
  bVar70 = 200;
  cVar1 = (**(code **)(*param_2 + 0x10))("kTurnRateForDiveRoll",0xb);
  if (cVar1 == '\0') {
    bVar72 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x30);
    (**(code **)(*param_2 + 0x14))("kTurnRateForDiveRoll",0xb);
  }
  bVar69 = 0xb4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kDistanceOfDiveRoll",0xb);
  if (cVar1 == '\0') {
    bVar71 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x34);
    (**(code **)(*param_2 + 0x14))("kDistanceOfDiveRoll",0xb);
  }
  bVar68 = 0x9c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kDistanceOfHorizotalBar",0xb);
  if (cVar1 == '\0') {
    bVar70 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x38);
    (**(code **)(*param_2 + 0x14))("kDistanceOfHorizotalBar",0xb);
  }
  bVar67 = 0x84;
  cVar1 = (**(code **)(*param_2 + 0x10))("kWidthOfHorizontalBar",0xb);
  if (cVar1 == '\0') {
    bVar69 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x3c);
    (**(code **)(*param_2 + 0x14))("kWidthOfHorizontalBar",0xb);
  }
  bVar66 = 0x6c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kHeightOfHorizontalBar",0xb);
  if (cVar1 == '\0') {
    bVar68 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x40);
    (**(code **)(*param_2 + 0x14))("kHeightOfHorizontalBar",0xb);
  }
  bVar65 = 0x54;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar67 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x44);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfCliff",0xb);
  }
  bVar64 = 0x38;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfShortCliff",0xb);
  if (cVar1 == '\0') {
    bVar66 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x48);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfShortCliff",0xb);
  }
  bVar63 = 0x1c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfMiddleCliff",0xb);
  if (cVar1 == '\0') {
    bVar65 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x4c);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfMiddleCliff",0xb);
  }
  bVar62 = 0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfLongCliff",0xb);
  if (cVar1 == '\0') {
    bVar64 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x50);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfLongCliff",0xb);
  }
  bVar61 = 0xec;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinDistanceOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar63 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x54);
    (**(code **)(*param_2 + 0x14))("kMinDistanceOfCliff",0xb);
  }
  bVar60 = 0xd8;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar62 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x58);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfCliff",0xb);
  }
  bVar59 = 0xbc;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThreasholdDistanceOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar61 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x5c);
    (**(code **)(*param_2 + 0x14))("kThreasholdDistanceOfCliff",0xb);
  }
  bVar58 = 0xa0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThreasholdHeightOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar60 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x60);
    (**(code **)(*param_2 + 0x14))("kThreasholdHeightOfCliff",0xb);
  }
  bVar57 = 0x8c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseHeightOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar59 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 100);
    (**(code **)(*param_2 + 0x14))("kBaseHeightOfCliff",0xb);
  }
  bVar56 = 0x78;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar58 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x68);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfCliff",0xb);
  }
  bVar55 = 100;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfCliff",0xb);
  if (cVar1 == '\0') {
    bVar57 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x6c);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfCliff",0xb);
  }
  bVar54 = 0x40;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceCliffAheadShortCliff",0xb);
  if (cVar1 == '\0') {
    bVar56 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x70);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceCliffAheadShortCliff",0xb);
  }
  bVar53 = 0x1c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfBetweenToFootAhead",0xb);
  if (cVar1 == '\0') {
    bVar55 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x74);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfBetweenToFootAhead",0xb);
  }
  bVar52 = 0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfShortCliff",0xb);
  if (cVar1 == '\0') {
    bVar54 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x78);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfShortCliff",0xb);
  }
  bVar51 = 0xe8;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfShortCliff",0xb);
  if (cVar1 == '\0') {
    bVar53 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x7c);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfShortCliff",0xb);
  }
  bVar50 = 0xcc;
  cVar1 = (**(code **)(*param_2 + 0x10))("kSwitchDistanceOfShortCliff",0xb);
  if (cVar1 == '\0') {
    bVar52 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x80);
    (**(code **)(*param_2 + 0x14))("kSwitchDistanceOfShortCliff",0xb);
  }
  bVar49 = 0xb0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kSwitchDistanceOfLongCliff",0xb);
  if (cVar1 == '\0') {
    bVar51 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x88);
    (**(code **)(*param_2 + 0x14))("kSwitchDistanceOfLongCliff",0xb);
  }
  bVar48 = 0x94;
  cVar1 = (**(code **)(*param_2 + 0x10))("kSwitchHeightOfShortCliff",0xb);
  if (cVar1 == '\0') {
    bVar50 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x84);
    (**(code **)(*param_2 + 0x14))("kSwitchHeightOfShortCliff",0xb);
  }
  bVar47 = 0x78;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxThicknessOfShortCliff",0xb);
  if (cVar1 == '\0') {
    bVar49 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x8c);
    (**(code **)(*param_2 + 0x14))("kMaxThicknessOfShortCliff",0xb);
  }
  bVar46 = 0x5c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfUnevenCliff",0xb);
  if (cVar1 == '\0') {
    bVar48 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x90);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfUnevenCliff",0xb);
  }
  bVar45 = 0x40;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseHeightOfUnevenCliff",0xb);
  if (cVar1 == '\0') {
    bVar47 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x9c);
    (**(code **)(*param_2 + 0x14))("kBaseHeightOfUnevenCliff",0xb);
  }
  bVar44 = 0x24;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinDistanceOfUnevenCliff",0xb);
  if (cVar1 == '\0') {
    bVar46 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x94);
    (**(code **)(*param_2 + 0x14))("kMinDistanceOfUnevenCliff",0xb);
  }
  bVar43 = 8;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfUnevenCliff",0xb);
  if (cVar1 == '\0') {
    bVar45 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x98);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfUnevenCliff",0xb);
  }
  bVar42 = 0xf0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfUnevenCliff",0xb);
  if (cVar1 == '\0') {
    bVar44 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xa0);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfUnevenCliff",0xb);
  }
  bVar41 = 0xd8;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfUnevenCliff",0xb);
  if (cVar1 == '\0') {
    bVar43 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xa4);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfUnevenCliff",0xb);
  }
  bVar40 = 0xbc;
  cVar1 = (**(code **)(*param_2 + 0x10))("kHopThicknessOfUnevenCliff",0xb);
  if (cVar1 == '\0') {
    bVar42 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xa8);
    (**(code **)(*param_2 + 0x14))("kHopThicknessOfUnevenCliff",0xb);
  }
  bVar39 = 0xa0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinDistanceOfDownwardCliff",0xb);
  if (cVar1 == '\0') {
    bVar41 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xac);
    (**(code **)(*param_2 + 0x14))("kMinDistanceOfDownwardCliff",0xb);
  }
  bVar38 = 0x84;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfLowObstacle",0xb);
  if (cVar1 == '\0') {
    bVar40 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xb0);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfLowObstacle",0xb);
  }
  bVar37 = 0x68;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinDistanceOfLowObstacle",0xb);
  if (cVar1 == '\0') {
    bVar39 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xb4);
    (**(code **)(*param_2 + 0x14))("kMinDistanceOfLowObstacle",0xb);
  }
  bVar36 = 0x4c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfLowObstacle",0xb);
  if (cVar1 == '\0') {
    bVar38 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xb8);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfLowObstacle",0xb);
  }
  bVar35 = 0x30;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseHeightOfLowObstacle",0xb);
  if (cVar1 == '\0') {
    bVar37 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xbc);
    (**(code **)(*param_2 + 0x14))("kBaseHeightOfLowObstacle",0xb);
  }
  bVar34 = 0x18;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfLowObstacle",0xb);
  if (cVar1 == '\0') {
    bVar36 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xc0);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfLowObstacle",0xb);
  }
  bVar33 = 0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfLowObstacle",0xb);
  if (cVar1 == '\0') {
    bVar35 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xc4);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfLowObstacle",0xb);
  }
  bVar32 = 0xe0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfMiddleObstacle",0xb);
  if (cVar1 == '\0') {
    bVar34 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 200);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfMiddleObstacle",0xb);
  }
  bVar31 = 0xc4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseHeightOfMiddleObstacle",0xb);
  if (cVar1 == '\0') {
    bVar33 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xd4);
    (**(code **)(*param_2 + 0x14))("kBaseHeightOfMiddleObstacle",0xb);
  }
  bVar30 = 0xa4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinDistanceOfMiddleObstacle",0xb);
  if (cVar1 == '\0') {
    bVar32 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xcc);
    (**(code **)(*param_2 + 0x14))("kMinDistanceOfMiddleObstacle",0xb);
  }
  bVar29 = 0x84;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfMiddleObstacle",0xb);
  if (cVar1 == '\0') {
    bVar31 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xd0);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfMiddleObstacle",0xb);
  }
  bVar28 = 0x68;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfMiddleObstacle",0xb);
  if (cVar1 == '\0') {
    bVar30 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xd8);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfMiddleObstacle",0xb);
  }
  bVar27 = 0x4c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfMiddleObstacle",0xb);
  if (cVar1 == '\0') {
    bVar29 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xdc);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfMiddleObstacle",0xb);
  }
  bVar26 = 0x2c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kHopThicknessOfMiddleObstacle",0xb);
  if (cVar1 == '\0') {
    bVar28 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xe0);
    (**(code **)(*param_2 + 0x14))("kHopThicknessOfMiddleObstacle",0xb);
  }
  bVar25 = 0x10;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar27 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xe4);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfHighObstacle",0xb);
  }
  bVar24 = 0xf4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinDistanceOfHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar26 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xe8);
    (**(code **)(*param_2 + 0x14))("kMinDistanceOfHighObstacle",0xb);
  }
  bVar23 = 0xd8;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar25 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xec);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfHighObstacle",0xb);
  }
  bVar22 = 0xbc;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar24 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xf0);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfHighObstacle",0xb);
  }
  bVar21 = 0xa0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar23 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xf4);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfHighObstacle",0xb);
  }
  bVar20 = 0x84;
  cVar1 = (**(code **)(*param_2 + 0x10))("kSpeedRateOfHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar22 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xf8);
    (**(code **)(*param_2 + 0x14))("kSpeedRateOfHighObstacle",0xb);
  }
  bVar19 = 100;
  cVar1 = (**(code **)(*param_2 + 0x10))("kBaseDistanceOfMostHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar21 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xfc);
    (**(code **)(*param_2 + 0x14))("kBaseDistanceOfMostHighObstacle",0xb);
  }
  bVar18 = 0x44;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinDistanceOfMostHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar20 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("kMinDistanceOfMostHighObstacle",0xb);
  }
  bVar17 = 0x24;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfMostHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar19 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x104);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfMostHighObstacle",0xb);
  }
  bVar16 = 4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfMostHighObstacle",0xb);
  if (cVar1 == '\0') {
    bVar18 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x10c);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfMostHighObstacle",0xb);
  }
  bVar15 = 0xe4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfMostHighOBstacle",0xb);
  if (cVar1 == '\0') {
    bVar17 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x110);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfMostHighOBstacle",0xb);
  }
  bVar14 = 0xd0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfCatLeap",0xb);
  if (cVar1 == '\0') {
    bVar16 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x118);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfCatLeap",0xb);
  }
  bVar13 = 0xb8;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxDistanceOfCatLeap",0xb);
  if (cVar1 == '\0') {
    bVar15 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x114);
    (**(code **)(*param_2 + 0x14))("kMaxDistanceOfCatLeap",0xb);
  }
  bVar12 = 0xa4;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThicknessOfWallHop",0xb);
  if (cVar1 == '\0') {
    bVar14 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x11c);
    (**(code **)(*param_2 + 0x14))("kThicknessOfWallHop",0xb);
  }
  bVar11 = 0x8c;
  cVar1 = (**(code **)(*param_2 + 0x10))("kThicknessOfWallOver",0xb);
  if (cVar1 == '\0') {
    bVar13 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x120);
    (**(code **)(*param_2 + 0x14))("kThicknessOfWallOver",0xb);
  }
  bVar10 = 100;
  cVar1 = (**(code **)(*param_2 + 0x10))("kAbsorbDistanceOfWallEdgeGrabFromOver",0xb);
  if (cVar1 == '\0') {
    bVar12 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x124);
    (**(code **)(*param_2 + 0x14))("kAbsorbDistanceOfWallEdgeGrabFromOver",0xb);
  }
  bVar9 = 0x40;
  cVar1 = (**(code **)(*param_2 + 0x10))("kAbosrbHeightOfWallEdgeGrabFromOver",0xb);
  if (cVar1 == '\0') {
    bVar11 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x128);
    (**(code **)(*param_2 + 0x14))("kAbosrbHeightOfWallEdgeGrabFromOver",0xb);
  }
  bVar8 = 0x20;
  cVar1 = (**(code **)(*param_2 + 0x10))("kDistanceOfWallEdgeGrabFromOver",0xb);
  if (cVar1 == '\0') {
    bVar10 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 300);
    (**(code **)(*param_2 + 0x14))("kDistanceOfWallEdgeGrabFromOver",0xb);
  }
  bVar7 = 0xfc;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfWallEdgeGrabFromOver",0xb);
  if (cVar1 == '\0') {
    bVar9 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x130);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfWallEdgeGrabFromOver",0xb);
  }
  bVar6 = 0xd8;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfWallEdgeGrabFromOver",0xb);
  if (cVar1 == '\0') {
    bVar8 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x134);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfWallEdgeGrabFromOver",0xb);
  }
  bVar5 = 0xb0;
  cVar1 = (**(code **)(*param_2 + 0x10))("kAbsorbDistanceOfWallEdgeGrabFromBelow",0xb);
  if (cVar1 == '\0') {
    bVar7 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x138);
    (**(code **)(*param_2 + 0x14))("kAbsorbDistanceOfWallEdgeGrabFromBelow",0xb);
  }
  bVar4 = 0x88;
  cVar1 = (**(code **)(*param_2 + 0x10))("kAbosrbHeightOfWallEdgeGrabFromBelow",0xb);
  if (cVar1 == '\0') {
    bVar6 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x13c);
    (**(code **)(*param_2 + 0x14))("kAbosrbHeightOfWallEdgeGrabFromBelow",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("kDistanceOfWallEdgeGrabFromBelow",0xb);
  if (cVar1 == '\0') {
    bVar5 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x140);
    (**(code **)(*param_2 + 0x14))("kDistanceOfWallEdgeGrabFromBelow",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("kMinHeightOfWallEdgeGrabFromBelow",0xb);
  if (cVar1 == '\0') {
    bVar4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x144);
    (**(code **)(*param_2 + 0x14))("kMinHeightOfWallEdgeGrabFromBelow",0xb);
  }
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("kMaxHeightOfWallEdgeGrabFromBelow");
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x148);
    (**(code **)(*param_2 + 0x14))("kMaxHeightOfWallEdgeGrabFromBelow",0xb);
    return bVar3 & bVar2 & 1 & unaff_DI & bVar81 & bVar80 & bVar79 & bVar78 & bVar77 & bVar76 &
                   bVar75 & bVar74 & bVar73 & bVar72 & bVar71 & bVar70 & bVar69 & bVar68 & bVar67 &
                   bVar66 & bVar65 & bVar64 & bVar63 & bVar62 & bVar61 & bVar60 & bVar59 & bVar58 &
                   bVar57 & bVar56 & bVar55 & bVar54 & bVar53 & bVar52 & bVar51 & bVar50 & bVar49 &
                   bVar48 & bVar47 & bVar46 & bVar45 & bVar44 & bVar43 & bVar42 & bVar41 & bVar40 &
                   bVar39 & bVar38 & bVar37 & bVar36 & bVar35 & bVar34 & bVar33 & bVar32 & bVar31 &
                   bVar30 & bVar29 & bVar28 & bVar27 & bVar26 & bVar25 & bVar24 & bVar23 & bVar22 &
                   bVar21 & bVar20 & bVar19 & bVar18 & bVar17 & bVar16 & bVar15 & bVar14 & bVar13 &
                   bVar12 & bVar11 & bVar10 & bVar9 & bVar8 & bVar7 & bVar6 & bVar5 & bVar4;
  }
  return 0;
}

// 00D85030  lib::StaticArray<FreeRunActivity::Info,30>::vf00  size=47  [class]
undefined4 * __thiscall
lib::StaticArray<FreeRunActivity::Info,30>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<FreeRunActivity::Info>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D85060  FUN_00d85060  size=112  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00d85060(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01dc53cc & 1) == 0) {
    _DAT_01dc53cc = _DAT_01dc53cc | 1;
    DAT_01dc53c8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01dc53c8;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01dc53c8);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00d836d0(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00D850D0  FUN_00d850d0  size=143  [between]
undefined4 * __thiscall FUN_00d850d0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int unaff_EDI;
  int local_74;
  
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = param_2;
  if (param_3 != 0) {
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    FUN_00e91420(param_3);
    cVar1 = (**(code **)(local_74 + 0x10))(&DAT_0164a448,0);
    FUN_00d85060(&stack0xffffff84,"freeRunFlag",param_1);
    if (cVar1 != '\0') {
      (**(code **)(unaff_EDI + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
  }
  return param_1;
}

// 00D85160  lib::StaticArray<FreeRunActivity::Info,30>::StaticArray<FreeRunActivity::Info,30>  size=230  [class]
int __fastcall
lib::StaticArray<FreeRunActivity::Info,30>::StaticArray<FreeRunActivity::Info,30>(int param_1)

{
  uint local_84;
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
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  *(int *)(param_1 + 0x18) = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x1e;
  *(undefined ***)(param_1 + 0x14) = vftable;
  local_84 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      local_80 = 1;
      FUN_00a7c930();
      FUN_00a7c930();
      local_78 = 0;
      local_74 = 0;
      local_7c = 0;
      local_70 = 0;
      local_68 = 0;
      local_6c = 0;
      local_5c = 0;
      local_64 = 0;
      local_60 = 0;
      local_40 = 0;
      local_54 = 0;
      local_3c = 0;
      local_58 = 0;
      local_38 = 0;
      local_50 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      FUN_00a7c950();
      FUN_00a7c950();
      (**(code **)(*(int *)(param_1 + 0x14) + 8))(&local_80);
      local_84 = local_84 + 1;
    } while (local_84 < *(uint *)(param_1 + 0x20));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc40) = 0;
  return param_1;
}

// 00D85250  FUN_00d85250  size=1333  [callgraph]
int __fastcall FUN_00d85250(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float local_5e4;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_594;
  undefined4 local_590;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530 [4];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  float local_30;
  float local_28;
  
  fVar1 = *(float *)(param_1 + 0xdac) + *(float *)(param_1 + 0xda8);
  local_59c = *(undefined4 *)(param_1 + 0xda0);
  local_5c0 = *(float *)(param_1 + 0xd70) * fVar1 + *(float *)(param_1 + 0xd60);
  local_5bc = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0xd74) * fVar1;
  local_5b8 = *(float *)(param_1 + 0xd68) + *(float *)(param_1 + 0xd78) * fVar1;
  local_5b4 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * fVar1;
  fVar1 = *(float *)(*(int *)(param_1 + 0xd58) + 0x10);
  local_594 = 0;
  local_590 = 0;
  local_5a0 = 0x1a;
  local_568 = *(float *)(param_1 + 0xd88) * fVar1;
  local_5b0 = *(float *)(param_1 + 0xd80) * fVar1 + local_5c0;
  local_5ac = *(float *)(param_1 + 0xd84) * fVar1 + local_5bc;
  local_5a8 = local_568 + local_5b8;
  local_5a4 = *(float *)(param_1 + 0xd8c) * fVar1 + local_5b4;
  FUN_00a84140(0xff000000,0x1a,&DAT_016c24fc);
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar8 = BehaviorUtility::checkRay(local_530,&local_5c0);
  if (iVar8 != 0) {
    FUN_00a84420(0xff000000,0x1a,&DAT_016c24fc);
    local_580 = local_520;
    pfVar2 = *(float **)(param_1 + 0xd58);
    local_57c = local_51c;
    local_578 = local_518;
    local_574 = local_514;
    fVar5 = SQRT((local_28 - local_518) * (local_28 - local_518) +
                 (local_30 - local_520) * (local_30 - local_520));
    fVar3 = -*pfVar2;
    local_564 = *(float *)(param_1 + 0xd8c) * fVar3;
    fVar1 = pfVar2[5];
    local_5c0 = *(float *)(param_1 + 0xd80) * fVar3 +
                *(float *)(param_1 + 0xd70) * fVar1 + local_520;
    local_5bc = *(float *)(param_1 + 0xd84) * fVar3 +
                *(float *)(param_1 + 0xd74) * fVar1 + local_51c;
    local_5b8 = *(float *)(param_1 + 0xd78) * fVar1 + local_518 +
                *(float *)(param_1 + 0xd88) * fVar3;
    local_5b4 = fVar1 * *(float *)(param_1 + 0xd7c) + local_514 + local_564;
    fVar1 = pfVar2[2];
    local_568 = *(float *)(param_1 + 0xd88) * fVar1;
    fVar3 = *(float *)(param_1 + 0xd80) * fVar1 + local_5c0;
    fVar4 = *(float *)(param_1 + 0xd84) * fVar1 + local_5bc;
    fVar6 = local_568 + local_5b8;
    fVar1 = *(float *)(param_1 + 0xd8c) * fVar1 + local_5b4;
    local_5b0 = fVar3;
    local_5ac = fVar4;
    local_5a8 = fVar6;
    local_5a4 = fVar1;
    FUN_00a84140(0xff000000,0x1a,&DAT_016c24fc);
    local_5e4 = *(float *)(*(int *)(param_1 + 0xd58) + 0x14);
    iVar8 = BehaviorUtility::checkRay(local_530,&local_5c0);
    if (iVar8 == 0) {
      fVar7 = -*(float *)(*(int *)(param_1 + 0xd58) + 0x14);
      local_5b0 = fVar7 * *(float *)(param_1 + 0xd70) + fVar3;
      local_5ac = fVar7 * *(float *)(param_1 + 0xd74) + fVar4;
      local_5a8 = fVar7 * *(float *)(param_1 + 0xd78) + fVar6;
      local_5a4 = fVar7 * *(float *)(param_1 + 0xd7c) + fVar1;
      local_5c0 = fVar3;
      local_5bc = fVar4;
      local_5b8 = fVar6;
      local_5b4 = fVar1;
      FUN_00a84140(0xff000000,0x1a,&DAT_016c24fc);
      iVar8 = BehaviorUtility::checkRay(local_530,&local_5c0);
      if (iVar8 == 0) goto LAB_00d85581;
      local_5e4 = local_51c - *(float *)(param_1 + 0xd64);
      local_534 = *(undefined4 *)(param_1 + 0xda0);
      local_560 = local_580;
      local_55c = local_57c;
      local_558 = local_578;
      local_554 = local_574;
      local_550 = *(undefined4 *)(param_1 + 0xd80);
      local_54c = *(undefined4 *)(param_1 + 0xd84);
      local_548 = *(undefined4 *)(param_1 + 0xd88);
      local_544 = *(undefined4 *)(param_1 + 0xd8c);
      local_540 = *(undefined4 *)(*(int *)(param_1 + 0xd58) + 0x10);
      local_53c = local_530[0];
      local_538 = 0x1a;
      iVar8 = FUN_00a8a710(&local_5c4,&local_560);
      if ((iVar8 != 0) &&
         (fVar1 = *(float *)(*(int *)(param_1 + 0xd58) + 0x11c),
         fVar1 < local_5c4 != (fVar1 == local_5c4))) {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x558) = 1;
        *(float *)(*(int *)(param_1 + 0x18) + 0x55c) = ABS(local_5e4);
        *(float *)(*(int *)(param_1 + 0x18) + 0x550) = local_5e4;
        *(float *)(*(int *)(param_1 + 0x18) + 0x554) = local_5c4;
      }
    }
    else {
      FUN_00a84420(0xff000000,0x1a,&DAT_016c24fc);
    }
    if ((*(float *)(param_1 + 0xe10) <= 0.0) ||
       ((0.0 < *(float *)(param_1 + 0xe10) && (fVar5 < *(float *)(param_1 + 0xe10))))) {
      *(float *)(*(int *)(param_1 + 0x18) + 0x548) = fVar5;
      *(float *)(*(int *)(param_1 + 0x18) + 0x54c) = ABS(local_5e4);
      *(float *)(*(int *)(param_1 + 0x18) + 0x550) = local_5e4;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x544) = 1;
      hkpCdPointCollector::hkpCdPointCollector_16();
      return param_1;
    }
  }
LAB_00d85581:
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D85790  FUN_00d85790  size=586  [callgraph]
int __fastcall FUN_00d85790(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_554;
  undefined4 local_550;
  float local_538;
  int local_530 [4];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  
  fVar1 = *(float *)(param_1 + 0xdac) + 1.0;
  local_55c = *(undefined4 *)(param_1 + 0xda0);
  local_580 = *(float *)(param_1 + 0xd60) + fVar1 * *(float *)(param_1 + 0xd70);
  local_57c = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0xd74) * fVar1;
  local_578 = *(float *)(param_1 + 0xd78) * fVar1 + *(float *)(param_1 + 0xd68);
  local_574 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * fVar1;
  fVar1 = *(float *)(*(int *)(param_1 + 0xd58) + 0x10);
  local_554 = 0;
  local_550 = 0;
  local_560 = 0x1b;
  local_538 = *(float *)(param_1 + 0xd88) * fVar1;
  local_570 = *(float *)(param_1 + 0xd80) * fVar1 + local_580;
  local_56c = *(float *)(param_1 + 0xd84) * fVar1 + local_57c;
  local_568 = local_538 + local_578;
  local_564 = *(float *)(param_1 + 0xd8c) * fVar1 + local_574;
  FUN_00a84140(0xff404040,0x1a,"avoid");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar2 = BehaviorUtility::checkRay(local_530,&local_580);
  if (iVar2 != 0) {
    uVar3 = 0;
    if (local_530[0] != 0) {
      uVar3 = *(uint *)(local_530[0] + 0xc);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0x30);
      }
    }
    if ((uVar3 & 0x800) != 0) {
      FUN_00a84420(0xff404040,0x1a,"avoid");
      fVar1 = -**(float **)(param_1 + 0xd58);
      local_560 = 0x1a;
      local_570 = local_520 + *(float *)(param_1 + 0xd80) * fVar1;
      local_56c = local_51c + *(float *)(param_1 + 0xd84) * fVar1;
      local_568 = *(float *)(param_1 + 0xd88) * fVar1 + local_518;
      local_564 = local_514 + *(float *)(param_1 + 0xd8c) * fVar1;
      iVar2 = FUN_00a89440(&local_580);
      if (iVar2 == 0) {
        local_520 = *(float *)(param_1 + 0xd60) - local_520;
        local_518 = *(float *)(param_1 + 0xd68) - local_518;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x410) = 1;
        fVar1 = SQRT(local_518 * local_518 + local_520 * local_520);
        if (*(float *)(*(int *)(param_1 + 0xd58) + 0xec) < fVar1) {
          hkpCdPointCollector::hkpCdPointCollector_16();
          return param_1;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3f4) = 1;
        *(float *)(*(int *)(param_1 + 0x18) + 0x3f8) = fVar1;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3fc) = 0x40400000;
      }
    }
  }
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D859E0  FUN_00d859e0  size=401  [callgraph]
int __fastcall FUN_00d859e0(int param_1)

{
  int iVar1;
  uint uVar2;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_554;
  undefined4 local_550;
  float local_538;
  int local_530 [331];
  
  local_55c = *(undefined4 *)(param_1 + 0xda0);
  local_554 = 0;
  local_550 = 0;
  local_560 = 0x1b;
  local_580 = *(float *)(param_1 + 0xd60) + *(float *)(param_1 + 0xd70) * 0.2;
  local_57c = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0xd74) * 0.2;
  local_578 = *(float *)(param_1 + 0xd78) * 0.2 + *(float *)(param_1 + 0xd68);
  local_574 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * 0.2;
  local_538 = *(float *)(param_1 + 0xd78) * -1.0;
  local_570 = *(float *)(param_1 + 0xd70) * -1.0 + local_580;
  local_56c = *(float *)(param_1 + 0xd74) * -1.0 + local_57c;
  local_568 = local_538 + local_578;
  local_564 = *(float *)(param_1 + 0xd7c) * -1.0 + local_574;
  FUN_00a84140(0xff404040,0x1a,"avoid");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar1 = BehaviorUtility::checkRay(local_530,&local_580);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (local_530[0] != 0) {
      uVar2 = *(uint *)(local_530[0] + 0xc);
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0x30);
      }
    }
    if ((uVar2 & 0x2000000) != 0) {
      FUN_00a84420(0xff404040,0x1a,"avoid");
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x410) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3f4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3f8) = 0x40400000;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3fc) = 0x40400000;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x41c) = 1;
    }
  }
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D85B80  FUN_00d85b80  size=649  [callgraph]
int __fastcall FUN_00d85b80(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_554;
  undefined4 local_550;
  float local_538;
  int local_530 [4];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  
  fVar1 = *(float *)(param_1 + 0xdac) + 1.0;
  local_55c = *(undefined4 *)(param_1 + 0xda0);
  local_580 = *(float *)(param_1 + 0xd60) + *(float *)(param_1 + 0xd70) * fVar1;
  local_57c = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0xd74) * fVar1;
  local_578 = *(float *)(param_1 + 0xd78) * fVar1 + *(float *)(param_1 + 0xd68);
  local_574 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * fVar1;
  fVar1 = *(float *)(*(int *)(param_1 + 0xd58) + 0x10);
  local_554 = 0;
  local_550 = 0;
  local_560 = 0x1b;
  local_538 = *(float *)(param_1 + 0xd88) * fVar1;
  local_570 = *(float *)(param_1 + 0xd80) * fVar1 + local_580;
  local_56c = *(float *)(param_1 + 0xd84) * fVar1 + local_57c;
  local_568 = local_538 + local_578;
  local_564 = *(float *)(param_1 + 0xd8c) * fVar1 + local_574;
  FUN_00a84140(0xff404040,0x1a,"diveroll");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar2 = BehaviorUtility::checkRay(local_530,&local_580);
  if (iVar2 != 0) {
    uVar3 = 0;
    if (local_530[0] != 0) {
      uVar3 = *(uint *)(local_530[0] + 0xc);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0x30);
      }
    }
    if ((uVar3 & 0x40000) != 0) {
      FUN_00a84420(0xff404040,0x1a,"diveroll");
      fVar1 = -**(float **)(param_1 + 0xd58);
      local_560 = 0x1a;
      local_570 = local_520 + *(float *)(param_1 + 0xd80) * fVar1;
      local_56c = local_51c + *(float *)(param_1 + 0xd84) * fVar1;
      local_568 = *(float *)(param_1 + 0xd88) * fVar1 + local_518;
      local_564 = local_514 + *(float *)(param_1 + 0xd8c) * fVar1;
      iVar2 = FUN_00a89440(&local_580);
      if (iVar2 == 0) {
        local_520 = *(float *)(param_1 + 0xd60) - local_520;
        local_518 = *(float *)(param_1 + 0xd68) - local_518;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6b0) = 1;
        fVar1 = SQRT(local_518 * local_518 + local_520 * local_520);
        if (fVar1 <= *(float *)(*(int *)(param_1 + 0xd58) + 0x34)) {
          if (0.0 < *(float *)(param_1 + 0xe10)) {
            if (*(float *)(param_1 + 0xe10) <= 0.0) {
              hkpCdPointCollector::hkpCdPointCollector_16();
              return param_1;
            }
            if (*(float *)(param_1 + 0xe10) <= fVar1) goto LAB_00d85dfd;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x694) = 1;
          *(float *)(*(int *)(param_1 + 0x18) + 0x698) = fVar1;
          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x69c) = 0;
          hkpCdPointCollector::hkpCdPointCollector_16();
          return param_1;
        }
      }
    }
  }
LAB_00d85dfd:
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D85E10  FUN_00d85e10  size=1475  [callgraph]
int __fastcall FUN_00d85e10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  float local_590;
  float local_58c;
  float local_588;
  float local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_574;
  undefined4 local_570;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  float local_54c;
  float local_548;
  float local_544;
  float local_538;
  int local_530 [4];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  
  local_57c = *(undefined4 *)(param_1 + 0xda0);
  local_54c = *(float *)(param_1 + 0xda8);
  local_544 = *(float *)(param_1 + 0xdac);
  local_574 = 0;
  local_570 = 0;
  local_580 = 0x1b;
  local_5a0 = *(float *)(param_1 + 0xd60) + *(float *)(param_1 + 0xd70) * local_544;
  local_59c = *(float *)(param_1 + 0xd74) * local_544 + *(float *)(param_1 + 0xd64);
  local_598 = *(float *)(param_1 + 0xd78) * local_544 + *(float *)(param_1 + 0xd68);
  local_594 = *(float *)(param_1 + 0xd7c) * local_544 + *(float *)(param_1 + 0xd6c);
  local_548 = *(float *)(param_1 + 0xda4) + 1.0 + local_54c;
  local_538 = *(float *)(param_1 + 0xd88) * local_548;
  fVar4 = *(float *)(param_1 + 0xd80) * local_548 + local_5a0;
  fVar3 = *(float *)(param_1 + 0xd84) * local_548 + local_59c;
  fVar2 = local_538 + local_598;
  fVar1 = *(float *)(param_1 + 0xd8c) * local_548 + local_594;
  local_590 = fVar4;
  local_58c = fVar3;
  local_588 = fVar2;
  local_584 = fVar1;
  local_560 = local_5a0;
  local_55c = local_59c;
  local_558 = local_598;
  local_554 = local_594;
  FUN_00a84140(0xff808080,0x1a,"sliding");
  iVar5 = FUN_00a89440(&local_5a0);
  if (iVar5 == 0) {
    local_590 = *(float *)(param_1 + 0xd60) + *(float *)(param_1 + 0xd70) * local_54c;
    local_58c = *(float *)(param_1 + 0xd74) * local_54c + *(float *)(param_1 + 0xd64);
    local_588 = *(float *)(param_1 + 0xd68) + *(float *)(param_1 + 0xd78) * local_54c;
    local_584 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * local_54c;
    local_5a0 = fVar4;
    local_59c = fVar3;
    local_598 = fVar2;
    local_594 = fVar1;
    local_560 = fVar4;
    local_55c = fVar3;
    local_558 = fVar2;
    local_554 = fVar1;
    iVar5 = FUN_00a89440(&local_5a0);
  }
  fVar1 = -local_548;
  fVar4 = *(float *)(param_1 + 0xd80) * fVar1 + local_560;
  fVar3 = local_55c + *(float *)(param_1 + 0xd84) * fVar1;
  fVar2 = local_558 + *(float *)(param_1 + 0xd88) * fVar1;
  fVar1 = local_554 + *(float *)(param_1 + 0xd8c) * fVar1;
  local_5a0 = local_560;
  local_59c = local_55c;
  local_598 = local_558;
  local_594 = local_554;
  local_590 = fVar4;
  local_58c = fVar3;
  local_588 = fVar2;
  local_584 = fVar1;
  FUN_00a84140(0xff808080,0x1a,"sliding");
  iVar6 = FUN_00a89440(&local_5a0);
  if (iVar6 == 0) {
    local_590 = *(float *)(param_1 + 0xd70) * local_54c + *(float *)(param_1 + 0xd60);
    local_58c = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0xd74) * local_54c;
    local_588 = *(float *)(param_1 + 0xd68) + *(float *)(param_1 + 0xd78) * local_54c;
    local_584 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * local_54c;
    local_5a0 = fVar4;
    local_59c = fVar3;
    local_598 = fVar2;
    local_594 = fVar1;
    iVar6 = FUN_00a89440(&local_5a0);
  }
  if ((iVar5 == 0) && (iVar6 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  local_5a0 = *(float *)(param_1 + 0xd70) * local_544 + *(float *)(param_1 + 0xd60);
  local_59c = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0xd74) * local_544;
  local_598 = *(float *)(param_1 + 0xd68) + *(float *)(param_1 + 0xd78) * local_544;
  local_594 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * local_544;
  fVar1 = *(float *)(*(int *)(param_1 + 0xd58) + 0x10);
  local_538 = *(float *)(param_1 + 0xd88) * fVar1;
  local_590 = *(float *)(param_1 + 0xd80) * fVar1 + local_5a0;
  local_58c = *(float *)(param_1 + 0xd84) * fVar1 + local_59c;
  local_588 = local_538 + local_598;
  local_584 = *(float *)(param_1 + 0xd8c) * fVar1 + local_594;
  FUN_00a84140(0xff808080,0x1a,"sliding");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
  if (iVar5 != 0) {
    uVar7 = 0;
    if (local_530[0] != 0) {
      uVar7 = *(uint *)(local_530[0] + 0xc);
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)((-(uint)(uVar7 != 0) & uVar7) + 0x30);
      }
    }
    if ((uVar7 & 0x20000) != 0) {
      FUN_00a84420(0xff808080,0x1a,"sliding");
      fVar1 = -**(float **)(param_1 + 0xd58);
      local_580 = 0x1a;
      local_590 = local_520 + *(float *)(param_1 + 0xd80) * fVar1;
      local_58c = local_51c + *(float *)(param_1 + 0xd84) * fVar1;
      local_588 = *(float *)(param_1 + 0xd88) * fVar1 + local_518;
      local_584 = local_514 + *(float *)(param_1 + 0xd8c) * fVar1;
      iVar5 = FUN_00a89440(&local_5a0);
      if (iVar5 == 0) {
        local_520 = *(float *)(param_1 + 0xd60) - local_520;
        local_518 = *(float *)(param_1 + 0xd68) - local_518;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x640) = 1;
        fVar1 = SQRT(local_518 * local_518 + local_520 * local_520);
        if (fVar1 <= *(float *)(*(int *)(param_1 + 0xd58) + 0x28)) {
          if (0.0 < *(float *)(param_1 + 0xe10)) {
            if (*(float *)(param_1 + 0xe10) <= 0.0) {
              hkpCdPointCollector::hkpCdPointCollector_16();
              return param_1;
            }
            if (*(float *)(param_1 + 0xe10) <= fVar1) goto LAB_00d863c6;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x624) = 1;
          *(float *)(*(int *)(param_1 + 0x18) + 0x628) = fVar1;
          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x62c) = 0;
          hkpCdPointCollector::hkpCdPointCollector_16();
          return param_1;
        }
      }
    }
  }
LAB_00d863c6:
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D863E0  FUN_00d863e0  size=3601  [callgraph]
float * __fastcall FUN_00d863e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float local_5e0;
  float local_5dc;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  float local_590;
  float local_58c;
  float local_588;
  float local_584;
  undefined4 local_580;
  float local_57c;
  undefined4 local_574;
  undefined4 local_570;
  float local_554;
  float local_550;
  float local_54c;
  float local_548;
  float local_544;
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  float local_30;
  float local_28;
  
  if ((param_1[1] != 0.0) && (*param_1 <= 1.6)) {
    local_548 = param_1[0x369];
    local_574 = 0;
    local_570 = 0;
    local_5a8 = param_1[0x36a];
    local_554 = param_1[0x36b] + local_5a8;
    fVar1 = *param_1;
    local_5d0 = param_1[0x358] + param_1[0x35c] * local_554;
    local_5cc = param_1[0x359] + param_1[0x35d] * local_554;
    local_5a0 = local_5d0 + param_1[0x360] * fVar1;
    local_59c = local_5cc + param_1[0x361] * fVar1;
    local_598 = param_1[0x35a] + param_1[0x35e] * local_554 + param_1[0x362] * fVar1;
    local_594 = param_1[0x35b] + param_1[0x35f] * local_554 + param_1[0x363] * fVar1;
    local_5a4 = local_548 + 6.0 + local_5a8;
    local_5c8 = param_1[0x362] * local_5a4;
    local_5c0 = param_1[0x360] * local_5a4 + local_5a0;
    local_5bc = param_1[0x361] * local_5a4 + local_59c;
    local_5b8 = local_5c8 + local_598;
    local_5b4 = param_1[0x363] * local_5a4 + local_594;
    local_57c = param_1[0x368];
    local_580 = 0x1a;
    local_590 = local_5c0;
    local_58c = local_5bc;
    local_588 = local_5b8;
    local_584 = local_5b4;
    FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
    hkpAllCdPointCollector::hkpAllCdPointCollector();
    iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
    if ((iVar5 == 0) ||
       (FUN_00a84420(0xffff00ff,0x1a,"downwardCliff"),
       *(float *)((int)param_1[0x356] + 0xac) <=
       SQRT((param_1[0x35a] - local_518) * (param_1[0x35a] - local_518) +
            (param_1[0x358] - local_520) * (param_1[0x358] - local_520)))) {
      local_58c = local_5bc - 1000.0;
      local_584 = local_5c4 * -1000.0 + local_5b4;
      local_5a0 = local_5c0;
      local_59c = local_5bc;
      local_598 = local_5b8;
      local_594 = local_5b4;
      local_590 = local_5c0;
      local_588 = local_5b8;
      FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
      iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
      if (iVar5 != 0) {
        FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
        local_54c = param_1[0x359] - local_51c;
        local_5c0 = local_520;
        local_5bc = local_51c;
        local_5b8 = local_518;
        local_5b4 = local_514;
        local_5c4 = local_5c4 * local_554;
        local_5a0 = local_554 * 0.0 + local_520;
        local_59c = local_554 + local_51c;
        local_598 = local_554 * 0.0 + local_518;
        local_594 = local_514 + local_5c4;
        local_5c8 = param_1[0x362] * -6.0;
        local_590 = local_5a0 + param_1[0x360] * -6.0;
        local_58c = param_1[0x361] * -6.0 + local_59c;
        local_588 = local_5c8 + local_598;
        local_584 = param_1[0x363] * -6.0 + local_594;
        FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
        local_5ac = local_5a4;
        local_5a4 = -local_54c;
        local_550 = local_5a4;
        iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
        if (iVar5 == 0) {
          pfVar6 = (float *)FUN_00d83580(&local_5d0,local_5a8);
          fVar1 = *pfVar6 + local_5c0;
          fVar2 = pfVar6[1] + local_5bc;
          fVar3 = pfVar6[2] + local_5b8;
          fVar4 = pfVar6[3] + local_5b4;
          pfVar6 = (float *)FUN_00d83540(local_540,local_5a8);
          local_5c0 = fVar1 + *pfVar6;
          local_5bc = pfVar6[1] + fVar2;
          local_5b8 = pfVar6[2] + fVar3;
          local_5b4 = pfVar6[3] + fVar4;
          pfVar6 = (float *)FUN_00d83540(local_540,0x447a0000);
          local_5d0 = local_5c0 + *pfVar6;
          local_5cc = pfVar6[1] + local_5bc;
          local_5c8 = pfVar6[2] + local_5b8;
          local_5c4 = pfVar6[3] + local_5b4;
          local_5a0 = local_5c0;
          local_59c = local_5bc;
          local_598 = local_5b8;
          local_594 = local_5b4;
          local_590 = local_5d0;
          local_58c = local_5cc;
          local_588 = local_5c8;
          local_584 = local_5c4;
          FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
          iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
          if (iVar5 == 0) {
            local_5e0 = local_5d0;
            local_5dc = local_5cc;
            local_5d8 = local_5c8;
            local_514 = local_5c4;
          }
          else {
            FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
            local_5e0 = local_520;
            local_5dc = local_51c;
            local_5d8 = local_518;
          }
          pfVar6 = (float *)FUN_00d83540(local_540,0xc47a0000);
          local_590 = *pfVar6 + local_5e0;
          local_58c = pfVar6[1] + local_5dc;
          local_588 = pfVar6[2] + local_5d8;
          local_584 = pfVar6[3] + local_514;
          local_5a0 = local_5e0;
          local_59c = local_5dc;
          local_598 = local_5d8;
          local_594 = local_514;
          FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
          iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
          if (iVar5 != 0) {
            FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
            local_5a4 = local_51c - param_1[0x359];
          }
        }
        else {
          FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
          local_5c0 = local_520;
          local_5bc = local_51c;
          local_5b8 = local_518;
          local_5b4 = local_514;
          local_5ac = SQRT((param_1[0x35a] - local_518) * (param_1[0x35a] - local_518) +
                           (param_1[0x358] - local_520) * (param_1[0x358] - local_520));
          fVar2 = local_54c + local_554;
          local_5c8 = fVar2 * 0.0;
          fVar1 = local_5c8 + local_520;
          fVar3 = fVar2 + local_51c;
          fVar4 = local_518 + local_5c8;
          fVar2 = local_514 + local_5c4 * fVar2;
          pfVar6 = (float *)FUN_00d83580(&local_5d0,-*(float *)((int)param_1[0x356] + 8));
          local_5a0 = fVar1 + *pfVar6;
          local_59c = pfVar6[1] + fVar3;
          local_598 = pfVar6[2] + fVar4;
          local_594 = pfVar6[3] + fVar2;
          local_5c8 = local_550 * 0.0;
          local_590 = local_5c8 + local_5a0;
          local_58c = local_550 + local_59c;
          local_588 = local_5c8 + local_598;
          local_584 = local_5c4 * local_550 + local_594;
          FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
          iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
          if (iVar5 != 0) {
            local_544 = ABS(local_5bc - local_51c);
            FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
            fVar1 = -local_554;
            fVar4 = fVar1 * 0.0 + local_520;
            fVar2 = fVar1 + local_51c;
            fVar3 = fVar1 * 0.0 + local_518;
            fVar1 = fVar1 * local_5c4 + local_514;
            local_550 = SQRT((param_1[0x35a] - local_518) * (param_1[0x35a] - local_518) +
                             (param_1[0x358] - local_520) * (param_1[0x358] - local_520));
            pfVar6 = (float *)FUN_00d83580(&local_5d0,-(local_550 + local_548 + local_5a8));
            local_590 = fVar4 + *pfVar6;
            local_58c = pfVar6[1] + fVar2;
            local_588 = pfVar6[2] + fVar3;
            local_584 = pfVar6[3] + fVar1;
            local_5a0 = fVar4;
            local_59c = fVar2;
            local_598 = fVar3;
            local_594 = fVar1;
            FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
            iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
            if (iVar5 == 0) {
              local_5e0 = param_1[0x358];
              local_5d8 = param_1[0x35a];
              local_5d4 = param_1[0x35b];
              local_5dc = local_5bc;
              fVar1 = local_550;
            }
            else {
              FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
              local_5e0 = local_520;
              local_5dc = local_51c;
              local_5d8 = local_518;
              local_5d4 = local_514;
              fVar1 = SQRT((fVar3 - local_518) * (fVar3 - local_518) +
                           (fVar4 - local_520) * (fVar4 - local_520));
            }
            pfVar6 = (float *)FUN_00d83580(&local_5d0,fVar1);
            local_590 = local_5e0 + *pfVar6;
            local_58c = pfVar6[1] + local_5dc;
            local_588 = pfVar6[2] + local_5d8;
            local_584 = pfVar6[3] + local_5d4;
            local_5a0 = local_5e0;
            local_59c = local_5dc;
            local_598 = local_5d8;
            local_594 = local_5d4;
            FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
            iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
            if (iVar5 != 0) {
              FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
              fVar2 = SQRT((local_518 - local_5b8) * (local_518 - local_5b8) +
                           (local_520 - local_5c0) * (local_520 - local_5c0)) * 0.5;
              fVar1 = local_54c - local_544;
              local_5c4 = local_5c4 * fVar1;
              local_5a0 = fVar1 * 0.0 + local_520 + (local_5c0 - local_520) * fVar2;
              local_59c = fVar1 + (local_5bc - local_51c) * fVar2 + local_51c;
              local_598 = fVar1 * 0.0 + (local_5b8 - local_518) * fVar2 + local_518;
              local_594 = local_5c4 + local_514 + (local_5b4 - local_514) * fVar2;
              fVar1 = -fVar1;
              local_5c8 = fVar1 * 0.0;
              local_590 = local_5c8 + local_5a0;
              local_58c = fVar1 + local_59c;
              local_588 = local_5c8 + local_598;
              local_584 = local_5c4 * fVar1 + local_594;
              FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
              iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
              if (iVar5 != 0) {
                FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
                local_5a4 = local_51c - param_1[0x359];
                local_5ac = SQRT((param_1[0x35a] - local_518) * (param_1[0x35a] - local_518) +
                                 (param_1[0x358] - local_520) * (param_1[0x358] - local_520));
              }
            }
          }
        }
        fVar2 = local_554 - param_1[2];
        fVar1 = *param_1;
        local_5bc = fVar1 * param_1[0x361];
        local_5d0 = fVar1 * param_1[0x360] + param_1[0x358];
        local_5cc = param_1[0x359] + local_5bc;
        local_5a0 = local_5d0 + fVar2 * param_1[0x35c];
        local_59c = local_5cc + fVar2 * param_1[0x35d];
        local_598 = param_1[0x35a] + fVar1 * param_1[0x362] + fVar2 * param_1[0x35e];
        local_594 = fVar1 * param_1[0x363] + param_1[0x35b] + fVar2 * param_1[0x35f];
        local_5c8 = param_1[0x362] * local_5ac;
        local_590 = param_1[0x360] * local_5ac + local_5a0;
        local_58c = param_1[0x361] * local_5ac + local_59c;
        local_588 = local_5c8 + local_598;
        local_584 = param_1[0x363] * local_5ac + local_594;
        FUN_00a84140(0xffff00ff,0x1a,"downwardCliff");
        iVar5 = BehaviorUtility::checkRay(local_530,&local_5a0);
        if (iVar5 != 0) {
          FUN_00a84420(0xffff00ff,0x1a,"downwardCliff");
          local_5ac = SQRT((local_518 - local_28) * (local_518 - local_28) +
                           (local_520 - local_30) * (local_520 - local_30));
        }
        fVar1 = ABS(*(float *)((int)param_1[6] + 0x548) - local_5ac);
        if ((fVar1 < *(float *)param_1[0x356] == (fVar1 == *(float *)param_1[0x356])) ||
           (*(int *)((int)param_1[6] + 0x544) == 0)) {
          local_5a8 = ABS(local_5a4);
          if ((local_5a8 <= 0.5) ||
             (((DAT_018b9174 == 0x110 && (iVar5 = FUN_00d45a70("bridge"), iVar5 != 0)) &&
              (local_5a8 < 1.5 != (local_5a8 == 1.5))))) {
            hkpCdPointCollector::hkpCdPointCollector_16();
            return param_1;
          }
          *(float *)((int)param_1[6] + 0x160) = local_5a4;
          *(float *)((int)param_1[6] + 0x15c) = local_5a8;
          *(float *)((int)param_1[6] + 0x158) = local_5ac;
          if (1.0 < *param_1) {
            *(undefined4 *)((int)param_1[6] + 0x170) = 1;
            hkpCdPointCollector::hkpCdPointCollector_16();
            return param_1;
          }
          *(undefined4 *)((int)param_1[6] + 0x154) = 1;
        }
      }
    }
    hkpCdPointCollector::hkpCdPointCollector_16();
  }
  return param_1;
}

// 00D87200  FUN_00d87200  size=298  [callgraph]
float * __fastcall FUN_00d87200(float *param_1)

{
  float fVar1;
  int iVar2;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  undefined4 local_560;
  float local_55c;
  undefined4 local_554;
  undefined4 local_550;
  float local_534;
  undefined1 local_530 [20];
  float local_51c;
  
  param_1[2] = -1.0;
  param_1[3] = 0.0;
  if (param_1[1] != 0.0) {
    local_554 = 0;
    local_550 = 0;
    local_55c = param_1[0x368];
    fVar1 = param_1[0x369] + *param_1 + param_1[0x36a];
    local_560 = 0x1a;
    local_580 = param_1[0x358] + param_1[0x360] * fVar1;
    local_57c = param_1[0x359] + param_1[0x361] * fVar1;
    local_578 = param_1[0x362] * fVar1 + param_1[0x35a];
    local_574 = param_1[0x35b] + param_1[0x363] * fVar1;
    local_56c = local_57c - 1000.0;
    local_564 = local_534 * -1000.0 + local_574;
    local_570 = local_580;
    local_568 = local_578;
    FUN_00a84140(0xffff0000,0x1a,"cliffAheadToGround");
    hkpAllCdPointCollector::hkpAllCdPointCollector();
    iVar2 = BehaviorUtility::checkRay(local_530,&local_580);
    if (iVar2 != 0) {
      param_1[3] = 1.4013e-45;
      param_1[2] = ABS(param_1[0x359] - local_51c);
    }
    hkpCdPointCollector::hkpCdPointCollector_16();
  }
  return param_1;
}

// 00D87330  FUN_00d87330  size=1592  [callgraph]
undefined4 __thiscall FUN_00d87330(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 uVar13;
  float10 fVar14;
  int local_5d8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  undefined4 local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  float local_590;
  float local_58c;
  float local_588;
  float local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_574;
  undefined4 local_570;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  int local_53c;
  undefined4 local_538;
  undefined4 local_534;
  int local_530;
  int local_52c;
  float local_51c;
  
  fVar1 = param_3[4];
  fVar3 = param_3[0x15];
  fVar2 = param_3[5];
  fVar5 = SQRT((param_3[2] - param_3[10]) * (param_3[2] - param_3[10]) +
               (*param_3 - param_3[8]) * (*param_3 - param_3[8]));
  if (param_3[0x12] < fVar5) {
    return 2;
  }
  if ((fVar5 < param_3[0x13]) ||
     ((0.0 < *(float *)(param_1 + 0xe10) && (*(float *)(param_1 + 0xe10) <= fVar5)))) {
    return 1;
  }
  *(float *)(param_2 + 8) = fVar5;
  local_57c = *(undefined4 *)(param_1 + 0xda0);
  fVar5 = -**(float **)(param_1 + 0xd58);
  fVar2 = param_3[0x11] + fVar2 + fVar1;
  local_5a0 = fVar2 * 0.0 + param_3[8] + *(float *)(param_1 + 0xd80) * fVar5;
  local_59c = fVar2 + param_3[9] + *(float *)(param_1 + 0xd84) * fVar5;
  local_598 = fVar2 * 0.0 + *(float *)(param_1 + 0xd88) * fVar5 + param_3[10];
  local_594 = local_5c4 * fVar2 + param_3[0xb] + *(float *)(param_1 + 0xd8c) * fVar5;
  fVar2 = (*(float **)(param_1 + 0xd58))[2];
  local_574 = 0;
  local_570 = 0;
  local_580 = 0x1a;
  local_5c0 = *(float *)(param_1 + 0xd80) * fVar2 + local_5a0;
  local_5bc = *(float *)(param_1 + 0xd84) * fVar2 + local_59c;
  local_5b8 = *(float *)(param_1 + 0xd88) * fVar2 + local_598;
  local_5b4 = *(float *)(param_1 + 0xd8c) * fVar2 + local_594;
  local_590 = local_5c0;
  local_58c = local_5bc;
  local_588 = local_5b8;
  local_584 = local_5b4;
  FUN_00a84140(fVar3,0x1a,"overjump");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar10 = BehaviorUtility::checkRay(&local_530,&local_5a0);
  if (iVar10 != 0) {
    FUN_00a84420(fVar3,0x1a,"overjump");
    if ((DAT_018b9174 == 0x710) && (iVar10 = FUN_00916410("_hvk_4m"), iVar10 != 0)) {
      *(undefined4 *)(param_2 + 0x30) = 1;
    }
    hkpCdPointCollector::hkpCdPointCollector_16();
    return 5;
  }
  fVar2 = param_3[0x14];
  local_5d8 = 0;
  fVar7 = *(float *)(param_1 + 0xd80) * fVar2 + local_5c0;
  fVar6 = *(float *)(param_1 + 0xd84) * fVar2 + local_5bc;
  fVar9 = *(float *)(param_1 + 0xd88) * fVar2 + local_5b8;
  fVar5 = *(float *)(param_1 + 0xd8c) * fVar2 + local_5b4;
  fVar8 = -*(float *)(*(int *)(param_1 + 0xd58) + 0x14);
  fVar2 = *(float *)(param_1 + 0xd78) * fVar8;
  local_590 = *(float *)(param_1 + 0xd70) * fVar8 + local_5c0;
  local_58c = *(float *)(param_1 + 0xd74) * fVar8 + local_5bc;
  local_588 = fVar2 + local_5b8;
  local_584 = *(float *)(param_1 + 0xd7c) * fVar8 + local_5b4;
  local_5a0 = local_5c0;
  local_59c = local_5bc;
  local_598 = local_5b8;
  local_594 = local_5b4;
  local_5b8 = fVar2;
  FUN_00a84140(fVar3,0x1a,"overjump");
  fVar2 = param_3[0x11];
  iVar10 = BehaviorUtility::checkRay(&local_530,&local_5a0);
  if (iVar10 != 0) {
    fVar14 = (float10)FUN_00ddb510(local_51c - param_3[9],0xfffffffe);
    fVar2 = (float)fVar14;
    FUN_00a84420(fVar3,0x1a,"overjump");
    if (fVar2 < param_3[0x10]) {
      hkpCdPointCollector::hkpCdPointCollector_16();
      return 3;
    }
    if (param_3[0x11] < fVar2) {
      if ((DAT_018b9174 == 0x710) && (iVar10 = FUN_00916410("_hvk_4m"), iVar10 != 0)) {
        *(undefined4 *)(param_2 + 0x30) = 1;
      }
      hkpCdPointCollector::hkpCdPointCollector_16();
      return 4;
    }
    local_5d8 = local_530;
  }
  *(float *)(param_2 + 0xc) = ABS(fVar2);
  *(float *)(param_2 + 0x10) = fVar2;
  local_5a4 = 0;
  if (local_5d8 != 0) {
    uVar4 = *(uint *)(local_5d8 + 0xc);
    if ((uVar4 != 0) && ((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 0x30) & 0x40) != 0)) {
      *(undefined4 *)(param_2 + 0x28) = 1;
      *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar1;
    }
    local_560 = param_3[0xc];
    iVar10 = *(int *)(param_1 + 0xd58);
    local_55c = param_3[0xd];
    local_558 = param_3[0xe];
    local_554 = param_3[0xf];
    puVar11 = (undefined4 *)FUN_00d83580(&local_5c0,0x3f800000);
    local_550 = *puVar11;
    local_54c = puVar11[1];
    local_534 = *(undefined4 *)(param_1 + 0xda0);
    local_548 = puVar11[2];
    local_544 = puVar11[3];
    local_540 = *(undefined4 *)(iVar10 + 0x10);
    local_53c = local_5d8;
    local_538 = 0x1a;
    FUN_00a8a710(&local_5a4,&local_560);
  }
  *(undefined4 *)(param_2 + 0x14) = local_5a4;
  pfVar12 = (float *)FUN_00d83540(&local_5c0,-*(float *)(*(int *)(param_1 + 0xd58) + 0x14));
  local_590 = *pfVar12 + fVar7;
  local_58c = pfVar12[1] + fVar6;
  local_588 = pfVar12[2] + fVar9;
  local_584 = pfVar12[3] + fVar5;
  local_5a0 = fVar7;
  local_59c = fVar6;
  local_598 = fVar9;
  local_594 = fVar5;
  FUN_00a84140(fVar3,0x1a,"overjump");
  iVar10 = BehaviorUtility::checkRay(&local_530,&local_5a0);
  if (iVar10 != 0) {
    FUN_00a84420(fVar3,0x1a,"overjump");
    fVar1 = ABS(param_3[9] - local_51c);
    if ((param_3[0x10] <= fVar1) && (fVar1 < param_3[0x11] != (fVar1 == param_3[0x11]))) {
      *(float *)(param_2 + 0x1c) = fVar1;
      *(undefined4 *)(param_2 + 0x18) = 1;
    }
    if ((local_530 != 0) && (iVar10 = FUN_008f7780(local_530), iVar10 != 0)) {
      uVar13 = FUN_00a7c7f0();
      FUN_00a7c960(uVar13);
    }
    if ((local_52c != 0) && (iVar10 = FUN_008f7780(local_52c), iVar10 != 0)) {
      uVar13 = FUN_00a7c7f0();
      FUN_00a7c960(uVar13);
    }
  }
  *(undefined4 *)(param_2 + 4) = 1;
  hkpCdPointCollector::hkpCdPointCollector_16();
  return 0;
}

// 00D87970  FUN_00d87970  size=556  [callgraph]
int __fastcall FUN_00d87970(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_554;
  undefined4 local_550;
  float local_538;
  int local_530 [4];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  
  fVar1 = *(float *)(param_1 + 0xdac) + 1.0;
  local_55c = *(undefined4 *)(param_1 + 0xda0);
  local_580 = *(float *)(param_1 + 0xd60) + fVar1 * *(float *)(param_1 + 0xd70);
  local_57c = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0xd74) * fVar1;
  local_578 = *(float *)(param_1 + 0xd78) * fVar1 + *(float *)(param_1 + 0xd68);
  local_574 = *(float *)(param_1 + 0xd6c) + *(float *)(param_1 + 0xd7c) * fVar1;
  fVar1 = *(float *)(*(int *)(param_1 + 0xd58) + 0x10);
  local_554 = 0;
  local_550 = 0;
  local_560 = 0x1b;
  local_538 = *(float *)(param_1 + 0xd88) * fVar1;
  local_570 = *(float *)(param_1 + 0xd80) * fVar1 + local_580;
  local_56c = *(float *)(param_1 + 0xd84) * fVar1 + local_57c;
  local_568 = local_538 + local_578;
  local_564 = *(float *)(param_1 + 0xd8c) * fVar1 + local_574;
  FUN_00a84140(0xff404040,0x1a,"forceLongCliff");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar2 = BehaviorUtility::checkRay(local_530,&local_580);
  if (iVar2 != 0) {
    uVar3 = 0;
    if (local_530[0] != 0) {
      uVar3 = *(uint *)(local_530[0] + 0xc);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8);
      }
    }
    if ((uVar3 & 0x800000) != 0) {
      FUN_00a84420(0xff404040,0x1a,"forceLongCliff");
      fVar1 = -**(float **)(param_1 + 0xd58);
      local_560 = 0x1a;
      local_570 = local_520 + *(float *)(param_1 + 0xd80) * fVar1;
      local_56c = local_51c + *(float *)(param_1 + 0xd84) * fVar1;
      local_568 = *(float *)(param_1 + 0xd88) * fVar1 + local_518;
      local_564 = local_514 + *(float *)(param_1 + 0xd8c) * fVar1;
      iVar2 = FUN_00a89440(&local_580);
      if ((iVar2 == 0) &&
         (local_520 = *(float *)(param_1 + 0xd60) - local_520,
         local_518 = *(float *)(param_1 + 0xd68) - local_518,
         SQRT(local_518 * local_518 + local_520 * local_520) <= 1.0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0x40c00000;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc) = 0x40000000;
      }
    }
  }
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D87F90  FUN_00d87f90  size=1033  [callgraph]
float * __fastcall FUN_00d87f90(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  float local_58c;
  float local_588;
  float local_584;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  undefined4 local_550;
  float local_54c;
  undefined4 local_544;
  undefined4 local_540;
  undefined1 local_530 [16];
  float local_520;
  float local_518;
  float local_514;
  
  *param_1 = -1.0;
  fVar3 = param_1[0x356];
  local_588 = param_1[0x36a];
  param_1[1] = 0.0;
  local_584 = param_1[0x369];
  pfVar1 = param_1 + 0x360;
  local_58c = local_584 + local_588;
  fVar2 = -*(float *)((int)fVar3 + 4);
  local_580 = param_1[0x358] + param_1[0x35c] * fVar2 + local_58c * *pfVar1;
  local_57c = param_1[0x35d] * fVar2 + param_1[0x359] + local_58c * param_1[0x361];
  local_578 = param_1[0x35e] * fVar2 + param_1[0x35a] + local_58c * param_1[0x362];
  local_574 = param_1[0x35f] * fVar2 + param_1[0x35b] + local_58c * param_1[0x363];
  fVar2 = *(float *)((int)fVar3 + 0x10);
  local_5a8 = param_1[0x362] * fVar2;
  local_5a0 = *pfVar1 * fVar2 + local_580;
  local_59c = param_1[0x361] * fVar2 + local_57c;
  local_598 = local_578 + local_5a8;
  local_594 = param_1[0x363] * fVar2 + local_574;
  iVar4 = hkpAllCdPointCollector::hkpAllCdPointCollector_36
                    (&local_5d0,&local_5b0,&local_580,pfVar1,*(undefined4 *)((int)fVar3 + 0x10));
  local_564 = local_594;
  local_56c = local_59c;
  local_570 = local_5a0;
  local_568 = local_598;
  if (iVar4 != 0) {
    fVar2 = *(float *)param_1[0x356];
    local_564 = local_5c4 + local_5a4 * fVar2;
    local_56c = local_5cc + local_5ac * fVar2;
    local_570 = local_5d0 + local_5b0 * fVar2;
    local_568 = local_5a8 * fVar2 + local_5c8;
  }
  local_544 = 0;
  local_540 = 0;
  local_54c = param_1[0x368];
  local_550 = 0x1a;
  fVar2 = -(local_588 * 2.0 + *(float *)((int)param_1[0x356] + 0x10) + local_584 * 2.0);
  local_5a8 = param_1[0x362] * fVar2;
  local_560 = *pfVar1 * fVar2 + local_570;
  local_55c = param_1[0x361] * fVar2 + local_56c;
  local_558 = local_5a8 + local_568;
  local_554 = param_1[0x363] * fVar2 + local_564;
  FUN_00a84140(0xffff0000,0x1a,"cliffAhead");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar5 = BehaviorUtility::checkRay(local_530,&local_570);
  if (iVar5 != 0) {
    FUN_00a84420(0xffff0000,0x1a,"cliffAhead");
    if ((iVar4 != 0) &&
       (fVar2 = SQRT((local_5c8 - local_518) * (local_5c8 - local_518) +
                     (local_5d0 - local_520) * (local_5d0 - local_520)),
       fVar2 < *(float *)param_1[0x356] != (fVar2 == *(float *)param_1[0x356]))) {
      hkpCdPointCollector::hkpCdPointCollector_16();
      return param_1;
    }
    local_5d0 = local_520;
    local_5c8 = local_518;
    local_5c0 = local_520 - param_1[0x358];
    local_5b8 = local_518 - param_1[0x35a];
    local_5b4 = local_514 - param_1[0x35b];
    local_5bc = 0.0;
    if ((local_5c0 != 0.0) || (local_5b8 != 0.0)) {
      fVar2 = local_5c0 * local_5c0 + local_5b8 * local_5b8;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_5c0,&local_5c0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_5c0 = 0.0;
        local_5bc = 1.0;
        local_5b8 = 0.0;
      }
    }
    fVar2 = SQRT((param_1[0x35a] - local_5c8) * (param_1[0x35a] - local_5c8) +
                 (param_1[0x358] - local_5d0) * (param_1[0x358] - local_5d0));
    if (local_5b8 * param_1[0x362] + param_1[0x361] * local_5bc + *pfVar1 * local_5c0 <= 0.0) {
      fVar2 = -fVar2;
    }
    *param_1 = fVar2;
    if ((0.0 < *param_1) || (-local_58c <= *param_1)) {
      param_1[1] = 1.4013e-45;
    }
  }
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D883A0  FUN_00d883a0  size=3466  [callgraph]
float * __fastcall FUN_00d883a0(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float10 fVar9;
  float local_674;
  float local_66c;
  float local_668;
  float local_664;
  float local_660 [5];
  float local_64c;
  float local_648;
  float local_644;
  float local_640;
  float local_63c;
  float local_638;
  float local_634;
  float local_624;
  float local_620;
  float local_61c;
  float local_618;
  float local_614;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  undefined4 local_600;
  float local_5fc;
  undefined4 local_5f4;
  undefined4 local_5f0;
  float local_5e0;
  float local_5dc;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5b4;
  undefined1 local_5b0 [12];
  float local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  float local_590;
  float local_58c;
  float local_588;
  float local_584;
  undefined4 local_580;
  float local_57c;
  undefined4 local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  undefined4 local_550;
  float local_54c;
  undefined4 local_544;
  undefined4 local_540;
  float local_530 [4];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  
  if (param_1[1] == 0.0) {
    return param_1;
  }
  local_624 = param_1[0x369];
  pfVar1 = param_1 + 0x360;
  fVar2 = param_1[0x36a];
  local_544 = 0;
  local_540 = 0;
  local_5b4 = param_1[0x36b];
  local_54c = param_1[0x368];
  local_550 = 0x1a;
  local_570 = param_1[0x35c] * 0.5 + param_1[0x358];
  local_56c = param_1[0x35d] * 0.5 + param_1[0x359];
  local_568 = param_1[0x35e] * 0.5 + param_1[0x35a];
  local_564 = param_1[0x35f] * 0.5 + param_1[0x35b];
  fVar3 = fVar2 + fVar2 + local_624;
  local_560 = *pfVar1 * fVar3 + local_570;
  local_55c = fVar3 * param_1[0x361] + local_56c;
  local_558 = fVar3 * param_1[0x362] + local_568;
  local_554 = fVar3 * param_1[0x363] + local_564;
  FUN_00a84140(0xff0000ff,0x1a,"shortCliff");
  iVar6 = FUN_00a89440();
  if (iVar6 != 0) {
    return param_1;
  }
  local_5fc = param_1[0x368];
  uVar8 = 0;
  local_620 = param_1[0x35c] * -0.5 + param_1[0x358];
  local_61c = param_1[0x35d] * -0.5 + param_1[0x359];
  local_618 = param_1[0x35a] + param_1[0x35e] * -0.5;
  local_614 = param_1[0x35b] + param_1[0x35f] * -0.5;
  fVar3 = *(float *)((int)param_1[0x356] + 0x10);
  local_5f4 = 0;
  local_5f0 = 0;
  local_600 = 0x1a;
  local_610 = *pfVar1 * fVar3 + local_620;
  local_60c = fVar3 * param_1[0x361] + local_61c;
  local_608 = fVar3 * param_1[0x362] + local_618;
  local_604 = fVar3 * param_1[0x363] + local_614;
  FUN_00a84140(0xff0000ff,0x1a,"cliffover");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  local_674 = 3.4028235e+38;
  local_664 = 0.0;
  local_660[0] = -2.0;
  local_660[1] = -1.5;
  local_660[2] = -1.0;
  local_660[3] = -0.5;
  do {
    fVar3 = local_660[uVar8];
    local_620 = fVar3 * param_1[0x35c] + param_1[0x358];
    local_61c = param_1[0x359] + fVar3 * param_1[0x35d];
    local_618 = param_1[0x35a] + fVar3 * param_1[0x35e];
    local_614 = param_1[0x35b] + fVar3 * param_1[0x35f];
    fVar3 = *(float *)((int)param_1[0x356] + 0x10);
    local_610 = *pfVar1 * fVar3 + local_620;
    local_60c = fVar3 * param_1[0x361] + local_61c;
    local_608 = fVar3 * param_1[0x362] + local_618;
    local_604 = fVar3 * param_1[0x363] + local_614;
    local_5d0 = local_620;
    local_5cc = local_61c;
    local_5c8 = local_618;
    local_5c4 = local_614;
    iVar6 = BehaviorUtility::checkRay(local_530,&local_620);
    if (((iVar6 != 0) &&
        (iVar6 = hkpAllCdPointCollector::hkpAllCdPointCollector_36
                           (&local_640,local_5b0,&local_5d0,pfVar1,
                            *(undefined4 *)((int)param_1[0x356] + 0x10)), iVar6 != 0)) &&
       (fVar3 = SQRT((local_638 - param_1[0x35a]) * (local_638 - param_1[0x35a]) +
                     (local_640 - param_1[0x358]) * (local_640 - param_1[0x358])),
       fVar3 <= local_674)) {
      local_5e0 = local_640;
      local_664 = local_530[0];
      local_5d8 = local_638;
      local_5d4 = local_634;
      local_660[4] = local_640;
      local_64c = local_63c;
      local_648 = local_638;
      local_644 = local_634;
      local_5dc = param_1[0x359];
      local_674 = fVar3;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if (local_664 == 0.0) goto LAB_00d89097;
  pfVar7 = (float *)param_1[0x356];
  local_668 = local_674;
  if (local_674 < pfVar7[0x17]) {
    fVar3 = pfVar7[4];
    local_610 = fVar3 * *pfVar1 + local_660[4];
    local_60c = fVar3 * param_1[0x361] + local_64c;
    local_608 = fVar3 * param_1[0x362] + local_648;
    local_604 = fVar3 * param_1[0x363] + local_644;
    local_620 = local_660[4];
    local_61c = local_64c;
    local_618 = local_648;
    local_614 = local_644;
    FUN_00a84140(0xff0000ff,0x1a,"cliffover");
    iVar6 = BehaviorUtility::checkRay(local_530,&local_620);
    if (iVar6 == 0) goto LAB_00d89097;
    pfVar7 = (float *)param_1[0x356];
    local_668 = SQRT((local_648 - param_1[0x35a]) * (local_648 - param_1[0x35a]) +
                     (local_660[4] - param_1[0x358]) * (local_660[4] - param_1[0x358]));
    if (local_668 < pfVar7[0x17]) goto LAB_00d89097;
    local_660[4] = local_520;
    local_64c = local_51c;
    local_648 = local_518;
    local_644 = local_514;
    local_5d4 = local_514;
    local_5e0 = local_520;
    local_5d8 = local_518;
    local_5dc = param_1[0x359];
  }
  fVar3 = -*pfVar7;
  fVar2 = pfVar7[0x1b] + fVar2 + local_624;
  local_660[0] = fVar2 * 0.0;
  local_660[3] = fVar2 * local_5a4;
  local_5d0 = local_660[0] + local_5e0 + fVar3 * *pfVar1;
  local_5cc = local_5dc + fVar2 + fVar3 * param_1[0x361];
  local_5c8 = local_660[0] + local_5d8 + fVar3 * param_1[0x362];
  local_5c4 = local_660[3] + local_5d4 + fVar3 * param_1[0x363];
  fVar2 = ((float *)param_1[0x356])[2] + *(float *)param_1[0x356];
  local_660[1] = param_1[0x361] * fVar2;
  local_660[2] = param_1[0x362] * fVar2;
  local_640 = *pfVar1 * fVar2 + local_5d0;
  local_63c = local_660[1] + local_5cc;
  local_638 = local_660[2] + local_5c8;
  local_634 = param_1[0x363] * fVar2 + local_5c4;
  fVar2 = -pfVar7[5];
  local_610 = fVar2 * 0.0 + local_640;
  local_60c = fVar2 + local_63c;
  local_608 = fVar2 * 0.0 + local_638;
  local_604 = fVar2 * local_5a4 + local_634;
  local_620 = local_640;
  local_61c = local_63c;
  local_618 = local_638;
  local_614 = local_634;
  FUN_00a84140(0xff0000ff,0x1a,"cliffover");
  iVar6 = BehaviorUtility::checkRay(local_530,&local_620);
  if (iVar6 == 0) goto LAB_00d89097;
  fVar2 = ABS(local_5dc - local_51c);
  bVar5 = local_51c < param_1[0x359];
  fVar9 = (float10)FUN_00fddce0((double)(fVar2 * 20.0));
  fVar9 = fVar9 * (float10)0.05;
  if (!bVar5) {
    fVar3 = param_1[0x356];
    if (((float10)*(float *)((int)fVar3 + 0xa0) <= fVar9) &&
       (fVar9 < (float10)*(float *)((int)fVar3 + 0xa4) !=
        (fVar9 == (float10)*(float *)((int)fVar3 + 0xa4)))) {
      fVar4 = local_668;
      if ((param_1[1] != 0.0) && (0.0 < *param_1)) {
        fVar4 = local_668 - *param_1;
      }
      if ((local_668 < *(float *)((int)fVar3 + 0x94)) ||
         (local_668 < *(float *)((int)fVar3 + 0x98) == (local_668 == *(float *)((int)fVar3 + 0x98)))
         ) {
        if ((*(float *)((int)fVar3 + 0x94) <= fVar4) &&
           (fVar4 < *(float *)((int)fVar3 + 0x98) != (fVar4 == *(float *)((int)fVar3 + 0x98)))) {
          *(undefined4 *)((int)param_1[6] + 0x1e0) = 1;
        }
      }
      else {
        *(undefined4 *)((int)param_1[6] + 0x1c4) = 1;
        *(float *)((int)param_1[6] + 0x1c8) = local_668;
        *(float *)((int)param_1[6] + 0x1cc) = fVar2;
        *(float *)((int)param_1[6] + 0x1d0) = fVar2;
        pfVar7 = (float *)FUN_00d83580(local_5b0,*(float *)((int)param_1[0x356] + 0xa8) - local_624)
        ;
        local_660[0] = *pfVar7 + local_640;
        local_660[1] = pfVar7[1] + local_63c;
        local_660[2] = pfVar7[2] + local_638;
        local_660[3] = pfVar7[3] + local_634;
        local_620 = local_5d0;
        local_61c = local_5cc;
        local_618 = local_5c8;
        local_614 = local_5c4;
        local_610 = local_660[0];
        local_60c = local_660[1];
        local_608 = local_660[2];
        local_604 = local_660[3];
        FUN_00a84140(0xff0000ff,0x1a,"cliffover");
        iVar6 = BehaviorUtility::checkRay(local_530,&local_620);
        if (iVar6 == 0) {
          fVar3 = -*(float *)((int)param_1[0x356] + 0x14);
          local_610 = fVar3 * 0.0 + local_660[0];
          local_60c = fVar3 + local_660[1];
          local_608 = fVar3 * 0.0 + local_660[2];
          local_604 = fVar3 * local_5a4 + local_660[3];
          local_620 = local_660[0];
          local_61c = local_660[1];
          local_618 = local_660[2];
          local_614 = local_660[3];
          FUN_00a84140(0xff0000ff,0x1a,"cliffover");
          iVar6 = BehaviorUtility::checkRay(local_530,&local_620);
          if (iVar6 != 0) {
            FUN_00a84420(0xff0000ff,0x1a,"cliffover");
            fVar3 = ABS(local_5dc - local_51c);
            if ((*(float *)((int)param_1[0x356] + 0xa0) <= fVar3) &&
               (fVar4 = *(float *)((int)param_1[0x356] + 0xa4), fVar3 < fVar4 != (fVar3 == fVar4)))
            {
              *(undefined4 *)((int)param_1[6] + 0x1d8) = 1;
              *(float *)((int)param_1[6] + 0x1dc) = fVar3;
            }
          }
        }
      }
    }
    fVar3 = param_1[0x356];
    if (*(float *)((int)fVar3 + 0x118) < fVar2) {
      if (*(float *)((int)fVar3 + 0x114) < local_668) {
        fVar4 = local_668;
        if ((param_1[1] != 0.0) && (0.0 < *param_1)) {
          fVar4 = local_668 - *param_1;
        }
        if (fVar4 < *(float *)((int)fVar3 + 0x114) != (fVar4 == *(float *)((int)fVar3 + 0x114))) {
          *(undefined4 *)((int)param_1[6] + 0x5d0) = 1;
        }
      }
      else {
        if (*param_1 <= 1.0) {
          if ((fVar2 < *(float *)((int)fVar3 + 0xf4) == (fVar2 == *(float *)((int)fVar3 + 0xf4))) ||
             (local_668 < *(float *)((int)fVar3 + 0xec) ==
              (local_668 == *(float *)((int)fVar3 + 0xec)))) {
            *(undefined4 *)((int)param_1[6] + 0x5b4) = 1;
          }
          else {
            *(float *)((int)param_1[6] + 0x3fc) = fVar2;
            *(float *)((int)param_1[6] + 0x3f8) = local_668 * 0.5;
            *(undefined4 *)((int)param_1[6] + 0x3f4) = 1;
          }
        }
        else {
          *(undefined4 *)((int)param_1[6] + 0x5d0) = 1;
        }
        *(float *)((int)param_1[6] + 0x5b8) = local_668;
        *(undefined4 *)((int)param_1[6] + 0x5bc) = *(undefined4 *)((int)param_1[0x356] + 0xa4);
        *(float *)((int)param_1[6] + 0x5c0) = fVar2;
      }
    }
  }
  fVar3 = param_1[0x356];
  if ((local_668 < *(float *)((int)fVar3 + 0x54)) || (*(float *)((int)fVar3 + 0x58) < local_668))
  goto LAB_00d89097;
  local_5a0 = local_660[4];
  local_574 = param_1[0x368];
  local_59c = local_64c;
  local_598 = local_648;
  local_594 = local_644;
  local_590 = *pfVar1;
  local_58c = param_1[0x361];
  local_588 = param_1[0x362];
  local_584 = param_1[0x363];
  local_580 = *(undefined4 *)((int)fVar3 + 0x10);
  local_57c = local_664;
  local_66c = 0.0;
  local_664 = 0.0;
  local_578 = 0x1a;
  iVar6 = FUN_00a8a710(&local_66c,&local_5a0);
  fVar3 = local_664;
  if (iVar6 != 0) {
    if (local_66c < *(float *)((int)param_1[0x356] + 0x1c) ==
        (local_66c == *(float *)((int)param_1[0x356] + 0x1c))) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = local_66c * 0.5;
      if (local_624 + local_624 < fVar3 != (local_624 + local_624 == fVar3)) {
        fVar3 = local_624;
      }
    }
  }
  if (local_668 - *param_1 < *(float *)((int)param_1[0x356] + 0x78) ==
      (local_668 - *param_1 == *(float *)((int)param_1[0x356] + 0x78))) {
    *(undefined4 *)((int)param_1[6] + 0x24) = 1;
  }
  else {
    *(undefined4 *)((int)param_1[6] + 0x94) = 1;
    *(undefined4 *)((int)param_1[6] + 0x104) = 1;
  }
  fVar4 = *(float *)((int)param_1[0x356] + 0x78);
  if (local_668 < fVar4 != (local_668 == fVar4)) {
    if ((!bVar5) && (*(float *)((int)param_1[0x356] + 0x7c) < fVar2)) goto LAB_00d89097;
    *(float *)((int)param_1[6] + 0x84) = local_66c;
    *(float *)((int)param_1[6] + 0xf4) = local_66c;
    if (*param_1 <= *(float *)((int)param_1[0x356] + 0x70)) {
      if (local_66c <= 0.0) {
        if (local_66c != 0.0) goto LAB_00d8907a;
      }
      else {
        fVar4 = *(float *)((int)param_1[0x356] + 0x8c);
        if (local_66c < fVar4 != (local_66c == fVar4)) {
          *(undefined4 *)((int)param_1[6] + 0x74) = 1;
          *(float *)((int)param_1[6] + 0x78) = fVar3 + local_668;
          *(float *)((int)param_1[6] + 0x7c) = fVar2;
          fVar4 = fVar2;
          if (bVar5) {
            fVar4 = -fVar2;
          }
          *(float *)((int)param_1[6] + 0x80) = fVar4;
        }
      }
      *(undefined4 *)((int)param_1[6] + 0xe4) = 1;
      *(float *)((int)param_1[6] + 0xe8) = fVar3 + local_668;
      *(float *)((int)param_1[6] + 0xec) = fVar2;
      fVar4 = fVar2;
      if (bVar5) {
        fVar4 = -fVar2;
      }
      *(float *)((int)param_1[6] + 0xf0) = fVar4;
    }
    else {
      *(undefined4 *)((int)param_1[6] + 0x90) = 1;
      *(undefined4 *)((int)param_1[6] + 0x100) = 1;
    }
  }
LAB_00d8907a:
  if (bVar5) {
    if (local_5b4 <= fVar2) goto LAB_00d89097;
    fVar4 = *(float *)((int)param_1[0x356] + 0xa0);
  }
  else {
    fVar4 = *(float *)((int)param_1[0x356] + 0xa0);
  }
  if (fVar2 < fVar4) {
    *(float *)((int)param_1[6] + 0x14) = local_66c;
    if (*param_1 <= *(float *)((int)param_1[0x356] + 0x18)) {
      *(undefined4 *)((int)param_1[6] + 4) = 1;
      *(float *)((int)param_1[6] + 8) = fVar3 + local_668;
      *(float *)((int)param_1[6] + 0xc) = fVar2;
      if (bVar5) {
        fVar2 = -fVar2;
      }
      *(float *)((int)param_1[6] + 0x10) = fVar2;
      hkpCdPointCollector::hkpCdPointCollector_16();
      return param_1;
    }
    *(undefined4 *)((int)param_1[6] + 0x20) = 1;
  }
LAB_00d89097:
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D89940  lib::StaticArray<Signal*,256>::vf04  size=4  [class]
undefined4 __fastcall lib::StaticArray<Signal*,256>::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00D8A1A0  lib::StaticArray<Signal*,256>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Signal*,256>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Signal*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D8A4A0  lib::StaticArray<Signal*,256>::StaticArray<Signal*,256>  size=221  [class]
undefined4 * __fastcall lib::StaticArray<Signal*,256>::StaticArray<Signal*,256>(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  *param_1 = SignalManagerImplement::vftable;
  param_1[2] = param_1 + 5;
  param_1[3] = 0;
  param_1[4] = 0x100;
  param_1[1] = vftable;
  puVar3 = &DAT_018bbd58;
  local_4 = param_1;
  do {
    puVar1 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7c168);
    if (puVar1 == (undefined4 *)0x0) {
      local_10 = (undefined4 *)0x0;
    }
    else {
      local_8 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[8] = 0;
      FUN_00dd7240();
      puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c168);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = AllocatedArray<Slot*>::vftable;
        puVar2[4] = 0;
        puVar2[5] = 0;
      }
      local_c = &DAT_01b7c168;
      FUN_00d8a2b0(local_8,&local_c);
      puVar1[10] = puVar2;
      param_1 = local_4;
      local_10 = puVar1;
    }
    (**(code **)(param_1[1] + 8))(&local_10);
    puVar3 = puVar3 + 2;
  } while ((int)puVar3 < 0x18bbf40);
  return param_1;
}

// 00DC7B90  lib::StaticArray<EntityHandle,10>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<EntityHandle,10>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<EntityHandle>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DC7E10  lib::StaticArray<EntityHandle,10>::StaticArray<EntityHandle,10>  size=340  [class]
void lib::StaticArray<EntityHandle,10>::StaticArray<EntityHandle,10>
               (float *param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined **ppuStack_48;
  undefined1 *puStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [52];
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 != 0) goto LAB_00dc7e4a;
  }
  iVar3 = FUN_00a81330();
LAB_00dc7e4a:
  puStack_44 = auStack_38;
  iVar4 = 0;
  iStack_40 = 0;
  uStack_3c = 10;
  ppuStack_48 = vftable;
  FUN_00c57c20(iVar3,&ppuStack_48,param_2);
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  fStack_58 = 0.0;
  puVar5 = puStack_44;
  if (puStack_44 != puStack_44 + iStack_40 * 4) {
    do {
      iVar3 = FUN_00a81330();
      if ((((iVar3 != 0) && (iVar3 = FUN_009f93b0(*(undefined4 *)(iVar3 + 0x24)), iVar3 != 0)) &&
          (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (*(int *)(iVar3 + 0x4e4) == 0)) {
        iVar4 = iVar4 + 1;
        fStack_60 = fStack_60 + *(float *)(iVar3 + 0x40);
        fStack_5c = *(float *)(iVar3 + 0x44) + fStack_5c;
        fStack_58 = *(float *)(iVar3 + 0x48) + fStack_58;
        fStack_54 = *(float *)(iVar3 + 0x4c) + fStack_54;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != puStack_44 + iStack_40 * 4);
    if (iVar4 != 0) {
      fVar1 = (float)iVar4;
      *param_1 = fStack_60 / fVar1;
      param_1[1] = fStack_5c / fVar1;
      param_1[2] = fStack_58 / fVar1;
      param_1[3] = fStack_54 / fVar1;
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  return;
}

// 00DC7F70  lib::StaticArray<EntityHandle,10>::StaticArray<EntityHandle,10>_2  size=237  [class]
uint lib::StaticArray<EntityHandle,10>::StaticArray<EntityHandle,10>_2
               (int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined **ppuStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [40];
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00dc7fa2;
  }
  iVar2 = FUN_00a81330();
LAB_00dc7fa2:
  puStack_34 = auStack_28;
  uVar4 = 0;
  iStack_30 = 0;
  uStack_2c = 10;
  ppuStack_38 = vftable;
  FUN_00c57c20(iVar2,&ppuStack_38,param_3);
  puVar3 = puStack_34;
  if (puStack_34 != puStack_34 + iStack_30 * 4) {
    do {
      iVar2 = FUN_00a81330();
      if ((((iVar2 != 0) && (iVar2 = FUN_009f93b0(*(undefined4 *)(iVar2 + 0x24)), iVar2 != 0)) &&
          (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) && (*(int *)(iVar2 + 0x4e4) == 0)) {
        *(int *)(param_1 + uVar4 * 4) = iVar2;
        uVar4 = uVar4 + 1;
        if (param_2 <= uVar4) {
          return uVar4;
        }
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 != puStack_34 + iStack_30 * 4);
  }
  if (uVar4 < param_2) {
    puVar5 = (undefined4 *)(param_1 + uVar4 * 4);
    for (iVar2 = param_2 - uVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return uVar4;
}

// 00E88E30  lib::StaticArray<Event::Work*,8>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<Event::Work*,8>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<Event::Work*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E915F0  lib::StaticArray<char,256>::StaticArray<char,256>  size=254  [class]
void lib::StaticArray<char,256>::StaticArray<char,256>(int *param_1,char *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  int iVar3;
  code *pcVar4;
  undefined **ppuStack_114;
  undefined1 *puStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [252];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&ppuStack_114;
  cVar1 = (**(code **)(*param_1 + 4))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)*param_1)();
    if (cVar1 != '\0') {
      puStack_110 = auStack_104;
      uStack_10c = 0;
      uStack_108 = 0x100;
      ppuStack_114 = vftable;
      cVar1 = (**(code **)(*param_1 + 0x74))(&ppuStack_114);
      if (cVar1 != '\0') {
        ppuVar2 = (undefined **)FUN_009fde60(ppuStack_114);
        *(undefined ***)param_2 = ppuVar2;
        __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffee8);
        return;
      }
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffee8);
      return;
    }
    iVar3 = FUN_009f8ea0(&ppuStack_114,0x100,*(undefined ***)param_2,1);
    pcVar4 = *(code **)(*param_1 + 0x70);
    if (iVar3 == 0) {
      param_2 = "eObjInvalid";
    }
    else {
      param_2 = (char *)&ppuStack_114;
    }
  }
  else {
    pcVar4 = (code *)((undefined4 *)*param_1)[10];
  }
  (*pcVar4)(param_2);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffee8);
  return;
}

// 00E955B0  lib::StaticArray<char,256>::vf00  size=47  [class]
undefined4 * __thiscall lib::StaticArray<char,256>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Array<char>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

