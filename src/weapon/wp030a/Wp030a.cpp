// src/weapon/wp030a/Wp030a.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005FF630..00AB7900, 8 functions

#include "mgrr.h"
#include "Wp030a.h"

// 005FF630  Wp030a::vf50  size=16  [class]
void Wp030a::vf50(void)

{
  Behavior::vf50();
  FUN_00a93170();
  return;
}

// 005FF640  Wp030a::startup  size=12  [class]
bool Wp030a::startup(void)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  return iVar1 != 0;
}

// 005FF650  Wp030a::thunk_vf44  size=5  [class]
void __fastcall Wp030a::thunk_vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x774) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x774))(1);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x75c) != 0) {
    piVar2 = (int *)FUN_008d7570();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x75c) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    piVar2 = (int *)FUN_00d72970();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (*(int *)(param_1 + 0x584) != 0) {
    (**(code **)(*DAT_01be9bf4 + 0x10))(*(int *)(param_1 + 0x584),*(undefined4 *)(param_1 + 0x588));
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7d8);
  if (iVar1 != 0) {
    FUN_00c730c0();
    FUN_00905ce0();
    FUN_00905ce0();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_00dd7270();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    FUN_00dd7270();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x63c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x63c))(1);
    *(undefined4 *)(param_1 + 0x63c) = 0;
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x770);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x770) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x76c);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}

// 005FF660  Wp030a::vf1B0  size=52  [class]
undefined4 __fastcall Wp030a::vf1B0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x870) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x005ff68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x1b0))();
      return uVar3;
    }
  }
  return 0;
}

// 005FF6A0  Wp030a::vf4C  size=547  [class]
void __fastcall Wp030a::vf4C(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_54 [80];
  
  Behavior::vf4C();
  if (param_1[0x21c] != 0) {
    iVar8 = param_1[0x21d];
    FUN_00a7c8a0(iVar8);
    iVar8 = FUN_00a12210(iVar8);
    (**(code **)(*param_1 + 0x6c))(iVar8 + 0x40);
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    fStack_98 = 0.0;
    fStack_9c = 0.0;
    uStack_a4 = 0;
    fStack_a8 = 0.0;
    fStack_ac = 0.0;
    fStack_b0 = 0.0;
    uStack_78 = 0x3f800000;
    uStack_8c = 0x3f800000;
    fStack_a0 = 1.0;
    uStack_b4 = 0x3f800000;
    fVar3 = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                 *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                 *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
    fVar4 = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                 *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                 *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
    fVar11 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                  *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                  *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
    fVar1 = *(float *)(iVar8 + 0x28);
    fVar2 = *(float *)(iVar8 + 0x38);
    fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar8 + 0x18) / fVar11));
    fVar10 = (float10)fpatan((float10)(fVar1 / fVar11),(float10)(fVar2 / fVar11));
    fStack_74 = (float)fVar10;
    fStack_70 = (float)fVar9;
    fVar9 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)fVar4,
                            (float10)*(float *)(iVar8 + 0x10) / (float10)fVar3);
    fStack_6c = (float)fVar9;
    thunk_FUN_00ddc1d0(auStack_54,&fStack_74,5);
    D3DXMatrixMultiply(&uStack_b4,&uStack_b4,auStack_54);
    fVar6 = fStack_ac * fStack_ac;
    fVar7 = fStack_b0 * fStack_b0;
    fVar5 = fStack_a8 * fStack_a8;
    fVar2 = SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c);
    fVar11 = fStack_a8 / fVar2;
    fVar1 = fStack_98 / fVar2;
    fVar9 = (float10)FUN_00ddbaa0(-(fStack_b8 / fVar2));
    fVar10 = (float10)fpatan((float10)fVar11,(float10)fVar1);
    fStack_70 = (float)fVar10;
    fStack_6c = (float)fVar9;
    fVar9 = (float10)fpatan((float10)fVar4 / (float10)SQRT(fVar5 + fVar7 + fVar6),
                            (float10)fVar3 /
                            (float10)SQRT(fStack_b8 * fStack_b8 + fVar3 * fVar3 + fVar4 * fVar4));
    fStack_68 = (float)fVar9;
    (**(code **)(*param_1 + 0x88))(&fStack_70);
  }
  return;
}

// 00AA6750  Wp030a::Wp030a  size=18  [class]
undefined4 * __fastcall Wp030a::Wp030a(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6770  Wp030a::vf04  size=6  [class]
undefined * Wp030a::vf04(void)

{
  return &DAT_01b35450;
}

// 00AB7900  Wp030a::destruct  size=105  [class]
undefined4 * __thiscall Wp030a::destruct(undefined4 *param_1,byte param_2)

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

