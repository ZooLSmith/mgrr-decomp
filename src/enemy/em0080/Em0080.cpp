// src/enemy/em0080/Em0080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0047C610..00AB6EB0, 215 functions

#include "types.h"

// 0047C610  FUN_0047c610  size=38  [callgraph]
void __fastcall FUN_0047c610(int param_1)

{
  if (*(int *)(param_1 + 0x22c8) == 0) {
    FUN_00ac8d40(1);
  }
  *(byte *)(param_1 + 0xde8) = *(byte *)(param_1 + 0xde8) | 0x80;
  *(undefined4 *)(param_1 + 0x22c8) = 1;
  return;
}

// 0047C700  Em0080::vf118  size=91  [class]
undefined4 __thiscall Em0080::vf118(int param_1,int param_2)

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

// 0047C760  Em0080::vf304  size=51  [class]
void __fastcall Em0080::vf304(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x588) + 0x130);
  *(undefined4 *)(param_1 + 0x1100) = 0;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1100) = 1;
    *(int *)(param_1 + 0x4a0) = piVar1[1];
  }
  return;
}

// 0047C7B0  FUN_0047c7b0  size=93  [between]
bool __thiscall FUN_0047c7b0(int param_1,int param_2,int param_3)

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

// 0047C810  Em0080::vf54  size=5  [class]
void __fastcall Em0080::vf54(int *param_1)

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

// 0047C830  FUN_0047c830  size=172  [between]
void __fastcall FUN_0047c830(int *param_1)

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
      param_1[0x40c] = 0x42700000;
      return;
    }
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  return;
}

// 0047C900  FUN_0047c900  size=79  [between]
void __fastcall FUN_0047c900(int param_1)

{
  *(undefined4 *)(param_1 + 0x1424) = 0;
  *(undefined4 *)(param_1 + 0x1644) = 0;
  *(undefined4 *)(param_1 + 0x1864) = 0;
  *(undefined4 *)(param_1 + 0x1a84) = 0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0047C960  FUN_0047c960  size=379  [between]
void __fastcall FUN_0047c960(int *param_1)

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
      param_1[0x446] = 1;
      (*pcVar1)();
      param_1[0x40c] = 0x42700000;
      return;
    }
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0047CB00  FUN_0047cb00  size=164  [between]
void __fastcall FUN_0047cb00(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0047cb6f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0047cb6f:
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
  return;
}

// 0047CBC0  FUN_0047cbc0  size=238  [between]
void __fastcall FUN_0047cbc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x15;
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x1000a) {
      uVar2 = 0x19;
    }
    FUN_00aa4080(uVar2,0,0x3daaaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0047cc58;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0047cc58:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0047CCB0  FUN_0047ccb0  size=65  [between]
void __thiscall FUN_0047ccb0(undefined2 *param_1,undefined2 *param_2)

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

// 0047CD00  FUN_0047cd00  size=161  [between]
void __fastcall FUN_0047cd00(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  fVar3 = 0.0;
  D3DXMatrixInverse(local_50,0,param_1 + 0x10);
  D3DXVec3TransformNormal(auStack_6c,param_1 + 0x1120,auStack_5c);
  fVar2 = 0.3;
  fVar1 = 0.7;
  if ((*(byte *)(param_1 + 0x1210) & 1) != 0) {
    fVar2 = 0.0;
    fVar1 = 1.0;
  }
  fVar1 = fVar2 * (*(float *)(param_1 + 0x1140) / *(float *)(param_1 + 0x1220)) +
          fVar1 * (fVar3 / (*(float *)(param_1 + 0x1218) * 0.7));
  if ((fVar1 <= 1.0) && (-1.0 <= fVar1)) {
    return;
  }
  return;
}

// 0047CDB0  FUN_0047cdb0  size=284  [between]
void __fastcall FUN_0047cdb0(int param_1)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  D3DXMatrixInverse(local_50,0,param_1 + 0x10);
  D3DXVec3TransformNormal(auStack_6c,param_1 + 0x1120,auStack_5c);
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x1148) == 0.0) {
    fVar2 = 1.0;
    if ((*(byte *)(param_1 + 0x1210) & 1) == 0) {
      fVar1 = 0.3;
      fVar2 = 0.7;
    }
    fVar1 = fVar2 * (unaff_ESI / (*(float *)(param_1 + 0x1218) * 0.9)) +
            fVar1 * (*(float *)(param_1 + 0x1148) / (*(float *)(param_1 + 0x122c) * -1.0));
  }
  else {
    fVar2 = 1.0;
    if ((*(byte *)(param_1 + 0x1210) & 1) == 0) {
      fVar1 = 0.3;
      fVar2 = 0.7;
    }
    fVar1 = fVar2 * (unaff_ESI / (*(float *)(param_1 + 0x1218) * 0.9)) +
            fVar1 * (*(float *)(param_1 + 0x1148) / *(float *)(param_1 + 0x1228));
  }
  if ((fVar1 <= 1.0) && (fVar1 < -1.0)) {
    return;
  }
  return;
}

// 0047CED0  FUN_0047ced0  size=92  [between]
void __fastcall FUN_0047ced0(int param_1)

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

// 0047CF40  FUN_0047cf40  size=148  [between]
void __fastcall FUN_0047cf40(int *param_1)

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
  param_1[0x495] = 0;
  param_1[0x446] = 0;
  param_1[0x8ac] = 0;
                    /* WARNING: Could not recover jumptable at 0x0047cfd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0047CFF0  FUN_0047cff0  size=105  [between]
void __fastcall FUN_0047cff0(int param_1)

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

// 0047D070  FUN_0047d070  size=564  [between]
void __fastcall FUN_0047d070(int *param_1)

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
      param_1[0x442] = param_1[0x25];
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20006) {
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
      param_1[0x442] = (int)(float)fVar3;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20007) {
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] - 1.5707964);
      param_1[0x442] = (int)(float)fVar3;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20008) {
      fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
      param_1[0x442] = (int)(float)fVar3;
    }
    param_1[0x443] = 0;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8de10((float)param_1[0x443] * (float)param_1[0x244],param_1[0x442],0);
    fVar1 = (float)param_1[0x244] * 0.0005 + (float)param_1[0x443];
    param_1[0x443] = (int)fVar1;
    if (fVar1 <= 0.08) {
      return;
    }
    param_1[0x443] = 0x3da3d70a;
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
  FUN_00a8de10((float)param_1[0x443] * (float)param_1[0x244],param_1[0x442],0);
  fVar3 = (float10)FUN_00fdc1f0();
  param_1[0x443] = (int)(float)(fVar3 * (float10)(float)param_1[0x443]);
  return;
}

// 0047D2D0  FUN_0047d2d0  size=452  [between]
void __fastcall FUN_0047d2d0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(9,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    param_1[0x444] = 0;
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x20009) {
      param_1[0x445] = -0x42f105cb;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x2000a) {
      param_1[0x445] = 0x3d0efa35;
    }
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x444] * (float)param_1[0x244] +
                                  (float)param_1[0x25]);
    param_1[0x25] = (int)(float)fVar3;
    fVar3 = (float10)FUN_00fdc1f0();
    param_1[0x444] =
         (int)(float)(((float10)(float)param_1[0x445] - (float10)(float)param_1[0x444]) * fVar3 +
                     (float10)(float)param_1[0x444]);
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
  fVar3 = (float10)FUN_00ddba30((float)param_1[0x444] * (float)param_1[0x244] + (float)param_1[0x25]
                               );
  param_1[0x25] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00fdc1f0();
  param_1[0x444] =
       (int)(float)(-(float10)(float)param_1[0x444] * fVar3 + (float10)(float)param_1[0x444]);
  return;
}

// 0047D4B0  FUN_0047d4b0  size=63  [between]
void __fastcall FUN_0047d4b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x22b4) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    *(undefined4 *)(param_1 + 0x2364) = 1;
    *(undefined4 *)(param_1 + 0x2368) = 0x40c00000;
    *(undefined4 *)(param_1 + 0x236c) = 0x43960000;
    *(undefined4 *)(param_1 + 0x2370) = 0x40490fdb;
  }
  return;
}

// 0047D4F0  FUN_0047d4f0  size=54  [between]
void __fastcall FUN_0047d4f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2368) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x2364) = 1;
  *(undefined4 *)(param_1 + 0x22b4) = 1;
  *(undefined4 *)(param_1 + 0x236c) = 0x43960000;
  *(undefined4 *)(param_1 + 0x2370) = 0x40490fdb;
  return;
}

// 0047D550  FUN_0047d550  size=116  [between]
void __fastcall FUN_0047d550(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(9,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1644) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0047D5D0  FUN_0047d5d0  size=156  [between]
void __fastcall FUN_0047d5d0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2250) == 0) {
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

// 0047D670  FUN_0047d670  size=156  [between]
void __fastcall FUN_0047d670(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2250) == 0) {
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

// 0047D710  FUN_0047d710  size=331  [between]
void __fastcall FUN_0047d710(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar2 = 0;
  if (param_1[0x894] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    if (param_1[0x894] == 0) {
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
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,param_1[0x400] | uVar2 | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  }
  else if (param_1[0x187] != 1) goto LAB_0047d804;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0047d804:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0047D870  FUN_0047d870  size=286  [between]
void __fastcall FUN_0047d870(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar2 = 0;
  if (param_1[0x894] == 0) {
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
  else if (param_1[0x187] != 1) goto LAB_0047d937;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x40c] = 0x42f00000;
  }
LAB_0047d937:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0047D9A0  FUN_0047d9a0  size=286  [between]
void __fastcall FUN_0047d9a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar2 = 0;
  if (param_1[0x894] == 0) {
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
  else if (param_1[0x187] != 1) goto LAB_0047da67;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x40c] = 0x42f00000;
  }
LAB_0047da67:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0047DB20  FUN_0047db20  size=170  [between]
void __fastcall FUN_0047db20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    iVar1 = param_1[0x372];
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
                    /* WARNING: Could not recover jumptable at 0x0047db65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0047DBE0  FUN_0047dbe0  size=169  [between]
void __fastcall FUN_0047dbe0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x372];
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
                    /* WARNING: Could not recover jumptable at 0x0047dc87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0047DCA0  FUN_0047dca0  size=156  [between]
void __fastcall FUN_0047dca0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar2 = 0;
  if (param_1[0x894] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xca,0,0x3daaaaab,0x3f800000,param_1[0x400] | uVar2 | 0x8000000,0xbf800000,
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
                    /* WARNING: Could not recover jumptable at 0x0047dd3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0047DD70  FUN_0047dd70  size=333  [between]
void __fastcall FUN_0047dd70(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 3;
  uVar1 = 0;
  param_1[0x20a] = 0x78;
  if (param_1[0x894] == 0) {
    uVar1 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    uVar4 = 0x3e2aaaab;
    uVar3 = 0xdd;
    break;
  case 1:
  case 3:
    goto switchD_0047ddb0_caseD_1;
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
                    /* WARNING: Could not recover jumptable at 0x0047deb9. Too many branches */
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
switchD_0047ddb0_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 0047DEF0  FUN_0047def0  size=54  [between]
void __fastcall FUN_0047def0(int *param_1)

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

// 0047DF50  FUN_0047df50  size=216  [between]
void __fastcall FUN_0047df50(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  if (param_1[0x894] == 0) {
    uVar2 = 0x40;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xe0,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    if (param_1[0x8b3] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0047e026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0047E060  FUN_0047e060  size=408  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0047e060(int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_8 [2];
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar1 = 0;
  if (param_1[0x894] == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0047e1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0047E240  FUN_0047e240  size=170  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0047e240(int *param_1)

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

// 0047E330  Em0080::vf1A4  size=45  [class]
void __thiscall Em0080::vf1A4(int param_1,undefined4 param_2,byte param_3)

{
  if ((param_3 & 1) != 0) {
    *(int *)(param_1 + 0x229c) = *(int *)(param_1 + 0x229c) + 1;
    *(undefined4 *)(param_1 + 0x2294) = 1;
    *(undefined4 *)(param_1 + 0x2298) = 1;
  }
  if ((param_3 & 6) != 0) {
    *(undefined4 *)(param_1 + 0x22a0) = 1;
  }
  return;
}

// 0047E360  Em0080::vf208  size=36  [class]
void __thiscall Em0080::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 10.0;
  return;
}

// 0047E390  Em0080::vf6C  size=5  [class]
void __fastcall Em0080::vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 0047E3A0  Em0080::thunk_vf70  size=5  [class]
void __fastcall Em0080::thunk_vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 0047E3B0  FUN_0047e3b0  size=275  [between]
void __thiscall
FUN_0047e3b0(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00a8c9b0(0,0x82,0x42700000,0);
  FUN_00a8c9b0(0,0x83,0x42700000,0);
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe04) = uVar1;
    *(undefined4 *)(param_1 + 0xe08) = *(undefined4 *)(param_1 + 0xdc8);
    iVar2 = FUN_0047c7b0(param_2,param_3);
    if (iVar2 != 0) {
      param_3 = param_3 | 0x80000000;
    }
    *(uint *)(param_1 + 0x1010) = *(uint *)(param_1 + 0x1010) & 0xc7ffffff;
    *(undefined4 *)(param_1 + 0x1644) = 0;
    if ((param_2 & 0xffff0000) == 0x50000) {
      FUN_00c27260(0x40200000);
    }
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(uint *)(param_1 + 0xdc8) = param_3;
  if (-1 < (int)param_3) {
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x1000) = 0;
    return;
  }
  FUN_00a962d0(1,0);
  *(undefined4 *)(param_1 + 0x1000) = 0x40;
  return;
}

// 0047E4F0  FUN_0047e4f0  size=213  [between]
void __fastcall FUN_0047e4f0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (char)param_1[0x84c];
  switch(cVar2) {
  case '\0':
    *(undefined1 *)((int)param_1 + 0x2131) = 0;
    *(char *)(param_1 + 0x84c) = cVar2 + '\x01';
    FUN_00eaa6e0(0x3f800000,0);
  case '\x01':
    if (5 < *(byte *)((int)param_1 + 0x2131)) {
      *(char *)(param_1 + 0x84c) = (char)param_1[0x84c] + '\x01';
      return;
    }
    return;
  case '\x02':
    *(char *)(param_1 + 0x84c) = cVar2 + '\x01';
    (**(code **)(*param_1 + 0x358))(0x1e,param_1 + 0x850);
    iVar3 = 0x41c00000;
    break;
  case '\x03':
  case '\x05':
    goto switchD_0047e505_caseD_3;
  case '\x04':
    *(char *)(param_1 + 0x84c) = cVar2 + '\x01';
    FUN_00eaa6e0(0x41200000,0);
    iVar3 = 0x40c00000;
    break;
  default:
    return;
  }
  param_1[0x84b] = iVar3;
switchD_0047e505_caseD_3:
  fVar1 = (float)param_1[0x84b];
  param_1[0x84b] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 <= fVar1 - (float)param_1[0x244]) {
    return;
  }
  *(undefined1 *)(param_1 + 0x84c) = 0;
  return;
}

// 0047E600  FUN_0047e600  size=36  [between]
undefined4 FUN_0047e600(void)

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

// 0047E630  FUN_0047e630  size=88  [between]
void FUN_0047e630(void)

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

// 0047E690  FUN_0047e690  size=36  [between]
undefined4 FUN_0047e690(void)

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

// 0047E6C0  FUN_0047e6c0  size=88  [between]
void FUN_0047e6c0(void)

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

// 0047E720  FUN_0047e720  size=52  [between]
void __fastcall FUN_0047e720(int *param_1)

{
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_0047e3b0(0x20001,0,0,0,0);
  return;
}

// 0047E770  FUN_0047e770  size=29  [between]
void FUN_0047e770(void)

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

// 0047E790  Em0080::vf288  size=8  [class]
undefined4 Em0080::vf288(void)

{
  return 1;
}

// 0047E820  FUN_0047e820  size=103  [between]
void __thiscall FUN_0047e820(int *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x194,0);
    (**(code **)(*param_1 + 0x358))(0x196,0);
  }
  *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x10;
  FUN_00ac8d80(4,1);
  FUN_00ac8d80(9,1);
  FUN_00ac9420("_EFD00");
  FUN_00ac9420("_EFD02");
  return;
}

// 0047E890  FUN_0047e890  size=103  [between]
void __thiscall FUN_0047e890(int *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x195,0);
    (**(code **)(*param_1 + 0x358))(0x197,0);
  }
  *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 8;
  FUN_00ac8d80(6,1);
  FUN_00ac8d80(5,1);
  FUN_00ac9420("_EFD01");
  FUN_00ac9420("_EFD03");
  return;
}

// 0047E9B0  FUN_0047e9b0  size=312  [between]
undefined4 __fastcall FUN_0047e9b0(int param_1)

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
    if ((((*(byte *)(param_1 + 0xde9) & 8) == 0) &&
        (!NAN((float)pfStack_ac) && 0.0 < (float)pfStack_ac != ((float)pfStack_ac == 0.0))) &&
       ((float)pfStack_ac <= 2.3561945)) {
      uVar2 = 1;
    }
    if ((((*(byte *)(param_1 + 0xde9) & 0x10) == 0) && ((float)pfStack_ac <= 0.0)) &&
       (-2.3561945 <= (float)pfStack_ac)) {
      return 1;
    }
  }
  return uVar2;
}

// 0047EAF0  Em0080::vfFC  size=52  [class]
void __fastcall Em0080::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  if (*(int *)(param_1 + 0xdc0) == 0) {
    (**(code **)(*(int *)(param_1 + 0x1e60) + 8))(0x3f800000,0,0);
  }
  return;
}

// 0047EB30  Em0080::vf100  size=40  [class]
void __fastcall Em0080::vf100(int *param_1)

{
  BehaviorAppBase::vf100();
  if (param_1[0x370] == 0) {
    (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x798);
  }
  return;
}

// 0047EB60  Em0080::thunk_vf104  size=5  [class]
void __fastcall Em0080::thunk_vf104(int *param_1)

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

// 0047EB70  Em0080::vf108  size=13  [class]
void __fastcall Em0080::vf108(int *param_1)

{
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0047EB80  Em0080::vf110  size=25  [class]
void __thiscall Em0080::vf110(int param_1,undefined4 param_2)

{
  Bh0064::vf110(param_2);
  *(undefined4 *)(param_1 + 0x2384) = param_2;
  return;
}

// 0047EBD0  FUN_0047ebd0  size=232  [callgraph]
void __fastcall FUN_0047ebd0(uint *param_1)

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

// 0047ECC0  FUN_0047ecc0  size=125  [callgraph]
void FUN_0047ecc0(void)

{
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e4ccccd,0x3ae4c388,0x3c0efa35);
  FUN_00a82840(0x3f860a92,0xbfc90fdb,0x3e4ccccd,0x3ae4c388,0x3c0efa35);
  return;
}

// 0047ED40  FUN_0047ed40  size=304  [callgraph]
void __fastcall FUN_0047ed40(uint *param_1)

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

// 0047EEE0  FUN_0047eee0  size=164  [callgraph]
void __thiscall FUN_0047eee0(int param_1,int param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  
  FUN_00a81330();
  iVar2 = FUN_00a7c8a0();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1ac) == 0)) {
    if (*(int *)(iVar2 + 0xdc0) == 0) {
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
      goto switchD_0047ef59_default;
    }
  }
  *(float *)(param_1 + 0x1c8) = param_3;
switchD_0047ef59_default:
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1cc);
  return;
}

// 0047F360  Em0080::vf158  size=5  [class]
undefined4 Em0080::vf158(void)

{
  return 0;
}

// 0047F370  Em0080::vf184  size=6  [class]
undefined4 Em0080::vf184(void)

{
  return 0xffffffff;
}

// 0047F380  Em0080::vf188  size=76  [class]
void Em0080::vf188(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_1 == 7) {
      FUN_0047e3b0(0x90001,0,0,0,0);
    }
  }
  return;
}

// 0047F430  FUN_0047f430  size=1  [between]
void FUN_0047f430(void)

{
  return;
}

// 0047F440  FUN_0047f440  size=23  [between]
void FUN_0047f440(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    return;
  }
  return;
}

// 0047F460  FUN_0047f460  size=23  [between]
void FUN_0047f460(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    return;
  }
  return;
}

// 0047F480  FUN_0047f480  size=35  [between]
void __fastcall FUN_0047f480(int param_1)

{
  *(undefined4 *)(param_1 + 0x2230) = 0x17;
  *(undefined4 *)(param_1 + 0x2238) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2234) = 0x42700000;
  return;
}

// 0047F4E0  FUN_0047f4e0  size=35  [between]
void __fastcall FUN_0047f4e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2230) = 0x18;
  *(undefined4 *)(param_1 + 0x2238) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2234) = 0x42700000;
  return;
}

// 0047F540  FUN_0047f540  size=98  [between]
void __fastcall FUN_0047f540(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x2230) != -1) {
    fVar1 = *(float *)(param_1 + 0x2238) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x2238) = fVar1;
    if (fVar1 < 0.0) {
      *(float *)(param_1 + 0x2234) = *(float *)(param_1 + 0x2234) - *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0x2234) < 0.0) {
      *(undefined4 *)(param_1 + 0x2230) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2238) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x2234) = 0xbf800000;
    }
  }
  return;
}

// 0047F5B0  Em0080::vf258  size=3  [class]
void Em0080::vf258(void)

{
  return;
}

// 0047F5C0  FUN_0047f5c0  size=118  [between]
undefined4 __thiscall FUN_0047f5c0(int param_1,int param_2,int *param_3)

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

// 0047F650  FUN_0047f650  size=127  [between]
int __thiscall FUN_0047f650(int param_1,int param_2)

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

// 0047F870  FUN_0047f870  size=44  [between]
void __thiscall FUN_0047f870(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x130) = *param_2;
  *(undefined4 *)(param_1 + 0x134) = param_2[1];
  *(undefined4 *)(param_1 + 0x138) = param_2[2];
  *(undefined4 *)(param_1 + 0x13c) = param_2[3];
  return;
}

// 0047F8D0  FUN_0047f8d0  size=52  [between]
void __fastcall FUN_0047f8d0(int param_1)

{
  FUN_0047e3b0(0x50002,0,0,0,0);
  if ((*(byte *)(param_1 + 0xdea) & 0x18) != 0) {
    FUN_0047e3b0(0x50003,0,0,0,0);
  }
  return;
}

// 0047F930  Em0080::vf300  size=32  [class]
void __fastcall Em0080::vf300(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x588) + 0x130);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = *(undefined4 *)(param_1 + 0x4a0);
  }
  return;
}

// 0047F950  FUN_0047f950  size=318  [between]
undefined4 __thiscall FUN_0047f950(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_110 [140];
  uint local_84;
  uint local_80;
  int local_7c;
  
  uVar2 = 0;
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
        param_1[0x404] = param_1[0x404] | 0x80000;
        uVar2 = 1;
        uVar3 = 0;
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c8a0();
        }
        if ((local_80 & 0x10000) != 0) {
          (**(code **)(*param_1 + 0x198))(uVar3,param_2,1);
          return 1;
        }
        (**(code **)(*param_1 + 0x198))(uVar3,param_2,0x100);
      }
      return uVar2;
    }
  }
  return 0;
}

// 0047FA90  FUN_0047fa90  size=117  [between]
undefined4 __thiscall FUN_0047fa90(int *param_1,undefined4 param_2)

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

// 0047FB10  FUN_0047fb10  size=81  [between]
undefined4 FUN_0047fb10(undefined4 param_1)

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

// 0047FB70  Em0080::vf130  size=723  [class]
undefined4 __thiscall Em0080::vf130(int param_1,ushort *param_2)

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
    FUN_00dd5650(&DAT_0163e080);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  local_8 = FUN_00ac8520(*param_2);
  if (*(int *)(param_1 + 0x22cc) != 0) {
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
    break;
  default:
    goto switchD_0047fc66_caseD_5;
  case 6:
    *puVar1 = 0x107;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    goto LAB_0047fe2a;
  case 8:
    *puVar1 = 0x108;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    return unaff_ESI;
  case 10:
    *puVar1 = 0x109;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x800;
    break;
  case 0xc:
    *puVar1 = 0x10a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0xa00000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    goto LAB_0047fe2a;
  case 0xe:
    *puVar1 = 0x10b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    return unaff_ESI;
  case 0x18:
    *puVar1 = 0x108;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_0047fc8b;
  case 0x1a:
    *puVar1 = 0x108;
    goto LAB_0047fe1c;
  case 0x1c:
    *puVar1 = 0x109;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x800;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
    return unaff_ESI;
  case 0x1e:
    *puVar1 = 0x109;
    puVar1[0x23] = puVar1[0x23] | 0x20000800;
    break;
  case 0x20:
    *puVar1 = 0x111;
LAB_0047fe1c:
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
LAB_0047fe2a:
    *(undefined2 *)(puVar1 + 0x21) = 0x3203;
switchD_0047fc66_caseD_5:
    return unaff_ESI;
  }
  *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_0047fc8b:
  *(undefined2 *)(puVar1 + 0x21) = 0x3203;
  return unaff_ESI;
}

// 0047FEA0  FUN_0047fea0  size=102  [between]
undefined4 __fastcall FUN_0047fea0(int param_1)

{
  if ((1.2217305 < *(float *)(param_1 + 0xaa0)) && (*(float *)(param_1 + 0xaa0) < 2.3561945)) {
    FUN_0047e3b0(0x10009,0,0,0,0);
    return 1;
  }
  if (2.3561945 < *(float *)(param_1 + 0xaa0)) {
    FUN_0047e3b0(0x1000a,0,0,0,0);
    return 1;
  }
  return 0;
}

// 0047FF60  Em0080::vf264  size=354  [class]
undefined4 __thiscall Em0080::vf264(int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_c [12];
  
  FUN_0040ac60(param_2);
  param_1[0x6c0] = param_1[0x2e1];
  if (param_1[0x2e1] != 0) {
    param_1[0x6bc] = param_1[0x2e3];
    param_1[0x6bd] = param_1[0x2e4];
    param_1[0x6be] = param_1[0x2e5];
    param_1[0x6bf] = 0x3f800000;
    param_1[0x6c1] = param_1[0x2e2];
  }
  FUN_00aa0ba0(param_1[0x2c2],param_1[0x2e7]);
  if (param_1[0x2c2] != -1) {
    iVar1 = FUN_00a8d750();
    if (iVar1 != 0) {
      FUN_0047e3b0(0x20003,0,0,0,0);
    }
  }
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if (*(int *)(param_1[0x1f6] + 0x810) != 0) {
    FUN_00a8d580(0x400000);
  }
  if ((param_1[0x2c9] != -1) && (param_1[0x8b3] != 0)) {
    FUN_0047e3b0(0x10003,0,0,0,0);
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

// 004800D0  Em0080::vf50  size=259  [class]
void __fastcall Em0080::vf50(int *param_1)

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
  if (param_1[0x406] != 0) {
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
    FUN_00a8e130(&iStack_60,param_1 + 0x408,*(undefined4 *)(iVar1 + 4),uVar2);
    iStack_20 = iStack_60;
    iStack_1c = iStack_5c;
    iStack_18 = iStack_58;
    FUN_00920c60(&uStack_50,0,0);
  }
  return;
}

// 004801E0  Em0080::vf268  size=152  [class]
undefined4 __thiscall
Em0080::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  if (*(int *)(param_1 + 0x4e4) != 0) {
switchD_00480202_caseD_3:
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
    goto switchD_00480202_caseD_3;
  case 10:
    if ((*(int *)(param_1 + 0x618) == 0x10002) && (*(int *)(param_1 + 0x61c) == 1)) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return 1;
    }
    break;
  case 0x20:
    if (*(int *)(param_1 + 0xdc0) == 0) {
      FUN_00c3ccb0(0);
      FUN_00a88b50(4,0);
      FUN_0047e3b0(0x20001,0,0,0,0);
    }
  }
  return 1;
}

// 004802B0  FUN_004802b0  size=550  [between]
void __fastcall FUN_004802b0(int *param_1)

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
      FUN_0047e3b0(0x20000,0,0,0,0);
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004804E0  FUN_004804e0  size=137  [between]
void __thiscall FUN_004804e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x12);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xe10) = param_3;
    *(undefined4 *)(param_1 + 0xe0c) = param_2;
    FUN_0047e3b0(0x10005,0x80000000,4,0,0);
    return;
  }
  iVar1 = FUN_00a8c760(0x11);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xe0c) = param_2;
    *(undefined4 *)(param_1 + 0xe10) = param_3;
    FUN_0047e3b0(0x10005,0,4,0,0);
    return;
  }
  FUN_0047e3b0(param_2,param_3,0,0,0);
  return;
}

