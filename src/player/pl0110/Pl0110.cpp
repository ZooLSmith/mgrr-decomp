// src/player/pl0110/Pl0110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F0950..00AB6500, 10 functions

#include "types.h"

// 005F0950  Pl0110::vf44  size=31  [class]
void __fastcall Pl0110::vf44(int param_1)

{
  Behavior::vf44();
  FUN_00a944d0();
  *(undefined4 *)(param_1 + 0x874) = 0;
  *(undefined4 *)(param_1 + 0x870) = 0;
  return;
}

// 005F0970  Pl0110::vf4C  size=39  [class]
void Pl0110::vf4C(void)

{
  Behavior::vf4C();
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  return;
}

// 005F09A0  Pl0110::thunk_vf48  size=5  [class]
void __fastcall Pl0110::thunk_vf48(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x64c) = 0;
  if (*(int *)(param_1 + 2000) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 2000) + 8) = (float)(fVar1 * (float10)0.016666668);
  }
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d82df0(*(int *)(param_1 + 2000));
  }
  if (*(int *)(param_1 + 0x7d8) != 0) {
    thunk_FUN_00c73380();
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0x3f800000;
  return;
}

// 005F09B0  Pl0110::vf50  size=467  [class]
void __fastcall Pl0110::vf50(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (**(code **)(*param_1 + 100))();
  switchD_0080dbae::default();
  if (param_1[0x21e] != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 100))();
    FUN_00a7c8a0();
    switchD_0080dbae::default();
  }
  if (param_1[0x21c] != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 100))();
    FUN_00a7c8a0();
    switchD_0080dbae::default();
  }
  if (param_1[0x21d] != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 100))();
    FUN_00a7c8a0();
    switchD_0080dbae::default();
  }
  iVar3 = FUN_00a94d60(&DAT_0163b604);
  if (iVar3 != 0) {
    FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x21e] != 0) {
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar6 = 0;
      puVar5 = &DAT_0163b5f4;
      FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    }
    if (param_1[0x21c] != 0) {
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar6 = 0;
      puVar5 = &DAT_0163b5f4;
      FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    }
    if (param_1[0x21d] != 0) {
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar6 = 0;
      puVar5 = &DAT_0163b5f4;
      FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    }
    param_1[0x21f] = 0x3daaaaab;
  }
  if (0.0 < (float)param_1[0x21f]) {
    fVar4 = (float10)FUN_00a93060();
    fVar1 = (float)param_1[0x21f];
    param_1[0x21f] = (int)(float)((float10)fVar1 - fVar4);
    if ((float10)fVar1 - fVar4 <= (float10)0) {
      DAT_01b3920c = 1;
    }
  }
  Behavior::vf50();
  return;
}

