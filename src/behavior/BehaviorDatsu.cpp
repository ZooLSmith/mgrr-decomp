// src/behavior/BehaviorDatsu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6130..00AE8B50, 34 functions

#include "mgrr.h"
#include "BehaviorDatsu.h"

// 00AA6130  BehaviorDatsu::BehaviorDatsu  size=61  [class]
undefined4 * __fastcall BehaviorDatsu::BehaviorDatsu(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x288] = 0;
  cEspControler::cEspControler();
  return param_1;
}

// 00AA6170  BehaviorDatsu::vf04  size=6  [class]
undefined * BehaviorDatsu::vf04(void)

{
  return &DAT_01be9ca8;
}

// 00AB66E0  BehaviorDatsu::destruct  size=30  [class]
undefined4 __thiscall BehaviorDatsu::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC66D0  BehaviorDatsu::vf48  size=1  [class]
void BehaviorDatsu::vf48(void)

{
  return;
}

// 00AC66E0  FUN_00ac66e0  size=221  [callgraph]
void __fastcall FUN_00ac66e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 1) {
    uVar3 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar3);
    param_1[0x240] = 0x43560000;
    param_1[0x23f] = 0;
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,0,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 2) {
    if (iVar2 != 3) {
      return;
    }
    if ((float)param_1[0x241] <= 6000.0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  iVar2 = FUN_00d46780();
  if ((iVar2 == 0) && (250.0 < (float)param_1[0x241])) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x244] = 0;
    (*pcVar1)();
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00AC67C0  FUN_00ac67c0  size=222  [callgraph]
void __fastcall FUN_00ac67c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x900) = 0x43560000;
    FUN_00a9f2b0(&DAT_0163b604,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(undefined4 **)(param_1 + 0x76c) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x76c) = 1;
      FUN_009fb990();
      *(undefined4 *)(*(int *)(param_1 + 0x76c) + 0xbac) = 1;
      *(undefined4 *)(param_1 + 0x960) = 0;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (*(float *)(param_1 + 0x904) <= 6000.0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  if (250.0 < *(float *)(param_1 + 0x904)) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x910) = 0;
  }
  return;
}

// 00AC68A0  FUN_00ac68a0  size=221  [callgraph]
void __fastcall FUN_00ac68a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      FUN_00a7c8a0();
      FUN_00a8caf0(1,0,0,0);
    }
    *(undefined4 *)(param_1 + 0x900) = 0x43560000;
    FUN_00a9f2b0(&DAT_0163b604,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (*(float *)(param_1 + 0x904) <= 6000.0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  if (250.0 < *(float *)(param_1 + 0x904)) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x910) = 0;
  }
  return;
}

// 00AC6980  FUN_00ac6980  size=207  [callgraph]
void __fastcall FUN_00ac6980(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 1) {
    uVar3 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar3);
    param_1[0x240] = 0x43560000;
    param_1[0x23f] = 0;
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,0,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 2) {
    if (iVar2 != 3) {
      return;
    }
    if ((float)param_1[0x241] <= 6000.0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  if (250.0 < (float)param_1[0x241]) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x244] = 0;
    (*pcVar1)();
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00AC6A70  FUN_00ac6a70  size=1114  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00ac6cb6) */
/* WARNING: Removing unreachable block (ram,0x00ac6bf7) */
/* WARNING: Removing unreachable block (ram,0x00ac6d78) */

