// src/behavior/BehaviorDebrisArmor.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D89E0..00AB83E0, 16 functions

#include "types.h"

// 005D89E0  BehaviorDebrisArmor::vf114  size=35  [class]
void __thiscall BehaviorDebrisArmor::vf114(int *param_1,int param_2)

{
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  return;
}

// 005D8A10  BehaviorDebrisArmor::vf44  size=99  [class]
void __fastcall BehaviorDebrisArmor::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a944d0();
  FUN_00d8a1d0(0x20,*(undefined4 *)(param_1 + 0x8d4));
  if (*(undefined4 **)(param_1 + 0x8d4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x8d4))(1);
    *(undefined4 *)(param_1 + 0x8d4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 005D8A80  BehaviorDebrisArmor::thunk_vf50  size=5  [class]
void __fastcall BehaviorDebrisArmor::thunk_vf50(int param_1)

{
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  return;
}

// 005D8A90  BehaviorDebrisArmor::vf30  size=140  [class]
void __fastcall BehaviorDebrisArmor::vf30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  Bh0064::vf30();
  if (param_1[0x162] != 0) {
    iVar1 = param_1[0x162];
    uVar2 = *(undefined4 *)(iVar1 + 0x2c);
    uVar3 = *(undefined4 *)(iVar1 + 0x38);
    uVar4 = *(undefined4 *)(iVar1 + 0x30);
    iVar1 = *(int *)(iVar1 + 0x34);
    FUN_00a8b6e0();
    (**(code **)(*param_1 + 0x118))(0);
    if (iVar1 != 0) {
      iVar1 = param_1[0x162];
      *(undefined4 *)(iVar1 + 0x34) = 1;
      *(undefined4 *)(iVar1 + 0x38) = uVar3;
    }
    if (unaff_ESI != 0) {
      iVar1 = param_1[0x162];
      *(undefined4 *)(iVar1 + 0x2c) = 1;
      *(undefined4 *)(iVar1 + 0x30) = uVar4;
    }
    *(undefined4 *)(param_1[0x162] + 0xb4) = uVar2;
  }
  return;
}

// 005D8B20  BehaviorDebrisArmor::vfC8  size=18  [class]
void __fastcall BehaviorDebrisArmor::vfC8(int param_1)

{
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0();
    return;
  }
  return;
}

// 005D8B40  BehaviorDebrisArmor::vf20  size=24  [class]
void __fastcall BehaviorDebrisArmor::vf20(int *param_1)

{
  Bh0064::vf20();
  (**(code **)(*param_1 + 200))(0);
  return;
}

// 005D8B60  BehaviorDebrisArmor::vf1C  size=24  [class]
void __fastcall BehaviorDebrisArmor::vf1C(int *param_1)

{
  Bh0064::vf1C();
  (**(code **)(*param_1 + 200))(1);
  return;
}

// 005DA8F0  FUN_005da8f0  size=362  [callgraph]
float * __thiscall FUN_005da8f0(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x330);
  *param_2 = 0.0;
  iVar6 = 0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (0 < *(int *)(iVar2 + 0xc4)) {
    fVar1 = param_2[3];
    pfVar5 = (float *)(*(int *)(iVar2 + 0xc0) + 0x18);
    fVar4 = fVar3;
    do {
      iVar6 = iVar6 + 1;
      *param_2 = pfVar5[-2] + *param_2;
      fVar4 = pfVar5[-1] + fVar4;
      param_2[1] = fVar4;
      fVar3 = *pfVar5 + fVar3;
      param_2[2] = fVar3;
      fVar1 = pfVar5[1] + fVar1;
      param_2[3] = fVar1;
      pfVar5 = pfVar5 + 0x1c;
    } while (iVar6 < *(int *)(iVar2 + 0xc4));
  }
  if (*(int *)(iVar2 + 0xc4) != 0) {
    fVar3 = (float)*(int *)(iVar2 + 0xc4);
    *param_2 = *param_2 / fVar3;
    param_2[1] = param_2[1] / fVar3;
    param_2[2] = param_2[2] / fVar3;
    param_2[3] = param_2[3] / fVar3;
  }
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    return param_2;
  }
  fVar3 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(param_2,param_2);
    return param_2;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_2 = 0.0;
  param_2[1] = 1.0;
  param_2[2] = 0.0;
  return param_2;
}

