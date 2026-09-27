// src/player/pl1400/state/ZangekiDatsuJumpStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F540..00888C30, 8 functions

#include "types.h"

// 0085F540  ZangekiDatsuJumpStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl1400::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 0085F550  ZangekiDatsuJumpStatePl1400::vf24  size=19  [class]
bool ZangekiDatsuJumpStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 0085F570  ZangekiDatsuJumpStatePl1400::ZangekiDatsuJumpStatePl1400  size=41  [class]
undefined4 * __thiscall
ZangekiDatsuJumpStatePl1400::ZangekiDatsuJumpStatePl1400(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 0085F5A0  ZangekiDatsuJumpStatePl1400::vf00  size=6  [class]
undefined * ZangekiDatsuJumpStatePl1400::vf00(void)

{
  return &DAT_01b35b38;
}

// 00867BB0  ZangekiDatsuJumpStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiDatsuJumpStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00870E40  ZangekiDatsuJumpStatePl1400::vf20  size=307  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl1400::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  DAT_01dc08bc = 0;
  DAT_01dc08d4 = 0;
  *(undefined4 *)(uVar3 + 0x2f4) = 0;
  DAT_01bea060 = DAT_01bea060 & 0xfdfffbff;
  if (*(int *)(param_1 + 0xec) == 0) {
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if ((((iVar2 != 0) && (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) &&
        (*(int *)(iVar2 + 0x988) != 0)) && (*(int *)(uVar3 + 0x6b0) == 0)) {
      FUN_0093bdd0(*(undefined4 *)(uVar4 + 0x4f0),*(undefined4 *)(iVar2 + 0x87c),
                   *(undefined4 *)(iVar2 + 0x884));
      FUN_00ace4a0(0x6f,uVar4);
    }
  }
  FUN_00da0d70();
  *(undefined4 *)(uVar3 + 0x694) = 0;
  return 1;
}

// 00888730  ZangekiDatsuJumpStatePl1400::vf08  size=1277  [class]
undefined4 __thiscall ZangekiDatsuJumpStatePl1400::vf08(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *unaff_retaddr;
  undefined *puVar8;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar7 = *(int **)(uVar6 + 0x5e0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar8 = &DAT_01b35b20;
      (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
      iVar2 = FUN_00dd6d80(puVar8);
      piVar7 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar7);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    FUN_00e25500(0);
    *(undefined4 *)(uVar6 + 0x2f4) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0x41f00000;
    *(undefined4 *)(param_1 + 0xe0) = 0x42400000;
    DAT_01dc08c0 = 1;
    FUN_00e5e050("core_se_btl_char_datsu_out",0);
    DAT_01bea060 = DAT_01bea060 | 0x2000400;
    FUN_00b7ab80(0,0x3f800000);
    piVar7[0xd07] = 0x3f800000;
    FUN_00b85350(0x43340000,0x3f800000,0x3c23d70a,0,0,0x3dcccccd);
    FUN_00877430(param_2);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c960(uVar6 + 0x338);
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar8 = &DAT_01be9ca8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9ca8);
        iVar2 = FUN_00dd6d80(puVar8);
        *(uint *)(param_1 + 0x54) = -(uint)(iVar2 != 0) & (uint)piVar3;
        FUN_00ac6f30();
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if ((*(int *)(param_1 + 0x54) != 0) &&
       (((((iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0x974), iVar2 == 0x20030 ||
           (iVar2 == 0x20033)) || (iVar2 == 0x20035)) || ((iVar2 == 0x20080 || (iVar2 == 0x20081))))
        || (iVar2 == 0x20100)))) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    iVar2 = (**(code **)(*piVar7 + 800))(0x3c888889);
    if ((iVar2 == 0) || (*(int *)(param_1 + 0xdc) != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 2;
    }
    piVar3 = piVar7 + 0x10;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(int *)(param_1 + 0xb0) = *piVar3;
    *(int *)(param_1 + 0xb4) = piVar7[0x11];
    *(int *)(param_1 + 0xb8) = piVar7[0x12];
    *(int *)(param_1 + 0xbc) = piVar7[0x13];
    *(int *)(param_1 + 0xc0) = *piVar3;
    *(int *)(param_1 + 0xc4) = piVar7[0x11];
    *(int *)(param_1 + 200) = piVar7[0x12];
    *(int *)(param_1 + 0xcc) = piVar7[0x13];
    FUN_008e4580(piVar3,1);
    FUN_008e3c10();
    FUN_008e5c50(6);
    piVar7[0x43d] = 0;
    FUN_00db3e80(0x42a00000,0,&DAT_01bea1d0);
    if (unaff_retaddr == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar8 = &DAT_01b35b78;
      (**(code **)*unaff_retaddr)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar8);
      uVar4 = -(uint)(iVar2 != 0) & (uint)unaff_retaddr;
    }
    if (*(int *)(uVar4 + 0x4c4) != 4) {
      FUN_00869630(unaff_retaddr);
      *(undefined4 *)(uVar4 + 0x4c4) = 4;
      FUN_00e5e1b0("bgm_Datsu_Enter");
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        uVar1 = *(undefined4 *)(iVar2 + 0x83c);
        uVar5 = FUN_009f8b40();
        FUN_00941450(uVar1,uVar5);
      }
    }
    FUN_00ac6f30();
    FUN_00a83990();
    FUN_00a83990();
    FUN_00a83990();
    FUN_00877ad0(unaff_retaddr);
    FUN_00a7c940(*(int *)(param_1 + 0x54) + 0x968);
    DAT_018b56b4 = 1;
    piVar7[0xf9c] = piVar7[0x10];
    piVar7[0xf9d] = piVar7[0x11];
    piVar7[0xf9e] = piVar7[0x12];
    piVar7[3999] = piVar7[0x13];
    if (*(int *)(param_1 + 0xdc) == 0) {
      piVar7[0xf98] = 0;
      piVar7[0xf99] = 0;
      piVar7[0xf9a] = 0;
      piVar7[0xf9b] = 0x3f800000;
    }
    *(undefined4 *)(uVar6 + 0x540) = 0;
    *(undefined4 *)(uVar6 + 0x544) = 0;
    *(undefined4 *)(uVar6 + 0x548) = 0;
    *(undefined4 *)(uVar6 + 0x54c) = 0x3f800000;
    *(undefined4 *)(uVar6 + 0xf4) = 0x100000;
    *(undefined4 *)(uVar6 + 0xf8) = 0;
    *(undefined4 *)(uVar6 + 0x104) = 0;
    *(undefined4 *)(uVar6 + 0x108) = 0;
    *(undefined4 *)(uVar6 + 0x10c) = 0x40400000;
    piVar7[0xf7d] = 0x100000;
    piVar7[0xf7e] = 0;
    *(undefined2 *)(piVar7 + 0x42a) = 0xffff;
    *(undefined4 *)(uVar6 + 0x3ec) = 0x100000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0x974);
    if ((iVar2 != 0x20080) && (iVar2 != 0x20081)) {
      *(undefined4 *)(uVar6 + 0x360) = 0;
      *(undefined4 *)(uVar6 + 0x364) = 0;
      *(undefined4 *)(uVar6 + 0x368) = 0;
      *(undefined4 *)(uVar6 + 0x36c) = 0x3f800000;
    }
    iVar2 = FUN_008779b0(unaff_retaddr);
    *(int *)(param_1 + 0xe4) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 2;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(uVar6 + 0x694) = 0;
    return 1;
  }
  return 0;
}