void __fastcall FUN_00ac6a70(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int local_8;
  
  fVar11 = (float10)FUN_00e049b0();
  fVar11 = fVar11 + (float10)*(float *)(param_1 + 0x880);
  *(float *)(param_1 + 0x880) = (float)fVar11;
  if ((float10)30.0 < fVar11) {
    *(undefined4 *)(param_1 + 0x880) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x87c)) {
  default:
    uVar7 = 0xff00ffff;
    break;
  case 1:
    uVar7 = 0xffff0000;
    break;
  case 2:
    uVar7 = 0xffffff00;
    break;
  case 3:
    uVar7 = 0xffffffff;
    break;
  case 4:
    fVar12 = (float10)*(float *)(param_1 + 0x880) * (float10)0.033333335 * (float10)6.2831855;
    fVar13 = (float10)fsin((float10)5.2359877 + fVar12);
    fVar11 = (float10)1;
    fVar14 = (float10)136.0;
    fVar15 = (float10)fsin(fVar12 + (float10)3.1415927);
    fVar12 = (float10)fsin(fVar12 + (float10)1.0471976);
    uVar7 = (((int)ROUND((fVar13 + fVar11) * fVar14) & 0xffU | 0xffffff00) << 8 |
            (int)ROUND((fVar15 + fVar11) * fVar14) & 0xffU) << 8 |
            (int)ROUND(fVar14 * (fVar12 + fVar11)) & 0xffU;
  }
  iVar8 = 0;
  if (*(int *)(param_1 + 0x870) == 0) {
    local_8 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar8) + 0x40);
        iVar9 = *(int *)(param_1 + 800) + iVar8;
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"blue_dai"), iVar3 != 0)) {
          *(float *)(iVar9 + 0x1c) = (float)(uVar7 >> 0x18) * 0.003921569;
          *(float *)(iVar9 + 0x10) = (float)(uVar7 >> 0x10 & 0xff) * 0.003921569;
          *(float *)(iVar9 + 0x14) = (float)(uVar7 >> 8 & 0xff) * 0.003921569;
          *(float *)(iVar9 + 0x18) = (float)(uVar7 & 0xff) * 0.003921569;
        }
        local_8 = local_8 + 1;
        iVar8 = iVar8 + 0x70;
      } while (local_8 < *(short *)(param_1 + 0x324));
    }
    iVar8 = 0;
    local_8 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar8) + 0x40);
        iVar9 = *(int *)(param_1 + 800) + iVar8;
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"blue_tyu"), iVar3 != 0)) {
          *(float *)(iVar9 + 0x1c) = (float)(uVar7 >> 0x18) * 0.003921569;
          *(float *)(iVar9 + 0x10) = (float)(uVar7 >> 0x10 & 0xff) * 0.003921569;
          *(float *)(iVar9 + 0x14) = (float)(uVar7 >> 8 & 0xff) * 0.003921569;
          *(float *)(iVar9 + 0x18) = (float)(uVar7 & 0xff) * 0.003921569;
        }
        local_8 = local_8 + 1;
        iVar8 = iVar8 + 0x70;
      } while (local_8 < *(short *)(param_1 + 0x324));
    }
  }
  else if ((*(int *)(param_1 + 0x870) == 3) && (local_8 = 0, 0 < *(short *)(param_1 + 0x324))) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar8) + 0x40);
      iVar9 = *(int *)(param_1 + 800) + iVar8;
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"light_mesh"), iVar3 != 0)) {
        *(float *)(iVar9 + 0x1c) = (float)(uVar7 >> 0x18) * 0.003921569;
        *(float *)(iVar9 + 0x10) = (float)(uVar7 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar9 + 0x14) = (float)(uVar7 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar9 + 0x18) = (float)(uVar7 & 0xff) * 0.003921569;
      }
      local_8 = local_8 + 1;
      iVar8 = iVar8 + 0x70;
    } while (local_8 < *(short *)(param_1 + 0x324));
  }
  if (*(int *)(param_1 + 0x884) == 0) {
    iVar8 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar3 = 0;
      do {
        pbVar4 = *(byte **)(*(int *)(iVar3 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
        if (pbVar4 != (byte *)0x0) {
          pbVar5 = &DAT_0169f640;
          do {
            bVar2 = *pbVar4;
            bVar10 = bVar2 < *pbVar5;
            if (bVar2 != *pbVar5) {
LAB_00ac6e40:
              iVar9 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00ac6e45;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar10 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_00ac6e40;
            pbVar4 = pbVar4 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar2 != 0);
          iVar9 = 0;
LAB_00ac6e45:
          if (iVar9 == 0) {
            puVar1 = (uint *)(iVar3 + *(int *)(param_1 + 800) + 0x38);
            *puVar1 = *puVar1 | 1;
          }
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar8 < *(short *)(param_1 + 0x324));
    }
    iVar8 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar3 = 0;
      do {
        pbVar4 = *(byte **)(*(int *)(iVar3 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
        if (pbVar4 != (byte *)0x0) {
          pcVar6 = "blue_dai";
          do {
            bVar2 = *pbVar4;
            bVar10 = bVar2 < (byte)*pcVar6;
            if (bVar2 != *pcVar6) {
LAB_00ac6eb0:
              iVar9 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00ac6eb5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar10 = bVar2 < (byte)pcVar6[1];
            if (bVar2 != pcVar6[1]) goto LAB_00ac6eb0;
            pbVar4 = pbVar4 + 2;
            pcVar6 = pcVar6 + 2;
          } while (bVar2 != 0);
          iVar9 = 0;
LAB_00ac6eb5:
          if (iVar9 == 0) {
            puVar1 = (uint *)(iVar3 + *(int *)(param_1 + 800) + 0x38);
            *puVar1 = *puVar1 | 1;
          }
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar8 < *(short *)(param_1 + 0x324));
    }
  }
  return;
}

// 00AC6EF0  FUN_00ac6ef0  size=50  [callgraph]
void __fastcall FUN_00ac6ef0(int param_1)

{
  undefined1 local_20 [28];
  
  if ((*(int *)(param_1 + 0x618) != 1) && (*(int *)(param_1 + 0x910) != 0)) {
    FUN_00d9fa80(local_20,param_1 + 0x50);
  }
  return;
}

// 00AC6F30  FUN_00ac6f30  size=43  [callgraph]
void __fastcall FUN_00ac6f30(int param_1)

{
  FUN_00a8caf0(1,0,0,0);
  if (*(int *)(param_1 + 0x870) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x76c) + 0xbac) = 0;
  }
  return;
}

// 00AC6F90  FUN_00ac6f90  size=42  [callgraph]
void __thiscall FUN_00ac6f90(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x9a0) = *param_2;
  *(undefined4 *)(param_1 + 0x9a4) = param_2[1];
  *(undefined4 *)(param_1 + 0x9a8) = param_2[2];
  *(undefined4 *)(param_1 + 0x9ac) = param_2[3];
  return;
}

// 00AC6FC0  FUN_00ac6fc0  size=128  [callgraph]
void __fastcall FUN_00ac6fc0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x87c)) {
  default:
    FUN_00a8c9b0(0,0,0,0);
    return;
  case 1:
    FUN_00a8c9b0(0,1,0,0);
    return;
  case 2:
    FUN_00a8c9b0(0,2,0,0);
    return;
  case 3:
    FUN_00a8c9b0(0,4,0,0);
    return;
  case 4:
    FUN_00a8c9b0(0,3,0,0);
    return;
  }
}

