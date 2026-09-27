// src/enemy/em01a0/Em01a0Parts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005196F0..00AC1050, 18 functions

#include "mgrr.h"
#include "Em01a0Parts.h"

// 005196F0  Em01a0Parts::vf118  size=94  [class]
undefined4 __thiscall Em01a0Parts::vf118(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = Bh0064::vf118(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *(undefined4 **)(*(int *)(param_1 + 0x588) + 0x130) = puVar2;
    if (*(int *)(*(int *)(param_1 + 0x588) + 0x130) == 0) {
      return 0;
    }
  }
  return 1;
}

// 00519750  Em01a0Parts::vf304  size=31  [class]
void __fastcall Em01a0Parts::vf304(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x588) + 0x130);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    *(int *)(param_1 + 0x4a0) = piVar1[1];
  }
  return;
}

// 00519770  Em01a0Parts::setCutCrerateInfo  size=31  [class]
void Em01a0Parts::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42000;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00519790  Em01a0Parts::vf258  size=31  [class]
void Em01a0Parts::vf258(void)

{
  undefined4 uVar1;
  
  FUN_00a7c8a0();
  uVar1 = FUN_009f8b40();
  FUN_009f8ae0(uVar1);
  return;
}

// 005197B0  Em01a0Parts::vf44  size=50  [class]
void __fastcall Em01a0Parts::vf44(int param_1)

{
  FUN_00d8a1d0(0x16,*(undefined4 *)(param_1 + 0xa60));
  FUN_00900ca0();
  FUN_00900ca0();
  BehaviorPartsModel::vf44();
  return;
}

// 0051CFF0  Em01a0Parts::vf300  size=32  [class]
void __fastcall Em01a0Parts::vf300(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x588) + 0x130);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = *(undefined4 *)(param_1 + 0x4a0);
  }
  return;
}

// 0051D010  FUN_0051d010  size=90  [callgraph]
void __fastcall FUN_0051d010(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  *(float *)(param_1 + 0x40) =
       *(float *)(param_1 + 0xc80) + *(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) =
       *(float *)(param_1 + 0xc84) + *(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x48) =
       *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0xc78) + *(float *)(param_1 + 0xc88);
  return;
}

