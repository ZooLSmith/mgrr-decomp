// src/boss/bm1010/Bm1010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00414490..00AB9240, 10 functions

#include "mgrr.h"
#include "Bm1010.h"

// 00414490  Bm1010::startup  size=69  [class]
undefined4 __fastcall Bm1010::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorBm::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0xb40) = 0xff;
  uVar2 = FUN_00e03ea0(&DAT_0163cdb8);
  *(undefined4 *)(param_1 + 0xb44) = uVar2;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  return 1;
}

// 004144E0  Bm1010::thunk_vf44  size=5  [class]
void __fastcall Bm1010::thunk_vf44(int param_1)

{
  int iVar1;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
    FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int **)(param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x888) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    if (*(undefined4 **)(param_1 + 0x888) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x888))(1);
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
  }
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x884);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  if (*(int *)(param_1 + 0x9f4) != 0) {
    FUN_00983fd0(param_1);
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    if (*(int *)(param_1 + 0xa58) != -1) {
      FUN_00c5ad80(*(int *)(param_1 + 0xa58));
    }
    if (*(int *)(param_1 + 0xa5c) != -1) {
      FUN_00c4d100(*(int *)(param_1 + 0xa5c));
    }
  }
  FUN_009841c0(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  Behavior::vf44();
  return;
}

// 004144F0  Bm1010::vf1D0  size=43  [class]
void Bm1010::vf1D0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00a6e640();
  uVar3 = 2;
  iVar2 = (**(code **)(*piVar1 + 0x24))(100,1,2);
  if (iVar2 != 0) {
    Bm0201::vf1D0(uVar3);
  }
  return;
}

// 00414520  FUN_00414520  size=145  [between]
void FUN_00414520(char param_1)

{
  if (param_1 == '\0') {
    FUN_00c81e40(0x28);
    FUN_00c81e90(0x29);
    FUN_00c81e90();
    return;
  }
  if (param_1 != '\x01') {
    if (param_1 == '\x02') {
      FUN_00c81e90(0x28);
      FUN_00c81e90(0x29);
      FUN_00c81e40();
      return;
    }
    return;
  }
  FUN_00c81e90(0x28);
  FUN_00c81e40(0x29);
  FUN_00c81e90();
  return;
}

// 004145C0  FUN_004145c0  size=124  [between]
void __thiscall FUN_004145c0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0xb4c) == 0) {
    if (param_2 == '\0') {
      piVar1 = (int *)FUN_00c14bb0();
      pcVar3 = "r403_ougline_nr_navi_norange_02";
    }
    else if (param_2 == '\x01') {
      piVar1 = (int *)FUN_00c14bb0();
      pcVar3 = "r403_ougline_nr_navi_norange_00";
    }
    else {
      if (param_2 != '\x02') {
        return;
      }
      piVar1 = (int *)FUN_00c14bb0();
      pcVar3 = "r403_ougline_nr_navi_norange_01";
    }
    iVar2 = (**(code **)(*piVar1 + 0x20))(pcVar3,0x403);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x20))();
      *(undefined4 *)(param_1 + 0xb4c) = 1;
    }
  }
  return;
}

// 00414640  Bm1010::vf48  size=221  [class]
void __fastcall Bm1010::vf48(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)((int)param_1 + 0xb41) == '\0') {
    iVar3 = param_1[0x13b];
    iVar2 = FUN_00e03ea0("GATE_00");
    if (iVar3 == iVar2) {
      *(undefined1 *)(param_1 + 0x2d0) = 0;
    }
    else {
      iVar3 = param_1[0x13b];
      iVar2 = FUN_00e03ea0("GATE_01");
      if (iVar3 == iVar2) {
        *(undefined1 *)(param_1 + 0x2d0) = 1;
      }
      else {
        iVar3 = param_1[0x13b];
        iVar2 = FUN_00e03ea0("GATE_02");
        if (iVar3 == iVar2) {
          *(undefined1 *)(param_1 + 0x2d0) = 2;
        }
      }
    }
    *(undefined1 *)((int)param_1 + 0xb41) = 1;
  }
  if (param_1[0x2d2] == 0) {
    iVar3 = FUN_00d4f040(param_1[0x2d1],1);
    if (iVar3 != 0) {
      cVar1 = (char)param_1[0x2d0];
      if (cVar1 == '\0') {
        uVar4 = 0x1b;
      }
      else if (cVar1 == '\x01') {
        uVar4 = 0x1c;
      }
      else {
        if (cVar1 != '\x02') goto LAB_00414715;
        uVar4 = 0x1d;
      }
      iVar3 = FUN_00c81c60(uVar4);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x20))();
        FUN_004145c0((char)param_1[0x2d0]);
      }
    }
  }
