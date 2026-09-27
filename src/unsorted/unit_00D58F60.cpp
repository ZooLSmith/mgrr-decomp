// src/unsorted/unit_00D58F60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D58F60..00D59E90, 6 functions

#include "types.h"

// 00D58F60  FUN_00d58f60  size=114  [run]
bool __fastcall FUN_00d58f60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_400 [1024];
  
  uVar1 = FUN_00959930(local_400,"%s%03x","bgm_pstart_p",*(undefined4 *)(param_1 + 0x34));
  iVar2 = FUN_00e5e1b0(uVar1);
  FUN_009c9560();
  uVar1 = FUN_00959930(local_400,"%s%03x","se_pstart_p",*(undefined4 *)(param_1 + 0x34));
  iVar3 = FUN_00e5e050(uVar1,0);
  return iVar3 != 0 || iVar2 != 0;
}

// 00D59090  FUN_00d59090  size=109  [run]
bool __fastcall FUN_00d59090(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_400 [1024];
  
  uVar1 = FUN_00959930(local_400,"%s%03x","bgm_pend_p",*(undefined4 *)(param_1 + 0x34));
  iVar2 = FUN_00e5e1b0(uVar1);
  uVar1 = FUN_00959930(local_400,"%s%03x","se_pend_p",*(undefined4 *)(param_1 + 0x34));
  iVar3 = FUN_00e5e050(uVar1,0);
  return iVar3 != 0 || iVar2 != 0;
}

// 00D59100  FUN_00d59100  size=97  [run]
bool FUN_00d59100(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_400 [1024];
  
  uVar1 = FUN_00959930(local_400,&DAT_016575ac,"bgm_pend");
  iVar2 = FUN_00e5e1b0(uVar1);
  uVar1 = FUN_00959930(local_400,&DAT_016575ac,"se_pend");
  iVar3 = FUN_00e5e050(uVar1,0);
  return iVar3 != 0 || iVar2 != 0;
}

// 00D59170  FUN_00d59170  size=35  [run]
int FUN_00d59170(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00d59090();
  iVar2 = FUN_00d59100();
  if ((iVar2 == 0) && (iVar1 == 1)) {
    return 0;
  }
  return iVar1;
}

