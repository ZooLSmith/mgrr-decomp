// src/phase/app/pa15.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47830..00D70020, 7 functions

#include "types.h"

// 00D47830  cPa15::vf0C  size=41  [class]
void __fastcall cPa15::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 0) {
    EffectAreaScrSystem::SetEffectAreaEnable(0xa00,0x14,1);
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  return;
}

// 00D47860  cPa15::vf18  size=1  [class]
void cPa15::vf18(void)

{
  return;
}

// 00D47870  cPa15::vf1C  size=14  [class]
void cPa15::vf1C(void)

{
  FUN_00e03ea0("btl_ray_ev");
  return;
}

// 00D514F0  cPa15::vf08  size=294  [class]
void __fastcall cPa15::vf08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  DAT_01bea094 = DAT_01bea094 | 0x1000000;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x44))(0,"M000F001_convex_RAY01");
  EffectAreaScrSystem::SetEffectAreaEnable(0xa00,10,0);
  uVar4 = 0xf0015;
  uVar2 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar3 = FUN_00a18d70(uVar2,uVar4);
  if (iVar3 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))();
    }
  }
  EffectAreaScrSystem::SetEffectAreaEnable(0xa00,8,0);
  FUN_00a33520(0,0xa00,5);
  FUN_00a33520(0,0xa00,0x11);
  FUN_00c81e90(0x2c);
  FUN_00c81e90(0x2d);
  FUN_00c81e90(0x2e);
  FUN_00c81e90(0x2f);
  FUN_00c81e90(0x30);
  FUN_00c81e90(0x31);
  FUN_00c81e90(0x32);
  FUN_00c81e90(0x33);
  FUN_00c81e90(0x34);
  return;
}

