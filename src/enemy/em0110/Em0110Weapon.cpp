// src/enemy/em0110/Em0110Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B6850..00AC1330, 17 functions

#include "mgrr.h"
#include "Em0110Weapon.h"

// 004B6850  Em0110Weapon::vf54  size=50  [class]
void __fastcall Em0110Weapon::vf54(int param_1)

{
  BehaviorWeapon::vf54();
  if (*(int *)(param_1 + 0xcf8) != 0) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00919ec0(param_1 + 0x10);
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 004B68A0  Em0110Weapon::getAttackInfo  size=43  [class]
undefined4 Em0110Weapon::getAttackInfo(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b68c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x130))();
      return uVar3;
    }
  }
  return 0;
}

// 004B68D0  Em0110Weapon::vf1A4  size=41  [class]
void Em0110Weapon::vf1A4(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b68f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x1a4))();
      return;
    }
  }
  return;
}

// 004B6900  Em0110Weapon::vf1A0  size=43  [class]
undefined4 Em0110Weapon::vf1A0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b6924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x1a0))();
      return uVar3;
    }
  }
  return 0;
}

// 004B6960  FUN_004b6960  size=404  [between]
void __fastcall FUN_004b6960(int param_1)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_18;
  int local_14;
  int local_10 [4];
  
  *(undefined4 *)(param_1 + 0xce4) = 0;
  bVar8 = *(int *)(param_1 + 0x8c0) == 0;
  if (bVar8) {
    local_10[0] = 0;
  }
  uVar3 = (uint)bVar8;
  if (*(int *)(param_1 + 0x970) == 0) {
    local_10[(short)(ushort)bVar8] = 1;
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(param_1 + 0xa20) == 0) {
    local_10[(short)uVar3] = 2;
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(param_1 + 0xad0) == 0) {
    local_10[(short)uVar3] = 3;
    uVar3 = uVar3 + 1;
  }
  if ((short)uVar3 == 0) {
    iVar4 = 0;
    piVar5 = (int *)(param_1 + 0xb80);
    do {
      iVar6 = iVar4 + 4;
      if (*piVar5 == 0) goto LAB_004b69de;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x2c;
    } while (iVar4 < 2);
  }
  else {
    sVar2 = FUN_00dde2d0(0,uVar3 - 1);
    iVar6 = local_10[sVar2];
LAB_004b69de:
    *(undefined4 *)(iVar6 * 0xb0 + 0x8c0 + param_1) = 1;
    iVar4 = *(int *)(iVar6 * 0xb0 + 0x8cc + param_1);
    if (iVar4 != -1) {
      _sprintf_s((char *)local_10,0x10,"_EFD%02d",iVar4);
      local_14 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        local_18 = 0;
        do {
          iVar7 = *(int *)(param_1 + 800) + local_18;
          iVar4 = *(int *)(*(int *)(iVar7 + 0x60) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,local_10), iVar4 != 0)) {
            puVar1 = (uint *)(iVar7 + 0x38);
            *puVar1 = *puVar1 | 1;
          }
          local_18 = local_18 + 0x70;
          local_14 = local_14 + 1;
        } while (local_14 < *(short *)(param_1 + 0x324));
      }
    }
  }
  if (-1 < iVar6) {
    iVar4 = iVar6 * 0xb0 + 0x8c0 + param_1;
    FUN_00a12210(*(undefined4 *)(iVar6 * 0xb0 + 0x8c4 + param_1));
    FUN_00a12210(*(undefined4 *)(iVar4 + 8));
    iVar6 = *(int *)(param_1 + 0x370);
    iVar4 = *(int *)(&DAT_0163ee84 + *(int *)(iVar4 + 0xc) * 4);
    if (((iVar6 != 0) && (-1 < iVar4)) && (iVar4 < *(int *)(iVar6 + 0x24))) {
      *(undefined4 *)(*(int *)(iVar6 + 0x1c) + iVar4 * 0xc) = 1;
    }
  }
  return;
}

// 004B6B20  Em0110Weapon::setCutCrerateInfo  size=64  [class]
void __thiscall Em0110Weapon::setCutCrerateInfo(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_4) {
    do {
      *(undefined4 *)(*(int *)(param_3 + iVar1 * 4) + 4) = 2;
      *param_2 = 0x42115 - (uint)(*(int *)(param_1 + 0xcec) != 0);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 3;
    } while (iVar1 < param_4);
  }
  return;
}

