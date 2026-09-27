// src/misc/SlashTestContents.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DB520..008DC110, 10 functions

#include "mgrr.h"
#include "SlashTestContents.h"

// 008DB520  SlashTestContents::SlashTestContents  size=61  [class]
void __fastcall SlashTestContents::SlashTestContents(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
    param_1[5] = 0;
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
    param_1[6] = 0;
  }
  ContentsBase::ContentsBase_2();
  return;
}

// 008DB560  SlashTestContents::vf00  size=6  [class]
undefined * SlashTestContents::vf00(void)

{
  return &DAT_01b35d50;
}

// 008DB5B0  SlashTestContents::vf04  size=82  [class]
undefined4 * __thiscall SlashTestContents::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
    param_1[5] = 0;
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
    param_1[6] = 0;
  }
  ContentsBase::ContentsBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DB640  FUN_008db640  size=929  [between]
void __fastcall FUN_008db640(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  float10 fVar14;
  float10 fVar15;
  uint local_110;
  int local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  char *local_70 [5];
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  char *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  
  local_100 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  local_70[0] = "bm015f";
  local_70[1] = (char *)0xd015f;
  local_70[2] = "ba0041";
  local_70[3] = (char *)0xf0041;
  local_70[4] = "bm00e7";
  local_5c = 0xd00e7;
  local_58 = "bm00e4";
  local_54 = 0xd00e4;
  local_50 = "bm008d";
  local_4c = 0xd008d;
  local_48 = "bm007b";
  local_44 = 0xd007b;
  local_40 = "bm0051";
  local_3c = 0xd0051;
  local_38 = "bm0094";
  local_34 = 0xd0094;
  local_30 = "bm00cd";
  local_2c = 0xd00cd;
  local_28 = "bm0084";
  local_24 = 0xd0084;
  local_20 = "bm0085";
  local_1c = 0xd0085;
  if (local_100 == local_100 + *(int *)(*(int *)(param_1 + 0x14) + 8) * 4) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  do {
    FUN_00a81330();
    local_110 = 0;
    do {
      iVar10 = FUN_00a7c8a0();
      iVar10 = *(int *)(iVar10 + 0x4ec);
      iVar11 = FUN_00e03ea0(local_70[local_110 * 2]);
      if (iVar10 == iVar11) {
        local_a8 = 0;
        local_f0 = 0;
        local_ac = 0;
        local_ec = 0;
        local_b0 = 0;
        local_e4 = 0;
        local_b4 = 0;
        local_e8 = 0;
        local_bc = 0;
        local_74 = 0;
        local_c0 = 0;
        local_78 = 0;
        local_c4 = 0;
        local_7c = 0xffffffff;
        local_c8 = 0;
        local_d0 = 0;
        local_d4 = 0;
        local_d8 = 0;
        local_dc = 0;
        local_a4 = 0x3f800000;
        local_b8 = 0x3f800000;
        local_cc = 0x3f800000;
        local_e0 = 0x3f800000;
        local_a0 = 0;
        local_9c = 0;
        local_98 = 0;
        local_94 = 0.0;
        local_90 = 0.0;
        local_8c = 0.0;
        local_88 = 0x3f800000;
        local_84 = 0x3f800000;
        local_80 = 0x3f800000;
        iVar10 = FUN_00a7c8a0();
        local_a0 = *(undefined4 *)(iVar10 + 0x40);
        local_9c = *(undefined4 *)(iVar10 + 0x44);
        local_98 = *(undefined4 *)(iVar10 + 0x48);
        iVar10 = FUN_00a7c8a0();
        fVar1 = *(float *)(iVar10 + 0x10);
        fVar2 = *(float *)(iVar10 + 0x14);
        fVar3 = *(float *)(iVar10 + 0x18);
        fVar4 = *(float *)(iVar10 + 0x20);
        fVar5 = *(float *)(iVar10 + 0x24);
        fVar6 = *(float *)(iVar10 + 0x28);
        fVar9 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                     *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                     *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
        fVar7 = *(float *)(iVar10 + 0x28);
        fVar8 = *(float *)(iVar10 + 0x38);
        fVar14 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar9));
        fVar15 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
        local_94 = (float)fVar15;
        local_90 = (float)fVar14;
        fVar14 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) /
                                 (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                 (float10)*(float *)(iVar10 + 0x10) /
                                 (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
        local_8c = (float)fVar14;
        uVar12 = FUN_00a82090(local_70[local_110 * 2],local_70[local_110 * 2 + 1],&local_f0);
        iVar10 = **(int **)(param_1 + 0x18);
        uVar12 = FUN_00a7f290(uVar12);
        (**(code **)(iVar10 + 8))(uVar12);
      }
      local_110 = local_110 + 1;
    } while (local_110 < 0xb);
    piVar13 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar13 + 0x20))();
    local_100 = local_100 + 4;
  } while (local_100 !=
           *(int *)(*(int *)(param_1 + 0x14) + 4) + *(int *)(*(int *)(param_1 + 0x14) + 8) * 4);
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}