// 005331C0  Em01a0Parts::startup  size=1920  [class]
undefined4 __fastcall Em01a0Parts::startup(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = BehaviorPartsModel::startup();
  if (iVar3 == 0) {
    return 0;
  }
  uVar10 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar10);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffefffff;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 2;
  }
  local_18 = 0x3f666666;
  local_14 = 0x3f99999a;
  local_10 = 0x3f8ccccd;
  local_c = 0x3e4ccccd;
  local_8 = 0x40400000;
  local_4 = 0x40000000;
  FUN_00a8e4d0(&local_c,&local_18);
  puVar4 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = HoldEntitySlot::vftable;
    puVar4[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0xa60) = puVar4;
  FUN_00d89ec0(0x16,puVar4);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0xa9c) = 0;
  *(undefined4 *)(param_1 + 0xaa0) = 1;
  *(undefined4 *)(param_1 + 0xa80) = 0;
  FUN_008f1600(0x20);
  piVar5 = (int *)FUN_00900480();
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar6 = (**(code **)(*piVar5 + 4))
                    (param_1 + 0x130,
                     SQRT(*(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x148) +
                          *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x140) +
                          *(float *)(param_1 + 0x144) * *(float *)(param_1 + 0x144)) * 0.7,0xf,
                     *puVar4,0);
  FUN_008f7f00(iVar6,*(undefined4 *)(param_1 + 0x4f0));
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar6 == 0) || (uVar1 = *(uint *)(iVar6 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_0053339f:
      piVar5 = (int *)(iVar7 + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x8000;
    if (DAT_01885d68 != 1) {
      iVar7 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
      goto LAB_0053339f;
    }
  }
  FUN_004066f0();
  if ((iVar6 == 0) || (uVar1 = *(uint *)(iVar6 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar3 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
LAB_00533411:
      piVar5 = (int *)(iVar3 + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x10000;
    if (DAT_01885d68 != 1) {
      iVar3 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
      goto LAB_00533411;
    }
  }
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar6);
  FUN_00900bd0();
  piVar5 = (int *)FUN_00900480();
  puVar4 = (undefined4 *)FUN_009f8b60();
  fVar2 = SQRT(*(float *)(param_1 + 0x144) * *(float *)(param_1 + 0x144) +
               *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x140) +
               *(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x148));
  iVar3 = (**(code **)(*piVar5 + 4))(param_1 + 0x130,fVar2 + fVar2,7,*puVar4,0);
  FUN_008f7f00(iVar3,*(undefined4 *)(param_1 + 0x4f0));
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00533502:
      piVar5 = (int *)(iVar6 + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x8000;
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_00533502;
    }
  }
  FUN_004066f0();
  if ((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_005335a2;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar8 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar8 = *puVar8 | 1;
    puVar8[2] = puVar8[2] | 0x10000;
    if (DAT_01885d68 == 1) goto LAB_005335a2;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar5 = (int *)(iVar6 + 4);
  *piVar5 = *piVar5 + -1;
  if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_005335a2:
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar3);
  FUN_00900bd0();
  FUN_00529450(*(undefined4 *)(param_1 + 0xa9c));
  *(undefined4 *)(param_1 + 0xc70) = 0;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0xc74) = 0;
  *(undefined4 *)(param_1 + 0xc78) = 0;
  *(undefined4 *)(param_1 + 0xa8c) = 0;
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xa90) = 0;
  *(undefined4 *)(param_1 + 0xa50) = 2;
  *(undefined4 *)(param_1 + 0xa84) = 0;
  *(undefined4 *)(param_1 + 0xa68) = 0;
  *(undefined4 *)(param_1 + 0xa64) = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar7 = *(int *)(param_1 + 800);
      iVar9 = *(int *)(*(int *)(iVar7 + 0x60 + iVar6) + 0x40);
      if (iVar9 != 0) {
        iVar9 = FUN_00fdbbd0(iVar9,&DAT_0163ef44);
        if (iVar9 != 0) {
          puVar8 = (uint *)(iVar7 + 0x38 + iVar6);
          *puVar8 = *puVar8 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  iVar3 = *(int *)(param_1 + 0x4b0);
  if (iVar3 == 0x201a1) {
    *(undefined4 *)(param_1 + 0xa50) = 2;
    *(undefined4 *)(param_1 + 0xa84) = 1;
    *(undefined4 *)(param_1 + 0xb70) = 2;
  }
  if (iVar3 == 0x201c0) {
    *(undefined4 *)(param_1 + 0xa50) = 2;
    *(undefined4 *)(param_1 + 0xa84) = 1;
    *(undefined4 *)(param_1 + 0xb70) = 2;
  }
  if (iVar3 == 0x201a2) {
    *(undefined4 *)(param_1 + 0xa50) = 1;
    *(undefined4 *)(param_1 + 0xa84) = 2;
    *(undefined4 *)(param_1 + 0xb70) = 7;
  }
  if (iVar3 == 0x201a3) {
    *(undefined4 *)(param_1 + 0xa50) = 6;
    *(undefined4 *)(param_1 + 0xa84) = 3;
    *(undefined4 *)(param_1 + 0xb70) = 0x51a;
  }
  if (iVar3 == 0x201a4) {
    *(undefined4 *)(param_1 + 0xa50) = 7;
    *(undefined4 *)(param_1 + 0xa84) = 4;
    *(undefined4 *)(param_1 + 0xb70) = 0xe14;
  }
  if (iVar3 == 0x201a5) {
    *(undefined4 *)(param_1 + 0xa50) = 7;
    *(undefined4 *)(param_1 + 0xa84) = 5;
    *(undefined4 *)(param_1 + 0xb70) = 8;
  }
  if (iVar3 == 0x201a6) {
    *(undefined4 *)(param_1 + 0xa50) = 8;
    *(undefined4 *)(param_1 + 0xa84) = 6;
    *(undefined4 *)(param_1 + 0xb70) = 0x506;
  }
  if (iVar3 == 0x201a7) {
    *(undefined4 *)(param_1 + 0xa50) = 1;
    *(undefined4 *)(param_1 + 0xa84) = 7;
    *(undefined4 *)(param_1 + 0xb70) = 0xb;
  }
  if (iVar3 == 0x201a8) {
    *(undefined4 *)(param_1 + 0xa50) = 10;
    *(undefined4 *)(param_1 + 0xa84) = 8;
    *(undefined4 *)(param_1 + 0xb70) = 0x517;
  }
  if (iVar3 == 0x201a9) {
    *(undefined4 *)(param_1 + 0xa50) = 0xb;
    *(undefined4 *)(param_1 + 0xa84) = 9;
    *(undefined4 *)(param_1 + 0xb70) = 0xe24;
  }
  if (iVar3 == 0x201aa) {
    *(undefined4 *)(param_1 + 0xa50) = 0xb;
    *(undefined4 *)(param_1 + 0xa84) = 10;
    *(undefined4 *)(param_1 + 0xb70) = 0xc;
  }
  if (iVar3 == 0x201ab) {
    *(undefined4 *)(param_1 + 0xa50) = 0xc;
    *(undefined4 *)(param_1 + 0xa84) = 0xb;
    *(undefined4 *)(param_1 + 0xb70) = 0x50d;
  }
  if (iVar3 == 0x201ac) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0xc;
    *(undefined4 *)(param_1 + 0xb70) = 0xe30;
  }
  if (iVar3 == 0x201ad) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0xd;
    *(undefined4 *)(param_1 + 0xb70) = 0x515;
  }
  if (iVar3 == 0x201ae) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0xe;
    *(undefined4 *)(param_1 + 0xb70) = 0x51d;
  }
  if (iVar3 == 0x201af) {
    *(undefined4 *)(param_1 + 0xa50) = 0xf;
    *(undefined4 *)(param_1 + 0xa84) = 0xf;
    *(undefined4 *)(param_1 + 0xb70) = 0xe52;
  }
  if (iVar3 == 0x201b0) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0x10;
    *(undefined4 *)(param_1 + 0xb70) = 0x512;
  }
  if (iVar3 == 0x201b1) {
    *(undefined4 *)(param_1 + 0xa50) = 0x10;
    *(undefined4 *)(param_1 + 0xa84) = 0x11;
    *(undefined4 *)(param_1 + 0xb70) = 0xe50;
  }
  if (iVar3 == 0x201b2) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0x12;
    *(undefined4 *)(param_1 + 0xb70) = 0x51e;
  }
  if (iVar3 == 0x201b3) {
    *(undefined4 *)(param_1 + 0xa50) = 0x13;
    *(undefined4 *)(param_1 + 0xa84) = 0x13;
    *(undefined4 *)(param_1 + 0xb70) = 0xe62;
  }
  if (iVar3 == 0x201b4) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0x14;
    *(undefined4 *)(param_1 + 0xb70) = 0x514;
  }
  if (iVar3 == 0x201b5) {
    *(undefined4 *)(param_1 + 0xa50) = 0x14;
    *(undefined4 *)(param_1 + 0xa84) = 0x15;
    *(undefined4 *)(param_1 + 0xb70) = 0xe60;
  }
  return 1;
}