// 00480570  FUN_00480570  size=440  [between]
void __fastcall FUN_00480570(int *param_1)

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
    if ((iVar1 != 0) && (iVar1 = FUN_0047fea0(), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00480723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00480740  FUN_00480740  size=1823  [between]
void __fastcall FUN_00480740(int param_1)

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
  if ((*(ushort *)(param_1 + 0x11f0) & 8) != 0) {
    local_a8 = local_a8 * 10.0;
    fVar1 = 10.0;
    local_ac = 10.0;
  }
  if ((*(ushort *)(param_1 + 0x11f0) & 0x10) != 0) {
    local_a8 = local_a8 * 14.5;
    fVar1 = 14.5;
    local_ac = 14.5;
  }
  if (*(int *)(param_1 + 0x22cc) != 0) {
    local_a8 = local_a8 * 0.9;
    local_ac = fVar1 * 0.9;
  }
  fVar6 = (float10)FUN_00fdc1f0();
  cVar2 = *(char *)(param_1 + 0x11a5);
  *(float *)(param_1 + 0x1140) = (float)(fVar6 * (float10)*(float *)(param_1 + 0x1140));
  *(float *)(param_1 + 0x1148) = (float)(fVar6 * (float10)*(float *)(param_1 + 0x1148));
  switch(cVar2) {
  case '\0':
    *(char *)(param_1 + 0x11a5) = cVar2 + '\x01';
    *(undefined4 *)(param_1 + 0x1150) = 0;
    *(undefined4 *)(param_1 + 0x1154) = 0;
  case '\x01':
    *(undefined4 *)(param_1 + 0x11a0) = 0;
    goto switchD_00480817_default;
  case '\x02':
    *(undefined4 *)(param_1 + 0x117c) = 0;
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) & 0xffffffeb;
    *(undefined4 *)(param_1 + 0x11a0) = 0;
    *(char *)(param_1 + 0x11a5) = cVar2 + '\x01';
    *(undefined4 *)(param_1 + 0x1118) = 1;
  case '\x03':
    *(char *)(param_1 + 0x11a5) = *(char *)(param_1 + 0x11a5) + '\x01';
    *(undefined4 *)(param_1 + 0x11f4) = 0;
    *(undefined4 *)(param_1 + 0x11f0) = 0;
    *(undefined4 *)(param_1 + 0x11f8) = 0;
    *(undefined1 *)(param_1 + 0x11fc) = 0;
    *(undefined4 *)(param_1 + 0x1200) = 0;
    *(undefined4 *)(param_1 + 0x1204) = 0;
    *(undefined4 *)(param_1 + 0x1208) = 0;
    if (*(int *)(param_1 + 0x11e4) != 0) {
      FUN_0047ccb0(*(undefined4 *)(param_1 + 0x11dc));
      FUN_0047f650(0);
    }
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) & 0xfffffffb;
    *(undefined4 *)(param_1 + 0x1194) = 0;
    *(undefined4 *)(param_1 + 0x1198) = 0;
LAB_004808da:
    *(undefined4 *)(param_1 + 0x1150) = 0;
    *(undefined4 *)(param_1 + 0x1154) = 0;
    *(float *)(param_1 + 0x11a0) = *(float *)(param_1 + 0x11a0) + *(float *)(param_1 + 0x910);
    if ((*(byte *)(param_1 + 0x11f0) & 1) != 0) {
      *(float *)(param_1 + 0x1174) = local_a4 * 0.01;
    }
    if (*(int *)(param_1 + 0x11f8) == 0) {
      *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) | 4;
    }
    if (*(int *)(param_1 + 0x11f8) == 10) {
      local_a0 = 0.0;
      local_9c = 0;
      local_98[0] = *(float *)(param_1 + 0x1220) * local_a8;
      D3DXMatrixRotationY(local_90,*(undefined4 *)(param_1 + 0x119c));
      D3DXVec3TransformNormal(&local_a8,&local_a8,local_98);
      D3DXMatrixInverse(auStack_64,0,param_1 + 0x10);
      D3DXVec3TransformNormal(&stack0xffffff40,&stack0xffffff40,auStack_70);
      fVar1 = *(float *)(param_1 + 0x1140) + local_a0;
      *(float *)(param_1 + 0x1140) = fVar1;
      fVar4 = *(float *)(param_1 + 0x1220) * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1140) = fVar4;
      }
      fVar1 = -fVar4;
      if (*(float *)(param_1 + 0x1140) <= fVar1) {
        *(float *)(param_1 + 0x1140) = fVar1;
      }
      fVar5 = *(float *)(param_1 + 0x1148) + local_98[0];
      *(float *)(param_1 + 0x1148) = fVar5;
      if (fVar4 <= fVar5) {
        *(float *)(param_1 + 0x1148) = fVar4;
      }
      if (*(float *)(param_1 + 0x1148) <= fVar1) {
        *(float *)(param_1 + 0x1148) = fVar1;
      }
      *(undefined4 *)(param_1 + 0x1150) = 1;
      *(undefined4 *)(param_1 + 0x1154) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x11f8);
    if (iVar3 == 2) {
      fVar4 = *(float *)(param_1 + 0x1228) * local_a8 + *(float *)(param_1 + 0x1148);
      *(float *)(param_1 + 0x1148) = fVar4;
      fVar1 = *(float *)(param_1 + 0x1228) * local_ac;
      if (fVar1 < fVar4 == (fVar1 == fVar4)) {
        *(undefined4 *)(param_1 + 0x1154) = 1;
      }
      else {
        *(float *)(param_1 + 0x1148) = fVar1;
        *(undefined4 *)(param_1 + 0x1154) = 1;
      }
    }
    if (iVar3 == 3) {
      fVar4 = *(float *)(param_1 + 0x122c) * local_a8 + *(float *)(param_1 + 0x1148);
      *(float *)(param_1 + 0x1148) = fVar4;
      fVar1 = *(float *)(param_1 + 0x122c) * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1148) = fVar1;
      }
      *(undefined4 *)(param_1 + 0x1154) = 1;
    }
    if (iVar3 == 4) {
      fVar1 = *(float *)(param_1 + 0x1220) * local_a8 + *(float *)(param_1 + 0x1140);
      *(float *)(param_1 + 0x1140) = fVar1;
      fVar4 = *(float *)(param_1 + 0x1220) * local_ac;
      if (fVar4 < fVar1 != (fVar4 == fVar1)) {
        *(float *)(param_1 + 0x1140) = fVar4;
      }
      *(undefined4 *)(param_1 + 0x1150) = 1;
    }
    if (iVar3 == 5) {
      fVar4 = *(float *)(param_1 + 0x1140) - *(float *)(param_1 + 0x1220) * local_a8;
      *(float *)(param_1 + 0x1140) = fVar4;
      fVar1 = *(float *)(param_1 + 0x1220) * -1.0 * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1140) = fVar1;
      }
      *(undefined4 *)(param_1 + 0x1150) = 1;
    }
    if (iVar3 == 6) {
      fVar4 = *(float *)(param_1 + 0x1220) * local_a8 + *(float *)(param_1 + 0x1140);
      *(float *)(param_1 + 0x1140) = fVar4;
      fVar1 = *(float *)(param_1 + 0x1220) * local_ac;
      if (fVar1 < fVar4 != (fVar1 == fVar4)) {
        *(float *)(param_1 + 0x1140) = fVar1;
      }
      fVar1 = local_a8 * *(float *)(param_1 + 0x1224) * 0.5 + *(float *)(param_1 + 0x1148);
      *(float *)(param_1 + 0x1148) = fVar1;
      fVar4 = local_ac * *(float *)(param_1 + 0x1224) * 0.5;
      if (fVar4 < fVar1 != (fVar4 == fVar1)) {
        *(float *)(param_1 + 0x1148) = fVar4;
      }
      *(undefined4 *)(param_1 + 0x1150) = 1;
      *(undefined4 *)(param_1 + 0x1154) = 1;
    }
    if (iVar3 == 7) {
      fVar4 = *(float *)(param_1 + 0x1140) - *(float *)(param_1 + 0x1220) * local_a8;
      *(float *)(param_1 + 0x1140) = fVar4;
      fVar1 = *(float *)(param_1 + 0x1220) * -1.0 * local_ac;
      if (fVar4 <= fVar1) {
        *(float *)(param_1 + 0x1140) = fVar1;
      }
      fVar4 = local_a8 * *(float *)(param_1 + 0x1224) * 0.5 + *(float *)(param_1 + 0x1148);
      *(float *)(param_1 + 0x1148) = fVar4;
      fVar1 = local_ac * *(float *)(param_1 + 0x1224) * 0.5;
      if (fVar1 < fVar4 == (fVar1 == fVar4)) {
        *(undefined4 *)(param_1 + 0x1150) = 1;
        *(undefined4 *)(param_1 + 0x1154) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x1150) = 1;
        *(float *)(param_1 + 0x1148) = fVar1;
        *(undefined4 *)(param_1 + 0x1154) = 1;
      }
    }
    fVar1 = *(float *)(param_1 + 0x11f4) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x11f4) = fVar1;
    if (((((*(byte *)(param_1 + 0x4a8) & 0x10) != 0) && (fVar1 < 15.0)) &&
        (*(int *)(param_1 + 0x22d4) == 0)) && ((iVar3 == 5 || (iVar3 == 4)))) {
      *(undefined4 *)(param_1 + 0x11f4) = 0x41700000;
    }
    if (*(float *)(param_1 + 0x11f4) < 0.0) {
      *(char *)(param_1 + 0x11a5) = *(char *)(param_1 + 0x11a5) + '\x01';
    }
    goto switchD_00480817_default;
  case '\x04':
    goto LAB_004808da;
  case '\x05':
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) & 0xfffffffb;
    *(undefined1 *)(param_1 + 0x11a5) = 6;
    *(undefined4 *)(param_1 + 0x1198) = 0;
    if (*(int *)(param_1 + 0x11e4) != 0) {
      FUN_0047ccb0(*(undefined4 *)(param_1 + 0x11dc));
      FUN_0047f650(0);
      *(undefined4 *)(param_1 + 0x11a0) = 0;
      *(undefined1 *)(param_1 + 0x11a5) = 4;
    }
    goto switchD_00480817_default;
  case '\x06':
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) | 2;
    *(undefined4 *)(param_1 + 0x1140) = 0;
    *(undefined4 *)(param_1 + 0x1144) = 0;
    *(undefined4 *)(param_1 + 0x1148) = 0;
    *(char *)(param_1 + 0x11a5) = *(char *)(param_1 + 0x11a5) + '\x01';
    *(undefined4 *)(param_1 + 0x1174) = 0;
    *(undefined4 *)(param_1 + 0x11a0) = 0;
    break;
  case '\a':
    break;
  case '\b':
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) | 2;
    *(undefined4 *)(param_1 + 0x1140) = 0;
    *(undefined4 *)(param_1 + 0x1144) = 0;
    *(undefined4 *)(param_1 + 0x1148) = 0;
    *(char *)(param_1 + 0x11a5) = *(char *)(param_1 + 0x11a5) + '\x01';
    *(undefined4 *)(param_1 + 0x1174) = 0;
    *(undefined4 *)(param_1 + 0x11a0) = 0;
  case '\t':
    fVar1 = *(float *)(param_1 + 0x1128) * *(float *)(param_1 + 0x1128) +
            *(float *)(param_1 + 0x1120) * *(float *)(param_1 + 0x1120) +
            *(float *)(param_1 + 0x1124) * *(float *)(param_1 + 0x1124);
    if (fVar1 < 0.0001 == (fVar1 == 0.0001)) goto switchD_00480817_default;
    break;
  case '\n':
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) | 2;
    *(undefined4 *)(param_1 + 0x1140) = 0;
    *(undefined4 *)(param_1 + 0x1144) = 0;
    *(undefined4 *)(param_1 + 0x1148) = 0;
    *(char *)(param_1 + 0x11a5) = *(char *)(param_1 + 0x11a5) + '\x01';
    *(undefined4 *)(param_1 + 0x1174) = 0;
    *(undefined4 *)(param_1 + 0x11a0) = 0;
  case '\v':
    fVar1 = *(float *)(param_1 + 0x1124) * *(float *)(param_1 + 0x1124) +
            *(float *)(param_1 + 0x1120) * *(float *)(param_1 + 0x1120) +
            *(float *)(param_1 + 0x1128) * *(float *)(param_1 + 0x1128);
    if (fVar1 < 0.0001 == (fVar1 == 0.0001)) goto switchD_00480817_default;
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) & 0xffffffeb;
    *(undefined4 *)(param_1 + 0x1118) = 0;
    break;
  default:
    goto switchD_00480817_default;
  }
  *(undefined1 *)(param_1 + 0x11a5) = 0;
switchD_00480817_default:
  fVar1 = *(float *)(param_1 + 0x117c);
  fVar6 = (float10)FUN_00dde300(0,0x3f800000);
  local_a4 = (float)((fVar6 + (float10)1.0) * (float10)0.017453292);
  fVar6 = (float10)FUN_00e049b0();
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)local_a4 + (float10)fVar1));
  *(float *)(param_1 + 0x117c) = (float)fVar6;
  return;
}

// 00480E90  FUN_00480e90  size=444  [between]
void __fastcall FUN_00480e90(int param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x1118) == 0)) &&
      (2 < *(int *)(param_1 + 0x22a8))) &&
     (fVar1 = *(float *)(param_1 + 0x920), !NAN(fVar1) && 20.0 < fVar1 != (fVar1 == 20.0))) {
    if ((*(float *)(param_1 + 0xa90) < 49.0) && (*(float *)(param_1 + 0xaa0) < 1.2217305)) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        uVar3 = 0x80000000;
      }
      else {
        uVar3 = 0;
      }
      FUN_0047e3b0(0x50001,uVar3,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_0047f8d0();
      }
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 == 1) {
        FUN_0047e3b0(0x50006,0,0,0,0);
      }
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 != 0) && (*(float *)(param_1 + 0xa90) < 9.0)) {
        FUN_0047e3b0(0x50006,0,0,0,0);
      }
    }
    fVar1 = *(float *)(param_1 + 0xa90);
    if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && (*(float *)(param_1 + 0xa90) <= 144.0))
       && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
      FUN_0047f8d0();
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_0047e3b0(0x50006,0,0,0,0);
      }
    }
    if ((*(float *)(param_1 + 0xa90) < 49.0) &&
       (fVar1 = *(float *)(param_1 + 0xaa0), !NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464))
       ) {
      FUN_0047e3b0(0x50000,0,0,0,0);
    }
  }
  return;
}

// 00481050  FUN_00481050  size=1076  [between]
void __fastcall FUN_00481050(int *param_1)

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
      param_1[0x490] = (int)(fVar4 * -0.3);
      param_1[0x491] = (int)(fVar3 * -0.3);
      param_1[0x492] = (int)(fVar1 * -0.3);
      param_1[0x493] = (int)(fStack_74 * -0.3);
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
  fVar1 = (float)param_1[0x48e];
  param_1[0x48e] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00481490  FUN_00481490  size=172  [between]
void __fastcall FUN_00481490(int param_1)

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
  *(undefined4 *)(param_1 + 0x22b0) = 1;
  *(undefined4 *)(param_1 + 0x1118) = 1;
  FUN_0047e3b0(0x50005,0,0,0,0);
  return;
}

// 00481540  FUN_00481540  size=38  [between]
void __fastcall FUN_00481540(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00c81c60(0x17);
    if (iVar1 != 0) {
      FUN_00481490();
      return;
    }
  }
  return;
}

// 00481570  FUN_00481570  size=118  [between]
void __fastcall FUN_00481570(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1644) = 1;
    FUN_0047ecc0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004815F0  FUN_004815f0  size=1534  [between]
void __fastcall FUN_004815f0(int *param_1)

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
    (*pcVar1)(6,param_1 + 0x76c);
    param_1[0x248] = 0x42700000;
    goto LAB_0048180e;
  case 3:
LAB_0048180e:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar6 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar6 - (float)param_1[0x244]);
    if (fVar6 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_0048169f_default;
  case 4:
    FUN_00aa4080(0x59,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    (**(code **)(*param_1 + 0x358))(7,param_1 + 0x76c);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(8);
    goto joined_r0x00481989;
  case 6:
    FUN_00aa4080(0x5d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(8);
joined_r0x00481989:
    if (iVar3 != 0) {
      FUN_0047eee0(0xffffffff,0xbf800000);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0;
      param_1[0x40c] = 0x40000000;
    }
  default:
    goto switchD_0048169f_default;
  }
  param_1[0x591] = 1;
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
switchD_0048169f_default:
  if ((local_58 < 3.4 == (local_58 == 3.4)) || (100.0 < (float)param_1[0x2a3])) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 3.4 - local_58;
    if (0.0 < fVar6) {
      fVar6 = fVar6 + fVar6;
    }
    fVar2 = 0.5;
    if (!NAN(fVar6) && 0.5 < fVar6 != (fVar6 == 0.5)) goto LAB_004819eb;
  }
  fVar2 = fVar6;
LAB_004819eb:
  iVar3 = param_1[0x380];
  if (iVar3 != 0) {
    fVar2 = 0.4;
  }
  fVar2 = fVar2 - (float)param_1[0x37e];
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
  param_1[0x37e] = (int)(float)(fVar4 + (float10)(float)param_1[0x37e]);
  if (((iVar3 == 0) && (param_1[0x37d] < 0)) && (local_58 <= 5.0)) {
    param_1[0x37d] = 0x32;
    iVar3 = FUN_00fdbc60();
    param_1[0x37f] = iVar3 + 1;
    param_1[0x380] = 1;
  }
  if ((param_1[0x380] != 0) && (iVar3 = FUN_00fdbc60(), param_1[0x37f] == iVar3)) {
    param_1[0x380] = 0;
    param_1[0x37d] = 0x32;
  }
  iVar3 = FUN_00a54a60(param_1[0x6e0]);
  if (iVar3 != 0) {
    FUN_0047e3b0(0x20001,0,0,0,0);
  }
  fVar4 = (float10)FUN_00a581b0(aiStack_78,(float)param_1[0x6e1] + (float)param_1[0x37e],
                                param_1[0x6e0]);
  param_1[0x6e0] = (int)(float)fVar4;
  param_1[0x14] = aiStack_78[0];
  param_1[0x16] = iStack_70;
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x6e1] = (int)(float)(fVar5 * (float10)(float)param_1[0x6e1]);
  FUN_00a585a0(afStack_6c,0,(float)fVar4);
  if ((float10)0 != (float10)fStack_64) {
    fVar4 = (float10)fpatan((float10)afStack_6c[0],(float10)fStack_64);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)3.1415927));
    FUN_00a8db10(param_1 + 0x25,param_1[0x25],(float)fVar4,0x3e99999a,0x3c0efa35,0x3e8efa35);
    return;
  }
  return;
}

// 00481C90  FUN_00481c90  size=774  [between]
void __fastcall FUN_00481c90(int param_1)

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
    *(undefined4 *)(param_1 + 0xdf8) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00481e7e;
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
LAB_00481e7e:
  if (2.0 < local_58) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x910) * 0.1;
  }
  *(float *)(param_1 + 0xdf8) = fVar4;
  fVar2 = (float10)FUN_00a581b0(auStack_78,
                                *(float *)(param_1 + 0x1b84) + *(float *)(param_1 + 0xdf8),
                                *(undefined4 *)(param_1 + 0x1b80));
  *(float *)(param_1 + 0x1b80) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  fVar3 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1b84) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x1b84));
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

// 00481FA0  FUN_00481fa0  size=627  [between]
void __fastcall FUN_00481fa0(int param_1)

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
    *(undefined4 *)(param_1 + 0xdf8) = 0xbe4ccccd;
    *(undefined4 *)(param_1 + 0x1644) = 0;
    *(undefined4 *)(param_1 + 0x1030) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x920) = 0x41a00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00482115;
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_0047e3b0(0x2000e,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1030) = 0x42700000;
  }
LAB_00482115:
  FUN_00a8dd20(*(undefined4 *)(param_1 + 0xdf8));
  fVar2 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0xdf8) = (float)(fVar2 * (float10)*(float *)(param_1 + 0xdf8));
  fVar2 = (float10)FUN_00a5e410(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                                *(undefined4 *)(param_1 + 0x58),auStack_78);
  *(float *)(param_1 + 0x1b80) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  *(undefined4 *)(param_1 + 0x1b84) = 0;
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

// 00482220  FUN_00482220  size=69  [between]
void __fastcall FUN_00482220(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x22b4) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a54a60(*(undefined4 *)(param_1 + 0x1b80));
    if (iVar1 != 0) {
      FUN_0047e3b0(0x20001,0,0,0,0);
    }
  }
  return;
}

// 00482270  FUN_00482270  size=625  [between]
void __fastcall FUN_00482270(int param_1)

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
    *(undefined4 *)(param_1 + 0x1644) = 0;
    *(undefined4 *)(param_1 + 0xdf8) = 0x3d4ccccd;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_004823f0;
  FUN_00a947e0(0,0,0,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_004823f0:
  fVar2 = (float10)FUN_00a581b0(auStack_78,
                                *(float *)(param_1 + 0xdf8) + *(float *)(param_1 + 0x1b84),
                                *(undefined4 *)(param_1 + 0x1b80));
  *(float *)(param_1 + 0x1b80) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  fVar3 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1b84) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x1b84));
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

// 004824F0  FUN_004824f0  size=210  [between]
void __fastcall FUN_004824f0(int param_1)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2250) == 0) {
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

// 004825D0  FUN_004825d0  size=534  [between]
void __fastcall FUN_004825d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar2 = 0;
  if (param_1[0x894] == 0) {
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
    goto switchD_004825fb_caseD_1;
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
      param_1[0x40d] = 0x43f00000;
    }
  default:
    goto switchD_004825fb_default;
  }
  FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
switchD_004825fb_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_004825fb_default:
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    FUN_0047eee0(0xffffffff,0xbf800000);
  }
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00482800  FUN_00482800  size=280  [between]
void __fastcall FUN_00482800(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    if (((float)param_1[0x495] < 0.0) && (param_1[0x8ac] != 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x0048283f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if ((4 < *(byte *)((int)param_1 + 0xdae)) && ((param_1[0x36c] == 2 || (param_1[0x36c] == -1))))
    {
      if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
        FUN_0047e3b0(0x50001,0,0,0,0);
      }
      fVar1 = (float)param_1[0x2a4];
      if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && ((float)param_1[0x2a4] <= 144.0)) &&
         ((float)param_1[0x2a8] < 0.5235988)) {
        FUN_0047f8d0();
      }
      if (((float)param_1[0x2a4] < 49.0) &&
         (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464))) {
        FUN_0047e3b0(0x50000,0,0,0,0);
      }
    }
  }
  return;
}

// 00482920  FUN_00482920  size=1898  [between]
void __fastcall FUN_00482920(int *param_1)

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
    if (param_1[0x8b3] == 0) {
      local_34 = 0x3f99999a;
      sVar5 = FUN_00dde2d0(0,1);
      if (sVar5 != 0) {
        local_34 = 0x3fb33333;
      }
    }
    FUN_00aa4080(0x84,0,0x3e2aaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,local_34);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8a6] = 0;
    param_1[0x8a8] = 0;
    uVar6 = FUN_00dde2a0(2,3);
    param_1[0x250] = uVar6 & 0xffff;
    param_1[0x251] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x85,0,0x3d088889,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x24a] = 0x42700000;
    param_1[0x8a6] = 0;
    param_1[0x8a8] = 0;
    param_1[0x252] = 0;
    goto LAB_00482ca0;
  case 3:
LAB_00482ca0:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_20 = (float)param_1[0x8a0];
    local_1c = (float)param_1[0x8a1];
    local_18 = (float)param_1[0x8a2];
    local_14 = (float)param_1[0x8a3];
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
    local_2c = local_1c - ((float)param_1[0x11] + local_2c * 4.5);
    local_28 = local_18 - ((float)param_1[0x12] + local_28 * 4.5);
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
      FUN_00aa4080(0x86,0,0x3daaaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    goto switchD_0048294d_default;
  case 4:
    FUN_00aa4080(0x86,0,0x3daaaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00482f6c;
  case 5:
LAB_00482f6c:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      iVar7 = FUN_0043fa60(5);
      if ((((iVar7 != 0) && (param_1[0x8b3] == 0)) && (sVar5 = FUN_00dde2d0(0,1), sVar5 != 0)) &&
         (((float)param_1[0x2a3] <= 5.0 && ((float)param_1[0x2a8] <= 1.3962634)))) {
        FUN_0047e3b0(0x50006,0,0,0,0);
        sVar5 = FUN_00dde2d0(0,2);
        if (sVar5 == 1) {
          FUN_0047f8d0();
          param_1[0x8b7] = 1;
        }
      }
      param_1[0x40c] = 0x44160000;
    }
  default:
    goto switchD_0048294d_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (((param_1[0x2a1] != 0) && (iVar7 = FUN_00a8c760(10), iVar7 != 0)) &&
     (iVar7 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar7 != 0)) {
    local_20 = (float)param_1[0x8a0];
    local_1c = (float)param_1[0x8a1];
    local_18 = (float)param_1[0x8a2];
    local_14 = (float)param_1[0x8a3];
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
    local_2c = local_1c - ((float)param_1[0x11] + local_2c * 4.5);
    local_28 = local_18 - ((float)param_1[0x12] + local_28 * 4.5);
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
      param_1[0x15] = (int)(fVar3 * fVar2 + (float)param_1[0x15]);
      param_1[0x16] = (int)(fVar1 * fVar2 + (float)param_1[0x16]);
      param_1[0x17] = (int)(fVar2 * local_24 + (float)param_1[0x17]);
    }
  }
switchD_0048294d_default:
  iVar7 = FUN_00a8c760(0);
  if ((iVar7 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00483200  FUN_00483200  size=864  [between]
void __fastcall FUN_00483200(int *param_1)

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
    param_1[0x8af] = param_1[0x8af] + 1;
    param_1[0x187] = 1;
    param_1[0x250] = 0;
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x251] = sVar2 + 3;
    param_1[0x498] = 0;
    if (1 < param_1[0x497]) {
      param_1[0x497] = 0;
      param_1[0x498] = 1;
    }
LAB_0048327f:
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 2) {
      sVar3 = FUN_00dde2d0(0,1);
      sVar3 = sVar3 + 1;
    }
    if (param_1[0x498] != 0) {
      sVar3 = 2;
    }
    FUN_00aa4080(sVar3 + 0x6d,0,0x3e2aaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x8a6] = 0;
    param_1[0x8a8] = 0;
  }
  else {
    if (iVar4 == 1) goto LAB_0048327f;
    if (iVar4 != 2) goto LAB_004833fd;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((((param_1[0x498] == 0) && (param_1[0x8b3] == 0)) && (iVar4 = FUN_00a8c760(0x34), iVar4 != 0))
     && (param_1[0x8a8] != 0)) {
    param_1[0x497] = param_1[0x497] + 1;
  }
  if (((param_1[0x498] != 0) && (param_1[0x8b3] == 0)) &&
     ((iVar4 = FUN_00a8c760(0x34), iVar4 != 0 && (param_1[0x8a8] != 0)))) {
    param_1[0x250] = param_1[0x250] + 1;
    if (param_1[0x400] == 0) {
      uVar6 = 0x80000000;
    }
    else {
      uVar6 = 0;
    }
    FUN_0047e3b0(0x50001,uVar6,1,0,0);
    if (param_1[0x251] <= param_1[0x250]) {
      FUN_0047e3b0(0x50000,0,0,0,0);
      sVar3 = FUN_00dde2d0(0,2);
      if (sVar3 == 1) {
        FUN_0047f8d0();
        param_1[0x8b7] = 1;
      }
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x40c] = 0x42700000;
  }
LAB_004833fd:
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

// 004836E0  FUN_004836e0  size=667  [between]
void __fastcall FUN_004836e0(int *param_1)

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
    param_1[0x8b7] = 0;
    uVar3 = 0xb6;
    if (param_1[0x186] == 0x50003) {
      uVar3 = 0xb9;
    }
    FUN_00aa4080(uVar3,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8af] = param_1[0x8af] + 1;
    param_1[0x8a6] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00483810;
  if ((((param_1[0x498] == 0) && (param_1[0x8b3] == 0)) && (iVar4 = FUN_00a8c760(0x34), iVar4 != 0))
     && ((param_1[0x8a8] != 0 && (param_1[0x497] = param_1[0x497] + 1, 1 < param_1[0x497])))) {
    FUN_0047e3b0(0x50001,0,0,0,0);
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
LAB_00483810:
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

// 00483AC0  FUN_00483ac0  size=173  [between]
void __thiscall FUN_00483ac0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100c);
  if (iVar1 == 0) {
    FUN_00aa4080(param_2,1,0x3d088889,0x3f800000,0x8000010,0,0x3f800000);
    *(int *)(param_1 + 0x100c) = *(int *)(param_1 + 0x100c) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = FUN_00a94ce0(1);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1004) = 0;
    *(undefined4 *)(param_1 + 0x100c) = 0;
    return;
  }
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    FUN_0047eee0(0xffffffff,0xbf800000);
    *(int *)(param_1 + 0x100c) = *(int *)(param_1 + 0x100c) + 1;
  }
  return;
}

// 00483B70  FUN_00483b70  size=225  [between]
void __thiscall FUN_00483b70(int *param_1,undefined4 param_2)

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
    param_1[0x40c] = 0x43960000;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    FUN_0047eee0(0xffffffff,0xbf800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00483C60  FUN_00483c60  size=301  [between]
void __fastcall FUN_00483c60(int *param_1)

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
    param_1[0x8dd] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0047e3b0(0x70000,1,2,0,0);
      param_1[0x250] = 3;
      return;
    }
  default:
    return;
  }
}

// 00483DA0  FUN_00483da0  size=205  [between]
void __fastcall FUN_00483da0(int param_1)

{
  float fVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  *(undefined2 *)(param_1 + 0x824) = 4;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xeb,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    if (*(int *)(param_1 + 0x22cc) != 0) {
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
    FUN_0047e3b0(0x80002,0,0,0,0);
  }
  return;
}

// 00483E70  FUN_00483e70  size=275  [between]
/* WARNING: Type propagation algorithm not settling */

bool __fastcall FUN_00483e70(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x22cc) == 0) {
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
      FUN_0047e3b0(0x70009,0,0,0,0);
    }
    bVar2 = *(int *)(param_1 + 0x4a0) == 3;
    if (bVar2) {
      FUN_0047e3b0(0x7000a,0,0,0,0);
    }
    bVar3 = *(int *)(param_1 + 0x4a0) == 6;
    if (bVar3) {
      FUN_0047e3b0(0x70009,0,0,0,0);
    }
    bVar4 = *(int *)(param_1 + 0x4a0) == 7;
    if (bVar4) {
      FUN_0047e3b0(0x7000c,0,0,0,0);
    }
    bVar5 = *(int *)(param_1 + 0x4a0) == 8;
    if (bVar5) {
      FUN_0047e3b0(0x7000c,0,0,0,0);
    }
    return bVar5 || (bVar4 || (bVar3 || (bVar2 || bVar1)));
  }
  return false;
}

// 00483F90  FUN_00483f90  size=363  [between]
void __fastcall FUN_00483f90(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0047eee0(0x96,0x40000000);
    param_1[0x619] = 0;
    FUN_0047eee0(0x19,0x41400000);
    param_1[0x591] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x61b] == 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_0047e3b0(0x2000b,0,0,0,0);
  }
  sVar1 = FUN_00dde2d0(0xfffffffd,3);
  sVar2 = FUN_00dde2d0(0xffffffff,1);
  sVar3 = FUN_00dde2d0(0xfffffffd,3);
  param_1[0x89c] = (int)((float)(int)sVar1 + 182.64);
  param_1[0x89d] = (int)((float)(int)sVar2 - 87.21);
  param_1[0x89e] = (int)((float)(int)sVar3 - 527.26);
  return;
}

// 00484100  Em0080::vf360  size=78  [class]
void __fastcall Em0080::vf360(int param_1)

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

// 00484150  FUN_00484150  size=50  [between]
undefined4 __fastcall FUN_00484150(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  cVar1 = *(char *)(param_1 + 0x20b8);
  if (((cVar1 != '\x01') && (cVar1 != '\x02')) &&
     ((cVar1 != '\x03' || ('\x01' < *(char *)(param_1 + 0x20b9))))) {
    uVar2 = 0;
  }
  return uVar2;
}

// 00484190  FUN_00484190  size=57  [between]
undefined4 __fastcall FUN_00484190(int param_1)

{
  float fVar1;
  
  if (((*(char *)(param_1 + 0x20b8) == '\x02') && ('\0' < *(char *)(param_1 + 0x20b9))) &&
     (fVar1 = *(float *)(param_1 + 0x20bc), !NAN(fVar1) && 45.0 < fVar1 != (fVar1 == 45.0))) {
    return 1;
  }
  return 0;
}

// 004841D0  FUN_004841d0  size=131  [between]
void __thiscall FUN_004841d0(int param_1,undefined4 param_2,int param_3)

{
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xdc0) == 0) {
    if (*(char *)(param_1 + 0x20b8) == -1) {
      *(undefined2 *)(param_1 + 0x20b8) = 4;
      *(undefined1 *)(param_1 + 0x20b0) = 0;
    }
    *(undefined4 *)(param_1 + 0x2124) = param_2;
    *(undefined4 *)(param_1 + 0x2128) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x20b8) != -1) {
    if (param_3 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x20b8) != -1) goto LAB_0048420d;
  }
  *(undefined2 *)(param_1 + 0x20b8) = 4;
  *(undefined1 *)(param_1 + 0x20b0) = 0;
LAB_0048420d:
  *(undefined4 *)(param_1 + 0x2124) = param_2;
  *(undefined4 *)(param_1 + 0x2128) = 1;
  return;
}

// 004842B0  FUN_004842b0  size=33  [between]
void __fastcall FUN_004842b0(int param_1)

{
  if (*(char *)(param_1 + 0x20b8) == '\x04') {
    *(undefined1 *)(param_1 + 0x20b8) = 4;
    *(undefined1 *)(param_1 + 0x20b9) = 4;
  }
  *(undefined4 *)(param_1 + 0x2128) = 0;
  return;
}

// 004842E0  FUN_004842e0  size=97  [between]
void FUN_004842e0(undefined4 param_1,int param_2)

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

// 00484350  FUN_00484350  size=97  [between]
void FUN_00484350(undefined4 param_1,int param_2)

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

// 004843C0  FUN_004843c0  size=99  [between]
bool FUN_004843c0(void)

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

