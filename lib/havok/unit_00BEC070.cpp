// lib/havok/unit_00BEC070.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BEC070..00BEC070, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00BEC070  hkpAllCdPointCollector::hkpAllCdPointCollector_32  size=985  [run]
void __thiscall hkpAllCdPointCollector::hkpAllCdPointCollector_32(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_250;
  undefined4 local_248;
  int local_244;
  undefined4 local_240;
  int local_23c;
  int local_238;
  int local_234;
  float local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  undefined1 local_210 [96];
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined1 local_190 [396];
  
  local_230 = *(float *)(param_1 + 0x40);
  local_228 = *(float *)(param_1 + 0x48);
  local_248 = 0;
  local_244 = 0;
  local_224 = *(undefined4 *)(param_1 + 0x4c);
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  local_22c = *(float *)(param_1 + 0x44) + 1.0;
  uVar2 = FUN_00a1d5c0();
  FUN_004b7c50(0x20,uVar2);
  FUN_00c58840(&local_248,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x3efc),
               0x3f860a92,0x41400000);
  bVar1 = false;
  local_234 = 0;
  local_250 = local_244;
  if (local_244 != local_23c * 0x70 + local_244) {
    do {
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        local_220 = *(float *)(iVar4 + 0x40);
        local_21c = *(float *)(iVar4 + 0x44);
        local_218 = *(float *)(iVar4 + 0x48);
        local_214 = *(undefined4 *)(iVar4 + 0x4c);
        if ((9.0 <= (local_218 - local_228) * (local_218 - local_228) +
                    (local_220 - local_230) * (local_220 - local_230)) &&
           (((local_21c - local_22c < 225.0 != (local_21c - local_22c == 225.0) &&
             (iVar4 = FUN_00c15090(), iVar4 != 0)) && (iVar4 = FUN_00a81330(), iVar3 != iVar4)))) {
          local_1a0 = local_190;
          local_1ac = 0x7f7fffee;
          local_1b0 = vftable;
          local_198 = 0x80000008;
          local_19c = 0;
          iVar3 = FUN_009f8b40();
          hkpAllCdPointCollector_24
                    (&local_1b0,&local_230,&local_220,0x3e99999a,iVar3 << 0x10 | 0x1d,
                     "Ray Missile Run");
          if (local_19c < 1) {
            if (!bVar1) {
              FUN_00a603a0();
              FUN_00bc6e00(local_210,param_1 + 0x40,&local_220);
              uVar2 = FUN_00a7c7f0();
              FUN_00a7c960(uVar2);
              local_234 = 1;
              cXml::cXml_7();
            }
            bVar1 = true;
          }
          hkpCdPointCollector::hkpCdPointCollector();
        }
      }
      local_250 = local_250 + 0x70;
    } while (local_250 != local_23c * 0x70 + local_244);
  }
  if ((param_2 != 0) && (local_234 == 0)) {
    local_23c = 0;
    FUN_00c58840(&local_248,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x3efc),
                 0x3fc49809,0x42340000);
    local_250 = local_244;
    if (local_244 != local_23c * 0x70 + local_244) {
      do {
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
          local_220 = *(float *)(iVar4 + 0x40);
          local_21c = *(float *)(iVar4 + 0x44);
          local_218 = *(float *)(iVar4 + 0x48);
          local_214 = *(undefined4 *)(iVar4 + 0x4c);
          if ((4.0 <= (local_218 - local_228) * (local_218 - local_228) +
                      (local_220 - local_230) * (local_220 - local_230)) &&
             (((local_21c - local_22c < 900.0 != (local_21c - local_22c == 900.0) &&
               (iVar4 = FUN_00c15090(), iVar4 != 0)) && (iVar4 = FUN_00a81330(), iVar3 != iVar4))))
          {
            if (!bVar1) {
              FUN_00a603a0();
              FUN_00bc6e00(local_210,param_1 + 0x40,&local_220);
              uVar2 = FUN_00a7c7f0();
              FUN_00a7c960(uVar2);
              cXml::cXml_7();
            }
            bVar1 = true;
          }
        }
        local_250 = local_250 + 0x70;
      } while (local_250 != local_23c * 0x70 + local_244);
    }
  }
  if ((local_244 != 0) && (local_23c = 0, local_238 != 0)) {
    FUN_00dd48d0(local_244,0);
  }
  return;
}