// 00533950  FUN_00533950  size=137  [callgraph]
void __fastcall FUN_00533950(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    (**(code **)(*(int *)(param_1 + 0xac0) + 8))(0x40a00000,0,0);
    FUN_00a8caf0(2,0,0,0);
    FUN_00529450(6);
    return;
  }
  return;
}

// 005339E0  FUN_005339e0  size=161  [callgraph]
void __fastcall FUN_005339e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  if ((*(int *)(param_1 + 0xa08) != 0) &&
     (iVar4 = FUN_00a12210(*(undefined4 *)(param_1 + 0xa50)), iVar4 != 0)) {
    fVar1 = *(float *)(iVar4 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x44);
    fVar3 = *(float *)(iVar4 + 0x48);
  }
  fVar1 = *(float *)(param_1 + 0x40) - fVar1;
  fVar2 = *(float *)(param_1 + 0x44) - fVar2;
  fVar3 = *(float *)(param_1 + 0x48) - fVar3;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar1 < 0.0009 != (fVar1 == 0.0009)) {
    FUN_00a8caf0(0,0,0,0);
    FUN_00529450(0);
  }
  return;
}

// 00533A90  FUN_00533a90  size=137  [callgraph]
void __fastcall FUN_00533a90(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xa88) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0xa88) = fVar1;
  if (fVar1 < 0.0) {
    (**(code **)(*(int *)(param_1 + 0xac0) + 8))(0x40a00000,0,0);
    FUN_00a8caf0(2,0,0,0);
    FUN_00529450(5);
    return;
  }
  return;
}

// 00533B20  FUN_00533b20  size=94  [callgraph]
void __fastcall FUN_00533b20(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xa88) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0xa88) = fVar1;
  if (fVar1 < 0.0) {
    FUN_00a8caf0(2,0,0,0);
    FUN_00529450(4);
  }
  return;
}

