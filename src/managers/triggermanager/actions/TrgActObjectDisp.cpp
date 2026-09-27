// src/managers/triggermanager/actions/TrgActObjectDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C96460..00C974B0, 2 functions

#include "mgrr.h"

// 00C96460  Trigger::Act::OBJECT_DISP  size=450  [class]
uint __fastcall Trigger::Act::OBJECT_DISP(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_460;
  undefined1 *local_45c;
  undefined4 local_458;
  int local_454;
  int local_450;
  int local_44c;
  char *local_448;
  int local_444;
  undefined1 local_440 [64];
  undefined1 local_400 [1024];
  
  local_45c = local_440;
  iVar3 = *(int *)(param_1 + 0x10);
  local_460 = 0;
  local_458 = 0x10;
  local_454 = 0;
  local_450 = 0;
  pcVar2 = (char *)(iVar3 + 0xc);
  if (*(int *)(iVar3 + 8) == -1) {
    FUN_00c77fc0(pcVar2,&local_460);
  }
  else {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 == (char *)(iVar3 + 0xd)) {
      FUN_00a814d0(&local_460,*(int *)(iVar3 + 8));
    }
    else {
      FUN_00c959c0(*(int *)(param_1 + 0x10) + 0xc,*(undefined4 *)(*(int *)(param_1 + 0x10) + 8),
                   &local_460);
    }
  }
  if (local_454 == 0) {
    if ((local_45c != (undefined1 *)0x0) && (local_454 = 0, local_450 != 0)) {
      FUN_00dd48d0(local_45c,0);
    }
    return 0;
  }
  uVar6 = 1;
  local_444 = 0;
  if (0 < local_454) {
    do {
      if ((*(int *)(local_45c + local_444 * 4) == 0) || (local_44c = FUN_00a7c8a0(), local_44c == 0)
         ) {
        uVar6 = 0;
        uVar4 = FUN_00959930(local_400,&DAT_016b0e0c,*(int *)(param_1 + 0x10) + 0xc);
        if (*(int *)(*(int *)(param_1 + 0x10) + 8) == -1) {
          FUN_00dd5650(&DAT_016a9fec,*(int *)(param_1 + 0x10) + 0xc,uVar4);
        }
      }
      else {
        iVar3 = FUN_00a92f90();
        if ((iVar3 == 0) || ((*(uint *)(iVar3 + 0x94) & 1) == 0)) {
LAB_00c965b0:
          uVar6 = 0;
        }
        else {
          pcVar5 = (char *)(*(int *)(param_1 + 0x10) + 0x1c);
          local_448 = (char *)(*(int *)(param_1 + 0x10) + 0x1d);
          pcVar2 = pcVar5;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          if (pcVar2 == local_448) {
            uVar6 = uVar6 & *(uint *)(iVar3 + 0x94) >> 1 & 1;
          }
          else {
            iVar3 = FUN_00e33270(pcVar5);
            if (iVar3 == -1) goto LAB_00c965b0;
            iVar3 = FUN_00a92f90();
            uVar6 = uVar6 & *(uint *)(iVar3 + 0x94) >> 1 & 1;
          }
        }
      }
      local_444 = local_444 + 1;
    } while (local_444 < local_454);
  }
  if ((local_45c != (undefined1 *)0x0) && (local_454 = 0, local_450 != 0)) {
    FUN_00dd48d0(local_45c,0);
  }
  return uVar6;
}

// 00C974B0  Trigger::Act::OBJECT_DISP_2  size=603  [class]
int __fastcall Trigger::Act::OBJECT_DISP_2(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  int local_464;
  undefined4 local_45c;
  undefined1 *local_458;
  undefined4 local_454;
  int local_450;
  int local_44c;
  int local_448;
  int local_444;
  undefined1 local_440 [64];
  undefined1 local_400 [1024];
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b15a0);
    return 0;
  }
  local_458 = local_440;
  local_45c = 0;
  local_454 = 0x10;
  local_450 = 0;
  local_44c = 0;
  iVar11 = *(int *)(iVar4 + 8);
  pcVar5 = (char *)(iVar4 + 0xc);
  if (iVar11 == -1) {
    FUN_00c77fc0(pcVar5,&local_45c);
  }
  else {
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (char *)(iVar4 + 0xd)) {
      FUN_00a814d0(&local_45c,iVar11);
    }
    else {
      FUN_00c959c0(iVar4 + 0xc,iVar11,&local_45c);
    }
  }
  if (local_450 == 0) {
    if ((local_458 != (undefined1 *)0x0) && (local_450 = 0, local_44c != 0)) {
      FUN_00dd48d0(local_458,0);
    }
    return 0;
  }
  local_464 = 1;
  local_444 = 0;
  if (0 < local_450) {
    do {
      if ((*(int *)(local_458 + local_444 * 4) == 0) ||
         (piVar6 = (int *)FUN_00a7c800(), piVar6 == (int *)0x0)) {
        if (*(int *)(iVar4 + 8) == -1) {
          FUN_00dd5650(&DAT_016a9fec,iVar4 + 0xc,&DAT_016b1568);
        }
LAB_00c976cd:
        local_464 = 0;
      }
      else {
        pbVar1 = (byte *)(iVar4 + 0x1c);
        pbVar10 = pbVar1;
        do {
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 != 0);
        if (pbVar10 != (byte *)(iVar4 + 0x1d)) {
          iVar11 = 0;
          if (0 < (short)piVar6[0xc9]) {
            local_448 = piVar6[200];
            piVar12 = (int *)(local_448 + 0x60);
            do {
              pbVar10 = *(byte **)(*piVar12 + 0x40);
              pbVar7 = pbVar1;
              if (pbVar10 != (byte *)0x0) {
                do {
                  bVar3 = *pbVar7;
                  bVar13 = bVar3 < *pbVar10;
                  if (bVar3 != *pbVar10) {
LAB_00c97632:
                    iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_00c97637;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar7[1];
                  bVar13 = bVar3 < pbVar10[1];
                  if (bVar3 != pbVar10[1]) goto LAB_00c97632;
                  pbVar10 = pbVar10 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar3 != 0);
                iVar8 = 0;
LAB_00c97637:
                if (iVar8 == 0) {
                  if ((iVar11 != -1) && (iVar11 = iVar11 * 0x70 + local_448, iVar11 != 0)) {
                    if (*(int *)(iVar4 + 0x2c) == 1) {
                      *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) | 1;
                    }
                    else {
                      *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) & 0xfffffffe;
                    }
                    goto LAB_00c9769b;
                  }
                  break;
                }
              }
              iVar11 = iVar11 + 1;
              piVar12 = piVar12 + 0x1c;
            } while (iVar11 < (short)piVar6[0xc9]);
          }
          uVar9 = FUN_00959930(local_400,&DAT_016b1584,pbVar1);
          if (*(int *)(iVar4 + 8) == -1) {
            FUN_00dd5650(&DAT_016a9fec,iVar4 + 0xc,uVar9);
          }
          goto LAB_00c976cd;
        }
        if (*(int *)(iVar4 + 0x2c) == 1) {
          (**(code **)(*piVar6 + 0x1c))();
        }
        else {
          (**(code **)(*piVar6 + 0x20))();
        }
LAB_00c9769b:
        if (local_464 == 0) goto LAB_00c976cd;
        local_464 = 1;
      }
      local_444 = local_444 + 1;
    } while (local_444 < local_450);
  }
  if ((local_458 != (undefined1 *)0x0) && (local_450 = 0, local_44c != 0)) {
    FUN_00dd48d0(local_458,0);
  }
  return local_464;
}

