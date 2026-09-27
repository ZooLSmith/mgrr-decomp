// src/havok/Constraint.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FB2D0..008FCE90, 42 functions

#include "mgrr.h"
#include "hkFixedConstraintData.h"

// 008FB2D0  Constraint::WorkBase::vf00  size=31  [class]
undefined4 * __thiscall Constraint::WorkBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FB360  Constraint::Fixed::vf04  size=1  [class]
void Constraint::Fixed::vf04(void)

{
  return;
}

// 008FB390  Constraint::Simple::vf04  size=1  [class]
void Constraint::Simple::vf04(void)

{
  return;
}

// 008FB3C0  Constraint::StiffSpring::vf04  size=1  [class]
void Constraint::StiffSpring::vf04(void)

{
  return;
}

// 008FB3F0  Constraint::PoweredChain::vf04  size=1  [class]
void Constraint::PoweredChain::vf04(void)

{
  return;
}

// 008FB420  Constraint::Hinge::vf04  size=1  [class]
void Constraint::Hinge::vf04(void)

{
  return;
}

// 008FB440  FUN_008fb440  size=12  [between]
undefined4 __fastcall FUN_008fb440(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 008FB590  hkFixedConstraintData::vf0C  size=3  [between]
void hkFixedConstraintData::vf0C(void)

{
  return;
}

// 008FB5A0  hkFixedConstraintData::vf10  size=7  [between]
float10 hkFixedConstraintData::vf10(void)

{
  return (float10)3.40282e+38;
}

// 008FB5B0  hkFixedConstraintData::vf14  size=3  [between]
void hkFixedConstraintData::vf14(void)

{
  return;
}

// 008FB5C0  hkFixedConstraintData::vf18  size=8  [between]
undefined4 hkFixedConstraintData::vf18(void)

{
  return 1;
}

// 008FB5D0  hkFixedConstraintData::vf1C  size=8  [between]
undefined4 hkFixedConstraintData::vf1C(void)

{
  return 1;
}

// 008FB5E0  hkFixedConstraintData::vf20  size=3  [between]
void hkFixedConstraintData::vf20(void)

{
  return;
}

// 008FB5F0  hkFixedConstraintData::vf24  size=3  [between]
undefined1 hkFixedConstraintData::vf24(void)

{
  return 0xff;
}

// 008FB600  hkFixedConstraintData::vf40  size=10  [between]
void hkFixedConstraintData::vf40(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 008FB610  hkFixedConstraintData::vf44  size=3  [between]
void hkFixedConstraintData::vf44(void)

{
  return;
}

// 008FB6B0  Constraint::ConstructionKit::vf00  size=31  [class]
undefined4 * __thiscall Constraint::ConstructionKit::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = WorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FB740  Constraint::Fixed::vf00  size=31  [class]
undefined4 * __thiscall Constraint::Fixed::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = WorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FB760  Constraint::Simple::vf00  size=31  [class]
undefined4 * __thiscall Constraint::Simple::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = WorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FB780  Constraint::StiffSpring::vf00  size=31  [class]
undefined4 * __thiscall Constraint::StiffSpring::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = WorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FB7A0  Constraint::PoweredChain::vf00  size=31  [class]
undefined4 * __thiscall Constraint::PoweredChain::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = WorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FB7C0  Constraint::Hinge::vf00  size=31  [class]
undefined4 * __thiscall Constraint::Hinge::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = WorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FB8E0  FUN_008fb8e0  size=48  [between]
void __fastcall FUN_008fb8e0(int param_1)

{
  FUN_011a39c0(*(undefined4 *)(param_1 + 0xa0),1,param_1 + 0x90);
  FUN_011a39c0(*(undefined4 *)(param_1 + 0xa4),3,param_1 + 0x60);
  return;
}

// 008FBA60  FUN_008fba60  size=39  [between]
void __thiscall FUN_008fba60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 008FBCA0  FUN_008fbca0  size=300  [between]
undefined4 __thiscall FUN_008fbca0(int param_1,int *param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0xd0);
    *(undefined2 *)(iVar2 + 4) = 0xd0;
    uVar3 = hkpHingeConstraintData::hkpHingeConstraintData_2();
    iStack_24 = param_2[4];
    iStack_20 = param_2[5];
    iStack_1c = param_2[6];
    iStack_2c = param_2[10];
    iStack_30 = param_2[9];
    uStack_18 = 0;
    iStack_34 = param_2[8];
    uStack_28 = 0;
    FUN_011a6e10(*param_2 + 0xf0,param_2[1] + 0xf0,&iStack_24,&iStack_34);
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x38);
    *(undefined2 *)(iVar2 + 4) = 0x38;
    uVar3 = hkpConstraintInstance::hkpConstraintInstance_5(*param_2,param_2[1],uVar3,1);
    FUN_01197ce0(uVar3);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_010060a0();
    FUN_010060a0();
    *(undefined4 *)(param_1 + 8) = 0;
    return 1;
  }
  return 0;
}

