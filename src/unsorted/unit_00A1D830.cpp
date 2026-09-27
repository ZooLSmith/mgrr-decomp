// src/unsorted/unit_00A1D830.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1D830..00A1EF80, 13 functions

#include "types.h"

// 00A1D830  FUN_00a1d830  size=48  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00a1d830(void)

{
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  return &DAT_01b83af0;
}

// 00A1D860  FUN_00a1d860  size=364  [run]
undefined4 FUN_00a1d860(void)

{
  int iVar1;
  
  iVar1 = FUN_00ddb3c0();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00df8ce0(0);
  FUN_00dda270(0x447a0000,0x43480000,0x44160000,0);
  FUN_00dda270(0x447a0000,0x43480000,0x44160000,1);
  FUN_00dda270(0x447a0000,0x42480000,0x42c80000,2);
  FUN_00dda270(0x447a0000,0x42480000,0x42c80000,3);
  FUN_00ddafc0(&DAT_01b7b850);
  FUN_00ddafc0(&DAT_01b7b880);
  FUN_00ddafc0(&DAT_01b7b8b0);
  FUN_00ddafc0(&DAT_01b7b8e0);
  FUN_00ddafc0(&DAT_01b7b910);
  FUN_00ddafc0(&DAT_01b7b940);
  FUN_00ddafc0(&DAT_01b7b970);
  FUN_00ddafc0(&DAT_01b7b9a0);
  FUN_00ddafc0(&DAT_01b7b9d0);
  FUN_00ddafc0(&DAT_01b7ba00);
  FUN_00ddafc0(&DAT_01b7ba30);
  FUN_00ddafc0(&DAT_01b7ba60);
  FUN_00ddafc0(&DAT_01b7ba90);
  FUN_00ddaff0(&DAT_01b7b7c0);
  FUN_00ddb020(&DAT_01b7b798);
  FUN_00ddafc0(&DAT_01b7bac0);
  FUN_00dda410(0);
  return 1;
}