// 004B6BD0  FUN_004b6bd0  size=68  [callgraph]
undefined4 __thiscall FUN_004b6bd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x8c0);
  do {
    if (*piVar3 != 0) {
      iVar1 = FUN_00a9f890(param_2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x2c;
  } while (iVar2 < 6);
  return 0;
}

// 004B6C20  FUN_004b6c20  size=345  [callgraph]
void __fastcall FUN_004b6c20(int param_1)

{
  *(undefined4 *)(param_1 + 0x97c) = 3;
  *(undefined4 *)(param_1 + 0x984) = 3;
  *(undefined4 *)(param_1 + 0x8c8) = 8;
  *(undefined4 *)(param_1 + 0x974) = 8;
  *(undefined4 *)(param_1 + 0xadc) = 1;
  *(undefined4 *)(param_1 + 0xae4) = 1;
  *(undefined4 *)(param_1 + 0xb88) = 1;
  *(undefined4 *)(param_1 + 0x8cc) = 4;
  *(undefined4 *)(param_1 + 0x8d4) = 4;
  *(undefined4 *)(param_1 + 0xa28) = 4;
  *(undefined4 *)(param_1 + 0xad4) = 4;
  *(undefined4 *)(param_1 + 0xa24) = 5;
  *(undefined4 *)(param_1 + 0xc3c) = 5;
  *(undefined4 *)(param_1 + 0xc44) = 5;
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  *(undefined4 *)(param_1 + 0x8d0) = 0xeb;
  *(undefined4 *)(param_1 + 0x8c4) = 9;
  *(undefined4 *)(param_1 + 0x8d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x970) = 0;
  *(undefined4 *)(param_1 + 0x980) = 0xec;
  *(undefined4 *)(param_1 + 0x978) = 7;
  *(undefined4 *)(param_1 + 0x988) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa20) = 0;
  *(undefined4 *)(param_1 + 0xa30) = 0xed;
  *(undefined4 *)(param_1 + 0xa2c) = 2;
  *(undefined4 *)(param_1 + 0xa34) = 2;
  *(undefined4 *)(param_1 + 0xa38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xad0) = 0;
  *(undefined4 *)(param_1 + 0xae0) = 0xee;
  *(undefined4 *)(param_1 + 0xad8) = 3;
  *(undefined4 *)(param_1 + 0xae8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  *(undefined4 *)(param_1 + 0xb90) = 0xef;
  *(undefined4 *)(param_1 + 0xb8c) = 0;
  *(undefined4 *)(param_1 + 0xb84) = 2;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0xb98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc30) = 0;
  *(undefined4 *)(param_1 + 0xc40) = 0xea;
  *(undefined4 *)(param_1 + 0xc34) = 0xb;
  *(undefined4 *)(param_1 + 0xc38) = 10;
  *(undefined4 *)(param_1 + 0xc48) = 0xffffffff;
  return;
}

// 004BCF40  Em0110Weapon::startup  size=795  [class]
undefined4 __fastcall Em0110Weapon::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 local_114 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  iVar2 = BehaviorWeapon::startup();
  if (iVar2 != 0) {
    FUN_00410540(0x20,&DAT_01b7bd48);
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
    uVar3 = FUN_00a8d2a0();
    puVar4 = (undefined4 *)FUN_009f8b60();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
      *(undefined4 *)(iVar2 + 0x594) = 0x40980000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3e4ccccd;
      *(undefined4 *)(iVar2 + 0x580) = 0;
      *(undefined4 *)(iVar2 + 0x584) = 0;
      *(undefined4 *)(iVar2 + 0x588) = 0x3fc90fdb;
      *(undefined4 *)(iVar2 + 0x58c) = local_e4;
      *(undefined4 *)(iVar2 + 0x570) = 0x3fe00000;
      *(undefined4 *)(iVar2 + 0x574) = 0;
      *(undefined4 *)(iVar2 + 0x578) = 0;
      *(undefined4 *)(iVar2 + 0x57c) = local_e4;
      _strncpy_s((char *)(iVar2 + 0x394),0x20,"mist_wp",0x1f);
      FUN_00d771d0(1);
      FUN_00a93a00(iVar2,uVar3);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    FUN_009fd240();
    iVar2 = 0;
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
    local_100 = 0x3f666666;
    local_fc = 0x3f99999a;
    local_f8 = 0x3f8ccccd;
    local_110 = 0x3e4ccccd;
    local_10c = 0x40400000;
    local_108 = 0x40000000;
    FUN_00a8e4d0(&local_110,&local_100);
    *(undefined4 *)(param_1 + 0xce4) = 0;
    FUN_004b6c20();
    *(undefined4 *)(param_1 + 0xcec) = 0;
    *(undefined4 *)(param_1 + 0xcf8) = 0;
    FUN_0118f7b0();
    local_110 = 0;
    local_10c = 0;
    local_2c = 5;
    local_108 = 0;
    local_50 = 0x41200000;
    iVar5 = FUN_009f8b40();
    local_f0 = 0x3f800000;
    local_e0[0] = iVar5 << 0x10 | 0x1f;
    local_ec = 0;
    local_e8 = 0;
    local_100 = 0xbf800000;
    local_fc = 0;
    local_f8 = 0;
    piVar6 = (int *)FUN_00910da0();
    uVar3 = (**(code **)(*piVar6 + 0xc))
                      (local_114,local_e0,&local_110,&local_110,&local_f0,&local_100,0x3d4ccccd,1);
    FUN_00910ab0(uVar3);
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar8 = *(int *)(param_1 + 800) + iVar5;
        iVar7 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
        if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_0163d9a8), iVar7 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar5 = iVar5 + 0x70;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)(param_1 + 0x324));
    }
    iVar5 = 0;
    iVar2 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar7 = *(int *)(param_1 + 800);
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar5) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0163eeb8), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar2 < *(short *)(param_1 + 0x324));
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      FUN_00a1abe0(0);
    }
    return 1;
  }
  return 0;
}

