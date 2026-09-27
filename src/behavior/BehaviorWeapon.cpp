// src/behavior/BehaviorWeapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8FB10..00AA9D00, 16 functions

#include "types.h"

// 00A8FB10  BehaviorWeapon::vfC8  size=133  [class]
void __thiscall BehaviorWeapon::vfC8(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e6c60(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(param_2);
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0(param_2);
  }
  piVar1 = *(int **)(param_1 + 0x7b0);
  if (piVar1 != (int *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a8fb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xdc))();
      return;
    }
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a8fb8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xdc))();
      return;
    }
  }
  return;
}

// 00A8FBA0  BehaviorWeapon::vfA4  size=1  [class]
void BehaviorWeapon::vfA4(void)

{
  return;
}

// 00A999C0  BehaviorWeapon::vf40  size=729  [class]
undefined4 __fastcall BehaviorWeapon::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = Behavior::startup();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    FUN_00e08640(3);
    FUN_00910ac0(0);
    if (*(int *)(param_1 + 0x4a0) != 100) {
      iVar2 = FUN_00de4550("_col.hkx",0);
      if (iVar2 != 0) {
        iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = RigidBodyCollection::RigidBodyCollection_2();
        }
        *(int *)(param_1 + 0x7b0) = iVar3;
        if (iVar3 != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x4f0);
          uVar4 = FUN_00de46d0("_col.hkx",0);
          FUN_008f6410(uVar1,iVar2,uVar4);
          FUN_008f2cd0(1);
          (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
          FUN_008f1600(1);
          FUN_008f1600(2);
          FUN_008f1600(0x20);
        }
      }
      *(undefined2 *)(param_1 + 0x8a4) = 0;
      *(undefined4 *)(param_1 + 0x87c) = 1;
    }
    if (*(int *)(param_1 + 0x4b0) == 0x310f0) {
      FUN_00e5e0c0("core_se_set_state_wep2_wp10f0",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x32000) {
      FUN_00e5e0c0("core_se_set_state_wep2_wp2000",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x32010) {
      FUN_00e5e0c0("core_se_set_state_wep2_wp2010",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x32020) {
      FUN_00e5e0c0("core_se_set_state_wep2_wp2020",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x32030) {
      FUN_00e5e0c0("core_se_set_state_wep2_wp2030",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x32040) {
      FUN_00e5e0c0("core_se_set_state_wep2_wp2040",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x31010) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp1010",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x31030) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp1030",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x31040) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp1040",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x31050) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp1050",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x31000) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp1000",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x310e0) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp10e0",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x310a0) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp10a0",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x310b0) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp10b0",param_1,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x4b0) == 0x310c0) {
      FUN_00e5e0c0("core_se_set_state_wep3_wp10c0",param_1,0xffffffff,0);
    }
    return 1;
  }
  return 0;
}

// 00A99CA0  BehaviorWeapon::vfD8  size=224  [class]
int __thiscall BehaviorWeapon::vfD8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x7b4) != 0) || (*(int *)(param_1 + 0x7b0) != 0)) {
    if (param_2 == 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
      FUN_00910ac0(0);
    }
    else {
      FUN_008f3cb0(param_1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(1);
      FUN_008f3c70();
      FUN_004066f0();
      uVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(&stack0x00000000,0);
      FUN_00910ab0(uVar2);
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return param_1 + 0x8a0;
        }
      }
    }
  }
  return param_1 + 0x8a0;
}

// 00A99D80  BehaviorWeapon::vf20  size=20  [class]
void __fastcall BehaviorWeapon::vf20(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 200);
  param_1[0x130] = param_1[0x130] & 0xfffffffe;
  (*pcVar1)(0);
  return;
}

// 00A99DA0  BehaviorWeapon::vf1C  size=20  [class]
void __fastcall BehaviorWeapon::vf1C(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 200);
  param_1[0x130] = param_1[0x130] | 1;
  (*pcVar1)(1);
  return;
}

// 00A99DC0  FUN_00a99dc0  size=443  [callgraph]
void __thiscall FUN_00a99dc0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  uint local_e0 [12];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  
  if ((*(int *)(param_1 + 0x8a8) == 0) && (*(char *)(param_1 + 0x8a4) == '\0')) {
    FUN_004066f0();
    *(undefined4 *)(param_1 + 0x8ac) = param_4;
    *(undefined1 *)(param_1 + 0x8a4) = 1;
    *(undefined4 *)(param_1 + 0x8b0) = 0x3f800000;
    local_110 = *(undefined4 *)(param_1 + 0x40);
    local_10c = *(undefined4 *)(param_1 + 0x44);
    local_108 = *(undefined4 *)(param_1 + 0x48);
    local_104 = *(undefined4 *)(param_1 + 0x4c);
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    FUN_0118f7b0();
    local_50 = 0x3f800000;
    uStack_a8 = param_2[2];
    local_4c = 0x3ecccccd;
    local_b0 = *param_2;
    local_48 = 0x3ecccccd;
    uStack_ac = param_2[1];
    local_40 = 0x3f4ccccd;
    local_34 = 0x41a00000;
    local_30 = 0x42f00000;
    uStack_98 = param_3[2];
    uStack_9c = param_3[1];
    uStack_a4 = 0x3f800000;
    local_a0 = *param_3;
    uStack_94 = 0x3f800000;
    iVar1 = FUN_009f8b40();
    local_e0[0] = iVar1 << 0x10 | 0xb;
    piVar2 = (int *)FUN_00910da0();
    uVar3 = (**(code **)(*piVar2 + 8))(local_e4,local_e0,&local_110,&local_100,0x3e4ccccd,1);
    FUN_00910ab0(uVar3);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x8a8),1);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x8a8),2);
    if (DAT_01885d68 != 1) {
      piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar2 = *piVar2 + -1;
      if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00AA1C50  BehaviorWeapon::vf44  size=138  [class]
void __fastcall BehaviorWeapon::vf44(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x8a0) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x28))((undefined4 *)(param_1 + 0x8a0));
  }
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  if ((*(int *)(param_1 + 0x8a8) != 0) || (*(char *)(param_1 + 0x8a4) != '\0')) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x28))((undefined4 *)(param_1 + 0x8a8));
    *(undefined4 *)(param_1 + 0x8a8) = 0;
  }
  Behavior::vf44();
  return;
}