// 00A1D9E0  FUN_00a1d9e0  size=1835  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1d9e0(uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  HWND hWnd;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float10 extraout_ST0;
  float10 extraout_ST1;
  tagRECT tStack_3c;
  RECT RStack_2c;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  uint local_10;
  float *pfStack_c;
  float fStack_8;
  int local_4;
  
  if (param_1 == 0) {
    iVar3 = FUN_00df7fd0();
    FUN_00dda2f0(-(uint)(iVar3 != 0) & DAT_01b77e3c);
    return;
  }
  bVar12 = (DAT_01bea060 & 0x1000) != 0;
  local_10 = (uint)!bVar12;
  bVar14 = (char)DAT_01bea060 < '\0';
  if (bVar14) {
    local_10 = 0;
  }
  iVar3 = FUN_00e6b910();
  bVar13 = iVar3 != 0;
  if (bVar13) {
    local_10 = 0;
  }
  iVar3 = FUN_00932720();
  if (iVar3 - 0xf00U < 0x100) {
    FUN_00df8ce0();
    ClipCursor((RECT *)0x0);
    return;
  }
  iVar3 = FUN_00df7c00(1);
  if (iVar3 != 0) {
    FUN_00ddafc0(&DAT_01b7bac0);
    return;
  }
  DAT_01b83b4c = DAT_01b83b50;
  param_1 = 0;
  if ((int)DAT_01b77e80 < 0) {
    uVar7 = DAT_01b7b798 & DAT_01b77e80 & 0x7fffffff;
  }
  else {
    uVar7 = FUN_00dd93a0(DAT_01b77e80);
  }
  DAT_01b83b50 = (uint)(uVar7 != 0);
  iVar3 = FUN_00c13920();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar3 != 0) {
      uVar5 = FUN_00a7c8a0();
      piVar4 = (int *)FUN_00412580(uVar5);
      if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x32c))(), iVar3 != 0)) {
        DAT_01b83b50 = 1;
      }
    }
  }
  iVar3 = DAT_01b77e30;
  local_4 = 0;
  if (((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) && (DAT_01b83b50 != 0)) {
    local_4 = 1;
    DAT_01b7bad8 = DAT_01b7b868;
    DAT_01b7badc = DAT_01b7b86c;
  }
  else {
    DAT_01b7bad0 = DAT_01b7b860;
    DAT_01b7bad4 = DAT_01b7b864;
  }
  FUN_00df8ce0(bVar13 || (bVar14 || bVar12));
  pfStack_c = (float *)FUN_00df84e0();
  fStack_1c = (float)(int)pfStack_c;
  pfStack_c = (float *)FUN_00df84d0();
  fStack_18 = (float)(int)pfStack_c;
  if (!bVar13 && (!bVar14 && !bVar12)) {
    fStack_8 = 1000.0;
    if ((int)DAT_01b77e70 < 0) {
      uVar7 = DAT_01b7b798 & DAT_01b77e70 & 0x7fffffff;
    }
    else {
      uVar7 = FUN_00dd93a0(DAT_01b77e70);
    }
    if (uVar7 != 0) {
      fStack_8 = 500.0;
    }
    if (((DAT_01b83b50 != 0) && (iVar6 = FUN_00a1d280(9), iVar6 != 0)) &&
       ((fStack_8 = 500.0, iVar3 == 1 || (param_1 = 0x1000, iVar3 == 3)))) {
      param_1 = 0x8000;
    }
    pfStack_c = (float *)&DAT_01b7bad8;
    if (local_4 == 0) {
      pfStack_c = (float *)&DAT_01b7bad0;
    }
    bVar12 = local_4 != 0;
    bVar14 = local_4 != 0;
    bVar13 = local_4 != 0;
    uStack_14 = (-(uint)(local_4 != 0) & 0xfff10000) + 0x100000;
    if ((int)DAT_01b77e60 < 0) {
      uVar7 = DAT_01b7b798 & DAT_01b77e60 & 0x7fffffff;
    }
    else {
      uVar7 = FUN_00dd93a0(DAT_01b77e60);
    }
    if (uVar7 == 0) {
      iVar3 = FUN_00a1d280(1);
      if (iVar3 != 0) {
        param_1 = param_1 | (-(uint)bVar14 & 0xff880000) + 0x800000;
        pfStack_c[1] = fStack_8;
      }
    }
    else {
      param_1 = param_1 | (-(uint)bVar12 & 0xffc40000) + 0x400000;
      pfStack_c[1] = -fStack_8;
    }
    if ((int)DAT_01b77e68 < 0) {
      uVar7 = DAT_01b7b798 & DAT_01b77e68 & 0x7fffffff;
    }
    else {
      uVar7 = FUN_00dd93a0(DAT_01b77e68);
    }
    if (uVar7 == 0) {
      iVar3 = FUN_00a1d280(3);
      if ((iVar3 != 0) && (iVar3 = FUN_00a1d280(2), iVar3 == 0)) {
        param_1 = param_1 | (-(uint)bVar13 & 0xffe20000) + 0x200000;
        *pfStack_c = fStack_8;
      }
    }
    else {
      iVar3 = FUN_00a1d280(3);
      if (iVar3 == 0) {
        param_1 = param_1 | uStack_14;
        *pfStack_c = -fStack_8;
      }
    }
    if (param_2 != 0) {
      fVar1 = _DAT_01b7b7a8 - _DAT_01b7b7b8;
      pfVar8 = (float *)&DAT_01b7bad0;
      fVar2 = _DAT_01b7b7ac - _DAT_01b7b7bc;
      if (local_4 == 0) {
        pfVar8 = (float *)&DAT_01b7bad8;
      }
      if (DAT_01b83b50 == 0) {
        *pfVar8 = fVar1 * 100.0;
        pfVar8[1] = fVar2 * 100.0;
      }
      else {
        if (DAT_01b83b4c == 0) {
          *pfVar8 = 0.0;
          pfVar8[1] = 0.0;
        }
        fVar1 = fVar1 * 2.0;
        fVar2 = fVar2 * 2.0;
        *pfVar8 = *pfVar8 + fVar1;
        pfVar8[1] = pfVar8[1] + fVar2;
        if (40000.0 <= fVar1 * fVar1 + fVar2 * fVar2) {
          *pfVar8 = fVar1;
          pfVar8[1] = fVar2;
        }
      }
    }
    iVar3 = FUN_00c13920();
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar4 + 0x28))(0);
      if (iVar3 != 0) {
        uVar5 = FUN_00a7c8a0();
        iVar3 = FUN_00412580(uVar5);
        if (iVar3 != 0) {
          iVar3 = 5;
          do {
            iVar6 = FUN_00a1d280(iVar3);
            if (iVar6 != 0) {
              uVar7 = FUN_00b79f30(iVar3);
              param_1 = param_1 | uVar7;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x17);
        }
      }
    }
  }
  if (((DAT_01bea070 & 0x80) == 0) && (param_1 != 0)) {
    uVar7 = 0;
  }
  else {
    if (DAT_01b7b850 == 0) goto LAB_00a1de74;
    iVar3 = FUN_00df7fd0();
    uVar7 = -(uint)(iVar3 != 0) & DAT_01b77e3c;
  }
  FUN_00dda2f0(uVar7);
