// src/misc/cRayRightHand.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC10D0..00B00100, 5 functions

#include "mgrr.h"
#include "cRayRightHand.h"

// 00AC10D0  cRayRightHand::vf04  size=6  [class]
undefined * cRayRightHand::vf04(void)

{
  return &DAT_01be9cc8;
}

// 00AC35F0  cRayRightHand::destruct  size=30  [class]
undefined4 __thiscall cRayRightHand::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AFC210  cRayRightHand::vf44  size=82  [class]
void __fastcall cRayRightHand::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xa68);
  iVar1 = 0x10;
  do {
    if (*piVar2 != 0) {
      if (*piVar2 != 0) {
        FUN_00dd48d0(*piVar2,0);
        *piVar2 = 0;
      }
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = piVar2[-1];
      piVar2[4] = piVar2[-1];
      piVar2[5] = piVar2[-1];
    }
    piVar2 = piVar2 + 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  BehaviorPartsModel::vf44();
  return;
}

// 00AFFE60  cRayRightHand::startup  size=249  [class]
int __fastcall cRayRightHand::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar3 = BehaviorPartsModel::startup();
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0xa50) = 0x16;
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0,0x3f800000);
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if (iVar4 != 0) {
        iVar4 = FUN_00fdbbd0(iVar4,"m017_01");
        if (iVar4 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  piVar6 = (int *)(param_1 + 0xa68);
  iVar3 = 0x10;
  do {
    iVar5 = iVar3;
    if (*piVar6 == 0) {
      iVar3 = FUN_00dd29b0(0xcc,0x20,0,0);
      *piVar6 = iVar3;
      if (iVar3 != 0) {
        piVar6[1] = 0x10;
        piVar6[2] = 0;
        piVar6[5] = iVar3 + 0xc0;
        FUN_00af6e00();
      }
    }
    piVar6 = piVar6 + 7;
    iVar3 = iVar5 + -1;
  } while (iVar3 != 0);
  uVar7 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar7);
  return iVar5;
}

