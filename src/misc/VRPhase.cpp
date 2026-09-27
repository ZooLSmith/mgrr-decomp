// src/misc/VRPhase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4AD50..00D70690, 5 functions

#include "types.h"

// 00D4AD50  FUN_00d4ad50  size=42  [callgraph]
undefined4 * FUN_00d4ad50(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018b93b0 + uVar1) == param_1) {
      return &DAT_018b93b0 + iVar2 * 0xc;
    }
    uVar1 = uVar1 + 0x30;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0xcf0);
  return (undefined4 *)0x0;
}

// 00D4AD80  VRPhase::vf08  size=19  [class]
void __fastcall VRPhase::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}

// 00D55450  VRPhase::vf10  size=119  [class]
void __fastcall VRPhase::vf10(int param_1)

{
  int *piVar1;
  
  if (((DAT_018b9174 & 0xf00) != 0xc00) && ((DAT_018b9174 & 0xf00) != 0xd00)) {
    _memset(&DAT_01b76140,0,0xc0);
  }
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x84))();
  if (*(int *)(param_1 + 4) == 0xe05) {
    DAT_01bea094 = DAT_01bea094 & 0xffffefff;
  }
  if ((*(int *)(param_1 + 4) == 0xe31) || (*(int *)(param_1 + 4) == 0xe33)) {
    DAT_01bea094 = DAT_01bea094 & 0xffffefff;
  }
  DAT_01bea070 = DAT_01bea070 & 0xfffffbff;
  return;
}

