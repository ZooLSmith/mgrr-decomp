// src/phase/app/p420.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48E40..00D704B0, 9 functions

#include "mgrr.h"
#include "P420.h"

// 00D48E40  P420::vf14  size=145  [class]
void P420::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = "P420_START";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d48e70:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d48e75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d48e70;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d48e75:
  if (iVar3 != 0) {
    pbVar2 = &DAT_0163cdb8;
    do {
      bVar1 = *param_2;
      bVar5 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00d48ea0:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00d48ea5;
      }
      if (bVar1 == 0) break;
      bVar1 = param_2[1];
      bVar5 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00d48ea0;
      param_2 = param_2 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d48ea5:
    if (iVar3 != 0) {
      return;
    }
  }
  FUN_00c81e90(0x1b);
  FUN_00c81e90(0x1c);
  FUN_00c81e90(0x1d);
  return;
}

// 00D48EE0  P420::vf1C  size=3  [class]
void P420::vf1C(void)

{
  return;
}

// 00D48EF0  P420::vf0C  size=1  [class]
void P420::vf0C(void)

{
  return;
}

// 00D48F00  P420::vf10  size=168  [class]
void __fastcall P420::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00a6dd90();
  iVar2 = (**(code **)(*piVar1 + 0x9c))(0x400);
  if (iVar2 != 0) {
    uVar3 = FUN_00e03ea0("Bm_1010_Esp001");
    FUN_00a71830(0,uVar3);
    uVar3 = FUN_00e03ea0("Bm_1010_Esp002");
    FUN_00a71830(0,uVar3);
    uVar3 = FUN_00e03ea0("Bm_1010_Esp003");
    FUN_00a71830(0,uVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x120) + 8))(0,0,0);
  FUN_00c434a0(0);
  FUN_00c1bdd0();
  return;
}