// 008FBDD0  FUN_008fbdd0  size=322  [between]
undefined4 __thiscall FUN_008fbdd0(int param_1,int *param_2)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x100);
    *(undefined2 *)(iVar2 + 4) = 0x100;
    iVar2 = hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData_2();
    iStack_24 = param_2[4];
    iStack_20 = param_2[5];
    iStack_1c = param_2[6];
    iStack_2c = param_2[10];
    iStack_30 = param_2[9];
    uStack_18 = 0;
    iStack_34 = param_2[8];
    uStack_28 = 0;
    FUN_011a78e0(*param_2 + 0xf0,param_2[1] + 0xf0,&iStack_24,&iStack_34);
    *(undefined4 *)(iVar2 + 0xdc) = 0x3f800000;
    *(int *)(iVar2 + 0xd4) = param_2[3];
    *(int *)(iVar2 + 0xd8) = param_2[2];
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x38);
    *(undefined2 *)(iVar3 + 4) = 0x38;
    uVar4 = hkpConstraintInstance::hkpConstraintInstance_5(*param_2,param_2[1],iVar2,1);
    FUN_01197ce0(uVar4);
    *(undefined4 *)(param_1 + 4) = uVar4;
    FUN_010060a0();
    FUN_010060a0();
    *(undefined4 *)(param_1 + 8) = 1;
    return 1;
  }
  return 0;
}

// 008FBF20  FUN_008fbf20  size=247  [between]
void FUN_008fbf20(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_1;
  
  if ((DAT_01885d20 != 0) && (DAT_01b35db0 != (int *)0x0)) {
    FUN_004066f0();
    iVar6 = 0;
    if (0 < DAT_01b35db0[1]) {
      iVar7 = 0;
      piVar4 = DAT_01b35db0;
      do {
        iVar1 = *piVar4 + iVar7;
        if ((iVar1 == 0) || ((*(uint *)(iVar1 + 8) & 0x10000) == 0)) {
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0xc;
        }
        else {
          iVar1 = *(int *)(iVar1 + 4);
          iVar5 = *(int *)(iVar1 + 4);
          piVar3 = piVar4;
          if (iVar5 != 0) {
            if (*(int *)(iVar5 + 8) != 0) {
              FUN_01197e40(&local_1,iVar5);
            }
            *(undefined4 *)(iVar1 + 4) = 0;
            piVar3 = DAT_01b35db0;
          }
          piVar3[1] = piVar3[1] + -1;
          piVar4 = DAT_01b35db0;
          if (piVar3[1] != iVar6) {
            puVar2 = (undefined4 *)(iVar7 + *piVar3);
            iVar1 = (*piVar3 + piVar3[1] * 0xc) - (int)puVar2;
            iVar5 = 3;
            do {
              *puVar2 = *(undefined4 *)(iVar1 + (int)puVar2);
              puVar2 = puVar2 + 1;
              iVar5 = iVar5 + -1;
              piVar4 = DAT_01b35db0;
            } while (iVar5 != 0);
          }
        }
      } while (iVar6 < piVar4[1]);
    }
    if (DAT_01885d68 != 1) {
      piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar4 = *piVar4 + -1;
      if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 008FC020  FUN_008fc020  size=423  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008fc020(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_44;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = param_1[4];
  uStack_1c = param_1[5];
  uStack_18 = param_1[6];
  uStack_28 = param_1[10];
  uStack_2c = param_1[9];
  uStack_14 = 0;
  local_30 = param_1[8];
  uStack_24 = 0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x24);
  *(undefined2 *)(iVar2 + 4) = 0x24;
  iVar2 = hkpPositionConstraintMotor::hkpPositionConstraintMotor_2(0);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x3f666666;
  *(undefined4 *)(iVar2 + 0x18) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x10) = 0x7f7fffee;
  *(undefined4 *)(iVar2 + 0x20) = 0x3f000000;
  *(undefined4 *)(iVar2 + 0x1c) = 0x3f000000;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar3 + 4) = 0x40;
  iVar3 = hkpPoweredChainData::hkpPoweredChainData();
  if (iVar3 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x48);
    *(undefined2 *)(iVar4 + 4) = 0x48;
    iVar4 = hkpAction::hkpAction_20(iVar3);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar3 + 0x34) = param_1[0xc];
      *(undefined4 *)(iVar3 + 0x38) = param_1[0xd];
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      FUN_011a9740(*param_1);
      FUN_011a9740(param_1[1]);
      FUN_011a80d0(&uStack_28,auStack_38,&DAT_01701cd0,iVar2,iVar2,iVar2);
      FUN_01197ce0(iVar4);
      uStack_44 = 1;
      _DAT_00000004 = iVar4;
      FUN_010060a0();
    }
    FUN_010060a0();
  }
  FUN_010060a0();
  return uStack_44;
}

