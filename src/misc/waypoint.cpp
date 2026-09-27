// src/misc/waypoint.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C6CCA0..00C74490, 4 functions

#include "mgrr.h"

// 00C6CCA0  waypoint::WaypointLinkNodeArray::vf00  size=47  [class]
undefined4 * __thiscall waypoint::WaypointLinkNodeArray::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = lib::Array<unsigned_short>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C6F1E0  waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray_3  size=107  [class]
/* WARNING: Removing unreachable block (ram,0x00c6f200) */

void __thiscall waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray_3(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (int)vftable;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[2] = *param_1 + 0x20;
  *(undefined2 *)(*param_1 + 0x20) = 0xffff;
  *(undefined2 *)(*param_1 + 0x22) = 0xffff;
  *(undefined2 *)(*param_1 + 0x24) = 0xffff;
  *(undefined2 *)(*param_1 + 0x26) = 0xffff;
  *(undefined2 *)(*param_1 + 0x28) = 0xffff;
  *(undefined2 *)(*param_1 + 0x2a) = 0xffff;
  *(undefined2 *)(*param_1 + 0x2c) = 0xffff;
  *(undefined2 *)(*param_1 + 0x2e) = 0xffff;
  return;
}

// 00C6F990  waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray_2  size=66  [class]
/* WARNING: Removing unreachable block (ram,0x00c6f9c0) */

void waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray_2(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (int)vftable;
    param_1[3] = (uint)*(ushort *)(*param_1 + 0x18);
    param_1[2] = *param_1 + 0x20;
    param_1[4] = 8;
  }
  return;
}