// 00ACDF10  BehaviorDatsu::startup  size=845  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall BehaviorDatsu::startup(int *param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float fStack_20;
  int iStack_14;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      param_1[0x241] = 0;
      param_1[0x243] = -0x40800000;
      param_1[0x244] = 1;
      param_1[0x246] = 0x41f00000;
      param_1[0x245] = 0;
      param_1[0x23f] = 0;
      param_1[0x242] = 0;
      param_1[0x259] = 0;
      FUN_00a7c970(0);
      param_1[0x25b] = 0;
      param_1[0x25c] = -1;
      param_1[0x24c] = 0;
      param_1[0x262] = 0;
      if ((undefined4 *)param_1[0x1db] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x1db] = 0;
      }
      param_1[0x26c] = 0;
      param_1[0x268] = 0;
      param_1[0x269] = 0;
      param_1[0x26a] = 0;
      local_2c = 1;
      param_1[0x26b] = 0x3f800000;
      local_28 = 1;
      param_1[0x27f] = 0x3f800000;
      local_24 = 0;
      param_1[0x27a] = 0x3f800000;
      param_1[0x275] = 0x3f800000;
      param_1[0x270] = 0x3f800000;
      param_1[0x27e] = 0;
      param_1[0x27d] = 0;
      param_1[0x27c] = 0;
      param_1[0x27b] = 0;
      param_1[0x279] = 0;
      param_1[0x278] = 0;
      param_1[0x277] = 0;
      param_1[0x276] = 0;
      param_1[0x274] = 0;
      param_1[0x273] = 0;
      param_1[0x272] = 0;
      param_1[0x271] = 0;
      param_1[0x280] = 0;
      iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
              StaticArray<Behavior::EffectIntegrationContainer,32>(&local_2c);
      if (iVar1 != 0) {
        param_1[0x259] = 0;
        EntitySystem::addDatsuEntity(param_1[0x13c]);
        (**(code **)(*param_1 + 0x20))();
        iVar1 = param_1[300];
        param_1[0x21c] = 0;
        if (iVar1 == 0x40520) {
          param_1[0x21c] = 1;
        }
        if (iVar1 == 0x40521) {
          param_1[0x21c] = 2;
        }
        if (iVar1 == 0x40520) {
          param_1[0x21c] = 3;
        }
        param_1[0x25f] = 0;
        param_1[0x260] = 0;
        uVar2 = FUN_00dde2a0(0,5);
        param_1[0x21e] = 0x42f00000;
        param_1[0x21f] = uVar2 & 0xffff;
        param_1[0x21d] = 0;
        param_1[0x221] = 0;
        param_1[0x24d] = 0;
        fVar3 = (float10)FUN_00dde300(0,0x41f00000);
        fStack_20 = (float)(fVar3 * (float10)0.017453292);
        fVar3 = (float10)FUN_00dde300(0,0x41f00000);
        param_1[0x250] = (int)fStack_20;
        param_1[0x251] = (int)(float)(fVar3 * (float10)0.017453292);
        param_1[0x252] = 0;
        param_1[0x253] = iStack_14;
        param_1[600] = 0;
        param_1[0x224] = 0;
        param_1[0x225] = 0;
        param_1[0x226] = 0;
        param_1[0x227] = 0x3f800000;
        *(undefined2 *)(param_1 + 0x228) = 0xffff;
        param_1[0x23a] = 0;
        param_1[0x239] = 0;
        param_1[0x238] = 0;
        param_1[0x237] = 0;
        param_1[0x235] = 0;
        param_1[0x234] = 0;
        param_1[0x233] = 0;
        param_1[0x232] = 0;
        param_1[0x230] = 0;
        param_1[0x22f] = 0;
        param_1[0x22e] = 0;
        param_1[0x22d] = 0;
        param_1[0x23b] = 0x3f800000;
        param_1[0x236] = 0x3f800000;
        param_1[0x231] = 0x3f800000;
        param_1[0x22c] = 0x3f800000;
        param_1[0x263] = 0;
        param_1[0x261] = 0;
        param_1[0x264] = 0x42c80000;
        param_1[0x265] = 0x42c80000;
        param_1[0x266] = 0x42c80000;
        FUN_00a7c950();
        iVar1 = _DAT_018a793c;
        param_1[0x286] = _DAT_018a793c;
        param_1[0x287] = iVar1;
        param_1[0x281] = 1;
        *(undefined2 *)(param_1 + 0x282) = 0xffff;
        param_1[0x283] = -1;
        param_1[0x284] = -1;
        param_1[0x289] = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 00ACE260  BehaviorDatsu::vf44  size=53  [class]
void __fastcall BehaviorDatsu::vf44(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0xa20);
  FUN_00ac6fc0();
  FUN_00a8c820();
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 00ACE2A0  FUN_00ace2a0  size=38  [between]
void __fastcall FUN_00ace2a0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x870)) {
  default:
    FUN_00ac66e0();
    return;
  case 1:
    FUN_00ac67c0();
    return;
  case 2:
    FUN_00ac68a0();
    return;
  case 3:
    FUN_00ac6980();
    return;
  }
}

