// lib/havok/unit_010367F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010367F0..01037270, 23 functions

#include "types.h"

// 010367F0  FUN_010367f0  size=162  [run]
void FUN_010367f0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"className");
  FUN_0143e7c0(param_2,"className");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      FUN_010369e0(&PTR_PTR_01b1acf8);
      puVar2 = (undefined4 *)FUN_0143e860(0);
      iVar3 = FUN_01025be0(*puVar2,0);
      if (iVar3 != 0) {
        uVar4 = FUN_01016080(iVar3);
        (**(code **)(*param_3 + 0xc))(uVar4);
        puVar2 = (undefined4 *)FUN_0143e860(0);
        *puVar2 = uVar4;
      }
      FUN_01025870();
    }
  }
  return;
}

// 010368A0  FUN_010368a0  size=236  [run]
void FUN_010368a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"namedVariants");
  FUN_0143e7c0(param_1,"namedVariants");
  pcVar2 = (char *)FUN_0143e810(&local_5);
  if ((*pcVar2 != '\0') && (pcVar2 = (char *)FUN_0143e810(&local_5), *pcVar2 != '\0')) {
    piVar3 = (int *)FUN_0143e9a0(0);
    local_c = piVar3;
    local_10 = (int *)FUN_0143e9a0(0);
    iVar7 = 0;
    if (0 < piVar3[1]) {
      do {
        iVar4 = FUN_0143ea60(local_3c);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        iVar5 = FUN_01009750();
        iVar4 = *local_10;
        iVar6 = FUN_0143ea60(local_44);
        local_14 = *(undefined4 *)(iVar6 + 4);
        iVar6 = FUN_01009750();
        local_2c = iVar6 * iVar7 + *local_c;
        local_28 = local_14;
        local_34 = iVar5 * iVar7 + iVar4;
        local_30 = uVar1;
        FUN_010367f0(&local_34,&local_2c,param_3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_c[1]);
    }
  }
  return;
}

// 010369A0  FUN_010369a0  size=27  [run]
uint __fastcall FUN_010369a0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010369C0  FUN_010369c0  size=9  [run]
void FUN_010369c0(void)

{
  FUN_01025470();
  return;
}

// 010369D0  FUN_010369d0  size=9  [run]
void FUN_010369d0(void)

{
  FUN_01025be0();
  return;
}

// 010369E0  FUN_010369e0  size=91  [run]
uint __thiscall FUN_010369e0(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  for (; param_2 != (int *)0x0; param_2 = (int *)param_2[3]) {
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      iVar3 = 0;
      iVar2 = *piVar1;
      while (iVar2 != 0) {
        FUN_01025470(iVar2,piVar1[1]);
        iVar3 = iVar3 + 1;
        piVar1 = (int *)(*param_2 + iVar3 * 8);
        iVar2 = *(int *)(*param_2 + iVar3 * 8);
      }
    }
  }
  return param_1;
}

