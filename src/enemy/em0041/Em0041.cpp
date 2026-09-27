// src/enemy/em0041/Em0041.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043C080..00AB6D00, 23 functions

#include "types.h"

// 0043C080  Em0041::vf114  size=62  [class]
void __thiscall Em0041::vf114(int *param_1,int param_2)

{
  int iVar1;
  
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  iVar1 = param_1[0x162];
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xa8) = 1;
    *(undefined4 *)(iVar1 + 0xac) = 1;
  }
  return;
}

// 0043C0C0  Em0041::vf44  size=87  [class]
void __fastcall Em0041::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a92ef0();
  FUN_00a944d0();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  Behavior::vf44();
  return;
}

// 0043C120  Em0041::vf48  size=5  [class]
void __fastcall Em0041::vf48(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x64c) = 0;
  if (*(int *)(param_1 + 2000) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 2000) + 8) = (float)(fVar1 * (float10)0.016666668);
  }
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d82df0(*(int *)(param_1 + 2000));
  }
  if (*(int *)(param_1 + 0x7d8) != 0) {
    thunk_FUN_00c73380();
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0x3f800000;
  return;
}

// 0043C1B0  FUN_0043c1b0  size=237  [between]
void __thiscall FUN_0043c1b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x370);
  if (param_2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      *puVar1 = 1;
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (*(undefined4 **)(iVar2 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xffbfffff;
        **(undefined4 **)(iVar2 + 0x370) = 1;
      }
    }
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      *puVar1 = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (*(undefined4 **)(iVar2 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) | 0x400000;
        **(undefined4 **)(iVar2 + 0x370) = 0;
      }
      iVar2 = FUN_00a7c8a0();
      if (*(int *)(iVar2 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x370) + 4) = 0;
        *(undefined4 *)(*(int *)(iVar2 + 0x370) + 8) = 1;
        return;
      }
    }
  }
  return;
}

// 0043C2A0  FUN_0043c2a0  size=156  [between]
void __thiscall FUN_0043c2a0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  FUN_00a81330();
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar5 = &DAT_01b34c58;
    (**(code **)(*piVar1 + 4))(&DAT_01b34c58);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x894) = 1;
      if (param_3 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        puVar5 = &DAT_01b34c54;
        (**(code **)(*param_3 + 4))(&DAT_01b34c54);
        iVar2 = FUN_00dd6d80(puVar5);
        uVar3 = -(uint)(iVar2 != 0) & (uint)param_3;
      }
      FUN_00a7c940(uVar3 + 0x880);
      FUN_00a81330(param_4);
      uVar4 = FUN_00a7c8a0();
      FUN_0043dba0(param_2,uVar4,param_4);
    }
  }
  return;
}

// 0043C340  FUN_0043c340  size=85  [between]
void __thiscall FUN_0043c340(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  FUN_00a81330();
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01b34c58;
    (**(code **)(*piVar1 + 4))(&DAT_01b34c58);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x894) = 1;
      FUN_0043dac0(param_2,param_3);
    }
  }
  return;
}

// 0043C3A0  Em0041::vf34  size=41  [class]
void __fastcall Em0041::vf34(int *param_1)

