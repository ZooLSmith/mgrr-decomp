// src/misc/cRayBatteryDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D4BE0..00ABA010, 23 functions

#include "mgrr.h"
#include "cRayBatteryDLC.h"

// 008D4BE0  cRayBatteryDLC::vf30  size=89  [class]
void __fastcall cRayBatteryDLC::vf30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  BehaviorAppBase::vf30();
  if ((*(int *)(param_1 + 0x588) != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xb4) = uVar2;
    FUN_00a7c8a0();
    puVar3 = (undefined4 *)FUN_009f8b60();
    uVar2 = *puVar3;
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0x34) = 1;
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
  }
  return;
}

// 008D4C40  cRayBatteryDLC::vf1BC  size=5  [class]
void __thiscall cRayBatteryDLC::vf1BC(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  piVar1 = param_2;
  param_1[0x20f] = param_2[0x147];
  puVar4 = &DAT_01be9ca0;
  (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
  iVar2 = FUN_00dd6d80(puVar4);
  if (iVar2 == 0) {
    if (piVar1[0x20f] == 0) goto LAB_00a96635;
    uVar5 = 0;
LAB_00a96621:
    param_2 = (int *)param_1[0x13c];
  }
  else {
    iVar2 = FUN_00acdea0();
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x83c) == 0) goto LAB_00a96635;
      puVar4 = &DAT_01be9ca0;
      (**(code **)(*param_1 + 4))(&DAT_01be9ca0);
      iVar3 = FUN_00dd6d80(puVar4);
      if (iVar3 != 0) goto LAB_00a96635;
      uVar5 = *(undefined4 *)(iVar2 + 0xa50);
      goto LAB_00a96621;
    }
    iVar2 = FUN_00d46780();
    if ((iVar2 != 0) && ((piVar1[300] == 0x2c08e || (piVar1[300] == 0x2c08f)))) {
      param_2 = (int *)param_1[0x13c];
      DebrisExplodeManager::addHandle(&param_2,0);
    }
    iVar2 = FUN_00d467a0();
    if ((iVar2 != 0) && ((piVar1[300] == 0x2808e || (piVar1[300] == 0x2808f)))) {
      param_2 = (int *)param_1[0x13c];
      DebrisExplodeManager::addHandle(&param_2,0);
    }
    iVar2 = FUN_00d467a0();
    if ((iVar2 == 0) || (piVar1[300] != 0x20133)) goto LAB_00a96635;
    param_2 = (int *)param_1[0x13c];
    uVar5 = 0;
  }
  DebrisExplodeManager::addHandle(&param_2,uVar5);
LAB_00a96635:
  param_1[0x210] = piVar1[0x210];
  param_1[0x211] = piVar1[0x211];
  return;
}

// 008D4C50  cRayBatteryDLC::vf1D0  size=16  [class]
void __thiscall cRayBatteryDLC::vf1D0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 008D4C60  cRayBatteryDLC::setCutCrerateInfo  size=31  [class]
void cRayBatteryDLC::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42200;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 008D4C80  cRayBatteryDLC::vf44  size=16  [class]
void cRayBatteryDLC::vf44(void)

{
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 008D4C90  cRayBatteryDLC::vf50  size=37  [class]
void __fastcall cRayBatteryDLC::vf50(int param_1)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
  *(undefined4 *)(param_1 + 0xd90) = 0;
  *(undefined4 *)(param_1 + 0xd94) = 0;
  *(undefined4 *)(param_1 + 0xda0) = 0;
  return;
}

// 008D4CC0  FUN_008d4cc0  size=119  [between]
void __fastcall FUN_008d4cc0(int param_1)

{
  float fVar1;
  
  if (((DAT_01bea060 & 0x2000000) == 0) && (*(int *)(param_1 + 0x61c) != 0)) {
    fVar1 = *(float *)(param_1 + 0xdcc) + *(float *)(param_1 + 0xdc4);
    *(float *)(param_1 + 0xdc4) = fVar1;
    if (((*(int *)(param_1 + 0xdac) != 0) &&
        (((*(int *)(param_1 + 0xd90) != 0 || (*(int *)(param_1 + 0xd94) != 0)) &&
         (*(int *)(param_1 + 0xdb0) != 0)))) &&
       ((60.0 <= fVar1 && (*(int *)(param_1 + 0xdbc) <= *(int *)(param_1 + 0xdb8))))) {
      FUN_00a8caf0(1,0,0,0);
      return;
    }
  }
  return;
}