// 00ACE300  BehaviorDatsu::updateSuicideDefault  size=74  [class]
void __fastcall BehaviorDatsu::updateSuicideDefault(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x61c) = 1;
  iVar1 = FUN_00a81410(*(undefined4 *)(param_1 + 0x4f0));
  if (iVar1 != 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  FUN_00dd5650(&DAT_016a012c);
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00ACE350  BehaviorDatsu::updateSuicideMechanical  size=74  [class]
void __fastcall BehaviorDatsu::updateSuicideMechanical(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x61c) = 1;
  iVar1 = FUN_00a81410(*(undefined4 *)(param_1 + 0x4f0));
  if (iVar1 != 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  FUN_00dd5650(&DAT_016a0164);
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00ACE3A0  BehaviorDatsu::updateSuicideMechanicalCase  size=74  [class]
void __fastcall BehaviorDatsu::updateSuicideMechanicalCase(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x61c) = 1;
  iVar1 = FUN_00a81410(*(undefined4 *)(param_1 + 0x4f0));
  if (iVar1 != 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  FUN_00dd5650(&DAT_016a01a0);
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00ACE3F0  BehaviorDatsu::updateSuicideMechanicalCaseOff  size=74  [class]
void __fastcall BehaviorDatsu::updateSuicideMechanicalCaseOff(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x61c) = 1;
  iVar1 = FUN_00a81410(*(undefined4 *)(param_1 + 0x4f0));
  if (iVar1 != 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  FUN_00dd5650(&DAT_016a01e0);
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00ACE440  FUN_00ace440  size=95  [callgraph]
void __fastcall FUN_00ace440(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x908) == 0) {
    fVar1 = *(float *)(param_1 + 0x904) + 1.0;
    *(float *)(param_1 + 0x904) = fVar1;
    if ((*(int *)(param_1 + 0x910) != 0) && (5940.0 < fVar1)) {
      *(undefined4 *)(param_1 + 0x910) = 0;
      iVar2 = FUN_00a81410(*(undefined4 *)(param_1 + 0x4f0));
      if (iVar2 != 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
        return;
      }
    }
  }
  return;
}

// 00ACE4A0  FUN_00ace4a0  size=227  [callgraph]
void __fastcall FUN_00ace4a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0x262] != 0) {
    FUN_00a9e0d0(param_1[0x13c]);
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      iVar2 = param_1[0x23f];
      iVar3 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar3 + 0x98,iVar2,0);
    }
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x23f] = -1;
    (*pcVar1)();
    FUN_00a8caf0(2,0,0,0);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      FUN_00a7c8a0();
      FUN_00a8caf0(2,0,0,0);
    }
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 0x3c))(100);
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 0x48))();
    FUN_00ac6fc0();
    param_1[0x262] = 0;
  }
  return;
}