// 00533B80  FUN_00533b80  size=528  [callgraph]
void __fastcall FUN_00533b80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if (*(int *)(param_1 + 0x61c) == 1) {
    uStack_44 = 0x533ba6;
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      uStack_44 = 0;
      local_48 = 0;
      (**(code **)(*(int *)(param_1 + 0xac0) + 8))(0x40a00000);
      iVar2 = FUN_00a81330();
      iVar1 = param_1;
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      FUN_00dde2d0(0xfffffffb,5);
      FUN_00dde2d0(0xfffffff6,10);
      FUN_00dde2d0(0xfffffff6,10);
      D3DXVec3TransformNormal(&stack0xffffffc4,&stack0xffffffc4,iVar1 + 0x10);
    }
    else {
      uStack_44 = 0x533c92;
      FUN_00a81330();
      uStack_44 = 0x533c99;
      iVar1 = FUN_00a7c8a0();
      if (*(int *)(iVar1 + 0x4e4) == 0) {
        return;
      }
      uStack_44 = 0;
      local_48 = 0;
      (**(code **)(*(int *)(param_1 + 0xac0) + 8))(0x40a00000);
      iVar2 = FUN_00a81330();
      iVar1 = param_1;
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      FUN_00dde2d0(0xfffffffb,5);
      FUN_00dde2d0(0xfffffff6,10);
      FUN_00dde2d0(0xfffffff6,10);
      D3DXVec3TransformNormal(&stack0xffffffc4,&stack0xffffffc4,iVar1 + 0x10);
    }
    FUN_005294f0(0,&local_48,&stack0xffffffc8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00533D90  FUN_00533d90  size=406  [callgraph]
void __fastcall FUN_00533d90(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 1;
    piVar2 = (int *)param_1[0xd8];
    if ((int *)param_1[0xd8] == (int *)0x0) {
      piVar2 = param_1;
    }
    if ((short)piVar2[0xd6] < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = piVar2[0xd4];
    }
    *(undefined4 *)(iVar3 + 0x50) = 0;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 0;
    FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 100))();
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x2a8] = 0;
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00529770();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      return;
    }
    uVar11 = 1;
    local_20 = 0;
    local_1c = 0;
    puVar8 = &local_30;
    puVar7 = &local_20;
    local_18 = 0x40400000;
    local_30 = 0xbfc90fdb;
    local_2c = 0;
    local_28 = 0;
    uVar10 = 0x40c00000;
    uVar9 = 0x40400000;
    uVar6 = 0xffffffff;
    FUN_00a81330(0xffffffff,puVar7,puVar8,0x40400000,0x40c00000,1);
    uVar4 = FUN_00a7c7f0();
    uVar5 = extraout_ECX;
    FUN_00a7c940(uVar4);
    FUN_00c630c0(uVar5,uVar6,puVar7,puVar8,uVar9,uVar10,uVar11);
    return;
  case 2:
    param_1[0x187] = 3;
    param_1[0x248] = 0x43960000;
    break;
  case 3:
    break;
  default:
    goto switchD_00533dad_default;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    FUN_00529770();
    return;
  }
switchD_00533dad_default:
  return;
}

// 0053A710  Em01a0Parts::vf32C  size=403  [class]
void __fastcall Em01a0Parts::vf32C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00536920();
  if ((*(int *)(param_1 + 0xa08) != 0) && (*(int *)(param_1 + 0xaa0) != 0)) {
    iVar3 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar3 = param_1;
    }
    sVar1 = *(short *)(iVar3 + 0x358);
    iVar3 = 0;
    if (0 < sVar1) {
      iVar4 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x360);
        if (*(int *)(param_1 + 0x360) == 0) {
          iVar5 = param_1;
        }
        if ((iVar3 < 0) || (*(short *)(iVar5 + 0x358) <= iVar3)) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x350) + iVar4;
        }
        iVar2 = FUN_00a12210((int)*(short *)(iVar5 + 0xa0));
        if ((iVar2 != 0) && (*(short *)(iVar5 + 0xa0) != -1)) {
          *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
          *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(iVar2 + 100);
          *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)(iVar2 + 0x68);
          *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)(iVar2 + 0x6c);
          *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(iVar2 + 0x90);
          *(undefined4 *)(iVar5 + 0x94) = *(undefined4 *)(iVar2 + 0x94);
          *(undefined4 *)(iVar5 + 0x98) = *(undefined4 *)(iVar2 + 0x98);
          *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar2 + 0x9c);
          *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
          *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(iVar2 + 0x74);
          *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
          *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(iVar2 + 0x7c);
          *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
          *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
          *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
          *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(iVar2 + 0x5c);
          *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
          *(undefined4 *)(iVar5 + 0x84) = *(undefined4 *)(iVar2 + 0x84);
          *(undefined4 *)(iVar5 + 0x88) = *(undefined4 *)(iVar2 + 0x88);
          *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar2 + 0x8c);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xb0;
      } while (iVar3 < sVar1);
    }
  }
  switchD_0080dbae::default();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    switch(*(undefined4 *)(param_1 + 0xa9c)) {
    case 0:
    case 2:
      FUN_008f40f0(param_1);
      return;
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      FUN_008f4020(param_1,1);
    }
  }
  return;
}