// 00AA1CE0  BehaviorWeapon::vf50  size=71  [class]
void __fastcall BehaviorWeapon::vf50(int param_1)

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

// 00AA1D30  BehaviorWeapon::vf25C  size=355  [class]
void __thiscall BehaviorWeapon::vf25C(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float afStack_20 [3];
  undefined4 uStack_14;
  
  if (param_3 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x260))(param_2,param_1[0x13c]);
  }
  if (param_4 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 600))(param_2,param_3,param_1[0x13c]);
    return;
  }
  if (param_1[0x1ec] != 0) {
    (**(code **)(*param_1 + 0xd8))(1);
    return;
  }
  fVar2 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  fStack_2c = (float)fVar3;
  fStack_30 = (float)fVar2;
  fVar2 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  fStack_28 = (float)fVar2;
  uStack_24 = 0x3f800000;
  fVar2 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
  afStack_20[0] = (float)fVar2;
  afStack_20[1] = 1.0;
  fVar2 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
  afStack_20[2] = (float)fVar2;
  uStack_14 = 0x3f800000;
  FUN_00a99dc0(afStack_20,&fStack_30,0x43340000);
  return;
}

// 00AA4AD0  BehaviorWeapon::BehaviorWeapon  size=38  [class]
undefined4 * __fastcall BehaviorWeapon::BehaviorWeapon(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  return param_1;
}

// 00AA4B00  BehaviorWeapon::vf04  size=6  [class]
undefined * BehaviorWeapon::vf04(void)

{
  return &DAT_01be9c2c;
}

// 00AA4B70  BehaviorWeapon::vf00  size=105  [class]
undefined4 * __thiscall BehaviorWeapon::vf00(undefined4 *param_1,byte param_2)

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

// 00AA51D0  BehaviorWeapon::vf54  size=232  [class]
void __fastcall BehaviorWeapon::vf54(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_90 [16];
  undefined1 local_50 [76];
  
  Behavior::vf54();
  if (*(int *)(param_1 + 0x4a0) == 100) {
    switchD_0080dbae::default();
  }
  else if (*(int *)(param_1 + 0x8a0) != 0) {
    FUN_0091df60(local_50);
    iVar1 = FUN_00a12210(0);
    if (iVar1 == 0) {
      FUN_01005140(local_90);
      puVar3 = local_90;
      puVar4 = (undefined4 *)(param_1 + 0x10);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    }
    else {
      FUN_01005140(local_90);
      puVar3 = local_90;
      puVar4 = (undefined4 *)(iVar1 + 0x10);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
    }
    switchD_0080dbae::default();
    if ((((*(int *)(param_1 + 0x87c) != 0) && (*(char *)(param_1 + 0x470) != '\0')) &&
        ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) && (*(char *)(param_1 + 0x471) != '\0')) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00AA52C0  FUN_00aa52c0  size=340  [callgraph]
void __fastcall FUN_00aa52c0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_90 [64];
  undefined4 auStack_50 [19];
  
  if ((*(int *)(param_1 + 0x8a8) == 0) && (*(char *)(param_1 + 0x8a4) == '\0')) {
    return;
  }
  FUN_004066f0();
  cVar2 = *(char *)(param_1 + 0x8a4);
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x8a4) = 2;
  }
  else if (cVar2 != '\x02') {
    if (cVar2 == '\x03') {
      piVar4 = (int *)FUN_00910da0();
      (**(code **)(*piVar4 + 0x28))((undefined4 *)(param_1 + 0x8a8));
      *(undefined4 *)(param_1 + 0x8a8) = 0;
      *(undefined1 *)(param_1 + 0x8a4) = 0;
      FUN_009fdde0();
    }
    goto LAB_00aa5396;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x8b0);
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      *(undefined4 *)(iVar5 + 0x1c + *(int *)(param_1 + 800)) = uVar1;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar6 < *(short *)(param_1 + 0x324));
  }
  fVar3 = *(float *)(param_1 + 0x8b0) - 0.033333335;
  *(float *)(param_1 + 0x8b0) = fVar3;
  if (fVar3 < 0.0) {
    *(char *)(param_1 + 0x8a4) = *(char *)(param_1 + 0x8a4) + '\x01';
    *(undefined4 *)(param_1 + 0x8b0) = 0;
  }
LAB_00aa5396:
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  FUN_0091df60(local_90);
  FUN_01005140(auStack_50);
  puVar7 = auStack_50;
  puVar8 = (undefined4 *)(param_1 + 0x10);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  switchD_0080dbae::default();
  if (DAT_01885d68 != 1) {
    piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar4 = *piVar4 + -1;
    if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00AA9D00  BehaviorWeapon::vf4C  size=90  [class]
void __fastcall BehaviorWeapon::vf4C(int *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  if (param_1[0x128] != 100) {
    FUN_00aa52c0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aa9d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