// 00D59630  FUN_00d59630  size=2137  [run]
void FUN_00d59630(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined4 uVar11;
  char *pcVar12;
  float fVar13;
  int iStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  int *piStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_98 [4];
  int iStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char *pcStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  
  DAT_01bea094 = DAT_01bea094 | 0x200000;
  piVar3 = (int *)FUN_00c13920();
  fVar13 = -NAN;
  iVar4 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
  pcStack_58 = (char *)iVar4;
  FUN_00a7c950();
  piVar3 = (int *)FUN_00c14bb0();
  pcVar12 = "M000F001_convex_RAY01";
  (**(code **)(*piVar3 + 0x44))(1,"M000F001_convex_RAY01");
  while ((iVar5 = FUN_00a7f600(0x2020a), iVar5 == 0 || (iVar4 == 0))) {
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x50))(1);
  }
  uVar6 = FUN_00a7c7f0();
  FUN_00a7c960(uVar6);
  iVar5 = 0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    iVar5 = FUN_00a7c8a0();
  }
  uStack_70 = *(undefined4 *)(iVar5 + 0x4c);
  piVar3 = (int *)0x0;
  uStack_7c = 0x439b0000;
  uStack_78 = 0x418b999a;
  uStack_74 = 0x43548000;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
  }
  (**(code **)(*piVar3 + 0x6c))(&uStack_7c);
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
  }
  FUN_00547eb0();
  DAT_01bea090 = DAT_01bea090 | 0x2000000;
  piStack_b4 = (int *)FUN_00a7c8a0();
  if (piStack_b4 != (int *)0x0) {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piStack_b4 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar10);
    if (iVar4 == 0) {
      piStack_b4 = (int *)0x0;
    }
    else {
      piStack_b4[0xfbf] = 0;
      piStack_b4[0xfc1] = 0;
    }
  }
  FUN_00dc1300(2);
  iStack_94 = 0;
  do {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar10 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar10);
      uVar7 = -(uint)(iVar4 != 0) & (uint)piVar3;
    }
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar4 = FUN_00a81330();
        if (iVar4 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
        }
        iVar4 = FUN_00a12210(0x13);
        if (iVar4 != 0) {
          D3DXVec3TransformNormal(&stack0xffffff20,&stack0xffffff20,iVar4 + 0x10);
          fVar1 = *(float *)(iVar4 + 0x44);
          fVar2 = *(float *)(iVar4 + 0x48);
          *(float *)(uVar7 + 0x3f10) = *(float *)(iVar4 + 0x40) + 3.0;
          *(float *)(uVar7 + 0x3f14) = fVar1 + 0.0;
          *(float *)(uVar7 + 0x3f18) = fVar2 + 0.0;
          *(int *)(uVar7 + 0x3f1c) = iStack_d4;
          *(undefined4 *)(uVar7 + 0x3f04) = 1;
        }
      }
    }
    if (uVar7 != 0) {
      if (iStack_94 == 0) {
        if (117.5 < *(float *)(uVar7 + 0x48)) {
          uVar11 = 0xf0017;
          uVar6 = FUN_00e03ea0(&DAT_016bc508,0xf0017);
          iVar4 = FUN_00a18d70(uVar6,uVar11);
          if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
            FUN_00404670();
          }
          iStack_94 = 1;
        }
      }
      else {
        uVar11 = 0xf0017;
        uVar6 = FUN_00e03ea0(&DAT_016bc508,0xf0017);
        iVar4 = FUN_00a18d70(uVar6,uVar11);
        if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
          iVar4 = FUN_00a94e10(0,0,0x42700000);
          if (iVar4 != 0) {
            fStack_90 = 0.0;
            fStack_8c = 0.0;
            fStack_88 = 0.0;
            iVar4 = FUN_00a12210(0x10c);
            if (iVar4 != 0) {
              D3DXVec3TransformNormal(&fStack_90,&fStack_90,iVar4 + 0x10);
              fVar8 = (float10)*(float *)(iVar4 + 0x40) + (float10)fStack_90;
              fStack_90 = (float)fVar8;
              fStack_8c = *(float *)(iVar4 + 0x44) + fStack_8c;
              fVar9 = (float10)*(float *)(iVar4 + 0x48) + (float10)fStack_88;
              fStack_88 = (float)fVar9;
              fVar8 = (float10)fpatan(fVar8 - (float10)*(float *)(uVar7 + 0x40),
                                      fVar9 - (float10)*(float *)(uVar7 + 0x48));
              fVar8 = (float10)FUN_00ddba30((float)((float10)*(float *)(uVar7 + 0x94) - fVar8));
              if (fVar8 * fVar8 < (float10)1.3962634 != (fVar8 * fVar8 == (float10)1.3962634)) {
                FUN_004f9dc0(&fStack_90);
              }
            }
          }
          iVar4 = FUN_00a94e10(0,0x42700000,0x42c80000);
          if (iVar4 != 0) {
            fStack_b0 = 0.0;
            fStack_ac = 0.0;
            fStack_a8 = 0.0;
            iVar4 = FUN_00a12210(0x110);
            if (iVar4 != 0) {
              D3DXVec3TransformNormal(&fStack_b0,&fStack_b0,iVar4 + 0x10);
              fVar8 = (float10)*(float *)(iVar4 + 0x40) + (float10)fStack_b0;
              fStack_b0 = (float)fVar8;
              fStack_ac = *(float *)(iVar4 + 0x44) + fStack_ac;
              fVar9 = (float10)*(float *)(iVar4 + 0x48) + (float10)fStack_a8;
              fStack_a8 = (float)fVar9;
              fVar8 = (float10)fpatan(fVar8 - (float10)*(float *)(uVar7 + 0x40),
                                      fVar9 - (float10)*(float *)(uVar7 + 0x48));
              fVar8 = (float10)FUN_00ddba30((float)((float10)*(float *)(uVar7 + 0x94) - fVar8));
              if (fVar8 * fVar8 < (float10)1.3962634 != (fVar8 * fVar8 == (float10)1.3962634)) {
                FUN_004f9dc0(&fStack_b0);
              }
            }
          }
          iVar4 = FUN_00a94e10(0,0x42fc0000,0x434c0000);
          if (iVar4 != 0) {
            fStack_d0 = 0.0;
            fStack_cc = 0.0;
            fStack_c8 = 0.0;
            iVar4 = FUN_00a12210(0x101);
            if (iVar4 != 0) {
              D3DXVec3TransformNormal(&fStack_d0,&fStack_d0,iVar4 + 0x10);
              fVar8 = (float10)*(float *)(iVar4 + 0x40) + (float10)fStack_d0;
              fStack_d0 = (float)fVar8;
              fStack_cc = *(float *)(iVar4 + 0x44) + fStack_cc;
              fVar9 = (float10)*(float *)(iVar4 + 0x48) + (float10)fStack_c8;
              fStack_c8 = (float)fVar9;
              fVar8 = (float10)fpatan(fVar8 - (float10)*(float *)(uVar7 + 0x40),
                                      fVar9 - (float10)*(float *)(uVar7 + 0x48));
              fVar8 = (float10)FUN_00ddba30((float)((float10)*(float *)(uVar7 + 0x94) - fVar8));
              if (fVar8 * fVar8 < (float10)1.3962634 != (fVar8 * fVar8 == (float10)1.3962634)) {
                FUN_004f9dc0(&fStack_d0);
              }
            }
          }
        }
        if (*(float *)(uVar7 + 0x48) < 102.5) {
          uVar11 = 0xf0017;
          uVar6 = FUN_00e03ea0(&DAT_016bc508,0xf0017);
          iVar4 = FUN_00a18d70(uVar6,uVar11);
          if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
            FUN_00404990();
          }
          iStack_94 = 0;
        }
      }
      piVar3 = (int *)FUN_00a6e640();
      iVar4 = (**(code **)(*piVar3 + 0x24))(2000,1,1);
      if (iVar4 == 1) {
        FUN_00b7ce60();
        goto LAB_00d59c87;
      }
      iVar4 = FUN_00a8cab0();
      if (iVar4 == 0x3e) {
        piVar3 = (int *)FUN_00c14bb0();
        (**(code **)(*piVar3 + 0x44))(0,"M000F001_convex_RAY02");
      }
      if ((182.5 < *(float *)(uVar7 + 0x48)) && (*(int *)(uVar7 + 0x3ef8) != 0)) {
        uVar11 = 0xf0017;
        uVar6 = FUN_00e03ea0(&DAT_016bc508,0xf0017);
        iVar4 = FUN_00a18d70(uVar6,uVar11);
        if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
          FUN_00404990();
        }
        FUN_00a81330();
        uVar6 = FUN_00a7c8a0();
        FUN_00b8fba0(uVar6);