// 008FC1D0  FUN_008fc1d0  size=197  [between]
undefined4 __thiscall FUN_008fc1d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x34);
  *(undefined2 *)(iVar2 + 4) = 0x34;
  uVar3 = hkpBallSocketChainData::hkpBallSocketChainData_2();
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x48);
  *(undefined2 *)(iVar2 + 4) = 0x48;
  uVar3 = hkpAction::hkpAction_20(uVar3);
  FUN_011a9740(param_2);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_011a9ea0(&uStack_28,&stack0xffffffc8);
  FUN_011a9740(param_3);
  FUN_010060a0();
  FUN_01197ce0(uVar3);
  *(undefined4 *)(param_1 + 4) = uVar3;
  FUN_010060a0();
  return 1;
}

// 008FC410  hkFixedConstraintData::vf00  size=55  [between]
undefined4 * __thiscall hkFixedConstraintData::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  hkBaseObject::hkBaseObject_204();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 008FC500  FUN_008fc500  size=61  [between]
void __thiscall FUN_008fc500(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008FC540  FUN_008fc540  size=82  [between]
void __thiscall FUN_008fc540(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = *param_1 + param_1[1] * 0xc;
  if (iVar1 != 0) {
    FUN_00a7c940(param_3);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_3 + 8);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 008FC5E0  FUN_008fc5e0  size=81  [between]
undefined4 FUN_008fc5e0(void)

{
  LPVOID pvVar1;
  
  if (DAT_01b35db0 == (undefined4 *)0x0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    DAT_01b35db0 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0xc);
    if (DAT_01b35db0 == (undefined4 *)0x0) {
      DAT_01b35db0 = (undefined4 *)0x0;
      return 0;
    }
    *DAT_01b35db0 = 0;
    DAT_01b35db0[1] = 0;
    DAT_01b35db0[2] = 0x80000000;
  }
  return 1;
}

// 008FC7F0  hkFixedConstraintData::hkFixedConstraintData  size=242  [between]
undefined4 * __fastcall hkFixedConstraintData::hkFixedConstraintData(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_40 [60];
  
  hkpGenericConstraintData::hkpGenericConstraintData_2();
  *param_1 = vftable;
  FUN_011aa9f0(param_1);
  FUN_011ab3e0(&DAT_01701b10);
  FUN_0100ac20(&DAT_01701cd0);
  FUN_011ab1c0(local_40);
  puVar1 = param_1 + 0x18;
  puVar2 = param_1 + 0x24;
  *puVar2 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_0100ac20(&DAT_01701cd0);
  uVar3 = FUN_011ab470(puVar2);
  param_1[0x28] = uVar3;
  uVar3 = FUN_011ab2d0(puVar1);
  param_1[0x29] = uVar3;
  *puVar1 = *puVar1;
  param_1[0x19] = param_1[0x19];
  param_1[0x1a] = param_1[0x1a];
  param_1[0x1b] = param_1[0x1b];
  param_1[0x1c] = param_1[0x1c];
  param_1[0x1d] = param_1[0x1d];
  param_1[0x1e] = param_1[0x1e];
  param_1[0x1f] = param_1[0x1f];
  param_1[0x20] = param_1[0x20];
  param_1[0x21] = param_1[0x21];
  param_1[0x22] = param_1[0x22];
  param_1[0x23] = param_1[0x23];
  param_1[0x24] = param_1[0x24];
  param_1[0x25] = param_1[0x25];
  param_1[0x26] = param_1[0x26];
  param_1[0x27] = param_1[0x27];
  FUN_011a39c0(param_1[0x28],1,puVar2);
  FUN_011a39c0(param_1[0x29],3,puVar1);
  FUN_011aac00();
  FUN_011aadb0();
  FUN_011aaf10();
  return param_1;
}

// 008FC8F0  FUN_008fc8f0  size=64  [between]
void __fastcall FUN_008fc8f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008FC930  FUN_008fc930  size=82  [between]
void __thiscall FUN_008fc930(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = *param_1 + param_1[1] * 0xc;
  if (iVar1 != 0) {
    FUN_00a7c940(param_2);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 008FC990  FUN_008fc990  size=64  [between]
void __fastcall FUN_008fc990(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008FC9D0  FUN_008fc9d0  size=339  [between]
undefined4 FUN_008fc9d0(int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0xb0);
  *(undefined2 *)(iVar2 + 4) = 0xb0;
  iVar2 = hkFixedConstraintData::hkFixedConstraintData(param_1,param_2);
  uStack_94 = *(undefined4 *)(param_2 + 0xf0);
  uStack_90 = *(undefined4 *)(param_2 + 0xf4);
  uStack_8c = *(undefined4 *)(param_2 + 0xf8);
  uStack_88 = *(undefined4 *)(param_2 + 0xfc);
  uStack_84 = *(undefined4 *)(param_2 + 0x100);
  uStack_80 = *(undefined4 *)(param_2 + 0x104);
  uStack_7c = *(undefined4 *)(param_2 + 0x108);
  uStack_78 = *(undefined4 *)(param_2 + 0x10c);
  uStack_74 = *(undefined4 *)(param_2 + 0x110);
  uStack_70 = *(undefined4 *)(param_2 + 0x114);
  uStack_6c = *(undefined4 *)(param_2 + 0x118);
  uStack_68 = *(undefined4 *)(param_2 + 0x11c);
  uStack_64 = *(undefined4 *)(param_2 + 0x120);
  uStack_60 = *(undefined4 *)(param_2 + 0x124);
  uStack_5c = *(undefined4 *)(param_2 + 0x128);
  uStack_58 = *(undefined4 *)(param_2 + 300);
  local_d4 = *(undefined4 *)(param_1 + 0xf0);
  uStack_d0 = *(undefined4 *)(param_1 + 0xf4);
  uStack_cc = *(undefined4 *)(param_1 + 0xf8);
  uStack_c8 = *(undefined4 *)(param_1 + 0xfc);
  uStack_c4 = *(undefined4 *)(param_1 + 0x100);
  uStack_c0 = *(undefined4 *)(param_1 + 0x104);
  uStack_bc = *(undefined4 *)(param_1 + 0x108);
  uStack_b8 = *(undefined4 *)(param_1 + 0x10c);
  uStack_b4 = *(undefined4 *)(param_1 + 0x110);
  uStack_b0 = *(undefined4 *)(param_1 + 0x114);
  uStack_ac = *(undefined4 *)(param_1 + 0x118);
  uStack_a8 = *(undefined4 *)(param_1 + 0x11c);
  uStack_a4 = *(undefined4 *)(param_1 + 0x120);
  uStack_a0 = *(undefined4 *)(param_1 + 0x124);
  uStack_9c = *(undefined4 *)(param_1 + 0x128);
  uStack_98 = *(undefined4 *)(param_1 + 300);
  FUN_01004e90(&uStack_94,&local_d4);
  *(undefined4 *)(iVar2 + 0x60) = uStack_54;
  *(undefined4 *)(iVar2 + 100) = uStack_50;
  *(undefined4 *)(iVar2 + 0x68) = uStack_4c;
  *(undefined4 *)(iVar2 + 0x6c) = uStack_48;
  *(undefined4 *)(iVar2 + 0x70) = uStack_44;
  *(undefined4 *)(iVar2 + 0x74) = uStack_40;
  *(undefined4 *)(iVar2 + 0x78) = uStack_3c;
  *(undefined4 *)(iVar2 + 0x7c) = uStack_38;
  *(undefined4 *)(iVar2 + 0x80) = uStack_34;
  *(undefined4 *)(iVar2 + 0x84) = uStack_30;
  *(undefined4 *)(iVar2 + 0x88) = uStack_2c;
  *(undefined4 *)(iVar2 + 0x8c) = uStack_28;
  *(undefined4 *)(iVar2 + 0x90) = uStack_24;
  *(undefined4 *)(iVar2 + 0x94) = uStack_20;
  *(undefined4 *)(iVar2 + 0x98) = uStack_1c;
  *(undefined4 *)(iVar2 + 0x9c) = uStack_18;
  FUN_011a39c0(*(undefined4 *)(iVar2 + 0xa0),1,iVar2 + 0x90);
  FUN_011a39c0(*(undefined4 *)(iVar2 + 0xa4),3,iVar2 + 0x60);
  uVar3 = FUN_01197de0(param_1,param_2,iVar2);
  *(undefined4 *)(unaff_EBX + 4) = uVar3;
  FUN_010060a0();
  FUN_010060a0();
  return 1;
}

// 008FCB30  FUN_008fcb30  size=101  [between]
undefined4 * __thiscall FUN_008fcb30(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 008FCC00  FUN_008fcc00  size=136  [between]
void FUN_008fcc00(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00a7c930();
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  piVar3 = DAT_01b35db0;
  local_8 = param_2;
  local_4 = 1;
  puVar1 = (uint *)(DAT_01b35db0 + 1);
  if (*puVar1 == (DAT_01b35db0[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,DAT_01b35db0,0xc);
  }
  iVar2 = *piVar3 + *puVar1 * 0xc;
  if (iVar2 != 0) {
    FUN_00a7c940(local_c);
    *(undefined4 *)(iVar2 + 4) = local_8;
    *(undefined4 *)(iVar2 + 8) = local_4;
  }
  *puVar1 = *puVar1 + 1;
  return;
}

// 008FCC90  FUN_008fcc90  size=512  [between]
undefined4 __thiscall
FUN_008fcc90(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if (((param_2 != 0) && (param_3 != 0)) && (DAT_01885d20 != 0)) {
    FUN_004066f0();
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x58);
    *(undefined2 *)(iVar2 + 4) = 0x58;
    iVar2 = hkpGenericConstraintData::hkpGenericConstraintData_2();
    if (iVar2 != 0) {
      FUN_011aa9f0(iVar2);
      uStack_84 = *param_5;
      uStack_80 = param_5[1];
      uStack_7c = param_5[2];
      uStack_6c = param_6[2];
      uStack_70 = param_6[1];
      uStack_78 = 0;
      uStack_74 = *param_6;
      uStack_68 = 0;
      FUN_011ab3e0(&uStack_84);
      FUN_011ab470(&uStack_74);
      FUN_01007050(param_2 + 0xf0,&uStack_84);
      FUN_01007050(param_3 + 0xf0,&uStack_74);
      fStack_64 = fStack_64 - fStack_54;
      fStack_60 = fStack_60 - fStack_50;
      fStack_5c = fStack_5c - fStack_4c;
      fVar5 = fStack_64 * fStack_64;
      fVar6 = fStack_60 * fStack_60;
      fVar7 = fStack_5c * fStack_5c;
      fVar8 = fVar6 + fVar5 + fVar7;
      fVar9 = fVar6 + fVar5 + fVar7;
      fVar10 = fVar6 + fVar5 + fVar7;
      fVar7 = fVar6 + fVar5 + fVar7;
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      auVar12._4_4_ = fVar9;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = fVar10;
      auVar12._12_4_ = fVar7;
      auVar12 = rsqrtps(auVar11,auVar12);
      fVar5 = auVar12._0_4_;
      fVar6 = auVar12._4_4_;
      fVar13 = auVar12._8_4_;
      fVar14 = auVar12._12_4_;
      fStack_44 = (float)(~-(uint)(fVar8 <= 0.0) &
                         (uint)((3.0 - fVar5 * fVar8 * fVar5) * fVar5 * 0.5)) * fStack_64;
      fStack_40 = (float)(~-(uint)(fVar9 <= 0.0) &
                         (uint)((3.0 - fVar6 * fVar9 * fVar6) * fVar6 * 0.5)) * fStack_60;
      fStack_3c = (float)(~-(uint)(fVar10 <= 0.0) &
                         (uint)((3.0 - fVar13 * fVar10 * fVar13) * fVar13 * 0.5)) * fStack_5c;
      fStack_38 = (float)(~-(uint)(fVar7 <= 0.0) &
                         (uint)((3.0 - fVar14 * fVar7 * fVar14) * fVar14 * 0.5)) *
                  (fStack_58 - fStack_48);
      FUN_011ab0f0(&fStack_44,0);
      FUN_011ab580(0,0,param_4);
      FUN_011aaf10();
      pvVar1 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x38);
      *(undefined2 *)(iVar3 + 4) = 0x38;
      uVar4 = hkpConstraintInstance::hkpConstraintInstance_5(param_2,param_3,iVar2,1);
      FUN_01197ce0(uVar4);
      *(undefined4 *)(param_1 + 0x18) = param_4;
      *(undefined4 *)(param_1 + 4) = uVar4;
      *(int *)(param_1 + 8) = iVar2;
      FUN_00406760();
      return 1;
    }
    FUN_00406760();
  }
  return 0;
}

// 008FCE90  Constraint::ConstructionKit::vf04  size=406  [class]
void __fastcall Constraint::ConstructionKit::vf04(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 in_XMM6 [16];
  undefined1 auVar15 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    puVar3 = (undefined4 *)FUN_011a39b0(*(undefined4 *)(param_1 + 0x10));
    local_60 = *puVar3;
    uStack_5c = puVar3[1];
    uStack_58 = puVar3[2];
    uStack_54 = puVar3[3];
    puVar3 = (undefined4 *)FUN_011a39b0(*(undefined4 *)(param_1 + 0x14));
    local_20 = *puVar3;
    uStack_1c = puVar3[1];
    uStack_18 = puVar3[2];
    uStack_14 = puVar3[3];
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x18);
    FUN_01007050(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0xf0,&local_60);
    FUN_01007050(iVar1 + 0xf0,&local_20);
    local_50 = local_30 - local_40;
    fStack_4c = fStack_2c - fStack_3c;
    fStack_48 = fStack_28 - fStack_38;
    fStack_44 = fStack_24 - fStack_34;
    fVar5 = local_50 * local_50;
    fVar6 = fStack_4c * fStack_4c;
    fVar7 = fStack_48 * fStack_48;
    fVar8 = fVar6 + fVar5 + fVar7;
    auVar15._4_4_ = fVar6 + fVar5 + fVar7;
    auVar15._0_4_ = fVar8;
    auVar15._8_4_ = fVar6 + fVar5 + fVar7;
    auVar15._12_4_ = fVar6 + fVar5 + fVar7;
    auVar15 = rsqrtps(in_XMM6,auVar15);
    local_60 = 0x3f000000;
    uStack_5c = 0x3f000000;
    uStack_58 = 0x3f000000;
    uStack_54 = 0x3f000000;
    local_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    fVar9 = auVar15._0_4_;
    fVar8 = (float)(~-(uint)(fVar8 <= 0.0) &
                   (uint)((3.0 - fVar9 * fVar8 * fVar9) * fVar9 * 0.5 * fVar8));
    if (0.001 < fVar8) {
      auVar12._4_4_ = fVar5;
      auVar12._0_4_ = fVar5;
      auVar12._8_4_ = fVar5;
      auVar12._12_4_ = fVar5;
      fVar9 = fVar6 + fVar5 + fVar7;
      fVar10 = fVar6 + fVar5 + fVar7;
      fVar11 = fVar6 + fVar5 + fVar7;
      fVar7 = fVar6 + fVar5 + fVar7;
      auVar2._4_4_ = fVar10;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = fVar11;
      auVar2._12_4_ = fVar7;
      auVar15 = rsqrtps(auVar12,auVar2);
      fVar5 = auVar15._0_4_;
      fVar6 = auVar15._4_4_;
      fVar13 = auVar15._8_4_;
      fVar14 = auVar15._12_4_;
      local_50 = (float)(~-(uint)(fVar9 <= 0.0) &
                        (uint)((3.0 - fVar5 * fVar9 * fVar5) * fVar5 * 0.5)) * local_50;
      fStack_4c = (float)(~-(uint)(fVar10 <= 0.0) &
                         (uint)((3.0 - fVar6 * fVar10 * fVar6) * fVar6 * 0.5)) * fStack_4c;
      fStack_48 = (float)(~-(uint)(fVar11 <= 0.0) &
                         (uint)((3.0 - fVar13 * fVar11 * fVar13) * fVar13 * 0.5)) * fStack_48;
      fStack_44 = (float)(~-(uint)(fVar7 <= 0.0) &
                         (uint)((3.0 - fVar14 * fVar7 * fVar14) * fVar14 * 0.5)) * fStack_44;
      FUN_011a39c0(*(undefined4 *)(param_1 + 0xc),1,&local_50);
    }
    uVar4 = 0xffff0000;
    if (fVar8 <= *(float *)(param_1 + 0x18)) {
      uVar4 = 0xffffff00;
    }
    FUN_0111c150(&local_30,&local_40,uVar4,0,0);
  }
  return;
}