// 01036A50  FUN_01036a50  size=126  [run]
void FUN_01036a50(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  iVar3 = 0;
  if (0 < unaff_EDI[1]) {
    do {
      uVar1 = FUN_010093a0();
      iVar2 = FUN_01015b90(uVar1,"hkExtendedMeshShape");
      if (iVar2 == 0) {
        *(undefined **)(*unaff_EDI + 4 + iVar3 * 8) = &DAT_02045e1c;
      }
      else {
        iVar2 = FUN_01015b90(uVar1,"hkSphereShape");
        if (iVar2 == 0) {
          *(undefined **)(*unaff_EDI + 4 + iVar3 * 8) = &DAT_0204623c;
        }
        else {
          iVar2 = FUN_01015b90(uVar1,"hkMassChangerModifierConstraintAtom");
          if (iVar2 == 0) {
            *(undefined **)(*unaff_EDI + 4 + iVar3 * 8) = &DAT_0204698c;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI[1]);
  }
  return;
}

// 01036AD0  FUN_01036ad0  size=50  [run]
void FUN_01036ad0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_01036a50();
  uVar1 = FUN_0104ed70("Havok-4.6.1-r1");
  hkRenamedClassNameRegistry::hkRenamedClassNameRegistry(param_1,param_2,&PTR_DAT_01b1ad18,uVar1);
  return;
}

// 01036B30  FUN_01036b30  size=31  [run]
void FUN_01036b30(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,"multithreadLock",param_2,"multiThreadCheck");
  return;
}

// 01036B50  FUN_01036b50  size=74  [run]
void FUN_01036b50(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_0143e7c0(param_1,"materialIndexStriding");
  FUN_0143e7c0(param_2,"materialIndexStriding");
  puVar1 = (undefined2 *)FUN_0143e8b0(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  return;
}

// 01036BA0  FUN_01036ba0  size=173  [run]
void FUN_01036ba0(undefined4 param_1,undefined4 param_2,code *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar1 = (int *)FUN_0143e9a0(0);
  local_c = (int *)FUN_0143e9a0(0);
  local_28 = 0;
  iVar2 = FUN_0143ea60(local_18);
  local_24 = *(undefined4 *)(iVar2 + 4);
  iVar3 = 0;
  local_20 = 0;
  iVar2 = FUN_0143ea60(local_18);
  local_1c = *(undefined4 *)(iVar2 + 4);
  local_10 = FUN_01009750();
  local_14 = FUN_01009750();
  iVar2 = 0;
  if (0 < piVar1[1]) {
    local_8 = 0;
    do {
      local_28 = *piVar1 + iVar3;
      local_20 = *local_c + local_8;
      (*param_3)(&local_28,&local_20,param_2);
      iVar3 = iVar3 + local_10;
      local_8 = local_8 + local_14;
      iVar2 = iVar2 + 1;
    } while (iVar2 < piVar1[1]);
  }
  return;
}

// 01036C50  FUN_01036c50  size=122  [run]
void FUN_01036c50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = FUN_01036b50;
  uVar2 = param_3;
  FUN_0143e7c0(param_2,"trianglesSubparts");
  uVar1 = FUN_0143e7c0(param_1,"trianglesSubparts");
  FUN_01036ba0(uVar1,uVar2,pcVar3);
  pcVar3 = FUN_01036b50;
  FUN_0143e7c0(param_2,"shapesSubparts");
  uVar2 = FUN_0143e7c0(param_1,"shapesSubparts");
  FUN_01036ba0(uVar2,param_3,pcVar3);
  return;
}

// 01036CD0  FUN_01036cd0  size=104  [run]
void FUN_01036cd0(undefined4 param_1,undefined4 param_2)

{
  short *psVar1;
  undefined1 *puVar2;
  float local_c;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"friction");
  FUN_0143e7c0(param_2,"friction");
  psVar1 = (short *)FUN_0143e900(0);
  local_c = (float)(int)*psVar1 * 0.00390625;
  FUN_0100b3c0(&local_c);
  puVar2 = (undefined1 *)FUN_0143e920(0);
  *puVar2 = local_5;
  return;
}

// 01036D40  FUN_01036d40  size=63  [run]
void FUN_01036d40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_0143e7c0(param_2,"enabledChildren");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  return;
}

// 01036D80  FUN_01036d80  size=136  [run]
void FUN_01036d80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_0143e7c0(param_1,"m_trianglesSubparts");
  FUN_0143e7c0(param_2,"m_trianglesSubparts");
  FUN_0143e7c0(param_1,"m_shapesSubparts");
  FUN_0143e7c0(param_2,"m_shapesSubparts");
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}

// 01036E20  FUN_01036e20  size=158  [run]
void FUN_01036e20(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  int iVar4;
  
  FUN_0143e7c0(param_2,"rigidBodies");
  iVar1 = FUN_0143e9a0(0);
  iVar1 = *(int *)(iVar1 + 4);
  FUN_0143e7c0(param_2,"boneToRigidBodyMap");
  piVar2 = (int *)FUN_0143e830();
  piVar2[2] = iVar1;
  piVar2[1] = iVar1;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar1 * 4);
  *piVar2 = iVar4;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      *(int *)(*piVar2 + iVar4 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  (**(code **)(*param_3 + 0x10))(*piVar2,piVar2[2] * 4,0x18);
  piVar2[2] = piVar2[2] | 0x80000000;
  return;
}