LAB_00d59c87:
        iVar4 = FUN_00c81c60(3);
        piVar3 = piStack_b4;
        while (piStack_b4 = piVar3, iVar4 == 0) {
          piVar3 = (int *)FUN_00a6dd90();
          (**(code **)(*piVar3 + 0x50))(1);
          iVar4 = FUN_00c81c60(3);
          piVar3 = piStack_b4;
        }
        DAT_01bea090 = DAT_01bea090 | 0x80c000;
        DAT_01bea060 = DAT_01bea060 | 0x100000;
        fStack_b0 = 0.0;
        fStack_ac = 2.3561945;
        fStack_a8 = 0.0;
        (**(code **)(*piVar3 + 0x7c))(&stack0xffffff20,&fStack_b0);
        fStack_64 = fVar13 + 1.0;
        fStack_54 = fVar13 - 5.0;
        uStack_60 = 0x43819d71;
        uStack_48 = 0xffff0006;
        uStack_44 = 4;
        uStack_5c = 0x433fa3d7;
        uStack_40 = 0;
        uStack_4c = 0x433fa3d7;
        uStack_3c = 0;
        pcStack_38 = "Player";
        uStack_34 = 0;
        uStack_50 = 0x43819d71;
        pcStack_68 = pcVar12;
        pcStack_58 = pcVar12;
        iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2
                          (auStack_98,&stack0xffffff28,0,0,&pcStack_68);
        if (iVar4 != 0) {
          piVar3[0xfb0] = 0x438743d7;
          piVar3[0xfb1] = iStack_d4;
          piVar3[0xfb2] = (int)fStack_d0;
          piVar3[0xfb3] = (int)fStack_cc;
          piVar3[0xfb7] = (int)fStack_cc;
          piVar3[0xfb4] = 0x438743d7;
          piVar3[0xfb5] = iStack_d4;
          piVar3[0xfb6] = (int)fStack_d0;
          FUN_00b893e0(&stack0xffffff28,1);
        }
        uVar6 = FUN_00de4500("pl0010_908a.mot");
        uVar11 = FUN_00de4500("pl0010_908a_0_seq.bxm");
        FUN_00bc2600(uVar6,uVar11,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,"Direct");
        piVar3[0xee6] = 0;
        piVar3 = (int *)FUN_00a6dd90();
        (**(code **)(*piVar3 + 0x54))();
        return;
      }
    }
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x50))(1);
  } while( true );
}