// 005DAA60  FUN_005daa60  size=243  [callgraph]
void __fastcall FUN_005daa60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 1;
  iVar4 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x360);
    iVar2 = iVar1;
    if (iVar1 == 0) {
      iVar2 = param_1;
    }
    if (*(short *)(iVar2 + 0x358) <= iVar3) break;
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    if ((iVar3 < 0) || (*(short *)(iVar1 + 0x358) <= iVar3)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x350) + iVar4;
    }
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xb0;
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    cModelBase::setRootPartsNo(0x1e);
    FUN_0091ea00(param_1);
    FUN_0091c6c0(0xb);
    FUN_009174c0();
    FUN_0091b190(0x100);
    local_20 = 0x42c80000;
    local_1c = 0x41c80000;
    local_18 = 0;
    FUN_0091ab40(&local_20);
  }
  *(undefined4 *)(param_1 + 0x880) = 1;
  *(undefined4 *)(param_1 + 0x87c) = 1;
  return;
}

// 005DAB60  BehaviorDebrisArmor::vf4C  size=669  [class]
void __fastcall BehaviorDebrisArmor::vf4C(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float10 fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_4;
  
  Behavior::vf4C();
  fVar9 = (float10)FUN_00a93060();
  fVar10 = (float10)FUN_00a92ff0();
  fVar9 = (float10)(float)param_1[0x21e] - fVar10 * (float10)(float)fVar9;
  param_1[0x21e] = (int)(float)fVar9;
  if (fVar9 <= (float10)0) {
    param_1[0x21e] = (int)(float)(float10)0;
    FUN_005daa60();
  }
  if (param_1[0x21f] == 0) {
    if ((((param_1[0x220] == 0) || ((char)param_1[0x11c] == '\0')) ||
        ((*(byte *)((int)param_1 + 0x472) & 0x80) == 0)) ||
       (*(char *)((int)param_1 + 0x471) == '\0')) goto LAB_005dad29;
  }
  else {
    fVar9 = (float10)FUN_00a93060();
    fVar10 = (float10)FUN_00a92ff0();
    fVar9 = fVar10 * (float10)(float)fVar9 + (float10)(float)param_1[0x21d];
    param_1[0x21d] = (int)(float)fVar9;
    fVar10 = (float10)2.0;
    if (fVar10 < fVar9 != (fVar10 == fVar9)) {
      fVar3 = (float10)1;
      fVar9 = fVar3 - (fVar9 - fVar10);
      local_4 = (float)fVar9;
      if (fVar9 < fVar3) {
        if (fVar9 <= (float10)0.3) {
          (**(code **)(*param_1 + 200))(0);
          if (param_1[0x1ed] != 0) {
            FUN_00917560();
          }
          fVar9 = (float10)local_4;
        }
      }
      else {
        local_4 = (float)fVar3;
        fVar9 = fVar3;
      }
      iVar6 = 0;
      iVar4 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          *(float *)(iVar6 + 0x1c + param_1[200]) = (float)fVar9;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iVar4 < (short)param_1[0xc9]);
      }
      if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
        param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
        *(undefined4 *)param_1[0xdc] = 1;
      }
      iVar6 = 0;
      iVar4 = FUN_00a94360();
      if (0 < iVar4) {
        do {
          FUN_00a94380(iVar6);
          FUN_00a81330();
          iVar4 = FUN_00a7c800();
          if (iVar4 != 0) {
            iVar8 = 0;
            iVar7 = 0;
            if (0 < *(short *)(iVar4 + 0x324)) {
              do {
                *(float *)(iVar8 + 0x1c + *(int *)(iVar4 + 800)) = local_4;
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 0x70;
              } while (iVar7 < *(short *)(iVar4 + 0x324));
            }
          }
          iVar6 = iVar6 + 1;
          iVar4 = FUN_00a94360();
        } while (iVar6 < iVar4);
      }
    }
    fVar2 = (float)param_1[0x21d];
    if (NAN(fVar2) || 3.0 < fVar2 == (fVar2 == 3.0)) goto LAB_005dad29;
  }
  FUN_009fdde0();