// 00484430  Em0080::vf280  size=228  [class]
int Em0080::vf280(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

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
  local_20 = "Em0080 ViewRay";
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

// 00484520  FUN_00484520  size=196  [between]
/* WARNING: Removing unreachable block (ram,0x0048457e) */

undefined4 FUN_00484520(undefined4 param_1,int param_2)

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

// 00484610  FUN_00484610  size=197  [between]
void __fastcall FUN_00484610(int param_1)

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
  
  if (*(int *)(param_1 + 0x22cc) != 0) {
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
    *(undefined4 *)(param_1 + 0x2090) = uVar3;
    FUN_00c52770(uVar3,0x40c00000);
  }
  return;
}

// 004846E0  FUN_004846e0  size=207  [between]
void __fastcall FUN_004846e0(int param_1)

{
  code *pcVar1;
  
  FUN_00a8c420(0,"_bogyo");
  FUN_00a8c420(0,"_kabe");
  FUN_00a8c420(0,"_yama");
  FUN_00a8c420(1,"_taiki");
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),0,0);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),1,1);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),2,1);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),3,1);
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),4,1);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1e60) + 8);
  *(undefined4 *)(param_1 + 0xdc0) = 1;
  (*pcVar1)(0x3f800000,0,0);
  return;
}

// 004847B0  FUN_004847b0  size=407  [between]
void __fastcall FUN_004847b0(int param_1)

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
  if (DAT_01d64254 != 2) {
    *(undefined2 *)(param_1 + 0x824) = 2;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  }
  FUN_00c3ccb0(0);
  FUN_00a88b50(4,0);
  return;
}

// 00484950  FUN_00484950  size=77  [between]
void __thiscall FUN_00484950(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 0x800) == 0) {
    param_1[0x8b9] = 0;
  }
  if ((*(uint *)(param_2 + 0x8c) & 0x100000) != 0) {
    param_1[0x8ba] = 2;
  }
  (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ba],param_1[0x8b9]);
  return;
}

// 004849A0  FUN_004849a0  size=193  [between]
void __fastcall FUN_004849a0(int param_1)

{
  if (*(char *)(param_1 + 0x235d) == '\0') {
    *(undefined1 *)(param_1 + 0x235d) = 1;
    *(undefined4 *)(param_1 + 0x1424) = 0;
    *(undefined4 *)(param_1 + 0x142c) = 0;
    if (*(int *)(param_1 + 0xdc0) != 0) {
      (**(code **)(*(int *)(param_1 + 0x1e60) + 8))(0x41700000,0,0);
    }
  }
  else if (*(char *)(param_1 + 0x235d) != '\x01') {
    return;
  }
  if (((((DAT_01bea060 & 0x2000000) == 0) && (*(int *)(param_1 + 0x2364) != 0)) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) &&
     (((*(int *)(param_1 + 0x2258) != 0 &&
       (*(float *)(param_1 + 0xa8c) <= *(float *)(param_1 + 0x236c) * *(float *)(param_1 + 0x236c)))
      && (*(float *)(param_1 + 0xaa0) <= *(float *)(param_1 + 0x2370))))) {
    *(undefined2 *)(param_1 + 0x235c) = 1;
  }
  return;
}

// 00484A70  FUN_00484a70  size=666  [between]
void __fastcall FUN_00484a70(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  float10 fVar5;
  
  cVar2 = *(char *)((int)param_1 + 0x235d);
  switch(cVar2) {
  case '\0':
    *(char *)((int)param_1 + 0x235d) = cVar2 + '\x01';
    pcVar3 = *(code **)(param_1[0x7c4] + 8);
    param_1[0x509] = 1;
    (*pcVar3)(0x3f800000,0,0);
    if (param_1[0x370] != 0) {
      (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x798);
    }
  case '\x01':
    fVar1 = (float)param_1[0x8da] * (float)param_1[0x8da];
    if (((((fVar1 < (float)param_1[0x2a3] != (fVar1 == (float)param_1[0x2a3])) &&
          ((float)param_1[0x2a3] <= (float)param_1[0x8db] * (float)param_1[0x8db])) &&
         ((float)param_1[0x2a8] < (float)param_1[0x8dc] !=
          ((float)param_1[0x2a8] == (float)param_1[0x8dc]))) &&
        ((iVar4 = FUN_0043fa60(0x3c), iVar4 != 0 && (param_1[0x504] == 0)))) &&
       (param_1[0x50a] != 0)) {
      *(undefined1 *)((int)param_1 + 0x235d) = 2;
    }
    if ((((float)param_1[0x11] + 2.5 < *(float *)(param_1[0x2a1] + 0x44) !=
          ((float)param_1[0x11] + 2.5 == *(float *)(param_1[0x2a1] + 0x44))) &&
        ((float)param_1[0x2a3] <= (float)param_1[0x8db] * (float)param_1[0x8db])) &&
       (((float)param_1[0x2a8] < (float)param_1[0x8dc] !=
         ((float)param_1[0x2a8] == (float)param_1[0x8dc]) &&
        (((iVar4 = FUN_0043fa60(0x3c), iVar4 != 0 && (param_1[0x504] == 0)) && (param_1[0x50a] != 0)
         ))))) {
      *(undefined1 *)((int)param_1 + 0x235d) = 2;
    }
    break;
  case '\x02':
    pcVar3 = *(code **)(*param_1 + 0x358);
    *(char *)((int)param_1 + 0x235d) = cVar2 + '\x01';
    (*pcVar3)(0x1f,param_1 + 0x7c4);
    param_1[0x8d8] = 0x41f00000;
    FUN_004847b0();
  case '\x03':
    fVar1 = (float)param_1[0x8d8];
    param_1[0x8d8] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      *(char *)((int)param_1 + 0x235d) = *(char *)((int)param_1 + 0x235d) + '\x01';
    }
    break;
  case '\x04':
    (**(code **)(param_1[0x7c4] + 8))(0x3f800000,0,0);
    *(char *)((int)param_1 + 0x235d) = *(char *)((int)param_1 + 0x235d) + '\x01';
    FUN_0047eee0(0x3c,0x40400000);
  case '\x05':
    if ((param_1[0x504] == 0) || (param_1[0x504] == 2)) {
      *(undefined1 *)((int)param_1 + 0x235d) = 0;
    }
  }
  if (((param_1[0x8d9] == 0) || (param_1[0x36c] == 1)) ||
     ((param_1[0x36c] == 0 || (param_1[0x896] == 0)))) {
    *(undefined2 *)(param_1 + 0x8d7) = 0;
  }
  fVar1 = (float)param_1[0x8dc];
  if (NAN(fVar1) || 2.9670596 < fVar1 == (fVar1 == 2.9670596)) {
    fVar5 = (float10)FUN_00ddba30(fVar1 + 0.08726646);
  }
  else {
    fVar5 = (float10)3.1415927;
  }
  if (((float)param_1[0x8db] * (float)param_1[0x8db] < (float)param_1[0x2a3]) ||
     (fVar5 < (float10)(float)param_1[0x2a8])) {
    *(undefined2 *)(param_1 + 0x8d7) = 0;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    *(undefined2 *)(param_1 + 0x8d7) = 0;
  }
  return;
}

// 00484D30  FUN_00484d30  size=274  [between]
undefined4 __fastcall FUN_00484d30(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0x2344,0,0,0,0,0,0,0);
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
  local_20 = "Em0080UsePath";
  local_60[0] = param_1 + 0x2344;
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

// 00484E50  FUN_00484e50  size=274  [between]
undefined4 __fastcall FUN_00484e50(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0x233c,0,0,0,0,0,0,0);
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
  local_20 = "Em0080Obstacle";
  local_60[0] = param_1 + 0x233c;
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

// 00484F70  FUN_00484f70  size=310  [between]
void __thiscall FUN_00484f70(int param_1,float *param_2)

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
  
  iVar9 = FUN_00907640(param_1 + 0x2354,0,0);
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
  local_1c = "Em0080NextPointView";
  local_30 = 0x3e4ccccd;
  local_60[0] = param_1 + 0x2354;
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
    *(undefined4 *)(param_1 + 0x2334) = 1;
  }
  return;
}

// 004850B0  FUN_004850b0  size=273  [between]
undefined4 __fastcall FUN_004850b0(int param_1)

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
  
  uVar4 = FUN_00907640(param_1 + 0x234c,0,0);
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
  pcStack_28 = "Em0080FloorCheck";
  uStack_44 = 0;
  fStack_40 = local_70;
  uStack_3c = 0x3e99999a;
  local_6c[0] = param_1 + 0x234c;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + fStack_74;
  FUN_0090fb00(local_6c);
  return uVar4;
}

// 004851D0  Em0080::vf368  size=55  [class]
undefined4 __fastcall Em0080::vf368(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4b0) == 0x20080) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0x1010) & 0x800000) != 0) {
      return 1;
    }
  }
  else {
    uVar1 = 2;
    if ((*(uint *)(param_1 + 0x1010) & 0x800000) != 0) {
      uVar1 = 3;
    }
  }
  return uVar1;
}

// 00485210  FUN_00485210  size=240  [callgraph]
void __thiscall FUN_00485210(int param_1,undefined4 param_2)

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
    FUN_0047ebd0();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    return;
  case 1:
    FUN_0047ed40();
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
    goto switchD_0048527b_default;
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  *(undefined4 *)(param_1 + 0x1dc) = 0x43700000;
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
switchD_0048527b_default:
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  return;
}

// 00485760  Em0080::vf14C  size=84  [class]
bool __thiscall Em0080::vf14C(int param_1,int param_2,int param_3)

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

// 004857C0  Em0080::vf150  size=289  [class]
void __thiscall Em0080::vf150(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    param_1[0x490] = 0;
    param_1[0x491] = 0;
    param_1[0x492] = 0;
    param_1[0x448] = 0;
    param_1[0x449] = 0;
    param_1[0x44a] = 0;
    param_1[0x479] = 0;
    *(undefined1 *)((int)param_1 + 0x11a5) = 6;
    if (unaff_retaddr == 0x4c) {
      param_1[0x88f] = 1;
      FUN_0047e3b0(0x90002,0,0,0,0);
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
      FUN_0047e3b0(0x90003,0,0,0,0);
    }
  }
  return;
}

// 004858F0  FUN_004858f0  size=1697  [between]
void __fastcall FUN_004858f0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int local_34 [4];
  undefined1 auStack_24 [32];
  
  iVar7 = 0;
  local_34[0] = FUN_00a81330();
  if (local_34[0] != 0) {
    iVar7 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  fStack_3c = 0.0;
  switch(param_1[0x187]) {
  case 0:
    iVar6 = *(int *)(iVar7 + 0x4b0);
    param_1[0x250] = iVar6;
    FUN_00a9ed60(iVar6,&DAT_0163e1d8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar3 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar3)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x251] = 0;
    uVar5 = FUN_00a95df0(0);
    FUN_00b7e040(uVar5);
    FUN_00b80920(fStack_38,0x40400000,0x3dcccccd,0x3e99999a,0);
    param_1[0x248] = param_1[0x25];
    param_1[0x2dd] = 0;
    FUN_0093db80();
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 100))();
    FUN_00a8e880(iVar7 + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40c90fdb,0);
    fStack_3c = 1.4013e-45;
    break;
  case 1:
    break;
  case 2:
    FUN_00a9ed60(param_1[0x250],&DAT_0163e1d0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (iVar7 != 0) {
      FUN_00a8cb60(2);
    }
    param_1[0x251] = 0;
    uVar5 = FUN_00a95df0(0);
    FUN_00b7e040(uVar5);
    param_1[0x248] = param_1[0x25];
    param_1[0x460] = 0;
    goto LAB_00485cbe;
  case 3:
LAB_00485cbe:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar6 = FUN_00a8c760(0x20);
    if ((iVar6 != 0) && (param_1[0x251] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x251] = 1;
      FUN_00b89db0(1,0x3dcccccd);
      if (iVar7 != 0) {
        FUN_0047c610();
      }
    }
    uVar5 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar5 = 0x40a00000;
    }
    FUN_00b7ab30(uVar5);
    if ((float)param_1[0x1028] < (float)param_1[0xd09]) {
      return;
    }
    fVar1 = (float)param_1[0x1029] - 1.0;
    param_1[0x1029] = (int)fVar1;
    if ((float)param_1[0x102a] - (float)param_1[0x102b] <= fVar1) {
      return;
    }
    if (fVar1 <= (float)param_1[0x102a] - (float)param_1[0x102c]) {
      return;
    }
    if ((param_1[0x33e] & param_1[0x394]) == 0) {
      return;
    }
    if (iVar7 != 0) {
      piVar4 = (int *)(iVar7 + 0x10);
      piVar8 = param_1 + 0x450;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar8 = piVar8 + 1;
      }
      param_1[0x460] = 1;
    }
    FUN_00b89c20(0xe7,4,7,param_1[0x13c],0,0x41f00000,0x41f00000,0);
    param_1[0x1029] = (int)((float)param_1[0x1029] - 1.0);
    return;
  case 4:
    FUN_00a9ed60(param_1[0x250],&DAT_0163e1c8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (iVar7 != 0) {
      FUN_00a8cb60(4);
    }
    param_1[0x25] = param_1[0x248];
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00940590(0x40000000,0);
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00ba6810(1,1);
      FUN_00da8810(0x41f00000);
      FUN_00dc1270(0,0);
      return;
    }
  default:
    goto switchD_00485968_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar6 = FUN_00a8c760(0x20);
  if ((iVar6 != 0) && (param_1[0x251] == 0)) {
    param_1[0x1029] = param_1[0x102a];
    param_1[0x251] = 1;
    FUN_00b89db0(1,0x3dcccccd);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x22c4) = 1;
    }
  }
  uVar5 = 0;
  if ((float)param_1[0x1029] <= 0.0) {
    param_1[0x1029] = -0x40800000;
  }
  else {
    uVar5 = 0x40a00000;
  }
  FUN_00b7ab30(uVar5);
  if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
    fVar1 = (float)param_1[0x1029] - 1.0;
    param_1[0x1029] = (int)fVar1;
    if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
        ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
       ((param_1[0x33e] & param_1[0x394]) != 0)) {
      param_1[0x248] = param_1[0x25];
      FUN_00b89c20(0xe7,2,6,param_1[0x13c],0,0x41f00000,0x41f00000,0);
      param_1[0x1029] = (int)((float)param_1[0x1029] - 1.0);
    }
  }
  if ((fStack_3c != 0.0) && (iVar7 != 0)) {
    switchD_0080dbae::default();
    FUN_00a8ce90(local_34,auStack_24);
    D3DXVec3TransformNormal(local_34,local_34,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    *(float *)(iVar7 + 0x58) = (float)param_1[0x12] + fStack_38;
    *(float *)(iVar7 + 0x50) = fVar1 + fStack_40;
    *(float *)(iVar7 + 0x54) = fVar2 + fStack_3c;
    *(int *)(iVar7 + 0x5c) = local_34[0];
    switchD_0080dbae::default();
    return;
  }
switchD_00485968_default:
  return;
}

// 00485FB0  FUN_00485fb0  size=471  [between]
void __fastcall FUN_00485fb0(int param_1)

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
    if (((*(int *)(param_1 + 0x2230) == 0x17) && (*(float *)(param_1 + 0x2238) < 0.0)) &&
       (fVar1 = *(float *)(param_1 + 0x2234), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_50,0x43480000,
                           0x42c80000,0x17,4);
    }
    if (((*(int *)(param_1 + 0x2230) == 0x19) && (*(float *)(param_1 + 0x2238) < 0.0)) &&
       (0.0 < *(float *)(param_1 + 0x2234) != (*(float *)(param_1 + 0x2234) == 0.0))) {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_40,0x43480000,
                           0x42c80000,0x19,4);
    }
    if (((*(int *)(param_1 + 0x2230) == 0x18) && (*(float *)(param_1 + 0x2238) < 0.0)) &&
       (0.0 < *(float *)(param_1 + 0x2234) != (*(float *)(param_1 + 0x2234) == 0.0))) {
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_30,0x43480000,
                           0x42c80000,0x18,4);
    }
    if (((*(int *)(param_1 + 0x2230) == 0x1a) && (*(float *)(param_1 + 0x2238) < 0.0)) &&
       (0.0 < *(float *)(param_1 + 0x2234) != (*(float *)(param_1 + 0x2234) == 0.0))) {
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

// 00486190  FUN_00486190  size=115  [between]
void __fastcall FUN_00486190(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  if ((*(int *)(param_1 + 0x61c) != 0) &&
     ((*(int *)(uVar3 + 0x3e18) != 0 || (*(int *)(uVar3 + 0x3e1c) != 0)))) {
    FUN_0047e3b0(0x70000,1,0,0,0);
  }
  return;
}

// 00486210  FUN_00486210  size=240  [between]
void __fastcall FUN_00486210(int param_1)

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
      FUN_00dd6d80(puVar3);
    }
  }
  if (*(int *)(param_1 + 0x22cc) == 0) {
    FUN_0093dc50();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xfe,0,0x3e800000,0x3f800000,0,0,0x3f800000);
    *(undefined4 *)(param_1 + 0x2238) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x2230) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2234) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x1118) = 0;
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

// 00486300  Em0080::vf33C  size=1150  [class]
void __thiscall Em0080::vf33C(int *param_1,undefined4 param_2,uint *param_3)

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
    *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 0x10;
  }
  if (((param_3[4] & 0x20000000) != 0) && ((~(*param_3 >> 0x1d) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 0x10;
  }
  if (((param_3[4] & 0x40000000) != 0) && ((~(*param_3 >> 0x1e) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 8;
  }
  if (((param_3[4] & 0x80000000) != 0) && ((~(*param_3 >> 0x1f) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 8;
  }
  if (((param_3[4] & 0x8000000) != 0) && ((~(*param_3 >> 0x1b) & 1) != 0)) {
    *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 1;
  }
  if (param_1[0x8b2] != 0) {
    param_3[6] = 0x42380;
    if (param_1[0x294] == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x344))(0xb,1,1);
    return;
  }
  if (param_1[0x8b1] == 0) {
    uVar7 = param_3[4];
    bVar2 = false;
    if ((((uVar7 & 0x800000) != 0) && ((~(*param_3 >> 0x17) & 1) != 0)) &&
       ((iVar5 = FUN_0043f860(8), iVar5 == 0 && ((*(byte *)(param_1 + 0x37a) & 0xa0) != 0)))) {
      bVar2 = true;
    }
    if ((((uVar7 & 0x1000000) != 0) && ((~*(byte *)((int)param_3 + 3) & 1) != 0)) &&
       ((iVar5 = FUN_0043f860(7), iVar5 == 0 && ((*(byte *)(param_1 + 0x37a) & 0xc0) != 0)))) {
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
          *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 0x10;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_004864da;
        }
        iVar5 = FUN_0043f830(2);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 0x10;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_004864da;
        }
        iVar5 = FUN_0043f830(6);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 4;
          iVar5 = FUN_0043f860(7);
          if (iVar5 != 0) goto LAB_004864da;
        }
        iVar5 = FUN_0043f830(1);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 8;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_004864da;
        }
        iVar5 = FUN_0043f830(0);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 8;
          iVar5 = FUN_0043f860(8);
          if (iVar5 != 0) goto LAB_004864da;
        }
        iVar5 = FUN_0043f830(5);
        if (iVar5 != 0) {
          *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 2;
          iVar5 = FUN_0043f860(7);
          if (iVar5 != 0) goto LAB_004864da;
        }
        param_3[6] = param_1[300];
        return;
      }
    }
  }
  else {
    *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 0x20;
    if ((((param_3[4] & 0x800000) == 0) || ((~(*param_3 >> 0x17) & 1) == 0)) ||
       (iVar5 = FUN_0043f860(7), iVar5 == 0)) {
      param_3[6] = param_1[300];
      return;
    }
  }
LAB_004864da:
  param_3[6] = 0x42380;
  return;
}

// 00486790  Em0080::vf338  size=93  [class]
void __thiscall Em0080::vf338(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x22c8) != 0) {
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

// 004867F0  Em0080::vf334  size=1242  [class]
void __thiscall Em0080::vf334(int *param_1,undefined4 param_2,int *param_3)

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
  
  BehaviorEmBase::vf334(param_2,param_3);
  FUN_009fd240();
  FUN_00ac8d40(0);
  if ((*(byte *)(param_1 + 0x37a) & 4) != 0) {
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
  }
  if ((*(byte *)(param_1 + 0x37a) & 2) != 0) {
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
    FUN_00ac8d80(1,1);
    FUN_00ac9420("_EFD06");
  }
  if ((*(byte *)(param_1 + 0x37a) & 0x10) != 0) {
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x10;
    FUN_00ac8d80(4,1);
    FUN_00ac8d80(9,1);
    FUN_00ac9420("_EFD00");
    FUN_00ac9420("_EFD02");
  }
  if ((*(byte *)(param_1 + 0x37a) & 8) != 0) {
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 8;
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(5,1);
    FUN_00ac9420("_EFD01");
    FUN_00ac9420("_EFD03");
  }
  if ((*(byte *)(param_1 + 0x37a) & 1) != 0) {
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
    FUN_00ac8d80(8,1);
    FUN_00ac9420("_EFD04");
  }
  if ((*(byte *)(param_1 + 0x37a) & 0x20) != 0) {
    FUN_00ac8d80(2,1);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x60;
    FUN_00ac9420("_EFD07");
    FUN_00ac9420("_EFD08");
  }
  if ((*(byte *)(param_1 + 0x37a) & 0x40) != 0) {
    FUN_00ac8d80(2,1);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x60;
    FUN_00ac9420("_EFD07");
    FUN_00ac9420("_EFD08");
  }
  if ((param_1[0x8b2] != 0) || ((*(byte *)(param_1 + 0x37a) & 0x80) != 0)) {
    FUN_00ac8d40(1);
  }
  if (param_3 != (int *)0x0) {
    puVar10 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar10);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00acdea0();
      if (piVar2 != (int *)0x0) {
        puVar10 = &DAT_01b34d70;
        (**(code **)(*piVar2 + 4))(&DAT_01b34d70);
        iVar1 = FUN_00dd6d80(puVar10);
        if ((iVar1 != 0) && (piVar2 != param_1)) {
          uVar3 = FUN_00a8cae0();
          uVar4 = FUN_00a8cad0(uVar3);
          uVar5 = FUN_00a8cac0(uVar4);
          uVar8 = 0;
          uVar6 = FUN_00a8cab0(0,uVar5);
          FUN_0047e3b0(uVar6,uVar8,uVar5,uVar4,uVar3);
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
          param_1[0x8e2] = piVar2[0x8e2];
        }
      }
    }
  }
  if (param_1[0x8b2] == 0) {
    if (param_1[0x128] == 0) {
      if (((*(byte *)((int)param_1 + 0xde9) & 4) != 0) &&
         ((*(byte *)((int)param_1 + 0xdea) & 4) == 0)) {
        param_1[0x128] = 3;
        param_1[0x894] = 1;
        FUN_00c4d210(param_1[0x13c],2,0);
        param_1[0x446] = 0;
        param_1[0x479] = 0;
        param_1[0x484] = param_1[0x484] | 0x14;
        *(undefined1 *)((int)param_1 + 0x11a5) = 10;
        FUN_0047e3b0(0x60002,0,0,0,0);
        FUN_00a8c420(0,"_kabe");
        FUN_00a8c420(0,"_taiki");
      }
      if (((*(byte *)((int)param_1 + 0xde9) & 2) != 0) &&
         ((*(byte *)((int)param_1 + 0xdea) & 2) == 0)) {
        param_1[0x128] = 3;
        param_1[0x894] = 0;
        FUN_00c4d210(param_1[0x13c],3,0);
        param_1[0x446] = 0;
        param_1[0x479] = 0;
        param_1[0x484] = param_1[0x484] | 0x14;
        *(undefined1 *)((int)param_1 + 0x11a5) = 10;
        FUN_0047e3b0(0x60002,0,0,0,0);
        FUN_00a8c420(0,"_kabe");
        FUN_00a8c420(0,"_taiki");
      }
      if ((((*(byte *)((int)param_1 + 0xde9) & 2) == 0) ||
          ((*(byte *)((int)param_1 + 0xde9) & 4) == 0)) ||
         (((*(byte *)((int)param_1 + 0xdea) & 2) != 0 &&
          ((*(byte *)((int)param_1 + 0xdea) & 4) != 0)))) goto LAB_00486cad;
      param_1[0x446] = 0;
      param_1[0x479] = 0;
      param_1[0x484] = param_1[0x484] | 0x14;
      *(undefined1 *)((int)param_1 + 0x11a5) = 10;
      FUN_00c4d210(param_1[0x13c],2,0);
      iVar1 = param_1[0x13c];
    }
    else {
      if ((((param_1[0x128] != 3) || ((*(byte *)((int)param_1 + 0xde9) & 2) == 0)) ||
          ((*(byte *)((int)param_1 + 0xde9) & 4) == 0)) ||
         (((*(byte *)((int)param_1 + 0xdea) & 2) != 0 &&
          ((*(byte *)((int)param_1 + 0xdea) & 4) != 0)))) goto LAB_00486cad;
      param_1[0x446] = 0;
      param_1[0x479] = 0;
      param_1[0x484] = param_1[0x484] | 0x14;
      *(undefined1 *)((int)param_1 + 0x11a5) = 10;
      FUN_00c4d210(param_1[0x13c],2,0);
      iVar1 = param_1[0x13c];
    }
    FUN_00c4d210(iVar1,3,0);
    FUN_0047e3b0(0x70003,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_taiki");
  }
LAB_00486cad:
  *(undefined1 *)((int)param_1 + 0xdea) = *(undefined1 *)((int)param_1 + 0xde9);
  param_1[0x404] = param_1[0x404] & 0xfff7ffff;
  return;
}

// 00486CD0  Em0080::vf1C0  size=122  [class]
void __thiscall Em0080::vf1C0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  FUN_00ac8d40(0);
  if (param_2 != (int *)0x0) {
    puVar3 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00acdea0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01b34d70;
        (**(code **)(*piVar2 + 4))(&DAT_01b34d70);
        iVar1 = FUN_00dd6d80(puVar3);
        if ((iVar1 != 0) && (piVar2 != param_1)) {
          FUN_0040ac60(piVar2 + 0x2ac);
        }
      }
    }
  }
  return;
}

// 00487160  FUN_00487160  size=5588  [callgraph]
undefined4 __thiscall FUN_00487160(int *param_1,int *param_2)

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
  short sVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float10 fVar17;
  float10 fVar18;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_10;
  int local_8;
  
  iVar12 = *param_2;
  uVar3 = param_1[0x186];
  bVar7 = false;
  bVar9 = false;
  if ((((iVar12 == 0) || (iVar12 == 1)) || (iVar12 == 2)) ||
     ((iVar12 == 0x1b0 || (iVar12 == 0x147)))) {
    return 0;
  }
  iVar12 = param_1[0x8b3];
  param_1[0x6e1] = 0x3e4ccccd;
  param_1[0x441] = 1;
  local_24 = param_2[1];
  local_20 = local_24;
  local_1c = local_24;
  if ((iVar12 == 0) && ((param_2[0x23] & 0x200U) != 0)) {
    local_1c = FUN_00fdbc60();
    local_20 = FUN_00fdbc60();
    local_24 = FUN_00fdbc60();
  }
  uVar11 = uVar3 & 0xffff0000;
  if (uVar11 == 0x70000) {
    local_20 = 0;
  }
  iVar4 = param_1[0x128];
  if ((iVar4 == 0) && (*param_2 == 0x42)) {
    local_20 = 0;
    local_24 = 0;
  }
  if ((iVar12 == 0) && ((param_2[0x23] & 0x10000000U) != 0)) {
    local_1c = FUN_00fdbc60();
    local_20 = FUN_00fdbc60();
    local_24 = FUN_00fdbc60();
  }
  if ((iVar12 != 0) && ((param_2[0x23] & 0x10000000U) != 0)) {
    local_1c = FUN_00fdbc60();
    local_20 = FUN_00fdbc60();
    local_24 = FUN_00fdbc60();
  }
  if (*param_2 == 0x18d) {
    local_1c = FUN_00fdbc60();
    local_20 = 1;
    local_24 = 1;
  }
  if ((param_2[0x24] & 0x400U) != 0) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    local_20 = 0;
    local_24 = 0;
  }
  if ((param_1[0x8ad] != 0) && (iVar4 != 7)) {
    param_1[0x37d] = param_1[0x37d] - local_1c;
    local_1c = 0;
  }
  local_8 = 0;
  iVar12 = FUN_00a81330();
  if (iVar12 != 0) {
    local_8 = FUN_00a7c8a0();
  }
  iVar12 = FUN_00ac8170(local_8);
  if (iVar12 == 0) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
  }
  else {
    bVar7 = true;
    (**(code **)(*param_1 + 0x21c))(local_8,(char)param_2[4],0x3c23d70a,0);
    if (param_1[0x8b3] == 0) {
      if (uVar11 == 0x70000) {
        local_20 = local_20 / 5;
        local_24 = local_24 / 5;
      }
    }
    else if (uVar11 == 0x70000) {
      local_20 = local_20 / 2;
      local_24 = local_24 / 2;
    }
    if ((param_2[0x23] & 0x40000000U) != 0) {
      bVar9 = true;
    }
  }
  uVar14 = 1;
  if (param_1[0x8dd] != 0) {
    uVar14 = 0x8001;
  }
  if ((((*(byte *)((int)param_2 + 0x8e) & 1) != 0) && ((char)param_1[0x37a] != '\0')) &&
     ((char)param_1[0x37a] != *(char *)((int)param_1 + 0xdea))) {
    uVar14 = uVar14 | 0x40;
  }
  bVar6 = true;
  param_1[0x37b] = param_2[0x4a];
  bVar8 = true;
  if ((param_1[0x8b4] != 0) && (*param_2 == 0x93)) {
    bVar6 = false;
    uVar14 = 0x40000;
    bVar8 = false;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
  }
  iStack_10 = 0;
  if ((param_1[0x128] != 0) || (!bVar6)) goto LAB_00487b64;
  if ((bVar7) && (param_1[0x446] != 0)) {
    if (*param_2 != 0x18d) {
      param_1[0x494] = param_1[0x494] + -1;
      goto LAB_004874e7;
    }
  }
  else {
LAB_004874e7:
    if (((*param_2 != 0x18d) && (iVar12 = FUN_0047e9b0(), iVar12 != 0)) &&
       ((iVar12 = FUN_00a8c760(0x30), iVar12 != 0 || (uVar3 == 0x1000e)))) {
      fVar1 = (float)param_1[0x8a9];
      if ((NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) || (0.0 <= (float)param_1[0x8ab])) {
        param_1[0x8a9] = 0x42700000;
      }
      else {
        param_1[0x8aa] = param_1[0x8aa] + 1;
        param_1[0x8a9] = 0x42700000;
        iStack_10 = 1;
        if ((bVar7) && (param_1[0x446] != 0)) {
          param_1[0x494] = param_1[0x494] + -1;
        }
        local_1c = 0;
        local_24 = 0;
        uVar14 = 2;
        if (bVar7) {
          FUN_0047e3b0(0x1000e,0,0,0,0);
          param_1[0x48e] = 0x42f00000;
          if (param_1[0x446] != 0) {
            param_1[0x48e] = 0x41f00000;
          }
          sVar10 = FUN_00dde2d0(0,3);
          if (sVar10 == 1) {
            param_1[0x48e] = 0x41700000;
          }
          if (param_1[0x8b3] != 0) {
            param_1[0x48e] = (int)((float)param_1[0x48e] + (float)param_1[0x48e]);
          }
          FUN_00aa4080(0xb3,1,0x3d088889,0x3e99999a,0x8000010,0,0x3f800000);
          FUN_00aa4080(0xb3,2,0x3d088889,0x3e99999a,0x8000050,0,0x3f800000);
        }
      }
    }
  }
  if ((param_1[0x446] != 0) && (param_1[0x494] < 1)) {
    FUN_0047e3b0(0x70001,0,0,0,0);
    sVar10 = FUN_00dde2d0(0,3);
    param_1[0x494] = sVar10 + 9;
  }
  if (param_1[0x37b] == 1) {
    uVar15 = 0x89;
    sVar10 = FUN_00dde2d0(0,1);
    if (sVar10 != 0) {
      uVar15 = 0x8a;
    }
    FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    param_1[0x375] = param_1[0x375] - local_24;
    if ((param_1[0x375] < 1) && ((*(byte *)(param_1 + 0x37a) & 4) == 0)) {
      (**(code **)(*param_1 + 0x358))(0x192,0);
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
      FUN_00ac8d80(3,1);
      FUN_00ac9420("_EFD05");
      if (bVar9) {
        uVar14 = uVar14 & 0xffffffbf | 0x20;
      }
      FUN_0047e3b0(0x70000,1,0,0,0);
    }
  }
  if (param_1[0x37b] == 2) {
    uVar15 = 0x89;
    sVar10 = FUN_00dde2d0(0,1);
    if (sVar10 != 0) {
      uVar15 = 0x8a;
    }
    FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
    param_1[0x376] = param_1[0x376] - local_24;
    if ((param_1[0x376] < 1) && ((*(byte *)(param_1 + 0x37a) & 2) == 0)) {
      (**(code **)(*param_1 + 0x358))(0x193,0);
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
      FUN_00ac8d80(1,1);
      FUN_00ac9420("_EFD06");
      if (bVar9) {
        uVar14 = uVar14 & 0xffffffbf | 0x20;
      }
      FUN_0047e3b0(0x70000,2,0,0,0);
    }
  }
  iVar12 = param_1[0x37b];
  if ((((((iVar12 == 5) || (iVar12 == 6)) || (iVar12 == 4)) ||
       ((iVar12 == 0 || ((iStack_10 != 0 && (iVar12 == 1)))))) &&
      (param_1[0x377] = param_1[0x377] - local_20, param_1[0x377] < 1)) &&
     ((*(byte *)(param_1 + 0x37a) & 0x10) == 0)) {
    FUN_0047e820(1);
    if (bVar9) {
      FUN_0047f480();
      uVar14 = uVar14 & 0xffffff9f;
    }
    FUN_0047e3b0(0x70000,1,0,0,0);
  }
  iVar12 = param_1[0x37b];
  if ((((((iVar12 == 7) || (iVar12 == 8)) || ((iVar12 == 4 || (iVar12 == 0)))) ||
       ((iStack_10 != 0 && (iVar12 == 2)))) &&
      (param_1[0x378] = param_1[0x378] - local_20, param_1[0x378] < 1)) &&
     ((*(byte *)(param_1 + 0x37a) & 8) == 0)) {
    FUN_0047e890(1);
    if (bVar9) {
      FUN_0047f4e0();
      uVar14 = uVar14 & 0xffffff9f;
    }
    FUN_0047e3b0(0x70000,2,0,0,0);
  }
  if (((param_1[0x37b] == 3) && (param_1[0x373] = param_1[0x373] - local_1c, param_1[0x373] < 1)) &&
     ((*(byte *)(param_1 + 0x37a) & 1) == 0)) {
    (**(code **)(*param_1 + 0x358))(400,0);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
    FUN_00ac8d80(8,1);
    FUN_00ac9420("_EFD04");
  }
  if ((*param_2 == 0x4f) && (param_1[0x186] != 0x70000)) {
    bVar2 = *(byte *)(param_1 + 0x37a);
    if (((bVar2 & 0x10) == 0) || ((*(byte *)((int)param_1 + 0xde9) & 0x10) != 0)) {
      if (((bVar2 & 0x10) == 0) || ((*(byte *)((int)param_1 + 0xde9) & 0x10) != 0)) {
        if (((bVar2 & 4) != 0) && ((*(byte *)((int)param_1 + 0xde9) & 4) == 0)) {
          (**(code **)(*param_1 + 0x358))(0x192,0);
          *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
          FUN_00ac8d80(3,1);
          FUN_00ac9420("_EFD05");
          uVar15 = 1;
          goto LAB_00487a5d;
        }
        if (((bVar2 & 2) == 0) || ((*(byte *)((int)param_1 + 0xde9) & 2) != 0)) goto LAB_00487a6f;
        (**(code **)(*param_1 + 0x358))(0x193,0);
        *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
        FUN_00ac8d80(1,1);
        FUN_00ac9420("_EFD06");
      }
      else {
        FUN_0047e890(1);
      }
      uVar15 = 2;
    }
    else {
      FUN_0047e820(1);
      uVar15 = 1;
    }
LAB_00487a5d:
    uVar14 = uVar14 & 0xffffffbf | 0x20;
    FUN_0047e3b0(0x70000,uVar15,0,0,0);
  }