LAB_00a1de74:
  iVar3 = local_4;
  if (((DAT_01bea070 & 0x80) == 0) && (local_10 != 0)) {
    if (local_4 == 0) {
      pfVar10 = (float *)&DAT_01b7b868;
      pfVar8 = (float *)&DAT_01b7bad8;
    }
    else {
      pfVar10 = (float *)&DAT_01b7b860;
      pfVar8 = (float *)&DAT_01b7bad0;
    }
    if (ABS(*pfVar10) < ABS(*pfVar8)) {
      *pfVar10 = *pfVar8;
      if (0.0 <= *pfVar8) {
        uVar7 = (-(uint)(local_4 != 0) & 0xffe20000) + 0x200000;
      }
      else {
        uVar7 = (-(uint)(local_4 != 0) & 0xfff10000) + 0x100000;
      }
      param_1 = param_1 | uVar7;
    }
    if (ABS(pfVar10[1]) < ABS(pfVar8[1])) {
      pfVar10[1] = pfVar8[1];
      if (0.0 <= pfVar8[1]) {
        param_1 = param_1 | (-(uint)(local_4 != 0) & 0xffc40000) + 0x400000;
      }
      else {
        param_1 = param_1 | (-(uint)(local_4 != 0) & 0xff880000) + 0x800000;
      }
    }
  }
  FUN_00dda210(&DAT_01b7bac0,DAT_01b7b850 | param_1);
  uVar7 = DAT_01bea070;
  if ((char)DAT_01bea070 < '\0') {
    FUN_00ddafc0(&DAT_01b7bac0);
    uVar7 = DAT_01bea070;
  }
  else {
    DAT_01b7b850 = DAT_01b7bac0;
    DAT_01b7b854 = DAT_01b7bac4;
    _DAT_01b7b858 = DAT_01b7bac8;
    _DAT_01b7b85c = DAT_01b7bacc;
    if (iVar3 == 0) {
      DAT_01b7b860 = DAT_01b7bad0;
      DAT_01b7b864 = DAT_01b7bad4;
    }
    else {
      DAT_01b7b868 = DAT_01b7bad8;
      DAT_01b7b86c = DAT_01b7badc;
    }
    puVar9 = &DAT_01b7b850;
    puVar11 = (undefined4 *)&DAT_01b7b910;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    if ((uVar7 & 0x200000) == 0) {
      puVar9 = &DAT_01b7b850;
      puVar11 = &DAT_01b7b9d0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    }
  }
  if (((param_2 != 0) && (local_10 != 0)) && ((uVar7 & 0x400) == 0)) {
    hWnd = (HWND)FUN_00df84c0();
    GetWindowRect(hWnd,&tStack_3c);
    RStack_2c.top = tStack_3c.top;
    RStack_2c.left = FUN_00fdbc60();
    RStack_2c.right = FUN_00fdbc60();
    RStack_2c.bottom = tStack_3c.bottom;
    if ((_DAT_01b7b7a8 - _DAT_01b7b7b8 == 0.0) && (_DAT_01b7b7ac - _DAT_01b7b7bc == 0.0)) {
      ClipCursor(&RStack_2c);
      return;
    }
    FUN_00dda460((float)extraout_ST1,(float)extraout_ST0,0);
    ClipCursor(&RStack_2c);
    return;
  }
  ClipCursor((RECT *)0x0);
  FUN_00df8ce0(1);
  return;
}