// 00AD2EA0  BehaviorDatsu::updateWaitMechanicalCase  size=361  [class]
void __fastcall BehaviorDatsu::updateWaitMechanicalCase(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    iVar3 = FUN_00a82090("mechanicalDatsu",0x40520,0);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00a7c940(param_1 + 0x25a);
      FUN_00a7c960(&local_4);
      *(int *)(iVar3 + 0x96c) = param_1[0x25b];
      *(int *)(iVar3 + 0x974) = param_1[0x25d];
      *(int *)(iVar3 + 0x970) = param_1[0x25c];
      *(int *)(iVar3 + 0x978) = param_1[0x25e];
      if (param_1[0x23c] != 0) {
        iVar1 = param_1[0x23d];
        *(undefined4 *)(iVar3 + 0x8f0) = 1;
        *(int *)(iVar3 + 0x8f4) = iVar1;
      }
      FUN_00a8caf0(0,0,0,0);
    }
    (**(code **)(*param_1 + 0x1c))();
    FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (param_1[0x21d] != 3) {
    return;
  }
  param_1[0x244] = 0;
  iVar3 = FUN_00a81410(param_1[0x13c]);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016a0294);
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00AD3010  BehaviorDatsu::updateSuicideDefault_2  size=116  [class]
void __fastcall BehaviorDatsu::updateSuicideDefault_2(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x870)) {
  case 0:
    updateSuicideDefault();
    return;
  case 1:
    updateSuicideMechanical();
    return;
  case 2:
    updateSuicideMechanicalCase();
    return;
  case 3:
    updateSuicideMechanicalCaseOff();
    return;
  }
  if (*(int *)(param_1 + 0x61c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x61c) = 1;
  iVar1 = FUN_00a81410(*(undefined4 *)(param_1 + 0x4f0));
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016a012c);
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00AE4000  FUN_00ae4000  size=342  [callgraph]
void __fastcall FUN_00ae4000(int param_1)

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
  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = *(int *)(param_1 + 0x870);
  if (iVar10 != 0) {
    if (iVar10 == 2) {
      FUN_00ae11f0();
      if (*(int *)(param_1 + 0x988) != 0) {
        return;
      }
      iVar10 = FUN_00a81330();
      if (iVar10 == 0) {
        return;
      }
      piVar11 = (int *)FUN_00a7c8a0();
      if (piVar11 == (int *)0x0) {
        return;
      }
      iVar10 = FUN_00a12210(0xffffffff);
      local_30 = *(undefined4 *)(iVar10 + 0x40);
      local_2c = *(undefined4 *)(iVar10 + 0x44);
      local_28 = *(undefined4 *)(iVar10 + 0x48);
      local_24 = *(undefined4 *)(iVar10 + 0x4c);
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
      fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar9));
      fVar13 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar13;
      local_1c = (float)fVar12;
      fVar12 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)*(float *)(iVar10 + 0x10) /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar12;
      (**(code **)(*piVar11 + 0x7c))(&local_30,&local_20);
      return;
    }
    if (iVar10 != 3) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x988) == 0) {
    FUN_00ae11f0();
  }
  return;
}