LAB_00487a6f:
  if ((param_1[0x37b] == 0) && ((param_2[0x23] & 0x10000000U) == 0)) {
    sVar10 = FUN_00dde2d0(0,1);
    FUN_00aa4080(sVar10 + 0x96,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    FUN_0047e3b0(0x70006,0,0,0,0);
  }
  if ((((*(byte *)(param_2 + 0x23) & 1) != 0) && (uVar3 != 0x70000)) &&
     ((float)param_1[0x8d6] <= 0.0)) {
    pcVar5 = *(code **)(*param_1 + 0x358);
    param_1[0x8d6] = 0x44960000;
    (*pcVar5)(0x18e,0);
    if ((*(byte *)((int)param_1 + 0xde9) & 4) == 0) {
      FUN_0047e3b0(0x70000,1,0,0,0);
    }
    if ((*(byte *)((int)param_1 + 0xde9) & 2) == 0) {
      FUN_0047e3b0(0x70000,2,0,0,0);
    }
  }
LAB_00487b64:
  iVar12 = param_1[0x128];
  if ((((iVar12 == 1) || (iVar12 == 7)) || (iVar12 == 8)) && (bVar8)) {
    if (param_1[0x37b] == 4) {
      uVar15 = 0x8000010;
      sVar10 = FUN_00dde2d0(0,1);
      if (sVar10 != 0) {
        uVar15 = 0x8000050;
      }
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,uVar15,0,0x3f800000);
    }
    if (param_1[0x37b] == 0) {
      uVar15 = 0x8000010;
      sVar10 = FUN_00dde2d0(0,1);
      if (sVar10 != 0) {
        uVar15 = 0x8000050;
      }
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,uVar15,0,0x3f800000);
    }
    iVar12 = param_1[0x37b];
    if (((iVar12 == 5) || (iVar12 == 6)) || (iVar12 == 1)) {
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,0x8000010,0,0x3f800000);
    }
    iVar12 = param_1[0x37b];
    if (((iVar12 == 7) || (iVar12 == 8)) || (iVar12 == 2)) {
      FUN_00aa4080(0xb3,1,0x3d088889,0x3f800000,0x8000050,0,0x3f800000);
    }
  }
  if ((param_1[0x128] == 3) && (bVar8)) {
    if (((uVar11 != 0x70000) || (uVar3 != 0x60002)) &&
       ((param_1[0x379] = param_1[0x379] - local_1c, param_1[0x379] < 1 && (uVar3 != 0x70002)))) {
      FUN_0047e3b0(0x70002,0,0,0,0);
      param_1[0x379] = 0x50;
    }
    if ((param_1[0x37b] == 1) || (param_1[0x37b] == 0)) {
      uVar15 = 0x89;
      sVar10 = FUN_00dde2d0(0,1);
      if (sVar10 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      param_1[0x375] = param_1[0x375] - local_24;
      if ((param_1[0x375] < 1) && ((*(byte *)(param_1 + 0x37a) & 4) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x192,0);
        *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
        FUN_00ac8d80(3,1);
        FUN_00ac9420("_EFD05");
        if (bVar9) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    if ((param_1[0x37b] == 2) || (param_1[0x37b] == 0)) {
      uVar15 = 0x89;
      sVar10 = FUN_00dde2d0(0,1);
      if (sVar10 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
      param_1[0x376] = param_1[0x376] - local_24;
      if ((param_1[0x376] < 1) && ((*(byte *)(param_1 + 0x37a) & 2) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x193,0);
        *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
        FUN_00ac8d80(1,1);
        FUN_00ac9420("_EFD06");
        if (bVar9) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    iVar12 = param_1[0x37b];
    if ((((((iVar12 == 5) || (iVar12 == 6)) || (iVar12 == 4)) || (iVar12 == 0)) &&
        ((param_1[0x377] = param_1[0x377] - local_20, param_1[0x377] < 1 &&
         ((*(byte *)(param_1 + 0x37a) & 0x10) == 0)))) && (FUN_0047e820(1), bVar9)) {
      uVar14 = uVar14 & 0xffffffbf | 0x20;
    }
    iVar12 = param_1[0x37b];
    if ((((iVar12 == 7) || (iVar12 == 8)) || ((iVar12 == 4 || (iVar12 == 0)))) &&
       (((param_1[0x378] = param_1[0x378] - local_20, param_1[0x378] < 1 &&
         ((*(byte *)(param_1 + 0x37a) & 8) == 0)) && (FUN_0047e890(1), bVar9)))) {
      uVar14 = uVar14 & 0xffffffbf | 0x20;
    }
    if (((param_1[0x37b] == 3) && (param_1[0x373] = param_1[0x373] - local_20, param_1[0x373] < 1))
       && ((*(byte *)(param_1 + 0x37a) & 1) == 0)) {
      (**(code **)(*param_1 + 0x358))(400,0);
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
      FUN_00ac8d80(8,1);
      FUN_00ac9420("_EFD04");
    }
    if (((param_1[0x37b] == 0) || (param_1[0x37b] == 4)) && (local_8 != 0)) {
      uVar16 = 0x8000010;
      fVar17 = (float10)FUN_00a8ec30(local_8 + 0x40);
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
      bVar2 = *(byte *)(param_1 + 0x37a);
      if ((((bVar2 & 0x10) != 0) && ((*(byte *)((int)param_1 + 0xde9) & 0x10) == 0)) ||
         ((((bVar2 & 0x10) != 0 && ((*(byte *)((int)param_1 + 0xde9) & 0x10) == 0)) ||
          ((((bVar2 & 4) != 0 && ((*(byte *)((int)param_1 + 0xde9) & 4) == 0)) ||
           (((bVar2 & 2) != 0 && ((*(byte *)((int)param_1 + 0xde9) & 2) == 0)))))))) {
        uVar14 = uVar14 & 0xffffffbf | 0x20;
      }
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      FUN_0047e3b0(0x70007,0,0,0,0);
    }
  }
  if (((param_1[0x128] == 4) && (bVar8)) && ((param_2[0x23] & 0x20000U) != 0)) {
    FUN_0047e3b0(0x70008,0,0,0,0);
  }
  if ((param_1[0x128] == 6) && (bVar8)) {
    if (param_1[0x37b] == 1) {
      uVar15 = 0x89;
      sVar10 = FUN_00dde2d0(0,1);
      if (sVar10 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      param_1[0x375] = param_1[0x375] - local_24;
      if ((param_1[0x375] < 1) && ((*(byte *)(param_1 + 0x37a) & 4) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x192,0);
        *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
        FUN_00ac8d80(3,1);
        FUN_00ac9420("_EFD05");
        if (bVar9) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    if (param_1[0x37b] == 2) {
      uVar15 = 0x89;
      sVar10 = FUN_00dde2d0(0,1);
      if (sVar10 != 0) {
        uVar15 = 0x8a;
      }
      FUN_00aa4080(uVar15,1,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
      param_1[0x376] = param_1[0x376] - local_24;
      if ((param_1[0x376] < 1) && ((*(byte *)(param_1 + 0x37a) & 2) == 0)) {
        (**(code **)(*param_1 + 0x358))(0x193,0);
        *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
        FUN_00ac8d80(1,1);
        FUN_00ac9420("_EFD06");
        if (bVar9) {
          uVar14 = uVar14 & 0xffffffbf | 0x20;
        }
      }
    }
    iVar12 = param_1[0x37b];
    if ((((((iVar12 == 5) || (iVar12 == 6)) || (iVar12 == 4)) || (iVar12 == 0)) ||
        ((iStack_10 != 0 && (iVar12 == 1)))) &&
       ((param_1[0x377] = param_1[0x377] - local_20, param_1[0x377] < 1 &&
        (((*(byte *)(param_1 + 0x37a) & 0x10) == 0 && (FUN_0047e820(1), bVar9)))))) {
      FUN_0047f480();
      uVar14 = uVar14 & 0xffffff9f;
    }
    iVar12 = param_1[0x37b];
    if (((((iVar12 == 7) || (iVar12 == 8)) || (iVar12 == 4)) ||
        ((iVar12 == 0 || ((iStack_10 != 0 && (iVar12 == 2)))))) &&
       ((param_1[0x378] = param_1[0x378] - local_20, param_1[0x378] < 1 &&
        (((*(byte *)(param_1 + 0x37a) & 8) == 0 && (FUN_0047e890(1), bVar9)))))) {
      FUN_0047f4e0();
      uVar14 = uVar14 & 0xffffff9f;
    }
    if (((param_1[0x37b] == 3) && (param_1[0x373] = param_1[0x373] - local_1c, param_1[0x373] < 1))
       && ((*(byte *)(param_1 + 0x37a) & 1) == 0)) {
      (**(code **)(*param_1 + 0x358))(400,0);
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
      FUN_00ac8d80(8,1);
      FUN_00ac9420("_EFD04");
    }
    if (param_1[0x37b] == 0) {
      sVar10 = FUN_00dde2d0(0,1);
      FUN_00aa4080(sVar10 + 0x96,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      FUN_0047e3b0(0x70006,0,0,0,0);
    }
  }
  if (*param_2 == 0x92) {
    uVar14 = uVar14 & 0xffffffbf | 0x20;
  }
  if ((param_1[0x8e2] == 0) &&
     ((*param_2 == 0x92 || ((param_1[0x8b3] != 0 && ((*(byte *)(param_2 + 0x23) & 2) != 0)))))) {
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
    uVar14 = uVar14 & 0xffffffbf | 0x20;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
    FUN_00ac8d80(1,1);
    FUN_00ac9420("_EFD06");
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x10;
    FUN_00ac8d80(4,1);
    FUN_00ac8d80(9,1);
    FUN_00ac9420("_EFD00");
    FUN_00ac9420("_EFD02");
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 8;
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(5,1);
    FUN_00ac9420("_EFD01");
    FUN_00ac9420("_EFD03");
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
    FUN_00ac8d80(8,1);
    FUN_00ac9420("_EFD04");
    FUN_00ac8d80(2,1);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x60;
    FUN_00ac9420("_EFD07");
    FUN_00ac9420("_EFD08");
    FUN_00484610();
    FUN_00ac8d40(1);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x80;
    if ((param_1[0x8b3] != 0) && ((*(byte *)(param_2 + 0x23) & 2) != 0)) {
      (**(code **)(*param_1 + 0x358))(399,0);
    }
    param_1[0x8e2] = 1;
  }
  (**(code **)(*param_1 + 0x30c))(local_1c,0);
  if ((param_1[0x890] == 0) && (iVar12 = FUN_00fdbc60(), param_1[0x21c] <= iVar12)) {
    if (param_1[0x128] == 0) {
      FUN_0047e3b0(0x70004,0,0,0,0);
      param_1[0x890] = 1;
      iVar12 = FUN_00fdbc60();
      param_1[0x21c] = iVar12;
    }
    if (param_1[0x128] == 3) {
      FUN_0047e3b0(0x70003,0,0,0,0);
      param_1[0x890] = 1;
      iVar12 = FUN_00fdbc60();
      param_1[0x21c] = iVar12;
    }
  }
  if (param_1[0x21c] < 1) {
    FUN_00484950(param_2);
    if ((*(byte *)((int)param_2 + 0x92) & 1) != 0) {
      piVar13 = (int *)FUN_00c209f0();
      (**(code **)(*piVar13 + 0x14))(0xe);
    }
    (**(code **)(*param_1 + 0x198))(iStack_10,param_2,uVar14);
    param_1[0x139] = 1;
    FUN_0047e3b0(0x80000,0,0,0,0);
    if (param_1[0x128] == 3) {
      FUN_0047e3b0(0x80001,0,0,0,0);
    }
    if (param_1[0x128] == 4) {
      FUN_0047e3b0(0x80002,0,0,0,0);
    }
    if (param_1[0x128] == 7) {
      FUN_0047e3b0(0x80002,0,0,0,0);
    }
    return 0;
  }
  pcVar5 = *(code **)(*param_1 + 0x198);
  param_1[0x8a4] = param_1[0x8a4] + -1;
  (*pcVar5)(iStack_10,param_2,uVar14);
  fVar17 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar17;
  if ((param_1[0x8ad] != 0) && (*param_2 == 0x4f)) {
    FUN_0047e3b0(0x20010,0,0,0,0);
  }
  (**(code **)(*param_1 + 0x1d8))();
  return 1;
}

// 00488740  Em0080::vf44  size=370  [class]
void __fastcall Em0080::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00900ca0();
  FUN_00900ca0();
  FUN_00900ca0();
  if (*(int *)(param_1 + 0x11dc) != 0) {
    *(undefined4 *)(param_1 + 0x11e4) = 0;
    if (*(int *)(param_1 + 0x11e8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x11dc),0);
      *(undefined4 *)(param_1 + 0x11e8) = 0;
    }
    *(undefined4 *)(param_1 + 0x11dc) = 0;
    *(undefined4 *)(param_1 + 0x11e0) = 0;
  }
  RayCastManager::getWork(param_1 + 0xdc4);
  RayCastManager::getWork(param_1 + 0x233c);
  RayCastManager::getWork(param_1 + 0x2344);
  RayCastManager::getWork(param_1 + 0x234c);
  RayCastManager::getWork(param_1 + 0x2354);
  FUN_0047e630();
  FUN_0047e6c0();
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
  if (*(int *)(param_1 + 0x1018) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1018);
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

// 004888C0  FUN_004888c0  size=507  [between]
void __fastcall FUN_004888c0(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00483e70();
    if (iVar3 == 0) {
      if ((DAT_01bea060 & 0x2000000) == 0) {
        param_1[0x8da] = 0x41000000;
        param_1[0x8d9] = 1;
        param_1[0x8db] = 0x43480000;
        param_1[0x8dc] = 0x40490fdb;
        if (((float)param_1[0x495] < 0.0) && (param_1[0x8ac] != 0)) {
          sVar2 = FUN_00dde2d0(0,1);
          if (sVar2 != 0) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
            param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x00488972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
        }
        if ((param_1[0x36c] != 1) && (param_1[0x36c] != 0)) {
          if (30.25 < (float)param_1[0x2a4]) {
            FUN_0047e3b0(0x10005,0,0,0,0);
          }
          iVar3 = FUN_0043fa60(5);
          if (iVar3 != 0) {
            if (((float)param_1[0x2a4] <= 30.25) && ((float)param_1[0x2a8] < 1.0471976)) {
              sVar2 = FUN_00dde2d0(0,1);
              if (sVar2 == 0) {
                uVar4 = 0x80000000;
              }
              else {
                uVar4 = 0;
              }
              FUN_0047e3b0(0x50001,uVar4,0,0,0);
            }
            if (((float)param_1[0x2a4] <= 12.25) && ((float)param_1[0x2a8] < 1.0471976)) {
              FUN_0047f8d0();
            }
            if (((float)param_1[0x2a4] <= 12.25) && (1.0471976 < (float)param_1[0x2a8])) {
              FUN_0047e3b0(0x50000,0,0,0,0);
            }
          }
          FUN_0047fea0();
          return;
        }
        iVar3 = FUN_0047fea0();
        if ((iVar3 == 0) &&
           (fVar1 = (float)param_1[0x249], !NAN(fVar1) && 90.0 < fVar1 != (fVar1 == 90.0))) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x004889be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
      else if ((float)param_1[0x2a3] <= 8.0) {
        FUN_0047e3b0(0x1000b,0,0,0,0);
      }
    }
  }
  return;
}

// 00488AC0  FUN_00488ac0  size=589  [between]
void __fastcall FUN_00488ac0(int *param_1)

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
      FUN_004841d0(2,0);
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
      if (param_1[0x8bb] == 0) {
        piVar3 = param_1 + 0x8c8;
      }
      else {
        piVar3 = (int *)(param_1[0x2a1] + 0x40);
      }
      FUN_00a8e880(piVar3);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c0efa35,0);
    }
    break;
  case 4:
    FUN_00aa4080(0x12,0,0x3daaaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_0043fa60(5);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_0047e3b0(param_1[899],param_1[900],0,0,0);
      }
    }
  }
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    if (param_1[0x8bb] == 0) {
      piVar3 = param_1 + 0x8c8;
    }
    else {
      piVar3 = (int *)(param_1[0x2a1] + 0x40);
    }
    FUN_00a8e880(piVar3);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 00488D30  FUN_00488d30  size=589  [between]
void __fastcall FUN_00488d30(int *param_1)

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
      FUN_004841d0(2,0);
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
      if (param_1[0x8bb] == 0) {
        piVar3 = param_1 + 0x8c8;
      }
      else {
        piVar3 = (int *)(param_1[0x2a1] + 0x40);
      }
      FUN_00a8e880(piVar3);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
    }
    break;
  case 4:
    FUN_00aa4080(0x12,0,0x3daaaaab,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_0043fa60(5);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_0047e3b0(param_1[899],param_1[900],0,0,0);
      }
    }
  }
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    if (param_1[0x8bb] == 0) {
      piVar3 = param_1 + 0x8c8;
    }
    else {
      piVar3 = (int *)(param_1[0x2a1] + 0x40);
    }
    FUN_00a8e880(piVar3);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 00488FA0  FUN_00488fa0  size=501  [between]
void __fastcall FUN_00488fa0(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  int iVar3;
  
  if ((param_1[0x187] != 0) && (iVar3 = FUN_00483e70(), iVar3 == 0)) {
    param_1[0x8da] = 0x41000000;
    param_1[0x8db] = 0x43480000;
    param_1[0x8d9] = 1;
    param_1[0x8dc] = 0x40490fdb;
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      if (((float)param_1[0x495] < 0.0) && (param_1[0x8ac] != 0)) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
        param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x00489028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      bVar2 = true;
      if ((param_1[0x446] != 0) && ((*(byte *)(param_1 + 0x47c) & 2) == 0)) {
        bVar2 = false;
      }
      if ((param_1[0x8b3] != 0) && (param_1[0x8b5] == 0)) {
        bVar2 = false;
      }
      if ((4 < *(byte *)((int)param_1 + 0xdae)) &&
         (((param_1[0x36c] == 2 || (param_1[0x36c] == -1)) && (bVar2)))) {
        if (((float)param_1[0x2a4] < 49.0) && ((float)param_1[0x2a8] < 1.2217305)) {
          if (param_1[0x446] != 0) {
            param_1[0x479] = 0;
            param_1[0x484] = param_1[0x484] | 0x10;
            *(undefined1 *)((int)param_1 + 0x11a5) = 10;
          }
          FUN_0047e3b0(0x50001,0,0,0,0);
        }
        fVar1 = (float)param_1[0x2a4];
        if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && ((float)param_1[0x2a4] <= 144.0))
           && ((float)param_1[0x2a8] < 0.5235988)) {
          if (param_1[0x446] != 0) {
            param_1[0x479] = 0;
            param_1[0x484] = param_1[0x484] | 0x10;
            *(undefined1 *)((int)param_1 + 0x11a5) = 10;
          }
          FUN_0047f8d0();
        }
        if (((float)param_1[0x2a4] < 49.0) &&
           (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 1.134464 < fVar1 != (fVar1 == 1.134464)))
        {
          if (param_1[0x446] != 0) {
            param_1[0x479] = 0;
            param_1[0x484] = param_1[0x484] | 0x10;
            *(undefined1 *)((int)param_1 + 0x11a5) = 10;
          }
          FUN_0047e3b0(0x50000,0,0,0,0);
        }
      }
    }
  }
  return;
}

// 004893A0  FUN_004893a0  size=211  [between]
void __fastcall FUN_004893a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(10,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(1,"_taiki");
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
  param_1[0x495] = 0x44610000;
  param_1[0x128] = 0;
  param_1[0x446] = 0;
  param_1[0x8ac] = 0;
  (*pcVar1)();
  FUN_004846e0();
  return;
}

// 004894A0  FUN_004894a0  size=384  [between]
void __fastcall FUN_004894a0(int param_1)

{
  int iVar1;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [52];
  float fStack_1c;
  float fStack_18;
  
  *(undefined4 *)(param_1 + 0x22b4) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    *(undefined4 *)(param_1 + 0x2368) = 0x40c00000;
    *(undefined4 *)(param_1 + 0x2364) = 1;
    *(undefined4 *)(param_1 + 0x236c) = 0x43960000;
    *(undefined4 *)(param_1 + 0x2370) = 0x40490fdb;
    iVar1 = FUN_00c81c60(0x1a);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x22d8) == 0)) {
      FUN_0047e3b0(0xa0000,0,0,0,0);
      *(undefined4 *)(param_1 + 0x22d8) = 1;
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
      FUN_0047e3b0(0x2000d,0,0,0,0);
    }
    iVar1 = FUN_00484190();
    if ((iVar1 != 0) && (*(byte *)(param_1 + 0x2130) < 2)) {
      FUN_0047e3b0(0x2000c,0,0,0,0);
    }
  }
  return;
}

// 00489620  FUN_00489620  size=748  [between]
void __fastcall FUN_00489620(int param_1)

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
    *(undefined2 *)(param_1 + 0x20b8) = 0;
    *(undefined1 *)(param_1 + 0x20b0) = 0;
  case 1:
    FUN_00a9f4c0("TATE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,2,0,0xb,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0xc,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,9,0x3daaaaab,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 2:
    iVar1 = FUN_00484150();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1644) = 0;
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
    iVar1 = FUN_00484150();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x2368) = 0x40c00000;
      *(undefined4 *)(param_1 + 0x1644) = 1;
      *(undefined4 *)(param_1 + 0x2364) = 1;
      *(undefined4 *)(param_1 + 0x236c) = 0x43960000;
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0x2370) = 0x40490fdb;
    }
    break;
  default:
    goto switchD_004896d4_default;
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
switchD_004896d4_default:
  fVar2 = (float10)FUN_00a581b0(auStack_6c,0,*(undefined4 *)(param_1 + 0x1b80));
  *(float *)(param_1 + 0x1b80) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x50) = auStack_6c[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_64;
  return;
}

// 00489920  FUN_00489920  size=847  [between]
void __fastcall FUN_00489920(int *param_1)

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
    goto LAB_004899fe;
  case 3:
LAB_004899fe:
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
        iVar3 = FUN_00484190();
        if ((iVar3 == 0) && (iVar3 = FUN_00484150(), iVar3 != 0)) {
          FUN_0047eee0(0xffffffff,0xbf800000);
        }
      }
    }
    goto switchD_0048994a_default;
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
    goto LAB_00489afe;
  case 5:
LAB_00489afe:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0047e3b0(0x2000b,0,0,0,0);
      param_1[0x40d] = 0x43700000;
    }
    goto switchD_0048994a_default;
  case 6:
    param_1[0x187] = 7;
    FUN_0047eee0(0xffffffff,0xbf800000);
    param_1[0x40d] = 0x44610000;
    param_1[0x248] = 0x43700000;
    goto LAB_00489b81;
  case 7:
LAB_00489b81:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 60.0) && (iVar3 = FUN_004843c0(), iVar3 != 0)) {
      param_1[0x248] = 0x42700000;
    }
    if ((float)param_1[0x248] < 0.0) {
      FUN_0047e3b0(0x2000b,0,0,0,0);
      param_1[0x40d] = 0x43340000;
    }
  default:
    goto switchD_0048994a_default;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0048994a_default:
  fVar4 = (float10)FUN_00a581b0(local_c,0,param_1[0x6e0]);
  param_1[0x6e0] = (int)(float)fVar4;
  param_1[0x14] = local_c[0];
  param_1[0x16] = local_4;
  iVar3 = FUN_00a8c760(8);
  if ((iVar3 != 0) && (param_1[0x250] != 0)) {
    FUN_0047eee0(0xffffffff,0xbf800000);
    param_1[0x250] = param_1[0x250] + -1;
  }
  return;
}

// 00489E70  FUN_00489e70  size=682  [between]
void __fastcall FUN_00489e70(int param_1)

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
    *(undefined4 *)(param_1 + 0xdf8) = 0x3e19999a;
    *(undefined4 *)(param_1 + 0x1030) = 0x43340000;
    *(undefined4 *)(param_1 + 0x1644) = 0;
    FUN_00a8d280();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0048a00f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_0047e3b0(0x2000e,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1030) = 0x43340000;
    if (56.25 < *(float *)(param_1 + 0xa90)) {
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      FUN_004841d0(uVar4,0);
      *(undefined4 *)(param_1 + 0x1034) = 0x42700000;
    }
  }
LAB_0048a00f:
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    FUN_00a8dd20(*(undefined4 *)(param_1 + 0xdf8));
    fVar3 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0xdf8) = (float)(fVar3 * (float10)*(float *)(param_1 + 0xdf8));
  }
  fVar3 = (float10)FUN_00a5e410(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                                *(undefined4 *)(param_1 + 0x58),auStack_78);
  *(float *)(param_1 + 0x1b80) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  *(undefined4 *)(param_1 + 0x1b84) = 0;
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

// 0048A790  FUN_0048a790  size=632  [between]
void __fastcall FUN_0048a790(int *param_1)

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
    goto switchD_0048a7bd_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0048a7bd_default:
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
        FUN_0047e3b0(0x90000,0,0,0,0);
        FUN_0041fee0();
        FUN_009f8b60();
        FUN_00ad3be0(param_1[0x13c],&stack0xfffffcc0);
      }
    }
  }
  return;
}

// 0048AAF0  FUN_0048aaf0  size=33  [between]
void __fastcall FUN_0048aaf0(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[7];
  *param_1 = fVar1 * param_1[4] + *param_1;
  param_1[1] = fVar1 * param_1[5] + param_1[1];
  param_1[2] = fVar1 * param_1[6] + param_1[2];
  param_1[3] = fVar1 * param_1[7] + param_1[3];
  param_1[4] = -param_1[4];
  param_1[5] = -param_1[5];
  param_1[6] = -param_1[6];
  param_1[7] = param_1[7];
  return;
}