// 0053EC10  Em01a0Parts::vf4C  size=1928  [class]
void __fastcall Em01a0Parts::vf4C(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  undefined *puVar16;
  uint local_218;
  float fStack_204;
  undefined1 local_1f0 [48];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  FUN_00a92fb0();
  fVar14 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar14;
  BehaviorPartsModel::vf4C();
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 2:
    FUN_005339e0();
    break;
  case 6:
    FUN_00533b80();
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    if (*(int *)(param_1 + 0x61c) == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
    }
    break;
  case 1:
    FUN_00533950();
    break;
  case 2:
    if (*(int *)(param_1 + 0x61c) == 0) {
      *(undefined4 *)(param_1 + 0xaa0) = 1;
      *(undefined4 *)(param_1 + 0x61c) = 1;
    }
    break;
  case 3:
    FUN_00533a90();
    break;
  case 4:
    FUN_0051d010();
    break;
  case 5:
    FUN_00533b20();
    break;
  case 6:
    FUN_00533d90();
    break;
  case 7:
    FUN_00536f00();
  }
  FUN_004066f0();
  *(undefined4 *)(param_1 + 0xc80) = 0;
  *(undefined4 *)(param_1 + 0xc84) = 0;
  *(undefined4 *)(param_1 + 0xc88) = 0;
  if (*(int *)(param_1 + 0xc50) != 0) {
    FID_conflict__memcpy(local_1f0,(void *)(param_1 + 0x10),0x40);
    local_1c0 = *(undefined4 *)(param_1 + 0x130);
    local_1bc = *(undefined4 *)(param_1 + 0x134);
    local_1b8 = *(undefined4 *)(param_1 + 0x138);
    Phantom::setTransform(local_1f0);
  }
  if (*(int *)(param_1 + 0xc60) != 0) {
    FID_conflict__memcpy(local_1f0,(void *)(param_1 + 0x10),0x40);
    local_1c0 = *(undefined4 *)(param_1 + 0x130);
    local_1bc = *(undefined4 *)(param_1 + 0x134);
    local_1b8 = *(undefined4 *)(param_1 + 0x138);
    Phantom::setTransform(local_1f0);
  }
  iVar9 = FUN_00c13920();
  if (iVar9 != 0) {
    piVar10 = (int *)FUN_00c13920();
    iVar9 = (**(code **)(*piVar10 + 0x28))(0);
    if (iVar9 != 0) {
      piVar10 = (int *)FUN_00a7c8a0();
      if (piVar10 == (int *)0x0) {
        local_218 = 0;
      }
      else {
        puVar16 = &DAT_01be9db8;
        (**(code **)(*piVar10 + 4))(&DAT_01be9db8);
        iVar9 = FUN_00dd6d80(puVar16);
        local_218 = -(uint)(iVar9 != 0) & (uint)piVar10;
      }
      goto LAB_0053eddd;
    }
  }
  local_218 = 0;