// 004CA9C0  Em0110Weapon::vf44  size=164  [class]
void __fastcall Em0110Weapon::vf44(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  if (*(int *)(param_1 + 0xcf4) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1 + 0xcf4);
  }
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00c62bb0(*(undefined4 *)(param_1 + 0x4f0),0x10);
  BehaviorWeapon::vf44();
  return;
}

// 004D16E0  Em0110Weapon::vf30  size=104  [class]
void __fastcall Em0110Weapon::vf30(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  Bh0064::vf30();
  (**(code **)(*param_1 + 0x20))();
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b34e80;
    (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      FUN_004cdc30();
      FUN_00a9e0d0(param_1[0x13c]);
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 004D8CA0  Em0110Weapon::vf48  size=277  [class]
void __fastcall Em0110Weapon::vf48(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  BehaviorDebrisActor::vf48();
  if (*(int *)(param_1 + 0xcec) == 0) {
    return;
  }
  FUN_004d7440();
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0xcf8) == 0) {
    return;
  }
  uVar3 = FUN_00a8cab0();
  switch(uVar3) {
  case 0:
    *(undefined4 *)(param_1 + 0xcf0) = 0;
    goto LAB_004d8cfb;
  case 1:
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0xcf4) != 0) {
      FUN_00915e60(0x3d0f5c29);
      FUN_00915ea0(0x3c23d70a);
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      return;
    }
LAB_004d8cfb:
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    break;
  case 2:
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_00dde300(0,0x3f800000);
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      *(float *)(param_1 + 0xcf0) = (float)(fVar4 * (float10)0.16 * (float10)60.0);
      return;
    }
    break;
  case 3:
    fVar4 = (float10)FUN_00a92ff0();
    fVar4 = (float10)*(float *)(param_1 + 0xcf0) - fVar4;
    *(float *)(param_1 + 0xcf0) = (float)fVar4;
    if (fVar4 <= (float10)0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00AADB50  Em0110Weapon::Em0110Weapon  size=39  [class]
undefined4 * __fastcall Em0110Weapon::Em0110Weapon(undefined4 *param_1)

{
  Em0110WeaponBase::Em0110WeaponBase();
  *param_1 = vftable;
  FUN_00a7c930();
  param_1[0x33d] = 0;
  return param_1;
}

// 00AADB80  Em0110Weapon::vf04  size=6  [class]
undefined * Em0110Weapon::vf04(void)

{
  return &DAT_01b34e84;
}

// 00AADB90  Em0110Weapon::vf2F8  size=1  [class]
void Em0110Weapon::vf2F8(void)

{
  return;
}

// 00AADBA0  Em0110Weapon::vf1D0  size=3  [class]
void Em0110Weapon::vf1D0(void)

{
  return;
}

// 00AC1330  Em0110Weapon::destruct  size=105  [class]
undefined4 * __thiscall Em0110Weapon::destruct(undefined4 *param_1,byte param_2)

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