// 00D69000  VRPhase::vf0C  size=1455  [class]
void __fastcall VRPhase::vf0C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  float10 fVar9;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  
  if (DAT_018b9174 == 0xd20) {
    FUN_00d64910();
  }
  fVar9 = (float10)FUN_00e049b0();
  fVar9 = fVar9 * (float10)0.016666668 + (float10)*(float *)(param_1 + 0x130);
  *(float *)(param_1 + 0x130) = (float)fVar9;
  if (*(int *)(param_1 + 4) == 0xd75) {
    uVar8 = (ushort)(fVar9 < (float10)2.0) << 8 | (ushort)(fVar9 == (float10)2.0) << 0xe;
  }
  else {
    uVar8 = (ushort)(fVar9 < (float10)5.0) << 8 | (ushort)(fVar9 == (float10)5.0) << 0xe;
  }
  if (uVar8 == 0) {
    iVar1 = FUN_00c15900();
    if ((iVar1 != 0) && (iVar6 = *(int *)(iVar1 + 0x14), iVar6 != *(int *)(iVar1 + 0x18))) {
      do {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 != 0)) {
          uVar3 = 0;
          iVar2 = 0;
          do {
            if (*(int *)((int)&DAT_018b93b0 + uVar3) == *(int *)(param_1 + 4)) {
              iVar2 = iVar2 * 0x30;
              if (iVar2 == -0x18b93b0) break;
              iVar4 = FUN_00a7c8a0();
              if (*(float *)(iVar2 + 0x18b93b4) < *(float *)(iVar4 + 0x44)) {
                local_60 = *(undefined4 *)(iVar2 + 0x18b93c0);
                local_5c = *(undefined4 *)(iVar2 + 0x18b93c4);
                local_58 = *(undefined4 *)(iVar2 + 0x18b93c8);
                local_54 = *(undefined4 *)(iVar2 + 0x18b93cc);
                local_50 = 0x3f800000;
                local_4c = 0;
                local_48 = 0;
                local_44 = local_64;
                local_40 = 0;
                local_38 = 0;
                local_3c = 0x3f800000;
                local_34 = local_64;
                local_30 = 0;
                local_2c = 0;
                local_28 = 0x3f800000;
                local_24 = local_64;
                local_20 = *(float *)(iVar2 + 0x18b93d0) * 0.5;
                local_1c = *(undefined4 *)(iVar2 + 0x18b93d4);
                local_18 = *(float *)(iVar2 + 0x18b93d8) * 0.5;
                iVar2 = FUN_00a7c8a0();
                iVar2 = FUN_00d96bf0(iVar2 + 0x40,&local_60);
                if (iVar2 != 0) break;
              }
              piVar5 = (int *)FUN_00a7c8a0();
              (**(code **)(*piVar5 + 0x2f8))();
              break;
            }
            uVar3 = uVar3 + 0x30;
            iVar2 = iVar2 + 1;
          } while (uVar3 < 0xcf0);
        }
        iVar6 = *(int *)(iVar6 + 8);
      } while (iVar6 != *(int *)(iVar1 + 0x18));
    }
    if ((DAT_01bea094 & 0x20000) == 0) {
      FUN_0095bfa0();
      iVar1 = FUN_0095c320();
      if (iVar1 == 0) {
        piVar5 = (int *)FUN_00c13920();
        iVar1 = (**(code **)(*piVar5 + 0x28))(0);
        if ((iVar1 != 0) && (iVar1 = FUN_00d4ad50(*(undefined4 *)(param_1 + 4)), iVar1 != 0)) {
          iVar6 = FUN_00a7c8a0();
          if (*(float *)(iVar6 + 0x44) <= *(float *)(iVar1 + 4)) {
            if (*(int *)(param_1 + 4) == 0xd75) goto LAB_00d69419;
            iVar6 = FUN_00c78580(0,auStack_70);
            if (iVar6 != 0) {
              piVar5 = (int *)FUN_00a7c8a0();
              iVar6 = *piVar5;
              uVar7 = FUN_00a7c8d0();
              (**(code **)(iVar6 + 0x7c))(auStack_70,uVar7);
              if (*(int *)(param_1 + 4) == 0xc75) {
                FUN_00c82240(0x17);
              }
            }
          }
          local_60 = *(undefined4 *)(iVar1 + 0x10);
          local_5c = *(undefined4 *)(iVar1 + 0x14);
          local_58 = *(undefined4 *)(iVar1 + 0x18);
          local_54 = *(undefined4 *)(iVar1 + 0x1c);
          local_50 = 0x3f800000;
          local_4c = 0;
          local_48 = 0;
          local_44 = local_64;
          local_40 = 0;
          local_38 = 0;
          local_3c = 0x3f800000;
          local_34 = local_64;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0x3f800000;
          local_24 = local_64;
          local_20 = *(float *)(iVar1 + 0x20) * 0.5;
          local_1c = *(undefined4 *)(iVar1 + 0x24);
          local_18 = *(float *)(iVar1 + 0x28) * 0.5;
          iVar1 = FUN_00a7c8a0();
          iVar1 = FUN_00d96bf0(iVar1 + 0x40,&local_60);
          if (iVar1 == 0) {
            if (*(int *)(param_1 + 4) == 0xd75) {
LAB_00d69419:
              FUN_00c82240(0x14);
              return;
            }
            iVar1 = FUN_00c78580(0,auStack_70);
            if (iVar1 != 0) {
              piVar5 = (int *)FUN_00a7c8a0();
              iVar1 = *piVar5;
              uVar7 = FUN_00a7c8d0();
              (**(code **)(iVar1 + 0x7c))(auStack_70,uVar7);
              if (*(int *)(param_1 + 4) == 0xc75) {
                FUN_00c82240(0x17);
              }
            }
          }
        }
      }
    }
    else {
      FUN_0095bfa0();
      iVar1 = FUN_0095c320();
      if (iVar1 == 0) {
        piVar5 = (int *)FUN_00c13920();
        iVar1 = (**(code **)(*piVar5 + 0x28))(1);
        if ((iVar1 != 0) && (iVar1 = FUN_00d4ad50(*(undefined4 *)(param_1 + 4)), iVar1 != 0)) {
          iVar6 = FUN_00a7c8a0();
          if (*(float *)(iVar6 + 0x44) <= *(float *)(iVar1 + 4)) {
            uVar7 = FUN_00a7c8a0();
            iVar6 = FUN_005f57d0(uVar7);
            if (((iVar6 == 0) ||
                ((*(int *)(iVar6 + 0x4e4) == 0 && (iVar6 = FUN_00a8eea0(), -1 < iVar6)))) &&
               (iVar6 = FUN_00c78580(0,auStack_70), iVar6 != 0)) {
              uStack_80 = 0;
              uStack_78 = 0;
              uStack_74 = 0x3f800000;
              uStack_7c = uStack_6c;
              FUN_00a4d8a0(auStack_70,&uStack_80,0);
            }
          }
          local_60 = *(undefined4 *)(iVar1 + 0x10);
          local_5c = *(undefined4 *)(iVar1 + 0x14);
          local_58 = *(undefined4 *)(iVar1 + 0x18);
          local_54 = *(undefined4 *)(iVar1 + 0x1c);
          local_50 = 0x3f800000;
          local_4c = 0;
          local_48 = 0;
          local_44 = local_64;
          local_40 = 0;
          local_38 = 0;
          local_3c = 0x3f800000;
          local_34 = local_64;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0x3f800000;
          local_24 = local_64;
          local_20 = *(float *)(iVar1 + 0x20) * 0.5;
          local_1c = *(undefined4 *)(iVar1 + 0x24);
          local_18 = *(float *)(iVar1 + 0x28) * 0.5;
          iVar1 = FUN_00a7c8a0();
          iVar1 = FUN_00d96bf0(iVar1 + 0x40,&local_60);
          if (iVar1 == 0) {
            uVar7 = FUN_00a7c8a0();
            iVar1 = FUN_005f57d0(uVar7);
            if (((iVar1 == 0) ||
                ((*(int *)(iVar1 + 0x4e4) == 0 && (iVar1 = FUN_00a8eea0(), -1 < iVar1)))) &&
               (iVar1 = FUN_00c78580(0,auStack_70), iVar1 != 0)) {
              uStack_80 = 0;
              uStack_78 = 0;
              uStack_74 = 0x3f800000;
              uStack_7c = uStack_6c;
              FUN_00a4d8a0(auStack_70,&uStack_80,0);
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if ((DAT_018b9174 == 0xd20) || (DAT_018b9174 == 0xd21)) {
    FUN_00cad2a0();
  }
  return;
}

// 00D70690  VRPhase::vf00  size=65  [class]
undefined4 * __thiscall VRPhase::vf00(undefined4 *param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_6();
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

