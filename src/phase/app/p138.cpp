// src/phase/app/p138.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47E20..00D70140, 9 functions

#include "mgrr.h"
#include "P138.h"

// 00D47E20  P138::vf2C  size=26  [class]
void __fastcall P138::vf2C(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x144);
  return;
}

// 00D47E40  P138::vf0C  size=1  [class]
void P138::vf0C(void)

{
  return;
}

// 00D47E50  P138::vf08  size=30  [class]
void __fastcall P138::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  return;
}

// 00D523A0  P138::vf28  size=70  [class]
void P138::vf28(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35000;
    (**(code **)(*piVar2 + 4))(&DAT_01b35000);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      FUN_00563510(param_1);
    }
  }
  return;
}

// 00D60A70  P138::vf14  size=3025  [class]
void __thiscall P138::vf14(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined *puVar17;
  undefined4 uVar18;
  uint uStack_9ac;
  uint uStack_9a8;
  undefined1 *local_9a4;
  undefined4 auStack_9a0 [8];
  undefined4 auStack_980 [8];
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined **ppuStack_950;
  undefined1 *puStack_94c;
  int iStack_948;
  undefined4 uStack_944;
  undefined1 auStack_940 [64];
  undefined4 auStack_900 [36];
  undefined4 uStack_870;
  undefined1 uStack_84c;
  undefined **ppuStack_830;
  undefined1 *puStack_82c;
  int iStack_828;
  undefined4 uStack_824;
  undefined1 auStack_820 [1024];
  undefined **ppuStack_420;
  int *piStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  int aiStack_410 [259];
  
  iVar9 = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  local_9a4 = param_1;
  iVar3 = FUN_00fdbbd0(param_3,"P138_START");
  if ((((iVar3 != 0) || (iVar3 = FUN_00fdbbd0(param_3,"P138_RE_START"), iVar3 != 0)) ||
      (iVar3 = FUN_00fdbbd0(param_3,"P138_WOLF"), iVar3 != 0)) ||
     (iVar3 = FUN_00fdbbd0(param_3,"P138_IN"), iVar3 != 0)) {
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x11b,0);
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x114,1);
    piVar4 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar4 + 0x20))("bridge_ba0036_006_appear",0x11c);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x20))();
    }
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_HELI01_START");
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x11b,1);
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x114,0);
    EffectAreaScrSystem::SetEffectAreaEnable(0x100,4,0);
    DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
    DAT_01bea090 = DAT_01bea090 & 0xfffbffff;
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_WOLF");
  if (iVar3 != 0) {
    uVar5 = FUN_00d45980();
    *(undefined4 *)(param_1 + 0x134) = uVar5;
    *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    uVar5 = FUN_00e678d0(2,0xc004,0xffffffff);
    iVar3 = FUN_00e7a6e0(uVar5);
    if (iVar3 == 0) {
      uVar5 = FUN_00e678d0(2,0xc004,0xffffffff);
      FUN_00e80d00(uVar5);
    }
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_MOVIE");
  if (iVar3 != 0) {
    uVar5 = FUN_00e678d0(2,0xc004,0xffffffff);
    FUN_00e80d00(uVar5);
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_BREAKDOWN_1");
  if (iVar3 != 0) {
    DAT_01bea094 = DAT_01bea094 | 0x100;
    DAT_01bea090 = DAT_01bea090 | 0x40000;
    if (*(int *)(param_1 + 0x11c) == 0) {
      iVar3 = TelegraphNetContents::TelegraphNetContents(0,&DAT_01b7bd48);
      pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 8);
      *(int *)(param_1 + 0x11c) = iVar3;
      uStack_9ac = *(uint *)(iVar3 + 8);
      (*pcVar1)(&uStack_9ac);
    }
    uStack_9ac = FUN_00a7f860();
    if (0 < (int)uStack_9ac) {
      do {
        iVar3 = FUN_00a7f870(iVar9);
        if ((iVar3 != 0) && (pfVar6 = (float *)FUN_00a7c8b0(), *pfVar6 <= 180.0)) {
          iVar3 = FUN_00a7c8a0();
          uStack_9a8 = *(uint *)(iVar3 + 0x4b4);
          iVar3 = FUN_009f94a0(uStack_9a8);
          if ((iVar3 != 0) ||
             ((iVar3 = FUN_009f9460(uStack_9a8), iVar3 != 0 ||
              (iVar3 = FUN_009f9480(uStack_9a8), iVar3 != 0)))) {
            FUN_00a805f0();
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uStack_9ac);
    }
    FUN_00cad200(1);
    DAT_01bea090 = DAT_01bea090 | 0x8000;
    FUN_00c19400(10,0);
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_BREAKDOWN_2");
  if (iVar3 != 0) {
    DAT_01bea094 = DAT_01bea094 | 0x100;
    DAT_01bea090 = DAT_01bea090 | 0x40000;
    FUN_00cad200(0);
    FUN_0118f7b0();
    uStack_870 = 0;
    uStack_84c = 5;
    auStack_900[0] = 0x14;
    piVar4 = (int *)FUN_00910da0();
    auStack_9a0[0] = 0x40b00000;
    auStack_9a0[1] = 0x42c80000;
    auStack_9a0[2] = 0x41f00000;
    uStack_960 = 0;
    uStack_95c = 0;
    uStack_958 = 0;
    auStack_980[0] = 0x433aab85;
    auStack_980[1] = 0x40a9eb85;
    auStack_980[2] = 0xc386d0a4;
    uVar5 = (**(code **)(*piVar4 + 4))
                      (&uStack_9ac,auStack_900,auStack_980,&uStack_960,auStack_9a0,1);
    FUN_00910ab0(uVar5);
    iVar3 = *(int *)(param_1 + 0x144);
    if (iVar3 != 0) {
      FUN_004066f0();
      uVar12 = *(uint *)(iVar3 + 0xc);
      puVar7 = (uint *)(-(uint)(uVar12 != 0) & uVar12);
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0xf;
      if (DAT_01885d68 != 1) {
        piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar4 = *piVar4 + -1;
        if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x144),4);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x144),0x20);
    FUN_00911ca0("programmabled");
    auStack_9a0[0] = 0xe0084;
    auStack_9a0[1] = 0xe0085;
    auStack_9a0[2] = 0xe0086;
    uStack_9a8 = 0;
    do {
      uVar12 = uStack_9a8;
      puStack_94c = auStack_940;
      iStack_948 = 0;
      uStack_944 = 0x10;
      ppuStack_950 = lib::StaticArray<EntityHandle,16>::vftable;
      FUN_00a7f4a0(auStack_9a0[uStack_9a8],&ppuStack_950);
      puVar10 = puStack_94c;
      if (puStack_94c != puStack_94c + iStack_948 * 4) {
        do {
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            piVar4 = (int *)FUN_00a7c8a0();
            if (piVar4 != (int *)0x0) {
              puVar17 = &DAT_01be9c5c;
              (**(code **)(*piVar4 + 4))(&DAT_01be9c5c);
              iVar3 = FUN_00dd6d80(puVar17);
              if (iVar3 != 0) {
                FUN_00ac7810();
              }
            }
            iVar3 = FUN_00a7c8a0();
            if (*(int *)(iVar3 + 0x7b0) != 0) {
              FUN_008f1600(0x20);
            }
          }
          puVar10 = puVar10 + 4;
          uVar12 = uStack_9a8;
          param_1 = local_9a4;
        } while (puVar10 != puStack_94c + iStack_948 * 4);
      }
      uStack_9a8 = uVar12 + 1;
    } while (uStack_9a8 < 3);
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_RE_START");
  if ((iVar3 != 0) || (iVar3 = FUN_00fdbbd0(param_3,"P138_IN"), param_1 = local_9a4, iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x120) = 1;
    auStack_9a0[0] = 0xf0033;
    auStack_9a0[1] = 0xf0034;
    auStack_9a0[2] = 0xf0035;
    auStack_9a0[3] = 0xf0036;
    uStack_9a8 = 0;
    do {
      puStack_82c = auStack_820;
      iStack_828 = 0;
      uStack_824 = 0x100;
      ppuStack_830 = lib::StaticArray<Entity*,256>::vftable;
      FUN_00a7f440(auStack_9a0[uStack_9a8],&ppuStack_830);
      local_9a4 = puStack_82c;
      if (puStack_82c != puStack_82c + iStack_828 * 4) {
        do {
          iVar3 = FUN_00a7c8a0();
          uStack_9ac = 0;
          if (0 < *(short *)(iVar3 + 0x324)) {
            iVar9 = 0;
            do {
              iVar2 = *(int *)(iVar3 + 800);
              iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar9) + 0x40);
              if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"_appear"), iVar8 != 0)) {
                puVar7 = (uint *)(iVar2 + 0x38 + iVar9);
                *puVar7 = *puVar7 & 0xfffffffe;
              }
              uStack_9ac = uStack_9ac + 1;
              iVar9 = iVar9 + 0x70;
            } while ((int)uStack_9ac < (int)*(short *)(iVar3 + 0x324));
          }
          local_9a4 = local_9a4 + 4;
        } while (local_9a4 != puStack_82c + iStack_828 * 4);
      }
      uStack_9a8 = uStack_9a8 + 1;
    } while (uStack_9a8 < 4);
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_HELI01_START");
  if (iVar3 != 0) {
    auStack_9a0[0] = 0xe0084;
    auStack_9a0[1] = 0xe0085;
    auStack_9a0[2] = 0xe0086;
    uStack_9ac = 0;
    do {
      uVar12 = uStack_9ac;
      puStack_94c = auStack_940;
      iStack_948 = 0;
      uStack_944 = 0x10;
      ppuStack_950 = lib::StaticArray<EntityHandle,16>::vftable;
      FUN_00a7f4a0(auStack_9a0[uStack_9ac],&ppuStack_950);
      puVar10 = puStack_94c;
      if (puStack_94c != puStack_94c + iStack_948 * 4) {
        do {
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            piVar4 = (int *)FUN_00a7c8a0();
            if (piVar4 != (int *)0x0) {
              puVar17 = &DAT_01be9c5c;
              (**(code **)(*piVar4 + 4))(&DAT_01be9c5c);
              iVar3 = FUN_00dd6d80(puVar17);
              if (iVar3 != 0) {
                FUN_00ac3f80();
              }
            }
            iVar3 = FUN_00a7c8a0();
            if (*(int *)(iVar3 + 0x7b0) != 0) {
              FUN_008f1760(0x20);
            }
          }
          puVar10 = puVar10 + 4;
          uVar12 = uStack_9ac;
        } while (puVar10 != puStack_94c + iStack_948 * 4);
      }
      uStack_9ac = uVar12 + 1;
    } while (uStack_9ac < 3);
    DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
    DAT_01bea090 = DAT_01bea090 & 0xfffbffff;
    iVar3 = FUN_00a7f600(0xf0033);
    if (iVar3 != 0) {
      uVar18 = 0x3f800000;
      uVar16 = 0x461c4000;
      uVar15 = 0x8000000;
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar5 = 0;
      puVar10 = &DAT_0163b604;
      FUN_00a7c8a0(&DAT_0163b604,0,0,0x3f800000,0x8000000,0x461c4000,0x3f800000);
      FUN_00a9e290(puVar10,uVar5,uVar13,uVar14,uVar15,uVar16,uVar18);
      iVar3 = FUN_00a7c8a0();
      uStack_9ac = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar9 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar9) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"_hide"), iVar8 != 0)) {
            puVar7 = (uint *)(iVar2 + 0x38 + iVar9);
            *puVar7 = *puVar7 & 0xfffffffe;
          }
          uStack_9ac = uStack_9ac + 1;
          iVar9 = iVar9 + 0x70;
        } while ((int)uStack_9ac < (int)*(short *)(iVar3 + 0x324));
      }
    }
    iVar3 = FUN_00a7f600(0xf0034);
    if (iVar3 != 0) {
      uVar18 = 0x3f800000;
      uVar16 = 0x461c4000;
      uVar15 = 0x8000000;
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar5 = 0;
      puVar10 = &DAT_01641bdc;
      FUN_00a7c8a0(&DAT_01641bdc,0,0,0x3f800000,0x8000000,0x461c4000,0x3f800000);
      FUN_00a9e290(puVar10,uVar5,uVar13,uVar14,uVar15,uVar16,uVar18);
      iVar3 = FUN_00a7c8a0();
      uStack_9ac = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar9 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar9) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"_hide"), iVar8 != 0)) {
            puVar7 = (uint *)(iVar2 + 0x38 + iVar9);
            *puVar7 = *puVar7 & 0xfffffffe;
          }
          uStack_9ac = uStack_9ac + 1;
          iVar9 = iVar9 + 0x70;
        } while ((int)uStack_9ac < (int)*(short *)(iVar3 + 0x324));
      }
    }
    iVar3 = FUN_00a7f600(0xf0035);
    if (iVar3 != 0) {
      uVar18 = 0x3f800000;
      uVar16 = 0x461c4000;
      uVar15 = 0x8000000;
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar5 = 0;
      puVar10 = &DAT_01663e34;
      FUN_00a7c8a0(&DAT_01663e34,0,0,0x3f800000,0x8000000,0x461c4000,0x3f800000);
      FUN_00a9e290(puVar10,uVar5,uVar13,uVar14,uVar15,uVar16,uVar18);
      iVar3 = FUN_00a7c8a0();
      uStack_9ac = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar9 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar9) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"_hide"), iVar8 != 0)) {
            puVar7 = (uint *)(iVar2 + 0x38 + iVar9);
            *puVar7 = *puVar7 & 0xfffffffe;
          }
          uStack_9ac = uStack_9ac + 1;
          iVar9 = iVar9 + 0x70;
        } while ((int)uStack_9ac < (int)*(short *)(iVar3 + 0x324));
      }
    }
    iVar3 = FUN_00a7f600(0xf0036);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x20))();
    }
    piVar4 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar4 + 0x20))("bridge_ba0036_006_appear",0x11c);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 0x1c))();
    }
    auStack_980[0] = 0xf0034;
    auStack_980[1] = 0xf0035;
    auStack_980[2] = 0xe0084;
    auStack_980[3] = 0xe0085;
    auStack_980[4] = 0xe0086;
    uVar12 = 0;
    do {
      puStack_82c = auStack_820;
      iStack_828 = 0;
      uStack_824 = 0x100;
      ppuStack_830 = lib::StaticArray<Entity*,256>::vftable;
      FUN_00a7f440(auStack_980[uVar12],&ppuStack_830);
      puVar10 = puStack_82c;
      if (puStack_82c != puStack_82c + iStack_828 * 4) {
        do {
          FUN_00a805f0();
          puVar10 = puVar10 + 4;
        } while (puVar10 != puStack_82c + iStack_828 * 4);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 5);
    DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
  }
  iVar3 = FUN_00fdbbd0(param_3,"P138_HELI01");
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00c18350();
    (**(code **)(*piVar4 + 0x5c))(0x11d);
    piVar4 = (int *)FUN_00c18350();
    (**(code **)(*piVar4 + 0x5c))(0x11e);
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x11d,0);
    piVar4 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar4 + 0x58))(0x11e,0);
  }
  piStack_41c = aiStack_410;
  iStack_418 = 0;
  uStack_414 = 0x100;
  ppuStack_420 = lib::StaticArray<Entity*,256>::vftable;
  FUN_00a7f440(0x40004,&ppuStack_420);
  piVar4 = piStack_41c;
  piVar11 = piStack_41c;
  if (piStack_41c != piStack_41c + iStack_418) {
    do {
      if (*piVar11 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar4 + 0x20))();
        piVar4 = piStack_41c;
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar4 + iStack_418);
  }
  iVar3 = FUN_009968d0(3);
  if (iVar3 != 0) {
    FUN_00c81e40(0x42);
  }
  return;
}

