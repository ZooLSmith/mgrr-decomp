// src/managers/triggermanager/actions/TrgActObjectCollision.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81060..00C97720, 2 functions

#include "mgrr.h"

// 00C81060  Trigger::Act::OBJECT_COLLISION  size=35  [class]
void Trigger::Act::OBJECT_COLLISION(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) == -1) {
    FUN_00dd5650(&DAT_016abb44,param_1 + 0xc,param_2);
  }
  return;
}

// 00C97720  Trigger::Act::OBJECT_COLLISION_2  size=657  [class]
int __fastcall Trigger::Act::OBJECT_COLLISION_2(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  int local_46c;
  undefined4 local_464;
  undefined1 *local_460;
  undefined4 local_45c;
  int local_458;
  int local_454;
  int local_450;
  int *local_44c;
  int local_448;
  undefined1 local_440 [64];
  undefined1 local_400 [1024];
  
  iVar4 = *(int *)(param_1 + 4);
  local_448 = param_1;
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b15d0);
    return 0;
  }
  local_460 = local_440;
  local_464 = 0;
  local_45c = 0x10;
  local_458 = 0;
  local_454 = 0;
  iVar6 = *(int *)(iVar4 + 8);
  pcVar5 = (char *)(iVar4 + 0xc);
  if (iVar6 == -1) {
    FUN_00c77fc0(pcVar5,&local_464);
  }
  else {
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (char *)(iVar4 + 0xd)) {
      FUN_00a814d0(&local_464,iVar6);
    }
    else {
      FUN_00c959c0(iVar4 + 0xc,iVar6,&local_464);
    }
  }
  if (local_458 == 0) {
    if ((local_460 != (undefined1 *)0x0) && (local_458 = 0, local_454 != 0)) {
      FUN_00dd48d0(local_460,0);
    }
    return 0;
  }
  local_46c = 1;
  local_450 = 0;
  if (0 < local_458) {
    do {
      if ((*(int *)(local_460 + local_450 * 4) == 0) || (iVar6 = FUN_00a7c800(), iVar6 == 0)) {
        if (*(int *)(iVar4 + 8) == -1) {
          FUN_00dd5650(&DAT_016abb44,iVar4 + 0xc,&DAT_016b1568);
        }
LAB_00c97973:
        local_46c = 0;
      }
      else {
        local_44c = (int *)FUN_00a7c8a0();
        if (local_44c == (int *)0x0) {
          uVar9 = FUN_00959930(local_400,&DAT_016b1584,iVar4 + 0x1c);
          if (*(int *)(iVar4 + 8) == -1) {
            FUN_00dd5650(&DAT_016abb44,iVar4 + 0xc,uVar9);
          }
        }
        else {
          pbVar1 = (byte *)(iVar4 + 0x1c);
          pbVar7 = pbVar1;
          do {
            bVar3 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar3 != 0);
          if (pbVar7 != (byte *)(iVar4 + 0x1d)) {
            iVar11 = 0;
            if (0 < *(short *)(iVar6 + 0x324)) {
              piVar12 = (int *)(*(int *)(iVar6 + 800) + 0x60);
              do {
                pbVar7 = *(byte **)(*piVar12 + 0x40);
                pbVar10 = pbVar1;
                if (pbVar7 != (byte *)0x0) {
                  do {
                    bVar3 = *pbVar10;
                    bVar13 = bVar3 < *pbVar7;
                    if (bVar3 != *pbVar7) {
LAB_00c978b1:
                      iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_00c978b6;
                    }
                    if (bVar3 == 0) break;
                    bVar3 = pbVar10[1];
                    bVar13 = bVar3 < pbVar7[1];
                    if (bVar3 != pbVar7[1]) goto LAB_00c978b1;
                    pbVar7 = pbVar7 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar3 != 0);
                  iVar8 = 0;
LAB_00c978b6:
                  if (iVar8 == 0) {
                    if (iVar11 != -1) {
                      (**(code **)(*local_44c + 0xcc))(*(undefined4 *)(iVar4 + 0x2c),iVar11);
                      goto LAB_00c97947;
                    }
                    break;
                  }
                }
                iVar11 = iVar11 + 1;
                piVar12 = piVar12 + 0x1c;
              } while (iVar11 < *(short *)(iVar6 + 0x324));
            }
            uVar9 = FUN_00959930(local_400,&DAT_016b1584,pbVar1);
            OBJECT_COLLISION(iVar4,uVar9);
            goto LAB_00c97973;
          }
          (**(code **)(*local_44c + 200))(*(undefined4 *)(iVar4 + 0x2c));
        }
LAB_00c97947:
        if (local_46c == 0) goto LAB_00c97973;
        local_46c = 1;
      }
      local_450 = local_450 + 1;
    } while (local_450 < local_458);
  }
  if ((local_460 != (undefined1 *)0x0) && (local_458 = 0, local_454 != 0)) {
    FUN_00dd48d0(local_460,0);
  }
  return local_46c;
}

