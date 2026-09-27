// src/phase/app/p320.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D484E0..00D6CFA0, 9 functions

#include "mgrr.h"
#include "P320.h"

// 00D484E0  P320::vf20  size=3  [class]
void P320::vf20(void)

{
  return;
}

// 00D484F0  P320::vf28  size=3  [class]
void P320::vf28(void)

{
  return;
}

// 00D48500  P320::vf1C  size=3  [class]
void P320::vf1C(void)

{
  return;
}

// 00D48510  P320::vf08  size=60  [class]
void __fastcall P320::vf08(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  uVar1 = FUN_00e03ea0("office");
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  uVar1 = FUN_00e03ea0("passage");
  *(undefined4 *)(param_1 + 300) = uVar1;
  return;
}

// 00D48550  P320::vf0C  size=1  [class]
void P320::vf0C(void)

{
  return;
}

// 00D48560  P320::vf10  size=1  [class]
void P320::vf10(void)

{
  return;
}

// 00D52E20  P320::vf14  size=203  [class]
void P320::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = "P320_OFFICE";
  do {
    bVar1 = *param_2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d52e50:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d52e55;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d52e50;
    param_2 = param_2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d52e55:
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_00c14bb0();
    iVar2 = *piVar3;
    uVar4 = FUN_00e03ea0("_hvk_sisenoff");
    iVar2 = (**(code **)(iVar2 + 0x2c))(uVar4);
    if (iVar2 != 0) {
      FUN_004066f0();
      FUN_00913100(iVar2,*(uint *)(iVar2 + 0x2c) & 0xffff0014 | 0x14);
      FUN_00917bd0(iVar2,0x10);
      if (DAT_01885d68 != 1) {
        piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar3 = *piVar3 + -1;
        if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  return;
}

// 00D5A860  P320::vf18  size=563  [class]
void __fastcall P320::vf18(int param_1)

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
  
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x124) == 0)) {
    if (*(int *)(param_1 + 0x11c) == 0) {
      iVar2 = FUN_00a7f4a0(0xd0300,param_1 + 0x130);
      if (*(int *)(param_1 + 0x1c4) != 0) {
        *(undefined4 *)(param_1 + 0x1c8) = 0;
      }
      iVar6 = *(int *)(param_1 + 0x134);
      if (iVar6 != *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x138) * 4) {
        do {
          local_8 = (int *)0xffffffff;
          iVar3 = FUN_00a81330();
          if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
            if (*(int *)(iVar3 + 0x4ec) == *(int *)(param_1 + 0x128)) {
              local_8 = (int *)0x0;
            }
            else if (*(int *)(iVar3 + 0x4ec) == *(int *)(param_1 + 300)) {
              local_8 = (int *)0x1;
            }
          }
          (**(code **)(*(int *)(param_1 + 0x1c0) + 8))(&local_8);
          iVar6 = iVar6 + 4;
        } while (iVar6 != *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x138) * 4);
      }
      if (10 < iVar2) {
        *(undefined4 *)(param_1 + 0x11c) = 1;
      }
    }
    local_8 = *(int **)(param_1 + 0x1c4);
    local_4 = *(int *)(param_1 + 0x134);
    if (local_4 != local_4 + *(int *)(param_1 + 0x138) * 4) {
      do {
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
          iVar6 = 0;
          if (0 < *(short *)(iVar2 + 0x324)) {
            piVar7 = (int *)(*(int *)(iVar2 + 800) + 0x60);
            do {
              pbVar5 = *(byte **)(*piVar7 + 0x40);
              if (pbVar5 != (byte *)0x0) {
                pbVar4 = &DAT_0163cd64;
                do {
                  bVar1 = *pbVar4;
                  bVar8 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d5a9e0:
                    iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                    goto LAB_00d5a9e5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar8 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d5a9e0;
                  pbVar4 = pbVar4 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d5a9e5:
                if (iVar3 == 0) {
                  if (((iVar6 != -1) && (iVar2 = iVar6 * 0x70 + *(int *)(iVar2 + 800), iVar2 != 0))
                     && ((*(byte *)(iVar2 + 0x38) & 1) != 0)) goto LAB_00d5aa64;
                  break;
                }
              }
              iVar6 = iVar6 + 1;
              piVar7 = piVar7 + 0x1c;
            } while (iVar6 < *(short *)(iVar2 + 0x324));
          }
        }
        if (*local_8 == 0) {
          if (*(int *)(param_1 + 0x120) == 0) {
            FUN_00e5e050("set_r303_office_glassbreak",0);
            *(undefined4 *)(param_1 + 0x120) = 1;
          }
        }
        else if ((*local_8 == 1) && (*(int *)(param_1 + 0x124) == 0)) {
          FUN_00e5e050("set_r303_pathway_glassbreak",0);
          *(undefined4 *)(param_1 + 0x124) = 1;
        }
LAB_00d5aa64:
        local_8 = local_8 + 1;
        local_4 = local_4 + 4;
      } while (local_4 != *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x138) * 4);
    }
  }
  return;
}

// 00D6CFA0  P320::vf00  size=30  [class]
undefined4 __thiscall P320::vf00(undefined4 param_1,byte param_2)

{
  lib::Array<EntityHandle>::Array<EntityHandle>_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