// 00D61660  P138::vf1C  size=133  [class]
void __thiscall P138::vf1C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00fdbbd0(param_3,"P138_BREAKDOWN_2");
  if (((iVar2 != 0) || (iVar2 = FUN_00fdbbd0(param_3,"P138_RE_START"), iVar2 != 0)) &&
     (*(int *)(param_1 + 0x11c) != 0)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x11c) + 8);
    FUN_008dc7e0(iVar2);
    piVar3 = *(int **)(param_1 + 0x10);
    piVar1 = piVar3 + *(int *)(param_1 + 0x14);
    for (; (piVar3 != piVar1 && (*piVar3 != iVar2)); piVar3 = piVar3 + 1) {
    }
    if ((piVar3 != (int *)0x0) &&
       (piVar3 != (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4))) {
      FUN_00c3e0f0(piVar3);
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}

// 00D616F0  P138::vf10  size=128  [class]
void __fastcall P138::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x11c) + 8);
    FUN_008dc7e0(iVar2);
    piVar3 = *(int **)(param_1 + 0x10);
    piVar1 = piVar3 + *(int *)(param_1 + 0x14);
    for (; (piVar3 != piVar1 && (*piVar3 != iVar2)); piVar3 = piVar3 + 1) {
    }
    if ((piVar3 != (int *)0x0) &&
       (piVar3 != (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4))) {
      FUN_00c3e0f0(piVar3);
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
  DAT_01bea090 = DAT_01bea090 & 0xfffb7fff;
  FUN_00cad200(0);
  FUN_00cc0bb0();
  return;
}