// 005F0B90  Pl0110::vf54  size=5  [class]
void __fastcall Pl0110::vf54(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    FUN_00e30490();
    FUN_00e304b0();
  }
  if (param_1[0x1f1] != 0) {
    FUN_00a9ccb0();
  }
  if ((param_1[0x1da] != 0) && (iVar1 = (**(code **)(*param_1 + 0x244))(), iVar1 != 0)) {
    if (param_1[0x1db] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
    if (param_1[0x1dc] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
  }
  if (param_1[0x1f1] == 0) {
    return;
  }
  FUN_00a9cef0();
  return;
}

// 005F0BA0  FUN_005f0ba0  size=232  [between]
void __fastcall FUN_005f0ba0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  if (*(int *)(param_1 + 0x878) != 0) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 0;
    puVar1 = &DAT_0163b5f4;
    FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9e290(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  if (*(int *)(param_1 + 0x870) != 0) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 0;
    puVar1 = &DAT_0163b5f4;
    FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9e290(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  if (*(int *)(param_1 + 0x874) != 0) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 0;
    puVar1 = &DAT_0163b5f4;
    FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9e290(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  return;
}

// 005F0C90  Pl0110::vf40  size=1301  [class]
undefined4 __fastcall Pl0110::vf40(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_1c8;
  int local_1c4 [25];
  undefined1 local_160 [272];
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = Behavior::startup();
  if ((iVar3 == 0) ||
     (iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>(), iVar3 == 0)) {
    return 0;
  }
  uVar10 = 0;
  iVar3 = FUN_00a82090(&DAT_016454c8,0x10111,0);
  if (iVar3 != 0) {
    local_1c4[5] = 0xffffffff;
    local_1c4[6] = 0xffffffff;
    local_1c4[9] = 1;
    local_1c4[10] = 1;
    local_1c4[0xb] = 2;
    local_1c4[0xc] = 2;
    local_1c4[0xd] = 3;
    local_1c4[0xe] = 3;
    local_1c4[0xf] = 4;
    local_1c4[0x10] = 4;
    local_1c4[0x11] = 5;
    local_1c4[0x12] = 5;
    local_1c4[0x13] = 0x500;
    local_1c4[0x14] = 0x500;
    local_1c4[0x15] = 6;
    local_1c4[0x16] = 6;
    local_1c4[7] = 0;
    local_1c4[8] = 0;
    local_1c4[0x17] = 10;
    local_1c4[0x18] = 10;
    piVar8 = local_1c4 + 5;
    do {
      FUN_00a8c5f0(uVar10,*(undefined4 *)(param_1 + 0x4f0),iVar3,*piVar8,piVar8[1]);
      uVar10 = uVar10 + 1;
      piVar8 = piVar8 + 2;
    } while (uVar10 < 10);
    uVar18 = 0x3f800000;
    uVar17 = 0xbf800000;
    uVar16 = 0;
    uVar15 = 0x3f800000;
    uVar14 = 0;
    uVar13 = 0;
    puVar12 = &DAT_0163b604;
    FUN_00a7c8a0(&DAT_0163b604,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9e290(puVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
    *(int *)(param_1 + 0x878) = iVar3;
  }
  uVar9 = 0;
  iVar3 = FUN_00a82090(&DAT_016454c0,0x10112,0);
  if (iVar3 != 0) {
    local_1c4[5] = 0xffffffff;
    local_1c4[6] = 0xffffffff;
    local_1c4[0xb] = 3;
    local_1c4[0xc] = 3;
    local_1c4[7] = 4;
    local_1c4[8] = 0;
    local_1c4[9] = 5;
    local_1c4[10] = 1;
    local_1c4[0xd] = 0x500;
    local_1c4[0xe] = 0x500;
    do {
      FUN_00a8c5f0(uVar10,*(undefined4 *)(param_1 + 0x4f0),iVar3,local_1c4[uVar9 * 2 + 5],
                   local_1c4[uVar9 * 2 + 6]);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar9 < 5);
  }
  uVar9 = 0;
  iVar3 = FUN_00a82090("visor",0x10113,0);
  if (iVar3 != 0) {
    local_1c4[0] = -1;
    local_1c4[1] = 0xffffffff;
    local_1c4[2] = 5;
    local_1c4[3] = 0;
    do {
      FUN_00a8c5f0(uVar10,*(undefined4 *)(param_1 + 0x4f0),iVar3,local_1c4[uVar9 * 2],
                   local_1c4[uVar9 * 2 + 1]);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar9 < 2);
    uVar18 = 0x3f800000;
    uVar17 = 0xbf800000;
    uVar16 = 0;
    uVar15 = 0x3f800000;
    uVar14 = 0;
    uVar13 = 0;
    puVar12 = &DAT_0163b5f4;
    FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9e290(puVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
    *(int *)(param_1 + 0x870) = iVar3;
  }
  uVar9 = 0;
  iVar3 = FUN_00a82090("blade",0x10114,0);
  if (iVar3 != 0) {
    local_1c4[0] = -1;
    local_1c4[1] = 0xffffffff;
    local_1c4[2] = 0x700;
    local_1c4[3] = 0;
    do {
      FUN_00a8c5f0(uVar10,*(undefined4 *)(param_1 + 0x4f0),iVar3,local_1c4[uVar9 * 2],
                   local_1c4[uVar9 * 2 + 1]);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar9 < 2);
    FUN_00e01ca0();
    local_50 = 0;
    local_20 = 0xffffffff;
    local_1c = 0xffffffff;
    FUN_00dffad0(0);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00e03080(*(int *)(param_1 + 0x4f0),0);
    }
    FUN_00e03080(iVar3,1);
    FUN_00a963e0(local_160);
  }
  iVar3 = FUN_00a82090("sheath",0x10115,0);
  if (iVar3 != 0) {
    local_1c4[0] = -1;
    local_1c4[1] = 0xffffffff;
    local_1c4[2] = 0x710;
    local_1c4[3] = 0;
    uVar9 = 0;
    do {
      FUN_00a8c5f0(uVar10,*(undefined4 *)(param_1 + 0x4f0),iVar3,local_1c4[uVar9 * 2],
                   local_1c4[uVar9 * 2 + 1]);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar9 < 2);
    *(int *)(param_1 + 0x874) = iVar3;
    iVar3 = FUN_00a7c8a0();
    local_1c8 = 0;
    if (0 < *(short *)(iVar3 + 0x324)) {
      local_1c4[4] = 0;
      do {
        iVar4 = local_1c4[4] + *(int *)(iVar3 + 800);
        pbVar5 = *(byte **)(*(int *)(iVar4 + 0x60) + 0x40);
        if (pbVar5 != (byte *)0x0) {
          pcVar7 = "connect";
          do {
            bVar2 = *pbVar5;
            bVar11 = bVar2 < (byte)*pcVar7;
            if (bVar2 != *pcVar7) {
LAB_005f10d0:
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_005f10d5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar11 = bVar2 < (byte)pcVar7[1];
            if (bVar2 != pcVar7[1]) goto LAB_005f10d0;
            pbVar5 = pbVar5 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_005f10d5:
          if (iVar6 == 0) {
            puVar1 = (uint *)(iVar4 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        local_1c4[4] = local_1c4[4] + 0x70;
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < *(short *)(iVar3 + 0x324));
    }
    uVar18 = 0x3f800000;
    uVar17 = 0xbf800000;
    uVar16 = 0;
    uVar15 = 0x3f800000;
    uVar14 = 0;
    uVar13 = 0;
    puVar12 = &DAT_0163b5f4;
    FUN_00a7c8a0(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a9e290(puVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
  }
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(undefined4 *)(param_1 + 0x87c) = 0xbf800000;
  switch(DAT_018b9148) {
  case 0xf01:
  case 0xf05:
  case 0xf06:
  case 0xf08:
  case 0xf0a:
  case 0xf0b:
  case 0xf30:
    FUN_005f0ba0();
  }
  if (DAT_01b391ca != '\0') {
    FUN_005f0ba0();
  }
  return 1;
}

// 00AA6070  Pl0110::Pl0110  size=18  [class]
undefined4 * __fastcall Pl0110::Pl0110(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6090  Pl0110::vf04  size=6  [class]
undefined * Pl0110::vf04(void)

{
  return &DAT_01b353e8;
}

// 00AB6500  Pl0110::vf00  size=105  [class]
undefined4 * __thiscall Pl0110::vf00(undefined4 *param_1,byte param_2)

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

