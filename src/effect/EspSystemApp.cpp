// src/effect/EspSystemApp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CEFA0..009EE540, 2 functions

#include "mgrr.h"

// 009CEFA0  EspSystemApp::StartupGame  size=49  [class]
undefined4 EspSystemApp::StartupGame(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f4aff0(param_1);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01659560);
    return 0;
  }
  DAT_01b78870 = &DAT_01b788c0;
  return 1;
}

// 009EE540  EspSystemApp::StartupScene  size=471  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EspSystemApp::StartupScene(void)

{
  int iVar1;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00f4c350(&DAT_01be91bc);
  if (iVar1 != 0) {
    iVar1 = FUN_00ec8000(&DAT_01b7bdf8);
    if (iVar1 != 0) {
      iVar1 = EffectPrimitive::Startup(&DAT_01b7bdf8);
      if (iVar1 != 0) {
        FUN_00f40e50();
        local_1c = 0;
        local_20 = 10000;
        local_14 = 0x41200000;
        local_34 = 10000;
        local_30 = 10000;
        local_10 = 0x41a00000;
        local_c = 0x41f00000;
        DAT_01b78870 = &DAT_01b788c0;
        local_8 = 0x42480000;
        local_2c = 1;
        local_28 = 300;
        local_4 = 0x42c80000;
        local_24 = 200;
        local_38 = &DAT_01b7bdf8;
        local_18 = 0x40400000;
        iVar1 = FUN_00f44440(&local_38);
        if (iVar1 != 0) {
          iVar1 = FUN_00dd7240();
          if (iVar1 != 0) {
            _DAT_01b7a908 = 0;
            _DAT_01b7a90c = 0;
            _DAT_01b7a910 = 0;
            FUN_00ec47c0();
            DAT_01eddb20 = &DAT_0188f578;
            EffectAreaScrSystem::Startup(&DAT_01b7bd48,8);
            local_60 = 6;
            local_64 = 7;
            local_5c = 8;
            local_58 = 9;
            local_54 = 0x1000;
            FUN_00ec67e0(&local_64);
            FUN_009cc430();
            EffectAttrSystem::Startup(&DAT_01b7bd48);
            FUN_009e5f90();
            uStack_50 = DAT_01be91bc;
            uStack_4c = DAT_01be91c0;
            FUN_009dca60(&uStack_50);
            DAT_01b78864 = 0xffffffff;
            DAT_01b78860 = 0;
            EspBullet::System::startup(100);
            DAT_01b78868 = 0;
            DAT_01b7886c = 1;
            return 1;
          }
          FUN_00dd5650(&DAT_0165b628);
          return 0;
        }
        FUN_00dd5650(&DAT_0165b670);
      }
    }
  }
  return 0;
}