// 00AE4160  FUN_00ae4160  size=555  [callgraph]
void __fastcall FUN_00ae4160(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if (iVar1 == 1) {
    param_1[600] = 1;
    FUN_00a9f2b0(&DAT_0163b604,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
                    /* WARNING: Could not recover jumptable at 0x00ae436f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  if (iVar1 != 2) {
    return;
  }
  iVar1 = FUN_00a9f710(&DAT_0163b604);
  if (iVar1 == 0) {
    fVar4 = (float10)FUN_00e049b0();
  }
  else {
    fVar4 = (float10)2.0;
  }
  FUN_00a96030(0,(float)fVar4);
  if ((param_1[600] == 0) || (iVar1 = FUN_00a94ce0(0), iVar1 == 0)) goto LAB_00ae42c0;
  FUN_00a9e290(&DAT_0163bbb8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  iVar1 = FUN_00de4550("_1_0_clp.bxm",0);
  if (iVar1 != 0) {
    if (param_1[0x1db] == 0) {
      iVar2 = FUN_00dd3500(0xbe0,&DAT_01b7bd48);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_009fad80();
      }
      param_1[0x1db] = iVar2;
      if ((iVar2 == 0) && (FUN_00dd5650(&DAT_01665048,param_1[300]), param_1[0x1db] == 0))
      goto LAB_00ae4292;
    }
    uVar6 = 0x3f000000;
    piVar5 = param_1;
    uVar3 = FUN_00a7c800(param_1,0x3f000000);
    FUN_00a04230(iVar1,uVar3,piVar5,uVar6);
  }
LAB_00ae4292:
  if ((undefined4 *)param_1[0x1db] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1db] = 1;
    FUN_009fb990();
    *(undefined4 *)(param_1[0x1db] + 0xbac) = 1;
    param_1[600] = 0;
  }
LAB_00ae42c0:
  if (param_1[0x259] == 0) {
    (**(code **)(*param_1 + 0x1c))();
    param_1[0x259] = 1;
    FUN_00ae2430();
  }
  if (param_1[0x21d] != 3) {
    return;
  }
  param_1[0x244] = 0;
  iVar1 = FUN_00a81410(param_1[0x13c]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ae4314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  FUN_00dd5650(&DAT_016a03bc);
                    /* WARNING: Could not recover jumptable at 0x00ae432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}

// 00AE4390  FUN_00ae4390  size=195  [callgraph]
void __fastcall FUN_00ae4390(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x1c))();
    FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00a94ce0(0);
  if (param_1[0x259] == 0) {
    (**(code **)(*param_1 + 0x1c))();
    param_1[0x259] = 1;
    FUN_00ae2430();
  }
  if (param_1[0x21d] != 3) {
    return;
  }
  param_1[0x244] = 0;
  iVar1 = FUN_00a81410(param_1[0x13c]);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016a03bc);
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00AE4460  BehaviorDatsu::updateWaitMechanicalCaseOff  size=327  [class]
void __fastcall BehaviorDatsu::updateWaitMechanicalCaseOff(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x1c))();
    FUN_00a9e290(&DAT_0163b604,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a9f710(&DAT_0163b604);
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_00e049b0();
  }
  else {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)2.0 / fVar2;
  }
  FUN_00a96030(0,(float)fVar2);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) && (iVar1 = FUN_00a94c20(&DAT_0163b604), iVar1 != -1)) {
    FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  if (param_1[0x259] == 0) {
    (**(code **)(*param_1 + 0x1c))();
    param_1[0x259] = 1;
    FUN_00ae2430();
  }
  if (param_1[0x21d] != 3) {
    return;
  }
  param_1[0x244] = 0;
  iVar1 = FUN_00a81410(param_1[0x13c]);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016a0408);
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00AE45B0  FUN_00ae45b0  size=169  [callgraph]
void __thiscall FUN_00ae45b0(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00a94bc0(param_1[0x23f],0x3f800000);
  FUN_00a8c5f0(param_2,*(undefined4 *)(param_3 + 0x4f0),param_1[0x13c],0x700,param_1[0x25f]);
  param_1[0x240] = 0x43560000;
  iVar2 = FUN_00a959f0(0);
  pcVar1 = *(code **)(*param_1 + 0x1c);
  param_1[0x241] = (int)(float)iVar2;
  (*pcVar1)();
  FUN_00ae2430();
  if ((undefined4 *)param_1[0x1db] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1db] = 1;
    FUN_009fb990();
  }
  param_1[0x262] = 1;
  if (param_1[0x21c] == 0) {
    param_1[0x187] = 1;
  }
  return;
}

// 00AE4660  FUN_00ae4660  size=507  [callgraph]
void __thiscall FUN_00ae4660(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_14;
  
  FUN_00a94bc0(param_1[0x23f],0x3f800000);
  iVar3 = param_1[0x13c];
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x870) == 2)) {
      FUN_00a7c940(iVar5 + 0x8f8);
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a7c940(iVar5 + 0x8f8);
        iVar3 = FUN_00a81330();
      }
    }
  }
  uVar4 = 0x700;
  if ((DAT_018b9174 & 0xf00) == 0xc00) {
    uVar4 = 0x730;
  }
  FUN_00a8c5f0(param_2,*(undefined4 *)(param_3 + 0x4f0),iVar3,uVar4,param_1[0x25f]);
  iVar3 = *(int *)(iVar5 + 0x870);
  if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) {
    iVar3 = FUN_00a943e0(param_2);
    *(undefined4 *)(iVar3 + 0x20) = 0x3fc90fdb;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = local_14;
  }
  param_1[0x240] = 0x43560000;
  iVar3 = FUN_00a959f0(0);
  pcVar1 = *(code **)(*param_1 + 0x1c);
  param_1[0x241] = (int)(float)iVar3;
  (*pcVar1)();
  FUN_00ae2430();
  if (param_1[0x1db] == 0) goto LAB_00ae4838;
  if (param_1[0x21c] == 0) {
    iVar3 = FUN_00de4550("_0_0_clp.bxm",0);
    if (iVar3 != 0) {
      FUN_009ff9b0();
      if (param_1[0x1db] == 0) {
        FUN_00dd5650(&DAT_01665048,param_1[300]);
        if (param_1[0x1db] == 0) goto LAB_00ae4807;
      }
      uVar7 = 0x3f000000;
      piVar6 = param_1;
      uVar4 = FUN_00a7c800(param_1,0x3f000000);
      FUN_00a04230(iVar3,uVar4,piVar6,uVar7);
    }
  }
LAB_00ae4807:
  *(undefined4 *)param_1[0x1db] = 1;
  FUN_009fb990();
  iVar3 = FUN_00d466f0();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1[0x1db] + 0xbac) = 0;
  }
LAB_00ae4838:
  if ((param_1[0x21c] == 0) || (param_1[0x21c] == 1)) {
    param_1[0x187] = 1;
  }
  param_1[0x262] = 1;
  return;
}

// 00AE4860  FUN_00ae4860  size=796  [callgraph]
void __thiscall FUN_00ae4860(int param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_18;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar4 = (int)param_2;
  if (*(int *)(param_1 + 0x7b0) == 0) {
    return;
  }
  FUN_004066f0();
  if (param_4 == 0) {
    if (DAT_01885d68 == 1) {
      return;
    }
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    if (DAT_01b35fac == 0) {
      return;
    }
    if (DAT_01885db8 != 0) {
      return;
    }
    FUN_00dd7320();
    return;
  }
  *(uint *)(param_1 + 0xa4c) = *(uint *)(param_1 + 0xa4c) & 0xfffffffe;
  iVar2 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
            StaticArray<RigidBodyList::ConnectMap,256>();
  }
  piVar1 = param_3;
  *(undefined4 *)(param_1 + 0xa0c + (int)param_2 * 4) = uVar3;
  FUN_00a8c4b0((short)*param_3,0);
  if (param_4 != 0) {
    local_18 = param_4;
    iVar2 = *piVar1;
    iVar8 = -1;
    param_2 = param_3;
    do {
      iVar7 = iVar2;
      param_2 = param_2 + 1;
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x28))(&param_4,iVar7);
      if (param_4 != 0) {
        if (*(int *)(param_1 + 0x330) == 0) {
          uStack_10 = 0xfff;
        }
        else {
          uStack_10 = FUN_00a06de0(iVar7);
        }
        if (iVar8 == -1) {
          uStack_c = 0xffffffff;
        }
        else if (*(int *)(param_1 + 0x330) == 0) {
          uStack_c = 0xfff;
        }
        else {
          uStack_c = FUN_00a06de0(iVar8);
        }
        uStack_8 = FUN_00915990(9);
        uStack_4 = 0;
        FUN_0091d1d0(param_4,auStack_14);
        FUN_00915420();
        FUN_01006000();
        FUN_00916360();
      }
      local_18 = local_18 + -1;
      iVar2 = *param_2;
      iVar8 = iVar7;
    } while (local_18 != 0);
  }
  if (*(int *)(*(int *)(param_1 + 0xa0c + iVar4 * 4) + 0xc) < 2) {
    FUN_00912660(&param_4,0);
    iVar4 = FUN_00915420();
    if (*(char *)(iVar4 + 8) == '\n') {
      pvVar5 = TlsGetValue(DAT_01f8fc4c);
      iVar4 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x20);
      *(undefined2 *)(iVar4 + 4) = 0x20;
      uVar3 = hkpSphereShape::hkpSphereShape(0x3f000000);
      puVar6 = (undefined4 *)FUN_00912660(&param_3,0);
      (**(code **)(*(int *)*puVar6 + 0xc))(uVar3);
      goto LAB_00ae4afb;
    }
    iVar4 = FUN_00923500(param_1);
    if (iVar4 != 0) goto LAB_00ae4afb;
  }
  else {
    iVar2 = FUN_00923ff0(param_1);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016a0450);
      iVar2 = *(int *)(param_1 + 0xa0c + iVar4 * 4);
      if (iVar2 != 0) {
        lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
        FUN_00dd4920(iVar2);
        *(undefined4 *)(param_1 + 0xa0c + iVar4 * 4) = 0;
      }
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_00ae4b4e;
    }
LAB_00ae4afb:
    FUN_00912890(DAT_01885d20);
  }
  FUN_0091c6c0(0xb);
  FUN_0091afb0(0x80);
  FUN_00a8c500((short)*param_3,0);
  if (DAT_01885d68 == 1) {
    return;
  }
  iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00ae4b4e:
  piVar1 = (int *)(iVar4 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
  return;
}

// 00AE4B80  FUN_00ae4b80  size=678  [callgraph]
void __fastcall FUN_00ae4b80(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(0,1);
  uVar3 = FUN_00a8d2a0();
  iVar4 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    *(undefined4 *)(iVar4 + 0x594) = 0x3f8ccccd;
    *(undefined4 *)(iVar4 + 0x590) = 0x3f000000;
    *(undefined4 *)(iVar4 + 0x580) = 0xbfc90fdb;
    *(undefined4 *)(iVar4 + 0x584) = 0;
    *(undefined4 *)(iVar4 + 0x588) = 0;
    *(undefined4 *)(iVar4 + 0x58c) = local_164;
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    FUN_00d77c90(&local_170);
    FUN_00a93a00(iVar4,uVar3);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  uVar9 = 0;
  uVar3 = FUN_00a7c8a0(0);
  FUN_004039a0(4,uVar3,uVar9);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  uVar9 = 0;
  uVar3 = FUN_00a7c8a0(0);
  FUN_004039a0(6,uVar3,uVar9);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  piVar5 = (int *)FUN_00900480();
  puVar6 = (undefined4 *)FUN_009f8b60();
  uVar3 = (**(code **)(*piVar5 + 4))(param_1 + 0x50,0x3f800000,0xe,*puVar6,0);
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar3);
  FUN_00900bd0();
  piVar5 = (int *)FUN_00900480();
  uVar3 = (**(code **)(*piVar5 + 4))
                    (param_1 + 0x50,0x3fc00000,0x1d,*(undefined4 *)(param_1 + 0xb9c),0);
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar3);
  FUN_00900bd0();
  iVar4 = FUN_009f8d30();
  if (iVar4 != 0) {
    iVar4 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
              StaticArray<RigidBodyList::ConnectMap,256>();
    }
    *(undefined4 *)(param_1 + 0x7b4) = uVar3;
    FUN_009fdd80(uVar3);
    FUN_00923ff0(param_1);
    FUN_00917420();
    FUN_0091c6c0(0x1e);
    FUN_0091c760(*(undefined4 *)(param_1 + 0xb9c));
    FUN_00912890(DAT_01885d20);
  }
  iVar8 = 0;
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar7 = *(int *)(*(int *)(iVar2 + 0x60 + iVar8) + 0x40);
      if (iVar7 != 0) {
        iVar7 = FUN_00fdbbd0(iVar7,&DAT_0164ea4c);
        if (iVar7 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar4 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00AE4E30  FUN_00ae4e30  size=38  [callgraph]
void __fastcall FUN_00ae4e30(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x870)) {
  default:
    FUN_00ae4160();
    return;
  case 1:
    FUN_00ae4390();
    return;
  case 2:
    BehaviorDatsu::updateWaitMechanicalCase();
    return;
  case 3:
    BehaviorDatsu::updateWaitMechanicalCaseOff();
    return;
  }
}

// 00AE8B50  BehaviorDatsu::vf4C  size=198  [class]
void __fastcall BehaviorDatsu::vf4C(int *param_1)

{
  undefined1 auStack_20 [28];
  
  Behavior::vf4C();
  switch(param_1[0x186]) {
  case 0:
    FUN_00ae4e30();
    break;
  case 1:
    FUN_00ace2a0();
    break;
  case 2:
    updateSuicideDefault_2();
  }
  (**(code **)(*param_1 + 100))();
  FUN_00ace440();
  FUN_00ac6a70();
  FUN_00ae1c40();
  FUN_00ae4000();
  if (((param_1[0x24d] != 0) && ((*(byte *)(param_1 + 0x130) & 1) == 0)) && (param_1[0x2b2] == 0)) {
    FUN_00eaa6e0(0x3f800000,0);
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  if ((param_1[0x186] != 1) && (param_1[0x244] != 0)) {
    FUN_00d9fa80(auStack_20,param_1 + 0x14);
  }
  return;
}