// 01036EC0  FUN_01036ec0  size=330  [run]
void FUN_01036ec0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LPVOID pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  FUN_0143e7c0(param_1,"elbowAxisLS");
  FUN_0143e7c0(param_1,"backHandNormalInHandSpace");
  FUN_0143e7c0(param_1,"cosineMaxElbowAngle");
  FUN_0143e7c0(param_1,"cosineMinElbowAngle");
  FUN_0143e7c0(param_2,"hands");
  piVar4 = (int *)FUN_0143e830();
  piVar4[2] = 2;
  piVar4[1] = 2;
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x60);
  *piVar4 = iVar6;
  puVar7 = (undefined4 *)FUN_0143e940(0);
  puVar8 = (undefined4 *)*piVar4;
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  *puVar8 = *puVar7;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  puVar8[3] = uVar3;
  puVar8 = (undefined4 *)FUN_0143e940(1);
  iVar6 = *piVar4;
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  *(undefined4 *)(iVar6 + 0x30) = *puVar8;
  *(undefined4 *)(iVar6 + 0x34) = uVar1;
  *(undefined4 *)(iVar6 + 0x38) = uVar2;
  *(undefined4 *)(iVar6 + 0x3c) = uVar3;
  puVar8 = (undefined4 *)FUN_0143e940(0);
  iVar6 = *piVar4;
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  *(undefined4 *)(iVar6 + 0x10) = *puVar8;
  *(undefined4 *)(iVar6 + 0x14) = uVar1;
  *(undefined4 *)(iVar6 + 0x18) = uVar2;
  *(undefined4 *)(iVar6 + 0x1c) = uVar3;
  puVar8 = (undefined4 *)FUN_0143e940(1);
  iVar6 = *piVar4;
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  *(undefined4 *)(iVar6 + 0x40) = *puVar8;
  *(undefined4 *)(iVar6 + 0x44) = uVar1;
  *(undefined4 *)(iVar6 + 0x48) = uVar2;
  *(undefined4 *)(iVar6 + 0x4c) = uVar3;
  puVar8 = (undefined4 *)FUN_0143e890(0);
  *(undefined4 *)(*piVar4 + 0x20) = *puVar8;
  puVar8 = (undefined4 *)FUN_0143e890(1);
  *(undefined4 *)(*piVar4 + 0x50) = *puVar8;
  puVar8 = (undefined4 *)FUN_0143e890(0);
  *(undefined4 *)(*piVar4 + 0x24) = *puVar8;
  puVar8 = (undefined4 *)FUN_0143e890(1);
  *(undefined4 *)(*piVar4 + 0x54) = *puVar8;
  *(undefined2 *)(*piVar4 + 0x28) = 0;
  *(undefined2 *)(*piVar4 + 0x58) = 1;
  (**(code **)(*param_3 + 0x10))(*piVar4,piVar4[2] * 0x30,0x18);
  piVar4[2] = piVar4[2] | 0x80000000;
  return;
}

// 01037010  FUN_01037010  size=35  [run]
void FUN_01037010(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 4);
  return;
}

// 01037040  FUN_01037040  size=37  [run]
void FUN_01037040(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 0x30);
  return;
}

// 01037080  FUN_01037080  size=86  [run]
void FUN_01037080(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0143e7c0(param_1,"transitions");
  FUN_0143e7c0(param_2,"transitions");
  FUN_0143e9e0();
  uVar1 = FUN_01016360();
  uVar1 = FUN_0143e840(uVar1);
  uVar1 = FUN_0143e840(uVar1);
  FUN_01015e80(uVar1);
  return;
}

// 010370E0  FUN_010370e0  size=246  [run]
void FUN_010370e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  FUN_0143e7c0(param_1,"startState");
  FUN_0143e7c0(param_2,"startStateId");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  puVar2 = (undefined4 *)FUN_0143e8b0(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"randomStartState");
  FUN_0143e7c0(param_2,"startStateMode");
  pcVar3 = (char *)FUN_0143e880(0);
  if (*pcVar3 == '\0') {
    FUN_0143e7c0(param_1,"enterStartStateOnActivate");
    pcVar3 = (char *)FUN_0143e880(0);
    if (*pcVar3 == '\0') {
      puVar4 = (undefined1 *)FUN_0143e920(0);
      *puVar4 = 1;
    }
  }
  else {
    puVar4 = (undefined1 *)FUN_0143e920(0);
    *puVar4 = 3;
  }
  FUN_0143e7c0(param_1,"globalTransitions");
  FUN_0143e7c0(param_2,"globalTransitions");
  FUN_0143e9e0();
  uVar5 = FUN_01016360();
  uVar5 = FUN_0143e840(uVar5);
  uVar5 = FUN_0143e840(uVar5);
  FUN_01015e80(uVar5);
  return;
}

// 010371F0  FUN_010371f0  size=114  [run]
void FUN_010371f0(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  int iVar5;
  
  FUN_0143e7c0(param_1,"deactivationNumInactiveFrames");
  FUN_0143e7c0(param_2,"deactivationNumInactiveFrames");
  iVar5 = 0;
  FUN_0143e9e0();
  iVar2 = FUN_01016320();
  if (0 < iVar2) {
    do {
      pbVar3 = (byte *)FUN_0143e930(iVar5);
      bVar1 = *pbVar3;
      puVar4 = (ushort *)FUN_0143e910(iVar5);
      *puVar4 = (ushort)bVar1;
      iVar5 = iVar5 + 1;
      FUN_0143e9e0();
      iVar2 = FUN_01016320();
    } while (iVar5 < iVar2);
  }
  return;
}

// 01037270  FUN_01037270  size=134  [run]
void FUN_01037270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"motion");
  FUN_0143e7c0(param_2,"motion");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_24 = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_20 = *(undefined4 *)(iVar2 + 4);
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_1c = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_18 = *(undefined4 *)(iVar2 + 4);
  FUN_010371f0(&local_24,&local_1c,param_3);
  return;
}