LAB_005dad29:
  if (param_1[0x22d] != 0) {
    fVar2 = (float)param_1[0x22c];
    param_1[0x22c] = (int)(fVar2 - 0.011111111);
    if (fVar2 - 0.011111111 <= 0.0) {
      iVar4 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          iVar7 = param_1[200];
          iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar6) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0164425c), iVar8 != 0)) {
            puVar1 = (uint *)(iVar7 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iVar4 < (short)param_1[0xc9]);
      }
      param_1[0x22c] = 0;
    }
    iVar4 = param_1[0x22c];
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar7 = 0;
      do {
        iVar8 = param_1[200];
        iVar5 = *(int *)(*(int *)(iVar8 + 0x60 + iVar7) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_0164425c), iVar5 != 0)) {
          *(int *)(iVar8 + 0x1c + iVar7) = iVar4;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
  }
  return;
}

// 005DAE00  BehaviorDebrisArmor::vf54  size=373  [class]
void __fastcall BehaviorDebrisArmor::vf54(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_6c;
  int local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  Behavior::vf54();
  if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x870) != 0)) &&
     (*(int *)(param_1 + 0x8d8) != 0)) {
    FUN_0091e980(param_1);
    switchD_0080dbae::default();
  }
  if (((*(int *)(param_1 + 0x588) != 0) && (*(int *)(*(int *)(param_1 + 0x588) + 0xb4) != 0)) &&
     (*(int *)(param_1 + 0x8d8) == 0)) {
    local_68 = 0;
    local_6c = 0;
    while( true ) {
      iVar2 = *(int *)(param_1 + 0x360);
      iVar3 = iVar2;
      if (iVar2 == 0) {
        iVar3 = param_1;
      }
      if (*(short *)(iVar3 + 0x358) <= local_68) break;
      if (iVar2 == 0) {
        iVar2 = param_1;
      }
      if (((local_68 < 0) || (*(short *)(iVar2 + 0x358) <= local_68)) ||
         (iVar2 = *(int *)(iVar2 + 0x350) + local_6c, iVar2 == 0)) {
        sVar1 = -1;
      }
      else {
        sVar1 = *(short *)(iVar2 + 0xa0);
      }
      iVar2 = FUN_00a12210((int)sVar1);
      iVar3 = FUN_00a12210((int)sVar1);
      puVar6 = (undefined4 *)(iVar3 + 0x10);
      puVar5 = (undefined4 *)(iVar2 + 0x10);
      puVar7 = puVar6;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
      local_60 = *(undefined4 *)(param_1 + 0x8d0);
      local_5c = *(undefined4 *)(param_1 + 0x8d0);
      local_58 = *(undefined4 *)(param_1 + 0x8d0);
      FUN_00ddd140(local_50,&local_60);
      D3DXMatrixMultiply(puVar6,puVar6,local_50);
      local_68 = local_68 + 1;
      local_6c = local_6c + 0xb0;
    }
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    iVar2 = FUN_00a12210(0x1e);
    puVar6 = (undefined4 *)(iVar2 + 0x10);
    puVar5 = (undefined4 *)(param_1 + 0x10);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    }
    switchD_0080dbae::default();
  }
  return;
}

// 005DD020  BehaviorDebrisArmor::vf300  size=25  [class]
void __fastcall BehaviorDebrisArmor::vf300(int param_1)

{
  if (3.0 <= *(float *)(param_1 + 0x878)) {
    FUN_005daa60();
    return;
  }
  return;
}

