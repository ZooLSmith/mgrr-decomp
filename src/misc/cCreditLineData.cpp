// src/misc/cCreditLineData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC4400..00CC4400, 1 functions

#include "types.h"

// 00CC4400  cCreditLineData::readXml  size=370  [class]
undefined4 __thiscall cCreditLineData::readXml(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint unaff_EDI;
  uint uStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint *puStack_28;
  uint uStack_24;
  char *pcStack_20;
  uint uStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  undefined *puStack_10;
  
  puStack_10 = &DAT_0164fcc8;
  uStack_14 = param_3;
  puStack_18 = (undefined *)0xcc441c;
  uStack_1c = (**(code **)(*param_2 + 0x18))();
  if (uStack_1c == 0xffffffff) {
    puStack_18 = &DAT_016b7834;
    uStack_1c = 0xcc442b;
    FUN_00dd5650();
    return 0;
  }
  puStack_18 = &stack0xfffffffc;
  pcStack_20 = (char *)0xcc4445;
  (**(code **)(*param_2 + 0x68))();
  if (unaff_EDI < 4) {
    *param_1 = unaff_EDI;
  }
  else {
    pcStack_20 = &DAT_016b77f8;
    uStack_24 = 0xcc445c;
    FUN_00dd5650();
  }
  pcStack_20 = "LeftOut";
  uStack_24 = param_3;
  puStack_28 = (uint *)0xcc446e;
  uStack_2c = (**(code **)(*param_2 + 0x18))();
  if (uStack_2c != 0xffffffff) {
    puStack_28 = &uStack_14;
    puStack_30 = (uint *)0xcc4482;
    (**(code **)(*param_2 + 0x68))();
    param_1[1] = uStack_14;
  }
  puStack_28 = (uint *)0x16b77e8;
  uStack_2c = param_3;
  puStack_30 = (uint *)0xcc4498;
  uStack_34 = (**(code **)(*param_2 + 0x18))();
  if (uStack_34 != 0xffffffff) {
    puStack_30 = &uStack_1c;
    (**(code **)(*param_2 + 0x68))();
    param_1[2] = uStack_1c;
  }
  puStack_30 = (uint *)0x16b77e0;
  uStack_34 = param_3;
  iVar1 = (**(code **)(*param_2 + 0x18))();
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,&uStack_24);
    param_1[3] = uStack_24;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"RightIn");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,&uStack_2c);
    param_1[4] = uStack_2c;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"RightOut");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,&uStack_34);
    param_1[5] = uStack_34;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"Effect");
  if (iVar1 != -1) {
    param_1[6] = 1;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"SpecialCenter");
  if (iVar1 != -1) {
    param_1[7] = 1;
  }
  return 1;
}