// 00C74490  waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray  size=1480  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uStack_2c;
  undefined4 local_24;
  uint uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_24 = 0x20111216;
  cVar2 = (**(code **)*param_2)();
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x34);
  }
  FUN_00c6cf40(param_2,"version",&local_24);
  FUN_00c6d340(param_2,&DAT_0164a424,param_1 + 0x44);
  FUN_00c6d340(param_2,"dataType",param_1 + 0x24);
  piVar1 = (int *)(param_1 + 0x54);
  FUN_00c6cf40(param_2,"linkBufferSize",piVar1);
  FUN_00c6cf40(param_2,"append",(int *)(param_1 + 0x5c));
  cVar2 = (**(code **)*param_2)();
  if (cVar2 == '\0') {
    iVar8 = *(int *)(param_1 + 0x30);
    if (iVar8 != iVar8 + *(int *)(param_1 + 0x34) * 0x18) {
      do {
        cVar2 = FUN_00c74030(param_2,"nodes",iVar8);
        if (cVar2 == '\0') {
          return 0;
        }
        iVar8 = iVar8 + 0x18;
      } while (iVar8 != *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 0x18);
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar8 = 0;
      do {
        cVar2 = FUN_00c72640(param_2,"links",*(int *)(param_1 + 0x4c) + iVar8);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x10;
      } while (uVar7 < *(uint *)(param_1 + 0x54));
    }
    if ((_DAT_01d644cc & 1) == 0) {
      _DAT_01d644cc = _DAT_01d644cc | 1;
      DAT_01d644c8 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar8 = DAT_01d644c8;
    cVar2 = (**(code **)(*param_2 + 0x10))("hasParent",DAT_01d644c8);
    if (cVar2 != '\0') {
      cVar2 = FUN_00c71d70(param_2);
      (**(code **)(*param_2 + 0x14))("hasParent",iVar8);
      if (cVar2 != '\0') {
        if ((_DAT_01d644d4 & 1) == 0) {
          _DAT_01d644d4 = _DAT_01d644d4 | 1;
          DAT_01d644d0 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar8 = DAT_01d644d0;
        cVar2 = (**(code **)(*param_2 + 0x10))("extendData",DAT_01d644d0);
        if (cVar2 != '\0') {
          cVar2 = FUN_00c71c80(param_2);
          (**(code **)(*param_2 + 0x14))("extendData",iVar8);
          if (cVar2 != '\0') {
            piVar1 = (int *)(param_1 + 0x114);
            cVar2 = FUN_00c6d340(param_2,"roomNum",piVar1);
            if (cVar2 != '\0') {
              iVar8 = 0;
              if (*piVar1 < 1) {
                return (undefined1)uStack_20;
              }
              param_1 = param_1 + 0x94;
              do {
                cVar2 = FUN_00c6d340(param_2,"roomNum",param_1);
                if (cVar2 == '\0') {
                  return 0;
                }
                iVar8 = iVar8 + 1;
                param_1 = param_1 + 4;
              } while (iVar8 < *piVar1);
              return (undefined1)uStack_20;
            }
          }
        }
      }
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x44) + iVar8;
    iStack_1c = *piVar1;
    *piVar1 = iStack_1c + iVar8 * 8;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x48),0);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x4c),0);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      uVar3 = FUN_00dd29b0(*(int *)(param_1 + 0x50) * 0x30,0x80,0,0);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
    }
    if (*piVar1 != 0) {
      uVar3 = FUN_00dd29b0(*piVar1 << 4,0x80,0,0);
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
    }
    lib::Array<unsigned_short>::Array<unsigned_short>();
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x14))(*(undefined4 *)(param_1 + 0x50));
    uStack_2c = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      iVar8 = 0;
      do {
        iStack_1c = *(int *)(param_1 + 0x48) + iVar8;
        ppuStack_18 = vftable;
        iStack_14 = iStack_1c + 0x20;
        uStack_c = 8;
        uStack_10 = 0;
        uVar7 = 0x20;
        do {
          *(undefined2 *)(uVar7 + iStack_1c) = 0xffff;
          uVar7 = uVar7 + 2;
        } while (uVar7 < 0x30);
        if ((_DAT_01d644bc & 1) == 0) {
          _DAT_01d644bc = _DAT_01d644bc | 1;
          DAT_01d644b8 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar5 = DAT_01d644b8;
        cVar2 = (**(code **)(*param_2 + 0x10))("nodes",DAT_01d644b8);
        if (cVar2 != '\0') {
          FUN_00c71a40(param_2);
          (**(code **)(*param_2 + 0x14))("nodes",iVar5);
        }
        local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(param_1 + 0x40));
        piVar1 = (int *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 0x18);
        piVar4 = (int *)FUN_00c6d850(*(int *)(param_1 + 0x30),piVar1,&iStack_1c,local_24,0);
        if ((piVar4 == piVar1) || (*(int *)(iStack_1c + 0xc) < *(int *)(*piVar4 + 0xc))) {
          (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(piVar4,&iStack_1c);
        }
        iVar8 = iVar8 + 0x30;
        uStack_2c = uStack_2c + 1;
      } while ((int)uStack_2c < *(int *)(param_1 + 0x44));
    }
    uVar6 = uStack_20;
    uVar7 = *(uint *)(param_1 + 0x44);
    if (uVar7 < *(uint *)(param_1 + 0x50)) {
      iVar8 = uVar7 * 0x30;
      do {
        iVar5 = *(int *)(param_1 + 0x48);
        *(undefined4 *)(iVar5 + 0x10 + iVar8) = 0;
        iVar5 = iVar5 + iVar8;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(iVar5 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(undefined2 *)(iVar5 + 0x1c) = 0;
        *(undefined2 *)(iVar5 + 0x1e) = 0;
        *(undefined2 *)(iVar5 + 0x1a) = 0;
        iVar8 = iVar8 + 0x30;
      } while (uVar7 < *(uint *)(param_1 + 0x50));
    }
    iVar8 = 0;
    uStack_2c = 0;
    if (uStack_20 != 0) {
      do {
        cVar2 = FUN_00c72640(param_2,"links",*(int *)(param_1 + 0x4c) + iVar8);
        if (cVar2 == '\0') {
          return 0;
        }
        uStack_2c = uStack_2c + 1;
        iVar8 = iVar8 + 0x10;
      } while (uStack_2c < uVar6);
    }
    if (uVar6 < *(uint *)(param_1 + 0x54)) {
      iVar8 = uVar6 << 4;
      do {
        *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x4c)) = 0xffffffff;
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + 0x10;
      } while (uVar6 < *(uint *)(param_1 + 0x54));
    }
    if ((_DAT_01d644cc & 1) == 0) {
      _DAT_01d644cc = _DAT_01d644cc | 1;
      DAT_01d644c8 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar8 = DAT_01d644c8;
    cVar2 = (**(code **)(*param_2 + 0x10))("hasParent",DAT_01d644c8);
    if (cVar2 != '\0') {
      cVar2 = FUN_00c71d70(param_2);
      (**(code **)(*param_2 + 0x14))("hasParent",iVar8);
      if (cVar2 != '\0') {
        if ((_DAT_01d644d4 & 1) == 0) {
          _DAT_01d644d4 = _DAT_01d644d4 | 1;
          DAT_01d644d0 = DAT_01884314;
          DAT_01884314 = DAT_01884314 + 1;
        }
        iVar8 = DAT_01d644d0;
        cVar2 = (**(code **)(*param_2 + 0x10))("extendData",DAT_01d644d0);
        if (cVar2 != '\0') {
          cVar2 = FUN_00c71c80(param_2);
          (**(code **)(*param_2 + 0x14))("extendData",iVar8);
          if (cVar2 != '\0') {
            piVar1 = (int *)(param_1 + 0x114);
            *piVar1 = 1;
            *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
            cVar2 = FUN_00c6d340(param_2,"roomNum",piVar1);
            if (cVar2 == '\0') {
              *piVar1 = 1;
            }
            else {
              iVar8 = 0;
              if (0 < *piVar1) {
                iVar5 = param_1 + 0x94;
                do {
                  cVar2 = FUN_00c6d340(param_2,&DAT_016a7b94,iVar5);
                  if (cVar2 == '\0') break;
                  iVar5 = iVar5 + 4;
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *piVar1);
              }
            }
            if (*(int *)(param_1 + 0x90) == 0) {
              return (undefined1)uStack_20;
            }
            FUN_00c681d0(*(undefined4 *)(param_1 + 0x28),(int)*(short *)(param_1 + 0x78));
            return (undefined1)uStack_20;
          }
        }
      }
    }
  }
  return 0;
}

