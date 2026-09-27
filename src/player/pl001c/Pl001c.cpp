// src/player/pl001c/Pl001c.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EDAC0..00AB6670, 31 functions

#include "mgrr.h"
#include "Pl001c.h"

// 005EDAC0  Pl001c::vf44  size=37  [class]
void Pl001c::vf44(void)

{
  FUN_00a9d8a0();
  FUN_00a933e0();
  FUN_00a92a00();
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 005EDAF0  Pl001c::vf48  size=1  [class]
void Pl001c::vf48(void)

{
  return;
}

// 005EDB00  Pl001c::vf50  size=28  [class]
void __fastcall Pl001c::vf50(int *param_1)

{
  FUN_00a93170();
  Behavior::vf50();
                    /* WARNING: Could not recover jumptable at 0x005edb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}

// 005EDB20  FUN_005edb20  size=168  [between]
void __fastcall FUN_005edb20(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x8b8) = 0;
    *(undefined4 *)(param_1 + 0x8b4) = 0;
    *(undefined4 *)(param_1 + 0x8b0) = 0;
    *(undefined4 *)(param_1 + 0x8ac) = 0;
    *(undefined4 *)(param_1 + 0x8a4) = 0;
    *(undefined4 *)(param_1 + 0x8a0) = 0;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x88c) = 0;
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined4 *)(param_1 + 0x884) = 0;
    *(undefined4 *)(param_1 + 0x8bc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8a8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x894) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x880) = 0x3f800000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x8c4) = 0;
    *(undefined4 *)(param_1 + 0x8c0) = 0;
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    *(undefined4 *)(param_1 + 0x8cc) = 0;
  }
  return;
}

// 005EDC60  FUN_005edc60  size=65  [between]
void __thiscall FUN_005edc60(int param_1,float param_2)

{
  if (3.0 <= param_2) {
    *(float *)(param_1 + 0x980) = param_2;
    param_2 = param_2 * 0.33333334;
    if (param_2 <= 0.0) {
      param_2 = 1.0;
    }
    FUN_00a8e720(param_2);
    return;
  }
  return;
}

// 005EDCB0  FUN_005edcb0  size=47  [between]
void __thiscall FUN_005edcb0(int param_1,float param_2)

{
  *(float *)(param_1 + 0x980) = param_2;
  param_2 = param_2 * 0.33333334;
  if (param_2 <= 0.0) {
    param_2 = 0.0001;
  }
  FUN_00a8e720(param_2);
  return;
}

// 005EDD30  Pl001c::startup  size=586  [class]
undefined4 __fastcall Pl001c::startup(int *param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x130] = param_1[0x130] | 0x10;
  FUN_00a929d0();
  param_1[400] = 1;
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(0x10);
  param_1[0x21c] = 0;
  param_1[0x22e] = 0;
  param_1[0x22d] = 0;
  param_1[0x22c] = 0;
  param_1[0x22b] = 0;
  param_1[0x229] = 0;
  param_1[0x228] = 0;
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  param_1[0x224] = 0;
  param_1[0x223] = 0;
  param_1[0x222] = 0;
  param_1[0x221] = 0;
  param_1[0x22f] = 0x3f800000;
  param_1[0x22a] = 0x3f800000;
  param_1[0x225] = 0x3f800000;
  param_1[0x220] = 0x3f800000;
  param_1[0x231] = 0;
  param_1[0x230] = 0;
  param_1[0x233] = 0;
  param_1[0x232] = 0;
  FUN_00a8caf0(0,0,0,0);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x23c] = -0x3cd10000;
  param_1[0x246] = 0x3f800000;
  param_1[0x250] = 0x3f800000;
  param_1[0x23d] = -0x3cf90000;
  param_1[0x247] = 0x40000000;
  param_1[0x251] = 0x3fc00000;
  param_1[0x23e] = -0x3d4c0000;
  param_1[0x248] = 0x3f800000;
  param_1[0x252] = 0x3f99999a;
  param_1[0x23f] = -0x3dcc0000;
  param_1[0x249] = 0x3f800000;
  param_1[0x253] = 0x3fa66666;
  param_1[0x240] = 0;
  param_1[0x24a] = 0;
  param_1[0x254] = 0x3f800000;
  param_1[0x241] = 0x3f800000;
  param_1[0x24b] = 0;
  param_1[0x255] = 0x3f800000;
  param_1[0x242] = 0x42340000;
  param_1[0x24c] = 0x3f800000;
  param_1[0x256] = 0x40000000;
  param_1[0x243] = 0x42b40000;
  param_1[0x24d] = 0x3f800000;
  param_1[599] = 0x3fcccccd;
  param_1[0x244] = 0x43070000;
  param_1[0x24e] = 0x40000000;
  param_1[600] = 0x3fd9999a;
  param_1[0x245] = 0x43340000;
  param_1[0x24f] = 0x3f800000;
  param_1[0x259] = 0x3f800000;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  FUN_00a7c950();
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0x3f800000;
  param_1[0x261] = 0;
  param_1[0x237] = 0;
  param_1[0x260] = 0x40400000;
  return 1;
}

// 005EDF80  FUN_005edf80  size=358  [between]
void __fastcall FUN_005edf80(int *param_1)

{
  code *pcVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  float fStack_34;
  float local_30;
  float local_2c;
  float fStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_1[0x187] == 0) {
    param_1[0x22e] = 0;
    param_1[0x22d] = 0;
    param_1[0x22c] = 0;
    param_1[0x22b] = 0;
    param_1[0x229] = 0;
    param_1[0x228] = 0;
    param_1[0x227] = 0;
    param_1[0x226] = 0;
    param_1[0x224] = 0;
    param_1[0x223] = 0;
    param_1[0x222] = 0;
    param_1[0x221] = 0;
    param_1[0x22f] = 0x3f800000;
    param_1[0x22a] = 0x3f800000;
    param_1[0x225] = 0x3f800000;
    param_1[0x220] = 0x3f800000;
    param_1[0x231] = 0;
    param_1[0x230] = 0;
    local_30 = 0.0;
    local_2c = 0.0;
    param_1[0x232] = 0;
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x233] = 0;
    (*pcVar1)();
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        FID_conflict__memcpy(param_1 + 4,(void *)(iVar4 + 0x10),0x40);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    local_20 = 0;
    local_1c = 0x38d1b717;
    local_18 = 0;
    (**(code **)(*param_1 + 0x70))(&local_20);
    pfVar2 = (float *)(**(code **)(*param_1 + 0x84))();
    local_2c = pfVar2[2];
    fStack_28 = pfVar2[3];
    fStack_34 = *pfVar2 + 0.0017453292;
    local_30 = pfVar2[1] + 0.0017453292;
    (**(code **)(*param_1 + 0x88))(&fStack_34);
    return;
  }
  return;
}

// 005EE0F0  FUN_005ee0f0  size=282  [between]
void __fastcall FUN_005ee0f0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_1[0x187] == 0) {
    param_1[0x22e] = 0;
    param_1[0x22d] = 0;
    param_1[0x22c] = 0;
    param_1[0x22b] = 0;
    param_1[0x229] = 0;
    param_1[0x228] = 0;
    param_1[0x227] = 0;
    param_1[0x226] = 0;
    param_1[0x224] = 0;
    param_1[0x223] = 0;
    param_1[0x222] = 0;
    param_1[0x221] = 0;
    param_1[0x22f] = 0x3f800000;
    param_1[0x22a] = 0x3f800000;
    param_1[0x225] = 0x3f800000;
    param_1[0x220] = 0x3f800000;
    param_1[0x231] = 0;
    param_1[0x230] = 0;
    local_20 = 0;
    local_1c = 0;
    param_1[0x232] = 0;
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x233] = 0;
    (*pcVar1)();
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        FID_conflict__memcpy(param_1 + 4,(void *)(iVar3 + 0x10),0x40);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    local_20 = 0;
    local_1c = 0x3f000000;
    local_18 = 0;
    (**(code **)(*param_1 + 0x70))(&local_20);
    return;
  }
  return;
}

// 005EE210  FUN_005ee210  size=41  [between]
void __fastcall FUN_005ee210(int param_1)

{
  FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x880),0x40);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 005EE240  FUN_005ee240  size=41  [between]
void __fastcall FUN_005ee240(int param_1)

{
  FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x880),0x40);
  FUN_00a8caf0(2,0,0,0);
  return;
}

// 005EE270  FUN_005ee270  size=41  [between]
void __fastcall FUN_005ee270(int param_1)

{
  FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x880),0x40);
  FUN_00a8caf0(3,0,0,0);
  return;
}

// 005EE2A0  FUN_005ee2a0  size=41  [between]
void __fastcall FUN_005ee2a0(int param_1)

{
  FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x880),0x40);
  FUN_00a8caf0(4,0,0,0);
  return;
}

// 005EE2D0  FUN_005ee2d0  size=41  [between]
void __fastcall FUN_005ee2d0(int param_1)

{
  FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x880),0x40);
  FUN_00a8caf0(5,0,0,0);
  return;
}

// 005EE300  FUN_005ee300  size=41  [between]
void __fastcall FUN_005ee300(int param_1)

{
  FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x880),0x40);
  FUN_00a8caf0(6,0,0,0);
  return;
}

// 005EE330  FUN_005ee330  size=158  [between]
void __thiscall
FUN_005ee330(int param_1,void *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  void *_Dst;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  _Dst = (void *)(param_1 + 0x880);
  FID_conflict__memcpy(_Dst,param_2,0x40);
  *(undefined4 *)(param_1 + 0x8c0) = param_3;
  *(undefined4 *)(param_1 + 0x8d8) = param_5;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = param_6;
  *(undefined4 *)(param_1 + 0x8cc) = param_8;
  *(undefined4 *)(param_1 + 0x8e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c8) = param_7;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8d4) = 0;
  D3DXMatrixRotationY(local_50,0x3fc90fdb);
  D3DXMatrixMultiply(_Dst,auStack_58,_Dst);
  *(undefined4 *)(param_1 + 0x984) = 1;
  return;
}

// 005EE3D0  FUN_005ee3d0  size=69  [between]
void __thiscall FUN_005ee3d0(int param_1,void *param_2)

{
  void *_Dst;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  _Dst = (void *)(param_1 + 0x880);
  FID_conflict__memcpy(_Dst,param_2,0x40);
  D3DXMatrixRotationY(local_50,0x3fc90fdb);
  D3DXMatrixMultiply(_Dst,auStack_58,_Dst);
  return;
}

// 005EE420  Pl001c::getAttackInfo  size=86  [class]
undefined4 Pl001c::getAttackInfo(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        uVar3 = (**(code **)(*piVar1 + 0x130))(unaff_retaddr);
        return uVar3;
      }
    }
  }
  return 0;
}

// 005EE4D0  FUN_005ee4d0  size=732  [between]
void __fastcall FUN_005ee4d0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  undefined *puVar14;
  undefined4 uStack_48;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = param_1[0x187];
  if (iVar10 == 0) {
    fVar1 = (float)param_1[0x237];
    param_1[0x237] = (int)(fVar1 - 1.0);
    if (fVar1 - 1.0 < 0.0) {
      param_1[0x187] = 1;
    }
  }
  else {
    if (iVar10 == 1) {
      local_30 = param_1[0x22c];
      local_2c = param_1[0x22d];
      local_28 = param_1[0x22e];
      local_24 = param_1[0x22f];
      fVar1 = (float)param_1[0x220];
      fVar2 = (float)param_1[0x221];
      fVar3 = (float)param_1[0x222];
      fVar4 = (float)param_1[0x224];
      fVar5 = (float)param_1[0x225];
      fVar6 = (float)param_1[0x226];
      fVar9 = SQRT((float)param_1[0x22a] * (float)param_1[0x22a] +
                   (float)param_1[0x229] * (float)param_1[0x229] +
                   (float)param_1[0x228] * (float)param_1[0x228]);
      fVar7 = (float)param_1[0x226];
      fVar8 = (float)param_1[0x22a];
      fVar12 = (float10)FUN_00ddbaa0(-((float)param_1[0x222] / fVar9));
      fVar13 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar13;
      local_1c = (float)fVar12;
      fVar12 = (float10)fpatan((float10)(float)param_1[0x221] /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)(float)param_1[0x220] /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar12;
      (**(code **)(*param_1 + 0x7c))(&local_30,&local_20);
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            unaff_ESI = (float)((float10)(float)fVar12 / fVar13);
          }
        }
      }
      FUN_00a8d280();
      FUN_00aa4080(4,param_1[0x21c],0,0x3f800000,0x8000000,0xbf800000,unaff_ESI);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x261] = 0;
      return;
    }
    if (iVar10 == 2) {
      iVar10 = FUN_00a94ce0(param_1[0x21c]);
      if (iVar10 != 0) {
        FUN_00a94bc0(param_1[0x21c],0);
        FUN_00a8caf0(0,0,0,0);
      }
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            FUN_00a96030(0,(float)((float10)(float)fVar12 / fVar13));
            return;
          }
        }
      }
      FUN_00a96030(0,uStack_48);
      return;
    }
  }
  return;
}

// 005EE7B0  FUN_005ee7b0  size=735  [between]
void __fastcall FUN_005ee7b0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  undefined *puVar14;
  undefined4 uStack_48;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = param_1[0x187];
  if (iVar10 == 0) {
    fVar1 = (float)param_1[0x237];
    param_1[0x237] = (int)(fVar1 - 1.0);
    if (fVar1 - 1.0 < 0.0) {
      param_1[0x187] = 1;
    }
  }
  else {
    if (iVar10 == 1) {
      local_30 = param_1[0x22c];
      local_2c = param_1[0x22d];
      local_28 = param_1[0x22e];
      local_24 = param_1[0x22f];
      fVar1 = (float)param_1[0x220];
      fVar2 = (float)param_1[0x221];
      fVar3 = (float)param_1[0x222];
      fVar4 = (float)param_1[0x224];
      fVar5 = (float)param_1[0x225];
      fVar6 = (float)param_1[0x226];
      fVar9 = SQRT((float)param_1[0x22a] * (float)param_1[0x22a] +
                   (float)param_1[0x229] * (float)param_1[0x229] +
                   (float)param_1[0x228] * (float)param_1[0x228]);
      fVar7 = (float)param_1[0x226];
      fVar8 = (float)param_1[0x22a];
      fVar12 = (float10)FUN_00ddbaa0(-((float)param_1[0x222] / fVar9));
      fVar13 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar13;
      local_1c = (float)fVar12;
      fVar12 = (float10)fpatan((float10)(float)param_1[0x221] /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)(float)param_1[0x220] /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar12;
      (**(code **)(*param_1 + 0x7c))(&local_30,&local_20);
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            unaff_ESI = (float)((float10)(float)fVar12 / fVar13);
          }
        }
      }
      FUN_00a8d280();
      FUN_00a9e290(&DAT_01640f3c,param_1[0x21c],0,0x3f800000,0x8000000,0xbf800000,unaff_ESI);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x261] = 0;
      return;
    }
    if (iVar10 == 2) {
      iVar10 = FUN_00a94ce0(param_1[0x21c]);
      if (iVar10 != 0) {
        FUN_00a94bc0(param_1[0x21c],0);
        FUN_00a8caf0(0,0,0,0);
      }
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            FUN_00a96030(0,(float)((float10)(float)fVar12 / fVar13));
            return;
          }
        }
      }
      FUN_00a96030(0,uStack_48);
      return;
    }
  }
  return;
}

// 005EEA90  FUN_005eea90  size=545  [between]
void __fastcall FUN_005eea90(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = param_1[0x187];
  if (iVar10 == 0) {
    fVar1 = (float)param_1[0x237];
    param_1[0x237] = (int)(fVar1 - 1.0);
    if (fVar1 - 1.0 < 0.0) {
      param_1[0x187] = 1;
    }
  }
  else {
    if (iVar10 == 1) {
      local_30 = param_1[0x22c];
      local_2c = param_1[0x22d];
      local_28 = param_1[0x22e];
      local_24 = param_1[0x22f];
      fVar1 = (float)param_1[0x220];
      fVar2 = (float)param_1[0x221];
      fVar3 = (float)param_1[0x222];
      fVar4 = (float)param_1[0x224];
      fVar5 = (float)param_1[0x225];
      fVar6 = (float)param_1[0x226];
      fVar9 = SQRT((float)param_1[0x22a] * (float)param_1[0x22a] +
                   (float)param_1[0x229] * (float)param_1[0x229] +
                   (float)param_1[0x228] * (float)param_1[0x228]);
      fVar7 = (float)param_1[0x226];
      fVar8 = (float)param_1[0x22a];
      fVar11 = (float10)FUN_00ddbaa0(-((float)param_1[0x222] / fVar9));
      fVar12 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar12;
      local_1c = (float)fVar11;
      fVar11 = (float10)fpatan((float10)(float)param_1[0x221] /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)(float)param_1[0x220] /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar11;
      (**(code **)(*param_1 + 0x7c))(&local_30,&local_20);
      FUN_00a8d280();
      FUN_00aa4080(5,param_1[0x21c],0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x261] = 0;
      return;
    }
    if (iVar10 == 2) {
      iVar10 = FUN_00a94ce0(param_1[0x21c]);
      if (iVar10 != 0) {
        FUN_00a94bc0(param_1[0x21c],0);
        FUN_00a8caf0(0,0,0,0);
      }
      if (param_1[0x234] != 0) {
        FUN_00a94bc0(param_1[0x21c],0);
        FUN_00a8caf0(0,0,0,0);
        return;
      }
    }
  }
  return;
}

// 005EECC0  FUN_005eecc0  size=738  [between]
void __fastcall FUN_005eecc0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  undefined *puVar14;
  undefined4 uStack_48;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = param_1[0x187];
  if (iVar10 == 0) {
    fVar1 = (float)param_1[0x237];
    param_1[0x237] = (int)(fVar1 - 1.0);
    if (fVar1 - 1.0 < 0.0) {
      param_1[0x187] = 1;
    }
  }
  else {
    if (iVar10 == 1) {
      local_30 = param_1[0x22c];
      local_2c = param_1[0x22d];
      local_28 = param_1[0x22e];
      local_24 = param_1[0x22f];
      fVar1 = (float)param_1[0x220];
      fVar2 = (float)param_1[0x221];
      fVar3 = (float)param_1[0x222];
      fVar4 = (float)param_1[0x224];
      fVar5 = (float)param_1[0x225];
      fVar6 = (float)param_1[0x226];
      fVar9 = SQRT((float)param_1[0x22a] * (float)param_1[0x22a] +
                   (float)param_1[0x229] * (float)param_1[0x229] +
                   (float)param_1[0x228] * (float)param_1[0x228]);
      fVar7 = (float)param_1[0x226];
      fVar8 = (float)param_1[0x22a];
      fVar12 = (float10)FUN_00ddbaa0(-((float)param_1[0x222] / fVar9));
      fVar13 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar13;
      local_1c = (float)fVar12;
      fVar12 = (float10)fpatan((float10)(float)param_1[0x221] /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)(float)param_1[0x220] /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar12;
      (**(code **)(*param_1 + 0x7c))(&local_30,&local_20);
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            unaff_ESI = (float)(((float10)(float)fVar12 / fVar13) * (float10)0.2);
          }
        }
      }
      FUN_00a8d280();
      FUN_00aa4080(4,param_1[0x21c],0,0x3f800000,0x8000000,0xbf800000,unaff_ESI);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x261] = 0;
      return;
    }
    if (iVar10 == 2) {
      iVar10 = FUN_00a94ce0(param_1[0x21c]);
      if (iVar10 != 0) {
        FUN_00a94bc0(param_1[0x21c],0);
        FUN_00a8caf0(0,0,0,0);
      }
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            FUN_00a96030(0,(float)((float10)(float)fVar12 / fVar13));
            return;
          }
        }
      }
      FUN_00a96030(0,uStack_48);
      return;
    }
  }
  return;
}

// 005EEFB0  FUN_005eefb0  size=732  [between]
void __fastcall FUN_005eefb0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  undefined *puVar14;
  undefined4 uStack_48;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = param_1[0x187];
  if (iVar10 == 0) {
    fVar1 = (float)param_1[0x237];
    param_1[0x237] = (int)(fVar1 - 1.0);
    if (fVar1 - 1.0 < 0.0) {
      param_1[0x187] = 1;
    }
  }
  else {
    if (iVar10 == 1) {
      local_30 = param_1[0x22c];
      local_2c = param_1[0x22d];
      local_28 = param_1[0x22e];
      local_24 = param_1[0x22f];
      fVar1 = (float)param_1[0x220];
      fVar2 = (float)param_1[0x221];
      fVar3 = (float)param_1[0x222];
      fVar4 = (float)param_1[0x224];
      fVar5 = (float)param_1[0x225];
      fVar6 = (float)param_1[0x226];
      fVar9 = SQRT((float)param_1[0x22a] * (float)param_1[0x22a] +
                   (float)param_1[0x229] * (float)param_1[0x229] +
                   (float)param_1[0x228] * (float)param_1[0x228]);
      fVar7 = (float)param_1[0x226];
      fVar8 = (float)param_1[0x22a];
      fVar12 = (float10)FUN_00ddbaa0(-((float)param_1[0x222] / fVar9));
      fVar13 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar13;
      local_1c = (float)fVar12;
      fVar12 = (float10)fpatan((float10)(float)param_1[0x221] /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)(float)param_1[0x220] /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar12;
      (**(code **)(*param_1 + 0x7c))(&local_30,&local_20);
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            unaff_ESI = (float)((float10)(float)fVar12 / fVar13);
          }
        }
      }
      FUN_00a8d280();
      FUN_00aa4080(7,param_1[0x21c],0,0x3f800000,0x8000000,0xbf800000,unaff_ESI);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x261] = 0;
      return;
    }
    if (iVar10 == 2) {
      iVar10 = FUN_00a94ce0(param_1[0x21c]);
      if (iVar10 != 0) {
        FUN_00a94bc0(param_1[0x21c],0);
        FUN_00a8caf0(0,0,0,0);
      }
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            FUN_00a96030(0,(float)((float10)(float)fVar12 / fVar13));
            return;
          }
        }
      }
      FUN_00a96030(0,uStack_48);
      return;
    }
  }
  return;
}

// 005EF290  FUN_005ef290  size=732  [between]
void __fastcall FUN_005ef290(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  undefined *puVar14;
  undefined4 uStack_48;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = param_1[0x187];
  if (iVar10 == 0) {
    fVar1 = (float)param_1[0x237];
    param_1[0x237] = (int)(fVar1 - 1.0);
    if (fVar1 - 1.0 < 0.0) {
      param_1[0x187] = 1;
    }
  }
  else {
    if (iVar10 == 1) {
      local_30 = param_1[0x22c];
      local_2c = param_1[0x22d];
      local_28 = param_1[0x22e];
      local_24 = param_1[0x22f];
      fVar1 = (float)param_1[0x220];
      fVar2 = (float)param_1[0x221];
      fVar3 = (float)param_1[0x222];
      fVar4 = (float)param_1[0x224];
      fVar5 = (float)param_1[0x225];
      fVar6 = (float)param_1[0x226];
      fVar9 = SQRT((float)param_1[0x22a] * (float)param_1[0x22a] +
                   (float)param_1[0x229] * (float)param_1[0x229] +
                   (float)param_1[0x228] * (float)param_1[0x228]);
      fVar7 = (float)param_1[0x226];
      fVar8 = (float)param_1[0x22a];
      fVar12 = (float10)FUN_00ddbaa0(-((float)param_1[0x222] / fVar9));
      fVar13 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar13;
      local_1c = (float)fVar12;
      fVar12 = (float10)fpatan((float10)(float)param_1[0x221] /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)(float)param_1[0x220] /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar12;
      (**(code **)(*param_1 + 0x7c))(&local_30,&local_20);
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            unaff_ESI = (float)((float10)(float)fVar12 / fVar13);
          }
        }
      }
      FUN_00a8d280();
      FUN_00aa4080(8,param_1[0x21c],0,0x3f800000,0x8000000,0xbf800000,unaff_ESI);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x261] = 0;
      return;
    }
    if (iVar10 == 2) {
      iVar10 = FUN_00a94ce0(param_1[0x21c]);
      if (iVar10 != 0) {
        FUN_00a94bc0(param_1[0x21c],0);
        FUN_00a8caf0(0,0,0,0);
      }
      piVar11 = (int *)FUN_00c13920();
      iVar10 = (**(code **)(*piVar11 + 0x28))(0);
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
        if (piVar11 != (int *)0x0) {
          puVar14 = &DAT_01be9db8;
          (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
          iVar10 = FUN_00dd6d80(puVar14);
          if (iVar10 != 0) {
            fVar12 = (float10)FUN_00e049b0();
            fVar13 = (float10)FUN_00e049b0();
            FUN_00a96030(0,(float)((float10)(float)fVar12 / fVar13));
            return;
          }
        }
      }
      FUN_00a96030(0,uStack_48);
      return;
    }
  }
  return;
}

// 005EF570  FUN_005ef570  size=1178  [between]
void __fastcall FUN_005ef570(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined1 local_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  if (param_1[0x187] == 0) {
    param_1[0x22e] = 0;
    param_1[0x22d] = 0;
    param_1[0x22c] = 0;
    param_1[0x22b] = 0;
    param_1[0x229] = 0;
    param_1[0x228] = 0;
    param_1[0x227] = 0;
    param_1[0x226] = 0;
    param_1[0x224] = 0;
    param_1[0x223] = 0;
    param_1[0x222] = 0;
    param_1[0x221] = 0;
    param_1[0x22f] = 0x3f800000;
    param_1[0x22a] = 0x3f800000;
    param_1[0x225] = 0x3f800000;
    param_1[0x220] = 0x3f800000;
    param_1[0x231] = 0;
    param_1[0x230] = 0;
    param_1[0x232] = 0;
    pcVar4 = *(code **)(*param_1 + 0x20);
    param_1[0x233] = 0;
    (*pcVar4)();
    piVar11 = (int *)FUN_00c13920();
    iVar10 = (**(code **)(*piVar11 + 0x28))(0);
    if (iVar10 != 0) {
      iVar10 = FUN_00a7c8a0();
      if (iVar10 != 0) {
        FID_conflict__memcpy(param_1 + 4,(void *)(iVar10 + 0x10),0x40);
        param_1[0x14] = *(int *)(iVar10 + 0x40);
        param_1[0x15] = *(int *)(iVar10 + 0x44);
        param_1[0x16] = *(int *)(iVar10 + 0x48);
        param_1[0x17] = *(int *)(iVar10 + 0x4c);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    local_108 = 0.0;
    local_10c = 0.0;
    local_110 = 0.0;
    local_114 = 0;
    local_11c = 0.0;
    local_120 = 0.0;
    local_124 = 0;
    local_128 = 0.0;
    local_130 = 0.0;
    local_134 = 0;
    local_138 = 0.0;
    local_13c = 0.0;
    local_104 = 1.0;
    local_118 = 1.0;
    local_12c = 1.0;
    local_140 = 1.0;
    FUN_00a81330();
    iVar10 = FUN_00a7c8a0();
    if (iVar10 != 0) {
      iVar10 = FUN_00a12210(3);
      if (iVar10 != 0) {
        FID_conflict__memcpy(&local_140,(void *)(iVar10 + 0x10),0x40);
        local_d0 = local_110;
        local_cc = local_10c;
        local_c8 = local_108;
        local_c4 = local_104;
        local_70 = 0;
        local_6c = 0x3f800000;
        local_68 = 0;
        thunk_FUN_00de01a0(&local_140,param_1 + 0x14,&local_d0,&local_70);
        fVar1 = local_13c * local_13c;
        fVar9 = local_140 * local_140;
        fVar2 = local_138 * local_138;
        fVar7 = local_12c * local_12c;
        fVar8 = local_130 * local_130;
        fVar6 = local_128 * local_128;
        fVar5 = SQRT(local_118 * local_118 + local_11c * local_11c + local_120 * local_120);
        local_f4 = local_128 / fVar5;
        fVar3 = local_118 / fVar5;
        fVar12 = (float10)FUN_00ddbaa0(-(local_138 / fVar5));
        fVar13 = (float10)fpatan((float10)local_f4,(float10)fVar3);
        local_f0 = (float)fVar13;
        local_ec = (float)fVar12;
        fVar12 = (float10)fpatan((float10)local_13c / (float10)SQRT(fVar6 + fVar8 + fVar7),
                                 (float10)local_140 / (float10)SQRT(fVar2 + fVar9 + fVar1));
        local_e8 = (float)fVar12;
        local_90 = 0;
        local_8c = 0x3f800000;
        local_88 = 0;
        FUN_00ddc1d0(local_50,&local_f0,5);
        D3DXVec3TransformNormal(local_a0,&local_90,local_50);
        local_6c = 0x3f800000;
        local_68 = 0;
        uStack_64 = 0;
        FUN_00ddc1d0(auStack_5c,&fStack_fc,5);
        D3DXVec3TransformNormal(&local_ec,&local_6c,auStack_5c);
        uStack_98 = 0;
        uStack_94 = 0;
        local_90 = 0x3f800000;
        FUN_00ddc1d0(&local_68,&local_108,5);
        D3DXVec3TransformNormal(&local_c8,&uStack_98,&local_68);
        fVar1 = (float)param_1[0x25e];
        fVar2 = (float)param_1[0x25d];
        fVar3 = (float)param_1[0x25c];
        fStack_e4 = (local_104 * fVar3 + local_c4 * fVar2 + fStack_d4 * fVar1) * 0.01;
        fStack_e0 = (fStack_100 * fVar3 + fStack_c0 * fVar2 + local_d0 * fVar1) * 0.01;
        fStack_dc = (fStack_fc * fVar3 + fStack_bc * fVar2 + local_cc * fVar1) * 0.01;
        fStack_d8 = (fVar3 * fStack_f8 + fStack_b8 * fVar2 + local_c8 * fVar1) * 0.01;
        (**(code **)(*param_1 + 0x70))(&fStack_e4);
        return;
      }
    }
  }
  return;
}

// 005EFA10  Pl001c::vf1A4  size=181  [class]
void __thiscall Pl001c::vf1A4(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  undefined *puVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        FUN_00b8c3c0();
      }
    }
  }
  if (((param_2 & 0x100) != 0) && (0 < *(int *)(unaff_retaddr + 0xe8))) {
    iVar2 = unaff_retaddr + 0xa0;
    uVar5 = 0;
    uVar3 = FUN_00a81330(iVar2,0);
    iVar2 = FUN_00c5f540(uVar3,iVar2,uVar5);
    if (iVar2 != 0) {
      FUN_00d89e60(0x14);
    }
  }
  if ((*(int *)(param_1 + 0x8d0) == 0) &&
     (*(undefined4 *)(param_1 + 0x8d0) = 1, (param_2 & 0x100) != 0)) {
    FUN_00d89e60(0x13);
  }
  return;
}

// 005EFB40  Pl001c::vf4C  size=124  [class]
void __fastcall Pl001c::vf4C(int *param_1)

{
  Behavior::vf4C();
  switch(param_1[0x186]) {
  case 0:
    FUN_005edb20();
    break;
  case 1:
    FUN_005ee4d0();
    break;
  case 2:
    FUN_005eea90();
    break;
  case 3:
    FUN_005eecc0();
    break;
  case 4:
    FUN_005eefb0();
    break;
  case 5:
    FUN_005ef290();
    break;
  case 6:
    FUN_005ee7b0();
    break;
  case 7:
    FUN_005edf80();
    break;
  case 8:
    FUN_005ef570();
    break;
  case 9:
    FUN_005ee0f0();
  }
                    /* WARNING: Could not recover jumptable at 0x005efbba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 005EFBF0  Pl001c::setSeqAtk  size=2412  [class]
/* WARNING: Removing unreachable block (ram,0x005f045c) */

void __fastcall Pl001c::setSeqAtk(float *param_1)

{
  float fVar1;
  float fVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float *unaff_EBX;
  int **ppiVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int *piVar14;
  float10 fVar15;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  float *local_614;
  float local_610;
  undefined4 uStack_60c;
  float fStack_608;
  int *piStack_604;
  float fStack_5ec;
  int local_5e8;
  int *apiStack_5e4 [3];
  float afStack_5d8 [6];
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  float local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  float local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined1 auStack_57c [8];
  int local_574 [17];
  float local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined1 local_520 [36];
  undefined1 auStack_4fc [8];
  undefined1 auStack_4f4 [84];
  float local_4a0 [16];
  undefined4 local_460 [16];
  undefined **local_420;
  int *local_41c;
  int local_418;
  undefined4 local_414;
  int local_410 [259];
  
  Behavior::setSeqAtk();
  iVar5 = FUN_00a96130();
  local_41c = local_410;
  local_418 = 0;
  local_414 = 0x100;
  local_420 = lib::StaticArray<Collision*,256>::vftable;
  local_574[0] = iVar5;
  FUN_00a9d9a0();
  local_5e8 = 0;
  local_614 = param_1;
  if (0 < iVar5) {
    do {
      puVar3 = (ushort *)local_460[local_5e8];
      FID_conflict__memcpy(local_4a0,param_1 + 4,0x40);
      FID_conflict__memcpy(local_520,param_1 + 4,0x40);
      FUN_00a92f90();
      iVar5 = FUN_00e3a1e0();
      uVar4 = puVar3[3];
      if (iVar5 != 0) {
        uVar4 = FUN_00a96170();
      }
      pfVar6 = param_1;
      if (uVar4 != 0xffff) {
        pfVar6 = (float *)FUN_00a12210();
      }
      if (pfVar6 != (float *)0x0) {
        pfVar6 = pfVar6 + 4;
        pfVar12 = local_4a0;
        for (iVar8 = 0x10; param_1 = local_614, iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar12 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar12 = pfVar12 + 1;
        }
      }
      local_530 = *(float *)(puVar3 + 6);
      local_52c = *(undefined4 *)(puVar3 + 8);
      local_528 = *(undefined4 *)(puVar3 + 10);
      fVar1 = *(float *)(puVar3 + 0xc);
      fVar2 = *(float *)(puVar3 + 0xe);
      if (iVar5 != 0) {
        fVar2 = fVar2 * -1.0;
        local_530 = local_530 * -1.0;
      }
      local_588 = 0;
      local_58c = 0;
      local_590 = 0.0;
      local_594 = 0;
      local_59c = 0;
      local_5a0 = 0;
      local_5a4 = 0;
      local_5a8 = 0;
      local_5b0 = 0;
      local_5b4 = 0;
      local_5b8 = 0;
      local_5bc = 0;
      local_584 = 0x3f800000;
      local_598 = 0x3f800000;
      local_5ac = 1.0;
      local_5c0 = 0x3f800000;
      if (*(float *)(puVar3 + 0x10) != 0.0) {
        D3DXMatrixRotationZ();
        D3DXMatrixMultiply();
      }
      if (fVar2 != 0.0) {
        D3DXMatrixRotationY();
        D3DXMatrixMultiply();
      }
      if (fVar1 != 0.0) {
        D3DXMatrixRotationX();
        D3DXMatrixMultiply();
      }
      local_590 = local_530;
      local_58c = local_52c;
      local_588 = local_528;
      D3DXMatrixMultiply();
      local_5e8 = *(int *)(puVar3 + 0x14);
      fStack_5ec = 0.0;
      apiStack_5e4[0] = (int *)0x0;
      pfVar6 = &fStack_5ec;
      afStack_5d8[0] = -*(float *)(puVar3 + 0x14);
      apiStack_5e4[2] = (int *)0x0;
      afStack_5d8[1] = 0.0;
      D3DXVec3TransformNormal();
      D3DXVec3TransformNormal(&local_5e8,&local_5e8,afStack_5d8);
      fStack_5ec = fStack_5ec + local_5ac;
      switch(*(undefined1 *)((int)puVar3 + 3)) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 8:
        goto LAB_005f00c2;
      case 9:
LAB_005f00c2:
        ppiVar10 = apiStack_5e4;
        piVar7 = local_574 + 0xc;
        for (iVar5 = 0x10; param_1 = unaff_EBX, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar7 = (int)*ppiVar10;
          ppiVar10 = ppiVar10 + 1;
          piVar7 = piVar7 + 1;
        }
        break;
      case 10:
      case 7:
        goto LAB_005f00c2;
      case 0xb:
        ppiVar10 = apiStack_5e4;
        piVar7 = local_574 + 0xc;
        for (iVar5 = 0x10; param_1 = unaff_EBX, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar7 = (int)*ppiVar10;
          ppiVar10 = ppiVar10 + 1;
          piVar7 = piVar7 + 1;
        }
        break;
      case 0xc:
        ppiVar10 = apiStack_5e4;
        piVar7 = local_574 + 0xc;
        for (iVar5 = 0x10; param_1 = unaff_EBX, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar7 = (int)*ppiVar10;
          ppiVar10 = ppiVar10 + 1;
          piVar7 = piVar7 + 1;
        }
      }
      D3DXVec3TransformNormal(&stack0xfffff9ac,&stack0xfffff9ac,local_574 + 0xc);
      apiStack_5e4[0] = (int *)(**(code **)((int)*param_1 + 0x130))(puVar3);
      if (apiStack_5e4[0] == (int *)0x0) {
        FUN_00dd5650();
      }
      else {
        iVar5 = apiStack_5e4[0][2];
        *(ushort *)(iVar5 + 0x80) = puVar3[4];
        *(ushort *)(iVar5 + 0x82) = puVar3[2];
        *(undefined4 *)(iVar5 + 0x20) = uStack_630;
        *(undefined4 *)(iVar5 + 0x24) = uStack_62c;
        *(undefined4 *)(iVar5 + 0x28) = uStack_628;
        *(undefined4 *)(iVar5 + 0x2c) = uStack_624;
        fVar15 = (float10)fpatan((float10)(float)piStack_604,(float10)fStack_608);
        *(float *)(iVar5 + 0x30) = (float)fVar15;
        fStack_608 = (float)(uint)*puVar3;
        if (3 < (uint)fStack_608) {
          fStack_608 = 5.60519e-45;
        }
        iVar8 = FUN_00a12210();
        if (iVar8 == 0) {
          local_574[0xf] = 0;
          local_574[0xe] = 0;
          local_574[0xd] = 0;
          local_574[0xc] = 0;
          local_574[10] = 0;
          local_574[9] = 0;
          local_574[8] = 0;
          local_574[7] = 0;
          local_574[5] = 0;
          local_574[4] = 0;
          local_574[3] = 0;
          local_574[2] = 0;
          local_574[0x10] = 0x3f800000;
          local_574[0xb] = 0x3f800000;
          local_574[6] = 0x3f800000;
          local_574[1] = 0x3f800000;
          D3DXMatrixRotationZ();
          D3DXMatrixMultiply();
          D3DXMatrixRotationX(auStack_4f4,0x40490fdb);
          D3DXMatrixMultiply(&local_58c,auStack_4fc,&local_58c);
          D3DXMatrixMultiply(iVar5 + 0x40,&local_598,&local_5e8);
        }
        else {
          puVar11 = (undefined4 *)(iVar8 + 0x10);
          puVar13 = (undefined4 *)(iVar5 + 0x40);
          for (iVar9 = 0x10; param_1 = local_614, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
        }
        if (((char)puVar3[1] == '\x03') &&
           (piStack_604 = local_41c, piVar7 = local_41c, pfVar12 = param_1,
           local_41c != local_41c + local_418)) {
          do {
            iVar5 = *(int *)(*piStack_604 + 0x378);
            param_1 = pfVar12;
            if (iVar5 != 0) {
              piVar7 = (int *)FUN_00c13920();
              param_1 = (float *)(**(code **)(*piVar7 + 0x28))();
              if (param_1 != (float *)0x0) {
                piVar7 = (int *)FUN_00a7c8a0();
                if (piVar7 == (int *)0x0) {
LAB_005f03a6:
                  *(float *)(*(int *)(iVar5 + 8) + 0x14) = pfVar12[0x13c];
                }
                else {
                  (**(code **)(*piVar7 + 4))();
                  iVar8 = FUN_00dd6d80();
                  if (iVar8 == 0) goto LAB_005f03a6;
                  *(int *)(*(int *)(iVar5 + 8) + 0x14) = piVar7[0x13c];
                }
                FUN_00bda020();
                FUN_00b8c140();
              }
              FUN_00a7c7f0();
              FUN_00a7c960();
              FID_conflict__memcpy(local_574,pfVar12 + 0x220,0x40);
              D3DXMatrixRotationY();
              D3DXMatrixMultiply(auStack_57c);
              local_610 = 3.0;
              if (pfVar12[0x260] != 3.0) {
                local_610 = pfVar12[0x260];
              }
              uStack_60c = 1;
              piVar7 = (int *)FUN_00a7c8a0();
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 4))();
                iVar8 = FUN_00dd6d80();
                if (((iVar8 != 0) && (iVar8 = FUN_00b88550(), iVar8 != 0)) && (piVar7[0xee7] == 0))
                {
                  local_610 = 0.0;
                  uStack_60c = 0;
                }
              }
              iVar5 = *(int *)(iVar5 + 8);
              fVar1 = pfVar12[0x231];
              fVar2 = param_1[0x1d8];
              *(undefined4 *)(iVar5 + 0x94) = 1;
              piVar7 = local_574;
              piVar14 = (int *)(iVar5 + 0xa0);
              for (iVar8 = 0x10; piVar7 = piVar7 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar14 = *piVar7;
                piVar14 = piVar14 + 1;
              }
              *(float *)(iVar5 + 0xe0) = local_610;
              *(undefined4 *)(iVar5 + 0xe4) = 0x3f060a92;
              *(float *)(iVar5 + 0xe8) = fVar1;
              *(undefined4 *)(iVar5 + 0xec) = uStack_60c;
              *(int *)(iVar5 + 0xf0) = (int)fVar2 + (int)fStack_608;
              piVar7 = local_41c;
              local_614 = param_1;
            }
            piStack_604 = piStack_604 + 1;
            pfVar12 = param_1;
          } while (piStack_604 != piVar7 + local_418);
        }
        (**(code **)(*apiStack_5e4[0] + 4))();
      }
      local_5e8 = local_5e8 + 1;
      unaff_EBX = pfVar6;
    } while (local_5e8 < local_574[0]);
  }
  return;
}

// 00AA6100  Pl001c::Pl001c  size=29  [class]
undefined4 * __fastcall Pl001c::Pl001c(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6120  Pl001c::vf04  size=6  [class]
undefined * Pl001c::vf04(void)

{
  return &DAT_01b353e0;
}

// 00AB6670  Pl001c::destruct  size=105  [class]
undefined4 * __thiscall Pl001c::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