// 00B00100  cRayRightHand::vf4C  size=1080  [class]
void __fastcall cRayRightHand::vf4C(int param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *local_490;
  int *local_488;
  int local_484;
  int local_480;
  undefined1 local_458 [4];
  undefined1 local_454 [4];
  undefined **local_450;
  undefined4 local_44c;
  undefined1 *local_440;
  int local_43c;
  uint local_438;
  undefined1 local_430 [384];
  undefined1 local_2b0 [288];
  undefined4 local_190;
  float local_18c;
  undefined4 local_188;
  undefined1 local_160 [348];
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar5 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar5;
  if (iVar5 != 0) {
    uVar6 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar6;
  }
  BehaviorPartsModel::vf4C();
  FUN_004066f0();
  iVar12 = 0;
  piVar11 = (int *)(param_1 + 0xa8c);
  piVar9 = (int *)(param_1 + 0xa10);
  iVar5 = 4;
  do {
    if (((piVar9[-1] != 0) && (*(int *)(param_1 + 0xa08) != 0)) && (piVar11[-7] != 0)) {
      iVar12 = iVar12 + 1;
    }
    if (((*piVar9 != 0) && (*(int *)(param_1 + 0xa08) != 0)) && (*piVar11 != 0)) {
      iVar12 = iVar12 + 1;
    }
    if (((piVar9[1] != 0) && (*(int *)(param_1 + 0xa08) != 0)) && (piVar11[7] != 0)) {
      iVar12 = iVar12 + 1;
    }
    if (((piVar9[2] != 0) && (*(int *)(param_1 + 0xa08) != 0)) && (piVar11[0xe] != 0)) {
      iVar12 = iVar12 + 1;
    }
    piVar9 = piVar9 + 4;
    piVar11 = piVar11 + 0x1c;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_490 = (int *)(param_1 + 0xa0c);
  piVar11 = (int *)(param_1 + 0xa7c);
  local_484 = 0x10;
  do {
    if (((*local_490 != 0) && (*(int *)(param_1 + 0xa08) != 0)) && (piVar11[-3] != 0)) {
      local_44c = 0x7f7fffee;
      local_440 = local_430;
      local_450 = hkpAllCdPointCollector::vftable;
      local_438 = 0x80000008;
      local_43c = 0;
      puVar7 = (undefined4 *)FUN_00912660(local_458,0);
      iVar5 = hkpAllCdPointCollector::hkpAllCdPointCollector_28
                        (&local_450,*puVar7,0,"Ray RoghtHand");
      if (((iVar5 != 0) && (0 < local_43c)) && (iVar5 = 0, 0 < local_43c)) {
        fVar4 = *(float *)(*(int *)(param_1 + 0xa08) + 0x44) + 1.5;
        puVar7 = (undefined4 *)(local_440 + 8);
LAB_00b0027a:
        uVar6 = puVar7[-2];
        fVar2 = (float)puVar7[-1];
        uVar16 = *puVar7;
        if (fVar2 < fVar4 == (fVar2 == fVar4)) break;
        local_488 = (int *)piVar11[-1];
        if (local_488 != (int *)*piVar11) {
          do {
            iVar5 = *local_488;
            iVar13 = 0;
            local_480 = 0;
            if (0 < *(short *)(param_1 + 0x324)) {
              do {
                iVar3 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar13) + 0x40);
                if ((iVar8 != 0) &&
                   (iVar8 = FUN_00fdbbd0(iVar8,&DAT_018a7968 + iVar5 * 0x10), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar13);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                local_480 = local_480 + 1;
                iVar13 = iVar13 + 0x70;
              } while (local_480 < *(short *)(param_1 + 0x324));
            }
            local_488 = (int *)local_488[2];
          } while (local_488 != (int *)*piVar11);
        }
        if (piVar11[-5] != 0) {
          iVar5 = 0;
          if (0 < piVar11[-4]) {
            piVar9 = (int *)(piVar11[-5] + 4);
            do {
              *piVar9 = (int)(piVar9 + -4);
              piVar9[1] = (int)(piVar9 + 2);
              iVar5 = iVar5 + 1;
              piVar9 = piVar9 + 3;
            } while (iVar5 < piVar11[-4]);
          }
          iVar5 = piVar11[-5];
          *(undefined4 *)(iVar5 + 4) = 0;
          *(undefined4 *)(piVar11[-5] + -4 + piVar11[-4] * 0xc) = 0;
          piVar11[-2] = iVar5;
          *(undefined4 *)(*piVar11 + 4) = 0;
          *(undefined4 *)(*piVar11 + 8) = 0;
          piVar11[-1] = *piVar11;
          piVar11[-3] = 0;
        }
        uVar14 = *(uint *)(param_1 + 0x4b0);
        if (uVar14 == 0x7c0000) {
          uVar14 = 0;
        }
        else if ((uVar14 < 0x10000) || (uVar14 + 0xe0000000 < 0x100000)) {
          FUN_00dd5650(&DAT_0163e20c,uVar14);
        }
        uVar15 = 0;
        uVar10 = FUN_00a7c8a0(0);
        FUN_004039a0(0x18,uVar10,uVar15);
        local_190 = uVar6;
        local_18c = fVar2;
        local_188 = uVar16;
        FUN_00a8c930(uVar14,local_2b0);
        if (iVar12 == 1) {
          uVar14 = *(uint *)(param_1 + 0x4b0);
          if (uVar14 == 0x7c0000) {
            uVar14 = 0;
          }
          else if ((uVar14 < 0x10000) || (uVar14 + 0xe0000000 < 0x100000)) {
            FUN_00dd5650(&DAT_0163e20c,uVar14);
          }
          uVar16 = 0;
          uVar6 = FUN_00a7c8a0(0);
          FUN_004039a0(0x19,uVar6,uVar16);
          FUN_00a8c930(uVar14,local_160);
        }
        FUN_00912660(local_454,0);
        FUN_00916360();
        iVar5 = *local_490;
        if (iVar5 != 0) {
          lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
          FUN_00dd4920(iVar5);
          *local_490 = 0;
        }
      }
LAB_00b004ab:
      local_450 = hkpAllCdPointCollector::vftable;
      local_43c = 0;
      if (-1 < (int)local_438) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_440,(local_438 & 0x3fffffff) * 0x30);
      }
    }
    local_490 = local_490 + 1;
    piVar11 = piVar11 + 7;
    local_484 = local_484 + -1;
    if (local_484 == 0) {
      if (DAT_01885d68 != 1) {
        piVar11 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar11 = *piVar11 + -1;
        if (((*piVar11 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      return;
    }
  } while( true );
  iVar5 = iVar5 + 1;
  puVar7 = puVar7 + 0xc;
  if (local_43c <= iVar5) goto LAB_00b004ab;
  goto LAB_00b0027a;
}