// 008D4D40  FUN_008d4d40  size=337  [between]
void __fastcall FUN_008d4d40(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(param_1[0x2d8] + 6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x370] = 0x41200000;
    iVar6 = 0;
    param_1[0x371] = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar3 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0164a238), iVar4 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar3 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0164a234), iVar4 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if ((param_1[0x36e] < param_1[0x36f]) &&
     (fVar2 = (float)param_1[0x370], param_1[0x370] = (int)(fVar2 - (float)param_1[0x373]),
     fVar2 - (float)param_1[0x373] < 0.0)) {
    param_1[0x370] = 0x41200000;
    param_1[0x36e] = param_1[0x36e] + 1;
  }
  if (param_1[0x368] != 0) {
    param_1[0x36e] = param_1[0x36f];
  }
                    /* WARNING: Could not recover jumptable at 0x008d4ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 008D4EC0  FUN_008d4ec0  size=289  [between]
void __fastcall FUN_008d4ec0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0x40000000;
  if (param_1[0x187] == 0) {
    if (param_1[0x368] != 0) {
      uVar3 = 0x40800000;
    }
    FUN_00aa4080(param_1[0x2d8] + 7,0,0,0x3f800000,0x8000000,0,uVar3);
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar6 = 0;
      do {
        iVar2 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar6) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0164a238), iVar4 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar6);
          *puVar1 = *puVar1 | 1;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x70;
      } while (iVar5 < (short)param_1[0xc9]);
    }
    iVar5 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar6 = 0;
      do {
        iVar2 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar6) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0164a234), iVar4 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar6);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x70;
      } while (iVar5 < (short)param_1[0xc9]);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 100))();
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    FUN_00a8caf0(2,0,0,0);
  }
  return;
}

// 008D5000  FUN_008d5000  size=131  [between]
void __fastcall FUN_008d5000(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0xd94) == 0) {
    if (*(int *)(param_1 + 0x61c) != 0) {
      fVar1 = *(float *)(param_1 + 0xdcc) + *(float *)(param_1 + 0xdc4);
      *(float *)(param_1 + 0xdc4) = fVar1;
      if ((*(int *)(param_1 + 0xdb0) == 0) && (180.0 < fVar1)) {
        FUN_00a8caf0(3,0,0,0);
      }
    }
    if (*(int *)(param_1 + 0xdb8) == 0) {
      FUN_00a8caf0(3,0,0,0);
    }
    if ((DAT_01bea060 & 0x2000000) != 0) {
      FUN_00a8caf0(3,0,0,0);
    }
  }
  return;
}

// 008D50A0  FUN_008d50a0  size=145  [between]
void __fastcall FUN_008d50a0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(param_1[0x2d8] + 9,0,0,0x3f800000,0x8000000,0,0x40800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 100))();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
  return;
}

// 008D5140  FUN_008d5140  size=53  [between]
void FUN_008d5140(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00ac82f0();
      if (iVar1 == 0) {
        FUN_00a8caf0(0,0,0,0);
      }
    }
  }
  return;
}

// 008D5180  FUN_008d5180  size=32  [between]
void FUN_008d5180(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 008D51E0  FUN_008d51e0  size=62  [between]
uint FUN_008d51e0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    puVar4 = &DAT_01be9c3c;
    (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  return uVar2;
}

// 008D5220  FUN_008d5220  size=1026  [between]
void __fastcall FUN_008d5220(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  int local_374;
  float local_370 [7];
  undefined4 local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined1 local_340 [16];
  uint auStack_330 [5];
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined4 uStack_30c;
  undefined2 uStack_29c;
  uint uStack_294;
  undefined4 uStack_220;
  undefined4 uStack_1c4;
  undefined2 uStack_1b6;
  
  local_370[1] = 2.87126e-42;
  local_370[5] = 2.87126e-42;
  iVar7 = 0;
  local_370[0] = 2.86986e-42;
  local_370[2] = 2.87266e-42;
  local_370[3] = 2.87406e-42;
  local_370[4] = 2.86986e-42;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x18,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x367] = 0x40000000;
    param_1[0x376] = 0;
    local_374 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164a238), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
          *puVar1 = *puVar1 | 1;
        }
        local_374 = local_374 + 1;
        iVar7 = iVar7 + 0x70;
      } while (local_374 < (short)param_1[0xc9]);
    }
    iVar7 = 0;
    local_374 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164a234), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_374 = local_374 + 1;
        iVar7 = iVar7 + 0x70;
      } while (local_374 < (short)param_1[0xc9]);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if ((float)param_1[0x367] <= 0.0) {
    param_1[0x37c] = 0;
    param_1[0x367] = (int)((float)param_1[0x367] + 3.0);
    if (param_1[300] == 0x3c200) {
      iVar7 = FUN_00a12210(local_370[param_1[0x376]]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar8 = (uint)param_1[0x376] < 4;
    }
    else {
      iVar7 = FUN_00a12210(local_370[param_1[0x376] + 4]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar8 = (uint)param_1[0x376] < 2;
    }
    if (!bVar8) {
      param_1[0x376] = 0;
    }
    local_370[0] = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                        *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                        *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
    local_370[1] = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                        *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                        *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
    fVar5 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
                 *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
                 *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
    local_370[4] = *(float *)(iVar7 + 0x28) / fVar5;
    fVar2 = *(float *)(iVar7 + 0x38);
    fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar7 + 0x18) / fVar5));
    fVar10 = (float10)fpatan((float10)local_370[4],(float10)(fVar2 / fVar5));
    local_350 = (float)fVar10;
    local_34c = (float)fVar9;
    fVar9 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)local_370[1],
                            (float10)*(float *)(iVar7 + 0x10) / (float10)local_370[0]);
    local_348 = (float)fVar9;
    local_370[4] = *(float *)(iVar7 + 0x40);
    local_370[5] = *(float *)(iVar7 + 0x44);
    local_370[6] = *(float *)(iVar7 + 0x48);
    local_354 = *(undefined4 *)(iVar7 + 0x4c);
    local_370[0] = *(float *)(iVar7 + 0x40);
    local_370[1] = *(float *)(iVar7 + 0x44);
    local_370[2] = *(float *)(iVar7 + 0x48);
    local_370[3] = *(float *)(iVar7 + 0x4c);
    if ((int *)param_1[0x36b] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x36b] + 0x204))(local_340);
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_220 = 0x11;
    uStack_29c = 0x3151;
    if (param_1[300] == 0x3c201) {
      uStack_220 = 0x12;
    }
    uVar11 = 0x43480000;
    fVar9 = (float10)FUN_00dde300(0,0);
    FUN_00416e30(local_370 + 4,local_370,&local_350,(float)(fVar9 + (float10)1.5),uVar11);
    uStack_1c4 = 0x3f800000;
    uStack_31c = 0xf;
    uStack_314 = 0xf;
    uStack_294 = uStack_294 | 0x10002000;
    uStack_310 = 0;
    uStack_318 = 0x96;
    uStack_30c = FUN_00a81330();
    uVar11 = FUN_00a7c7f0();
    FUN_00a7c960(uVar11);
    uStack_1b6 = *(undefined2 *)(iVar7 + 0xa0);
    auStack_330[0] = auStack_330[0] | 4;
    FUN_00ad3be0(param_1[0x13c],auStack_330);
  }
  FUN_00a92fb0();
  fVar9 = (float10)FUN_00e049b0();
  pcVar4 = *(code **)(*param_1 + 100);
  param_1[0x367] = (int)(float)((float10)(float)param_1[0x367] - fVar9);
  (*pcVar4)();
  return;
}

// 008D5630  FUN_008d5630  size=103  [between]
void __thiscall FUN_008d5630(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 008D56A0  cRayBatteryDLC::startup  size=768  [class]
undefined4 __fastcall cRayBatteryDLC::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = BehaviorAppBase::startup();
  if ((iVar3 != 0) &&
     (iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>(), iVar3 != 0)) {
    local_18 = 1;
    local_14 = 1;
    local_10 = 1;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_18);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x4b0) == 0x3c200) {
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x3c200,0x30200);
      }
      if (*(int *)(param_1 + 0x4b0) == 0x3c201) {
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x3c201,0x30201);
      }
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0xb60) = 0;
      if (*(int *)(param_1 + 0x4a4) == 1) {
        *(undefined4 *)(param_1 + 0xb60) = 9;
      }
      FUN_00aa4080(*(int *)(param_1 + 0xb60) + 6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0,0);
      *(uint *)(param_1 + 0xb70) = *(uint *)(param_1 + 0xb70) | 2;
      FUN_00a82870(0x40490fdb,0xc0490fdb,0x3dcccccd,0x3ae4c388,0x3db2b8c2);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),1,0);
      *(uint *)(param_1 + 0xc40) = *(uint *)(param_1 + 0xc40) | 2;
      FUN_00a82840(0x3f860a92,0xbf860a92,0x3dcccccd,0x3ae4c388,0x3db2b8c2);
      *(undefined4 *)(param_1 + 0xdb8) = 0x3c;
      *(undefined4 *)(param_1 + 0xdbc) = 0x3c;
      FUN_008d5630(4,param_1 + 0xa00);
      *(undefined4 *)(param_1 + 0xdf0) = 0;
      FUN_009fd240();
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
      }
      local_18 = 0x3f666666;
      local_14 = 0x3f99999a;
      local_10 = 0x3f8ccccd;
      local_c = 0x3e4ccccd;
      local_8 = 0x40400000;
      local_4 = 0x40000000;
      FUN_00a8e4d0(&local_c,&local_18);
      *(undefined4 *)(param_1 + 0xd98) = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0164a238), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0164a234), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 | 1;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

// 008D59B0  FUN_008d59b0  size=3554  [between]
void __fastcall FUN_008d59b0(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  int iStack_3e8;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0 [6];
  float local_388 [4];
  float fStack_378;
  undefined1 local_370 [16];
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [16];
  undefined1 local_340 [16];
  uint auStack_330 [4];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  float fStack_314;
  undefined1 uStack_310;
  undefined4 uStack_30c;
  uint uStack_294;
  undefined4 uStack_220;
  undefined4 uStack_1c4;
  undefined2 uStack_1b6;
  float fStack_1a0;
  float fStack_19c;
  
  local_3a0[1] = 0x801;
  local_388[1] = 2.87126e-42;
  iVar10 = 0;
  param_1[0x369] = 1;
  local_3a0[0] = 0x800;
  local_3a0[2] = 0x802;
  local_3a0[3] = 0x803;
  local_388[0] = 2.86986e-42;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(param_1[0x2d8] + 8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x371] = 0;
    param_1[0x376] = 0;
    FUN_008d5630(3,param_1 + 0x2ac);
    param_1[0x37c] = 0;
    if (((int *)param_1[0x36b] != (int *)0x0) && (param_1[0x365] == 0)) {
      param_1[0x37c] = 1;
      piVar5 = (int *)(**(code **)(*(int *)param_1[0x36b] + 0x204))(local_370);
      param_1[0x380] = *piVar5;
      param_1[0x381] = piVar5[1];
      param_1[0x382] = piVar5[2];
      param_1[899] = piVar5[3];
      fStack_3e0 = (float)param_1[0x10] - (float)param_1[0x380];
      fStack_3d8 = (float)param_1[0x12] - (float)param_1[0x382];
      fStack_3d4 = (float)param_1[0x13] - (float)param_1[899];
      fStack_3dc = 0.0;
      fVar2 = fStack_3e0 * fStack_3e0 + fStack_3d8 * fStack_3d8;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_3e0,&fStack_3e0);
        fVar2 = fStack_3d8;
        fVar3 = fStack_3dc;
        fVar4 = fStack_3e0;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar2 = 0.0;
        fVar4 = 0.0;
        fVar3 = 1.0;
      }
      param_1[0x380] = (int)((float)param_1[0x380] + fVar4 * 20.0);
      param_1[0x381] = (int)((float)param_1[0x381] + fVar3 * 20.0);
      param_1[0x382] = (int)((float)param_1[0x382] + fVar2 * 20.0);
      param_1[899] = (int)(fStack_3d4 * 20.0 + (float)param_1[899]);
      param_1[900] = 0;
    }
    if (param_1[0x366] != 0) {
      param_1[0x37c] = 1;
      piVar5 = (int *)(**(code **)(*(int *)param_1[0x36b] + 0x204))(local_340);
      param_1[0x380] = *piVar5;
      param_1[0x381] = piVar5[1];
      param_1[0x382] = piVar5[2];
      param_1[899] = piVar5[3];
      fStack_3e0 = (float)param_1[0x10] - (float)param_1[0x380];
      fStack_3d8 = (float)param_1[0x12] - (float)param_1[0x382];
      fStack_3d4 = (float)param_1[0x13] - (float)param_1[899];
      fStack_3dc = 0.0;
      fVar2 = fStack_3d8 * fStack_3d8 + fStack_3e0 * fStack_3e0;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_3e0,&fStack_3e0);
        fVar2 = fStack_3d8;
        fVar3 = fStack_3dc;
        fVar4 = fStack_3e0;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar2 = 0.0;
        fVar4 = 0.0;
        fVar3 = 1.0;
      }
      param_1[0x380] = (int)(fVar4 * 7.0 + (float)param_1[0x380]);
      param_1[0x381] = (int)((float)param_1[0x381] + fVar3 * 7.0);
      param_1[0x382] = (int)((float)param_1[0x382] + fVar2 * 7.0);
      param_1[899] = (int)(fStack_3d4 * 7.0 + (float)param_1[899]);
      param_1[900] = 0;
    }
    iStack_3e8 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar8 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar8 + 0x60 + iVar10) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164a238), iVar6 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar10);
          *puVar1 = *puVar1 | 1;
        }
        iStack_3e8 = iStack_3e8 + 1;
        iVar10 = iVar10 + 0x70;
      } while (iStack_3e8 < (short)param_1[0xc9]);
    }
    iVar10 = 0;
    iStack_3e8 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar8 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar8 + 0x60 + iVar10) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164a234), iVar6 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38 + iVar10);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_3e8 = iStack_3e8 + 1;
        iVar10 = iVar10 + 0x70;
      } while (iStack_3e8 < (short)param_1[0xc9]);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 100))();
  FUN_00a92fb0();
  fVar12 = (float10)FUN_00e049b0();
  fVar2 = (float)param_1[0x367];
  param_1[0x367] = (int)(float)((float10)fVar2 - fVar12);
  if ((((param_1[0x37c] != 0) && (param_1[0x36b] != 0)) && ((float10)fVar2 - fVar12 <= (float10)0))
     && (param_1[0x36e] != 0)) {
    fVar12 = (float10)FUN_00dde300((float)(float10)0,0x40000000);
    param_1[0x367] = (int)(float)(fVar12 + (float10)3.0);
    if (param_1[0x366] != 0) {
      fVar12 = (float10)FUN_00dde300(0,0x40000000);
      param_1[0x367] = (int)(float)(fVar12 + (float10)3.0);
    }
    if (param_1[300] == 0x3c200) {
      iVar10 = FUN_00a12210(local_3a0[param_1[0x376]]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar11 = (uint)param_1[0x376] < 4;
    }
    else {
      iVar10 = FUN_00a12210(local_388[param_1[0x376]]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar11 = (uint)param_1[0x376] < 2;
    }
    if (!bVar11) {
      param_1[0x376] = 0;
    }
    fStack_3c0 = SQRT(*(float *)(iVar10 + 0x14) * *(float *)(iVar10 + 0x14) +
                      *(float *)(iVar10 + 0x10) * *(float *)(iVar10 + 0x10) +
                      *(float *)(iVar10 + 0x18) * *(float *)(iVar10 + 0x18));
    fStack_3bc = SQRT(*(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20) +
                      *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                      *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28));
    fVar4 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                 *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                 *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
    fVar2 = *(float *)(iVar10 + 0x28);
    fVar3 = *(float *)(iVar10 + 0x38);
    fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar4));
    fVar13 = (float10)fpatan((float10)(fVar2 / fVar4),(float10)(fVar3 / fVar4));
    local_388[2] = (float)fVar13;
    local_388[3] = (float)fVar12;
    fVar12 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) / (float10)fStack_3bc,
                             (float10)*(float *)(iVar10 + 0x10) / (float10)fStack_3c0);
    fStack_378 = (float)fVar12;
    uStack_3b0 = *(undefined4 *)(iVar10 + 0x40);
    uStack_3ac = *(undefined4 *)(iVar10 + 0x44);
    uStack_3a8 = *(undefined4 *)(iVar10 + 0x48);
    uStack_3a4 = *(undefined4 *)(iVar10 + 0x4c);
    fStack_3e0 = 0.0;
    fStack_3dc = 0.0;
    fStack_3d8 = 0.0;
    if ((int *)param_1[0x36b] != (int *)0x0) {
      pfVar7 = (float *)(**(code **)(*(int *)param_1[0x36b] + 0x204))(auStack_360);
      fStack_3e0 = *pfVar7;
      fStack_3dc = pfVar7[1];
      fStack_3d8 = pfVar7[2];
      fStack_3d4 = pfVar7[3];
    }
    iVar8 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (0,0,0,0,&uStack_3b0,&fStack_3e0,0x1e,"rayBattery");
    fStack_3d0 = fStack_3e0 - (float)param_1[0x380];
    fStack_3cc = fStack_3dc - (float)param_1[0x381];
    fStack_3c8 = fStack_3d8 - (float)param_1[0x382];
    fStack_3c4 = fStack_3d4 - (float)param_1[899];
    fVar2 = fStack_3c8 * fStack_3c8 + fStack_3d0 * fStack_3d0 + fStack_3cc * fStack_3cc;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_3d0,&fStack_3d0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_3c8 = 0.0;
      fStack_3cc = 1.0;
      fStack_3d0 = fStack_3c8;
    }
    iVar6 = param_1[900];
    param_1[900] = iVar6 + 1;
    fVar2 = (float)iVar6;
    fStack_3d0 = fStack_3d0 * 0.6 * fVar2;
    fStack_3cc = fVar2 * fStack_3cc * 0.6;
    fStack_3c8 = fVar2 * fStack_3c8 * 0.6;
    fStack_3c4 = fVar2 * fStack_3c4 * 0.6;
    fStack_3c0 = fStack_3d0 + (float)param_1[0x380];
    fStack_3bc = (float)param_1[0x381] + fStack_3cc;
    fStack_3b8 = fStack_3c8 + (float)param_1[0x382];
    fStack_3b4 = fStack_3c4 + (float)param_1[899];
    if (iVar8 == 0) {
      FUN_0041fee0();
      uStack_220 = 0x11;
      if (param_1[300] == 0x3c201) {
        uStack_220 = 0x12;
      }
      uVar14 = 0x43480000;
      fVar12 = (float10)FUN_00dde300(0,0x3f000000);
      FUN_00416e30(&uStack_3b0,&fStack_3c0,local_388 + 2,(float)(fVar12 + (float10)1.7),uVar14);
      uStack_1c4 = 0x3f7f7cee;
      fVar12 = (float10)FUN_00dde300(0xbae4c388,0x3ae4c388);
      fStack_1a0 = (float)fVar12;
      fVar12 = (float10)FUN_00dde300(0xbae4c388,0x3ae4c388);
      fStack_19c = (float)fVar12;
      uStack_31c = 0xf;
      fStack_314 = 2.10195e-44;
      uStack_310 = 0;
      uStack_318 = 0x96;
      iVar8 = FUN_008d51e0();
      if (iVar8 != 0) {
        uVar14 = 0x11;
        FUN_008d51e0(0x11);
        uVar14 = FUN_00ac84d0(uVar14);
        iVar8 = FUN_008d51e0();
        uVar9 = (**(code **)(**(int **)(iVar8 + 0x754) + 0xc))(0x11);
        iVar8 = FUN_008d51e0();
        (**(code **)(**(int **)(iVar8 + 0x754) + 0x14))(0x11);
        iVar8 = FUN_008d51e0();
        uStack_310 = (**(code **)(**(int **)(iVar8 + 0x754) + 0x1c))(0x11);
        uStack_31c = uVar14;
        uStack_318 = uVar9;
        fStack_314 = (float)iVar6;
      }
      uStack_294 = uStack_294 | 0x10002000;
      uStack_30c = FUN_00a81330();
      uVar14 = FUN_00a7c7f0();
      FUN_00a7c960(uVar14);
      uStack_1b6 = *(undefined2 *)(iVar10 + 0xa0);
      auStack_330[0] = auStack_330[0] | 4;
      uStack_320 = 0xb9;
      FUN_00ae2bc0(param_1[0x13c],auStack_330);
      FUN_00c81b30(0x2e);
      param_1[0x36e] = param_1[0x36e] + -1;
    }
    if (param_1[0x36f] <= param_1[900]) {
      param_1[0x36e] = 0;
    }
  }
  if (((((param_1[0x37c] == 0) && (param_1[0x36b] != 0)) &&
       ((param_1[0x364] != 0 && (((float)param_1[0x367] <= 0.0 && (param_1[0x36e] != 0)))))) &&
      ((float)param_1[0x374] < 0.2617994)) && (0.0 < (float)param_1[0x374])) {
    fVar12 = (float10)FUN_00dde300(0,0x40000000);
    param_1[0x367] = (int)(float)(fVar12 + (float10)6.0);
    if (param_1[300] == 0x3c200) {
      iVar10 = FUN_00a12210(local_3a0[param_1[0x376]]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar11 = (uint)param_1[0x376] < 4;
    }
    else {
      iVar10 = FUN_00a12210(local_388[param_1[0x376]]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar11 = (uint)param_1[0x376] < 2;
    }
    if (!bVar11) {
      param_1[0x376] = 0;
    }
    fStack_3c0 = SQRT(*(float *)(iVar10 + 0x14) * *(float *)(iVar10 + 0x14) +
                      *(float *)(iVar10 + 0x10) * *(float *)(iVar10 + 0x10) +
                      *(float *)(iVar10 + 0x18) * *(float *)(iVar10 + 0x18));
    fStack_3bc = SQRT(*(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20) +
                      *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                      *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28));
    fVar3 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                 *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                 *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
    fVar4 = *(float *)(iVar10 + 0x28) / fVar3;
    fVar2 = *(float *)(iVar10 + 0x38);
    fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar3));
    fVar13 = (float10)fpatan((float10)fVar4,(float10)(fVar2 / fVar3));
    local_388[2] = (float)fVar13;
    local_388[3] = (float)fVar12;
    fVar12 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) / (float10)fStack_3bc,
                             (float10)*(float *)(iVar10 + 0x10) / (float10)fStack_3c0);
    fStack_378 = (float)fVar12;
    uStack_3b0 = *(undefined4 *)(iVar10 + 0x40);
    uStack_3ac = *(undefined4 *)(iVar10 + 0x44);
    uStack_3a8 = *(undefined4 *)(iVar10 + 0x48);
    uStack_3a4 = *(undefined4 *)(iVar10 + 0x4c);
    local_3a0[0] = *(undefined4 *)(iVar10 + 0x40);
    local_3a0[1] = *(undefined4 *)(iVar10 + 0x44);
    local_3a0[2] = *(undefined4 *)(iVar10 + 0x48);
    local_3a0[3] = *(undefined4 *)(iVar10 + 0x4c);
    fStack_3e0 = 0.0;
    fStack_3dc = 0.0;
    fStack_3d8 = 0.0;
    if ((int *)param_1[0x36b] != (int *)0x0) {
      pfVar7 = (float *)(**(code **)(*(int *)param_1[0x36b] + 0x204))(auStack_350);
      fStack_3e0 = *pfVar7;
      fStack_3dc = pfVar7[1];
      fStack_3d8 = pfVar7[2];
      fStack_3d4 = pfVar7[3];
    }
    iVar8 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (0,0,0,0,&uStack_3b0,&fStack_3e0,0x1e,"rayBattery");
    if (iVar8 == 0) {
      FUN_0041fee0();
      uStack_220 = 0x11;
      if (param_1[300] == 0x3c201) {
        uStack_220 = 0x12;
      }
      uVar14 = 0x43480000;
      fVar12 = (float10)FUN_00dde300(0,0x3f000000);
      FUN_00416e30(&uStack_3b0,local_3a0,local_388 + 2,(float)(fVar12 + (float10)1.0),uVar14);
      uStack_1c4 = 0x3f7f7cee;
      fVar12 = (float10)FUN_00dde300(0xbd567750,0x3d567750);
      fStack_1a0 = (float)fVar12;
      fVar12 = (float10)FUN_00dde300(0xbd567750,0x3d567750);
      fStack_19c = (float)fVar12;
      uStack_31c = 0xf;
      fStack_314 = 2.10195e-44;
      uStack_310 = 0;
      uStack_318 = 0x96;
      iVar8 = FUN_008d51e0();
      if (iVar8 != 0) {
        uVar14 = 0x11;
        FUN_008d51e0(0x11);
        uVar14 = FUN_00ac84d0(uVar14);
        iVar8 = FUN_008d51e0();
        uVar9 = (**(code **)(**(int **)(iVar8 + 0x754) + 0xc))(0x11);
        iVar8 = FUN_008d51e0();
        (**(code **)(**(int **)(iVar8 + 0x754) + 0x14))(0x11);
        iVar8 = FUN_008d51e0();
        uStack_310 = (**(code **)(**(int **)(iVar8 + 0x754) + 0x1c))(0x11);
        uStack_31c = uVar14;
        uStack_318 = uVar9;
        fStack_314 = fVar4;
      }
      uStack_294 = uStack_294 | 0x10002000;
      uStack_30c = FUN_00a81330();
      uVar14 = FUN_00a7c7f0();
      FUN_00a7c960(uVar14);
      uStack_1b6 = *(undefined2 *)(iVar10 + 0xa0);
      auStack_330[0] = auStack_330[0] | 4;
      uStack_320 = 0xb9;
      FUN_00ae2bc0(param_1[0x13c],auStack_330);
      FUN_00c81b30(0x2e);
      param_1[0x36e] = param_1[0x36e] + -1;
      return;
    }
  }
  return;
}

// 008D67A0  FUN_008d67a0  size=1253  [between]
void __fastcall FUN_008d67a0(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  int local_384;
  float local_380 [7];
  undefined4 uStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  undefined1 auStack_350 [16];
  undefined1 local_340 [16];
  uint auStack_330 [4];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined4 uStack_30c;
  undefined2 uStack_29c;
  uint uStack_294;
  undefined4 uStack_220;
  undefined4 uStack_1c4;
  undefined2 uStack_1b6;
  float fStack_1a0;
  float fStack_19c;
  
  local_380[1] = 2.87126e-42;
  local_380[5] = 2.87126e-42;
  iVar7 = 0;
  param_1[0x369] = 1;
  local_380[0] = 2.86986e-42;
  local_380[2] = 2.87266e-42;
  local_380[3] = 2.87406e-42;
  local_380[4] = 2.86986e-42;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(param_1[0x2d8] + 8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x371] = 0;
    param_1[0x376] = 0;
    FUN_008d5630(3,param_1 + 0x2ac);
    param_1[0x37c] = 0;
    if ((int *)param_1[0x36b] != (int *)0x0) {
      piVar5 = (int *)(**(code **)(*(int *)param_1[0x36b] + 0x204))(local_340);
      param_1[0x380] = *piVar5;
      param_1[0x381] = piVar5[1];
      param_1[0x382] = piVar5[2];
      param_1[899] = piVar5[3];
      param_1[900] = 0;
    }
    local_384 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164a238), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
          *puVar1 = *puVar1 | 1;
        }
        local_384 = local_384 + 1;
        iVar7 = iVar7 + 0x70;
      } while (local_384 < (short)param_1[0xc9]);
    }
    iVar7 = 0;
    local_384 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164a234), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_384 = local_384 + 1;
        iVar7 = iVar7 + 0x70;
      } while (local_384 < (short)param_1[0xc9]);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 100))();
  FUN_00a92fb0();
  fVar9 = (float10)FUN_00e049b0();
  fVar2 = (float)param_1[0x367];
  param_1[0x367] = (int)(float)((float10)fVar2 - fVar9);
  if ((((float10)fVar2 - fVar9 <= (float10)0) && ((float)param_1[0x374] < 0.2617994)) &&
     ((float10)0 < (float10)(float)param_1[0x374])) {
    param_1[0x367] = 0x40000000;
    if (param_1[300] == 0x3c200) {
      iVar7 = FUN_00a12210(local_380[param_1[0x376]]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar8 = (uint)param_1[0x376] < 4;
    }
    else {
      iVar7 = FUN_00a12210(local_380[param_1[0x376] + 4]);
      param_1[0x376] = param_1[0x376] + 1;
      bVar8 = (uint)param_1[0x376] < 2;
    }
    if (!bVar8) {
      param_1[0x376] = 0;
    }
    local_380[0] = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                        *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                        *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
    local_380[1] = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                        *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                        *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
    fVar4 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
                 *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
                 *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
    local_380[4] = *(float *)(iVar7 + 0x28) / fVar4;
    fVar2 = *(float *)(iVar7 + 0x38);
    fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar7 + 0x18) / fVar4));
    fVar10 = (float10)fpatan((float10)local_380[4],(float10)(fVar2 / fVar4));
    fStack_360 = (float)fVar10;
    fStack_35c = (float)fVar9;
    fVar9 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)local_380[1],
                            (float10)*(float *)(iVar7 + 0x10) / (float10)local_380[0]);
    fStack_358 = (float)fVar9;
    local_380[4] = *(float *)(iVar7 + 0x40);
    local_380[5] = *(float *)(iVar7 + 0x44);
    local_380[6] = *(float *)(iVar7 + 0x48);
    uStack_364 = *(undefined4 *)(iVar7 + 0x4c);
    local_380[0] = *(float *)(iVar7 + 0x40);
    local_380[1] = *(float *)(iVar7 + 0x44);
    local_380[2] = *(float *)(iVar7 + 0x48);
    local_380[3] = *(float *)(iVar7 + 0x4c);
    if ((int *)param_1[0x36b] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x36b] + 0x204))(auStack_350);
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_220 = 0x11;
    uStack_29c = 0x3151;
    if (param_1[300] == 0x3c201) {
      uStack_220 = 0x12;
    }
    uVar11 = 0x43480000;
    fVar9 = (float10)FUN_00dde300(0,0);
    FUN_00416e30(local_380 + 4,local_380,&fStack_360,(float)(fVar9 + (float10)1.5),uVar11);
    uStack_1c4 = 0x3f800000;
    fVar9 = (float10)FUN_00dde300(0xbd567750,0x3d567750);
    fStack_1a0 = (float)fVar9;
    fVar9 = (float10)FUN_00dde300(0xbd567750,0x3d567750);
    fStack_19c = (float)fVar9;
    uStack_294 = uStack_294 | 0x10002000;
    uStack_31c = 0;
    uStack_314 = 0xf;
    uStack_310 = 0;
    uStack_318 = 0x96;
    uStack_30c = FUN_00a81330();
    uVar11 = FUN_00a7c7f0();
    FUN_00a7c960(uVar11);
    uStack_1b6 = *(undefined2 *)(iVar7 + 0xa0);
    auStack_330[0] = auStack_330[0] | 4;
    uStack_320 = 0xb9;
    FUN_00ad3be0(param_1[0x13c],auStack_330);
    return;
  }
  return;
}

// 008D6CE0  cRayBatteryDLC::vf4C  size=1288  [class]
void __fastcall cRayBatteryDLC::vf4C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  float unaff_EBX;
  float10 fVar9;
  float10 fVar10;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  FUN_00a92fb0();
  fVar9 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0xdcc) = (float)fVar9;
  iVar6 = FUN_00a81330();
  *(undefined4 *)(param_1 + 0xdac) = 0;
  if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
    uVar7 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xdac) = uVar7;
  }
  iVar6 = *(int *)(param_1 + 0xdac);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  *(undefined4 *)(param_1 + 0xdb0) = 0;
  *(undefined4 *)(param_1 + 0xdd4) = 0;
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0xde0) = *(undefined4 *)(iVar6 + 0x40);
    *(undefined4 *)(param_1 + 0xde4) = *(undefined4 *)(iVar6 + 0x44);
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(iVar6 + 0x48);
    *(undefined4 *)(param_1 + 0xdec) = *(undefined4 *)(iVar6 + 0x4c);
    iVar6 = FUN_00a12210(0xf10);
    D3DXMatrixInverse(local_50,0,iVar6 + 0x10);
    fStack_7c = 0.0;
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    D3DXVec3TransformNormal(&fStack_7c,(undefined4 *)(param_1 + 0xde0),&fStack_5c);
    fVar9 = (float10)fStack_84;
    fStack_84 = (float)((float10)fStack_34 + fVar9);
    fVar10 = (float10)fStack_30 + (float10)fStack_80;
    fStack_80 = (float)fVar10;
    fVar9 = (float10)fpatan((float10)fStack_34 + fVar9,
                            SQRT(fVar10 * fVar10 +
                                 ((float10)fStack_38 + (float10)unaff_EBX) *
                                 ((float10)fStack_38 + (float10)unaff_EBX)));
    *(float *)(param_1 + 0xdd4) = (float)fVar9;
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    fStack_70 = 0.0;
    iVar6 = FUN_00a12210(1);
    D3DXMatrixInverse(&fStack_68,0,iVar6 + 0x10);
    D3DXVec3TransformNormal(&fStack_84,*(int *)(param_1 + 0xdac) + 0x40,&fStack_74);
    fVar9 = (float10)fpatan(SQRT(((float10)fStack_1c + (float10)fStack_5c) *
                                 ((float10)fStack_1c + (float10)fStack_5c) +
                                 ((float10)fStack_20 + (float10)fStack_60) *
                                 ((float10)fStack_20 + (float10)fStack_60)),
                            (float10)fStack_18 + (float10)fStack_58);
    *(float *)(param_1 + 0xdd0) = (float)fVar9;
    fVar1 = *(float *)(param_1 + 0xdd4);
    if ((!NAN(fVar1) && -0.5235988 < fVar1 != (fVar1 == -0.5235988)) &&
       (*(float *)(param_1 + 0xdd4) <= 1.0471976)) {
      *(undefined4 *)(param_1 + 0xdb0) = 1;
    }
  }
  Behavior::vf4C();
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_008d4cc0();
    break;
  case 2:
    FUN_008d5000();
    break;
  case 5:
    FUN_008d5140();
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_008d4d40();
    break;
  case 1:
    FUN_008d4ec0();
    break;
  case 2:
    FUN_008d59b0();
    break;
  case 3:
    FUN_008d50a0();
    break;
  case 4:
    FUN_008d5220();
    break;
  case 5:
    FUN_008d67a0();
  }
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  if (*(int **)(param_1 + 0xdac) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xda4) = 0;
  }
  else {
    pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0xdac) + 0x204))(&fStack_60);
    fStack_80 = *pfVar8;
    fStack_7c = pfVar8[1];
    fStack_78 = pfVar8[2];
    fStack_74 = pfVar8[3];
    if (*(int *)(param_1 + 0xd98) != 0) {
      fStack_7c = fStack_7c - 1.0;
    }
    if (*(int *)(param_1 + 0xd94) == 0) {
      fStack_70 = fStack_80 - *(float *)(param_1 + 0xe00);
      fStack_6c = fStack_7c - *(float *)(param_1 + 0xe04);
      fStack_68 = fStack_78 - *(float *)(param_1 + 0xe08);
      fStack_64 = fStack_74 - *(float *)(param_1 + 0xe0c);
      fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
      if (NAN(fVar1) || 0.0001 < fVar1 == (fVar1 == 0.0001)) {
        fStack_80 = *(float *)(param_1 + 0xe00);
        fStack_7c = *(float *)(param_1 + 0xe04);
        fStack_78 = *(float *)(param_1 + 0xe08);
        fStack_74 = *(float *)(param_1 + 0xe0c);
      }
      else {
        if (fVar1 <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar1 = 0.0;
          fVar4 = 0.0;
          fVar3 = 1.0;
        }
        else {
          FUN_00ddf460(&fStack_70,&fStack_70);
          fVar1 = fStack_68;
          fVar3 = fStack_6c;
          fVar4 = fStack_70;
        }
        if (*(int *)(param_1 + 0xd98) == 0) {
          fVar5 = 0.6;
        }
        else {
          fVar5 = 1.5;
        }
        fVar2 = (float)*(int *)(param_1 + 0xe10);
        fStack_80 = *(float *)(param_1 + 0xe00) + fVar4 * fVar5 * fVar2;
        fStack_7c = fVar3 * fVar5 * fVar2 + *(float *)(param_1 + 0xe04);
        fStack_78 = fVar1 * fVar5 * fVar2 + *(float *)(param_1 + 0xe08);
        fStack_74 = fVar2 * fVar5 * fStack_64 + *(float *)(param_1 + 0xe0c);
      }
    }
  }
  if (*(int *)(param_1 + 0xd98) != 0) {
    iVar6 = FUN_00a12210(1);
    fStack_80 = (*(float *)(param_1 + 0x40) - *(float *)(iVar6 + 0x40)) * 0.5 + fStack_80;
    fStack_7c = (*(float *)(param_1 + 0x44) - *(float *)(iVar6 + 0x44)) * 0.5 + fStack_7c;
    fStack_78 = (*(float *)(param_1 + 0x48) - *(float *)(iVar6 + 0x48)) * 0.5 + fStack_78;
    fStack_74 = (*(float *)(param_1 + 0x4c) - *(float *)(iVar6 + 0x4c)) * 0.5 + fStack_74;
  }
  if ((*(int *)(param_1 + 0x618) == 5) && (*(int **)(param_1 + 0xdac) != (int *)0x0)) {
    pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0xdac) + 0x204))(&fStack_60);
    fStack_80 = *pfVar8;
    fStack_7c = pfVar8[1];
    fStack_78 = pfVar8[2];
    fStack_74 = pfVar8[3];
  }
  if (*(int *)(param_1 + 0x618) == 4) {
    *(undefined4 *)(param_1 + 0xda4) = 0;
  }
  FUN_00a84720();
  FUN_00a84720();
  switchD_0080dbae::default();
  FUN_00a84780(&fStack_80,0,*(undefined4 *)(param_1 + 0xda4),0,0,*(undefined4 *)(param_1 + 0xdcc));
  switchD_0080dbae::default();
  FUN_00a84780(&fStack_80,*(undefined4 *)(param_1 + 0xda4),0,0,0,*(undefined4 *)(param_1 + 0xdcc));
  *(undefined4 *)(param_1 + 0xda4) = 0;
  return;
}

// 00AB3BD0  cRayBatteryDLC::vf04  size=6  [class]
undefined * cRayBatteryDLC::vf04(void)

{
  return &DAT_01b35bf0;
}

// 00AB3BE0  cRayBatteryDLC::vf238  size=6  [class]
undefined4 cRayBatteryDLC::vf238(void)

{
  return 1;
}

// 00ABA010  cRayBatteryDLC::destruct  size=30  [class]
undefined4 __thiscall cRayBatteryDLC::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