// 0048AB40  FUN_0048ab40  size=891  [between]
void __fastcall FUN_0048ab40(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x52,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 4;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    FUN_004842b0();
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
    param_1[0x591] = 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(8);
    if ((iVar3 != 0) && (FUN_0047eee0(0xffffffff,0xbf800000), (float)param_1[0x2a4] <= 36.0)) {
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
    param_1[0x591] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x40c] = 0x43d20000;
      iVar3 = FUN_0043fa60(5);
      if ((((iVar3 != 0) && (64.0 < (float)param_1[0x2a4])) && ((float)param_1[0x2a8] < 0.7853982))
         && ((*(byte *)(param_1 + 0x12a) & 1) == 0)) {
        FUN_0047e3b0(0x50005,0,0,0,0);
      }
      if ((float)param_1[0x2a4] < 49.0) {
        pcVar2 = *(code **)(*param_1 + 0x34c);
        param_1[0x446] = 1;
        (*pcVar2)();
      }
      if (1.0471976 < (float)param_1[0x2a8]) {
        pcVar2 = *(code **)(*param_1 + 0x34c);
        param_1[0x446] = 1;
        (*pcVar2)();
      }
      if (((*(byte *)(param_1 + 0x12a) & 0x10) != 0) || (param_1[0x8de] != 0)) {
        param_1[0x446] = 1;
        FUN_0047e3b0(0x1000d,0,0,0,0);
      }
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0048AEF0  FUN_0048aef0  size=690  [between]
void __fastcall FUN_0048aef0(int *param_1)

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
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 4;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    FUN_004842b0();
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
    if (param_1[0x8de] != 0) {
      param_1[0x248] = 0x43340000;
    }
    param_1[0x187] = param_1[0x187] + 1;
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
    FUN_004841d0(uVar4,0);
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x54,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x591] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x40c] = 0x43d20000;
      iVar3 = FUN_0043fa60(5);
      if ((((iVar3 != 0) && (64.0 < (float)param_1[0x2a4])) && ((float)param_1[0x2a8] < 0.7853982))
         && ((*(byte *)(param_1 + 0x12a) & 1) == 0)) {
        FUN_0047e3b0(0x50005,0,0,0,0);
      }
      if (((*(byte *)(param_1 + 0x12a) & 0x10) != 0) || (param_1[0x8de] != 0)) {
        param_1[0x446] = 1;
        FUN_0047e3b0(0x1000d,0,0,0,0);
      }
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0048B210  FUN_0048b210  size=538  [between]
void __fastcall FUN_0048b210(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 3;
  param_1[0x20a] = 0x78;
  uVar1 = (uint)(param_1[0x372] != 0);
  if (param_1[0x372] == 6) {
    uVar1 = 2;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(*(undefined4 *)(&DAT_01880b6c + uVar1 * 0xc),0,0x3f800000,0x3f800000,
                 param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8ac] = 1;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x14;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_004841d0(2,0);
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
    FUN_00aa4080(*(undefined4 *)(&DAT_01880b70 + uVar1 * 0xc),0,0x3d088889,0x3f800000,param_1[0x400]
                 ,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 2 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(*(undefined4 *)(&DAT_01880b74 + uVar1 * 0xc),0,0x3d088889,0x3f800000,
                 param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x8ac] != 0) {
        param_1[0x446] = 1;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x495] = 0x44610000;
                    /* WARNING: Could not recover jumptable at 0x0048b425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0048B450  FUN_0048b450  size=513  [between]
void __fastcall FUN_0048b450(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(DAT_01880b90,0,0x3e088889,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x479] = 0;
    param_1[0x495] = 0x44610000;
    param_1[0x484] = param_1[0x484] | 0x14;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_004841d0(2,0);
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
    FUN_00aa4080(DAT_01880b94,0,0x3e088889,0x3f800000,param_1[0x400],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    param_1[0x446] = 0;
    *(undefined1 *)((int)param_1 + 0x11a5) = 0;
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
    FUN_00aa4080(DAT_01880b98,0,0x3e088889,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x446] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x495] = 0x44610000;
      param_1[0x496] = 0x42f00000;
                    /* WARNING: Could not recover jumptable at 0x0048b64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0048B670  FUN_0048b670  size=534  [between]
void __fastcall FUN_0048b670(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  *(undefined2 *)(param_1 + 0x824) = 3;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  iVar2 = FUN_00ac4d60(2);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (iVar2 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x4f0);
    uVar6 = 0x16;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x4f0);
    uVar6 = 2;
  }
  FUN_00c593a0(uVar5,0xffffffff,&local_20,0x40900000,0x3fc00000,uVar6,9);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x2250) == 0) {
    uVar3 = 0x40;
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar4 = 0xe8;
    if (*(int *)(param_1 + 0x2250) == 0) {
      uVar3 = 0;
      uVar4 = 0xea;
    }
    if (*(int *)(param_1 + 0x618) == 0x70004) {
      uVar3 = 0;
      uVar4 = 0xa7;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1118) = 0;
    *(undefined4 *)(param_1 + 0x11e4) = 0;
    *(uint *)(param_1 + 0x1210) = *(uint *)(param_1 + 0x1210) | 0x14;
    *(undefined1 *)(param_1 + 0x11a5) = 10;
    *(undefined4 *)(param_1 + 0x4a0) = 4;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
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
      FUN_0047e3b0(0x80002,0,0,0,0);
      return;
    }
  }
  return;
}

// 0048B8A0  FUN_0048b8a0  size=487  [between]
void __fastcall FUN_0048b8a0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x9b,0,0x3e088889,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8ac] = 1;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x14;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x9c,0,0x3d088889,0x3f800000,param_1[0x400],0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    if (param_1[0x8b3] != 0) {
      param_1[0x248] = 0x43700000;
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
    FUN_00aa4080(0x9d,0,0x3d088889,0x3f800000,param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x8ac] != 0) {
        param_1[0x446] = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0048ba82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0048BAA0  FUN_0048baa0  size=526  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0048baa0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  int local_8 [2];
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar1 = (uint)(param_1[0x372] != 0);
  if (param_1[0x372] == 6) {
    uVar1 = 2;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(*(undefined4 *)(&DAT_01880b9c + uVar1 * 0xc),0,0x3f800000,0x3f800000,
                 param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x8ac] = 1;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x14;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_004841d0(2,0);
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
    FUN_00aa4080(*(undefined4 *)(&DAT_01880ba0 + uVar1 * 0xc),0,0x3d088889,0x3f800000,param_1[0x400]
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
    FUN_00aa4080(*(undefined4 *)(&DAT_01880ba4 + uVar1 * 0xc),0,0x3d088889,0x3f800000,
                 param_1[0x400] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x8ac] != 0) {
        param_1[0x446] = 1;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x495] = 0x44610000;
                    /* WARNING: Could not recover jumptable at 0x0048bca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0048BCD0  FUN_0048bcd0  size=467  [between]
void __fastcall FUN_0048bcd0(int *param_1)

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
    (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ba],param_1[0x8b9]);
  }
  (**(code **)(*param_1 + 0x364))(0xffffffff);
  param_1[0x446] = 0;
  param_1[0x479] = 0;
  param_1[0x484] = param_1[0x484] | 0x14;
  *(undefined1 *)((int)param_1 + 0x11a5) = 10;
  param_1[0x139] = 1;
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa6e0(0x3f800000,0);
  if ((*(byte *)(param_1 + 0x82c) & 4) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a7c8a0();
    }
    FUN_00cbbb50(uVar2);
    *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) | 4;
    *(undefined1 *)(param_1 + 0x82e) = 0xff;
  }
  (**(code **)(*param_1 + 0x20))();
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
  }
  if (param_1[0x406] != 0) {
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

// 0048BEB0  Em0080::vf19C  size=179  [class]
void __thiscall Em0080::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 0048BF70  Em0080::vf34C  size=319  [class]
void __fastcall Em0080::vf34C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    FUN_0047e3b0(0x10004,0,0,0,0);
    if ((DAT_01bea060 & 0x2000000) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1118) != 0) {
      FUN_0047e3b0(0x1000d,0,0,0,0);
    }
    if ((*(byte *)(param_1 + 0x4a8) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x1118) = 1;
      FUN_0047e3b0(0x1000d,0,0,0,0);
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
    FUN_0047e3b0(uVar2,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_0047e3b0(0x1000f,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 4) {
    FUN_0047e3b0(0x80002,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 7) {
    FUN_0047e3b0(0x20012,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 6) {
    FUN_004846e0();
    FUN_0047e3b0(0x10015,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 8) {
    FUN_0047e3b0(0x20012,0,0,0,0);
  }
  return;
}

// 0048C0B0  FUN_0048c0b0  size=63  [between]
void __fastcall FUN_0048c0b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x20b0) & 4) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a7c8a0();
    }
    FUN_00cbbb50(uVar2);
    *(byte *)(param_1 + 0x20b0) = *(byte *)(param_1 + 0x20b0) | 4;
    *(undefined1 *)(param_1 + 0x20b8) = 0xff;
  }
  return;
}

// 0048C0F0  Em0080::vf284  size=179  [class]
undefined4 __thiscall
Em0080::vf284(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
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
  
  uVar1 = FUN_00484520(param_1 + 0xdc4,param_5);
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
  local_1c = "Em0080View";
  local_38 = param_4[2];
  local_34 = param_4[3];
  local_30 = 0x3ecccccd;
  local_60[0] = param_1 + 0xdc4;
  FUN_0090fb00(local_60);
  return uVar1;
}

// 0048C1B0  FUN_0048c1b0  size=132  [callgraph]
void __fastcall FUN_0048c1b0(int *param_1)

{
  code *pcVar1;
  
  FUN_004846e0();
  param_1[0x495] = 0x44610000;
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x128] = 0;
  param_1[0x446] = 0;
  param_1[0x8ac] = 0;
  (*pcVar1)();
  if (param_1[0x8b3] == 0) {
    FUN_0047e3b0(0x50002,0,0,0,0);
    if ((*(byte *)((int)param_1 + 0xdea) & 0x18) != 0) {
      FUN_0047e3b0(0x50003,0,0,0,0);
    }
    param_1[0x8b7] = 1;
  }
  return;
}

// 0048C260  FUN_0048c260  size=756  [callgraph]
void __fastcall FUN_0048c260(int param_1)

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
  *(int *)(param_1 + 0x22ec) = *(int *)(param_1 + 0x2258);
  if (*(int *)(param_1 + 0x2258) == 0) {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) & 0xfdffffff;
  }
  else {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x2000000;
  }
  if (*(int *)(param_1 + 0x22ec) == 0) {
    *(int *)(param_1 + 0x2314) = *(int *)(param_1 + 0x2314) + 1;
    *(undefined4 *)(param_1 + 0x2310) = 0;
  }
  else {
    *(int *)(param_1 + 0x2310) = *(int *)(param_1 + 0x2310) + 1;
    *(undefined4 *)(param_1 + 0x2314) = 0;
  }
  iVar9 = FUN_00a82d50();
  if (iVar9 == 4) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_00484d30();
      *(undefined4 *)(param_1 + 0x2348) = uVar10;
      goto LAB_0048c2e9;
    }
  }
  else {
LAB_0048c2e9:
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_00484e50();
      *(undefined4 *)(param_1 + 0x2340) = uVar10;
    }
  }
  *(uint *)(param_1 + 0x1010) = *(uint *)(param_1 + 0x1010) | 0x400000;
  iVar9 = FUN_00a82d50();
  if (((iVar9 == 4) || (iVar9 = FUN_00a82d50(), iVar9 == 3)) || (iVar9 = FUN_00a82d50(), iVar9 == 2)
     ) {
    iVar9 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x22f0) = *(undefined4 *)(iVar9 + 0x40);
    *(undefined4 *)(param_1 + 0x22f4) = *(undefined4 *)(iVar9 + 0x44);
    *(undefined4 *)(param_1 + 0x22f8) = *(undefined4 *)(iVar9 + 0x48);
    *(undefined4 *)(param_1 + 0x22fc) = *(undefined4 *)(iVar9 + 0x4c);
  }
  iVar9 = *(int *)(param_1 + 0xa84);
  pfVar1 = (float *)(param_1 + 0x22f0);
  *(undefined4 *)(param_1 + 0x2300) = *(undefined4 *)(iVar9 + 0x40);
  pfVar2 = (float *)(param_1 + 0x2320);
  *(undefined4 *)(param_1 + 0x2304) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(param_1 + 0x2308) = *(undefined4 *)(iVar9 + 0x48);
  *(undefined4 *)(param_1 + 0x230c) = *(undefined4 *)(iVar9 + 0x4c);
  local_20 = *pfVar1;
  local_1c = *(float *)(param_1 + 0x22f4);
  local_18 = *(float *)(param_1 + 0x22f8);
  local_14 = *(undefined4 *)(param_1 + 0x22fc);
  *pfVar2 = *pfVar1;
  *(undefined4 *)(param_1 + 0x2324) = *(undefined4 *)(param_1 + 0x22f4);
  *(undefined4 *)(param_1 + 9000) = *(undefined4 *)(param_1 + 0x22f8);
  *(undefined4 *)(param_1 + 0x232c) = *(undefined4 *)(param_1 + 0x22fc);
  *(undefined4 *)(param_1 + 0x2330) = 0;
  fVar3 = *(float *)(param_1 + 0x2338) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x2338) = fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)(param_1 + 0x2334) = 1;
    *(undefined4 *)(param_1 + 0x2338) = 0x42700000;
  }
  iVar9 = FUN_00a979d0();
  if ((iVar9 == 0) || (*(int *)(param_1 + 0x2334) != 0)) {
    FUN_00a8d330(param_1 + 0x40,pfVar1);
    *(undefined4 *)(param_1 + 0x2334) = 0;
  }
  iVar9 = FUN_00aa09c0(pfVar2,0x40200000,0);
  if ((iVar9 != 0) && (iVar9 = FUN_00a8d380(), iVar9 != 0)) {
    *(undefined4 *)(param_1 + 0x2330) = 1;
  }
  FUN_00a979f0(&local_2c);
  *pfVar2 = local_2c;
  *(undefined4 *)(param_1 + 0x2324) = local_28;
  *(undefined4 *)(param_1 + 9000) = local_24;
  *(undefined4 *)(param_1 + 0x232c) = 0x3f800000;
  if (*(int *)(param_1 + 0x22ec) == 0) {
    if (*(int *)(param_1 + 0x2330) != 0) goto LAB_0048c535;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x2348);
    iVar11 = FUN_00a8d3d0(6);
    if (((iVar11 == 0) && (iVar9 == 0)) ||
       (fVar3 = *(float *)(param_1 + 0x40) - *pfVar2,
       fVar8 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x2324),
       fVar7 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 9000),
       fVar6 = *(float *)(param_1 + 0x40) - local_20, fVar5 = *(float *)(param_1 + 0x44) - local_1c,
       fVar4 = *(float *)(param_1 + 0x48) - local_18,
       fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 < fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7
       )) goto LAB_0048c535;
  }
  local_20 = *pfVar2;
  local_1c = *(float *)(param_1 + 0x2324);
  local_18 = *(float *)(param_1 + 9000);
  local_14 = *(undefined4 *)(param_1 + 0x232c);
  *(uint *)(param_1 + 0x1010) = *(uint *)(param_1 + 0x1010) & 0xffbfffff;
LAB_0048c535:
  FUN_00a8e880(&local_20);
  FUN_00484f70(&local_20);
  return;
}

// 0048C560  FUN_0048c560  size=871  [callgraph]
void __fastcall FUN_0048c560(int param_1)

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
      local_360 = *(float *)(iVar2 + 0x2270);
      local_35c = *(float *)(iVar2 + 0x2274);
      local_358 = *(undefined4 *)(iVar2 + 0x2278);
      local_354 = *(undefined4 *)(iVar2 + 0x227c);
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
      if (*(int *)(iVar2 + 0x2258) == 0) {
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

// 0048C8D0  FUN_0048c8d0  size=860  [callgraph]
void __fastcall FUN_0048c8d0(int param_1)

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
       (fVar1 = *(float *)(iVar2 + 0xa8c), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) {
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
      local_350 = *(undefined4 *)(iVar2 + 0x2270);
      local_34c = *(undefined4 *)(iVar2 + 0x2274);
      local_348 = *(undefined4 *)(iVar2 + 0x2278);
      local_344 = *(undefined4 *)(iVar2 + 0x227c);
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
      if (*(int *)(iVar2 + 0x22b4) == 0) {
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

// 0048CC30  FUN_0048cc30  size=2222  [callgraph]
void __fastcall FUN_0048cc30(int param_1)

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
      FUN_004842e0(iVar9,uVar8);
      iVar9 = iVar9 + 1;
    } while ((ushort)iVar9 < 0xe);
    iVar9 = FUN_00a12210(0x43);
    if (iVar9 != 0) {
      *(undefined4 *)(iVar9 + 0x90) = 0xbe32b8c2;
      if (*(int *)(iVar5 + 0x4a0) == 3) {
        *(undefined4 *)(iVar9 + 0x90) = 0x3db2b8c2;
      }
      if (*(int *)(iVar5 + 0x4a0) != 1) goto switchD_0048ce11_caseD_1;
      *(undefined4 *)(iVar9 + 0x90) = 0x3db2b8c2;
    }
    break;
  case 1:
switchD_0048ce11_caseD_1:
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1a4) = 3;
    *(float *)(param_1 + 0x1a8) =
         (float)*(int *)(param_1 + 0x1cc) * *(float *)(param_1 + 0x1c8) + 10.0 + 30.0;
    *(undefined4 *)(param_1 + 0x1c0) = 0x41200000;
    goto LAB_0048cf45;
  case 3:
LAB_0048cf45:
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
    iVar9 = FUN_0047e600(*(int *)(param_1 + 0x1d4) % 0xe);
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
      uStack_45c = *(undefined4 *)(iVar5 + 0x2270);
      uStack_458 = *(undefined4 *)(iVar5 + 0x2274);
      uStack_454 = *(undefined4 *)(iVar5 + 0x2278);
      uStack_450 = *(undefined4 *)(iVar5 + 0x227c);
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
    uStack_448 = *(undefined4 *)(iVar5 + 0x2270);
    uStack_444 = *(undefined4 *)(iVar5 + 0x2274);
    uStack_440 = *(undefined4 *)(iVar5 + 0x2278);
    fStack_43c = *(float *)(iVar5 + 0x227c);
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
    goto LAB_0048d492;
  case 5:
LAB_0048d492:
    fVar10 = (float10)FUN_00a95680(5);
    if ((float10)0 != fVar10) {
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined2 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 2;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      FUN_0047e630();
      return;
    }
  default:
    goto switchD_0048ce11_default;
  }
  fVar10 = (float10)FUN_00a95680(5);
  if ((float10)0 != fVar10) {
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    return;
  }
switchD_0048ce11_default:
  return;
}

// 0048D500  FUN_0048d500  size=1958  [callgraph]
void __fastcall FUN_0048d500(int param_1)

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
      FUN_00484350(iVar10,uVar9);
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
    goto LAB_0048d6b9;
  case 3:
LAB_0048d6b9:
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
    iVar10 = FUN_0047e690(uVar7);
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
      uStack_398 = *(undefined4 *)(iVar5 + 0x2270);
      uStack_394 = *(undefined4 *)(iVar5 + 0x2274);
      uStack_390 = *(undefined4 *)(iVar5 + 0x2278);
      fStack_38c = *(float *)(iVar5 + 0x227c);
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
    uStack_39c = *(undefined4 *)(iVar5 + 0x2270);
    uStack_398 = *(undefined4 *)(iVar5 + 0x2274);
    uStack_394 = *(undefined4 *)(iVar5 + 0x2278);
    uStack_390 = *(undefined4 *)(iVar5 + 0x227c);
    FUN_00416e30(&fStack_38c,&uStack_39c,&fStack_36c,0x3c23d70a,0x43c80000);
    FUN_00ad00b0(local_33c);
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
    return;
  case 4:
    FUN_00aa4080(0x66,4,0,0x3f800000,0x8040200,0,0x3f800000);
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    *(undefined4 *)(param_1 + 0x1a8) = 0x43340000;
    goto LAB_0048dc5e;
  case 5:
LAB_0048dc5e:
    fVar11 = (float10)FUN_00a95680(4);
    if ((float10)0 != fVar11) {
      *(undefined2 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 2;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      FUN_0047e6c0();
      return;
    }
  default:
    goto switchD_0048d595_default;
  }
  fVar11 = (float10)FUN_00a95680(4);
  if ((float10)0 != fVar11) {
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    return;
  }
switchD_0048d595_default:
  return;
}

// 0048E420  FUN_0048e420  size=1448  [callgraph]
void __fastcall FUN_0048e420(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined *puVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  if (param_1[0x8b3] == 0) {
    FUN_0093dc50();
  }
  piVar5 = (int *)0x0;
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar8);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_00b8c350(0x40c00000);
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xf1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4080(0xf6,7,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00ac8d40(0);
    FUN_00ac8d80(2,1);
    if (piVar5 != (int *)0x0) {
      FUN_009f8b40();
      uVar7 = FUN_009f8b40();
      FUN_009f8ae0(uVar7);
      uVar7 = FUN_009f8b40();
      FUN_00ac89d0(uVar7);
      FUN_009f8ae0();
      FUN_009f8b40();
      uVar7 = FUN_009f8b40();
      FUN_0091a980(uVar7);
    }
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00485560();
    param_1[0x404] = param_1[0x404] | 0x800000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 6;
    }
    iVar4 = FUN_00a95540(7,0x3c);
    if (iVar4 != 0) {
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
      FUN_00ac8d80(3,1);
      FUN_00ac9420("_EFD05");
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
      FUN_00ac8d80(1,1);
      FUN_00ac9420("_EFD06");
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x10;
      FUN_00ac8d80(4,1);
      FUN_00ac8d80(9,1);
      FUN_00ac9420("_EFD00");
      FUN_00ac9420("_EFD02");
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 8;
      FUN_00ac8d80(6,1);
      FUN_00ac8d80(5,1);
      FUN_00ac9420("_EFD01");
      FUN_00ac9420("_EFD03");
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
      FUN_00ac8d80(8,1);
      FUN_00ac9420("_EFD04");
      FUN_00ac8d80(2,1);
      pcVar3 = *(code **)(*param_1 + 0x358);
      *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x60;
      (*pcVar3)(0x191,0);
      (**(code **)(*param_1 + 0x358))(0x198,0);
      FUN_00ac9420("_EFD07");
      FUN_00ac9420("_EFD08");
      FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
    }
    break;
  case 2:
    FUN_00aa4080(0xf2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00484610();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 8;
    }
    break;
  case 4:
    FUN_00aa4080(0xf3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_0048bcd0();
      FUN_00940450(param_1[0x20f]);
      if (param_1[0x2ff] != 0) {
        FUN_0047e3b0(0x80002,0,0,0,0);
      }
      FUN_00dda360(0,0x3f800000,0x3f800000,0x37);
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      if (param_1[0x2ff] == 0) {
        FUN_009fdde0();
      }
      else {
        FUN_0047e3b0(0x80002,0,0,0,0);
      }
    }
    break;
  case 6:
    uVar7 = 0xf4;
    goto LAB_0048e8b3;
  case 7:
  case 9:
    goto switchD_0048e4a3_caseD_7;
  case 8:
    uVar7 = 0xf5;
LAB_0048e8b3:
    FUN_00aa4080(uVar7,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
switchD_0048e4a3_caseD_7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (piVar5 == (int *)0x0) goto LAB_0048e9ba;
    iVar4 = FUN_00a81330();
    if (iVar4 != param_1[0x13c]) {
      FUN_00a8cb60(4);
    }
    break;
  default:
    break;
  }
  if ((((piVar5 != (int *)0x0) && (iVar4 = FUN_00a8cac0(), iVar4 != 5)) &&
      (iVar4 = FUN_00a8e520(), iVar4 == 0)) && (iVar4 = FUN_00a8cac0(), iVar4 == 1)) {
    switchD_0080dbae::default();
    FUN_00a8ce90(&fStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x11];
    fVar2 = (float)param_1[0x12];
    piVar5[0x14] = (int)((float)param_1[0x10] + fStack_30);
    piVar5[0x15] = (int)(fVar1 + fStack_2c);
    piVar5[0x16] = (int)(fVar2 + fStack_28);
    piVar5[0x17] = iStack_24;
  }
LAB_0048e9ba:
  switchD_0080dbae::default();
  return;
}

// 0048E9F0  FUN_0048e9f0  size=112  [callgraph]
void __thiscall FUN_0048e9f0(int *param_1,int *param_2,undefined2 *param_3)

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

// 0048EA60  FUN_0048ea60  size=601  [callgraph]
void __thiscall FUN_0048ea60(int *param_1,int *param_2,int *param_3,undefined2 *param_4)

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

// 0048ECD0  Em0080::vf32C  size=849  [class]
undefined4 __fastcall Em0080::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 local_260 [144];
  uint local_1d0;
  
  param_1[0x441] = 0;
  param_1[0x8a5] = 0;
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
  iVar6 = FUN_00a8ef10();
  if ((iVar6 == 0) && (param_1[0x128] != 5)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar6 = param_1[0x19f];
    iVar9 = param_1[0x1a1] * 0x150 + iVar6;
    FUN_00445db0();
    FUN_004105d0();
    iVar8 = -1;
    bVar4 = false;
    if (iVar6 != iVar9) {
      do {
        iVar1 = param_1[0x37b];
        iVar2 = *(int *)(iVar6 + 4);
        bVar5 = iVar1 == 4 || iVar1 == 9;
        if ((iVar1 == 5) || (iVar1 == 6)) {
          bVar5 = true;
        }
        if ((iVar1 == 7) || (iVar1 == 8)) {
          bVar5 = true;
        }
        if ((iVar8 <= iVar2) || (bVar5)) {
          FUN_0043e160(iVar6);
          FUN_00448f50(iVar6);
          bVar4 = true;
          iVar8 = iVar2;
          if (bVar5) goto LAB_0048ee38;
        }
        iVar6 = iVar6 + 0x150;
      } while (iVar6 != iVar9);
      if (bVar4) {
LAB_0048ee38:
        iVar6 = FUN_00a8f040(local_260);
        if (iVar6 == 0) {
          if ((*(byte *)(param_1 + 0x36d) & 8) == 0) {
            *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 1;
          }
          if ((((local_1d0 & 0x20000) != 0) && (param_1[0x8e2] == 0)) && (param_1[0x8b3] != 0)) {
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
            FUN_00ac8d80(3,1);
            FUN_00ac9420("_EFD05");
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
            FUN_00ac8d80(1,1);
            FUN_00ac9420("_EFD06");
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x10;
            FUN_00ac8d80(4,1);
            FUN_00ac8d80(9,1);
            FUN_00ac9420("_EFD00");
            FUN_00ac9420("_EFD02");
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 8;
            FUN_00ac8d80(6,1);
            FUN_00ac8d80(5,1);
            FUN_00ac9420("_EFD01");
            FUN_00ac9420("_EFD03");
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
            FUN_00ac8d80(8,1);
            FUN_00ac9420("_EFD04");
            FUN_00ac8d80(2,1);
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x60;
            FUN_00ac9420("_EFD07");
            FUN_00ac9420("_EFD08");
            FUN_00ac8d40(1);
            pcVar3 = *(code **)(*param_1 + 0x358);
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x80;
            param_1[0x8e2] = 1;
            (*pcVar3)(399,0);
          }
          iVar6 = FUN_0047f950(local_260);
          if (iVar6 == 0) {
            if (param_1[0x88f] == 0) {
              if (param_1[0x139] == 0) {
                uVar7 = FUN_00487160(local_260);
              }
              else {
                uVar7 = FUN_0047fb10(local_260);
              }
              if (param_1[0x286] != 0) {
                LeaveCriticalSection(lpCriticalSection);
              }
              return uVar7;
            }
            FUN_0047fa90(local_260);
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

// 0048F030  FUN_0048f030  size=493  [between]
void __fastcall FUN_0048f030(int *param_1)

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
      param_1[0x37b] = iVar4;
      if (param_1[0x128] == 0) {
        if (iVar4 == 1) {
          param_1[0x375] = param_1[0x375] - iVar1;
          bVar2 = true;
          if ((param_1[0x375] < 1) && ((*(byte *)(param_1 + 0x37a) & 4) == 0)) {
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
          }
        }
        if (param_1[0x37b] == 2) {
          param_1[0x376] = param_1[0x376] - iVar1;
          bVar2 = true;
          if ((param_1[0x376] < 1) && ((*(byte *)(param_1 + 0x37a) & 2) == 0)) {
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
          }
        }
        iVar4 = param_1[0x37b];
        if ((((iVar4 == 5) || (iVar4 == 6)) || (iVar4 == 4)) || (iVar4 == 0)) {
          param_1[0x377] = param_1[0x377] - iVar1;
          bVar2 = true;
          if ((param_1[0x377] < 1) && ((*(byte *)(param_1 + 0x37a) & 0x10) == 0)) {
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 0x10;
          }
        }
        iVar4 = param_1[0x37b];
        if (((iVar4 == 7) || (iVar4 == 8)) || ((iVar4 == 4 || (iVar4 == 0)))) {
          param_1[0x378] = param_1[0x378] - iVar1;
          bVar2 = true;
          if ((param_1[0x378] < 1) && ((*(byte *)(param_1 + 0x37a) & 8) == 0)) {
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 8;
          }
        }
        if (param_1[0x37b] == 3) {
          param_1[0x373] = param_1[0x373] - iVar1;
          if ((param_1[0x373] < 1) && ((*(byte *)(param_1 + 0x37a) & 1) == 0)) {
            *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 1;
          }
        }
        else if (!bVar2) goto LAB_0048f205;
        (**(code **)(*param_1 + 0x198))(local_8,iVar5,1);
      }
    }
LAB_0048f205:
    iVar5 = iVar5 + 0x150;
  } while( true );
}

// 0048F220  Em0080::vf40  size=7277  [class]
void __fastcall Em0080::vf40(int *param_1)

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
  
  piStack_284 = (int *)0x48f236;
  iVar3 = BehaviorEmBase::vf40();
  if (iVar3 == 0) {
    return;
  }
  if (param_1[300] == 0x20080) {
    piStack_284 = (int *)0x163e36c;
    piStack_288 = (int *)0x2008e;
LAB_0048f267:
    local_28c = (int *)0x48f26e;
    FUN_00acf600();
  }
  else if (param_1[300] == 0x20081) {
    piStack_284 = (int *)0x163e378;
    piStack_288 = (int *)0x2008f;
    goto LAB_0048f267;
  }
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x48f278;
  FUN_00ac8e10();
  piStack_284 = (int *)0x1;
  piStack_288 = (int *)0x1;
  local_28c = (int *)0x48f283;
  FUN_00ac8eb0();
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x48f28b;
  FUN_00ac8d40();
  param_1[0x20b] = 4;
  piStack_284 = (int *)0x48f29c;
  FUN_00a929d0();
  param_1[0x8b3] = 0;
  param_1[0x8b4] = 0;
  if (param_1[300] == 0x20080) {
    param_1[0x8b4] = 1;
  }
  piStack_284 = (int *)0x15;
  param_1[0x8ac] = 0;
  piStack_288 = (int *)0x48f2cd;
  fVar10 = (float10)FUN_00ac8570();
  param_1[0x891] = (int)(float)fVar10;
  piStack_284 = (int *)0x17;
  piStack_288 = (int *)0x48f2dc;
  FUN_00ac8570();
  piStack_284 = (int *)0x48f2e1;
  uVar4 = FUN_00fdbc60();
  piStack_284 = (int *)0x18;
  piStack_288 = (int *)0x48f2f0;
  local_264 = uVar4;
  FUN_00ac8570();
  piStack_284 = (int *)0x48f2f5;
  local_224[4] = FUN_00fdbc60();
  piStack_284 = (int *)0x19;
  piStack_288 = (int *)0x48f302;
  FUN_00ac8570();
  piStack_284 = (int *)0x48f307;
  local_244 = FUN_00fdbc60();
  piStack_284 = (int *)0x1a;
  piStack_288 = (int *)0x48f314;
  FUN_00ac8570();
  piStack_284 = (int *)0x48f319;
  local_268 = (int *)FUN_00fdbc60();
  piStack_284 = (int *)0x1b;
  piStack_288 = (int *)0x48f326;
  FUN_00ac8570();
  piStack_284 = (int *)0x48f32b;
  local_224[5] = FUN_00fdbc60();
  piStack_284 = (int *)0x1c;
  piStack_288 = (int *)0x48f338;
  FUN_00ac8570();
  piStack_284 = (int *)0x48f33d;
  local_224[2] = FUN_00fdbc60();
  piStack_284 = (int *)0x1d;
  piStack_288 = (int *)0x48f34a;
  FUN_00ac8570();
  piStack_284 = (int *)0x48f34f;
  local_224[3] = FUN_00fdbc60();
  piStack_284 = (int *)0x27;
  piStack_288 = (int *)0x48f35c;
  fVar10 = (float10)FUN_00ac8570();
  param_1[0x895] = (int)(float)fVar10;
  if ((param_1[300] == 0x20081) || ((*(byte *)(param_1 + 0x12a) & 2) != 0)) {
    piStack_284 = (int *)0x1f;
    param_1[0x8b3] = 1;
    param_1[0x8ac] = 1;
    piStack_288 = (int *)0x48f395;
    FUN_00ac8570();
    piStack_284 = (int *)0x48f39a;
    uVar4 = FUN_00fdbc60();
    piStack_284 = (int *)0x20;
    piStack_288 = (int *)0x48f3a9;
    local_264 = uVar4;
    FUN_00ac8570();
    piStack_284 = (int *)0x48f3ae;
    local_224[4] = FUN_00fdbc60();
    piStack_284 = (int *)0x21;
    piStack_288 = (int *)0x48f3bb;
    FUN_00ac8570();
    piStack_284 = (int *)0x48f3c0;
    local_244 = FUN_00fdbc60();
    piStack_284 = (int *)0x22;
    piStack_288 = (int *)0x48f3cd;
    FUN_00ac8570();
    piStack_284 = (int *)0x48f3d2;
    local_268 = (int *)FUN_00fdbc60();
    piStack_284 = (int *)0x23;
    piStack_288 = (int *)0x48f3df;
    FUN_00ac8570();
    piStack_284 = (int *)0x48f3e4;
    local_224[5] = FUN_00fdbc60();
    piStack_284 = (int *)0x24;
    piStack_288 = (int *)0x48f3f1;
    FUN_00ac8570();
    piStack_284 = (int *)0x48f3f6;
    local_224[2] = FUN_00fdbc60();
    piStack_284 = (int *)0x25;
    piStack_288 = (int *)0x48f403;
    FUN_00ac8570();
    piStack_284 = (int *)0x48f408;
    local_224[3] = FUN_00fdbc60();
  }
  if (param_1[0x128] == 7) {
    piStack_284 = (int *)0x48f424;
    uVar4 = FUN_00fdbc60();
  }
  local_290 = (int *)param_1[0x13c];
  piStack_284 = (int *)0xffffffff;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x4;
  local_294 = (undefined4 *)0x48f43d;
  FUN_00a82ac0();
  param_1[0x369] = 1;
  piStack_288 = (int *)0x48f44f;
  piStack_284 = (int *)uVar4;
  FUN_00a8edf0();
  param_1[0x37d] = local_224[4];
  param_1[0x404] = 0;
  param_1[0x405] = 0;
  param_1[0x40c] = 0;
  param_1[0x40d] = 0;
  param_1[0x375] = local_224[5];
  param_1[0x37c] = 0;
  param_1[0x376] = local_224[2];
  param_1[0x8a9] = -0x40800000;
  piStack_284 = (int *)0x2;
  param_1[0x8ab] = -0x40800000;
  param_1[0x373] = local_224[3];
  piStack_288 = (int *)0x0;
  param_1[0x43d] = 0;
  param_1[0x43e] = 0;
  param_1[0x374] = 0x28;
  param_1[0x377] = local_244;
  param_1[0x378] = (int)local_268;
  *(undefined2 *)(param_1 + 0x37a) = 0;
  *(undefined1 *)((int)param_1 + 0xdea) = 0;
  param_1[0x379] = 0x50;
  param_1[0x890] = 0;
  param_1[0x401] = 0;
  local_28c = (int *)0x48f503;
  sVar2 = FUN_00dde2d0();
  param_1[0x8d6] = 0;
  param_1[0x8b8] = 0x41200000;
  param_1[0x8a4] = sVar2 + 3;
  param_1[0x494] = 6;
  param_1[0x8a5] = 0;
  param_1[0x8a6] = 0;
  param_1[0x8a7] = 0;
  param_1[0x892] = 0;
  param_1[0x8b1] = 0;
  param_1[0x8b2] = 0;
  param_1[0x8b6] = 0;
  param_1[0x88f] = 0;
  param_1[0x497] = 0;
  param_1[0x498] = 0;
  param_1[0x8b7] = 0;
  param_1[0x8e2] = 0;
  param_1[0x896] = 0;
  param_1[0x8dd] = 0;
  if ((param_1[0x12a] & 0x100U) != 0) {
    param_1[0x8dd] = 1;
  }
  param_1[0x8bb] = 0;
  param_1[0x8c4] = 0;
  param_1[0x8c5] = 0;
  param_1[0x8de] = 0;
  param_1[0x8df] = 0;
  param_1[0x446] = 0;
  param_1[0x8ae] = 0;
  param_1[0x448] = 0;
  param_1[0x449] = 0;
  piStack_284 = &DAT_01b7bd48;
  param_1[0x44a] = 0;
  piStack_288 = (int *)0x10;
  param_1[0x44c] = 0;
  param_1[0x44d] = 0;
  param_1[0x44e] = 0;
  param_1[0x450] = 0;
  param_1[0x451] = 0;
  param_1[0x452] = 0;
  param_1[0x458] = param_1[0x14];
  param_1[0x459] = param_1[0x15];
  param_1[0x45a] = param_1[0x16];
  param_1[0x45b] = param_1[0x17];
  local_28c = (int *)0x48f62d;
  FUN_0047f5c0();
  param_1[0x484] = 0;
  param_1[0x45d] = 0;
  param_1[0x466] = 0;
  param_1[0x48c] = 0;
  *(undefined1 *)((int)param_1 + 0x11a5) = 0;
  param_1[0x48d] = 0;
  param_1[0x485] = 0x3e3851ec;
  param_1[0x48a] = 0x3c0a9bd0;
  param_1[0x48b] = -0x446c8b43;
  param_1[0x488] = 0x3b9374bd;
  param_1[0x489] = 0x3bebedfb;
  param_1[0x486] = 0x3e99999a;
  param_1[0x490] = 0;
  param_1[0x491] = 0;
  param_1[0x492] = 0;
  piStack_284 = (int *)param_1[0x13c];
  param_1[0x48e] = 0;
  param_1[0x8d8] = 0;
  param_1[0x84a] = 0;
  param_1[0x8b0] = 0;
  *(undefined2 *)(param_1 + 0x8d7) = 0;
  param_1[0x8d9] = 0;
  param_1[0x8ba] = 0;
  param_1[0x8b9] = 1;
  piStack_288 = (int *)0x48f6f3;
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
  local_29c = (uint *)0x48f770;
  local_298 = (int *)FUN_00a12210();
  local_29c = (uint *)0x48f77c;
  FUN_00a889e0();
  piStack_284 = (int *)0x1;
  piStack_288 = local_224 + 6;
  local_28c = (int *)0xbf000000;
  local_290 = (int *)0x3f000000;
  local_294 = (undefined4 *)0x3fb33333;
  local_298 = (int *)0x23;
  local_29c = (uint *)0x48f7ac;
  local_298 = (int *)FUN_00a12210();
  local_29c = (uint *)0x48f7b8;
  FUN_00a889e0();
  piStack_284 = (int *)0x1;
  piStack_288 = local_224 + 6;
  local_28c = (int *)0xbf000000;
  local_290 = (int *)0x3f000000;
  local_294 = (undefined4 *)0x3fb33333;
  local_298 = (int *)0x2d;
  local_29c = (uint *)0x48f7e8;
  local_298 = (int *)FUN_00a12210();
  local_29c = (uint *)0x48f7f4;
  FUN_00a889e0();
  piStack_284 = (int *)0x48f800;
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
  uStack_2a8 = 0x48f849;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x48f85b;
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
  uStack_2a8 = 0x48f8a0;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x48f8b2;
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
  uStack_2a8 = 0x48f8f7;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x48f909;
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
  uStack_2a8 = 0x48f94e;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x48f960;
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
  uStack_2a8 = 0x48f9a7;
  FUN_00c151f0();
  piStack_284 = (int *)local_150;
  piStack_288 = (int *)0x48f9b9;
  FUN_00c57830();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x1;
  piStack_288 = (int *)0x0;
  local_290 = (int *)0x48f9cd;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x1;
  local_290 = (int *)0x48f9e1;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x2;
  local_290 = (int *)0x48f9f5;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x3;
  local_290 = (int *)0x48fa09;
  FUN_00c4d210();
  local_28c = (int *)param_1[0x13c];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x4;
  local_290 = (int *)0x48fa1d;
  FUN_00c4d210();
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x19;
  local_28c = (int *)0x78;
  local_290 = (int *)0x41a00000;
  local_294 = (undefined4 *)0x41a00000;
  local_298 = (int *)0x40333333;
  local_29c = (uint *)0x40b66666;
  piStack_2a4 = (int *)0x48fa4c;
  piStack_2a0 = param_1;
  iVar3 = FUN_008ec660();
  param_1[0x1d9] = iVar3;
  piStack_284 = (int *)0x48fa5c;
  FUN_008e6d00();
  piStack_284 = (int *)0x400000;
  piStack_288 = (int *)0x48fa6c;
  FUN_008e6fe0();
  piStack_284 = (int *)0x400000;
  piStack_288 = (int *)0x48fa7c;
  FUN_008e7400();
  piStack_284 = (int *)0x48fa87;
  FUN_008e1c70();
  piStack_284 = (int *)0x20;
  piStack_288 = (int *)0x48fa94;
  FUN_008e5610();
  piStack_284 = (int *)0x40;
  piStack_288 = (int *)0x48faa1;
  FUN_008e5610();
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x163c454;
  local_28c = (int *)0x0;
  local_290 = (int *)0x48fab3;
  local_268 = (int *)FUN_00de3850();
  piStack_284 = &DAT_01b7bd48;
  piStack_288 = (int *)0x3c;
  local_28c = (int *)0x48fac3;
  iVar3 = FUN_00dd3500();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    piStack_284 = (int *)0x48fad1;
    iVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar3;
  if (iVar3 != 0) {
    local_244 = param_1[0x13c];
    piStack_284 = local_268;
    piStack_288 = (int *)0x48fafd;
    piStack_284 = (int *)FUN_00de3ee0();
    piStack_288 = local_268;
    local_28c = (int *)0x48fb0e;
    piStack_288 = (int *)FUN_00de3cf0();
    local_28c = (int *)local_244;
    local_290 = (int *)0x48fb1f;
    iVar3 = FUN_008f6410();
    if (iVar3 != 0) {
      piStack_284 = (int *)0x0;
      piStack_288 = (int *)0x48fb2f;
      FUN_008f2cd0();
      piStack_284 = (int *)0x8;
      piStack_288 = (int *)0x48fb41;
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))();
      piStack_288 = (int *)0x48fb48;
      puVar5 = (undefined4 *)FUN_009f8b60();
      piStack_288 = (int *)*puVar5;
      local_28c = (int *)0x48fb5b;
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))();
      piStack_284 = (int *)0x80000000;
      piStack_288 = (int *)0x48fb6b;
      FUN_008f1600();
      piStack_284 = (int *)0x20;
      piStack_288 = (int *)0x48fb78;
      FUN_008f1600();
      piStack_284 = (int *)0x40;
      piStack_288 = (int *)0x48fb85;
      FUN_008f1600();
    }
  }
  piStack_284 = (int *)0x163e164;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x48fb92;
  FUN_00a8c420();
  piStack_284 = (int *)0x163e16c;
  piStack_288 = (int *)0x1;
  local_28c = (int *)0x48fba0;
  FUN_00a8c420();
  piStack_284 = (int *)0x163e15c;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x48fbad;
  FUN_00a8c420();
  piStack_284 = (int *)0x163e174;
  piStack_288 = (int *)0x0;
  local_28c = (int *)0x48fbba;
  FUN_00a8c420();
  piStack_284 = (int *)0x40;
  piStack_288 = (int *)0x48fbc3;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2();
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    piStack_284 = (int *)0x48fbd8;
    iVar3 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
    if (iVar3 != 0) {
      piStack_288 = (int *)param_1[0x1ec];
      piStack_284 = (int *)0x2;
      local_28c = (int *)0x48fbf0;
      Behavior::addDefenseCollisionFromRigidBody_2();
      piStack_284 = (int *)0x10000;
      piStack_288 = (int *)0x48fc00;
      FUN_008f18c0();
      piStack_284 = (int *)0x163e174;
      piStack_288 = (int *)0x9;
      local_28c = (int *)0x48fc0e;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x9;
      piStack_288 = (int *)0x48fc17;
      FUN_00a938c0();
      piStack_284 = (int *)0x163e350;
      piStack_288 = (int *)0x4;
      local_28c = (int *)0x48fc25;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e348;
      piStack_288 = (int *)0x0;
      local_28c = (int *)0x48fc32;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e340;
      piStack_288 = (int *)0x0;
      local_28c = (int *)0x48fc3f;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)&DAT_0163e338;
      piStack_288 = (int *)0x3;
      local_28c = (int *)0x48fc4d;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e330;
      piStack_288 = (int *)0x2;
      local_28c = (int *)0x48fc5b;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e328;
      piStack_288 = (int *)0x1;
      local_28c = (int *)0x48fc69;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e320;
      piStack_288 = (int *)0x5;
      local_28c = (int *)0x48fc77;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e318;
      piStack_288 = (int *)0x5;
      local_28c = (int *)0x48fc85;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e310;
      piStack_288 = (int *)0x5;
      local_28c = (int *)0x48fc93;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e308;
      piStack_288 = (int *)0x6;
      local_28c = (int *)0x48fca1;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e300;
      piStack_288 = (int *)0x6;
      local_28c = (int *)0x48fcaf;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2f8;
      piStack_288 = (int *)0x7;
      local_28c = (int *)0x48fcbd;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2f0;
      piStack_288 = (int *)0x7;
      local_28c = (int *)0x48fccb;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2e8;
      piStack_288 = (int *)0x7;
      local_28c = (int *)0x48fcd9;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2e0;
      piStack_288 = (int *)0x8;
      local_28c = (int *)0x48fce7;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2d8;
      piStack_288 = (int *)0x8;
      local_28c = (int *)0x48fcf5;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e16c;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x48fd03;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e164;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x48fd11;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2d0;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x48fd1f;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e2c8;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x48fd2d;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)&DAT_0163e2c0;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x48fd3b;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x163e15c;
      piStack_288 = (int *)0xa;
      local_28c = (int *)0x48fd49;
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
      piStack_284 = (int *)0x1;
      piStack_288 = (int *)0x48fd52;
      FUN_00a93730();
      piStack_284 = (int *)0xa;
      piStack_288 = (int *)0x48fd5b;
      FUN_00a938c0();
    }
  }
  param_1[0x408] = 0;
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  param_1[0x40b] = local_224[0];
  local_224[9] = param_1[0x10];
  local_224[10] = param_1[0x11];
  iStack_1f8 = param_1[0x12];
  iStack_1f4 = param_1[0x13];
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x48fdaa;
  iVar3 = (**(code **)(*param_1 + 0x84))();
  piStack_288 = *(int **)(iVar3 + 4);
  local_290 = local_224 + 9;
  local_294 = (undefined4 *)0x48fdc1;
  local_28c = param_1 + 0x408;
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
  piStack_284 = (int *)0x48fe1a;
  FUN_0118f7b0();
  uStack_50 = 0;
  piStack_284 = (int *)0x48fe2a;
  iVar3 = FUN_009f8b40();
  auStack_e0[0] = iVar3 << 0x10 | 7;
  piStack_284 = (int *)0x48fe3c;
  piVar6 = (int *)FUN_00910da0();
  piStack_284 = (int *)0x1;
  piStack_288 = (int *)0x3fc00000;
  local_28c = &uStack_1e0;
  local_290 = &uStack_1c0;
  local_294 = &uStack_1d0;
  local_298 = local_224 + 9;
  local_29c = auStack_e0;
  piStack_2a0 = aiStack_274 + 3;
  piStack_2a4 = (int *)0x48fe7e;
  piStack_2a4 = (int *)(**(code **)(*piVar6 + 0xc))();
  uStack_2a8 = 0x48fe8a;
  FUN_00910ab0();
  if (param_1[0x406] != 0) {
    piStack_2a4 = (int *)0x48fe9d;
    FUN_00916260();
    iStack_2ac = param_1[0x406];
    piStack_2a4 = (int *)0x1;
    uStack_2a8 = 0x40;
    iStack_2b0 = 0x48fead;
    FUN_008f9610();
    puStack_2b8 = (undefined4 *)param_1[0x406];
    iStack_2b0 = 1;
    piStack_2b4 = (int *)0x20;
    puStack_2bc = (undefined1 *)0x48febd;
    FUN_008f9610();
    puStack_2bc = (undefined1 *)param_1[0x13c];
    piStack_2c0 = (int *)param_1[0x406];
    iStack_2c4 = 0x48fed0;
    FUN_008f7f00();
  }
  piStack_2a4 = (int *)0x48fedc;
  FUN_004066f0();
  aiStack_274[0] = param_1[0x17];
  uStack_250 = 0;
  uStack_24c = 0x40200000;
  uStack_248 = 0;
  local_260[0] = 0;
  local_260[1] = 0x3e99999a;
  local_260[2] = 0;
  param_1[0x487] = 0x3d23d70a;
  if (param_1[0x8b3] == 0) {
    param_1[0x487] = 0x3d75c28f;
  }
  piStack_2a4 = (int *)0x48ff43;
  piStack_288 = (int *)FUN_00900480();
  iVar3 = *piStack_288;
  piStack_2a4 = (int *)0x0;
  uStack_2a8 = 0x48ff51;
  uStack_2a8 = FUN_009f8b40();
  iStack_2ac = 5;
  iStack_2b0 = 0x40900000;
  piStack_2b4 = aiStack_274 + 5;
  puStack_2b8 = &uStack_250;
  puStack_2bc = &stack0xfffffd80;
  piStack_2c0 = (int *)0x48ff76;
  iVar3 = (**(code **)(iVar3 + 0xc))();
  piStack_2c0 = (int *)param_1[0x13c];
  uStack_2c8 = 0x48ff85;
  iStack_2c4 = iVar3;
  FUN_008f7f00();
  piStack_2c0 = (int *)0x48ff91;
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_0048ffde;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_0048ffde:
      piVar6 = (int *)(iVar7 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        piStack_2c0 = (int *)0x490000;
        FUN_00dd7320();
      }
    }
  }
  piStack_2c0 = (int *)0x490009;
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_00490059;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 4;
    puVar8[4] = puVar8[4] | 0x400000;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00490059:
      piVar6 = (int *)(iVar7 + 4);
      *piVar6 = *piVar6 + -1;
      if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        piStack_2c0 = (int *)0x49007b;
        FUN_00dd7320();
      }
    }
  }
  iStack_2c4 = 0x490087;
  piStack_2c0 = (int *)iVar3;
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>();
  piStack_2c0 = (int *)0x163e2b4;
  iStack_2c4 = 0x490097;
  FUN_009009c0();
  piStack_2c0 = (int *)0x4900a2;
  FUN_00900bd0();
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      piStack_2c0 = (int *)0x4900dc;
      FUN_00dd7320();
    }
  }
  piStack_2c0 = (int *)0x4900e5;
  FUN_004066f0();
  local_29c = (uint *)param_1[0x14];
  local_298 = (int *)param_1[0x15];
  local_294 = (undefined4 *)param_1[0x16];
  local_290 = (int *)param_1[0x17];
  aiStack_274[0] = 0;
  aiStack_274[2] = 0;
  local_268 = (int *)0x3e99999a;
  local_264 = 0;
  piStack_2c0 = (int *)0x49012c;
  piStack_2a4 = (int *)FUN_00900480();
  iVar3 = *piStack_2a4;
  piStack_2c0 = (int *)0x0;
  iStack_2c4 = 0x49013a;
  iStack_2c4 = FUN_009f8b40();
  uStack_2c8 = 0x10;
  uStack_2cc = 0x40800000;
  piStack_2d0 = aiStack_274 + 2;
  puStack_2d4 = &stack0xfffffd84;
  ppuStack_2d8 = &local_29c;
  pcStack_2dc = (char *)0x49015f;
  uStack_2e0 = (**(code **)(iVar3 + 0xc))();
  pcStack_2dc = (char *)param_1[0x13c];
  fStack_2e4 = 6.704507e-39;
  piStack_2c0 = (int *)uStack_2e0;
  FUN_008f7f00();
  pcStack_2dc = (char *)piStack_2c0;
  uStack_2e0 = 0x490183;
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>();
  pcStack_2dc = "HoverCheck";
  uStack_2e0 = 0x490193;
  FUN_009009c0();
  pcStack_2dc = (char *)0x49019e;
  FUN_00900bd0();
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      pcStack_2dc = (char *)0x4901d8;
      FUN_00dd7320();
    }
  }
  pcStack_2dc = (char *)0x4901e1;
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
  pcStack_2dc = (char *)0x490228;
  piStack_2c0 = (int *)FUN_00900480();
  iVar3 = *piStack_2c0;
  pcStack_2dc = (char *)0x0;
  uStack_2e0 = 0x490236;
  uStack_2e0 = FUN_009f8b40();
  fStack_2e4 = 2.10195e-44;
  iVar3 = (**(code **)(iVar3 + 0xc))(&puStack_2b8,&local_298,&piStack_288,0x40800000);
  ppuStack_2d8 = (uint **)iVar3;
  FUN_008f7f00(iVar3,param_1[0x13c]);
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_004902c7;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_004902c7:
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
      goto LAB_00490342;
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 4;
    puVar8[4] = puVar8[4] | 0x400000;
    if (DAT_01885d68 != 1) {
      iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00490342:
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
  if (param_1[300] == 0x20081) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20081,0x20080);
  }
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
  (**(code **)(*param_1 + 0x358))(0,param_1 + 0x740);
  (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x798);
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
  param_1[0x37e] = 0;
  param_1[0x380] = 0;
  param_1[0x6e1] = 0;
  param_1[0x442] = 0;
  piVar6 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar6);
  param_1[0x848] = 1;
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  param_1[0x840] = 0;
  param_1[0x841] = 0x3fc00000;
  param_1[0x842] = 0x41000000;
  param_1[0x843] = iStack_228;
  *(undefined1 *)(param_1 + 0x82c) = 0;
  param_1[0x844] = 0x41680000;
  param_1[0x83e] = 0x41000000;
  param_1[0x83f] = 0x42c80000;
  sVar2 = FUN_00dde2d0(0,1);
  if (sVar2 != 0) {
    *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) | 1;
  }
  *(undefined1 *)(param_1 + 0x82e) = 0xff;
  param_1[0x84b] = 0;
  *(undefined2 *)(param_1 + 0x84c) = 0;
  FUN_00a82790(param_1[0x13c],0x36,0);
  param_1[0x7f0] = param_1[0x7f0] | 2;
  FUN_00a82870(0x404a2dcf,0xc04a2dcf,0x3dcccccd,0x3ae4c388,0x3d0efa35);
  iVar3 = 0;
  do {
    uVar9 = FUN_00a7c7f0();
    uVar4 = extraout_ECX;
    FUN_00a7c940(uVar9);
    FUN_00485210(iVar3,uVar4);
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
  param_1[0x370] = 0;
  uVar4 = 5;
  switch(param_1[0x128]) {
  case 1:
    uVar4 = 9;
    FUN_0047e3b0(0x20002,0,0,0,0);
    FUN_00a8c420(1,"_yama");
    *(undefined2 *)(param_1 + 0x82e) = 0;
    *(undefined1 *)(param_1 + 0x82c) = 0;
    iVar3 = FUN_00d46690(1);
    if (iVar3 != 0) {
      FUN_0047e3b0(0x20003,0,0,0,0);
      FUN_0047e3b0(0x2000b,0,0,0,0);
      FUN_00a5dcc0(iVar3);
      param_1[0x6e0] = 0;
      FUN_00a581b0(&iStack_2c4,0,0);
      param_1[0x14] = iStack_2c4;
      param_1[0x16] = (int)puStack_2bc;
      FUN_00a585a0(&fStack_2e4,0,param_1[0x6e0]);
      fVar10 = (float10)fpatan((float10)fStack_2e4,(float10)(float)pcStack_2dc);
      FUN_00ddba30((float)(fVar10 + (float10)3.2288592));
    }
    break;
  case 2:
    uVar9 = 0x10001;
    goto LAB_00490d1a;
  case 3:
    if ((*(byte *)(param_1 + 0x82c) & 4) == 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar9);
      *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) | 4;
      *(undefined1 *)(param_1 + 0x82e) = 0xff;
    }
    FUN_004846e0();
    (**(code **)(*param_1 + 0x358))(0x192,0);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
    param_1[0x894] = 1;
    *(byte *)((int)param_1 + 0xde9) = *(byte *)((int)param_1 + 0xde9) | 4;
    FUN_00c4d210(param_1[0x13c],2,0);
    FUN_0047e3b0(0x1000f,0,0,0,0);
    FUN_0047e3b0(0x60002,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 4:
    FUN_004846e0();
    (**(code **)(*param_1 + 0x358))(0x192,0);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 4;
    FUN_00ac8d80(3,1);
    FUN_00ac9420("_EFD05");
    (**(code **)(*param_1 + 0x358))(0x193,0);
    *(byte *)(param_1 + 0x37a) = *(byte *)(param_1 + 0x37a) | 2;
    FUN_00ac8d80(1,1);
    FUN_00ac9420("_EFD06");
    FUN_0047e3b0(0x70004,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 5:
    FUN_004846e0();
    FUN_0047e3b0(0x10014,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 6:
    FUN_004846e0();
    FUN_0047e3b0(0x10015,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 7:
    uVar4 = 9;
    FUN_0047e3b0(0x20012,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    break;
  case 8:
    uVar4 = 9;
    FUN_0047e3b0(0x20012,0,0,0,0);
    FUN_00a8c420(0,"_kabe");
    FUN_00a8c420(0,"_yama");
    FUN_00a8c420(0,"_taiki");
    param_1[0x8ac] = 1;
    FUN_00a88b50(1,0);
    break;
  default:
    FUN_004846e0();
    param_1[0x495] = 0x44610000;
    FUN_0047e3b0(0x10004,0,0,0,0);
    if (param_1[0x8b3] == 0) {
      FUN_0047e3b0(0x50002,0,0,0,0);
      param_1[0x8b7] = 1;
    }
    if (param_1[299] == 1) {
      param_1[0x446] = 0;
      FUN_0047e3b0(0x10002,0,0,0,0);
    }
    if ((*(byte *)(param_1 + 0x12a) & 0x10) == 0) break;
    param_1[0x446] = 1;
    uVar9 = 0x1000d;
LAB_00490d1a:
    FUN_0047e3b0(uVar9,0,0,0,0);
  }
  FUN_00aa4080(uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a92f90();
  FUN_00e3f050();
  switchD_0080dbae::default();
  aiStack_274[0] = 0;
  aiStack_274[1] = 0;
  aiStack_274[2] = 0x43480000;
  D3DXVec3TransformNormal(param_1 + 0x89c,aiStack_274,param_1 + 4);
  param_1[0x89c] = (int)((float)param_1[0x89c] + (float)param_1[0x10]);
  param_1[0x89d] = (int)((float)param_1[0x11] + (float)param_1[0x89d]);
  param_1[0x89e] = (int)((float)param_1[0x12] + (float)param_1[0x89e]);
  D3DXVec3TransformNormal(param_1 + 0x8a0,&stack0xfffffd80,param_1 + 4);
  param_1[0x8a0] = (int)((float)param_1[0x10] + (float)param_1[0x8a0]);
  param_1[0x8a1] = (int)((float)param_1[0x11] + (float)param_1[0x8a1]);
  param_1[0x8a2] = (int)((float)param_1[0x12] + (float)param_1[0x8a2]);
  if (((*(byte *)(param_1 + 0x12a) & 4) != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e59c0(2);
    FUN_008e5c50(7);
  }
  if ((*(byte *)(param_1 + 0x12a) & 8) != 0) {
    (**(code **)(*param_1 + 0x358))(0x208,0);
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x8e0] = 0x42700000;
  }
  param_1[0x36a] = 1;
  param_1[0x36c] = 0;
  return;
}

// 00490EB0  Em0080::vf48  size=1573  [class]
void __fastcall Em0080::vf48(int *param_1)

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
  
  pfStack_64 = (float *)0x490ec3;
  BehaviorEmBase::vf48();
  if (((0 < param_1[0x21c]) && (param_1[0x8b3] == 0)) &&
     ((iVar2 = param_1[0x128], iVar2 == 0 || ((iVar2 == 3 || (iVar2 == 4)))))) {
    DAT_018b4414 = param_1[0x12d];
    DAT_01dc08e0 = 0;
    DAT_01dc08e8 = param_1[0x21d];
    DAT_01dc08e4 = param_1[0x21c];
    DAT_01dc08ec = 1;
    DAT_01dc08dc = iVar2;
  }
  pfStack_64 = (float *)0x490f30;
  iVar2 = FUN_00ac45b0();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    pfStack_64 = (float *)0x490f3b;
    FUN_00ac45b0();
    pfStack_64 = (float *)0x490f42;
    piVar3 = (int *)FUN_00a7c8a0();
  }
  pfStack_64 = &local_40;
  uStack_68 = 0x490f53;
  (**(code **)(*piVar3 + 0x204))();
  fStack_54 = (float)param_1[0x10];
  fStack_4c = (float)param_1[0x12];
  fStack_48 = (float)param_1[0x13];
  if (param_1[0x370] == 0) {
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
  uStack_68 = 0x490fba;
  iVar2 = FUN_00ac45b0();
  uStack_68 = 0;
  if (iVar2 != 0) {
    uStack_68 = 0x490fc5;
    FUN_00ac45b0();
    uStack_68 = 0x490fcc;
    uStack_68 = FUN_00a7c8a0();
  }
  iVar2 = (**(code **)(*param_1 + 0x284))(&fStack_44,&fStack_54,&fStack_34);
  fVar1 = (float)param_1[0x8b8];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    iVar2 = 1;
    param_1[0x8b8] = (int)((float)param_1[0x8b8] - (float)param_1[0x244]);
  }
  if (((*(byte *)(param_1 + 0x12a) & 0x10) == 0) && (iVar2 != 0)) {
    fVar1 = (float)param_1[0x898];
    param_1[0x897] = 0;
    param_1[0x898] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x896] = 0;
    }
  }
  else {
    param_1[0x897] = 1;
    param_1[0x898] = 0x42700000;
    param_1[0x896] = 1;
    iVar2 = FUN_00ac45b0();
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      FUN_00ac45b0();
      piVar3 = (int *)FUN_00a7c8a0();
    }
    piVar3 = (int *)(**(code **)(*piVar3 + 0x204))(&fStack_34);
    param_1[0x89c] = *piVar3;
    param_1[0x89d] = piVar3[1];
    param_1[0x89e] = piVar3[2];
    param_1[0x89f] = piVar3[3];
    iVar4 = FUN_00ac45b0();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_00ac45b0();
      iVar2 = FUN_00a7c8a0();
    }
    param_1[0x8a0] = *(int *)(iVar2 + 0x40);
    param_1[0x8a1] = *(int *)(iVar2 + 0x44);
    param_1[0x8a2] = *(int *)(iVar2 + 0x48);
    param_1[0x8a3] = *(int *)(iVar2 + 0x4c);
    param_1[0x8a1] = (int)((float)param_1[0x8a1] + 1.5);
  }
  FUN_0048c260();
  FUN_00a89560();
  iVar2 = FUN_00ac48f0(0);
  fVar1 = (float)param_1[0x40c];
  param_1[0x8b5] = iVar2;
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x40c] = (int)((float)param_1[0x40c] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x40d] != ((float)param_1[0x40d] == 0.0)) {
    param_1[0x40d] = (int)((float)param_1[0x40d] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x495] != ((float)param_1[0x495] == 0.0)) {
    param_1[0x495] = (int)((float)param_1[0x495] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x496] != ((float)param_1[0x496] == 0.0)) {
    param_1[0x496] = (int)((float)param_1[0x496] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x8ab] != ((float)param_1[0x8ab] == 0.0)) {
    param_1[0x8ab] = (int)((float)param_1[0x8ab] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x893] != ((float)param_1[0x893] == 0.0)) {
    param_1[0x893] = (int)((float)param_1[0x893] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x8d6] != ((float)param_1[0x8d6] == 0.0)) {
    param_1[0x8d6] = (int)((float)param_1[0x8d6] - (float)param_1[0x244]);
  }
  if ((param_1[0x8e1] != 0) &&
     (fVar1 = (float)param_1[0x8e0], param_1[0x8e0] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  if (0.0 < (float)param_1[0x8a9] == ((float)param_1[0x8a9] == 0.0)) {
    param_1[0x8aa] = 0;
  }
  else {
    param_1[0x8a9] = (int)((float)param_1[0x8a9] - (float)param_1[0x244]);
  }
  param_1[0x8de] = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x1d8))();
  if ((iVar2 == 0) &&
     ((float)param_1[0x11] + 2.5 < *(float *)(param_1[0x2a1] + 0x44) !=
      ((float)param_1[0x11] + 2.5 == *(float *)(param_1[0x2a1] + 0x44)))) {
    param_1[0x8de] = 1;
  }
  if ((float)param_1[0x11] + 3.5 < *(float *)(param_1[0x2a1] + 0x44) !=
      ((float)param_1[0x11] + 3.5 == *(float *)(param_1[0x2a1] + 0x44))) {
    param_1[0x8de] = 1;
  }
  if (param_1[0x8de] == 0) {
    param_1[0x8df] = 0;
  }
  else {
    param_1[0x8df] = param_1[0x8df] + 1;
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
    if ((*(byte *)(param_1 + 0x8b0) & 1) != 0) {
      FUN_00a8c420(1,"_shldR");
      FUN_00a8c420(1,"_armR");
      FUN_00a8c420(1,"_shldL");
      FUN_00a8c420(1,"_armL");
    }
    param_1[0x8b0] = param_1[0x8b0] & 0xfffffffe;
  }
  else {
    if ((*(byte *)(param_1 + 0x8b0) & 1) == 0) {
      FUN_00a8c420(0,"_shldR");
      FUN_00a8c420(0,"_armR");
      FUN_00a8c420(0,"_shldL");
      FUN_00a8c420(0,"_armL");
    }
    param_1[0x8b0] = param_1[0x8b0] | 1;
  }
  iVar2 = FUN_00a8c760(0x32);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x8b0) & 2) != 0) {
      FUN_00a8c420(1,"_head");
      FUN_00a8c420(1,&DAT_0163e338);
    }
    param_1[0x8b0] = param_1[0x8b0] & 0xfffffffd;
  }
  else {
    if ((*(byte *)(param_1 + 0x8b0) & 2) == 0) {
      FUN_00a8c420(0,"_head");
      FUN_00a8c420(0,&DAT_0163e338);
    }
    param_1[0x8b0] = param_1[0x8b0] | 2;
  }
  iVar2 = FUN_00a8c760(0x33);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x8b0) & 4) != 0) {
      FUN_00a8c420(1,"_foot");
    }
    param_1[0x8b0] = param_1[0x8b0] & 0xfffffffb;
  }
  else {
    if ((*(byte *)(param_1 + 0x8b0) & 4) == 0) {
      FUN_00a8c420(0,"_foot");
    }
    param_1[0x8b0] = param_1[0x8b0] | 4;
  }
  piVar3 = *(int **)(param_1[399] + 4);
  if (piVar3 != piVar3 + *(int *)(param_1[399] + 8) * 0x10) {
    do {
      if (*piVar3 == 0x12) {
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
        }
        (**(code **)(*param_1 + 0x314))();
        FUN_0047e3b0(0x20001,0,0,0,0);
      }
      piVar3 = piVar3 + 0x10;
    } while (piVar3 != (int *)(*(int *)(param_1[399] + 8) * 0x40 + *(int *)(param_1[399] + 4)));
  }
  if (*(int *)(param_1[399] + 4) != 0) {
    *(undefined4 *)(param_1[399] + 8) = 0;
  }
  return;
}

// 00491BA0  FUN_00491ba0  size=877  [callgraph]
void __fastcall FUN_00491ba0(int param_1)

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
    *(undefined4 *)(param_1 + 0xdf8) = 0x3d4ccccd;
    if ((*(byte *)(param_1 + 0x20b0) & 4) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar3);
      *(byte *)(param_1 + 0x20b0) = *(byte *)(param_1 + 0x20b0) | 4;
      *(undefined1 *)(param_1 + 0x20b8) = 0xff;
    }
    sVar1 = FUN_00dde2d0(0,2);
    *(undefined4 *)(param_1 + 0x1034) = 0x43340000;
    *(int *)(param_1 + 0x2290) = sVar1 + 3;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00491e1c;
  if (((*(int *)(param_1 + 0x2258) != 0) && (*(float *)(param_1 + 0xa90) < 400.0)) &&
     (*(float *)(param_1 + 0x1034) < 0.0)) {
    *(undefined4 *)(param_1 + 0x1034) = 0x43340000;
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
LAB_00491e1c:
  fVar4 = (float10)FUN_00a581b0(auStack_78,
                                *(float *)(param_1 + 0xdf8) + *(float *)(param_1 + 0x1b84),
                                *(undefined4 *)(param_1 + 0x1b80));
  *(float *)(param_1 + 0x1b80) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x50) = auStack_78[0];
  *(undefined4 *)(param_1 + 0x58) = uStack_70;
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1b84) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x1b84));
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

// 00491F10  FUN_00491f10  size=690  [callgraph]
void __fastcall FUN_00491f10(int *param_1)

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
    uVar2 = FUN_00e00b40(0x20080,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    FUN_0043f5b0(9,0x41200000);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ba],param_1[0x8b9]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x446] = 0;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x14;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    param_1[0x139] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(byte *)(param_1 + 0x82c) & 4) == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar2);
      *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) | 4;
      *(undefined1 *)(param_1 + 0x82e) = 0xff;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (param_1[0x436] != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,4,0x3f800000,0);
    piVar5 = param_1 + 0x410;
    uVar2 = FUN_00a7c8a0(piVar5);
    FUN_004117d0(5,uVar2,piVar5);
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x20080,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    FUN_00e5e0c0("em0080_se_dmg_explosion",param_1,0xffffffff,0);
    (**(code **)(*param_1 + 0x20))();
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
    if (param_1[0x406] != 0) {
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

// 004921D0  FUN_004921d0  size=702  [callgraph]
void __fastcall FUN_004921d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 local_160 [348];
  
  uVar3 = 0;
  if (param_1[0x894] == 0) {
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
    uVar2 = FUN_00e00b40(0x20080,puVar5);
    FUN_00a8c930(uVar2,puVar5);
    FUN_0043f5b0(9,0x41200000);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ba],param_1[0x8b9]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x446] = 0;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x14;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    param_1[0x139] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(byte *)(param_1 + 0x82c) & 4) == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar2);
      *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) | 4;
      *(undefined1 *)(param_1 + 0x82e) = 0xff;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (param_1[0x436] != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,4,0x3f800000,0);
    piVar6 = param_1 + 0x410;
    uVar2 = FUN_00a7c8a0(piVar6);
    FUN_004117d0(5,uVar2,piVar6);
    puVar5 = local_160;
    uVar2 = FUN_00e00b40(0x20080,puVar5);
    FUN_00a8c930(uVar2,puVar5);
    FUN_00e5e0c0("em0080_se_dmg_explosion",param_1,0xffffffff,0);
    (**(code **)(*param_1 + 0x20))();
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
    if (param_1[0x406] != 0) {
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

// 00492490  FUN_00492490  size=632  [callgraph]
void __fastcall FUN_00492490(int *param_1)

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
    uVar1 = FUN_00e00b40(0x20080,puVar4);
    FUN_00a8c930(uVar1,puVar4);
    FUN_0043f5b0(9,0x41200000);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(0xb,param_1[0x8ba],param_1[0x8b9]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x446] = 0;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x14;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(byte *)(param_1 + 0x82c) & 4) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_00a7c8a0();
      }
      FUN_00cbbb50(uVar1);
      *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) | 4;
      *(undefined1 *)(param_1 + 0x82e) = 0xff;
    }
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x436] != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00a8c9b0(0,4,0x3f800000,0);
  piVar5 = param_1 + 0x410;
  uVar1 = FUN_00a7c8a0(piVar5);
  FUN_004117d0(5,uVar1,piVar5);
  puVar4 = local_160;
  uVar1 = FUN_00e00b40(0x20080,puVar4);
  FUN_00a8c930(uVar1,puVar4);
  FUN_00e5e0c0("em0080_se_dmg_explosion",param_1,0xffffffff,0);
  (**(code **)(*param_1 + 0x20))();
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar2 != 0)) {
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
  }
  if (param_1[0x406] != 0) {
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

// 00492710  FUN_00492710  size=96  [callgraph]
void __thiscall FUN_00492710(int param_1,undefined4 param_2,undefined4 param_3)

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

// 00492770  FUN_00492770  size=8331  [callgraph]
void __thiscall FUN_00492770(int param_1,char param_2)

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
  *(undefined4 *)(param_1 + 0x11e4) = 0;
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
        FUN_0048e9f0(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_30 = 1;
        local_18 = 0;
        local_2c = 0x42f00000;
        if (sVar3 != 0) {
          local_28 = 6;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_24 = 0;
          local_2c = 0x43700000;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x41200000;
          local_24 = 0;
          local_28 = 2;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          *(undefined1 *)(param_1 + 0x11a5) = 2;
          return;
        }
        local_28 = 7;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_24 = 0;
        local_2c = 0x43700000;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_28 = 2;
        local_2c = 0x41200000;
LAB_00492b87:
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        *(undefined1 *)(param_1 + 0x11a5) = 2;
        return;
      }
      if (100.0 < *(float *)(param_1 + 0xa8c)) {
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (NAN(fVar1) || 196.0 < fVar1 == (fVar1 == 196.0)) goto LAB_004947e7;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42700000;
        local_24 = 0;
        local_28 = 2;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_30 = 3;
        local_18 = 0;
        local_2c = 0x42c80000;
        if (sVar3 == 0) {
          local_28 = 4;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43480000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42c80000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43480000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42c80000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_24 = 0;
          local_2c = 0x42a00000;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_2c = 0x43200000;
          local_28 = 4;
          goto LAB_00494271;
        }
        local_28 = 5;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
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
        FUN_0048e9f0(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_30 = 3;
        local_18 = 0;
        local_2c = 0x42f00000;
        if (sVar3 != 0) {
          local_28 = 5;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x43700000;
          local_24 = 0;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42f00000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_24 = 0;
          local_2c = 0x43700000;
          local_28 = 4;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_2c = 0x42a00000;
          local_24 = 0;
          local_28 = 5;
          local_30 = 3;
          FUN_0048e9f0(local_34,&local_30);
          local_28 = 4;
          local_2c = 0x43200000;
          goto LAB_00492b87;
        }
        local_28 = 4;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_2c = 0x42f00000;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 4;
      local_30 = 3;
      FUN_0048e9f0(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x42a00000;
      local_24 = 0;
      local_28 = 5;
      local_30 = 3;
      FUN_0048e9f0(local_34,&local_30);
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
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        local_2c = 0x42f00000;
        goto LAB_0049345f;
      }
      local_28 = 4;
      FUN_0048e9f0(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x43700000;
      local_24 = 0;
      local_28 = 5;
      local_30 = 1;
      FUN_0048e9f0(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x42f00000;
      local_24 = 0;
      local_28 = 6;
      local_30 = 1;
      FUN_0048e9f0(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x43700000;
      local_24 = 0;
      local_28 = 7;
      local_30 = 3;
      FUN_0048e9f0(local_34,&local_30);
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
      FUN_0048e9f0(local_34,&local_30);
      sVar3 = FUN_00dde2d0(0,1);
      local_20 = 0;
      local_24 = 0;
      local_1c = 0;
      local_18 = 0;
      if (sVar3 == 0) {
        local_2c = 0x42f00000;
        local_28 = 6;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 2;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_2c = 0x42a00000;
LAB_0049345f:
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_28 = 7;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_2c = 0x43700000;
        local_28 = 6;
      }
      else {
        local_2c = 0x43340000;
        local_28 = 2;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
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
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x69;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x2b;
        FUN_0048e9f0(local_34,&local_30);
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
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x69;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x69;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_24 = 0;
        local_2c = 0x41700000;
        local_28 = 7;
        local_30 = 0x6b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 0x2b;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x41700000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 0x2b;
        FUN_0048e9f0(local_34,&local_30);
      }
      local_28 = 6;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x41c80000;
      local_24 = 0;
      local_30 = 0x43;
      FUN_0048e9f0(local_34,&local_30);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0x41a00000;
      local_28 = 2;
      local_30 = 0x43;
      local_24 = 0;
      FUN_0048e9f0(local_34,&local_30);
      *(undefined1 *)(param_1 + 0x11a5) = 2;
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
      FUN_0048e9f0(local_34,&local_30);
      *(undefined1 *)(param_1 + 0x11a5) = 2;
      return;
    }
    if (param_2 != '\x03') {
LAB_004947e7:
      *(undefined1 *)(param_1 + 0x11a5) = 2;
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
        FUN_0048e9f0(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        if (sVar3 != 0) {
          FUN_0047c490(5,0x42f00000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(4,0x43700000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(5,0x42f00000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(4,0x43700000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(5,0x42f00000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(4,0x43700000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(5,0x42a00000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(4,0x43200000,3);
          FUN_0048e9f0(local_34,&local_30);
          *(undefined1 *)(param_1 + 0x11a5) = 2;
          return;
        }
        FUN_0047c490(4,0x42c80000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(5,0x43480000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(4,0x42c80000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(5,0x43480000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(4,0x42c80000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(5,0x42700000,3);
        FUN_0048e9f0(local_34,&local_30);
        uVar6 = 0x42700000;
        uVar5 = 4;
      }
      else {
        local_2c = 0x42200000;
        FUN_0048e9f0(local_34,&local_30);
        sVar3 = FUN_00dde2d0(0,1);
        if (sVar3 == 0) {
          FUN_0047c490(7,0x42f00000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(4,0x42a00000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(5,0x43480000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(4,0x42c80000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(5,0x43480000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(4,0x42c80000,3);
          FUN_0048e9f0(local_34,&local_30);
          FUN_0047c490(2,0x41200000,3);
          FUN_0048e9f0(local_34,&local_30);
          *(undefined1 *)(param_1 + 0x11a5) = 2;
          return;
        }
        FUN_0047c490(6,0x42f00000,1);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(5,0x43700000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(4,0x42f00000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(5,0x43700000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(4,0x42f00000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(5,0x43700000,3);
        FUN_0048e9f0(local_34,&local_30);
        FUN_0047c490(4,0x42f00000,3);
        FUN_0048e9f0(local_34,&local_30);
        uVar6 = 0x41200000;
        uVar5 = 2;
      }
      FUN_0047c490(uVar5,uVar6,3);
      goto LAB_00494281;
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_2c = 0x42a00000;
    if (900.0 < *(float *)(param_1 + 0xa8c)) {
      local_28 = 2;
      FUN_0048e9f0(local_34,&local_30);
      sVar3 = FUN_00dde2d0(0,1);
      local_20 = 0;
      local_24 = 0;
      local_1c = 0;
      local_30 = 3;
      local_18 = 0;
      if (sVar3 == 0) {
        local_2c = 0x42c80000;
        local_28 = 4;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43480000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_24 = 0;
        local_18 = 0;
        local_28 = 5;
        local_30 = 3;
        local_2c = 0x42700000;
        FUN_0048e9f0(local_34,&local_30);
        local_28 = 6;
        local_2c = 0x42700000;
      }
      else {
        local_2c = 0x42f00000;
        local_28 = 5;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42200000;
        local_24 = 0;
        local_28 = 6;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42200000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_24 = 0;
        local_18 = 0;
        local_28 = 4;
        local_30 = 3;
        local_2c = 0x43700000;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 7;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_2c = 0x43200000;
        local_28 = 4;
      }
    }
    else {
      local_28 = 3;
      FUN_0048e9f0(local_34,&local_30);
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
      FUN_0048e9f0(local_34,&local_30);
      sVar3 = FUN_00dde2d0(0,1);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_24 = 0;
      local_2c = 0x42f00000;
      if (sVar3 == 0) {
        local_28 = 7;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42c80000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42f00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_2c = 0x42480000;
      }
      else {
        local_28 = 6;
        local_30 = 1;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43700000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x43200000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42700000;
        local_24 = 0;
        local_28 = 4;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x42a00000;
        local_24 = 0;
        local_28 = 5;
        local_30 = 3;
        FUN_0048e9f0(local_34,&local_30);
        local_2c = 0x42700000;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 4;
      local_30 = 3;
      FUN_0048e9f0(local_34,&local_30);
      local_2c = 0x41200000;
      local_28 = 2;
    }
  }
LAB_00494271:
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = 3;
  local_24 = 0;
LAB_00494281:
  FUN_0048e9f0(local_34,&local_30);
  *(undefined1 *)(param_1 + 0x11a5) = 2;
  return;
}

// 00494800  FUN_00494800  size=129  [callgraph]
undefined4 __thiscall FUN_00494800(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x224c) < 0.0) && (*(int *)(param_1 + 0x2258) == 0)) {
    iVar1 = FUN_00a80b20(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),param_2,
                         param_3);
    if (iVar1 != 0) {
      FUN_00a7c8a0();
      iVar1 = FUN_0048de10();
      if (iVar1 != 0) {
        FUN_0047e3b0(0x50007,0,0,0,0);
        return 1;
      }
    }
  }
  return 0;
}

// 00494890  FUN_00494890  size=75  [callgraph]
void FUN_00494890(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_1,uVar1,uVar2);
  puVar3 = local_160;
  uVar1 = FUN_00e00b40(0x20080,puVar3);
  FUN_00a8c930(uVar1,puVar3);
  return;
}

// 00494920  FUN_00494920  size=450  [callgraph]
undefined4 __fastcall FUN_00494920(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined1 local_260 [148];
  int local_1cc;
  int local_160 [12];
  float local_130;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x51c);
  if (param_1[0x522] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar7 = param_1[0x19f];
  bVar3 = false;
  iVar5 = param_1[0x1a1] * 0x150 + iVar7;
  FUN_00445db0();
  FUN_004105d0();
  iVar4 = -1;
  bVar2 = false;
  if (iVar7 != iVar5) {
    do {
      iVar1 = *(int *)(iVar7 + 4);
      if (iVar4 <= iVar1) {
        FUN_00448f50(iVar7);
        bVar2 = true;
        iVar4 = iVar1;
      }
      iVar7 = iVar7 + 0x150;
    } while (iVar7 != iVar5);
    if (bVar2) {
      FUN_0043e160(local_160);
      if ((((local_160[0] == 0) || (local_160[0] == 1)) || (local_160[0] == 2)) ||
         ((local_160[0] == 0x1b0 || (local_160[0] == 0x147)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        iVar7 = FUN_00a81330();
        if (iVar7 != 0) {
          uVar8 = FUN_00a7c8a0();
        }
        uVar6 = 1;
        fVar9 = (float10)FUN_00ddba30(local_130 - (float)param_1[0x25]);
        param_1[0x245] = (int)(float)fVar9;
        iVar7 = FUN_00a98220(local_260);
        if ((iVar7 != 0) && (local_1cc != 0)) {
          uVar6 = 0x101;
          bVar3 = true;
        }
        (**(code **)(*param_1 + 0x198))(uVar8,local_160,uVar6);
        uVar8 = 1;
      }
      if ((local_1cc != 0) && (bVar3)) {
        FUN_00a8e5d0(param_1,local_260,0);
      }
      if (param_1[0x522] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return uVar8;
    }
  }
  if (param_1[0x522] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00494AF0  FUN_00494af0  size=1088  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00494c5e) */
/* WARNING: Removing unreachable block (ram,0x00494ddd) */

void FUN_00494af0(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar5;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar2 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar2);
  local_4c = *param_2;
  local_48 = param_2[1];
  local_44 = param_2[2];
  if (local_18 < local_1c) {
    pfVar5 = (float *)(local_20 + local_18 * 0xc);
    if (pfVar5 != (float *)0x0) {
      *pfVar5 = local_4c;
      pfVar5[1] = local_48;
      pfVar5[2] = local_44;
    }
    local_18 = local_18 + 1;
  }
  local_64 = *param_4;
  local_60 = param_4[1];
  local_5c = param_4[2];
  local_30 = local_64 - local_4c;
  local_2c = local_60 - local_48;
  local_28 = local_5c - local_44;
  local_74 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c) * 0.16666667;
  local_58 = *param_3;
  local_54 = param_3[1];
  local_50 = param_3[2];
  local_30 = local_30 * 0.16666667;
  local_2c = local_2c * 0.16666667;
  local_28 = local_28 * 0.16666667;
  local_40 = local_58 - local_30;
  local_3c = local_54 - local_2c;
  local_38 = local_50 - local_28;
  local_70 = local_40 - local_4c;
  local_6c = local_3c - local_48;
  local_68 = local_38 - local_44;
  fVar4 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_70 = 0.0;
    local_6c = 1.0;
    local_68 = 0.0;
  }
  pfVar5 = &local_70;
  D3DXVec3Normalize(pfVar5);
  iVar3 = local_20;
  if (local_20 < local_24) {
    pfVar1 = (float *)((int)local_28 + local_20 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fStack_78 * unaff_ESI + local_54;
      pfVar1[1] = local_74 * unaff_ESI + local_50;
      pfVar1[2] = local_70 * unaff_ESI + local_4c;
    }
    iVar3 = local_20 + 1;
    if (iVar3 < local_24) {
      pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_48;
        pfVar1[1] = local_44;
        pfVar1[2] = local_40;
      }
      iVar3 = local_20 + 2;
      if (iVar3 < local_24) {
        pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_60;
          pfVar1[1] = local_5c;
          pfVar1[2] = local_58;
        }
        iVar3 = local_20 + 3;
      }
    }
  }
  local_20 = iVar3;
  local_48 = *param_3 + local_38;
  local_44 = param_3[1] + fStack_34;
  local_40 = local_30 + param_3[2];
  fStack_78 = local_6c - local_48;
  local_74 = local_68 - local_44;
  local_70 = local_64 - local_40;
  fVar4 = local_70 * local_70 + local_74 * local_74 + fStack_78 * fStack_78;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_78 = 0.0;
    local_74 = 1.0;
    local_70 = 0.0;
  }
  D3DXVec3Normalize(&fStack_78,&fStack_78);
  fStack_78 = fStack_78 * (float)pfVar5;
  fVar4 = local_28;
  if ((int)local_28 < (int)local_2c) {
    pfVar1 = (float *)((int)local_30 + (int)local_28 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_50;
      pfVar1[1] = local_4c;
      pfVar1[2] = local_48;
    }
    fVar4 = (float)((int)local_28 + 1);
    if ((int)fVar4 < (int)local_2c) {
      pfVar1 = (float *)((int)local_30 + (int)fVar4 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_74 - unaff_EDI * (float)pfVar5;
        pfVar1[1] = local_70 - unaff_ESI * (float)pfVar5;
        pfVar1[2] = local_6c - fStack_78;
      }
      fVar4 = (float)((int)local_28 + 2);
      if ((int)fVar4 < (int)local_2c) {
        pfVar5 = (float *)((int)local_30 + (int)fVar4 * 0xc);
        if (pfVar5 == (float *)0x0) {
          fVar4 = (float)((int)local_28 + 3);
        }
        else {
          *pfVar5 = local_74;
          pfVar5[1] = local_70;
          pfVar5[2] = local_6c;
          fVar4 = (float)((int)local_28 + 3);
        }
      }
    }
  }
  local_28 = fVar4;
  FUN_00a5e090(&fStack_34);
  if ((local_30 != 0.0) && (local_28 = 0.0, local_24 != 0)) {
    FUN_00dd48d0(local_30,0);
  }
  return;
}

