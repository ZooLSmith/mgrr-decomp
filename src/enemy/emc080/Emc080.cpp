// src/enemy/emc080/Emc080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 007AEB10..00AB9EE0, 222 functions

#include "types.h"

// 007AEB10  FUN_007aeb10  size=45  [callgraph]
void __thiscall
FUN_007aeb10(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = param_4;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}

// 007AED00  Emc080::vf118  size=91  [class]
undefined4 __thiscall Emc080::vf118(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = Bh0064::vf118(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(undefined4 **)(*(int *)(param_1 + 0x588) + 0x130) = puVar2;
    if (*(int *)(*(int *)(param_1 + 0x588) + 0x130) == 0) {
      return 0;
    }
  }
  return 1;
}

// 007AED60  Emc080::vf304  size=51  [class]
void __fastcall Emc080::vf304(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x588) + 0x130);
  *(undefined4 *)(param_1 + 0x11d0) = 0;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x11d0) = 1;
    *(int *)(param_1 + 0x4a0) = piVar1[1];
  }
  return;
}

// 007AEDB0  FUN_007aedb0  size=93  [between]
bool __thiscall FUN_007aedb0(int param_1,int param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  
  if (param_2 < 0x50001) {
    if (param_2 != 0x50000) {
      if (param_2 < 0x10009) {
        return false;
      }
      if (0x1000a < param_2) {
        return false;
      }
      fVar1 = *(float *)(param_1 + 0xa9c);
      if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
        return false;
      }
      return true;
    }
    bVar2 = *(float *)(param_1 + 0xa9c) < 0.0;
  }
  else {
    if (param_2 != 0x70000) {
      return false;
    }
    bVar2 = param_3 == 2;
  }
  return bVar2;
}

// 007AEE10  Emc080::thunk_vf54  size=5  [class]
void __fastcall Emc080::thunk_vf54(int *param_1)

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

// 007AEE30  FUN_007aee30  size=172  [between]
void __fastcall FUN_007aee30(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a96030(0,0x3c23d70a);
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
      param_1[0x440] = 0x42700000;
      return;
    }
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  return;
}

// 007AEF00  FUN_007aef00  size=79  [between]
void __fastcall FUN_007aef00(int param_1)

{
  *(undefined4 *)(param_1 + 0x14f4) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  *(undefined4 *)(param_1 + 0x1934) = 0;
  *(undefined4 *)(param_1 + 0x1b54) = 0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007AEF60  FUN_007aef60  size=379  [between]
void __fastcall FUN_007aef60(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  undefined2 uVar4;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  uVar4 = 5;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00e251d0(0);
    break;
  case 1:
    break;
  case 2:
    if (param_1[299] == 1) {
      uVar4 = 0x2e;
    }
    FUN_00aa4080(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  case 3:
    fVar2 = (float)param_1[0x248] - (float)param_1[0x244];
    param_1[0x248] = (int)fVar2;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      (**(code **)(*param_1 + 0x358))(0x28,0);
      param_1[0x248] = 0x40000000;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00e25120(0x41200000);
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x47a] = 1;
      (*pcVar1)();
      param_1[0x440] = 0x42700000;
      return;
    }
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007AF100  FUN_007af100  size=164  [between]
void __fastcall FUN_007af100(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007af16f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007af16f:
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
  return;
}

// 007AF1C0  FUN_007af1c0  size=238  [between]
void __fastcall FUN_007af1c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x15;
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x1000a) {
      uVar2 = 0x19;
    }
    FUN_00aa4080(uVar2,0,0x3daaaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_007af258;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007af258:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007AF2B0  FUN_007af2b0  size=65  [between]
void __thiscall FUN_007af2b0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  return;
}

// 007AF300  FUN_007af300  size=161  [between]
void __fastcall FUN_007af300(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  fVar3 = 0.0;
  D3DXMatrixInverse(local_50,0,param_1 + 0x10);
  D3DXVec3TransformNormal(auStack_6c,param_1 + 0x11f0,auStack_5c);
  fVar2 = 0.3;
  fVar1 = 0.7;
  if ((*(byte *)(param_1 + 0x12e0) & 1) != 0) {
    fVar2 = 0.0;
    fVar1 = 1.0;
  }
  fVar1 = fVar2 * (*(float *)(param_1 + 0x1210) / *(float *)(param_1 + 0x12f0)) +
          fVar1 * (fVar3 / (*(float *)(param_1 + 0x12e8) * 0.7));
  if ((fVar1 <= 1.0) && (-1.0 <= fVar1)) {
    return;
  }
  return;
}

// 007AF3B0  FUN_007af3b0  size=284  [between]
void __fastcall FUN_007af3b0(int param_1)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  D3DXMatrixInverse(local_50,0,param_1 + 0x10);
  D3DXVec3TransformNormal(auStack_6c,param_1 + 0x11f0,auStack_5c);
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x1218) == 0.0) {
    fVar2 = 1.0;
    if ((*(byte *)(param_1 + 0x12e0) & 1) == 0) {
      fVar1 = 0.3;
      fVar2 = 0.7;
    }
    fVar1 = fVar2 * (unaff_ESI / (*(float *)(param_1 + 0x12e8) * 0.9)) +
            fVar1 * (*(float *)(param_1 + 0x1218) / (*(float *)(param_1 + 0x12fc) * -1.0));
  }
  else {
    fVar2 = 1.0;
    if ((*(byte *)(param_1 + 0x12e0) & 1) == 0) {
      fVar1 = 0.3;
      fVar2 = 0.7;
    }
    fVar1 = fVar2 * (unaff_ESI / (*(float *)(param_1 + 0x12e8) * 0.9)) +
            fVar1 * (*(float *)(param_1 + 0x1218) / *(float *)(param_1 + 0x12f8));
  }
  if ((fVar1 <= 1.0) && (fVar1 < -1.0)) {
    return;
  }
  return;
}

// 007AF4D0  FUN_007af4d0  size=92  [between]
void __fastcall FUN_007af4d0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007AF540  FUN_007af540  size=148  [between]
void __fastcall FUN_007af540(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[0x4c9] = 0;
  param_1[0x47a] = 0;
  param_1[0x8e0] = 0;
                    /* WARNING: Could not recover jumptable at 0x007af5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 007AF5F0  FUN_007af5f0  size=105  [between]
void __fastcall FUN_007af5f0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(9,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007AF670  FUN_007af670  size=564  [between]
void __fastcall FUN_007af670(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(9,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43700000;
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20005) {
      param_1[0x476] = param_1[0x25];
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20006) {
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
      param_1[0x476] = (int)(float)fVar3;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20007) {
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] - 1.5707964);
      param_1[0x476] = (int)(float)fVar3;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20008) {
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
      param_1[0x476] = (int)(float)fVar3;
    }
    param_1[0x477] = 0;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8de10((float)param_1[0x477] * (float)param_1[0x244],param_1[0x476],0);
    fVar1 = (float)param_1[0x244] * 0.0005 + (float)param_1[0x477];
    param_1[0x477] = (int)fVar1;
    if (fVar1 <= 0.08) {
      return;
    }
    param_1[0x477] = 0x3da3d70a;
    return;
  case 2:
    param_1[0x187] = 3;
    param_1[0x248] = 0x42340000;
    break;
  case 3:
    break;
  default:
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a8de10((float)param_1[0x477] * (float)param_1[0x244],param_1[0x476],0);
  fVar3 = (float10)FUN_00fdc1f0();
  param_1[0x477] = (int)(float)(fVar3 * (float10)(float)param_1[0x477]);
  return;
}

// 007AF8D0  FUN_007af8d0  size=452  [between]
void __fastcall FUN_007af8d0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(9,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    param_1[0x478] = 0;
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20009) {
      param_1[0x479] = -0x42f105cb;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x2000a) {
      param_1[0x479] = 0x3d0efa35;
    }
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x478] * (float)param_1[0x244] +
                                  (float)param_1[0x25]);
    param_1[0x25] = (int)(float)fVar3;
    fVar3 = (float10)FUN_00fdc1f0();
    param_1[0x478] =
         (int)(float)(((float10)(float)param_1[0x479] - (float10)(float)param_1[0x478]) * fVar3 +
                     (float10)(float)param_1[0x478]);
    return;
  case 2:
    param_1[0x187] = 3;
    param_1[0x248] = 0x41a00000;
    break;
  case 3:
    break;
  default:
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar3 = (float10)FUN_00ddba30((float)param_1[0x478] * (float)param_1[0x244] + (float)param_1[0x25]
                               );
  param_1[0x25] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00fdc1f0();
  param_1[0x478] =
       (int)(float)(-(float10)(float)param_1[0x478] * fVar3 + (float10)(float)param_1[0x478]);
  return;
}

// 007AFAB0  FUN_007afab0  size=63  [between]
void __fastcall FUN_007afab0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2384) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    *(undefined4 *)(param_1 + 0x2434) = 1;
    *(undefined4 *)(param_1 + 0x2438) = 0x40c00000;
    *(undefined4 *)(param_1 + 0x243c) = 0x43960000;
    *(undefined4 *)(param_1 + 0x2440) = 0x40490fdb;
  }
  return;
}

// 007AFAF0  FUN_007afaf0  size=54  [between]
void __fastcall FUN_007afaf0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2438) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x2434) = 1;
  *(undefined4 *)(param_1 + 0x2384) = 1;
  *(undefined4 *)(param_1 + 0x243c) = 0x43960000;
  *(undefined4 *)(param_1 + 0x2440) = 0x40490fdb;
  return;
}

// 007AFB50  FUN_007afb50  size=116  [between]
void __fastcall FUN_007afb50(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(9,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1714) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007AFBD0  FUN_007afbd0  size=156  [between]
void __fastcall FUN_007afbd0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2320) == 0) {
    uVar1 = 0x40;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a962d0(0,0);
    if (uVar1 != 0) {
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(0xd2,0,0x3daaaaab,0x3f800000,uVar1 | 0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007AFC70  FUN_007afc70  size=156  [between]
void __fastcall FUN_007afc70(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2320) == 0) {
    uVar1 = 0x40;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a962d0(0,0);
    if (uVar1 != 0) {
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(0xd6,0,0x3daaaaab,0x3f800000,uVar1 | 0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007AFD10  FUN_007afd10  size=331  [between]
void __fastcall FUN_007afd10(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar2 = 0;
  if (param_1[0x8c8] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    if (param_1[0x8c8] == 0) {
      uVar3 = 0xcf;
      if (param_1[0x186] == 0x10013) {
        uVar3 = 0xce;
      }
    }
    else {
      uVar3 = 0xce;
      if (param_1[0x186] == 0x10013) {
        uVar3 = 0xcf;
      }
    }
    FUN_00a962d0(0,0);
    if (uVar2 != 0) {
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,param_1[0x434] | uVar2 | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  }
  else if (param_1[0x187] != 1) goto LAB_007afe04;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007afe04:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007AFE70  FUN_007afe70  size=286  [between]
void __fastcall FUN_007afe70(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar2 = 0;
  if (param_1[0x8c8] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    FUN_00a962d0(0,0);
    if (uVar2 != 0) {
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(0xe4,0,0x3daaaaab,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  }
  else if (param_1[0x187] != 1) goto LAB_007aff37;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x440] = 0x42f00000;
  }
LAB_007aff37:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007AFFA0  FUN_007affa0  size=286  [between]
void __fastcall FUN_007affa0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar2 = 0;
  if (param_1[0x8c8] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    FUN_00a962d0(0,0);
    if (uVar2 != 0) {
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(0xe5,0,0x3daaaaab,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  }
  else if (param_1[0x187] != 1) goto LAB_007b0067;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x440] = 0x42f00000;
  }
LAB_007b0067:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007B0110  FUN_007b0110  size=170  [between]
void __fastcall FUN_007b0110(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    iVar1 = param_1[0x3a6];
    uVar3 = 0x8000000;
    uVar2 = 0x8d;
    if (iVar1 == 4) {
      uVar2 = 0x8e;
    }
    if (iVar1 == 1) {
      uVar2 = 0x8f;
    }
    if (iVar1 == 2) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007b0155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007B01D0  FUN_007b01d0  size=169  [between]
void __fastcall FUN_007b01d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x3a6];
    uVar1 = 0xad;
    if (iVar2 == 4) {
      uVar1 = 0xae;
    }
    if (iVar2 == 1) {
      uVar1 = 0xaf;
    }
    if (iVar2 == 2) {
      uVar1 = 0xb0;
    }
    FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007b0277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007B0290  FUN_007b0290  size=156  [between]
void __fastcall FUN_007b0290(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar2 = 0;
  if (param_1[0x8c8] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xca,0,0x3daaaaab,0x3f800000,param_1[0x434] | uVar2 | 0x8000000,0xbf800000,
                 0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x007b032a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007B0360  FUN_007b0360  size=333  [between]
void __fastcall FUN_007b0360(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 3;
  uVar1 = 0;
  param_1[0x20a] = 0x78;
  if (param_1[0x8c8] == 0) {
    uVar1 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    uVar4 = 0x3e2aaaab;
    uVar3 = 0xdd;
    break;
  case 1:
  case 3:
    goto switchD_007b03a0_caseD_1;
  case 2:
    uVar4 = 0x3e088889;
    uVar3 = 0xde;
    break;
  case 4:
    FUN_00aa4080(0xdf,0,0x3e088889,0x3f800000,uVar1 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007b04a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  default:
    return;
  }
  FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar1 | 0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
switchD_007b03a0_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 007B04E0  FUN_007b04e0  size=54  [between]
void __fastcall FUN_007b04e0(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x187] != 0) && (param_1[0x187] == 1)) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      param_1[0x187] = 2;
    }
  }
  return;
}

// 007B0540  FUN_007b0540  size=225  [between]
void __fastcall FUN_007b0540(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  if (param_1[0x8c8] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xe0,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    if ((param_1[0x8e7] != 0) && (param_1[0x3a0] == 0)) {
      param_1[0x248] = 0x43700000;
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 <= fVar1 - (float)param_1[0x244]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007b061f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007B0660  FUN_007b0660  size=408  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007b0660(int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_8 [2];
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar1 = 0;
  if (param_1[0x8c8] == 0) {
    uVar1 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xdd,0,0x3e2aaaab,0x3f800000,uVar1 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xde,0,0x3e088889,0x3f800000,uVar1 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_8[0] = 0;
    local_8[1] = 0;
    FUN_00ac8270(param_1 + 0x10,local_8,local_8 + 1);
    if (local_8[0] == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xdf,0,0x3e088889,0x3f800000,uVar1 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007b07f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007B0840  FUN_007b0840  size=170  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007b0840(int *param_1)

{
  int local_8 [2];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(9,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_8[0] = 0;
  local_8[1] = 0;
  FUN_00ac8270(param_1 + 0x10,local_8,local_8 + 1);
  if (local_8[0] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 007B0940  Emc080::vf1A4  size=45  [class]
void __thiscall Emc080::vf1A4(int param_1,undefined4 param_2,byte param_3)

{
  if ((param_3 & 1) != 0) {
    *(int *)(param_1 + 0x236c) = *(int *)(param_1 + 0x236c) + 1;
    *(undefined4 *)(param_1 + 0x2364) = 1;
    *(undefined4 *)(param_1 + 0x2368) = 1;
  }
  if ((param_3 & 6) != 0) {
    *(undefined4 *)(param_1 + 0x2370) = 1;
  }
  return;
}

// 007B0970  Emc080::vf208  size=36  [class]
void __thiscall Emc080::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 10.0;
  return;
}

// 007B09A0  Emc080::vf6C  size=5  [class]
void __fastcall Emc080::vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 007B09B0  Emc080::vf70  size=5  [class]
void __fastcall Emc080::vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 007B09C0  FUN_007b09c0  size=275  [between]
void __thiscall
FUN_007b09c0(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00a8c9b0(0,0x82,0x42700000,0);
  FUN_00a8c9b0(0,0x83,0x42700000,0);
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xed4) = uVar1;
    *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(param_1 + 0xe98);
    iVar2 = FUN_007aedb0(param_2,param_3);
    if (iVar2 != 0) {
      param_3 = param_3 | 0x80000000;
    }
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xc7ffffff;
    *(undefined4 *)(param_1 + 0x1714) = 0;
    if ((param_2 & 0xffff0000) == 0x50000) {
      FUN_00c27260(0x40200000);
    }
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(uint *)(param_1 + 0xe98) = param_3;
  if (-1 < (int)param_3) {
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x10d0) = 0;
    return;
  }
  FUN_00a962d0(1,0);
  *(undefined4 *)(param_1 + 0x10d0) = 0x40;
  return;
}

// 007B0B00  FUN_007b0b00  size=213  [between]
void __fastcall FUN_007b0b00(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (char)param_1[0x880];
  switch(cVar2) {
  case '\0':
    *(undefined1 *)((int)param_1 + 0x2201) = 0;
    *(char *)(param_1 + 0x880) = cVar2 + '\x01';
    FUN_00eaa6e0(0x3f800000,0);
  case '\x01':
    if (5 < *(byte *)((int)param_1 + 0x2201)) {
      *(char *)(param_1 + 0x880) = (char)param_1[0x880] + '\x01';
      return;
    }
    return;
  case '\x02':
    *(char *)(param_1 + 0x880) = cVar2 + '\x01';
    (**(code **)(*param_1 + 0x358))(0x1e,param_1 + 0x884);
    iVar3 = 0x41c00000;
    break;
  case '\x03':
  case '\x05':
    goto switchD_007b0b15_caseD_3;
  case '\x04':
    *(char *)(param_1 + 0x880) = cVar2 + '\x01';
    FUN_00eaa6e0(0x41200000,0);
    iVar3 = 0x40c00000;
    break;
  default:
    return;
  }
  param_1[0x87f] = iVar3;
switchD_007b0b15_caseD_3:
  fVar1 = (float)param_1[0x87f];
  param_1[0x87f] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 <= fVar1 - (float)param_1[0x244]) {
    return;
  }
  *(undefined1 *)(param_1 + 0x880) = 0;
  return;
}

// 007B0C10  FUN_007b0c10  size=36  [between]
undefined4 FUN_007b0c10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 007B0C40  FUN_007b0c40  size=88  [between]
void FUN_007b0c40(void)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
    FUN_00a7c950();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe);
  return;
}

// 007B0CA0  FUN_007b0ca0  size=36  [between]
undefined4 FUN_007b0ca0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 007B0CD0  FUN_007b0cd0  size=88  [between]
void FUN_007b0cd0(void)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
    FUN_00a7c950();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}

// 007B0D30  FUN_007b0d30  size=52  [between]
void __fastcall FUN_007b0d30(int *param_1)

{
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_007b09c0(0x20001,0,0,0,0);
  return;
}

// 007B0D80  FUN_007b0d80  size=29  [between]
void FUN_007b0d80(void)

{
  int iVar1;
  
  iVar1 = FUN_00ac45b0();
  if (iVar1 == 0) {
    return;
  }
  FUN_00ac45b0();
  FUN_00a7c8a0();
  return;
}

// 007B0DA0  Emc080::vf288  size=8  [class]
undefined4 Emc080::vf288(void)

{
  return 1;
}

// 007B0E30  FUN_007b0e30  size=103  [between]
void __thiscall FUN_007b0e30(int *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x194,0);
    (**(code **)(*param_1 + 0x358))(0x196,0);
  }
  *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x10;
  FUN_00ac8d80(4,1);
  FUN_00ac8d80(9,1);
  FUN_00ac9420("_EFD00");
  FUN_00ac9420("_EFD02");
  return;
}

// 007B0EA0  FUN_007b0ea0  size=103  [between]
void __thiscall FUN_007b0ea0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x195,0);
    (**(code **)(*param_1 + 0x358))(0x197,0);
  }
  *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 8;
  FUN_00ac8d80(6,1);
  FUN_00ac8d80(5,1);
  FUN_00ac9420("_EFD01");
  FUN_00ac9420("_EFD03");
  return;
}

// 007B0FC0  FUN_007b0fc0  size=312  [between]
undefined4 __fastcall FUN_007b0fc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfStack_ac;
  float *pfStack_a8;
  int iStack_a4;
  undefined1 auStack_94 [8];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [88];
  
  iVar1 = *(int *)(param_1 + 0xa84);
  uVar2 = 0;
  if (iVar1 != 0) {
    iStack_a4 = iVar1 + 0x10;
    local_80 = 0.0;
    pfStack_ac = &local_80;
    local_7c = 0.0;
    local_78 = 0.0;
    pfStack_a8 = pfStack_ac;
    D3DXVec3TransformNormal();
    fStack_8c = *(float *)(iVar1 + 0x40) + fStack_8c;
    fStack_88 = *(float *)(iVar1 + 0x44) + fStack_88;
    fStack_84 = *(float *)(iVar1 + 0x48) + fStack_84;
    local_7c = fStack_8c - *(float *)(param_1 + 0x40);
    local_78 = fStack_88 - *(float *)(param_1 + 0x44);
    fStack_74 = fStack_84 - *(float *)(param_1 + 0x48);
    fStack_70 = local_80 - *(float *)(param_1 + 0x4c);
    D3DXMatrixInverse(auStack_5c,0,param_1 + 0x10);
    D3DXVec3TransformNormal(&fStack_88,&fStack_88,auStack_68);
    pfStack_a8 = (float *)0x0;
    pfStack_ac = (float *)0x0;
    fStack_84 = 0.0;
    local_80 = 0.0;
    local_7c = 0.0;
    thunk_FUN_00dde510(&pfStack_a8,&pfStack_ac,auStack_94,&fStack_84);
    if ((((*(byte *)(param_1 + 0xeb9) & 8) == 0) &&
        (!NAN((float)pfStack_ac) && 0.0 < (float)pfStack_ac != ((float)pfStack_ac == 0.0))) &&
       ((float)pfStack_ac <= 2.3561945)) {
      uVar2 = 1;
    }
    if ((((*(byte *)(param_1 + 0xeb9) & 0x10) == 0) && ((float)pfStack_ac <= 0.0)) &&
       (-2.3561945 <= (float)pfStack_ac)) {
      return 1;
    }
  }
  return uVar2;
}

// 007B1100  Emc080::vfFC  size=52  [class]
void __fastcall Emc080::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  if (*(int *)(param_1 + 0xe90) == 0) {
    (**(code **)(*(int *)(param_1 + 0x1f30) + 8))(0x3f800000,0,0);
  }
  return;
}

// 007B1140  Emc080::vf100  size=40  [class]
void __fastcall Emc080::vf100(int *param_1)

{
  BehaviorAppBase::vf100();
  if (param_1[0x3a4] == 0) {
    (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x7cc);
  }
  return;
}

// 007B1170  Emc080::vf104  size=5  [class]
void __fastcall Emc080::vf104(int *param_1)

{
  int iVar1;
  
  if (param_1[0x13c] != 0) {
    iVar1 = FUN_00a7c890();
    if (iVar1 != 0) {
      iVar1 = FUN_00e33e50(0);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a9315f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 100))();
        return;
      }
    }
  }
  return;
}

// 007B1180  Emc080::vf108  size=13  [class]
void __fastcall Emc080::vf108(int *param_1)

{
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007B1190  Emc080::vf110  size=25  [class]
void __thiscall Emc080::vf110(int param_1,undefined4 param_2)

{
  Bh0064::vf110(param_2);
  *(undefined4 *)(param_1 + 0x2454) = param_2;
  return;
}

// 007B11E0  FUN_007b11e0  size=232  [between]
void __fastcall FUN_007b11e0(uint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0x37;
  uVar1 = FUN_00a81330(0x37,0);
  FUN_00a82790(uVar1,uVar2,uVar3);
  *param_1 = *param_1 | 2;
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3d75c28f,0x3ae4c388,0x3c0efa35);
  uVar3 = 0;
  uVar2 = 0x38;
  uVar1 = FUN_00a81330(0x38,0);
  FUN_00a82790(uVar1,uVar2,uVar3);
  param_1[0x34] = param_1[0x34] | 2;
  FUN_00a82840(0x3eb2b8c2,0xbfc90fdb,0x3d75c28f,0x3ae4c388,0x3c0efa35);
  *(undefined2 *)((int)param_1 + 0x1c6) = 0x801;
  param_1[0x77] = 0x43700000;
  param_1[0x75] = 0x3c;
  param_1[0x74] = 0x3c;
  return;
}

// 007B12D0  FUN_007b12d0  size=125  [between]
void FUN_007b12d0(void)

{
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e4ccccd,0x3ae4c388,0x3c0efa35);
  FUN_00a82840(0x3f860a92,0xbfc90fdb,0x3e4ccccd,0x3ae4c388,0x3c0efa35);
  return;
}

// 007B1350  FUN_007b1350  size=304  [between]
void __fastcall FUN_007b1350(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 9;
  uVar1 = FUN_00a81330(9,0);
  FUN_00a82790(uVar1,uVar3,uVar4);
  *param_1 = *param_1 | 2;
  FUN_00a82870(0x3fa78d36,0xbfa78d36,0x3e99999a,0x3ae4c388,0x3d0efa35);
  uVar4 = 0;
  uVar3 = 10;
  uVar1 = FUN_00a81330(10,0);
  FUN_00a82790(uVar1,uVar3,uVar4);
  param_1[0x34] = param_1[0x34] | 2;
  FUN_00a82840(0x3f9c61aa,0xbf060a92,0x3e99999a,0x3ae4c388,0x3d0efa35);
  uVar1 = 0x800;
  param_1[0x6d] = 0;
  *(undefined2 *)((int)param_1 + 0x1c6) = 0x800;
  FUN_00a81330(0x800);
  FUN_00a7c8a0();
  iVar2 = FUN_00a12210(uVar1);
  if (iVar2 != 0) {
    param_1[0x80] = *(uint *)(iVar2 + 0x40);
    param_1[0x81] = *(uint *)(iVar2 + 0x44);
    param_1[0x82] = *(uint *)(iVar2 + 0x48);
    param_1[0x83] = *(uint *)(iVar2 + 0x4c);
  }
  param_1[0x77] = 0;
  param_1[0x75] = 1;
  param_1[0x74] = 1;
  return;
}

// 007B14F0  FUN_007b14f0  size=164  [between]
void __thiscall FUN_007b14f0(int param_1,int param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  
  FUN_00a81330();
  iVar2 = FUN_00a7c8a0();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1ac) == 0)) {
    if (*(int *)(iVar2 + 0xe90) == 0) {
      bVar1 = *(byte *)(iVar2 + 0x4a8) & 0x40;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 0x4a8) & 0x80;
    }
    if (bVar1 != 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1bc) = 1;
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x1d0);
  }
  *(int *)(param_1 + 0x1cc) = param_2;
  if (param_3 < 0.0) {
    switch(*(undefined4 *)(param_1 + 0x1ac)) {
    case 0:
    case 1:
    case 2:
      param_3 = 3.0;
      break;
    case 3:
      param_3 = 30.0;
      break;
    default:
      goto switchD_007b1569_default;
    }
  }
  *(float *)(param_1 + 0x1c8) = param_3;
switchD_007b1569_default:
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1cc);
  return;
}

// 007B15E0  FUN_007b15e0  size=102  [between]
void __thiscall
FUN_007b15e0(byte *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  *(undefined4 *)(param_1 + 0x50) = *param_3;
  *(undefined4 *)(param_1 + 0x54) = param_3[1];
  *(undefined4 *)(param_1 + 0x58) = param_3[2];
  *(undefined4 *)(param_1 + 0x5c) = param_3[3];
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x60) = param_4;
  *(undefined4 *)(param_1 + 0x48) = param_5;
  *(undefined4 *)(param_1 + 0x4c) = param_6;
  sVar1 = FUN_00dde2d0(0,1);
  param_1[8] = 0xff;
  if (sVar1 != 0) {
    *param_1 = *param_1 | 1;
  }
  return;
}

// 007B1710  FUN_007b1710  size=22  [between]
undefined4 FUN_007b1710(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 007B1730  Emc080::vf158  size=5  [class]
undefined4 Emc080::vf158(void)

{
  return 0;
}

// 007B1740  Emc080::vf184  size=6  [class]
undefined4 Emc080::vf184(void)

{
  return 0xffffffff;
}

// 007B1750  Emc080::vf188  size=76  [class]
void Emc080::vf188(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_1 == 7) {
      FUN_007b09c0(0x90001,0,0,0,0);
    }
  }
  return;
}

// 007B17E0  FUN_007b17e0  size=35  [between]
void __fastcall FUN_007b17e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2300) = 0x17;
  *(undefined4 *)(param_1 + 0x2308) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2304) = 0x42700000;
  return;
}

// 007B1840  FUN_007b1840  size=35  [between]
void __fastcall FUN_007b1840(int param_1)

{
  *(undefined4 *)(param_1 + 0x2300) = 0x18;
  *(undefined4 *)(param_1 + 0x2308) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2304) = 0x42700000;
  return;
}

// 007B18A0  FUN_007b18a0  size=98  [between]
void __fastcall FUN_007b18a0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x2300) != -1) {
    fVar1 = *(float *)(param_1 + 0x2308) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x2308) = fVar1;
    if (fVar1 < 0.0) {
      *(float *)(param_1 + 0x2304) = *(float *)(param_1 + 0x2304) - *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0x2304) < 0.0) {
      *(undefined4 *)(param_1 + 0x2300) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2308) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x2304) = 0xbf800000;
    }
  }
  return;
}

// 007B1910  Emc080::vf258  size=3  [class]
void Emc080::vf258(void)

{
  return;
}

// 007B1920  FUN_007b1920  size=118  [between]
undefined4 __thiscall FUN_007b1920(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 << 5,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 << 5,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 007B19B0  FUN_007b19b0  size=127  [between]
int __thiscall FUN_007b19b0(int param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 << 5;
      iVar3 = param_2;
      do {
        puVar1 = (undefined2 *)(*(int *)(param_1 + 4) + iVar2);
        *puVar1 = *(undefined2 *)(*(int *)(param_1 + 4) + 0x20 + iVar2);
        puVar1[1] = puVar1[0x11];
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x20;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar1 + 0x12);
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar1 + 0x14);
        *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar1 + 0x16);
        *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(puVar1 + 0x18);
        *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(puVar1 + 0x1a);
        *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + 0x1c);
        *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(puVar1 + 0x1e);
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar3 = -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      iVar3 = param_2;
    }
    return iVar3;
  }
  return -1;
}

// 007B1AF0  FUN_007b1af0  size=52  [between]
void __fastcall FUN_007b1af0(int param_1)

{
  FUN_007b09c0(0x50002,0,0,0,0);
  if ((*(byte *)(param_1 + 0xeba) & 0x18) != 0) {
    FUN_007b09c0(0x50003,0,0,0,0);
  }
  return;
}

// 007B1B50  Emc080::vf300  size=32  [class]
void __fastcall Emc080::vf300(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x588) + 0x130);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = *(undefined4 *)(param_1 + 0x4a0);
  }
  return;
}

// 007B1B70  FUN_007b1b70  size=316  [between]
undefined4 __thiscall FUN_007b1b70(int *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_110 [140];
  uint local_84;
  uint local_80;
  int local_7c;
  
  uVar3 = 0;
  FUN_004105d0();
  FUN_0043e160(param_2);
  iVar1 = FUN_00ac8cd0(local_110);
  if (iVar1 != 0) {
    iVar1 = FUN_00ac8350();
    if (((local_84 & 0x400) != 0) ||
       ((local_80 & 0x20000) != 0 ||
        ((local_80 & 0x40000) != 0 || ((local_84 & 0x200) != 0 || iVar1 != 0)))) {
      if (local_7c != 0) {
        FUN_00ac8d00(param_1,local_110,0);
        param_1[0x438] = param_1[0x438] | 0x80000;
        uVar3 = 1;
        uVar4 = 0;
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          uVar4 = FUN_00a7c8a0();
        }
        if ((local_80 & 0x10000) == 0) {
          pcVar2 = *(code **)(*param_1 + 0x198);
          uVar5 = 0x100;
        }
        else {
          pcVar2 = *(code **)(*param_1 + 0x198);
          uVar5 = 1;
        }
        (*pcVar2)(uVar4,param_2,uVar5);
        FUN_00a9ba90(&stack0xfffffee4);
      }
      return uVar3;
    }
  }
  return 0;
}

// 007B1CB0  FUN_007b1cb0  size=117  [between]
undefined4 __thiscall FUN_007b1cb0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_80;
  
  FUN_004105d0();
  FUN_0043e160(param_2);
  if ((local_80 & 0x10000) == 0) {
    return 0;
  }
  uVar2 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x198))(uVar2,param_2,1);
  return 1;
}

// 007B1D30  FUN_007b1d30  size=81  [between]
undefined4 FUN_007b1d30(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_110;
  
  FUN_004105d0();
  FUN_0043e160(param_1);
  if ((((local_110 == 0) || (local_110 == 1)) || (local_110 == 2)) ||
     ((local_110 == 0x1b0 || (uVar1 = 1, local_110 == 0x147)))) {
    uVar1 = 0;
  }
  return uVar1;
}

// 007B1D90  Emc080::getAttackInfo  size=820  [class]
undefined4 __thiscall Emc080::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined1 local_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01647f44);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  local_8 = FUN_00ac8520(*param_2);
  if (*(int *)(param_1 + 0x239c) != 0) {
    local_8 = FUN_00fdbc60();
  }
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[3] = uVar4;
  puVar1[2] = uVar5;
  puVar1[1] = unaff_EDI;
  *(undefined1 *)(puVar1 + 4) = local_8;
  *puVar1 = (uint)*param_2;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x106;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    break;
  default:
    goto switchD_007b1e86_caseD_5;
  case 6:
    *puVar1 = 0x107;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    break;
  case 8:
    *puVar1 = 0x108;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    goto LAB_007b209f;
  case 10:
    *puVar1 = 0x109;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x800;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    break;
  case 0xc:
    *puVar1 = 0x10a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0xa00000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    break;
  case 0xe:
    *puVar1 = 0x10b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    goto LAB_007b209f;
  case 0x18:
    *puVar1 = 0x108;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    FUN_00aa56a0(puVar1);
    return unaff_ESI;
  case 0x1a:
    *puVar1 = 0x108;
    goto LAB_007b1fda;
  case 0x1c:
    *puVar1 = 0x109;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x800;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    FUN_00aa56a0(puVar1);
    return unaff_ESI;
  case 0x1e:
    *puVar1 = 0x109;
    puVar1[0x23] = puVar1[0x23] | 0x20000800;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    break;
  case 0x20:
    *puVar1 = 0x111;
LAB_007b1fda:
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    FUN_00aa56a0(puVar1);
    return unaff_ESI;
  case 0x22:
    *puVar1 = 0x109;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x800;
LAB_007b209f:
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
  }
  *(undefined1 *)((int)puVar1 + 0x11) = 7;
switchD_007b1e86_caseD_5:
  FUN_00aa56a0(puVar1);
  return unaff_ESI;
}

// 007B2120  FUN_007b2120  size=102  [between]
undefined4 __fastcall FUN_007b2120(int param_1)

{
  if ((1.2217305 < *(float *)(param_1 + 0xaa0)) && (*(float *)(param_1 + 0xaa0) < 2.3561945)) {
    FUN_007b09c0(0x10009,0,0,0,0);
    return 1;
  }
  if (2.3561945 < *(float *)(param_1 + 0xaa0)) {
    FUN_007b09c0(0x1000a,0,0,0,0);
    return 1;
  }
  return 0;
}

// 007B21E0  Emc080::vf264  size=354  [class]
undefined4 __thiscall Emc080::vf264(int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_c [12];
  
  FUN_0040ac60(param_2);
  param_1[0x6f4] = param_1[0x2e1];
  if (param_1[0x2e1] != 0) {
    param_1[0x6f0] = param_1[0x2e3];
    param_1[0x6f1] = param_1[0x2e4];
    param_1[0x6f2] = param_1[0x2e5];
    param_1[0x6f3] = 0x3f800000;
    param_1[0x6f5] = param_1[0x2e2];
  }
  FUN_00aa0ba0(param_1[0x2c2],param_1[0x2e7]);
  if (param_1[0x2c2] != -1) {
    iVar1 = FUN_00a8d750();
    if (iVar1 != 0) {
      FUN_007b09c0(0x20003,0,0,0,0);
    }
  }
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if (*(int *)(param_1[0x1f6] + 0x810) != 0) {
    FUN_00a8d580(0x400000);
  }
  if ((param_1[0x2c9] != -1) && (param_1[0x8e7] != 0)) {
    FUN_007b09c0(0x10003,0,0,0,0);
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 != 0) {
      FUN_00a5dcc0(iVar1);
      return 1;
    }
    FUN_009f8ea0(local_c,10,param_1[300],0);
    FUN_00dd5650(&DAT_0163d460,local_c,param_1[0x2c9]);
    (**(code **)(*param_1 + 0x34c))();
  }
  return 1;
}

// 007B2350  Emc080::vf50  size=259  [class]
void __fastcall Emc080::vf50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  if (param_1[0x43a] != 0) {
    iStack_18 = 0;
    iStack_1c = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_14 = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_50 = 0x3f800000;
    iStack_60 = param_1[0x10];
    iStack_5c = param_1[0x11];
    iStack_58 = param_1[0x12];
    iStack_54 = param_1[0x13];
    uVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x84))(0);
    FUN_00a8e130(&iStack_60,param_1 + 0x43c,*(undefined4 *)(iVar1 + 4),uVar2);
    iStack_20 = iStack_60;
    iStack_1c = iStack_5c;
    iStack_18 = iStack_58;
    FUN_00920c60(&uStack_50,0,0);
  }
  return;
}

// 007B2460  Emc080::vf268  size=152  [class]
undefined4 __thiscall
Emc080::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  if (*(int *)(param_1 + 0x4e4) != 0) {
switchD_007b2482_caseD_3:
    return 0;
  }
  switch(*param_4) {
  case 0:
  case 1:
  case 2:
  case 9:
  case 0xf:
    break;
  default:
    goto switchD_007b2482_caseD_3;
  case 10:
    if ((*(int *)(param_1 + 0x618) == 0x10002) && (*(int *)(param_1 + 0x61c) == 1)) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return 1;
    }
    break;
  case 0x20:
    if (*(int *)(param_1 + 0xe90) == 0) {
      FUN_00c3ccb0(0);
      FUN_00a88b50(4,0);
      FUN_007b09c0(0x20001,0,0,0,0);
    }
  }
  return 1;
}

// 007B2530  FUN_007b2530  size=550  [between]
void __fastcall FUN_007b2530(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  int aiStack_18 [2];
  int iStack_10;
  float afStack_c [2];
  float fStack_4;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x37,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x249] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0x3e99999a;
    param_1[0x24b] = 0;
    FUN_004066f0();
    if (param_1[0x1d9] != 0) {
      CharacterControl::setRadius(0x3e3851ec);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar2 = (float)param_1[0x24b];
  param_1[0x24b] = (int)(fVar2 - (float)param_1[0x244]);
  if (fVar2 - (float)param_1[0x244] <= 0.0) {
    (**(code **)(*param_1 + 0x358))(0x28,0);
    param_1[0x24b] = 0x40000000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float10)FUN_00a581b0(aiStack_18,param_1[0x24a],param_1[0x249]);
  param_1[0x249] = (int)(float)fVar4;
  param_1[0x14] = aiStack_18[0];
  param_1[0x16] = iStack_10;
  FUN_00a585a0(afStack_c,0x3e800000,(float)fVar4);
  fVar4 = (float10)fpatan((float10)afStack_c[0],(float10)fStack_4);
  param_1[0x25] = (int)(float)fVar4;
  iVar3 = FUN_00a54a60(param_1[0x249]);
  if (iVar3 != 0) {
    if (param_1[0x1d9] != 0) {
      FUN_004066f0();
      FUN_008e5ac0(2);
      FUN_008e5c50(0x19);
      CharacterControl::setRadius(0x40333333);
      FUN_00406760();
    }
    if ((param_1[0x128] != 0) && (param_1[0x128] != 6)) {
      FUN_007b09c0(0x20000,0,0,0,0);
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 007B2760  FUN_007b2760  size=137  [between]
void __thiscall FUN_007b2760(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x12);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xee0) = param_3;
    *(undefined4 *)(param_1 + 0xedc) = param_2;
    FUN_007b09c0(0x10005,0x80000000,4,0,0);
    return;
  }
  iVar1 = FUN_00a8c760(0x11);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xedc) = param_2;
    *(undefined4 *)(param_1 + 0xee0) = param_3;
    FUN_007b09c0(0x10005,0,4,0,0);
    return;
  }
  FUN_007b09c0(param_2,param_3,0,0,0);
  return;
}

// 007B27F0  FUN_007b27f0  size=440  [between]
void __fastcall FUN_007b27f0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x21,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c0efa35,0);
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x22,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (param_1[0x250] = param_1[0x250] + 1, 1 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x23,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (iVar1 = FUN_007b2120(), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x007b29a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007B29C0  FUN_007b29c0  size=1832  [between]
void __fastcall FUN_007b29c0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98 [2];
  undefined1 local_90 [32];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [96];
  
  local_a4 = *(float *)(param_1 + 0xa9c);
  local_a8 = *(float *)(param_1 + 0x910) * 0.08;
  fVar1 = 0.95;
  local_ac = 0.95;
  if ((*(ushort *)(param_1 + 0x12c0) & 8) != 0) {
    local_a8 = local_a8 * 10.0;
    fVar1 = 10.0;
    local_ac = 10.0;
  }
  if ((*(ushort *)(param_1 + 0x12c0) & 0x10) != 0) {
    local_a8 = local_a8 * 14.5;
    fVar1 = 14.5;
    local_ac = 14.5;
  }
  if ((*(int *)(param_1 + 0x239c) != 0) && (*(int *)(param_1 + 0xe80) == 0)) {
    local_a8 = local_a8 * 0.9;
    local_ac = fVar1 * 0.9;
  }
  fVar6 = (float10)FUN_00fdc1f0();
  cVar2 = *(char *)(param_1 + 0x1275);
  *(float *)(param_1 + 0x1210) = (float)((float10)*(float *)(param_1 + 0x1210) * fVar6);
  *(float *)(param_1 + 0x1218) = (float)(fVar6 * (float10)*(float *)(param_1 + 0x1218));
  switch(cVar2) {
  case '\0':
    *(char *)(param_1 + 0x1275) = cVar2 + '\x01';
    *(undefined4 *)(param_1 + 0x1220) = 0;
    *(undefined4 *)(param_1 + 0x1224) = 0;
  case '\x01':
    *(undefined4 *)(param_1 + 0x1270) = 0;
    goto switchD_007b2aa0_default;
  case '\x02':
    *(undefined4 *)(param_1 + 0x124c) = 0;
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) & 0xffffffeb;
    *(undefined4 *)(param_1 + 0x1270) = 0;
    *(char *)(param_1 + 0x1275) = cVar2 + '\x01';
    *(undefined4 *)(param_1 + 0x11e8) = 1;
  case '\x03':
    *(char *)(param_1 + 0x1275) = *(char *)(param_1 + 0x1275) + '\x01';
    *(undefined4 *)(param_1 + 0x12c4) = 0;
    *(undefined4 *)(param_1 + 0x12c0) = 0;
    *(undefined4 *)(param_1 + 0x12c8) = 0;
    *(undefined1 *)(param_1 + 0x12cc) = 0;
    *(undefined4 *)(param_1 + 0x12d0) = 0;
    *(undefined4 *)(param_1 + 0x12d4) = 0;
    *(undefined4 *)(param_1 + 0x12d8) = 0;
    if (*(int *)(param_1 + 0x12b4) != 0) {
      FUN_007af2b0(*(undefined4 *)(param_1 + 0x12ac));
      FUN_007b19b0(0);
    }
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) & 0xfffffffb;
    *(undefined4 *)(param_1 + 0x1264) = 0;
    *(undefined4 *)(param_1 + 0x1268) = 0;
LAB_007b2b63:
    *(undefined4 *)(param_1 + 0x1220) = 0;
    *(undefined4 *)(param_1 + 0x1224) = 0;
    *(float *)(param_1 + 0x1270) = *(float *)(param_1 + 0x1270) + *(float *)(param_1 + 0x910);
    if ((*(byte *)(param_1 + 0x12c0) & 1) != 0) {
      *(float *)(param_1 + 0x1244) = local_a4 * 0.01;
    }
    if (*(int *)(param_1 + 0x12c8) == 0) {
      *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) | 4;
    }
    if (*(int *)(param_1 + 0x12c8) == 10) {
      local_a0 = 0.0;
      local_9c = 0;
      local_98[0] = *(float *)(param_1 + 0x12f0) * local_a8;
      D3DXMatrixRotationY(local_90,*(undefined4 *)(param_1 + 0x126c));
      D3DXVec3TransformNormal(&local_a8,&local_a8,local_98);
      D3DXMatrixInverse(auStack_64,0,param_1 + 0x10);
      D3DXVec3TransformNormal(&stack0xffffff40,&stack0xffffff40,auStack_70);
      fVar1 = *(float *)(param_1 + 0x1210) + local_a0;
      *(float *)(param_1 + 0x1210) = fVar1;
      fVar4 = *(float *)(param_1 + 0x12f0) * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1210) = fVar4;
      }
      fVar1 = -fVar4;
      if (*(float *)(param_1 + 0x1210) <= fVar1) {
        *(float *)(param_1 + 0x1210) = fVar1;
      }
      fVar5 = *(float *)(param_1 + 0x1218) + local_98[0];
      *(float *)(param_1 + 0x1218) = fVar5;
      if (fVar4 <= fVar5) {
        *(float *)(param_1 + 0x1218) = fVar4;
      }
      if (*(float *)(param_1 + 0x1218) <= fVar1) {
        *(float *)(param_1 + 0x1218) = fVar1;
      }
      *(undefined4 *)(param_1 + 0x1220) = 1;
      *(undefined4 *)(param_1 + 0x1224) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x12c8);
    if (iVar3 == 2) {
      fVar4 = *(float *)(param_1 + 0x12f8) * local_a8 + *(float *)(param_1 + 0x1218);
      *(float *)(param_1 + 0x1218) = fVar4;
      fVar1 = *(float *)(param_1 + 0x12f8) * local_ac;
      if (fVar1 < fVar4 == (fVar1 == fVar4)) {
        *(undefined4 *)(param_1 + 0x1224) = 1;
      }
      else {
        *(float *)(param_1 + 0x1218) = fVar1;
        *(undefined4 *)(param_1 + 0x1224) = 1;
      }
    }
    if (iVar3 == 3) {
      fVar4 = *(float *)(param_1 + 0x12fc) * local_a8 + *(float *)(param_1 + 0x1218);
      *(float *)(param_1 + 0x1218) = fVar4;
      fVar1 = *(float *)(param_1 + 0x12fc) * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1218) = fVar1;
      }
      *(undefined4 *)(param_1 + 0x1224) = 1;
    }
    if (iVar3 == 4) {
      fVar1 = *(float *)(param_1 + 0x12f0) * local_a8 + *(float *)(param_1 + 0x1210);
      *(float *)(param_1 + 0x1210) = fVar1;
      fVar4 = *(float *)(param_1 + 0x12f0) * local_ac;
      if (fVar4 < fVar1 != (fVar4 == fVar1)) {
        *(float *)(param_1 + 0x1210) = fVar4;
      }
      *(undefined4 *)(param_1 + 0x1220) = 1;
    }
    if (iVar3 == 5) {
      fVar4 = *(float *)(param_1 + 0x1210) - *(float *)(param_1 + 0x12f0) * local_a8;
      *(float *)(param_1 + 0x1210) = fVar4;
      fVar1 = *(float *)(param_1 + 0x12f0) * -1.0 * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1210) = fVar1;
      }
      *(undefined4 *)(param_1 + 0x1220) = 1;
    }
    if (iVar3 == 6) {
      fVar4 = *(float *)(param_1 + 0x12f0) * local_a8 + *(float *)(param_1 + 0x1210);
      *(float *)(param_1 + 0x1210) = fVar4;
      fVar1 = *(float *)(param_1 + 0x12f0) * local_ac;
      if (fVar1 < fVar4 != (fVar1 == fVar4)) {
        *(float *)(param_1 + 0x1210) = fVar1;
      }
      fVar1 = local_a8 * *(float *)(param_1 + 0x12f4) * 0.5 + *(float *)(param_1 + 0x1218);
      *(float *)(param_1 + 0x1218) = fVar1;
      fVar4 = local_ac * *(float *)(param_1 + 0x12f4) * 0.5;
      if (fVar4 < fVar1 != (fVar4 == fVar1)) {
        *(float *)(param_1 + 0x1218) = fVar4;
      }
      *(undefined4 *)(param_1 + 0x1220) = 1;
      *(undefined4 *)(param_1 + 0x1224) = 1;
    }
    if (iVar3 == 7) {
      fVar4 = *(float *)(param_1 + 0x1210) - *(float *)(param_1 + 0x12f0) * local_a8;
      *(float *)(param_1 + 0x1210) = fVar4;
      fVar1 = *(float *)(param_1 + 0x12f0) * -1.0 * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1210) = fVar1;
      }
      fVar4 = local_a8 * *(float *)(param_1 + 0x12f4) * 0.5 + *(float *)(param_1 + 0x1218);
      *(float *)(param_1 + 0x1218) = fVar4;
      fVar1 = local_ac * *(float *)(param_1 + 0x12f4) * 0.5;
      if (fVar1 < fVar4 == (fVar1 == fVar4)) {
        *(undefined4 *)(param_1 + 0x1220) = 1;
        *(undefined4 *)(param_1 + 0x1224) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x1220) = 1;
        *(float *)(param_1 + 0x1218) = fVar1;
        *(undefined4 *)(param_1 + 0x1224) = 1;
      }
    }
    fVar1 = *(float *)(param_1 + 0x12c4) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x12c4) = fVar1;
    if (((((*(byte *)(param_1 + 0x4a8) & 0x10) != 0) && (fVar1 < 15.0)) &&
        (*(int *)(param_1 + 0x23a4) == 0)) && ((iVar3 == 5 || (iVar3 == 4)))) {
      *(undefined4 *)(param_1 + 0x12c4) = 0x41700000;
    }
    if (*(float *)(param_1 + 0x12c4) < 0.0) {
      *(char *)(param_1 + 0x1275) = *(char *)(param_1 + 0x1275) + '\x01';
    }
    goto switchD_007b2aa0_default;
  case '\x04':
    goto LAB_007b2b63;
  case '\x05':
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) & 0xfffffffb;
    *(undefined1 *)(param_1 + 0x1275) = 6;
    *(undefined4 *)(param_1 + 0x1268) = 0;
    if (*(int *)(param_1 + 0x12b4) != 0) {
      FUN_007af2b0(*(undefined4 *)(param_1 + 0x12ac));
      FUN_007b19b0(0);
      *(undefined4 *)(param_1 + 0x1270) = 0;
      *(undefined1 *)(param_1 + 0x1275) = 4;
    }
    goto switchD_007b2aa0_default;
  case '\x06':
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) | 2;
    *(undefined4 *)(param_1 + 0x1210) = 0;
    *(undefined4 *)(param_1 + 0x1214) = 0;
    *(undefined4 *)(param_1 + 0x1218) = 0;
    *(char *)(param_1 + 0x1275) = *(char *)(param_1 + 0x1275) + '\x01';
    *(undefined4 *)(param_1 + 0x1244) = 0;
    *(undefined4 *)(param_1 + 0x1270) = 0;
    break;
  case '\a':
    break;
  case '\b':
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) | 2;
    *(undefined4 *)(param_1 + 0x1210) = 0;
    *(undefined4 *)(param_1 + 0x1214) = 0;
    *(undefined4 *)(param_1 + 0x1218) = 0;
    *(char *)(param_1 + 0x1275) = *(char *)(param_1 + 0x1275) + '\x01';
    *(undefined4 *)(param_1 + 0x1244) = 0;
    *(undefined4 *)(param_1 + 0x1270) = 0;
  case '\t':
    fVar1 = *(float *)(param_1 + 0x11f8) * *(float *)(param_1 + 0x11f8) +
            *(float *)(param_1 + 0x11f0) * *(float *)(param_1 + 0x11f0) +
            *(float *)(param_1 + 0x11f4) * *(float *)(param_1 + 0x11f4);
    if (fVar1 < 0.0001 == (fVar1 == 0.0001)) goto switchD_007b2aa0_default;
    break;
  case '\n':
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) | 2;
    *(undefined4 *)(param_1 + 0x1210) = 0;
    *(undefined4 *)(param_1 + 0x1214) = 0;
    *(undefined4 *)(param_1 + 0x1218) = 0;
    *(char *)(param_1 + 0x1275) = *(char *)(param_1 + 0x1275) + '\x01';
    *(undefined4 *)(param_1 + 0x1244) = 0;
    *(undefined4 *)(param_1 + 0x1270) = 0;
  case '\v':
    fVar1 = *(float *)(param_1 + 0x11f4) * *(float *)(param_1 + 0x11f4) +
            *(float *)(param_1 + 0x11f0) * *(float *)(param_1 + 0x11f0) +
            *(float *)(param_1 + 0x11f8) * *(float *)(param_1 + 0x11f8);
    if (fVar1 < 0.0001 == (fVar1 == 0.0001)) goto switchD_007b2aa0_default;
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) & 0xffffffeb;
    *(undefined4 *)(param_1 + 0x11e8) = 0;
    break;
  default:
    goto switchD_007b2aa0_default;
  }
  *(undefined1 *)(param_1 + 0x1275) = 0;
switchD_007b2aa0_default:
  fVar1 = *(float *)(param_1 + 0x124c);
  fVar6 = (float10)FUN_00dde300(0,0x3f800000);
  local_a4 = (float)((fVar6 + (float10)1.0) * (float10)0.017453292);
  fVar6 = (float10)FUN_00e049b0();
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)local_a4 + (float10)fVar1));
  *(float *)(param_1 + 0x124c) = (float)fVar6;
  return;
}

// 007B3120  FUN_007b3120  size=444  [between]
void __fastcall FUN_007b3120(int param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x11e8) == 0)) &&
      (2 < *(int *)(param_1 + 0x2378))) &&
     (fVar1 = *(float *)(param_1 + 0x920), !NAN(fVar1) && 20.0 < fVar1 != (fVar1 == 20.0))) {
    if ((*(float *)(param_1 + 0xa90) < 49.0) && (*(float *)(param_1 + 0xaa0) < 1.2217305)) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        uVar3 = 0x80000000;
      }
      else {
        uVar3 = 0;
      }
      FUN_007b09c0(0x50001,uVar3,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_007b1af0();
      }
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 == 1) {
        FUN_007b09c0(0x50006,0,0,0,0);
      }
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 != 0) && (*(float *)(param_1 + 0xa90) < 9.0)) {
        FUN_007b09c0(0x50006,0,0,0,0);
      }
    }
    fVar1 = *(float *)(param_1 + 0xa90);
    if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && (*(float *)(param_1 + 0xa90) <= 144.0))
       && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
      FUN_007b1af0();
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_007b09c0(0x50006,0,0,0,0);
      }
    }
    if ((*(float *)(param_1 + 0xa90) < 49.0) &&
       (fVar1 = *(float *)(param_1 + 0xaa0), !NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464))
       ) {
      FUN_007b09c0(0x50000,0,0,0,0);
    }
  }
  return;
}

// 007B32E0  FUN_007b32e0  size=1076  [between]
void __fastcall FUN_007b32e0(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x2a1];
    param_1[0x187] = 1;
    if (iVar2 != 0) {
      local_90 = 0.0;
      local_8c = 0.0;
      local_88 = 0.0;
      D3DXVec3TransformNormal(&local_90,&local_90,iVar2 + 0x10);
      local_90 = local_90 + *(float *)(iVar2 + 0x40);
      local_8c = *(float *)(iVar2 + 0x44) + local_8c;
      local_88 = *(float *)(iVar2 + 0x48) + local_88;
      fStack_80 = local_90 - (float)param_1[0x10];
      fStack_7c = local_8c - (float)param_1[0x11];
      fStack_78 = local_88 - (float)param_1[0x12];
      fStack_74 = fStack_84 - (float)param_1[0x13];
      fVar1 = fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_80,&fStack_80);
        fVar1 = fStack_78;
        fVar3 = fStack_7c;
        fVar4 = fStack_80;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar1 = 0.0;
        fVar3 = 1.0;
        fVar4 = 0.0;
      }
      param_1[0x4c4] = (int)(fVar4 * -0.3);
      param_1[0x4c5] = (int)(fVar3 * -0.3);
      param_1[0x4c6] = (int)(fVar1 * -0.3);
      param_1[0x4c7] = (int)(fStack_74 * -0.3);
    }
    iVar2 = param_1[0x2a1];
    if (iVar2 != 0) {
      local_90 = 0.0;
      local_8c = 0.0;
      local_88 = 0.0;
      D3DXVec3TransformNormal(&local_90,&local_90,iVar2 + 0x10);
      fStack_98 = *(float *)(iVar2 + 0x44) + fStack_98;
      fStack_94 = *(float *)(iVar2 + 0x48) + fStack_94;
      local_8c = (fStack_9c + *(float *)(iVar2 + 0x40)) - (float)param_1[0x10];
      local_88 = fStack_98 - (float)param_1[0x11];
      fStack_84 = fStack_94 - (float)param_1[0x12];
      fStack_80 = local_90 - (float)param_1[0x13];
      D3DXMatrixInverse(&uStack_5c,0,param_1 + 4);
      D3DXVec3TransformNormal(&fStack_98,&fStack_98,&fStack_68);
      fStack_6c = 0.0;
      fStack_68 = 0.0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      thunk_FUN_00dde510(&fStack_6c,&fStack_68,&fStack_80,&uStack_60);
      fStack_6c = fStack_6c * -1.0;
      uVar6 = 0x45;
      fStack_98 = 9.94922e-44;
      fStack_64 = fStack_6c * 1.9098593;
      fStack_94 = 0.0;
      uVar5 = 0x46;
      if ((0.3926991 < fStack_68) && (uVar5 = 0x46, fStack_68 <= 1.1780972)) {
        uVar6 = 0x4b;
        uVar5 = 0x4c;
        fStack_98 = 1.079e-43;
      }
      if ((1.1780972 < fStack_68) && (fStack_68 <= 1.9634954)) {
        uVar6 = 0x42;
        uVar5 = 0x43;
        fStack_98 = 9.52883e-44;
      }
      if (1.9634954 < fStack_68) {
        uVar6 = 0x48;
        uVar5 = 0x49;
        fStack_98 = 1.03696e-43;
      }
      if ((fStack_68 < -0.3926991) &&
         (!NAN(fStack_68) && -1.1780972 < fStack_68 != (fStack_68 == -1.1780972))) {
        uVar6 = 0x4b;
        uVar5 = 0x4c;
        fStack_98 = 1.079e-43;
        fStack_94 = 8.96831e-44;
      }
      if ((fStack_68 < -1.1780972) &&
         (!NAN(fStack_68) && -1.9634954 < fStack_68 != (fStack_68 == -1.9634954))) {
        uVar6 = 0x42;
        uVar5 = 0x43;
        fStack_98 = 9.52883e-44;
        fStack_94 = 8.96831e-44;
      }
      if (fStack_68 < -1.9634954) {
        uVar6 = 0x48;
        uVar5 = 0x49;
        fStack_98 = 1.03696e-43;
        fStack_94 = 8.96831e-44;
      }
      FUN_00a9f4c0("GUARD",0,0,0);
      FUN_00a9f600(0xffffffff,0,0xfffffffe,0,0,uVar6,0,fStack_94);
      fVar1 = fStack_94;
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,uVar5,0,fStack_94);
      FUN_00a9f600(0xffffffff,0,0,0,0,fStack_98,0,fVar1);
      FUN_00a947e0(0,fStack_64,0,0);
    }
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  fVar1 = (float)param_1[0x4c2];
  param_1[0x4c2] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 007B3720  FUN_007b3720  size=172  [between]
void __fastcall FUN_007b3720(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  iVar1 = FUN_00a80b20(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3f060a92,
                       0x41700000);
  while (iVar1 != 0) {
    FUN_00a7c8a0();
    FUN_009fdde0();
    iVar1 = FUN_00a80b20(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3f060a92
                         ,0x41700000);
  }
  *(undefined4 *)(param_1 + 0x2380) = 1;
  *(undefined4 *)(param_1 + 0x11e8) = 1;
  FUN_007b09c0(0x50005,0,0,0,0);
  return;
}

// 007B37D0  FUN_007b37d0  size=38  [between]
void __fastcall FUN_007b37d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00c81c60(0x17);
    if (iVar1 != 0) {
      FUN_007b3720();
      return;
    }
  }
  return;
}

// 007B3800  FUN_007b3800  size=118  [between]
void __fastcall FUN_007b3800(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1714) = 1;
    FUN_007b12d0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007B3880  FUN_007b3880  size=1534  [between]
void __fastcall FUN_007b3880(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  int aiStack_78 [2];
  int iStack_70;
  float afStack_6c [2];
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 10.0;
  iVar3 = FUN_00ac45b0();
  if (iVar3 != 0) {
    FUN_00ac45b0();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      local_60 = *(float *)(iVar3 + 0x40);
      local_5c = *(float *)(iVar3 + 0x44);
      local_58 = *(float *)(iVar3 + 0x48);
      local_54 = *(undefined4 *)(iVar3 + 0x4c);
      D3DXMatrixInverse(local_50,0,param_1 + 4);
      D3DXVec3TransformNormal(afStack_6c,afStack_6c,&local_5c);
      local_60 = fStack_20 + local_60;
      local_5c = fStack_1c + local_5c;
      local_58 = fStack_18 + local_58;
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9f4c0("TATE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,2,0,0xb,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0xc,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,9,0x3daaaaab,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
    break;
  case 1:
    break;
  case 2:
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = 3;
    (*pcVar1)(6,param_1 + 0x7a0);
    param_1[0x248] = 0x42700000;
    goto LAB_007b3a9e;
  case 3:
LAB_007b3a9e:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar6 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar6 - (float)param_1[0x244]);
    if (fVar6 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_007b392f_default;
  case 4:
    FUN_00aa4080(0x59,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    (**(code **)(*param_1 + 0x358))(7,param_1 + 0x7a0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(8);
    goto joined_r0x007b3c19;
  case 6:
    FUN_00aa4080(0x5d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(8);
joined_r0x007b3c19:
    if (iVar3 != 0) {
      FUN_007b14f0(0xffffffff,0xbf800000);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0;
      param_1[0x440] = 0x40000000;
    }
  default:
    goto switchD_007b392f_default;
  }
  param_1[0x5c5] = 1;
  fVar6 = 0.0;
  if (6.0 < local_58) {
    fVar6 = 0.0;
  }
  else if (param_1[0x2a1] != 0) {
    fVar6 = (*(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11]) * 0.58823526;
    if (NAN(fVar6) || 2.0 < fVar6 == (fVar6 == 2.0)) {
      if (fVar6 < 0.0 != (fVar6 == 0.0)) {
        fVar6 = 0.0;
      }
    }
    else {
      fVar6 = 2.0;
    }
  }
  FUN_00a947e0(0,0,fVar6,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_007b392f_default:
  if ((local_58 < 3.4 == (local_58 == 3.4)) || (100.0 < (float)param_1[0x2a3])) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 3.4 - local_58;
    if (0.0 < fVar6) {
      fVar6 = fVar6 + fVar6;
    }
    fVar2 = 0.5;
    if (!NAN(fVar6) && 0.5 < fVar6 != (fVar6 == 0.5)) goto LAB_007b3c7b;
  }
  fVar2 = fVar6;
LAB_007b3c7b:
  iVar3 = param_1[0x3b4];
  if (iVar3 != 0) {
    fVar2 = 0.4;
  }
  fVar2 = fVar2 - (float)param_1[0x3b2];
  if (fVar2 <= 0.0) {
    fVar4 = (float10)FUN_00fdc1f0();
    fVar4 = fVar4 * (float10)fVar2;
  }
  else {
    fVar4 = (float10)FUN_00fdc1f0();
    fVar4 = fVar4 * (float10)fVar2;
    if ((float10)0.1 < fVar4) {
      fVar4 = (float10)0.1;
    }
  }
  param_1[0x3b2] = (int)(float)(fVar4 + (float10)(float)param_1[0x3b2]);
  if (((iVar3 == 0) && (param_1[0x3b1] < 0)) && (local_58 <= 5.0)) {
    param_1[0x3b1] = 0x32;
    iVar3 = FUN_00fdbc60();
    param_1[0x3b3] = iVar3 + 1;
    param_1[0x3b4] = 1;
  }
  if ((param_1[0x3b4] != 0) && (iVar3 = FUN_00fdbc60(), param_1[0x3b3] == iVar3)) {
    param_1[0x3b4] = 0;
    param_1[0x3b1] = 0x32;
  }
  iVar3 = FUN_00a54a60(param_1[0x714]);
  if (iVar3 != 0) {
    FUN_007b09c0(0x20001,0,0,0,0);
  }
  fVar4 = (float10)FUN_00a581b0(aiStack_78,(float)param_1[0x715] + (float)param_1[0x3b2],
                                param_1[0x714]);
  param_1[0x714] = (int)(float)fVar4;
  param_1[0x14] = aiStack_78[0];
  param_1[0x16] = iStack_70;
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x715] = (int)(float)(fVar5 * (float10)(float)param_1[0x715]);
  FUN_00a585a0(afStack_6c,0,(float)fVar4);
  if ((float10)0 != (float10)fStack_64) {
    fVar4 = (float10)fpatan((float10)afStack_6c[0],(float10)fStack_64);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)3.1415927));
    FUN_00a8db10(param_1 + 0x25,param_1[0x25],(float)fVar4,0x3e99999a,0x3c0efa35,0x3e8efa35);
    return;
  }
  return;
}

// 007B3F20  FUN_007b3f20  size=774  [between]
void __fastcall FUN_007b3f20(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  undefined4 auStack_78 [2];
  undefined4 uStack_70;
  float afStack_6c [2];
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 10.0;
  iVar1 = FUN_00ac45b0();
  if (iVar1 != 0) {
    FUN_00ac45b0();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      local_60 = *(float *)(iVar1 + 0x40);
      local_5c = *(float *)(iVar1 + 0x44);
      local_58 = *(float *)(iVar1 + 0x48);
      local_54 = *(undefined4 *)(iVar1 + 0x4c);
      D3DXMatrixInverse(local_50,0,param_1 + 0x10);
      D3DXVec3TransformNormal(afStack_6c,afStack_6c,&local_5c);
      local_60 = fStack_20 + local_60;
      local_5c = fStack_1c + local_5c;
      local_58 = fStack_18 + local_58;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("TATE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,2,0,0xb,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0xc,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,9,0x3daaaaab,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(undefined4 *)(param_1 + 0xec8) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007b410e;
  fVar4 = 0.0;
  if (6.0 < local_58) {
    fVar4 = 0.0;
  }
  else if (*(int *)(param_1 + 0xa84) != 0) {
    fVar4 = (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44)) * 0.58823526
    ;
    if (NAN(fVar4) || 2.0 < fVar4 == (fVar4 == 2.0)) {
      if (fVar4 < 0.0 != (fVar4 == 0.0)) {
        fVar4 = 0.0;
      }
    }
    else {
      fVar4 = 2.0;
    }
  }
  FUN_00a947e0(0,0,fVar4,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007b410e:
  if (2.0 < local_58) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x910) * 0.1;
  }
  *(float *)(param_1 + 0xec8) = fVar4;
  fVar2 = (float10)FUN_00a581b0(auStack_78,
                                *(float *)(param_1 + 0x1c54) + *(float *)(param_1 + 0xec8),
                                *(undefined4 *)(param_1 + 0x1c50));
  *(float *)(param_1 + 0x1c50) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  fVar3 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1c54) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x1c54));
  FUN_00a585a0(afStack_6c,0,(float)fVar2);
  if ((float10)0 == (float10)fStack_64) {
    return;
  }
  fVar2 = (float10)fpatan((float10)afStack_6c[0],(float10)fStack_64);
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 + (float10)3.1415927));
  FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),(float)fVar2,
               0x3e99999a,0x3c0efa35,0x3e8efa35);
  return;
}

// 007B4230  FUN_007b4230  size=627  [between]
void __fastcall FUN_007b4230(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 auStack_78 [2];
  undefined4 uStack_70;
  float afStack_6c [2];
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_60 = 0.0;
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  local_5c = 0.0;
  local_58 = 10.0;
  iVar1 = FUN_00ac45b0();
  if (iVar1 != 0) {
    FUN_00ac45b0();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      local_60 = *(float *)(iVar1 + 0x40);
      local_5c = *(float *)(iVar1 + 0x44);
      local_58 = *(float *)(iVar1 + 0x48);
      local_54 = *(undefined4 *)(iVar1 + 0x4c);
      D3DXMatrixInverse(local_50,0,param_1 + 0x10);
      D3DXVec3TransformNormal(afStack_6c,afStack_6c,&local_5c);
      local_60 = fStack_20 + local_60;
      local_5c = fStack_1c + local_5c;
      local_58 = fStack_18 + local_58;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xb2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xec8) = 0xbe4ccccd;
    *(undefined4 *)(param_1 + 0x1714) = 0;
    *(undefined4 *)(param_1 + 0x1100) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x920) = 0x41a00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007b43a5;
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_007b09c0(0x2000e,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1100) = 0x42700000;
  }
LAB_007b43a5:
  FUN_00a8dd20(*(undefined4 *)(param_1 + 0xec8));
  fVar2 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0xec8) = (float)(fVar2 * (float10)*(float *)(param_1 + 0xec8));
  fVar2 = (float10)FUN_00a5e410(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                                *(undefined4 *)(param_1 + 0x58),auStack_78);
  *(float *)(param_1 + 0x1c50) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  *(undefined4 *)(param_1 + 0x1c54) = 0;
  FUN_00a585a0(afStack_6c,0,(float)fVar2);
  if ((float10)0 == (float10)fStack_64) {
    return;
  }
  fVar2 = (float10)fpatan((float10)afStack_6c[0],(float10)fStack_64);
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 + (float10)3.1415927));
  FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),(float)fVar2,
               0x3e99999a,0x3c0efa35,0x3e8efa35);
  return;
}

// 007B44B0  FUN_007b44b0  size=69  [between]
void __fastcall FUN_007b44b0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2384) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a54a60(*(undefined4 *)(param_1 + 0x1c50));
    if (iVar1 != 0) {
      FUN_007b09c0(0x20001,0,0,0,0);
    }
  }
  return;
}

// 007B4500  FUN_007b4500  size=625  [between]
void __fastcall FUN_007b4500(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 auStack_78 [2];
  undefined4 uStack_70;
  float afStack_6c [2];
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 10.0;
  iVar1 = FUN_00ac45b0();
  if (iVar1 != 0) {
    FUN_00ac45b0();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      local_60 = *(float *)(iVar1 + 0x40);
      local_5c = *(float *)(iVar1 + 0x44);
      local_58 = *(float *)(iVar1 + 0x48);
      local_54 = *(undefined4 *)(iVar1 + 0x4c);
      D3DXMatrixInverse(local_50,0,param_1 + 0x10);
      D3DXVec3TransformNormal(afStack_6c,afStack_6c,&local_5c);
      local_60 = fStack_20 + local_60;
      local_5c = fStack_1c + local_5c;
      local_58 = fStack_18 + local_58;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("TATE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,2,0,0xb,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0xc,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,9,0x3daaaaab,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(undefined4 *)(param_1 + 0x1714) = 0;
    *(undefined4 *)(param_1 + 0xec8) = 0x3d4ccccd;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007b4680;
  FUN_00a947e0(0,0,0,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007b4680:
  fVar2 = (float10)FUN_00a581b0(auStack_78,
                                *(float *)(param_1 + 0xec8) + *(float *)(param_1 + 0x1c54),
                                *(undefined4 *)(param_1 + 0x1c50));
  *(float *)(param_1 + 0x1c50) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  fVar3 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1c54) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x1c54));
  FUN_00a585a0(afStack_6c,0,(float)fVar2);
  if ((float10)0 == (float10)fStack_64) {
    return;
  }
  fVar2 = (float10)fpatan((float10)afStack_6c[0],(float10)fStack_64);
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 + (float10)3.1415927));
  FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),(float)fVar2,
               0x3e99999a,0x3c0efa35,0x3e8efa35);
  return;
}

// 007B4780  FUN_007b4780  size=210  [between]
void __fastcall FUN_007b4780(int param_1)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2320) == 0) {
    uVar2 = 0x40;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a962d0(0,0);
    if (uVar2 != 0) {
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(0xcc,0,0x3daaaaab,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (*(float *)(param_1 + 0xa8c) <= 36.0) {
    *(float *)(param_1 + 0x920) = fVar1 - *(float *)(param_1 + 0x910);
    return;
  }
  return;
}

// 007B4860  FUN_007b4860  size=534  [between]
void __fastcall FUN_007b4860(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar2 = 0;
  if (param_1[0x8c8] == 0) {
    uVar2 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00a962d0(0,0);
    if (uVar2 != 0) {
      FUN_00a962d0(1,0);
    }
    uVar4 = 0x3daaaaab;
    uVar3 = 0xd9;
    break;
  case 1:
  case 3:
    goto switchD_007b488b_caseD_1;
  case 2:
    FUN_00a962d0(0,0);
    if (uVar2 != 0) {
      FUN_00a962d0(1,0);
    }
    uVar4 = 0x3d088889;
    uVar3 = 0xda;
    break;
  case 4:
    FUN_00a962d0(0,0);
    if (uVar2 != 0) {
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(0xdb,0,0x3d088889,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x441] = 0x43f00000;
    }
  default:
    goto switchD_007b488b_default;
  }
  FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
switchD_007b488b_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_007b488b_default:
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    FUN_007b14f0(0xffffffff,0xbf800000);
  }
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007B4BA0  FUN_007b4ba0  size=1898  [between]
void __fastcall FUN_007b4ba0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_34 = 0x3f800000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x8e7] == 0) || (param_1[0x3a0] != 0)) {
      local_34 = 0x3f99999a;
      sVar5 = FUN_00dde2d0(0,1);
      if (sVar5 != 0) {
        local_34 = 0x3fb33333;
      }
    }
    FUN_00aa4080(0x84,0,0x3e2aaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,local_34);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8da] = 0;
    param_1[0x8dc] = 0;
    uVar6 = FUN_00dde2a0(2,3);
    param_1[0x250] = uVar6 & 0xffff;
    param_1[0x251] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x85,0,0x3d088889,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x24a] = 0x42700000;
    param_1[0x8da] = 0;
    param_1[0x8dc] = 0;
    param_1[0x252] = 0;
    goto LAB_007b4f2c;
  case 3:
LAB_007b4f2c:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_20 = (float)param_1[0x8d4];
    local_1c = (float)param_1[0x8d5];
    local_18 = (float)param_1[0x8d6];
    local_14 = (float)param_1[0x8d7];
    local_30 = local_20 - (float)param_1[0x10];
    local_2c = local_1c - (float)param_1[0x11];
    local_28 = local_18 - (float)param_1[0x12];
    local_24 = local_14 - (float)param_1[0x13];
    fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_28 = 0.0;
      local_2c = 1.0;
      local_30 = 0.0;
    }
    local_30 = local_20 - ((float)param_1[0x10] + local_30 * 4.5);
    local_2c = local_1c - (local_2c * 4.5 + (float)param_1[0x11]);
    local_28 = local_18 - (local_28 * 4.5 + (float)param_1[0x12]);
    local_24 = local_14 - (local_24 * 4.5 + (float)param_1[0x13]);
    fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (!NAN(fVar1) && 0.010000001 < fVar1 != (fVar1 == 0.010000001)) {
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
        fVar1 = local_28;
        fVar3 = local_2c;
        fVar4 = local_30;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar1 = 0.0;
        fVar4 = 0.0;
        fVar3 = 1.0;
      }
      fVar2 = (float)param_1[0x244] * 0.1;
      param_1[0x14] = (int)(fVar4 * fVar2 + (float)param_1[0x14]);
      param_1[0x15] = (int)(fVar3 * fVar2 + (float)param_1[0x15]);
      param_1[0x16] = (int)(fVar1 * fVar2 + (float)param_1[0x16]);
      param_1[0x17] = (int)(fVar2 * local_24 + (float)param_1[0x17]);
    }
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x251] = param_1[0x251] + 1;
      param_1[0x187] = 2;
      if (param_1[0x250] <= param_1[0x251]) {
        param_1[0x187] = 4;
      }
      FUN_00aa4080(0x86,0,0x3daaaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    goto switchD_007b4bcd_default;
  case 4:
    FUN_00aa4080(0x86,0,0x3daaaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_007b51f8;
  case 5:
LAB_007b51f8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      iVar7 = FUN_00a90070(5);
      if ((((iVar7 != 0) && (sVar5 = FUN_00dde2d0(0,1), sVar5 != 0)) &&
          ((float)param_1[0x2a3] <= 5.0)) && ((float)param_1[0x2a8] <= 1.3962634)) {
        FUN_007b09c0(0x50006,0,0,0,0);
        sVar5 = FUN_00dde2d0(0,2);
        if (sVar5 == 1) {
          FUN_007b1af0();
          param_1[0x8eb] = 1;
        }
      }
      param_1[0x440] = 0x44160000;
    }
  default:
    goto switchD_007b4bcd_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (((param_1[0x2a1] != 0) && (iVar7 = FUN_00a8c760(10), iVar7 != 0)) &&
     (iVar7 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar7 != 0)) {
    local_20 = (float)param_1[0x8d4];
    local_1c = (float)param_1[0x8d5];
    local_18 = (float)param_1[0x8d6];
    local_14 = (float)param_1[0x8d7];
    local_30 = local_20 - (float)param_1[0x10];
    local_2c = local_1c - (float)param_1[0x11];
    local_28 = local_18 - (float)param_1[0x12];
    local_24 = local_14 - (float)param_1[0x13];
    fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_28 = 0.0;
      local_2c = 1.0;
      local_30 = 0.0;
    }
    local_30 = local_20 - ((float)param_1[0x10] + local_30 * 4.5);
    local_2c = local_1c - (local_2c * 4.5 + (float)param_1[0x11]);
    local_28 = local_18 - (local_28 * 4.5 + (float)param_1[0x12]);
    local_24 = local_14 - (local_24 * 4.5 + (float)param_1[0x13]);
    fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (!NAN(fVar1) && 0.0025000002 < fVar1 != (fVar1 == 0.0025000002)) {
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
        fVar1 = local_28;
        fVar3 = local_2c;
        fVar4 = local_30;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar1 = 0.0;
        fVar4 = 0.0;
        fVar3 = 1.0;
      }
      fVar2 = (float)param_1[0x244] * 0.05;
      param_1[0x14] = (int)(fVar4 * fVar2 + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x15] + fVar3 * fVar2);
      param_1[0x16] = (int)((float)param_1[0x16] + fVar1 * fVar2);
      param_1[0x17] = (int)(fVar2 * local_24 + (float)param_1[0x17]);
    }
  }
switchD_007b4bcd_default:
  iVar7 = FUN_00a8c760(0);
  if ((iVar7 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007B5470  FUN_007b5470  size=854  [between]
void __fastcall FUN_007b5470(int *param_1)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  float unaff_ESI;
  float10 fVar5;
  undefined4 uVar6;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  iVar4 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  sVar3 = 0;
  if (iVar4 == 0) {
    param_1[0x8e3] = param_1[0x8e3] + 1;
    param_1[0x187] = 1;
    param_1[0x250] = 0;
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x251] = sVar2 + 3;
    param_1[0x4cc] = 0;
    if (0 < param_1[0x4cb]) {
      param_1[0x4cb] = 0;
      param_1[0x4cc] = 1;
    }
LAB_007b54e8:
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 2) {
      sVar3 = FUN_00dde2d0(0,1);
      sVar3 = sVar3 + 1;
    }
    if (param_1[0x4cc] != 0) {
      sVar3 = 2;
    }
    FUN_00aa4080(sVar3 + 0x6d,0,0x3e2aaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x8da] = 0;
    param_1[0x8dc] = 0;
  }
  else {
    if (iVar4 == 1) goto LAB_007b54e8;
    if (iVar4 != 2) goto LAB_007b5661;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x4cc] == 0) {
    iVar4 = FUN_00a8c760(0x34);
    if ((iVar4 != 0) && (param_1[0x8dc] != 0)) {
      param_1[0x4cb] = param_1[0x4cb] + 1;
    }
    if (param_1[0x4cc] != 0) goto LAB_007b55bb;
  }
  else {
LAB_007b55bb:
    iVar4 = FUN_00a8c760(0x34);
    if ((iVar4 != 0) && (param_1[0x8dc] != 0)) {
      param_1[0x250] = param_1[0x250] + 1;
      if (param_1[0x434] == 0) {
        uVar6 = 0x80000000;
      }
      else {
        uVar6 = 0;
      }
      FUN_007b09c0(0x50001,uVar6,1,0,0);
      if (param_1[0x251] <= param_1[0x250]) {
        FUN_007b09c0(0x50000,0,0,0,0);
        sVar3 = FUN_00dde2d0(0,2);
        if (sVar3 == 1) {
          FUN_007b1af0();
          param_1[0x8eb] = 1;
        }
      }
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x440] = 0x42700000;
  }
LAB_007b5661:
  iVar4 = FUN_00a8c760(0);
  if ((iVar4 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  if ((((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(10), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar4 != 0)) &&
     ((float)param_1[0x2a8] < 1.5707964)) {
    uStack_30 = 0;
    fStack_2c = 0.0;
    uStack_28 = 0x40866666;
    D3DXVec3TransformNormal(&uStack_30,&uStack_30,param_1 + 4);
    fStack_2c = *(float *)(param_1[0x2a1] + 0x40) - ((float)param_1[0x10] + unaff_ESI);
    fStack_24 = *(float *)(param_1[0x2a1] + 0x48) - ((float)param_1[0x12] + fStack_34);
    fVar5 = (float10)FUN_00fdc1f0();
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x14] = (int)(float)((float10)(float)param_1[0x14] + (float10)fStack_2c * fVar5);
    param_1[0x16] = (int)(float)(fVar5 * (float10)fStack_24 + (float10)(float)param_1[0x16]);
    (*pcVar1)(0x3e99999a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007B5940  FUN_007b5940  size=658  [between]
void __fastcall FUN_007b5940(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  float unaff_ESI;
  float10 fVar5;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    param_1[0x8eb] = 0;
    uVar3 = 0xb6;
    if (param_1[0x186] == 0x50003) {
      uVar3 = 0xb9;
    }
    FUN_00aa4080(uVar3,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8e3] = param_1[0x8e3] + 1;
    param_1[0x8da] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_007b5a67;
  if ((((param_1[0x4cc] == 0) && (iVar4 = FUN_00a8c760(0x34), iVar4 != 0)) && (param_1[0x8dc] != 0))
     && (param_1[0x4cb] = param_1[0x4cb] + 1, 1 < param_1[0x4cb])) {
    FUN_007b09c0(0x50001,0,0,0,0);
  }
  uVar2 = 0x3f800000;
  if (param_1[0x186] != 0x50003) {
    uVar2 = 0;
  }
  FUN_00ac80a0(uVar2,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007b5a67:
  if (param_1[0x2a1] != 0) {
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    }
    if (((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(10), iVar4 != 0)) &&
       ((iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar4 != 0 &&
        ((float)param_1[0x2a8] < 1.5707964)))) {
      uStack_30 = 0;
      fStack_2c = 0.0;
      uStack_28 = 0x40800000;
      D3DXVec3TransformNormal(&uStack_30,&uStack_30,param_1 + 4);
      fStack_2c = *(float *)(param_1[0x2a1] + 0x40) - ((float)param_1[0x10] + unaff_ESI);
      fStack_24 = *(float *)(param_1[0x2a1] + 0x48) - ((float)param_1[0x12] + fStack_34);
      fVar5 = (float10)FUN_00fdc1f0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x14] = (int)(float)((float10)fStack_2c * fVar5 + (float10)(float)param_1[0x14]);
      param_1[0x16] = (int)(float)(fVar5 * (float10)fStack_24 + (float10)(float)param_1[0x16]);
      (*pcVar1)(0x3e4ccccd,0x393702d3,0x3d8efa35,0);
    }
  }
  return;
}

// 007B5D20  FUN_007b5d20  size=173  [between]
void __thiscall FUN_007b5d20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10dc);
  if (iVar1 == 0) {
    FUN_00aa4080(param_2,1,0x3d088889,0x3f800000,0x8000010,0,0x3f800000);
    *(int *)(param_1 + 0x10dc) = *(int *)(param_1 + 0x10dc) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = FUN_00a94ce0(1);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x10d4) = 0;
    *(undefined4 *)(param_1 + 0x10dc) = 0;
    return;
  }
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    FUN_007b14f0(0xffffffff,0xbf800000);
    *(int *)(param_1 + 0x10dc) = *(int *)(param_1 + 0x10dc) + 1;
  }
  return;
}

// 007B5DD0  FUN_007b5dd0  size=225  [between]
void __thiscall FUN_007b5dd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4080(param_2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x440] = 0x43960000;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    FUN_007b14f0(0xffffffff,0xbf800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 007B5EC0  FUN_007b5ec0  size=301  [between]
void __fastcall FUN_007b5ec0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x92,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = (int)((float)param_1[0x225] - 0.02);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = (int)((float)param_1[0x225] - (float)param_1[0x244] * 0.008);
    return;
  case 2:
    FUN_00aa4080(0x93,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x911] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_007b09c0(0x70000,1,2,0,0);
      param_1[0x250] = 3;
      return;
    }
  default:
    return;
  }
}

// 007B6000  FUN_007b6000  size=205  [between]
void __fastcall FUN_007b6000(int param_1)

{
  float fVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  *(undefined2 *)(param_1 + 0x824) = 4;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xeb,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    if (*(int *)(param_1 + 0x239c) != 0) {
      *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    FUN_007b09c0(0x80002,0,0,0,0);
  }
  return;
}

// 007B60D0  FUN_007b60d0  size=275  [between]
/* WARNING: Type propagation algorithm not settling */

bool __fastcall FUN_007b60d0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x239c) == 0) {
    return false;
  }
  local_8[0] = 0;
  local_8[1] = 0;
  FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
  if (local_8[0] != 0) {
    *(undefined2 *)(param_1 + 0x824) = 1;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
    bVar1 = *(int *)(param_1 + 0x4a0) == 0;
    if (bVar1) {
      FUN_007b09c0(0x70009,0,0,0,0);
    }
    bVar2 = *(int *)(param_1 + 0x4a0) == 3;
    if (bVar2) {
      FUN_007b09c0(0x7000a,0,0,0,0);
    }
    bVar3 = *(int *)(param_1 + 0x4a0) == 6;
    if (bVar3) {
      FUN_007b09c0(0x70009,0,0,0,0);
    }
    bVar4 = *(int *)(param_1 + 0x4a0) == 7;
    if (bVar4) {
      FUN_007b09c0(0x7000c,0,0,0,0);
    }
    bVar5 = *(int *)(param_1 + 0x4a0) == 8;
    if (bVar5) {
      FUN_007b09c0(0x7000c,0,0,0,0);
    }
    return bVar5 || (bVar4 || (bVar3 || (bVar2 || bVar1)));
  }
  return false;
}

// 007B61F0  FUN_007b61f0  size=363  [between]
void __fastcall FUN_007b61f0(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_007b14f0(0x96,0x40000000);
    param_1[0x64d] = 0;
    FUN_007b14f0(0x19,0x41400000);
    param_1[0x5c5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x64f] == 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_007b09c0(0x2000b,0,0,0,0);
  }
  sVar1 = FUN_00dde2d0(0xfffffffd,3);
  sVar2 = FUN_00dde2d0(0xffffffff,1);
  sVar3 = FUN_00dde2d0(0xfffffffd,3);
  param_1[0x8d0] = (int)((float)(int)sVar1 + 182.64);
  param_1[0x8d1] = (int)((float)(int)sVar2 - 87.21);
  param_1[0x8d2] = (int)((float)(int)sVar3 - 527.26);
  return;
}

// 007B6360  Emc080::vf360  size=78  [class]
void __fastcall Emc080::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  iVar1 = FUN_00a81330();
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00a81330();
    FUN_00e03080(uVar2,uVar3);
    return;
  }
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 007B63B0  FUN_007b63b0  size=50  [between]
undefined4 __fastcall FUN_007b63b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  cVar1 = *(char *)(param_1 + 0x2188);
  if (((cVar1 != '\x01') && (cVar1 != '\x02')) &&
     ((cVar1 != '\x03' || ('\x01' < *(char *)(param_1 + 0x2189))))) {
    uVar2 = 0;
  }
  return uVar2;
}

// 007B63F0  FUN_007b63f0  size=57  [between]
undefined4 __fastcall FUN_007b63f0(int param_1)

{
  float fVar1;
  
  if (((*(char *)(param_1 + 0x2188) == '\x02') && ('\0' < *(char *)(param_1 + 0x2189))) &&
     (fVar1 = *(float *)(param_1 + 0x218c), !NAN(fVar1) && 45.0 < fVar1 != (fVar1 == 45.0))) {
    return 1;
  }
  return 0;
}

// 007B6430  FUN_007b6430  size=131  [between]
void __thiscall FUN_007b6430(int param_1,undefined4 param_2,int param_3)

{
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xe90) == 0) {
    if (*(char *)(param_1 + 0x2188) == -1) {
      *(undefined2 *)(param_1 + 0x2188) = 4;
      *(undefined1 *)(param_1 + 0x2180) = 0;
    }
    *(undefined4 *)(param_1 + 0x21f4) = param_2;
    *(undefined4 *)(param_1 + 0x21f8) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x2188) != -1) {
    if (param_3 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x2188) != -1) goto LAB_007b646d;
  }
  *(undefined2 *)(param_1 + 0x2188) = 4;
  *(undefined1 *)(param_1 + 0x2180) = 0;
LAB_007b646d:
  *(undefined4 *)(param_1 + 0x21f4) = param_2;
  *(undefined4 *)(param_1 + 0x21f8) = 1;
  return;
}

// 007B6510  FUN_007b6510  size=33  [between]
void __fastcall FUN_007b6510(int param_1)

{
  if (*(char *)(param_1 + 0x2188) == '\x04') {
    *(undefined1 *)(param_1 + 0x2188) = 4;
    *(undefined1 *)(param_1 + 0x2189) = 4;
  }
  *(undefined4 *)(param_1 + 0x21f8) = 0;
  return;
}

// 007B6540  FUN_007b6540  size=97  [between]
void FUN_007b6540(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return;
}

// 007B65B0  FUN_007b65b0  size=97  [between]
void FUN_007b65b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return;
}

// 007B6620  FUN_007b6620  size=99  [between]
bool FUN_007b6620(void)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_00a7c8a0();
        }
        if (*(int *)(iVar1 + 0x4e4) == 0) {
          iVar2 = iVar2 + 1;
        }
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return iVar2 != 0;
}

// 007B6690  Emc080::vf280  size=228  [class]
int Emc080::vf280(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_009f8b40();
  local_50 = *param_2;
  local_30 = iVar1 << 0x10 | 0x19;
  local_4c = param_2[1];
  local_48 = param_2[2];
  local_44 = param_2[3];
  local_40 = *param_3;
  local_2c = 0x400000;
  local_28 = 0;
  local_3c = param_3[1];
  local_24 = 0;
  local_20 = "Emc080 ViewRay";
  local_38 = param_3[2];
  local_1c = 0;
  local_34 = param_3[3];
  iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_2(param_1,0,&local_58,&local_54,&local_50);
  if ((iVar1 != 0) &&
     (((local_58 != 0 && (iVar2 = FUN_008f7780(local_58), iVar2 == param_4)) ||
      ((local_54 != 0 && (iVar2 = FUN_008f7780(local_54), iVar2 == param_4)))))) {
    return 0;
  }
  return iVar1;
}

// 007B6780  FUN_007b6780  size=196  [between]
/* WARNING: Removing unreachable block (ram,0x007b67de) */

undefined4 FUN_007b6780(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  undefined1 local_20 [28];
  
  iVar4 = 0;
  iVar1 = FUN_00907640(param_1,&local_24,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 1;
  FUN_0112bcf0();
  if (0 < *(int *)(local_24 + 0x14)) {
    iVar1 = *(int *)(*(int *)(local_24 + 0x10) + 0x28);
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x18) == '\x01') {
      iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
    }
    if (*(char *)(iVar1 + 0x18) == '\x02') {
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      else {
        iVar4 = 0;
      }
    }
    if (((iVar2 != 0) && (iVar1 = FUN_008f7780(iVar2), uVar3 = 1, param_2 != 0)) &&
       (iVar1 == param_2)) {
      uVar3 = 0;
    }
    if (((iVar4 != 0) && (iVar1 = FUN_008f7780(iVar4), param_2 != 0)) && (iVar1 == param_2)) {
      return 0;
    }
  }
  return uVar3;
}

// 007B6870  FUN_007b6870  size=197  [between]
void __fastcall FUN_007b6870(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_38 [6];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x239c) != 0) {
    cVar1 = *(char *)(param_1 + 0xbab);
    local_38[2] = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x4f0);
    local_38[3] = 0;
    local_38[4] = 0;
    local_20 = 0;
    local_38[0] = 0x36;
    local_38[1] = 0x36;
    local_1c = 0x3f8ccccd;
    puVar5 = local_38 + 2;
    puVar4 = &local_20;
    local_18 = 0;
    uVar8 = 0xbf800000;
    uVar7 = 0x3f000000;
    uVar6 = 0x41a00000;
    sVar2 = FUN_00dde2d0(0,1);
    uVar3 = FUN_0093c1f0((int)cVar1,uVar3,4,local_38[sVar2],puVar4,puVar5,uVar6,uVar7,uVar8);
    *(undefined4 *)(param_1 + 0x2160) = uVar3;
    FUN_00c52770(uVar3,0x40c00000);
  }
  return;
}

// 007B6940  FUN_007b6940  size=236  [between]
void __fastcall FUN_007b6940(int param_1)

{
  code *pcVar1;
  
  FUN_00a8c420(0,"_bogyo");
  FUN_00a8c420(0,"_kabe");
  FUN_00a8c420(0,"_yama");
  FUN_00a8c420(1,"_taiki");
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x10c))(8,"_taiki",0);
  }
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),0,0);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),1,1);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),2,1);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),3,1);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),4,1);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1f30) + 8);
  *(undefined4 *)(param_1 + 0xe90) = 1;
  (*pcVar1)(0x3f800000,0,0);
  return;
}

// 007B6A30  FUN_007b6a30  size=419  [between]
void __fastcall FUN_007b6a30(int param_1)

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
  local_48 = 0xffffffff;
  local_c = 0;
  local_44 = 0xffffffff;
  local_8 = 0;
  local_38 = 0xffffffff;
  local_54 = 0x3f000000;
  local_4 = 0xffffffff;
  local_4c = 0xffffffff;
  local_50 = 0;
  local_40 = 0xfffffffe;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_3c = 0;
  local_2c = 0;
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_34 = 0x1010101;
  local_30 = 2;
  local_5c = *(float *)(param_1 + 0x44) - 1.0;
  FUN_00c15bb0(&local_60,0x41f00000,0x41700000);
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  FUN_00c5e350(param_1,&local_54,&local_30);
  if ((DAT_01d64254 != 2) && ((*(uint *)(param_1 + 0x4a8) & 0x4000) == 0)) {
    *(undefined2 *)(param_1 + 0x824) = 2;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  }
  FUN_00c3ccb0(0);
  FUN_00a88b50(4,0);
  return;
}

// 007B6BE0  FUN_007b6be0  size=129  [between]
undefined4 __thiscall FUN_007b6be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x231c) < 0.0) && (*(int *)(param_1 + 9000) == 0)) {
    iVar1 = FUN_00a80b20(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),param_2,
                         param_3);
    if (iVar1 != 0) {
      FUN_00a7c8a0();
      iVar1 = FUN_0048de10();
      if (iVar1 != 0) {
        FUN_007b09c0(0x50007,0,0,0,0);
        return 1;
      }
    }
  }
  return 0;
}

// 007B6C70  FUN_007b6c70  size=99  [between]
void __thiscall FUN_007b6c70(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 0x800) == 0) {
    param_1[0x8ed] = 0;
  }
  if ((*(uint *)(param_2 + 0x8c) & 0x100000) != 0) {
    param_1[0x8ee] = 2;
  }
  if ((*(uint *)(param_2 + 0x90) & 0x200) != 0) {
    param_1[0x8ee] = 4;
  }
  (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ee],param_1[0x8ed]);
  return;
}

// 007B6CE0  FUN_007b6ce0  size=193  [between]
void __fastcall FUN_007b6ce0(int param_1)

{
  if (*(char *)(param_1 + 0x242d) == '\0') {
    *(undefined1 *)(param_1 + 0x242d) = 1;
    *(undefined4 *)(param_1 + 0x14f4) = 0;
    *(undefined4 *)(param_1 + 0x14fc) = 0;
    if (*(int *)(param_1 + 0xe90) != 0) {
      (**(code **)(*(int *)(param_1 + 0x1f30) + 8))(0x41700000,0,0);
    }
  }
  else if (*(char *)(param_1 + 0x242d) != '\x01') {
    return;
  }
  if (((((DAT_01bea060 & 0x2000000) == 0) && (*(int *)(param_1 + 0x2434) != 0)) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) &&
     (((*(int *)(param_1 + 9000) != 0 &&
       (*(float *)(param_1 + 0xa8c) <= *(float *)(param_1 + 0x243c) * *(float *)(param_1 + 0x243c)))
      && (*(float *)(param_1 + 0xaa0) <= *(float *)(param_1 + 0x2440))))) {
    *(undefined2 *)(param_1 + 0x242c) = 1;
  }
  return;
}

// 007B6DB0  FUN_007b6db0  size=666  [between]
void __fastcall FUN_007b6db0(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  float10 fVar5;
  
  cVar2 = *(char *)((int)param_1 + 0x242d);
  switch(cVar2) {
  case '\0':
    *(char *)((int)param_1 + 0x242d) = cVar2 + '\x01';
    pcVar3 = *(code **)(param_1[0x7f8] + 8);
    param_1[0x53d] = 1;
    (*pcVar3)(0x3f800000,0,0);
    if (param_1[0x3a4] != 0) {
      (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x7cc);
    }
  case '\x01':
    fVar1 = (float)param_1[0x90e] * (float)param_1[0x90e];
    if (((((fVar1 < (float)param_1[0x2a3] != (fVar1 == (float)param_1[0x2a3])) &&
          ((float)param_1[0x2a3] <= (float)param_1[0x90f] * (float)param_1[0x90f])) &&
         ((float)param_1[0x2a8] < (float)param_1[0x910] !=
          ((float)param_1[0x2a8] == (float)param_1[0x910]))) &&
        ((iVar4 = FUN_00a90070(0x3c), iVar4 != 0 && (param_1[0x538] == 0)))) &&
       (param_1[0x53e] != 0)) {
      *(undefined1 *)((int)param_1 + 0x242d) = 2;
    }
    if ((((float)param_1[0x11] + 2.5 < *(float *)(param_1[0x2a1] + 0x44) !=
          ((float)param_1[0x11] + 2.5 == *(float *)(param_1[0x2a1] + 0x44))) &&
        ((float)param_1[0x2a3] <= (float)param_1[0x90f] * (float)param_1[0x90f])) &&
       (((float)param_1[0x2a8] < (float)param_1[0x910] !=
         ((float)param_1[0x2a8] == (float)param_1[0x910]) &&
        (((iVar4 = FUN_00a90070(0x3c), iVar4 != 0 && (param_1[0x538] == 0)) && (param_1[0x53e] != 0)
         ))))) {
      *(undefined1 *)((int)param_1 + 0x242d) = 2;
    }
    break;
  case '\x02':
    pcVar3 = *(code **)(*param_1 + 0x358);
    *(char *)((int)param_1 + 0x242d) = cVar2 + '\x01';
    (*pcVar3)(0x1f,param_1 + 0x7f8);
    param_1[0x90c] = 0x41f00000;
    FUN_007b6a30();
  case '\x03':
    fVar1 = (float)param_1[0x90c];
    param_1[0x90c] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      *(char *)((int)param_1 + 0x242d) = *(char *)((int)param_1 + 0x242d) + '\x01';
    }
    break;
  case '\x04':
    (**(code **)(param_1[0x7f8] + 8))(0x3f800000,0,0);
    *(char *)((int)param_1 + 0x242d) = *(char *)((int)param_1 + 0x242d) + '\x01';
    FUN_007b14f0(0x3c,0x40400000);
  case '\x05':
    if ((param_1[0x538] == 0) || (param_1[0x538] == 2)) {
      *(undefined1 *)((int)param_1 + 0x242d) = 0;
    }
  }
  if (((param_1[0x90d] == 0) || (param_1[0x36c] == 1)) ||
     ((param_1[0x36c] == 0 || (param_1[0x8ca] == 0)))) {
    *(undefined2 *)(param_1 + 0x90b) = 0;
  }
  fVar1 = (float)param_1[0x910];
  if (NAN(fVar1) || 2.9670596 < fVar1 == (fVar1 == 2.9670596)) {
    fVar5 = (float10)FUN_00ddba30(fVar1 + 0.08726646);
  }
  else {
    fVar5 = (float10)3.1415927;
  }
  if (((float)param_1[0x90f] * (float)param_1[0x90f] < (float)param_1[0x2a3]) ||
     (fVar5 < (float10)(float)param_1[0x2a8])) {
    *(undefined2 *)(param_1 + 0x90b) = 0;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    *(undefined2 *)(param_1 + 0x90b) = 0;
  }
  return;
}

// 007B7070  FUN_007b7070  size=274  [between]
undefined4 __fastcall FUN_007b7070(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0x2414,0,0,0,0,0,0,0);
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
  local_20 = "Emc080UsePath";
  local_60[0] = param_1 + 0x2414;
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

// 007B7190  FUN_007b7190  size=274  [between]
undefined4 __fastcall FUN_007b7190(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0x240c,0,0,0,0,0,0,0);
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
  local_2c = 0x1b;
  local_28 = 8;
  local_20 = "Emc080Obstacle";
  local_60[0] = param_1 + 0x240c;
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

// 007B72B0  FUN_007b72b0  size=310  [between]
void __thiscall FUN_007b72b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
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
  
  iVar9 = FUN_00907640(param_1 + 0x2424,0,0);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x4c);
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = *(float *)(param_1 + 0x44) + 1.5;
  iVar10 = FUN_009f8b40();
  local_2c = iVar10 << 0x10 | 7;
  local_60[1] = 0x3c;
  local_28 = 0x3ff001b;
  local_24 = 0;
  local_20 = 0;
  local_1c = "Emc080NextPointView";
  local_30 = 0x3e4ccccd;
  local_60[0] = param_1 + 0x2424;
  local_50 = fVar1;
  local_4c = fVar8;
  local_48 = fVar2;
  local_44 = fVar3;
  local_40 = fVar4 - fVar1;
  local_3c = (fVar5 + 1.5) - fVar8;
  local_38 = fVar6 - fVar2;
  local_34 = fVar7 - fVar3;
  FUN_0090fb00(local_60);
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0x2404) = 1;
  }
  return;
}

// 007B73F0  FUN_007b73f0  size=273  [between]
undefined4 __fastcall FUN_007b73f0(int param_1)

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
  
  uVar4 = FUN_00907640(param_1 + 0x241c,0,0);
  local_70 = 0.0;
  local_6c[0] = 0x3fc00000;
  local_6c[1] = 0x3f000000;
  D3DXVec3TransformNormal(&local_70,&local_70,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  local_70 = *(float *)(param_1 + 0x4c) + local_70;
  iVar5 = FUN_009f8b40();
  uStack_38 = iVar5 << 0x10 | 7;
  uStack_30 = 0;
  uStack_2c = 0;
  fStack_50 = local_70;
  uStack_4c = 0;
  local_6c[1] = 1;
  uStack_48 = 0xc0400000;
  uStack_34 = 0x3ff001b;
  pcStack_28 = "Emc080FloorCheck";
  uStack_44 = 0;
  fStack_40 = local_70;
  uStack_3c = 0x3e99999a;
  local_6c[0] = param_1 + 0x241c;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + fStack_74;
  FUN_0090fb00(local_6c);
  return uVar4;
}

// 007B7510  Emc080::vf368  size=55  [class]
undefined4 __fastcall Emc080::vf368(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4b0) == 0x2c080) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0x10e0) & 0x800000) != 0) {
      return 1;
    }
  }
  else {
    uVar1 = 2;
    if ((*(uint *)(param_1 + 0x10e0) & 0x800000) != 0) {
      uVar1 = 3;
    }
  }
  return uVar1;
}

// 007B7550  FUN_007b7550  size=268  [between]
undefined4 __fastcall FUN_007b7550(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_00a90070(5);
  if (iVar2 != 0) {
    if ((*(float *)(param_1 + 0xa90) <= 30.25) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 == 0) {
        uVar3 = 0x80000000;
      }
      else {
        uVar3 = 0;
      }
      FUN_007b09c0(0x50001,uVar3,0,0,0);
      uVar3 = 1;
    }
    if ((*(float *)(param_1 + 0xa90) <= 12.25) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
      FUN_007b09c0(0x50002,0,0,0,0);
      if ((*(byte *)(param_1 + 0xeba) & 0x18) != 0) {
        FUN_007b09c0(0x50003,0,0,0,0);
      }
      uVar3 = 1;
    }
    if ((*(float *)(param_1 + 0xa90) <= 12.25) && (1.0471976 < *(float *)(param_1 + 0xaa0))) {
      FUN_007b09c0(0x50000,0,0,0,0);
      return 1;
    }
  }
  return uVar3;
}

// 007B7660  FUN_007b7660  size=240  [between]
void __thiscall FUN_007b7660(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  FUN_00a7c960(&stack0x00000008);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined2 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  switch(param_2) {
  case 0:
    FUN_007b11e0();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    return;
  case 1:
    FUN_007b1350();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    return;
  case 2:
    *(undefined2 *)(param_1 + 0x1c6) = 0x43;
    uVar1 = 0xe;
    break;
  case 3:
    *(undefined2 *)(param_1 + 0x1c6) = 0x3a;
    uVar1 = 2;
    break;
  default:
    goto switchD_007b76cb_default;
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  *(undefined4 *)(param_1 + 0x1dc) = 0x43700000;
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
switchD_007b76cb_default:
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  return;
}

// 007B7780  FUN_007b7780  size=120  [between]
void __fastcall FUN_007b7780(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x1a4) == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = 1;
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1dc);
  }
  else if (*(int *)(param_1 + 0x1a4) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1d4) < *(int *)(param_1 + 0x1d0)) {
    fVar1 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1d8) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d0);
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1dc);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}

// 007B7800  FUN_007b7800  size=65  [between]
void __fastcall FUN_007b7800(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 4) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c8a0();
      FUN_00cbbb50(uVar2);
      *param_1 = *param_1 | 4;
      param_1[8] = 0xff;
      return;
    }
    FUN_00cbbb50(0);
    *param_1 = *param_1 | 4;
    param_1[8] = 0xff;
  }
  return;
}

// 007B7850  FUN_007b7850  size=199  [between]
void __fastcall FUN_007b7850(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = FUN_00a81330();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00a7c8a0();
  }
  if ((((*(int *)(iVar5 + 9000) != 0) && (*(int *)(iVar5 + 0x232c) != 0)) &&
      (fVar2 = *(float *)(iVar5 + 0x40) - *(float *)(iVar5 + 0x2340),
      fVar4 = *(float *)(iVar5 + 0x44) - *(float *)(iVar5 + 0x2344),
      fVar3 = *(float *)(iVar5 + 0x48) - *(float *)(iVar5 + 0x2348),
      fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),
      *(float *)(param_1 + 0x48) < fVar2)) && (fVar2 < *(float *)(param_1 + 0x4c))) {
    *(undefined2 *)(param_1 + 8) = 2;
    return;
  }
  cVar1 = *(char *)(param_1 + 9);
  switch(cVar1) {
  case '\0':
    *(undefined4 *)(param_1 + 0xc) = 0x42700000;
    *(char *)(param_1 + 9) = cVar1 + '\x01';
  case '\x01':
    fVar2 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0xc) = fVar2;
    if (fVar2 < 0.0) {
      *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
      return;
    }
    break;
  case '\x02':
    *(char *)(param_1 + 9) = cVar1 + '\x01';
  case '\x03':
    *(undefined2 *)(param_1 + 8) = 0;
  }
  return;
}

// 007B7930  FUN_007b7930  size=196  [between]
/* WARNING: Removing unreachable block (ram,0x007b798e) */

undefined4 FUN_007b7930(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  undefined1 local_20 [28];
  
  iVar4 = 0;
  iVar1 = FUN_00907640(param_1,&local_24,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 1;
  FUN_0112bcf0();
  if (0 < *(int *)(local_24 + 0x14)) {
    iVar1 = *(int *)(*(int *)(local_24 + 0x10) + 0x28);
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x18) == '\x01') {
      iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
    }
    if (*(char *)(iVar1 + 0x18) == '\x02') {
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      else {
        iVar4 = 0;
      }
    }
    if (((iVar2 != 0) && (iVar1 = FUN_008f7780(iVar2), uVar3 = 1, param_2 != 0)) &&
       (iVar1 == param_2)) {
      uVar3 = 0;
    }
    if (((iVar4 != 0) && (iVar1 = FUN_008f7780(iVar4), param_2 != 0)) && (iVar1 == param_2)) {
      return 0;
    }
  }
  return uVar3;
}

// 007B7A00  Emc080::vf14C  size=84  [class]
bool __thiscall Emc080::vf14C(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x4e4) != 0) || ((DAT_01bea060 & 0x2000000) != 0)) {
    return false;
  }
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((((param_2 != 0x4c) && (param_2 != 0x4d)) && (param_2 != 0x4e)) && (param_2 != 0x4f)) {
    return param_2 == 0x50;
  }
  return true;
}

// 007B7A60  Emc080::vf150  size=289  [class]
void __thiscall Emc080::vf150(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    param_1[0x4c4] = 0;
    param_1[0x4c5] = 0;
    param_1[0x4c6] = 0;
    param_1[0x47c] = 0;
    param_1[0x47d] = 0;
    param_1[0x47e] = 0;
    param_1[0x4ad] = 0;
    *(undefined1 *)((int)param_1 + 0x1275) = 6;
    if (unaff_retaddr == 0x4c) {
      param_1[0x8c3] = 1;
      FUN_007b09c0(0x90002,0,0,0,0);
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        FUN_00a8e880(iVar2 + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40c90fdb,0);
        return;
      }
    }
    else if ((((unaff_retaddr == 0x4d) || (unaff_retaddr == 0x4e)) || (unaff_retaddr == 0x4f)) ||
            (unaff_retaddr == 0x50)) {
      FUN_007b09c0(0x90003,0,0,0,0);
    }
  }
  return;
}

// 007B7B90  FUN_007b7b90  size=471  [between]
void __fastcall FUN_007b7b90(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
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
  
  iVar3 = 0;
  iVar2 = FUN_00ac82f0();
  if (iVar2 == 0) {
    if (((*(int *)(param_1 + 0x2300) == 0x17) && (*(float *)(param_1 + 0x2308) < 0.0)) &&
       (fVar1 = *(float *)(param_1 + 0x2304), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_50,0x43480000,
                           0x42c80000,0x17,4);
    }
    if (((*(int *)(param_1 + 0x2300) == 0x19) && (*(float *)(param_1 + 0x2308) < 0.0)) &&
       (0.0 < *(float *)(param_1 + 0x2304) != (*(float *)(param_1 + 0x2304) == 0.0))) {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_40,0x43480000,
                           0x42c80000,0x19,4);
    }
    if (((*(int *)(param_1 + 0x2300) == 0x18) && (*(float *)(param_1 + 0x2308) < 0.0)) &&
       (0.0 < *(float *)(param_1 + 0x2304) != (*(float *)(param_1 + 0x2304) == 0.0))) {
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_30,0x43480000,
                           0x42c80000,0x18,4);
    }
    if (((*(int *)(param_1 + 0x2300) == 0x1a) && (*(float *)(param_1 + 0x2308) < 0.0)) &&
       (0.0 < *(float *)(param_1 + 0x2304) != (*(float *)(param_1 + 0x2304) == 0.0))) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x43480000,
                           0x42c80000,0x1a,4);
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x48) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0x3f99999a;
      *(undefined4 *)(iVar3 + 0x44) = 0x3e99999a;
    }
  }
  return;
}

// 007B7D70  FUN_007b7d70  size=115  [between]
void __fastcall FUN_007b7d70(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  if ((*(int *)(param_1 + 0x61c) != 0) &&
     ((*(int *)(uVar3 + 0x3e18) != 0 || (*(int *)(uVar3 + 0x3e1c) != 0)))) {
    FUN_007b09c0(0x70000,1,0,0,0);
  }
  return;
}

// 007B7DF0  FUN_007b7df0  size=240  [between]
void __fastcall FUN_007b7df0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar3);
    }
  }
  if (*(int *)(param_1 + 0x239c) == 0) {
    FUN_0093dc50();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xfe,0,0x3e800000,0x3f800000,0,0,0x3f800000);
    *(undefined4 *)(param_1 + 0x2308) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x2300) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2304) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x11e8) = 0;
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    switchD_0080dbae::default();
    return;
  }
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  switchD_0080dbae::default();
  return;
}

// 007B7EE0  Emc080::vf33C  size=1150  [class]
void __thiscall Emc080::vf33C(int *param_1,undefined4 param_2,uint *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  
  iVar5 = 0;
  uVar7 = 2;
  local_8 = 0x10;
  do {
    uVar4 = 0x80000000 >> ((byte)(uVar7 - 2) & 0x1f);
    uVar3 = uVar7 - 2 >> 5;
    if (((param_3[uVar3 + 4] & uVar4) != 0) && ((param_3[uVar3] & uVar4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar4 = 0x80000000 >> ((byte)(uVar7 - 1) & 0x1f);
    uVar3 = uVar7 - 1 >> 5;
    if (((param_3[uVar3 + 4] & uVar4) != 0) && ((param_3[uVar3] & uVar4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar3 = 0x80000000 >> ((byte)uVar7 & 0x1f);
    if (((param_3[(uVar7 >> 5) + 4] & uVar3) != 0) && ((param_3[uVar7 >> 5] & uVar3) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar4 = 0x80000000 >> ((byte)(uVar7 + 1) & 0x1f);
    uVar3 = uVar7 + 1 >> 5;
    if (((param_3[uVar3 + 4] & uVar4) != 0) && ((param_3[uVar3] & uVar4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar7 = uVar7 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (iVar5 == 0x40) {
    param_3[6] = 0x42380;
    FUN_00dd5650(&DAT_0163e1e0);
    return;
  }
  if (((param_3[4] & 0x10000000) != 0) && ((~(*param_3 >> 0x1c) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 0x10;
  }
  if (((param_3[4] & 0x20000000) != 0) && ((~(*param_3 >> 0x1d) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 0x10;
  }
  if (((param_3[4] & 0x40000000) != 0) && ((~(*param_3 >> 0x1e) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 8;
  }
  if (((param_3[4] & 0x80000000) != 0) && ((~(*param_3 >> 0x1f) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 8;
  }
  if (((param_3[4] & 0x8000000) != 0) && ((~(*param_3 >> 0x1b) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 1;
  }
  if (param_1[0x8e6] != 0) {
    param_3[6] = 0x42380;
    if (param_1[0x294] == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x344))(0xb,1,1);
    return;
  }
  if (param_1[0x8e5] == 0) {
    uVar7 = param_3[4];
    bVar2 = false;
    if ((((uVar7 & 0x800000) != 0) && ((~(*param_3 >> 0x17) & 1) != 0)) &&
       ((iVar5 = FUN_0043f860(8), iVar5 == 0 && ((*(byte *)(param_1 + 0x3ae) & 0xa0) != 0)))) {
      bVar2 = true;
    }
    if ((((uVar7 & 0x1000000) != 0) && ((~*(byte *)((int)param_3 + 3) & 1) != 0)) &&
       ((iVar5 = FUN_0043f860(7), iVar5 == 0 && ((*(byte *)(param_1 + 0x3ae) & 0xc0) != 0)))) {
      bVar2 = true;
    }
    if (bVar2) {
      param_3[6] = 0x42380;
      if (param_1[0x294] == 0) {
        return;
      }
      (**(code **)(*param_1 + 0x364))(0xffffffff);
      (**(code **)(*param_1 + 0x344))(0xb,1,1);
      param_1[0x139] = 1;
      return;
    }
    iVar5 = FUN_0043f830(7);
    if ((iVar5 == 0) && (iVar5 = FUN_0043f830(8), iVar5 == 0)) {
      iVar6 = 0;
      uVar7 = 2;
      iVar5 = 0x10;
      do {
        bVar1 = (byte)uVar7;
        uVar4 = 0x80000000 >> (bVar1 - 2 & 0x1f);
        uVar3 = uVar7 - 2 >> 5;
        if (((param_3[uVar3 + 4] & uVar4) != 0) && ((param_3[uVar3 + 2] & uVar4) == 0)) {
          iVar6 = iVar6 + 1;
        }
        uVar4 = 0x80000000 >> (bVar1 - 1 & 0x1f);
        uVar3 = uVar7 - 1 >> 5;
        if (((param_3[uVar3 + 4] & uVar4) != 0) && ((param_3[uVar3 + 2] & uVar4) == 0)) {
          iVar6 = iVar6 + 1;
        }
        uVar3 = 0x80000000 >> (bVar1 & 0x1f);
        if (((param_3[(uVar7 >> 5) + 4] & uVar3) != 0) && ((param_3[(uVar7 >> 5) + 2] & uVar3) == 0)
           ) {
          iVar6 = iVar6 + 1;
        }
        uVar4 = 0x80000000 >> (bVar1 + 1 & 0x1f);
        uVar3 = uVar7 + 1 >> 5;
        if (((param_3[uVar3 + 4] & uVar4) != 0) && ((param_3[uVar3 + 2] & uVar4) == 0)) {
          iVar6 = iVar6 + 1;
        }
        uVar7 = uVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar6 != 1) {
        iVar5 = FUN_0043f830(3);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 0x10;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_007b80ba;
        }
        iVar5 = FUN_0043f830(2);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 0x10;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_007b80ba;
        }
        iVar5 = FUN_0043f830(6);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 4;
          iVar5 = FUN_0043f860(7);
          if (iVar5 != 0) goto LAB_007b80ba;
        }
        iVar5 = FUN_0043f830(1);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 8;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_007b80ba;
        }
        iVar5 = FUN_0043f830(0);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 8;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_007b80ba;
        }
        iVar5 = FUN_0043f830(5);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 2;
          iVar5 = FUN_0043f860(7);
          if (iVar5 != 0) goto LAB_007b80ba;
        }
        param_3[6] = param_1[300];
        return;
      }
    }
  }
  else {
    *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 0x20;
    if ((((param_3[4] & 0x800000) == 0) || ((~(*param_3 >> 0x17) & 1) == 0)) ||
       (iVar5 = FUN_0043f860(7), iVar5 == 0)) {
      param_3[6] = param_1[300];
      return;
    }
  }
LAB_007b80ba:
  param_3[6] = 0x42380;
  return;
}

// 007B8370  Emc080::vf338  size=93  [class]
void __thiscall Emc080::vf338(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2398) != 0) {
    iVar2 = 0;
    if (0 < param_4) {
      piVar1 = (int *)(param_3 + 0x18);
      iVar3 = param_4;
      do {
        if (*piVar1 == *(int *)(param_1 + 0x4b4)) {
          iVar2 = iVar2 + 1;
        }
        piVar1 = piVar1 + 9;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = 0;
    if (0 < param_4) {
      while (*(int *)(param_3 + 0x18) == *(int *)(param_1 + 0x4b4)) {
        iVar2 = iVar2 + 1;
        param_3 = param_3 + 0x24;
        if (param_4 <= iVar2) {
          return;
        }
      }
      *(int *)(param_3 + 0x18) = *(int *)(param_1 + 0x4b4);
    }
  }
  return;
}

// 007B83D0  Emc080::vf334  size=1242  [class]
void __thiscall Emc080::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  EmBaseDLC::vf334(param_2,param_3);
  FUN_009fd240();
  FUN_00ac8d40(0);
  if ((*(byte *)(param_1 + 0x3ae) & 4) != 0) {
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
  }
  if ((*(byte *)(param_1 + 0x3ae) & 2) != 0) {
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
    FUN_00ac8d80(1,1);
    FUN_00ac9420("_EFD06");
  }
  if ((*(byte *)(param_1 + 0x3ae) & 0x10) != 0) {
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x10;
    FUN_00ac8d80(4,1);
    FUN_00ac8d80(9,1);
    FUN_00ac9420("_EFD00");
    FUN_00ac9420("_EFD02");
  }
  if ((*(byte *)(param_1 + 0x3ae) & 8) != 0) {
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 8;
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(5,1);
    FUN_00ac9420("_EFD01");
    FUN_00ac9420("_EFD03");
  }
  if ((*(byte *)(param_1 + 0x3ae) & 1) != 0) {
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 1;
    FUN_00ac8d80(8,1);
    FUN_00ac9420("_EFD04");
  }
  if ((*(byte *)(param_1 + 0x3ae) & 0x20) != 0) {
    FUN_00ac8d80(2,1);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x60;
    FUN_00ac9420("_EFD07");
    FUN_00ac9420("_EFD08");
  }
  if ((*(byte *)(param_1 + 0x3ae) & 0x40) != 0) {
    FUN_00ac8d80(2,1);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x60;
    FUN_00ac9420("_EFD07");
    FUN_00ac9420("_EFD08");
  }
  if ((param_1[0x8e6] != 0) || ((*(byte *)(param_1 + 0x3ae) & 0x80) != 0)) {
    FUN_00ac8d40(1);
  }
  if (param_3 != (int *)0x0) {
    puVar10 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar10);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00acdea0();
      if (piVar2 != (int *)0x0) {
        puVar10 = &DAT_01b35900;
        (**(code **)(*piVar2 + 4))(&DAT_01b35900);
        iVar1 = FUN_00dd6d80(puVar10);
        if ((iVar1 != 0) && (piVar2 != param_1)) {
          uVar3 = FUN_00a8cae0();
          uVar4 = FUN_00a8cad0(uVar3);
          uVar5 = FUN_00a8cac0(uVar4);
          uVar8 = 0;
          uVar6 = FUN_00a8cab0(0,uVar5);
          FUN_007b09c0(uVar6,uVar8,uVar5,uVar4,uVar3);
          uVar11 = 0x3f800000;
          uVar9 = 0xbf800000;
          uVar3 = FUN_00a95d20(0);
          uVar8 = 0x3f800000;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = FUN_00a95df0(0);
          FUN_00a9e290(uVar4,uVar5,uVar6,uVar8,uVar3,uVar9,uVar11);
          fVar7 = (float10)FUN_00a958c0(0);
          FUN_00a92f90();
          iVar1 = FUN_00e26e90();
          if (iVar1 != 0) {
            Animation::Motion::Unit::setCurrentTime(0,(float)fVar7);
          }
          FUN_0040ac60(piVar2 + 0x2ac);
          param_1[0x916] = piVar2[0x916];
        }
      }
    }
  }
  if (param_1[0x8e6] == 0) {
    if (param_1[0x128] == 0) {
      if (((*(byte *)((int)param_1 + 0xeb9) & 4) != 0) &&
         ((*(byte *)((int)param_1 + 0xeba) & 4) == 0)) {
        param_1[0x128] = 3;
        param_1[0x8c8] = 1;
        FUN_00c4d210(param_1[0x13c],2,0);
        param_1[0x47a] = 0;
        param_1[0x4ad] = 0;
        param_1[0x4b8] = param_1[0x4b8] | 0x14;
        *(undefined1 *)((int)param_1 + 0x1275) = 10;
        FUN_007b09c0(0x60002,0,0,0,0);
        FUN_00a8c420(0,"_kabe");
        FUN_00a8c420(0,"_taiki");
      }
      if (((*(byte *)((int)param_1 + 0xeb9) & 2) != 0) &&
         ((*(byte *)((int)param_1 + 0xeba) & 2) == 0)) {
        param_1[0x128] = 3;
        param_1[0x8c8] = 0;
        FUN_00c4d210(param_1[0x13c],3,0);
        param_1[0x47a] = 0;
        param_1[0x4ad] = 0;
        param_1[0x4b8] = param_1[0x4b8] | 0x14;
        *(undefined1 *)((int)param_1 + 0x1275) = 10;
        FUN_007b09c0(0x60002,0,0,0,0);
        FUN_00a8c420(0,"_kabe");
        FUN_00a8c420(0,"_taiki");
      }
      if ((((*(byte *)((int)param_1 + 0xeb9) & 2) == 0) ||
          ((*(byte *)((int)param_1 + 0xeb9) & 4) == 0)) ||
         (((*(byte *)((int)param_1 + 0xeba) & 2) != 0 &&
          ((*(byte *)((int)param_1 + 0xeba) & 4) != 0)))) goto LAB_007b888d;
      param_1[0x47a] = 0;
      param_1[0x4ad] = 0;
      param_1[0x4b8] = param_1[0x4b8] | 0x14;
      *(undefined1 *)((int)param_1 + 0x1275) = 10;
      FUN_00c4d210(param_1[0x13c],2,0);
      iVar1 = param_1[0x13c];
    }
    else {
      if ((((param_1[0x128] != 3) || ((*(byte *)((int)param_1 + 0xeb9) & 2) == 0)) ||
          ((*(byte *)((int)param_1 + 0xeb9) & 4) == 0)) ||
         (((*(byte *)((int)param_1 + 0xeba) & 2) != 0 &&
          ((*(byte *)((int)param_1 + 0xeba) & 4) != 0)))) goto LAB_007b888d;
      param_1[0x47a] = 0;
      param_1[0x4ad] = 0;
      param_1[0x4b8] = param_1[0x4b8] | 0x14;
      *(undefined1 *)((int)param_1 + 0x1275) = 10;
      FUN_00c4d210(param_1[0x13c],2,0);
      iVar1 = param_1[0x13c];
    }
    FUN_00c4d210(iVar1,3,0);
    FUN_007b09c0(0x70003,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_taiki");
  }
LAB_007b888d:
  *(undefined1 *)((int)param_1 + 0xeba) = *(undefined1 *)((int)param_1 + 0xeb9);
  param_1[0x438] = param_1[0x438] & 0xfff7ffff;
  return;
}

// 007B88B0  Emc080::vf1C0  size=122  [class]
void __thiscall Emc080::vf1C0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  EmBaseDLC::vf1C0(param_2,param_3);
  FUN_00ac8d40(0);
  if (param_2 != (int *)0x0) {
    puVar3 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00acdea0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01b35900;
        (**(code **)(*piVar2 + 4))(&DAT_01b35900);
        iVar1 = FUN_00dd6d80(puVar3);
        if ((iVar1 != 0) && (piVar2 != param_1)) {
          FUN_0040ac60(piVar2 + 0x2ac);
        }
      }
    }
  }
  return;
}

// 007B8930  FUN_007b8930  size=63  [between]
void __fastcall FUN_007b8930(int param_1)

{
  int iVar1;
  
  iVar1 = RayArmorDebris::vf40();
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x980) = 0;
  if (*(int *)(param_1 + 0x4b0) == 0x42381) {
    *(undefined4 *)(param_1 + 0x984) = 1;
    *(undefined4 *)(param_1 + 0x980) = 0x1e;
  }
  return;
}

// 007B8970  FUN_007b8970  size=576  [between]
void __fastcall FUN_007b8970(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
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
  
  if ((*(int *)(param_1 + 0x984) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x980), *(int *)(param_1 + 0x980) = iVar1 + -1, iVar1 == 0)) {
    FUN_005d8530(0x3f000000);
  }
  if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) &&
     (*(int *)(param_1 + 0x970) != 0)) {
    *(undefined4 *)(param_1 + 0x970) = 0;
    FUN_005d95e0(&local_40);
    fVar3 = (float10)FUN_00916de0();
    fVar4 = (float10)-2.0;
    local_30 = (float)((float10)local_40 * fVar3 * fVar4);
    local_2c = (float)((float10)local_3c * fVar3 * fVar4);
    local_28 = (float)((float10)local_38 * fVar3 * fVar4);
    local_24 = (float)(fVar4 * (float10)local_34 * fVar3);
    FUN_0091ab40(&local_30);
    local_20 = DAT_01bea380;
    local_1c = DAT_01bea384;
    local_18 = DAT_01bea388;
    local_14 = DAT_01bea38c;
    local_50 = DAT_01bea380 - *(float *)(param_1 + 0x40);
    local_4c = DAT_01bea384 - *(float *)(param_1 + 0x44);
    local_48 = DAT_01bea388 - *(float *)(param_1 + 0x48);
    local_44 = DAT_01bea38c - *(float *)(param_1 + 0x4c);
    fVar2 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_50 = 0.0;
      local_4c = 1.0;
      local_48 = 0.0;
    }
    fVar3 = (float10)FUN_00916de0();
    local_30 = (float)((float10)local_50 * fVar3);
    local_2c = (float)((float10)local_4c * fVar3);
    local_28 = (float)((float10)local_48 * fVar3);
    local_24 = (float)((float10)local_44 * fVar3);
    FUN_0091ab40(&local_30);
    fVar3 = (float10)FUN_00916de0();
    fVar4 = (float10)-0.1;
    local_30 = (float)((float10)local_40 * fVar3 * fVar4);
    local_2c = (float)(fVar3 * (float10)local_3c * fVar4);
    local_28 = (float)(fVar3 * (float10)local_38 * fVar4);
    local_24 = (float)(fVar4 * (float10)local_34 * fVar3);
    FUN_0091abd0(&local_20,&local_30);
  }
  return;
}

// 007B8C50  FUN_007b8c50  size=43  [between]
void __fastcall FUN_007b8c50(int param_1)

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

// 007B8CA0  FUN_007b8ca0  size=5637  [between]
undefined4 __thiscall FUN_007b8ca0(int *param_1,int *param_2)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float10 fVar17;
  float10 fVar18;
  int local_20;
  int local_1c;
  int local_18;
  int local_c;
  
  iVar13 = *param_2;
  uVar3 = param_1[0x186];
  bVar10 = false;
  if ((((iVar13 == 0) || (iVar13 == 1)) || (iVar13 == 2)) ||
     ((iVar13 == 0x1b0 || (iVar13 == 0x147)))) {
    return 0;
  }
  iVar13 = param_1[0x8e7];
  param_1[0x715] = 0x3e4ccccd;
  param_1[0x475] = 1;
  local_20 = param_2[1];
  local_1c = local_20;
  local_18 = local_20;
  if ((iVar13 == 0) && ((param_2[0x23] & 0x200U) != 0)) {
    local_1c = FUN_00fdbc60();
    local_20 = FUN_00fdbc60();
    local_18 = FUN_00fdbc60();
  }
  uVar12 = uVar3 & 0xffff0000;
  if (uVar12 == 0x70000) {
    local_20 = 0;
  }
  iVar4 = param_1[0x128];
  if ((iVar4 == 0) && (*param_2 == 0x42)) {
    local_20 = 0;
    local_18 = 0;
  }
  uVar14 = param_2[0x23];
  if ((uVar14 & 0x10) != 0) {
    local_1c = 0;
    local_20 = 0;
    local_18 = 0;
  }
  if ((iVar13 == 0) && ((uVar14 & 0x10000000) != 0)) {
    local_1c = FUN_00fdbc60();
    local_20 = FUN_00fdbc60();
    local_18 = FUN_00fdbc60();
  }
  if ((iVar13 != 0) && ((uVar14 & 0x10000000) != 0)) {
    local_1c = FUN_00fdbc60();
    local_20 = FUN_00fdbc60();
    local_18 = FUN_00fdbc60();
  }
  iVar13 = *param_2;
  if (iVar13 == 0x18d) {
    local_1c = FUN_00fdbc60();
    local_20 = 1;
    local_18 = 1;
  }
  if ((param_2[0x24] & 0x400U) != 0) {
    local_1c = 0;
    local_20 = 0;
    local_18 = 0;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    local_20 = 0;
    local_18 = 0;
  }
  if ((((iVar13 == 0x1a9) || (iVar13 == 0x1a7)) || (iVar13 == 0x1a8)) || (iVar13 == 0x1aa)) {
    local_20 = FUN_00fdbc60();
    local_18 = FUN_00fdbc60();
  }
  if ((param_1[0x8e1] != 0) && (iVar4 != 7)) {
    param_1[0x3b1] = param_1[0x3b1] - local_1c;
    local_1c = 0;
  }
  local_c = 0;
  iVar13 = FUN_00a81330();
  if (iVar13 != 0) {
    local_c = FUN_00a7c8a0();
  }
  iVar13 = FUN_00ac8170(local_c);
  if (iVar13 == 0) {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    bVar7 = false;
  }
  else {
    bVar7 = true;
    (**(code **)(*param_1 + 0x21c))(local_c,(char)param_2[4],0x3c23d70a,0);
    if ((param_1[0x8e7] == 0) && (uVar12 == 0x70000)) {
      local_20 = local_20 / 5;
      local_18 = local_18 / 5;
    }
    if ((param_1[0x8e7] != 0) && (uVar12 == 0x70000)) {
      local_20 = local_20 / 2;
      local_18 = local_18 / 2;
    }
    uVar14 = param_2[0x23];
    bVar10 = (uVar14 & 0x800000) != 0 || (uVar14 & 0x40000000) != 0;
    if ((uVar14 & 0x20000000) != 0) {
      bVar10 = true;
    }
  }
  uVar14 = 1;
  if (param_1[0x911] != 0) {
    uVar14 = 0x8001;
  }
  if ((((*(byte *)((int)param_2 + 0x8e) & 1) != 0) && ((char)param_1[0x3ae] != '\0')) &&
     ((char)param_1[0x3ae] != *(char *)((int)param_1 + 0xeba))) {
    uVar14 = uVar14 | 0x40;
  }
  param_1[0x3af] = param_2[0x4a];
  bVar6 = true;
  bVar8 = true;
  if ((param_1[0x8e8] != 0) && (*param_2 == 0x93)) {
    bVar6 = false;
    uVar14 = 0x40000;
    bVar8 = false;
    local_1c = 0;
    local_20 = 0;
    local_18 = 0;
  }
  bVar9 = false;
  if ((param_1[0x128] != 0) || (!bVar6)) goto LAB_007b96ed;
  if ((bVar7) && (param_1[0x47a] != 0)) {
    if (*param_2 != 0x18d) {
      param_1[0x4c8] = param_1[0x4c8] + -1;
      goto LAB_007b9089;
    }
  }
  else {
LAB_007b9089:
    if (((*param_2 != 0x18d) && (iVar13 = FUN_007b0fc0(), iVar13 != 0)) &&
       ((iVar13 = FUN_00a8c760(0x30), iVar13 != 0 || (uVar3 == 0x1000e)))) {
      fVar1 = (float)param_1[0x8dd];
      if ((NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) || (0.0 <= (float)param_1[0x8df])) {
        param_1[0x8dd] = 0x42700000;
      }
      else {
        param_1[0x8de] = param_1[0x8de] + 1;
        param_1[0x8dd] = 0x42700000;
        local_18 = 0;
        bVar9 = true;
        if ((bVar7) && (param_1[0x47a] != 0)) {
          param_1[0x4c8] = param_1[0x4c8] + -1;
        }
        local_1c = 0;
        uVar14 = 2;
        if (bVar7) {
          FUN_007b09c0(0x1000e,0,0,0,0);
          param_1[0x4c2] = 0x42f00000;
          if (param_1[0x47a] != 0) {
            param_1[0x4c2] = 0x41f00000;
          }
          sVar11 = FUN_00dde2d0(0,3);
          if (sVar11 == 1) {
            param_1[0x4c2] = 0x41700000;
          }
          FUN_00aa4080(0xb3,1,0x3d088889,0x3e99999a,0x8000010,0,0x3f800000);
          FUN_00aa4080(0xb3,2,0x3d088889,0x3e99999a,0x8000050,0,0x3f800000);
        }
      }
    }
  }
  if ((param_1[0x47a] != 0) && (param_1[0x4c8] < 1)) {
    FUN_007b09c0(0x70001,0,0,0,0);
    sVar11 = FUN_00dde2d0(0,3);
    param_1[0x4c8] = sVar11 + 9;
  }
  if (param_1[0x3af] == 1) {
    uVar15 = 0x89;
    sVar11 = FUN_00dde2d0(0,1);
    if (sVar11 != 0) {
      uVar15 = 0x8a;
    }
    FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    param_1[0x3a9] = param_1[0x3a9] - local_18;
    if ((param_1[0x3a9] < 1) && ((*(byte *)(param_1 + 0x3ae) & 4) == 0)) {
      (**(code **)(*param_1 + 0x358))(0x192,0);
      *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
      FUN_00ac8d80(3,1);
      FUN_00ac9420("_EFD05");
      if (bVar10 != false) {
        uVar14 = uVar14 & 0xffffffbf | 0x20;
      }
      FUN_007b09c0(0x70000,1,0,0,0);
    }
  }
  if (param_1[0x3af] == 2) {
    uVar15 = 0x89;
    sVar11 = FUN_00dde2d0(0,1);
    if (sVar11 != 0) {
      uVar15 = 0x8a;
    }
    FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
    param_1[0x3aa] = param_1[0x3aa] - local_18;
    if ((param_1[0x3aa] < 1) && ((*(byte *)(param_1 + 0x3ae) & 2) == 0)) {
      (**(code **)(*param_1 + 0x358))(0x193,0);
      *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
      FUN_00ac8d80(1,1);
      FUN_00ac9420("_EFD06");
      if (bVar10 != false) {
        uVar14 = uVar14 & 0xffffffbf | 0x20;
      }
      FUN_007b09c0(0x70000,2,0,0,0);
    }
  }
  iVar13 = param_1[0x3af];
  if (((((((iVar13 == 5) || (iVar13 == 6)) || (iVar13 == 4)) || (iVar13 == 0)) ||
       ((bVar9 && (iVar13 == 1)))) &&
      (param_1[0x3ab] = param_1[0x3ab] - local_20, param_1[0x3ab] < 1)) &&
     ((*(byte *)(param_1 + 0x3ae) & 0x10) == 0)) {
    FUN_007b0e30(1);
    if (bVar10 != false) {
      FUN_007b17e0();
      uVar14 = uVar14 & 0xffffff9f;
    }
    FUN_007b09c0(0x70000,1,0,0,0);
  }
  iVar13 = param_1[0x3af];
  if ((((((iVar13 == 7) || (iVar13 == 8)) || ((iVar13 == 4 || (iVar13 == 0)))) ||
       ((bVar9 && (iVar13 == 2)))) &&
      (param_1[0x3ac] = param_1[0x3ac] - local_20, param_1[0x3ac] < 1)) &&
     ((*(byte *)(param_1 + 0x3ae) & 8) == 0)) {
    FUN_007b0ea0(1);
    if (bVar10 != false) {
      FUN_007b1840();
      uVar14 = uVar14 & 0xffffff9f;
    }
    FUN_007b09c0(0x70000,2,0,0,0);
  }
  if (((param_1[0x3af] == 3) && (param_1[0x3a7] = param_1[0x3a7] - local_1c, param_1[0x3a7] < 1)) &&
     ((*(byte *)(param_1 + 0x3ae) & 1) == 0)) {
    (**(code **)(*param_1 + 0x358))(400,0);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 1;
    FUN_00ac8d80(8,1);
    FUN_00ac9420("_EFD04");
  }
  if ((*param_2 == 0x4f) && (param_1[0x186] != 0x70000)) {
    bVar2 = *(byte *)(param_1 + 0x3ae);
    if (((bVar2 & 0x10) == 0) || ((*(byte *)((int)param_1 + 0xeb9) & 0x10) != 0)) {
      if (((bVar2 & 0x10) == 0) || ((*(byte *)((int)param_1 + 0xeb9) & 0x10) != 0)) {
        if (((bVar2 & 4) != 0) && ((*(byte *)((int)param_1 + 0xeb9) & 4) == 0)) {
          (**(code **)(*param_1 + 0x358))(0x192,0);
          *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
          FUN_00ac8d80(3,1);
          FUN_00ac9420("_EFD05");
          uVar15 = 1;
          goto LAB_007b95e6;
        }
        if (((bVar2 & 2) == 0) || ((*(byte *)((int)param_1 + 0xeb9) & 2) != 0)) goto LAB_007b95f8;
        (**(code **)(*param_1 + 0x358))(0x193,0);
        *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
        FUN_00ac8d80(1,1);
        FUN_00ac9420("_EFD06");
      }
      else {
        FUN_007b0ea0(1);
      }
      uVar15 = 2;
    }
    else {
      FUN_007b0e30(1);
      uVar15 = 1;
    }
LAB_007b95e6:
    uVar14 = uVar14 & 0xffffffbf | 0x20;
    FUN_007b09c0(0x70000,uVar15,0,0,0);
  }
LAB_007b95f8:
  if ((param_1[0x3af] == 0) && ((param_2[0x23] & 0x10000000U) == 0)) {
    sVar11 = FUN_00dde2d0(0,1);
    FUN_00aa4080(sVar11 + 0x96,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    FUN_007b09c0(0x70006,0,0,0,0);
  }
  if ((((*(byte *)(param_2 + 0x23) & 1) != 0) && (uVar3 != 0x70000)) &&
     ((float)param_1[0x90a] <= 0.0)) {
    pcVar5 = *(code **)(*param_1 + 0x358);
    param_1[0x90a] = 0x44960000;
    (*pcVar5)(0x18e,0);
    if ((*(byte *)((int)param_1 + 0xeb9) & 4) == 0) {
      FUN_007b09c0(0x70000,1,0,0,0);
    }
    if ((*(byte *)((int)param_1 + 0xeb9) & 2) == 0) {
      FUN_007b09c0(0x70000,2,0,0,0);
    }
  }
LAB_007b96ed:
  iVar13 = param_1[0x128];
  if ((((iVar13 == 1) || (iVar13 == 7)) || (iVar13 == 8)) && (bVar8)) {
    if (param_1[0x3af] == 4) {
      uVar15 = 0x8000010;
      sVar11 = FUN_00dde2d0(0,1);
      if (sVar11 != 0) {
        uVar15 = 0x8000050;
      }
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,uVar15,0,0x3f800000);
    }
    if (param_1[0x3af] == 0) {
      uVar15 = 0x8000010;
      sVar11 = FUN_00dde2d0(0,1);
      if (sVar11 != 0) {
        uVar15 = 0x8000050;
      }
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,uVar15,0,0x3f800000);
    }
    iVar13 = param_1[0x3af];
    if (((iVar13 == 5) || (iVar13 == 6)) || (iVar13 == 1)) {
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,0x8000010,0,0x3f800000);
    }
    iVar13 = param_1[0x3af];
    if (((iVar13 == 7) || (iVar13 == 8)) || (iVar13 == 2)) {
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,0x8000050,0,0x3f800000);
    }
  }
  if ((param_1[0x128] == 3) && (bVar8)) {
    if (((uVar12 != 0x70000) || (uVar3 != 0x60002)) &&
       ((param_1[0x3ad] = param_1[0x3ad] - local_1c, param_1[0x3ad] < 1 && (uVar3 != 0x70002)))) {
      FUN_007b09c0(0x70002,0,0,0,0);
      param_1[0x3ad] = 0x50;
    }
    if ((param_1[0x3af] == 1) || (param_1[0x3af] == 0)) {
      uVar15 = 0x89;
      sVar11 = FUN_00dde2d0(0,1);
      if (sVar11 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      param_1[0x3a9] = param_1[0x3a9] - local_18;
      if ((param_1[0x3a9] < 1) && ((*(byte *)(param_1 + 0x3ae) & 4) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x192,0);
        *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
        FUN_00ac8d80(3,1);
        FUN_00ac9420("_EFD05");
        if (bVar10 != false) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    if ((param_1[0x3af] == 2) || (param_1[0x3af] == 0)) {
      uVar15 = 0x89;
      sVar11 = FUN_00dde2d0(0,1);
      if (sVar11 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
      param_1[0x3aa] = param_1[0x3aa] - local_18;
      if ((param_1[0x3aa] < 1) && ((*(byte *)(param_1 + 0x3ae) & 2) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x193,0);
        *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
        FUN_00ac8d80(1,1);
        FUN_00ac9420("_EFD06");
        if (bVar10 != false) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    iVar13 = param_1[0x3af];
    if (((((iVar13 == 5) || (iVar13 == 6)) || (iVar13 == 4)) || (iVar13 == 0)) &&
       (((param_1[0x3ab] = param_1[0x3ab] - local_20, param_1[0x3ab] < 1 &&
         ((*(byte *)(param_1 + 0x3ae) & 0x10) == 0)) && (FUN_007b0e30(1), bVar10 != false)))) {
      uVar14 = uVar14 & 0xffffffbf | 0x20;
    }
    iVar13 = param_1[0x3af];
    if ((((iVar13 == 7) || (iVar13 == 8)) || ((iVar13 == 4 || (iVar13 == 0)))) &&
       (((param_1[0x3ac] = param_1[0x3ac] - local_20, param_1[0x3ac] < 1 &&
         ((*(byte *)(param_1 + 0x3ae) & 8) == 0)) && (FUN_007b0ea0(1), bVar10 != false)))) {
      uVar14 = uVar14 & 0xffffffbf | 0x20;
    }
    if (((param_1[0x3af] == 3) && (param_1[0x3a7] = param_1[0x3a7] - local_20, param_1[0x3a7] < 1))
       && ((*(byte *)(param_1 + 0x3ae) & 1) == 0)) {
      (**(code **)(*param_1 + 0x358))(400,0);
      *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 1;
      FUN_00ac8d80(8,1);
      FUN_00ac9420("_EFD04");
    }
    if (((param_1[0x3af] == 0) || (param_1[0x3af] == 4)) && (local_c != 0)) {
      uVar16 = 0x8000010;
      fVar17 = (float10)FUN_00a8ec30(local_c + 0x40);
      fVar17 = (float10)FUN_00ddba30((float)(fVar17 - (float10)(float)param_1[0x25]));
      fVar18 = ABS(fVar17);
      uVar15 = 0x96;
      if ((float10)2.3561945 < fVar18 == ((float10)2.3561945 == fVar18)) {
        if (((float10)0.7853982 <= fVar18) &&
           (uVar15 = 0x98, (float10)0 < fVar17 != ((float10)0 == fVar17))) {
          uVar16 = 0x8000050;
        }
      }
      else {
        uVar15 = 0x97;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,uVar16,0xbf800000,0x3f800000);
    }
    if (*param_2 == 0x4f) {
      bVar2 = *(byte *)(param_1 + 0x3ae);
      if ((((((bVar2 & 0x10) != 0) && ((*(byte *)((int)param_1 + 0xeb9) & 0x10) == 0)) ||
           (((bVar2 & 0x10) != 0 && ((*(byte *)((int)param_1 + 0xeb9) & 0x10) == 0)))) ||
          (((bVar2 & 4) != 0 && ((*(byte *)((int)param_1 + 0xeb9) & 4) == 0)))) ||
         (((bVar2 & 2) != 0 && ((*(byte *)((int)param_1 + 0xeb9) & 2) == 0)))) {
        uVar14 = uVar14 & 0xffffffbf | 0x20;
      }
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      FUN_007b09c0(0x70007,0,0,0,0);
    }
  }
  if (((param_1[0x128] == 4) && (bVar8)) && ((param_2[0x23] & 0x20000U) != 0)) {
    FUN_007b09c0(0x70008,0,0,0,0);
  }
  if ((param_1[0x128] == 6) && (bVar8)) {
    if (param_1[0x3af] == 1) {
      uVar15 = 0x89;
      sVar11 = FUN_00dde2d0(0,1);
      if (sVar11 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      param_1[0x3a9] = param_1[0x3a9] - local_18;
      if ((param_1[0x3a9] < 1) && ((*(byte *)(param_1 + 0x3ae) & 4) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x192,0);
        *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
        FUN_00ac8d80(3,1);
        FUN_00ac9420("_EFD05");
        if (bVar10 != false) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    if (param_1[0x3af] == 2) {
      uVar15 = 0x89;
      sVar11 = FUN_00dde2d0(0,1);
      if (sVar11 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
      param_1[0x3aa] = param_1[0x3aa] - local_18;
      if ((param_1[0x3aa] < 1) && ((*(byte *)(param_1 + 0x3ae) & 2) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x193,0);
        *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
        FUN_00ac8d80(1,1);
        FUN_00ac9420("_EFD06");
        if (bVar10 != false) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    iVar13 = param_1[0x3af];
    if ((((((iVar13 == 5) || (iVar13 == 6)) || (iVar13 == 4)) || (iVar13 == 0)) ||
        ((bVar9 && (iVar13 == 1)))) &&
       ((param_1[0x3ab] = param_1[0x3ab] - local_20, param_1[0x3ab] < 1 &&
        (((*(byte *)(param_1 + 0x3ae) & 0x10) == 0 && (FUN_007b0e30(1), bVar10 != false)))))) {
      FUN_007b17e0();
      uVar14 = uVar14 & 0xffffff9f;
    }
    iVar13 = param_1[0x3af];
    if ((((((iVar13 == 7) || (iVar13 == 8)) || (iVar13 == 4)) ||
         ((iVar13 == 0 || ((bVar9 && (iVar13 == 2)))))) &&
        (param_1[0x3ac] = param_1[0x3ac] - local_20, param_1[0x3ac] < 1)) &&
       (((*(byte *)(param_1 + 0x3ae) & 8) == 0 && (FUN_007b0ea0(1), bVar10 != false)))) {
      FUN_007b1840();
      uVar14 = uVar14 & 0xffffff9f;
    }
    if (((param_1[0x3af] == 3) && (param_1[0x3a7] = param_1[0x3a7] - local_1c, param_1[0x3a7] < 1))
       && ((*(byte *)(param_1 + 0x3ae) & 1) == 0)) {
      (**(code **)(*param_1 + 0x358))(400,0);
      *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 1;
      FUN_00ac8d80(8,1);
      FUN_00ac9420("_EFD04");
    }
    if (param_1[0x3af] == 0) {
      sVar11 = FUN_00dde2d0(0,1);
      FUN_00aa4080(sVar11 + 0x96,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      FUN_007b09c0(0x70006,0,0,0,0);
    }
  }
  if (*param_2 == 0x92) {
    uVar14 = uVar14 & 0xffffffbf | 0x20;
  }
  if ((param_1[0x916] == 0) &&
     ((*param_2 == 0x92 || ((param_1[0x8e7] != 0 && ((*(byte *)(param_2 + 0x23) & 2) != 0)))))) {
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
    uVar14 = uVar14 & 0xffffffbf | 0x20;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
    FUN_00ac8d80(1,1);
    FUN_00ac9420("_EFD06");
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x10;
    FUN_00ac8d80(4,1);
    FUN_00ac8d80(9,1);
    FUN_00ac9420("_EFD00");
    FUN_00ac9420("_EFD02");
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 8;
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(5,1);
    FUN_00ac9420("_EFD01");
    FUN_00ac9420("_EFD03");
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 1;
    FUN_00ac8d80(8,1);
    FUN_00ac9420("_EFD04");
    FUN_00ac8d80(2,1);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x60;
    FUN_00ac9420("_EFD07");
    FUN_00ac9420("_EFD08");
    FUN_007b6870();
    FUN_00ac8d40(1);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x80;
    if ((param_1[0x8e7] != 0) && ((*(byte *)(param_2 + 0x23) & 2) != 0)) {
      (**(code **)(*param_1 + 0x358))(399,0);
    }
    param_1[0x916] = 1;
  }
  (**(code **)(*param_1 + 0x30c))(local_1c,0);
  if ((param_1[0x8c4] == 0) && (iVar13 = FUN_00fdbc60(), param_1[0x21c] <= iVar13)) {
    if (param_1[0x128] == 0) {
      FUN_007b09c0(0x70004,0,0,0,0);
      param_1[0x8c4] = 1;
      iVar13 = FUN_00fdbc60();
      param_1[0x21c] = iVar13;
    }
    if (param_1[0x128] == 3) {
      FUN_007b09c0(0x70003,0,0,0,0);
      param_1[0x8c4] = 1;
      iVar13 = FUN_00fdbc60();
      param_1[0x21c] = iVar13;
    }
  }
  if (param_1[0x21c] < 1) {
    FUN_007b6c70(param_2);
    (**(code **)(*param_1 + 0x198))(bVar10,param_2,uVar14);
    param_1[0x139] = 1;
    FUN_007b09c0(0x80000,0,0,0,0);
    if (param_1[0x128] == 3) {
      FUN_007b09c0(0x80001,0,0,0,0);
    }
    if (param_1[0x128] == 4) {
      FUN_007b09c0(0x80003,0,0,0,0);
    }
    if (param_1[0x128] == 7) {
      FUN_007b09c0(0x80002,0,0,0,0);
    }
    return 0;
  }
  pcVar5 = *(code **)(*param_1 + 0x198);
  param_1[0x8d8] = param_1[0x8d8] + -1;
  (*pcVar5)(bVar10,param_2,uVar14);
  fVar17 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar17;
  if (((param_1[0x8e7] == 0) && (param_1[0x8e1] != 0)) && (*param_2 == 0x4f)) {
    FUN_007b09c0(0x20010,0,0,0,0);
  }
  (**(code **)(*param_1 + 0x1d8))();
  return 1;
}

// 007BA2B0  Emc080::vf44  size=370  [class]
void __fastcall Emc080::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00900ca0();
  FUN_00900ca0();
  FUN_00900ca0();
  if (*(int *)(param_1 + 0x12ac) != 0) {
    *(undefined4 *)(param_1 + 0x12b4) = 0;
    if (*(int *)(param_1 + 0x12b8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x12ac),0);
      *(undefined4 *)(param_1 + 0x12b8) = 0;
    }
    *(undefined4 *)(param_1 + 0x12ac) = 0;
    *(undefined4 *)(param_1 + 0x12b0) = 0;
  }
  RayCastManager::getWork(param_1 + 0xe94);
  RayCastManager::getWork(param_1 + 0x240c);
  RayCastManager::getWork(param_1 + 0x2414);
  RayCastManager::getWork(param_1 + 0x241c);
  RayCastManager::getWork(param_1 + 0x2424);
  FUN_007b0c40();
  FUN_007b0cd0();
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
  if (*(int *)(param_1 + 0x10e8) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x10e8);
  }
  FUN_00a9d8a0();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
    *(undefined4 *)(param_1 + 0x764) = 0;
  }
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(param_1);
  FUN_00a92a00();
  FUN_00a92ef0();
  BehaviorEmBase::vf44();
  return;
}

// 007BA430  FUN_007ba430  size=507  [between]
void __fastcall FUN_007ba430(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_007b60d0();
    if (iVar3 == 0) {
      if ((DAT_01bea060 & 0x2000000) == 0) {
        param_1[0x90e] = 0x41000000;
        param_1[0x90d] = 1;
        param_1[0x90f] = 0x43480000;
        param_1[0x910] = 0x40490fdb;
        if (((float)param_1[0x4c9] < 0.0) && (param_1[0x8e0] != 0)) {
          sVar2 = FUN_00dde2d0(0,1);
          if (sVar2 != 0) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
            param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007ba4e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
        }
        if ((param_1[0x36c] != 1) && (param_1[0x36c] != 0)) {
          if (30.25 < (float)param_1[0x2a4]) {
            FUN_007b09c0(0x10005,0,0,0,0);
          }
          iVar3 = FUN_00a90070(5);
          if (iVar3 != 0) {
            if (((float)param_1[0x2a4] <= 30.25) && ((float)param_1[0x2a8] < 1.0471976)) {
              sVar2 = FUN_00dde2d0(0,1);
              if (sVar2 == 0) {
                uVar4 = 0x80000000;
              }
              else {
                uVar4 = 0;
              }
              FUN_007b09c0(0x50001,uVar4,0,0,0);
            }
            if (((float)param_1[0x2a4] <= 12.25) && ((float)param_1[0x2a8] < 1.0471976)) {
              FUN_007b1af0();
            }
            if (((float)param_1[0x2a4] <= 12.25) && (1.0471976 < (float)param_1[0x2a8])) {
              FUN_007b09c0(0x50000,0,0,0,0);
            }
          }
          FUN_007b2120();
          return;
        }
        iVar3 = FUN_007b2120();
        if ((iVar3 == 0) &&
           (fVar1 = (float)param_1[0x249], !NAN(fVar1) && 90.0 < fVar1 != (fVar1 == 90.0))) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007ba52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
      else if ((float)param_1[0x2a3] <= 8.0) {
        FUN_007b09c0(0x1000b,0,0,0,0);
      }
    }
  }
  return;
}

// 007BA630  FUN_007ba630  size=512  [between]
void __fastcall FUN_007ba630(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  float fVar1;
  int iVar2;
  
  if ((param_1[0x187] != 0) && (iVar2 = FUN_007b60d0(), iVar2 == 0)) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      iVar2 = FUN_007b6be0(0x3f860a92,0x41000000);
      if (iVar2 == 0) {
        if (((float)param_1[0x4c9] < 0.0) && (param_1[0x8e0] != 0)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x47a] = 1;
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        if (param_1[0x8ca] == 0) {
          fVar1 = (float)param_1[0x244] + (float)param_1[0x248];
        }
        else {
          fVar1 = 0.0;
        }
        param_1[0x248] = (int)fVar1;
        if (180.0 < (float)param_1[0x248]) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007ba729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        iVar2 = FUN_00464910();
        if (((iVar2 != 0) && ((float)param_1[0x2a3] < 7.0)) && ((float)param_1[0x2a8] <= 1.0471976))
        {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007ba76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        param_1[0x90e] = 0x41000000;
        param_1[0x90d] = 1;
        param_1[0x90f] = 0x43480000;
        param_1[0x910] = 0x40490fdb;
        iVar2 = FUN_007b2120();
        if (((iVar2 == 0) && (param_1[0x187] < 4)) && (iVar2 = FUN_00a90070(5), iVar2 != 0)) {
          if (param_1[0x912] == 0) {
            if ((float)param_1[0x2a4] < 20.25) {
              if ((param_1[0x438] & 0x4000000U) != 0) {
                FUN_007b2760(0x50000,0);
                param_1[0x438] = param_1[0x438] ^ 0x4000000;
                return;
              }
              FUN_007b2760(0x50001,0);
              param_1[0x438] = param_1[0x438] ^ 0x4000000;
            }
          }
          else if (param_1[0x8ca] != 0) {
            FUN_007b09c0(0x50006,0,0,0,0);
            return;
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
      if ((float)param_1[0x2a3] <= 6.0) {
        FUN_007b09c0(0x1000b,0,0,0,0);
        return;
      }
    }
  }
  return;
}

// 007BA830  FUN_007ba830  size=589  [between]
void __fastcall FUN_007ba830(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x10,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
      FUN_007b6430(2,0);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x11,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      if (param_1[0x8ef] == 0) {
        piVar3 = param_1 + 0x8fc;
      }
      else {
        piVar3 = (int *)(param_1[0x2a1] + 0x40);
      }
      FUN_00a8e880(piVar3);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c0efa35,0);
    }
    break;
  case 4:
    FUN_00aa4080(0x12,0,0x3daaaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a90070(5);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_007b09c0(param_1[0x3b7],param_1[0x3b8],0,0,0);
      }
    }
  }
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    if (param_1[0x8ef] == 0) {
      piVar3 = param_1 + 0x8fc;
    }
    else {
      piVar3 = (int *)(param_1[0x2a1] + 0x40);
    }
    FUN_00a8e880(piVar3);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 007BAAA0  FUN_007baaa0  size=441  [between]
void __fastcall FUN_007baaa0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  float fVar1;
  int iVar2;
  
  if (param_1[0x187] != 0) {
    iVar2 = FUN_007b60d0();
    if (iVar2 == 0) {
      if ((DAT_01bea060 & 0x2000000) == 0) {
        iVar2 = FUN_007b6be0(0x3f860a92,0x41000000);
        if (iVar2 == 0) {
          if (param_1[0x8ca] == 0) {
            fVar1 = 0.0;
          }
          else {
            fVar1 = (float)param_1[0x244] + (float)param_1[0x248];
          }
          param_1[0x248] = (int)fVar1;
          if ((180.0 < (float)param_1[0x248]) && ((float)param_1[0x2a3] <= 8.0)) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
            param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007bab7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          if (((float)param_1[0x2a3] < 5.0) &&
             (((float)param_1[0x2a8] <= 1.0471976 && (param_1[0x8ef] != 0)))) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
            param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007babc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          param_1[0x90e] = 0x41000000;
          param_1[0x90d] = 1;
          param_1[0x90f] = 0x43480000;
          param_1[0x910] = 0x40490fdb;
          if (param_1[0x187] < 4) {
            iVar2 = FUN_00a90070(5);
            if ((iVar2 != 0) && ((float)param_1[0x2a4] < 20.25)) {
              if ((param_1[0x438] & 0x4000000U) != 0) {
                FUN_007b2760(0x50000,0);
                param_1[0x438] = param_1[0x438] ^ 0x4000000;
                return;
              }
              FUN_007b2760(0x50001,0);
              param_1[0x438] = param_1[0x438] ^ 0x4000000;
            }
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x34c))();
        if ((float)param_1[0x2a3] <= 6.0) {
          FUN_007b09c0(0x1000b,0,0,0,0);
          return;
        }
      }
    }
  }
  return;
}

// 007BAC60  FUN_007bac60  size=589  [between]
void __fastcall FUN_007bac60(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x10,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
      FUN_007b6430(2,0);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x11,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      if (param_1[0x8ef] == 0) {
        piVar3 = param_1 + 0x8fc;
      }
      else {
        piVar3 = (int *)(param_1[0x2a1] + 0x40);
      }
      FUN_00a8e880(piVar3);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
    }
    break;
  case 4:
    FUN_00aa4080(0x12,0,0x3daaaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a90070(5);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_007b09c0(param_1[0x3b7],param_1[0x3b8],0,0,0);
      }
    }
  }
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    if (param_1[0x8ef] == 0) {
      piVar3 = param_1 + 0x8fc;
    }
    else {
      piVar3 = (int *)(param_1[0x2a1] + 0x40);
    }
    FUN_00a8e880(piVar3);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 007BAED0  FUN_007baed0  size=487  [between]
void __fastcall FUN_007baed0(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  int iVar3;
  
  if ((param_1[0x187] != 0) && (iVar3 = FUN_007b60d0(), iVar3 == 0)) {
    param_1[0x90e] = 0x41000000;
    bVar2 = true;
    param_1[0x90f] = 0x43480000;
    param_1[0x90d] = 1;
    param_1[0x910] = 0x40490fdb;
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      if (((float)param_1[0x4c9] < 0.0) && (param_1[0x8e0] != 0)) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
        param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007baf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if ((param_1[0x47a] != 0) && ((*(byte *)(param_1 + 0x4b0) & 2) == 0)) {
        bVar2 = false;
      }
      if ((param_1[0x8e7] != 0) && (param_1[0x8e9] == 0)) {
        bVar2 = false;
      }
      iVar3 = FUN_00a90070(5);
      if ((iVar3 != 0) && (bVar2)) {
        if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
          if (param_1[0x47a] != 0) {
            param_1[0x4ad] = 0;
            param_1[0x4b8] = param_1[0x4b8] | 0x10;
            *(undefined1 *)((int)param_1 + 0x1275) = 10;
          }
          FUN_007b09c0(0x50001,0,0,0,0);
        }
        fVar1 = (float)param_1[0x2a4];
        if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && ((float)param_1[0x2a4] <= 144.0))
           && ((float)param_1[0x2a8] < 0.5235988)) {
          if (param_1[0x47a] != 0) {
            param_1[0x4ad] = 0;
            param_1[0x4b8] = param_1[0x4b8] | 0x10;
            *(undefined1 *)((int)param_1 + 0x1275) = 10;
          }
          FUN_007b1af0();
        }
        if (((float)param_1[0x2a4] < 49.0) &&
           (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464)))
        {
          if (param_1[0x47a] != 0) {
            param_1[0x4ad] = 0;
            param_1[0x4b8] = param_1[0x4b8] | 0x10;
            *(undefined1 *)((int)param_1 + 0x1275) = 10;
          }
          FUN_007b09c0(0x50000,0,0,0,0);
        }
      }
    }
  }
  return;
}

// 007BB0E0  FUN_007bb0e0  size=2030  [between]
void __fastcall FUN_007bb0e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  float unaff_EDI;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  if (param_1[0x187] == 0) {
    return;
  }
  iVar6 = FUN_007b60d0();
  if (iVar6 != 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    param_1[0x4ad] = 0;
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x4b8] = param_1[0x4b8] | 0x10;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    (*pcVar2)();
    if (6.0 < (float)param_1[0x2a3]) {
      return;
    }
    FUN_007b09c0(0x1000b,0,0,0,0);
    return;
  }
  iVar6 = FUN_007b2120();
  if (iVar6 != 0) {
    return;
  }
  bVar3 = true;
  if ((*(byte *)(param_1 + 0x12a) & 0x10) == 0) {
    param_1[0x90d] = 1;
    param_1[0x90e] = 0x41000000;
    param_1[0x90f] = 0x43480000;
    param_1[0x910] = 0x40490fdb;
  }
  if (((param_1[0x8e7] != 0) && (0x59 < param_1[0x8f9])) && (iVar6 = FUN_00a979d0(), iVar6 != 0)) {
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x10;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    FUN_007b09c0(0x10006,0,0,0,0);
    return;
  }
  if (*(char *)((int)param_1 + 0x1275) == '\0') {
    iVar6 = FUN_00932720();
    if (iVar6 == 0x410) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar6 = FUN_00a90070(0x3c);
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_007b09c0(0x50008,0,0,0,0);
    uVar7 = param_1[0x8c6] & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) {
      FUN_007b09c0(0x50009,0,0,0,0);
    }
    param_1[0x8c6] = param_1[0x8c6] + 1;
    if ((*(byte *)((int)param_1 + 0xeba) & 1) != 0) {
      FUN_007b09c0(0x50009,0,0,0,0);
    }
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_007b09c0(0x50009,0,0,0,0);
    }
    if (49.0 <= (float)param_1[0x2a4]) {
      return;
    }
    FUN_007b09c0(0x50000,0,0,0,0);
    sVar5 = FUN_00dde2d0(0,3);
    if (sVar5 != 1) {
      return;
    }
    if ((*(byte *)((int)param_1 + 0xeba) & 1) != 0) {
      return;
    }
    FUN_007b09c0(0x50006,0,0,0,0);
    return;
  }
  iVar6 = FUN_007b6be0(0x3f860a92,0x41000000);
  if (iVar6 != 0) {
    return;
  }
  D3DXMatrixInverse(local_50,0,param_1 + 4);
  D3DXVec3TransformNormal(&stack0xffffff94,param_1 + 0x47c,auStack_5c);
  if ((param_1[0x8e7] != 0) && (param_1[0x8e9] == 0)) {
    bVar3 = false;
  }
  iVar6 = FUN_00a90070(0xf);
  fVar8 = (float10)0;
  if (iVar6 != 0) {
    if ((*(byte *)(param_1 + 0x12a) & 0x10) == 0) {
      if (!bVar3) goto LAB_007bb678;
      if (((param_1[0x8ca] != 0) && (144.0 < (float)param_1[0x2a4])) &&
         (((float)param_1[0x2a8] < 1.0471976 &&
          ((param_1[0x5c0] == 0 && ((*(byte *)((int)param_1 + 0xeb9) & 1) == 0)))))) {
        fVar8 = (float10)FUN_007b6430(param_1[0x912] != 0,0);
        param_1[0x441] = 0x43b40000;
        if (param_1[0x8e7] != 0) {
          param_1[0x441] = 0x43900000;
        }
      }
    }
    if ((((bVar3) && (param_1[0x8ca] != 0)) && (64.0 < (float)param_1[0x2a4])) &&
       (((float)param_1[0x2a8] < 1.0471976 && ((float10)(float)param_1[0x441] < fVar8)))) {
      bVar3 = 0.2 <= unaff_EDI;
      if ((0.05 <= unaff_EDI) && ((param_1[0x489] != 0 && (fVar8 < (float10)(float)param_1[0x486])))
         ) {
        bVar3 = true;
      }
      sVar5 = FUN_00dde2d0(0,1);
      if ((sVar5 != 0) || (bVar3)) {
        if (((*(byte *)((int)param_1 + 0xeb9) & 1) == 0) &&
           ((*(byte *)(param_1 + 0x12a) & 0x10) == 0)) {
          FUN_007b6430(param_1[0x912] != 0,0);
          param_1[0x441] = 0x43700000;
          if (param_1[0x8e7] != 0) {
            param_1[0x441] = 0x43400000;
          }
        }
        else {
          iVar6 = FUN_00932720();
          if (iVar6 == 0x410) {
            iVar6 = FUN_00ac4780();
            if (iVar6 != 0) {
              iVar6 = FUN_00ac4780();
              if (iVar6 != 1) goto LAB_007bb600;
              uVar10 = 0x18;
              goto LAB_007bb602;
            }
            goto LAB_007bb607;
          }
          FUN_007b6430(1,0);
          param_1[0x441] = 0x43d20000;
          if (param_1[0x8e7] != 0) {
            param_1[0x441] = 0x43a80000;
          }
          if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
            param_1[0x441] = 0x43700000;
            FUN_007b6430(2,1);
          }
        }
      }
      else {
        iVar6 = FUN_00932720();
        if (iVar6 == 0x410) {
          iVar6 = FUN_00ac4780();
          if (iVar6 != 0) {
            iVar6 = FUN_00ac4780();
            if (iVar6 == 1) {
              uVar10 = 0x18;
            }
            else {
LAB_007bb600:
              uVar10 = 0x24;
            }
LAB_007bb602:
            FUN_007b14f0(uVar10,0x40000000);
          }
LAB_007bb607:
          FUN_007b14f0(0xffffffff,0xbf800000);
          param_1[0x441] = 0x43340000;
        }
        else {
          FUN_007b6430(1,0);
          param_1[0x441] = 0x43d20000;
          if (param_1[0x8e7] != 0) {
            param_1[0x441] = 0x43a80000;
          }
          if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
            FUN_007b6430(2,1);
            param_1[0x441] = 0x43700000;
          }
        }
      }
    }
  }
LAB_007bb678:
  iVar6 = FUN_00a90070(5);
  if (iVar6 == 0) {
    return;
  }
  fVar4 = 60.0;
  if ((float)param_1[0x49c] <= 60.0) {
    return;
  }
  if (param_1[0x913] != 0) {
    return;
  }
  if (param_1[0x8e7] == 0) {
    fVar4 = 50.0;
  }
  if ((*(byte *)(param_1 + 0x4b0) & 2) == 0) {
    if ((36.0 <= (float)param_1[0x2a4]) || (2.0943952 <= (float)param_1[0x2a8])) goto LAB_007bb740;
    fVar1 = (float)param_1[0x24a];
    param_1[0x24a] = (int)((float)param_1[0x244] + fVar1);
    if ((float)param_1[0x2a4] < 25.0) {
      param_1[0x24a] = (int)((float)param_1[0x244] + fVar1 + (float)param_1[0x244]);
    }
    param_1[0x4b1] = (int)((float)param_1[0x4b1] - (float)param_1[0x244]);
  }
  else {
    fVar4 = 40.0;
    if (param_1[0x8e7] == 0) {
      fVar4 = 30.0;
    }
    if ((49.0 <= (float)param_1[0x2a4]) || (2.0943952 <= (float)param_1[0x2a8])) {
LAB_007bb740:
      fVar1 = (float)param_1[0x24a] - ((float)param_1[0x244] + (float)param_1[0x244]);
      param_1[0x24a] = (int)fVar1;
      if (fVar1 < 0.0) {
        param_1[0x24a] = 0;
      }
    }
    else {
      fVar1 = (float)param_1[0x24a];
      param_1[0x24a] = (int)((float)param_1[0x244] + fVar1);
      if ((float)param_1[0x2a4] < 25.0) {
        param_1[0x24a] = (int)((float)param_1[0x244] + fVar1 + (float)param_1[0x244]);
      }
    }
  }
  if (90.0 < (float)param_1[0x24a]) {
    param_1[0x24a] = 0x42b40000;
  }
  if ((float)param_1[0x24a] <= fVar4) {
    return;
  }
  param_1[0x4ad] = 0;
  param_1[0x4b8] = param_1[0x4b8] | 0x10;
  *(undefined1 *)((int)param_1 + 0x1275) = 10;
  sVar5 = FUN_00dde2d0(0,1);
  if (sVar5 == 0) {
    FUN_007b09c0(0x50000,0,0,0,0);
    sVar5 = FUN_00dde2d0(0,1);
    if ((sVar5 != 1) || ((*(byte *)((int)param_1 + 0xeba) & 1) != 0)) goto LAB_007bb8a6;
    uVar9 = 0;
    uVar10 = 0x50006;
  }
  else {
    FUN_007b09c0(0x50001,0,0,0,0);
    sVar5 = FUN_00dde2d0(0,1);
    if (sVar5 == 0) goto LAB_007bb8a6;
    uVar9 = 0x80000000;
    uVar10 = 0x50001;
  }
  FUN_007b09c0(uVar10,uVar9,0,0,0);
LAB_007bb8a6:
  if ((float)param_1[0x2a4] <= 36.0) {
    return;
  }
  FUN_007b1af0();
  return;
}

// 007BBAB0  FUN_007bbab0  size=248  [between]
void __fastcall FUN_007bbab0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(10,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(1,"_taiki");
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_taiki",0);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x4c9] = 0x44610000;
  param_1[0x128] = 0;
  param_1[0x47a] = 0;
  param_1[0x8e0] = 0;
  (*pcVar1)();
  FUN_007b6940();
  return;
}

// 007BBBD0  FUN_007bbbd0  size=384  [between]
void __fastcall FUN_007bbbd0(int param_1)

{
  int iVar1;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [52];
  float fStack_1c;
  float fStack_18;
  
  *(undefined4 *)(param_1 + 0x2384) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    *(undefined4 *)(param_1 + 0x2438) = 0x40c00000;
    *(undefined4 *)(param_1 + 0x2434) = 1;
    *(undefined4 *)(param_1 + 0x243c) = 0x43960000;
    *(undefined4 *)(param_1 + 0x2440) = 0x40490fdb;
    iVar1 = FUN_00c81c60(0x1a);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x23a8) == 0)) {
      FUN_007b09c0(0xa0000,0,0,0,0);
      *(undefined4 *)(param_1 + 0x23a8) = 1;
      return;
    }
    local_5c = 0.0;
    local_58 = 10.0;
    iVar1 = FUN_00ac45b0();
    if (iVar1 != 0) {
      FUN_00ac45b0();
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        local_5c = *(float *)(iVar1 + 0x44);
        local_58 = *(float *)(iVar1 + 0x48);
        local_54 = *(undefined4 *)(iVar1 + 0x4c);
        D3DXMatrixInverse(local_50,0,param_1 + 0x10);
        D3DXVec3TransformNormal(&stack0xffffff94,&stack0xffffff94,&local_5c);
        local_5c = fStack_1c + local_5c;
        local_58 = fStack_18 + local_58;
      }
    }
    if ((local_58 <= 6.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
      FUN_007b09c0(0x2000d,0,0,0,0);
    }
    iVar1 = FUN_007b63f0();
    if ((iVar1 != 0) && (*(byte *)(param_1 + 0x2200) < 2)) {
      FUN_007b09c0(0x2000c,0,0,0,0);
    }
  }
  return;
}

// 007BBD50  FUN_007bbd50  size=748  [between]
void __fastcall FUN_007bbd50(int param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  undefined4 auStack_6c [2];
  undefined4 uStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 10.0;
  iVar1 = FUN_00ac45b0();
  if (iVar1 != 0) {
    FUN_00ac45b0();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      local_60 = *(float *)(iVar1 + 0x40);
      local_5c = *(float *)(iVar1 + 0x44);
      local_58 = *(float *)(iVar1 + 0x48);
      local_54 = *(undefined4 *)(iVar1 + 0x4c);
      D3DXMatrixInverse(local_50,0,param_1 + 0x10);
      D3DXVec3TransformNormal(auStack_6c,auStack_6c,&local_5c);
      local_60 = local_60 + fStack_20;
      local_5c = fStack_1c + local_5c;
      local_58 = fStack_18 + local_58;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined2 *)(param_1 + 0x2188) = 0;
    *(undefined1 *)(param_1 + 0x2180) = 0;
  case 1:
    FUN_00a9f4c0("TATE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,2,0,0xb,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0xc,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,9,0x3daaaaab,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 2:
    iVar1 = FUN_007b63b0();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1714) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 3;
    }
    break;
  case 3:
    FUN_00a9f4c0("TATE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,2,0,0xb,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0xc,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0xd,0x3daaaaab,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 4:
    iVar1 = FUN_007b63b0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x2438) = 0x40c00000;
      *(undefined4 *)(param_1 + 0x1714) = 1;
      *(undefined4 *)(param_1 + 0x2434) = 1;
      *(undefined4 *)(param_1 + 0x243c) = 0x43960000;
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0x2440) = 0x40490fdb;
    }
    break;
  default:
    goto switchD_007bbe04_default;
  }
  fVar3 = 0.0;
  if (6.0 < local_58) {
    fVar3 = 0.0;
  }
  else if (*(int *)(param_1 + 0xa84) != 0) {
    fVar3 = (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44)) * 0.58823526
    ;
    if (NAN(fVar3) || 2.0 < fVar3 == (fVar3 == 2.0)) {
      if (fVar3 < 0.0 != (fVar3 == 0.0)) {
        fVar3 = 0.0;
      }
    }
    else {
      fVar3 = 2.0;
    }
  }
  FUN_00a947e0(0,0,fVar3,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_007bbe04_default:
  fVar2 = (float10)FUN_00a581b0(auStack_6c,0,*(undefined4 *)(param_1 + 0x1c50));
  *(float *)(param_1 + 0x1c50) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_6c[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_64;
  return;
}

// 007BC050  FUN_007bc050  size=847  [between]
void __fastcall FUN_007bc050(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  int local_c [2];
  int local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0x41f00000;
    iVar3 = FUN_00ac4780();
    if (2 < iVar3) {
      param_1[0x248] = 0x41200000;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    param_1[0x248] = 0x42700000;
    iVar3 = FUN_00ac4780();
    pcVar2 = *(code **)(*param_1 + 0x358);
    if (iVar3 < 3) {
      (*pcVar2)(8,0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      param_1[0x248] = 0x41a00000;
      (*pcVar2)(9,0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_007bc12e;
  case 3:
LAB_007bc12e:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      if ((float)param_1[0x2a3] <= 196.0) {
        param_1[0x187] = 6;
      }
      iVar3 = FUN_00ac4780();
      if (2 < iVar3) {
        param_1[0x187] = 4;
        iVar3 = FUN_007b63f0();
        if ((iVar3 == 0) && (iVar3 = FUN_007b63b0(), iVar3 != 0)) {
          FUN_007b14f0(0xffffffff,0xbf800000);
        }
      }
    }
    goto switchD_007bc07a_default;
  case 4:
    FUN_00aa4080(0x59,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 2;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 0) {
      param_1[0x250] = 1;
    }
    iVar3 = FUN_00ac4780();
    if (2 < iVar3) {
      param_1[0x250] = 3;
    }
    goto LAB_007bc22e;
  case 5:
LAB_007bc22e:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_007b09c0(0x2000b,0,0,0,0);
      param_1[0x441] = 0x43700000;
    }
    goto switchD_007bc07a_default;
  case 6:
    param_1[0x187] = 7;
    FUN_007b14f0(0xffffffff,0xbf800000);
    param_1[0x441] = 0x44610000;
    param_1[0x248] = 0x43700000;
    goto LAB_007bc2b1;
  case 7:
LAB_007bc2b1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 60.0) && (iVar3 = FUN_007b6620(), iVar3 != 0)) {
      param_1[0x248] = 0x42700000;
    }
    if ((float)param_1[0x248] < 0.0) {
      FUN_007b09c0(0x2000b,0,0,0,0);
      param_1[0x441] = 0x43340000;
    }
  default:
    goto switchD_007bc07a_default;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_007bc07a_default:
  fVar4 = (float10)FUN_00a581b0(local_c,0,param_1[0x714]);
  param_1[0x714] = (int)(float)fVar4;
  param_1[0x14] = local_c[0];
  param_1[0x16] = local_4;
  iVar3 = FUN_00a8c760(8);
  if ((iVar3 != 0) && (param_1[0x250] != 0)) {
    FUN_007b14f0(0xffffffff,0xbf800000);
    param_1[0x250] = param_1[0x250] + -1;
  }
  return;
}

// 007BC5A0  FUN_007bc5a0  size=682  [between]
void __fastcall FUN_007bc5a0(int param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 auStack_78 [2];
  undefined4 uStack_70;
  float afStack_6c [2];
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_60 = 0.0;
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 2;
  local_5c = 0.0;
  local_58 = 10.0;
  iVar2 = FUN_00ac45b0();
  if (iVar2 != 0) {
    FUN_00ac45b0();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      local_60 = *(float *)(iVar2 + 0x40);
      local_5c = *(float *)(iVar2 + 0x44);
      local_58 = *(float *)(iVar2 + 0x48);
      local_54 = *(undefined4 *)(iVar2 + 0x4c);
      D3DXMatrixInverse(local_50,0,param_1 + 0x10);
      D3DXVec3TransformNormal(afStack_6c,afStack_6c,&local_5c);
      local_60 = fStack_20 + local_60;
      local_5c = fStack_1c + local_5c;
      local_58 = fStack_18 + local_58;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x81,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xec8) = 0x3e19999a;
    *(undefined4 *)(param_1 + 0x1100) = 0x43340000;
    *(undefined4 *)(param_1 + 0x1714) = 0;
    FUN_00a8d280();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007bc73f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_007b09c0(0x2000e,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1100) = 0x43340000;
    if (56.25 < *(float *)(param_1 + 0xa90)) {
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      FUN_007b6430(uVar4,0);
      *(undefined4 *)(param_1 + 0x1104) = 0x42700000;
    }
  }
LAB_007bc73f:
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    FUN_00a8dd20(*(undefined4 *)(param_1 + 0xec8));
    fVar3 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0xec8) = (float)(fVar3 * (float10)*(float *)(param_1 + 0xec8));
  }
  fVar3 = (float10)FUN_00a5e410(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                                *(undefined4 *)(param_1 + 0x58),auStack_78);
  *(float *)(param_1 + 0x1c50) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  *(undefined4 *)(param_1 + 0x1c54) = 0;
  FUN_00a585a0(afStack_6c,0,(float)fVar3);
  if ((float10)0 == (float10)fStack_64) {
    return;
  }
  fVar3 = (float10)fpatan((float10)afStack_6c[0],(float10)fStack_64);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)3.1415927));
  FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),(float)fVar3,
               0x3e99999a,0x3c0efa35,0x3e8efa35);
  return;
}

// 007BCEC0  FUN_007bcec0  size=632  [between]
void __fastcall FUN_007bcec0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xc0,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0xc1,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    break;
  case 4:
    FUN_00aa4080(0xc2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_007bceed_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_007bceed_default:
  if (param_1[0x2a1] != 0) {
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    iVar2 = FUN_00a8c760(10);
    if (((iVar2 != 0) && ((float)param_1[0x2a4] <= 25.0)) && ((float)param_1[0x2a8] <= 0.7853982)) {
      piVar1 = (int *)param_1[0x2a1];
      iVar2 = (**(code **)(*piVar1 + 0x14c))(0x4b,param_1[0x13c]);
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0x150))(0x4b,param_1[0x13c]);
        FUN_007b09c0(0x90000,0,0,0,0);
        FUN_0041fee0();
        FUN_009f8b60();
        FUN_00ad3be0(param_1[0x13c],&stack0xfffffcc0);
      }
    }
  }
  return;
}

// 007BD200  FUN_007bd200  size=232  [between]
void __fastcall FUN_007bd200(int *param_1)

{
  int iVar1;
  
  param_1[0x8c7] = 0x42700000;
  if (param_1[0x187] == 0) {
    FUN_00a8d280();
    FUN_00aa4080(0x79,0,0x3e2aaaab,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4ad] = 0;
    *(undefined1 *)((int)param_1 + 0x1275) = 0;
    param_1[0x4b8] = 0;
    param_1[0x47a] = 0;
    FUN_00940b10();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00940b10();
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x440] = 0x42700000;
    FUN_007b6be0(0x3f860a92,0x41000000);
  }
  return;
}

// 007BD2F0  FUN_007bd2f0  size=68  [between]
void __fastcall FUN_007bd2f0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (iVar1 = FUN_007b60d0(), iVar1 == 0)) {
    if ((*(int *)(param_1 + 0x61c) == 3) &&
       ((*(int *)(param_1 + 0x940) != 0 && (iVar1 = FUN_007b7550(), iVar1 != 0)))) {
      return;
    }
    if (3 < *(int *)(param_1 + 0x61c)) {
      FUN_007b7550();
      return;
    }
  }
  return;
}

// 007BD340  FUN_007bd340  size=891  [between]
void __fastcall FUN_007bd340(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x52,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 4;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    FUN_007b6510();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      if ((float)param_1[0x2a4] <= 36.0) {
        param_1[0x187] = 4;
      }
      fVar1 = (float)param_1[0x2a8];
      if (!NAN(fVar1) && 6400.0 < fVar1 != (fVar1 == 6400.0)) {
        param_1[0x187] = 4;
      }
    }
    break;
  case 2:
    FUN_00aa4080(0x53,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x5c5] = 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(8);
    if ((iVar3 != 0) && (FUN_007b14f0(0xffffffff,0xbf800000), (float)param_1[0x2a4] <= 36.0)) {
      param_1[0x187] = 4;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
      if (2 < param_1[0x250]) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      if ((float)param_1[0x2a4] <= 36.0) {
        param_1[0x187] = 4;
      }
      fVar1 = (float)param_1[0x2a8];
      if (!NAN(fVar1) && 6400.0 < fVar1 != (fVar1 == 6400.0)) {
        param_1[0x187] = 4;
      }
    }
    break;
  case 4:
    FUN_00aa4080(0x54,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5c5] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x440] = 0x43d20000;
      iVar3 = FUN_00a90070(5);
      if ((((iVar3 != 0) && (64.0 < (float)param_1[0x2a4])) && ((float)param_1[0x2a8] < 0.7853982))
         && ((*(byte *)(param_1 + 0x12a) & 1) == 0)) {
        FUN_007b09c0(0x50005,0,0,0,0);
      }
      if ((float)param_1[0x2a4] < 49.0) {
        pcVar2 = *(code **)(*param_1 + 0x34c);
        param_1[0x47a] = 1;
        (*pcVar2)();
      }
      if (1.0471976 < (float)param_1[0x2a8]) {
        pcVar2 = *(code **)(*param_1 + 0x34c);
        param_1[0x47a] = 1;
        (*pcVar2)();
      }
      if (((*(byte *)(param_1 + 0x12a) & 0x10) != 0) || (param_1[0x912] != 0)) {
        param_1[0x47a] = 1;
        FUN_007b09c0(0x1000d,0,0,0,0);
      }
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 007BD6E0  FUN_007bd6e0  size=68  [between]
void __fastcall FUN_007bd6e0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (iVar1 = FUN_007b60d0(), iVar1 == 0)) {
    if ((*(int *)(param_1 + 0x61c) == 3) &&
       ((*(int *)(param_1 + 0x940) != 0 && (iVar1 = FUN_007b7550(), iVar1 != 0)))) {
      return;
    }
    if (3 < *(int *)(param_1 + 0x61c)) {
      FUN_007b7550();
      return;
    }
  }
  return;
}

// 007BD730  FUN_007bd730  size=746  [between]
void __fastcall FUN_007bd730(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x52,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 4;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    FUN_007b6510();
    param_1[0x250] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x55,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43b40000;
    if (param_1[0x912] != 0) {
      param_1[0x248] = 0x43340000;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x42700000;
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
    FUN_007b6430(uVar4,1);
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x250] = 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x54,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5c5] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x440] = 0x43d20000;
      iVar3 = FUN_00a90070(5);
      if ((((iVar3 != 0) && (64.0 < (float)param_1[0x2a4])) && ((float)param_1[0x2a8] < 0.7853982))
         && ((*(byte *)(param_1 + 0x12a) & 1) == 0)) {
        FUN_007b09c0(0x50005,0,0,0,0);
      }
      if (((*(byte *)(param_1 + 0x12a) & 0x10) != 0) || (param_1[0x912] != 0)) {
        param_1[0x47a] = 1;
        FUN_007b09c0(0x1000d,0,0,0,0);
      }
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 007BDA90  FUN_007bda90  size=531  [between]
void __fastcall FUN_007bda90(int *param_1)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 3;
  param_1[0x20a] = 0x78;
  uVar2 = (uint)(param_1[0x3a6] != 0);
  if (param_1[0x3a6] == 6) {
    uVar2 = 2;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(*(undefined4 *)(&DAT_018831d0 + uVar2 * 0xc),0,0x3f800000,0x3f800000,
                 param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8e0] = 1;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_007b6430(2,0);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(*(undefined4 *)(&DAT_018831d4 + uVar2 * 0xc),0,0x3d088889,0x3f800000,param_1[0x434]
                 ,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      piVar1 = param_1 + 0x250;
      *piVar1 = *piVar1 + 1;
      if (-1 < *piVar1) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 4:
    FUN_00aa4080(*(undefined4 *)(&DAT_018831d8 + uVar2 * 0xc),0,0x3d088889,0x3f800000,
                 param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x8e0] != 0) {
        param_1[0x47a] = 1;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x4c9] = 0x44610000;
                    /* WARNING: Could not recover jumptable at 0x007bdc9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 007BDCC0  FUN_007bdcc0  size=507  [between]
void __fastcall FUN_007bdcc0(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(DAT_018831f4,0,0x3e088889,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4ad] = 0;
    param_1[0x4c9] = 0x44610000;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_007b6430(2,0);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(DAT_018831f8,0,0x3e088889,0x3f800000,param_1[0x434],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x47a] = 0;
    *(undefined1 *)((int)param_1 + 0x1275) = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(DAT_018831fc,0,0x3e088889,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x47a] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x4c9] = 0x44610000;
      param_1[0x4ca] = 0x42f00000;
                    /* WARNING: Could not recover jumptable at 0x007bdeb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 007BDEE0  FUN_007bdee0  size=489  [between]
void __fastcall FUN_007bdee0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  *(undefined2 *)(param_1 + 0x824) = 3;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x40900000,0x3fc00000,0x2d,9);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2320) == 0) {
    uVar2 = 0x40;
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar4 = 0xe8;
    if (*(int *)(param_1 + 0x2320) == 0) {
      uVar2 = 0;
      uVar4 = 0xea;
    }
    if (*(int *)(param_1 + 0x618) == 0x70004) {
      uVar2 = 0;
      uVar4 = 0xa7;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x11e8) = 0;
    *(undefined4 *)(param_1 + 0x12b4) = 0;
    *(uint *)(param_1 + 0x12e0) = *(uint *)(param_1 + 0x12e0) | 0x14;
    *(undefined1 *)(param_1 + 0x1275) = 10;
    *(undefined4 *)(param_1 + 0x4a0) = 4;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x920) = 0x44160000;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xe9,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      FUN_00cbc9c0(1,5);
      FUN_007b09c0(0x80002,0,0,0,0);
      return;
    }
  }
  return;
}

// 007BE0E0  FUN_007be0e0  size=496  [between]
void __fastcall FUN_007be0e0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x9b,0,0x3e088889,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8e0] = 1;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x9c,0,0x3d088889,0x3f800000,param_1[0x434],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    if ((param_1[0x8e7] != 0) && (param_1[0x3a0] == 0)) {
      param_1[0x248] = 0x42f00000;
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x9d,0,0x3d088889,0x3f800000,param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x8e0] != 0) {
        param_1[0x47a] = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x007be2cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007BE2F0  FUN_007be2f0  size=526  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007be2f0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  int local_8 [2];
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar1 = (uint)(param_1[0x3a6] != 0);
  if (param_1[0x3a6] == 6) {
    uVar1 = 2;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(*(undefined4 *)(&DAT_01883200 + uVar1 * 0xc),0,0x3f800000,0x3f800000,
                 param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8e0] = 1;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_007b6430(2,0);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(*(undefined4 *)(&DAT_01883204 + uVar1 * 0xc),0,0x3d088889,0x3f800000,param_1[0x434]
                 ,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_8[0] = 0;
    local_8[1] = 0;
    FUN_00ac8270(param_1 + 0x10,local_8,local_8 + 1);
    if (local_8[0] == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(*(undefined4 *)(&DAT_01883208 + uVar1 * 0xc),0,0x3d088889,0x3f800000,
                 param_1[0x434] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x8e0] != 0) {
        param_1[0x47a] = 1;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x4c9] = 0x44610000;
                    /* WARNING: Could not recover jumptable at 0x007be4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 007BE520  FUN_007be520  size=467  [between]
void __fastcall FUN_007be520(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
    param_1[0x1d9] = 0;
  }
  FUN_00a8c9b0(0,0,0x3f800000,0);
  if (((int *)param_1[0x1e6] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x1e6] + 4))(9), iVar1 != 0)) {
    if ((int *)param_1[0x1e6] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1e6] + 4))(9);
    }
    FUN_00eaa6e0(0x41200000,0);
  }
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ee],param_1[0x8ed]);
  }
  (**(code **)(*param_1 + 0x364))(0xffffffff);
  param_1[0x47a] = 0;
  param_1[0x4ad] = 0;
  param_1[0x4b8] = param_1[0x4b8] | 0x14;
  *(undefined1 *)((int)param_1 + 0x1275) = 10;
  param_1[0x139] = 1;
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa6e0(0x3f800000,0);
  if ((*(byte *)(param_1 + 0x860) & 4) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a7c8a0();
    }
    FUN_00cbbb50(uVar2);
    *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 4;
    *(undefined1 *)(param_1 + 0x862) = 0xff;
  }
  (**(code **)(*param_1 + 0x20))();
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
  }
  if (param_1[0x43a] != 0) {
    FUN_00916360();
  }
  FUN_00c4d1a0(param_1[0x13c],0);
  FUN_00c57120(param_1[0x13c]);
  piVar3 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(piVar3);
  param_1[0x1af] = 1;
  return;
}

// 007BE700  Emc080::vf19C  size=179  [class]
void __thiscall Emc080::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 007BE7C0  Emc080::vf34C  size=319  [class]
void __fastcall Emc080::vf34C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    FUN_007b09c0(0x10004,0,0,0,0);
    if ((DAT_01bea060 & 0x2000000) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x11e8) != 0) {
      FUN_007b09c0(0x1000d,0,0,0,0);
    }
    if ((*(byte *)(param_1 + 0x4a8) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x11e8) = 1;
      FUN_007b09c0(0x1000d,0,0,0,0);
    }
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    iVar1 = FUN_00a85630();
    if (iVar1 == 0) {
      uVar2 = 0x20003;
    }
    else {
      uVar2 = 0x20002;
    }
    FUN_007b09c0(uVar2,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_007b09c0(0x1000f,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 4) {
    FUN_007b09c0(0x80002,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 7) {
    FUN_007b09c0(0x20012,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 6) {
    FUN_007b6940();
    FUN_007b09c0(0x10015,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 8) {
    FUN_007b09c0(0x20012,0,0,0,0);
  }
  return;
}

// 007BE900  FUN_007be900  size=63  [between]
void __fastcall FUN_007be900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x2180) & 4) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a7c8a0();
    }
    FUN_00cbbb50(uVar2);
    *(byte *)(param_1 + 0x2180) = *(byte *)(param_1 + 0x2180) | 4;
    *(undefined1 *)(param_1 + 0x2188) = 0xff;
  }
  return;
}

// 007BE940  Emc080::vf284  size=179  [class]
undefined4 __thiscall
Emc080::vf284(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  uVar1 = FUN_007b6780(param_1 + 0xe94,param_5);
  iVar2 = FUN_009f8b40();
  local_50 = *param_3;
  local_4c = param_3[1];
  local_2c = iVar2 << 0x10 | 7;
  local_48 = param_3[2];
  local_60[1] = 0;
  local_44 = param_3[3];
  local_28 = 0x3ff001b;
  local_40 = *param_4;
  local_24 = 0;
  local_20 = 0;
  local_3c = param_4[1];
  local_1c = "Emc080View";
  local_38 = param_4[2];
  local_34 = param_4[3];
  local_30 = 0x3ecccccd;
  local_60[0] = param_1 + 0xe94;
  FUN_0090fb00(local_60);
  return uVar1;
}

// 007BEA00  FUN_007bea00  size=132  [between]
void __fastcall FUN_007bea00(int *param_1)

{
  code *pcVar1;
  
  FUN_007b6940();
  param_1[0x4c9] = 0x44610000;
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x128] = 0;
  param_1[0x47a] = 0;
  param_1[0x8e0] = 0;
  (*pcVar1)();
  if (param_1[0x8e7] == 0) {
    FUN_007b09c0(0x50002,0,0,0,0);
    if ((*(byte *)((int)param_1 + 0xeba) & 0x18) != 0) {
      FUN_007b09c0(0x50003,0,0,0,0);
    }
    param_1[0x8eb] = 1;
  }
  return;
}

// 007BEAB0  FUN_007beab0  size=756  [between]
void __fastcall FUN_007beab0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  *(int *)(param_1 + 0x23bc) = *(int *)(param_1 + 9000);
  if (*(int *)(param_1 + 9000) == 0) {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) & 0xfdffffff;
  }
  else {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x2000000;
  }
  if (*(int *)(param_1 + 0x23bc) == 0) {
    *(int *)(param_1 + 0x23e4) = *(int *)(param_1 + 0x23e4) + 1;
    *(undefined4 *)(param_1 + 0x23e0) = 0;
  }
  else {
    *(int *)(param_1 + 0x23e0) = *(int *)(param_1 + 0x23e0) + 1;
    *(undefined4 *)(param_1 + 0x23e4) = 0;
  }
  iVar9 = FUN_00a82d50();
  if (iVar9 == 4) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_007b7070();
      *(undefined4 *)(param_1 + 0x2418) = uVar10;
      goto LAB_007beb39;
    }
  }
  else {
LAB_007beb39:
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_007b7190();
      *(undefined4 *)(param_1 + 0x2410) = uVar10;
    }
  }
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x400000;
  iVar9 = FUN_00a82d50();
  if (((iVar9 == 4) || (iVar9 = FUN_00a82d50(), iVar9 == 3)) || (iVar9 = FUN_00a82d50(), iVar9 == 2)
     ) {
    iVar9 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x23c0) = *(undefined4 *)(iVar9 + 0x40);
    *(undefined4 *)(param_1 + 0x23c4) = *(undefined4 *)(iVar9 + 0x44);
    *(undefined4 *)(param_1 + 0x23c8) = *(undefined4 *)(iVar9 + 0x48);
    *(undefined4 *)(param_1 + 0x23cc) = *(undefined4 *)(iVar9 + 0x4c);
  }
  iVar9 = *(int *)(param_1 + 0xa84);
  pfVar1 = (float *)(param_1 + 0x23c0);
  *(undefined4 *)(param_1 + 0x23d0) = *(undefined4 *)(iVar9 + 0x40);
  pfVar2 = (float *)(param_1 + 0x23f0);
  *(undefined4 *)(param_1 + 0x23d4) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(param_1 + 0x23d8) = *(undefined4 *)(iVar9 + 0x48);
  *(undefined4 *)(param_1 + 0x23dc) = *(undefined4 *)(iVar9 + 0x4c);
  local_20 = *pfVar1;
  local_1c = *(float *)(param_1 + 0x23c4);
  local_18 = *(float *)(param_1 + 0x23c8);
  local_14 = *(undefined4 *)(param_1 + 0x23cc);
  *pfVar2 = *pfVar1;
  *(undefined4 *)(param_1 + 0x23f4) = *(undefined4 *)(param_1 + 0x23c4);
  *(undefined4 *)(param_1 + 0x23f8) = *(undefined4 *)(param_1 + 0x23c8);
  *(undefined4 *)(param_1 + 0x23fc) = *(undefined4 *)(param_1 + 0x23cc);
  *(undefined4 *)(param_1 + 0x2400) = 0;
  fVar3 = *(float *)(param_1 + 0x2408) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x2408) = fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)(param_1 + 0x2404) = 1;
    *(undefined4 *)(param_1 + 0x2408) = 0x42700000;
  }
  iVar9 = FUN_00a979d0();
  if ((iVar9 == 0) || (*(int *)(param_1 + 0x2404) != 0)) {
    FUN_00a8d330(param_1 + 0x40,pfVar1);
    *(undefined4 *)(param_1 + 0x2404) = 0;
  }
  iVar9 = FUN_00aa09c0(pfVar2,0x40200000,0);
  if ((iVar9 != 0) && (iVar9 = FUN_00a8d380(), iVar9 != 0)) {
    *(undefined4 *)(param_1 + 0x2400) = 1;
  }
  FUN_00a979f0(&local_2c);
  *pfVar2 = local_2c;
  *(undefined4 *)(param_1 + 0x23f4) = local_28;
  *(undefined4 *)(param_1 + 0x23f8) = local_24;
  *(undefined4 *)(param_1 + 0x23fc) = 0x3f800000;
  if (*(int *)(param_1 + 0x23bc) == 0) {
    if (*(int *)(param_1 + 0x2400) != 0) goto LAB_007bed85;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x2418);
    iVar11 = FUN_00a8d3d0(6);
    if (((iVar11 == 0) && (iVar9 == 0)) ||
       (fVar3 = *(float *)(param_1 + 0x40) - *pfVar2,
       fVar8 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x23f4),
       fVar7 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x23f8),
       fVar6 = *(float *)(param_1 + 0x40) - local_20, fVar5 = *(float *)(param_1 + 0x44) - local_1c,
       fVar4 = *(float *)(param_1 + 0x48) - local_18,
       fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 < fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7
       )) goto LAB_007bed85;
  }
  local_20 = *pfVar2;
  local_1c = *(float *)(param_1 + 0x23f4);
  local_18 = *(float *)(param_1 + 0x23f8);
  local_14 = *(undefined4 *)(param_1 + 0x23fc);
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffbfffff;
LAB_007bed85:
  FUN_00a8e880(&local_20);
  FUN_007b72b0(&local_20);
  return;
}

// 007BEDB0  FUN_007bedb0  size=871  [between]
void __fastcall FUN_007bedb0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 uStack_328;
  undefined4 local_320;
  undefined1 uStack_31c;
  undefined4 uStack_318;
  undefined1 local_30f;
  uint local_294;
  undefined4 local_220;
  undefined4 local_1c4;
  undefined4 local_1c0;
  float local_1a0;
  float local_19c;
  
  FUN_00a81330();
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    fVar1 = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1c0) = fVar1;
    if ((*(int *)(param_1 + 0x1bc) != 0) && (fVar1 <= 0.0)) {
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c8);
      iVar3 = FUN_00a12210((int)*(short *)(param_1 + 0x1c6));
      local_360 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                       *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                       *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
      local_35c = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                       *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                       *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
      fVar1 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                   *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                   *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
      local_368 = *(float *)(iVar3 + 0x28) / fVar1;
      local_364 = *(float *)(iVar3 + 0x38) / fVar1;
      fVar6 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar1));
      fVar7 = (float10)fpatan((float10)local_368,(float10)local_364);
      local_340 = (float)fVar7;
      local_33c = (float)fVar6;
      fVar6 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_35c,
                              (float10)*(float *)(iVar3 + 0x10) / (float10)local_360);
      local_338 = (float)fVar6;
      local_350 = *(undefined4 *)(iVar3 + 0x40);
      local_34c = *(undefined4 *)(iVar3 + 0x44);
      local_348 = *(undefined4 *)(iVar3 + 0x48);
      local_344 = *(undefined4 *)(iVar3 + 0x4c);
      local_360 = *(float *)(iVar2 + 0x2340);
      local_35c = *(float *)(iVar2 + 0x2344);
      local_358 = *(undefined4 *)(iVar2 + 0x2348);
      local_354 = *(undefined4 *)(iVar2 + 0x234c);
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      local_320 = 0x10d;
      local_220 = 0x33;
      puVar4 = (undefined4 *)FUN_009f8b60();
      local_1c0 = *puVar4;
      local_1c4 = 0x3f7fbe77;
      fVar6 = (float10)FUN_00dde300(0xbbab92a6,0x3bab92a6);
      local_1a0 = (float)fVar6;
      fVar6 = (float10)FUN_00dde300(0xbbab92a6,0x3bab92a6);
      local_19c = (float)fVar6;
      if (*(int *)(iVar2 + 9000) == 0) {
        fVar6 = (float10)FUN_00dde300(0xbbab92a6,0x3d567750);
        local_1a0 = (float)fVar6;
      }
      local_294 = local_294 | 0x10000000;
      local_30f = 3;
      local_368 = (float)FUN_00ac84d0(8);
      uVar5 = FUN_00fdbc60();
      uStack_36c = (**(code **)(**(int **)(iVar2 + 0x754) + 0xc))(8);
      uStack_36c = (**(code **)(**(int **)(iVar2 + 0x754) + 0x14))(8);
      uStack_31c = (**(code **)(**(int **)(iVar2 + 0x754) + 0x1c))(8);
      uStack_328 = uVar5;
      uStack_318 = FUN_00a81330();
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      FUN_00416e30(&local_35c,&uStack_36c,&local_34c,0x40000000,0x43480000);
      uVar5 = FUN_00a81330(&local_33c);
      FUN_00ae2bc0(uVar5);
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
    }
    if (*(int *)(param_1 + 0x1bc) == 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 2;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
    if (*(int *)(param_1 + 0x1d4) == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 2;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
  }
  return;
}

// 007BF120  FUN_007bf120  size=860  [between]
void __fastcall FUN_007bf120(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uStack_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  undefined4 local_368;
  undefined4 local_364;
  float local_360;
  float local_35c;
  float local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_320;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  undefined4 uStack_318;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  
  FUN_00a81330();
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    fVar1 = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1c0) = fVar1;
    if (((*(int *)(param_1 + 0x1bc) != 0) && (fVar1 <= 0.0)) &&
       (fVar1 = *(float *)(iVar2 + 0xa8c), !NAN(fVar1) && 9.0 < fVar1 != (fVar1 == 9.0))) {
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c8);
      iVar3 = FUN_00a12210((int)*(short *)(param_1 + 0x1c6));
      local_370 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                       *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                       *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
      local_36c = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                       *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                       *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
      fVar1 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                   *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                   *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
      local_378 = *(float *)(iVar3 + 0x28) / fVar1;
      local_374 = *(float *)(iVar3 + 0x38) / fVar1;
      fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar1));
      fVar8 = (float10)fpatan((float10)local_378,(float10)local_374);
      local_360 = (float)fVar8;
      local_35c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_36c,
                              (float10)*(float *)(iVar3 + 0x10) / (float10)local_370);
      local_358 = (float)fVar7;
      local_370 = *(float *)(iVar3 + 0x40);
      local_36c = *(float *)(iVar3 + 0x44);
      local_368 = *(undefined4 *)(iVar3 + 0x48);
      local_364 = *(undefined4 *)(iVar3 + 0x4c);
      local_350 = *(undefined4 *)(iVar2 + 0x2340);
      local_34c = *(undefined4 *)(iVar2 + 0x2344);
      local_348 = *(undefined4 *)(iVar2 + 0x2348);
      local_344 = *(undefined4 *)(iVar2 + 0x234c);
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      puVar5 = &local_340;
      local_340 = 0;
      local_33c = 0;
      uVar9 = 0;
      local_338 = 0;
      local_320 = 0x10e;
      local_21c = 0x1e;
      uVar4 = FUN_00ac45b0(0,puVar5);
      FUN_0043fed0(uVar4,uVar9,puVar5);
      local_32c = 0x30800;
      local_220 = 0x32;
      puVar5 = (undefined4 *)FUN_009f8b60();
      local_1c0 = *puVar5;
      local_378 = (float)FUN_00ac84d0(9);
      uVar4 = FUN_00fdbc60();
      uStack_37c = (**(code **)(**(int **)(iVar2 + 0x754) + 0xc))(9);
      uStack_37c = (**(code **)(**(int **)(iVar2 + 0x754) + 0x14))(9);
      uStack_31c = (**(code **)(**(int **)(iVar2 + 0x754) + 0x1c))(9);
      uStack_31b = 7;
      uStack_328 = uVar4;
      uStack_318 = FUN_00a81330();
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      uVar4 = 0x3fc00000;
      if (*(int *)(iVar2 + 0x2384) == 0) {
        uVar4 = 0x3f666666;
      }
      if (*(int *)(param_1 + 0x1b4) == 0) {
        pfVar6 = &local_35c;
        uVar4 = 0x40000000;
      }
      else {
        pfVar6 = (float *)(param_1 + 0x210);
      }
      FUN_0043fe30(&uStack_37c,pfVar6,&local_36c,uVar4,0x43480000);
      fVar1 = *(float *)(iVar2 + 0xa8c);
      if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
        uVar4 = FUN_00a81330(&local_33c);
        FUN_00ad3be0(uVar4);
      }
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
    }
    if (*(int *)(param_1 + 0x1d4) == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 2;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
  }
  return;
}

// 007BF480  FUN_007bf480  size=2222  [between]
void __fastcall FUN_007bf480(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  float fStack_43c;
  float fStack_438;
  undefined4 local_434;
  undefined4 uStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  undefined4 auStack_41c [7];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348 [2];
  undefined4 local_340;
  uint local_33c [4];
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_320;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  undefined4 uStack_318;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined2 uStack_1c2;
  undefined4 local_1c0;
  
  FUN_00a81330();
  iVar5 = FUN_00a7c8a0();
  iVar9 = 0;
  if (iVar5 == 0) {
    return;
  }
  auStack_41c[3] = 0xbecbc6a8;
  auStack_41c[4] = 0x3e8d4fdf;
  auStack_41c[5] = 0x3ecccccd;
  local_400 = 0xbe3645a2;
  local_3fc = 0x3e8d4fdf;
  local_3f8 = 0x3ecccccd;
  local_3f0 = 0xbe92f1aa;
  local_3ec = 0x3e4dd2f2;
  local_3e8 = 0x3ecccccd;
  local_3e0 = 0xbecbc6a8;
  local_3dc = 0x3e09374c;
  local_3cc = 0x3e09374c;
  local_3d8 = 0x3ecccccd;
  local_3c8 = 0x3ecccccd;
  local_3d0 = 0xbe3645a2;
  local_3c0 = 0xbe92f1aa;
  local_3bc = 0x3d810625;
  local_3b8 = 0x3ecccccd;
  local_3b0 = 0xbecbc6a8;
  local_3ac = 0xbba3d70a;
  local_39c = 0xbba3d70a;
  local_3a8 = 0x3ecccccd;
  local_398 = 0x3ecccccd;
  local_3a0 = 0xbe3645a2;
  local_390 = 0xbe92f1aa;
  local_38c = 0xbd9db22d;
  local_388 = 0x3ecccccd;
  local_380 = 0xbecbc6a8;
  local_37c = 0xbe178d50;
  local_36c = 0xbe178d50;
  local_378 = 0x3ecccccd;
  local_368 = 0x3ecccccd;
  local_370 = 0xbe3645a2;
  local_360 = 0xbe92f1aa;
  local_35c = 0xbe5c28f6;
  local_358 = 0x3ecccccd;
  local_350 = 0xbecbc6a8;
  local_34c = 0xbe90e560;
  local_33c[0] = 0xbe90e560;
  local_348[0] = 0x3ecccccd;
  local_33c[1] = 0x3ecccccd;
  local_340 = 0xbe3645a2;
  iVar6 = FUN_00ac45b0();
  if (iVar6 != 0) {
    FUN_00ac45b0();
    FUN_00a7c8a0();
  }
  switch(*(undefined4 *)(param_1 + 0x1a4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1a4) = 1;
    uVar8 = 0x3f800000;
    if (*(int *)(param_1 + 0x1b4) == 0) {
      uVar8 = 0x41200000;
    }
    FUN_00aa4080(0x68,5,0,0x3f800000,0x8040200,0,uVar8);
    do {
      *(undefined4 *)(param_1 + 0x1c0) = 0x40400000;
      uVar8 = FUN_00a81330(*(undefined2 *)(param_1 + 0x1c6),auStack_41c + (short)iVar9 * 4 + 3);
      uVar8 = FUN_00ad0020(0x30803,uVar8);
      FUN_007b6540(iVar9,uVar8);
      iVar9 = iVar9 + 1;
    } while ((ushort)iVar9 < 0xe);
    iVar9 = FUN_00a12210(0x43);
    if (iVar9 != 0) {
      *(undefined4 *)(iVar9 + 0x90) = 0xbe32b8c2;
      if (*(int *)(iVar5 + 0x4a0) == 3) {
        *(undefined4 *)(iVar9 + 0x90) = 0x3db2b8c2;
      }
      if (*(int *)(iVar5 + 0x4a0) != 1) goto switchD_007bf661_caseD_1;
      *(undefined4 *)(iVar9 + 0x90) = 0x3db2b8c2;
    }
    break;
  case 1:
switchD_007bf661_caseD_1:
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1a4) = 3;
    *(float *)(param_1 + 0x1a8) =
         (float)*(int *)(param_1 + 0x1cc) * *(float *)(param_1 + 0x1c8) + 10.0 + 30.0;
    *(undefined4 *)(param_1 + 0x1c0) = 0x41200000;
    goto LAB_007bf795;
  case 3:
LAB_007bf795:
    fVar2 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1a8) = fVar2;
    if (fVar2 < 0.0) {
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    }
    fVar2 = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1c0) = fVar2;
    if (*(int *)(param_1 + 0x1d4) < 0) {
      return;
    }
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c8);
    iVar9 = FUN_007b0c10(*(int *)(param_1 + 0x1d4) % 0xe);
    FUN_0041fee0();
    local_320 = 0x110;
    local_21c = 0x1f;
    local_32c = 0x30803;
    local_220 = 0x34;
    puVar7 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar7;
    local_434 = FUN_00ac84d0(10);
    local_434 = FUN_00fdbc60();
    if (*(int *)(param_1 + 0x1b4) == 0) {
      local_434 = 500;
    }
    uStack_45c = (**(code **)(**(int **)(iVar5 + 0x754) + 0xc))(10);
    uStack_45c = (**(code **)(**(int **)(iVar5 + 0x754) + 0x14))(10);
    uStack_31c = (**(code **)(**(int **)(iVar5 + 0x754) + 0x1c))(10);
    uStack_328 = uStack_440;
    uStack_31b = 5;
    uStack_318 = FUN_00a81330();
    uVar8 = FUN_00a7c7f0();
    FUN_00a7c960(uVar8);
    if (*(int *)(param_1 + 0x1b4) != 0) {
      puVar7 = &uStack_45c;
      uStack_45c = 0;
      uStack_458 = 0;
      uVar12 = 0;
      uStack_454 = 0;
      uVar8 = FUN_00ac45b0(0,puVar7);
      FUN_0043fed0(uVar8,uVar12,puVar7);
    }
    uStack_1c2 = *(undefined2 *)(param_1 + 0x1c6);
    iVar6 = *(int *)(param_1 + 0x1d4) % 0xe;
    local_33c[0] = local_33c[0] | 4;
    uStack_1ec = auStack_41c[iVar6 * 4];
    uStack_1e8 = auStack_41c[iVar6 * 4 + 1];
    uStack_1e4 = auStack_41c[iVar6 * 4 + 2];
    uStack_1e0 = auStack_41c[iVar6 * 4 + 3];
    if (iVar9 != 0) {
      FUN_00a7c950();
      fStack_43c = SQRT(*(float *)(iVar9 + 0x10) * *(float *)(iVar9 + 0x10) +
                        *(float *)(iVar9 + 0x14) * *(float *)(iVar9 + 0x14) +
                        *(float *)(iVar9 + 0x18) * *(float *)(iVar9 + 0x18));
      fStack_438 = SQRT(*(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20) +
                        *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                        *(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28));
      fVar4 = SQRT(*(float *)(iVar9 + 0x38) * *(float *)(iVar9 + 0x38) +
                   *(float *)(iVar9 + 0x34) * *(float *)(iVar9 + 0x34) +
                   *(float *)(iVar9 + 0x30) * *(float *)(iVar9 + 0x30));
      fVar2 = *(float *)(iVar9 + 0x28);
      fVar3 = *(float *)(iVar9 + 0x38);
      fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar9 + 0x18) / fVar4));
      fVar11 = (float10)fpatan((float10)(fVar2 / fVar4),(float10)(fVar3 / fVar4));
      fStack_42c = (float)fVar11;
      fStack_428 = (float)fVar10;
      fVar10 = (float10)fpatan((float10)*(float *)(iVar9 + 0x14) / (float10)fStack_438,
                               (float10)*(float *)(iVar9 + 0x10) / (float10)fStack_43c);
      fStack_424 = (float)fVar10;
      fStack_43c = *(float *)(iVar9 + 0x40);
      fStack_438 = *(float *)(iVar9 + 0x44);
      local_434 = *(undefined4 *)(iVar9 + 0x48);
      uStack_430 = *(undefined4 *)(iVar9 + 0x4c);
      uStack_45c = *(undefined4 *)(iVar5 + 0x2340);
      uStack_458 = *(undefined4 *)(iVar5 + 0x2344);
      uStack_454 = *(undefined4 *)(iVar5 + 0x2348);
      uStack_450 = *(undefined4 *)(iVar5 + 0x234c);
      FUN_00416e30(&fStack_43c,&uStack_45c,&fStack_42c,0x3f4ccccd,0x43480000);
      FUN_00ad00b0(local_33c);
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
      return;
    }
    iVar9 = FUN_00a12210((int)*(short *)(param_1 + 0x1c6));
    pfVar1 = (float *)(iVar9 + 0x10);
    fStack_43c = SQRT(*(float *)(iVar9 + 0x14) * *(float *)(iVar9 + 0x14) + *pfVar1 * *pfVar1 +
                      *(float *)(iVar9 + 0x18) * *(float *)(iVar9 + 0x18));
    fStack_438 = SQRT(*(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20) +
                      *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                      *(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28));
    fVar4 = SQRT(*(float *)(iVar9 + 0x38) * *(float *)(iVar9 + 0x38) +
                 *(float *)(iVar9 + 0x34) * *(float *)(iVar9 + 0x34) +
                 *(float *)(iVar9 + 0x30) * *(float *)(iVar9 + 0x30));
    fVar2 = *(float *)(iVar9 + 0x28);
    fVar3 = *(float *)(iVar9 + 0x38);
    fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar9 + 0x18) / fVar4));
    fVar11 = (float10)fpatan((float10)(fVar2 / fVar4),(float10)(fVar3 / fVar4));
    iVar6 = (int)*(short *)(param_1 + 0x1d4) % 0xe;
    fStack_42c = (float)fVar11;
    fStack_428 = (float)fVar10;
    fVar10 = (float10)fpatan((float10)*(float *)(iVar9 + 0x14) / (float10)fStack_438,
                             (float10)*pfVar1 / (float10)fStack_43c);
    fStack_424 = (float)fVar10;
    uStack_45c = auStack_41c[iVar6 * 4];
    uStack_458 = auStack_41c[iVar6 * 4 + 1];
    uStack_454 = auStack_41c[iVar6 * 4 + 2];
    uStack_450 = auStack_41c[iVar6 * 4 + 3];
    D3DXVec3TransformNormal(&uStack_45c,&uStack_45c,pfVar1);
    uStack_448 = *(undefined4 *)(iVar5 + 0x2340);
    uStack_444 = *(undefined4 *)(iVar5 + 0x2344);
    uStack_440 = *(undefined4 *)(iVar5 + 0x2348);
    fStack_43c = *(float *)(iVar5 + 0x234c);
    FUN_00416e30(&stack0xfffffb98,&uStack_448,&fStack_438,0x3f4ccccd,0x43480000);
    uVar8 = FUN_00a81330(local_348);
    FUN_00ad3be0(uVar8);
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
    return;
  case 4:
    FUN_00aa4080(0x6a,5,0,0x3f800000,0x8040200,0,0x3f800000);
    *(undefined4 *)(param_1 + 0x1a8) = 0x43340000;
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    *(undefined4 *)(param_1 + 0x1b4) = 1;
    goto LAB_007bfce2;
  case 5:
LAB_007bfce2:
    fVar10 = (float10)FUN_00a95680(5);
    if ((float10)0 != fVar10) {
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined2 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 2;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      FUN_007b0c40();
      return;
    }
  default:
    goto switchD_007bf661_default;
  }
  fVar10 = (float10)FUN_00a95680(5);
  if ((float10)0 != fVar10) {
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    return;
  }
switchD_007bf661_default:
  return;
}

// 007BFD50  FUN_007bfd50  size=1958  [between]
void __fastcall FUN_007bfd50(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  float fStack_38c;
  float fStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined1 auStack_378 [4];
  undefined4 uStack_374;
  int iStack_370;
  float fStack_36c;
  float local_368;
  float local_364;
  undefined4 auStack_35c [7];
  undefined4 local_340;
  uint local_33c [4];
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_320;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  undefined4 uStack_318;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  short sStack_1c2;
  undefined4 local_1c0;
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  
  FUN_00a81330();
  iVar5 = FUN_00a7c8a0();
  iVar10 = 0;
  if (iVar5 == 0) {
    return;
  }
  auStack_35c[3] = 0x3e978d50;
  auStack_35c[4] = 0x3e45a1cb;
  auStack_35c[5] = 0xbd1374bc;
  local_340 = 0x3e978d50;
  local_33c[0] = 0xbe48b439;
  local_33c[1] = 0xbd1374bc;
  iVar6 = FUN_00ac45b0();
  if (iVar6 == 0) {
    local_364 = 0.0;
  }
  else {
    FUN_00ac45b0();
    local_364 = (float)FUN_00a7c8a0();
  }
  switch(*(undefined4 *)(param_1 + 0x1a4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1a4) = 1;
    FUN_00aa4080(100,4,0,0x3f800000,0x8040200,0,0x3f800000);
    do {
      *(undefined4 *)(param_1 + 0x1c0) = 0x40400000;
      uVar9 = FUN_00a81330(*(undefined2 *)(param_1 + 0x1c6),auStack_35c + (short)iVar10 * 4 + 3);
      uVar9 = FUN_00ad0020(0x30802,uVar9);
      FUN_007b65b0(iVar10,uVar9);
      iVar10 = iVar10 + 1;
    } while ((ushort)iVar10 < 2);
    iVar10 = FUN_00a12210(0x3a);
    if (iVar10 != 0) {
      *(undefined4 *)(iVar10 + 0x90) = 0xbe32b8c2;
      if (*(int *)(iVar5 + 0x4a0) == 3) {
        *(undefined4 *)(iVar10 + 0x90) = 0;
      }
      if (*(int *)(iVar5 + 0x4a0) == 1) {
        *(undefined4 *)(iVar10 + 0x90) = 0x3db2b8c2;
      }
    }
    break;
  case 1:
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1a4) = 3;
    *(float *)(param_1 + 0x1a8) =
         (float)*(int *)(param_1 + 0x1cc) * *(float *)(param_1 + 0x1c8) + 10.0 + 30.0;
    *(undefined4 *)(param_1 + 0x1c0) = 0x41200000;
    goto LAB_007bff09;
  case 3:
LAB_007bff09:
    fVar2 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1a8) = fVar2;
    if (fVar2 < 0.0) {
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    }
    fVar2 = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1c0) = fVar2;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      return;
    }
    if (*(int *)(param_1 + 0x1d4) < 1) {
      return;
    }
    uVar7 = (int)*(short *)(param_1 + 0x1d4) & 0x80000001;
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c8);
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    iVar10 = FUN_007b0ca0(uVar7);
    FUN_0041fee0();
    local_320 = 0x10f;
    local_21c = 0x20;
    local_32c = 0x30802;
    local_220 = 0x36;
    puVar8 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar8;
    local_368 = (float)FUN_00ac84d0(0xb);
    local_368 = (float)FUN_00fdbc60();
    uStack_39c = (**(code **)(**(int **)(iVar5 + 0x754) + 0xc))(0xb);
    uStack_39c = (**(code **)(**(int **)(iVar5 + 0x754) + 0x14))(0xb);
    uStack_31c = (**(code **)(**(int **)(iVar5 + 0x754) + 0x1c))(0xb);
    uStack_328 = uStack_374;
    uStack_31b = 7;
    uStack_318 = FUN_00a81330();
    uVar9 = FUN_00a7c7f0();
    FUN_00a7c960(uVar9);
    if (iStack_370 != 0) {
      puVar8 = &uStack_39c;
      uStack_39c = 0;
      uStack_398 = 0;
      uVar13 = 0;
      uStack_394 = 0;
      uVar9 = FUN_00ac45b0(0,puVar8);
      FUN_0043fed0(uVar9,uVar13,puVar8);
    }
    local_33c[0] = local_33c[0] | 4;
    uVar7 = *(uint *)(param_1 + 0x1d4) & 0x80000001;
    sStack_1c2 = *(short *)(param_1 + 0x1c6);
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    uStack_1ec = auStack_35c[uVar7 * 4];
    uStack_5c = 0;
    uStack_18c = 0x187;
    uStack_1e8 = auStack_35c[uVar7 * 4 + 1];
    uStack_188 = 0x1e;
    uStack_180 = 0;
    uStack_1e4 = auStack_35c[uVar7 * 4 + 2];
    uStack_184 = 0;
    uStack_1e0 = auStack_35c[uVar7 * 4 + 3];
    uStack_19c = 1;
    uStack_17c = 0x700;
    uStack_7c = 0x40000000;
    uStack_70 = 1;
    uStack_6c = 0x3f800000;
    if (iVar10 == 0) {
      iVar10 = FUN_00a12210((int)*(short *)(param_1 + 0x1c6));
      pfVar1 = (float *)(iVar10 + 0x10);
      fStack_38c = SQRT(*(float *)(iVar10 + 0x14) * *(float *)(iVar10 + 0x14) + *pfVar1 * *pfVar1 +
                        *(float *)(iVar10 + 0x18) * *(float *)(iVar10 + 0x18));
      fStack_388 = SQRT(*(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20) +
                        *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                        *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28));
      fVar4 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                   *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                   *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
      fVar2 = *(float *)(iVar10 + 0x28);
      fVar3 = *(float *)(iVar10 + 0x38);
      fVar11 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar4));
      fVar12 = (float10)fpatan((float10)(fVar2 / fVar4),(float10)(fVar3 / fVar4));
      uVar7 = (int)*(short *)(param_1 + 0x1d4) & 0x80000001;
      fStack_36c = (float)fVar12;
      local_368 = (float)fVar11;
      fVar11 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) / (float10)fStack_388,
                               (float10)*pfVar1 / (float10)fStack_38c);
      local_364 = (float)fVar11;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
      }
      uStack_39c = auStack_35c[uVar7 * 4];
      uStack_398 = auStack_35c[uVar7 * 4 + 1];
      uStack_394 = auStack_35c[uVar7 * 4 + 2];
      uStack_390 = auStack_35c[uVar7 * 4 + 3];
      D3DXVec3TransformNormal(&uStack_39c,&uStack_39c,pfVar1);
      uStack_398 = *(undefined4 *)(iVar5 + 0x2340);
      uStack_394 = *(undefined4 *)(iVar5 + 0x2344);
      uStack_390 = *(undefined4 *)(iVar5 + 0x2348);
      fStack_38c = *(float *)(iVar5 + 0x234c);
      FUN_00416e30(&stack0xfffffc58,&uStack_398,auStack_378,0x3c23d70a,0x43c80000);
      uVar9 = FUN_00a81330(auStack_35c + 5);
      FUN_00ad3be0(uVar9);
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
      return;
    }
    FUN_00a7c950();
    fStack_38c = SQRT(*(float *)(iVar10 + 0x14) * *(float *)(iVar10 + 0x14) +
                      *(float *)(iVar10 + 0x10) * *(float *)(iVar10 + 0x10) +
                      *(float *)(iVar10 + 0x18) * *(float *)(iVar10 + 0x18));
    fStack_388 = SQRT(*(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20) +
                      *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                      *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28));
    fVar4 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                 *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                 *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
    fVar2 = *(float *)(iVar10 + 0x28);
    fVar3 = *(float *)(iVar10 + 0x38);
    fVar11 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar4));
    fVar12 = (float10)fpatan((float10)(fVar2 / fVar4),(float10)(fVar3 / fVar4));
    fStack_36c = (float)fVar12;
    local_368 = (float)fVar11;
    fVar11 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) / (float10)fStack_388,
                             (float10)*(float *)(iVar10 + 0x10) / (float10)fStack_38c);
    local_364 = (float)fVar11;
    fStack_38c = *(float *)(iVar10 + 0x40);
    fStack_388 = *(float *)(iVar10 + 0x44);
    uStack_384 = *(undefined4 *)(iVar10 + 0x48);
    uStack_380 = *(undefined4 *)(iVar10 + 0x4c);
    uStack_39c = *(undefined4 *)(iVar5 + 0x2340);
    uStack_398 = *(undefined4 *)(iVar5 + 0x2344);
    uStack_394 = *(undefined4 *)(iVar5 + 0x2348);
    uStack_390 = *(undefined4 *)(iVar5 + 0x234c);
    FUN_00416e30(&fStack_38c,&uStack_39c,&fStack_36c,0x3c23d70a,0x43c80000);
    FUN_00ad00b0(local_33c);
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
    return;
  case 4:
    FUN_00aa4080(0x66,4,0,0x3f800000,0x8040200,0,0x3f800000);
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    *(undefined4 *)(param_1 + 0x1a8) = 0x43340000;
    goto LAB_007c04ae;
  case 5:
LAB_007c04ae:
    fVar11 = (float10)FUN_00a95680(4);
    if ((float10)0 != fVar11) {
      *(undefined2 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 2;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      FUN_007b0cd0();
      return;
    }
  default:
    goto switchD_007bfde5_default;
  }
  fVar11 = (float10)FUN_00a95680(4);
  if ((float10)0 != fVar11) {
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    return;
  }
switchD_007bfde5_default:
  return;
}

// 007C0510  FUN_007c0510  size=337  [between]
/* WARNING: Removing unreachable block (ram,0x007c0576) */

undefined4 __thiscall
FUN_007c0510(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [16];
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  local_74 = param_1 + 100;
  uVar3 = 0;
  local_78 = param_1;
  iVar1 = FUN_00907640(local_74,&local_7c,local_70);
  if (iVar1 != 0) {
    uVar3 = 1;
    FUN_0112bcf0();
    if (0 < *(int *)(local_7c + 0x14)) {
      iVar1 = *(int *)(*(int *)(local_7c + 0x10) + 0x28);
      iVar2 = 0;
      iVar4 = 0;
      if (*(char *)(iVar1 + 0x18) == '\x01') {
        iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        if (*(char *)(iVar1 + 0x18) == '\x02') {
          iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
        }
        else {
          iVar4 = 0;
        }
      }
      if (iVar2 != 0) {
        FUN_008f7780(iVar2);
      }
      if (iVar4 != 0) {
        FUN_008f7780(iVar4);
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  iVar1 = FUN_009f8b40();
  local_60[0] = local_74;
  local_50 = *param_3;
  local_4c = param_3[1];
  local_2c = iVar1 << 0x10 | 7;
  local_48 = param_3[2];
  local_60[1] = 0;
  local_44 = param_3[3];
  local_28 = 0x3ff001b;
  local_40 = *param_4;
  local_24 = 0;
  local_20 = 0;
  local_3c = param_4[1];
  local_1c = "Emc080 LockMaker";
  local_38 = param_4[2];
  local_34 = param_4[3];
  local_30 = 0x3ecccccd;
  FUN_0090fb00(local_60);
  return uVar3;
}

// 007C0670  FUN_007c0670  size=112  [between]
void __thiscall FUN_007c0670(int *param_1,int *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0x20;
  puVar2 = (undefined2 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_3 + 6);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_3 + 10);
    *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(param_3 + 0xe);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 007C06E0  FUN_007c06e0  size=601  [between]
void __thiscall FUN_007c06e0(int *param_1,int *param_2,int *param_3,undefined2 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  puVar2 = (undefined4 *)(param_1[3] * 0x20 + param_1[1]);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
  }
  param_1[3] = param_1[3] + 1;
  iVar5 = *param_3 - param_1[1] >> 5;
  iVar6 = param_1[3] + -2;
  if (iVar5 <= iVar6) {
    if (3 < (iVar6 - iVar5) + 1) {
      iVar7 = ((iVar6 - iVar5) - 3U >> 2) + 1;
      iVar3 = iVar6 * 0x20;
      iVar6 = iVar6 + iVar7 * -4;
      do {
        iVar4 = param_1[1];
        *(undefined2 *)(iVar4 + 0x20 + iVar3) = *(undefined2 *)(iVar4 + iVar3);
        *(undefined2 *)(iVar4 + 0x22 + iVar3) = *(undefined2 *)(iVar4 + 2 + iVar3);
        iVar4 = iVar4 + iVar3;
        *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar4 + 4);
        *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar4 + 8);
        *(undefined1 *)(iVar4 + 0x2c) = *(undefined1 *)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(iVar4 + 0x1c);
        iVar4 = param_1[1];
        *(undefined2 *)(iVar4 + iVar3) = *(undefined2 *)(iVar4 + -0x20 + iVar3);
        *(undefined2 *)(iVar4 + 2 + iVar3) = *(undefined2 *)(iVar4 + -0x1e + iVar3);
        iVar4 = iVar4 + iVar3;
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + -0x1c);
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar4 + -0x18);
        *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(iVar4 + -0x14);
        *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + -0x10);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar4 + -0xc);
        *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar4 + -8);
        *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar4 + -4);
        iVar4 = param_1[1];
        *(undefined2 *)(iVar3 + -0x20 + iVar4) = *(undefined2 *)(iVar3 + -0x40 + iVar4);
        *(undefined2 *)(iVar3 + -0x1e + iVar4) = *(undefined2 *)(iVar3 + -0x3e + iVar4);
        *(undefined4 *)(iVar3 + -0x1c + iVar4) = *(undefined4 *)(iVar3 + -0x3c + iVar4);
        *(undefined4 *)(iVar3 + -0x18 + iVar4) = *(undefined4 *)(iVar3 + -0x38 + iVar4);
        *(undefined1 *)(iVar3 + -0x14 + iVar4) = *(undefined1 *)(iVar3 + -0x34 + iVar4);
        puVar2 = (undefined4 *)(iVar3 + -0x30 + iVar4);
        puVar1 = (undefined4 *)(iVar3 + -0x10 + iVar4);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1[3] = puVar2[3];
        iVar4 = param_1[1];
        *(undefined2 *)(iVar3 + -0x40 + iVar4) = *(undefined2 *)(iVar3 + -0x60 + iVar4);
        *(undefined2 *)(iVar3 + -0x3e + iVar4) = *(undefined2 *)(iVar3 + -0x5e + iVar4);
        *(undefined4 *)(iVar3 + -0x3c + iVar4) = *(undefined4 *)(iVar3 + -0x5c + iVar4);
        *(undefined4 *)(iVar3 + -0x38 + iVar4) = *(undefined4 *)(iVar3 + -0x58 + iVar4);
        *(undefined1 *)(iVar3 + -0x34 + iVar4) = *(undefined1 *)(iVar3 + -0x54 + iVar4);
        puVar2 = (undefined4 *)(iVar3 + -0x50 + iVar4);
        puVar1 = (undefined4 *)(iVar3 + -0x30 + iVar4);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        iVar3 = iVar3 + -0x80;
        puVar1[3] = puVar2[3];
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (iVar5 <= iVar6) {
      iVar3 = iVar6 << 5;
      iVar6 = (iVar6 - iVar5) + 1;
      do {
        iVar7 = iVar3 + param_1[1];
        *(undefined2 *)(iVar7 + 0x20) = *(undefined2 *)(iVar3 + param_1[1]);
        *(undefined2 *)(iVar7 + 0x22) = *(undefined2 *)(iVar7 + 2);
        *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar7 + 4);
        *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar7 + 8);
        *(undefined1 *)(iVar7 + 0x2c) = *(undefined1 *)(iVar7 + 0xc);
        *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar7 + 0x10);
        iVar3 = iVar3 + -0x20;
        iVar6 = iVar6 + -1;
        *(undefined4 *)(iVar7 + 0x34) = *(undefined4 *)(iVar7 + 0x14);
        *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar7 + 0x18);
        *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)(iVar7 + 0x1c);
      } while (iVar6 != 0);
    }
  }
  iVar6 = param_1[1];
  iVar5 = iVar5 * 0x20;
  *(undefined2 *)(iVar6 + iVar5) = *param_4;
  iVar6 = iVar6 + iVar5;
  *(undefined2 *)(iVar6 + 2) = param_4[1];
  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_4 + 4);
  *(undefined1 *)(iVar6 + 0xc) = *(undefined1 *)(param_4 + 6);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_4 + 10);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_4 + 0xe);
  *param_2 = param_1[1] + iVar5;
  return;
}

// 007C0950  Emc080::vf32C  size=901  [class]
undefined4 __fastcall Emc080::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int local_270;
  undefined1 local_260 [144];
  uint uStack_1d0;
  
  param_1[0x475] = 0;
  param_1[0x8d9] = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(3);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  FUN_00ac2080(4);
  FUN_00ac2080(5);
  FUN_00ac2080(6);
  FUN_00ac2080(7);
  FUN_00ac2080(8);
  iVar5 = FUN_00a8ef10();
  if ((iVar5 == 0) && (param_1[0x128] != 5)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    piVar8 = (int *)param_1[0x19f];
    piVar7 = piVar8 + param_1[0x1a1] * 0x54;
    FUN_00445db0();
    FUN_004105d0();
    local_270 = -1;
    bVar4 = false;
    if (piVar8 != piVar7) {
      do {
        iVar5 = piVar8[1];
        if (*piVar8 != 0x147) {
          if (*piVar8 == 0x1b0) {
            (**(code **)(*param_1 + 0x370))(piVar8);
          }
          else {
            iVar1 = param_1[0x3af];
            bVar3 = iVar1 == 4 || iVar1 == 9;
            if ((iVar1 == 5) || (iVar1 == 6)) {
              bVar3 = true;
            }
            if ((iVar1 == 7) || (iVar1 == 8)) {
              bVar3 = true;
            }
            if ((local_270 <= iVar5) || (bVar3)) {
              FUN_0043e160(piVar8);
              FUN_00448f50(piVar8);
              bVar4 = true;
              local_270 = iVar5;
              if (bVar3) goto LAB_007c0aec;
            }
          }
        }
        piVar8 = piVar8 + 0x54;
      } while (piVar8 != piVar7);
      if (bVar4) {
LAB_007c0aec:
        iVar5 = FUN_00a8f040(local_260);
        if (iVar5 == 0) {
          if ((*(byte *)(param_1 + 0x36d) & 8) == 0) {
            *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 1;
          }
          if ((((uStack_1d0 & 0x20000) != 0) && (param_1[0x916] == 0)) && (param_1[0x8e7] != 0)) {
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
            FUN_00ac8d80(3,1);
            FUN_00ac9420("_EFD05");
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
            FUN_00ac8d80(1,1);
            FUN_00ac9420("_EFD06");
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x10;
            FUN_00ac8d80(4,1);
            FUN_00ac8d80(9,1);
            FUN_00ac9420("_EFD00");
            FUN_00ac9420("_EFD02");
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 8;
            FUN_00ac8d80(6,1);
            FUN_00ac8d80(5,1);
            FUN_00ac9420("_EFD01");
            FUN_00ac9420("_EFD03");
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 1;
            FUN_00ac8d80(8,1);
            FUN_00ac9420("_EFD04");
            FUN_00ac8d80(2,1);
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x60;
            FUN_00ac9420("_EFD07");
            FUN_00ac9420("_EFD08");
            FUN_00ac8d40(1);
            pcVar2 = *(code **)(*param_1 + 0x358);
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x80;
            param_1[0x916] = 1;
            (*pcVar2)(399,0);
          }
          iVar5 = FUN_007b1b70(local_260);
          if (iVar5 == 0) {
            if (param_1[0x8c3] == 0) {
              if (param_1[0x139] == 0) {
                uVar6 = FUN_007b8ca0(local_260);
              }
              else {
                uVar6 = FUN_007b1d30(local_260);
              }
              if (param_1[0x286] != 0) {
                LeaveCriticalSection(lpCriticalSection);
              }
              return uVar6;
            }
            FUN_007b1cb0(local_260);
          }
        }
      }
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 007C0CE0  FUN_007c0ce0  size=493  [between]
void __fastcall FUN_007c0ce0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(3);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  FUN_00ac2080(5);
  FUN_00ac2080(6);
  FUN_00ac2080(7);
  FUN_00ac2080(8);
  iVar5 = param_1[0x19f];
  iVar3 = param_1[0x1a1] * 0x150 + iVar5;
  do {
    if (iVar5 == iVar3) {
      return;
    }
    iVar1 = *(int *)(iVar5 + 4);
    bVar2 = false;
    local_8 = 0;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      local_8 = FUN_00a7c8a0();
    }
    iVar4 = FUN_00ac8170(local_8);
    if (iVar4 != 0) {
      iVar4 = *(int *)(iVar5 + 0x128);
      param_1[0x3af] = iVar4;
      if (param_1[0x128] == 0) {
        if (iVar4 == 1) {
          param_1[0x3a9] = param_1[0x3a9] - iVar1;
          bVar2 = true;
          if ((param_1[0x3a9] < 1) && ((*(byte *)(param_1 + 0x3ae) & 4) == 0)) {
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
          }
        }
        if (param_1[0x3af] == 2) {
          param_1[0x3aa] = param_1[0x3aa] - iVar1;
          bVar2 = true;
          if ((param_1[0x3aa] < 1) && ((*(byte *)(param_1 + 0x3ae) & 2) == 0)) {
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
          }
        }
        iVar4 = param_1[0x3af];
        if ((((iVar4 == 5) || (iVar4 == 6)) || (iVar4 == 4)) || (iVar4 == 0)) {
          param_1[0x3ab] = param_1[0x3ab] - iVar1;
          bVar2 = true;
          if ((param_1[0x3ab] < 1) && ((*(byte *)(param_1 + 0x3ae) & 0x10) == 0)) {
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 0x10;
          }
        }
        iVar4 = param_1[0x3af];
        if (((iVar4 == 7) || (iVar4 == 8)) || ((iVar4 == 4 || (iVar4 == 0)))) {
          param_1[0x3ac] = param_1[0x3ac] - iVar1;
          bVar2 = true;
          if ((param_1[0x3ac] < 1) && ((*(byte *)(param_1 + 0x3ae) & 8) == 0)) {
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 8;
          }
        }
        if (param_1[0x3af] == 3) {
          param_1[0x3a7] = param_1[0x3a7] - iVar1;
          if ((param_1[0x3a7] < 1) && ((*(byte *)(param_1 + 0x3ae) & 1) == 0)) {
            *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 1;
          }
        }
        else if (!bVar2) goto LAB_007c0eb5;
        (**(code **)(*param_1 + 0x198))(local_8,iVar5,1);
      }
    }
LAB_007c0eb5:
    iVar5 = iVar5 + 0x150;
  } while( true );
}

// 007C0ED0  Emc080::vf40  size=7386  [class]
void __fastcall Emc080::vf40(int *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  float10 fVar10;
  float fStack_2e4;
  undefined4 uStack_2e0;
  char *pcStack_2dc;
  uint **ppuStack_2d8;
  undefined1 *puStack_2d4;
  int *piStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  int iStack_2c4;
  int *piStack_2c0;
  undefined1 *puStack_2bc;
  undefined4 *puStack_2b8;
  int *piStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  undefined4 uStack_2a8;
  int *piStack_2a4;
  int *piStack_2a0;
  uint *local_29c;
  int *local_298;
  undefined4 *local_294;
  int *local_290;
  int *local_28c;
  int *piStack_288;
  int *piStack_284;
  int aiStack_274 [3];
  int *local_268;
  undefined4 local_264;
  int local_260 [4];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int local_244;
  int iStack_228;
  int local_224 [11];
  int iStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 local_150 [112];
  uint auStack_e0 [36];
  undefined4 uStack_50;
  
  piStack_284 = (int *)0x7c0ee6;
  iVar3 = EmBaseDLC::vf40();
  if (iVar3 == 0) {
    return;
  }
  if (param_1[300] == 0x2c080) {
    piStack_284 = (int *)0x1647ff0;
    piStack_288 = (int *)0x2c08e;
LAB_007c0f17:
    local_28c = (int *)0x7c0f1e;
    FUN_00acf600();
  }
  else if (param_1[300] == 0x2c081) {
    piStack_284 = (int *)0x1647ffc;
    piStack_288 = (int *)0x2c08f;
    goto LAB_007c0f17;
  }
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x7c0f28;
  FUN_00ac8e10();
  piStack_284 = (int *)0x1;
  piStack_288 = (int *)0x1;
  local_28c = (int *)0x7c0f33;
  FUN_00ac8eb0();
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x7c0f3b;
  FUN_00ac8d40();
  param_1[0x20b] = 4;
  piStack_284 = (int *)0x7c0f4c;
  FUN_00a929d0();
  param_1[0x8e7] = 0;
  param_1[0x8e8] = 0;
  if (param_1[300] == 0x2c080) {
    param_1[0x8e8] = 1;
  }
  piStack_284 = (int *)0x15;
  param_1[0x8e0] = 0;
  piStack_288 = (int *)0x7c0f7d;
  fVar10 = (float10)FUN_00ac8570();
  param_1[0x8c5] = (int)(float)fVar10;
  piStack_284 = (int *)0x17;
  piStack_288 = (int *)0x7c0f8c;
  FUN_00ac8570();
  piStack_284 = (int *)0x7c0f91;
  uVar4 = FUN_00fdbc60();
  piStack_284 = (int *)0x18;
  piStack_288 = (int *)0x7c0fa0;
  local_264 = uVar4;
  FUN_00ac8570();
  piStack_284 = (int *)0x7c0fa5;
  local_224[4] = FUN_00fdbc60();
  piStack_284 = (int *)0x19;
  piStack_288 = (int *)0x7c0fb2;
  FUN_00ac8570();
  piStack_284 = (int *)0x7c0fb7;
  local_244 = FUN_00fdbc60();
  piStack_284 = (int *)0x1a;
  piStack_288 = (int *)0x7c0fc4;
  FUN_00ac8570();
  piStack_284 = (int *)0x7c0fc9;
  local_268 = (int *)FUN_00fdbc60();
  piStack_284 = (int *)0x1b;
  piStack_288 = (int *)0x7c0fd6;
  FUN_00ac8570();
  piStack_284 = (int *)0x7c0fdb;
  local_224[5] = FUN_00fdbc60();
  piStack_284 = (int *)0x1c;
  piStack_288 = (int *)0x7c0fe8;
  FUN_00ac8570();
  piStack_284 = (int *)0x7c0fed;
  local_224[2] = FUN_00fdbc60();
  piStack_284 = (int *)0x1d;
  piStack_288 = (int *)0x7c0ffa;
  FUN_00ac8570();
  piStack_284 = (int *)0x7c0fff;
  local_224[3] = FUN_00fdbc60();
  piStack_284 = (int *)0x27;
  piStack_288 = (int *)0x7c100c;
  fVar10 = (float10)FUN_00ac8570();
  param_1[0x8c9] = (int)(float)fVar10;
  if ((param_1[300] == 0x2c081) || ((*(byte *)(param_1 + 0x12a) & 2) != 0)) {
    piStack_284 = (int *)0x1f;
    param_1[0x8e7] = 1;
    param_1[0x8e0] = 1;
    piStack_288 = (int *)0x7c1045;
    FUN_00ac8570();
    piStack_284 = (int *)0x7c104a;
    uVar4 = FUN_00fdbc60();
    piStack_284 = (int *)0x20;
    piStack_288 = (int *)0x7c1059;
    local_264 = uVar4;
    FUN_00ac8570();
    piStack_284 = (int *)0x7c105e;
    local_224[4] = FUN_00fdbc60();
    piStack_284 = (int *)0x21;
    piStack_288 = (int *)0x7c106b;
    FUN_00ac8570();
    piStack_284 = (int *)0x7c1070;
    local_244 = FUN_00fdbc60();
    piStack_284 = (int *)0x22;
    piStack_288 = (int *)0x7c107d;
    FUN_00ac8570();
    piStack_284 = (int *)0x7c1082;
    local_268 = (int *)FUN_00fdbc60();
    piStack_284 = (int *)0x23;
    piStack_288 = (int *)0x7c108f;
    FUN_00ac8570();
    piStack_284 = (int *)0x7c1094;
    local_224[5] = FUN_00fdbc60();
    piStack_284 = (int *)0x24;
    piStack_288 = (int *)0x7c10a1;
    FUN_00ac8570();
    piStack_284 = (int *)0x7c10a6;
    local_224[2] = FUN_00fdbc60();
    piStack_284 = (int *)0x25;
    piStack_288 = (int *)0x7c10b3;
    FUN_00ac8570();
    piStack_284 = (int *)0x7c10b8;
    local_224[3] = FUN_00fdbc60();
  }
  if (param_1[0x128] == 7) {
    piStack_284 = (int *)0x7c10d4;
    uVar4 = FUN_00fdbc60();
  }
  local_290 = (int *)param_1[0x13c];
  piStack_284 = (int *)0xffffffff;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x4;
  local_294 = (undefined4 *)0x7c10ed;
  FUN_00a82ac0();
  param_1[0x369] = 1;
  piStack_288 = (int *)0x7c10ff;
  piStack_284 = (int *)uVar4;
  FUN_00a8edf0();
  param_1[0x3b1] = local_224[4];
  param_1[0x438] = 0;
  param_1[0x439] = 0;
  param_1[0x440] = 0;
  param_1[0x441] = 0;
  param_1[0x3a9] = local_224[5];
  param_1[0x3b0] = 0;
  param_1[0x3aa] = local_224[2];
  param_1[0x8dd] = -0x40800000;
  piStack_284 = (int *)0x2;
  param_1[0x8df] = -0x40800000;
  param_1[0x3a7] = local_224[3];
  piStack_288 = (int *)0x0;
  param_1[0x471] = 0;
  param_1[0x472] = 0;
  param_1[0x3a8] = 0x28;
  param_1[0x3ab] = local_244;
  param_1[0x3ac] = (int)local_268;
  *(undefined2 *)(param_1 + 0x3ae) = 0;
  *(undefined1 *)((int)param_1 + 0xeba) = 0;
  param_1[0x3ad] = 0x50;
  param_1[0x8c4] = 0;
  param_1[0x435] = 0;
  local_28c = (int *)0x7c11b3;
  sVar2 = FUN_00dde2d0();
  param_1[0x90a] = 0;
  param_1[0x8ec] = 0x41200000;
  param_1[0x8d8] = sVar2 + 3;
  param_1[0x4c8] = 6;
  param_1[0x8d9] = 0;
  param_1[0x8da] = 0;
  param_1[0x8db] = 0;
  param_1[0x8c6] = 0;
  param_1[0x8e5] = 0;
  param_1[0x8e6] = 0;
  param_1[0x8ea] = 0;
  param_1[0x8c3] = 0;
  param_1[0x4cb] = 0;
  param_1[0x4cc] = 0;
  param_1[0x8eb] = 0;
  param_1[0x916] = 0;
  param_1[0x8ca] = 0;
  param_1[0x911] = 0;
  if ((param_1[0x12a] & 0x100U) != 0) {
    param_1[0x911] = 1;
  }
  param_1[0x8ef] = 0;
  param_1[0x8f8] = 0;
  param_1[0x8f9] = 0;
  param_1[0x912] = 0;
  param_1[0x913] = 0;
  param_1[0x47a] = 0;
  param_1[0x8e2] = 0;
  param_1[0x47c] = 0;
  param_1[0x47d] = 0;
  piStack_284 = &DAT_01b7bd48;
  param_1[0x47e] = 0;
  piStack_288 = (int *)0x10;
  param_1[0x480] = 0;
  param_1[0x481] = 0;
  param_1[0x482] = 0;
  param_1[0x484] = 0;
  param_1[0x485] = 0;
  param_1[0x486] = 0;
  param_1[0x48c] = param_1[0x14];
  param_1[0x48d] = param_1[0x15];
  param_1[0x48e] = param_1[0x16];
  param_1[0x48f] = param_1[0x17];
  local_28c = (int *)0x7c12dd;
  FUN_007b1920();
  param_1[0x4b8] = 0;
  param_1[0x491] = 0;
  param_1[0x49a] = 0;
  param_1[0x4c0] = 0;
  *(undefined1 *)((int)param_1 + 0x1275) = 0;
  param_1[0x4c1] = 0;
  param_1[0x4b9] = 0x3e3851ec;
  param_1[0x4be] = 0x3c0a9bd0;
  param_1[0x4bf] = -0x446c8b43;
  param_1[0x4bc] = 0x3b9374bd;
  param_1[0x4bd] = 0x3bebedfb;
  param_1[0x4ba] = 0x3e99999a;
  param_1[0x4c4] = 0;
  param_1[0x4c5] = 0;
  param_1[0x4c6] = 0;
  piStack_284 = (int *)param_1[0x13c];
  param_1[0x4c2] = 0;
  param_1[0x90c] = 0;
  param_1[0x87e] = 0;
  param_1[0x8e4] = 0;
  *(undefined2 *)(param_1 + 0x90b) = 0;
  param_1[0x90d] = 0;
  param_1[0x8ee] = 0;
  param_1[0x8ed] = 1;
  piStack_288 = (int *)0x7c13a3;
  iVar3 = FUN_00c5def0();
  param_1[0x25c] = iVar3;
  param_1[0x1b1] = 6;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  piStack_284 = (int *)0x1;
  param_1[0x1b6] = 0;
  piStack_288 = local_224 + 6;
  param_1[0x1b7] = local_224[0];
  param_1[0x1b9] = 6;
  param_1[0x1b8] = 6;
  param_1[0x1ba] = 0x3fc00000;
  local_224[6] = 0;
  local_224[7] = 0;
  local_224[8] = 0;
  local_28c = (int *)0x0;
  local_290 = (int *)0x3fc00000;
  local_294 = (undefined4 *)0x3fb33333;
  local_298 = (int *)0x6;
  local_29c = (uint *)0x7c1420;
  local_298 = (int *)FUN_00a12210();
  local_29c = (uint *)0x7c142c;
  FUN_00a889e0();
  piStack_284 = (int *)0x1;
  piStack_288 = local_224 + 6;
  local_28c = (int *)0xbf000000;
  local_290 = (int *)0x3f000000;
  local_294 = (undefined4 *)0x3fb33333;
  local_298 = (int *)0x23;
  local_29c = (uint *)0x7c145c;
  local_298 = (int *)FUN_00a12210();
  local_29c = (uint *)0x7c1468;
  FUN_00a889e0();
  piStack_284 = (int *)0x1;
  piStack_288 = local_224 + 6;
  local_28c = (int *)0xbf000000;
  local_290 = (int *)0x3f000000;
  local_294 = (undefined4 *)0x3fb33333;
  local_298 = (int *)0x2d;
  local_29c = (uint *)0x7c1498;
  local_298 = (int *)FUN_00a12210();
  local_29c = (uint *)0x7c14a4;
  FUN_00a889e0();
  piStack_284 = (int *)0x7c14b0;
  FUN_00405230();
  piStack_2a0 = (int *)param_1[0x13c];
  local_260[0] = 0;
  piStack_284 = (int *)0x0;
  local_260[1] = 0;
  piStack_288 = (int *)0x1;
  local_260[2] = 0x3f99999a;
  local_298 = aiStack_274 + 5;
  local_28c = (int *)0x40400000;
  local_290 = (int *)0x42f00000;
  local_294 = (undefined4 *)0x0;
  local_29c = (uint *)0x0;
  piStack_2a4 = (int *)0x1;
  uStack_2a8 = 0x7c14f9;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x7c150b;
  FUN_00c57830();
  local_260[0] = 0;
  piStack_284 = (int *)0x0;
  local_260[1] = 0;
  piStack_288 = (int *)0x1;
  local_260[2] = 0;
  local_28c = (int *)0x40400000;
  piStack_2a0 = (int *)param_1[0x13c];
  local_290 = (int *)0x41f00000;
  local_294 = (undefined4 *)0x1;
  local_298 = aiStack_274 + 5;
  local_29c = (uint *)0x1;
  piStack_2a4 = (int *)0x1;
  uStack_2a8 = 0x7c1550;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x7c1562;
  FUN_00c57830();
  piStack_2a0 = (int *)param_1[0x13c];
  local_260[0] = 0;
  piStack_284 = (int *)0x0;
  local_260[1] = 0;
  piStack_288 = (int *)0x1;
  local_260[2] = 0;
  local_28c = (int *)0x3fc00000;
  local_298 = aiStack_274 + 5;
  local_290 = (int *)0x41f00000;
  local_294 = (undefined4 *)0x2;
  local_29c = (uint *)0x22;
  piStack_2a4 = (int *)0x1;
  uStack_2a8 = 0x7c15a7;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x7c15b9;
  FUN_00c57830();
  piStack_2a0 = (int *)param_1[0x13c];
  local_260[0] = 0;
  piStack_284 = (int *)0x0;
  local_260[1] = 0;
  piStack_288 = (int *)0x1;
  local_260[2] = 0;
  local_28c = (int *)0x3fc00000;
  local_298 = aiStack_274 + 5;
  local_290 = (int *)0x41f00000;
  local_294 = (undefined4 *)0x3;
  local_29c = (uint *)0x2c;
  piStack_2a4 = (int *)0x1;
  uStack_2a8 = 0x7c15fe;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x7c1610;
  FUN_00c57830();
  piStack_2a0 = (int *)param_1[0x13c];
  local_260[0] = 0;
  piStack_284 = (int *)0x0;
  local_260[1] = 0x3f800000;
  piStack_288 = (int *)0x1;
  local_298 = aiStack_274 + 5;
  local_260[2] = 0;
  local_28c = (int *)0x40000000;
  local_290 = (int *)0x41f00000;
  local_294 = (undefined4 *)0x4;
  local_29c = (uint *)0x36;
  piStack_2a4 = (int *)0x1;
  uStack_2a8 = 0x7c1657;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x7c1669;
  FUN_00c57830();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x1;
  piStack_288 = (int *)0x0;
  local_290 = (int *)0x7c167d;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x1;
  local_290 = (int *)0x7c1691;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x2;
  local_290 = (int *)0x7c16a5;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x3;
  local_290 = (int *)0x7c16b9;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x4;
  local_290 = (int *)0x7c16cd;
  FUN_00c4d210();
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x19;
  local_28c = (int *)0x78;
  local_290 = (int *)0x41a00000;
  local_294 = (undefined4 *)0x41a00000;
  local_298 = (int *)0x40333333;
  local_29c = (uint *)0x40b66666;
  piStack_2a4 = (int *)0x7c16fc;
  piStack_2a0 = param_1;
  iVar3 = FUN_008ec660();
  param_1[0x1d9] = iVar3;
  piStack_284 = (int *)0x7c170c;
  FUN_008e6d00();
  piStack_284 = (int *)0x400000;
  piStack_288 = (int *)0x7c171c;
  FUN_008e6fe0();
  piStack_284 = (int *)0x400000;
  piStack_288 = (int *)0x7c172c;
  FUN_008e7400();
  piStack_284 = (int *)0x7c1737;
  FUN_008e1c70();
  piStack_284 = (int *)0x20;
  piStack_288 = (int *)0x7c1744;
  FUN_008e5610();
  piStack_284 = (int *)0x40;
  piStack_288 = (int *)0x7c1751;
  FUN_008e5610();
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x163c454;
  local_28c = (int *)0x0;
  local_290 = (int *)0x7c1763;
  local_268 = (int *)FUN_00de3850();
  piStack_284 = &DAT_01b7bd48;
  piStack_288 = (int *)0x3c;
  local_28c = (int *)0x7c1773;
  iVar3 = FUN_00dd3500();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    piStack_284 = (int *)0x7c1781;
    iVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar3;
  if (iVar3 != 0) {
    local_244 = param_1[0x13c];
    piStack_284 = local_268;
    piStack_288 = (int *)0x7c17ad;
    piStack_284 = (int *)FUN_00de3ee0();
    piStack_288 = local_268;
    local_28c = (int *)0x7c17be;
    piStack_288 = (int *)FUN_00de3cf0();
    local_28c = (int *)local_244;
    local_290 = (int *)0x7c17cf;
    iVar3 = FUN_008f6410();
    if (iVar3 != 0) {
      piStack_284 = (int *)0x0;
      piStack_288 = (int *)0x7c17df;
      FUN_008f2cd0();
      piStack_284 = (int *)0x8;
      piStack_288 = (int *)0x7c17f1;
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))();
      piStack_288 = (int *)0x7c17f8;
      puVar5 = (undefined4 *)FUN_009f8b60();
      piStack_288 = (int *)*puVar5;
      local_28c = (int *)0x7c180b;
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))();
      piStack_284 = (int *)0x80000000;
      piStack_288 = (int *)0x7c181b;
      FUN_008f1600();
      piStack_284 = (int *)0x20;
      piStack_288 = (int *)0x7c1828;
      FUN_008f1600();
      piStack_284 = (int *)0x40;
      piStack_288 = (int *)0x7c1835;
      FUN_008f1600();
    }
  }
  piStack_284 = (int *)0x163e164;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x7c1842;
  FUN_00a8c420();
  piStack_284 = (int *)0x163e16c;
  piStack_288 = (int *)0x1;
  local_28c = (int *)0x7c1850;
  FUN_00a8c420();
  piStack_284 = (int *)0x163e15c;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x7c185d;
  FUN_00a8c420();
  piStack_284 = (int *)0x163e174;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x7c186a;
  FUN_00a8c420();
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    piStack_284 = (int *)0x0;
    piStack_288 = (int *)0x163e16c;
    local_28c = (int *)0x8;
    local_290 = (int *)0x7c1886;
    (**(code **)(*(int *)param_1[0x1ec] + 0x10c))();
  }
  piStack_284 = (int *)0x40;
  piStack_288 = (int *)0x7c188f;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2();
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    piStack_284 = (int *)0x7c18a4;
    iVar3 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
    if (iVar3 != 0) {
      piStack_288 = (int *)param_1[0x1ec];
      piStack_284 = (int *)0x2;
      local_28c = (int *)0x7c18bc;
      Behavior::addDefenseCollisionFromRigidBody_2();
      piStack_284 = (int *)0x10000;
      piStack_288 = (int *)0x7c18cc;
      FUN_008f18c0();
      piStack_284 = (int *)0x163e174;
      piStack_288 = (int *)0x9;
      local_28c = (int *)0x7c18da;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x9;
      piStack_288 = (int *)0x7c18e3;
      FUN_00a938c0();
      piStack_284 = (int *)0x163e350;
      piStack_288 = (int *)0x4;
      local_28c = (int *)0x7c18f1;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e348;
      piStack_288 = (int *)0x0;
      local_28c = (int *)0x7c18fe;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e340;
      piStack_288 = (int *)0x0;
      local_28c = (int *)0x7c190b;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)&DAT_0163e338;
      piStack_288 = (int *)0x3;
      local_28c = (int *)0x7c1919;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e330;
      piStack_288 = (int *)0x2;
      local_28c = (int *)0x7c1927;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e328;
      piStack_288 = (int *)0x1;
      local_28c = (int *)0x7c1935;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e320;
      piStack_288 = (int *)0x5;
      local_28c = (int *)0x7c1943;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e318;
      piStack_288 = (int *)0x5;
      local_28c = (int *)0x7c1951;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e310;
      piStack_288 = (int *)0x5;
      local_28c = (int *)0x7c195f;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e308;
      piStack_288 = (int *)0x6;
      local_28c = (int *)0x7c196d;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e300;
      piStack_288 = (int *)0x6;
      local_28c = (int *)0x7c197b;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2f8;
      piStack_288 = (int *)0x7;
      local_28c = (int *)0x7c1989;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2f0;
      piStack_288 = (int *)0x7;
      local_28c = (int *)0x7c1997;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2e8;
      piStack_288 = (int *)0x7;
      local_28c = (int *)0x7c19a5;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2e0;
      piStack_288 = (int *)0x8;
      local_28c = (int *)0x7c19b3;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2d8;
      piStack_288 = (int *)0x8;
      local_28c = (int *)0x7c19c1;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e16c;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x7c19cf;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e164;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x7c19dd;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2d0;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x7c19eb;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2c8;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x7c19f9;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)&DAT_0163e2c0;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x7c1a07;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e15c;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x7c1a15;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x1;
      piStack_288 = (int *)0x7c1a1e;
      FUN_00a93730();
      piStack_284 = (int *)0xa;
      piStack_288 = (int *)0x7c1a27;
      FUN_00a938c0();
    }
  }
  param_1[0x43c] = 0;
  param_1[0x43d] = 0;
  param_1[0x43e] = 0;
  param_1[0x43f] = local_224[0];
  local_224[9] = param_1[0x10];
  local_224[10] = param_1[0x11];
  iStack_1f8 = param_1[0x12];
  iStack_1f4 = param_1[0x13];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x7c1a76;
  iVar3 = (**(code **)(*param_1 + 0x84))();
  piStack_288 = *(int **)(iVar3 + 4);
  local_290 = local_224 + 9;
  local_294 = (undefined4 *)0x7c1a8d;
  local_28c = param_1 + 0x43c;
  FUN_00a8e130();
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0x40200000;
  uStack_1b8 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0xbf800000;
  uStack_1d8 = 0;
  piStack_284 = (int *)0x7c1ae6;
  FUN_0118f7b0();
  uStack_50 = 0;
  piStack_284 = (int *)0x7c1af6;
  iVar3 = FUN_009f8b40();
  auStack_e0[0] = iVar3 << 0x10 | 7;
  piStack_284 = (int *)0x7c1b08;
  piVar6 = (int *)FUN_00910da0();
  piStack_284 = (int *)0x1;
  piStack_288 = (int *)0x3fc00000;
  local_28c = &uStack_1e0;
  local_290 = &uStack_1c0;
  local_294 = &uStack_1d0;
  local_298 = local_224 + 9;
  local_29c = auStack_e0;
  piStack_2a0 = aiStack_274 + 3;
  piStack_2a4 = (int *)0x7c1b4a;
  piStack_2a4 = (int *)(**(code **)(*piVar6 + 0xc))();
  uStack_2a8 = 0x7c1b56;
  FUN_00910ab0();
  if (param_1[0x43a] != 0) {
    piStack_2a4 = (int *)0x7c1b69;
    FUN_00916260();
    iStack_2ac = param_1[0x43a];
    piStack_2a4 = (int *)0x1;
    uStack_2a8 = 0x40;
    iStack_2b0 = 0x7c1b79;
    FUN_008f9610();
    puStack_2b8 = (undefined4 *)param_1[0x43a];
    iStack_2b0 = 1;
    piStack_2b4 = (int *)0x20;
    puStack_2bc = (undefined1 *)0x7c1b89;
    FUN_008f9610();
    puStack_2bc = (undefined1 *)param_1[0x13c];
    piStack_2c0 = (int *)param_1[0x43a];
    iStack_2c4 = 0x7c1b9c;
    FUN_008f7f00();
  }
  piStack_2a4 = (int *)0x7c1ba8;
  FUN_004066f0();
  aiStack_274[0] = param_1[0x17];
  uStack_250 = 0;
  uStack_24c = 0x40200000;
  uStack_248 = 0;
  local_260[0] = 0;
  local_260[1] = 0x3e99999a;
  local_260[2] = 0;
  param_1[0x4bb] = 0x3d23d70a;
  if (param_1[0x8e7] == 0) {
    param_1[0x4bb] = 0x3d75c28f;
  }
  piStack_2a4 = (int *)0x7c1c0f;
  piStack_288 = (int *)FUN_00900480();
  iVar3 = *piStack_288;
  piStack_2a4 = (int *)0x0;
  uStack_2a8 = 0x7c1c1d;
  uStack_2a8 = FUN_009f8b40();
  iStack_2ac = 5;
  iStack_2b0 = 0x40900000;
  piStack_2b4 = aiStack_274 + 5;
  puStack_2b8 = &uStack_250;
  puStack_2bc = &stack0xfffffd80;
  piStack_2c0 = (int *)0x7c1c42;
  iVar3 = (**(code **)(iVar3 + 0xc))();
  piStack_2c0 = (int *)param_1[0x13c];
  uStack_2c8 = 0x7c1c51;
  iStack_2c4 = iVar3;
  FUN_008f7f00();
  piStack_2c0 = (int *)0x7c1c5d;
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_007c1caa;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_007c1caa:
      piVar6 = (int *)(iVar7 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        piStack_2c0 = (int *)0x7c1ccc;
        FUN_00dd7320();
      }
    }
  }
  piStack_2c0 = (int *)0x7c1cd5;
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_007c1d25;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 4;
    puVar8[4] = puVar8[4] | 0x400000;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_007c1d25:
      piVar6 = (int *)(iVar7 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        piStack_2c0 = (int *)0x7c1d47;
        FUN_00dd7320();
      }
    }
  }
  iStack_2c4 = 0x7c1d53;
  piStack_2c0 = (int *)iVar3;
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>();
  piStack_2c0 = (int *)0x163e2b4;
  iStack_2c4 = 0x7c1d63;
  FUN_009009c0();
  piStack_2c0 = (int *)0x7c1d6e;
  FUN_00900bd0();
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      piStack_2c0 = (int *)0x7c1da8;
      FUN_00dd7320();
    }
  }
  piStack_2c0 = (int *)0x7c1db1;
  FUN_004066f0();
  local_29c = (uint *)param_1[0x14];
  local_298 = (int *)param_1[0x15];
  local_294 = (undefined4 *)param_1[0x16];
  local_290 = (int *)param_1[0x17];
  aiStack_274[0] = 0;
  aiStack_274[2] = 0;
  local_268 = (int *)0x3e99999a;
  local_264 = 0;
  piStack_2c0 = (int *)0x7c1df8;
  piStack_2a4 = (int *)FUN_00900480();
  iVar3 = *piStack_2a4;
  piStack_2c0 = (int *)0x0;
  iStack_2c4 = 0x7c1e06;
  iStack_2c4 = FUN_009f8b40();
  uStack_2c8 = 0x10;
  uStack_2cc = 0x40800000;
  piStack_2d0 = aiStack_274 + 2;
  puStack_2d4 = &stack0xfffffd84;
  ppuStack_2d8 = &local_29c;
  pcStack_2dc = (char *)0x7c1e2b;
  uStack_2e0 = (**(code **)(iVar3 + 0xc))();
  pcStack_2dc = (char *)param_1[0x13c];
  fStack_2e4 = 1.1398448e-38;
  piStack_2c0 = (int *)uStack_2e0;
  FUN_008f7f00();
  pcStack_2dc = (char *)piStack_2c0;
  uStack_2e0 = 0x7c1e4f;
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>();
  pcStack_2dc = "HoverCheck";
  uStack_2e0 = 0x7c1e5f;
  FUN_009009c0();
  pcStack_2dc = (char *)0x7c1e6a;
  FUN_00900bd0();
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      pcStack_2dc = (char *)0x7c1ea4;
      FUN_00dd7320();
    }
  }
  pcStack_2dc = (char *)0x7c1ead;
  FUN_004066f0();
  puStack_2b8 = (undefined4 *)param_1[0x14];
  piStack_2b4 = (int *)param_1[0x15];
  iStack_2b0 = param_1[0x16];
  iStack_2ac = param_1[0x17];
  local_298 = (int *)0x0;
  local_294 = (undefined4 *)0x40200000;
  local_290 = (int *)0x0;
  piStack_288 = (int *)0x0;
  piStack_284 = (int *)0x3e99999a;
  pcStack_2dc = (char *)0x7c1ef4;
  piStack_2c0 = (int *)FUN_00900480();
  iVar3 = *piStack_2c0;
  pcStack_2dc = (char *)0x0;
  uStack_2e0 = 0x7c1f02;
  uStack_2e0 = FUN_009f8b40();
  fStack_2e4 = 2.10195e-44;
  iVar3 = (**(code **)(iVar3 + 0xc))(&puStack_2b8,&local_298,&piStack_288,0x40800000);
  ppuStack_2d8 = (uint **)iVar3;
  FUN_008f7f00(iVar3,param_1[0x13c]);
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_007c1f93;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_007c1f93:
      piVar6 = (int *)(iVar7 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_007c200e;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 4;
    puVar8[4] = puVar8[4] | 0x400000;
    if (DAT_01885d68 != 1) {
      iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_007c200e:
      piVar6 = (int *)(iVar3 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(ppuStack_2d8);
  FUN_009009c0("HoverCheck");
  FUN_00900bd0();
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>(param_1[0x13c],7,0,0);
  pcStack_2dc = (char *)param_1[300];
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(pcStack_2dc,0x20080);
  FUN_00e250e0();
  piVar6 = local_224;
  local_224[0] = 0x22;
  local_224[1] = 0x23;
  local_224[2] = 0x24;
  local_224[3] = 0x28;
  local_224[4] = 0x2c;
  local_224[5] = 0x2d;
  local_224[6] = 0x2e;
  local_224[7] = 0x32;
  local_224[8] = 0;
  local_224[9] = 1;
  uVar4 = FUN_00a92f90(piVar6);
  FUN_00e357e0(uVar4,piVar6);
  FUN_00e25110(1);
  FUN_00e25120(0);
  (**(code **)(*param_1 + 0x358))(0,param_1 + 0x774);
  (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x7cc);
  param_1[0x1e3] = 0;
  iVar3 = FUN_00dd3580(0x100,&DAT_01b7bd48);
  param_1[0x1e2] = iVar3;
  if (iVar3 != 0) {
    FUN_00a8c720(0xb,0x15);
    FUN_00a8c720(0xc,0x16);
    FUN_00a8c720(0xd,0x17);
    FUN_00a8c720(0xe,0x18);
    FUN_00a8c720(0x54,0x5a);
    FUN_00a8c720(0x53,0x59);
    FUN_00a8c720(0x55,0x5b);
    FUN_00a8c720(0xf,0x19);
    FUN_00a8c720(0x10,0x1a);
    FUN_00a8c720(0x11,0x1b);
    FUN_00a8c720(0x12,0x1c);
    FUN_00a8c720(0x13,0x1d);
    FUN_00a8c720(0x14,0x1e);
    FUN_00a8c720(0x57,0x5d);
    FUN_00a8c720(0x56,0x5c);
    FUN_00a8c720(0x58,0x5e);
    FUN_00a8c720(0x1f,0x29);
    FUN_00a8c720(0x20,0x2a);
    FUN_00a8c720(0x21,0x2b);
    FUN_00a8c720(0x22,0x2c);
    FUN_00a8c720(0x23,0x2d);
    FUN_00a8c720(0x24,0x2e);
    FUN_00a8c720(0x5f,0x60);
    FUN_00a8c720(0x25,0x2f);
    FUN_00a8c720(0x26,0x30);
    FUN_00a8c720(0x27,0x31);
    FUN_00a8c720(0x28,0x32);
    FUN_00a8c720(0x600,0x610);
    FUN_00a8c720(0x601,0x611);
    FUN_00a8c720(0x602,0x612);
    FUN_00a8c720(0x603,0x613);
    FUN_00a8c720(0x604,0x614);
    FUN_00a8c720(0x605,0x615);
    FUN_00a8c720(0x3a,0xffffffff);
    FUN_00a8c720(0x3b,0xffffffff);
    FUN_00a8c720(0x3c,0xffffffff);
    FUN_00a8c720(0x40,0xffffffff);
    FUN_00a8c720(0x42,0xffffffff);
    FUN_00a8c720(0x43,0xffffffff);
    FUN_00a8c720(0x44,0xffffffff);
    FUN_00a8c720(0x45,0xffffffff);
    FUN_00a8c720(0x46,0xffffffff);
    FUN_00a8c720(0x47,0xffffffff);
    FUN_00a95e20(param_1[0x1e2],param_1[0x1e3]);
  }
  param_1[0x3b2] = 0;
  param_1[0x3b4] = 0;
  param_1[0x715] = 0;
  param_1[0x476] = 0;
  piVar6 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar6);
  param_1[0x87c] = 1;
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  param_1[0x874] = 0;
  param_1[0x875] = 0x3fc00000;
  param_1[0x876] = 0x41000000;
  param_1[0x877] = iStack_228;
  *(undefined1 *)(param_1 + 0x860) = 0;
  param_1[0x878] = 0x41680000;
  param_1[0x872] = 0x41000000;
  param_1[0x873] = 0x42c80000;
  sVar2 = FUN_00dde2d0(0,1);
  if (sVar2 != 0) {
    *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 1;
  }
  *(undefined1 *)(param_1 + 0x862) = 0xff;
  param_1[0x87f] = 0;
  *(undefined2 *)(param_1 + 0x880) = 0;
  FUN_00a82790(param_1[0x13c],0x36,0);
  param_1[0x824] = param_1[0x824] | 2;
  FUN_00a82870(0x404a2dcf,0xc04a2dcf,0x3dcccccd,0x3ae4c388,0x3d0efa35);
  iVar3 = 0;
  do {
    uVar9 = FUN_00a7c7f0();
    uVar4 = extraout_ECX;
    FUN_00a7c940(uVar9);
    FUN_007b7660(iVar3,uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0xe;
  do {
    FUN_00a7c950();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac94e0(&DAT_0163d9a8);
  FUN_00c81e90(0x1a);
  param_1[0x3a4] = 0;
  uVar4 = 5;
  switch(param_1[0x128]) {
  case 1:
    uVar4 = 9;
    FUN_007b09c0(0x20002,0,0,0,0);
    FUN_00a8c420(1,"_yama");
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_yama",0);
    }
    *(undefined2 *)(param_1 + 0x862) = 0;
    *(undefined1 *)(param_1 + 0x860) = 0;
    iVar3 = FUN_00d46690(1);
    if (iVar3 != 0) {
      FUN_007b09c0(0x20003,0,0,0,0);
      FUN_007b09c0(0x2000b,0,0,0,0);
      FUN_00a5dcc0(iVar3);
      param_1[0x714] = 0;
      FUN_00a581b0(&iStack_2c4,0,0);
      param_1[0x14] = iStack_2c4;
      param_1[0x16] = (int)puStack_2bc;
      FUN_00a585a0(&fStack_2e4,0,param_1[0x714]);
      fVar10 = (float10)fpatan((float10)fStack_2e4,(float10)(float)pcStack_2dc);
      FUN_00ddba30((float)(fVar10 + (float10)3.2288592));
    }
    break;
  case 2:
    uVar9 = 0x10001;
    goto LAB_007c2a0c;
  case 3:
    if ((*(byte *)(param_1 + 0x860) & 4) == 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar9);
      *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 4;
      *(undefined1 *)(param_1 + 0x862) = 0xff;
    }
    FUN_007b6940();
    (**(code **)(*param_1 + 0x358))(0x192,0);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
    param_1[0x8c8] = 1;
    *(byte *)((int)param_1 + 0xeb9) = *(byte *)((int)param_1 + 0xeb9) | 4;
    FUN_00c4d210(param_1[0x13c],2,0);
    FUN_007b09c0(0x1000f,0,0,0,0);
    FUN_007b09c0(0x60002,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 4:
    FUN_007b6940();
    (**(code **)(*param_1 + 0x358))(0x192,0);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 4;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
    (**(code **)(*param_1 + 0x358))(0x193,0);
    *(byte *)(param_1 + 0x3ae) = *(byte *)(param_1 + 0x3ae) | 2;
    FUN_00ac8d80(1,1);
    FUN_00ac9420("_EFD06");
    FUN_007b09c0(0x70004,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 5:
    FUN_007b6940();
    FUN_007b09c0(0x10014,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 6:
    FUN_007b6940();
    FUN_007b09c0(0x10015,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 7:
    uVar4 = 9;
    FUN_007b09c0(0x20012,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 8:
    uVar4 = 9;
    FUN_007b09c0(0x20012,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    param_1[0x8e0] = 1;
    FUN_00a88b50(1,0);
    break;
  default:
    FUN_007b6940();
    param_1[0x4c9] = 0x44610000;
    FUN_007b09c0(0x10004,0,0,0,0);
    if (param_1[0x8e7] == 0) {
      FUN_007b09c0(0x50002,0,0,0,0);
      param_1[0x8eb] = 1;
    }
    if (param_1[299] == 1) {
      param_1[0x47a] = 0;
      FUN_007b09c0(0x10002,0,0,0,0);
    }
    if ((*(byte *)(param_1 + 0x12a) & 0x10) == 0) break;
    param_1[0x47a] = 1;
    uVar9 = 0x1000d;
LAB_007c2a0c:
    FUN_007b09c0(uVar9,0,0,0,0);
  }
  FUN_00aa4080(uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a92f90();
  FUN_00e3f050();
  switchD_0080dbae::default();
  aiStack_274[0] = 0;
  aiStack_274[1] = 0;
  aiStack_274[2] = 0x43480000;
  D3DXVec3TransformNormal(param_1 + 0x8d0,aiStack_274,param_1 + 4);
  param_1[0x8d0] = (int)((float)param_1[0x8d0] + (float)param_1[0x10]);
  param_1[0x8d1] = (int)((float)param_1[0x11] + (float)param_1[0x8d1]);
  param_1[0x8d2] = (int)((float)param_1[0x12] + (float)param_1[0x8d2]);
  D3DXVec3TransformNormal(param_1 + 0x8d4,&stack0xfffffd80,param_1 + 4);
  param_1[0x8d4] = (int)((float)param_1[0x10] + (float)param_1[0x8d4]);
  param_1[0x8d5] = (int)((float)param_1[0x11] + (float)param_1[0x8d5]);
  param_1[0x8d6] = (int)((float)param_1[0x12] + (float)param_1[0x8d6]);
  if ((param_1[0x12a] & 0x4000U) != 0) {
    FUN_00a82dd0(1);
    FUN_00a82e00(1);
    FUN_00a82e30(1);
  }
  if (((*(byte *)(param_1 + 0x12a) & 4) != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e59c0(2);
    FUN_008e5c50(7);
  }
  if ((*(byte *)(param_1 + 0x12a) & 8) != 0) {
    (**(code **)(*param_1 + 0x358))(0x208,0);
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x914] = 0x42700000;
  }
  param_1[0x36a] = 1;
  param_1[0x36c] = 0;
  return;
}

// 007C2BE0  Emc080::vf48  size=1764  [class]
void __fastcall Emc080::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_68;
  float *pfStack_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  pfStack_64 = (float *)0x7c2bf3;
  EmBaseDLC::vf48();
  if (((0 < param_1[0x21c]) && (param_1[0x8e7] == 0)) &&
     ((iVar2 = param_1[0x128], iVar2 == 0 || ((iVar2 == 3 || (iVar2 == 4)))))) {
    DAT_018b4414 = param_1[0x12d];
    DAT_01dc08e0 = 0;
    DAT_01dc08e8 = param_1[0x21d];
    DAT_01dc08e4 = param_1[0x21c];
    DAT_01dc08ec = 1;
    DAT_01dc08dc = iVar2;
  }
  pfStack_64 = (float *)0x7c2c60;
  iVar2 = FUN_00ac45b0();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    pfStack_64 = (float *)0x7c2c6b;
    FUN_00ac45b0();
    pfStack_64 = (float *)0x7c2c72;
    piVar3 = (int *)FUN_00a7c8a0();
  }
  pfStack_64 = &local_40;
  uStack_68 = 0x7c2c83;
  (**(code **)(*piVar3 + 0x204))();
  fStack_54 = (float)param_1[0x10];
  fStack_4c = (float)param_1[0x12];
  fStack_48 = (float)param_1[0x13];
  if (param_1[0x3a4] == 0) {
    fStack_50 = 3.0;
  }
  else {
    fStack_50 = 6.0;
  }
  fStack_50 = (float)param_1[0x11] + fStack_50;
  fStack_34 = fStack_44 - fStack_54;
  fStack_30 = local_40 - fStack_50;
  fStack_2c = fStack_3c - fStack_4c;
  fStack_28 = fStack_38 - fStack_48;
  uStack_68 = 0x7c2cea;
  iVar2 = FUN_00ac45b0();
  uStack_68 = 0;
  if (iVar2 != 0) {
    uStack_68 = 0x7c2cf5;
    FUN_00ac45b0();
    uStack_68 = 0x7c2cfc;
    uStack_68 = FUN_00a7c8a0();
  }
  iVar2 = (**(code **)(*param_1 + 0x284))(&fStack_44,&fStack_54,&fStack_34);
  fVar1 = (float)param_1[0x8ec];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    iVar2 = 1;
    param_1[0x8ec] = (int)((float)param_1[0x8ec] - (float)param_1[0x244]);
  }
  if (((*(byte *)(param_1 + 0x12a) & 0x10) == 0) && (iVar2 != 0)) {
    fVar1 = (float)param_1[0x8cc];
    param_1[0x8cb] = 0;
    param_1[0x8cc] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x8ca] = 0;
    }
  }
  else {
    param_1[0x8cb] = 1;
    param_1[0x8cc] = 0x42700000;
    param_1[0x8ca] = 1;
    iVar2 = FUN_00ac45b0();
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      FUN_00ac45b0();
      piVar3 = (int *)FUN_00a7c8a0();
    }
    piVar3 = (int *)(**(code **)(*piVar3 + 0x204))(&fStack_34);
    param_1[0x8d0] = *piVar3;
    param_1[0x8d1] = piVar3[1];
    param_1[0x8d2] = piVar3[2];
    param_1[0x8d3] = piVar3[3];
    iVar4 = FUN_00ac45b0();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_00ac45b0();
      iVar2 = FUN_00a7c8a0();
    }
    param_1[0x8d4] = *(int *)(iVar2 + 0x40);
    param_1[0x8d5] = *(int *)(iVar2 + 0x44);
    param_1[0x8d6] = *(int *)(iVar2 + 0x48);
    param_1[0x8d7] = *(int *)(iVar2 + 0x4c);
    param_1[0x8d5] = (int)((float)param_1[0x8d5] + 1.5);
  }
  FUN_007beab0();
  FUN_00a89560();
  iVar2 = FUN_00ac48f0(0);
  fVar1 = (float)param_1[0x440];
  param_1[0x8e9] = iVar2;
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x440] = (int)((float)param_1[0x440] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x441] != ((float)param_1[0x441] == 0.0)) {
    param_1[0x441] = (int)((float)param_1[0x441] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x4c9] != ((float)param_1[0x4c9] == 0.0)) {
    param_1[0x4c9] = (int)((float)param_1[0x4c9] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x4ca] != ((float)param_1[0x4ca] == 0.0)) {
    param_1[0x4ca] = (int)((float)param_1[0x4ca] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x8df] != ((float)param_1[0x8df] == 0.0)) {
    param_1[0x8df] = (int)((float)param_1[0x8df] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x8c7] != ((float)param_1[0x8c7] == 0.0)) {
    param_1[0x8c7] = (int)((float)param_1[0x8c7] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x90a] != ((float)param_1[0x90a] == 0.0)) {
    param_1[0x90a] = (int)((float)param_1[0x90a] - (float)param_1[0x244]);
  }
  if ((param_1[0x915] != 0) &&
     (fVar1 = (float)param_1[0x914], param_1[0x914] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  if (0.0 < (float)param_1[0x8dd] == ((float)param_1[0x8dd] == 0.0)) {
    param_1[0x8de] = 0;
  }
  else {
    param_1[0x8dd] = (int)((float)param_1[0x8dd] - (float)param_1[0x244]);
  }
  param_1[0x912] = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x1d8))();
  if ((iVar2 == 0) &&
     ((float)param_1[0x11] + 2.5 < *(float *)(param_1[0x2a1] + 0x44) !=
      ((float)param_1[0x11] + 2.5 == *(float *)(param_1[0x2a1] + 0x44)))) {
    param_1[0x912] = 1;
  }
  if ((float)param_1[0x11] + 3.5 < *(float *)(param_1[0x2a1] + 0x44) !=
      ((float)param_1[0x11] + 3.5 == *(float *)(param_1[0x2a1] + 0x44))) {
    param_1[0x912] = 1;
  }
  if (param_1[0x912] == 0) {
    param_1[0x913] = 0;
  }
  else {
    param_1[0x913] = param_1[0x913] + 1;
  }
  iVar2 = FUN_00ac45b0();
  if (iVar2 != 0) {
    iVar2 = 4;
    do {
      FUN_00ac45b0();
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c940(uVar5);
      FUN_00a7c960(&uStack_68);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00a8c760(0x31);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x8e4) & 1) != 0) {
      FUN_00a8c420(1,"_shldR");
      FUN_00a8c420(1,"_armR");
      FUN_00a8c420(1,"_shldL");
      FUN_00a8c420(1,"_armL");
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_shldR",0);
        (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_armR",0);
        (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_shldL",0);
        (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_armL",0);
      }
    }
    param_1[0x8e4] = param_1[0x8e4] & 0xfffffffe;
  }
  else {
    if ((*(byte *)(param_1 + 0x8e4) & 1) == 0) {
      FUN_00a8c420(0,"_shldR");
      FUN_00a8c420(0,"_armR");
      FUN_00a8c420(0,"_shldL");
      FUN_00a8c420(0,"_armL");
    }
    param_1[0x8e4] = param_1[0x8e4] | 1;
  }
  iVar2 = FUN_00a8c760(0x32);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x8e4) & 2) != 0) {
      FUN_00a8c420(1,"_head");
      FUN_00a8c420(1,&DAT_0163e338);
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_head",0);
        (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,&DAT_0163e338,0);
      }
    }
    param_1[0x8e4] = param_1[0x8e4] & 0xfffffffd;
  }
  else {
    if ((*(byte *)(param_1 + 0x8e4) & 2) == 0) {
      FUN_00a8c420(0,"_head");
      FUN_00a8c420(0,&DAT_0163e338);
    }
    param_1[0x8e4] = param_1[0x8e4] | 2;
  }
  iVar2 = FUN_00a8c760(0x33);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x8e4) & 4) != 0) {
      FUN_00a8c420(1,"_foot");
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(8,"_foot",0);
      }
    }
    param_1[0x8e4] = param_1[0x8e4] & 0xfffffffb;
  }
  else {
    if ((*(byte *)(param_1 + 0x8e4) & 4) == 0) {
      FUN_00a8c420(0,"_foot");
    }
    param_1[0x8e4] = param_1[0x8e4] | 4;
  }
  piVar3 = *(int **)(param_1[399] + 4);
  if (piVar3 != piVar3 + *(int *)(param_1[399] + 8) * 0x10) {
    do {
      if (*piVar3 == 0x12) {
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
        }
        (**(code **)(*param_1 + 0x314))();
        FUN_007b09c0(0x20001,0,0,0,0);
      }
      piVar3 = piVar3 + 0x10;
    } while (piVar3 != (int *)(*(int *)(param_1[399] + 8) * 0x40 + *(int *)(param_1[399] + 4)));
  }
  if (*(int *)(param_1[399] + 4) != 0) {
    *(undefined4 *)(param_1[399] + 8) = 0;
  }
  return;
}

// 007C3990  FUN_007c3990  size=462  [between]
/* WARNING: Type propagation algorithm not settling */

uint __fastcall FUN_007c3990(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined4 uVar7;
  undefined1 auStack_6c [12];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [44];
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  uint local_10;
  char *local_c;
  undefined1 *local_8;
  
  if (param_1[0x128] == 0) {
    puStack_14 = (undefined1 *)param_1[0x13c];
    local_8 = (undefined1 *)0x41200000;
    local_c = (char *)0x3fb2b8c2;
    local_10 = param_1[0x25];
    fStack_18 = 1.1408337e-38;
    FUN_00a80b20();
  }
  uVar5 = param_1[0x186];
  if (0x20000 < (int)uVar5) {
    if (0x50000 < (int)uVar5) {
      if ((int)uVar5 < 0x60001) {
        if (uVar5 == 0x60000) {
          return 0;
        }
        uVar6 = uVar5 - 0x50001;
        switch(uVar6) {
        case 0:
          local_8 = (undefined1 *)0xf;
          local_c = (char *)0x7b533a;
          iVar4 = FUN_00a8c760();
          uVar5 = 0;
          if (iVar4 != 0) {
            if (((float)param_1[0x4c9] < 0.0) && (param_1[0x8e0] != 0)) {
              local_8 = (undefined1 *)0x1;
              local_c = (char *)0x0;
              local_10 = 0x7b5368;
              sVar3 = FUN_00dde2d0();
              if (sVar3 != 0) {
                UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
                param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007b5382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (*UNRECOVERED_JUMPTABLE)();
                return uVar5;
              }
            }
            local_8 = (undefined1 *)0x5;
            local_c = (char *)0x7b538d;
            iVar4 = FUN_00a90070();
            uVar5 = 0;
            if (iVar4 != 0) {
              if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59179e-40;
                puStack_1c = (undefined1 *)0x7b53cf;
                FUN_007b09c0();
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59186e-40;
                puStack_1c = (undefined1 *)0x7b53e3;
                uVar5 = FUN_007b09c0();
                if (1 < param_1[0x8e3]) {
                  return uVar5;
                }
              }
              fVar1 = (float)param_1[0x2a4];
              if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) &&
                  ((float)param_1[0x2a4] <= 144.0)) && ((float)param_1[0x2a8] < 0.5235988)) {
                local_8 = &LAB_007b542c;
                FUN_007b1af0();
              }
              fVar1 = (float)param_1[0x2a4];
              uVar5 = (uint)(ushort)((ushort)(49.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 49.0) << 0xe);
              if (49.0 >= fVar1 && (fVar1 == 49.0) == 0) {
                fVar1 = (float)param_1[0x2a8];
                uVar5 = (uint)(ushort)((ushort)(1.134464 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                      (ushort)(fVar1 == 1.134464) << 0xe);
                if (!NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464)) {
                  local_8 = (undefined1 *)0x0;
                  local_c = (char *)0x0;
                  local_10 = 0;
                  puStack_14 = (undefined1 *)0x0;
                  fStack_18 = 4.59177e-40;
                  puStack_1c = &LAB_007b5466;
                  uVar5 = FUN_007b09c0();
                }
              }
            }
          }
          return uVar5;
        case 1:
        case 2:
          local_8 = (undefined1 *)0xf;
          local_c = (char *)0x7b57da;
          iVar4 = FUN_00a8c760();
          uVar5 = 0;
          if (iVar4 != 0) {
            if (((float)param_1[0x4c9] < 0.0) && (param_1[0x8e0] != 0)) {
              local_8 = (undefined1 *)0x1;
              local_c = (char *)0x0;
              local_10 = 0x7b5808;
              sVar3 = FUN_00dde2d0();
              if (sVar3 != 0) {
                UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
                param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007b5822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (*UNRECOVERED_JUMPTABLE)();
                return uVar5;
              }
            }
            local_8 = (undefined1 *)0x5;
            local_c = (char *)0x7b582d;
            iVar4 = FUN_00a90070();
            uVar5 = 0;
            if (iVar4 != 0) {
              if (((1 < param_1[0x8e3]) && ((float)param_1[0x2a4] < 49.0)) &&
                 ((float)param_1[0x2a8] < 1.2217305)) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59186e-40;
                puStack_1c = (undefined1 *)0x7b5880;
                uVar5 = FUN_007b09c0();
                return uVar5;
              }
              if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 0;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59179e-40;
                puStack_1c = (undefined1 *)0x7b58b6;
                FUN_007b09c0();
              }
              if (((49.0 < (float)param_1[0x2a4] != ((float)param_1[0x2a4] == 49.0)) &&
                  ((float)param_1[0x2a4] <= 144.0)) && ((float)param_1[0x2a8] < 0.5235988)) {
                local_8 = (undefined1 *)0x7b58fc;
                FUN_007b1af0();
              }
              fVar1 = (float)param_1[0x2a4];
              uVar5 = (uint)(ushort)((ushort)(49.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 49.0) << 0xe);
              if (49.0 >= fVar1 && (fVar1 == 49.0) == 0) {
                fVar1 = (float)param_1[0x2a8];
                uVar5 = (uint)(ushort)((ushort)(1.134464 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                      (ushort)(fVar1 == 1.134464) << 0xe);
                if (!NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464)) {
                  local_8 = (undefined1 *)0x0;
                  local_c = (char *)0x0;
                  local_10 = 0;
                  puStack_14 = (undefined1 *)0x0;
                  fStack_18 = 4.59177e-40;
                  puStack_1c = &LAB_007b5936;
                  uVar5 = FUN_007b09c0();
                }
              }
            }
          }
          return uVar5;
        default:
          return uVar6;
        case 4:
          if (param_1[0x187] != 0) {
            local_8 = (undefined1 *)0x7bd165;
            uVar6 = FUN_007b60d0();
            if ((uVar6 == 0) && (param_1[0x187] == 3)) {
              if (((*(byte *)(param_1 + 0x4b0) & 2) != 0) &&
                 (((float)param_1[0x2a4] < 64.0 && ((float)param_1[0x2a8] < 0.7853982)))) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 4;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59184e-40;
                puStack_1c = &LAB_007bd1b5;
                FUN_007b09c0();
              }
              fVar1 = (float)param_1[0x2a8];
              uVar6 = (uint)(ushort)((ushort)(1.3962634 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 1.3962634) << 0xe);
              if ((1.3962634 < fVar1) || (*(char *)((int)param_1 + 0x1275) == '\0')) {
                local_8 = (undefined1 *)0x0;
                local_c = (char *)0x0;
                local_10 = 4;
                puStack_14 = (undefined1 *)0x0;
                fStack_18 = 4.59184e-40;
                puStack_1c = &LAB_007bd1e5;
                uVar6 = FUN_007b09c0();
              }
            }
          }
          return uVar6;
        case 5:
        case 0xd:
          goto switchD_007c39ee_caseD_b;
        case 7:
          uVar5 = FUN_007bd2f0();
          return uVar5;
        case 8:
        case 9:
          uVar5 = FUN_007bd6e0();
          return uVar5;
        }
      }
      if (0x70000 < (int)uVar5) {
        if ((int)uVar5 < 0x80001) {
          if (uVar5 == 0x80000) {
            return 0;
          }
          uVar6 = uVar5 - 0x70001;
          switch(uVar5) {
          default:
            return uVar6;
          case 0x70005:
            uVar5 = FUN_007b04e0();
            return uVar5;
          case 0x7000c:
            goto switchD_007c3a69_caseD_4;
          }
        }
        if (0x90002 < (int)uVar5) {
          if (uVar5 != 0x90003) {
            return uVar5;
          }
          uVar5 = FUN_007b7d70();
          return uVar5;
        }
        if (uVar5 == 0x90002) {
          return 0x90002;
        }
        return uVar5 - 0x80001;
      }
      if (uVar5 == 0x70000) {
        return 0;
      }
      uVar6 = 0;
      if (uVar5 - 0x60001 != 0) {
        return uVar5 - 0x60001;
      }
switchD_007c3a69_caseD_4:
      param_1[0x8e1] = 1;
switchD_007c39ee_caseD_0:
      return uVar6;
    }
    if (uVar5 == 0x50000) {
      local_8 = (undefined1 *)0xf;
      local_c = (char *)0x7b4a9a;
      iVar4 = FUN_00a8c760();
      uVar5 = 0;
      if (iVar4 != 0) {
        if (((float)param_1[0x4c9] < 0.0) && (param_1[0x8e0] != 0)) {
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
          param_1[0x47a] = 1;
                    /* WARNING: Could not recover jumptable at 0x007b4acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)();
          return uVar5;
        }
        local_8 = (undefined1 *)0x5;
        local_c = (char *)0x7b4ada;
        iVar4 = FUN_00a90070();
        uVar5 = 0;
        if (iVar4 != 0) {
          if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
            local_8 = (undefined1 *)0x0;
            local_c = (char *)0x0;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x0;
            fStack_18 = 4.59179e-40;
            puStack_1c = &LAB_007b4b1c;
            FUN_007b09c0();
          }
          fVar1 = (float)param_1[0x2a4];
          if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && ((float)param_1[0x2a4] <= 144.0))
             && ((float)param_1[0x2a8] < 0.5235988)) {
            local_8 = &LAB_007b4b5c;
            FUN_007b1af0();
          }
          fVar1 = (float)param_1[0x2a4];
          uVar5 = (uint)(ushort)((ushort)(49.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                (ushort)(fVar1 == 49.0) << 0xe);
          if (49.0 >= fVar1 && (fVar1 == 49.0) == 0) {
            fVar1 = (float)param_1[0x2a8];
            uVar5 = (uint)(ushort)((ushort)(1.134464 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                  (ushort)(fVar1 == 1.134464) << 0xe);
            if (!NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464)) {
              local_8 = (undefined1 *)0x0;
              local_c = (char *)0x0;
              local_10 = 0;
              puStack_14 = (undefined1 *)0x0;
              fStack_18 = 4.59177e-40;
              puStack_1c = &LAB_007b4b96;
              uVar5 = FUN_007b09c0();
            }
          }
        }
      }
      return uVar5;
    }
    uVar6 = uVar5 - 0x20001;
    switch(uVar6) {
    default:
      goto switchD_007c39ee_caseD_0;
    case 1:
      param_1[0x8e1] = 1;
      if (param_1[0x187] == 0) {
        return uVar6;
      }
      uVar5 = FUN_007b60d0();
      return uVar5;
    case 2:
      uVar5 = FUN_007afab0();
      return uVar5;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xe:
    case 0xf:
      goto switchD_007c3a69_caseD_4;
    case 10:
      uVar5 = FUN_007bbbd0();
      return uVar5;
    case 0xb:
      uVar5 = FUN_007afaf0();
      return uVar5;
    case 0xc:
      uVar5 = 1;
      param_1[0x8e1] = 1;
      if (param_1[0x187] != 0) {
        param_1[0x90e] = 0x40c00000;
        param_1[0x90d] = 1;
        param_1[0x90f] = 0x43960000;
        param_1[0x910] = 0x40490fdb;
        local_8 = (undefined1 *)param_1[0x714];
        local_c = "WAIT0";
        local_10 = 0x7b3efb;
        uVar5 = FUN_00a5e5e0();
        if ((char)uVar5 != '\0') {
          local_8 = (undefined1 *)0x0;
          local_c = (char *)0x0;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x0;
          fStack_18 = 1.83691e-40;
          puStack_1c = (undefined1 *)0x7b3f13;
          uVar5 = FUN_007b09c0();
          param_1[0x3b1] = 200;
        }
      }
      return uVar5;
    case 0xd:
      param_1[0x8e1] = 1;
      if (param_1[0x187] != 0) {
        param_1[0x90d] = 1;
        param_1[0x90e] = 0x40c00000;
        param_1[0x90f] = 0x43960000;
        param_1[0x910] = 0x40490fdb;
        fStack_60 = 0.0;
        fStack_5c = 0.0;
        fStack_58 = 10.0;
        iVar4 = FUN_00ac45b0(unaff_ESI);
        if (iVar4 != 0) {
          FUN_00ac45b0(unaff_ESI);
          iVar4 = FUN_00a7c8a0();
          if (iVar4 != 0) {
            fStack_60 = *(float *)(iVar4 + 0x40);
            fStack_5c = *(float *)(iVar4 + 0x44);
            fStack_58 = *(float *)(iVar4 + 0x48);
            uStack_54 = *(undefined4 *)(iVar4 + 0x4c);
            D3DXMatrixInverse(auStack_50,0,param_1 + 4);
            D3DXVec3TransformNormal(auStack_6c,auStack_6c,&fStack_5c);
            fStack_60 = fStack_60 + (float)puStack_20;
            fStack_5c = (float)puStack_1c + fStack_5c;
            fStack_58 = fStack_18 + fStack_58;
          }
        }
        cVar2 = FUN_00a5e5e0("WAIT1",param_1[0x714]);
        if ((cVar2 != '\0') || (param_1[0x3b1] < 1)) {
          FUN_007b09c0(0x20011,0,0,0,0);
          FUN_00c81e40(0x16);
        }
        if (((fStack_58 <= 7.0) && ((float)param_1[0x440] < 0.0)) || (param_1[0x8d8] < 1)) {
          FUN_007b09c0(0x2000f,0,0,0,0);
          sVar3 = FUN_00dde2d0(0,2);
          param_1[0x8d8] = sVar3 + 3;
        }
        fVar1 = (float)param_1[0x441];
        uVar6 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 0.0) << 0xe);
        if ((0.0 >= fVar1 && (fVar1 == 0.0) == 0) && (param_1[0x8ca] != 0)) {
          fVar1 = (float)param_1[0x2a4];
          uVar6 = (uint)(ushort)((ushort)(144.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                (ushort)(fVar1 == 144.0) << 0xe);
          if (144.0 < fVar1) {
            sVar3 = FUN_00dde2d0(0,1);
            if (sVar3 == 0) {
              uVar7 = 2;
            }
            else {
              uVar7 = 1;
            }
            uVar6 = FUN_007b6430(uVar7,0);
          }
          param_1[0x441] = 0x44160000;
        }
      }
      return uVar6;
    case 0x10:
      uVar5 = FUN_007b44b0();
      return uVar5;
    case 0x11:
      param_1[0x8e1] = 1;
      if (param_1[0x187] == 0) {
        return uVar6;
      }
      local_c = (char *)0x7bc870;
      uVar5 = FUN_007b60d0();
      if (uVar5 != 0) {
        return uVar5;
      }
      uVar5 = 0;
      if (param_1[0x8ca] == 0) goto LAB_007bcb35;
      fVar1 = (float)param_1[0x441];
      uVar5 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 0.0) << 0xe);
      if (0.0 < fVar1 || (fVar1 == 0.0) != 0) goto LAB_007bcb35;
      if (((float)param_1[0x2a8] < 1.0471976) &&
         (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0))) {
        iVar4 = param_1[0x8c6] % 3;
        if (iVar4 == 0) {
          local_c = (char *)0x0;
          if (1.0471976 <= (float)param_1[0x2a8]) {
            local_10 = 1;
            puStack_14 = (undefined1 *)0x7bc98e;
            FUN_007b6430();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x7bc99c;
            sVar3 = FUN_00dde2d0();
            param_1[0x441] = (int)((float)(int)sVar3 + 240.0);
          }
          else {
            local_10 = 0;
            puStack_14 = (undefined1 *)0x7bc960;
            FUN_007b6430();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x7bc96e;
            sVar3 = FUN_00dde2d0();
            param_1[0x441] = (int)((float)(int)sVar3 + 180.0);
          }
        }
        else if (iVar4 == 1) {
          local_c = (char *)0x0;
          local_10 = 1;
          puStack_14 = (undefined1 *)0x7bc923;
          FUN_007b6430();
          local_c = (char *)0x3c;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x7bc931;
          sVar3 = FUN_00dde2d0();
          param_1[0x441] = (int)((float)(int)sVar3 + 240.0);
        }
        else {
          local_c = (char *)(iVar4 + -2);
          if (local_c == (char *)0x0) {
            local_10 = 2;
            puStack_14 = (undefined1 *)0x7bc8ee;
            FUN_007b6430();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x7bc8fc;
            sVar3 = FUN_00dde2d0();
            param_1[0x441] = (int)((float)(int)sVar3 + 300.0);
          }
        }
      }
      if ((1.0471976 <= (float)param_1[0x2a8]) || (36.0 <= (float)param_1[0x2a3])) {
        fVar1 = (float)param_1[0x2a3];
        uVar5 = (uint)(ushort)((ushort)(36.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 36.0) << 0xe);
        if (36.0 >= fVar1 && (fVar1 == 36.0) == 0) {
          uVar5 = param_1[0x8c6] / 3;
          iVar4 = param_1[0x8c6] % 3;
          if (iVar4 == 0) {
            local_c = (char *)0x0;
            local_10 = 2;
            puStack_14 = (undefined1 *)0x7bcb0a;
            FUN_007b6430();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x7bcb18;
            uVar5 = FUN_00dde2d0();
            fVar1 = (float)(int)(short)uVar5;
          }
          else if (iVar4 == 1) {
            local_c = (char *)0x0;
            local_10 = 2;
            puStack_14 = (undefined1 *)0x7bcae6;
            FUN_007b6430();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x7bcaf4;
            sVar3 = FUN_00dde2d0();
            uVar5 = (uint)sVar3;
            fVar1 = (float)(int)uVar5;
          }
          else {
            local_c = (char *)(iVar4 + -2);
            if (local_c != (char *)0x0) goto LAB_007bcb2f;
            local_10 = 2;
            puStack_14 = (undefined1 *)0x7bcac0;
            FUN_007b6430();
            local_c = (char *)0x3c;
            local_10 = 0;
            puStack_14 = (undefined1 *)0x7bcace;
            uVar5 = FUN_00dde2d0();
            fVar1 = (float)(int)(short)uVar5;
          }
LAB_007bcb23:
          fVar1 = fVar1 + 240.0;
          goto LAB_007bcb29;
        }
      }
      else {
        uVar5 = param_1[0x8c6] / 3;
        iVar4 = param_1[0x8c6] % 3;
        if (iVar4 == 0) {
          local_c = (char *)0x0;
          local_10 = 1;
          puStack_14 = (undefined1 *)0x7bca62;
          FUN_007b6430();
          local_c = (char *)0x3c;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x7bca70;
          uVar5 = FUN_00dde2d0();
          fVar1 = (float)(int)(short)uVar5 + 180.0;
        }
        else {
          if (iVar4 != 1) {
            local_c = (char *)(iVar4 + -2);
            if (local_c == (char *)0x0) {
              local_10 = 2;
              puStack_14 = (undefined1 *)0x7bca0c;
              FUN_007b6430();
              local_c = (char *)0x3c;
              local_10 = 0;
              puStack_14 = (undefined1 *)0x7bca1a;
              uVar5 = FUN_00dde2d0();
              fVar1 = (float)(int)(short)uVar5;
              goto LAB_007bcb23;
            }
            goto LAB_007bcb2f;
          }
          local_c = (char *)0x0;
          local_10 = 1;
          puStack_14 = (undefined1 *)0x7bca35;
          FUN_007b6430();
          local_c = (char *)0x3c;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x7bca43;
          sVar3 = FUN_00dde2d0();
          uVar5 = (uint)sVar3;
          fVar1 = (float)(int)uVar5 + 180.0;
        }
LAB_007bcb29:
        param_1[0x441] = (int)fVar1;
      }
LAB_007bcb2f:
      param_1[0x8c6] = param_1[0x8c6] + 1;
LAB_007bcb35:
      param_1[0x90e] = 0x40c00000;
      param_1[0x90d] = 1;
      param_1[0x90f] = 0x43960000;
      param_1[0x910] = 0x40490fdb;
      if (param_1[0x128] == 8) {
        fVar1 = (float)param_1[0x2a4];
        uVar5 = (uint)(ushort)((ushort)(100.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 100.0) << 0xe);
        if (100.0 >= fVar1 && (fVar1 == 100.0) == 0) {
          local_c = (char *)0x0;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x0;
          fStack_18 = 0.0;
          puStack_1c = (undefined1 *)0x20001;
          puStack_20 = (undefined1 *)0x7bcb93;
          FUN_007b09c0();
          local_c = (char *)0x0;
          local_10 = 0x7bcb9f;
          FUN_00c3ccb0();
          local_c = (char *)0x0;
          local_10 = 4;
          puStack_14 = &LAB_007bcbae;
          uVar5 = FUN_00a88b50();
        }
      }
      return uVar5;
    }
  }
  if (uVar5 == 0x20000) {
    return 0;
  }
  uVar6 = uVar5 - 0x10000;
  switch(uVar6) {
  default:
    goto switchD_007c39ee_caseD_0;
  case 4:
    uVar5 = FUN_007ba430();
    return uVar5;
  case 5:
    uVar5 = FUN_007ba630();
    return uVar5;
  case 6:
    uVar5 = FUN_007baaa0();
    return uVar5;
  case 9:
  case 10:
    uVar5 = FUN_007baed0();
    return uVar5;
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
switchD_007c39ee_caseD_b:
    if (param_1[0x187] == 0) {
      return uVar6;
    }
    uVar5 = FUN_007b60d0();
    return uVar5;
  case 0xd:
    uVar5 = FUN_007bb0e0();
    return uVar5;
  case 0xe:
    uVar5 = FUN_007b3120();
    return uVar5;
  case 0xf:
    if (param_1[0x187] == 0) {
      return uVar6;
    }
    local_c = (char *)0x7bcbd6;
    uVar5 = FUN_007b60d0();
    if (uVar5 != 0) {
      return uVar5;
    }
    if ((1.0471976 <= (float)param_1[0x2a8]) || ((float)param_1[0x2a3] <= 100.0)) {
      param_1[0x5c5] = 0;
    }
    else {
      param_1[0x5c5] = 1;
    }
    if ((((float)param_1[0x440] < 0.0) && ((float)param_1[0x2a8] < 1.0471976)) &&
       ((float)param_1[0x2a3] <= 36.0)) {
      local_c = (char *)0x0;
      local_10 = 0;
      puStack_14 = (undefined1 *)0x0;
      fStack_18 = 0.0;
      puStack_1c = (undefined1 *)0x5000f;
      puStack_20 = (undefined1 *)0x7bcc5d;
      FUN_007b09c0();
    }
    if ((((float)param_1[0x441] < 0.0) && ((float)param_1[0x2a8] < 1.0471976)) &&
       (100.0 < (float)param_1[0x2a3])) {
      local_c = (char *)0x0;
      local_10 = 0;
      puStack_14 = (undefined1 *)0x0;
      fStack_18 = 0.0;
      puStack_1c = (undefined1 *)0x5000e;
      puStack_20 = &LAB_007bccaa;
      FUN_007b09c0();
    }
    if ((param_1[0x8ca] == 0) || (0.0 <= (float)param_1[0x441])) goto LAB_007bcde8;
    fVar1 = (float)param_1[0x2a3];
    if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
      local_c = (char *)0x0;
      local_10 = 2;
      puStack_14 = (undefined1 *)0x7bcdbf;
      FUN_007b6430();
      local_c = (char *)0x78;
      local_10 = 0;
      puStack_14 = (undefined1 *)0x7bcdcd;
      sVar3 = FUN_00dde2d0();
      fVar1 = (float)(int)sVar3;
LAB_007bcdd6:
      fVar1 = fVar1 + 420.0;
LAB_007bcddc:
      param_1[0x441] = (int)fVar1;
    }
    else {
      iVar4 = param_1[0x8c6] % 3;
      if (iVar4 == 0) {
        local_c = (char *)0x0;
        if (0.5235988 <= (float)param_1[0x2a8]) {
          local_10 = 2;
          puStack_14 = (undefined1 *)0x7bcd99;
          FUN_007b6430();
          local_c = (char *)0x78;
          local_10 = 0;
          puStack_14 = (undefined1 *)0x7bcda7;
          sVar3 = FUN_00dde2d0();
          fVar1 = (float)(int)sVar3;
          goto LAB_007bcdd6;
        }
        local_10 = 0;
        puStack_14 = (undefined1 *)0x7bcd71;
        FUN_007b6430();
        local_c = (char *)0x78;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x7bcd7f;
        sVar3 = FUN_00dde2d0();
        fVar1 = (float)(int)sVar3 + 240.0;
        goto LAB_007bcddc;
      }
      if (iVar4 == 1) {
        local_c = (char *)0x0;
        local_10 = 1;
        puStack_14 = (undefined1 *)0x7bcd31;
        FUN_007b6430();
        local_c = (char *)0x78;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x7bcd3f;
        sVar3 = FUN_00dde2d0();
        fVar1 = (float)(int)sVar3 + 360.0;
        goto LAB_007bcddc;
      }
      local_c = (char *)(iVar4 + -2);
      if (local_c == (char *)0x0) {
        local_10 = 2;
        puStack_14 = (undefined1 *)0x7bcd08;
        FUN_007b6430();
        local_c = (char *)0x78;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x7bcd16;
        sVar3 = FUN_00dde2d0();
        fVar1 = (float)(int)sVar3;
        goto LAB_007bcdd6;
      }
    }
    param_1[0x8c6] = param_1[0x8c6] + 1;
LAB_007bcde8:
    fVar1 = (float)param_1[0x248];
    uVar5 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 >= fVar1 && (fVar1 == 0.0) == 0) {
      if ((float)param_1[0x2a7] < -1.0471976) {
        local_c = (char *)0x0;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x0;
        fStack_18 = 0.0;
        puStack_1c = (undefined1 *)0x10012;
        puStack_20 = &LAB_007bce1e;
        FUN_007b09c0();
      }
      fVar1 = (float)param_1[0x2a7];
      uVar5 = (uint)(ushort)((ushort)(1.0471976 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 1.0471976) << 0xe);
      if (1.0471976 < fVar1) {
        local_c = (char *)0x0;
        local_10 = 0;
        puStack_14 = (undefined1 *)0x0;
        fStack_18 = 0.0;
        puStack_1c = (undefined1 *)0x10013;
        puStack_20 = &LAB_007bce45;
        uVar5 = FUN_007b09c0();
      }
    }
    param_1[0x90d] = 1;
    param_1[0x90e] = 0x40c00000;
    param_1[0x90f] = 0x43480000;
    param_1[0x910] = 0x40490fdb;
    return uVar5;
  case 0x14:
    uVar5 = FUN_007b37d0();
    return uVar5;
  case 0x15:
    if (param_1[0x187] == 0) {
      return uVar6;
    }
    local_c = (char *)0x7bb8e6;
    uVar5 = FUN_007b60d0();
    if (uVar5 != 0) {
      return uVar5;
    }
    local_c = (char *)0x3d888889;
    local_10 = 0x7bb904;
    puStack_1c = (undefined1 *)(**(code **)(*param_1 + 800))();
    if (puStack_1c == (undefined1 *)0x0) {
      puStack_20 = (undefined1 *)0x70005;
      param_1[0x128] = 0;
      uStack_24 = 0x7bb91e;
      fStack_18 = (float)puStack_1c;
      puStack_14 = puStack_1c;
      local_10 = (uint)puStack_1c;
      uVar5 = FUN_007b09c0();
      return uVar5;
    }
    if (param_1[0x8ca] == 0) goto LAB_007bba67;
    fVar1 = (float)param_1[0x2a8];
    puStack_1c = (undefined1 *)
                 (uint)(ushort)((ushort)(1.2217305 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 1.2217305) << 0xe);
    if (1.2217305 < fVar1 || (fVar1 == 1.2217305) != 0) goto LAB_007bba67;
    fVar1 = (float)param_1[0x441];
    puStack_1c = (undefined1 *)
                 (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1 || (fVar1 == 0.0) != 0) goto LAB_007bba67;
  }
  puStack_1c = (undefined1 *)(param_1[0x8c6] / 5);
  switch(param_1[0x8c6] % 5) {
  case 0:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 1.1362312e-38;
    FUN_007b6430();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 1.1362336e-38;
    puStack_1c = (undefined1 *)FUN_00dde2d0();
    uVar5 = (uint)(short)puStack_1c;
    goto LAB_007bba55;
  case 1:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x1;
    fStack_18 = 1.1362374e-38;
    FUN_007b6430();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 1.1362398e-38;
    sVar3 = FUN_00dde2d0();
    puStack_1c = (undefined1 *)(int)sVar3;
    fVar1 = (float)(int)puStack_1c + 180.0;
    break;
  case 2:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x2;
    fStack_18 = 1.1362441e-38;
    FUN_007b6430();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 1.1362465e-38;
    puStack_1c = (undefined1 *)FUN_00dde2d0();
    fVar1 = (float)(int)(short)puStack_1c + 300.0;
    break;
  case 3:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x1;
    fStack_18 = 1.1362507e-38;
    FUN_007b6430();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 1.1362531e-38;
    puStack_1c = (undefined1 *)FUN_00dde2d0();
    fVar1 = (float)(int)(short)puStack_1c + 180.0;
    break;
  case 4:
    local_10 = 0;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 1.1362573e-38;
    FUN_007b6430();
    local_10 = 0xb4;
    puStack_14 = (undefined1 *)0x0;
    fStack_18 = 1.1362597e-38;
    sVar3 = FUN_00dde2d0();
    puStack_1c = (undefined1 *)(int)sVar3;
    uVar5 = (uint)puStack_1c;
LAB_007bba55:
    fVar1 = (float)(int)uVar5 + 60.0;
    break;
  default:
    goto switchD_007bb96f_default;
  }
  param_1[0x441] = (int)fVar1;
switchD_007bb96f_default:
  param_1[0x8c6] = param_1[0x8c6] + 1;
LAB_007bba67:
  param_1[0x90d] = 1;
  param_1[0x90e] = 0x40800000;
  param_1[0x90f] = 0x43480000;
  param_1[0x910] = 0x3fc90fdb;
  return (uint)puStack_1c;
}

// 007C3C60  FUN_007c3c60  size=877  [between]
void __fastcall FUN_007c3c60(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  undefined4 auStack_78 [2];
  undefined4 uStack_70;
  float afStack_6c [2];
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 10.0;
  iVar2 = FUN_00ac45b0();
  if (iVar2 != 0) {
    FUN_00ac45b0();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      local_60 = *(float *)(iVar2 + 0x40);
      local_5c = *(float *)(iVar2 + 0x44);
      local_58 = *(float *)(iVar2 + 0x48);
      local_54 = *(undefined4 *)(iVar2 + 0x4c);
      D3DXMatrixInverse(local_50,0,param_1 + 0x10);
      D3DXVec3TransformNormal(afStack_6c,afStack_6c,&local_5c);
      local_60 = fStack_20 + local_60;
      local_5c = fStack_1c + local_5c;
      local_58 = fStack_18 + local_58;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("TATE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,2,0,0xb,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0xc,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,9,0x3daaaaab,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(undefined4 *)(param_1 + 0xec8) = 0x3d4ccccd;
    if ((*(byte *)(param_1 + 0x2180) & 4) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar3);
      *(byte *)(param_1 + 0x2180) = *(byte *)(param_1 + 0x2180) | 4;
      *(undefined1 *)(param_1 + 0x2188) = 0xff;
    }
    sVar1 = FUN_00dde2d0(0,2);
    *(undefined4 *)(param_1 + 0x1104) = 0x43340000;
    *(int *)(param_1 + 0x2360) = sVar1 + 3;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007c3edc;
  if (((*(int *)(param_1 + 9000) != 0) && (*(float *)(param_1 + 0xa90) < 400.0)) &&
     (*(float *)(param_1 + 0x1104) < 0.0)) {
    *(undefined4 *)(param_1 + 0x1104) = 0x43340000;
  }
  fVar6 = 0.0;
  if (6.0 < local_58) {
    fVar6 = 0.0;
  }
  else if (*(int *)(param_1 + 0xa84) != 0) {
    fVar6 = (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44)) * 0.58823526
    ;
    if (NAN(fVar6) || 2.0 < fVar6 == (fVar6 == 2.0)) {
      if (fVar6 < 0.0 != (fVar6 == 0.0)) {
        fVar6 = 0.0;
      }
    }
    else {
      fVar6 = 2.0;
    }
  }
  FUN_00a947e0(0,0,fVar6,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007c3edc:
  fVar4 = (float10)FUN_00a581b0(auStack_78,
                                *(float *)(param_1 + 0xec8) + *(float *)(param_1 + 0x1c54),
                                *(undefined4 *)(param_1 + 0x1c50));
  *(float *)(param_1 + 0x1c50) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1c54) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x1c54));
  FUN_00a585a0(afStack_6c,0,(float)fVar4);
  if ((float10)0 == (float10)fStack_64) {
    return;
  }
  fVar4 = (float10)fpatan((float10)afStack_6c[0],(float10)fStack_64);
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)3.1415927));
  FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),(float)fVar4,
               0x3e99999a,0x3c0efa35,0x3e8efa35);
  return;
}

// 007C3FD0  FUN_007c3fd0  size=690  [between]
void __fastcall FUN_007c3fd0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 local_160 [348];
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00aa4080(0xaa,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(4,uVar2,uVar3);
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x2c080,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    FUN_0043f5b0(9,0x41200000);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ee],param_1[0x8ed]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x47a] = 0;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    param_1[0x139] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(byte *)(param_1 + 0x860) & 4) == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar2);
      *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 4;
      *(undefined1 *)(param_1 + 0x862) = 0xff;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (param_1[0x46a] != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,4,0x3f800000,0);
    piVar5 = param_1 + 0x444;
    uVar2 = FUN_00a7c8a0(piVar5);
    FUN_004117d0(5,uVar2,piVar5);
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x2c080,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    FUN_00e5e0c0("em0080_se_dmg_explosion",param_1,0xffffffff,0);
    (**(code **)(*param_1 + 0x20))();
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
    if (param_1[0x43a] != 0) {
      FUN_00916360();
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c57120(param_1[0x13c]);
    piVar5 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar5);
    param_1[0x1af] = 1;
  }
  return;
}

// 007C4290  FUN_007c4290  size=702  [between]
void __fastcall FUN_007c4290(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 local_160 [348];
  
  uVar3 = 0;
  if (param_1[0x8c8] == 0) {
    uVar3 = 0x40;
  }
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00aa4080(0xe2,0,0x3e2aaaab,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar4 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(4,uVar2,uVar4);
    puVar5 = local_160;
    uVar2 = FUN_00e00b40(0x2c080,puVar5);
    FUN_00a8c930(uVar2,puVar5);
    FUN_0043f5b0(9,0x41200000);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ee],param_1[0x8ed]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x47a] = 0;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    param_1[0x139] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(byte *)(param_1 + 0x860) & 4) == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar2);
      *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 4;
      *(undefined1 *)(param_1 + 0x862) = 0xff;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (param_1[0x46a] != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,4,0x3f800000,0);
    piVar6 = param_1 + 0x444;
    uVar2 = FUN_00a7c8a0(piVar6);
    FUN_004117d0(5,uVar2,piVar6);
    puVar5 = local_160;
    uVar2 = FUN_00e00b40(0x2c080,puVar5);
    FUN_00a8c930(uVar2,puVar5);
    FUN_00e5e0c0("em0080_se_dmg_explosion",param_1,0xffffffff,0);
    (**(code **)(*param_1 + 0x20))();
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
    if (param_1[0x43a] != 0) {
      FUN_00916360();
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c57120(param_1[0x13c]);
    piVar6 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar6);
    param_1[0x1af] = 1;
  }
  return;
}

// 007C4550  FUN_007c4550  size=632  [between]
void __fastcall FUN_007c4550(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 local_160 [348];
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00a8c9b0(0,0,0x3f800000,0);
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(4,uVar1,uVar3);
    puVar4 = local_160;
    uVar1 = FUN_00e00b40(0x2c080,puVar4);
    FUN_00a8c930(uVar1,puVar4);
    FUN_0043f5b0(9,0x41200000);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ee],param_1[0x8ed]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x47a] = 0;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(byte *)(param_1 + 0x860) & 4) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar1);
      *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 4;
      *(undefined1 *)(param_1 + 0x862) = 0xff;
    }
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x46a] != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00a8c9b0(0,4,0x3f800000,0);
  piVar5 = param_1 + 0x444;
  uVar1 = FUN_00a7c8a0(piVar5);
  FUN_004117d0(5,uVar1,piVar5);
  puVar4 = local_160;
  uVar1 = FUN_00e00b40(0x2c080,puVar4);
  FUN_00a8c930(uVar1,puVar4);
  FUN_00e5e0c0("em0080_se_dmg_explosion",param_1,0xffffffff,0);
  (**(code **)(*param_1 + 0x20))();
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar2 != 0)) {
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
  }
  if (param_1[0x43a] != 0) {
    FUN_00916360();
  }
  FUN_00c4d1a0(param_1[0x13c],0);
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00c57120(param_1[0x13c]);
  piVar5 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(piVar5);
  param_1[0x1af] = 1;
  return;
}

// 007C47D0  FUN_007c47d0  size=533  [between]
void __fastcall FUN_007c47d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_160 [348];
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_00aa4080(0xed,0,0x3f000000,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x47a] = 0;
    param_1[0x4ad] = 0;
    param_1[0x248] = 0x42700000;
    param_1[0x4b8] = param_1[0x4b8] | 0x14;
    *(undefined1 *)((int)param_1 + 0x1275) = 10;
    param_1[0x128] = 4;
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(byte *)(param_1 + 0x860) & 4) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar1);
      *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 4;
      *(undefined1 *)(param_1 + 0x862) = 0xff;
    }
    FUN_00a8c9b0(0,0,0x3f800000,0);
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(4,uVar1,uVar3);
    puVar4 = local_160;
    uVar1 = FUN_00e00b40(0x2c080,puVar4);
    FUN_00a8c930(uVar1,puVar4);
    if (((int *)param_1[0x1e6] != (int *)0x0) &&
       (iVar2 = (**(code **)(*(int *)param_1[0x1e6] + 4))(9), iVar2 != 0)) {
      if ((int *)param_1[0x1e6] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1e6] + 4))(9);
      }
      FUN_00eaa6e0(0x41200000,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ee],param_1[0x8ed]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_007b09c0(0x80002,0,0,0,0);
  }
  return;
}

// 007C49F0  FUN_007c49f0  size=96  [between]
void __thiscall FUN_007c49f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  local_1c = param_3;
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 007C4A50  FUN_007c4a50  size=8331  [between]
void __thiscall FUN_007c4a50(int param_1,char param_2)

{
  float fVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0;
  *(undefined4 *)(param_1 + 0x12b4) = 0;
  local_28 = 0;
  local_24 = 0;
  if (param_2 == '\0') {
    if ((*(int *)(param_1 + 0xdb0) == 1) || (*(int *)(param_1 + 0xdb0) == 0)) {
      if (*(float *)(param_1 + 0xa8c) <= 36.0) {
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42200000;
        local_24 = 0;
        local_28 = 3;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_30 = 1;
        local_18 = 0;
        local_2c = 0x42f00000;
        if (sVar3 != 0) {
          local_28 = 6;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_24 = 0;
          local_2c = 0x43700000;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x41200000;
          local_24 = 0;
          local_28 = 2;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          *(undefined1 *)(param_1 + 0x1275) = 2;
          return;
        }
        local_28 = 7;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_24 = 0;
        local_2c = 0x43700000;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_28 = 2;
        local_2c = 0x41200000;
LAB_007c4e67:
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        *(undefined1 *)(param_1 + 0x1275) = 2;
        return;
      }
      if (100.0 < *(float *)(param_1 + 0xa8c)) {
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (NAN(fVar1) || 196.0 < fVar1 == (fVar1 == 196.0)) goto LAB_007c6ac7;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42700000;
        local_24 = 0;
        local_28 = 2;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_30 = 3;
        local_18 = 0;
        local_2c = 0x42c80000;
        if (sVar3 == 0) {
          local_28 = 4;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43480000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42c80000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43480000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42c80000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_24 = 0;
          local_2c = 0x42a00000;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_2c = 0x43200000;
          local_28 = 4;
          goto LAB_007c6551;
        }
        local_28 = 5;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x43480000;
      }
      else {
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 3;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_30 = 3;
        local_18 = 0;
        local_2c = 0x42f00000;
        if (sVar3 != 0) {
          local_28 = 5;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_24 = 0;
          local_2c = 0x43700000;
          local_28 = 4;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42a00000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_007c0670(local_34,&local_30);
          local_28 = 4;
          local_2c = 0x43200000;
          goto LAB_007c4e67;
        }
        local_28 = 4;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x42f00000;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 4;
      local_30 = 3;
      FUN_007c0670(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x42a00000;
      local_24 = 0;
      local_28 = 5;
      local_30 = 3;
      FUN_007c0670(local_34,&local_30);
      local_28 = 4;
      local_2c = 0x43200000;
    }
    else if (36.0 < *(float *)(param_1 + 0xa8c)) {
      sVar3 = FUN_00dde2d0(0,1);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_24 = 0;
      local_2c = 0x42f00000;
      local_30 = 1;
      if (sVar3 != 0) {
        local_28 = 5;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x42f00000;
        goto LAB_007c573f;
      }
      local_28 = 4;
      FUN_007c0670(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x43700000;
      local_24 = 0;
      local_28 = 5;
      local_30 = 1;
      FUN_007c0670(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x42f00000;
      local_24 = 0;
      local_28 = 6;
      local_30 = 1;
      FUN_007c0670(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x43700000;
      local_24 = 0;
      local_28 = 7;
      local_30 = 3;
      FUN_007c0670(local_34,&local_30);
      local_28 = 6;
      local_2c = 0x42f00000;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x42f00000;
      local_24 = 0;
      local_28 = 3;
      local_30 = 1;
      FUN_007c0670(local_34,&local_30);
      sVar3 = FUN_00dde2d0(0,1);
      local_20 = 0;
      local_24 = 0;
      local_1c = 0;
      local_18 = 0;
      if (sVar3 == 0) {
        local_2c = 0x42f00000;
        local_28 = 6;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 2;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x42a00000;
LAB_007c573f:
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_28 = 7;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x43700000;
        local_28 = 6;
      }
      else {
        local_2c = 0x43340000;
        local_28 = 2;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x43700000;
        local_28 = 6;
      }
    }
  }
  else {
    if (param_2 == '\x01') {
      sVar3 = FUN_00dde2d0(0,1);
      bVar2 = *(float *)(param_1 + 0xa8c) <= 64.0;
      if (sVar3 == 0) {
        if (bVar2) {
          local_24 = 0;
          local_20 = 0;
          local_28 = 3;
          local_1c = 0;
          local_30 = 0x61;
          local_18 = 0;
          local_2c = 0x42700000;
        }
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x69;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x2b;
        FUN_007c0670(local_34,&local_30);
      }
      else {
        if (bVar2) {
          local_24 = 0;
          local_20 = 0;
          local_28 = 3;
          local_1c = 0;
          local_30 = 0x61;
          local_18 = 0;
          local_2c = 0x42700000;
        }
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x69;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x69;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_24 = 0;
        local_2c = 0x41700000;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x2b;
        FUN_007c0670(local_34,&local_30);
      }
      local_28 = 6;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x41c80000;
      local_24 = 0;
      local_30 = 0x43;
      FUN_007c0670(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x41a00000;
      local_28 = 2;
      local_30 = 0x43;
      local_24 = 0;
      FUN_007c0670(local_34,&local_30);
      *(undefined1 *)(param_1 + 0x1275) = 2;
      return;
    }
    if (param_2 == '\x02') {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x42700000;
      local_28 = 3;
      local_30 = 9;
      local_24 = 0;
      FUN_007c0670(local_34,&local_30);
      *(undefined1 *)(param_1 + 0x1275) = 2;
      return;
    }
    if (param_2 != '\x03') {
LAB_007c6ac7:
      *(undefined1 *)(param_1 + 0x1275) = 2;
      return;
    }
    iVar4 = FUN_00932720();
    local_24 = 0;
    local_30 = 1;
    if (iVar4 != 0x410) {
      local_28 = 3;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      if (64.0 < *(float *)(param_1 + 0xa8c)) {
        local_2c = 0x41a00000;
        FUN_007c0670(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        if (sVar3 != 0) {
          FUN_007aeb10(5,0x42f00000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(4,0x43700000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(5,0x42f00000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(4,0x43700000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(5,0x42f00000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(4,0x43700000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(5,0x42a00000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(4,0x43200000,3);
          FUN_007c0670(local_34,&local_30);
          *(undefined1 *)(param_1 + 0x1275) = 2;
          return;
        }
        FUN_007aeb10(4,0x42c80000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(5,0x43480000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(4,0x42c80000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(5,0x43480000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(4,0x42c80000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(5,0x42700000,3);
        FUN_007c0670(local_34,&local_30);
        uVar6 = 0x42700000;
        uVar5 = 4;
      }
      else {
        local_2c = 0x42200000;
        FUN_007c0670(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        if (sVar3 == 0) {
          FUN_007aeb10(7,0x42f00000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(4,0x42a00000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(5,0x43480000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(4,0x42c80000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(5,0x43480000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(4,0x42c80000,3);
          FUN_007c0670(local_34,&local_30);
          FUN_007aeb10(2,0x41200000,3);
          FUN_007c0670(local_34,&local_30);
          *(undefined1 *)(param_1 + 0x1275) = 2;
          return;
        }
        FUN_007aeb10(6,0x42f00000,1);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(5,0x43700000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(4,0x42f00000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(5,0x43700000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(4,0x42f00000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(5,0x43700000,3);
        FUN_007c0670(local_34,&local_30);
        FUN_007aeb10(4,0x42f00000,3);
        FUN_007c0670(local_34,&local_30);
        uVar6 = 0x41200000;
        uVar5 = 2;
      }
      FUN_007aeb10(uVar5,uVar6,3);
      goto LAB_007c6561;
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_2c = 0x42a00000;
    if (900.0 < *(float *)(param_1 + 0xa8c)) {
      local_28 = 2;
      FUN_007c0670(local_34,&local_30);
      sVar3 = FUN_00dde2d0(0,1);
      local_20 = 0;
      local_24 = 0;
      local_1c = 0;
      local_30 = 3;
      local_18 = 0;
      if (sVar3 == 0) {
        local_2c = 0x42c80000;
        local_28 = 4;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_24 = 0;
        local_18 = 0;
        local_28 = 5;
        local_30 = 3;
        local_2c = 0x42700000;
        FUN_007c0670(local_34,&local_30);
        local_28 = 6;
        local_2c = 0x42700000;
      }
      else {
        local_2c = 0x42f00000;
        local_28 = 5;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42200000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42200000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_24 = 0;
        local_18 = 0;
        local_28 = 4;
        local_30 = 3;
        local_2c = 0x43700000;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x43200000;
        local_28 = 4;
      }
    }
    else {
      local_28 = 3;
      FUN_007c0670(local_34,&local_30);
      sVar3 = FUN_00dde2d0(0,1);
      if (sVar3 != 0) {
        local_24 = 0;
        local_20 = 0;
        local_28 = 3;
        local_1c = 0;
        local_30 = 1;
        local_18 = 0;
        local_2c = 0x42f00000;
      }
      FUN_007c0670(local_34,&local_30);
      sVar3 = FUN_00dde2d0(0,1);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_24 = 0;
      local_2c = 0x42f00000;
      if (sVar3 == 0) {
        local_28 = 7;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x42480000;
      }
      else {
        local_28 = 6;
        local_30 = 1;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43200000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_007c0670(local_34,&local_30);
        local_2c = 0x42700000;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 4;
      local_30 = 3;
      FUN_007c0670(local_34,&local_30);
      local_2c = 0x41200000;
      local_28 = 2;
    }
  }
LAB_007c6551:
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = 3;
  local_24 = 0;
LAB_007c6561:
  FUN_007c0670(local_34,&local_30);
  *(undefined1 *)(param_1 + 0x1275) = 2;
  return;
}

// 007C6AE0  FUN_007c6ae0  size=75  [between]
void FUN_007c6ae0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_1,uVar1,uVar2);
  puVar3 = local_160;
  uVar1 = FUN_00e00b40(0x2c080,puVar3);
  FUN_00a8c930(uVar1,puVar3);
  return;
}

// 007C6B70  FUN_007c6b70  size=934  [between]
void __fastcall FUN_007c6b70(byte *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  int local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00a7c8a0();
  }
  if (((*(int *)(iVar7 + 9000) != 0) &&
      (fVar13 = *(float *)(iVar7 + 0x40) - *(float *)(iVar7 + 0x2340),
      fVar2 = *(float *)(iVar7 + 0x44) - *(float *)(iVar7 + 0x2344),
      fVar14 = *(float *)(iVar7 + 0x48) - *(float *)(iVar7 + 0x2348),
      fVar13 = SQRT(fVar14 * fVar14 + fVar2 * fVar2 + fVar13 * fVar13),
      *(float *)(param_1 + 0x48) < fVar13)) && (fVar13 < *(float *)(param_1 + 0x4c))) {
    param_1[8] = 2;
    param_1[9] = 0;
    return;
  }
  local_50 = *(float *)(param_1 + 0x10);
  pfVar1 = (float *)(param_1 + 0x10);
  local_4c = *(undefined4 *)(param_1 + 0x14);
  local_48 = *(undefined4 *)(param_1 + 0x18);
  local_44 = *(undefined4 *)(param_1 + 0x1c);
  switch(param_1[9]) {
  case 0:
    sVar6 = FUN_00dde2d0(0,300);
    param_1[9] = param_1[9] + 1;
    local_54 = (int)sVar6;
    *(float *)(param_1 + 0xc) = (float)local_54 + 60.0;
    iVar11 = FUN_00a81330();
    if (iVar11 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00a7c8a0();
    }
    FUN_00cbbb50(uVar8);
  case 1:
    fVar13 = *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xc) = fVar13 - *(float *)(param_1 + 0x24);
    if (fVar13 - *(float *)(param_1 + 0x24) < 0.0) {
      bVar5 = *param_1;
      if ((bVar5 & 1) == 0) {
        bVar5 = bVar5 | 1;
      }
      else {
        bVar5 = bVar5 & 0xfe;
      }
      *param_1 = bVar5;
    }
    local_50 = *pfVar1;
    local_4c = *(undefined4 *)(param_1 + 0x14);
    local_48 = *(undefined4 *)(param_1 + 0x18);
    local_44 = *(undefined4 *)(param_1 + 0x1c);
    iVar11 = FUN_00ac45b0();
    piVar9 = (int *)0x0;
    if (iVar11 != 0) {
      FUN_00ac45b0();
      piVar9 = (int *)FUN_00a7c8a0();
    }
    pfVar10 = (float *)(**(code **)(*piVar9 + 0x204))();
    fVar13 = *(float *)(iVar7 + 0x40) - *pfVar10;
    fVar2 = *(float *)(iVar7 + 0x44) - pfVar10[1];
    fVar14 = *(float *)(iVar7 + 0x48) - pfVar10[2];
    *(float *)(param_1 + 0x58) = SQRT(fVar13 * fVar13 + fVar2 * fVar2 + fVar14 * fVar14) - 6.0;
    iVar7 = FUN_00a81330();
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_00a7c8a0();
    }
    D3DXVec3TransformNormal(&local_54,param_1 + 0x50,iVar7 + 0x10);
    fVar13 = *(float *)(param_1 + 0x24) * 0.3;
    fVar14 = fVar13;
    fVar12 = (float10)FUN_00fdc1f0(fVar13,fVar13);
    FUN_00a8dbe0(pfVar1,pfVar1,&stack0xffffffa0,(float)fVar12,fVar13,fVar14);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    return;
  case 2:
    sVar6 = FUN_00dde2d0(0,0xb4);
    param_1[9] = param_1[9] + 1;
    local_54 = (int)sVar6;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    *(float *)(param_1 + 0xc) = (float)local_54 + 300.0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  case 3:
    fVar13 = *(float *)(param_1 + 0x40);
    fVar14 = *(float *)(param_1 + 0x24);
    fVar2 = *(float *)(param_1 + 0x30) * fVar13 * fVar14;
    fVar3 = *(float *)(param_1 + 0x34) * fVar13 * fVar14;
    fVar4 = *(float *)(param_1 + 0x38) * fVar13 * fVar14;
    fVar14 = fVar14 * *(float *)(param_1 + 0x3c) * fVar13;
    fVar13 = *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = fVar13 + 0.001;
    if (0.03 < fVar13 + 0.001) {
      param_1[0x40] = 0x8f;
      param_1[0x41] = 0xc2;
      param_1[0x42] = 0xf5;
      param_1[0x43] = 0x3c;
    }
    if ((*param_1 & 1) != 0) {
      fVar2 = fVar2 * -1.0;
      fVar3 = fVar3 * -1.0;
      fVar4 = fVar4 * -1.0;
      fVar14 = fVar14 * -1.0;
    }
    *pfVar1 = fVar2 + *pfVar1;
    *(float *)(param_1 + 0x14) = fVar3 + *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = fVar4 + *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = fVar14 + *(float *)(param_1 + 0x1c);
    iVar11 = FUN_00a81330();
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = FUN_00a7c8a0();
    }
    local_40 = *(float *)(iVar11 + 0x40);
    local_38 = *(float *)(iVar11 + 0x48);
    local_34 = *(float *)(iVar11 + 0x4c);
    if (*(int *)(iVar7 + 0xe90) == 0) {
      local_3c = 3.0;
    }
    else {
      local_3c = 6.0;
    }
    local_3c = *(float *)(iVar11 + 0x44) + local_3c;
    local_30 = *pfVar1 - local_40;
    local_2c = *(float *)(param_1 + 0x14) - local_3c;
    local_28 = *(float *)(param_1 + 0x18) - local_38;
    local_24 = *(float *)(param_1 + 0x1c) - local_34;
    iVar7 = FUN_007c0510(local_20,&local_40,&local_30);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
      *pfVar1 = local_50;
      *(undefined4 *)(param_1 + 0x14) = local_4c;
      *(undefined4 *)(param_1 + 0x18) = local_48;
      *(undefined4 *)(param_1 + 0x1c) = local_44;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      param_1[9] = 0;
      return;
    }
    fVar13 = *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xc) = fVar13 - *(float *)(param_1 + 0x24);
    if (fVar13 - *(float *)(param_1 + 0x24) < 0.0) {
      param_1[9] = 0;
    }
  default:
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    return;
  }
}

// 007C6F30  FUN_007c6f30  size=528  [between]
void __fastcall FUN_007c6f30(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar8 = FUN_00a81330();
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00a7c8a0();
  }
  local_30 = *(float *)(iVar8 + 0x2340);
  local_2c = *(float *)(iVar8 + 0x2344);
  local_28 = *(float *)(iVar8 + 0x2348);
  local_24 = *(undefined4 *)(iVar8 + 0x234c);
  if (((*(int *)(iVar8 + 9000) == 0) ||
      (fVar2 = *(float *)(iVar8 + 0x40) - local_30, fVar7 = *(float *)(iVar8 + 0x44) - local_2c,
      fVar6 = *(float *)(iVar8 + 0x48) - local_28,
      fVar2 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar2 * fVar2),
      fVar2 < *(float *)(param_1 + 0x48))) || (*(float *)(param_1 + 0x4c) < fVar2)) {
    *(undefined2 *)(param_1 + 8) = 3;
    return;
  }
  fVar2 = *(float *)(param_1 + 0x10);
  pfVar1 = (float *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 9) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else if (*(char *)(param_1 + 9) != '\x01') {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    return;
  }
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0xc);
  fVar11 = (float10)FUN_00fdc1f0();
  fVar6 = *(float *)(param_1 + 0x24) * 0.3;
  iVar9 = FUN_00a8dbe0(pfVar1,pfVar1,&local_30,(float)fVar11,fVar6,fVar6);
  iVar10 = FUN_00a81330();
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_00a7c8a0();
  }
  local_40 = *(float *)(iVar10 + 0x40);
  local_38 = *(float *)(iVar10 + 0x48);
  local_34 = *(float *)(iVar10 + 0x4c);
  if (*(int *)(iVar8 + 0xe90) == 0) {
    local_3c = 3.0;
  }
  else {
    local_3c = 6.0;
  }
  local_3c = *(float *)(iVar10 + 0x44) + local_3c;
  local_20 = *pfVar1 - local_40;
  local_1c = *(float *)(param_1 + 0x14) - local_3c;
  local_18 = *(float *)(param_1 + 0x18) - local_38;
  local_14 = *(float *)(param_1 + 0x1c) - local_34;
  iVar10 = FUN_007c0510(&local_20,&local_40,&local_20);
  if ((iVar10 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    *pfVar1 = fVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined2 *)(param_1 + 8) = 3;
    return;
  }
  if ((iVar9 != 0) && (*(int *)(iVar8 + 0x232c) != 0)) {
    *(undefined2 *)(param_1 + 8) = 2;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}

// 007C7140  FUN_007c7140  size=599  [between]
void __fastcall FUN_007c7140(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a7c8a0();
  }
  local_40 = *(float *)(iVar4 + 0x2340);
  local_3c = *(float *)(iVar4 + 0x2344);
  local_38 = *(float *)(iVar4 + 0x2348);
  local_34 = *(float *)(iVar4 + 0x234c);
  if ((((*(int *)(iVar4 + 9000) == 0) ||
       ((fVar1 = *(float *)(iVar4 + 0x40) - local_40, fVar3 = *(float *)(iVar4 + 0x44) - local_3c,
        fVar2 = *(float *)(iVar4 + 0x48) - local_38,
        fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1),
        *(float *)(param_1 + 0x48) <= fVar1 && (fVar1 <= *(float *)(param_1 + 0x4c))))) &&
      (*(int *)(iVar4 + 0x232c) != 0)) && (*(int *)(iVar4 + 9000) != 0)) {
    local_30 = *(undefined4 *)(param_1 + 0x10);
    local_2c = *(undefined4 *)(param_1 + 0x14);
    local_28 = *(undefined4 *)(param_1 + 0x18);
    local_24 = *(undefined4 *)(param_1 + 0x1c);
    if (*(char *)(param_1 + 9) == '\0') {
      *(undefined1 *)(param_1 + 9) = 1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar5 = FUN_00a81330();
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00a7c8a0();
      }
      FUN_00cd53e0(uVar6);
      FUN_007b6a30();
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else if (*(char *)(param_1 + 9) != '\x01') {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      return;
    }
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x10) = local_40;
    *(float *)(param_1 + 0x14) = local_3c;
    *(float *)(param_1 + 0x18) = local_38;
    *(float *)(param_1 + 0x1c) = local_34;
    iVar5 = FUN_00a81330();
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00a7c8a0();
    }
    local_40 = *(float *)(iVar5 + 0x40);
    local_38 = *(float *)(iVar5 + 0x48);
    local_34 = *(float *)(iVar5 + 0x4c);
    if (*(int *)(iVar4 + 0xe90) == 0) {
      local_3c = 3.0;
    }
    else {
      local_3c = 6.0;
    }
    local_3c = *(float *)(iVar5 + 0x44) + local_3c;
    local_20 = *(float *)(param_1 + 0x10) - local_40;
    local_1c = *(float *)(param_1 + 0x14) - local_3c;
    local_18 = *(float *)(param_1 + 0x18) - local_38;
    local_14 = *(float *)(param_1 + 0x1c) - local_34;
    iVar4 = FUN_007c0510(&local_20,&local_40,&local_20);
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = local_30;
      *(undefined4 *)(param_1 + 0x14) = local_2c;
      *(undefined4 *)(param_1 + 0x18) = local_28;
      *(undefined4 *)(param_1 + 0x1c) = local_24;
      *(undefined2 *)(param_1 + 8) = 3;
      uVar6 = FUN_007b1710();
      FUN_00cbbb50(uVar6);
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    return;
  }
  *(undefined2 *)(param_1 + 8) = 3;
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    FUN_00cbbb50(0);
    return;
  }
  uVar6 = FUN_00a7c8a0();
  FUN_00cbbb50(uVar6);
  return;
}

// 007C73A0  FUN_007c73a0  size=692  [between]
void __fastcall FUN_007c73a0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00a7c8a0();
  }
  local_40 = *(float *)(iVar3 + 0x2340);
  local_3c = *(float *)(iVar3 + 0x2344);
  local_38 = *(float *)(iVar3 + 0x2348);
  local_34 = *(float *)(iVar3 + 0x234c);
  if ((*(int *)(iVar3 + 0x232c) == 0) || (*(int *)(iVar3 + 9000) == 0)) {
    *(undefined2 *)(param_1 + 8) = 0xff;
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      FUN_00cbbb50(0);
      return;
    }
    uVar5 = FUN_00a7c8a0();
    FUN_00cbbb50(uVar5);
    return;
  }
  local_30 = *(undefined4 *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 9);
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_28 = *(undefined4 *)(param_1 + 0x18);
  local_24 = *(undefined4 *)(param_1 + 0x1c);
  switch(cVar2) {
  case '\0':
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(char *)(param_1 + 9) = cVar2 + '\x01';
    uVar5 = FUN_007b1710();
    FUN_00cd53e0(uVar5);
    *(undefined4 *)(param_1 + 0x68) = 0;
  case '\x01':
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x10) = local_40;
    *(float *)(param_1 + 0x14) = local_3c;
    *(float *)(param_1 + 0x18) = local_38;
    *(float *)(param_1 + 0x1c) = local_34;
    iVar4 = FUN_007b1710();
    local_40 = *(float *)(iVar4 + 0x40);
    local_38 = *(float *)(iVar4 + 0x48);
    local_34 = *(float *)(iVar4 + 0x4c);
    if (*(int *)(iVar3 + 0xe90) == 0) {
      local_3c = 3.0;
    }
    else {
      local_3c = 6.5;
    }
    local_3c = *(float *)(iVar4 + 0x44) + local_3c;
    local_20 = *(float *)(param_1 + 0x10) - local_40;
    local_1c = *(float *)(param_1 + 0x14) - local_3c;
    local_18 = *(float *)(param_1 + 0x18) - local_38;
    local_14 = *(float *)(param_1 + 0x1c) - local_34;
    iVar3 = FUN_007c0510(&local_20,&local_40,&local_20);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = local_30;
      *(undefined4 *)(param_1 + 0x14) = local_2c;
      *(undefined4 *)(param_1 + 0x18) = local_28;
      *(undefined4 *)(param_1 + 0x1c) = local_24;
      *(undefined2 *)(param_1 + 8) = 0xff;
      uVar5 = FUN_007b1710();
      FUN_00cbbb50(uVar5);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      return;
    }
    fVar1 = *(float *)(param_1 + 0xc);
    if (!NAN(fVar1) && 45.0 < fVar1 != (fVar1 == 45.0)) {
      *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      return;
    }
    break;
  case '\x02':
    *(undefined4 *)(param_1 + 0xc) = 0x41f00000;
    *(char *)(param_1 + 9) = cVar2 + '\x01';
    FUN_007b6a30();
  case '\x03':
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) = local_40;
    *(float *)(param_1 + 0x14) = local_3c;
    *(float *)(param_1 + 0x18) = local_38;
    *(float *)(param_1 + 0x1c) = local_34;
    if (*(float *)(param_1 + 0xc) < 0.0) {
      *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      return;
    }
    break;
  case '\x04':
    *(undefined4 *)(param_1 + 0xc) = 0x42700000;
    *(char *)(param_1 + 9) = cVar2 + '\x01';
    uVar5 = FUN_007b1710();
    FUN_00cbbb50(uVar5);
  case '\x05':
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) = local_40;
    *(float *)(param_1 + 0x14) = local_3c;
    *(float *)(param_1 + 0x18) = local_38;
    *(float *)(param_1 + 0x1c) = local_34;
    if (*(float *)(param_1 + 0xc) < 0.0) {
      *(undefined2 *)(param_1 + 8) = 0xff;
    }
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}

// 007C76A0  FUN_007c76a0  size=537  [between]
void __fastcall FUN_007c76a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x47a] = 1;
    FUN_007c4a50(2);
    param_1[0x8e3] = 0;
    param_1[0x250] = 0;
  case 1:
    FUN_00ac80a0(0,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x2a4];
    if ((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) && (param_1[0x250] == 0)) {
      param_1[0x250] = 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x2b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0,0x3f800000);
    fVar1 = (float)param_1[0x2a4];
    if ((!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) && (param_1[0x250] == 0)) {
      FUN_007b6430(1,0);
      param_1[0x250] = 1;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x4ad] = 0;
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x4b8] = param_1[0x4b8] | 0x14;
      *(undefined1 *)((int)param_1 + 0x1275) = 10;
      (*pcVar2)();
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
    if ((DAT_01bea060 & 0x2000000) != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3f0efa35,0);
    }
  }
  return;
}

// 007C78D0  FUN_007c78d0  size=700  [between]
void __fastcall FUN_007c78d0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [336];
  undefined1 auStack_160 [348];
  
  iVar3 = param_1[0x3a6];
  uVar4 = (uint)(iVar3 == 4);
  if (iVar3 == 1) {
    uVar4 = 2;
  }
  if (iVar3 == 2) {
    uVar4 = 3;
  }
  switch(param_1[0x187]) {
  case 0:
    iVar3 = (**(code **)(*param_1 + 0x84))();
    fVar1 = *(float *)(iVar3 + 4);
    param_1[0x473] = (int)fVar1;
    if (param_1[0x3a6] == 4) {
      param_1[0x473] = (int)(fVar1 + 3.1415927);
    }
    if (uVar4 < 2) {
      uStack_2c0 = 0;
      iVar3 = (**(code **)(*param_1 + 0x84))();
      fStack_2bc = *(float *)(iVar3 + 4);
      uVar5 = 0;
      uStack_2b8 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0x82,uVar2,uVar5);
      uVar5 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0x83,uVar2,uVar5);
      if (uVar4 != 0) {
        fStack_2bc = fStack_2bc + 3.1415927;
      }
      FUN_0047f870(&uStack_2c0);
      FUN_0047f870(&uStack_2c0);
      puVar6 = auStack_2b0;
      uVar2 = FUN_00e00b40(0x2c080,puVar6);
      FUN_00a8c930(uVar2,puVar6);
      puVar6 = auStack_160;
      uVar2 = FUN_00e00b40(0x2c080,puVar6);
      FUN_00a8c930(uVar2,puVar6);
    }
    uVar2 = *(undefined4 *)(&DAT_01883224 + uVar4 * 0xc);
    uVar5 = 0x3daaaaab;
    break;
  case 1:
  case 3:
    goto switchD_007c7915_caseD_1;
  case 2:
    uVar2 = *(undefined4 *)(&DAT_01883228 + uVar4 * 0xc);
    uVar5 = 0x3d088889;
    break;
  case 4:
    FUN_00aa4080(*(undefined4 *)(&DAT_0188322c + uVar4 * 0xc),0,0x3daaaaab,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_007b2120(), iVar3 == 0)) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_007c7915_default;
  }
  FUN_00aa4080(uVar2,0,uVar5,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
switchD_007c7915_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_007c7915_default:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0,0x3f060a92,0);
  }
  return;
}

// 007C7BB0  FUN_007c7bb0  size=690  [between]
void __fastcall FUN_007c7bb0(int *param_1)

{
  float fVar1;
  int iVar2;
  short sVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_1[0x187] == 0) {
    FUN_00a9f4c0("KATAMUKI",0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,5,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x37,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x3b,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x3e,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,1,0,0,0x3e,0x3e888889,0x40);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x47a] = 1;
    if (param_1[0x8e2] == 0) {
      FUN_007c4a50(0);
    }
    param_1[0x8e2] = 0;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_007c4a50(3);
    }
    param_1[0x248] = 0;
    param_1[0x8df] = 0x42f00000;
    param_1[0x5c5] = 1;
    param_1[0x24a] = 0;
    sVar3 = FUN_00dde2d0(0,10);
    param_1[0x252] = sVar3 + 10;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    (**(code **)(*param_1 + 0x358))(0x28,0);
    iVar2 = param_1[0x252];
    param_1[0x252] = iVar2 + -1;
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x358))(0x27,0);
      sVar3 = FUN_00dde2d0(0,0x3c);
      param_1[0x252] = sVar3 + 0x3c;
      sVar3 = FUN_00dde2d0(0,4);
      if (sVar3 == 2) {
        sVar3 = FUN_00dde2d0(0,2);
        param_1[0x252] = sVar3 + 2;
      }
    }
    param_1[0x248] = 0x40000000;
  }
  if (param_1[0x2a1] != 0) {
    fVar4 = (float10)FUN_007af300();
    fVar1 = (float)param_1[0x4c0];
    fVar5 = (float10)FUN_00fdc1f0();
    param_1[0x4c0] =
         (int)(float)(fVar5 * (float10)(float)(fVar4 - (float10)fVar1) +
                     (float10)(float)param_1[0x4c0]);
    fVar4 = (float10)FUN_007af3b0();
    fVar1 = (float)param_1[0x4c1];
    fVar5 = (float10)FUN_00fdc1f0();
    fVar4 = fVar5 * (float10)(float)(fVar4 - (float10)fVar1) + (float10)(float)param_1[0x4c1];
    param_1[0x4c1] = (int)(float)fVar4;
    FUN_00a947e0(0,param_1[0x4c0],0,(float)fVar4);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  return;
}

// 007C7E70  FUN_007c7e70  size=1064  [between]
void __fastcall FUN_007c7e70(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x72,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x47a] = 1;
    FUN_007c4a50(1);
    param_1[0x8da] = 0;
    param_1[0x8dc] = 0;
    FUN_00a8d280();
    goto LAB_007c7f05;
  case 1:
LAB_007c7f05:
    FUN_00ac80a0(0,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_007c7e9b_default;
  case 2:
    FUN_00aa4080(0x73,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    goto LAB_007c7f7d;
  case 3:
LAB_007c7f7d:
    FUN_00ac80a0(0,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (300.0 < (float)param_1[0x244] + fVar1) {
      param_1[0x187] = 4;
    }
    goto switchD_007c7e9b_default;
  case 4:
    FUN_00aa4080(0x74,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4ad] = 0;
    param_1[0x4b8] = param_1[0x4b8] | 0x10;
    *(undefined1 *)((int)param_1 + 0x1275) = 8;
    param_1[0x250] = 0;
    goto LAB_007c801d;
  case 5:
LAB_007c801d:
    FUN_00ac80a0(0,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x8da] != 0) && (iVar3 = FUN_00a8c760(0xf), iVar3 != 0)) {
      param_1[0x187] = 8;
    }
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      param_1[0x250] = 1;
    }
    if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
    }
    goto switchD_007c7e9b_default;
  case 6:
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4b8] = param_1[0x4b8] & 0xffffffdeU | 4;
    break;
  case 7:
  case 9:
    break;
  case 8:
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4b8] = param_1[0x4b8] & 0xffffffdeU | 4;
    break;
  default:
    goto switchD_007c7e9b_default;
  }
  FUN_00ac80a0(0,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x4b8] = param_1[0x4b8] & 0xfffffffb;
    (*pcVar2)();
  }
switchD_007c7e9b_default:
  if (((param_1[0x4cc] == 0) && (iVar3 = FUN_00a8c760(0x34), iVar3 != 0)) && (param_1[0x8dc] != 0))
  {
    param_1[0x4cb] = param_1[0x4cb] + 1;
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
  }
  iVar3 = FUN_00a8c760(8);
  if (iVar3 != 0) {
    FUN_007b14f0(0xffffffff,0xbf800000);
  }
  iVar3 = FUN_00a8c760(10);
  if (iVar3 == 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if (param_1[0x3a4] == 0) {
    if ((char)param_1[0x862] != -1) goto LAB_007c8288;
  }
  else if ((char)param_1[0x862] != -1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x860) = 0;
  *(undefined2 *)(param_1 + 0x862) = 4;
LAB_007c8288:
  param_1[0x87e] = 1;
  param_1[0x87d] = 1;
  return;
}

// 007C82C0  FUN_007c82c0  size=824  [between]
void __fastcall FUN_007c82c0(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x47a] = 1;
    FUN_007c4a50(2);
    param_1[0x8e3] = 0;
    param_1[0x250] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x2b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_007c83d7;
  case 3:
LAB_007c83d7:
    FUN_00ac80a0(0,0x3f800000);
    fVar1 = (float)param_1[0x2a4];
    if ((!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) && (param_1[0x250] == 0)) {
      FUN_007b6430(1,0);
      param_1[0x250] = 1;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_007b09c0(0x50008,0,0,0,0);
      uVar2 = param_1[0x8c6] & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      if (uVar2 == 1) {
        FUN_007b09c0(0x50009,0,0,0,0);
      }
      param_1[0x8c6] = param_1[0x8c6] + 1;
      if ((*(byte *)((int)param_1 + 0xeba) & 1) != 0) {
        FUN_007b09c0(0x50009,0,0,0,0);
      }
      if (param_1[0x912] != 0) {
        FUN_007b09c0(0x50009,0,0,0,0);
      }
      param_1[0x4ad] = 0;
      param_1[0x4b8] = param_1[0x4b8] | 0x14;
      *(undefined1 *)((int)param_1 + 0x1275) = 10;
      if ((DAT_01bea060 & 0x2000000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007c84d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  default:
    goto switchD_007c82e9_default;
  }
  FUN_00ac80a0(0,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  fVar1 = (float)param_1[0x2a4];
  if ((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) && (param_1[0x250] == 0)) {
    param_1[0x250] = 1;
  }
switchD_007c82e9_default:
  if ((param_1[0x2a1] == 0) || (iVar3 = FUN_00a8c760(0), iVar3 == 0)) {
LAB_007c8579:
    if ((DAT_01bea060 & 0x2000000) != 0) {
      return;
    }
  }
  else {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
    if ((DAT_01bea060 & 0x2000000) != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3f0efa35,0);
      goto LAB_007c8579;
    }
  }
  iVar3 = FUN_00a8c760(8);
  if (iVar3 != 0) {
    FUN_007b14f0(0xffffffff,0xbf800000);
  }
  iVar3 = FUN_00a8c760(10);
  if (iVar3 == 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if (param_1[0x3a4] == 0) {
    if ((char)param_1[0x862] != -1) goto LAB_007c85e7;
  }
  else if ((char)param_1[0x862] != -1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x860) = 0;
  *(undefined2 *)(param_1 + 0x862) = 4;
LAB_007c85e7:
  param_1[0x87e] = 1;
  param_1[0x87d] = 1;
  return;
}

// 007C8610  FUN_007c8610  size=110  [between]
void __thiscall FUN_007c8610(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_28 = param_2;
  local_2c = param_3;
  local_2e = 0;
  local_24 = 0;
  local_38 = *(undefined4 *)(param_1 + 0x12ac);
  local_30 = param_4;
  FUN_007c06e0(local_34,&local_38,&local_30);
  *(undefined1 *)(param_1 + 0x1275) = 2;
  return;
}

// 007C8680  FUN_007c8680  size=90  [between]
void __fastcall FUN_007c8680(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1bc) != 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 1;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
  }
  else if (iVar1 == 1) {
    switch(*(undefined4 *)(param_1 + 0x1ac)) {
    case 0:
      FUN_007bedb0();
      return;
    case 1:
      FUN_007bf120();
      return;
    case 2:
      FUN_007bf480();
      return;
    case 3:
      FUN_007bfd50();
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_007b7780();
    return;
  }
  return;
}

// 007C86F0  FUN_007c86f0  size=302  [between]
void __fastcall FUN_007c86f0(byte *param_1)

{
  float fVar1;
  int iVar2;
  float local_20 [7];
  
  if ((((*param_1 & 4) == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x910);
    local_20[0] = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 0x10);
    local_20[2] = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x18);
    local_20[3] = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x1c);
    local_20[1] = 0.0;
    fVar1 = local_20[2] * local_20[2] + local_20[0] * local_20[0];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(local_20,local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20[0] = 0.0;
      local_20[1] = 1.0;
      local_20[2] = 0.0;
    }
    *(float *)(param_1 + 0x30) = local_20[2] * -1.0;
    *(float *)(param_1 + 0x38) = local_20[0];
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    switch(param_1[8]) {
    case 0:
      FUN_007c6b70();
      return;
    case 1:
      FUN_007c6f30();
      return;
    case 2:
      FUN_007c7140();
      return;
    case 3:
      FUN_007b7850();
      return;
    case 4:
      FUN_007c73a0();
    }
  }
  return;
}

// 007C8840  FUN_007c8840  size=904  [between]
void __fastcall FUN_007c8840(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x20001) {
    if (iVar1 == 0x20000) {
      FUN_007af540();
    }
    else {
      switch(iVar1) {
      case 0x10000:
        FUN_007aee30();
        break;
      case 0x10001:
        FUN_007aef00();
        break;
      case 0x10002:
        FUN_007aef60();
        break;
      case 0x10003:
        FUN_007b2530();
        break;
      case 0x10004:
        FUN_007af100();
        break;
      case 0x10005:
        FUN_007ba830();
        break;
      case 0x10006:
        FUN_007bac60();
        break;
      case 0x10008:
        FUN_007b27f0();
        break;
      case 0x10009:
      case 0x1000a:
        FUN_007af1c0();
        break;
      case 0x1000b:
        FUN_007c76a0();
        break;
      case 0x1000c:
        FUN_007c78d0();
        break;
      case 0x1000d:
        FUN_007c7bb0();
        break;
      case 0x1000e:
        FUN_007b32e0();
        break;
      case 0x1000f:
        FUN_007b4780();
        break;
      case 0x10010:
        FUN_007afbd0();
        break;
      case 0x10011:
        FUN_007afc70();
        break;
      case 0x10012:
      case 0x10013:
        FUN_007afd10();
        break;
      case 0x10014:
        FUN_007af4d0();
        break;
      case 0x10015:
        FUN_007b3800();
      }
    }
  }
  else if (iVar1 < 0x50001) {
    if (iVar1 == 0x50000) {
      FUN_007b4ba0();
    }
    else {
      switch(iVar1) {
      case 0x20001:
        FUN_007bbab0();
        break;
      case 0x20002:
        FUN_007af5f0();
        break;
      case 0x20003:
        FUN_007b3880();
        break;
      case 0x20004:
      case 0x20005:
      case 0x20006:
      case 0x20007:
      case 0x20008:
        FUN_007af670();
        break;
      case 0x20009:
      case 0x2000a:
        FUN_007af8d0();
        break;
      case 0x2000b:
        FUN_007bbd50();
        break;
      case 0x2000c:
        FUN_007bc050();
        break;
      case 0x2000d:
        FUN_007c3c60();
        break;
      case 0x2000e:
        FUN_007b3f20();
        break;
      case 0x2000f:
        FUN_007bc5a0();
        break;
      case 0x20010:
        FUN_007b4230();
        break;
      case 0x20011:
        FUN_007b4500();
        break;
      case 0x20012:
        FUN_007afb50();
      }
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_007b0110();
    }
    else {
      switch(iVar1) {
      case 0x50001:
        FUN_007b5470();
        break;
      case 0x50002:
      case 0x50003:
        FUN_007b5940();
        break;
      case 0x50004:
        FUN_007bcec0();
        break;
      case 0x50005:
        FUN_007c7e70();
        break;
      case 0x50006:
        FUN_007c82c0();
        break;
      case 0x50007:
        FUN_007bd200();
        break;
      case 0x50008:
        FUN_007bd340();
        break;
      case 0x50009:
        FUN_007bd730();
        break;
      case 0x5000b:
        FUN_007b5dd0(0x59,1);
        break;
      case 0x5000c:
        FUN_007b5dd0(0x61,2);
        break;
      case 0x5000d:
        FUN_007b5dd0(0x5d,3);
        break;
      case 0x5000e:
        FUN_007b4860();
        break;
      case 0x5000f:
        FUN_007afe70();
        break;
      case 0x50010:
        FUN_007affa0();
      }
    }
  }
  else if (iVar1 < 0x70001) {
    if (iVar1 == 0x70000) {
      FUN_007bda90();
    }
    else if (iVar1 == 0x60001) {
      FUN_007b01d0();
    }
    else if (iVar1 == 0x60002) {
      FUN_007b0290();
    }
  }
  else if (iVar1 < 0x80001) {
    if (iVar1 == 0x80000) {
      FUN_007c3fd0();
    }
    else {
      switch(iVar1) {
      case 0x70001:
        FUN_007bdcc0();
        break;
      case 0x70002:
        FUN_007b0360();
        break;
      case 0x70003:
      case 0x70004:
        FUN_007bdee0();
        break;
      case 0x70005:
        FUN_007b5ec0();
        break;
      case 0x70006:
        FUN_007be0e0();
        break;
      case 0x70007:
        FUN_007b0540();
        break;
      case 0x70008:
        FUN_007b6000();
        break;
      case 0x70009:
        FUN_007be2f0();
        break;
      case 0x7000a:
        FUN_007b0660();
        break;
      case 0x7000c:
        FUN_007b0840();
      }
    }
  }
  else if (iVar1 < 0x90001) {
    if (iVar1 != 0x90000) {
      if (iVar1 == 0x80001) {
        FUN_007c4290();
      }
      else if (iVar1 == 0x80002) {
        FUN_007c4550();
      }
      else if (iVar1 == 0x80003) {
        FUN_007c47d0();
      }
    }
  }
  else if (iVar1 < 0x90004) {
    if (iVar1 == 0x90003) {
      FUN_007b7df0();
    }
  }
  else if (iVar1 == 0xa0000) {
    FUN_007b61f0();
  }
  if (*(int *)(param_1 + 0x10d4) != 0) {
    if (*(int *)(param_1 + 0x10d8) == 8) {
      FUN_007b5d20(0x60,2);
      return;
    }
    FUN_007b5d20(0x5c,3);
  }
  return;
}

// 007C8CE0  FUN_007c8ce0  size=609  [between]
void __fastcall FUN_007c8ce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00ac45b0();
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x21f0) == 0) && ((*(byte *)(param_1 + 0x2180) & 4) == 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a7c8a0();
    }
    FUN_00cbbb50(uVar2);
    *(byte *)(param_1 + 0x2180) = *(byte *)(param_1 + 0x2180) | 4;
    *(undefined1 *)(param_1 + 0x2188) = 0xff;
  }
  FUN_007c86f0();
  if (*(int *)(param_1 + 0x21f8) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2188) == -1) {
    *(undefined4 *)(param_1 + 0x21f8) = 0;
  }
  if (*(char *)(param_1 + 0x2188) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x2189) < '\x02') {
    return;
  }
  if (*(int *)(param_1 + 0x239c) == 0) {
    iVar1 = FUN_00ac4780();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x21f4) == 0) goto LAB_007c8f1d;
      iVar1 = *(int *)(param_1 + 0x21f4) + -1;
      if (iVar1 == 0) {
        FUN_007b14f0(0xe,0x40400000);
        *(undefined4 *)(param_1 + 0x21f8) = 0;
        return;
      }
    }
    else {
      iVar3 = FUN_00ac4780();
      iVar1 = *(int *)(param_1 + 0x21f4);
      if (iVar3 < 3) {
        if (iVar1 == 0) goto LAB_007c8def;
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          FUN_007b14f0(0x18,0x40400000);
          *(undefined4 *)(param_1 + 0x21f8) = 0;
          return;
        }
      }
      else {
        if (iVar1 == 0) {
          uVar4 = 0x41400000;
          uVar2 = 4;
          goto LAB_007c8f29;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          FUN_007b14f0(0x24,0x40400000);
          *(undefined4 *)(param_1 + 0x21f8) = 0;
          return;
        }
      }
    }
LAB_007c8da0:
    if (iVar1 == 1) {
      FUN_007b14f0(0xffffffff,0xbf800000);
      *(undefined4 *)(param_1 + 0x21f8) = 0;
      return;
    }
  }
  else {
    iVar3 = FUN_00ac4780();
    iVar1 = *(int *)(param_1 + 0x21f4);
    if (iVar3 < 3) {
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          if ((*(byte *)(param_1 + 0x4a8) & 0x10) != 0) {
            FUN_007b14f0(7,0x41000000);
            *(undefined4 *)(param_1 + 0x21f8) = 0;
            return;
          }
          FUN_007b14f0(0xe,0x40400000);
          *(undefined4 *)(param_1 + 0x21f8) = 0;
          return;
        }
        goto LAB_007c8da0;
      }
LAB_007c8f1d:
      uVar4 = 0x41400000;
      uVar2 = 1;
    }
    else {
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          FUN_007b14f0(0x14,0x40400000);
          *(undefined4 *)(param_1 + 0x21f8) = 0;
          return;
        }
        goto LAB_007c8da0;
      }
LAB_007c8def:
      uVar4 = 0x41900000;
      uVar2 = 2;
    }
LAB_007c8f29:
    FUN_007b14f0(uVar2,uVar4);
  }
  *(undefined4 *)(param_1 + 0x21f8) = 0;
  return;
}

// 007C8F50  FUN_007c8f50  size=724  [between]
void __fastcall FUN_007c8f50(int param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  int local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00a81330();
  iVar3 = FUN_00a7c8a0();
  if (iVar3 != 0) {
    iVar4 = FUN_00a81330();
    local_44 = 0;
    if (iVar4 != 0) {
      local_44 = FUN_00a7c8a0();
    }
    FUN_007c8680();
    iVar4 = *(int *)(param_1 + 0x1b4);
    if ((*(int *)(param_1 + 0x1bc) != 0) && (iVar4 == 0)) {
      iVar4 = 1;
    }
    if (*(int *)(param_1 + 0x1ac) == 0) {
      if (*(int *)(iVar3 + 0xe90) == 0) {
        bVar1 = *(byte *)(iVar3 + 0x4a8) & 0x40;
      }
      else {
        bVar1 = *(byte *)(iVar3 + 0x4a8) & 0x80;
      }
      if (bVar1 != 0) {
        iVar4 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if ((local_44 != 0) && (*(int *)(iVar3 + 9000) != 0)) {
      local_30 = *(float *)(iVar3 + 0x2340);
      uVar6 = 0x38;
      local_2c = *(float *)(iVar3 + 0x2344);
      local_28 = *(float *)(iVar3 + 0x2348);
      local_24 = *(float *)(iVar3 + 0x234c);
      FUN_00a81330(0x38);
      FUN_00a7c8a0();
      iVar3 = FUN_00a12210(uVar6);
      if (iVar3 != 0) {
        local_20 = 0.0;
        local_1c = 0.0;
        local_18 = 1.0;
        D3DXVec3TransformNormal(&local_20,&local_20,iVar3 + 0x10);
        fStack_40 = local_30 - *(float *)(iVar3 + 0x40);
        fStack_3c = local_2c - *(float *)(iVar3 + 0x44);
        fStack_38 = local_28 - *(float *)(iVar3 + 0x48);
        fStack_34 = local_24 - *(float *)(iVar3 + 0x4c);
        fVar2 = fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&fStack_40,&fStack_40);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_40 = 0.0;
          fStack_3c = 1.0;
          fStack_38 = 0.0;
        }
        fVar5 = (float10)FUN_00ddbb50((fStack_3c * local_1c + local_20 * fStack_40 +
                                      fStack_38 * local_18) /
                                      (SQRT(fStack_38 * fStack_38 +
                                            fStack_40 * fStack_40 + fStack_3c * fStack_3c) *
                                      SQRT(local_18 * local_18 +
                                           local_20 * local_20 + local_1c * local_1c)));
        if (fVar5 < (float10)0.017453292 != (fVar5 == (float10)0.017453292)) {
          *(undefined4 *)(param_1 + 0x1b8) = 1;
        }
      }
      FUN_00a84720();
      FUN_00a84720();
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(&local_30,0,iVar4,0,0,0x3f800000);
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(&local_30,iVar4,0,0,0,0x3f800000);
    }
  }
  return;
}

// 007C9230  FUN_007c9230  size=535  [between]
void __fastcall FUN_007c9230(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  FUN_00a81330();
  iVar6 = FUN_00a7c8a0();
  if (iVar6 != 0) {
    iVar7 = FUN_00a81330();
    iVar9 = 0;
    if (iVar7 != 0) {
      iVar9 = FUN_00a7c8a0();
    }
    FUN_007c8680();
    if (iVar9 != 0) {
      fVar2 = *(float *)(iVar6 + 0x2350);
      fVar3 = *(float *)(iVar6 + 0x2354);
      fVar4 = *(float *)(iVar6 + 0x2358);
      fVar5 = *(float *)(iVar6 + 0x235c);
      local_50 = fVar2;
      local_4c = fVar3;
      local_48 = fVar4;
      local_44 = fVar5;
      iVar7 = FUN_00a12210((int)*(short *)(param_1 + 0x1c6));
      local_40 = *(undefined4 *)(iVar7 + 0x40);
      local_3c = *(undefined4 *)(iVar7 + 0x44);
      local_38 = *(undefined4 *)(iVar7 + 0x48);
      local_34 = *(undefined4 *)(iVar7 + 0x4c);
      local_24 = *(float *)(iVar6 + 0x910);
      local_30 = (local_50 - *(float *)(param_1 + 0x200)) / local_24;
      local_2c = (local_4c - *(float *)(param_1 + 0x204)) / local_24;
      local_28 = (local_48 - *(float *)(param_1 + 0x208)) / local_24;
      local_24 = (local_44 - *(float *)(param_1 + 0x20c)) / local_24;
      puVar8 = (undefined4 *)
               FUN_00a8cf30(local_20,&local_50,&local_30,&local_40,0x3fc00000,0x3f800000);
      *(undefined4 *)(param_1 + 0x210) = *puVar8;
      pfVar1 = (float *)(param_1 + 0x210);
      *(undefined4 *)(param_1 + 0x214) = puVar8[1];
      *(undefined4 *)(param_1 + 0x218) = puVar8[2];
      *(undefined4 *)(param_1 + 0x21c) = puVar8[3];
      *pfVar1 = fVar2;
      *(float *)(param_1 + 0x214) = fVar3;
      *(float *)(param_1 + 0x218) = fVar4;
      *(float *)(param_1 + 0x21c) = fVar5;
      FUN_00a84720();
      FUN_00a84720();
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(pfVar1,0,*(undefined4 *)(param_1 + 0x1b4),0,0,0x3f800000);
      FUN_00a81330();
      FUN_00a7c8a0();
      switchD_0080dbae::default();
      FUN_00a84780(pfVar1,*(undefined4 *)(param_1 + 0x1b4),0,0,0,0x3f800000);
      *(float *)(param_1 + 0x200) = fVar2;
      *(float *)(param_1 + 0x204) = fVar3;
      *(float *)(param_1 + 0x208) = fVar4;
      *(float *)(param_1 + 0x20c) = fVar5;
    }
  }
  return;
}

// 007C9470  hkpCdPointCollector::hkpCdPointCollector_17  size=4465  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_17(int param_1)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float unaff_ESI;
  float unaff_EDI;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  int iVar14;
  float *pfStack_3bc;
  float *pfStack_3b8;
  float fStack_3b4;
  float *pfStack_3b0;
  float *pfStack_3ac;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float *pfStack_398;
  float *pfStack_394;
  float fStack_390;
  undefined4 *puStack_38c;
  undefined4 *puStack_388;
  float fStack_384;
  float fStack_374;
  undefined1 auStack_36c [4];
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_348;
  undefined **ppuStack_340;
  float fStack_33c;
  float local_334;
  undefined4 *puStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [12];
  undefined1 auStack_18c [24];
  undefined1 auStack_174 [8];
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [20];
  undefined1 auStack_154 [8];
  undefined1 auStack_14c [44];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [40];
  undefined1 auStack_ec [12];
  undefined1 auStack_e0 [44];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [164];
  
  local_368 = 0.9;
  if ((*(int *)(param_1 + 0x239c) != 0) && (*(int *)(param_1 + 0xe80) == 0)) {
    local_368 = 0.71999997;
  }
  iVar11 = *(int *)(param_1 + 0xa9c);
  local_334 = 1.4013e-45;
  *(undefined4 *)(param_1 + 0x1200) = 0;
  *(undefined4 *)(param_1 + 0x1208) = 0;
  *(undefined4 *)(param_1 + 0x1240) = 0;
  if (*(int *)(param_1 + 0x11e8) == 0) {
    *(undefined4 *)(param_1 + 0x1248) = 0;
    *(undefined4 *)(param_1 + 0x11f0) = 0;
    *(undefined4 *)(param_1 + 0x11f8) = 0;
  }
  else {
    local_320 = 0;
    fVar1 = (float)(param_1 + 0x10);
    local_31c = 0;
    puStack_38c = &local_320;
    local_318 = 0x40b00000;
    fStack_390 = 1.1441048e-38;
    puStack_388 = puStack_38c;
    fStack_384 = fVar1;
    D3DXVec3TransformNormal();
    fStack_32c = *(float *)(param_1 + 0x40) + fStack_32c;
    uVar5 = *(uint *)(param_1 + 0x12e0);
    fStack_328 = *(float *)(param_1 + 0x44) + fStack_328;
    fStack_324 = *(float *)(param_1 + 0x48) + fStack_324;
    if ((uVar5 & 1) != 0) {
      fStack_33c = *(float *)(param_1 + 0x2350) - fStack_32c;
      local_334 = *(float *)(param_1 + 0x2358) - fStack_324;
      fStack_390 = 1.14412e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1200) = (float)((float10)fStack_33c * fVar12 * (float10)fStack_374);
      *(float *)(param_1 + 0x1208) = (float)(fVar12 * (float10)local_334 * (float10)fStack_374);
      fStack_390 = 1.1441292e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1240) =
           (float)(fVar12 * (float10)unaff_ESI * (float10)fStack_374 +
                  (float10)*(float *)(param_1 + 0x1240));
    }
    if ((uVar5 & 2) != 0) {
      fStack_390 = 1.1441392e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1240) =
           (float)(fVar12 * (float10)unaff_ESI * (float10)fStack_374 +
                  (float10)*(float *)(param_1 + 0x1240));
    }
    *(undefined4 *)(param_1 + 0x1204) = 0;
    pfVar2 = (float *)(param_1 + 0x11f0);
    fVar6 = SQRT(*(float *)(param_1 + 0x11f8) * *(float *)(param_1 + 0x11f8) +
                 *pfVar2 * *pfVar2 + *(float *)(param_1 + 0x11f4) * *(float *)(param_1 + 0x11f4));
    fVar4 = *(float *)(param_1 + 0x12e8) * fStack_374;
    if ((*(byte *)(param_1 + 0x12c0) & 8) != 0) {
      fVar4 = fVar4 + fVar4;
    }
    if (fVar4 < fVar6) {
      fVar4 = fVar4 / fVar6;
      *pfVar2 = fVar4 * *pfVar2;
      *(float *)(param_1 + 0x11f8) = fVar4 * *(float *)(param_1 + 0x11f8);
    }
    *pfVar2 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x1200) * fStack_374 + *pfVar2;
    *(float *)(param_1 + 0x11f8) =
         *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x1208) * fStack_374 +
         *(float *)(param_1 + 0x11f8);
    fStack_390 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x1240) +
                 *(float *)(param_1 + 0x1248);
    pfStack_394 = (float *)0x7c96b1;
    fVar12 = (float10)FUN_00ddba30();
    *(float *)(param_1 + 0x1248) = (float)fVar12;
    pfStack_398 = &fStack_35c;
    fStack_35c = fStack_374 * *(float *)(param_1 + 0x1210);
    fStack_358 = *(float *)(param_1 + 0x1214) * fStack_374;
    fStack_354 = *(float *)(param_1 + 0x1218) * fStack_374;
    fStack_350 = fStack_374 * *(float *)(param_1 + 0x121c);
    fStack_39c = 1.1441762e-38;
    pfStack_394 = pfStack_398;
    fStack_390 = fVar1;
    D3DXVec3TransformNormal();
    *pfVar2 = *(float *)(param_1 + 0x910) * local_368 + *pfVar2;
    *(float *)(param_1 + 0x11f8) =
         *(float *)(param_1 + 0x910) * fStack_360 + *(float *)(param_1 + 0x11f8);
    fStack_39c = *(float *)(param_1 + 0x1248) + *(float *)(param_1 + 0x1244);
    fStack_3a0 = 1.1441842e-38;
    fVar13 = (float10)FUN_00ddba30();
    *(float *)(param_1 + 0x1248) = (float)fVar13;
    fVar12 = (float10)0.06981317;
    if ((*(byte *)(param_1 + 0x12c0) & 0x40) != 0) {
      fVar12 = (float10)0.15707964;
    }
    fVar12 = (float10)unaff_EDI * fVar12;
    if (fVar12 < fVar13) {
      *(float *)(param_1 + 0x1248) = (float)fVar12;
    }
    if ((float10)*(float *)(param_1 + 0x1248) < -fVar12) {
      *(float *)(param_1 + 0x1248) = (float)-fVar12;
    }
    fStack_39c = 1.1441983e-38;
    fVar12 = (float10)FUN_00fdc1f0();
    *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
    *(float *)(param_1 + 0x11f8) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x11f8));
    fStack_39c = 1.1442032e-38;
    fVar12 = (float10)FUN_00fdc1f0();
    fStack_3a0 = 0.0;
    puStack_3a4 = auStack_168;
    *(float *)(param_1 + 0x1248) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1248));
    puStack_3a8 = (undefined1 *)0x7c97d7;
    fStack_39c = fVar1;
    D3DXMatrixInverse();
    puStack_3a8 = auStack_174;
    pfStack_3b0 = &fStack_384;
    fStack_3b4 = 1.1442098e-38;
    pfStack_3ac = pfVar2;
    D3DXVec3TransformNormal();
    fVar12 = (float10)fStack_390;
    if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1210))) {
      fStack_3b4 = 1.144217e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      fVar12 = fVar12 * (float10)fStack_390;
      fStack_390 = (float)fVar12;
    }
    if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1210) < (float10)0)) {
      fStack_3b4 = 1.1442244e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      fStack_390 = (float)(fVar12 * (float10)fStack_390);
    }
    fVar12 = (float10)(float)puStack_388;
    if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1218))) {
      fStack_3b4 = 1.1442326e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      fVar12 = fVar12 * (float10)(float)puStack_388;
      puStack_388 = (undefined4 *)(float)fVar12;
    }
    if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1218) < (float10)0)) {
      fStack_3b4 = 1.1442398e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      puStack_388 = (undefined4 *)(float)(fVar12 * (float10)(float)puStack_388);
    }
    if (*(int *)(param_1 + 0x1220) == 0) {
      fStack_3b4 = 1.1442451e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      fStack_390 = (float)(fVar12 * (float10)fStack_390);
    }
    if (*(int *)(param_1 + 0x1224) == 0) {
      fStack_3b4 = 1.1442499e-38;
      fVar12 = (float10)FUN_00fdc1f0();
      puStack_388 = (undefined4 *)(float)(fVar12 * (float10)(float)puStack_388);
    }
    pfStack_3b8 = &fStack_390;
    pfStack_3bc = pfVar2;
    fStack_3b4 = fVar1;
    D3DXVec3TransformNormal();
    if ((*(byte *)(param_1 + 0x12c0) & 0x20) != 0) {
      D3DXMatrixInverse(auStack_18c,0,fVar1);
      D3DXVec3TransformNormal(&puStack_3a8,pfVar2,auStack_198);
      fVar12 = (float10)fStack_3b4;
      if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1210))) {
        fVar12 = (float10)FUN_00fdc1f0();
        fVar12 = fVar12 * (float10)fStack_3b4;
        fStack_3b4 = (float)fVar12;
      }
      if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1210) < (float10)0)) {
        fVar12 = (float10)FUN_00fdc1f0();
        fStack_3b4 = (float)(fVar12 * (float10)fStack_3b4);
      }
      fVar12 = (float10)(float)pfStack_3ac;
      if ((fVar12 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x1218))) {
        fVar12 = (float10)FUN_00fdc1f0();
        fVar12 = fVar12 * (float10)(float)pfStack_3ac;
        pfStack_3ac = (float *)(float)fVar12;
      }
      if (((float10)0 < fVar12) && ((float10)*(float *)(param_1 + 0x1218) < (float10)0)) {
        fVar12 = (float10)FUN_00fdc1f0();
        pfStack_3ac = (float *)(float)(fVar12 * (float10)(float)pfStack_3ac);
      }
      if (*(int *)(param_1 + 0x1220) == 0) {
        fVar12 = (float10)FUN_00fdc1f0();
        fStack_3b4 = (float)(fVar12 * (float10)fStack_3b4);
      }
      if (*(int *)(param_1 + 0x1224) == 0) {
        fVar12 = (float10)FUN_00fdc1f0();
        pfStack_3ac = (float *)(float)(fVar12 * (float10)(float)pfStack_3ac);
      }
      D3DXVec3TransformNormal(pfVar2,&fStack_3b4,fVar1);
    }
    if (((float)pfStack_3ac < 0.7853982 != ((float)pfStack_3ac == 0.7853982)) &&
       (!NAN((float)pfStack_3ac) &&
        -0.7853982 < (float)pfStack_3ac != ((float)pfStack_3ac == -0.7853982))) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1248) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1248));
    }
    if (((float)pfStack_3ac <= 0.43633232) &&
       (!NAN((float)pfStack_3ac) &&
        -0.43633232 < (float)pfStack_3ac != ((float)pfStack_3ac == -0.43633232))) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1248) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1248));
    }
    if ((*(byte *)(param_1 + 0x12e0) & 0x20) != 0) {
      if (((float)pfStack_3ac <= 0.7853982) &&
         (!NAN((float)pfStack_3ac) &&
          -0.7853982 < (float)pfStack_3ac != ((float)pfStack_3ac == -0.7853982))) {
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x1248) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1248));
      }
      if (((float)pfStack_3ac <= 0.43633232) && (-0.43633232 <= (float)pfStack_3ac)) {
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x1248) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1248));
      }
    }
    if ((*(byte *)(param_1 + 0x12e0) & 1) != 0) {
      fVar1 = *(float *)(param_1 + 0x2350) - fStack_35c;
      fVar4 = *(float *)(param_1 + 0x2358) - fStack_354;
      if (fVar4 * fVar4 + fVar1 * fVar1 < 1.44) {
        fVar12 = (float10)FUN_00fdc1f0();
        *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
        *(float *)(param_1 + 0x11f8) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x11f8));
      }
      fVar12 = (float10)*(float *)(param_1 + 0x2350) - (float10)*(float *)(param_1 + 0x50);
      fVar1 = (float)fVar12;
      fVar13 = (float10)*(float *)(param_1 + 0x2358) - (float10)*(float *)(param_1 + 0x58);
      puStack_3a8 = (undefined1 *)(float)fVar13;
      fVar12 = (float10)fpatan(fVar12,fVar13);
      fVar13 = (float10)fpatan((float10)*pfVar2,(float10)*(float *)(param_1 + 0x11f8));
      fVar12 = (float10)FUN_00ddba30((float)(fVar12 - fVar13));
      if ((fVar1 * fVar1 + (float)puStack_3a8 * (float)puStack_3a8 < 16.0) &&
         (fVar12 * fVar12 < (float10)2.467401 != (fVar12 * fVar12 == (float10)2.467401))) {
        fVar12 = (float10)FUN_00fdc1f0();
        *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
        *(float *)(param_1 + 0x11f8) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x11f8));
      }
    }
    if ((*(byte *)(param_1 + 0x12e0) & 0x10) != 0) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1248) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1248));
      fVar12 = (float10)FUN_00fdc1f0();
      iVar11 = 0;
      *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
      *(float *)(param_1 + 0x11f8) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x11f8));
    }
    if ((*(byte *)(param_1 + 0x12e0) & 4) != 0) {
      fVar12 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1248) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1248));
      fVar12 = (float10)FUN_00fdc1f0();
      iVar11 = 0;
      *pfVar2 = (float)(fVar12 * (float10)*pfVar2);
      *(float *)(param_1 + 0x11f8) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x11f8));
    }
    fVar12 = (float10)0;
    if (0.0001 <= *(float *)(param_1 + 0x11f8) * *(float *)(param_1 + 0x11f8) +
                  *pfVar2 * *pfVar2 + *(float *)(param_1 + 0x11f4) * *(float *)(param_1 + 0x11f4)) {
      fVar12 = (float10)fpatan((float10)*pfVar2,(float10)*(float *)(param_1 + 0x11f8));
    }
    D3DXMatrixRotationY(auStack_14c,(float)fVar12);
    D3DXMatrixInverse(auStack_114,0,auStack_154);
    if (iVar11 != 0) {
      if (*(int *)(param_1 + 0x1278) != 0) {
        FUN_004066f0();
        fStack_3a0 = 0.0;
        puStack_330 = &local_320;
        fStack_39c = 0.0;
        pfStack_398 = (float *)0x0;
        fStack_33c = 3.40282e+38;
        pfStack_3bc = (float *)0x0;
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_328 = -1.12104e-44;
        fStack_32c = 0.0;
        FUN_00900350(&ppuStack_340);
        if ((0 < (int)fStack_32c) && (puStack_388 = (undefined4 *)0x0, 0 < (int)fStack_32c)) {
          iVar11 = 0;
          do {
            puVar7 = puStack_330;
            iVar8 = *(int *)((int)puStack_330 + iVar11 + 0x28);
            if (*(char *)(iVar8 + 0x18) == '\x02') {
              iVar10 = *(char *)(iVar8 + 0x10) + iVar8;
            }
            else {
              iVar10 = 0;
            }
            if (*(char *)(iVar8 + 0x18) == '\x01') {
              iVar8 = *(char *)(iVar8 + 0x10) + iVar8;
            }
            else {
              iVar8 = 0;
            }
            iVar14 = iVar11;
            if (((iVar10 == 0) && (iVar8 != 0)) &&
               (((byte)*(undefined4 *)(iVar8 + 0x2c) & 0x1f) != 0xb)) {
              FUN_0048aaf0();
              fVar1 = *(float *)((int)puVar7 + iVar11 + 0x1c);
              if (fVar1 < 0.0) {
                pfStack_3b0 = (float *)(*(float *)((int)puVar7 + iVar11 + 0x10) * fVar1);
                puStack_3a8 = (undefined1 *)(*(float *)((int)puVar7 + iVar11 + 0x18) * fVar1);
                puStack_3a4 = (undefined1 *)((float)puStack_3a4 * fVar1);
                pfStack_3ac = (float *)0x0;
                fVar1 = *pfVar2 * *pfVar2;
                if (0.0001 <= *(float *)(param_1 + 0x11f4) * *(float *)(param_1 + 0x11f4) + fVar1 +
                              *(float *)(param_1 + 0x11f8) * *(float *)(param_1 + 0x11f8)) {
                  fVar12 = (float10)FUN_00ddbb50(((float)puStack_3a8 * *(float *)(param_1 + 0x11f8)
                                                 + (float)pfStack_3b0 * *pfVar2 +
                                                   *(float *)(param_1 + 0x11f4) * 0.0) /
                                                 (SQRT(*(float *)(param_1 + 0x11f8) *
                                                       *(float *)(param_1 + 0x11f8) +
                                                       *(float *)(param_1 + 0x11f4) *
                                                       *(float *)(param_1 + 0x11f4) + fVar1) *
                                                 SQRT((float)pfStack_3b0 * (float)pfStack_3b0 +
                                                      (float)puStack_3a8 * (float)puStack_3a8)));
                  fStack_384 = (float)fVar12;
                  if (((float10)1.5707964 < fVar12) && (fVar12 < (float10)2.7925267)) {
                    D3DXVec3TransformNormal(&fStack_360,&pfStack_3b0,auStack_120);
                    fStack_364 = fStack_364 * 0.2;
                    D3DXVec3TransformNormal(&pfStack_3bc,auStack_36c,auStack_16c);
                    fVar12 = (float10)fStack_384;
                  }
                  if (((float10)2.3561945 < fVar12) && (fVar12 < (float10)3.1415927)) {
                    *(float *)(param_1 + 0x12c4) =
                         *(float *)(param_1 + 0x12c4) - *(float *)(param_1 + 0x910) * 5.0;
                    fVar12 = (float10)fpatan((float10)(float)pfStack_3b0,(float10)(float)puStack_3a8
                                            );
                    D3DXMatrixRotationY(auStack_1a0,(float)fVar12);
                    D3DXMatrixInverse(auStack_a8,0,auStack_1a8);
                    D3DXVec3TransformNormal(&pfStack_394,pfVar2,auStack_b4);
                    fVar13 = (float10)FUN_00fdc1f0();
                    fVar12 = (float10)(float)pfStack_398 * fVar13;
                    if ((*(int *)(param_1 + 0x239c) == 0) || (*(int *)(param_1 + 0xe80) != 0)) {
                      fVar12 = fVar12 * fVar13;
                    }
                    pfStack_398 = (float *)(float)fVar12;
                    D3DXVec3TransformNormal(pfVar2,&fStack_3a0,auStack_1c0);
                  }
                }
                pfStack_3bc = (float *)0x1;
                fStack_3a0 = (float)pfStack_3b0 * *(float *)(param_1 + 0x12ec) * (float)pfStack_3b8
                             + fStack_3a0;
                pfStack_398 = (float *)((float)puStack_3a8 * *(float *)(param_1 + 0x12ec) *
                                        (float)pfStack_3b8 + (float)pfStack_398);
              }
            }
            iVar11 = iVar14 + 0x30;
            puStack_388 = (undefined4 *)((int)puStack_388 + 1);
          } while ((int)puStack_388 < (int)fStack_32c);
        }
        D3DXMatrixInverse(auStack_e0,0,param_1 + 0x10);
        D3DXVec3TransformNormal(&fStack_35c,&pfStack_3ac,auStack_ec);
        if (((*(float *)(param_1 + 0x12f4) * 0.1 < *(float *)(param_1 + 0x1218)) &&
            (0.0 < fStack_348)) && (pfStack_3bc != (float *)0x0)) {
          D3DXVec3TransformNormal(&stack0xfffffc80,&stack0xfffffc80,param_1 + 0x10);
        }
        *pfVar2 = fStack_3a0 + *pfVar2;
        *(float *)(param_1 + 0x11f4) = fStack_39c + *(float *)(param_1 + 0x11f4);
        *(float *)(param_1 + 0x11f8) = (float)pfStack_398 + *(float *)(param_1 + 0x11f8);
        *(float *)(param_1 + 0x11fc) = (float)pfStack_394 + *(float *)(param_1 + 0x11fc);
        hkpCdPointCollector_4();
        if (DAT_01885d68 != 1) {
          piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar3 = *piVar3 + -1;
          if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      if (*(int *)(param_1 + 0x1288) != 0) {
        FUN_004066f0();
        fStack_33c = 3.40282e+38;
        puStack_330 = &local_320;
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_328 = -1.12104e-44;
        fStack_32c = 0.0;
        FUN_00900350(&ppuStack_340);
        if (0 < (int)fStack_32c) {
          pfStack_3bc = (float *)0x0;
          iVar11 = 0;
          do {
            pfVar9 = (float *)((int)puStack_330 + iVar11);
            fVar1 = pfVar9[10];
            if (*(char *)((int)fVar1 + 0x18) == '\x02') {
              iVar8 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar8 = 0;
            }
            if (*(char *)((int)fVar1 + 0x18) == '\x01') {
              iVar10 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar10 = 0;
            }
            if ((iVar8 != 0) && (iVar10 == 0)) {
              fVar1 = pfVar9[7];
              *pfVar9 = fVar1 * pfVar9[4] + *pfVar9;
              pfVar9[1] = fVar1 * pfVar9[5] + pfVar9[1];
              pfVar9[2] = fVar1 * pfVar9[6] + pfVar9[2];
              pfVar9[3] = fVar1 * pfVar9[7] + pfVar9[3];
              pfVar9[4] = -pfVar9[4];
              pfVar9[5] = -pfVar9[5];
              pfVar9[6] = -pfVar9[6];
              pfVar9[7] = pfVar9[7];
              fVar12 = (float10)pfVar9[7];
              if (fVar12 < (float10)0) {
                fStack_3a0 = (float)((float10)pfVar9[6] * fVar12);
                pfStack_398 = (float *)(float)-((float10)pfVar9[4] * fVar12);
                fVar13 = (float10)fpatan((float10)*pfVar2,(float10)*(float *)(param_1 + 0x11f8));
                fVar12 = (float10)fpatan((float10)pfVar9[6] * fVar12,-((float10)pfVar9[4] * fVar12))
                ;
                fVar12 = (float10)FUN_00ddba30((float)(fVar13 - fVar12));
                if (((float10)1.5707964 < fVar12) || (fVar12 < (float10)-1.5707964)) {
                  *pfVar2 = *pfVar2 - fStack_3a0 * 0.04 * (float)pfStack_3b8;
                  *(float *)(param_1 + 0x11f8) =
                       *(float *)(param_1 + 0x11f8) - (float)pfStack_398 * 0.04 * (float)pfStack_3b8
                  ;
                }
                else {
                  *pfVar2 = fStack_3a0 * 0.04 * (float)pfStack_3b8 + *pfVar2;
                  *(float *)(param_1 + 0x11f8) =
                       (float)pfStack_398 * 0.04 * (float)pfStack_3b8 + *(float *)(param_1 + 0x11f8)
                  ;
                }
              }
            }
            iVar11 = iVar11 + 0x30;
            pfStack_3bc = (float *)((int)pfStack_3bc + 1);
          } while ((int)pfStack_3bc < (int)fStack_32c);
        }
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_32c = 0.0;
        if (-1 < (int)fStack_328) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))
                    (puStack_330,((uint)fStack_328 & 0x3fffffff) * 0x30);
        }
        puStack_330 = (undefined4 *)0x0;
        fStack_328 = -0.0;
        ppuStack_340 = vftable;
        if (DAT_01885d68 != 1) {
          piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar3 = *piVar3 + -1;
          if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      if (*(int *)(param_1 + 0x1298) != 0) {
        FUN_004066f0();
        fStack_33c = 3.40282e+38;
        puStack_330 = &local_320;
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_328 = -1.12104e-44;
        fStack_32c = 0.0;
        FUN_00900350(&ppuStack_340);
        if (0 < (int)fStack_32c) {
          pfStack_3bc = (float *)0x0;
          iVar11 = 0;
          do {
            pfVar9 = (float *)(iVar11 + (int)puStack_330);
            fVar1 = pfVar9[10];
            if (*(char *)((int)fVar1 + 0x18) == '\x02') {
              iVar8 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar8 = 0;
            }
            if (*(char *)((int)fVar1 + 0x18) == '\x01') {
              iVar10 = (int)*(char *)((int)fVar1 + 0x10) + (int)fVar1;
            }
            else {
              iVar10 = 0;
            }
            if ((iVar8 != 0) && (iVar10 == 0)) {
              fVar1 = pfVar9[7];
              *pfVar9 = fVar1 * pfVar9[4] + *pfVar9;
              pfVar9[1] = fVar1 * pfVar9[5] + pfVar9[1];
              pfVar9[2] = fVar1 * pfVar9[6] + pfVar9[2];
              pfVar9[3] = fVar1 * pfVar9[7] + pfVar9[3];
              pfVar9[4] = -pfVar9[4];
              pfVar9[5] = -pfVar9[5];
              pfVar9[6] = -pfVar9[6];
              pfVar9[7] = pfVar9[7];
              fVar1 = pfVar9[7];
              if (fVar1 < 0.0) {
                fVar4 = pfVar9[6];
                *pfVar2 = pfVar9[4] * fVar1 * 0.06 * (float)pfStack_3b8 + *pfVar2;
                *(float *)(param_1 + 0x11f8) =
                     fVar4 * fVar1 * 0.06 * (float)pfStack_3b8 + *(float *)(param_1 + 0x11f8);
              }
            }
            iVar11 = iVar11 + 0x30;
            pfStack_3bc = (float *)((int)pfStack_3bc + 1);
          } while ((int)pfStack_3bc < (int)fStack_32c);
        }
        ppuStack_340 = hkpAllCdPointCollector::vftable;
        fStack_32c = 0.0;
        if (-1 < (int)fStack_328) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))
                    (puStack_330,((uint)fStack_328 & 0x3fffffff) * 0x30);
        }
        puStack_330 = (undefined4 *)0x0;
        fStack_328 = -0.0;
        ppuStack_340 = vftable;
        if (DAT_01885d68 != 1) {
          piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar3 = *piVar3 + -1;
          if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
            return;
          }
        }
      }
    }
  }
  return;
}

// 007CA640  Emc080::vf4C  size=794  [class]
void __fastcall Emc080::vf4C(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar5;
  BehaviorEmBase::vf4C();
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x2384) = 0;
  iVar2 = FUN_00ac4770();
  if (iVar2 == 0) {
    FUN_007c3990();
  }
  FUN_007c8840();
  FUN_007b7b90();
  FUN_007b18a0();
  if (*(char *)(param_1 + 0x242c) == '\0') {
    FUN_007b6ce0();
  }
  else if (*(char *)(param_1 + 0x242c) == '\x01') {
    FUN_007b6db0();
  }
  iVar2 = FUN_00ac4770();
  if ((iVar2 == 0) && ((DAT_01bea060 & 0xa000000) == 0)) {
    FUN_007b29c0();
    if ((*(byte *)(param_1 + 0x12e0) & 8) == 0) {
      fVar1 = *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x11f0) * fVar1
      ;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x11f4) * fVar1 + *(float *)(param_1 + 0x54)
      ;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x11f8) * fVar1 + *(float *)(param_1 + 0x58)
      ;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x11fc) * fVar1 + *(float *)(param_1 + 0x5c)
      ;
      fVar5 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x1248) * *(float *)(param_1 + 0x910) +
                                    *(float *)(param_1 + 0x94));
      *(float *)(param_1 + 0x94) = (float)fVar5;
    }
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1310) + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x1314) + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x1318) + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x131c) + *(float *)(param_1 + 0x5c);
    fVar5 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1310) = (float)((float10)*(float *)(param_1 + 0x1310) * fVar5);
    *(float *)(param_1 + 0x1314) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x1314));
    *(float *)(param_1 + 0x1318) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x1318));
    *(float *)(param_1 + 0x131c) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x131c));
    hkpCdPointCollector::hkpCdPointCollector_17();
  }
  if (*(int *)(param_1 + 0x1278) != 0) {
    Phantom::setTransform(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x1288) != 0) {
    Phantom::setTransform(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x1298) != 0) {
    Phantom::setTransform(param_1 + 0x10);
  }
  FUN_007c8ce0();
  FUN_007b0b00();
  iVar2 = FUN_00ac45b0();
  if (iVar2 != 0) {
    FUN_00ac45b0();
    iVar2 = FUN_00a7c8a0();
    if ((iVar2 != 0) && ((DAT_01bea060 & 0x2000000) == 0)) {
      local_20 = *(undefined4 *)(param_1 + 0x2350);
      local_1c = *(undefined4 *)(param_1 + 0x2354);
      local_18 = *(undefined4 *)(param_1 + 0x2358);
      local_14 = *(undefined4 *)(param_1 + 0x235c);
      FUN_00a84720();
      switchD_0080dbae::default();
      uVar3 = *(undefined4 *)(param_1 + 0x2434);
      if (*(int *)(param_1 + 9000) == 0) {
        uVar3 = 0;
      }
      if (((*(int *)(param_1 + 0xe90) != 0) && (*(int *)(param_1 + 0x618) != 0x50009)) &&
         (*(int *)(param_1 + 0x618) != 0x5000a)) {
        uVar3 = 0;
      }
      FUN_00a84780(&local_20,0,uVar3,0,0,0x3f800000);
      goto LAB_007ca8e8;
    }
  }
  FUN_00a84720();
LAB_007ca8e8:
  *(undefined4 *)(param_1 + 0x2434) = 0;
  switchD_0080dbae::default();
  iVar2 = param_1 + 0x1340;
  iVar4 = 4;
  do {
    *(undefined4 *)(iVar2 + 0x1b0) = *(undefined4 *)(param_1 + 0x910);
    if ((DAT_01bea060 & 0x2000000) == 0) {
      switch(*(undefined4 *)(iVar2 + 0x1ac)) {
      case 0:
        FUN_007c8f50();
        break;
      case 1:
        FUN_007c9230();
        break;
      case 2:
      case 3:
        FUN_007c8680();
      }
    }
    iVar2 = iVar2 + 0x220;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  switchD_0080dbae::default();
  return;
}

// 00AB2C50  Emc080::vf04  size=6  [class]
undefined * Emc080::vf04(void)

{
  return &DAT_01b35900;
}

// 00AB2C60  Emc080::vf17C  size=6  [class]
undefined4 Emc080::vf17C(void)

{
  return 1;
}

// 00AB2C70  Emc080::vf180  size=6  [class]
undefined4 Emc080::vf180(void)

{
  return 1;
}

// 00AB2C80  Emc080::vf20C  size=7  [class]
float10 Emc080::vf20C(void)

{
  return (float10)3.5;
}

// 00AB2C90  Emc080::vf1DC  size=6  [class]
undefined4 Emc080::vf1DC(void)

{
  return 1;
}

// 00AB2CA0  Emc080::vf27C  size=42  [class]
void __thiscall Emc080::vf27C(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = (float)param_2[1] + 1.4;
  return;
}

// 00AB9EE0  Emc080::vf00  size=30  [class]
undefined4 __thiscall Emc080::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

