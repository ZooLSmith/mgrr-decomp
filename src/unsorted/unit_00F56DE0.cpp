// src/unsorted/unit_00F56DE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F56DE0..00F58090, 4 functions

#include "types.h"

// 00F56DE0  FUN_00f56de0  size=843  [run]
undefined4 __thiscall FUN_00f56de0(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  float10 fVar5;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_34 = param_1 + 4;
  local_38 = param_1;
  iVar2 = FUN_00f9cae0(8,param_2,param_3);
  if (iVar2 != 0) {
    local_3c = param_1 + 0x2c;
    iVar2 = FUN_00f9cae0(8,param_2,param_3);
    if (iVar2 != 0) {
      local_40 = FUN_00f99ca0();
      iVar2 = FUN_00f99ca0();
      FUN_00ddbbb0();
      FUN_00ddbbd0(0xdeedbeef);
      if (0 < param_2) {
        puVar4 = (undefined2 *)(iVar2 + 6);
        puVar3 = (undefined2 *)(local_40 + 4);
        iVar2 = iVar2 - local_40;
        local_40 = param_2;
        do {
          fVar5 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_30 = (float)fVar5;
          fVar5 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_2c = (float)fVar5;
          fVar5 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_28 = (float)fVar5;
          fVar5 = (float10)FUN_00dde300(0,0x3f800000);
          local_24 = (float)fVar5;
          FUN_00f4fec0(&local_30,local_44);
          uVar1 = FUN_00f95d30(local_30);
          puVar3[-2] = uVar1;
          uVar1 = FUN_00f95d30(local_2c);
          puVar3[-1] = uVar1;
          uVar1 = FUN_00f95d30(local_28);
          *puVar3 = uVar1;
          uVar1 = FUN_00f95d30(local_24);
          puVar3[1] = uVar1;
          fVar5 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_20 = (float)fVar5;
          fVar5 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_1c = (float)fVar5;
          fVar5 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_18 = (float)fVar5;
          fVar5 = (float10)FUN_00dde300(0,0x3f800000);
          local_14 = (float)fVar5;
          FUN_00f4fec0(&local_20,local_44);
          uVar1 = FUN_00f95d30(local_20);
          puVar4[-3] = uVar1;
          uVar1 = FUN_00f95d30(local_1c);
          puVar4[-2] = uVar1;
          uVar1 = FUN_00f95d30(local_18);
          *(undefined2 *)(iVar2 + (int)puVar3) = uVar1;
          uVar1 = FUN_00f95d30(local_14);
          *puVar4 = uVar1;
          FUN_00dde300(0xbf800000,0x3f800000);
          FUN_00dde300(0xbf800000,0x3f800000);
          FUN_00dde300(0xbf800000,0x3f800000);
          FUN_00dde300(0,0x3f800000);
          FUN_00dde300(0xbf800000,0x3f800000);
          FUN_00dde300(0xbf800000,0x3f800000);
          FUN_00dde300(0xbf800000,0x3f800000);
          FUN_00dde300(0,0x3f800000);
          puVar3 = puVar3 + 4;
          puVar4 = puVar4 + 4;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
        local_40 = 0;
      }
      *(int *)(local_38 + 0x54) = param_2;
      FUN_00ddbbc0();
      FUN_00f99d30();
      FUN_00f99d30();
      return 1;
    }
  }
  return 0;
}

// 00F57130  FUN_00f57130  size=2207  [run]
void __thiscall FUN_00f57130(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  float10 fVar12;
  float local_60;
  uint local_5c;
  uint local_58;
  int local_50;
  undefined2 *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14 [4];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_60;
  iVar5 = param_2 * 4;
  local_48 = param_1 + 4;
  local_50 = param_4;
  local_40 = param_1;
  iVar4 = FUN_00f9cae0(8,iVar5,param_3);
  if (iVar4 != 0) {
    local_44 = param_1 + 0x2c;
    iVar4 = FUN_00f9cae0(8,iVar5,param_3);
    if (iVar4 != 0) {
      local_3c = param_1 + 0x54;
      iVar4 = FUN_00f9cae0(8,iVar5,param_3);
      if (iVar4 != 0) {
        local_38 = param_1 + 0x7c;
        iVar5 = FUN_00f9cae0(8,iVar5,param_3);
        if (iVar5 != 0) {
          local_1c = param_1 + 0xa4;
          iVar5 = FUN_00f9c7d0(param_2 * 6,local_50);
          if (iVar5 != 0) {
            iVar4 = FUN_00f99ca0();
            local_58 = FUN_00f99ca0();
            local_50 = FUN_00f99ca0();
            local_5c = FUN_00f99ca0();
            iVar5 = FUN_00f999c0();
            local_24 = iVar5;
            FUN_00ddbbb0();
            FUN_00ddbbd0(0xdeedbeef);
            if (0 < param_2) {
              local_4c = (undefined2 *)(iVar4 + 4);
              local_28 = local_58 - iVar4;
              local_20 = local_50 - iVar4;
              local_18 = local_5c - iVar4;
              local_34 = local_50 - local_58;
              local_30 = local_5c - local_58;
              puVar10 = (undefined2 *)(local_5c + 10);
              puVar11 = (undefined2 *)(local_50 + 8);
              puVar8 = (undefined2 *)(local_58 + 6);
              local_2c = local_5c - local_50;
              local_50 = param_2;
              do {
                local_5c = 0;
                do {
                  iVar5 = 0;
                  local_58 = local_5c & 3;
                  do {
                    if ((int)local_58 < 3) {
                      uVar1 = 0xbf800000;
                    }
                    else {
                      uVar1 = 0;
                    }
                    fVar12 = (float10)FUN_00dde300(uVar1,0x3f800000);
                    local_14[iVar5] = (float)fVar12;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < 4);
                  local_58 = local_5c & 3;
                  if ((local_58 == 0) || (local_58 == 1)) {
                    uVar9 = 0;
                    local_60 = local_14[2] * local_14[2] +
                               local_14[0] * local_14[0] + local_14[1] * local_14[1];
                    fVar12 = (float10)FUN_00fdef70();
                    while (local_60 = (float)fVar12, 1.0 < local_60) {
                      fVar12 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                      local_14[0] = (float)fVar12;
                      fVar12 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                      local_14[1] = (float)fVar12;
                      fVar12 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                      local_14[2] = (float)fVar12;
                      uVar9 = uVar9 + 1;
                      if (10 < uVar9) {
                        FUN_00dd5650(&DAT_016e12d0);
                        local_60 = local_14[2] * local_14[2] +
                                   local_14[0] * local_14[0] + local_14[1] * local_14[1];
                        fVar12 = (float10)FUN_00fdef70();
                        local_60 = 1.0 / (float)fVar12;
                        FUN_00dde300(0,0x3f800000);
                        local_14[0] = local_60 * local_14[0];
                        local_14[1] = local_60 * local_14[1];
                        local_14[2] = local_60 * local_14[2];
                        break;
                      }
                      local_60 = local_14[2] * local_14[2] +
                                 local_14[0] * local_14[0] + local_14[1] * local_14[1];
                      fVar12 = (float10)FUN_00fdef70();
                    }
                  }
                  switch(local_58) {
                  case 0:
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar2 = local_4c;
                    local_4c[-2] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar2[-1] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    *puVar2 = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar2[1] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar2[2] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar2[3] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar2[4] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar2[5] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar2[6] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar2[7] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar2[8] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar2[9] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar2[10] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar2[0xb] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar2[0xc] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar2[0xd] = uVar3;
                    break;
                  case 1:
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar8[-3] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar8[-2] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    *(undefined2 *)(local_28 + (int)local_4c) = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    *puVar8 = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar8[1] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar8[2] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar8[3] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar8[4] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar8[5] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar8[6] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar8[7] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar8[8] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar8[9] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar8[10] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar8[0xb] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar8[0xc] = uVar3;
                    break;
                  case 2:
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar11[-4] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar11[-3] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    *(undefined2 *)(local_20 + (int)local_4c) = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    *(undefined2 *)((int)puVar8 + local_34) = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    *puVar11 = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar11[1] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar11[2] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar11[3] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar11[4] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar11[5] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar11[6] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar11[7] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar11[8] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar11[9] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar11[10] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[3]);
                    puVar11[0xb] = uVar3;
                    break;
                  case 3:
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar10[-5] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar10[-4] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    local_60 = local_14[3] + 0.0;
                    *(undefined2 *)(local_18 + (int)local_4c) = uVar3;
                    uVar3 = FUN_00f95d30(local_60);
                    *(undefined2 *)((int)puVar8 + local_30) = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    *(undefined2 *)((int)puVar11 + local_2c) = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    *puVar10 = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    local_60 = local_14[3] + 1.0001;
                    puVar10[1] = uVar3;
                    uVar3 = FUN_00f95d30(local_60);
                    puVar10[2] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar10[3] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar10[4] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar10[5] = uVar3;
                    local_60 = local_14[3] + 2.0001;
                    uVar3 = FUN_00f95d30(local_60);
                    puVar10[6] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[0]);
                    puVar10[7] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[1]);
                    puVar10[8] = uVar3;
                    uVar3 = FUN_00f95d30(local_14[2]);
                    puVar10[9] = uVar3;
                    local_60 = local_14[3] + 3.0001;
                    uVar3 = FUN_00f95d30(local_60);
                    puVar10[10] = uVar3;
                  }
                  local_5c = local_5c + 1;
                } while ((int)local_5c < 4);
                local_4c = local_4c + 0x10;
                puVar8 = puVar8 + 0x10;
                puVar11 = puVar11 + 0x10;
                puVar10 = puVar10 + 0x10;
                local_50 = local_50 + -1;
              } while (local_50 != 0);
              local_50 = 0;
              param_1 = local_40;
              iVar5 = local_24;
            }
            uVar9 = 0;
            if (0 < param_2) {
              uVar6 = 0;
              sVar7 = 2;
              do {
                *(short *)(iVar5 + uVar6 * 0xc) = sVar7 + -2;
                *(short *)(iVar5 + 2 + uVar6 * 0xc) = sVar7 + -1;
                *(short *)(iVar5 + 4 + uVar6 * 0xc) = sVar7;
                *(short *)(iVar5 + 6 + uVar6 * 0xc) = sVar7 + -2;
                *(short *)(iVar5 + 8 + uVar6 * 0xc) = sVar7;
                uVar9 = uVar9 + 1;
                *(short *)(iVar5 + 10 + uVar6 * 0xc) = sVar7 + 1;
                uVar6 = uVar9 & 0xffff;
                sVar7 = sVar7 + 4;
                param_1 = local_40;
              } while ((int)uVar6 < param_2);
            }
            *(int *)(param_1 + 0xc4) = param_2;
            FUN_00ddbbc0();
            FUN_00f99a40();
            FUN_00f99d30();
            FUN_00f99d30();
            FUN_00f99d30();
            FUN_00f99d30();
            __security_check_cookie(local_4 ^ (uint)&local_60);
            return;
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_60);
  return;
}

// 00F579F0  FUN_00f579f0  size=1684  [run]
undefined4 __thiscall
FUN_00f579f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  short *psVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined1 local_d0 [4];
  short *local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  short *local_60;
  int local_5c;
  int local_58;
  float local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = param_2 * param_3;
  iVar5 = param_3 + -1;
  local_ac = iVar5 * param_2;
  local_9c = param_1 + 4;
  local_c8 = iVar5;
  local_68 = iVar7;
  local_58 = param_1;
  iVar3 = FUN_00f9cae0(8,iVar7,param_4);
  if (iVar3 != 0) {
    local_a4 = param_1 + 0x2c;
    iVar3 = FUN_00f9cae0(8,iVar7,param_4);
    if (iVar3 != 0) {
      local_98 = param_1 + 0x54;
      iVar3 = FUN_00f9cae0(8,iVar7,param_4);
      if (iVar3 != 0) {
        local_94 = param_1 + 0x7c;
        iVar3 = FUN_00f9cae0(8,iVar7,param_4);
        if (iVar3 != 0) {
          local_a0 = param_1 + 0xa4;
          iVar3 = FUN_00f9c7d0(local_ac,param_5);
          if (iVar3 != 0) {
            local_b4 = FUN_00f99ca0();
            local_bc = FUN_00f99ca0();
            local_b8 = FUN_00f99ca0();
            puVar4 = (undefined4 *)FUN_00f99ca0();
            local_4c = puVar4;
            local_60 = (short *)FUN_00f999c0();
            FUN_00ddbbb0();
            FUN_00ddbbd0(0xdeedbeef);
            local_c4 = 0;
            local_54 = 1.0 / (float)local_c8;
            if (0 < iVar7) {
              local_70 = local_bc - local_b4;
              local_50 = local_b8 - local_b4;
              local_44 = (int)puVar4 - local_b4;
              local_48 = local_b8 - local_bc;
              local_64 = (int)puVar4 - local_bc;
              psVar8 = (short *)(local_bc + 6);
              puVar6 = (undefined4 *)(local_b4 + 4);
              local_c0 = local_b8 - (int)puVar4;
              do {
                local_cc = psVar8;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_80 = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_7c = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_78 = (float)fVar10;
                local_74 = 0;
                FUN_00f507f0(&local_80,local_d0);
                uVar1 = FUN_00f95d30(local_80);
                *(undefined2 *)(puVar6 + -1) = uVar1;
                uVar1 = FUN_00f95d30(local_7c);
                *(undefined2 *)((int)puVar6 + -2) = uVar1;
                uVar1 = FUN_00f95d30(local_78);
                *(undefined2 *)puVar6 = uVar1;
                uVar1 = FUN_00f95d30(local_74);
                *(undefined2 *)((int)puVar6 + 2) = uVar1;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_90 = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_8c = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_88 = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0,0x3f800000);
                local_84 = (float)fVar10;
                FUN_00f507f0(&local_90,local_d0);
                sVar2 = FUN_00f95d30(local_90);
                psVar8[-3] = sVar2;
                sVar2 = FUN_00f95d30(local_8c);
                psVar8[-2] = sVar2;
                uVar1 = FUN_00f95d30(local_88);
                *(undefined2 *)(local_70 + (int)puVar6) = uVar1;
                sVar2 = FUN_00f95d30(local_84);
                *psVar8 = sVar2;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_40 = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_3c = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_38 = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0,0x3f800000);
                local_34 = (float)fVar10;
                uVar1 = FUN_00f95d30(local_40);
                *(undefined2 *)((int)puVar4 + local_c0) = uVar1;
                uVar1 = FUN_00f95d30(local_3c);
                *(undefined2 *)(local_c0 + 2 + (int)puVar4) = uVar1;
                uVar1 = FUN_00f95d30(local_38);
                *(undefined2 *)(local_50 + (int)puVar6) = uVar1;
                uVar1 = FUN_00f95d30(local_34);
                *(undefined2 *)(local_48 + (int)psVar8) = uVar1;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_20 = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_1c = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
                local_18 = (float)fVar10;
                fVar10 = (float10)FUN_00dde300(0,0x3f800000);
                local_14 = (float)fVar10;
                uVar1 = FUN_00f95d30(local_20);
                *(undefined2 *)puVar4 = uVar1;
                uVar1 = FUN_00f95d30(local_1c);
                *(undefined2 *)((int)puVar4 + 2) = uVar1;
                uVar1 = FUN_00f95d30(local_18);
                *(undefined2 *)(local_44 + (int)puVar6) = uVar1;
                uVar1 = FUN_00f95d30(local_14);
                *(undefined2 *)(local_64 + (int)psVar8) = uVar1;
                local_b0 = 1;
                if (1 < param_3) {
                  puVar9 = (undefined4 *)((int)puVar4 + local_c0 + 8);
                  local_24 = (int)local_4c - local_b8;
                  local_5c = local_bc - local_b8;
                  local_a8 = local_b4 - local_b8;
                  do {
                    *(undefined4 *)(local_a8 + (int)puVar9) = puVar6[-1];
                    local_6c = (float)local_b0 * local_54;
                    *(undefined4 *)(local_a8 + 4 + (int)puVar9) = *puVar6;
                    *(undefined4 *)(local_5c + (int)puVar9) = *(undefined4 *)(local_cc + -3);
                    *(undefined4 *)(local_5c + 4 + (int)puVar9) = *(undefined4 *)(local_cc + -1);
                    *puVar9 = *(undefined4 *)((int)puVar4 + local_c0);
                    puVar9[1] = *(undefined4 *)((int)puVar4 + local_c0 + 4);
                    *(undefined4 *)(local_24 + (int)puVar9) = *puVar4;
                    *(undefined4 *)(local_24 + 4 + (int)puVar9) = puVar4[1];
                    uVar1 = FUN_00f95d30(local_6c);
                    *(undefined2 *)(local_a8 + 6 + (int)puVar9) = uVar1;
                    local_b0 = local_b0 + 1;
                    puVar9 = puVar9 + 2;
                    psVar8 = local_cc;
                  } while (local_b0 < param_3);
                }
                local_c4 = local_c4 + param_3;
                psVar8 = psVar8 + param_3 * 4;
                puVar6 = puVar6 + param_3 * 2;
                puVar4 = puVar4 + param_3 * 2;
                iVar5 = local_c8;
                local_cc = psVar8;
              } while (local_c4 < local_68);
            }
            local_c8 = 0;
            local_c4 = 0;
            if (0 < local_ac) {
              local_cc = local_60;
              do {
                iVar3 = 0;
                if (0 < iVar5) {
                  psVar8 = local_cc;
                  do {
                    *psVar8 = (short)local_c4 + (short)iVar3;
                    psVar8[1] = (short)local_c4 + 1 + (short)iVar3;
                    iVar3 = iVar3 + 1;
                    psVar8 = psVar8 + 2;
                  } while (iVar3 < iVar5);
                }
                local_c4 = local_c4 + param_3;
                local_c8 = local_c8 + iVar5;
                local_cc = local_cc + iVar5 * 2;
              } while (local_c8 < local_ac);
            }
            *(int *)(local_58 + 0xc4) = param_2;
            *(int *)(local_58 + 200) = param_3;
            FUN_00ddbbc0();
            FUN_00f99a40();
            FUN_00f99d30();
            FUN_00f99d30();
            FUN_00f99d30();
            FUN_00f99d30();
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00F58090  FUN_00f58090  size=290  [run]
undefined4
FUN_00f58090(int param_1,uint param_2,short *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined1 local_8 [8];
  
  FUN_00ddbbb0();
  FUN_00ddbbd0(0xdeedbeef);
  uVar3 = param_2;
  iVar5 = param_1;
  if (0 < (int)param_2) {
    do {
      FUN_00f50d80(local_8,iVar5);
      uVar3 = uVar3 - 1;
      iVar5 = iVar5 + 0x100;
    } while (uVar3 != 0);
  }
  uVar3 = 0;
  if (0 < (int)param_2) {
    sVar4 = 1;
    psVar1 = param_3;
    do {
      iVar5 = 3;
      sVar2 = sVar4;
      do {
        *psVar1 = sVar2 + -1;
        psVar1[1] = sVar2;
        psVar1[2] = sVar2 + 1;
        psVar1[3] = sVar2 + 1;
        psVar1[4] = sVar2;
        sVar2 = sVar2 + 2;
        psVar1[5] = sVar2;
        psVar1 = psVar1 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar3 = uVar3 + 1;
      sVar4 = sVar4 + 8;
    } while ((int)(uVar3 & 0xffff) < (int)param_2);
  }
  iVar6 = (param_2 & 0xffffff) << 3;
  iVar5 = FUN_00f9cae0(0x20,iVar6,param_5);
  if ((((iVar5 != 0) && (iVar5 = FUN_00f99d50(param_1,0x20,iVar6), iVar5 != 0)) &&
      (iVar5 = FUN_00f9c7d0(param_4,param_6), iVar5 != 0)) &&
     (iVar5 = FUN_00f99a60(param_3,2,param_4), iVar5 != 0)) {
    FUN_00ddbbc0();
    return 1;
  }
  FUN_00ddbbc0();
  return 0;
}

