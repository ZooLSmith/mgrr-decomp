// src/enemy/em0131/Em0131Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00606B60..00ABA690, 7 functions

#include "mgrr.h"
#include "Em0131Debris.h"

// 00606B60  Em0131Debris::vf40  size=31  [class]
undefined4 __fastcall Em0131Debris::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = RayArmorDebris::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  return 1;
}

// 00609560  Em0131Debris::vf300  size=1642  [class]
void __fastcall Em0131Debris::vf300(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [12];
  float local_14;
  
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) &&
       (*(int *)(param_1 + 0x970) != 0)) {
      fVar4 = (float10)FUN_00916de0();
      fVar5 = (float10)2.0;
      fVar4 = fVar4 * fVar5;
      local_60 = (float)(fVar4 * fVar5 * (float10)0);
      local_5c = (float)(fVar4 * fVar5);
      local_58 = (float)((float10)0 * fVar4 * fVar5);
      local_54 = (float)((float10)local_24 * fVar5 * (float10)local_54);
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        FUN_0091ab40(&local_60);
      }
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      *(undefined4 *)(param_1 + 0x88c) = 0;
      *(undefined4 *)(param_1 + 0x894) = 0;
      *(undefined4 *)(param_1 + 0x8e4) = 0;
      return;
    }
    break;
  case 1:
    iVar3 = FUN_00a7f600(0x20130);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
        (iVar3 = FUN_00606cf0(iVar3), iVar3 != 0)) && ((*(uint *)(iVar3 + 0xe90) & 0x1000) != 0)) {
      *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(iVar3 + 0x13e0);
      *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(iVar3 + 0x13e4);
      *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(iVar3 + 0x13e8);
      *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(iVar3 + 0x13ec);
      *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(iVar3 + 0x13f0);
      *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(iVar3 + 0x13f4);
      *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(iVar3 + 0x13f8);
      *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(iVar3 + 0x13fc);
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      return;
    }
    break;
  case 2:
    if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) &&
       (*(int *)(param_1 + 0x970) != 0)) {
      FUN_005d9b40(&local_50);
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 0.0;
      fVar4 = (float10)FUN_00916de0();
      fVar4 = fVar4 * (float10)-2.0;
      fVar5 = (float10)2.0;
      local_70 = (float)(fVar4 * fVar5);
      local_6c = (float)(fVar4 * fVar5);
      local_68 = (float)(fVar4 * fVar5);
      local_64 = (float)(fVar5 * (float10)local_64);
      pfVar1 = (float *)FUN_005d95e0(local_20);
      local_60 = *pfVar1 * local_70;
      local_5c = pfVar1[1] * local_6c;
      local_58 = pfVar1[2] * local_68;
      local_54 = pfVar1[3] * local_64;
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        FUN_0091ab40(&local_60);
      }
      local_70 = local_50 - *(float *)(param_1 + 0x980);
      local_6c = local_4c - *(float *)(param_1 + 0x984);
      local_68 = local_48 - *(float *)(param_1 + 0x988);
      local_64 = local_44 - *(float *)(param_1 + 0x98c);
      fVar4 = (float10)FUN_00916de0();
      fVar5 = (float10)2.0;
      fVar4 = fVar4 * fVar5;
      local_70 = (float)(fVar4 * fVar5 * (float10)local_70);
      local_6c = (float)(fVar4 * fVar5 * (float10)local_6c);
      local_68 = (float)(fVar4 * fVar5 * (float10)local_68);
      local_64 = (float)((float10)local_14 * fVar5 * (float10)local_64);
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        FUN_0091ab40(&local_70);
      }
      local_70 = 0.0;
      local_6c = -1.0;
      local_68 = 0.0;
      fVar4 = (float10)FUN_00916de0();
      fVar4 = fVar4 * (float10)-2.0;
      fVar5 = (float10)10.0;
      local_70 = (float)(fVar4 * fVar5 * (float10)local_70);
      local_6c = (float)(fVar4 * fVar5 * (float10)local_6c);
      local_68 = (float)(fVar4 * fVar5 * (float10)local_68);
      local_64 = (float)(fVar5 * (float10)local_14 * (float10)local_64);
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        FUN_0091ab40(&local_70);
      }
      fVar4 = (float10)FUN_00dde300(0xbf060a92,0x3f060a92);
      local_60 = (float)fVar4;
      fVar4 = (float10)FUN_00dde300(0xbf060a92,0x3f060a92);
      local_5c = (float)fVar4;
      fVar4 = (float10)FUN_00dde300(0xbf060a92,0x3f060a92);
      local_58 = (float)fVar4;
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        local_40 = local_60 * 10.0;
        local_3c = local_5c * 10.0;
        local_38 = local_58 * 10.0;
        local_34 = local_54 * 10.0;
        FUN_0091ac60(&local_40);
      }
      *(undefined4 *)(param_1 + 0x970) = 0;
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      return;
    }
    break;
  case 3:
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
        (iVar3 = FUN_00606cc0(iVar3), iVar3 != 0)) &&
       ((iVar3 = FUN_00a8cac0(), iVar3 == 0x27 || (iVar3 = FUN_00a8cac0(), iVar3 == 0x28)))) {
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      return;
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) {
      local_70 = 1.0;
      local_6c = 0.0;
      local_68 = 0.0;
      fVar4 = (float10)FUN_00916de0();
      fVar4 = fVar4 * (float10)-2.0;
      fVar5 = (float10)100.0;
      local_70 = (float)(fVar4 * fVar5 * (float10)local_70);
      local_6c = (float)(fVar4 * fVar5 * (float10)local_6c);
      local_68 = (float)(fVar4 * fVar5 * (float10)local_68);
      local_64 = (float)(fVar5 * (float10)local_14 * (float10)local_64);
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        FUN_0091ab40(&local_70);
      }
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      fVar4 = (float10)FUN_00dde300(0xbf060a92,0x3f060a92);
      local_60 = (float)fVar4;
      fVar4 = (float10)FUN_00dde300(0xbf060a92,0x3f060a92);
      local_5c = (float)fVar4;
      fVar4 = (float10)FUN_00dde300(0xbf060a92,0x3f060a92);
      local_58 = (float)fVar4;
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        local_30 = local_60 * 100.0;
        local_2c = local_5c * 100.0;
        local_28 = local_58 * 100.0;
        local_24 = local_54 * 100.0;
        FUN_0091ac60(&local_30);
      }
      *(undefined4 *)(param_1 + 0x9a0) = 0;
      return;
    }
    break;
  case 5:
    *(int *)(param_1 + 0x9a0) = *(int *)(param_1 + 0x9a0) + 1;
    if (0x78 < *(int *)(param_1 + 0x9a0)) {
      FUN_00917060(0x3f800000);
      FUN_009166f0(0x41700000);
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    }
  }
  return;
}

// 00609BF0  Em0131Debris::vf1B8  size=34  [class]
void __thiscall Em0131Debris::vf1B8(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if (0 < param_4) {
    do {
      *param_2 = *(undefined4 *)(param_1 + 0x4b0);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 00609C20  Em0131Debris::vf1BC  size=110  [class]
void __thiscall Em0131Debris::vf1BC(int param_1,int *param_2)

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

// 00AB5B00  Em0131Debris::Em0131Debris  size=18  [class]
undefined4 * __fastcall Em0131Debris::Em0131Debris(undefined4 *param_1)

{
  RayArmorDebris::RayArmorDebris();
  *param_1 = vftable;
  return param_1;
}

// 00AB5B20  Em0131Debris::vf04  size=6  [class]
undefined * Em0131Debris::vf04(void)

{
  return &DAT_01b35524;
}

// 00ABA690  Em0131Debris::vf00  size=105  [class]
undefined4 * __thiscall Em0131Debris::vf00(undefined4 *param_1,byte param_2)

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