LAB_00414715:
  Bm0201::thunk_vf48();
  return;
}

// 00414720  Bm1010::vf2C  size=520  [class]
void __fastcall Bm1010::vf2C(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  cVar1 = *(char *)(param_1 + 0xb40);
  if (cVar1 == '\0') {
    FUN_00c81e40(0x1b);
    piVar2 = (int *)FUN_00a6dd90();
    iVar3 = (**(code **)(*piVar2 + 0x9c))(0x400);
    if (iVar3 == 0) goto LAB_004148e0;
    iVar3 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar3 == 0) goto LAB_004148e0;
    puVar4 = (undefined4 *)cEspControler::cEspControler();
    if (puVar4 == (undefined4 *)0x0) goto LAB_004148e0;
    uVar5 = FUN_00e01eb0(puVar4);
    iVar3 = FUN_00e01540(0x400,0xc,uVar5);
    if (iVar3 != 1) {
LAB_004148d6:
      (**(code **)*puVar4)(1);
      goto LAB_004148e0;
    }
    pcVar6 = "Bm_1010_Esp001";
  }
  else if (cVar1 == '\x01') {
    FUN_00c81e40(0x1c);
    piVar2 = (int *)FUN_00a6dd90();
    iVar3 = (**(code **)(*piVar2 + 0x9c))(0x400);
    if (iVar3 == 0) goto LAB_004148e0;
    iVar3 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar3 == 0) goto LAB_004148e0;
    puVar4 = (undefined4 *)cEspControler::cEspControler();
    if (puVar4 == (undefined4 *)0x0) goto LAB_004148e0;
    uVar5 = FUN_00e01eb0(puVar4);
    iVar3 = FUN_00e01540(0x400,10,uVar5);
    if (iVar3 != 1) goto LAB_004148d6;
    pcVar6 = "Bm_1010_Esp002";
  }
  else {
    if (cVar1 != '\x02') goto LAB_004148e0;
    FUN_00c81e40(0x1d);
    piVar2 = (int *)FUN_00a6dd90();
    iVar3 = (**(code **)(*piVar2 + 0x9c))(0x400);
    if (iVar3 == 0) goto LAB_004148e0;
    iVar3 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar3 == 0) goto LAB_004148e0;
    puVar4 = (undefined4 *)cEspControler::cEspControler();
    if (puVar4 == (undefined4 *)0x0) goto LAB_004148e0;
    uVar5 = FUN_00e01eb0(puVar4);
    iVar3 = FUN_00e01540(0x400,0xb,uVar5);
    if (iVar3 != 1) goto LAB_004148d6;
    pcVar6 = "Bm_1010_Esp003";
  }
  uVar5 = FUN_00e03ea0(pcVar6);
  FUN_00a71770(puVar4,uVar5);
LAB_004148e0:
  FUN_00414520(*(undefined1 *)(param_1 + 0xb40));
  FUN_004145c0(*(undefined1 *)(param_1 + 0xb40));
  FUN_00e5e0c0("bm5040_se_break",param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0xb48) = 1;
  Bh0056::vf2C();
  return;
}

// 00AB0770  Bm1010::Bm1010  size=18  [class]
undefined4 * __fastcall Bm1010::Bm1010(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0790  Bm1010::vf04  size=6  [class]
undefined * Bm1010::vf04(void)

{
  return &DAT_01b34bec;
}

// 00AB9240  Bm1010::destruct  size=43  [class]
undefined4 __thiscall Bm1010::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