// 005E0B30  BehaviorDebrisArmor::vf40  size=811  [class]
undefined4 __fastcall BehaviorDebrisArmor::vf40(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_20 [28];
  
  iVar2 = Behavior::startup();
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x40;
    iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar2 != 0) {
      iVar2 = FUN_00a92f90();
      if (iVar2 != 0) {
        uVar6 = 1;
        FUN_00a92f90(1);
        FUN_00e26e50(uVar6);
      }
      uVar6 = 3;
      FUN_00a92fb0(3);
      FUN_00e08640(uVar6);
      *(undefined4 *)(param_1 + 0x874) = 0;
      sVar1 = FUN_00dde2d0(1,5);
      *(undefined4 *)(param_1 + 0x87c) = 0;
      *(undefined4 *)(param_1 + 0x880) = 0;
      *(undefined4 *)(param_1 + 0x870) = 0;
      *(undefined4 *)(param_1 + 0x8b4) = 0;
      *(float *)(param_1 + 0x878) = (float)(int)sVar1 + 5.0;
      *(undefined4 *)(param_1 + 0x8b8) = 0;
      *(undefined4 *)(param_1 + 0x8b0) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x8bc) = 0;
      puVar3 = (undefined4 *)FUN_005da8f0(local_20);
      *(undefined4 *)(param_1 + 0x8c0) = *puVar3;
      *(undefined4 *)(param_1 + 0x8c4) = puVar3[1];
      *(undefined4 *)(param_1 + 0x8c8) = puVar3[2];
      *(undefined4 *)(param_1 + 0x8cc) = puVar3[3];
      sVar1 = FUN_00dde2d0(1,10);
      *(undefined4 *)(param_1 + 0x8d8) = 0;
      *(float *)(param_1 + 0x8d0) = (float)(int)sVar1 * 0.0025 + 1.0;
      if (*(int *)(*(int *)(param_1 + 0x330) + 0xc4) != 0) {
        *(undefined4 *)(param_1 + 0x8b8) = 1;
      }
      iVar5 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar4 = *(int *)(param_1 + 800);
          *(undefined4 *)(iVar4 + 0x10 + iVar5) = 0x3f800000;
          iVar4 = iVar4 + iVar5;
          *(undefined4 *)(iVar4 + 0x14) = 0x3f800000;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(iVar4 + 0x18) = 0x3f800000;
          iVar5 = iVar5 + 0x70;
          *(undefined4 *)(iVar4 + 0x1c) = 0x3f800000;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      puVar3 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = DebrisLeaveSlot::vftable;
        puVar3[1] = param_1;
      }
      *(undefined4 **)(param_1 + 0x8d4) = puVar3;
      FUN_00d89ec0(0x20,puVar3);
      iVar2 = FUN_009f8d30();
      if (iVar2 != 0) {
        iVar2 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
        if (iVar2 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
                  StaticArray<RigidBodyList::ConnectMap,256>();
        }
        *(undefined4 *)(param_1 + 0x7b4) = uVar6;
        FUN_009fdd80(uVar6);
        FUN_00910b10(0x1e);
        FUN_00923ff0(param_1);
        FUN_0091cc50();
        FUN_00912890(DAT_01885d20);
        iVar2 = *(int *)(param_1 + 0x588);
        *(undefined4 *)(param_1 + 0x870) = 1;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x34) != 0)) {
          FUN_0091c760(*(undefined4 *)(iVar2 + 0x38));
        }
        FUN_0091c3e0(6,1);
        FUN_0091adf0(1);
        FUN_0091adf0(2);
        FUN_0091adf0(0x20);
        FUN_0091afb0(0x80);
        FUN_0091adf0(0x200000);
        FUN_0091c130(0);
        iVar2 = *(int *)(param_1 + 0x588);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2c) == 0)) {
          uVar6 = cXmlBinary::cXmlBinary_41();
        }
        else {
          uVar6 = *(undefined4 *)(iVar2 + 0x30);
        }
        FUN_0091b870(uVar6);
        iVar2 = *(int *)(param_1 + 0x588);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x34) != 0)) {
          FUN_0091c760(*(undefined4 *)(iVar2 + 0x38));
        }
        iVar2 = *(int *)(param_1 + 0x588);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x98) != 0)) {
          FUN_0091c550(0x21,*(undefined4 *)(iVar2 + 0x9c));
          FUN_0091c550(0x22,*(undefined4 *)(*(int *)(param_1 + 0x588) + 0x9c));
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00AA6B30  BehaviorDebrisArmor::BehaviorDebrisArmor  size=18  [class]
undefined4 * __fastcall BehaviorDebrisArmor::BehaviorDebrisArmor(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6B50  BehaviorDebrisArmor::vf04  size=6  [class]
undefined * BehaviorDebrisArmor::vf04(void)

{
  return &DAT_01b3530c;
}

// 00AB83E0  BehaviorDebrisArmor::vf00  size=105  [class]
undefined4 * __thiscall BehaviorDebrisArmor::vf00(undefined4 *param_1,byte param_2)

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

