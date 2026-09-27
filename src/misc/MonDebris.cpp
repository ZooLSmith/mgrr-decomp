// src/misc/MonDebris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051B5D0..00AB8760, 7 functions

#include "types.h"

// 0051B5D0  MonDebris::vf300  size=274  [class]
void __fastcall MonDebris::vf300(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float *pfVar3;
  undefined1 local_34 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) &&
     (*(int *)(param_1 + 0x970) != 0)) {
    *(undefined4 *)(param_1 + 0x970) = 0;
    FUN_005d95e0(&local_30);
    fVar1 = (float10)FUN_00916de0();
    fVar2 = (float10)-4.0;
    local_20 = (float)((float10)local_30 * fVar1 * fVar2);
    local_1c = (float)((float10)local_2c * fVar1 * fVar2);
    local_18 = (float)(fVar1 * (float10)local_28 * fVar2);
    local_14 = (float)(fVar2 * (float10)local_24 * fVar1);
    FUN_0091ab40(&local_20);
    FUN_00917420();
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    pfVar3 = &local_30;
    FUN_00912660(local_34,0);
    FUN_0091a5e0(pfVar3);
    pfVar3 = &local_30;
    local_30 = local_30 * 0.7;
    local_2c = local_2c * 0.7;
    local_28 = local_28 * 0.7;
    local_24 = local_24 * 0.7;
    FUN_00912660(local_34,0);
    FUN_0091a620(pfVar3);
  }
  return;
}

// 0051B6F0  MonDebris::vf1B8  size=31  [class]
void MonDebris::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x423a0;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0051EA60  MonDebris::vf40  size=73  [class]
void __fastcall MonDebris::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = RayArmorDebris::vf40();
  if (iVar1 == 0) {
    return;
  }
  FUN_005d84f0(0x461c4000);
  if (*(int *)(param_1 + 0x4b4) == 0x201a0) {
    FUN_005d84f0(0x40000000);
  }
  *(undefined4 *)(param_1 + 0x950) = 1;
  return;
}

// 0051EAB0  MonDebris::vf1BC  size=110  [class]
void __thiscall MonDebris::vf1BC(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  ContainerDebris::vf1BC(param_2);
  if (param_2 != (int *)0x0) {
    puVar3 = &DAT_01be9c20;
    (**(code **)(*param_2 + 4))(&DAT_01be9c20);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7b4) != 0)) {
      uVar2 = FUN_009f8b40();
      FUN_0091c760(uVar2);
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
      uVar2 = cXmlBinary::cXmlBinary_41();
      FUN_0091b870(uVar2);
    }
  }
  return;
}

// 00AAFAE0  MonDebris::MonDebris  size=18  [class]
undefined4 * __fastcall MonDebris::MonDebris(undefined4 *param_1)

{
  RayArmorDebris::RayArmorDebris();
  *param_1 = vftable;
  return param_1;
}

// 00AAFB00  MonDebris::vf04  size=6  [class]
undefined * MonDebris::vf04(void)

{
  return &DAT_01b34f64;
}

// 00AB8760  MonDebris::vf00  size=105  [class]
undefined4 * __thiscall MonDebris::vf00(undefined4 *param_1,byte param_2)

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