// 00D51620  cPa15::vf10  size=220  [class]
void __fastcall cPa15::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x124);
  DAT_01bea094 = DAT_01bea094 & 0xfcdfffff;
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  DAT_01bea090 = DAT_01bea090 & 0xfd7f3fff;
  iVar2 = FUN_00e03ea0("btl_ray02_3_end");
  if (DAT_018b9258 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(DAT_018b9258 + 4)) {
      piVar1 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
      do {
        if (*piVar1 == iVar2) {
          if (-1 < iVar4) {
            iVar2 = FUN_00e03ea0(&DAT_018b917c);
            if (DAT_018b9258 == 0) goto LAB_00d516e0;
            iVar3 = 0;
            if (*(int *)(DAT_018b9258 + 4) < 1) goto LAB_00d516e0;
            piVar1 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
            goto LAB_00d516d4;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 0xb;
      } while (iVar4 < *(int *)(DAT_018b9258 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbf8,"btl_ray02_3_end");
  return;
  while( true ) {
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0xb;
    if (*(int *)(DAT_018b9258 + 4) <= iVar3) break;
LAB_00d516d4:
    if (*piVar1 == iVar2) goto LAB_00d516e3;
  }
LAB_00d516e0:
  iVar3 = -1;
LAB_00d516e3:
  if ((iVar3 != iVar4) && (iVar3 <= iVar4)) {
    return;
  }
  piVar1 = (int *)FUN_00c13920();
                    /* WARNING: Could not recover jumptable at 0x00d516fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x84))();
  return;
}

// 00D66830  cPa15::vf14  size=2324  [__FILE__]
/* WARNING: Type propagation algorithm not settling */

void cPa15::vf14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined *puVar12;
  int local_534 [9];
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 auStack_4f0 [36];
  undefined4 uStack_460;
  undefined1 uStack_43c;
  undefined **ppuStack_420;
  undefined1 *puStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  undefined1 auStack_410 [1036];
  
  FUN_00d604d0(0);
  FUN_00a33520(0,0xa00,5);
  iVar1 = FUN_00e03ea0("start");
  if (DAT_018b9178 == iVar1) {
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x44))(1,&DAT_016be268);
  }
  iVar1 = FUN_00e03ea0("city_start");
  if (DAT_018b9178 == iVar1) {
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x44))(0,&DAT_016be268);
  }
  pcVar11 = "btl_ray01";
  uVar10 = 0;
  uVar3 = FUN_00e03ea0("btl_ray01",0,"btl_ray01");
  iVar1 = FUN_00d4f0b0(uVar3,uVar10,pcVar11);
  if (iVar1 == 0) {
    FUN_00c81e90(0x56);
  }
  iVar1 = FUN_00e03ea0("btl_ray01_start");
  if (DAT_018b9178 == iVar1) {
    DAT_01bea094 = DAT_01bea094 | 0x200000;
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x58))(0xa1b,0);
    local_534[1] = 0xe0055;
    local_534[2] = 0xe0092;
    local_534[3] = 0xd015a;
    local_534[4] = 0xe0203;
    local_534[5] = 0xd01a2;
    local_534[6] = 0xd01a1;
    uVar8 = 0;
    do {
      puStack_41c = auStack_410;
      iStack_418 = 0;
      uStack_414 = 0x100;
      ppuStack_420 = lib::StaticArray<Entity*,256>::vftable;
      FUN_00a7f440(local_534[uVar8 + 1],&ppuStack_420);
      puVar7 = puStack_41c;
      if (puStack_41c != puStack_41c + iStack_418 * 4) {
        do {
          piVar2 = (int *)FUN_00a7c8a0();
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x20))();
          }
          puVar7 = puVar7 + 4;
        } while (puVar7 != puStack_41c + iStack_418 * 4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 6);
    FUN_00d574a0(&LAB_00d59310,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app/pa15.cpp",0xc1
                );
  }
  iVar1 = FUN_00e03ea0("btl_ray_ev");
  if (DAT_018b9178 == iVar1) {
    FUN_00d574a0(&LAB_00d59440,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app/pa15.cpp",0xca
                );
  }
  iVar1 = FUN_00e03ea0("btl_ray01_end");
  if (DAT_018b9178 == iVar1) {
    DAT_01bea094 = DAT_01bea094 & 0xffdfffff;
  }
  iVar1 = FUN_00e03ea0("btl_ray02_1_start");
  if ((DAT_018b9178 == iVar1) && (iVar1 = FUN_00c13920(), iVar1 != 0)) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00c13920();
      (**(code **)(*piVar2 + 0x28))(0);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar12 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar12);
        if (iVar1 != 0) {
          piVar2[0x2dd] = 0;
        }
      }
    }
  }
  iVar1 = FUN_00e03ea0("city_start");
  if (DAT_018b9178 == iVar1) {
    DAT_01bea094 = DAT_01bea094 & 0xffdfffff;
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x58))(0xa1b,1);
    local_534[6] = 0xd01a1;
    uVar8 = 0;
    local_534[1] = 0xe0055;
    local_534[2] = 0xe0092;
    local_534[3] = 0xd015a;
    local_534[4] = 0xe0203;
    local_534[5] = 0xd01a2;
    do {
      puStack_41c = auStack_410;
      iStack_418 = 0;
      uStack_414 = 0x100;
      ppuStack_420 = lib::StaticArray<Entity*,256>::vftable;
      FUN_00a7f440(local_534[uVar8 + 1],&ppuStack_420);
      puVar7 = puStack_41c;
      if (puStack_41c != puStack_41c + iStack_418 * 4) {
        do {
          piVar2 = (int *)FUN_00a7c8a0();
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x1c))();
          }
          puVar7 = puVar7 + 4;
        } while (puVar7 != puStack_41c + iStack_418 * 4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 6);
  }
  iVar1 = FUN_00e03ea0("waterway_end");
  if (DAT_018b9178 == iVar1) {
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x44))(1,"M000F001_convex_RAY01");
  }
  iVar1 = FUN_00e03ea0("btl_ray02_2_start");
  if (((DAT_018b9178 != iVar1) && (iVar1 = FUN_00e03ea0("btl_ray02_2"), DAT_018b9178 != iVar1)) &&
     (iVar1 = FUN_00e03ea0("btl_ray02_2_end"), DAT_018b9178 != iVar1)) {
    DAT_01bea090 = DAT_01bea090 & 0xfdffffff;
  }
  iVar1 = FUN_00e03ea0("btl_ray02_1_start");
  if (DAT_018b9178 == iVar1) {
    (**(code **)(*(int *)(local_534[0] + 0x140) + 8))(0x41200000,0,0);
    uVar3 = FUN_00d574a0(&LAB_00d59490,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/pa15.cpp",0x126);
    *(undefined4 *)(local_534[0] + 0x134) = uVar3;
    FUN_00c81e90(2);
    FUN_00c81e90(3);
    FUN_00c81e90(4);
  }
  iVar1 = FUN_00e03ea0("btl_ray02_2_start");
  if (DAT_018b9178 == iVar1) {
    (**(code **)(*(int *)(local_534[0] + 0x140) + 8))(0x41200000,0,0);
    DAT_01bea094 = DAT_01bea094 | 0x2000000;
    iVar1 = *(int *)(local_534[0] + 0x134);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d574a0(FUN_00d59630,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/pa15.cpp",0x138);
    *(undefined4 *)(local_534[0] + 0x138) = uVar3;
    EffectAreaScrSystem::SetEffectAreaEnable(0xa00,8,1);
    FUN_00c81e90(3);
    FUN_00c81e90(4);
  }
  iVar1 = FUN_00e03ea0("btl_ray02_2_end");
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(local_534[0] + 0x134);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d574a0(FUN_00d60590,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/pa15.cpp",0x145);
    *(undefined4 *)(local_534[0] + 0x138) = uVar3;
    FUN_00c81e90(4);
  }
  iVar1 = FUN_00e03ea0("btl_ray02_3_start");
  if (DAT_018b9178 == iVar1) {
    (**(code **)(*(int *)(local_534[0] + 0x140) + 8))(0x41200000,0,0);
    iVar1 = *(int *)(local_534[0] + 0x134);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    iVar1 = *(int *)(local_534[0] + 0x138);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d574a0(FUN_00d59e90,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/pa15.cpp",0x153);
    *(undefined4 *)(local_534[0] + 0x13c) = uVar3;
    EffectAreaScrSystem::SetEffectAreaEnable(0xa00,8,1);
    FUN_00c81e90(4);
  }
  iVar1 = FUN_00e03ea0("start");
  if (DAT_018b9258 != 0) {
    iVar9 = 0;
    if (0 < *(int *)(DAT_018b9258 + 4)) {
      piVar2 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
      do {
        if (*piVar2 == iVar1) {
          if (-1 < iVar9) {
            iVar1 = FUN_00e03ea0(&DAT_018b917c);
            if (DAT_018b9258 == 0) goto LAB_00d67013;
            iVar6 = 0;
            if (*(int *)(DAT_018b9258 + 4) < 1) goto LAB_00d67013;
            piVar2 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
            goto LAB_00d67007;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar2 = piVar2 + 0xb;
      } while (iVar9 < *(int *)(DAT_018b9258 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbf8,"start");
  goto LAB_00d66eb8;
  while( true ) {
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 0xb;
    if (*(int *)(DAT_018b9258 + 4) <= iVar6) break;
LAB_00d67007:
    if (*piVar2 == iVar1) goto LAB_00d67016;
  }
LAB_00d67013:
  iVar6 = -1;
LAB_00d67016:
  if ((iVar6 == iVar9) || (iVar9 < iVar6)) {
    iVar1 = FUN_00e03ea0("waterway_start");
    if (DAT_018b9258 != 0) {
      iVar9 = 0;
      if (0 < *(int *)(DAT_018b9258 + 4)) {
        piVar2 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
        do {
          if (*piVar2 == iVar1) {
            if (-1 < iVar9) {
              iVar1 = FUN_00e03ea0(&DAT_018b917c);
              if (DAT_018b9258 == 0) goto LAB_00d670a3;
              iVar6 = 0;
              if (*(int *)(DAT_018b9258 + 4) < 1) goto LAB_00d670a3;
              piVar2 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
              goto LAB_00d67097;
            }
            break;
          }
          iVar9 = iVar9 + 1;
          piVar2 = piVar2 + 0xb;
        } while (iVar9 < *(int *)(DAT_018b9258 + 4));
      }
    }
    FUN_00dd5650(&DAT_016bcbf8,"waterway_start");
    uVar3 = 1;
    goto LAB_00d66eba;
  }
  goto LAB_00d66eb8;
  while( true ) {
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 0xb;
    if (*(int *)(DAT_018b9258 + 4) <= iVar6) break;
LAB_00d67097:
    if (*piVar2 == iVar1) goto LAB_00d670a6;
  }
LAB_00d670a3:
  iVar6 = -1;
LAB_00d670a6:
  if ((iVar6 == iVar9) || (iVar6 < iVar9)) {
    uVar3 = 1;
    goto LAB_00d66eba;
  }
LAB_00d66eb8:
  uVar3 = 0;
LAB_00d66eba:
  EffectAreaScrSystem::SetEffectAreaEnable(0xa00,0x14,uVar3);
  iVar1 = FUN_00fdbbd0(param_2,"waterway_start_readray");
  if (iVar1 != 0) {
    FUN_0118f7b0();
    uStack_460 = 0;
    uStack_43c = 5;
    auStack_4f0[0] = 0x14;
    piVar4 = (int *)FUN_00910da0();
    uStack_500 = 0x40c00000;
    uStack_4fc = 0x41a00000;
    uStack_4f8 = 0x41700000;
    uStack_510 = 0;
    uStack_50c = 0;
    uStack_508 = 0;
    local_534[1] = 0x432d0000;
    local_534[2] = 0x41dc0000;
    piVar2 = (int *)(local_534[0] + 0x124);
    local_534[3] = 0xc0a9999a;
    uVar3 = (**(code **)(*piVar4 + 4))
                      (local_534,auStack_4f0,local_534 + 1,&uStack_510,&uStack_500,1);
    FUN_00910ab0(uVar3);
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      if (DAT_01885d68 != 1) {
        iVar9 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        if ((*(int *)(iVar9 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar4 = (int *)(iVar9 + 4);
        *piVar4 = *piVar4 + 1;
      }
      uVar8 = *(uint *)(iVar1 + 0xc);
      puVar5 = (uint *)(-(uint)(uVar8 != 0) & uVar8);
      *puVar5 = *puVar5 | 0x200;
      puVar5[0xb] = 0xf;
      if (DAT_01885d68 != 1) {
        piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar4 = *piVar4 + -1;
        if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*piVar2,4);
    FUN_00917bd0(*piVar2,0x20);
    FUN_00911ca0("programmabled");
  }
  return;
}

// 00D70020  cPa15::vf00  size=65  [class]
undefined4 * __thiscall cPa15::vf00(undefined4 *param_1,byte param_2)

{
  cEspControler::~cEspControler();
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

