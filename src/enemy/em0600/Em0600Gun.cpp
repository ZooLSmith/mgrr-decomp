// src/enemy/em0600/Em0600Gun.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0059FD70..00AB6C50, 6 functions

#include "mgrr.h"
#include "Em0600Gun.h"

// 0059FD70  Em0600Gun::vf40  size=48  [class]
undefined4 __fastcall Em0600Gun::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa28) = 0x3c;
  *(undefined4 *)(param_1 + 0xa2c) = 0x3c;
  *(undefined4 *)(param_1 + 0xa60) = 0;
  return 1;
}

// 0059FDA0  Em0600Gun::vf44  size=5  [class]
void __fastcall Em0600Gun::vf44(int param_1)

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

// 0059FDB0  Em0600Gun::vf50  size=37  [class]
void __fastcall Em0600Gun::vf50(int param_1)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
  *(undefined4 *)(param_1 + 0xa00) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  return;
}

// 005A5A10  Em0600Gun::vf4C  size=762  [class]
void __fastcall Em0600Gun::vf4C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float *pfStack_88;
  float fStack_84;
  undefined1 auStack_6c [8];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_54 [24];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fStack_84 = 8.29753e-39;
  FUN_00a92fb0();
  fStack_84 = 8.29754e-39;
  fVar6 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0xa3c) = (float)fVar6;
  fStack_84 = 8.297555e-39;
  piVar1 = (int *)FUN_00c13920();
  fStack_84 = 0.0;
  pfStack_88 = (float *)0x5a5a41;
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (iVar2 != 0) {
    pfStack_88 = (float *)0x5a5a4e;
    puVar3 = (undefined4 *)FUN_00a7c8b0();
    *(undefined4 *)(param_1 + 0xa50) = *puVar3;
    *(undefined4 *)(param_1 + 0xa54) = puVar3[1];
    *(undefined4 *)(param_1 + 0xa58) = puVar3[2];
    *(undefined4 *)(param_1 + 0xa5c) = puVar3[3];
    pfStack_88 = (float *)0x5a5a78;
    uVar4 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa1c) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0xa1c);
  *(undefined4 *)(param_1 + 0xa40) = 0;
  *(undefined4 *)(param_1 + 0xa20) = 0;
  *(undefined4 *)(param_1 + 0xa44) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(iVar2 + 0x40);
    pfStack_88 = (float *)0xf10;
    *(undefined4 *)(param_1 + 0xa54) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0xa5c) = *(undefined4 *)(iVar2 + 0x4c);
    iVar2 = FUN_00a12210();
    if (iVar2 != 0) {
      pfStack_88 = (float *)0xf10;
      iVar2 = FUN_00a12210();
      pfStack_88 = (float *)(iVar2 + 0x10);
      fVar8 = 0.0;
      D3DXMatrixInverse(auStack_54);
      D3DXVec3TransformNormal(&stack0xffffff80,(undefined4 *)(param_1 + 0xa50),&fStack_60);
      fVar6 = (float10)(float)pfStack_88;
      pfStack_88 = (float *)(float)((float10)fStack_38 + fVar6);
      fVar7 = (float10)fStack_34 + (float10)fStack_84;
      fStack_84 = (float)fVar7;
      fVar6 = (float10)fpatan((float10)fStack_38 + fVar6,
                              SQRT(fVar7 * fVar7 +
                                   ((float10)fStack_3c + (float10)fVar8) *
                                   ((float10)fStack_3c + (float10)fVar8)));
      *(float *)(param_1 + 0xa44) = (float)fVar6;
      iVar2 = FUN_00a12210(1);
      D3DXMatrixInverse(auStack_6c,0,iVar2 + 0x10);
      D3DXVec3TransformNormal(&pfStack_88,*(int *)(param_1 + 0xa1c) + 0x40,&stack0xffffff88);
      fVar6 = (float10)fpatan(SQRT(((float10)fStack_20 + (float10)fStack_60) *
                                   ((float10)fStack_20 + (float10)fStack_60) +
                                   ((float10)fStack_24 + (float10)fStack_64) *
                                   ((float10)fStack_24 + (float10)fStack_64)),
                              (float10)fStack_1c + (float10)fStack_5c);
      *(float *)(param_1 + 0xa40) = (float)fVar6;
      fVar8 = *(float *)(param_1 + 0xa44);
      if ((!NAN(fVar8) && -0.5235988 < fVar8 != (fVar8 == -0.5235988)) &&
         (*(float *)(param_1 + 0xa44) <= 1.0471976)) {
        *(undefined4 *)(param_1 + 0xa20) = 1;
      }
    }
  }
  pfStack_88 = (float *)0x5a5bea;
  Behavior::vf4C();
  if (*(int **)(param_1 + 0xa1c) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xa14) = 0;
  }
  else {
    pfStack_88 = &fStack_64;
    pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0xa1c) + 0x204))();
    fVar8 = pfVar5[1];
    if (*(int *)(param_1 + 0xa08) != 0) {
      fVar8 = fVar8 - 1.0;
    }
    if (*(int *)(param_1 + 0xa04) == 0) {
      fStack_64 = *pfVar5 - *(float *)(param_1 + 0xa70);
      fStack_60 = fVar8 - *(float *)(param_1 + 0xa74);
      fStack_5c = pfVar5[2] - *(float *)(param_1 + 0xa78);
      fStack_58 = pfVar5[3] - *(float *)(param_1 + 0xa7c);
      fVar8 = fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60;
      if (!NAN(fVar8) && 0.0001 < fVar8 != (fVar8 == 0.0001)) {
        if (fVar8 <= 0.0) {
          pfStack_88 = (float *)&DAT_0163d0ac;
          FUN_00dd5650();
        }
        else {
          pfStack_88 = &fStack_64;
          FUN_00ddf460(pfStack_88);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xa08) != 0) {
    pfStack_88 = (float *)0x1;
    FUN_00a12210();
  }
  *(undefined4 *)(param_1 + 0xa14) = 0;
  return;
}

// 00AAC530  Em0600Gun::vf04  size=6  [class]
undefined * Em0600Gun::vf04(void)

{
  return &DAT_01b351a8;
}

// 00AB6C50  Em0600Gun::vf00  size=105  [class]
undefined4 * __thiscall Em0600Gun::vf00(undefined4 *param_1,byte param_2)

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

