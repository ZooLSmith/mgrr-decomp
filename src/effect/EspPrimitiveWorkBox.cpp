// src/effect/EspPrimitiveWorkBox.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4F540..00F59420, 5 functions

#include "types.h"

// 00F4F540  EspPrimitiveWorkBox::EspPrimitiveWorkBox  size=48  [class]
undefined4 * __fastcall EspPrimitiveWorkBox::EspPrimitiveWorkBox(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00F4F5C0  EspPrimitiveWorkBox::vf08  size=36  [class]
void EspPrimitiveWorkBox::vf08(void)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = 4;
  do {
    FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00F4F5F0  EspPrimitiveWorkBox::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkBox::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(1,param_1 + 0x2c + (uVar1 >> 2 & 3) * 0x28);
  }
  else {
    FUN_00f98f80(&PTR_vftable_018da4c0);
  }
  FUN_00f99010(0,param_1 + 4);
  FUN_00f9dfb0(5);
  return;
}

// 00F53A30  EspPrimitiveWorkBox::vf04  size=3706  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspPrimitiveWorkBox::vf04(float param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined *puVar4;
  undefined4 uStack_38c;
  undefined1 *puStack_388;
  float fStack_384;
  undefined1 *puStack_380;
  undefined4 uStack_37c;
  float *pfStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  float *pfStack_368;
  undefined1 auStack_354 [28];
  float fStack_338;
  float local_334;
  float local_330 [2];
  undefined1 auStack_328 [32];
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined1 auStack_2e8 [32];
  undefined1 auStack_2c8 [16];
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined1 auStack_290 [24];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_258 [32];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  undefined4 auStack_228 [2];
  undefined1 auStack_220 [40];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined1 auStack_1e8 [8];
  float afStack_1e0 [15];
  float afStack_1a4 [18];
  float afStack_15c [18];
  float afStack_114 [18];
  float afStack_cc [18];
  float afStack_84 [14];
  uint uStack_4c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_354;
  local_334 = param_1;
  if ((DAT_01ee79f0 & 1) == 0) {
    DAT_01ee79f0 = DAT_01ee79f0 | 1;
    _DAT_01ee77d0 = 0xbf000000;
    _DAT_01ee77f0 = 0xbf000000;
    _DAT_01ee77f4 = 0xbf000000;
    _DAT_01ee7804 = 0xbf000000;
    _DAT_01ee7814 = 0xbf000000;
    _DAT_01ee7820 = 0xbf000000;
    _DAT_01ee7830 = 0xbf000000;
    _DAT_01ee7850 = 0xbf000000;
    _DAT_01ee7854 = 0xbf000000;
    _DAT_01ee7864 = 0xbf000000;
    _DAT_01ee7874 = 0xbf000000;
    _DAT_01ee7880 = 0xbf000000;
    _DAT_01ee7890 = 0xbf000000;
    _DAT_01ee78b0 = 0xbf000000;
    _DAT_01ee78b4 = 0xbf000000;
    _DAT_01ee78c4 = 0xbf000000;
    _DAT_01ee78d4 = 0xbf000000;
    _DAT_01ee78e0 = 0xbf000000;
    _DAT_01ee78f0 = 0xbf000000;
    _DAT_01ee7910 = 0xbf000000;
    _DAT_01ee7914 = 0xbf000000;
    _DAT_01ee7924 = 0xbf000000;
    _DAT_01ee7934 = 0xbf000000;
    _DAT_01ee7940 = 0xbf000000;
    _DAT_01ee7950 = 0xbf000000;
    _DAT_01ee7970 = 0xbf000000;
    _DAT_01ee7974 = 0xbf000000;
    _DAT_01ee7984 = 0xbf000000;
    _DAT_01ee7994 = 0xbf000000;
    _DAT_01ee79a0 = 0xbf000000;
    _DAT_01ee79b0 = 0xbf000000;
    _DAT_01ee79d0 = 0xbf000000;
    _DAT_01ee79d4 = 0xbf000000;
    _DAT_01ee79e4 = 0xbf000000;
    _DAT_01ee77d4 = 0x3f000000;
    _DAT_01ee77e0 = 0x3f000000;
    _DAT_01ee77e4 = 0x3f000000;
    _DAT_01ee7800 = 0x3f000000;
    _DAT_01ee7810 = 0x3f000000;
    _DAT_01ee7824 = 0x3f000000;
    _DAT_01ee7834 = 0x3f000000;
    _DAT_01ee7840 = 0x3f000000;
    _DAT_01ee7844 = 0x3f000000;
    _DAT_01ee7860 = 0x3f000000;
    _DAT_01ee7870 = 0x3f000000;
    _DAT_01ee7884 = 0x3f000000;
    _DAT_01ee7894 = 0x3f000000;
    _DAT_01ee78a0 = 0x3f000000;
    _DAT_01ee78a4 = 0x3f000000;
    _DAT_01ee78c0 = 0x3f000000;
    _DAT_01ee78d0 = 0x3f000000;
    _DAT_01ee78e4 = 0x3f000000;
    _DAT_01ee78f4 = 0x3f000000;
    _DAT_01ee7900 = 0x3f000000;
    _DAT_01ee7904 = 0x3f000000;
    _DAT_01ee7920 = 0x3f000000;
    _DAT_01ee7930 = 0x3f000000;
    _DAT_01ee7944 = 0x3f000000;
    _DAT_01ee7954 = 0x3f000000;
    _DAT_01ee7960 = 0x3f000000;
    _DAT_01ee7964 = 0x3f000000;
    _DAT_01ee7980 = 0x3f000000;
    _DAT_01ee7990 = 0x3f000000;
    _DAT_01ee79a4 = 0x3f000000;
    _DAT_01ee79b4 = 0x3f000000;
    _DAT_01ee79c0 = 0x3f000000;
    _DAT_01ee79c4 = 0x3f000000;
    _DAT_01ee79e0 = 0x3f000000;
    _DAT_01ee77d8 = 0;
    _DAT_01ee77e8 = 0;
    _DAT_01ee77f8 = 0;
    _DAT_01ee7808 = 0;
    _DAT_01ee7818 = 0;
    _DAT_01ee7828 = 0;
    _DAT_01ee7838 = 0;
    _DAT_01ee7848 = 0;
    _DAT_01ee7858 = 0;
    _DAT_01ee7868 = 0;
    _DAT_01ee7878 = 0;
    _DAT_01ee7888 = 0;
    _DAT_01ee7898 = 0;
    _DAT_01ee78a8 = 0;
    _DAT_01ee78b8 = 0;
    _DAT_01ee78c8 = 0;
    _DAT_01ee78d8 = 0;
    _DAT_01ee78e8 = 0;
    _DAT_01ee78f8 = 0;
    _DAT_01ee7908 = 0;
    _DAT_01ee7918 = 0;
    _DAT_01ee7928 = 0;
    _DAT_01ee7938 = 0;
    _DAT_01ee7948 = 0;
    _DAT_01ee7958 = 0;
    _DAT_01ee7968 = 0;
    _DAT_01ee7978 = 0;
    _DAT_01ee7988 = 0;
    _DAT_01ee7998 = 0;
    _DAT_01ee79a8 = 0;
    _DAT_01ee79b8 = 0;
    _DAT_01ee79c8 = 0;
    _DAT_01ee79d8 = 0;
    _DAT_01ee79e8 = 0;
  }
  if ((DAT_01ee79f0 & 2) == 0) {
    DAT_01ee79f0 = DAT_01ee79f0 | 2;
    _DAT_01ee7388 = 0x3f800000;
    _DAT_01ee7398 = 0x3f800000;
    _DAT_01ee739c = 0x3f800000;
    _DAT_01ee73a4 = 0x3f800000;
    _DAT_01ee73ac = 0x3f800000;
    _DAT_01ee73b0 = 0x3f800000;
    _DAT_01ee73b8 = 0x3f800000;
    _DAT_01ee73c8 = 0x3f800000;
    _DAT_01ee73cc = 0x3f800000;
    _DAT_01ee73d4 = 0x3f800000;
    _DAT_01ee73dc = 0x3f800000;
    _DAT_01ee73e0 = 0x3f800000;
    _DAT_01ee73e8 = 0x3f800000;
    _DAT_01ee73f8 = 0x3f800000;
    _DAT_01ee73fc = 0x3f800000;
    _DAT_01ee7404 = 0x3f800000;
    _DAT_01ee740c = 0x3f800000;
    _DAT_01ee7410 = 0x3f800000;
    _DAT_01ee7418 = 0x3f800000;
    _DAT_01ee7428 = 0x3f800000;
    _DAT_01ee742c = 0x3f800000;
    _DAT_01ee7434 = 0x3f800000;
    _DAT_01ee743c = 0x3f800000;
    _DAT_01ee7440 = 0x3f800000;
    _DAT_01ee7448 = 0x3f800000;
    _DAT_01ee7458 = 0x3f800000;
    _DAT_01ee745c = 0x3f800000;
    _DAT_01ee7464 = 0x3f800000;
    _DAT_01ee746c = 0x3f800000;
    _DAT_01ee7470 = 0x3f800000;
    _DAT_01ee7478 = 0x3f800000;
    _DAT_01ee7488 = 0x3f800000;
    _DAT_01ee748c = 0x3f800000;
    _DAT_01ee7494 = 0x3f800000;
    _DAT_01ee74a0 = 0x3f800000;
    _DAT_01ee74ac = 0x3f800000;
    _DAT_01ee74b0 = 0x3f800000;
    _DAT_01ee74b4 = 0x3f800000;
    _DAT_01ee74b8 = 0x3f800000;
    _DAT_01ee74bc = 0x3f800000;
    _DAT_01ee74d0 = 0x3f800000;
    _DAT_01ee74dc = 0x3f800000;
    _DAT_01ee74e0 = 0x3f800000;
    _DAT_01ee74e4 = 0x3f800000;
    _DAT_01ee74e8 = 0x3f800000;
    _DAT_01ee74ec = 0x3f800000;
    _DAT_01ee7500 = 0x3f800000;
    _DAT_01ee750c = 0x3f800000;
    _DAT_01ee7510 = 0x3f800000;
    _DAT_01ee7514 = 0x3f800000;
    _DAT_01ee7518 = 0x3f800000;
    _DAT_01ee751c = 0x3f800000;
    _DAT_01ee7530 = 0x3f800000;
    _DAT_01ee753c = 0x3f800000;
    _DAT_01ee7540 = 0x3f800000;
    _DAT_01ee7544 = 0x3f800000;
    _DAT_01ee7548 = 0x3f800000;
    _DAT_01ee754c = 0x3f800000;
    _DAT_01ee7560 = 0x3f800000;
    _DAT_01ee756c = 0x3f800000;
    _DAT_01ee7570 = 0x3f800000;
    _DAT_01ee7574 = 0x3f800000;
    _DAT_01ee7578 = 0x3f800000;
    _DAT_01ee757c = 0x3f800000;
    _DAT_01ee7590 = 0x3f800000;
    _DAT_01ee759c = 0x3f800000;
    _DAT_01ee75a0 = 0x3f800000;
    _DAT_01ee75a4 = 0x3f800000;
    _DAT_01ee75a8 = 0x3f800000;
    _DAT_01ee75ac = 0x3f800000;
    _DAT_01ee75b4 = 0x3f800000;
    _DAT_01ee75b8 = 0x3f800000;
    _DAT_01ee75d0 = 0x3f800000;
    _DAT_01ee75d4 = 0x3f800000;
    _DAT_01ee75d8 = 0x3f800000;
    _DAT_01ee75dc = 0x3f800000;
    _DAT_01ee75e4 = 0x3f800000;
    _DAT_01ee75e8 = 0x3f800000;
    _DAT_01ee7600 = 0x3f800000;
    _DAT_01ee7604 = 0x3f800000;
    _DAT_01ee7608 = 0x3f800000;
    _DAT_01ee760c = 0x3f800000;
    _DAT_01ee7614 = 0x3f800000;
    _DAT_01ee7618 = 0x3f800000;
    _DAT_01ee7630 = 0x3f800000;
    _DAT_01ee7634 = 0x3f800000;
    _DAT_01ee7638 = 0x3f800000;
    _DAT_01ee763c = 0x3f800000;
    _DAT_01ee7644 = 0x3f800000;
    _DAT_01ee7648 = 0x3f800000;
    _DAT_01ee7660 = 0x3f800000;
    _DAT_01ee7664 = 0x3f800000;
    _DAT_01ee7668 = 0x3f800000;
    _DAT_01ee766c = 0x3f800000;
    _DAT_01ee7674 = 0x3f800000;
    _DAT_01ee7678 = 0x3f800000;
    _DAT_01ee7690 = 0x3f800000;
    _DAT_01ee7694 = 0x3f800000;
    _DAT_01ee7698 = 0x3f800000;
    _DAT_01ee769c = 0x3f800000;
    _DAT_01ee76a4 = 0x3f800000;
    _DAT_01ee76a8 = 0x3f800000;
    _DAT_01ee76bc = 0x3f800000;
    _DAT_01ee76c0 = 0x3f800000;
    _DAT_01ee76c4 = 0x3f800000;
    _DAT_01ee76d0 = 0x3f800000;
    _DAT_01ee76d8 = 0x3f800000;
    _DAT_01ee76e4 = 0x3f800000;
    _DAT_01ee76ec = 0x3f800000;
    _DAT_01ee76f0 = 0x3f800000;
    _DAT_01ee76f4 = 0x3f800000;
    _DAT_01ee7700 = 0x3f800000;
    _DAT_01ee7708 = 0x3f800000;
    _DAT_01ee7714 = 0x3f800000;
    _DAT_01ee771c = 0x3f800000;
    _DAT_01ee7720 = 0x3f800000;
    _DAT_01ee7724 = 0x3f800000;
    _DAT_01ee7730 = 0x3f800000;
    _DAT_01ee7738 = 0x3f800000;
    _DAT_01ee7744 = 0x3f800000;
    _DAT_01ee774c = 0x3f800000;
    _DAT_01ee7750 = 0x3f800000;
    _DAT_01ee7754 = 0x3f800000;
    _DAT_01ee7760 = 0x3f800000;
    _DAT_01ee7768 = 0x3f800000;
    _DAT_01ee7774 = 0x3f800000;
    _DAT_01ee777c = 0x3f800000;
    _DAT_01ee7780 = 0x3f800000;
    _DAT_01ee7784 = 0x3f800000;
    _DAT_01ee7790 = 0x3f800000;
    _DAT_01ee7798 = 0x3f800000;
    _DAT_01ee77a4 = 0x3f800000;
    _DAT_01ee77ac = 0x3f800000;
    _DAT_01ee77b0 = 0x3f800000;
    _DAT_01ee77b4 = 0x3f800000;
    _DAT_01ee77c0 = 0x3f800000;
    _DAT_01ee738c = 0;
    _DAT_01ee7390 = 0;
    _DAT_01ee7394 = 0;
    _DAT_01ee73a0 = 0;
    _DAT_01ee73a8 = 0;
    _DAT_01ee73b4 = 0;
    _DAT_01ee73bc = 0;
    _DAT_01ee73c0 = 0;
    _DAT_01ee73c4 = 0;
    _DAT_01ee73d0 = 0;
    _DAT_01ee73d8 = 0;
    _DAT_01ee73e4 = 0;
    _DAT_01ee73ec = 0;
    _DAT_01ee73f0 = 0;
    _DAT_01ee73f4 = 0;
    _DAT_01ee7400 = 0;
    _DAT_01ee7408 = 0;
    _DAT_01ee7414 = 0;
    _DAT_01ee741c = 0;
    _DAT_01ee7420 = 0;
    _DAT_01ee7424 = 0;
    _DAT_01ee7430 = 0;
    _DAT_01ee7438 = 0;
    _DAT_01ee7444 = 0;
    _DAT_01ee744c = 0;
    _DAT_01ee7450 = 0;
    _DAT_01ee7454 = 0;
    _DAT_01ee7460 = 0;
    _DAT_01ee7468 = 0;
    _DAT_01ee7474 = 0;
    _DAT_01ee747c = 0;
    _DAT_01ee7480 = 0;
    _DAT_01ee7484 = 0;
    _DAT_01ee7490 = 0;
    _DAT_01ee7498 = 0;
    _DAT_01ee749c = 0;
    _DAT_01ee74a4 = 0;
    _DAT_01ee74a8 = 0;
    _DAT_01ee74c0 = 0;
    _DAT_01ee74c4 = 0;
    _DAT_01ee74c8 = 0;
    _DAT_01ee74cc = 0;
    _DAT_01ee74d4 = 0;
    _DAT_01ee74d8 = 0;
    _DAT_01ee74f0 = 0;
    _DAT_01ee74f4 = 0;
    _DAT_01ee74f8 = 0;
    _DAT_01ee74fc = 0;
    _DAT_01ee7504 = 0;
    _DAT_01ee7508 = 0;
    _DAT_01ee7520 = 0;
    _DAT_01ee7524 = 0;
    _DAT_01ee7528 = 0;
    _DAT_01ee752c = 0;
    _DAT_01ee7534 = 0;
    _DAT_01ee7538 = 0;
    _DAT_01ee7550 = 0;
    _DAT_01ee7554 = 0;
    _DAT_01ee7558 = 0;
    _DAT_01ee755c = 0;
    _DAT_01ee7564 = 0;
    _DAT_01ee7568 = 0;
    _DAT_01ee7580 = 0;
    _DAT_01ee7584 = 0;
    _DAT_01ee7588 = 0;
    _DAT_01ee758c = 0;
    _DAT_01ee7594 = 0;
    _DAT_01ee7598 = 0;
    _DAT_01ee75b0 = 0;
    _DAT_01ee75bc = 0;
    _DAT_01ee75c0 = 0;
    _DAT_01ee75c4 = 0;
    _DAT_01ee75c8 = 0;
    _DAT_01ee75cc = 0;
    _DAT_01ee75e0 = 0;
    _DAT_01ee75ec = 0;
    _DAT_01ee75f0 = 0;
    _DAT_01ee75f4 = 0;
    _DAT_01ee75f8 = 0;
    _DAT_01ee75fc = 0;
    _DAT_01ee7610 = 0;
    _DAT_01ee761c = 0;
    _DAT_01ee7620 = 0;
    _DAT_01ee7624 = 0;
    _DAT_01ee7628 = 0;
    _DAT_01ee762c = 0;
    _DAT_01ee7640 = 0;
    _DAT_01ee764c = 0;
    _DAT_01ee7650 = 0;
    _DAT_01ee7654 = 0;
    _DAT_01ee7658 = 0;
    _DAT_01ee765c = 0;
    _DAT_01ee7670 = 0;
    _DAT_01ee767c = 0;
    _DAT_01ee7680 = 0;
    _DAT_01ee7684 = 0;
    _DAT_01ee7688 = 0;
    _DAT_01ee768c = 0;
    _DAT_01ee76a0 = 0;
    _DAT_01ee76ac = 0;
    _DAT_01ee76b0 = 0;
    _DAT_01ee76b4 = 0;
    _DAT_01ee76b8 = 0;
    _DAT_01ee76c8 = 0;
    _DAT_01ee76cc = 0;
    _DAT_01ee76d4 = 0;
    _DAT_01ee76dc = 0;
    _DAT_01ee76e0 = 0;
    _DAT_01ee76e8 = 0;
    _DAT_01ee76f8 = 0;
    _DAT_01ee76fc = 0;
    _DAT_01ee7704 = 0;
    _DAT_01ee770c = 0;
    _DAT_01ee7710 = 0;
    _DAT_01ee7718 = 0;
    _DAT_01ee7728 = 0;
    _DAT_01ee772c = 0;
    _DAT_01ee7734 = 0;
    _DAT_01ee773c = 0;
    _DAT_01ee7740 = 0;
    _DAT_01ee7748 = 0;
    _DAT_01ee7758 = 0;
    _DAT_01ee775c = 0;
    _DAT_01ee7764 = 0;
    _DAT_01ee776c = 0;
    _DAT_01ee7770 = 0;
    _DAT_01ee7778 = 0;
    _DAT_01ee7788 = 0;
    _DAT_01ee778c = 0;
    _DAT_01ee7794 = 0;
    _DAT_01ee779c = 0;
    _DAT_01ee77a0 = 0;
    _DAT_01ee77a8 = 0;
    _DAT_01ee77b8 = 0;
    _DAT_01ee77bc = 0;
    _DAT_01ee77c4 = 0;
    pfStack_368 = (float *)0xf54361;
    _atexit((_func_4879 *)&DAT_015f2350);
  }
  pfStack_368 = local_330;
  uStack_36c = 0xf5437c;
  D3DXMatrixRotationY();
  uStack_308 = 0;
  uStack_304 = 0;
  pfStack_378 = &fStack_2f8;
  uStack_300 = 0xbf000000;
  uStack_36c = 0x3f000000;
  uStack_370 = 0;
  uStack_374 = 0;
  uStack_37c = 0xf543ae;
  D3DXMatrixTranslation();
  puStack_380 = auStack_2c8;
  uStack_37c = 0xbfc90fdb;
  fStack_384 = 2.2524008e-38;
  D3DXMatrixRotationY();
  uStack_2a0 = 0xbf000000;
  puStack_388 = auStack_290;
  uStack_29c = 0;
  uStack_298 = 0;
  fStack_384 = 1.5707964;
  uStack_38c = 0xf543f9;
  D3DXMatrixRotationY();
  uStack_268 = 0x3f000000;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_38c = 0xbfc90fdb;
  D3DXMatrixRotationX(auStack_258);
  fStack_230 = 0.0;
  uStack_22c = 0x3f000000;
  auStack_228[0] = 0;
  D3DXMatrixRotationX(auStack_220,0x3fc90fdb);
  fStack_338 = fStack_338 - 0.5;
  local_334 = local_334 - 0.5;
  local_330[0] = local_330[0] + 0.0;
  fStack_2f8 = fStack_2f8 - 0.5;
  fStack_2f4 = fStack_2f4 - 0.5;
  fStack_2f0 = fStack_2f0 + 0.0;
  fStack_2b8 = fStack_2b8 - 0.5;
  puVar4 = &DAT_01ee77d0;
  fStack_2b4 = fStack_2b4 - 0.5;
  fStack_2b0 = fStack_2b0 + 0.0;
  fStack_278 = fStack_278 - 0.5;
  fStack_274 = fStack_274 - 0.5;
  fStack_270 = fStack_270 + 0.0;
  fStack_238 = fStack_238 - 0.5;
  fStack_234 = fStack_234 - 0.5;
  fStack_230 = fStack_230 + 0.0;
  fStack_1f8 = -0.5;
  fStack_1f4 = -1.0;
  fStack_1f0 = 0.0;
  pfVar3 = afStack_1e0;
  do {
    D3DXVec3TransformNormal(&puStack_388,puVar4,&pfStack_368);
    puStack_388 = (undefined1 *)((float)puStack_388 + fStack_338);
    puVar4 = puVar4 + 0x10;
    fStack_384 = local_334 + fStack_384;
    puStack_380 = (undefined1 *)(local_330[0] + (float)puStack_380);
    pfVar3[-2] = (float)puStack_388;
    pfVar3[-1] = fStack_384;
    *pfVar3 = (float)puStack_380;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee7820);
  puVar4 = &DAT_01ee7820;
  pfVar3 = afStack_1a4;
  do {
    D3DXVec3TransformNormal(&puStack_388,puVar4,auStack_328);
    puStack_388 = (undefined1 *)((float)puStack_388 + fStack_2f8);
    puVar4 = puVar4 + 0x10;
    fStack_384 = fStack_2f4 + fStack_384;
    puStack_380 = (undefined1 *)(fStack_2f0 + (float)puStack_380);
    pfVar3[-2] = (float)puStack_388;
    pfVar3[-1] = fStack_384;
    *pfVar3 = (float)puStack_380;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee7880);
  puVar4 = &DAT_01ee7880;
  pfVar3 = afStack_15c;
  do {
    D3DXVec3TransformNormal(&puStack_388,puVar4,auStack_2e8);
    puStack_388 = (undefined1 *)((float)puStack_388 + fStack_2b8);
    puVar4 = puVar4 + 0x10;
    fStack_384 = fStack_2b4 + fStack_384;
    puStack_380 = (undefined1 *)(fStack_2b0 + (float)puStack_380);
    pfVar3[-2] = (float)puStack_388;
    pfVar3[-1] = fStack_384;
    *pfVar3 = (float)puStack_380;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee78e0);
  puVar4 = &DAT_01ee78e0;
  pfVar3 = afStack_114;
  do {
    D3DXVec3TransformNormal(&puStack_388,puVar4,auStack_2a8);
    puStack_388 = (undefined1 *)((float)puStack_388 + fStack_278);
    puVar4 = puVar4 + 0x10;
    fStack_384 = fStack_274 + fStack_384;
    puStack_380 = (undefined1 *)(fStack_270 + (float)puStack_380);
    pfVar3[-2] = (float)puStack_388;
    pfVar3[-1] = fStack_384;
    *pfVar3 = (float)puStack_380;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee7940);
  puVar4 = &DAT_01ee7940;
  pfVar3 = afStack_cc;
  do {
    D3DXVec3TransformNormal(&puStack_388,puVar4,&uStack_268);
    puStack_388 = (undefined1 *)((float)puStack_388 + fStack_238);
    puVar4 = puVar4 + 0x10;
    fStack_384 = fStack_234 + fStack_384;
    puStack_380 = (undefined1 *)(fStack_230 + (float)puStack_380);
    pfVar3[-2] = (float)puStack_388;
    pfVar3[-1] = fStack_384;
    *pfVar3 = (float)puStack_380;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee79a0);
  puVar4 = &DAT_01ee79a0;
  pfVar3 = afStack_84;
  do {
    D3DXVec3TransformNormal(&puStack_388,puVar4,auStack_228);
    puStack_388 = (undefined1 *)((float)puStack_388 + fStack_1f8);
    puVar4 = puVar4 + 0x10;
    fStack_384 = fStack_1f4 + fStack_384;
    puStack_380 = (undefined1 *)(fStack_1f0 + (float)puStack_380);
    pfVar3[-2] = (float)puStack_388;
    pfVar3[-1] = fStack_384;
    *pfVar3 = (float)puStack_380;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee79f0);
  iVar1 = FUN_00f9cae0(0xc,0x22,uStack_36c);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(auStack_1e8,0xc,0x22), iVar1 != 0)) {
    puVar4 = &DAT_01ee7388;
    uVar2 = 0;
    while ((iVar1 = FUN_00f9cae0(8,0x22,uStack_36c), iVar1 != 0 &&
           (iVar1 = FUN_00f99d50(puVar4,8,0x22), iVar1 != 0))) {
      uVar2 = uVar2 + 0x110;
      puVar4 = puVar4 + 0x110;
      if (0x43f < uVar2) {
        __security_check_cookie(uStack_4c ^ (uint)&uStack_38c);
        return;
      }
    }
  }
  __security_check_cookie(uStack_4c ^ (uint)&uStack_38c);
  return;
}

// 00F59420  EspPrimitiveWorkBox::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkBox::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 3;
  do {
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