// 00888C30  ZangekiDatsuJumpStatePl1400::vf14  size=299  [class]
void ZangekiDatsuJumpStatePl1400::vf14(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float fStack_14;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar5 + 0x5e0) != (int *)0x0) {
    puVar7 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar5 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar7);
  }
  iVar6 = *(int *)(uVar5 + 0x6a8);
  uVar4 = 0;
  if (iVar6 != iVar6 + *(int *)(uVar5 + 0x6b0) * 4) {
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        puVar7 = &DAT_01be9ca8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9ca8);
        iVar2 = FUN_00dd6d80(puVar7);
        if ((iVar2 != 0) && (iVar2 = FUN_00a943e0(uVar4 + 0x6f), iVar2 != 0)) {
          fVar1 = (float)uVar4 * 0.1;
          *(float *)(iVar2 + 0x30) = fVar1 * 0.0;
          *(float *)(iVar2 + 0x34) = fVar1 * 0.0;
          *(float *)(iVar2 + 0x38) = fVar1 * -1.0;
          *(float *)(iVar2 + 0x3c) = fStack_14 * fVar1;
        }
      }
      iVar6 = iVar6 + 4;
      uVar4 = (uint)(byte)((char)uVar4 + 1);
    } while (iVar6 != *(int *)(uVar5 + 0x6a8) + *(int *)(uVar5 + 0x6b0) * 4);
  }
  StateMachineNode::vf14(param_1);
  return;
}