// 00D67470  P138::vf18  size=517  [class]
void __fastcall P138::vf18(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xc))();
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    piVar1 = (int *)FUN_00c13920();
    (**(code **)(*piVar1 + 0x28))(0);
    iVar2 = FUN_00a7c8a0();
    if (180.0 < *(float *)(iVar2 + 0x40)) {
      FUN_00d5ea40("P138_BREAKDOWN_1",1,0);
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x134);
  if ((iVar2 == -1) || (iVar3 = FUN_00d45980(), iVar2 != iVar3)) goto LAB_00d6757f;
  if (*(int *)(param_1 + 0x138) == -1) {
    iVar2 = FUN_00c19c00(0,0,0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4b0) == 0x20220)) {
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(iVar2 + 0x83c);
      }
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
    }
    goto LAB_00d6757f;
  }
  if (*(int *)(param_1 + 0x13c) == 0) {
LAB_00d6756d:
    if ((DAT_01bea090 & 0x40000000) == 0) goto LAB_00d6757f;
  }
  else if ((DAT_01bea090 & 0x40000000) == 0) {
    FUN_009412f0(*(int *)(param_1 + 0x138));
    goto LAB_00d6756d;
  }
  *(undefined4 *)(param_1 + 0x13c) = 1;
LAB_00d6757f:
  if (0.0 < *(float *)(param_1 + 0x130)) {
    fVar5 = (float10)FUN_00e03a90(0);
    fVar5 = (float10)*(float *)(param_1 + 0x130) - fVar5 * (float10)0.016666668;
    *(float *)(param_1 + 0x130) = (float)fVar5;
    if (fVar5 <= (float10)0) {
      *(float *)(param_1 + 0x130) = (float)(float10)0;
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
    }
  }
  iVar2 = FUN_00fdbbd0(&DAT_018b917c,"P138_HELI01");
  if ((iVar2 != 0) && ((DAT_01bea060 & 0x20000000) == 0)) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_00a7c8a0(), *(float *)(iVar2 + 0x44) <= -4.0 &&
        (iVar2 = FUN_00a7c8a0(), *(float *)(iVar2 + 0x40) <= 380.0)))) {
      FUN_00dd5650(&DAT_016be2b8);
      FUN_00d664e0(1);
    }
  }
  iVar2 = FUN_009968d0(3);
  if ((iVar2 == 0) && (iVar2 = FUN_00c81da0(0x42), iVar2 != 0)) {
    FUN_00996910(3);
  }
  return;
}

// 00D70140  P138::vf00  size=54  [class]
undefined4 * __thiscall P138::vf00(undefined4 *param_1,byte param_2)

{
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