LAB_0053eddd:
  iVar9 = 0;
  if (*(int *)(param_1 + 0xa8c) == 0) {
    fVar14 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0xc70) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc70));
    *(float *)(param_1 + 0xc74) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc74));
    *(float *)(param_1 + 0xc78) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc78));
    *(float *)(param_1 + 0xc7c) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc7c));
  }
  else {
    if (*(int *)(param_1 + 0xc50) != 0) {
      local_1a0 = local_190;
      local_1ac = 0x7f7fffee;
      local_1b0 = hkpAllCdPointCollector::vftable;
      local_198 = 0x80000008;
      local_19c = 0;
      FUN_00900350(&local_1b0);
      if ((0 < local_19c) && (0 < local_19c)) {
        iVar13 = 0;
        fVar2 = fStack_204;
        do {
          fVar1 = *(float *)(local_1a0 + iVar13 + 0x1c);
          pfVar11 = (float *)(local_1a0 + iVar13 + 0x10);
          fVar5 = *pfVar11;
          fVar6 = pfVar11[1];
          fVar7 = pfVar11[2];
          fVar8 = pfVar11[3];
          pfVar11 = (float *)(local_1a0 + iVar13);
          cVar3 = *(char *)((int)pfVar11[10] + 0x10);
          *pfVar11 = fVar1 * fVar5 + *pfVar11;
          pfVar11[1] = fVar1 * fVar6 + pfVar11[1];
          pfVar11[2] = fVar1 * fVar7 + pfVar11[2];
          pfVar11[3] = fVar1 * fVar8 + pfVar11[3];
          pfVar11[4] = -fVar5;
          pfVar11[5] = -fVar6;
          pfVar11[6] = -fVar7;
          pfVar11[7] = fVar8;
          fVar1 = pfVar11[7];
          iVar12 = (int)cVar3 + (int)pfVar11[10];
          if (fVar1 < 0.0) {
            fVar5 = pfVar11[4] * fVar1;
            fVar6 = pfVar11[5] * fVar1;
            fVar7 = pfVar11[6] * fVar1;
            fStack_204 = fVar2 * fVar1;
            if (((iVar12 == 0) || (uVar4 = *(uint *)(iVar12 + 0xc), uVar4 == 0)) ||
               ((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 0x20000) == 0)) {
              fVar2 = *(float *)(param_1 + 0x910) * 0.01;
              fVar6 = fVar2 * fVar6;
              fVar5 = fVar2 * fVar5;
              fVar7 = fVar2 * fVar7;
              fVar2 = fStack_204;
            }
            else {
              if ((local_218 != 0) && (iVar12 = FUN_00b7a690(), iVar12 != 0)) {
                fVar6 = fVar6 * 0.7;
                fVar5 = fVar5 * 0.7;
                fVar7 = fVar7 * 0.7;
                *(float *)(param_1 + 0xc80) = fVar5;
                *(float *)(param_1 + 0xc84) = fVar6;
                *(float *)(param_1 + 0xc88) = fVar7;
                *(float *)(param_1 + 0xc8c) = fStack_204;
              }
              fVar5 = fVar5 * 0.0;
              fVar6 = fVar6 * 0.0;
              fVar7 = fVar7 * 0.0;
              fVar2 = fStack_204 * 0.0;
            }
            *(float *)(param_1 + 0xc70) = *(float *)(param_1 + 0xc70) + fVar5;
            *(float *)(param_1 + 0xc74) = *(float *)(param_1 + 0xc74) + fVar6;
            *(float *)(param_1 + 0xc78) = fVar7 + *(float *)(param_1 + 0xc78);
            *(float *)(param_1 + 0xc7c) = *(float *)(param_1 + 0xc7c) + fVar2;
          }
          iVar9 = iVar9 + 1;
          iVar13 = iVar13 + 0x30;
        } while (iVar9 < local_19c);
      }
      local_1b0 = hkpAllCdPointCollector::vftable;
      local_19c = 0;
      if (-1 < (int)local_198) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
      }
    }
    iVar9 = 0;
    if (*(int *)(param_1 + 0xc60) != 0) {
      local_1a0 = local_190;
      local_1ac = 0x7f7fffee;
      local_1b0 = hkpAllCdPointCollector::vftable;
      local_198 = 0x80000008;
      local_19c = 0;
      FUN_00900350(&local_1b0);
      if ((0 < local_19c) && (0 < local_19c)) {
        iVar13 = 0;
        do {
          iVar12 = *(int *)(local_1a0 + iVar13 + 0x28);
          fVar2 = *(float *)(local_1a0 + iVar13 + 0x1c);
          pfVar11 = (float *)(local_1a0 + iVar13 + 0x10);
          fVar1 = *pfVar11;
          fVar5 = pfVar11[1];
          fVar6 = pfVar11[2];
          fVar7 = pfVar11[3];
          cVar3 = *(char *)(iVar12 + 0x10);
          pfVar11 = (float *)(local_1a0 + iVar13);
          *pfVar11 = fVar2 * fVar1 + *pfVar11;
          pfVar11[1] = fVar2 * fVar5 + pfVar11[1];
          pfVar11[2] = fVar2 * fVar6 + pfVar11[2];
          pfVar11[3] = fVar2 * fVar7 + pfVar11[3];
          pfVar11[4] = -fVar1;
          pfVar11[5] = -fVar5;
          pfVar11[6] = -fVar6;
          pfVar11[7] = fVar7;
          fVar2 = pfVar11[7];
          iVar12 = cVar3 + iVar12;
          if (fVar2 < 0.0) {
            fStack_204 = fVar2 * fStack_204;
            if (((iVar12 == 0) || (uVar4 = *(uint *)(iVar12 + 0xc), uVar4 == 0)) ||
               ((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 0x20000) == 0)) {
              fVar5 = *(float *)(param_1 + 0x910) * 0.015;
              fVar1 = fVar5 * pfVar11[5] * fVar2;
              if (0.0 < fVar1) {
                fVar1 = fVar1 + fVar1;
              }
              fVar6 = fVar5 * pfVar11[4] * fVar2;
              fVar5 = fVar5 * pfVar11[6] * fVar2;
            }
            else {
              fVar1 = pfVar11[5] * fVar2 * 0.5;
              fVar6 = pfVar11[4] * fVar2 * 0.5;
              fVar5 = pfVar11[6] * fVar2 * 0.5;
              *(float *)(param_1 + 0xc80) = fVar6;
              *(float *)(param_1 + 0xc84) = fVar1;
              *(float *)(param_1 + 0xc88) = fVar5;
              *(float *)(param_1 + 0xc8c) = fStack_204;
              fVar6 = fVar6 * 0.0;
              fVar1 = fVar1 * 0.0;
              fVar5 = fVar5 * 0.0;
              fStack_204 = fStack_204 * 0.0;
            }
            *(float *)(param_1 + 0xc70) = *(float *)(param_1 + 0xc70) + fVar6;
            *(float *)(param_1 + 0xc74) = *(float *)(param_1 + 0xc74) + fVar1;
            *(float *)(param_1 + 0xc78) = *(float *)(param_1 + 0xc78) + fVar5;
            *(float *)(param_1 + 0xc7c) = *(float *)(param_1 + 0xc7c) + fStack_204;
          }
          iVar9 = iVar9 + 1;
          iVar13 = iVar13 + 0x30;
        } while (iVar9 < local_19c);
      }
      local_1b0 = hkpAllCdPointCollector::vftable;
      local_19c = 0;
      if (-1 < (int)local_198) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
      }
    }
    fVar14 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0xc70) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc70));
    *(float *)(param_1 + 0xc74) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc74));
    *(float *)(param_1 + 0xc78) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc78));
    *(float *)(param_1 + 0xc7c) = (float)(fVar14 * (float10)*(float *)(param_1 + 0xc7c));
    fVar14 = (float10)*(float *)(param_1 + 0xc74) -
             (float10)*(float *)(param_1 + 0x910) * (float10)0.001;
    *(float *)(param_1 + 0xc74) = (float)fVar14;
    fVar15 = (float10)fcos((float10)*(float *)(param_1 + 0xa98));
    *(float *)(param_1 + 0xc74) =
         (float)(fVar15 * (float10)0.002 +
                ((float10)*(float *)(param_1 + 0xa94) - (float10)*(float *)(param_1 + 0x44)) *
                (float10)0.005 * (float10)*(float *)(param_1 + 0x910) + fVar14);
    fVar2 = *(float *)(param_1 + 0xa98);
    fVar14 = (float10)FUN_00dde300(0,0x3f800000);
    fVar14 = (float10)FUN_00ddba30((float)((fVar14 + (float10)1.0) * (float10)0.017453292 +
                                          (float10)fVar2));
    *(float *)(param_1 + 0xa98) = (float)fVar14;
  }
  if (DAT_01885d68 != 1) {
    piVar10 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar10 = *piVar10 + -1;
    if (((*piVar10 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00AC0FD0  Em01a0Parts::vf04  size=6  [class]
undefined * Em01a0Parts::vf04(void)

{
  return &DAT_01b34f38;
}

// 00AC1050  Em01a0Parts::destruct  size=30  [class]
undefined4 __thiscall Em01a0Parts::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