{
  Bh0064::vf34();
  param_1[0x227] = 1;
  *(undefined4 *)(param_1[0x13c] + 0x54) = 0;
                    /* WARNING: Could not recover jumptable at 0x0043c3c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 0043C3D0  Em0041::vf50  size=240  [class]
void __fastcall Em0041::vf50(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if ((iVar4 != 0) &&
     (iVar4 = FUN_00a7c8a0(), fVar1 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10],
     fVar2 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12],
     SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 50.0)) {
    (**(code **)(*param_1 + 100))();
    FUN_00a93170();
  }
  Behavior::vf50();
  iVar4 = FUN_00a8cab0();
  if (iVar4 == 2) {
    iVar4 = FUN_00a12210(0);
    piVar3 = param_1 + 4;
    piVar6 = (int *)(iVar4 + 0x10);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar6 = piVar6 + 1;
    }
  }
  if (((param_1[0x1ec] != 0) && (iVar4 = FUN_00a8cab0(), iVar4 != 1)) &&
     (iVar4 = FUN_00a8cac0(), iVar4 != 2)) {
    FUN_008f3cb0(param_1);
  }
  if (0.0 < (float)param_1[0x221]) {
    fVar7 = (float10)FUN_00a93060();
    fVar1 = (float)param_1[0x221];
    param_1[0x221] = (int)(float)((float10)fVar1 - fVar7);
    if ((float10)fVar1 - fVar7 <= (float10)0) {
      param_1[0x221] = (int)(float)(float10)0;
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 0043C4C0  Em0041::vf54  size=122  [class]
void __fastcall Em0041::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if ((iVar4 != 0) &&
     (iVar4 = FUN_00a7c8a0(), fVar1 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x40),
     fVar2 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48),
     50.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
    return;
  }
  Behavior::vf54();
  iVar4 = FUN_00a8cab0();
  if (((iVar4 == 1) && (iVar4 = FUN_00a8cac0(), 1 < iVar4)) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f7700(param_1);
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 0043C540  FUN_0043c540  size=566  [between]
void __fastcall FUN_0043c540(int param_1)

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
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  float10 fVar17;
  float10 fVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  iVar12 = FUN_00a8cac0();
  if (iVar12 == 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1c);
    FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d49c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    iVar12 = FUN_00a81330();
    if (iVar12 != 0) {
      uVar25 = 0x3f800000;
      iVar12 = param_1 + 0x878;
      uVar24 = 0xbf800000;
      uVar23 = 0;
      uVar21 = 0x3f800000;
      uVar20 = 0;
      uVar22 = 0;
      puVar19 = &DAT_0163d49c;
      FUN_00a7c8a0(iVar12,&DAT_0163d49c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9f0e0(iVar12,puVar19,uVar22,uVar20,uVar21,uVar23,uVar24,uVar25);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar12 != 1) {
    return;
  }
  iVar12 = FUN_00a81330();
  if (iVar12 != 0) {
    iVar12 = FUN_00a12210(0);
    uVar22 = 0;
    FUN_00a7c8a0(0);
    iVar13 = FUN_00a12210(uVar22);
    puVar15 = (undefined4 *)(iVar12 + 0x10);
    puVar16 = (undefined4 *)(iVar13 + 0x10);
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    uVar22 = 0;
    FUN_00a7c8a0(0);
    iVar12 = FUN_00a12210(uVar22);
    *(ushort *)(iVar12 + 0xa2) = *(ushort *)(iVar12 + 0xa2) | 4;
    iVar12 = FUN_00a12210(0);
    iVar13 = FUN_00a7c8a0();
    puVar15 = (undefined4 *)(iVar12 + 0x10);
    puVar16 = (undefined4 *)(iVar13 + 0x10);
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    iVar12 = FUN_00a7c8a0();
    iVar13 = FUN_00a7c8a0();
    *(undefined4 *)(iVar13 + 0x50) = *(undefined4 *)(iVar12 + 0x40);
    *(undefined4 *)(iVar13 + 0x54) = *(undefined4 *)(iVar12 + 0x44);
    *(undefined4 *)(iVar13 + 0x58) = *(undefined4 *)(iVar12 + 0x48);
    *(undefined4 *)(iVar13 + 0x5c) = *(undefined4 *)(iVar12 + 0x4c);
    iVar12 = FUN_00a7c8a0();
    iVar13 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar12 + 0x10);
    fVar2 = *(float *)(iVar12 + 0x14);
    fVar3 = *(float *)(iVar12 + 0x18);
    fVar4 = *(float *)(iVar12 + 0x20);
    fVar5 = *(float *)(iVar12 + 0x24);
    fVar6 = *(float *)(iVar12 + 0x28);
    fVar11 = SQRT(*(float *)(iVar12 + 0x38) * *(float *)(iVar12 + 0x38) +
                  *(float *)(iVar12 + 0x34) * *(float *)(iVar12 + 0x34) +
                  *(float *)(iVar12 + 0x30) * *(float *)(iVar12 + 0x30));
    fVar7 = *(float *)(iVar12 + 0x28);
    fVar8 = *(float *)(iVar12 + 0x38);
    fVar17 = (float10)FUN_00ddbaa0(-(*(float *)(iVar12 + 0x18) / fVar11));
    fVar9 = *(float *)(iVar12 + 0x14);
    fVar10 = *(float *)(iVar12 + 0x10);
    fVar18 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
    *(float *)(iVar13 + 0x90) = (float)fVar18;
    *(float *)(iVar13 + 0x94) = (float)fVar17;
    fVar17 = (float10)fpatan((float10)fVar9 /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)fVar10 /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    *(float *)(iVar13 + 0x98) = (float)fVar17;
    iVar12 = FUN_00a7c8a0();
    *(ushort *)(iVar12 + 0xa2) = *(ushort *)(iVar12 + 0xa2) | 4;
  }
  return;
}

// 0043C780  FUN_0043c780  size=1655  [between]
void __fastcall FUN_0043c780(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
    iVar6 = FUN_00a12210(0);
    *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) | 4;
    FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d4b4,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      uVar18 = 0x3f800000;
      iVar6 = param_1 + 0x878;
      uVar17 = 0xbf800000;
      uVar16 = 0x8000080;
      uVar15 = 0x3f800000;
      uVar14 = 0;
      uVar5 = 0;
      puVar13 = &DAT_0163d4b4;
      FUN_00a7c8a0(iVar6,&DAT_0163d4b4,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      FUN_00a9f0e0(iVar6,puVar13,uVar5,uVar14,uVar15,uVar16,uVar17,uVar18);
    }
    local_34 = *(float *)(param_1 + 0x8d0);
    local_30 = *(float *)(param_1 + 0x8d4);
    local_2c = *(float *)(param_1 + 0x8d8);
    fStack_28 = *(float *)(param_1 + 0x8dc);
    uStack_24 = *(undefined4 *)(param_1 + 0x50);
    fStack_20 = *(float *)(param_1 + 0x54);
    uStack_1c = *(undefined4 *)(param_1 + 0x58);
    fStack_18 = *(float *)(param_1 + 0x5c);
    D3DXVec3TransformNormal(&local_34,&local_34,param_1 + 0xf0);
    D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 0xf0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar11 = (float10)fpatan((float10)local_30 -
                             ((float10)*(float *)(param_1 + 0x120) + (float10)fStack_20),
                             (float10)fStack_28 -
                             ((float10)*(float *)(param_1 + 0x128) + (float10)fStack_18));
    *(float *)(param_1 + 0x94) = (float)fVar11;
  case 1:
    *(float *)(param_1 + 0x50) =
         (*(float *)(param_1 + 0x8d0) - *(float *)(param_1 + 0x50)) * 0.2 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0x8d4) - *(float *)(param_1 + 0x54)) * 0.2 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         (*(float *)(param_1 + 0x8d8) - *(float *)(param_1 + 0x58)) * 0.2 +
         *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (*(float *)(param_1 + 0x8dc) - *(float *)(param_1 + 0x5c)) * 0.2 +
         *(float *)(param_1 + 0x5c);
    fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x8d0);
    fVar3 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x8d4);
    fVar2 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x8d8);
    if (SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) < 0.1) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x8d0);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x8d4);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x8d8);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x8dc);
      FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d4b4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        uVar18 = 0x3f800000;
        iVar6 = param_1 + 0x878;
        uVar17 = 0xbf800000;
        uVar16 = 0x8000000;
        uVar15 = 0x3f800000;
        uVar14 = 0;
        uVar5 = 0;
        puVar13 = &DAT_0163d4b4;
        FUN_00a7c8a0(iVar6,&DAT_0163d4b4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00a9f0e0(iVar6,puVar13,uVar5,uVar14,uVar15,uVar16,uVar17,uVar18);
      }
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 2:
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 == 0) break;
    FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d4ac,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      uVar5 = 0;
      puVar13 = &DAT_0163d4ac;
LAB_0043cac3:
      uVar18 = 0x3f800000;
      uVar17 = 0xbf800000;
      uVar16 = 0x3f800000;
      uVar15 = 0x3e4ccccd;
      uVar14 = 0;
      iVar6 = param_1 + 0x878;
      FUN_00a7c8a0(iVar6,puVar13,0,0x3e4ccccd,0x3f800000,uVar5,0xbf800000,0x3f800000);
      FUN_00a9f0e0(iVar6,puVar13,uVar14,uVar15,uVar16,uVar5,uVar17,uVar18);
    }
    goto LAB_0043cad8;
  case 3:
    puVar9 = (undefined4 *)(param_1 + 0x90);
    *(float *)(param_1 + 0x50) =
         (*(float *)(param_1 + 0x8e0) - *(float *)(param_1 + 0x50)) * 0.2 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0x8e4) - *(float *)(param_1 + 0x54)) * 0.2 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         (*(float *)(param_1 + 0x8e8) - *(float *)(param_1 + 0x58)) * 0.2 +
         *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (*(float *)(param_1 + 0x8ec) - *(float *)(param_1 + 0x5c)) * 0.2 +
         *(float *)(param_1 + 0x5c);
    FUN_00ddefe0(puVar9,puVar9,(undefined4 *)(param_1 + 0x8f0),0x3e4ccccd,5);
    fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x8e0);
    fVar3 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x8e4);
    fVar2 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x8e8);
    if (0.1 <= SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) break;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x8e0);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x8e4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x8e8);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x8ec);
    *puVar9 = *(undefined4 *)(param_1 + 0x8f0);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x8f4);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x8f8);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x8fc);
    FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d4a4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      uVar5 = 0x8000000;
      puVar13 = &DAT_0163d4a4;
      goto LAB_0043cac3;
    }
LAB_0043cad8:
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 4:
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_0043c1b0(1);
      FUN_00a8caf0(0,0,0,0);
    }
  default:
    break;
  }
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    iVar6 = FUN_00a12210(0);
    uVar5 = 0;
    FUN_00a7c8a0(0);
    iVar7 = FUN_00a12210(uVar5);
    puVar9 = (undefined4 *)(iVar6 + 0x10);
    puVar10 = (undefined4 *)(iVar7 + 0x10);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar5 = 0;
    FUN_00a7c8a0(0);
    iVar6 = FUN_00a12210(uVar5);
    *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) | 4;
    iVar6 = FUN_00a12210(0);
    iVar7 = FUN_00a7c8a0();
    puVar9 = (undefined4 *)(iVar6 + 0x10);
    puVar10 = (undefined4 *)(iVar7 + 0x10);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar6 = FUN_00a7c8a0();
    iVar7 = FUN_00a7c8a0();
    *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar6 + 0x40);
    *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(iVar6 + 0x44);
    *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar6 + 0x48);
    *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(iVar6 + 0x4c);
    iVar6 = FUN_00a7c8a0();
    iVar7 = FUN_00a7c8a0();
    local_30 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                    *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                    *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
    local_2c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                    *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
    fVar4 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                 *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                 *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
    local_34 = *(float *)(iVar6 + 0x28) / fVar4;
    fVar1 = *(float *)(iVar6 + 0x38);
    fVar11 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar4));
    fVar2 = *(float *)(iVar6 + 0x14);
    fVar3 = *(float *)(iVar6 + 0x10);
    fVar12 = (float10)fpatan((float10)local_34,(float10)(fVar1 / fVar4));
    *(float *)(iVar7 + 0x90) = (float)fVar12;
    *(float *)(iVar7 + 0x94) = (float)fVar11;
    fVar11 = (float10)fpatan((float10)fVar2 / (float10)local_2c,(float10)fVar3 / (float10)local_30);
    *(float *)(iVar7 + 0x98) = (float)fVar11;
    iVar6 = FUN_00a7c8a0();
    *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) | 4;
  }
  return;
}

// 0043CE10  FUN_0043ce10  size=537  [between]
void __fastcall FUN_0043ce10(int param_1)

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
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  float10 fVar17;
  float10 fVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  iVar12 = FUN_00a8cac0();
  if (iVar12 == 0) {
    FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d4bc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    iVar12 = FUN_00a81330();
    if (iVar12 != 0) {
      uVar25 = 0x3f800000;
      iVar12 = param_1 + 0x878;
      uVar24 = 0xbf800000;
      uVar23 = 0;
      uVar22 = 0x3f800000;
      uVar21 = 0;
      uVar20 = 0;
      puVar19 = &DAT_0163d4bc;
      FUN_00a7c8a0(iVar12,&DAT_0163d4bc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9f0e0(iVar12,puVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  iVar12 = FUN_00a81330();
  if (iVar12 != 0) {
    iVar12 = FUN_00a12210(0);
    uVar20 = 0;
    FUN_00a7c8a0(0);
    iVar13 = FUN_00a12210(uVar20);
    puVar15 = (undefined4 *)(iVar12 + 0x10);
    puVar16 = (undefined4 *)(iVar13 + 0x10);
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    uVar20 = 0;
    FUN_00a7c8a0(0);
    iVar12 = FUN_00a12210(uVar20);
    *(ushort *)(iVar12 + 0xa2) = *(ushort *)(iVar12 + 0xa2) | 4;
    iVar12 = FUN_00a12210(0);
    iVar13 = FUN_00a7c8a0();
    puVar15 = (undefined4 *)(iVar12 + 0x10);
    puVar16 = (undefined4 *)(iVar13 + 0x10);
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    iVar12 = FUN_00a7c8a0();
    iVar13 = FUN_00a7c8a0();
    *(undefined4 *)(iVar13 + 0x50) = *(undefined4 *)(iVar12 + 0x40);
    *(undefined4 *)(iVar13 + 0x54) = *(undefined4 *)(iVar12 + 0x44);
    *(undefined4 *)(iVar13 + 0x58) = *(undefined4 *)(iVar12 + 0x48);
    *(undefined4 *)(iVar13 + 0x5c) = *(undefined4 *)(iVar12 + 0x4c);
    iVar12 = FUN_00a7c8a0();
    iVar13 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar12 + 0x10);
    fVar2 = *(float *)(iVar12 + 0x14);
    fVar3 = *(float *)(iVar12 + 0x18);
    fVar4 = *(float *)(iVar12 + 0x20);
    fVar5 = *(float *)(iVar12 + 0x24);
    fVar6 = *(float *)(iVar12 + 0x28);
    fVar11 = SQRT(*(float *)(iVar12 + 0x38) * *(float *)(iVar12 + 0x38) +
                  *(float *)(iVar12 + 0x34) * *(float *)(iVar12 + 0x34) +
                  *(float *)(iVar12 + 0x30) * *(float *)(iVar12 + 0x30));
    fVar7 = *(float *)(iVar12 + 0x28);
    fVar8 = *(float *)(iVar12 + 0x38);
    fVar17 = (float10)FUN_00ddbaa0(-(*(float *)(iVar12 + 0x18) / fVar11));
    fVar9 = *(float *)(iVar12 + 0x14);
    fVar10 = *(float *)(iVar12 + 0x10);
    fVar18 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
    *(float *)(iVar13 + 0x90) = (float)fVar18;
    *(float *)(iVar13 + 0x94) = (float)fVar17;
    fVar17 = (float10)fpatan((float10)fVar9 /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)fVar10 /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    *(float *)(iVar13 + 0x98) = (float)fVar17;
    iVar12 = FUN_00a7c8a0();
    *(ushort *)(iVar12 + 0xa2) = *(ushort *)(iVar12 + 0xa2) | 4;
  }
  return;
}

// 0043D030  FUN_0043d030  size=118  [between]
void __fastcall FUN_0043d030(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  FUN_00a8ca80(0,0,0);
  uVar1 = FUN_004039a0(0x3d,param_1,0);
  FUN_00a8c8b0(0x20040,uVar1);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x221] = 0x40400000;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar3 + 0x20))();
  }
  return;
}

// 0043D0B0  Em0041::vf30  size=88  [class]
void __fastcall Em0041::vf30(int param_1)

{
  undefined4 uVar1;
  
  Bh0064::vf30();
  if (*(int *)(param_1 + 0x898) != 0) {
    uVar1 = FUN_004039a0(0x28,param_1,0);
    FUN_00a8c8b0(0x20040,uVar1);
    FUN_00a8caf0(3,0,0,0);
    return;
  }
  FUN_0043d030();
  return;
}

// 0043D110  Em0041::vf40  size=653  [class]
undefined4 __fastcall Em0041::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  
  iVar1 = Behavior::startup();
  if ((iVar1 != 0) &&
     (iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>(), iVar1 != 0)) {
    lib::AllocatedArray<Behavior::InstructionContainer>::
    AllocatedArray<Behavior::InstructionContainer>();
    *(undefined4 *)(param_1 + 0x884) = 0;
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x8a4) = 0;
    *(undefined4 *)(param_1 + 0x894) = 0;
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    *(undefined4 *)(param_1 + 0x8a0) = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_16c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&uStack_16c);
    if (iVar1 != 0) {
      uStack_170 = 0;
      iVar1 = FUN_00a54ae0(&uStack_170,param_1 + 0x494,"_col.hkx");
      if (iVar1 != 0) {
        iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = RigidBodyCollection::RigidBodyCollection_2();
        }
        *(undefined4 *)(param_1 + 0x7b0) = uVar3;
        iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,uStack_170);
        if (iVar1 != 0) {
          FUN_008f2cd0(0);
          (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1c);
          puVar4 = (undefined4 *)FUN_009f8b60();
          (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x20);
          FUN_008f1600(0x4000000);
        }
      }
      FUN_00a826c0(param_1 + 0x870,0x20040);
      FUN_00a826c0(param_1 + 0x878,0x20040);
      uVar3 = FUN_004039a0(4,param_1,0);
      FUN_00a8c8b0(0x20040,uVar3);
      switch(*(undefined4 *)(param_1 + 0x4a0)) {
      case 0:
        uVar3 = FUN_00a82090("hands",0x20042,0);
        FUN_00a7c970(uVar3);
        FUN_0043c1b0(1);
        FUN_00a8caf0(0,0,0,0);
        return 1;
      case 1:
        uVar3 = FUN_00a82090("hands",0x20042,0);
        FUN_00a7c970(uVar3);
        FUN_0043c1b0(0);
        FUN_00a8caf0(2,0,0,0);
        return 1;
      case 2:
        *(undefined4 *)(param_1 + 0x898) = 1;
        FUN_0043c1b0(1);
        FUN_00a8caf0(0,0,0,0);
        return 1;
      case 3:
        uVar3 = FUN_00a82090("hands",0x20042,0);
        FUN_00a7c970(uVar3);
        FUN_0043c1b0(0);
        FUN_00a8caf0(4,0,0,0);
      }
      return 1;
    }
  }
  return 0;
}

// 0043D820  FUN_0043d820  size=405  [between]
void __fastcall FUN_0043d820(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00a8c9b0(0,1,0,0);
    uVar2 = FUN_004039a0(0x29,param_1,0);
    FUN_00a8c8b0(0x20040,uVar2);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x890) = 0x3f800000;
    break;
  case 1:
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x890);
    fVar3 = (float10)FUN_00a93060();
    fVar3 = (float10)fVar1 - fVar3;
    *(float *)(param_1 + 0x890) = (float)fVar3;
    fVar4 = (float10)0;
    if (fVar4 < fVar3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x890) = 0x3f000000;
    FUN_00a8c9b0(0,0x2a,(float)fVar4,(float)fVar4);
    uVar2 = 0x3c;
    goto LAB_0043d8ec;
  case 3:
    fVar1 = *(float *)(param_1 + 0x890);
    fVar4 = (float10)FUN_00a93060();
    fVar4 = (float10)fVar1 - fVar4;
    *(float *)(param_1 + 0x890) = (float)fVar4;
    if (fVar4 <= (float10)0) {
      *(float *)(param_1 + 0x890) = (float)(float10)0;
      *(undefined4 *)(param_1 + 0x8a4) = 1;
      FUN_0043d030();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
  default:
    goto switchD_0043d83f_default;
  }
  fVar1 = *(float *)(param_1 + 0x890);
  fVar3 = (float10)FUN_00a93060();
  fVar3 = (float10)fVar1 - fVar3;
  *(float *)(param_1 + 0x890) = (float)fVar3;
  fVar4 = (float10)0;
  if (fVar3 <= fVar4) {
    *(undefined4 *)(param_1 + 0x890) = 0x40000000;
    FUN_00a8c9b0(0,0x29,(float)fVar4,(float)fVar4);
    uVar2 = 0x2a;
LAB_0043d8ec:
    uVar2 = FUN_004039a0(uVar2,param_1,0);
    FUN_00a8c8b0(0x20040,uVar2);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_0043d83f_default:
  return;
}

// 0043D9D0  Em0041::vf4C  size=1315  [class]
void __fastcall Em0041::vf4C(int param_1)

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
  float fVar10;
  float fVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 unaff_ESI;
  undefined4 *puVar17;
  undefined4 unaff_EDI;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  undefined *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  
  Behavior::vf4C();
  iVar18 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x63c) + 8)) {
    do {
      piVar13 = (int *)FUN_00a92f50(iVar18);
      if (*piVar13 == 0) {
        FUN_00a8caf0(1,0,0,0);
        *(undefined4 *)(param_1 + 0x8a0) = 1;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(*(int *)(param_1 + 0x63c) + 8));
  }
  FUN_00a9d860();
  uVar14 = FUN_00a8cab0();
  switch(uVar14) {
  case 0:
    iVar18 = FUN_00a81330();
    if (iVar18 == 0) {
      FUN_00a8caf0(1,0,0,0);
    }
  }
  uVar14 = FUN_00a8cab0();
  switch(uVar14) {
  case 0:
    FUN_0043c540();
    return;
  case 1:
    break;
  case 2:
    FUN_0043c780();
    return;
  case 3:
    FUN_0043d820();
    return;
  case 4:
    FUN_0043ce10();
    return;
  default:
    return;
  }
  iVar18 = FUN_00a8cac0(unaff_EDI,unaff_ESI);
  if (iVar18 == 0) {
    if (*(int *)(param_1 + 0x8a0) == 0) {
      uVar14 = FUN_004039a0(0x2b,param_1,0);
      FUN_00a8c8b0(0x20040,uVar14);
    }
    else {
      uVar14 = FUN_004039a0(0x2a,param_1,0);
      FUN_00a8c8b0(0x20040,uVar14);
    }
    iVar18 = FUN_00a12210(0);
    *(ushort *)(iVar18 + 0xa2) = *(ushort *)(iVar18 + 0xa2) & 0xfffb;
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) & 0xfffb;
    FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d4d4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar18 = FUN_00a81330();
    if ((iVar18 != 0) && (piVar13 = (int *)FUN_00a7c8a0(), piVar13 != (int *)0x0)) {
      puVar21 = &DAT_01b34c58;
      (**(code **)(*piVar13 + 4))(&DAT_01b34c58);
      iVar18 = FUN_00dd6d80(puVar21);
      if (iVar18 != 0) {
        FUN_00a9f0e0(param_1 + 0x878,&DAT_0163d4d4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_0043dbe0();
      }
    }
    FUN_00a8c9b0(0,1,0,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_0043d542:
    puVar16 = (undefined4 *)(param_1 + 0x90);
    FUN_00ddefe0(puVar16,puVar16,(undefined4 *)(param_1 + 0x8b0),0x3e4ccccd,5);
    iVar18 = FUN_00a94ce0(0);
    if (iVar18 == 0) goto LAB_0043d66b;
    FUN_00a9f0e0(param_1 + 0x870,&DAT_0163d4cc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    iVar18 = FUN_00a81330();
    if (iVar18 != 0) {
      uVar26 = 0x3f800000;
      iVar18 = param_1 + 0x878;
      uVar25 = 0xbf800000;
      uVar24 = 0x8000000;
      uVar23 = 0x3f800000;
      uVar22 = 0x3e4ccccd;
      uVar14 = 0;
      puVar21 = &DAT_0163d4cc;
      FUN_00a7c8a0(iVar18,&DAT_0163d4cc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9f0e0(iVar18,puVar21,uVar14,uVar22,uVar23,uVar24,uVar25,uVar26);
    }
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0xb);
    FUN_008f3c70();
    *puVar16 = *(undefined4 *)(param_1 + 0x8b0);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x8b4);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x8b8);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x8bc);
    fVar19 = (float10)FUN_00dde300(0,0x40400000);
    fVar19 = fVar19 + (float10)3.0;
    *(float *)(param_1 + 0x88c) = (float)fVar19;
  }
  else {
    if (iVar18 == 1) goto LAB_0043d542;
    if (iVar18 != 2) goto LAB_0043d66b;
    fVar1 = *(float *)(param_1 + 0x888);
    fVar19 = (float10)FUN_00a93060();
    fVar19 = (float10)fVar1 - fVar19;
    *(float *)(param_1 + 0x888) = (float)fVar19;
    if ((float10)0 < fVar19) goto LAB_0043d66b;
    FUN_0043d030();
    fVar19 = (float10)0;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(float *)(param_1 + 0x888) = (float)fVar19;
LAB_0043d66b:
  iVar18 = FUN_00a8cac0(unaff_EDI,unaff_ESI);
  if (0 < iVar18) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xd0))(1);
  }
  iVar18 = FUN_00a81330();
  if (iVar18 != 0) {
    iVar18 = FUN_00a12210(0);
    uVar14 = 0;
    FUN_00a7c8a0(0);
    iVar12 = FUN_00a12210(uVar14);
    puVar16 = (undefined4 *)(iVar18 + 0x10);
    puVar17 = (undefined4 *)(iVar12 + 0x10);
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
    }
    uVar14 = 0;
    FUN_00a7c8a0(0);
    iVar18 = FUN_00a12210(uVar14);
    *(ushort *)(iVar18 + 0xa2) = *(ushort *)(iVar18 + 0xa2) | 4;
    iVar18 = FUN_00a12210(0);
    iVar12 = FUN_00a7c8a0();
    puVar16 = (undefined4 *)(iVar18 + 0x10);
    puVar17 = (undefined4 *)(iVar12 + 0x10);
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
    }
    iVar18 = FUN_00a7c8a0();
    iVar12 = FUN_00a7c8a0();
    *(undefined4 *)(iVar12 + 0x50) = *(undefined4 *)(iVar18 + 0x40);
    *(undefined4 *)(iVar12 + 0x54) = *(undefined4 *)(iVar18 + 0x44);
    *(undefined4 *)(iVar12 + 0x58) = *(undefined4 *)(iVar18 + 0x48);
    *(undefined4 *)(iVar12 + 0x5c) = *(undefined4 *)(iVar18 + 0x4c);
    iVar18 = FUN_00a7c8a0();
    iVar12 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar18 + 0x10);
    fVar2 = *(float *)(iVar18 + 0x14);
    fVar3 = *(float *)(iVar18 + 0x18);
    fVar4 = *(float *)(iVar18 + 0x20);
    fVar5 = *(float *)(iVar18 + 0x24);
    fVar6 = *(float *)(iVar18 + 0x28);
    fVar11 = SQRT(*(float *)(iVar18 + 0x38) * *(float *)(iVar18 + 0x38) +
                  *(float *)(iVar18 + 0x34) * *(float *)(iVar18 + 0x34) +
                  *(float *)(iVar18 + 0x30) * *(float *)(iVar18 + 0x30));
    fVar7 = *(float *)(iVar18 + 0x28);
    fVar8 = *(float *)(iVar18 + 0x38);
    fVar19 = (float10)FUN_00ddbaa0(-(*(float *)(iVar18 + 0x18) / fVar11));
    fVar9 = *(float *)(iVar18 + 0x14);
    fVar10 = *(float *)(iVar18 + 0x10);
    fVar20 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
    *(float *)(iVar12 + 0x90) = (float)fVar20;
    *(float *)(iVar12 + 0x94) = (float)fVar19;
    fVar19 = (float10)fpatan((float10)fVar9 /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)fVar10 /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    *(float *)(iVar12 + 0x98) = (float)fVar19;
    iVar18 = FUN_00a7c8a0();
    *(ushort *)(iVar18 + 0xa2) = *(ushort *)(iVar18 + 0xa2) | 4;
  }
  return;
}

// 0043DAC0  FUN_0043dac0  size=223  [callgraph]
void __thiscall FUN_0043dac0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0xb40);
    *puVar2 = 0x15;
    *(undefined4 *)(param_1 + 0xb44) = 0x16;
    *(undefined4 *)(param_1 + 0xb48) = 0x17;
    uVar1 = FUN_00a92f90(puVar2);
    FUN_00e35ab0(uVar1,puVar2);
  }
  else if (param_2 == 1) {
    puVar2 = (undefined4 *)(param_1 + 0xb4c);
    *puVar2 = 0x25;
    *(undefined4 *)(param_1 + 0xb50) = 0x26;
    *(undefined4 *)(param_1 + 0xb54) = 0x27;
    uVar1 = FUN_00a92f90(puVar2);
    FUN_00e35ab0(uVar1,puVar2);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    puVar2 = (undefined4 *)(param_1 + 0xb58);
    *puVar2 = 5;
    *(undefined4 *)(param_1 + 0xb5c) = 6;
    *(undefined4 *)(param_1 + 0xb60) = 7;
    uVar1 = FUN_00a92f90(puVar2);
    FUN_00e35ab0(uVar1,puVar2);
  }
  FUN_00e25400(param_3);
  FUN_00e25450(0);
  return;
}

// 0043DBA0  FUN_0043dba0  size=63  [callgraph]
void FUN_0043dba0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = 0x17;
  }
  else if (param_3 == 1) {
    uVar1 = 0x27;
  }
  else if (param_3 == 2) {
    uVar1 = 7;
  }
  uVar1 = FUN_00a12210(uVar1);
  FUN_0043dac0(param_1,uVar1);
  return;
}

// 0043DBE0  FUN_0043dbe0  size=103  [callgraph]
void __fastcall FUN_0043dbe0(int param_1)

{
  FUN_00e25500(0);
  FUN_00e25500(0);
  FUN_00e25500(0);
  (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  return;
}

// 00AA61F0  Em0041::Em0041  size=51  [class]
undefined4 * __fastcall Em0041::Em0041(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00de3530();
  FUN_00de3530();
  FUN_00a7c930();
  return param_1;
}

// 00AA6230  Em0041::vf04  size=6  [class]
undefined * Em0041::vf04(void)

{
  return &DAT_01b34c54;
}

// 00AB6D00  Em0041::vf00  size=105  [class]
undefined4 * __thiscall Em0041::vf00(undefined4 *param_1,byte param_2)

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
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