// 00D59E90  FUN_00d59e90  size=1484  [run]
void __fastcall FUN_00d59e90(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_8c [4];
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_2c [40];
  
  DAT_01bea094 = DAT_01bea094 | 0x200000;
  DAT_01bea090 = DAT_01bea090 | 0x80c000;
  DAT_01bea060 = DAT_01bea060 | 0x100000;
  piVar2 = (int *)FUN_00c13920();
  fStack_88 = (float)(**(code **)(*piVar2 + 0x28))(0xffffffff);
  piVar2 = (int *)FUN_00a7c8a0();
  fVar1 = (float)(param_1 + 0x128);
  FUN_00a7c950();
  uVar6 = 0xf0012;
  uVar3 = FUN_00e03ea0("TOWER",0xf0012);
  iVar4 = FUN_00a18d70(uVar3,uVar6);
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x20))();
  }
  uVar6 = 0xf0015;
  uVar3 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar4 = FUN_00a18d70(uVar3,uVar6);
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x1c))();
  }
  uVar6 = 0xf0017;
  uVar3 = FUN_00e03ea0(&DAT_016bc508,0xf0017);
  iVar4 = FUN_00a18d70(uVar3,uVar6);
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x20))();
  }
  FUN_00d4cbb0(0x40000000);
  uVar6 = 0xf0017;
  uVar3 = FUN_00e03ea0(&DAT_016bc508,0xf0017);
  iVar4 = FUN_00a18d70(uVar3,uVar6);
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x20))();
  }
  while ((iVar4 = FUN_00a7f600(0x2020b), iVar4 == 0 || (fStack_88 == 0.0))) {
    piVar5 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar5 + 0x50))(1);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uStack_c4 = 0x43819d71;
  uStack_c0 = 0x433fa3d7;
  iStack_bc = 0x438743d7;
  uStack_44 = 0;
  uStack_40 = 0x4016cbe4;
  uStack_3c = 0;
  (**(code **)(*piVar2 + 0x7c))(&uStack_c4,&uStack_44);
  uVar3 = FUN_00a81330();
  FUN_00b7fc20(uVar3);
  FUN_00dc1300(4);
  fStack_88 = fVar1 + 1.0;
  fStack_78 = fVar1 - 5.0;
  uStack_84 = uStack_c4;
  uStack_6c = 0xffff0006;
  uStack_80 = uStack_c0;
  uStack_68 = 4;
  uStack_70 = uStack_c0;
  uStack_64 = 0;
  uStack_60 = 0;
  pcStack_5c = "Player";
  uStack_58 = 0;
  uStack_74 = uStack_c4;
  iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_2c,&iStack_bc,0,0,auStack_8c);
  while (iVar4 == 0) {
    piVar5 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar5 + 0x50))(1);
    fStack_88 = fVar1 + 1.0;
    fStack_78 = fVar1 - 5.0;
    uStack_84 = uStack_c4;
    uStack_6c = 0xffff0006;
    uStack_68 = 4;
    uStack_80 = uStack_c0;
    uStack_64 = 0;
    uStack_70 = uStack_c0;
    uStack_60 = 0;
    pcStack_5c = "Player";
    uStack_58 = 0;
    uStack_74 = uStack_c4;
    iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_2c,&iStack_bc,0,0,auStack_8c);
  }
  piVar2[0xfb0] = iStack_bc;
  piVar2[0xfb1] = iStack_b8;
  piVar2[0xfb2] = iStack_b4;
  piVar2[0xfb3] = iStack_b0;
  piVar2[0xfb7] = iStack_b0;
  piVar2[0xfb4] = iStack_bc;
  piVar2[0xfb5] = iStack_b8;
  piVar2[0xfb6] = iStack_b4;
  FUN_00b893e0(&iStack_bc,1);
  uVar6 = 0xf0015;
  fStack_ac = 322.87;
  fStack_a8 = 17.5;
  fStack_a4 = 243.55;
  uVar3 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar4 = FUN_00a18d70(uVar3,uVar6);
  if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    iStack_bc = 0;
    iStack_b8 = 0;
    iStack_b4 = 0x41a1c28f;
    D3DXVec3TransformNormal(&fStack_ac,&iStack_bc,iVar4 + 0x10);
    fStack_ac = *(float *)(iVar4 + 0x40) + fStack_ac;
    fStack_a8 = *(float *)(iVar4 + 0x44) + fStack_a8;
    fStack_a4 = *(float *)(iVar4 + 0x48) + fStack_a4;
  }
  piVar5 = (int *)0x0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
  }
  (**(code **)(*piVar5 + 0x6c))(&fStack_ac);
  uStack_40 = 0;
  piVar5 = (int *)0x0;
  uStack_3c = 0xbf490fdb;
  uStack_38 = 0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
  }
  (**(code **)(*piVar5 + 0x88))(&uStack_40);
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
  }
  FUN_0054aad0();
  while( true ) {
    uVar6 = 0xf0012;
    uVar3 = FUN_00e03ea0("TOWER",0xf0012);
    iVar4 = FUN_00a18d70(uVar3,uVar6);
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      (**(code **)(*piVar5 + 0x20))();
    }
    if ((float)piVar2[0x11] < 55.0) break;
    piVar5 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar5 + 0x50))(1);
  }
  uVar6 = 0xf0015;
  uVar3 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar4 = FUN_00a18d70(uVar3,uVar6);
  if (iVar4 != 0) {
    FUN_00a7c8a0();
    thunk_FUN_00a935d0();
  }
  FUN_00a81330();
  uVar3 = FUN_00a7c8a0();
  FUN_00b8fce0(uVar3);
  FUN_00a33520(1,0xa00,5);
  iVar4 = FUN_00c81c60(4);
  while (iVar4 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar4 = FUN_00c81c60(4);
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