// 008DB9F0  SlashTestContents::vf08  size=43  [class]
undefined4 __fastcall SlashTestContents::vf08(int param_1)

{
  FUN_00a7f4a0(0x40004,*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_008db640();
  return 1;
}

// 008DBA20  SlashTestContents::vf10  size=92  [class]
void __fastcall SlashTestContents::vf10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (iVar2 != iVar2 + *(int *)(*(int *)(param_1 + 0x18) + 8) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x18) + 4) +
                      *(int *)(*(int *)(param_1 + 0x18) + 8) * 4);
  }
  if (*(int *)(*(int *)(param_1 + 0x18) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 0;
  }
  return;
}

// 008DBAA0  SlashTestContents::vf0C  size=1254  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall SlashTestContents::vf0C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  float10 fVar17;
  float10 fVar18;
  undefined4 local_4e0;
  float local_4dc;
  undefined4 local_4d8;
  float local_4d4;
  undefined4 local_4d0;
  float local_4cc;
  undefined4 local_4c8;
  float local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  float local_4b4;
  undefined1 local_4a0 [80];
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  float local_444;
  float local_440;
  float local_43c;
  undefined **local_420;
  int *local_41c;
  int local_418;
  undefined4 local_414;
  int local_410 [259];
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    iVar15 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    if (iVar15 != iVar15 + *(int *)(*(int *)(param_1 + 0x14) + 8) * 4) {
      do {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        iVar11 = *(int *)(iVar11 + 0x4ec);
        iVar12 = FUN_00e03ea0("bh0063");
        if (iVar11 == iVar12) {
          FUN_0040b190();
          iVar11 = FUN_00a7c8a0();
          local_450 = *(undefined4 *)(iVar11 + 0x40);
          local_44c = *(undefined4 *)(iVar11 + 0x44);
          local_448 = *(undefined4 *)(iVar11 + 0x48);
          iVar11 = FUN_00a7c8a0();
          fVar1 = *(float *)(iVar11 + 0x10);
          fVar2 = *(float *)(iVar11 + 0x14);
          fVar3 = *(float *)(iVar11 + 0x18);
          fVar4 = *(float *)(iVar11 + 0x20);
          fVar5 = *(float *)(iVar11 + 0x24);
          fVar6 = *(float *)(iVar11 + 0x28);
          fVar9 = SQRT(*(float *)(iVar11 + 0x38) * *(float *)(iVar11 + 0x38) +
                       *(float *)(iVar11 + 0x34) * *(float *)(iVar11 + 0x34) +
                       *(float *)(iVar11 + 0x30) * *(float *)(iVar11 + 0x30));
          fVar7 = *(float *)(iVar11 + 0x28);
          fVar8 = *(float *)(iVar11 + 0x38);
          fVar17 = (float10)FUN_00ddbaa0(-(*(float *)(iVar11 + 0x18) / fVar9));
          fVar18 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
          local_444 = (float)fVar18;
          local_440 = (float)fVar17;
          fVar17 = (float10)fpatan((float10)*(float *)(iVar11 + 0x14) /
                                   (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                   (float10)*(float *)(iVar11 + 0x10) /
                                   (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
          local_43c = (float)fVar17;
          uVar14 = 0xe0063;
          uVar10 = FUN_00dde2d0(0,9);
          switch(uVar10) {
          case 0:
          case 1:
            uVar14 = 0xe0065;
            break;
          case 2:
          case 3:
            uVar14 = 0xe0066;
          }
          iVar11 = FUN_00a7c8a0();
          local_4e0 = *(undefined4 *)(iVar11 + 0x40);
          local_4cc = *(float *)(iVar11 + 0x44);
          local_4d8 = *(undefined4 *)(iVar11 + 0x48);
          local_4c4 = *(float *)(iVar11 + 0x4c);
          local_4dc = local_4cc - 100.0;
          local_4d4 = local_4b4 + local_4c4;
          local_4d0 = local_4e0;
          local_4c8 = local_4d8;
          iVar11 = RayCastSingleHitWork::RayCastSingleHitWork_4
                             (&local_4c0,0,0,0,&local_4d0,&local_4e0,0x1e,&DAT_0164ab1c);
          if (iVar11 != 0) {
            local_450 = local_4c0;
            local_44c = local_4bc;
            local_448 = local_4b8;
          }
          uVar14 = FUN_00a82090("bh0063",uVar14,local_4a0);
          iVar11 = **(int **)(param_1 + 0x18);
          uVar14 = FUN_00a7f290(uVar14);
          (**(code **)(iVar11 + 8))(uVar14);
        }
        iVar11 = FUN_00a7c8a0();
        iVar11 = *(int *)(iVar11 + 0x4ec);
        iVar12 = FUN_00e03ea0("bh0064");
        if (iVar11 == iVar12) {
          FUN_0040b190();
          iVar11 = FUN_00a7c8a0();
          local_450 = *(undefined4 *)(iVar11 + 0x40);
          local_44c = *(undefined4 *)(iVar11 + 0x44);
          local_448 = *(undefined4 *)(iVar11 + 0x48);
          iVar11 = FUN_00a7c8a0();
          fVar1 = *(float *)(iVar11 + 0x10);
          fVar2 = *(float *)(iVar11 + 0x14);
          fVar3 = *(float *)(iVar11 + 0x18);
          fVar4 = *(float *)(iVar11 + 0x20);
          fVar5 = *(float *)(iVar11 + 0x24);
          fVar6 = *(float *)(iVar11 + 0x28);
          fVar9 = SQRT(*(float *)(iVar11 + 0x38) * *(float *)(iVar11 + 0x38) +
                       *(float *)(iVar11 + 0x34) * *(float *)(iVar11 + 0x34) +
                       *(float *)(iVar11 + 0x30) * *(float *)(iVar11 + 0x30));
          fVar7 = *(float *)(iVar11 + 0x28);
          fVar8 = *(float *)(iVar11 + 0x38);
          fVar17 = (float10)FUN_00ddbaa0(-(*(float *)(iVar11 + 0x18) / fVar9));
          fVar18 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
          local_444 = (float)fVar18;
          local_440 = (float)fVar17;
          fVar17 = (float10)fpatan((float10)*(float *)(iVar11 + 0x14) /
                                   (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                   (float10)*(float *)(iVar11 + 0x10) /
                                   (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
          local_43c = (float)fVar17;
          FUN_00a7c8a0();
          uVar14 = FUN_00a82090("bh0064",0xe0064,local_4a0);
          iVar11 = **(int **)(param_1 + 0x18);
          uVar14 = FUN_00a7f290(uVar14);
          (**(code **)(iVar11 + 8))(uVar14);
        }
        piVar13 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar13 + 0x20))();
        iVar15 = iVar15 + 4;
      } while (iVar15 != *(int *)(*(int *)(param_1 + 0x14) + 4) +
                         *(int *)(*(int *)(param_1 + 0x14) + 8) * 4);
    }
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  if (((_DAT_01b7b910 & 0x1000) != 0) && ((DAT_01b7b914 & 0x8000) != 0)) {
    local_41c = local_410;
    local_418 = 0;
    local_414 = 0x100;
    local_420 = lib::StaticArray<Entity*,256>::vftable;
    FUN_00a7f440(0x42000,&local_420);
    piVar13 = local_41c;
    piVar16 = local_41c;
    if (local_41c != local_41c + local_418) {
      do {
        if (*piVar16 != 0) {
          FUN_00a805f0();
          piVar13 = local_41c;
        }
        piVar16 = piVar16 + 1;
      } while (piVar16 != piVar13 + local_418);
    }
    iVar15 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    if (iVar15 != iVar15 + *(int *)(*(int *)(param_1 + 0x18) + 8) * 4) {
      do {
        iVar11 = FUN_00a81330();
        if (iVar11 != 0) {
          FUN_00a805f0();
        }
        iVar15 = iVar15 + 4;
      } while (iVar15 != *(int *)(*(int *)(param_1 + 0x18) + 4) +
                         *(int *)(*(int *)(param_1 + 0x18) + 8) * 4);
    }
    if (*(int *)(*(int *)(param_1 + 0x18) + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_008db640();
  }
  return;
}

// 008DBFA0  FUN_008dbfa0  size=102  [between]
void __fastcall FUN_008dbfa0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008dc000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 008DC010  FUN_008dc010  size=244  [between]
undefined4 __thiscall FUN_008dc010(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008dbfa0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 008DC110  SlashTestContents::SlashTestContents_2  size=178  [class]
undefined4 * __thiscall
SlashTestContents::SlashTestContents_2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  ContentsBase::ContentsBase(param_2,param_3);
  *param_1 = vftable;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = lib::AllocatedArray<EntityHandle>::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  param_3 = param_1[1];
  FUN_008dc010(0x80,&param_3);
  param_1[5] = puVar1;
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,param_1[1]);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = lib::AllocatedArray<EntityHandle>::vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar1 = puVar2;
  }
  param_3 = param_1[1];
  FUN_008dc010(0x80,&param_3);
  param_1[6] = puVar1;
  return param_1;
}

