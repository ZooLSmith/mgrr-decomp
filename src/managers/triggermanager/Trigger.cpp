// src/managers/triggermanager/Trigger.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F450..00C9CF00, 5 functions

#include "mgrr.h"

// 00C7F450  Trigger::Act  size=76  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    pcVar2 = "ROOM";
    if (_DAT_00000004 != 0x3e) {
      pcVar2 = "PHASE";
    }
    FUN_00dd5650(&DAT_016aabb4,pcVar2);
    return 0;
  }
  FUN_00c1d810(*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 4) == 0x3e,0,0);
  return 1;
}

// 00C9C6C0  Trigger::AREA  size=433  [class]
undefined4 __fastcall Trigger::AREA(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_18 [2];
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
      iVar1 = FUN_00c18cc0(iVar1);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10), iVar1 != 0)) {
LAB_00c9c7a0:
        local_18[0] = 0;
        if (local_8 != 0) {
          do {
            if (*(int *)(local_c + local_18[0] * 4) != 0) {
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),1);
              iVar4 = (**(code **)(iVar1 + 0x2c))(uVar3);
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
              iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
              if ((iVar4 != 0) || (iVar1 != 0)) {
                *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + local_18[0] * 4);
                return 1;
              }
            }
            local_18[0] = local_18[0] + 1;
          } while (local_18[0] < local_8);
        }
        return 0;
      }
    }
    else {
      if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9c85f;
      iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x1c) == -1) {
          iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                               &local_10);
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          local_18[0] = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)
                                     ,*(int *)(param_1 + 0x1c));
          if (local_18[0] == 0) {
            return 0;
          }
          lib::Array<Entity*>::vf08(local_18);
        }
        goto LAB_00c9c7a0;
      }
    }
    return 0;
  }
LAB_00c9c85f:
  FUN_00dd5650(&DAT_016b1924,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

// 00C9C960  Trigger::AREA_2  size=433  [class]
undefined4 __fastcall Trigger::AREA_2(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_18 [2];
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
      iVar1 = FUN_00c18cc0(iVar1);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10), iVar1 != 0)) {
LAB_00c9ca40:
        local_18[0] = 0;
        if (local_8 != 0) {
          do {
            if (*(int *)(local_c + local_18[0] * 4) != 0) {
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),1);
              iVar4 = (**(code **)(iVar1 + 0x2c))(uVar3);
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
              iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
              if ((iVar4 == 0) || (iVar1 == 0)) {
                *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + local_18[0] * 4);
                return 1;
              }
            }
            local_18[0] = local_18[0] + 1;
          } while (local_18[0] < local_8);
        }
        return 0;
      }
    }
    else {
      if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9caff;
      iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x1c) == -1) {
          iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                               &local_10);
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          local_18[0] = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)
                                     ,*(int *)(param_1 + 0x1c));
          if (local_18[0] == 0) {
            return 0;
          }
          lib::Array<Entity*>::vf08(local_18);
        }
        goto LAB_00c9ca40;
      }
    }
    return 0;
  }
LAB_00c9caff:
  FUN_00dd5650(&DAT_016b1924,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

// 00C9CD90  Trigger::AREA_3  size=355  [class]
undefined4 __fastcall Trigger::AREA_3(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_14;
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  uVar4 = 0;
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
      iVar1 = FUN_00c18cc0(iVar1);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10), iVar1 != 0)) {
LAB_00c9ce71:
        if (local_8 != 0) {
          do {
            if (*(int *)(local_c + uVar4 * 4) != 0) {
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
              iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
              if (iVar1 != 0) {
                *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + uVar4 * 4);
                return 1;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_8);
        }
        return 0;
      }
    }
    else {
      if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9ceda;
      iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x1c) == -1) {
          iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                               &local_10);
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          local_14 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                                  *(int *)(param_1 + 0x1c));
          if (local_14 == 0) {
            return 0;
          }
          lib::Array<Entity*>::vf08(&local_14);
        }
        goto LAB_00c9ce71;
      }
    }
    return 0;
  }
LAB_00c9ceda:
  FUN_00dd5650(&DAT_016b1984,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

// 00C9CF00  Trigger::SCENARIO_AREA  size=399  [class]
undefined4 __fastcall Trigger::SCENARIO_AREA(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_14;
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  uVar4 = 0;
  if (((DAT_01dbd1d0 != 0) && ((DAT_01bea060 & 8) == 0)) && ((DAT_01bea060 & 0x2000400) != 0)) {
    return 0;
  }
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 == -1) {
LAB_00c9d070:
    FUN_00dd5650(&DAT_016b19b0,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c)
                );
    return 0;
  }
  if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
    iVar1 = FUN_00c18cc0(iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9d070;
    iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1c) == -1) {
      iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&local_10
                          );
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      local_14 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                              *(int *)(param_1 + 0x1c));
      if (local_14 == 0) {
        return 0;
      }
      lib::Array<Entity*>::vf08(&local_14);
    }
  }
  if (local_8 != 0) {
    do {
      if (*(int *)(local_c + uVar4 * 4) != 0) {
        piVar2 = (int *)FUN_00a6e640();
        iVar1 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
        iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + uVar4 * 4);
          return 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_8);
  }
  return 0;
}

