// src/managers/rigidbodymanager/RigidBodyManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00910A00..00927330, 7 functions

#include "mgrr.h"
#include "RigidBodyManager.h"

// 00910A00  RigidBodyManager::vf00  size=31  [class]
undefined4 * __thiscall RigidBodyManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009216C0  RigidBodyManager::createPlane  size=709  [class]
undefined4 * __thiscall
RigidBodyManager::createPlane
          (int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
          float *param_6,undefined4 param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 *local_ec;
  float local_e8;
  LPCRITICAL_SECTION local_e4;
  float local_e0;
  float *pfStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0 [3];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70 [3];
  undefined4 uStack_64;
  float local_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float local_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  local_e4 = lpCriticalSection;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = FUN_00dd2ba0(8,1);
  local_ec = (undefined4 *)0x0;
  if ((iVar1 != 0) && (local_ec = (undefined4 *)FUN_00dd2bc0(), local_ec != (undefined4 *)0x0)) {
    *local_ec = 0;
    local_ec[1] = 0;
  }
  if (local_ec != (undefined4 *)0x0) {
    local_e0 = *param_6 * 0.5;
    local_e8 = param_6[2] * 0.5;
    local_70[0] = -local_e0;
    local_70[2] = -local_e8;
    local_70[1] = 0.0;
    uStack_64 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    local_d0[1] = 0.0;
    uStack_c4 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    local_d0[0] = local_e0;
    local_d0[2] = local_e8;
    local_60 = local_e0;
    fStack_58 = local_70[2];
    local_50 = local_70[0];
    fStack_48 = local_e8;
    local_40 = local_e0;
    fStack_38 = local_e8;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x70);
    *(undefined2 *)(iVar1 + 4) = 0x70;
    pfStack_dc = local_70;
    uStack_d8 = 4;
    uStack_d4 = 0x10;
    uVar3 = FUN_0113c3d0();
    iVar1 = hkpConvexVerticesConnectivity::hkpConvexVerticesConnectivity(&pfStack_dc,uVar3);
    if (iVar1 != 0) {
      *(int *)(param_3 + 4) = iVar1;
      if (0.0 < *(float *)(param_3 + 0x90)) {
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        FUN_01060cb0(local_d0,*(undefined4 *)(param_3 + 0x90),&uStack_c0);
        *(undefined4 *)(param_3 + 0x50) = uStack_a0;
        *(undefined4 *)(param_3 + 0x54) = uStack_9c;
        *(undefined4 *)(param_3 + 0x58) = uStack_98;
        *(undefined4 *)(param_3 + 0x5c) = uStack_94;
        *(undefined4 *)(param_3 + 0x60) = uStack_90;
        *(undefined4 *)(param_3 + 100) = uStack_8c;
        *(undefined4 *)(param_3 + 0x68) = uStack_88;
        *(undefined4 *)(param_3 + 0x6c) = uStack_84;
        *(undefined4 *)(param_3 + 0x70) = uStack_80;
        *(undefined4 *)(param_3 + 0x74) = uStack_7c;
        *(undefined4 *)(param_3 + 0x78) = uStack_78;
        *(undefined4 *)(param_3 + 0x7c) = uStack_74;
        *(undefined1 *)(param_3 + 0xb4) = 3;
      }
      iVar1 = FUN_0091fd10(local_ec,param_3,param_4,param_5,param_7);
      if (iVar1 == 0) {
        FUN_010060a0();
        if (local_ec != (undefined4 *)0x0) {
          FUN_00dd4920(local_ec);
          local_ec = (undefined4 *)0x0;
        }
        *param_2 = 0;
      }
      else {
        FUN_010060a0();
        if (*(int *)(param_1 + 0x70) != 0) {
          (**(code **)(**(int **)(param_1 + 0x70) + 8))(&local_ec);
        }
        *param_2 = *local_ec;
      }
      if (local_e4[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        return param_2;
      }
      LeaveCriticalSection(local_e4);
      return param_2;
    }
    FUN_00dd5650(&DAT_0164d124);
    if (local_ec != (undefined4 *)0x0) {
      FUN_00dd4920(local_ec);
      local_ec = (undefined4 *)0x0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  *param_2 = 0;
  if (iVar1 == 0) {
    return param_2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}

// 00921990  RigidBodyManager::createBox  size=530  [class]
undefined4 * __thiscall
RigidBodyManager::createBox
          (int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
          float *param_6,undefined4 param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID pvVar2;
  undefined4 *local_78;
  LPCRITICAL_SECTION local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  local_74 = lpCriticalSection;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = FUN_00dd2ba0(8,1);
  local_78 = (undefined4 *)0x0;
  if ((iVar1 != 0) && (local_78 = (undefined4 *)FUN_00dd2bc0(), local_78 != (undefined4 *)0x0)) {
    *local_78 = 0;
    local_78[1] = 0;
  }
  if (local_78 != (undefined4 *)0x0) {
    local_70 = *param_6 * 0.5;
    fStack_6c = param_6[1] * 0.5;
    fStack_68 = param_6[2] * 0.5;
    uStack_64 = 0;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x30);
    *(undefined2 *)(iVar1 + 4) = 0x30;
    iVar1 = hkpBoxShape::hkpBoxShape(&local_70,DAT_01b20754);
    if (iVar1 != 0) {
      *(int *)(param_3 + 4) = iVar1;
      if (0.0 < *(float *)(param_3 + 0x90)) {
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        FUN_01060cb0(&local_70,*(undefined4 *)(param_3 + 0x90),&uStack_60);
        *(undefined4 *)(param_3 + 0x50) = uStack_40;
        *(undefined4 *)(param_3 + 0x54) = uStack_3c;
        *(undefined4 *)(param_3 + 0x58) = uStack_38;
        *(undefined4 *)(param_3 + 0x5c) = uStack_34;
        *(undefined4 *)(param_3 + 0x60) = uStack_30;
        *(undefined4 *)(param_3 + 100) = uStack_2c;
        *(undefined4 *)(param_3 + 0x68) = uStack_28;
        *(undefined4 *)(param_3 + 0x6c) = uStack_24;
        *(undefined4 *)(param_3 + 0x70) = uStack_20;
        *(undefined4 *)(param_3 + 0x74) = uStack_1c;
        *(undefined4 *)(param_3 + 0x78) = uStack_18;
        *(undefined4 *)(param_3 + 0x7c) = uStack_14;
        *(undefined1 *)(param_3 + 0xb4) = 3;
      }
      iVar1 = FUN_0091fd10(local_78,param_3,param_4,param_5,param_7);
      if (iVar1 == 0) {
        FUN_010060a0();
        if (local_78 != (undefined4 *)0x0) {
          FUN_00dd4920(local_78);
          local_78 = (undefined4 *)0x0;
        }
        *param_2 = 0;
      }
      else {
        FUN_010060a0();
        if (*(int *)(param_1 + 0x70) != 0) {
          (**(code **)(**(int **)(param_1 + 0x70) + 8))(&local_78);
        }
        *param_2 = *local_78;
      }
      if (local_74[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        return param_2;
      }
      LeaveCriticalSection(local_74);
      return param_2;
    }
    FUN_00dd5650(&DAT_0164d15c);
    if (local_78 != (undefined4 *)0x0) {
      FUN_00dd4920(local_78);
      local_78 = (undefined4 *)0x0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  *param_2 = 0;
  if (iVar1 == 0) {
    return param_2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}

// 00921BB0  RigidBodyManager::createSphere  size=463  [class]
undefined4 * __thiscall
RigidBodyManager::createSphere
          (int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID pvVar2;
  undefined4 *local_68;
  LPCRITICAL_SECTION local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  local_64 = lpCriticalSection;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = FUN_00dd2ba0(8,1);
  local_68 = (undefined4 *)0x0;
  if ((iVar1 != 0) && (local_68 = (undefined4 *)FUN_00dd2bc0(), local_68 != (undefined4 *)0x0)) {
    *local_68 = 0;
    local_68[1] = 0;
  }
  if (local_68 != (undefined4 *)0x0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar1 + 4) = 0x20;
    iVar1 = hkpSphereShape::hkpSphereShape(param_6);
    if (iVar1 != 0) {
      *(int *)(param_3 + 4) = iVar1;
      if (0.0 < *(float *)(param_3 + 0x90)) {
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        FUN_01060ab0(param_6,*(undefined4 *)(param_3 + 0x90),&uStack_60);
        *(undefined4 *)(param_3 + 0x50) = uStack_40;
        *(undefined4 *)(param_3 + 0x54) = uStack_3c;
        *(undefined4 *)(param_3 + 0x58) = uStack_38;
        *(undefined4 *)(param_3 + 0x5c) = uStack_34;
        *(undefined4 *)(param_3 + 0x60) = uStack_30;
        *(undefined4 *)(param_3 + 100) = uStack_2c;
        *(undefined4 *)(param_3 + 0x68) = uStack_28;
        *(undefined4 *)(param_3 + 0x6c) = uStack_24;
        *(undefined4 *)(param_3 + 0x70) = uStack_20;
        *(undefined4 *)(param_3 + 0x74) = uStack_1c;
        *(undefined4 *)(param_3 + 0x78) = uStack_18;
        *(undefined4 *)(param_3 + 0x7c) = uStack_14;
        *(undefined1 *)(param_3 + 0xb4) = 2;
      }
      iVar1 = FUN_0091fd10(local_68,param_3,param_4,param_5,param_7);
      if (iVar1 == 0) {
        FUN_010060a0();
        if (local_68 != (undefined4 *)0x0) {
          FUN_00dd4920(local_68);
          local_68 = (undefined4 *)0x0;
        }
        *param_2 = 0;
      }
      else {
        FUN_010060a0();
        if (*(int *)(param_1 + 0x70) != 0) {
          (**(code **)(**(int **)(param_1 + 0x70) + 8))(&local_68);
        }
        *param_2 = *local_68;
      }
      if (local_64[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        return param_2;
      }
      LeaveCriticalSection(local_64);
      return param_2;
    }
    FUN_00dd5650(&DAT_0164d194);
    if (local_68 != (undefined4 *)0x0) {
      FUN_00dd4920(local_68);
      local_68 = (undefined4 *)0x0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  *param_2 = 0;
  if (iVar1 == 0) {
    return param_2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}

// 00921D80  RigidBodyManager::createCaspule  size=576  [class]
undefined4 * __thiscall
RigidBodyManager::createCaspule
          (int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 *param_6,undefined4 *param_7,undefined4 param_8,undefined4 param_9)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID pvVar2;
  undefined4 *local_88;
  LPCRITICAL_SECTION local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  local_84 = lpCriticalSection;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = FUN_00dd2ba0(8,1);
  local_88 = (undefined4 *)0x0;
  if ((iVar1 != 0) && (local_88 = (undefined4 *)FUN_00dd2bc0(), local_88 != (undefined4 *)0x0)) {
    *local_88 = 0;
    local_88[1] = 0;
  }
  if (local_88 != (undefined4 *)0x0) {
    local_70 = *param_6;
    uStack_6c = param_6[1];
    uStack_68 = param_6[2];
    uStack_78 = param_7[2];
    uStack_7c = param_7[1];
    uStack_64 = 0;
    local_80 = *param_7;
    uStack_74 = 0;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar1 + 4) = 0x40;
    iVar1 = hkpCapsuleShape::hkpCapsuleShape(&local_70,&local_80,param_8);
    if (iVar1 != 0) {
      *(int *)(param_3 + 4) = iVar1;
      if (0.0 < *(float *)(param_3 + 0x90)) {
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        FUN_01062b30(&local_70,&local_80,param_8,*(undefined4 *)(param_3 + 0x90),&uStack_60);
        *(undefined4 *)(param_3 + 0x50) = uStack_40;
        *(undefined4 *)(param_3 + 0x54) = uStack_3c;
        *(undefined4 *)(param_3 + 0x58) = uStack_38;
        *(undefined4 *)(param_3 + 0x5c) = uStack_34;
        *(undefined4 *)(param_3 + 0x60) = uStack_30;
        *(undefined4 *)(param_3 + 100) = uStack_2c;
        *(undefined4 *)(param_3 + 0x68) = uStack_28;
        *(undefined4 *)(param_3 + 0x6c) = uStack_24;
        *(undefined4 *)(param_3 + 0x70) = uStack_20;
        *(undefined4 *)(param_3 + 0x74) = uStack_1c;
        *(undefined4 *)(param_3 + 0x78) = uStack_18;
        *(undefined4 *)(param_3 + 0x7c) = uStack_14;
        *(undefined1 *)(param_3 + 0xb4) = 1;
      }
      iVar1 = FUN_0091fd10(local_88,param_3,param_4,param_5,param_9);
      if (iVar1 == 0) {
        FUN_010060a0();
        if (local_88 != (undefined4 *)0x0) {
          FUN_00dd4920(local_88);
          local_88 = (undefined4 *)0x0;
        }
        *param_2 = 0;
      }
      else {
        FUN_010060a0();
        if (*(int *)(param_1 + 0x70) != 0) {
          (**(code **)(**(int **)(param_1 + 0x70) + 8))(&local_88);
        }
        *param_2 = *local_88;
      }
      if (local_84[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        return param_2;
      }
      LeaveCriticalSection(local_84);
      return param_2;
    }
    FUN_00dd5650(&DAT_0164d1cc);
    if (local_88 != (undefined4 *)0x0) {
      FUN_00dd4920(local_88);
      local_88 = (undefined4 *)0x0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  *param_2 = 0;
  if (iVar1 == 0) {
    return param_2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}

// 00921FC0  RigidBodyManager::createCylinder  size=588  [class]
undefined4 * __thiscall
RigidBodyManager::createCylinder
          (int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 *param_6,undefined4 *param_7,undefined4 param_8,undefined4 param_9)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID pvVar2;
  undefined4 *local_88;
  LPCRITICAL_SECTION local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  local_84 = lpCriticalSection;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = FUN_00dd2ba0(8,1);
  local_88 = (undefined4 *)0x0;
  if ((iVar1 != 0) && (local_88 = (undefined4 *)FUN_00dd2bc0(), local_88 != (undefined4 *)0x0)) {
    *local_88 = 0;
    local_88[1] = 0;
  }
  if (local_88 != (undefined4 *)0x0) {
    local_70 = *param_6;
    uStack_6c = param_6[1];
    uStack_68 = param_6[2];
    uStack_78 = param_7[2];
    uStack_7c = param_7[1];
    uStack_64 = 0;
    local_80 = *param_7;
    uStack_74 = 0;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x60);
    *(undefined2 *)(iVar1 + 4) = 0x60;
    iVar1 = hkpCylinderShape::hkpCylinderShape(&local_70,&local_80,param_8,DAT_01b20754);
    if (iVar1 != 0) {
      *(int *)(param_3 + 4) = iVar1;
      if (0.0 < *(float *)(param_3 + 0x90)) {
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        FUN_01063410(&local_70,&local_80,param_8,*(undefined4 *)(param_3 + 0x90),&uStack_60);
        *(undefined4 *)(param_3 + 0x50) = uStack_40;
        *(undefined4 *)(param_3 + 0x54) = uStack_3c;
        *(undefined4 *)(param_3 + 0x58) = uStack_38;
        *(undefined4 *)(param_3 + 0x5c) = uStack_34;
        *(undefined4 *)(param_3 + 0x60) = uStack_30;
        *(undefined4 *)(param_3 + 100) = uStack_2c;
        *(undefined4 *)(param_3 + 0x68) = uStack_28;
        *(undefined4 *)(param_3 + 0x6c) = uStack_24;
        *(undefined4 *)(param_3 + 0x70) = uStack_20;
        *(undefined4 *)(param_3 + 0x74) = uStack_1c;
        *(undefined4 *)(param_3 + 0x78) = uStack_18;
        *(undefined4 *)(param_3 + 0x7c) = uStack_14;
        *(undefined1 *)(param_3 + 0xb4) = 1;
      }
      iVar1 = FUN_0091fd10(local_88,param_3,param_4,param_5,param_9);
      if (iVar1 == 0) {
        FUN_010060a0();
        if (local_88 != (undefined4 *)0x0) {
          FUN_00dd4920(local_88);
          local_88 = (undefined4 *)0x0;
        }
        *param_2 = 0;
      }
      else {
        FUN_010060a0();
        if (*(int *)(param_1 + 0x70) != 0) {
          (**(code **)(**(int **)(param_1 + 0x70) + 8))(&local_88);
        }
        *param_2 = *local_88;
      }
      if (local_84[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        return param_2;
      }
      LeaveCriticalSection(local_84);
      return param_2;
    }
    FUN_00dd5650(&DAT_0164d208);
    if (local_88 != (undefined4 *)0x0) {
      FUN_00dd4920(local_88);
      local_88 = (undefined4 *)0x0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  *param_2 = 0;
  if (iVar1 == 0) {
    return param_2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}

// 00927330  RigidBodyManager::createHexahedron  size=1044  [class]
undefined4 * __thiscall
RigidBodyManager::createHexahedron
          (int param_1,undefined4 *param_2,undefined4 param_3,float *param_4,float *param_5,
          undefined4 param_6)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPVOID pvVar2;
  float *pfVar3;
  undefined4 *unaff_EBP;
  bool bVar4;
  undefined4 *unaff_retaddr;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  float *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_34 = param_1;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  }
  iVar1 = FUN_00dd2ba0(8,1);
  lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  if (iVar1 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_00dd2bc0();
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection->LockCount = 0;
    }
  }
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    *param_2 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    }
    return param_2;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  pfVar3 = *(float **)((int)pvVar2 + 0xc);
  if ((*(int *)((int)pvVar2 + 8) < 0x80) || (*(float **)((int)pvVar2 + 0x10) < pfVar3 + 0x20)) {
    pfVar3 = (float *)FUN_0100b780(0x80);
  }
  else {
    *(float **)((int)pvVar2 + 0xc) = pfVar3 + 0x20;
  }
  *pfVar3 = *param_4 - *param_5;
  pfVar3[1] = param_4[1] - param_5[1];
  pfVar3[2] = param_4[2] - param_5[2];
  pfVar3[4] = param_4[4] - *param_5;
  pfVar3[5] = param_4[5] - param_5[1];
  pfVar3[6] = param_4[6] - param_5[2];
  pfVar3[8] = param_4[8] - *param_5;
  pfVar3[9] = param_4[9] - param_5[1];
  pfVar3[10] = param_4[10] - param_5[2];
  pfVar3[0xc] = param_4[0xc] - *param_5;
  pfVar3[0xd] = param_4[0xd] - param_5[1];
  pfVar3[0xe] = param_4[0xe] - param_5[2];
  pfVar3[0x10] = param_4[0x10] - *param_5;
  pfVar3[0x11] = param_4[0x11] - param_5[1];
  pfVar3[0x12] = param_4[0x12] - param_5[2];
  pfVar3[0x14] = param_4[0x14] - *param_5;
  pfVar3[0x15] = param_4[0x15] - param_5[1];
  pfVar3[0x16] = param_4[0x16] - param_5[2];
  pfVar3[0x18] = param_4[0x18] - *param_5;
  pfVar3[0x19] = param_4[0x19] - param_5[1];
  pfVar3[0x1a] = param_4[0x1a] - param_5[2];
  pfVar3[0x1c] = param_4[0x1c] - *param_5;
  pfVar3[0x1d] = param_4[0x1d] - param_5[1];
  pfVar3[0x1e] = param_4[0x1e] - param_5[2];
  local_20 = 8;
  local_1c = 0x10;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x80000000;
  local_10 = 0x80000000;
  local_4 = 0x80000000;
  local_18 = (float *)0x0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_24 = pfVar3;
  FUN_01074110(&local_24,&local_18,&local_30);
  local_20 = local_14;
  local_1c = 0x10;
  local_24 = local_18;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x70);
  *(undefined2 *)(iVar1 + 4) = 0x70;
  iVar1 = hkpConvexVerticesShape::hkpConvexVerticesShape(&local_28,&local_34,DAT_01b20754);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0164d424);
    if (unaff_EBP != (undefined4 *)0x0) {
      FUN_00dd4920(unaff_EBP);
    }
    *unaff_retaddr = 0;
    FUN_009211c0();
    local_30 = 0;
    if (-1 < local_2c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c << 4);
    }
    local_34 = 0;
    local_2c = 0x80000000;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    if (0x7f < *(int *)((int)pvVar2 + 8)) {
      bVar4 = pfVar3 + 0x20 == *(float **)((int)pvVar2 + 0xc);
LAB_0092770f:
      if ((bVar4) && (*(float **)((int)pvVar2 + 0x14) != pfVar3)) {
        *(float **)((int)pvVar2 + 0xc) = pfVar3;
        goto LAB_00927728;
      }
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x10) = 0x3d4ccccd;
    param_2[1] = iVar1;
    if (0.0 < (float)param_2[0x24]) {
      FUN_01272ab0(iVar1,param_2[0x24],param_2);
      *(undefined1 *)(param_2 + 0x2d) = 3;
    }
    iVar1 = FUN_0091fd10(unaff_EBP,param_2,param_5,param_5,param_6);
    if (iVar1 == 0) {
      FUN_010060a0();
      if (unaff_EBP != (undefined4 *)0x0) {
        FUN_00dd4920(unaff_EBP);
      }
      *unaff_retaddr = 0;
      FUN_009211c0();
    }
    else {
      FUN_010060a0();
      if (*(int *)(param_1 + 0xe8) != 0) {
        (**(code **)(**(int **)(param_1 + 0xe8) + 8))(&stack0xffffffc0);
      }
      *unaff_retaddr = *unaff_EBP;
      FUN_009211c0();
    }
    local_30 = 0;
    if (-1 < local_2c) {
      local_30 = 0;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c << 4);
    }
    local_34 = 0;
    local_2c = 0x80000000;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    if (0x7f < *(int *)((int)pvVar2 + 8)) {
      bVar4 = pfVar3 + 0x20 == *(float **)((int)pvVar2 + 0xc);
      goto LAB_0092770f;
    }
  }
  FUN_0100b9b0(pfVar3,0x80);
LAB_00927728:
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return unaff_retaddr;
}