// 00494F30  FUN_00494f30  size=74  [callgraph]
void __thiscall FUN_00494f30(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00494F80  FUN_00494f80  size=157  [callgraph]
void __thiscall FUN_00494f80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (uVar2 == 0x7c0000) {
    uVar2 = 0;
  }
  else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(10,uVar1,uVar3);
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = param_2[3];
  FUN_00a8c930(uVar2,local_160);
  return;
}

// 00495020  FUN_00495020  size=934  [callgraph]
void __fastcall FUN_00495020(byte *param_1)

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
  if (((*(int *)(iVar7 + 0x2258) != 0) &&
      (fVar13 = *(float *)(iVar7 + 0x40) - *(float *)(iVar7 + 0x2270),
      fVar2 = *(float *)(iVar7 + 0x44) - *(float *)(iVar7 + 0x2274),
      fVar14 = *(float *)(iVar7 + 0x48) - *(float *)(iVar7 + 0x2278),
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
    if (*(int *)(iVar7 + 0xdc0) == 0) {
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
    iVar7 = FUN_0048e2c0(local_20,&local_40,&local_30);
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

// 004953E0  FUN_004953e0  size=528  [callgraph]
void __fastcall FUN_004953e0(int param_1)

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
  local_30 = *(float *)(iVar8 + 0x2270);
  local_2c = *(float *)(iVar8 + 0x2274);
  local_28 = *(float *)(iVar8 + 0x2278);
  local_24 = *(undefined4 *)(iVar8 + 0x227c);
  if (((*(int *)(iVar8 + 0x2258) == 0) ||
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
  if (*(int *)(iVar8 + 0xdc0) == 0) {
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
  iVar10 = FUN_0048e2c0(&local_20,&local_40,&local_20);
  if ((iVar10 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    *pfVar1 = fVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined2 *)(param_1 + 8) = 3;
    return;
  }
  if ((iVar9 != 0) && (*(int *)(iVar8 + 0x225c) != 0)) {
    *(undefined2 *)(param_1 + 8) = 2;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}

// 004955F0  FUN_004955f0  size=599  [callgraph]
void __fastcall FUN_004955f0(int param_1)

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
  local_40 = *(float *)(iVar4 + 0x2270);
  local_3c = *(float *)(iVar4 + 0x2274);
  local_38 = *(float *)(iVar4 + 0x2278);
  local_34 = *(float *)(iVar4 + 0x227c);
  if ((((*(int *)(iVar4 + 0x2258) == 0) ||
       ((fVar1 = *(float *)(iVar4 + 0x40) - local_40, fVar3 = *(float *)(iVar4 + 0x44) - local_3c,
        fVar2 = *(float *)(iVar4 + 0x48) - local_38,
        fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1),
        *(float *)(param_1 + 0x48) <= fVar1 && (fVar1 <= *(float *)(param_1 + 0x4c))))) &&
      (*(int *)(iVar4 + 0x225c) != 0)) && (*(int *)(iVar4 + 0x2258) != 0)) {
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
      FUN_004847b0();
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
    if (*(int *)(iVar4 + 0xdc0) == 0) {
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
    iVar4 = FUN_0048e2c0(&local_20,&local_40,&local_20);
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = local_30;
      *(undefined4 *)(param_1 + 0x14) = local_2c;
      *(undefined4 *)(param_1 + 0x18) = local_28;
      *(undefined4 *)(param_1 + 0x1c) = local_24;
      *(undefined2 *)(param_1 + 8) = 3;
      uVar6 = FUN_0047f340();
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

// 00495850  FUN_00495850  size=692  [callgraph]
void __fastcall FUN_00495850(int param_1)

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
  local_40 = *(float *)(iVar3 + 0x2270);
  local_3c = *(float *)(iVar3 + 0x2274);
  local_38 = *(float *)(iVar3 + 0x2278);
  local_34 = *(float *)(iVar3 + 0x227c);
  if ((*(int *)(iVar3 + 0x225c) == 0) || (*(int *)(iVar3 + 0x2258) == 0)) {
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
    uVar5 = FUN_0047f340();
    FUN_00cd53e0(uVar5);
    *(undefined4 *)(param_1 + 0x68) = 0;
  case '\x01':
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x10) = local_40;
    *(float *)(param_1 + 0x14) = local_3c;
    *(float *)(param_1 + 0x18) = local_38;
    *(float *)(param_1 + 0x1c) = local_34;
    iVar4 = FUN_0047f340();
    local_40 = *(float *)(iVar4 + 0x40);
    local_38 = *(float *)(iVar4 + 0x48);
    local_34 = *(float *)(iVar4 + 0x4c);
    if (*(int *)(iVar3 + 0xdc0) == 0) {
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
    iVar3 = FUN_0048e2c0(&local_20,&local_40,&local_20);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = local_30;
      *(undefined4 *)(param_1 + 0x14) = local_2c;
      *(undefined4 *)(param_1 + 0x18) = local_28;
      *(undefined4 *)(param_1 + 0x1c) = local_24;
      *(undefined2 *)(param_1 + 8) = 0xff;
      uVar5 = FUN_0047f340();
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
    FUN_004847b0();
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
    uVar5 = FUN_0047f340();
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

// 00495B50  FUN_00495b50  size=512  [callgraph]
void __fastcall FUN_00495b50(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  float fVar1;
  int iVar2;
  
  if ((param_1[0x187] != 0) && (iVar2 = FUN_00483e70(), iVar2 == 0)) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      iVar2 = FUN_00494800(0x3f860a92,0x41000000);
      if (iVar2 == 0) {
        if (((float)param_1[0x495] < 0.0) && (param_1[0x8ac] != 0)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x446] = 1;
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        if (param_1[0x896] == 0) {
          fVar1 = (float)param_1[0x244] + (float)param_1[0x248];
        }
        else {
          fVar1 = 0.0;
        }
        param_1[0x248] = (int)fVar1;
        if (180.0 < (float)param_1[0x248]) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x00495c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        iVar2 = FUN_00464910();
        if (((iVar2 != 0) && ((float)param_1[0x2a3] < 7.0)) && ((float)param_1[0x2a8] <= 1.0471976))
        {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x00495c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        param_1[0x8da] = 0x41000000;
        param_1[0x8d9] = 1;
        param_1[0x8db] = 0x43480000;
        param_1[0x8dc] = 0x40490fdb;
        iVar2 = FUN_0047fea0();
        if (((iVar2 == 0) && (param_1[0x187] < 4)) && (iVar2 = FUN_0043fa60(5), iVar2 != 0)) {
          if (param_1[0x8de] == 0) {
            if ((float)param_1[0x2a4] < 20.25) {
              if ((param_1[0x404] & 0x4000000U) != 0) {
                FUN_004804e0(0x50000,0);
                param_1[0x404] = param_1[0x404] ^ 0x4000000;
                return;
              }
              FUN_004804e0(0x50001,0);
              param_1[0x404] = param_1[0x404] ^ 0x4000000;
            }
          }
          else if (param_1[0x896] != 0) {
            FUN_0047e3b0(0x50006,0,0,0,0);
            return;
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
      if ((float)param_1[0x2a3] <= 6.0) {
        FUN_0047e3b0(0x1000b,0,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00495D50  FUN_00495d50  size=441  [callgraph]
void __fastcall FUN_00495d50(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  float fVar1;
  int iVar2;
  
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00483e70();
    if (iVar2 == 0) {
      if ((DAT_01bea060 & 0x2000000) == 0) {
        iVar2 = FUN_00494800(0x3f860a92,0x41000000);
        if (iVar2 == 0) {
          if (param_1[0x896] == 0) {
            fVar1 = 0.0;
          }
          else {
            fVar1 = (float)param_1[0x244] + (float)param_1[0x248];
          }
          param_1[0x248] = (int)fVar1;
          if ((180.0 < (float)param_1[0x248]) && ((float)param_1[0x2a3] <= 8.0)) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
            param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x00495e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          if (((float)param_1[0x2a3] < 5.0) &&
             (((float)param_1[0x2a8] <= 1.0471976 && (param_1[0x8bb] != 0)))) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
            param_1[0x446] = 1;
                    /* WARNING: Could not recover jumptable at 0x00495e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          param_1[0x8da] = 0x41000000;
          param_1[0x8d9] = 1;
          param_1[0x8db] = 0x43480000;
          param_1[0x8dc] = 0x40490fdb;
          if (param_1[0x187] < 4) {
            iVar2 = FUN_0043fa60(5);
            if ((iVar2 != 0) && ((float)param_1[0x2a4] < 20.25)) {
              if ((param_1[0x404] & 0x4000000U) != 0) {
                FUN_004804e0(0x50000,0);
                param_1[0x404] = param_1[0x404] ^ 0x4000000;
                return;
              }
              FUN_004804e0(0x50001,0);
              param_1[0x404] = param_1[0x404] ^ 0x4000000;
            }
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x34c))();
        if ((float)param_1[0x2a3] <= 6.0) {
          FUN_0047e3b0(0x1000b,0,0,0,0);
          return;
        }
      }
    }
  }
  return;
}

// 00495F10  FUN_00495f10  size=537  [callgraph]
void __fastcall FUN_00495f10(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x446] = 1;
    FUN_00492770(2);
    param_1[0x8af] = 0;
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
      FUN_004841d0(1,0);
      param_1[0x250] = 1;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x479] = 0;
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x484] = param_1[0x484] | 0x14;
      *(undefined1 *)((int)param_1 + 0x11a5) = 10;
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

// 00496140  FUN_00496140  size=700  [callgraph]
void __fastcall FUN_00496140(int *param_1)

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
  
  iVar3 = param_1[0x372];
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
    param_1[0x43f] = (int)fVar1;
    if (param_1[0x372] == 4) {
      param_1[0x43f] = (int)(fVar1 + 3.1415927);
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
      uVar2 = FUN_00e00b40(0x20080,puVar6);
      FUN_00a8c930(uVar2,puVar6);
      puVar6 = auStack_160;
      uVar2 = FUN_00e00b40(0x20080,puVar6);
      FUN_00a8c930(uVar2,puVar6);
    }
    uVar2 = *(undefined4 *)(&DAT_01880bc0 + uVar4 * 0xc);
    uVar5 = 0x3daaaaab;
    break;
  case 1:
  case 3:
    goto switchD_00496185_caseD_1;
  case 2:
    uVar2 = *(undefined4 *)(&DAT_01880bc4 + uVar4 * 0xc);
    uVar5 = 0x3d088889;
    break;
  case 4:
    FUN_00aa4080(*(undefined4 *)(&DAT_01880bc8 + uVar4 * 0xc),0,0x3daaaaab,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_0047fea0(), iVar3 == 0)) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00496185_default;
  }
  FUN_00aa4080(uVar2,0,uVar5,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
switchD_00496185_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00496185_default:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0,0x3f060a92,0);
  }
  return;
}

// 00496420  FUN_00496420  size=2030  [callgraph]
void __fastcall FUN_00496420(int *param_1)

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
  iVar6 = FUN_00483e70();
  if (iVar6 != 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    param_1[0x479] = 0;
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x484] = param_1[0x484] | 0x10;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    (*pcVar2)();
    if (6.0 < (float)param_1[0x2a3]) {
      return;
    }
    FUN_0047e3b0(0x1000b,0,0,0,0);
    return;
  }
  iVar6 = FUN_0047fea0();
  if (iVar6 != 0) {
    return;
  }
  bVar3 = true;
  if ((*(byte *)(param_1 + 0x12a) & 0x10) == 0) {
    param_1[0x8d9] = 1;
    param_1[0x8da] = 0x41000000;
    param_1[0x8db] = 0x43480000;
    param_1[0x8dc] = 0x40490fdb;
  }
  if (((param_1[0x8b3] != 0) && (0x59 < param_1[0x8c5])) && (iVar6 = FUN_00a979d0(), iVar6 != 0)) {
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x10;
    *(undefined1 *)((int)param_1 + 0x11a5) = 10;
    FUN_0047e3b0(0x10006,0,0,0,0);
    return;
  }
  if (*(char *)((int)param_1 + 0x11a5) == '\0') {
    iVar6 = FUN_00932720();
    if (iVar6 == 0x410) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar6 = FUN_0043fa60(0x3c);
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_0047e3b0(0x50008,0,0,0,0);
    uVar7 = param_1[0x892] & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) {
      FUN_0047e3b0(0x50009,0,0,0,0);
    }
    param_1[0x892] = param_1[0x892] + 1;
    if ((*(byte *)((int)param_1 + 0xdea) & 1) != 0) {
      FUN_0047e3b0(0x50009,0,0,0,0);
    }
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_0047e3b0(0x50009,0,0,0,0);
    }
    if (49.0 <= (float)param_1[0x2a4]) {
      return;
    }
    FUN_0047e3b0(0x50000,0,0,0,0);
    sVar5 = FUN_00dde2d0(0,3);
    if (sVar5 != 1) {
      return;
    }
    if ((*(byte *)((int)param_1 + 0xdea) & 1) != 0) {
      return;
    }
    FUN_0047e3b0(0x50006,0,0,0,0);
    return;
  }
  iVar6 = FUN_00494800(0x3f860a92,0x41000000);
  if (iVar6 != 0) {
    return;
  }
  D3DXMatrixInverse(local_50,0,param_1 + 4);
  D3DXVec3TransformNormal(&stack0xffffff94,param_1 + 0x448,auStack_5c);
  if ((param_1[0x8b3] != 0) && (param_1[0x8b5] == 0)) {
    bVar3 = false;
  }
  iVar6 = FUN_0043fa60(0xf);
  fVar8 = (float10)0;
  if (iVar6 != 0) {
    if ((*(byte *)(param_1 + 0x12a) & 0x10) == 0) {
      if (!bVar3) goto LAB_004969b8;
      if (((param_1[0x896] != 0) && (144.0 < (float)param_1[0x2a4])) &&
         (((float)param_1[0x2a8] < 1.0471976 &&
          ((param_1[0x58c] == 0 && ((*(byte *)((int)param_1 + 0xde9) & 1) == 0)))))) {
        fVar8 = (float10)FUN_004841d0(param_1[0x8de] != 0,0);
        param_1[0x40d] = 0x43b40000;
        if (param_1[0x8b3] != 0) {
          param_1[0x40d] = 0x43900000;
        }
      }
    }
    if ((((bVar3) && (param_1[0x896] != 0)) && (64.0 < (float)param_1[0x2a4])) &&
       (((float)param_1[0x2a8] < 1.0471976 && ((float10)(float)param_1[0x40d] < fVar8)))) {
      bVar3 = 0.2 <= unaff_EDI;
      if ((0.05 <= unaff_EDI) && ((param_1[0x455] != 0 && (fVar8 < (float10)(float)param_1[0x452])))
         ) {
        bVar3 = true;
      }
      sVar5 = FUN_00dde2d0(0,1);
      if ((sVar5 != 0) || (bVar3)) {
        if (((*(byte *)((int)param_1 + 0xde9) & 1) == 0) &&
           ((*(byte *)(param_1 + 0x12a) & 0x10) == 0)) {
          FUN_004841d0(param_1[0x8de] != 0,0);
          param_1[0x40d] = 0x43700000;
          if (param_1[0x8b3] != 0) {
            param_1[0x40d] = 0x43400000;
          }
        }
        else {
          iVar6 = FUN_00932720();
          if (iVar6 == 0x410) {
            iVar6 = FUN_00ac4780();
            if (iVar6 != 0) {
              iVar6 = FUN_00ac4780();
              if (iVar6 != 1) goto LAB_00496940;
              uVar10 = 0x18;
              goto LAB_00496942;
            }
            goto LAB_00496947;
          }
          FUN_004841d0(1,0);
          param_1[0x40d] = 0x43d20000;
          if (param_1[0x8b3] != 0) {
            param_1[0x40d] = 0x441d8000;
          }
          if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
            param_1[0x40d] = 0x43700000;
            FUN_004841d0(2,1);
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
LAB_00496940:
              uVar10 = 0x24;
            }
LAB_00496942:
            FUN_0047eee0(uVar10,0x40000000);
          }
LAB_00496947:
          FUN_0047eee0(0xffffffff,0xbf800000);
          param_1[0x40d] = 0x43340000;
        }
        else {
          FUN_004841d0(1,0);
          param_1[0x40d] = 0x43d20000;
          if (param_1[0x8b3] != 0) {
            param_1[0x40d] = 0x441d8000;
          }
          if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
            FUN_004841d0(2,1);
            param_1[0x40d] = 0x43700000;
          }
        }
      }
    }
  }
LAB_004969b8:
  iVar6 = FUN_0043fa60(5);
  if (iVar6 == 0) {
    return;
  }
  fVar4 = 60.0;
  if ((float)param_1[0x468] <= 60.0) {
    return;
  }
  if (param_1[0x8df] != 0) {
    return;
  }
  if (param_1[0x8b3] == 0) {
    fVar4 = 50.0;
  }
  if ((*(byte *)(param_1 + 0x47c) & 2) == 0) {
    if ((36.0 <= (float)param_1[0x2a4]) || (2.0943952 <= (float)param_1[0x2a8])) goto LAB_00496a80;
    fVar1 = (float)param_1[0x24a];
    param_1[0x24a] = (int)(fVar1 + (float)param_1[0x244]);
    if ((float)param_1[0x2a4] < 25.0) {
      param_1[0x24a] = (int)(fVar1 + (float)param_1[0x244] + (float)param_1[0x244]);
    }
    param_1[0x47d] = (int)((float)param_1[0x47d] - (float)param_1[0x244]);
  }
  else {
    fVar4 = 40.0;
    if (param_1[0x8b3] == 0) {
      fVar4 = 30.0;
    }
    if ((49.0 <= (float)param_1[0x2a4]) || (2.0943952 <= (float)param_1[0x2a8])) {
LAB_00496a80:
      fVar1 = (float)param_1[0x24a] - ((float)param_1[0x244] + (float)param_1[0x244]);
      param_1[0x24a] = (int)fVar1;
      if (fVar1 < 0.0) {
        param_1[0x24a] = 0;
      }
    }
    else {
      fVar1 = (float)param_1[0x24a];
      param_1[0x24a] = (int)(fVar1 + (float)param_1[0x244]);
      if ((float)param_1[0x2a4] < 25.0) {
        param_1[0x24a] = (int)(fVar1 + (float)param_1[0x244] + (float)param_1[0x244]);
      }
    }
  }
  if (90.0 < (float)param_1[0x24a]) {
    param_1[0x24a] = 0x42b40000;
  }
  if ((float)param_1[0x24a] <= fVar4) {
    return;
  }
  param_1[0x479] = 0;
  param_1[0x484] = param_1[0x484] | 0x10;
  *(undefined1 *)((int)param_1 + 0x11a5) = 10;
  sVar5 = FUN_00dde2d0(0,1);
  if (sVar5 == 0) {
    FUN_0047e3b0(0x50000,0,0,0,0);
    sVar5 = FUN_00dde2d0(0,1);
    if ((sVar5 != 1) || ((*(byte *)((int)param_1 + 0xdea) & 1) != 0)) goto LAB_00496be6;
    uVar9 = 0;
    uVar10 = 0x50006;
  }
  else {
    FUN_0047e3b0(0x50001,0,0,0,0);
    sVar5 = FUN_00dde2d0(0,1);
    if (sVar5 == 0) goto LAB_00496be6;
    uVar9 = 0x80000000;
    uVar10 = 0x50001;
  }
  FUN_0047e3b0(uVar10,uVar9,0,0,0);
LAB_00496be6:
  if ((float)param_1[0x2a4] <= 36.0) {
    return;
  }
  FUN_0047f8d0();
  return;
}

// 00496C10  FUN_00496c10  size=690  [callgraph]
void __fastcall FUN_00496c10(int *param_1)

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
    param_1[0x446] = 1;
    if (param_1[0x8ae] == 0) {
      FUN_00492770(0);
    }
    param_1[0x8ae] = 0;
    if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
      FUN_00492770(3);
    }
    param_1[0x248] = 0;
    param_1[0x8ab] = 0x42f00000;
    param_1[0x591] = 1;
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
    fVar4 = (float10)FUN_0047cd00();
    fVar1 = (float)param_1[0x48c];
    fVar5 = (float10)FUN_00fdc1f0();
    param_1[0x48c] =
         (int)(float)(fVar5 * (float10)(float)(fVar4 - (float10)fVar1) +
                     (float10)(float)param_1[0x48c]);
    fVar4 = (float10)FUN_0047cdb0();
    fVar1 = (float)param_1[0x48d];
    fVar5 = (float10)FUN_00fdc1f0();
    fVar4 = fVar5 * (float10)(float)(fVar4 - (float10)fVar1) + (float10)(float)param_1[0x48d];
    param_1[0x48d] = (int)(float)fVar4;
    FUN_00a947e0(0,param_1[0x48c],0,(float)fVar4);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  return;
}

// 00496ED0  FUN_00496ed0  size=1073  [callgraph]
void __fastcall FUN_00496ed0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x72,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x446] = 1;
    FUN_00492770(1);
    param_1[0x8a6] = 0;
    param_1[0x8a8] = 0;
    FUN_00a8d280();
    goto LAB_00496f65;
  case 1:
LAB_00496f65:
    FUN_00ac80a0(0,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00496efb_default;
  case 2:
    FUN_00aa4080(0x73,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    goto LAB_00496fdd;
  case 3:
LAB_00496fdd:
    FUN_00ac80a0(0,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (300.0 < (float)param_1[0x244] + fVar1) {
      param_1[0x187] = 4;
    }
    goto switchD_00496efb_default;
  case 4:
    FUN_00aa4080(0x74,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x479] = 0;
    param_1[0x484] = param_1[0x484] | 0x10;
    *(undefined1 *)((int)param_1 + 0x11a5) = 8;
    param_1[0x250] = 0;
    goto LAB_0049707d;
  case 5:
LAB_0049707d:
    FUN_00ac80a0(0,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x8a6] != 0) && (iVar3 = FUN_00a8c760(0xf), iVar3 != 0)) {
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
    goto switchD_00496efb_default;
  case 6:
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x484] = param_1[0x484] & 0xffffffdeU | 4;
    break;
  case 7:
  case 9:
    break;
  case 8:
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x484] = param_1[0x484] & 0xffffffdeU | 4;
    break;
  default:
    goto switchD_00496efb_default;
  }
  FUN_00ac80a0(0,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x484] = param_1[0x484] & 0xfffffffb;
    (*pcVar2)();
  }
switchD_00496efb_default:
  if ((((param_1[0x498] == 0) && (param_1[0x8b3] == 0)) && (iVar3 = FUN_00a8c760(0x34), iVar3 != 0))
     && (param_1[0x8a8] != 0)) {
    param_1[0x497] = param_1[0x497] + 1;
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
  }
  iVar3 = FUN_00a8c760(8);
  if (iVar3 != 0) {
    FUN_0047eee0(0xffffffff,0xbf800000);
  }
  iVar3 = FUN_00a8c760(10);
  if (iVar3 == 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if (param_1[0x370] == 0) {
    if ((char)param_1[0x82e] != -1) goto LAB_004972f1;
  }
  else if ((char)param_1[0x82e] != -1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x82c) = 0;
  *(undefined2 *)(param_1 + 0x82e) = 4;
LAB_004972f1:
  param_1[0x84a] = 1;
  param_1[0x849] = 1;
  return;
}

// 00497330  FUN_00497330  size=824  [callgraph]
void __fastcall FUN_00497330(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x446] = 1;
    FUN_00492770(2);
    param_1[0x8af] = 0;
    param_1[0x250] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x2b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00497447;
  case 3:
LAB_00497447:
    FUN_00ac80a0(0,0x3f800000);
    fVar1 = (float)param_1[0x2a4];
    if ((!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) && (param_1[0x250] == 0)) {
      FUN_004841d0(1,0);
      param_1[0x250] = 1;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0047e3b0(0x50008,0,0,0,0);
      uVar2 = param_1[0x892] & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      if (uVar2 == 1) {
        FUN_0047e3b0(0x50009,0,0,0,0);
      }
      param_1[0x892] = param_1[0x892] + 1;
      if ((*(byte *)((int)param_1 + 0xdea) & 1) != 0) {
        FUN_0047e3b0(0x50009,0,0,0,0);
      }
      if (param_1[0x8de] != 0) {
        FUN_0047e3b0(0x50009,0,0,0,0);
      }
      param_1[0x479] = 0;
      param_1[0x484] = param_1[0x484] | 0x14;
      *(undefined1 *)((int)param_1 + 0x11a5) = 10;
      if ((DAT_01bea060 & 0x2000000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00497549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  default:
    goto switchD_00497359_default;
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
switchD_00497359_default:
  if ((param_1[0x2a1] == 0) || (iVar3 = FUN_00a8c760(0), iVar3 == 0)) {
LAB_004975e9:
    if ((DAT_01bea060 & 0x2000000) != 0) {
      return;
    }
  }
  else {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
    if ((DAT_01bea060 & 0x2000000) != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3f0efa35,0);
      goto LAB_004975e9;
    }
  }
  iVar3 = FUN_00a8c760(8);
  if (iVar3 != 0) {
    FUN_0047eee0(0xffffffff,0xbf800000);
  }
  iVar3 = FUN_00a8c760(10);
  if (iVar3 == 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if (param_1[0x370] == 0) {
    if ((char)param_1[0x82e] != -1) goto LAB_00497657;
  }
  else if ((char)param_1[0x82e] != -1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x82c) = 0;
  *(undefined2 *)(param_1 + 0x82e) = 4;
LAB_00497657:
  param_1[0x84a] = 1;
  param_1[0x849] = 1;
  return;
}

// 00497680  FUN_00497680  size=110  [callgraph]
void __thiscall FUN_00497680(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

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
  local_38 = *(undefined4 *)(param_1 + 0x11dc);
  local_30 = param_4;
  FUN_0048ea60(local_34,&local_38,&local_30);
  *(undefined1 *)(param_1 + 0x11a5) = 2;
  return;
}

// 004976F0  FUN_004976f0  size=90  [callgraph]
void __fastcall FUN_004976f0(int param_1)

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
      FUN_0048c560();
      return;
    case 1:
      FUN_0048c8d0();
      return;
    case 2:
      FUN_0048cc30();
      return;
    case 3:
      FUN_0048d500();
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_00485330();
    return;
  }
  return;
}

// 0049AC40  FUN_0049ac40  size=914  [callgraph]
void __fastcall FUN_0049ac40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x20001) {
    if (iVar1 == 0x20000) {
      FUN_0047cf40();
    }
    else {
      switch(iVar1) {
      case 0x10000:
        FUN_0047c830();
        break;
      case 0x10001:
        FUN_0047c900();
        break;
      case 0x10002:
        FUN_0047c960();
        break;
      case 0x10003:
        FUN_004802b0();
        break;
      case 0x10004:
        FUN_0047cb00();
        break;
      case 0x10005:
        FUN_00488ac0();
        break;
      case 0x10006:
        FUN_00488d30();
        break;
      case 0x10008:
        FUN_00480570();
        break;
      case 0x10009:
      case 0x1000a:
        FUN_0047cbc0();
        break;
      case 0x1000b:
        FUN_00495f10();
        break;
      case 0x1000c:
        FUN_00496140();
        break;
      case 0x1000d:
        FUN_00496c10();
        break;
      case 0x1000e:
        FUN_00481050();
        break;
      case 0x1000f:
        FUN_004824f0();
        break;
      case 0x10010:
        FUN_0047d5d0();
        break;
      case 0x10011:
        FUN_0047d670();
        break;
      case 0x10012:
      case 0x10013:
        FUN_0047d710();
        break;
      case 0x10014:
        FUN_0047ced0();
        break;
      case 0x10015:
        FUN_00481570();
      }
    }
  }
  else if (iVar1 < 0x50001) {
    if (iVar1 == 0x50000) {
      FUN_00482920();
    }
    else {
      switch(iVar1) {
      case 0x20001:
        FUN_004893a0();
        break;
      case 0x20002:
        FUN_0047cff0();
        break;
      case 0x20003:
        FUN_004815f0();
        break;
      case 0x20004:
      case 0x20005:
      case 0x20006:
      case 0x20007:
      case 0x20008:
        FUN_0047d070();
        break;
      case 0x20009:
      case 0x2000a:
        FUN_0047d2d0();
        break;
      case 0x2000b:
        FUN_00489620();
        break;
      case 0x2000c:
        FUN_00489920();
        break;
      case 0x2000d:
        FUN_00491ba0();
        break;
      case 0x2000e:
        FUN_00481c90();
        break;
      case 0x2000f:
        FUN_00489e70();
        break;
      case 0x20010:
        FUN_00481fa0();
        break;
      case 0x20011:
        FUN_00482270();
        break;
      case 0x20012:
        FUN_0047d550();
      }
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_0047db20();
    }
    else {
      switch(iVar1) {
      case 0x50001:
        FUN_00483200();
        break;
      case 0x50002:
      case 0x50003:
        FUN_004836e0();
        break;
      case 0x50004:
        FUN_0048a790();
        break;
      case 0x50005:
        FUN_00496ed0();
        break;
      case 0x50006:
        FUN_00497330();
        break;
      case 0x50007:
        FUN_00499710();
        break;
      case 0x50008:
        FUN_0048ab40();
        break;
      case 0x50009:
        FUN_0048aef0();
        break;
      case 0x5000b:
        FUN_00483b70(0x59,1);
        break;
      case 0x5000c:
        FUN_00483b70(0x61,2);
        break;
      case 0x5000d:
        FUN_00483b70(0x5d,3);
        break;
      case 0x5000e:
        FUN_004825d0();
        break;
      case 0x5000f:
        FUN_0047d870();
        break;
      case 0x50010:
        FUN_0047d9a0();
      }
    }
  }
  else if (iVar1 < 0x70001) {
    if (iVar1 == 0x70000) {
      FUN_0048b210();
    }
    else if (iVar1 == 0x60001) {
      FUN_0047dbe0();
    }
    else if (iVar1 == 0x60002) {
      FUN_0047dca0();
    }
  }
  else if (iVar1 < 0x80001) {
    if (iVar1 == 0x80000) {
      FUN_00491f10();
    }
    else {
      switch(iVar1) {
      case 0x70001:
        FUN_0048b450();
        break;
      case 0x70002:
        FUN_0047dd70();
        break;
      case 0x70003:
      case 0x70004:
        FUN_0048b670();
        break;
      case 0x70005:
        FUN_00483c60();
        break;
      case 0x70006:
        FUN_0048b8a0();
        break;
      case 0x70007:
        FUN_0047df50();
        break;
      case 0x70008:
        FUN_00483da0();
        break;
      case 0x70009:
        FUN_0048baa0();
        break;
      case 0x7000a:
        FUN_0047e060();
        break;
      case 0x7000c:
        FUN_0047e240();
      }
    }
  }
  else if (iVar1 < 0x90001) {
    if (iVar1 != 0x90000) {
      if (iVar1 == 0x80001) {
        FUN_004921d0();
      }
      else if (iVar1 == 0x80002) {
        FUN_00492490();
      }
    }
  }
  else if (iVar1 < 0x90004) {
    if (iVar1 == 0x90003) {
      FUN_00486210();
    }
    else if ((iVar1 != 0x90001) && (iVar1 == 0x90002)) {
      FUN_0048e420();
    }
  }
  else if (iVar1 == 0xa0000) {
    FUN_00483f90();
  }
  if (*(int *)(param_1 + 0x1004) != 0) {
    if (*(int *)(param_1 + 0x1008) == 8) {
      FUN_00483ac0(0x60,2);
      return;
    }
    FUN_00483ac0(0x5c,3);
  }
  return;
}

// 0049B0F0  FUN_0049b0f0  size=184  [callgraph]
undefined4 __fastcall FUN_0049b0f0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_260 [604];
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar5 = *(int *)(param_1 + 0x67c);
    iVar6 = *(int *)(param_1 + 0x684) * 0x150 + iVar5;
    FUN_00445db0();
    FUN_004105d0();
    iVar3 = -1;
    bVar2 = false;
    if (iVar5 != iVar6) {
      do {
        iVar1 = *(int *)(iVar5 + 4);
        if (iVar3 <= iVar1) {
          FUN_0043e160(iVar5);
          FUN_00448f50(iVar5);
          bVar2 = true;
          iVar3 = iVar1;
        }
        iVar5 = iVar5 + 0x150;
      } while (iVar5 != iVar6);
      if (bVar2) {
        uVar4 = FUN_0049a9b0(local_260);
        return uVar4;
      }
    }
  }
  return 0;
}

// 0049B1B0  Em0080::vf4C  size=794  [class]
void __fastcall Em0080::vf4C(int param_1)

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
  *(uint *)(param_1 + 0x1010) = *(uint *)(param_1 + 0x1010) & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x22b4) = 0;
  iVar2 = FUN_00ac4770();
  if (iVar2 == 0) {
    FUN_00498290();
  }
  FUN_0049ac40();
  FUN_00485fb0();
  FUN_0047f540();
  if (*(char *)(param_1 + 0x235c) == '\0') {
    FUN_004849a0();
  }
  else if (*(char *)(param_1 + 0x235c) == '\x01') {
    FUN_00484a70();
  }
  iVar2 = FUN_00ac4770();
  if ((iVar2 == 0) && ((DAT_01bea060 & 0xa000000) == 0)) {
    FUN_00480740();
    if ((*(byte *)(param_1 + 0x1210) & 8) == 0) {
      fVar1 = *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x1120) * fVar1
      ;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x1124) * fVar1 + *(float *)(param_1 + 0x54)
      ;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x1128) * fVar1 + *(float *)(param_1 + 0x58)
      ;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x112c) * fVar1 + *(float *)(param_1 + 0x5c)
      ;
      fVar5 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x1178) * *(float *)(param_1 + 0x910) +
                                    *(float *)(param_1 + 0x94));
      *(float *)(param_1 + 0x94) = (float)fVar5;
    }
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1240) + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x1244) + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x1248) + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x124c) + *(float *)(param_1 + 0x5c);
    fVar5 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1240) = (float)((float10)*(float *)(param_1 + 0x1240) * fVar5);
    *(float *)(param_1 + 0x1244) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x1244));
    *(float *)(param_1 + 0x1248) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x1248));
    *(float *)(param_1 + 0x124c) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x124c));
    hkpCdPointCollector::hkpCdPointCollector();
  }
  if (*(int *)(param_1 + 0x11a8) != 0) {
    Phantom::setTransform(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x11b8) != 0) {
    Phantom::setTransform(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x11c8) != 0) {
    Phantom::setTransform(param_1 + 0x10);
  }
  FUN_00498550();
  FUN_0047e4f0();
  iVar2 = FUN_00ac45b0();
  if (iVar2 != 0) {
    FUN_00ac45b0();
    iVar2 = FUN_00a7c8a0();
    if ((iVar2 != 0) && ((DAT_01bea060 & 0x2000000) == 0)) {
      local_20 = *(undefined4 *)(param_1 + 0x2280);
      local_1c = *(undefined4 *)(param_1 + 0x2284);
      local_18 = *(undefined4 *)(param_1 + 0x2288);
      local_14 = *(undefined4 *)(param_1 + 0x228c);
      FUN_00a84720();
      switchD_0080dbae::default();
      uVar3 = *(undefined4 *)(param_1 + 0x2364);
      if (*(int *)(param_1 + 0x2258) == 0) {
        uVar3 = 0;
      }
      if (((*(int *)(param_1 + 0xdc0) != 0) && (*(int *)(param_1 + 0x618) != 0x50009)) &&
         (*(int *)(param_1 + 0x618) != 0x5000a)) {
        uVar3 = 0;
      }
      FUN_00a84780(&local_20,0,uVar3,0,0,0x3f800000);
      goto LAB_0049b458;
    }
  }
  FUN_00a84720();
LAB_0049b458:
  *(undefined4 *)(param_1 + 0x2364) = 0;
  switchD_0080dbae::default();
  iVar2 = param_1 + 0x1270;
  iVar4 = 4;
  do {
    *(undefined4 *)(iVar2 + 0x1b0) = *(undefined4 *)(param_1 + 0x910);
    if ((DAT_01bea060 & 0x2000000) == 0) {
      switch(*(undefined4 *)(iVar2 + 0x1ac)) {
      case 0:
        FUN_004987c0();
        break;
      case 1:
        FUN_00498aa0();
        break;
      case 2:
      case 3:
        FUN_004976f0();
      }
    }
    iVar2 = iVar2 + 0x220;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  switchD_0080dbae::default();
  return;
}

// 00AACCB0  Em0080::Em0080  size=512  [class]
undefined4 * __fastcall Em0080::Em0080(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00904d60();
  Animation::FootIk2::FootIk2();
  param_1[0x406] = 0;
  cEspControler::cEspControler();
  FUN_009003e0();
  FUN_009003e0();
  FUN_009003e0();
  param_1[0x476] = 0;
  param_1[0x477] = 0;
  param_1[0x478] = 0;
  param_1[0x479] = 0;
  param_1[0x47a] = 0;
  param_1[0x47d] = 0;
  param_1[0x47c] = 0;
  param_1[0x47e] = 0;
  *(undefined1 *)(param_1 + 0x47f) = 0;
  param_1[0x480] = 0;
  param_1[0x481] = 0;
  puVar2 = param_1 + 0x49c;
  param_1[0x482] = 0;
  iVar1 = 3;
  do {
    FUN_00401040(puVar2,0xd0,2,FUN_00a826e0);
    FUN_00a7c930();
    FUN_00a7c930();
    puVar2 = puVar2 + 0x88;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a603a0();
  cEnemyCautionStateManager::cEnemyCautionStateManager_5();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a826e0();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00904d60();
  FUN_00a7c950();
  param_1[0x82f] = 0;
  *(undefined1 *)(param_1 + 0x82e) = 0;
  param_1[0x830] = 0;
  param_1[0x831] = 0;
  param_1[0x832] = 0;
  *(undefined1 *)(param_1 + 0x82c) = 0;
  cEspControler::cEspControler();
  iVar1 = 0xd;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  return param_1;
}

// 00AACEB0  Em0080::vf04  size=6  [class]
undefined * Em0080::vf04(void)

{
  return &DAT_01b34d70;
}

// 00AACEC0  Em0080::vf17C  size=6  [class]
undefined4 Em0080::vf17C(void)

{
  return 1;
}

// 00AACED0  Em0080::vf180  size=6  [class]
undefined4 Em0080::vf180(void)

{
  return 1;
}

// 00AACEE0  Em0080::vf20C  size=7  [class]
float10 Em0080::vf20C(void)

{
  return (float10)3.5;
}

// 00AACEF0  Em0080::vf1DC  size=6  [class]
undefined4 Em0080::vf1DC(void)

{
  return 1;
}

// 00AACF00  Em0080::vf27C  size=42  [class]
void __thiscall Em0080::vf27C(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = (float)param_2[1] + 1.4;
  return;
}

// 00AB6EB0  Em0080::vf00  size=30  [class]
undefined4 __thiscall Em0080::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

