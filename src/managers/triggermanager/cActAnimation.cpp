// src/managers/triggermanager/cActAnimation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89DD0..00C968D0, 7 functions

#include "mgrr.h"

// 00C89DD0  Trigger::cActAnimation::vf08  size=1  [class]
void Trigger::cActAnimation::vf08(void)

{
  return;
}

// 00C89DE0  Trigger::cActAnimation::vf0C  size=1  [class]
void Trigger::cActAnimation::vf0C(void)

{
  return;
}

// 00C89DF0  Trigger::cActAnimation::vf10  size=1  [class]
void Trigger::cActAnimation::vf10(void)

{
  return;
}

// 00C89E00  Trigger::cActAnimation::vf14  size=1  [class]
void Trigger::cActAnimation::vf14(void)

{
  return;
}

// 00C91E30  Trigger::cActAnimation::vf00  size=6  [class]
undefined * Trigger::cActAnimation::vf00(void)

{
  return &DAT_01dbe09c;
}

// 00C91E40  Trigger::cActAnimation::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAnimation::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C968D0  Trigger::cActAnimation::vf18  size=990  [class]
bool __fastcall Trigger::cActAnimation::vf18(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  char *local_70;
  int local_64;
  int local_60;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar1 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(iVar1 + 4);
  if (iVar7 == 0) {
    local_70 = "ANIM";
  }
  else if (iVar7 == 7) {
    local_70 = "ANIM_LAST";
  }
  else {
    if (iVar7 != 0x4d) {
      FUN_00dd5650(&DAT_016b0f9c);
      return false;
    }
    local_70 = "PL_ANIM";
  }
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1124,local_70);
    return false;
  }
  if (*(int *)(iVar1 + 8) == -1) {
    pcVar3 = (char *)(iVar1 + 0xc);
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (pcVar3 == (char *)(iVar1 + 0xd)) {
      FUN_00dd5650(&DAT_016b10fc,local_70);
      return false;
    }
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar7 = *(int *)(iVar1 + 8);
  if (iVar7 == -1) {
    iVar7 = iVar1 + 0xc;
    FUN_00c77fc0(iVar7,&local_54);
    if (local_48 != 0) goto LAB_00c96a20;
    puVar10 = &DAT_016b108c;
  }
  else {
    pcVar3 = (char *)(iVar1 + 0xc);
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (pcVar3 == (char *)(iVar1 + 0xd)) {
      FUN_00a814d0(&local_54,iVar7);
    }
    else {
      FUN_00c959c0((char *)(iVar1 + 0xc),iVar7,&local_54);
    }
    if (local_48 != 0) {
LAB_00c96a20:
      local_64 = iVar1 + 0xc;
      bVar9 = true;
      local_60 = 0;
      if (0 < local_48) {
        do {
          iVar7 = *(int *)(local_50 + local_60 * 4);
          iVar11 = local_64;
          if (iVar7 == 0) {
            if (*(int *)(iVar1 + 8) == -1) {
              puVar10 = &DAT_016b102c;
            }
            else {
              puVar10 = &DAT_016b105c;
              iVar11 = *(int *)(iVar1 + 8);
            }
LAB_00c96c4d:
            FUN_00dd5650(puVar10,local_70,iVar11);
            bVar9 = false;
          }
          else {
            iVar4 = FUN_00a7c8a0();
            if (iVar4 == 0) {
LAB_00c96c29:
              if (*(int *)(iVar1 + 8) == -1) {
                puVar10 = &DAT_016b0fc4;
              }
              else {
                puVar10 = &DAT_016b0ff8;
                iVar11 = *(int *)(iVar1 + 8);
              }
              goto LAB_00c96c4d;
            }
            if (*(int *)(*(int *)(param_1 + 4) + 4) == 0x4d) {
              bVar9 = false;
              iVar4 = FUN_009f9350(*(undefined4 *)(iVar4 + 0x4b0));
              if (iVar4 == 1) {
                piVar5 = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
                piVar8 = (int *)0x0;
                if (piVar5 != (int *)0x0) {
                  piVar5[1] = 0;
                  piVar5[2] = 0;
                  piVar5[3] = 0;
                  *piVar5 = (int)cTriggerTask_PlAnim::vftable;
                  piVar8 = piVar5;
                }
                (**(code **)(*piVar8 + 4))();
                FUN_00c83e90(iVar7);
                piVar8[1] = *(int *)(*(int *)(param_1 + 4) + 4);
                cVar2 = FUN_00c84760(piVar8);
                if (cVar2 == '\0') {
                  (**(code **)*piVar8)(1);
                }
                bVar9 = cVar2 != '\0';
              }
            }
            if (*(int *)(param_1 + 0xc) != 0) {
              FUN_00a92f90();
              iVar7 = iVar1 + 0x1c;
              iVar4 = FUN_00e33270(iVar7);
              if (iVar4 != -1) {
                iVar6 = FUN_00a957d0(iVar7);
                if ((float)iVar6 != 0.0) {
                  FUN_00aa4940(iVar7,iVar4,0x3e4ccccd,0x3f800000,0,(float)iVar6,0x3f800000);
                }
              }
            }
            if (*(int *)(*(int *)(param_1 + 4) + 4) == 7) {
              iVar7 = FUN_00aa4940(iVar1 + 0x1c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
              if (iVar7 == -1) goto LAB_00c96c29;
              iVar4 = FUN_00a957b0(iVar7);
              iVar7 = FUN_00a9f2b0(iVar1 + 0x1c,iVar7,0,0x3f800000,0,(float)iVar4,0);
            }
            else {
              iVar7 = FUN_00aa4940(iVar1 + 0x1c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
            }
            if (iVar7 == -1) goto LAB_00c96c29;
          }
          local_60 = local_60 + 1;
        } while (local_60 < local_48);
      }
      if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
        FUN_00dd48d0(local_50,0);
      }
      return bVar9;
    }
    iVar7 = *(int *)(iVar1 + 8);
    puVar10 = &DAT_016b10c4;
  }
  FUN_00dd5650(puVar10,local_70,iVar7);
  FUN_00948120();
  return false;
}