// 00D48FB0  FUN_00d48fb0  size=380  [callgraph]
undefined4 FUN_00d48fb0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  
  pcVar4 = "P420_GATE";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d48fe0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d48fe5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d48fe0;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d48fe5:
  if (iVar3 != 0) {
    pcVar4 = "P420_GATE_2";
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00d49014:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d49019;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_00d49014;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d49019:
    if (iVar3 != 0) {
      pcVar4 = "P420_GATE_3";
      pbVar2 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_00d49048:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d4904d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_00d49048;
        pbVar2 = pbVar2 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d4904d:
      if (iVar3 != 0) {
        pbVar5 = &DAT_016bc704;
        pbVar2 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d49080:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d49085;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d49080;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d49085:
        if (iVar3 != 0) {
          pbVar5 = &DAT_016bc6f8;
          pbVar2 = param_1;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d490b4:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d490b9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d490b4;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d490b9:
          if (iVar3 != 0) {
            pbVar5 = (byte *)0x163bb9c;
            pbVar2 = param_1;
            do {
              bVar1 = *pbVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d490e4:
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d490e9;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d490e4;
              pbVar2 = pbVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d490e9:
            if (iVar3 != 0) {
              pcVar4 = "P420_GATE_OPEN2";
              do {
                bVar1 = *param_1;
                bVar6 = bVar1 < (byte)*pcVar4;
                if (bVar1 != *pcVar4) {
LAB_00d49114:
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d49119;
                }
                if (bVar1 == 0) break;
                bVar1 = param_1[1];
                bVar6 = bVar1 < (byte)pcVar4[1];
                if (bVar1 != pcVar4[1]) goto LAB_00d49114;
                param_1 = param_1 + 2;
                pcVar4 = pcVar4 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d49119:
              if (iVar3 != 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

// 00D49130  FUN_00d49130  size=100  [callgraph]
void FUN_00d49130(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = 0x3f800000;
  local_30 = 0;
  local_2c = param_4 * 0.017453292;
  local_28 = 0;
  local_24 = 0;
  FUN_00da8ea0();
  FUN_00a4d790(&local_20,&local_30,1);
  return;
}

// 00D5AE40  P420::vf18  size=686  [class]
void __fastcall P420::vf18(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  int *local_8;
  int local_4;
  
  if ((*(int *)(param_1 + 0x1d0) == 0) && (iVar2 = FUN_00937e00("p410_LOADING"), iVar2 != 0)) {
    FUN_00e5e050("Stop_r401_se_env_elevator_02",0);
    *(undefined4 *)(param_1 + 0x1d0) = 1;
  }
  if (((*(int *)(param_1 + 0x1d8) == 0) || (*(int *)(param_1 + 0x1dc) == 0)) ||
     (*(int *)(param_1 + 0x1e0) == 0)) {
    if (*(int *)(param_1 + 0x1d4) == 0) {
      iVar2 = FUN_00a7f4a0(0xd0408,param_1 + 0x1f0);
      if (*(int *)(param_1 + 0x224) != 0) {
        *(undefined4 *)(param_1 + 0x228) = 0;
      }
      iVar6 = *(int *)(param_1 + 500);
      if (iVar6 != *(int *)(param_1 + 500) + *(int *)(param_1 + 0x1f8) * 4) {
        do {
          local_8 = (int *)0xffffffff;
          iVar3 = FUN_00a81330();
          if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
            iVar3 = *(int *)(iVar3 + 0x4ec);
            if (iVar3 == *(int *)(param_1 + 0x1e4)) {
              local_8 = (int *)0x0;
            }
            else if (iVar3 == *(int *)(param_1 + 0x1e8)) {
              local_8 = (int *)0x1;
            }
            else if (iVar3 == *(int *)(param_1 + 0x1ec)) {
              local_8 = (int *)0x2;
            }
          }
          (**(code **)(*(int *)(param_1 + 0x220) + 8))(&local_8);
          iVar6 = iVar6 + 4;
        } while (iVar6 != *(int *)(param_1 + 500) + *(int *)(param_1 + 0x1f8) * 4);
      }
      if (6 < iVar2) {
        *(undefined4 *)(param_1 + 0x1d4) = 1;
      }
    }
    local_8 = *(int **)(param_1 + 0x224);
    local_4 = *(int *)(param_1 + 500);
    if (local_4 != local_4 + *(int *)(param_1 + 0x1f8) * 4) {
      do {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
          iVar6 = 0;
          if (0 < *(short *)(iVar2 + 0x324)) {
            piVar7 = (int *)(*(int *)(iVar2 + 800) + 0x60);
            do {
              pbVar5 = *(byte **)(*piVar7 + 0x40);
              if (pbVar5 != (byte *)0x0) {
                pbVar4 = &DAT_016bd620;
                do {
                  bVar1 = *pbVar4;
                  bVar8 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d5b020:
                    iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                    goto LAB_00d5b025;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar8 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d5b020;
                  pbVar4 = pbVar4 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d5b025:
                if (iVar3 == 0) {
                  if (((iVar6 != -1) && (iVar2 = iVar6 * 0x70 + *(int *)(iVar2 + 800), iVar2 != 0))
                     && ((*(byte *)(iVar2 + 0x38) & 1) != 0)) goto LAB_00d5b0cd;
                  break;
                }
              }
              iVar6 = iVar6 + 1;
              piVar7 = piVar7 + 0x1c;
            } while (iVar6 < *(short *)(iVar2 + 0x324));
          }
        }
        iVar2 = *local_8;
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x1d8) == 0) {
            FUN_00e5e050("set_r403_office01_glassbreak",0);
            *(undefined4 *)(param_1 + 0x1d8) = 1;
          }
        }
        else if (iVar2 == 1) {
          if (*(int *)(param_1 + 0x1dc) == 0) {
            FUN_00e5e050("set_r403_office02_glassbreak",0);
            *(undefined4 *)(param_1 + 0x1dc) = 1;
          }
        }
        else if ((iVar2 == 2) && (*(int *)(param_1 + 0x1e0) == 0)) {
          FUN_00e5e050("set_r403_pathway_glassbreak",0);
          *(undefined4 *)(param_1 + 0x1e0) = 1;
        }
LAB_00d5b0cd:
        local_8 = local_8 + 1;
        local_4 = local_4 + 4;
      } while (local_4 != *(int *)(param_1 + 500) + *(int *)(param_1 + 0x1f8) * 4);
    }
  }
  return;
}

// 00D62860  P420::vf08  size=380  [class]
void __fastcall P420::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_120 [284];
  
  FUN_00c81e90(0x2b);
  iVar1 = FUN_00d48fb0(&DAT_018b917c);
  if (iVar1 == 0) {
    FUN_00c81e90(0x28);
    FUN_00c81e90(0x29);
    FUN_00c81e90(0x2a);
  }
  else {
    iVar1 = FUN_00c81c60(0x28);
    if (iVar1 == 0) {
      iVar1 = FUN_00c81c60(0x29);
      if (iVar1 == 0) {
        iVar1 = FUN_00c81c60(0x2a);
        if (iVar1 == 0) goto LAB_00d62960;
        uVar4 = 0x42b60000;
        uVar3 = 0xc22d3333;
        uVar2 = 0x4299cccd;
      }
      else {
        uVar4 = 0x42a80000;
        uVar3 = 0xc2713333;
        uVar2 = 0x410e6666;
      }
    }
    else {
      uVar4 = 0xc2ec0000;
      uVar3 = 0xc20ecccd;
      uVar2 = 0x41bc0000;
    }
    FUN_00d49130(uVar2,0x41a00000,uVar3,uVar4);
  }
LAB_00d62960:
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  uVar2 = FUN_00e03ea0(&DAT_016bde50);
  *(undefined4 *)(param_1 + 0x1e4) = uVar2;
  uVar2 = FUN_00e03ea0(&DAT_016bde48);
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  uVar2 = FUN_00e03ea0(&DAT_016bde40);
  *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  FUN_00e01eb0(param_1 + 0x120);
  FUN_00e01540(0x400,0x14,local_120);
  return;
}

// 00D704B0  P420::vf00  size=30  [class]
undefined4 __thiscall P420::vf00(undefined4 param_1,byte param_2)

{
  lib::Array<EntityHandle>::Array<EntityHandle>_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

