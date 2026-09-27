// src/phase/app/pf09.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D50BD0..00D6FE50, 4 functions

#include "mgrr.h"
#include "cPf09.h"

// 00D50BD0  cPf09::vf10  size=176  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf09::vf10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x278) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1e0) + 8))(0,0,0);
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x130) + 8))(0,0,0);
  }
  if (*(int *)(param_1 + 300) != 0) {
    thunk_FUN_00dfbaa0(*(int *)(param_1 + 300));
  }
  DAT_01bea060 = DAT_01bea060 & 0xfffffeff;
  _DAT_01bea080 = _DAT_01bea080 & 0xfffeffff;
  DAT_01bea084 = DAT_01bea084 & 0xffff7fff;
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  return;
}

// 00D5F6A0  cPf09::vf08  size=306  [class]
void __fastcall cPf09::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 local_120 [284];
  
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  FUN_00c16770(0);
  uVar1 = cCredit::cCredit();
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 300) = 0;
  FUN_00e01ca0();
  FUN_00dffb30(param_1 + 0x130);
  *(uint *)(param_1 + 0x198) = *(uint *)(param_1 + 0x198) | 0x101;
  FUN_00e01540(0xf04,0,local_120);
  iVar2 = FUN_00dec390("movie_ui/Title_Alpha_s.usm");
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_01658054);
  }
  else {
    local_198 = 0x43280000;
    local_194 = 0x431f0000;
    local_164 = 0;
    local_190 = 0x44800000;
    local_160 = 0;
    local_168 = 0x1f;
    local_18c = 0x439e0000;
    local_188 = 0;
    local_184 = 0;
    local_180 = 0x3f800000;
    local_17c = 0;
    local_178 = 0;
    local_174 = 0x3f7ccccd;
    local_16c = 0x3f7ccccd;
    local_170 = 0x3f800000;
    uVar1 = thunk_FUN_00dfc8e0("movie_ui/Title_Alpha_s.usm",&local_198,&DAT_01b7ddc0);
    *(undefined4 *)(param_1 + 300) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}

// 00D5F7E0  cPf09::vf0C  size=648  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf09::vf0C(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_120 [284];
  
  fVar1 = _DAT_01be942c * 0.016666668;
  switch(*(undefined4 *)(param_1 + 0x124)) {
  case 0:
    if ((*(int *)(param_1 + 0x11c) == 0) || (*(int *)(*(int *)(param_1 + 0x11c) + 0x68) == 3)) {
      uVar3 = cFade::set(0,0,0xff000000,0x78,1,0,0x68);
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
      *(undefined4 *)(param_1 + 0x120) = uVar3;
    }
    break;
  case 1:
    iVar4 = FUN_00eb4340(*(undefined4 *)(param_1 + 0x120));
    if (iVar4 == 0) break;
    if (*(int *)(param_1 + 0x1c8) != 0) {
      (**(code **)(*(int *)(param_1 + 0x130) + 8))(0,0,0);
    }
    DAT_01bea084 = DAT_01bea084 | 0x8000;
    DAT_01bea060 = DAT_01bea060 | 0x100;
    goto LAB_00d5f8b4;
  case 2:
    fVar1 = *(float *)(param_1 + 0x128) - fVar1;
    *(float *)(param_1 + 0x128) = fVar1;
    if ((fVar1 <= 0.0) && (iVar4 = FUN_00dfbfb0(*(undefined4 *)(param_1 + 300)), iVar4 == 2)) {
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0x120));
      *(undefined4 *)(param_1 + 0x120) = 0;
      FUN_00c1d5b0(0x8010,0);
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
    break;
  case 3:
    iVar4 = FUN_00c1d6c0();
    if (iVar4 != 0) break;
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x1e0);
    *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) | 0x101;
    FUN_00e01540(0xf04,5,local_120);
    FUN_00e5e050("se_pf09_title_logo_thunder",0);
    thunk_FUN_00dfba30(*(undefined4 *)(param_1 + 300));
LAB_00d5f8b4:
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    *(undefined4 *)(param_1 + 0x128) = 0x40400000;
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 0x128) - fVar1;
    *(float *)(param_1 + 0x128) = fVar1;
    if (fVar1 <= 0.0) {
      FUN_0093b4a0("pf09_001",0,0);
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
      *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
    }
    break;
  case 5:
    fVar1 = *(float *)(param_1 + 0x128) - fVar1;
    *(float *)(param_1 + 0x128) = fVar1;
    if ((fVar1 <= 0.0) && (iVar4 = FUN_00937e00("pf09_001"), iVar4 != 0)) {
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
    break;
  case 6:
    if ((((DAT_01b7b914 & 0x1f0) != 0) || (cVar2 = FUN_00ce12f0(0), cVar2 != '\0')) ||
       (cVar2 = FUN_00cac950(), cVar2 != '\0')) {
      FUN_00a4ac40(0xf07,"START",0xffffffff);
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_00d37460();
  }
  return;
}

// 00D6FE50  cPf09::vf00  size=76  [class]
undefined4 * __thiscall cPf09::vf00(undefined4 *param_1,byte param_2)

{
  cEspControler::~cEspControler();
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