// 00A1E1E0  FUN_00a1e1e0  size=1282  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00a1e1e0(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_01b7b794 = &LAB_00a1e180;
  DAT_01b7b790 = &LAB_00a1d3d0;
  FUN_00dd5650("[MEM DEV]  : %d/%d \n",0x1cf248f1,0x60100000);
  FUN_00dd4990(0x40000000,"ALL RESOURCE");
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  iVar1 = Hw::cHeapPhysical(0x280000,&DAT_01b83af0,"CORE_V");
  if ((((((iVar1 != 0) &&
         (iVar1 = Hw::cHeapPhysical(0x700000,&DAT_01b83af0,&DAT_0165de74), iVar1 != 0)) &&
        (iVar1 = Hw::cHeapPhysical(0x1000000,&DAT_01b83af0,"PL_SKIN_V"), iVar1 != 0)) &&
       (((iVar1 = Hw::cHeapPhysical(0x200000,&DAT_01b83af0,"PL_WEP1_V"), iVar1 != 0 &&
         (iVar1 = Hw::cHeapPhysical(0x180000,&DAT_01b83af0,"PL_WEP2_V"), iVar1 != 0)) &&
        ((iVar1 = Hw::cHeapPhysical(0x100000,&DAT_01b83af0,"PL_WEP3_V"), iVar1 != 0 &&
         ((iVar1 = Hw::cHeapPhysical(0x300000,&DAT_01b83af0,"PL_BULLET_V"), iVar1 != 0 &&
          (iVar1 = Hw::cHeapPhysical(0x5500000,&DAT_01b83af0,"ENEMY_BG_V"), iVar1 != 0)))))))) &&
      (iVar1 = Hw::cHeapPhysical(0x2400000,&DAT_01b83af0,"EFFECT_V"), iVar1 != 0)) &&
     (((((((iVar1 = Hw::cHeapPhysical(0xd00000,&DAT_01b83af0,&DAT_0165de18), iVar1 != 0 &&
           (iVar1 = Hw::cHeapPhysical(0x1100000,&DAT_01b83af0,"UI_CODEC_V"), iVar1 != 0)) &&
          (iVar1 = Hw::cHeapPhysical(&LAB_00500000,&DAT_01b83af0,"UI_MESSAGE_V"), iVar1 != 0)) &&
         ((iVar1 = Hw::cHeapVariable::vf40(&PTR_PTR_01900000,&DAT_01b83af0,"GLOBAL"), iVar1 != 0 &&
          (iVar1 = Hw::cHeapVariable::vf40(0x1400000,&DAT_01b83af0,"HAVOK"), iVar1 != 0)))) &&
        (iVar1 = Hw::cHeapVariable::vf40(0x4cccc,&DAT_01b83af0,"HAVOKUD"), iVar1 != 0)) &&
       ((iVar1 = Hw::cHeapVariable::vf40(0xe00000,&DAT_01b83af0,"HAVOKSMALL"), iVar1 != 0 &&
        (iVar1 = Hw::cHeapVariable::vf40(0xa00000,&DAT_01b83af0,"SOUND"), iVar1 != 0)))) &&
      ((iVar1 = Hw::cHeapVariable::vf40(0x400000,&DAT_01b83af0,&DAT_0165ddcc), iVar1 != 0 &&
       ((iVar1 = Hw::cHeapVariable::vf40(0x19999,&DAT_01b83af0,"SIGNAL"), iVar1 != 0 &&
        (iVar1 = Hw::cHeapVariable::vf40(0x100000,&DAT_01b83af0,"MODELRESOURCE"), iVar1 != 0))))))))
  {
    uVar2 = 0;
    do {
      iVar1 = Hw::cHeapVariable::vf40(0x19000,&DAT_01b83af0,"THREADWORK");
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 0x58;
    } while (uVar2 < 0x1b8);
    iVar1 = Hw::cHeapPhysical(0xb00000,&DAT_01b83af0,"CORE FILE");
    if (((((iVar1 != 0) && (iVar1 = Hw::cHeapPhysical(0xe00000,&DAT_01b83af0,"PL FILE"), iVar1 != 0)
          ) && (iVar1 = Hw::cHeapPhysical(0x200000,&DAT_01b83af0,"PL SKIN FILE"), iVar1 != 0)) &&
        (((iVar1 = Hw::cHeapPhysical(0xb3333,&DAT_01b83af0,"PL WEP1 FILE"), iVar1 != 0 &&
          (iVar1 = Hw::cHeapPhysical(0x14cccc,&DAT_01b83af0,"PL WEP2 FILE"), iVar1 != 0)) &&
         ((iVar1 = Hw::cHeapPhysical(0xccccc,&DAT_01b83af0,"PL WEP3 FILE"), iVar1 != 0 &&
          ((iVar1 = Hw::cHeapPhysical(0x3200000,&DAT_01b83af0,"EM BG FILE"), iVar1 != 0 &&
           (iVar1 = Hw::cHeapPhysical(0x2ccccc,&DAT_01b83af0,"EM WP FILE"), iVar1 != 0)))))))) &&
       ((iVar1 = Hw::cHeapPhysical(&LAB_00500000,&DAT_01b83af0,"UI FILE"), iVar1 != 0 &&
        (((iVar1 = Hw::cHeapPhysical(0x600000,&DAT_01b83af0,"UI CODEC FILE"), iVar1 != 0 &&
          (iVar1 = Hw::cHeapPhysical(0x200000,&DAT_01b83af0,"UI MESS FILE"), iVar1 != 0)) &&
         (iVar1 = Hw::cHeapPhysical(0x600000,&DAT_01b83af0,"SHADER FILE"), iVar1 != 0)))))) {
      Hw::cHeapPhysicalBase::vf2C(1);
      iVar1 = Hw::cHeapPhysical(0x1e00000,&DAT_01b83af0,"CUT DATA");
      if ((iVar1 != 0) &&
         (iVar1 = Hw::cHeapPhysical(0xa00000,&DAT_01b83af0,"SAVE DATA"), iVar1 != 0)) {
        FUN_00dd2930(&DAT_01b7bcf0);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

// 00A1E6F0  FUN_00a1e6f0  size=430  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00a1e6f0(void)

{
  int iVar1;
  
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  iVar1 = Hw::cHeapVariable::vf40(0x1e00000,&DAT_01b83af0,"CUT WORK");
  if (iVar1 == 0) {
    FUN_00dd56a0("ASSERT:g_CutWorkHeap.create( CUT_WORK_HEAP_SIZE, cHeapGlobal::GetInstance(), \"CUT WORK\" )\nd:\\project\\prj_020\\p1\\common\\src\\system\\Mem.cpp\nline:%d"
                 ,0x255);
  }
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  iVar1 = Hw::cHeapVariable::vf40(&PTR_PTR_01900000,&DAT_01b83af0,"SCENE");
  if (iVar1 == 0) {
    FUN_00dd56a0("ASSERT:g_SceneWorkHeap.create( SCENE_WORK_HEAP_SIZE, cHeapGlobal::GetInstance(), \"SCENE\" )\nd:\\project\\prj_020\\p1\\common\\src\\system\\Mem.cpp\nline:%d"
                 ,599);
  }
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  iVar1 = Hw::cHeapVariable::vf40(&DAT_01980000,&DAT_01b83af0,"EFFECT");
  if (iVar1 == 0) {
    FUN_00dd56a0("ASSERT:g_EspWorkHeap.create( ESP_WORK_HEAP_SIZE, cHeapGlobal::GetInstance(), \"EFFECT\" )\nd:\\project\\prj_020\\p1\\common\\src\\system\\Mem.cpp\nline:%d"
                 ,600);
  }
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  iVar1 = Hw::cHeapVariable::vf40(0x100000,&DAT_01b83af0,"BATTLE");
  if (iVar1 == 0) {
    FUN_00dd56a0("ASSERT:g_BattleWorkHeap.create( BATTLE_HEAP_SIZE, cHeapGlobal::GetInstance(), \"BATTLE\")\nd:\\project\\prj_020\\p1\\common\\src\\system\\Mem.cpp\nline:%d"
                 ,0x25a);
  }
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  iVar1 = Hw::cHeapVariable::vf40(0x28f5,&DAT_01b83af0,"NINJARUN");
  if (iVar1 == 0) {
    FUN_00dd56a0("ASSERT:g_NinjaRunWorkHeap.create( NINJARUN_HEAP_SIZE, cHeapGlobal::GetInstance(), \"NINJARUN\")\nd:\\project\\prj_020\\p1\\common\\src\\system\\Mem.cpp\nline:%d"
                 ,0x25b);
  }
  return 1;
}

// 00A1E8A0  FUN_00a1e8a0  size=605  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1e8a0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_00ddb430();
  iVar2 = FUN_00df7c00(1);
  if (iVar2 == 0) {
    thunk_FUN_00ddaac0(&DAT_01b7b850,0);
    thunk_FUN_00ddaac0(&DAT_01b7b880,1);
    thunk_FUN_00ddaac0(&DAT_01b7b8b0,2);
    thunk_FUN_00ddaac0(&DAT_01b7b8e0,3);
  }
  else {
    FUN_00ddafc0(&DAT_01b7b850);
    FUN_00ddafc0(&DAT_01b7b880);
    FUN_00ddafc0(&DAT_01b7b8b0);
    FUN_00ddafc0(&DAT_01b7b8e0);
  }
  uVar1 = DAT_01bea070 & 0x200000;
  puVar4 = &DAT_01b7b850;
  puVar5 = (undefined4 *)&DAT_01b7b910;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_01b7b880;
  puVar5 = &DAT_01b7b940;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_01b7b8b0;
  puVar5 = &DAT_01b7b970;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_01b7b8e0;
  puVar5 = &DAT_01b7b9a0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (uVar1 == 0) {
    puVar4 = &DAT_01b7b850;
    puVar5 = &DAT_01b7b9d0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = &DAT_01b7b880;
    puVar5 = &DAT_01b7ba00;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = &DAT_01b7b8b0;
    puVar5 = &DAT_01b7ba30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = &DAT_01b7b8e0;
    puVar5 = &DAT_01b7ba60;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    FUN_00ddafc0(&DAT_01b7b9d0);
    FUN_00ddafc0(&DAT_01b7ba00);
    FUN_00ddafc0(&DAT_01b7ba30);
    FUN_00ddafc0(&DAT_01b7ba60);
  }
  FUN_00dda210(&DAT_01b7ba90,DAT_01b7b880 | DAT_01b7b850);
  _DAT_01b7baa8 = DAT_01b7b868;
  _DAT_01b7baa0 = DAT_01b7b860;
  _DAT_01b7baa4 = DAT_01b7b864;
  _DAT_01b7baac = DAT_01b7b86c;
  if (ABS(DAT_01b7b860) < ABS(_DAT_01b7b890)) {
    _DAT_01b7baa0 = _DAT_01b7b890;
  }
  if (ABS(DAT_01b7b864) < ABS(_DAT_01b7b894)) {
    _DAT_01b7baa4 = _DAT_01b7b894;
  }
  if (ABS(DAT_01b7b868) < ABS(_DAT_01b7b898)) {
    _DAT_01b7baa8 = _DAT_01b7b898;
  }
  if (ABS(DAT_01b7b86c) < ABS(_DAT_01b7b89c)) {
    _DAT_01b7baac = _DAT_01b7b89c;
  }
  iVar2 = thunk_FUN_00dda710(&DAT_01b7b7c0);
  iVar3 = thunk_FUN_00dd9800(&DAT_01b7b798);
  FUN_00cc90d0();
  if ((iVar2 == 0) || (iVar3 == 0)) {
    FUN_00df8ce0(1);
  }
  FUN_00a1d9e0(iVar2,iVar3);
  return;
}

// 00A1EBC0  FUN_00a1ebc0  size=148  [run]
void __fastcall FUN_00a1ebc0(undefined4 *param_1)

{
  param_1[2] = 0x464f44;
  param_1[3] = 0;
  param_1[4] = 0x3dcccccd;
  param_1[5] = 0x41a00000;
  param_1[6] = 0x42c80000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3dcccccd;
  param_1[0xf] = 0x41a00000;
  param_1[0x10] = 0x42c80000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3dcccccd;
  param_1[0x19] = 0x41a00000;
  param_1[0x1a] = 0x42c80000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}

// 00A1EC80  FUN_00a1ec80  size=110  [run]
void __fastcall FUN_00a1ec80(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xc3fa0000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x41700000;
  *(undefined4 *)(param_1 + 0x1c) = 0x42200000;
  *(undefined4 *)(param_1 + 0x20) = 0x43160000;
  *(undefined4 *)(param_1 + 0x24) = 0x3b000000;
  *(undefined4 *)(param_1 + 0x28) = 0x3b800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3b800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3b800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f4ccccd;
  return;
}

// 00A1EDD0  FUN_00a1edd0  size=255  [run]
void __thiscall FUN_00a1edd0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"PrimNum");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x6c))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Filter");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"CubeMap");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Priority");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"CamPos");
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x40);
  }
  if (*(float *)(param_1 + 4) == 0.0) {
    *(undefined4 *)(param_1 + 4) = 0x40000000;
  }
  if (*(float *)(param_1 + 0x14) == 0.0) {
    *(undefined4 *)(param_1 + 0x14) = 0x40000000;
    return;
  }
  return;
}

// 00A1EF10  FUN_00a1ef10  size=37  [run]
undefined * __thiscall FUN_00a1ef10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c + param_2 * 0x14);
  if (iVar1 < 0) {
    return &DAT_01bdde00;
  }
  return &DAT_01bb1e00 + iVar1 * 0xb0;
}

// 00A1EF40  FUN_00a1ef40  size=29  [run]
float10 __thiscall FUN_00a1ef40(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c + param_2 * 0x14) < 0) {
    return (float10)1;
  }
  return (float10)*(float *)(param_1 + (param_2 * 5 + 0x14) * 4);
}

// 00A1EF60  FUN_00a1ef60  size=28  [run]
float10 __thiscall FUN_00a1ef60(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c + param_2 * 0x14) < 0) {
    return (float10)1;
  }
  return (float10)*(float *)(param_1 + param_2 * 0x14 + 0x54);
}

// 00A1EF80  FUN_00a1ef80  size=28  [run]
float10 __thiscall FUN_00a1ef80(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c + param_2 * 0x14) < 0) {
    return (float10)1;
  }
  return (float10)*(float *)(param_1 + param_2 * 0x14 + 0x58);
}

