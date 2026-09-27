// lib/havok/unit_01037370.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01037370..010559E0, 563 functions

#include "mgrr.h"
#include "ValidatedClassNameRegistry.h"
#include "hkBaseObject.h"
#include "hkBinaryPackfileReader.h"
#include "hkClassNameRegistry.h"
#include "hkDynamicClassNameRegistry.h"
#include "hkRenamedClassNameRegistry.h"
#include "hkSerializeDeprecated.h"
#include "hkSerializeDeprecated2.h"
#include "hkVersionPatchManager.h"
#include "hkVersionRegistry.h"
#include "hkVtableClassRegistry.h"
#include "hkXmlObjectWriter.h"
#include "hkXmlPackfileWriter.h"

// 01037370  FUN_01037370  size=74  [run]
void FUN_01037370(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_0143e7c0(param_1,"words");
  FUN_0143e7c0(param_2,"numBitsAndFlags");
  iVar1 = FUN_0143e9a0(0);
  iVar1 = *(int *)(iVar1 + 4);
  piVar2 = (int *)FUN_0143e8b0(0);
  *piVar2 = iVar1 << 5;
  return;
}

// 010373C0  FUN_010373c0  size=118  [run]
void FUN_010373c0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  ushort *puVar2;
  
  FUN_0143e7c0(param_2,"flags");
  FUN_0143e7c0(param_1,&DAT_017893a8);
  FUN_0143e7c0(param_1,"autoComputeSecondGeneratorWeight");
  pcVar1 = (char *)FUN_0143e880(0);
  if (*pcVar1 != '\0') {
    puVar2 = (ushort *)FUN_0143e900(0);
    *puVar2 = *puVar2 | 1;
  }
  pcVar1 = (char *)FUN_0143e880(0);
  if (*pcVar1 != '\0') {
    puVar2 = (ushort *)FUN_0143e900(0);
    *puVar2 = *puVar2 | 2;
  }
  return;
}

// 01037440  FUN_01037440  size=132  [run]
void FUN_01037440(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  
  FUN_0143e7c0(param_1,"filename");
  FUN_0143e7c0(param_2,"animationName");
  puVar1 = (undefined4 *)FUN_0143e850(0);
  puVar2 = (undefined4 *)FUN_0143e850(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"continueMotionAtEnd");
  FUN_0143e7c0(param_2,"flags");
  pcVar3 = (char *)FUN_0143e880(0);
  if (*pcVar3 != '\0') {
    puVar4 = (undefined1 *)FUN_0143e920(0);
    *puVar4 = 1;
  }
  return;
}

// 010374D0  FUN_010374d0  size=130  [run]
void FUN_010374d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"ascendingGain");
  FUN_0143e7c0(param_2,"groundAscendingGain");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"descendingGain");
  FUN_0143e7c0(param_2,"groundDescendingGain");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  return;
}

// 01037560  FUN_01037560  size=96  [run]
void FUN_01037560(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)FUN_0143ea60(local_1c);
  local_14 = *puVar1;
  iVar2 = FUN_0143ea60(local_1c);
  local_10 = *(undefined4 *)(iVar2 + 4);
  puVar1 = (undefined4 *)FUN_0143ea60(local_1c);
  local_c = *puVar1;
  iVar2 = FUN_0143ea60(local_1c);
  local_8 = *(undefined4 *)(iVar2 + 4);
  FUN_010374d0(&local_14,&local_c,param_1);
  return;
}

// 010375C0  FUN_010375c0  size=64  [run]
void FUN_010375c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7c0(param_2,"gains");
  FUN_0143e7c0(param_1,"gains");
  FUN_01037560(param_3);
  return;
}

// 01037600  FUN_01037600  size=64  [run]
void FUN_01037600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7c0(param_2,"gains");
  FUN_0143e7c0(param_1,"gains");
  FUN_01037560(param_3);
  return;
}

// 01037640  FUN_01037640  size=134  [run]
void FUN_01037640(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"controlData");
  FUN_0143e7c0(param_2,"controlData");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_24 = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_20 = *(undefined4 *)(iVar2 + 4);
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_1c = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_18 = *(undefined4 *)(iVar2 + 4);
  FUN_010375c0(&local_24,&local_1c,param_3);
  return;
}

// 010376D0  FUN_010376d0  size=105  [run]
void FUN_010376d0(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  FUN_0143e7c0(param_1,"reachReferenceBoneIdx");
  FUN_0143e7c0(param_2,"reachReferenceBoneIdx");
  puVar2 = (undefined2 *)FUN_0143e840();
  puVar3 = (undefined2 *)FUN_0143e900(0);
  uVar1 = *puVar3;
  puVar2[1] = uVar1;
  *puVar2 = uVar1;
  FUN_0143e7c0(param_2,"isHandEnabled");
  puVar2 = (undefined2 *)FUN_0143e840();
  *puVar2 = 0x101;
  return;
}

// 01037740  FUN_01037740  size=75  [run]
void FUN_01037740(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_0143e7c0(param_2,"enterNotifyEvent");
  FUN_0143e7c0(param_2,"exitNotifyEvent");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  *puVar1 = 0xffffffff;
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  *puVar1 = 0xffffffff;
  return;
}

// 01037790  FUN_01037790  size=103  [run]
void FUN_01037790(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"radius");
  FUN_0143e7c0(param_2,"triangleRadius");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      puVar2 = (undefined4 *)FUN_0143e890(0);
      puVar3 = (undefined4 *)FUN_0143e890(0);
      *puVar3 = *puVar2;
    }
  }
  return;
}

// 01037810  FUN_01037810  size=222  [run]
void FUN_01037810(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_18 [8];
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  FUN_0143e7c0(param_2,"scheme");
  FUN_0143e9f0(local_18,"commands");
  puVar1 = (undefined4 *)FUN_0143e9a0(0);
  puVar1 = (undefined4 *)*puVar1;
  iVar2 = FUN_0143e9a0(0);
  local_10 = puVar1 + *(int *)(iVar2 + 4);
  if (puVar1 < local_10) {
    local_8 = puVar1 + 2;
    local_c = puVar1;
    do {
      switch(*puVar1) {
      case 0:
        goto switchD_0103787e_caseD_0;
      case 3:
      case 4:
      case 5:
      case 6:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x14:
      case 0x15:
      case 0x18:
        puVar1 = puVar1 + 1;
        local_8 = local_8 + 1;
        local_c = local_c + 1;
        break;
      case 0x13:
        puVar1 = puVar1 + 2;
        local_8 = local_8 + 2;
        local_c = local_c + 2;
        break;
      case 0x19:
        if (local_8 < local_10) {
          puVar3 = local_8;
          puVar4 = local_c;
          for (iVar2 = ((uint)((int)local_10 + (-1 - (int)local_8)) >> 2) + 1; iVar2 != 0;
              iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        local_10 = local_10 + -2;
        iVar2 = FUN_0143e9a0(0);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -2;
        local_8 = local_8 + -1;
        puVar1 = puVar1 + -1;
        local_c = local_c + -1;
      }
      puVar1 = puVar1 + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (puVar1 < local_10);
switchD_0103787e_caseD_0:
  }
  return;
}

// 01037930  FUN_01037930  size=77  [run]
void FUN_01037930(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_0143e7c0(param_1,"backHandNormalInHandSpace");
  FUN_0143e7c0(param_2,"backHandNormalInHandSpace");
  puVar4 = (undefined4 *)FUN_0143e840();
  puVar5 = (undefined4 *)FUN_0143e840();
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  puVar5[4] = *puVar4;
  puVar5[5] = uVar1;
  puVar5[6] = uVar2;
  puVar5[7] = uVar3;
  return;
}

// 01037980  FUN_01037980  size=209  [run]
void FUN_01037980(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  LPVOID pvVar6;
  int iVar7;
  
  FUN_0143e7c0(param_1,"attributes");
  FUN_0143e7c0(param_1,"attributeIndices");
  FUN_0143e7c0(param_2,"assignments");
  piVar3 = (int *)FUN_0143e830();
  piVar4 = (int *)FUN_0143e830();
  piVar5 = (int *)FUN_0143e830();
  iVar7 = piVar3[1];
  piVar5[2] = iVar7;
  piVar5[1] = iVar7;
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(iVar7 * 8);
  *piVar5 = iVar7;
  iVar7 = 0;
  if (0 < piVar3[1]) {
    do {
      puVar2 = (undefined4 *)(*piVar5 + iVar7 * 8);
      *puVar2 = *(undefined4 *)(*piVar4 + iVar7 * 4);
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      puVar2[1] = *(undefined4 *)(*piVar3 + iVar1);
    } while (iVar7 < piVar3[1]);
  }
  (**(code **)(*param_3 + 0x10))(*piVar5,piVar5[2] * 8,0x18);
  piVar5[2] = piVar5[2] | 0x80000000;
  return;
}

// 01037A60  FUN_01037a60  size=170  [run]
void __thiscall FUN_01037a60(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined2 *puVar4;
  int iVar5;
  
  FUN_0143e7c0(in_EAX,param_1);
  FUN_0143e7c0(param_2,param_1);
  piVar1 = (int *)FUN_0143e830();
  FUN_0143e9e0();
  iVar2 = FUN_01016320();
  piVar1[2] = iVar2;
  piVar1[1] = iVar2;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar2 * 2);
  iVar5 = 0;
  *piVar1 = iVar2;
  if (0 < piVar1[1]) {
    do {
      puVar4 = (undefined2 *)FUN_0143e900(iVar5);
      *(undefined2 *)(*piVar1 + iVar5 * 2) = *puVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar1[1]);
  }
  (**(code **)(*param_3 + 0x10))(*piVar1,piVar1[2] * 2,0x18);
  piVar1[2] = piVar1[2] | 0x80000000;
  return;
}

// 01037B10  FUN_01037b10  size=121  [run]
void FUN_01037b10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01037a60(param_2,param_3);
  FUN_01037a60(param_2,param_3);
  FUN_01037a60(param_2,param_3);
  FUN_01037a60(param_2,param_3);
  FUN_01037a60(param_2,param_3);
  FUN_01037a60(param_2,param_3);
  FUN_01037a60(param_2,param_3);
  return;
}

// 01037B90  FUN_01037b90  size=96  [run]
void FUN_01037b90(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)FUN_0143ea60(local_1c);
  local_14 = *puVar1;
  iVar2 = FUN_0143ea60(local_1c);
  local_10 = *(undefined4 *)(iVar2 + 4);
  puVar1 = (undefined4 *)FUN_0143ea60(local_1c);
  local_c = *puVar1;
  iVar2 = FUN_0143ea60(local_1c);
  local_8 = *(undefined4 *)(iVar2 + 4);
  FUN_01037b10(&local_14,&local_c,param_1);
  return;
}

// 01037BF0  FUN_01037bf0  size=113  [run]
void FUN_01037bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = param_3;
  FUN_0143e7c0(param_2,"animationBoneInfo");
  FUN_0143e7c0(param_1,"animationBoneInfo");
  FUN_01037b90(uVar1);
  FUN_0143e7c0(param_2,"ragdollBoneInfo");
  FUN_0143e7c0(param_1,"ragdollBoneInfo");
  FUN_01037b90(param_3);
  return;
}

// 01037C70  FUN_01037c70  size=172  [run]
void FUN_01037c70(int *param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  LPVOID pvVar4;
  short *psVar5;
  int iVar6;
  int *unaff_ESI;
  int *unaff_EDI;
  
  iVar3 = unaff_EDI[1];
  iVar6 = 0;
  if (0 < iVar3) {
    psVar5 = (short *)*unaff_EDI;
    do {
      if (iVar6 < *psVar5) {
        iVar6 = (int)*psVar5;
      }
      psVar5 = psVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  unaff_ESI[2] = iVar6 + 1;
  iVar3 = iVar6 + 0x20 >> 5;
  unaff_ESI[1] = iVar3;
  if (iVar3 != 0) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(iVar3 * 4);
    *unaff_ESI = iVar3;
    FUN_01015ea0(iVar3,0,unaff_ESI[1] * 4);
    (**(code **)(*param_1 + 0x10))(*unaff_ESI,unaff_ESI[1] * 4,0x18);
    iVar3 = 0;
    if (0 < unaff_EDI[1]) {
      do {
        sVar2 = *(short *)(*unaff_EDI + iVar3 * 2);
        puVar1 = (uint *)(*unaff_ESI + ((int)sVar2 >> 5) * 4);
        iVar3 = iVar3 + 1;
        *puVar1 = *puVar1 | 1 << ((byte)sVar2 & 0x1f);
      } while (iVar3 < unaff_EDI[1]);
    }
  }
  unaff_ESI[2] = unaff_ESI[2] | 0x80000000;
  return;
}

// 01037D20  FUN_01037d20  size=171  [run]
void FUN_01037d20(int *param_1)

{
  uint *puVar1;
  int iVar2;
  LPVOID pvVar3;
  int *piVar4;
  int iVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  
  iVar2 = unaff_EDI[1];
  iVar5 = 0;
  if (0 < iVar2) {
    piVar4 = (int *)*unaff_EDI;
    do {
      if (iVar5 < *piVar4) {
        iVar5 = *piVar4;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  unaff_ESI[2] = iVar5 + 1;
  iVar2 = iVar5 + 0x20 >> 5;
  unaff_ESI[1] = iVar2;
  if (iVar2 != 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar2 * 4);
    *unaff_ESI = iVar2;
    FUN_01015ea0(iVar2,0,unaff_ESI[1] * 4);
    (**(code **)(*param_1 + 0x10))(*unaff_ESI,unaff_ESI[1] * 4,0x18);
    iVar2 = 0;
    if (0 < unaff_EDI[1]) {
      do {
        iVar5 = *(int *)(*unaff_EDI + iVar2 * 4);
        puVar1 = (uint *)(*unaff_ESI + (iVar5 >> 5) * 4);
        iVar2 = iVar2 + 1;
        *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
      } while (iVar2 < unaff_EDI[1]);
    }
  }
  unaff_ESI[2] = unaff_ESI[2] | 0x80000000;
  return;
}

// 01037DD0  FUN_01037dd0  size=80  [run]
void FUN_01037dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7c0(param_1,"lowerBodyBones");
  FUN_0143e7c0(param_2,"keyframedBones");
  FUN_0143e830(param_3);
  FUN_0143e830();
  FUN_01037c70();
  return;
}

// 01037E20  FUN_01037e20  size=80  [run]
void FUN_01037e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7c0(param_1,"keyframedBones");
  FUN_0143e7c0(param_2,"keyframedBones");
  FUN_0143e830(param_3);
  FUN_0143e830();
  FUN_01037d20();
  return;
}

// 01037E70  FUN_01037e70  size=37  [run]
void FUN_01037e70(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 8);
  return;
}

// 01037EA0  FUN_01037ea0  size=33  [run]
void FUN_01037ea0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 2);
  return;
}

// 01037ED0  FUN_01037ed0  size=35  [run]
void FUN_01037ed0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 4);
  return;
}

// 01037F00  FUN_01037f00  size=110  [run]
void FUN_01037f00(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"numChildShapes");
  FUN_0143e7c0(param_1,"numShapes");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      puVar2 = (undefined4 *)FUN_0143e8b0(0);
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_0143e8b0(0);
      *puVar2 = 0;
    }
  }
  return;
}

// 01037F70  FUN_01037f70  size=110  [run]
void FUN_01037f70(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"numTriangleShapes");
  FUN_0143e7c0(param_1,"numShapes");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      puVar2 = (undefined4 *)FUN_0143e8b0(0);
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_0143e8b0(0);
      *puVar2 = 0;
    }
  }
  return;
}

// 01037FE0  FUN_01037fe0  size=173  [run]
void FUN_01037fe0(undefined4 param_1,undefined4 param_2,code *param_3)

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

// 01038090  FUN_01038090  size=122  [run]
void FUN_01038090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = FUN_01037f70;
  uVar2 = param_3;
  FUN_0143e7c0(param_2,"trianglesSubparts");
  uVar1 = FUN_0143e7c0(param_1,"trianglesSubparts");
  FUN_01037fe0(uVar1,uVar2,pcVar3);
  pcVar3 = FUN_01037f00;
  FUN_0143e7c0(param_2,"shapesSubparts");
  uVar2 = FUN_0143e7c0(param_1,"shapesSubparts");
  FUN_01037fe0(uVar2,param_3,pcVar3);
  return;
}

// 01038110  FUN_01038110  size=64  [run]
void FUN_01038110(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  if (!bVar3) {
    do {
      uVar1 = FUN_010093a0(param_3);
      iVar2 = FUN_01015b90(uVar1);
      if (iVar2 == 0) break;
      param_2 = FUN_010093b0();
    } while (param_2 != 0);
    bVar3 = param_2 == 0;
  }
  *(bool *)param_1 = !bVar3;
  return;
}

// 01038150  FUN_01038150  size=38  [run]
int FUN_01038150(int param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - (uint)param_2[1]) * (uint)*param_2 + 7;
  return ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + (uint)param_2[1] * 4;
}

// 01038180  FUN_01038180  size=57  [run]
undefined4 FUN_01038180(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 local_8;
  
  FUN_0143e7c0(in_EAX,&DAT_01662d64);
  puVar1 = &local_8;
  FUN_0143e9e0(param_1,puVar1);
  FUN_01016310();
  FUN_01017780(param_1,puVar1);
  return local_8;
}

// 010381C0  FUN_010381c0  size=255  [run]
void FUN_010381c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_c [8];
  
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,&DAT_01662d64);
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar2 = FUN_010093a0("hkInterleavedSkeletalAnimation");
  iVar3 = FUN_01015b90(uVar2);
  if (iVar3 == 0) {
    FUN_0143ea40(param_2);
    uVar2 = FUN_01038180("HK_INTERLEAVED_ANIMATION");
    *puVar1 = uVar2;
    return;
  }
  uVar2 = FUN_010093a0("hkDeltaCompressedSkeletalAnimation");
  iVar3 = FUN_01015b90(uVar2);
  if (iVar3 == 0) {
    FUN_0143ea40(param_2);
    uVar2 = FUN_01038180("HK_DELTA_COMPRESSED_ANIMATION");
    *puVar1 = uVar2;
    return;
  }
  uVar2 = FUN_010093a0("hkWaveletSkeletalAnimation");
  iVar3 = FUN_01015b90(uVar2);
  if (iVar3 == 0) {
    FUN_0143ea40(param_2);
    uVar2 = FUN_01038180("HK_WAVELET_COMPRESSED_ANIMATION");
    *puVar1 = uVar2;
    return;
  }
  FUN_0143ea40(param_2);
  uVar2 = FUN_01038180("HK_UNKNOWN_ANIMATION");
  *puVar1 = uVar2;
  return;
}

// 010382D0  FUN_010382d0  size=193  [run]
void FUN_010382d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [19];
  char local_5;
  
  FUN_0143ea40(param_2);
  FUN_0143ea40(param_1);
  FUN_0143e7c0(local_18,"deactivator");
  puVar1 = (undefined4 *)FUN_0143e850(0);
  if (DAT_02097cb4 != 0) {
    iVar2 = FUN_01010160(*puVar1,0);
    if ((iVar2 != 0) &&
       (FUN_01038110(&local_5,iVar2,"hkSpatialRigidBodyDeactivator"), local_5 != '\0')) {
      return;
    }
    FUN_0143e7c0(local_20,"motion");
    uVar3 = FUN_0143e840();
    FUN_0143e9e0();
    uVar4 = FUN_010162f0();
    FUN_0143ea20(uVar3,uVar4);
    FUN_0143e7c0(local_28,"deactivationIntegrateCounter");
    puVar5 = (undefined1 *)FUN_0143e930(0);
    *puVar5 = 0xff;
  }
  return;
}

// 010383A0  FUN_010383a0  size=156  [run]
undefined4 FUN_010383a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0xffffffff;
  if (0 < param_1[1]) {
    do {
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*param_1 + iVar2 * 8),
                   *(undefined4 *)(*param_1 + 4 + iVar2 * 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  DAT_02097cb4 = &local_10;
  uVar1 = FUN_0104ed70("Havok-4.1.0-b1");
  uVar1 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                    (param_1,param_2,&PTR_DAT_01b1ae38,uVar1);
  DAT_02097cb4 = (undefined4 *)0x0;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return uVar1;
}

// 01038440  FUN_01038440  size=272  [run]
void FUN_01038440(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 local_20;
  undefined *local_1c;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"childShapes");
  FUN_0143e7c0(param_1,"childInfo");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if ((*pcVar1 != '\0') && (pcVar1 = (char *)FUN_0143e810(&local_5), *pcVar1 != '\0')) {
    piVar2 = (int *)FUN_0143e830();
    piVar3 = (int *)FUN_0143e830();
    piVar8 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = -0x80000000;
      piVar8 = piVar3;
    }
    iVar5 = piVar2[1];
    if ((int)(piVar8[2] & 0x3fffffffU) < iVar5) {
      iVar4 = (piVar8[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,piVar8,iVar4,4);
    }
    piVar8[1] = iVar5;
    iVar5 = 0;
    if (0 < piVar2[1]) {
      do {
        *(undefined4 *)(*piVar8 + iVar5 * 4) = *(undefined4 *)(*piVar2 + iVar5 * 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar2[1]);
    }
    local_1c = &DAT_020705e4;
    local_20 = *(undefined4 *)*piVar2;
    FUN_0143e7c0(param_2,"radius");
    FUN_0143e7c0(&local_20,"radius");
    puVar6 = (undefined4 *)FUN_0143e890(0);
    puVar7 = (undefined4 *)FUN_0143e890(0);
    *puVar7 = *puVar6;
  }
  return;
}

// 01038550  FUN_01038550  size=953  [run]
void FUN_01038550(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  LPVOID pvVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 local_5c;
  undefined1 local_5b;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [4];
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_010381c0(param_1,param_2,param_3);
  FUN_0143e7c0(local_34,"qFormat");
  FUN_0143ea60(local_2c);
  FUN_0143e7c0(local_1c,"qFormat");
  FUN_0143ea60(local_24);
  FUN_0143e7c0(local_2c,"offset");
  iVar2 = FUN_0143e830();
  uVar1 = *(uint *)(iVar2 + 4);
  FUN_0143e7c0(local_24,&DAT_0173b82c);
  puVar3 = (uint *)FUN_0143e8b0(0);
  *puVar3 = uVar1;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x80000000;
  FUN_0143e7c0(local_24,"offsetIdx");
  FUN_0143e7c0(local_2c,"offset");
  iVar2 = FUN_01038fa0(local_c,uVar1 * 4,&local_50,0,local_14);
  FUN_0143e7c0(local_24,"scaleIdx");
  FUN_0143e7c0(local_2c,"scale");
  iVar4 = FUN_01038fa0(local_c,uVar1 * 4,&local_50,iVar2,local_14);
  FUN_0143e7c0(local_1c,"staticDOFsIdx");
  FUN_0143e7c0(local_34,"staticDOFs");
  iVar5 = FUN_01039020(local_c,&local_50,iVar2 + iVar4,local_14);
  iVar5 = iVar2 + iVar4 + iVar5;
  FUN_0143e7c0(local_1c,"staticMaskIdx");
  FUN_0143e7c0(local_34,"staticMask");
  iVar2 = FUN_010390a0(local_c,&local_50,iVar5,local_14);
  iVar5 = iVar5 + iVar2;
  FUN_0143e7c0(local_24,"bitWidthIdx");
  FUN_0143e7c0(local_24,"maxBitWidth");
  FUN_0143e7c0(local_2c,"bitWidth");
  puVar6 = (undefined1 *)FUN_0143e930(0);
  iVar2 = FUN_01039260(local_44,uVar1,*puVar6,&local_50,iVar5,local_c);
  FUN_0143e7c0(local_1c,"quantizedDataIdx");
  FUN_0143e7c0(local_34,"quantizedData");
  FUN_01039120(local_14,&local_50,iVar5 + iVar2,local_44);
  local_8 = 0;
  FUN_0143e7c0(local_1c,"numberOfPoses");
  FUN_0143e7c0(local_1c,"blockSize");
  piVar7 = (int *)FUN_0143e8b0(0);
  piVar8 = (int *)FUN_0143e8b0(0);
  local_10 = *piVar8 % *piVar7;
  FUN_0143e7c0(local_24,"preserved");
  puVar6 = (undefined1 *)FUN_0143e930(0);
  iVar4 = local_50;
  local_5b = *puVar6;
  FUN_0143e7c0(local_24,"bitWidthIdx");
  piVar7 = (int *)FUN_0143e8b0(0);
  iVar2 = *piVar7;
  uVar12 = 0;
  if (uVar1 != 0) {
    do {
      local_5c = *(undefined1 *)(uVar12 + iVar2 + iVar4);
      iVar5 = FUN_01038150(local_10,&local_5c);
      local_8 = local_8 + iVar5;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar1);
  }
  FUN_0143e7c0(local_1c,"lastBlockSize");
  piVar7 = (int *)FUN_0143e8b0(0);
  *piVar7 = local_8;
  FUN_0143e7c0(local_1c,"dataBuffer");
  puVar9 = (undefined4 *)FUN_0143e9a0(0);
  uVar11 = local_4c;
  puVar9[1] = local_4c;
  pvVar10 = TlsGetValue(DAT_01f8fc4c);
  uVar11 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(uVar11);
  *puVar9 = uVar11;
  FUN_01015e80(uVar11,local_50,puVar9[1]);
  FUN_0143e7c0(local_1c,"dataBuffer");
  iVar2 = *param_3;
  uVar11 = FUN_0143e840();
  (**(code **)(iVar2 + 0x14))(*puVar9,uVar11);
  (**(code **)(*param_3 + 0x10))(*puVar9,puVar9[1],0x38);
  local_4c = 0;
  if (-1 < (int)local_48) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,local_48 & 0x3fffffff);
  }
  return;
}

// 01038910  FUN_01038910  size=875  [run]
void FUN_01038910(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  LPVOID pvVar11;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [8];
  undefined1 local_3c [16];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_2);
  FUN_0143ea40(param_1);
  FUN_010381c0(param_1,param_2,param_3);
  FUN_0143e7c0(local_1c,"qFormat");
  FUN_0143ea60(local_24);
  FUN_0143e7c0(local_c,"qFormat");
  FUN_0143ea60(local_14);
  FUN_0143e7c0(local_24,"offset");
  iVar1 = FUN_0143e830();
  iVar1 = *(int *)(iVar1 + 4);
  FUN_0143e7c0(local_14,&DAT_0173b82c);
  piVar2 = (int *)FUN_0143e8b0(0);
  *piVar2 = iVar1;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x80000000;
  FUN_0143e7c0(local_14,"offsetIdx");
  FUN_0143e7c0(local_24,"offset");
  iVar3 = FUN_01038fa0(local_3c,iVar1 * 4,&local_50,0,local_2c);
  FUN_0143e7c0(local_14,"scaleIdx");
  FUN_0143e7c0(local_24,"scale");
  iVar4 = FUN_01038fa0(local_2c,iVar1 * 4,&local_50,iVar3,local_3c);
  FUN_0143e7c0(local_c,"staticDOFsIdx");
  FUN_0143e7c0(local_1c,"staticDOFs");
  iVar5 = FUN_01039020(local_2c,&local_50,iVar3 + iVar4,local_3c);
  iVar5 = iVar3 + iVar4 + iVar5;
  FUN_0143e7c0(local_c,"blockIndexIdx");
  FUN_0143e7c0(local_1c,"blockIndex");
  uVar6 = FUN_010391a0(local_2c,&local_50,iVar5,local_3c);
  FUN_0143e7c0(local_c,"blockIndexSize");
  puVar7 = (uint *)FUN_0143e8b0(0);
  *puVar7 = uVar6 >> 2;
  iVar5 = iVar5 + uVar6;
  FUN_0143e7c0(local_c,"staticMaskIdx");
  FUN_0143e7c0(local_1c,"staticMask");
  iVar3 = FUN_010390a0(local_2c,&local_50,iVar5,local_3c);
  iVar5 = iVar5 + iVar3;
  FUN_0143e7c0(local_14,"bitWidthIdx");
  FUN_0143e7c0(local_14,"maxBitWidth");
  FUN_0143e7c0(local_24,"bitWidth");
  puVar8 = (undefined1 *)FUN_0143e930(0);
  iVar1 = FUN_01039260(local_44,iVar1,*puVar8,&local_50,iVar5,local_2c);
  FUN_0143e7c0(local_c,"quantizedDataIdx");
  FUN_0143e7c0(local_1c,"quantizedData");
  uVar9 = FUN_01039120(local_3c,&local_50,iVar5 + iVar1,local_44);
  FUN_0143e7c0(local_c,"quantizedDataSize");
  puVar10 = (undefined4 *)FUN_0143e8b0(0);
  *puVar10 = uVar9;
  FUN_0143e7c0(local_c,"dataBuffer");
  puVar10 = (undefined4 *)FUN_0143e9a0(0);
  uVar9 = local_4c;
  puVar10[1] = local_4c;
  pvVar11 = TlsGetValue(DAT_01f8fc4c);
  uVar9 = (**(code **)(**(int **)((int)pvVar11 + 0x2c) + 4))(uVar9);
  *puVar10 = uVar9;
  FUN_01015e80(uVar9,local_50,puVar10[1]);
  FUN_0143e7c0(local_c,"dataBuffer");
  iVar1 = *param_3;
  uVar9 = FUN_0143e840();
  (**(code **)(iVar1 + 0x14))(*puVar10,uVar9);
  (**(code **)(*param_3 + 0x10))(*puVar10,puVar10[1],0x38);
  local_4c = 0;
  if (-1 < (int)local_48) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,local_48 & 0x3fffffff);
  }
  return;
}

// 01038C80  FUN_01038c80  size=9  [run]
void FUN_01038c80(void)

{
  FUN_01010160();
  return;
}

// 01038C90  FUN_01038c90  size=8  [run]
undefined4 FUN_01038c90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01038CA0  FUN_01038ca0  size=12  [run]
void FUN_01038ca0(void)

{
  FUN_0143e830();
  return;
}

// 01038CC0  FUN_01038cc0  size=12  [run]
void FUN_01038cc0(void)

{
  FUN_0143e830();
  return;
}

// 01038CD0  FUN_01038cd0  size=15  [run]
int __thiscall FUN_01038cd0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01038D10  FUN_01038d10  size=12  [run]
void FUN_01038d10(void)

{
  FUN_0143e830();
  return;
}

// 01038D50  FUN_01038d50  size=12  [run]
void FUN_01038d50(void)

{
  FUN_0143e830();
  return;
}

// 01038D90  FUN_01038d90  size=18  [run]
void FUN_01038d90(undefined4 param_1)

{
  FUN_01010160(param_1,0);
  return;
}

// 01038DB0  FUN_01038db0  size=53  [run]
undefined1 * FUN_01038db0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010160(param_2,0);
  if (iVar1 != 0) {
    FUN_01038110(param_1,iVar1,param_3);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

// 01038E30  FUN_01038e30  size=25  [run]
void FUN_01038e30(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01038E70  FUN_01038e70  size=52  [run]
undefined4 __thiscall FUN_01038e70(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01038ED0  FUN_01038ed0  size=55  [run]
void __thiscall FUN_01038ed0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01038F10  FUN_01038f10  size=73  [run]
undefined4 * __thiscall FUN_01038f10(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (0 < param_2[1]) {
    do {
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*param_2 + iVar1 * 8),
                   *(undefined4 *)(*param_2 + 4 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2[1]);
  }
  return param_1;
}

// 01038F60  FUN_01038f60  size=56  [run]
void __thiscall FUN_01038f60(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01038FA0  FUN_01038fa0  size=116  [run]
uint FUN_01038fa0(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)FUN_0143e830();
  uVar5 = param_2 + 3U & 0xfffffffc;
  iVar3 = param_3[1] + uVar5;
  if ((int)(param_3[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar3,1);
  }
  param_3[1] = param_3[1] + uVar5;
  FUN_01015e80(*param_3 + param_4,*puVar2,param_2);
  piVar4 = (int *)FUN_0143e8b0(0);
  *piVar4 = param_4;
  return uVar5;
}

// 01039020  FUN_01039020  size=126  [run]
int FUN_01039020(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar3 = (undefined4 *)FUN_0143e830();
  iVar1 = puVar3[1] * 4;
  iVar4 = param_2[1] + iVar1;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar4,1);
  }
  param_2[1] = param_2[1] + iVar1;
  FUN_01015e80(*param_2 + param_3,*puVar3,iVar1);
  piVar5 = (int *)FUN_0143e8b0(0);
  *piVar5 = param_3;
  return iVar1;
}

// 010390A0  FUN_010390a0  size=124  [run]
uint FUN_010390a0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  puVar3 = (undefined4 *)FUN_0143e830();
  iVar1 = puVar3[1];
  uVar6 = iVar1 * 2 + 3U & 0xfffffffc;
  iVar4 = param_2[1] + uVar6;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar4,1);
  }
  param_2[1] = param_2[1] + uVar6;
  FUN_01015e80(*param_2 + param_3,*puVar3,iVar1 * 2);
  piVar5 = (int *)FUN_0143e8b0(0);
  *piVar5 = param_3;
  return uVar6;
}

// 01039120  FUN_01039120  size=122  [run]
uint FUN_01039120(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  puVar3 = (undefined4 *)FUN_0143e830();
  iVar1 = puVar3[1];
  uVar6 = iVar1 + 3U & 0xfffffffc;
  iVar4 = param_2[1] + uVar6;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar4,1);
  }
  param_2[1] = param_2[1] + uVar6;
  FUN_01015e80(*param_2 + param_3,*puVar3,iVar1);
  piVar5 = (int *)FUN_0143e8b0(0);
  *piVar5 = param_3;
  return uVar6;
}

// 010391A0  FUN_010391a0  size=126  [run]
int FUN_010391a0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar3 = (undefined4 *)FUN_0143e830();
  iVar1 = puVar3[1] * 4;
  iVar4 = param_2[1] + iVar1;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar4,1);
  }
  param_2[1] = param_2[1] + iVar1;
  FUN_01015e80(*param_2 + param_3,*puVar3,iVar1);
  piVar5 = (int *)FUN_0143e8b0(0);
  *piVar5 = param_3;
  return iVar1;
}

// 01039220  FUN_01039220  size=57  [run]
void __fastcall FUN_01039220(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01039260  FUN_01039260  size=147  [run]
uint FUN_01039260(undefined4 param_1,int param_2,undefined1 param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)FUN_0143e830();
  uVar5 = param_2 + 3U & 0xfffffffc;
  iVar3 = param_4[1] + uVar5;
  if ((int)(param_4[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar3,1);
  }
  param_4[1] = param_4[1] + uVar5;
  if (puVar2[1] == param_2) {
    FUN_01015e80(*param_4 + param_5,*puVar2);
  }
  else {
    FUN_01015ea0(*param_4 + param_5,param_3,param_2);
  }
  piVar4 = (int *)FUN_0143e8b0(0);
  *piVar4 = param_5;
  return uVar5;
}

// 01039300  FUN_01039300  size=57  [run]
void __fastcall FUN_01039300(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01039340  FUN_01039340  size=85  [run]
void FUN_01039340(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_0143e9e0();
  iVar1 = FUN_01016520();
  FUN_0143e9e0();
  iVar2 = FUN_01016520();
  puVar3 = (undefined4 *)FUN_0143e840();
  puVar4 = (undefined4 *)FUN_0143e840();
  puVar5 = (undefined4 *)*puVar3;
  iVar6 = puVar3[1];
  puVar4 = (undefined4 *)*puVar4;
  if (0 < iVar6) {
    do {
      *puVar4 = *puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + iVar1);
      puVar4 = (undefined4 *)((int)puVar4 + iVar2);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

// 010393A0  FUN_010393a0  size=59  [run]
void FUN_010393a0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_1,"transitions");
  FUN_0143e7c0(param_2,"transitions");
  FUN_01039340(local_c);
  return;
}

// 010393E0  FUN_010393e0  size=121  [run]
void FUN_010393e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_1,"globalTransitions");
  FUN_0143e7c0(param_2,"globalTransitions");
  FUN_01039340(local_c);
  FUN_0143e7c0(param_2,"returnToPreviousStateEventId");
  FUN_0143e7c0(param_2,"randomTransitionEventId");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  *puVar1 = 0xffffffff;
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  *puVar1 = 0xffffffff;
  return;
}

// 01039460  FUN_01039460  size=62  [run]
void FUN_01039460(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_01054920(param_1,&DAT_017c6400,param_2);
  uVar1 = FUN_0104ed70("Havok-4.0.3-r1");
  hkRenamedClassNameRegistry::hkRenamedClassNameRegistry(param_1,param_2,&PTR_DAT_01b1ae58,uVar1);
  return;
}

// 010394A0  FUN_010394a0  size=74  [run]
void FUN_010394a0(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_0143e7c0(param_2,"flags");
  FUN_0143e7c0(param_1,"flags");
  puVar1 = (undefined2 *)FUN_0143e900(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  return;
}

// 010394F0  FUN_010394f0  size=96  [run]
void FUN_010394f0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  FUN_0143e7c0(param_2,"rootGenerator");
  FUN_0143e7c0(param_1,"generator");
  puVar3 = (undefined4 *)FUN_0143e850(0);
  uVar1 = *puVar3;
  puVar3 = (undefined4 *)FUN_0143e850(0);
  *puVar3 = uVar1;
  iVar2 = *param_3;
  uVar4 = FUN_0143e840();
  (**(code **)(iVar2 + 0x14))(uVar1,uVar4);
  return;
}

// 01039550  FUN_01039550  size=296  [run]
void FUN_01039550(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0143e7c0(param_2,"gains");
  FUN_01009660("gains");
  local_8 = FUN_010162f0();
  local_c = FUN_0143e840();
  FUN_0143e7c0(&local_c,"onOffGain");
  FUN_0143e7c0(param_1,"onOffGain");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(&local_c,"ascendingGain");
  FUN_0143e7c0(param_1,"ascendingGain");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(&local_c,"standAscendingGain");
  FUN_0143e7c0(param_1,"standAscendingGain");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(&local_c,"descendingGain");
  FUN_0143e7c0(param_1,"descendingGain");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  return;
}

// 01039680  FUN_01039680  size=62  [run]
void FUN_01039680(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_01054920(param_1,&PTR_s_hkbModifiedGenerator_017c6688,param_2);
  uVar1 = FUN_0104ed70("Havok-4.0.2-r1");
  hkRenamedClassNameRegistry::hkRenamedClassNameRegistry(param_1,param_2,&PTR_PTR_01b1ae78,uVar1);
  return;
}

// 010396C0  FUN_010396c0  size=155  [run]
void FUN_010396c0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"threadId");
  FUN_0143e7c0(param_2,"lockBitStack");
  FUN_0143e7c0(param_2,"lockCount");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      pcVar1 = (char *)FUN_0143e810(&local_5);
      if (*pcVar1 != '\0') {
        puVar2 = (undefined4 *)FUN_0143e8b0(0);
        *puVar2 = 0xfffffff1;
        puVar2 = (undefined4 *)FUN_0143e8b0(0);
        *puVar2 = 0;
        puVar3 = (undefined2 *)FUN_0143e900(0);
        *puVar3 = 0;
      }
    }
  }
  return;
}

// 01039760  FUN_01039760  size=123  [run]
void FUN_01039760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"multithreadLock");
  FUN_0143e7c0(param_2,"multithreadLock");
  FUN_0143ea60(local_24);
  FUN_0143ea60(local_24);
  puVar1 = (undefined4 *)FUN_0143ea60(local_24);
  local_1c = *puVar1;
  iVar2 = FUN_0143ea60(local_24);
  local_18 = *(undefined4 *)(iVar2 + 4);
  FUN_010396c0(local_24,&local_1c,param_3);
  return;
}

// 010397E0  FUN_010397e0  size=106  [run]
void FUN_010397e0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"userData");
  FUN_0143e7c0(param_1,"userData");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      puVar2 = (undefined4 *)FUN_0143e8b0(0);
      puVar3 = (undefined4 *)FUN_0143e850(0);
      *puVar3 = *puVar2;
    }
  }
  return;
}

// 01039850  FUN_01039850  size=106  [run]
void FUN_01039850(undefined4 param_1,undefined4 param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  
  FUN_0143e7c0(param_2,"autoComputeSecondGeneratorWeight");
  FUN_0143e7c0(param_1,"autoComputeSecondGeneratorWeight");
  pfVar1 = (float *)FUN_0143e890(0);
  if (*pfVar1 != (float)(undefined *)0x0) {
    puVar2 = (undefined1 *)FUN_0143e880(0);
    *puVar2 = 1;
    return;
  }
  puVar2 = (undefined1 *)FUN_0143e880(0);
  *puVar2 = 0;
  return;
}

// 010398C0  FUN_010398c0  size=91  [run]
void FUN_010398c0(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  
  FUN_0143e7c0(param_2,"flags");
  FUN_0143e7c0(param_1,"flags");
  puVar2 = (ushort *)FUN_0143e900(0);
  uVar1 = *puVar2;
  puVar3 = (undefined2 *)FUN_0143e900(0);
  if ((uVar1 & 0x10) != 0) {
    *puVar3 = 1;
    return;
  }
  *puVar3 = 0;
  return;
}

// 01039920  FUN_01039920  size=103  [run]
void __thiscall FUN_01039920(float *param_1,float *param_2,float *param_3)

{
  *param_1 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  param_1[1] = param_2[2] * *param_3 - *param_2 * param_3[2];
  param_1[2] = *param_2 * param_3[1] - *param_3 * param_2[1];
  param_1[3] = 0.0;
  return;
}

// 01039990  FUN_01039990  size=28  [run]
undefined4 __thiscall FUN_01039990(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7a0(*param_1,param_3);
  return param_2;
}

// 010399C0  FUN_010399c0  size=281  [run]
void FUN_010399c0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"simulationType");
  FUN_0143e7c0(param_1,"simulationType");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if ((*pcVar1 != '\0') && (pcVar1 = (char *)FUN_0143e810(&local_5), *pcVar1 != '\0')) {
    puVar2 = (undefined1 *)FUN_0143e920(0);
    switch(*puVar2) {
    case 1:
    case 2:
    case 3:
      puVar2 = (undefined1 *)FUN_0143e920(0);
      *puVar2 = 1;
      break;
    case 4:
    case 5:
    case 6:
      puVar2 = (undefined1 *)FUN_0143e920(0);
      *puVar2 = 2;
      break;
    case 7:
    case 8:
      puVar2 = (undefined1 *)FUN_0143e920(0);
      *puVar2 = 0;
      break;
    case 9:
      puVar2 = (undefined1 *)FUN_0143e920(0);
      *puVar2 = 3;
    }
  }
  FUN_0143e7c0(param_2,"frameMarkerPsiSnap");
  FUN_0143e7c0(param_1,"synchronizeFrameAndPhysicsTime");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if ((*pcVar1 != '\0') && (pcVar1 = (char *)FUN_0143e810(&local_5), *pcVar1 != '\0')) {
    pcVar1 = (char *)FUN_0143e880(0);
    if (*pcVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_0143e890(0);
      *puVar3 = 0x38d1b717;
      return;
    }
    puVar3 = (undefined4 *)FUN_0143e890(0);
    *puVar3 = 0;
  }
  return;
}

// 01039B00  FUN_01039b00  size=106  [run]
void FUN_01039b00(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"contactAngleSensitivity");
  FUN_0143e7c0(param_1,"characterRadius");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      puVar2 = (undefined4 *)FUN_0143e890(0);
      puVar3 = (undefined4 *)FUN_0143e890(0);
      *puVar3 = *puVar2;
    }
  }
  return;
}

// 01039BA0  FUN_01039ba0  size=89  [run]
int FUN_01039ba0(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_c [8];
  
  FUN_0143ea60(local_c);
  iVar2 = FUN_01009570();
  puVar3 = (undefined4 *)FUN_01009590(iVar2 + -1);
  FUN_0143e9f0(local_c,*puVar3);
  iVar2 = FUN_0143e9e0();
  uVar1 = *(ushort *)(iVar2 + 0x12);
  FUN_010162f0();
  iVar2 = FUN_01009750();
  return iVar2 + (uint)uVar1;
}

// 01039C00  FUN_01039c00  size=58  [run]
undefined2 FUN_01039c00(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined2 *puVar1;
  undefined2 local_8 [2];
  
  FUN_0143e7c0(in_EAX,&DAT_01662d64);
  puVar1 = local_8;
  FUN_0143e9e0(param_1,puVar1);
  FUN_01016310();
  FUN_01017780(param_1,puVar1);
  return local_8[0];
}

// 01039C40  FUN_01039c40  size=127  [run]
void FUN_01039c40(undefined4 param_1)

{
  int iVar1;
  undefined4 in_EAX;
  short *psVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_EDI;
  
  if (DAT_01b1b454 == -1) {
    DAT_01b1b454 = FUN_01039c00("TYPE_BRIDGE");
  }
  FUN_0143e7c0(in_EAX,&DAT_01662d64);
  psVar2 = (short *)FUN_0143e900(0);
  *psVar2 = DAT_01b1b454;
  FUN_0143e7c0(in_EAX,"constraintData");
  puVar3 = (undefined4 *)FUN_0143e850(0);
  *puVar3 = param_1;
  iVar1 = *unaff_EDI;
  uVar4 = FUN_0143e840();
  (**(code **)(iVar1 + 0x14))(param_1,uVar4);
  return;
}

// 01039CC0  FUN_01039cc0  size=182  [run]
void FUN_01039cc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_4c [18];
  
  if (DAT_01b1b458 == -1) {
    DAT_01b1b458 = FUN_01039c00("TYPE_SET_LOCAL_TRANSFORMS");
  }
  FUN_0143e7c0(param_1,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b458;
  FUN_0143e7c0(param_1,"transformA");
  puVar4 = local_4c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)FUN_0143e970(0);
  puVar4 = local_4c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0143e7c0(param_1,"transformB");
  puVar4 = local_4c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)FUN_0143e970(0);
  puVar4 = local_4c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

// 01039D80  FUN_01039d80  size=204  [run]
void FUN_01039d80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined4 unaff_ESI;
  undefined8 *unaff_EDI;
  
  if (DAT_01b1b45c == -1) {
    DAT_01b1b45c = FUN_01039c00("TYPE_SET_LOCAL_TRANSLATIONS");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar3 = (short *)FUN_0143e900(0);
  *psVar3 = DAT_01b1b45c;
  FUN_0143e7c0(unaff_ESI,"translationA");
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = (undefined8 *)FUN_0143e940(0);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  FUN_0143e7c0(unaff_ESI,"translationB");
  uVar1 = *unaff_EDI;
  uVar2 = unaff_EDI[1];
  puVar4 = (undefined8 *)FUN_0143e940(0);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  return;
}

// 01039E50  FUN_01039e50  size=364  [run]
void FUN_01039e50(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short *psVar7;
  undefined8 *puVar8;
  undefined8 *unaff_ESI;
  undefined8 *unaff_EDI;
  
  if (DAT_01b1b460 == -1) {
    DAT_01b1b460 = FUN_01039c00("TYPE_SET_LOCAL_ROTATIONS");
  }
  FUN_0143e7c0(param_1,&DAT_01662d64);
  psVar7 = (short *)FUN_0143e900(0);
  *psVar7 = DAT_01b1b460;
  FUN_0143e7c0(param_1,"rotationA");
  uVar1 = *unaff_EDI;
  uVar2 = unaff_EDI[1];
  uVar3 = unaff_EDI[2];
  uVar4 = unaff_EDI[3];
  uVar5 = unaff_EDI[4];
  uVar6 = unaff_EDI[5];
  puVar8 = (undefined8 *)FUN_0143e980(0);
  *puVar8 = uVar1;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  puVar8[4] = uVar5;
  puVar8[5] = uVar6;
  FUN_0143e7c0(param_1,"rotationB");
  uVar1 = *unaff_ESI;
  uVar2 = unaff_ESI[1];
  uVar3 = unaff_ESI[2];
  uVar4 = unaff_ESI[3];
  uVar5 = unaff_ESI[4];
  uVar6 = unaff_ESI[5];
  puVar8 = (undefined8 *)FUN_0143e980(0);
  *puVar8 = uVar1;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  puVar8[4] = uVar5;
  puVar8[5] = uVar6;
  return;
}

// 01039FC0  FUN_01039fc0  size=75  [run]
void FUN_01039fc0(void)

{
  short *psVar1;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b464 == -1) {
    DAT_01b1b464 = FUN_01039c00("TYPE_BALL_SOCKET");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b464;
  return;
}

// 0103A010  FUN_0103a010  size=108  [run]
void FUN_0103a010(undefined4 param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b468 == -1) {
    DAT_01b1b468 = FUN_01039c00("TYPE_STIFF_SPRING");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b468;
  FUN_0143e7c0(unaff_ESI,"length");
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = param_1;
  return;
}

// 0103A080  FUN_0103a080  size=104  [run]
void FUN_0103a080(undefined1 param_1)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b46c == -1) {
    DAT_01b1b46c = FUN_01039c00("TYPE_LIN");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b46c;
  FUN_0143e7c0(unaff_ESI,"axisIndex");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  return;
}

// 0103A0F0  FUN_0103a0f0  size=170  [run]
void FUN_0103a0f0(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b470 == -1) {
    DAT_01b1b470 = FUN_01039c00("TYPE_LIN_SOFT");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b470;
  FUN_0143e7c0(unaff_ESI,"axisIndex");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,&DAT_01713370);
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_2;
  FUN_0143e7c0(unaff_ESI,"damping");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_3;
  return;
}

// 0103A1A0  FUN_0103a1a0  size=170  [run]
void FUN_0103a1a0(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b474 == -1) {
    DAT_01b1b474 = FUN_01039c00("TYPE_LIN_LIMIT");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b474;
  FUN_0143e7c0(unaff_ESI,"axisIndex");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,&DAT_0170534c);
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_2;
  FUN_0143e7c0(unaff_ESI,&DAT_01705348);
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_3;
  return;
}

// 0103A250  FUN_0103a250  size=166  [run]
void FUN_0103a250(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b478 == -1) {
    DAT_01b1b478 = FUN_01039c00("TYPE_LIN_FRICTION");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b478;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"frictionAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  FUN_0143e7c0(unaff_ESI,"maxFrictionForce");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_3;
  return;
}

// 0103A300  FUN_0103a300  size=257  [run]
void FUN_0103a300(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b47c == -1) {
    DAT_01b1b47c = FUN_01039c00("TYPE_LIN_MOTOR");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b47c;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar2 = (undefined1 *)FUN_0143e880(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"motorAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  FUN_0143e7c0(unaff_ESI,"initializedOffset");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = param_3;
  FUN_0143e7c0(unaff_ESI,"previousTargetPositionOffset");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = param_4;
  FUN_0143e7c0(unaff_ESI,"targetPosition");
  puVar4 = (undefined4 *)FUN_0143e890(0);
  *puVar4 = param_5;
  FUN_0143e7c0(unaff_ESI,"motor");
  puVar4 = (undefined4 *)FUN_0143e850(0);
  *puVar4 = param_6;
  return;
}

// 0103A410  FUN_0103a410  size=104  [run]
void FUN_0103a410(undefined1 param_1)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b480 == -1) {
    DAT_01b1b480 = FUN_01039c00("TYPE_2D_ANG");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b480;
  FUN_0143e7c0(unaff_ESI,"freeRotationAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  return;
}

// 0103A480  FUN_0103a480  size=133  [run]
void FUN_0103a480(undefined1 param_1,undefined1 param_2)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b484 == -1) {
    DAT_01b1b484 = FUN_01039c00("TYPE_ANG");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b484;
  FUN_0143e7c0(unaff_ESI,"firstConstrainedAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"numConstrainedAxes");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  return;
}

// 0103A510  FUN_0103a510  size=232  [run]
void FUN_0103a510(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b488 == -1) {
    DAT_01b1b488 = FUN_01039c00("TYPE_ANG_LIMIT");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b488;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"limitAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  FUN_0143e7c0(unaff_ESI,"minAngle");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_3;
  FUN_0143e7c0(unaff_ESI,"maxAngle");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_4;
  FUN_0143e7c0(unaff_ESI,"angularLimitsTauFactor");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_5;
  return;
}

// 0103A600  FUN_0103a600  size=261  [run]
void FUN_0103a600(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b48c == -1) {
    DAT_01b1b48c = FUN_01039c00("TYPE_TWIST_LIMIT");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b48c;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"twistAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  FUN_0143e7c0(unaff_ESI,"refAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_3;
  FUN_0143e7c0(unaff_ESI,"minAngle");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_4;
  FUN_0143e7c0(unaff_ESI,"maxAngle");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_5;
  FUN_0143e7c0(unaff_ESI,"angularLimitsTauFactor");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_6;
  return;
}

// 0103A710  FUN_0103a710  size=290  [run]
void FUN_0103a710(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b490 == -1) {
    DAT_01b1b490 = FUN_01039c00("TYPE_CONE_LIMIT");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b490;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"twistAxisInA");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  FUN_0143e7c0(unaff_ESI,"refAxisInB");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_3;
  FUN_0143e7c0(unaff_ESI,"angleMeasurementMode");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_4;
  FUN_0143e7c0(unaff_ESI,"minAngle");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_5;
  FUN_0143e7c0(unaff_ESI,"maxAngle");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_6;
  FUN_0143e7c0(unaff_ESI,"angularLimitsTauFactor");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_7;
  return;
}

// 0103A840  FUN_0103a840  size=195  [run]
void FUN_0103a840(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b494 == -1) {
    DAT_01b1b494 = FUN_01039c00("TYPE_ANG_FRICTION");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b494;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"firstFrictionAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  FUN_0143e7c0(unaff_ESI,"numFrictionAxes");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_3;
  FUN_0143e7c0(unaff_ESI,"maxFrictionTorque");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  *puVar3 = param_4;
  return;
}

// 0103A910  FUN_0103a910  size=288  [run]
void FUN_0103a910(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined4 param_6,undefined4 param_7)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  
  if (DAT_01b1b498 == -1) {
    DAT_01b1b498 = FUN_01039c00("TYPE_ANG_MOTOR");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar1 = (short *)FUN_0143e900(0);
  *psVar1 = DAT_01b1b498;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar2 = (undefined1 *)FUN_0143e880(0);
  *puVar2 = param_1;
  FUN_0143e7c0(unaff_ESI,"motorAxis");
  puVar2 = (undefined1 *)FUN_0143e930(0);
  *puVar2 = param_2;
  FUN_0143e7c0(unaff_ESI,"initializedOffset");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = param_3;
  FUN_0143e7c0(unaff_ESI,"previousTargetAngleOffset");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = param_4;
  FUN_0143e7c0(unaff_ESI,"correspondingAngLimitSolverResultOffset");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = param_5;
  FUN_0143e7c0(unaff_ESI,"targetAngle");
  puVar4 = (undefined4 *)FUN_0143e890(0);
  *puVar4 = param_6;
  FUN_0143e7c0(unaff_ESI,"motor");
  puVar4 = (undefined4 *)FUN_0143e850(0);
  *puVar4 = param_7;
  return;
}

// 0103AA30  FUN_0103aa30  size=399  [run]
void FUN_0103aa30(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short *psVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 unaff_ESI;
  undefined8 *unaff_EDI;
  
  if (DAT_01b1b49c == -1) {
    DAT_01b1b49c = FUN_01039c00("TYPE_RAGDOLL_MOTOR");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar7 = (short *)FUN_0143e900(0);
  *psVar7 = DAT_01b1b49c;
  FUN_0143e7c0(unaff_ESI,"isEnabled");
  puVar8 = (undefined1 *)FUN_0143e880(0);
  *puVar8 = param_1;
  FUN_0143e7c0(unaff_ESI,"initializedOffset");
  puVar9 = (undefined2 *)FUN_0143e900(0);
  *puVar9 = param_2;
  FUN_0143e7c0(unaff_ESI,"previousTargetAnglesOffset");
  puVar9 = (undefined2 *)FUN_0143e900(0);
  *puVar9 = param_3;
  FUN_0143e7c0(unaff_ESI,"targetFrameAinB");
  uVar1 = *unaff_EDI;
  uVar2 = unaff_EDI[1];
  uVar3 = unaff_EDI[2];
  uVar4 = unaff_EDI[3];
  uVar5 = unaff_EDI[4];
  uVar6 = unaff_EDI[5];
  puVar10 = (undefined8 *)FUN_0143e950(0);
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar10[4] = uVar5;
  puVar10[5] = uVar6;
  FUN_0143e7c0(unaff_ESI,"motors");
  puVar11 = (undefined4 *)FUN_0143e850(0);
  *puVar11 = *param_4;
  FUN_0143e7c0(unaff_ESI,"motors");
  puVar11 = (undefined4 *)FUN_0143e850(1);
  *puVar11 = param_4[1];
  FUN_0143e7c0(unaff_ESI,"motors");
  puVar11 = (undefined4 *)FUN_0143e850(2);
  *puVar11 = param_4[2];
  return;
}

// 0103ABC0  FUN_0103abc0  size=270  [run]
void FUN_0103abc0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  undefined8 *unaff_EDI;
  
  if (DAT_01b1b4a0 == -1) {
    DAT_01b1b4a0 = FUN_01039c00("TYPE_PULLEY");
  }
  FUN_0143e7c0(unaff_ESI,&DAT_01662d64);
  psVar3 = (short *)FUN_0143e900(0);
  *psVar3 = DAT_01b1b4a0;
  FUN_0143e7c0(unaff_ESI,"fixedPivotAinWorld");
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = (undefined8 *)FUN_0143e940(0);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  FUN_0143e7c0(unaff_ESI,"fixedPivotBinWorld");
  uVar1 = *unaff_EDI;
  uVar2 = unaff_EDI[1];
  puVar4 = (undefined8 *)FUN_0143e940(0);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  FUN_0143e7c0(unaff_ESI,"ropeLength");
  puVar5 = (undefined4 *)FUN_0143e890(0);
  *puVar5 = param_2;
  FUN_0143e7c0(unaff_ESI,"leverageOnBodyB");
  puVar5 = (undefined4 *)FUN_0143e890(0);
  *puVar5 = param_3;
  return;
}

// 0103ACD0  FUN_0103acd0  size=197  [run]
void FUN_0103acd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_34 [8];
  undefined1 local_2c [24];
  undefined1 local_14 [16];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4a4 == -1) {
    DAT_01b1b4a4 = FUN_01039ba0();
  }
  FUN_0143e7c0(local_14,"pivotInB");
  FUN_0143e7c0(local_14,"pivotInA");
  FUN_0143e940(0);
  uVar1 = FUN_0143e940(0);
  puVar2 = local_2c;
  FUN_0143e9f0(local_34,"pivots");
  FUN_0143ea60(puVar2);
  FUN_01039d80(uVar1);
  puVar2 = local_34;
  FUN_0143e9f0(local_2c,"ballSocket");
  FUN_0143ea60(puVar2);
  FUN_01039fc0();
  return;
}

// 0103ADA0  FUN_0103ada0  size=97  [run]
void FUN_0103ada0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [16];
  
  FUN_0143e7c0(param_2,"atoms");
  if (DAT_01b1b4a8 == -1) {
    DAT_01b1b4a8 = FUN_01039ba0();
  }
  uVar2 = *param_2;
  puVar1 = local_14;
  FUN_0143e9f0(local_1c,"bridgeAtom");
  FUN_0143ea60(puVar1);
  FUN_01039c40(uVar2);
  return;
}

// 0103AE10  FUN_0103ae10  size=97  [run]
void FUN_0103ae10(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [16];
  
  FUN_0143e7c0(param_2,"atoms");
  if (DAT_01b1b4ac == -1) {
    DAT_01b1b4ac = FUN_01039ba0();
  }
  uVar2 = *param_2;
  puVar1 = local_14;
  FUN_0143e9f0(local_1c,"bridgeAtom");
  FUN_0143ea60(puVar1);
  FUN_01039c40(uVar2);
  return;
}

// 0103AE80  FUN_0103ae80  size=97  [run]
void FUN_0103ae80(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [16];
  
  FUN_0143e7c0(param_2,"atoms");
  if (DAT_01b1b4b0 == -1) {
    DAT_01b1b4b0 = FUN_01039ba0();
  }
  uVar2 = *param_2;
  puVar1 = local_14;
  FUN_0143e9f0(local_1c,"bridgeAtom");
  FUN_0143ea60(puVar1);
  FUN_01039c40(uVar2);
  return;
}

// 0103AEF0  FUN_0103aef0  size=543  [run]
void FUN_0103aef0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4b4 == -1) {
    DAT_01b1b4b4 = FUN_01039ba0();
  }
  FUN_0143e7c0(local_c,"basisB");
  FUN_0143ea60(local_1c);
  FUN_0143e7c0(local_1c,&DAT_01707510);
  FUN_0143e940(0);
  FUN_0143e7c0(local_1c,"perp2FreeAxis");
  FUN_0143e940(0);
  FUN_0143e7c0(local_c,"basisA");
  FUN_0143e840();
  puVar5 = local_2c;
  FUN_0143e9f0(local_34,"rotations");
  uVar1 = FUN_0143ea60(puVar5);
  FUN_01039e50(uVar1);
  FUN_0143e7c0(local_c,"angularLimitsTauFactor");
  FUN_0143e7c0(local_c,"maxAngle");
  FUN_0143e7c0(local_c,"minAngle");
  puVar2 = (undefined4 *)FUN_0143e890(0);
  puVar3 = (undefined4 *)FUN_0143e890(0);
  puVar4 = (undefined4 *)FUN_0143e890(0);
  uVar1 = *puVar2;
  uVar9 = *puVar3;
  uVar8 = *puVar4;
  uVar7 = 0;
  uVar6 = 1;
  puVar5 = local_34;
  FUN_0143e9f0(local_3c,"angLimit");
  FUN_0143ea60(puVar5);
  FUN_0103a510(uVar6,uVar7,uVar8,uVar9,uVar1);
  uVar1 = 0;
  puVar5 = local_3c;
  FUN_0143e9f0(local_34,"2dAng");
  FUN_0143ea60(puVar5);
  FUN_0103a410(uVar1);
  return;
}

// 0103B110  FUN_0103b110  size=109  [run]
void FUN_0103b110(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_24 [8];
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4b8 == -1) {
    DAT_01b1b4b8 = FUN_01039ba0();
  }
  uVar2 = *param_2;
  puVar1 = local_1c;
  FUN_0143e9f0(local_24,"bridgeAtom");
  FUN_0143ea60(puVar1);
  FUN_01039c40(uVar2);
  return;
}

// 0103B180  FUN_0103b180  size=109  [run]
void FUN_0103b180(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_24 [8];
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4bc == -1) {
    DAT_01b1b4bc = FUN_01039ba0();
  }
  uVar2 = *param_2;
  puVar1 = local_1c;
  FUN_0143e9f0(local_24,"bridgeAtom");
  FUN_0143ea60(puVar1);
  FUN_01039c40(uVar2);
  return;
}

// 0103B1F0  FUN_0103b1f0  size=109  [run]
void FUN_0103b1f0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_24 [8];
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4c0 == -1) {
    DAT_01b1b4c0 = FUN_01039ba0();
  }
  uVar2 = *param_2;
  puVar1 = local_1c;
  FUN_0143e9f0(local_24,"bridgeAtom");
  FUN_0143ea60(puVar1);
  FUN_01039c40(uVar2);
  return;
}

// 0103B260  FUN_0103b260  size=335  [run]
void FUN_0103b260(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4c4 == -1) {
    DAT_01b1b4c4 = FUN_01039ba0();
  }
  FUN_0143e7c0(local_c,"pivotInB");
  FUN_0143e7c0(local_c,"pivotInA");
  FUN_0143e940(0);
  uVar1 = FUN_0143e940(0);
  puVar5 = local_34;
  FUN_0143e9f0(local_2c,"translations");
  FUN_0143ea60(puVar5);
  FUN_01039d80(uVar1);
  FUN_0143e7c0(local_c,"leverageOnBodyB");
  FUN_0143e7c0(local_c,"ropeLength");
  FUN_0143e7c0(local_c,"pulleyPivotBinWorld");
  FUN_0143e7c0(local_c,"pulleyPivotAinWorld");
  puVar2 = (undefined4 *)FUN_0143e890(0);
  puVar3 = (undefined4 *)FUN_0143e890(0);
  uVar1 = *puVar2;
  uVar6 = *puVar3;
  FUN_0143e940(0);
  uVar4 = FUN_0143e940(0);
  puVar5 = local_3c;
  FUN_0143e9f0(local_44,"pulley");
  FUN_0143ea60(puVar5);
  FUN_0103abc0(uVar4,uVar6,uVar1);
  return;
}

// 0103B3B0  FUN_0103b3b0  size=109  [run]
void FUN_0103b3b0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_24 [8];
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4c8 == -1) {
    DAT_01b1b4c8 = FUN_01039ba0();
  }
  uVar2 = *param_2;
  puVar1 = local_1c;
  FUN_0143e9f0(local_24,"bridgeAtom");
  FUN_0143ea60(puVar1);
  FUN_01039c40(uVar2);
  return;
}

// 0103B420  FUN_0103b420  size=237  [run]
void FUN_0103b420(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4cc == -1) {
    DAT_01b1b4cc = FUN_01039ba0();
  }
  FUN_0143e7c0(local_c,"pivotInB");
  FUN_0143e7c0(local_c,"pivotInA");
  FUN_0143e940(0);
  uVar1 = FUN_0143e940(0);
  puVar3 = local_2c;
  FUN_0143e9f0(local_34,"pivots");
  FUN_0143ea60(puVar3);
  FUN_01039d80(uVar1);
  FUN_0143e7c0(local_c,"springLength");
  puVar2 = (undefined4 *)FUN_0143e890(0);
  uVar1 = *puVar2;
  puVar3 = local_34;
  FUN_0143e9f0(local_2c,"spring");
  FUN_0143ea60(puVar3);
  FUN_0103a010(uVar1);
  return;
}

// 0103B510  FUN_0103b510  size=169  [run]
void FUN_0103b510(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  iVar1 = param_1;
  pcVar4 = (char *)FUN_0103eaa0((int)&param_1 + 3,*(undefined4 *)(param_1 + 4),
                                "hkSpringDamperConstraintMotor");
  if (*pcVar4 == '\0') {
    pcVar4 = (char *)FUN_0103eaa0((int)&param_1 + 3,*(undefined4 *)(iVar1 + 4),
                                  "hkVelocityConstraintMotor");
    if (*pcVar4 == '\0') {
      pcVar4 = (char *)FUN_0103eaa0((int)&param_1 + 3,*(undefined4 *)(iVar1 + 4),
                                    "hkPositionConstraintMotor");
      pcVar6 = "TYPE_POSITION";
      if (*pcVar4 == '\0') {
        pcVar6 = "TYPE_INVALID";
      }
    }
    else {
      pcVar6 = "TYPE_VELOCITY";
    }
  }
  else {
    pcVar6 = "TYPE_SPRING_DAMPER";
  }
  uVar2 = param_2;
  uVar7 = 0;
  FUN_0143e7c0(param_2,&DAT_01662d64);
  puVar5 = (undefined1 *)FUN_0143e920(uVar7);
  FUN_0143ea40(uVar2);
  uVar3 = FUN_01039c00(pcVar6);
  *puVar5 = uVar3;
  return;
}

// 0103B5C0  FUN_0103b5c0  size=983  [run]
void FUN_0103b5c0(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint extraout_ECX;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [16];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  if (DAT_01b1b4d0 == -1) {
    DAT_01b1b4d0 = FUN_01039ba0();
  }
  FUN_0143e7c0(local_24,"basisA");
  FUN_0143ea60(local_14);
  FUN_0143e7c0(local_14,&DAT_01707510);
  puVar2 = (undefined8 *)FUN_0143e940(0);
  local_bc = *puVar2;
  local_b4 = puVar2[1];
  FUN_0143e7c0(local_14,"perpToAxle1");
  puVar2 = (undefined8 *)FUN_0143e940(0);
  local_ac = *puVar2;
  local_a4 = puVar2[1];
  FUN_0143e7c0(local_14,"perpToAxle2");
  puVar2 = (undefined8 *)FUN_0143e940(0);
  local_9c = *puVar2;
  local_94 = puVar2[1];
  FUN_0143e7c0(local_14,"pivot");
  puVar2 = (undefined8 *)FUN_0143e940(0);
  local_8c = *puVar2;
  local_84 = puVar2[1];
  FUN_0143e7c0(local_24,"basisB");
  FUN_0143ea60(local_14);
  FUN_0143e7c0(local_14,&DAT_01707510);
  puVar2 = (undefined8 *)FUN_0143e940(0);
  local_7c = *puVar2;
  local_74 = puVar2[1];
  FUN_0143e7c0(local_14,"perp2FreeAxis");
  puVar2 = (undefined8 *)FUN_0143e940(0);
  uVar1 = *puVar2;
  local_54 = puVar2[1];
  local_5c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_6c = local_5c._4_4_ * (float)local_74 - (float)local_54 * local_7c._4_4_;
  local_5c._0_4_ = (float)uVar1;
  local_68 = (float)local_54 * (float)local_7c - (float)local_5c * (float)local_74;
  local_64 = (float)local_5c * local_7c._4_4_ - local_5c._4_4_ * (float)local_7c;
  local_60 = 0;
  local_5c = uVar1;
  FUN_0143e7c0(local_14,"pivot");
  puVar3 = (undefined8 *)FUN_0143e940(0);
  local_4c = *puVar3;
  puVar2 = &local_7c;
  local_44 = puVar3[1];
  puVar3 = &local_bc;
  puVar8 = local_2c;
  FUN_0143e9f0(local_c,"transforms");
  uVar4 = FUN_0143ea60(puVar8);
  FUN_01039cc0(uVar4,puVar3,puVar2);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0x10;
  uVar11 = 0x44;
  uVar10 = 0x40;
  uVar4 = 0;
  puVar8 = local_2c;
  uVar9 = extraout_ECX & 0xffffff00;
  FUN_0143e9f0(local_c,"angMotor");
  FUN_0143ea60(puVar8);
  FUN_0103a910(uVar9,uVar4,uVar10,uVar11,uVar12,uVar13,uVar14);
  FUN_0143e7c0(local_24,"maxFrictionTorque");
  puVar5 = (undefined4 *)FUN_0143e890(0);
  uVar4 = *puVar5;
  uVar12 = 1;
  uVar11 = 0;
  uVar10 = 1;
  puVar8 = local_2c;
  FUN_0143e9f0(local_14,"angFriction");
  FUN_0143ea60(puVar8);
  FUN_0103a840(uVar10,uVar11,uVar12,uVar4);
  FUN_0143e7c0(local_24,"angularLimitsTauFactor");
  FUN_0143e7c0(local_24,"maxAngle");
  FUN_0143e7c0(local_24,"minAngle");
  puVar5 = (undefined4 *)FUN_0143e890(0);
  puVar6 = (undefined4 *)FUN_0143e890(0);
  puVar7 = (undefined4 *)FUN_0143e890(0);
  uVar4 = *puVar5;
  uVar10 = *puVar6;
  uVar11 = *puVar7;
  uVar13 = 0;
  uVar12 = 1;
  puVar8 = local_3c;
  FUN_0143e9f0(local_34,"angLimit");
  FUN_0143ea60(puVar8);
  FUN_0103a510(uVar12,uVar13,uVar11,uVar10,uVar4);
  uVar4 = 0;
  puVar8 = local_34;
  FUN_0143e9f0(local_3c,"2dAng");
  FUN_0143ea60(puVar8);
  FUN_0103a410(uVar4);
  puVar8 = local_34;
  FUN_0143e9f0(local_3c,"ballSocket");
  FUN_0143ea60(puVar8);
  FUN_01039fc0();
  return;
}

// 0103B9A0  FUN_0103b9a0  size=748  [run]
void FUN_0103b9a0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [24];
  undefined1 local_1c [12];
  undefined4 local_10;
  uint local_8;
  
  FUN_0103b5c0(param_1,param_2,param_3);
  FUN_0143e7c0(param_2,"atoms");
  FUN_0143ea40(param_1);
  FUN_0143e7c0(local_1c,"motorActive");
  pcVar2 = (char *)FUN_0143e880(0);
  if (*pcVar2 != '\0') {
    FUN_0143e7c0(local_1c,"motor");
    piVar3 = (int *)FUN_0143e850(0);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (*piVar3 != 0) goto LAB_0103ba1c;
  }
  local_8 = local_8 & 0xffffff00;
LAB_0103ba1c:
  FUN_0143e7c0(local_1c,"motor");
  FUN_0143e7c0(local_1c,"targetAngle");
  puVar4 = (undefined4 *)FUN_0143e850(0);
  puVar5 = (undefined4 *)FUN_0143e890(0);
  uVar13 = *puVar4;
  uVar6 = *puVar5;
  uVar12 = 0x10;
  uVar11 = 0x44;
  uVar10 = 0x40;
  uVar9 = 0;
  puVar8 = local_4c;
  uVar7 = local_8;
  FUN_0143e9f0(local_44,"angMotor");
  FUN_0143ea60(puVar8);
  FUN_0103a910(uVar7,uVar9,uVar10,uVar11,uVar12,uVar6,uVar13);
  FUN_0143e7c0(local_1c,"motor");
  piVar3 = (int *)FUN_0143e850(0);
  if (*piVar3 != 0) {
    puVar8 = local_4c;
    FUN_0143e9f0(local_44,"angMotor");
    uVar6 = FUN_0143ea60(puVar8);
    FUN_0143e7c0(uVar6,"motor");
    puVar8 = local_3c;
    FUN_0143e9f0(local_34,"angMotor");
    uVar6 = FUN_0143ea60(puVar8);
    FUN_0143e7c0(uVar6,"motor");
    iVar1 = *param_3;
    puVar4 = (undefined4 *)FUN_0143e850(0);
    uVar6 = FUN_0143e840();
    (**(code **)(iVar1 + 0x14))(*puVar4,uVar6);
  }
  FUN_0143e7c0(local_1c,"maxFrictionTorque");
  puVar4 = (undefined4 *)FUN_0143e890(0);
  uVar6 = *puVar4;
  uVar9 = 1;
  uVar7 = (uint)((char)local_8 == '\0');
  uVar13 = 0;
  puVar8 = local_4c;
  FUN_0143e9f0(local_44,"angFriction");
  FUN_0143ea60(puVar8);
  FUN_0103a840(uVar7,uVar13,uVar9,uVar6);
  FUN_0143e7c0(local_1c,"ignoreLimits");
  pcVar2 = (char *)FUN_0143e880(0);
  if (*pcVar2 == '\0') {
    FUN_0143e7c0(local_1c,"maxAngle");
    puVar4 = (undefined4 *)FUN_0143e890(0);
    local_8 = *puVar4;
  }
  else {
    local_8 = 0x56b5e621;
  }
  FUN_0143e7c0(local_1c,"ignoreLimits");
  pcVar2 = (char *)FUN_0143e880(0);
  if (*pcVar2 == '\0') {
    FUN_0143e7c0(local_1c,"minAngle");
    puVar4 = (undefined4 *)FUN_0143e890(0);
    local_10 = *puVar4;
  }
  else {
    local_10 = 0xd6b5e621;
  }
  FUN_0143e7c0(local_1c,"angularLimitsTauFactor");
  puVar4 = (undefined4 *)FUN_0143e890(0);
  uVar6 = *puVar4;
  uVar10 = 0;
  uVar9 = 1;
  puVar8 = local_54;
  uVar13 = local_10;
  uVar7 = local_8;
  FUN_0143e9f0(local_5c,"angLimit");
  FUN_0143ea60(puVar8);
  FUN_0103a510(uVar9,uVar10,uVar13,uVar7,uVar6);
  return;
}

// 0103BC90  FUN_0103bc90  size=189  [run]
uint FUN_0103bc90(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *local_44 [5];
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar1 = "hkSphereMotion";
  local_44[0] = "MOTION_SPHERE_INERTIA";
  local_44[1] = "hkStabilizedSphereMotion";
  local_44[2] = "MOTION_STABILIZED_SPHERE_INERTIA";
  local_44[3] = "hkBoxMotion";
  local_44[4] = "MOTION_BOX_INERTIA";
  local_30 = "hkStabilizedBoxMotion";
  local_2c = "MOTION_STABILIZED_BOX_INERTIA";
  local_28 = "hkKeyframedRigidMotion";
  local_24 = "MOTION_KEYFRAMED";
  local_20 = "hkFixedRigidMotion";
  local_1c = "MOTION_FIXED";
  local_18 = "hkThinBoxMotion";
  local_14 = "MOTION_THIN_BOX_INERTIA";
  local_10 = 0;
  local_c = 0;
  pcVar4 = "MOTION_INVALID";
  iVar3 = 0;
  do {
    iVar2 = FUN_01015b90(pcVar1,param_1);
    if (iVar2 == 0) {
      pcVar4 = local_44[iVar3 * 2];
      break;
    }
    pcVar1 = local_44[iVar3 * 2 + 1];
    iVar3 = iVar3 + 1;
  } while (pcVar1 != (char *)0x0);
  local_8 = 0;
  FUN_01017780(pcVar4,&local_8);
  return local_8 & 0xff;
}

// 0103C250  FUN_0103c250  size=259  [run]
void FUN_0103c250(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_18 [8];
  undefined1 local_10 [11];
  char local_5;
  
  FUN_0143ea40(param_2);
  FUN_0143ea40(param_1);
  FUN_0143e7c0(local_10,&DAT_01705448);
  puVar1 = (undefined4 *)FUN_0143e850(0);
  iVar2 = FUN_01010160(*puVar1,0);
  if (iVar2 != 0) {
    FUN_0103eaa0(&local_5,iVar2,"hkPointToPlaneConstraintData");
    if (local_5 != '\0') {
      FUN_0143e7c0(local_18,"entities");
      FUN_0143e7c0(local_10,"entities");
      iVar2 = *param_3;
      puVar1 = (undefined4 *)FUN_0143e850(1);
      uVar3 = FUN_0143e840();
      (**(code **)(iVar2 + 0x14))(*puVar1,uVar3);
      FUN_0143e7c0(local_18,"entities");
      iVar4 = FUN_0143e840();
      FUN_0143e7c0(local_10,"entities");
      iVar2 = *param_3;
      puVar1 = (undefined4 *)FUN_0143e850(0);
      (**(code **)(iVar2 + 0x14))(*puVar1,iVar4 + 4);
    }
  }
  return;
}

// 0103C360  FUN_0103c360  size=283  [run]
void FUN_0103c360(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_30 [8];
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = param_2[1];
  local_10 = param_1[1];
  iVar6 = 0;
  local_8 = 0;
  iVar1 = FUN_01009570();
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_01009590(iVar6);
      iVar1 = FUN_01009660(*puVar2);
      if (((iVar1 != 0) && (*(char *)(puVar2 + 3) == *(char *)(iVar1 + 0xc))) &&
         (*(char *)((int)puVar2 + 0xd) == *(char *)(iVar1 + 0xd))) {
        iVar6 = FUN_01016360();
        iVar3 = FUN_01016360();
        if (iVar3 == iVar6) {
          FUN_0143e7a0(*param_1,puVar2);
          FUN_0143e7a0(*param_2,iVar1);
          switch(*(undefined1 *)(puVar2 + 3)) {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x18:
            uVar4 = FUN_01016360();
            uVar4 = FUN_0143e840(uVar4);
            uVar4 = FUN_0143e840(uVar4);
            FUN_01015e80(uVar4);
            break;
          case 0x19:
            uVar4 = FUN_0143ea60(local_28);
            uVar5 = FUN_0143ea60(local_30);
            FUN_0103c360(uVar5,uVar4);
          }
        }
      }
      iVar6 = local_8 + 1;
      local_8 = iVar6;
      iVar1 = FUN_01009570();
    } while (iVar6 < iVar1);
  }
  return;
}

// 0103C4B0  FUN_0103c4b0  size=753  [run]
void FUN_0103c4b0(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 local_3c;
  undefined8 local_34;
  undefined1 local_2c [24];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_2);
  FUN_0143ea40(param_1);
  FUN_0143e7c0(local_14,&DAT_01662d64);
  puVar3 = (undefined1 *)FUN_0143e930(0);
  FUN_0143e9e0();
  uVar4 = FUN_01016310();
  uVar4 = FUN_010093a0(uVar4);
  uVar2 = FUN_0103bc90(uVar4);
  *puVar3 = uVar2;
  FUN_0143e7c0(local_c,"motionState");
  FUN_0143e7c0(local_14,"motionState");
  uVar4 = FUN_0143ea60(local_2c);
  uVar5 = FUN_0143ea60(&local_34);
  FUN_0103c360(uVar5,uVar4);
  FUN_0143e7c0(local_c,"linearDamping");
  puVar6 = (undefined4 *)FUN_0143e890(0);
  uVar4 = 0;
  FUN_0143e9f0(&local_34,"linearDamping");
  puVar7 = (undefined4 *)FUN_0143e890(uVar4);
  *puVar7 = *puVar6;
  FUN_0143e7c0(local_c,"angularDamping");
  puVar6 = (undefined4 *)FUN_0143e890(0);
  uVar4 = 0;
  FUN_0143e9f0(&local_34,"angularDamping");
  puVar7 = (undefined4 *)FUN_0143e890(uVar4);
  *puVar7 = *puVar6;
  uVar4 = FUN_010093a0();
  iVar8 = FUN_01015b90("hkBoxMotion",uVar4);
  if (iVar8 != 0) {
    uVar4 = FUN_010093a0();
    iVar8 = FUN_01015b90("hkStabilizedBoxMotion",uVar4);
    if (iVar8 != 0) {
      uVar4 = FUN_010093a0();
      iVar8 = FUN_01015b90("hkThinBoxMotion",uVar4);
      if (iVar8 != 0) {
        FUN_0143e7c0(local_c,"particleMinInertiaDiagInv");
        puVar6 = (undefined4 *)FUN_0143e890(0);
        uVar4 = *puVar6;
        local_3c = CONCAT44(uVar4,uVar4);
        local_34 = CONCAT44(local_34._4_4_,uVar4);
        FUN_0143e7c0(local_c,"massInv");
        puVar6 = (undefined4 *)FUN_0143e890(0);
        local_34 = CONCAT44(*puVar6,(undefined4)local_34);
        FUN_0143e7c0(local_14,"inertiaAndMassInv");
        goto LAB_0103c6c9;
      }
    }
  }
  FUN_0143e7c0(local_c,"inertiaAndMassInv");
  FUN_0143e7c0(local_14,"inertiaAndMassInv");
  puVar9 = (undefined8 *)FUN_0143e940(0);
  local_3c = *puVar9;
  local_34 = puVar9[1];
LAB_0103c6c9:
  puVar9 = (undefined8 *)FUN_0143e940(0);
  *puVar9 = local_3c;
  puVar9[1] = local_34;
  FUN_0143e7c0(local_c,"linearVelocity");
  FUN_0143e7c0(local_14,"linearVelocity");
  puVar9 = (undefined8 *)FUN_0143e940(0);
  uVar1 = *puVar9;
  local_34 = puVar9[1];
  puVar9 = (undefined8 *)FUN_0143e940(0);
  *puVar9 = uVar1;
  puVar9[1] = local_34;
  FUN_0143e7c0(local_c,"angularVelocity");
  FUN_0143e7c0(local_14,"angularVelocity");
  puVar9 = (undefined8 *)FUN_0143e940(0);
  uVar1 = *puVar9;
  local_34 = puVar9[1];
  puVar9 = (undefined8 *)FUN_0143e940(0);
  *puVar9 = uVar1;
  puVar9[1] = local_34;
  return;
}

// 0103D2C0  FUN_0103d2c0  size=153  [run]
void FUN_0103d2c0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_2c [16];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_0143e7c0(param_1,"motion");
  puVar2 = (undefined4 *)FUN_0143e850(0);
  uVar1 = *puVar2;
  local_18 = FUN_0103ec00(uVar1);
  if (local_18 != 0) {
    FUN_0143e7c0(param_2,"motion");
    puVar2 = (undefined4 *)FUN_0143ea60(local_2c);
    local_14 = *puVar2;
    iVar3 = FUN_0143ea60(local_2c);
    local_10 = *(undefined4 *)(iVar3 + 4);
    local_1c = uVar1;
    FUN_0103c4b0(&local_1c,&local_14,param_3);
    (**(code **)(*param_3 + 0x18))(uVar1,0,0);
  }
  return;
}

// 0103D360  FUN_0103d360  size=289  [run]
int FUN_0103d360(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar3 = FUN_0104ed70("Havok-4.0.0-b2");
  FUN_0103ed60(param_1);
  DAT_02097cb8 = local_20;
  local_8 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                      (param_1,param_2,&PTR_PTR_01b1b444,uVar3);
  DAT_02097cb8 = (undefined1 *)0x0;
  if (local_8 == 0) {
    local_8 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                        (&local_14,param_2,&PTR_PTR_01b1b444,uVar3);
    iVar4 = local_10;
    iVar1 = param_1[1];
    iVar5 = iVar1 + local_10;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
      iVar2 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar5,8);
    }
    param_1[1] = param_1[1] + iVar4;
    iVar4 = 0;
    iVar5 = *param_1 + iVar1 * 8;
    if (0 < local_10) {
      do {
        *(undefined4 *)(iVar5 + iVar4 * 8) = *(undefined4 *)(local_14 + iVar4 * 8);
        *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = *(undefined4 *)(local_14 + 4 + iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_10);
    }
  }
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
  }
  local_14 = 0;
  local_c = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return local_8;
}

// 0103EAA0  FUN_0103eaa0  size=64  [run]
void FUN_0103eaa0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  if (!bVar3) {
    do {
      uVar1 = FUN_010093a0(param_3);
      iVar2 = FUN_01015b90(uVar1);
      if (iVar2 == 0) break;
      param_2 = FUN_010093b0();
    } while (param_2 != 0);
    bVar3 = param_2 == 0;
  }
  *(bool *)param_1 = !bVar3;
  return;
}

// 0103EAE0  FUN_0103eae0  size=18  [run]
void FUN_0103eae0(undefined4 param_1)

{
  FUN_01010160(param_1,0);
  return;
}

// 0103EB00  FUN_0103eb00  size=53  [run]
undefined1 * FUN_0103eb00(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010160(param_2,0);
  if (iVar1 != 0) {
    FUN_0103eaa0(param_1,iVar1,param_3);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

// 0103EBA0  FUN_0103eba0  size=18  [run]
void __thiscall FUN_0103eba0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0103EBC0  FUN_0103ebc0  size=51  [run]
int __thiscall FUN_0103ebc0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0103EC00  FUN_0103ec00  size=98  [run]
int __thiscall FUN_0103ec00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    piVar2 = *(int **)(param_1 + 0xc);
    do {
      if (*piVar2 == param_2) {
        iVar1 = (*(int **)(param_1 + 0xc))[iVar4 * 2 + 1];
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        if (*(int *)(param_1 + 0x10) == iVar4) {
          return iVar1;
        }
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 * 8);
        iVar4 = (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 8) - (int)puVar3;
        iVar5 = 2;
        do {
          *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
          puVar3 = puVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return iVar1;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

// 0103EC70  FUN_0103ec70  size=46  [run]
int __fastcall FUN_0103ec70(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0103ECA0  FUN_0103eca0  size=189  [run]
void __thiscall FUN_0103eca0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_2[1]) {
    do {
      iVar3 = *(int *)(*param_2 + 4 + iVar5 * 8);
      while (iVar3 != 0) {
        uVar1 = FUN_010093a0("hkMotion");
        iVar2 = FUN_01015b90(uVar1);
        if (iVar2 == 0) {
          if (iVar3 != 0) {
            if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xc),8);
            }
            puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 8);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            iVar3 = *param_2;
            *puVar4 = *(undefined4 *)(iVar3 + iVar5 * 8);
            puVar4[1] = *(undefined4 *)(iVar3 + 4 + iVar5 * 8);
            param_2[1] = param_2[1] + -1;
            if (param_2[1] != iVar5) {
              puVar4 = (undefined4 *)(*param_2 + iVar5 * 8);
              iVar3 = (*param_2 + param_2[1] * 8) - (int)puVar4;
              iVar2 = 2;
              do {
                *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
                puVar4 = puVar4 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            goto LAB_0103ece7;
          }
          break;
        }
        iVar3 = FUN_010093b0();
      }
      iVar5 = iVar5 + 1;
LAB_0103ece7:
    } while (iVar5 < param_2[1]);
  }
  return;
}

// 0103ED60  FUN_0103ed60  size=292  [run]
undefined4 * __thiscall FUN_0103ed60(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  if (0 < param_2[1]) {
    do {
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*param_2 + iVar5 * 8),
                   *(undefined4 *)(*param_2 + 4 + iVar5 * 8));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2[1]);
    if (0 < param_2[1]) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)(*param_2 + 4 + iVar5 * 8);
        while (iVar3 != 0) {
          uVar1 = FUN_010093a0("hkMotion");
          iVar2 = FUN_01015b90(uVar1);
          if (iVar2 == 0) {
            if (iVar3 != 0) {
              if (param_1[4] == (param_1[5] & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 3,8);
              }
              puVar4 = (undefined4 *)(param_1[3] + param_1[4] * 8);
              param_1[4] = param_1[4] + 1;
              iVar3 = *param_2;
              *puVar4 = *(undefined4 *)(iVar3 + iVar5 * 8);
              puVar4[1] = *(undefined4 *)(iVar3 + 4 + iVar5 * 8);
              param_2[1] = param_2[1] + -1;
              if (param_2[1] != iVar5) {
                puVar4 = (undefined4 *)(*param_2 + iVar5 * 8);
                iVar3 = (*param_2 + param_2[1] * 8) - (int)puVar4;
                iVar2 = 2;
                do {
                  *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
                  puVar4 = puVar4 + 1;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              goto LAB_0103edcb;
            }
            break;
          }
          iVar3 = FUN_010093b0();
        }
        iVar5 = iVar5 + 1;
LAB_0103edcb:
        if (param_2[1] <= iVar5) {
          return param_1;
        }
      } while( true );
    }
  }
  return param_1;
}

// 0103EE90  FUN_0103ee90  size=83  [run]
void __fastcall FUN_0103ee90(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < *(int *)(param_1 + 0x14)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x14) * 8);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 0103F220  FUN_0103f220  size=224  [run]
void FUN_0103f220(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"qFormat");
  FUN_0143e7c0(param_1,"qFormat");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      FUN_0143e9e0();
      uVar2 = FUN_010162f0();
      pcVar1 = "bitWidth";
      uVar3 = FUN_0143e830(uVar2,"bitWidth");
      FUN_0143e7f0(uVar3,uVar2,pcVar1);
      FUN_0143e9e0();
      uVar2 = FUN_010162f0();
      pcVar1 = "maxBitWidth";
      uVar3 = FUN_0143e830(uVar2,"maxBitWidth");
      FUN_0143e7f0(uVar3,uVar2,pcVar1);
      pcVar1 = (char *)FUN_0143e810(&local_5);
      if (*pcVar1 != '\0') {
        pcVar1 = (char *)FUN_0143e810(&local_5);
        if (*pcVar1 != '\0') {
          puVar4 = (undefined1 *)FUN_0143e920(0);
          puVar5 = (undefined1 *)FUN_0143e920(0);
          *puVar5 = *puVar4;
        }
      }
    }
  }
  return;
}

// 0103F300  FUN_0103f300  size=430  [run]
void FUN_0103f300(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"qFormat");
  FUN_0143e7c0(param_1,"qFormat");
  FUN_0143e7c0(param_2,"totalBlockSize");
  pcVar3 = (char *)FUN_0143e810(&local_5);
  if (*pcVar3 != '\0') {
    pcVar3 = (char *)FUN_0143e810(&local_5);
    if (*pcVar3 != '\0') {
      pcVar3 = (char *)FUN_0143e810(&local_5);
      if (*pcVar3 != '\0') {
        FUN_0143e9e0();
        uVar4 = FUN_010162f0();
        pcVar3 = "bitWidth";
        uVar5 = FUN_0143e830(uVar4,"bitWidth");
        FUN_0143e7f0(uVar5,uVar4,pcVar3);
        FUN_0143e9e0();
        uVar5 = FUN_010162f0();
        pcVar3 = "maxBitWidth";
        uVar4 = uVar5;
        uVar6 = FUN_0143e830(uVar5,"maxBitWidth");
        FUN_0143e7f0(uVar6,uVar4,pcVar3);
        pcVar3 = (char *)FUN_0143e810(&local_5);
        if (*pcVar3 != '\0') {
          pcVar3 = (char *)FUN_0143e810(&local_5);
          if (*pcVar3 != '\0') {
            puVar7 = (undefined1 *)FUN_0143e920(0);
            puVar8 = (undefined1 *)FUN_0143e920(0);
            *puVar8 = *puVar7;
          }
        }
        FUN_0143e7c0(param_2,"blockSize");
        pcVar3 = "preserved";
        uVar4 = uVar5;
        uVar6 = FUN_0143e830(uVar5,"preserved");
        FUN_0143e7f0(uVar6,uVar4,pcVar3);
        pcVar3 = (char *)FUN_0143e920(0);
        cVar1 = *pcVar3;
        pcVar3 = (char *)FUN_0143e920(0);
        cVar2 = *pcVar3;
        piVar9 = (int *)FUN_0143e8b0(0);
        iVar11 = *piVar9;
        pcVar3 = (char *)FUN_0143e920(0);
        iVar10 = (int)*pcVar3 * (iVar11 - cVar2) + 7;
        pcVar3 = "offset";
        uVar4 = FUN_0143e830(uVar5,"offset");
        FUN_0143e7f0(uVar4,uVar5,pcVar3);
        iVar11 = FUN_0143e830();
        iVar11 = *(int *)(iVar11 + 4);
        piVar9 = (int *)FUN_0143e8b0(0);
        *piVar9 = iVar11 * (((int)((iVar10 >> 0x1f & 7U) + iVar10) >> 3) + cVar1 * 4);
      }
    }
  }
  return;
}

// 0103F4B0  FUN_0103f4b0  size=132  [run]
void FUN_0103f4b0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"className");
  FUN_0143e7c0(param_1,"variant");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      FUN_0143e9d0(0);
      uVar2 = FUN_010093a0();
      uVar2 = FUN_01016080(uVar2);
      (**(code **)(*param_3 + 0xc))(uVar2);
      puVar3 = (undefined4 *)FUN_0143e860(0);
      *puVar3 = uVar2;
    }
  }
  return;
}

// 0103F540  FUN_0103f540  size=236  [run]
void FUN_0103f540(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
        FUN_0103f4b0(&local_34,&local_2c,param_3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_c[1]);
    }
  }
  return;
}

// 0103F630  FUN_0103f630  size=102  [run]
void __thiscall FUN_0103f630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_ESI;
  
  FUN_0143e7c0(param_1,in_EAX);
  FUN_0143e7c0(param_2,param_3);
  puVar2 = (undefined4 *)FUN_0143e850(0);
  puVar3 = (undefined4 *)FUN_0143e850(1);
  *puVar3 = *puVar2;
  iVar4 = FUN_0143e830();
  iVar1 = *unaff_ESI;
  puVar2 = (undefined4 *)FUN_0143e850(1);
  (**(code **)(iVar1 + 0x14))(*puVar2,iVar4 + 4);
  return;
}

// 0103F6A0  FUN_0103f6a0  size=35  [run]
void FUN_0103f6a0(undefined4 param_1,undefined4 param_2)

{
  FUN_0103f630(param_2,"childShape");
  return;
}

// 0103F6D0  FUN_0103f6d0  size=35  [run]
void FUN_0103f6d0(undefined4 param_1,undefined4 param_2)

{
  FUN_0103f630(param_2,"child");
  return;
}

// 0103F730  FUN_0103f730  size=269  [run]
void __fastcall FUN_0103f730(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_14;
  int local_8;
  
  FUN_0143e7c0(*param_3 + param_2 * 8,"namedVariants");
  FUN_0143e9e0();
  uVar1 = FUN_010162f0();
  iVar2 = FUN_01009750();
  piVar3 = (int *)FUN_0143e9a0(0);
  local_14 = 0;
  if (0 < piVar3[1]) {
    local_8 = 0;
    do {
      iVar6 = *piVar3;
      FUN_0143e7f0(iVar6 + local_8,uVar1,"variant");
      FUN_0143e7f0(iVar6 + local_8,uVar1,"className");
      piVar4 = (int *)FUN_0143e9d0(0);
      piVar5 = (int *)FUN_0143e860(0);
      if ((*piVar5 == 0) && (piVar4[1] == 0)) {
        iVar6 = 0;
        if (0 < param_3[1]) {
          piVar5 = (int *)*param_3;
          do {
            if (*piVar5 == *piVar4) {
              iVar6 = ((int *)*param_3)[iVar6 * 2 + 1];
              goto LAB_0103f804;
            }
            iVar6 = iVar6 + 1;
            piVar5 = piVar5 + 2;
          } while (iVar6 < param_3[1]);
        }
        iVar6 = 0;
LAB_0103f804:
        piVar4[1] = iVar6;
        (**(code **)(*param_4 + 0x14))(iVar6,piVar4 + 1);
      }
      local_8 = local_8 + iVar2;
      local_14 = local_14 + 1;
    } while (local_14 < piVar3[1]);
  }
  return;
}

// 0103F840  FUN_0103f840  size=352  [run]
void FUN_0103f840(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_8;
  
  local_18 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = FUN_010093a0("hkRootLevelContainer");
      iVar2 = FUN_01015b90(uVar1);
      if (iVar2 == 0) {
        FUN_0143e7c0(*param_1 + local_18 * 8,"namedVariants");
        FUN_0143e9e0();
        uVar1 = FUN_010162f0();
        iVar2 = FUN_01009750();
        piVar3 = (int *)FUN_0143e9a0(0);
        local_14 = 0;
        if (0 < piVar3[1]) {
          local_8 = 0;
          do {
            iVar6 = *piVar3;
            FUN_0143e7f0(iVar6 + local_8,uVar1,"variant");
            FUN_0143e7f0(iVar6 + local_8,uVar1,"className");
            piVar4 = (int *)FUN_0143e9d0(0);
            piVar5 = (int *)FUN_0143e860(0);
            if ((*piVar5 == 0) && (piVar4[1] == 0)) {
              iVar6 = 0;
              if (0 < param_1[1]) {
                piVar5 = (int *)*param_1;
                do {
                  if (*piVar5 == *piVar4) {
                    iVar6 = ((int *)*param_1)[iVar6 * 2 + 1];
                    goto LAB_0103f954;
                  }
                  iVar6 = iVar6 + 1;
                  piVar5 = piVar5 + 2;
                } while (iVar6 < param_1[1]);
              }
              iVar6 = 0;
LAB_0103f954:
              piVar4[1] = iVar6;
              (**(code **)(*param_2 + 0x14))(iVar6,piVar4 + 1);
            }
            local_8 = local_8 + iVar2;
            local_14 = local_14 + 1;
          } while (local_14 < piVar3[1]);
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_1[1]);
  }
  return;
}

// 0103F9A0  FUN_0103f9a0  size=72  [run]
undefined4 FUN_0103f9a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0104ed70("Havok-4.0.0-b1");
  iVar2 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                    (param_1,param_2,&PTR_DAT_01b1b780,uVar1);
  if (iVar2 == 0) {
    FUN_0103f840(param_1,param_2);
    return 0;
  }
  return 1;
}

// 0103F9F0  FUN_0103f9f0  size=182  [run]
void FUN_0103f9f0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"minForce");
  FUN_0143e7c0(param_2,"maxForce");
  FUN_0143e7c0(param_1,"maxForce");
  pcVar2 = (char *)FUN_0143e810(&local_5);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)FUN_0143e810(&local_5);
    if (*pcVar2 != '\0') {
      pcVar2 = (char *)FUN_0143e810(&local_5);
      if (*pcVar2 != '\0') {
        puVar3 = (uint *)FUN_0143e890(0);
        uVar1 = *puVar3;
        puVar3 = (uint *)FUN_0143e890(0);
        *puVar3 = uVar1 ^ 0x80000000;
        puVar4 = (undefined4 *)FUN_0143e890(0);
        puVar5 = (undefined4 *)FUN_0143e890(0);
        *puVar5 = *puVar4;
      }
    }
  }
  return;
}

// 0103FAB0  FUN_0103fab0  size=52  [run]
void FUN_0103fab0(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,"maxNegForce",param_2,"minForce");
  FUN_010e0a20(param_1,"maxPosForce",param_2,"maxForce");
  return;
}

// 0103FAF0  FUN_0103faf0  size=52  [run]
void FUN_0103faf0(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,"maxNegForce",param_2,"minForce");
  FUN_010e0a20(param_1,"maxPosForce",param_2,"maxForce");
  return;
}

// 0103FB30  FUN_0103fb30  size=106  [run]
void FUN_0103fb30(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_2,"strength");
  FUN_0143e7c0(param_1,&DAT_01713370);
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      puVar2 = (undefined4 *)FUN_0143e890(0);
      puVar3 = (undefined4 *)FUN_0143e890(0);
      *puVar3 = *puVar2;
    }
  }
  return;
}

// 0103FBA0  FUN_0103fba0  size=53  [run]
void __fastcall FUN_0103fba0(undefined4 param_1)

{
  undefined4 in_EAX;
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,in_EAX);
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_0143e850(0);
    *puVar2 = 0;
  }
  return;
}

// 0103FBE0  FUN_0103fbe0  size=10  [run]
void FUN_0103fbe0(void)

{
  FUN_0103fba0();
  return;
}

// 0103FBF0  FUN_0103fbf0  size=12  [run]
void FUN_0103fbf0(void)

{
  FUN_0103fbe0();
  return;
}

// 0103FC00  FUN_0103fc00  size=17  [run]
void FUN_0103fc00(void)

{
  FUN_0103fba0();
  return;
}

// 0103FC20  FUN_0103fc20  size=175  [run]
void FUN_0103fc20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_28 [16];
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  int local_c;
  int *local_8;
  
  FUN_0143e7c0(param_1,"wheelsInfo");
  FUN_0143e7c0(param_2,"wheelsInfo");
  iVar3 = 0;
  iVar1 = FUN_0143e9a0(0);
  local_8 = (int *)FUN_0143e9a0(0);
  FUN_0143ea60(local_10);
  local_18 = 0;
  iVar2 = FUN_0143ea60(local_10);
  local_14 = *(undefined4 *)(iVar2 + 4);
  FUN_01009750();
  local_c = FUN_01009750();
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      local_18 = *local_8 + iVar3;
      FUN_0103fc00(local_28,&local_18,param_3);
      iVar3 = iVar3 + local_c;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 4));
  }
  return;
}

// 0103FCD0  FUN_0103fcd0  size=232  [run]
void FUN_0103fcd0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"physicsSystem");
  FUN_0143e7c0(param_2,"rigidBodies");
  FUN_0143e7c0(param_2,"constraints");
  pcVar2 = (char *)FUN_0143e810(&local_5);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)FUN_0143e810(&local_5);
    if (*pcVar2 != '\0') {
      pcVar2 = (char *)FUN_0143e810(&local_5);
      if (*pcVar2 != '\0') {
        FUN_0143e9e0();
        uVar3 = FUN_010162f0();
        FUN_0143e7f0(*param_1,uVar3,"rigidBodies");
        FUN_0143e7f0(*param_1,uVar3,"constraints");
        puVar4 = (undefined4 *)FUN_0143e9a0(0);
        uVar3 = *puVar4;
        uVar1 = puVar4[1];
        puVar4 = (undefined4 *)FUN_0143e9a0(0);
        *puVar4 = uVar3;
        puVar4[1] = uVar1;
        puVar4 = (undefined4 *)FUN_0143e9a0(0);
        uVar3 = *puVar4;
        uVar1 = puVar4[1];
        puVar4 = (undefined4 *)FUN_0143e9a0(0);
        *puVar4 = uVar3;
        puVar4[1] = uVar1;
      }
    }
  }
  return;
}

// 0103FDC0  FUN_0103fdc0  size=72  [run]
void FUN_0103fdc0(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  FUN_0143e7f0(*param_2,param_2[1],"contactRestingVelocity");
  pcVar1 = (char *)FUN_0143e810((int)&param_2 + 3);
  if (*pcVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_0143e890(0);
    *puVar2 = 0x7f7fffee;
  }
  return;
}

// 0103FE10  FUN_0103fe10  size=144  [run]
void FUN_0103fe10(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  char *pcVar2;
  short *psVar3;
  int *piVar4;
  undefined1 local_5;
  
  FUN_010e0a20(param_1,"period",param_2,"duration");
  FUN_010e0a20(param_1,"animationTracks",param_2,"annotationTracks");
  FUN_0143e7c0(param_1,"numberOfBoneTracks");
  FUN_0143e7c0(param_2,"numberOfTracks");
  pcVar2 = (char *)FUN_0143e810(&local_5);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)FUN_0143e810(&local_5);
    if (*pcVar2 != '\0') {
      psVar3 = (short *)FUN_0143e900(0);
      sVar1 = *psVar3;
      piVar4 = (int *)FUN_0143e8b0(0);
      *piVar4 = (int)sVar1;
    }
  }
  return;
}

// 0103FEA0  FUN_0103fea0  size=96  [run]
void FUN_0103fea0(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_010e0a20(param_1,"parentWorld",param_2,"boneFromAttachment");
  FUN_0143e7c0(param_1,"boneIndex");
  FUN_0143e7c0(param_2,"boneIndex");
  puVar1 = (undefined2 *)FUN_0143e8b0(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  return;
}

// 0103FF00  FUN_0103ff00  size=52  [run]
void FUN_0103ff00(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,"period",param_2,"duration");
  FUN_010e0a20(param_1,"motionTrack",param_2,"referenceFrameSamples");
  return;
}

// 0103FF40  FUN_0103ff40  size=210  [run]
void FUN_0103ff40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  char *pcVar2;
  short *psVar3;
  int *piVar4;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"numberOfPoses");
  FUN_0143e7c0(param_2,"numberOfPoses");
  pcVar2 = (char *)FUN_0143e810(&local_5);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)FUN_0143e810(&local_5);
    if (*pcVar2 != '\0') {
      psVar3 = (short *)FUN_0143e900(0);
      sVar1 = *psVar3;
      piVar4 = (int *)FUN_0143e8b0(0);
      *piVar4 = (int)sVar1;
    }
  }
  FUN_0143e7c0(param_1,"blockSize");
  FUN_0143e7c0(param_2,"blockSize");
  pcVar2 = (char *)FUN_0143e810(&local_5);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)FUN_0143e810(&local_5);
    if (*pcVar2 != '\0') {
      psVar3 = (short *)FUN_0143e900(0);
      sVar1 = *psVar3;
      piVar4 = (int *)FUN_0143e8b0(0);
      *piVar4 = (int)sVar1;
    }
  }
  FUN_0103fe10(param_1,param_2,param_3);
  return;
}

// 01040020  FUN_01040020  size=31  [run]
void FUN_01040020(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,&DAT_01730968,param_2,"keyFrames");
  return;
}

// 01040370  FUN_01040370  size=163  [run]
void FUN_01040370(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"initialTransform");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_0143e830();
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
  }
  FUN_0143e7c0(param_1,"lockTranslation");
  FUN_0143e7c0(param_2,"lockTranslation");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      puVar3 = (undefined1 *)FUN_0143e880(0);
      local_5 = *puVar3;
      puVar3 = (undefined1 *)FUN_0143e880(0);
      *puVar3 = local_5;
    }
  }
  return;
}

// 01040420  FUN_01040420  size=159  [run]
void FUN_01040420(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"mapping");
  FUN_0143e7c0(param_2,"mappings");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      puVar3 = (undefined4 *)FUN_01005cb0(*(undefined4 *)((int)pvVar2 + 0x2c),8);
      (**(code **)(*param_3 + 0xc))(puVar3);
      puVar4 = (undefined4 *)FUN_0143e9a0(0);
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar4 = (undefined4 *)FUN_0143e9a0(0);
      *puVar4 = puVar3;
      puVar4[1] = 1;
    }
  }
  return;
}

// 010404C0  FUN_010404c0  size=289  [run]
void FUN_010404c0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  LPVOID pvVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_c;
  undefined1 local_5;
  
  FUN_010e0a20(param_1,"hierarchy",param_2,"parentIndices");
  FUN_0143e7c0(param_1,"bones");
  FUN_0143e7c0(param_2,"referencePose");
  pcVar7 = (char *)FUN_0143e810(&local_5);
  if ((*pcVar7 != '\0') && (pcVar7 = (char *)FUN_0143e810(&local_5), *pcVar7 != '\0')) {
    piVar8 = (int *)FUN_0143e830();
    piVar9 = (int *)FUN_0143e830();
    iVar11 = piVar8[1];
    piVar9[1] = iVar11;
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    iVar11 = FUN_01005cb0(*(undefined4 *)((int)pvVar10 + 0x2c),iVar11 * 0x30);
    *piVar9 = iVar11;
    (**(code **)(*param_3 + 0xc))(iVar11);
    pcVar7 = "initialTransform";
    FUN_0143e9e0("initialTransform");
    FUN_010162f0();
    iVar11 = FUN_01009660(pcVar7);
    uVar2 = *(ushort *)(iVar11 + 0x12);
    iVar11 = 0;
    if (0 < piVar8[1]) {
      local_c = 0;
      do {
        puVar12 = (undefined4 *)(*(int *)(*piVar8 + iVar11 * 4) + (uint)uVar2);
        iVar3 = *piVar9;
        uVar4 = puVar12[1];
        uVar5 = puVar12[2];
        uVar6 = puVar12[3];
        puVar1 = (undefined4 *)(iVar3 + local_c);
        *puVar1 = *puVar12;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        uVar4 = puVar12[5];
        uVar5 = puVar12[6];
        uVar6 = puVar12[7];
        puVar1 = (undefined4 *)(iVar3 + 0x10 + local_c);
        *puVar1 = puVar12[4];
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        uVar4 = puVar12[9];
        uVar5 = puVar12[10];
        uVar6 = puVar12[0xb];
        puVar1 = (undefined4 *)(iVar3 + 0x20 + local_c);
        *puVar1 = puVar12[8];
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        iVar11 = iVar11 + 1;
        local_c = local_c + 0x30;
      } while (iVar11 < piVar8[1]);
    }
  }
  return;
}

// 010405F0  FUN_010405f0  size=274  [run]
void FUN_010405f0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"mapping");
  FUN_0143e7c0(param_2,"animationTrackToBoneIndices");
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if ((*pcVar1 != '\0') && (pcVar1 = (char *)FUN_0143e810(&local_5), *pcVar1 != '\0')) {
    iVar4 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    puVar2 = (undefined4 *)FUN_0143e830();
    if (0 < (int)puVar2[1]) {
      do {
        iVar5 = 0;
        if (0 < (int)puVar2[1]) {
          psVar3 = (short *)*puVar2;
          do {
            if (*psVar3 == iVar4) {
              if (local_20 == (local_1c & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_24,2);
              }
              *(short *)(local_24 + local_20 * 2) = (short)iVar5;
              local_20 = local_20 + 1;
              break;
            }
            iVar5 = iVar5 + 1;
            psVar3 = psVar3 + 1;
          } while (iVar5 < (int)puVar2[1]);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)puVar2[1]);
    }
    FUN_01015e80(*puVar2,local_24,local_20 * 2);
    puVar2[1] = local_20;
    local_20 = 0;
    if (-1 < (int)local_1c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,(local_1c & 0x3fffffff) * 2);
    }
  }
  return;
}

// 01040770  FUN_01040770  size=36  [run]
void FUN_01040770(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined2 *)(param_1 + iVar1 * 2) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010407A0  FUN_010407a0  size=24  [run]
void __thiscall FUN_010407a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 2);
  return;
}

// 01040800  FUN_01040800  size=59  [run]
void __thiscall FUN_01040800(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,2);
  }
  *(undefined2 *)(*param_1 + param_1[1] * 2) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01040840  FUN_01040840  size=40  [run]
void FUN_01040840(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 8);
  return;
}

// 01040870  FUN_01040870  size=39  [run]
void FUN_01040870(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 0x30);
  return;
}

// 010408B0  FUN_010408b0  size=60  [run]
void __thiscall FUN_010408b0(int *param_1,undefined2 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,2);
  }
  *(undefined2 *)(*param_1 + param_1[1] * 2) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010408F0  FUN_010408f0  size=59  [run]
void __thiscall FUN_010408f0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01040930  FUN_01040930  size=59  [run]
void __fastcall FUN_01040930(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01040970  FUN_01040970  size=59  [run]
void __fastcall FUN_01040970(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01040A30  FUN_01040a30  size=20  [run]
void __thiscall FUN_01040a30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01040AB0  FUN_01040ab0  size=10  [run]
void FUN_01040ab0(void)

{
  return;
}

// 01040AC0  FUN_01040ac0  size=90  [run]
void FUN_01040ac0(undefined4 *param_1)

{
  int iVar1;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"priority");
  iVar1 = (**(code **)(*local_c + 0x30))(local_8);
  if (1 < iVar1) {
    (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"priority");
    (**(code **)(*local_c + 0x44))(local_8,iVar1 + 1);
  }
  return;
}

// 01040B20  FUN_01040b20  size=632  [run]
void FUN_01040b20(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x14))();
    (**(code **)(*param_2 + 0x10))(uVar3);
    local_14 = (int *)(**(code **)(*param_2 + 0x18))();
    piVar4 = (int *)(**(code **)(*local_14 + 4))();
    local_10 = piVar4;
    local_c = (**(code **)(*piVar4 + 0x24))("hkHalf");
    local_8 = 0;
    iVar2 = (**(code **)(*param_1 + 0x14))();
    if (0 < iVar2) {
      local_18 = 0x3f80;
      do {
        piVar5 = (int *)(**(code **)(*piVar4 + 0x10))(&local_14,0);
        if (piVar5 != (int *)0x0) {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        uVar3 = (**(code **)(*param_1 + 0x4c))(local_8);
        (**(code **)(*piVar5 + 0xc))(&local_20,"filterInfo");
        (**(code **)(*local_20 + 0x44))(local_1c,uVar3);
        piVar6 = (int *)(**(code **)(*piVar4 + 0x10))(&local_c,0);
        if (piVar6 != (int *)0x0) {
          *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
          piVar6[2] = piVar6[2] + 1;
        }
        (**(code **)(*piVar6 + 0xc))(&local_28,"value");
        (**(code **)(*local_28 + 0x44))(local_24,0);
        (**(code **)(*piVar5 + 0xc))(&local_30,"restitution");
        (**(code **)(*local_30 + 0x5c))(local_2c,piVar6);
        piVar4 = (int *)(**(code **)(*piVar4 + 0x10))(&local_c,0);
        if (piVar4 != (int *)0x0) {
          *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
          piVar4[2] = piVar4[2] + 1;
        }
        (**(code **)(*piVar4 + 0xc))(&local_38,"value");
        (**(code **)(*local_38 + 0x44))(local_34,local_18);
        (**(code **)(*piVar5 + 0xc))(&local_40,"friction");
        (**(code **)(*local_40 + 0x5c))(local_3c,piVar4);
        (**(code **)(*piVar5 + 0xc))(&local_48,"userData");
        (**(code **)(*local_48 + 0x44))(local_44,0);
        (**(code **)(*param_2 + 0x60))(local_8,piVar5);
        *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
        piVar1 = piVar4 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar4)(1);
        }
        *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
        piVar4 = piVar6 + 2;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*piVar6)(1);
        }
        *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
        piVar4 = piVar5 + 2;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*piVar5)(1);
        }
        iVar7 = local_8 + 1;
        local_8 = iVar7;
        iVar2 = (**(code **)(*param_1 + 0x14))();
        piVar4 = local_10;
      } while (iVar7 < iVar2);
    }
  }
  if (param_1 != (int *)0x0) {
    *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
    piVar4 = param_1 + 2;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  if (param_2 != (int *)0x0) {
    *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
    piVar4 = param_2 + 2;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*param_2)(1);
    }
  }
  return;
}

// 01040DA0  FUN_01040da0  size=116  [run]
void __fastcall FUN_01040da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*unaff_EDI + 0xc))(&local_c,param_2);
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*unaff_EDI + 0xc))(&local_14,param_3);
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 01040E20  FUN_01040e20  size=28  [run]
void FUN_01040e20(void)

{
  FUN_01040da0("savedMotion");
  return;
}

// 01040E40  FUN_01040e40  size=28  [run]
void FUN_01040e40(void)

{
  FUN_01040da0("motion");
  return;
}

// 01040E60  FUN_01040e60  size=171  [run]
void FUN_01040e60(undefined4 *param_1)

{
  float10 fVar1;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_factorA");
  fVar1 = (float10)(**(code **)(*local_c + 0x3c))(local_8);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"factorA");
  (**(code **)(*local_14 + 0x50))(local_10,(float)fVar1);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"old_factorB");
  fVar1 = (float10)(**(code **)(*local_14 + 0x3c))(local_10);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"factorB");
  (**(code **)(*local_c + 0x50))(local_8,(float)fVar1);
  return;
}

// 01040F10  FUN_01040f10  size=89  [run]
void FUN_01040f10(undefined4 *param_1)

{
  int iVar1;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"stridingType");
  iVar1 = (**(code **)(*local_c + 0x30))(local_8);
  if (0 < iVar1) {
    (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"stridingType");
    (**(code **)(*local_c + 0x44))(local_8,iVar1 + 1);
  }
  return;
}

// 01040F70  FUN_01040f70  size=162  [run]
void __fastcall
FUN_01040f70(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  int *piVar3;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_3 + 0xc))(&local_c,param_2);
  piVar3 = (int *)(**(code **)(*local_c + 0x34))(local_8);
  if (piVar3 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
    (**(code **)(*piVar3 + 0xc))(&local_14,"value");
    uVar2 = (**(code **)(*local_14 + 0x30))(local_10);
  }
  (**(code **)(*(int *)*param_3 + 0xc))(&local_14,param_4);
  (**(code **)(*local_14 + 0x4c))(local_10,uVar2);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar3)(1);
    }
  }
  return;
}

// 01041020  FUN_01041020  size=45  [run]
void FUN_01041020(undefined4 param_1)

{
  FUN_01040f70(param_1,"restitution");
  FUN_01040f70(param_1,"friction");
  return;
}

// 01041050  FUN_01041050  size=27  [run]
void FUN_01041050(undefined4 param_1)

{
  FUN_01040f70(param_1,"gravityFactor");
  return;
}

// 01041070  FUN_01041070  size=96  [run]
void FUN_01041070(undefined4 *param_1)

{
  int iVar1;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,&DAT_01662d64);
  iVar1 = (**(code **)(*local_c + 0x30))(local_8);
  if (2 < iVar1) {
    if (4 < iVar1) {
      iVar1 = iVar1 + -1;
    }
    (**(code **)(*(int *)*param_1 + 0xc))(&local_c,&DAT_01662d64);
    (**(code **)(*local_c + 0x44))(local_8,iVar1 + -1);
  }
  return;
}

// 010410D0  FUN_010410d0  size=394  [run]
void FUN_010410d0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"setupStabilization");
  piVar2 = (int *)(**(code **)(*local_c + 0x34))(local_8);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"ballSocket");
  piVar3 = (int *)(**(code **)(*local_14 + 0x34))(local_10);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  (**(code **)(*piVar2 + 0xc))(&local_1c,"enabled");
  (**(code **)(*local_1c + 0x40))(local_18,0,0);
  (**(code **)(*piVar2 + 0xc))(&local_1c,"maxAngle");
  (**(code **)(*local_1c + 0x50))(local_18,0x5f7ffff0);
  (**(code **)(*piVar2 + 0xc))(&local_1c,&DAT_01662d64);
  (**(code **)(*local_1c + 0x44))(local_18,0x17);
  iVar4 = (**(code **)(*piVar3 + 0x10))("solvingMethod");
  if (iVar4 != 0) {
    (**(code **)(*piVar3 + 0xc))(&local_1c,"solvingMethod");
    (**(code **)(*local_1c + 0x44))(local_18,1);
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_1c,"setupStabilization");
  (**(code **)(*local_1c + 0x5c))(local_18,piVar2);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_1c,"ballSocket");
  (**(code **)(*local_1c + 0x5c))(local_18,piVar3);
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01041260  FUN_01041260  size=121  [run]
void FUN_01041260(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"displayObject");
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"displayObjectPtr");
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 01041300  FUN_01041300  size=297  [run]
void FUN_01041300(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *local_10;
  undefined4 local_c;
  char local_5;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"useKdTree");
  iVar1 = (**(code **)(*local_10 + 0x30))(local_c);
  local_5 = iVar1 != 0;
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"useMultipleTree");
  (**(code **)(*local_10 + 0x30))(local_c);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"useHybridBroadphase");
  iVar1 = (**(code **)(*local_10 + 0x30))(local_c);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"standaloneBroadphase");
  iVar2 = (**(code **)(*local_10 + 0x30))(local_c);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"broadPhaseType");
  (**(code **)(*local_10 + 0x44))(local_c,0);
  if (iVar1 == 0) {
    if (local_5 != '\0') {
      (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"broadPhaseType");
      (**(code **)(*local_10 + 0x44))(local_c,3);
    }
    return;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"broadPhaseType");
  if (iVar2 != 0) {
    (**(code **)(*local_10 + 0x44))(local_c,1);
    return;
  }
  (**(code **)(*local_10 + 0x44))(local_c,2);
  return;
}

// 01041430  FUN_01041430  size=216  [run]
void FUN_01041430(undefined4 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,&DAT_01662d64);
  uVar1 = (**(code **)(*local_c + 0x30))(local_8);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"materialIndexStridingType");
  uVar2 = (**(code **)(*local_c + 0x30))(local_8);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"numMaterials");
  sVar3 = (**(code **)(*local_c + 0x30))(local_8);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"typeAndFlags");
  (**(code **)(*local_c + 0x44))(local_8,(sVar3 * 4 | uVar2 & 3) * 2 | uVar1 & 1);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"shapeInfo");
  (**(code **)(*local_c + 0x44))(local_8,0);
  return;
}

// 01041510  FUN_01041510  size=69  [run]
void FUN_01041510(undefined4 *param_1)

{
  undefined1 local_14 [8];
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(local_14,"oldPhysicsShape");
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"physicsShape");
  (**(code **)(*local_c + 0x60))(local_8,local_14);
  return;
}

// 01041560  FUN_01041560  size=86  [run]
void FUN_01041560(undefined4 *param_1)

{
  int iVar1;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"broadPhaseType");
  iVar1 = (**(code **)(*local_c + 0x30))(local_8);
  if (iVar1 == 3) {
    (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"broadPhaseType");
    (**(code **)(*local_c + 0x44))(local_8,2);
  }
  return;
}

// 010415C0  FUN_010415c0  size=128  [run]
void FUN_010415c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"materials");
  iVar1 = (**(code **)(*local_c + 0x28))(local_8,extraout_ECX);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"int_materials",local_8,iVar1);
  iVar1 = (**(code **)(*local_14 + 0x28))(local_10,extraout_ECX_00);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  FUN_01040b20(local_10,iVar1);
  return;
}

// 01041640  FUN_01041640  size=128  [run]
void FUN_01041640(undefined4 *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"materials");
  iVar1 = (**(code **)(*local_c + 0x28))(local_8,extraout_ECX);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"int_materials",local_8,iVar1);
  iVar1 = (**(code **)(*local_14 + 0x28))(local_10,extraout_ECX_00);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  FUN_01040b20(local_10,iVar1);
  return;
}

// 010416C0  FUN_010416c0  size=232  [run]
void FUN_010416c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_contactShapeKey");
  uVar2 = (**(code **)(*local_c + 0x30))(local_8);
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"contactShapeKey");
  piVar3 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  (**(code **)(*piVar3 + 0x50))(0,uVar2);
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  iVar4 = 1;
  do {
    (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"contactShapeKey");
    piVar3 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
    if (piVar3 != (int *)0x0) {
      *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
      piVar3[2] = piVar3[2] + 1;
    }
    (**(code **)(*piVar3 + 0x50))(iVar4,0xffffffff);
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar3)(1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return;
}

// 01041A90  FUN_01041a90  size=539  [run]
void FUN_01041a90(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_18,"rotatedVertices");
  piVar2 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  local_10 = piVar2;
  (**(code **)(*(int *)*param_1 + 0xc))(&local_20,"rotatedVerticesNew");
  piVar3 = (int *)(**(code **)(*local_20 + 0x28))(local_1c);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  local_c = piVar3;
  local_8 = (**(code **)(*piVar2 + 0x14))();
  (**(code **)(*piVar3 + 0x10))(local_8);
  param_1 = (undefined4 *)0x0;
  if (0 < local_8) {
    do {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (piVar2 != (int *)0x0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
        piVar2[2] = piVar2[2] + 1;
      }
      piVar3 = (int *)(**(code **)(*piVar3 + 0x5c))(param_1);
      if (piVar3 != (int *)0x0) {
        *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
        piVar3[2] = piVar3[2] + 1;
      }
      (**(code **)(*piVar3 + 0xc))(&local_28,"vertices");
      piVar4 = (int *)(**(code **)(*local_28 + 0x28))(local_24);
      if (piVar4 != (int *)0x0) {
        *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
        piVar4[2] = piVar4[2] + 1;
      }
      (**(code **)(*piVar2 + 0xc))(&local_30,&DAT_01662d3c);
      uVar5 = (**(code **)(*local_30 + 0x38))(local_2c,4);
      (**(code **)(*piVar4 + 0x30))(0,uVar5);
      (**(code **)(*piVar2 + 0xc))(&local_38,&DAT_01662d38);
      uVar5 = (**(code **)(*local_38 + 0x38))(local_34,4);
      (**(code **)(*piVar4 + 0x30))(1,uVar5);
      (**(code **)(*piVar2 + 0xc))(&local_40,&DAT_01662d34);
      uVar5 = (**(code **)(*local_40 + 0x38))(local_3c,4);
      (**(code **)(*piVar4 + 0x30))(2,uVar5);
      *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
      piVar1 = piVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar4)(1);
      }
      *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
      piVar4 = piVar3 + 2;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*piVar3)(1);
      }
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
      piVar3 = piVar2 + 2;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*piVar2)(1);
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
      piVar3 = local_c;
      piVar2 = local_10;
    } while ((int)param_1 < local_8);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar4 = piVar3 + 2;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01041CB0  FUN_01041cb0  size=531  [run]
void FUN_01041cb0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"old_chunks");
  piVar2 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_1c,"chunks");
  piVar3 = (int *)(**(code **)(*local_1c + 0x28))(local_18);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_c = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  local_8 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(local_8);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      (**(code **)(*piVar3 + 0x60))(local_8,puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_c);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_1c,"old_convexPieces");
  piVar2 = (int *)(**(code **)(*local_1c + 0x28))(local_18);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"convexPieces");
  piVar3 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_c = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      (**(code **)(*piVar3 + 0x60))(param_1,puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < local_c);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01041ED0  FUN_01041ed0  size=275  [run]
void FUN_01041ed0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"old_shapesSubparts");
  piVar2 = (int *)(**(code **)(*local_10 + 0x28))(local_c);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_18,"shapesSubparts");
  piVar3 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_8 = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      (**(code **)(*piVar3 + 0x60))(param_1,puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < local_8);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01042310  FUN_01042310  size=15140  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01042310(void)

{
  if ((DAT_02098e58 & 1) == 0) {
    DAT_02098e58 = DAT_02098e58 | 1;
    _DAT_01b1b860 = &DAT_018e9ca0;
  }
  if ((DAT_02098e58 & 2) == 0) {
    DAT_02098e58 = DAT_02098e58 | 2;
    _DAT_02098e40 = 0;
    _DAT_02098e44 = "hkpStorageExtendedMeshShapeMaterial";
    _DAT_02098e48 = 0xffffffff;
    _DAT_02098e4c = 0;
    _DAT_02098e50 = &DAT_017c96c0;
    _DAT_02098e54 = 6;
  }
  FUN_010dca80(&DAT_02098e40);
  if ((DAT_02098e58 & 4) == 0) {
    DAT_02098e58 = DAT_02098e58 | 4;
    _DAT_02098e28 = 0;
    _DAT_02098e2c = "hkpFirstPersonGun";
    _DAT_02098e30 = 0xffffffff;
    _DAT_02098e34 = 0;
    _DAT_02098e38 = &DAT_017c9690;
    _DAT_02098e3c = 5;
  }
  FUN_010dca80(&DAT_02098e28);
  if ((DAT_02098e58 & 8) == 0) {
    DAT_02098e58 = DAT_02098e58 | 8;
    _DAT_02098e10 = 0;
    _DAT_02098e14 = "hkpBallGun";
    _DAT_02098e18 = 0xffffffff;
    _DAT_02098e1c = 0;
    _DAT_02098e20 = &DAT_017c9638;
    _DAT_02098e24 = 10;
  }
  FUN_010dca80(&DAT_02098e10);
  if ((DAT_02098e58 & 0x10) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x10;
    _DAT_02098df8 = 0;
    _DAT_02098dfc = "hkpGravityGun";
    _DAT_02098e00 = 0xffffffff;
    _DAT_02098e04 = 0;
    _DAT_02098e08 = &DAT_017c95d8;
    _DAT_02098e0c = 0xb;
  }
  FUN_010dca80(&DAT_02098df8);
  if ((DAT_02098e58 & 0x20) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x20;
    _DAT_02098de0 = 0;
    _DAT_02098de4 = "hkpProjectileGun";
    _DAT_02098de8 = 0xffffffff;
    _DAT_02098dec = 0;
    _DAT_02098df0 = &DAT_017c95a0;
    _DAT_02098df4 = 6;
  }
  FUN_010dca80(&DAT_02098de0);
  if ((DAT_02098e58 & 0x40) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x40;
    _DAT_02098dc8 = 0;
    _DAT_02098dcc = "hkpMountedBallGun";
    _DAT_02098dd0 = 0xffffffff;
    _DAT_02098dd4 = 0;
    _DAT_02098dd8 = &DAT_017c9568;
    _DAT_02098ddc = 6;
  }
  FUN_010dca80(&DAT_02098dc8);
  if ((DAT_02098e58 & 0x80) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x80;
    _DAT_02098db0 = 0;
    _DAT_02098db4 = "hkpShapeRayBundleCastInput";
    _DAT_02098db8 = 0xffffffff;
    _DAT_02098dbc = 0;
    _DAT_02098dc0 = &DAT_017c9538;
    _DAT_02098dc4 = 5;
  }
  FUN_010dca80(&DAT_02098db0);
  if ((DAT_02098e58 & 0x100) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x100;
    _DAT_02098d98 = "hkpExtendedMeshShape";
    _DAT_02098d9c = "hkpExtendedMeshShape";
    _DAT_02098da0 = 0;
    _DAT_02098da4 = 1;
    _DAT_02098da8 = &DAT_017c9528;
    _DAT_02098dac = 1;
  }
  FUN_010dca80(&DAT_02098d98);
  if ((DAT_02098e58 & 0x200) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x200;
    _DAT_02098d80 = "hkpExtendedMeshShapeTrianglesSubpart";
    _DAT_02098d84 = "hkpExtendedMeshShapeTrianglesSubpart";
    _DAT_02098d88 = 0;
    _DAT_02098d8c = 1;
    _DAT_02098d90 = &DAT_017c9518;
    _DAT_02098d94 = 1;
  }
  FUN_010dca80(&DAT_02098d80);
  if ((DAT_02098e58 & 0x400) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x400;
    _DAT_02098d68 = "hkpConstraintInstance";
    _DAT_02098d6c = "hkpConstraintInstance";
    _DAT_02098d70 = 0;
    _DAT_02098d74 = 1;
    _DAT_02098d78 = &DAT_017c9500;
    _DAT_02098d7c = 2;
  }
  FUN_010dca80(&DAT_02098d68);
  if ((DAT_02098e58 & 0x800) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x800;
    _DAT_02098d50 = "hkpStorageExtendedMeshShapeShapeSubpartStorage";
    _DAT_02098d54 = "hkpStorageExtendedMeshShapeShapeSubpartStorage";
    _DAT_02098d58 = 0;
    _DAT_02098d5c = 1;
    _DAT_02098d60 = &DAT_017c94c0;
    _DAT_02098d64 = 7;
  }
  FUN_010dca80(&DAT_02098d50);
  if ((DAT_02098e58 & 0x1000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x1000;
    _DAT_02098d38 = "hkpStorageExtendedMeshShapeMeshSubpartStorage";
    _DAT_02098d3c = "hkpStorageExtendedMeshShapeMeshSubpartStorage";
    _DAT_02098d40 = 0;
    _DAT_02098d44 = 1;
    _DAT_02098d48 = &DAT_017c9480;
    _DAT_02098d4c = 7;
  }
  FUN_010dca80(&DAT_02098d38);
  if ((DAT_02098e58 & 0x2000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x2000;
    _DAT_02098d20 = "hkpWorldCinfo";
    _DAT_02098d24 = "hkpWorldCinfo";
    _DAT_02098d28 = 0;
    _DAT_02098d2c = 1;
    _DAT_02098d30 = &DAT_017c9468;
    _DAT_02098d34 = 2;
  }
  FUN_010dca80(&DAT_02098d20);
  if ((DAT_02098e58 & 0x4000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x4000;
    _DAT_02098d08 = "hkpMotion";
    _DAT_02098d0c = "hkpMotion";
    _DAT_02098d10 = 0;
    _DAT_02098d14 = 1;
    _DAT_02098d18 = &DAT_017c9420;
    _DAT_02098d1c = 8;
  }
  FUN_010dca80(&DAT_02098d08);
  if ((DAT_02098e58 & 0x8000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x8000;
    _DAT_02098cf0 = "hkpEntity";
    _DAT_02098cf4 = "hkpEntity";
    _DAT_02098cf8 = 0;
    _DAT_02098cfc = 1;
    _DAT_02098d00 = &DAT_017c93e0;
    _DAT_02098d04 = 7;
  }
  FUN_010dca80(&DAT_02098cf0);
  if ((DAT_02098e58 & 0x10000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x10000;
    _DAT_02098cd8 = "hkpPairwiseCollisionFilterCollisionPair";
    _DAT_02098cdc = 0;
    _DAT_02098ce0 = 0;
    _DAT_02098ce4 = 0xffffffff;
    _DAT_02098ce8 = &DAT_017c93a8;
    _DAT_02098cec = 6;
  }
  FUN_010dca80(&DAT_02098cd8);
  if ((DAT_02098e58 & 0x20000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x20000;
    _DAT_02098cc0 = "hkpPairwiseCollisionFilter";
    _DAT_02098cc4 = 0;
    _DAT_02098cc8 = 0;
    _DAT_02098ccc = 0xffffffff;
    _DAT_02098cd0 = &DAT_017c9370;
    _DAT_02098cd4 = 6;
  }
  FUN_010dca80(&DAT_02098cc0);
  if ((DAT_02098e58 & 0x40000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x40000;
    _DAT_02098ca8 = 0;
    _DAT_02098cac = "hkpCenterOfMassChangerModifierConstraintAtom";
    _DAT_02098cb0 = 0xffffffff;
    _DAT_02098cb4 = 0;
    _DAT_02098cb8 = &DAT_017c9340;
    _DAT_02098cbc = 5;
  }
  FUN_010dca80(&DAT_02098ca8);
  if ((DAT_02098e58 & 0x80000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x80000;
    _DAT_02098c90 = "hkpMassChangerModifierConstraintAtom";
    _DAT_02098c94 = "hkpMassChangerModifierConstraintAtom";
    _DAT_02098c98 = 0;
    _DAT_02098c9c = 1;
    _DAT_02098ca0 = &DAT_017c9300;
    _DAT_02098ca4 = 7;
  }
  FUN_010dca80(&DAT_02098c90);
  if ((DAT_02098e58 & 0x100000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x100000;
    _DAT_02098c78 = "hkpVehicleInstanceWheelInfo";
    _DAT_02098c7c = "hkpVehicleInstanceWheelInfo";
    _DAT_02098c80 = 0;
    _DAT_02098c84 = 1;
    _DAT_02098c88 = &DAT_017c92d8;
    _DAT_02098c8c = 4;
  }
  FUN_010dca80(&DAT_02098c78);
  if ((DAT_02098e58 & 0x200000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x200000;
    _DAT_02098c60 = "hkpWorldCinfo";
    _DAT_02098c64 = "hkpWorldCinfo";
    _DAT_02098c68 = 1;
    _DAT_02098c6c = 2;
    _DAT_02098c70 = &DAT_017c92b0;
    _DAT_02098c74 = 4;
  }
  FUN_010dca80(&DAT_02098c60);
  if ((DAT_02098e58 & 0x400000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x400000;
    _DAT_02098c48 = 0;
    _DAT_02098c4c = "hkpConstraintInstanceSmallArraySerializeOverrideType";
    _DAT_02098c50 = 0xffffffff;
    _DAT_02098c54 = 0;
    _DAT_02098c58 = &DAT_017c9290;
    _DAT_02098c5c = 3;
  }
  FUN_010dca80(&DAT_02098c48);
  if ((DAT_02098e58 & 0x800000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x800000;
    _DAT_02098c30 = "hkpBallSocketConstraintAtom";
    _DAT_02098c34 = "hkpBallSocketConstraintAtom";
    _DAT_02098c38 = 0;
    _DAT_02098c3c = 1;
    _DAT_02098c40 = &DAT_017c9280;
    _DAT_02098c44 = 1;
  }
  FUN_010dca80(&DAT_02098c30);
  if ((DAT_02098e58 & 0x1000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x1000000;
    _DAT_02098c18 = 0;
    _DAT_02098c1c = "hkpBreakableBody";
    _DAT_02098c20 = 0xffffffff;
    _DAT_02098c24 = 0;
    _DAT_02098c28 = &DAT_017c9260;
    _DAT_02098c2c = 3;
  }
  FUN_010dca80(&DAT_02098c18);
  if ((DAT_02098e58 & 0x2000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x2000000;
    _DAT_02098c00 = "hkpStorageExtendedMeshShapeMeshSubpartStorage";
    _DAT_02098c04 = "hkpStorageExtendedMeshShapeMeshSubpartStorage";
    _DAT_02098c08 = 1;
    _DAT_02098c0c = 2;
    _DAT_02098c10 = &DAT_017c9250;
    _DAT_02098c14 = 1;
  }
  FUN_010dca80(&DAT_02098c00);
  if ((DAT_02098e58 & 0x4000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x4000000;
    _DAT_02098be8 = "hkpExtendedMeshShapeTrianglesSubpart";
    _DAT_02098bec = "hkpExtendedMeshShapeTrianglesSubpart";
    _DAT_02098bf0 = 1;
    _DAT_02098bf4 = 2;
    _DAT_02098bf8 = &DAT_017c9240;
    _DAT_02098bfc = 1;
  }
  FUN_010dca80(&DAT_02098be8);
  if ((DAT_02098e58 & 0x8000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x8000000;
    _DAT_02098bd0 = "hkpStorageExtendedMeshShapeMaterial";
    _DAT_02098bd4 = "hkpStorageExtendedMeshShapeMaterial";
    _DAT_02098bd8 = 0;
    _DAT_02098bdc = 1;
    _DAT_02098be0 = &DAT_017c91f8;
    _DAT_02098be4 = 8;
  }
  FUN_010dca80(&DAT_02098bd0);
  if ((DAT_02098e58 & 0x10000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x10000000;
    _DAT_02098bb8 = "hkpMotion";
    _DAT_02098bbc = "hkpMotion";
    _DAT_02098bc0 = 1;
    _DAT_02098bc4 = 2;
    _DAT_02098bc8 = &DAT_017c91c8;
    _DAT_02098bcc = 5;
  }
  FUN_010dca80(&DAT_02098bb8);
  if ((DAT_02098e58 & 0x20000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x20000000;
    _DAT_02098ba0 = "hkpSpatialRigidBodyDeactivatorSample";
    _DAT_02098ba4 = 0;
    _DAT_02098ba8 = 0;
    _DAT_02098bac = 0xffffffff;
    _DAT_02098bb0 = &DAT_017c91b0;
    _DAT_02098bb4 = 2;
  }
  FUN_010dca80(&DAT_02098ba0);
  if ((DAT_02098e58 & 0x40000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x40000000;
    _DAT_02098b88 = "hkpSpatialRigidBodyDeactivator";
    _DAT_02098b8c = 0;
    _DAT_02098b90 = 0;
    _DAT_02098b94 = 0xffffffff;
    _DAT_02098b98 = &DAT_017c9140;
    _DAT_02098b9c = 0xd;
  }
  FUN_010dca80(&DAT_02098b88);
  if ((DAT_02098e58 & 0x80000000) == 0) {
    DAT_02098e58 = DAT_02098e58 | 0x80000000;
    _DAT_02098b70 = "hkpRigidBodyDeactivator";
    _DAT_02098b74 = 0;
    _DAT_02098b78 = 0;
    _DAT_02098b7c = 0xffffffff;
    _DAT_02098b80 = &DAT_017c9114;
    _DAT_02098b84 = 4;
  }
  FUN_010dca80(&DAT_02098b70);
  if ((_DAT_02098b6c & 1) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 1;
    _DAT_02098b54 = "hkpFakeRigidBodyDeactivator";
    _DAT_02098b58 = 0;
    _DAT_02098b5c = 0;
    _DAT_02098b60 = 0xffffffff;
    _DAT_02098b64 = &DAT_017c90e4;
    _DAT_02098b68 = 5;
  }
  FUN_010dca80(&DAT_02098b54);
  if ((_DAT_02098b6c & 2) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 2;
    _DAT_02098b3c = "hkpEntityDeactivator";
    _DAT_02098b40 = 0;
    _DAT_02098b44 = 0;
    _DAT_02098b48 = 0xffffffff;
    _DAT_02098b4c = &DAT_017c90c4;
    _DAT_02098b50 = 3;
  }
  FUN_010dca80(&DAT_02098b3c);
  if ((_DAT_02098b6c & 4) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 4;
    _DAT_02098b24 = "hkpConvexVerticesShape";
    _DAT_02098b28 = "hkpConvexVerticesShape";
    _DAT_02098b2c = 0;
    _DAT_02098b30 = 1;
    _DAT_02098b34 = &DAT_017c90a4;
    _DAT_02098b38 = 3;
  }
  FUN_010dca80(&DAT_02098b24);
  if ((_DAT_02098b6c & 8) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 8;
    _DAT_02098b0c = 0;
    _DAT_02098b10 = "hkpConvexDecompositionShapeConfig";
    _DAT_02098b14 = 0xffffffff;
    _DAT_02098b18 = 0;
    _DAT_02098b1c = &DAT_017c9050;
    _DAT_02098b20 = 5;
  }
  FUN_010dca80(&DAT_02098b0c);
  if ((_DAT_02098b6c & 0x10) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x10;
    _DAT_02098af4 = 0;
    _DAT_02098af8 = "hkpConvexDecompositionConfiguration2";
    _DAT_02098afc = 0xffffffff;
    _DAT_02098b00 = 1;
    _DAT_02098b04 = &DAT_017c8f98;
    _DAT_02098b08 = 0x11;
  }
  FUN_010dca80(&DAT_02098af4);
  if ((_DAT_02098b6c & 0x20) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x20;
    _DAT_02098adc = "hkpWorldCinfo";
    _DAT_02098ae0 = "hkpWorldCinfo";
    _DAT_02098ae4 = 2;
    _DAT_02098ae8 = 3;
    _DAT_02098aec = &DAT_017c8f88;
    _DAT_02098af0 = 1;
  }
  FUN_010dca80(&DAT_02098adc);
  if ((_DAT_02098b6c & 0x40) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x40;
    _DAT_02098ac4 = 0;
    _DAT_02098ac8 = "hkpVehicleLinearCastWheelCollide";
    _DAT_02098acc = 0xffffffff;
    _DAT_02098ad0 = 0;
    _DAT_02098ad4 = &DAT_017c8f28;
    _DAT_02098ad8 = 0xb;
  }
  FUN_010dca80(&DAT_02098ac4);
  if ((_DAT_02098b6c & 0x80) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x80;
    _DAT_02098aac = "hkpRejectRayChassisListener";
    _DAT_02098ab0 = "hkpRejectChassisListener";
    _DAT_02098ab4 = 0;
    _DAT_02098ab8 = 1;
    _DAT_02098abc = &DAT_017c8f08;
    _DAT_02098ac0 = 3;
  }
  FUN_010dca80(&DAT_02098aac);
  if ((_DAT_02098b6c & 0x100) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x100;
    _DAT_02098a94 = 0;
    _DAT_02098a98 = "hkpVehicleRayCastBatchingManager";
    _DAT_02098a9c = 0xffffffff;
    _DAT_02098aa0 = 0;
    _DAT_02098aa4 = &DAT_017c8ed8;
    _DAT_02098aa8 = 5;
  }
  FUN_010dca80(&DAT_02098a94);
  if ((_DAT_02098b6c & 0x200) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x200;
    _DAT_02098a7c = 0;
    _DAT_02098a80 = "hkpVehicleManager";
    _DAT_02098a84 = 0xffffffff;
    _DAT_02098a88 = 0;
    _DAT_02098a8c = &DAT_017c8e98;
    _DAT_02098a90 = 7;
  }
  FUN_010dca80(&DAT_02098a7c);
  if ((_DAT_02098b6c & 0x400) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x400;
    _DAT_02098a64 = "hkpVehicleRaycastWheelCollide";
    _DAT_02098a68 = "hkpVehicleRayCastWheelCollide";
    _DAT_02098a6c = 0;
    _DAT_02098a70 = 1;
    _DAT_02098a74 = &DAT_017c8e58;
    _DAT_02098a78 = 7;
  }
  FUN_010dca80(&DAT_02098a64);
  if ((_DAT_02098b6c & 0x800) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x800;
    _DAT_02098a4c = 0;
    _DAT_02098a50 = "hkpVehicleLinearCastBatchingManager";
    _DAT_02098a54 = 0xffffffff;
    _DAT_02098a58 = 0;
    _DAT_02098a5c = &DAT_017c8e28;
    _DAT_02098a60 = 5;
  }
  FUN_010dca80(&DAT_02098a4c);
  if ((_DAT_02098b6c & 0x1000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x1000;
    _DAT_02098a34 = 0;
    _DAT_02098a38 = "hkpVehicleCastBatchingManager";
    _DAT_02098a3c = 0xffffffff;
    _DAT_02098a40 = 0;
    _DAT_02098a44 = &DAT_017c8df8;
    _DAT_02098a48 = 5;
  }
  FUN_010dca80(&DAT_02098a34);
  if ((_DAT_02098b6c & 0x2000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x2000;
    _DAT_02098a1c = 0;
    _DAT_02098a20 = "hkpVehicleLinearCastWheelCollideWheelState";
    _DAT_02098a24 = 0xffffffff;
    _DAT_02098a28 = 0;
    _DAT_02098a2c = &DAT_017c8da0;
    _DAT_02098a30 = 10;
  }
  FUN_010dca80(&DAT_02098a1c);
  if ((_DAT_02098b6c & 0x4000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x4000;
    _DAT_02098a04 = "hkpVehicleData";
    _DAT_02098a08 = "hkpVehicleData";
    _DAT_02098a0c = 0;
    _DAT_02098a10 = 1;
    _DAT_02098a14 = &DAT_017c8d90;
    _DAT_02098a18 = 1;
  }
  FUN_010dca80(&DAT_02098a04);
  if ((_DAT_02098b6c & 0x8000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x8000;
    _DAT_020989ec = "hkpConvexDecompositionShapeConfig";
    _DAT_020989f0 = "hkpConvexDecompositionShapeConfig";
    _DAT_020989f4 = 0;
    _DAT_020989f8 = 1;
    _DAT_020989fc = &DAT_017c8d80;
    _DAT_02098a00 = 1;
  }
  FUN_010dca80(&DAT_020989ec);
  if ((_DAT_02098b6c & 0x10000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x10000;
    _DAT_020989d4 = "hkpConvexDecompositionShapeConfig";
    _DAT_020989d8 = "hkpConvexDecompositionShapeConfig";
    _DAT_020989dc = 1;
    _DAT_020989e0 = 2;
    _DAT_020989e4 = &DAT_017c8d70;
    _DAT_020989e8 = 1;
  }
  FUN_010dca80(&DAT_020989d4);
  if ((_DAT_02098b6c & 0x20000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x20000;
    _DAT_020989bc = "hkpStabilizedSphereMotion";
    _DAT_020989c0 = 0;
    _DAT_020989c4 = 0;
    _DAT_020989c8 = 0xffffffff;
    _DAT_020989cc = &DAT_017c8d40;
    _DAT_020989d0 = 5;
  }
  FUN_010dca80(&DAT_020989bc);
  if ((_DAT_02098b6c & 0x40000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x40000;
    _DAT_020989a4 = "hkpStabilizedBoxMotion";
    _DAT_020989a8 = 0;
    _DAT_020989ac = 0;
    _DAT_020989b0 = 0xffffffff;
    _DAT_020989b4 = &DAT_017c8d10;
    _DAT_020989b8 = 5;
  }
  FUN_010dca80(&DAT_020989a4);
  if ((_DAT_02098b6c & 0x80000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x80000;
    _DAT_0209898c = "hkpMotion";
    _DAT_02098990 = "hkpMotion";
    _DAT_02098994 = 2;
    _DAT_02098998 = 3;
    _DAT_0209899c = &DAT_017c8d00;
    _DAT_020989a0 = 1;
  }
  FUN_010dca80(&DAT_0209898c);
  if ((_DAT_02098b6c & 0x100000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x100000;
    _DAT_02098974 = "hkpConvexDecompositionShapeConfig";
    _DAT_02098978 = 0;
    _DAT_0209897c = 2;
    _DAT_02098980 = 0xffffffff;
    _DAT_02098984 = &DAT_017c8cd0;
    _DAT_02098988 = 5;
  }
  FUN_010dca80(&DAT_02098974);
  if ((_DAT_02098b6c & 0x200000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x200000;
    _DAT_0209895c = "hkpConvexDecompositionConfiguration2";
    _DAT_02098960 = 0;
    _DAT_02098964 = 1;
    _DAT_02098968 = 0xffffffff;
    _DAT_0209896c = &DAT_017c8c40;
    _DAT_02098970 = 0x11;
  }
  FUN_010dca80(&DAT_0209895c);
  if ((_DAT_02098b6c & 0x400000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x400000;
    _DAT_02098944 = "hkpExtendedMeshShape";
    _DAT_02098948 = "hkpExtendedMeshShape";
    _DAT_0209894c = 1;
    _DAT_02098950 = 2;
    _DAT_02098954 = &DAT_017c8c30;
    _DAT_02098958 = 1;
  }
  FUN_010dca80(&DAT_02098944);
  if ((_DAT_02098b6c & 0x800000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x800000;
    _DAT_0209892c = 0;
    _DAT_02098930 = "hkpCompressedMeshShapeBigTriangle";
    _DAT_02098934 = 0xffffffff;
    _DAT_02098938 = 0;
    _DAT_0209893c = &DAT_017c8c00;
    _DAT_02098940 = 5;
  }
  FUN_010dca80(&DAT_0209892c);
  if ((_DAT_02098b6c & 0x1000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x1000000;
    _DAT_02098914 = 0;
    _DAT_02098918 = "hkpCompressedMeshShapeChunk";
    _DAT_0209891c = 0xffffffff;
    _DAT_02098920 = 0;
    _DAT_02098924 = &DAT_017c8bd0;
    _DAT_02098928 = 5;
  }
  FUN_010dca80(&DAT_02098914);
  if ((_DAT_02098b6c & 0x2000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x2000000;
    _DAT_020988fc = 0;
    _DAT_02098900 = "hkpCompressedMeshShape";
    _DAT_02098904 = 0xffffffff;
    _DAT_02098908 = 0;
    _DAT_0209890c = &DAT_017c8b50;
    _DAT_02098910 = 0xf;
  }
  FUN_010dca80(&DAT_020988fc);
  if ((_DAT_02098b6c & 0x4000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x4000000;
    _DAT_020988e4 = "hkpCompressedMeshShape";
    _DAT_020988e8 = "hkpCompressedMeshShape";
    _DAT_020988ec = 0;
    _DAT_020988f0 = 1;
    _DAT_020988f4 = &DAT_017c8b3c;
    _DAT_020988f8 = 1;
  }
  FUN_010dca80(&DAT_020988e4);
  if ((_DAT_02098b6c & 0x8000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x8000000;
    _DAT_020988cc = "hkpCompressedMeshShapeBigTriangle";
    _DAT_020988d0 = "hkpCompressedMeshShapeBigTriangle";
    _DAT_020988d4 = 0;
    _DAT_020988d8 = 1;
    _DAT_020988dc = &DAT_017c8b24;
    _DAT_020988e0 = 2;
  }
  FUN_010dca80(&DAT_020988cc);
  if ((_DAT_02098b6c & 0x10000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x10000000;
    _DAT_020988b4 = "hkpCompressedMeshShape";
    _DAT_020988b8 = "hkpCompressedMeshShape";
    _DAT_020988bc = 1;
    _DAT_020988c0 = 2;
    _DAT_020988c4 = &DAT_017c8aec;
    _DAT_020988c8 = 6;
  }
  FUN_010dca80(&DAT_020988b4);
  if ((_DAT_02098b6c & 0x20000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x20000000;
    _DAT_0209889c = "hkpCompressedMeshShapeChunk";
    _DAT_020988a0 = "hkpCompressedMeshShapeChunk";
    _DAT_020988a4 = 0;
    _DAT_020988a8 = 1;
    _DAT_020988ac = &DAT_017c8adc;
    _DAT_020988b0 = 1;
  }
  FUN_010dca80(&DAT_0209889c);
  if ((_DAT_02098b6c & 0x40000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x40000000;
    _DAT_02098884 = "hkpCompressedMeshShape";
    _DAT_02098888 = "hkpCompressedMeshShape";
    _DAT_0209888c = 2;
    _DAT_02098890 = 3;
    _DAT_02098894 = &DAT_017c8aa4;
    _DAT_02098898 = 6;
  }
  FUN_010dca80(&DAT_02098884);
  if ((_DAT_02098b6c & 0x80000000) == 0) {
    _DAT_02098b6c = _DAT_02098b6c | 0x80000000;
    _DAT_0209886c = "hkpCompressedMeshShapeChunk";
    _DAT_02098870 = "hkpCompressedMeshShapeChunk";
    _DAT_02098874 = 1;
    _DAT_02098878 = 2;
    _DAT_0209887c = &DAT_017c8a8c;
    _DAT_02098880 = 2;
  }
  FUN_010dca80(&DAT_0209886c);
  if ((_DAT_02098868 & 1) == 0) {
    _DAT_02098868 = _DAT_02098868 | 1;
    _DAT_02098850 = "hkpCompressedMeshShape";
    _DAT_02098854 = "hkpCompressedMeshShape";
    _DAT_02098858 = 3;
    _DAT_0209885c = 4;
    _DAT_02098860 = &DAT_017c8a7c;
    _DAT_02098864 = 1;
  }
  FUN_010dca80(&DAT_02098850);
  if ((_DAT_02098868 & 2) == 0) {
    _DAT_02098868 = _DAT_02098868 | 2;
    _DAT_02098838 = "hkpCompressedMeshShapeChunk";
    _DAT_0209883c = "hkpCompressedMeshShapeChunk";
    _DAT_02098840 = 2;
    _DAT_02098844 = 3;
    _DAT_02098848 = &DAT_017c8a64;
    _DAT_0209884c = 2;
  }
  FUN_010dca80(&DAT_02098838);
  if ((_DAT_02098868 & 4) == 0) {
    _DAT_02098868 = _DAT_02098868 | 4;
    _DAT_02098820 = "hkpEntity";
    _DAT_02098824 = "hkpEntity";
    _DAT_02098828 = 1;
    _DAT_0209882c = 2;
    _DAT_02098830 = &DAT_017c8a44;
    _DAT_02098834 = 3;
  }
  FUN_010dca80(&DAT_02098820);
  if ((_DAT_02098868 & 8) == 0) {
    _DAT_02098868 = _DAT_02098868 | 8;
    _DAT_02098808 = 0;
    _DAT_0209880c = "hkpCompressedMeshShapeConvexPiece";
    _DAT_02098810 = 0xffffffff;
    _DAT_02098814 = 0;
    _DAT_02098818 = &DAT_017c8a0c;
    _DAT_0209881c = 6;
  }
  FUN_010dca80(&DAT_02098808);
  if ((_DAT_02098868 & 0x10) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x10;
    _DAT_020987f0 = "hkpCompressedMeshShape";
    _DAT_020987f4 = "hkpCompressedMeshShape";
    _DAT_020987f8 = 4;
    _DAT_020987fc = 5;
    _DAT_02098800 = &DAT_017c89f4;
    _DAT_02098804 = 2;
  }
  FUN_010dca80(&DAT_020987f0);
  if ((_DAT_02098868 & 0x20) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x20;
    _DAT_020987d8 = 0;
    _DAT_020987dc = "hkpPolytopeShape";
    _DAT_020987e0 = 0xffffffff;
    _DAT_020987e4 = 0;
    _DAT_020987e8 = &DAT_017c8960;
    _DAT_020987ec = 0xf;
  }
  FUN_010dca80(&DAT_020987d8);
  if ((_DAT_02098868 & 0x40) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x40;
    _DAT_020987c0 = "hkpCompressedMeshShapeConvexPiece";
    _DAT_020987c4 = "hkpCompressedMeshShapeConvexPiece";
    _DAT_020987c8 = 0;
    _DAT_020987cc = 1;
    _DAT_020987d0 = &DAT_017c8944;
    _DAT_020987d4 = 2;
  }
  FUN_010dca80(&DAT_020987c0);
  if ((_DAT_02098868 & 0x80) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x80;
    _DAT_020987a8 = "hkWorldMemoryAvailableWatchDog";
    _DAT_020987ac = "hkWorldMemoryAvailableWatchDog";
    _DAT_020987b0 = 0;
    _DAT_020987b4 = 1;
    _DAT_020987b8 = &DAT_017c8934;
    _DAT_020987bc = 1;
  }
  FUN_010dca80(&DAT_020987a8);
  if ((_DAT_02098868 & 0x100) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x100;
    _DAT_02098790 = 0;
    _DAT_02098794 = "hkpDefaultWorldMemoryWatchDog";
    _DAT_02098798 = 0xffffffff;
    _DAT_0209879c = 0;
    _DAT_020987a0 = &DAT_017c8904;
    _DAT_020987a4 = 5;
  }
  FUN_010dca80(&DAT_02098790);
  if ((_DAT_02098868 & 0x200) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x200;
    _DAT_02098778 = 0;
    _DAT_0209877c = "hkpNamedMeshMaterial";
    _DAT_02098780 = 0xffffffff;
    _DAT_02098784 = 0;
    _DAT_02098788 = &DAT_017c88e4;
    _DAT_0209878c = 3;
  }
  FUN_010dca80(&DAT_02098778);
  if ((_DAT_02098868 & 0x400) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x400;
    _DAT_02098760 = "hkpStorageExtendedMeshShapeMeshSubpartStorage";
    _DAT_02098764 = "hkpStorageExtendedMeshShapeMeshSubpartStorage";
    _DAT_02098768 = 2;
    _DAT_0209876c = 3;
    _DAT_02098770 = &DAT_017c88c4;
    _DAT_02098774 = 3;
  }
  FUN_010dca80(&DAT_02098760);
  if ((_DAT_02098868 & 0x800) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x800;
    _DAT_02098748 = 0;
    _DAT_0209874c = "hkpCompressedPolytopeShape";
    _DAT_02098750 = 0xffffffff;
    _DAT_02098754 = 0;
    _DAT_02098758 = &DAT_017c8810;
    _DAT_0209875c = 0x12;
  }
  FUN_010dca80(&DAT_02098748);
  if ((_DAT_02098868 & 0x1000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x1000;
    _DAT_02098730 = "hkpPolytopeShape";
    _DAT_02098734 = 0;
    _DAT_02098738 = 0;
    _DAT_0209873c = 0xffffffff;
    _DAT_02098740 = &DAT_017c8790;
    _DAT_02098744 = 0xf;
  }
  FUN_010dca80(&DAT_02098730);
  if ((_DAT_02098868 & 0x2000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x2000;
    _DAT_02098718 = "hkpCompressedMeshShape";
    _DAT_0209871c = "hkpCompressedMeshShape";
    _DAT_02098720 = 5;
    _DAT_02098724 = 6;
    _DAT_02098728 = &DAT_017c8758;
    _DAT_0209872c = 6;
  }
  FUN_010dca80(&DAT_02098718);
  if ((_DAT_02098868 & 0x4000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x4000;
    _DAT_02098700 = "hkpCompressedMeshShapeConvexPiece";
    _DAT_02098704 = "hkpCompressedMeshShapeConvexPiece";
    _DAT_02098708 = 1;
    _DAT_0209870c = 2;
    _DAT_02098710 = &DAT_017c8740;
    _DAT_02098714 = 2;
  }
  FUN_010dca80(&DAT_02098700);
  if ((_DAT_02098868 & 0x8000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x8000;
    _DAT_020986e8 = "hkpCompressedMeshShapeChunk";
    _DAT_020986ec = "hkpCompressedMeshShapeChunk";
    _DAT_020986f0 = 3;
    _DAT_020986f4 = 4;
    _DAT_020986f8 = &DAT_017c8728;
    _DAT_020986fc = 2;
  }
  FUN_010dca80(&DAT_020986e8);
  if ((_DAT_02098868 & 0x10000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x10000;
    _DAT_020986d0 = "hkpWorldCinfo";
    _DAT_020986d4 = "hkpWorldCinfo";
    _DAT_020986d8 = 3;
    _DAT_020986dc = 4;
    _DAT_020986e0 = &DAT_017c8718;
    _DAT_020986e4 = 1;
  }
  FUN_010dca80(&DAT_020986d0);
  if ((_DAT_02098868 & 0x20000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x20000;
    _DAT_020986b8 = "hkpConstraintInstanceSmallArraySerializeOverrideType";
    _DAT_020986bc = "hkpConstraintInstanceSmallArraySerializeOverrideType";
    _DAT_020986c0 = 0;
    _DAT_020986c4 = 1;
    _DAT_020986c8 = &DAT_017c8708;
    _DAT_020986cc = 1;
  }
  FUN_010dca80(&DAT_020986b8);
  if ((_DAT_02098868 & 0x40000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x40000;
    _DAT_020986a0 = "hkpEntitySmallArraySerializeOverrideType";
    _DAT_020986a4 = "hkpEntitySmallArraySerializeOverrideType";
    _DAT_020986a8 = 0;
    _DAT_020986ac = 1;
    _DAT_020986b0 = &DAT_017c86f8;
    _DAT_020986b4 = 1;
  }
  FUN_010dca80(&DAT_020986a0);
  if ((_DAT_02098868 & 0x80000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x80000;
    _DAT_02098688 = "hkpDefaultWorldMemoryWatchDog";
    _DAT_0209868c = "hkpDefaultWorldMemoryWatchDog";
    _DAT_02098690 = 0;
    _DAT_02098694 = 1;
    _DAT_02098698 = &DAT_017c86e0;
    _DAT_0209869c = 2;
  }
  FUN_010dca80(&DAT_02098688);
  if ((_DAT_02098868 & 0x100000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x100000;
    _DAT_02098670 = "hkpDisplayBindingData";
    _DAT_02098674 = "hkpDisplayBindingData";
    _DAT_02098678 = 0;
    _DAT_0209867c = 1;
    _DAT_02098680 = &DAT_017c86d0;
    _DAT_02098684 = 1;
  }
  FUN_010dca80(&DAT_02098670);
  if ((_DAT_02098868 & 0x200000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x200000;
    _DAT_02098658 = "hkpPhysicsSystemDisplayBinding";
    _DAT_0209865c = "hkpDisplayBindingDataPhysicsSystem";
    _DAT_02098660 = 0;
    _DAT_02098664 = 1;
    _DAT_02098668 = &DAT_017c86c0;
    _DAT_0209866c = 1;
  }
  FUN_010dca80(&DAT_02098658);
  if ((_DAT_02098868 & 0x400000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x400000;
    _DAT_02098640 = "hkpRigidBodyDisplayBinding";
    _DAT_02098644 = "hkpDisplayBindingDataRigidBody";
    _DAT_02098648 = 0;
    _DAT_0209864c = 1;
    _DAT_02098650 = &DAT_017c86b0;
    _DAT_02098654 = 1;
  }
  FUN_010dca80(&DAT_02098640);
  if ((_DAT_02098868 & 0x800000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x800000;
    _DAT_02098628 = "hkpSimpleShapePhantomCollisionDetail";
    _DAT_0209862c = 0;
    _DAT_02098630 = 0;
    _DAT_02098634 = 0xffffffff;
    _DAT_02098638 = &DAT_017c8690;
    _DAT_0209863c = 3;
  }
  FUN_010dca80(&DAT_02098628);
  if ((_DAT_02098868 & 0x1000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x1000000;
    _DAT_02098610 = "hkpShapeRayCastInput";
    _DAT_02098614 = 0;
    _DAT_02098618 = 0;
    _DAT_0209861c = 0xffffffff;
    _DAT_02098620 = &DAT_017c8660;
    _DAT_02098624 = 5;
  }
  FUN_010dca80(&DAT_02098610);
  if ((_DAT_02098868 & 0x2000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x2000000;
    _DAT_020985f8 = "hkpShapeRayBundleCastInput";
    _DAT_020985fc = 0;
    _DAT_02098600 = 0;
    _DAT_02098604 = 0xffffffff;
    _DAT_02098608 = &DAT_017c8630;
    _DAT_0209860c = 5;
  }
  FUN_010dca80(&DAT_020985f8);
  if ((_DAT_02098868 & 0x4000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x4000000;
    _DAT_020985e0 = "hkpCdBody";
    _DAT_020985e4 = "hkpCdBody";
    _DAT_020985e8 = 0;
    _DAT_020985ec = 1;
    _DAT_020985f0 = &DAT_017c8618;
    _DAT_020985f4 = 2;
  }
  FUN_010dca80(&DAT_020985e0);
  if ((_DAT_02098868 & 0x8000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x8000000;
    _DAT_020985c8 = "hkpWorldCinfo";
    _DAT_020985cc = "hkpWorldCinfo";
    _DAT_020985d0 = 4;
    _DAT_020985d4 = 5;
    _DAT_020985d8 = &DAT_017c8600;
    _DAT_020985dc = 2;
  }
  FUN_010dca80(&DAT_020985c8);
  if ((_DAT_02098868 & 0x10000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x10000000;
    _DAT_020985b0 = "hkpCompressedPolytopeShape";
    _DAT_020985b4 = 0;
    _DAT_020985b8 = 0;
    _DAT_020985bc = 0xffffffff;
    _DAT_020985c0 = &DAT_017c8568;
    _DAT_020985c4 = 0x12;
  }
  FUN_010dca80(&DAT_020985b0);
  if ((_DAT_02098868 & 0x20000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x20000000;
    _DAT_02098598 = "hkpCompressedMeshShapeConvexPiece";
    _DAT_0209859c = "hkpCompressedMeshShapeConvexPiece";
    _DAT_020985a0 = 2;
    _DAT_020985a4 = 3;
    _DAT_020985a8 = &DAT_017c8550;
    _DAT_020985ac = 2;
  }
  FUN_010dca80(&DAT_02098598);
  if ((_DAT_02098868 & 0x40000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x40000000;
    _DAT_02098580 = "hkpConvexVerticesShape";
    _DAT_02098584 = "hkpConvexVerticesShape";
    _DAT_02098588 = 1;
    _DAT_0209858c = 2;
    _DAT_02098590 = &DAT_017c8538;
    _DAT_02098594 = 2;
  }
  FUN_010dca80(&DAT_02098580);
  if ((_DAT_02098868 & 0x80000000) == 0) {
    _DAT_02098868 = _DAT_02098868 | 0x80000000;
    _DAT_02098568 = "hkpWorldCinfo";
    _DAT_0209856c = "hkpWorldCinfo";
    _DAT_02098570 = 5;
    _DAT_02098574 = 6;
    _DAT_02098578 = &DAT_017c8528;
    _DAT_0209857c = 1;
  }
  FUN_010dca80(&DAT_02098568);
  if ((_DAT_02098564 & 1) == 0) {
    _DAT_02098564 = _DAT_02098564 | 1;
    _DAT_0209854c = "hkpWorldCinfo";
    _DAT_02098550 = "hkpWorldCinfo";
    _DAT_02098554 = 6;
    _DAT_02098558 = 7;
    _DAT_0209855c = &DAT_017c8518;
    _DAT_02098560 = 1;
  }
  FUN_010dca80(&DAT_0209854c);
  if ((_DAT_02098564 & 2) == 0) {
    _DAT_02098564 = _DAT_02098564 | 2;
    _DAT_02098534 = "hkpCompressedMeshShape";
    _DAT_02098538 = "hkpCompressedMeshShape";
    _DAT_0209853c = 6;
    _DAT_02098540 = 7;
    _DAT_02098544 = &DAT_017c8500;
    _DAT_02098548 = 2;
  }
  FUN_010dca80(&DAT_02098534);
  if ((_DAT_02098564 & 4) == 0) {
    _DAT_02098564 = _DAT_02098564 | 4;
    _DAT_0209851c = "hkpCompressedMeshShape";
    _DAT_02098520 = "hkpCompressedMeshShape";
    _DAT_02098524 = 7;
    _DAT_02098528 = 8;
    _DAT_0209852c = &DAT_017c84f0;
    _DAT_02098530 = 1;
  }
  FUN_010dca80(&DAT_0209851c);
  if ((_DAT_02098564 & 8) == 0) {
    _DAT_02098564 = _DAT_02098564 | 8;
    _DAT_02098504 = "hkpStorageExtendedMeshShapeShapeSubpartStorage";
    _DAT_02098508 = "hkpStorageExtendedMeshShapeShapeSubpartStorage";
    _DAT_0209850c = 1;
    _DAT_02098510 = 2;
    _DAT_02098514 = &DAT_017c84e0;
    _DAT_02098518 = 1;
  }
  FUN_010dca80(&DAT_02098504);
  if ((_DAT_02098564 & 0x10) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x10;
    _DAT_020984ec = "hkpExtendedMeshShapeShapesSubpart";
    _DAT_020984f0 = "hkpExtendedMeshShapeShapesSubpart";
    _DAT_020984f4 = 0;
    _DAT_020984f8 = 1;
    _DAT_020984fc = &DAT_017c84c8;
    _DAT_02098500 = 2;
  }
  FUN_010dca80(&DAT_020984ec);
  if ((_DAT_02098564 & 0x20) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x20;
    _DAT_020984d4 = "hkpWorldCinfo";
    _DAT_020984d8 = "hkpWorldCinfo";
    _DAT_020984dc = 7;
    _DAT_020984e0 = 8;
    _DAT_020984e4 = &DAT_017c84b8;
    _DAT_020984e8 = 1;
  }
  FUN_010dca80(&DAT_020984d4);
  if ((_DAT_02098564 & 0x40) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x40;
    _DAT_020984bc = 0;
    _DAT_020984c0 = "hkpCharacterRigidBodyCinfo";
    _DAT_020984c4 = 0xffffffff;
    _DAT_020984c8 = 0;
    _DAT_020984cc = &DAT_017c8420;
    _DAT_020984d0 = 0x12;
  }
  FUN_010dca80(&DAT_020984bc);
  if ((_DAT_02098564 & 0x80) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x80;
    _DAT_020984a4 = 0;
    _DAT_020984a8 = "hkpCharacterControllerCinfo";
    _DAT_020984ac = 0xffffffff;
    _DAT_020984b0 = 0;
    _DAT_020984b4 = &DAT_017c8410;
    _DAT_020984b8 = 1;
  }
  FUN_010dca80(&DAT_020984a4);
  if ((_DAT_02098564 & 0x100) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x100;
    _DAT_02098494 = 0xffffffff;
    _DAT_0209848c = 0;
    _DAT_02098490 = "hkpMultithreadedVehicleManager";
    _DAT_02098498 = 0;
    _DAT_0209849c = &DAT_017c83f8;
    _DAT_020984a0 = 2;
  }
  FUN_010dca80(&DAT_0209848c);
  if ((_DAT_02098564 & 0x200) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x200;
    _DAT_02098474 = "hkpCharacterProxyCinfo";
    _DAT_02098478 = "hkpCharacterProxyCinfo";
    _DAT_0209847c = 0;
    _DAT_02098480 = 1;
    _DAT_02098484 = &DAT_017c83e0;
    _DAT_02098488 = 2;
  }
  FUN_010dca80(&DAT_02098474);
  if ((_DAT_02098564 & 0x400) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x400;
    _DAT_0209845c = "hkpConvexVerticesShape";
    _DAT_02098460 = "hkpConvexVerticesShape";
    _DAT_02098464 = 2;
    _DAT_02098468 = 3;
    _DAT_0209846c = &DAT_017c83c8;
    _DAT_02098470 = 2;
  }
  FUN_010dca80(&DAT_0209845c);
  if ((_DAT_02098564 & 0x800) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x800;
    _DAT_02098444 = "hkpCompressedMeshShape";
    _DAT_02098448 = "hkpCompressedMeshShape";
    _DAT_0209844c = 8;
    _DAT_02098450 = 9;
    _DAT_02098454 = &DAT_017c8398;
    _DAT_02098458 = 5;
  }
  FUN_010dca80(&DAT_02098444);
  if ((_DAT_02098564 & 0x1000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x1000;
    _DAT_0209842c = "hkpCompressedMeshShapeBigTriangle";
    _DAT_02098430 = "hkpCompressedMeshShapeBigTriangle";
    _DAT_02098434 = 1;
    _DAT_02098438 = 2;
    _DAT_0209843c = &DAT_017c8388;
    _DAT_02098440 = 1;
  }
  FUN_010dca80(&DAT_0209842c);
  if ((_DAT_02098564 & 0x2000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x2000;
    _DAT_02098414 = "hkpExtendedMeshShapeSubpart";
    _DAT_02098418 = "hkpExtendedMeshShapeSubpart";
    _DAT_0209841c = 0;
    _DAT_02098420 = 1;
    _DAT_02098424 = &DAT_017c8378;
    _DAT_02098428 = 1;
  }
  FUN_010dca80(&DAT_02098414);
  if ((_DAT_02098564 & 0x4000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x4000;
    _DAT_020983fc = "hkpExtendedMeshShapeTrianglesSubpart";
    _DAT_02098400 = "hkpExtendedMeshShapeTrianglesSubpart";
    _DAT_02098404 = 2;
    _DAT_02098408 = 3;
    _DAT_0209840c = &DAT_017c8360;
    _DAT_02098410 = 2;
  }
  FUN_010dca80(&DAT_020983fc);
  if ((_DAT_02098564 & 0x8000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x8000;
    _DAT_020983e4 = "hkpExtendedMeshShape";
    _DAT_020983e8 = "hkpExtendedMeshShape";
    _DAT_020983ec = 2;
    _DAT_020983f0 = 3;
    _DAT_020983f4 = &DAT_017c8340;
    _DAT_020983f8 = 3;
  }
  FUN_010dca80(&DAT_020983e4);
  if ((_DAT_02098564 & 0x10000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x10000;
    _DAT_020983cc = "hkpExtendedMeshShapeSubpart";
    _DAT_020983d0 = "hkpExtendedMeshShapeSubpart";
    _DAT_020983d4 = 1;
    _DAT_020983d8 = 2;
    _DAT_020983dc = &DAT_017c8330;
    _DAT_020983e0 = 1;
  }
  FUN_010dca80(&DAT_020983cc);
  if ((_DAT_02098564 & 0x20000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x20000;
    _DAT_020983b4 = 0;
    _DAT_020983b8 = "hkpRackAndPinionConstraintDataAtoms";
    _DAT_020983bc = 0xffffffff;
    _DAT_020983c0 = 0;
    _DAT_020983c4 = &DAT_017c8300;
    _DAT_020983c8 = 5;
  }
  FUN_010dca80(&DAT_020983b4);
  if ((_DAT_02098564 & 0x40000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x40000;
    _DAT_0209839c = 0;
    _DAT_020983a0 = "hkpRackAndPinionConstraintAtom";
    _DAT_020983a4 = 0xffffffff;
    _DAT_020983a8 = 0;
    _DAT_020983ac = &DAT_017c82c0;
    _DAT_020983b0 = 7;
  }
  FUN_010dca80(&DAT_0209839c);
  if ((_DAT_02098564 & 0x80000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x80000;
    _DAT_02098384 = 0;
    _DAT_02098388 = "hkpRackAndPinionConstraintData";
    _DAT_0209838c = 0xffffffff;
    _DAT_02098390 = 0;
    _DAT_02098394 = &DAT_017c8288;
    _DAT_02098398 = 6;
  }
  FUN_010dca80(&DAT_02098384);
  if ((_DAT_02098564 & 0x100000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x100000;
    _DAT_0209836c = 0;
    _DAT_02098370 = "hkpCogWheelConstraintAtom";
    _DAT_02098374 = 0xffffffff;
    _DAT_02098378 = 0;
    _DAT_0209837c = &DAT_017c8240;
    _DAT_02098380 = 8;
  }
  FUN_010dca80(&DAT_0209836c);
  if ((_DAT_02098564 & 0x200000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x200000;
    _DAT_02098354 = 0;
    _DAT_02098358 = "hkpCogWheelConstraintDataAtoms";
    _DAT_0209835c = 0xffffffff;
    _DAT_02098360 = 0;
    _DAT_02098364 = &DAT_017c8210;
    _DAT_02098368 = 5;
  }
  FUN_010dca80(&DAT_02098354);
  if ((_DAT_02098564 & 0x400000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x400000;
    _DAT_0209833c = 0;
    _DAT_02098340 = "hkpCogWheelConstraintData";
    _DAT_02098344 = 0xffffffff;
    _DAT_02098348 = 0;
    _DAT_0209834c = &DAT_017c81d8;
    _DAT_02098350 = 6;
  }
  FUN_010dca80(&DAT_0209833c);
  if ((_DAT_02098564 & 0x800000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x800000;
    _DAT_02098324 = "hkpEntity";
    _DAT_02098328 = "hkpEntity";
    _DAT_0209832c = 2;
    _DAT_02098330 = 3;
    _DAT_02098334 = &DAT_017c81c8;
    _DAT_02098338 = 1;
  }
  FUN_010dca80(&DAT_02098324);
  if ((_DAT_02098564 & 0x1000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x1000000;
    _DAT_0209830c = 0;
    _DAT_02098310 = "hkpPairCollisionFilter";
    _DAT_02098314 = 0xffffffff;
    _DAT_02098318 = 0;
    _DAT_0209831c = &DAT_017c81a8;
    _DAT_02098320 = 3;
  }
  FUN_010dca80(&DAT_0209830c);
  if ((_DAT_02098564 & 0x2000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x2000000;
    _DAT_020982f4 = 0;
    _DAT_020982f8 = "hkpConstraintCollisionFilter";
    _DAT_020982fc = 0xffffffff;
    _DAT_02098300 = 0;
    _DAT_02098304 = &DAT_017c8190;
    _DAT_02098308 = 2;
  }
  FUN_010dca80(&DAT_020982f4);
  if ((_DAT_02098564 & 0x4000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x4000000;
    _DAT_020982dc = 0;
    _DAT_020982e0 = "hkpPairCollisionFilterMapPairFilterKeyOverrideType";
    _DAT_020982e4 = 0xffffffff;
    _DAT_020982e8 = 0;
    _DAT_020982ec = &DAT_017c8178;
    _DAT_020982f0 = 2;
  }
  FUN_010dca80(&DAT_020982dc);
  if ((_DAT_02098564 & 0x8000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x8000000;
    _DAT_020982c4 = "hkpWorldCinfo";
    _DAT_020982c8 = "hkpWorldCinfo";
    _DAT_020982cc = 8;
    _DAT_020982d0 = 9;
    _DAT_020982d4 = &DAT_017c8120;
    _DAT_020982d8 = 10;
  }
  FUN_010dca80(&DAT_020982c4);
  if ((_DAT_02098564 & 0x10000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x10000000;
    _DAT_020982ac = 0;
    _DAT_020982b0 = "hkpShapeModifier";
    _DAT_020982b4 = 0xffffffff;
    _DAT_020982b8 = 0;
    _DAT_020982bc = &DAT_017c8100;
    _DAT_020982c0 = 3;
  }
  FUN_010dca80(&DAT_020982ac);
  if ((_DAT_02098564 & 0x20000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x20000000;
    _DAT_02098294 = 0;
    _DAT_02098298 = "hkpTriggerVolume";
    _DAT_0209829c = 0xffffffff;
    _DAT_020982a0 = 0;
    _DAT_020982a4 = &DAT_017c80a0;
    _DAT_020982a8 = 0xb;
  }
  FUN_010dca80(&DAT_02098294);
  if ((_DAT_02098564 & 0x40000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x40000000;
    _DAT_0209827c = 0;
    _DAT_02098280 = "hkpTriggerVolumeEventInfo";
    _DAT_02098284 = 0xffffffff;
    _DAT_02098288 = 0;
    _DAT_0209828c = &DAT_017c8058;
    _DAT_02098290 = 8;
  }
  FUN_010dca80(&DAT_0209827c);
  if ((_DAT_02098564 & 0x80000000) == 0) {
    _DAT_02098564 = _DAT_02098564 | 0x80000000;
    _DAT_02098264 = 0;
    _DAT_02098268 = "hkpSetupStabilizationAtom";
    _DAT_0209826c = 0xffffffff;
    _DAT_02098270 = 0;
    _DAT_02098274 = &DAT_017c8028;
    _DAT_02098278 = 5;
  }
  FUN_010dca80(&DAT_02098264);
  if ((_DAT_02098260 & 1) == 0) {
    _DAT_02098260 = _DAT_02098260 | 1;
    _DAT_02098248 = "hkpHingeConstraintDataAtoms";
    _DAT_0209824c = "hkpHingeConstraintDataAtoms";
    _DAT_02098250 = 0;
    _DAT_02098254 = 1;
    _DAT_02098258 = &DAT_017c8000;
    _DAT_0209825c = 4;
  }
  FUN_010dca80(&DAT_02098248);
  if ((_DAT_02098260 & 2) == 0) {
    _DAT_02098260 = _DAT_02098260 | 2;
    _DAT_02098230 = "hkpBallSocketConstraintAtom";
    _DAT_02098234 = "hkpBallSocketConstraintAtom";
    _DAT_02098238 = 1;
    _DAT_0209823c = 2;
    _DAT_02098240 = &DAT_017c7fe8;
    _DAT_02098244 = 2;
  }
  FUN_010dca80(&DAT_02098230);
  if ((_DAT_02098260 & 4) == 0) {
    _DAT_02098260 = _DAT_02098260 | 4;
    _DAT_02098218 = "hkpLimitedHingeConstraintDataAtoms";
    _DAT_0209821c = "hkpLimitedHingeConstraintDataAtoms";
    _DAT_02098220 = 0;
    _DAT_02098224 = 1;
    _DAT_02098228 = &DAT_017c7fc0;
    _DAT_0209822c = 4;
  }
  FUN_010dca80(&DAT_02098218);
  if ((_DAT_02098260 & 8) == 0) {
    _DAT_02098260 = _DAT_02098260 | 8;
    _DAT_02098200 = "hkpBallAndSocketConstraintDataAtoms";
    _DAT_02098204 = "hkpBallAndSocketConstraintDataAtoms";
    _DAT_02098208 = 0;
    _DAT_0209820c = 1;
    _DAT_02098210 = &DAT_017c7f98;
    _DAT_02098214 = 4;
  }
  FUN_010dca80(&DAT_02098200);
  if ((_DAT_02098260 & 0x10) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x10;
    _DAT_020981e8 = "hkpRagdollConstraintDataAtoms";
    _DAT_020981ec = "hkpRagdollConstraintDataAtoms";
    _DAT_020981f0 = 0;
    _DAT_020981f4 = 1;
    _DAT_020981f8 = &DAT_017c7f70;
    _DAT_020981fc = 4;
  }
  FUN_010dca80(&DAT_020981e8);
  if ((_DAT_02098260 & 0x20) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x20;
    _DAT_020981d0 = "hkpMaterial";
    _DAT_020981d4 = "hkpMaterial";
    _DAT_020981d8 = 0;
    _DAT_020981dc = 1;
    _DAT_020981e0 = &DAT_017c7f60;
    _DAT_020981e4 = 1;
  }
  FUN_010dca80(&DAT_020981d0);
  if ((_DAT_02098260 & 0x40) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x40;
    _DAT_020981b8 = "hkpSimpleContactConstraintDataInfo";
    _DAT_020981bc = "hkpSimpleContactConstraintDataInfo";
    _DAT_020981c0 = 0;
    _DAT_020981c4 = 1;
    _DAT_020981c8 = &DAT_017c7f28;
    _DAT_020981cc = 6;
  }
  FUN_010dca80(&DAT_020981b8);
  if ((_DAT_02098260 & 0x80) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x80;
    _DAT_020981a0 = "hkpDisplayBindingDataRigidBody";
    _DAT_020981a4 = "hkpDisplayBindingDataRigidBody";
    _DAT_020981a8 = 1;
    _DAT_020981ac = 2;
    _DAT_020981b0 = &DAT_017c7f00;
    _DAT_020981b4 = 4;
  }
  FUN_010dca80(&DAT_020981a0);
  if ((_DAT_02098260 & 0x100) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x100;
    _DAT_02098188 = "hkpBallSocketConstraintAtom";
    _DAT_0209818c = "hkpBallSocketConstraintAtom";
    _DAT_02098190 = 2;
    _DAT_02098194 = 3;
    _DAT_02098198 = &DAT_017c7ed8;
    _DAT_0209819c = 4;
  }
  FUN_010dca80(&DAT_02098188);
  if ((_DAT_02098260 & 0x200) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x200;
    _DAT_02098170 = "hkpSetupStabilizationAtom";
    _DAT_02098174 = "hkpSetupStabilizationAtom";
    _DAT_02098178 = 0;
    _DAT_0209817c = 1;
    _DAT_02098180 = &DAT_017c7ec8;
    _DAT_02098184 = 1;
  }
  FUN_010dca80(&DAT_02098170);
  if ((_DAT_02098260 & 0x400) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x400;
    _DAT_02098158 = "hkpWorldCinfo";
    _DAT_0209815c = "hkpWorldCinfo";
    _DAT_02098160 = 9;
    _DAT_02098164 = 10;
    _DAT_02098168 = &DAT_017c7ea8;
    _DAT_0209816c = 3;
  }
  FUN_010dca80(&DAT_02098158);
  if ((_DAT_02098260 & 0x800) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x800;
    _DAT_02098140 = "hkpMaterial";
    _DAT_02098144 = "hkpMaterial";
    _DAT_02098148 = 1;
    _DAT_0209814c = 2;
    _DAT_02098150 = &DAT_017c7e98;
    _DAT_02098154 = 1;
  }
  FUN_010dca80(&DAT_02098140);
  if ((_DAT_02098260 & 0x1000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x1000;
    _DAT_02098128 = "hkpWorldCinfo";
    _DAT_0209812c = "hkpWorldCinfo";
    _DAT_02098130 = 10;
    _DAT_02098134 = 0xb;
    _DAT_02098138 = &DAT_017c7e78;
    _DAT_0209813c = 3;
  }
  FUN_010dca80(&DAT_02098128);
  if ((_DAT_02098260 & 0x2000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x2000;
    _DAT_02098110 = "hkpConvexVerticesShape";
    _DAT_02098114 = "hkpConvexVerticesShape";
    _DAT_02098118 = 3;
    _DAT_0209811c = 4;
    _DAT_02098120 = &DAT_017c7e40;
    _DAT_02098124 = 6;
  }
  FUN_010dca80(&DAT_02098110);
  if ((_DAT_02098260 & 0x4000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x4000;
    _DAT_020980f8 = "hkpWorldCinfo";
    _DAT_020980fc = "hkpWorldCinfo";
    _DAT_02098100 = 0xb;
    _DAT_02098104 = 0xc;
    _DAT_02098108 = &DAT_017c7e20;
    _DAT_0209810c = 3;
  }
  FUN_010dca80(&DAT_020980f8);
  if ((_DAT_02098260 & 0x8000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x8000;
    _DAT_020980e0 = "hkpCompressedMeshShape";
    _DAT_020980e4 = "hkpCompressedMeshShape";
    _DAT_020980e8 = 9;
    _DAT_020980ec = 10;
    _DAT_020980f0 = &DAT_017c7e18;
    _DAT_020980f4 = 0;
  }
  FUN_010dca80(&DAT_020980e0);
  if ((_DAT_02098260 & 0x10000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x10000;
    _DAT_020980c8 = "hkpCompressedMeshShape";
    _DAT_020980cc = "hkpCompressedMeshShape";
    _DAT_020980d0 = 10;
    _DAT_020980d4 = 0xb;
    _DAT_020980d8 = &DAT_017c7dd8;
    _DAT_020980dc = 7;
  }
  FUN_010dca80(&DAT_020980c8);
  if ((_DAT_02098260 & 0x20000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x20000;
    _DAT_020980b0 = "hkpExtendedMeshShape";
    _DAT_020980b4 = "hkpExtendedMeshShape";
    _DAT_020980b8 = 3;
    _DAT_020980bc = 4;
    _DAT_020980c0 = &DAT_017c7db0;
    _DAT_020980c4 = 4;
  }
  FUN_010dca80(&DAT_020980b0);
  if ((_DAT_02098260 & 0x40000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x40000;
    _DAT_02098098 = "hkpConvexVerticesShapeFourVectors";
    _DAT_0209809c = 0;
    _DAT_020980a0 = 0;
    _DAT_020980a4 = 0xffffffff;
    _DAT_020980a8 = &DAT_017c7d90;
    _DAT_020980ac = 3;
  }
  FUN_010dca80(&DAT_02098098);
  if ((_DAT_02098260 & 0x80000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x80000;
    _DAT_02098080 = "hkpSimpleContactConstraintDataInfo";
    _DAT_02098084 = "hkpSimpleContactConstraintDataInfo";
    _DAT_02098088 = 1;
    _DAT_0209808c = 2;
    _DAT_02098090 = &DAT_017c7d48;
    _DAT_02098094 = 8;
  }
  FUN_010dca80(&DAT_02098080);
  if ((_DAT_02098260 & 0x100000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x100000;
    _DAT_02098068 = "hkpCompressedMeshShapeConvexPiece";
    _DAT_0209806c = "hkpCompressedMeshShapeConvexPiece";
    _DAT_02098070 = 3;
    _DAT_02098074 = 4;
    _DAT_02098078 = &DAT_017c7d30;
    _DAT_0209807c = 2;
  }
  FUN_010dca80(&DAT_02098068);
  if ((_DAT_02098260 & 0x200000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x200000;
    _DAT_02098050 = "hkpWorldCinfo";
    _DAT_02098054 = "hkpWorldCinfo";
    _DAT_02098058 = 0xc;
    _DAT_0209805c = 0xd;
    _DAT_02098060 = &DAT_017c7d20;
    _DAT_02098064 = 1;
  }
  FUN_010dca80(&DAT_02098050);
  if ((_DAT_02098260 & 0x400000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x400000;
    _DAT_02098038 = "hkpProperty";
    _DAT_0209803c = "hkpProperty";
    _DAT_02098040 = 0;
    _DAT_02098044 = 1;
    _DAT_02098048 = &DAT_017c7d10;
    _DAT_0209804c = 1;
  }
  FUN_010dca80(&DAT_02098038);
  if ((_DAT_02098260 & 0x800000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x800000;
    _DAT_02098020 = "hkpSampledHeightFieldShape";
    _DAT_02098024 = "hkpSampledHeightFieldShape";
    _DAT_02098028 = 0;
    _DAT_0209802c = 1;
    _DAT_02098030 = &DAT_017c7ce0;
    _DAT_02098034 = 5;
  }
  FUN_010dca80(&DAT_02098020);
  if ((_DAT_02098260 & 0x1000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x1000000;
    _DAT_02098008 = 0;
    _DAT_0209800c = "hkpSampledHeightFieldShapeCoarseMinMaxLevel";
    _DAT_02098010 = 0xffffffff;
    _DAT_02098014 = 0;
    _DAT_02098018 = &DAT_017c7cc0;
    _DAT_0209801c = 3;
  }
  FUN_010dca80(&DAT_02098008);
  if ((_DAT_02098260 & 0x2000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x2000000;
    _DAT_02097ff0 = "hkpWorldCinfo";
    _DAT_02097ff4 = "hkpWorldCinfo";
    _DAT_02097ff8 = 0xd;
    _DAT_02097ffc = 0xe;
    _DAT_02098000 = &DAT_017c7c80;
    _DAT_02098004 = 7;
  }
  FUN_010dca80(&DAT_02097ff0);
  if ((_DAT_02098260 & 0x4000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x4000000;
    _DAT_02097fd8 = "hkpWorldCinfo";
    _DAT_02097fdc = "hkpWorldCinfo";
    _DAT_02097fe0 = 0xe;
    _DAT_02097fe4 = 0xf;
    _DAT_02097fe8 = &DAT_017c7c58;
    _DAT_02097fec = 4;
  }
  FUN_010dca80(&DAT_02097fd8);
  if ((_DAT_02098260 & 0x8000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x8000000;
    _DAT_02097fc0 = 0;
    _DAT_02097fc4 = "hkpBreakableBodyController";
    _DAT_02097fc8 = 0xffffffff;
    _DAT_02097fcc = 0;
    _DAT_02097fd0 = &DAT_017c7c30;
    _DAT_02097fd4 = 4;
  }
  FUN_010dca80(&DAT_02097fc0);
  if ((_DAT_02098260 & 0x10000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x10000000;
    _DAT_02097fa8 = 0;
    _DAT_02097fac = "hkpBreakableMaterial";
    _DAT_02097fb0 = 0xffffffff;
    _DAT_02097fb4 = 0;
    _DAT_02097fb8 = &DAT_017c7bf0;
    _DAT_02097fbc = 7;
  }
  FUN_010dca80(&DAT_02097fa8);
  if ((_DAT_02098260 & 0x20000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x20000000;
    _DAT_02097f90 = 0;
    _DAT_02097f94 = "hkpSimpleBreakableMaterial";
    _DAT_02097f98 = 0xffffffff;
    _DAT_02097f9c = 0;
    _DAT_02097fa0 = &DAT_017c7bc8;
    _DAT_02097fa4 = 4;
  }
  FUN_010dca80(&DAT_02097f90);
  if ((_DAT_02098260 & 0x40000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x40000000;
    _DAT_02097f78 = 0;
    _DAT_02097f7c = "hkpBreakableMultiMaterialInverseMappingDescriptor";
    _DAT_02097f80 = 0xffffffff;
    _DAT_02097f84 = 0;
    _DAT_02097f88 = &DAT_017c7bb0;
    _DAT_02097f8c = 2;
  }
  FUN_010dca80(&DAT_02097f78);
  if ((_DAT_02098260 & 0x80000000) == 0) {
    _DAT_02098260 = _DAT_02098260 | 0x80000000;
    _DAT_02097f60 = 0;
    _DAT_02097f64 = "hkpBreakableMultiMaterialInverseMapping";
    _DAT_02097f68 = 0xffffffff;
    _DAT_02097f6c = 0;
    _DAT_02097f70 = &DAT_017c7b78;
    _DAT_02097f74 = 6;
  }
  FUN_010dca80(&DAT_02097f60);
  if ((_DAT_02097f5c & 1) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 1;
    _DAT_02097f44 = 0;
    _DAT_02097f48 = "hkpBreakableMultiMaterial";
    _DAT_02097f4c = 0xffffffff;
    _DAT_02097f50 = 0;
    _DAT_02097f54 = &DAT_017c7b38;
    _DAT_02097f58 = 7;
  }
  FUN_010dca80(&DAT_02097f44);
  if ((_DAT_02097f5c & 2) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 2;
    _DAT_02097f2c = 0;
    _DAT_02097f30 = "hkpListShapeBreakableMaterial";
    _DAT_02097f34 = 0xffffffff;
    _DAT_02097f38 = 0;
    _DAT_02097f3c = &DAT_017c7b08;
    _DAT_02097f40 = 5;
  }
  FUN_010dca80(&DAT_02097f2c);
  if ((_DAT_02097f5c & 4) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 4;
    _DAT_02097f14 = 0;
    _DAT_02097f18 = "hkpExtendedMeshShapeBreakableMaterial";
    _DAT_02097f1c = 0xffffffff;
    _DAT_02097f20 = 0;
    _DAT_02097f24 = &DAT_017c7ad8;
    _DAT_02097f28 = 5;
  }
  FUN_010dca80(&DAT_02097f14);
  if ((_DAT_02097f5c & 8) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 8;
    _DAT_02097efc = 0;
    _DAT_02097f00 = "hkpStaticCompoundShapeBreakableMaterial";
    _DAT_02097f04 = 0xffffffff;
    _DAT_02097f08 = 0;
    _DAT_02097f0c = &DAT_017c7aa8;
    _DAT_02097f10 = 5;
  }
  FUN_010dca80(&DAT_02097efc);
  if ((_DAT_02097f5c & 0x10) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x10;
    _DAT_02097ee4 = 0;
    _DAT_02097ee8 = "hkpBreakableShape";
    _DAT_02097eec = 0xffffffff;
    _DAT_02097ef0 = 0;
    _DAT_02097ef4 = &DAT_017c7a68;
    _DAT_02097ef8 = 7;
  }
  FUN_010dca80(&DAT_02097ee4);
  if ((_DAT_02097f5c & 0x20) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x20;
    _DAT_02097ecc = "hkpBreakableBody";
    _DAT_02097ed0 = "hkpBreakableBody";
    _DAT_02097ed4 = 0;
    _DAT_02097ed8 = 1;
    _DAT_02097edc = &DAT_017c7a30;
    _DAT_02097ee0 = 6;
  }
  FUN_010dca80(&DAT_02097ecc);
  if ((_DAT_02097f5c & 0x40) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x40;
    _DAT_02097eb4 = "hkpShapeModifier";
    _DAT_02097eb8 = 0;
    _DAT_02097ebc = 0;
    _DAT_02097ec0 = 0xffffffff;
    _DAT_02097ec4 = &DAT_017c7a10;
    _DAT_02097ec8 = 3;
  }
  FUN_010dca80(&DAT_02097eb4);
  if ((_DAT_02097f5c & 0x80) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x80;
    _DAT_02097e9c = "hkpExtendedMeshShapeSubpart";
    _DAT_02097ea0 = "hkpExtendedMeshShapeSubpart";
    _DAT_02097ea4 = 2;
    _DAT_02097ea8 = 3;
    _DAT_02097eac = &DAT_017c79d8;
    _DAT_02097eb0 = 6;
  }
  FUN_010dca80(&DAT_02097e9c);
  if ((_DAT_02097f5c & 0x100) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x100;
    _DAT_02097e84 = "hkpListShapeChildInfo";
    _DAT_02097e88 = "hkpListShapeChildInfo";
    _DAT_02097e8c = 0;
    _DAT_02097e90 = 1;
    _DAT_02097e94 = &DAT_017c79c8;
    _DAT_02097e98 = 1;
  }
  FUN_010dca80(&DAT_02097e84);
  if ((_DAT_02097f5c & 0x200) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x200;
    _DAT_02097e6c = "hkpBvTreeShape";
    _DAT_02097e70 = "hkpBvTreeShape";
    _DAT_02097e74 = 0;
    _DAT_02097e78 = 1;
    _DAT_02097e7c = &DAT_017c79b8;
    _DAT_02097e80 = 1;
  }
  FUN_010dca80(&DAT_02097e6c);
  if ((_DAT_02097f5c & 0x400) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x400;
    _DAT_02097e54 = "hkpConvexTransformShape";
    _DAT_02097e58 = "hkpConvexTransformShape";
    _DAT_02097e5c = 0;
    _DAT_02097e60 = 1;
    _DAT_02097e64 = &DAT_017c7990;
    _DAT_02097e68 = 4;
  }
  FUN_010dca80(&DAT_02097e54);
  if ((_DAT_02097f5c & 0x800) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x800;
    _DAT_02097e3c = 0;
    _DAT_02097e40 = "hkpStaticCompoundShapeInstance";
    _DAT_02097e44 = 0xffffffff;
    _DAT_02097e48 = 0;
    _DAT_02097e4c = &DAT_017c7948;
    _DAT_02097e50 = 8;
  }
  FUN_010dca80(&DAT_02097e3c);
  if ((_DAT_02097f5c & 0x1000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x1000;
    _DAT_02097e24 = 0;
    _DAT_02097e28 = "hkpStaticCompoundShape";
    _DAT_02097e2c = 0xffffffff;
    _DAT_02097e30 = 0;
    _DAT_02097e34 = &DAT_017c78c0;
    _DAT_02097e38 = 0x10;
  }
  FUN_010dca80(&DAT_02097e24);
  if ((_DAT_02097f5c & 0x2000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x2000;
    _DAT_02097e0c = "hkpWorldCinfo";
    _DAT_02097e10 = "hkpWorldCinfo";
    _DAT_02097e14 = 0xf;
    _DAT_02097e18 = 0x10;
    _DAT_02097e1c = &DAT_017c78a0;
    _DAT_02097e20 = 3;
  }
  FUN_010dca80(&DAT_02097e0c);
  if ((_DAT_02097f5c & 0x4000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x4000;
    _DAT_02097df4 = 0;
    _DAT_02097df8 = "hkpBvCompressedMeshShape";
    _DAT_02097dfc = 0xffffffff;
    _DAT_02097e00 = 0;
    _DAT_02097e04 = &DAT_017c7808;
    _DAT_02097e08 = 0x12;
  }
  FUN_010dca80(&DAT_02097df4);
  if ((_DAT_02097f5c & 0x8000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x8000;
    _DAT_02097ddc = 0;
    _DAT_02097de0 = "hkpBvCompressedMeshShapeTreeDataRun";
    _DAT_02097de4 = 0xffffffff;
    _DAT_02097de8 = 0;
    _DAT_02097dec = &DAT_017c77f0;
    _DAT_02097df0 = 2;
  }
  FUN_010dca80(&DAT_02097ddc);
  if ((_DAT_02097f5c & 0x10000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x10000;
    _DAT_02097dc4 = 0;
    _DAT_02097dc8 =
         "hkcdStaticMeshTreehkcdStaticMeshTreeCommonConfigunsignedintunsignedlonglong1121hkpBvCompressedMeshShapeTreeDataRun"
    ;
    _DAT_02097dcc = 0xffffffff;
    _DAT_02097dd0 = 0;
    _DAT_02097dd4 = &DAT_017c7798;
    _DAT_02097dd8 = 10;
  }
  FUN_010dca80(&DAT_02097dc4);
  if ((_DAT_02097f5c & 0x20000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x20000;
    _DAT_02097dac = 0;
    _DAT_02097db0 = "hkpBvCompressedMeshShapeTree";
    _DAT_02097db4 = 0xffffffff;
    _DAT_02097db8 = 0;
    _DAT_02097dbc = &DAT_017c7760;
    _DAT_02097dc0 = 6;
  }
  FUN_010dca80(&DAT_02097dac);
  if ((_DAT_02097f5c & 0x40000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x40000;
    _DAT_02097d94 = 0;
    _DAT_02097d98 = "hkpShapeKeyTable";
    _DAT_02097d9c = 0xffffffff;
    _DAT_02097da0 = 0;
    _DAT_02097da4 = &DAT_017c7740;
    _DAT_02097da8 = 3;
  }
  FUN_010dca80(&DAT_02097d94);
  if ((_DAT_02097f5c & 0x80000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x80000;
    _DAT_02097d7c = 0;
    _DAT_02097d80 = "hkpShapeKeyTableBlock";
    _DAT_02097d84 = 0xffffffff;
    _DAT_02097d88 = 0;
    _DAT_02097d8c = &DAT_017c7728;
    _DAT_02097d90 = 2;
  }
  FUN_010dca80(&DAT_02097d7c);
  if ((_DAT_02097f5c & 0x100000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x100000;
    _DAT_02097d64 = 0;
    _DAT_02097d68 = "hkpShapeBase";
    _DAT_02097d6c = 0xffffffff;
    _DAT_02097d70 = 0;
    _DAT_02097d74 = &DAT_017c7700;
    _DAT_02097d78 = 2;
  }
  FUN_010dca80(&DAT_02097d64);
  if ((_DAT_02097f5c & 0x200000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x200000;
    _DAT_02097d4c = "hkpShape";
    _DAT_02097d50 = "hkpShape";
    _DAT_02097d54 = 0;
    _DAT_02097d58 = 1;
    _DAT_02097d5c = &DAT_017c76e8;
    _DAT_02097d60 = 2;
  }
  FUN_010dca80(&DAT_02097d4c);
  if ((_DAT_02097f5c & 0x400000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x400000;
    _DAT_02097d34 = "hkpBreakableShape";
    _DAT_02097d38 = "hkpBreakableShape";
    _DAT_02097d3c = 0;
    _DAT_02097d40 = 1;
    _DAT_02097d44 = &DAT_017c76a8;
    _DAT_02097d48 = 7;
  }
  FUN_010dca80(&DAT_02097d34);
  if ((_DAT_02097f5c & 0x800000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x800000;
    _DAT_02097d1c = "hkpWorldCinfo";
    _DAT_02097d20 = "hkpWorldCinfo";
    _DAT_02097d24 = 0x10;
    _DAT_02097d28 = 0x11;
    _DAT_02097d2c = &DAT_017c7690;
    _DAT_02097d30 = 2;
  }
  FUN_010dca80(&DAT_02097d1c);
  if ((_DAT_02097f5c & 0x1000000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x1000000;
    _DAT_02097d04 = "hkpConvexTransformShape";
    _DAT_02097d08 = "hkpConvexTransformShape";
    _DAT_02097d0c = 1;
    _DAT_02097d10 = 2;
    _DAT_02097d14 = &DAT_017c7670;
    _DAT_02097d18 = 3;
  }
  FUN_010dca80(&DAT_02097d04);
  if ((_DAT_02097f5c & 0x2000000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x2000000;
    _DAT_02097cec = "hkpBvCompressedMeshShape";
    _DAT_02097cf0 = "hkpBvCompressedMeshShape";
    _DAT_02097cf4 = 0;
    _DAT_02097cf8 = 1;
    _DAT_02097cfc = &DAT_017c7658;
    _DAT_02097d00 = 2;
  }
  FUN_010dca80(&DAT_02097cec);
  if ((_DAT_02097f5c & 0x4000000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x4000000;
    _DAT_02097cd4 = "hkpVehicleInstanceWheelInfo";
    _DAT_02097cd8 = "hkpVehicleInstanceWheelInfo";
    _DAT_02097cdc = 1;
    _DAT_02097ce0 = 2;
    _DAT_02097ce4 = &DAT_017c7648;
    _DAT_02097ce8 = 1;
  }
  FUN_010dca80(&DAT_02097cd4);
  if ((_DAT_02097f5c & 0x8000000) == 0) {
    _DAT_02097f5c = _DAT_02097f5c | 0x8000000;
    _DAT_02097cbc = "hkpVehicleInstance";
    _DAT_02097cc0 = "hkpVehicleInstance";
    _DAT_02097cc4 = 0;
    _DAT_02097cc8 = 1;
    _DAT_02097ccc = &DAT_017c7638;
    _DAT_02097cd0 = 1;
  }
  FUN_010dca80(&DAT_02097cbc);
  return;
}

// 01045E40  FUN_01045e40  size=13  [run]
void FUN_01045e40(void)

{
  FUN_01042310(DAT_0209b83c);
  return;
}

// 01045E50  FUN_01045e50  size=14  [run]
void __thiscall FUN_01045e50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01045E80  FUN_01045e80  size=30  [run]
void __thiscall FUN_01045e80(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    *(short *)(param_2 + 6) = *(short *)(param_2 + 6) + 1;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  return;
}

// 01045EC0  FUN_01045ec0  size=28  [run]
undefined4 __thiscall FUN_01045ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)*param_1 + 0xc))(param_2,param_3);
  return param_2;
}

// 01045EE0  FUN_01045ee0  size=13  [run]
void __fastcall FUN_01045ee0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01045eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x10))();
  return;
}

// 01045F20  FUN_01045f20  size=28  [run]
void __thiscall FUN_01045f20(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x38))(param_1[1],param_2);
  return;
}

// 01045F40  FUN_01045f40  size=45  [run]
void __thiscall FUN_01045f40(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x34))(param_1[1]);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 01045F80  FUN_01045f80  size=28  [run]
void __thiscall FUN_01045f80(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x60))(param_1[1],param_2);
  return;
}

// 01045FA0  FUN_01045fa0  size=28  [run]
void __thiscall FUN_01045fa0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x44))(param_1[1],param_2);
  return;
}

// 01045FC0  FUN_01045fc0  size=30  [run]
void __thiscall FUN_01045fc0(undefined4 *param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)*param_1 + 0x5c))(param_1[1],*param_2);
  return;
}

// 01045FE0  FUN_01045fe0  size=33  [run]
void __thiscall FUN_01045fe0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x50))(param_1[1],param_2);
  return;
}

// 01046010  FUN_01046010  size=28  [run]
void __thiscall FUN_01046010(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x4c))(param_1[1],param_2);
  return;
}

// 01046030  FUN_01046030  size=33  [run]
void __thiscall FUN_01046030(undefined4 *param_1,undefined1 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x40))(param_1[1],param_2,0);
  return;
}

// 01046060  FUN_01046060  size=32  [run]
void __thiscall FUN_01046060(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)*param_1 + 0x48))(param_1[1],param_2,param_3);
  return;
}

// 01046080  FUN_01046080  size=30  [run]
void __thiscall FUN_01046080(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    *(short *)(param_2 + 6) = *(short *)(param_2 + 6) + 1;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  return;
}

// 010460C0  FUN_010460c0  size=20  [run]
void __thiscall FUN_010460c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = *param_1;
  param_2[1] = param_3;
  return;
}

// 010460E0  FUN_010460e0  size=13  [run]
void __fastcall FUN_010460e0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010460eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x10))();
  return;
}

// 01046100  FUN_01046100  size=23  [run]
undefined4 * __thiscall FUN_01046100(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
  *param_2 = uVar1;
  return param_2;
}

// 01046150  FUN_01046150  size=45  [run]
void __thiscall FUN_01046150(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x5c))(param_1[1]);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 01046180  FUN_01046180  size=30  [run]
void __thiscall FUN_01046180(undefined4 *param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)*param_1 + 0x60))(param_1[1],*param_2);
  return;
}

// 010461A0  FUN_010461a0  size=28  [run]
void __thiscall FUN_010461a0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x30))(param_1[1],param_2);
  return;
}

// 010461C0  FUN_010461c0  size=28  [run]
void __thiscall FUN_010461c0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x50))(param_1[1],param_2);
  return;
}

// 010461E0  FUN_010461e0  size=16  [run]
void __thiscall FUN_010461e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 010461F0  FUN_010461f0  size=17  [run]
void __thiscall FUN_010461f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  return;
}

// 01046210  FUN_01046210  size=17  [run]
void __thiscall FUN_01046210(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  return;
}

// 01046230  FUN_01046230  size=34  [run]
void __thiscall FUN_01046230(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 01046270  FUN_01046270  size=30  [run]
void __thiscall FUN_01046270(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x48))(param_1[1],param_2,4);
  return;
}

// 010462B0  FUN_010462b0  size=30  [run]
void __thiscall FUN_010462b0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x48))(param_1[1],param_2,0xc);
  return;
}

// 01046310  FUN_01046310  size=28  [run]
void __thiscall FUN_01046310(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x30))(param_1[1],param_2);
  return;
}

// 01046330  FUN_01046330  size=28  [run]
void __thiscall FUN_01046330(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x30))(param_1[1],param_2);
  return;
}

// 01046360  FUN_01046360  size=45  [run]
void __thiscall FUN_01046360(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x28))(param_1[1]);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 01046390  FUN_01046390  size=4813  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01046390(void)

{
  if ((_DAT_02099400 & 1) == 0) {
    _DAT_02099400 = _DAT_02099400 | 1;
    _DAT_020993e8 = 0;
    _DAT_020993ec = "hkcdDynamicTreeCodec18";
    _DAT_020993f0 = 0xffffffff;
    _DAT_020993f4 = 0;
    _DAT_020993f8 = &DAT_017cd6b8;
    _DAT_020993fc = 3;
  }
  FUN_010dca80(&DAT_020993e8);
  if ((_DAT_02099400 & 2) == 0) {
    _DAT_02099400 = _DAT_02099400 | 2;
    _DAT_020993d0 = 0;
    _DAT_020993d4 = "hkcdDynamicTreeCodec32";
    _DAT_020993d8 = 0xffffffff;
    _DAT_020993dc = 0;
    _DAT_020993e0 = &DAT_017cd6a0;
    _DAT_020993e4 = 2;
  }
  FUN_010dca80(&DAT_020993d0);
  if ((_DAT_02099400 & 4) == 0) {
    _DAT_02099400 = _DAT_02099400 | 4;
    _DAT_020993b8 = 0;
    _DAT_020993bc = "hkcdDynamicTreeCodecRawunsignedlong";
    _DAT_020993c0 = 0xffffffff;
    _DAT_020993c4 = 0;
    _DAT_020993c8 = &DAT_017cd678;
    _DAT_020993cc = 4;
  }
  FUN_010dca80(&DAT_020993b8);
  if ((_DAT_02099400 & 8) == 0) {
    _DAT_02099400 = _DAT_02099400 | 8;
    _DAT_020993a0 = 0;
    _DAT_020993a4 = "hkcdDynamicTreeCodecRawunsignedint";
    _DAT_020993a8 = 0xffffffff;
    _DAT_020993ac = 0;
    _DAT_020993b0 = &DAT_017cd650;
    _DAT_020993b4 = 4;
  }
  FUN_010dca80(&DAT_020993a0);
  if ((_DAT_02099400 & 0x10) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x10;
    _DAT_02099388 = 0;
    _DAT_0209938c = "hkcdDynamicTreeCodecRawUint";
    _DAT_02099390 = 0xffffffff;
    _DAT_02099394 = 0;
    _DAT_02099398 = &DAT_017cd638;
    _DAT_0209939c = 2;
  }
  FUN_010dca80(&DAT_02099388);
  if ((_DAT_02099400 & 0x20) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x20;
    _DAT_02099370 = 0;
    _DAT_02099374 = "hkcdDynamicTreeCodecRawUlong";
    _DAT_02099378 = 0xffffffff;
    _DAT_0209937c = 0;
    _DAT_02099380 = &DAT_017cd620;
    _DAT_02099384 = 2;
  }
  FUN_010dca80(&DAT_02099370);
  if ((_DAT_02099400 & 0x40) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x40;
    _DAT_02099358 = 0;
    _DAT_0209935c = "hkcdDynamicTreeCentroidMetric";
    _DAT_02099360 = 0xffffffff;
    _DAT_02099364 = 0;
    _DAT_02099368 = &DAT_017cd618;
    _DAT_0209936c = 0;
  }
  FUN_010dca80(&DAT_02099358);
  if ((_DAT_02099400 & 0x80) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x80;
    _DAT_02099340 = 0;
    _DAT_02099344 = "hkcdDynamicTreeAnisotropicMetric";
    _DAT_02099348 = 0xffffffff;
    _DAT_0209934c = 0;
    _DAT_02099350 = &DAT_017cd610;
    _DAT_02099354 = 0;
  }
  FUN_010dca80(&DAT_02099340);
  if ((_DAT_02099400 & 0x100) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x100;
    _DAT_02099328 = 0;
    _DAT_0209932c = "hkcdDynamicTreeBalanceMetric";
    _DAT_02099330 = 0xffffffff;
    _DAT_02099334 = 0;
    _DAT_02099338 = &DAT_017cd608;
    _DAT_0209933c = 0;
  }
  FUN_010dca80(&DAT_02099328);
  if ((_DAT_02099400 & 0x200) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x200;
    _DAT_02099310 = 0;
    _DAT_02099314 =
         "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodec32";
    _DAT_02099318 = 0xffffffff;
    _DAT_0209931c = 0;
    _DAT_02099320 = &DAT_017cd5d8;
    _DAT_02099324 = 5;
  }
  FUN_010dca80(&DAT_02099310);
  if ((_DAT_02099400 & 0x400) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x400;
    _DAT_020992f8 = 0;
    _DAT_020992fc = "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32";
    _DAT_02099300 = 0xffffffff;
    _DAT_02099304 = 0;
    _DAT_02099308 = &DAT_017cd5b8;
    _DAT_0209930c = 3;
  }
  FUN_010dca80(&DAT_020992f8);
  if ((_DAT_02099400 & 0x800) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x800;
    _DAT_020992e0 = 0;
    _DAT_020992e4 =
         "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUint"
    ;
    _DAT_020992e8 = 0xffffffff;
    _DAT_020992ec = 0;
    _DAT_020992f0 = &DAT_017cd580;
    _DAT_020992f4 = 6;
  }
  FUN_010dca80(&DAT_020992e0);
  if ((_DAT_02099400 & 0x1000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x1000;
    _DAT_020992c8 = 0;
    _DAT_020992cc = "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUint";
    _DAT_020992d0 = 0xffffffff;
    _DAT_020992d4 = 0;
    _DAT_020992d8 = &DAT_017cd560;
    _DAT_020992dc = 3;
  }
  FUN_010dca80(&DAT_020992c8);
  if ((_DAT_02099400 & 0x2000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x2000;
    _DAT_020992b0 = 0;
    _DAT_020992b4 =
         "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlong"
    ;
    _DAT_020992b8 = 0xffffffff;
    _DAT_020992bc = 0;
    _DAT_020992c0 = &DAT_017cd528;
    _DAT_020992c4 = 6;
  }
  FUN_010dca80(&DAT_020992b0);
  if ((_DAT_02099400 & 0x4000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x4000;
    _DAT_02099298 = 0;
    _DAT_0209929c = "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUlong";
    _DAT_020992a0 = 0xffffffff;
    _DAT_020992a4 = 0;
    _DAT_020992a8 = &DAT_017cd508;
    _DAT_020992ac = 3;
  }
  FUN_010dca80(&DAT_02099298);
  if ((_DAT_02099400 & 0x8000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x8000;
    _DAT_02099280 = 0;
    _DAT_02099284 = "hkcdDynamicTreeDynamicStorage16";
    _DAT_02099288 = 0xffffffff;
    _DAT_0209928c = 0;
    _DAT_02099290 = &DAT_017cd4e0;
    _DAT_02099294 = 4;
  }
  FUN_010dca80(&DAT_02099280);
  if ((_DAT_02099400 & 0x10000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x10000;
    _DAT_02099268 = 0;
    _DAT_0209926c = "hkcdDynamicTreeDynamicStoragePtr";
    _DAT_02099270 = 0xffffffff;
    _DAT_02099274 = 0;
    _DAT_02099278 = &DAT_017cd4b8;
    _DAT_0209927c = 4;
  }
  FUN_010dca80(&DAT_02099268);
  if ((_DAT_02099400 & 0x20000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x20000;
    _DAT_02099250 = 0;
    _DAT_02099254 = "hkcdDynamicTreeDynamicStorage32";
    _DAT_02099258 = 0xffffffff;
    _DAT_0209925c = 0;
    _DAT_02099260 = &DAT_017cd490;
    _DAT_02099264 = 4;
  }
  FUN_010dca80(&DAT_02099250);
  if ((_DAT_02099400 & 0x40000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x40000;
    _DAT_02099238 = 0;
    _DAT_0209923c = "hkcdStaticTreeCodec3Axis";
    _DAT_02099240 = 0xffffffff;
    _DAT_02099244 = 0;
    _DAT_02099248 = &DAT_017cd480;
    _DAT_0209924c = 1;
  }
  FUN_010dca80(&DAT_02099238);
  if ((_DAT_02099400 & 0x80000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x80000;
    _DAT_02099220 = 0;
    _DAT_02099224 = "hkcdStaticTreeCodec3Axis4";
    _DAT_02099228 = 0xffffffff;
    _DAT_0209922c = 0;
    _DAT_02099230 = &DAT_017cd460;
    _DAT_02099234 = 3;
  }
  FUN_010dca80(&DAT_02099220);
  if ((_DAT_02099400 & 0x100000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x100000;
    _DAT_02099208 = 0;
    _DAT_0209920c = "hkcdStaticTreeCodec3Axis5";
    _DAT_02099210 = 0xffffffff;
    _DAT_02099214 = 0;
    _DAT_02099218 = &DAT_017cd438;
    _DAT_0209921c = 4;
  }
  FUN_010dca80(&DAT_02099208);
  if ((_DAT_02099400 & 0x200000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x200000;
    _DAT_020991f0 = 0;
    _DAT_020991f4 = "hkcdStaticTreeCodec3Axis6";
    _DAT_020991f8 = 0xffffffff;
    _DAT_020991fc = 0;
    _DAT_02099200 = &DAT_017cd410;
    _DAT_02099204 = 4;
  }
  FUN_010dca80(&DAT_020991f0);
  if ((_DAT_02099400 & 0x400000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x400000;
    _DAT_020991d8 = 0;
    _DAT_020991dc = "hkcdStaticTreeCodecRaw";
    _DAT_020991e0 = 0xffffffff;
    _DAT_020991e4 = 0;
    _DAT_020991e8 = &DAT_017cd3f8;
    _DAT_020991ec = 2;
  }
  FUN_010dca80(&DAT_020991d8);
  if ((_DAT_02099400 & 0x800000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x800000;
    _DAT_020991c0 = 0;
    _DAT_020991c4 = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4";
    _DAT_020991c8 = 0xffffffff;
    _DAT_020991cc = 0;
    _DAT_020991d0 = &DAT_017cd3d8;
    _DAT_020991d4 = 3;
  }
  FUN_010dca80(&DAT_020991c0);
  if ((_DAT_02099400 & 0x1000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x1000000;
    _DAT_020991a8 = 0;
    _DAT_020991ac = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5";
    _DAT_020991b0 = 0xffffffff;
    _DAT_020991b4 = 0;
    _DAT_020991b8 = &DAT_017cd3b8;
    _DAT_020991bc = 3;
  }
  FUN_010dca80(&DAT_020991a8);
  if ((_DAT_02099400 & 0x2000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x2000000;
    _DAT_02099190 = 0;
    _DAT_02099194 = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6";
    _DAT_02099198 = 0xffffffff;
    _DAT_0209919c = 0;
    _DAT_020991a0 = &DAT_017cd398;
    _DAT_020991a4 = 3;
  }
  FUN_010dca80(&DAT_02099190);
  if ((_DAT_02099400 & 0x4000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x4000000;
    _DAT_02099178 = 0;
    _DAT_0209917c = "hkcdStaticTreeDynamicStorage4";
    _DAT_02099180 = 0xffffffff;
    _DAT_02099184 = 0;
    _DAT_02099188 = &DAT_017cd380;
    _DAT_0209918c = 2;
  }
  FUN_010dca80(&DAT_02099178);
  if ((_DAT_02099400 & 0x8000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x8000000;
    _DAT_02099160 = 0;
    _DAT_02099164 = "hkcdStaticTreeDynamicStorage5";
    _DAT_02099168 = 0xffffffff;
    _DAT_0209916c = 0;
    _DAT_02099170 = &DAT_017cd368;
    _DAT_02099174 = 2;
  }
  FUN_010dca80(&DAT_02099160);
  if ((_DAT_02099400 & 0x10000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x10000000;
    _DAT_02099148 = 0;
    _DAT_0209914c = "hkcdStaticTreeDynamicStorage6";
    _DAT_02099150 = 0xffffffff;
    _DAT_02099154 = 0;
    _DAT_02099158 = &DAT_017cd350;
    _DAT_0209915c = 2;
  }
  FUN_010dca80(&DAT_02099148);
  if ((_DAT_02099400 & 0x20000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x20000000;
    _DAT_02099130 = 0;
    _DAT_02099134 = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRaw";
    _DAT_02099138 = 0xffffffff;
    _DAT_0209913c = 0;
    _DAT_02099140 = &DAT_017cd338;
    _DAT_02099144 = 2;
  }
  FUN_010dca80(&DAT_02099130);
  if ((_DAT_02099400 & 0x40000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x40000000;
    _DAT_02099118 = 0;
    _DAT_0209911c = "hkcdStaticTreeDynamicStorage32";
    _DAT_02099120 = 0xffffffff;
    _DAT_02099124 = 0;
    _DAT_02099128 = &DAT_017cd320;
    _DAT_0209912c = 2;
  }
  FUN_010dca80(&DAT_02099118);
  if ((_DAT_02099400 & 0x80000000) == 0) {
    _DAT_02099400 = _DAT_02099400 | 0x80000000;
    _DAT_02099100 = 0;
    _DAT_02099104 = "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtr";
    _DAT_02099108 = 0xffffffff;
    _DAT_0209910c = 0;
    _DAT_02099110 = &DAT_017cd2d8;
    _DAT_02099114 = 8;
  }
  FUN_010dca80(&DAT_02099100);
  if ((_DAT_020990fc & 1) == 0) {
    _DAT_020990fc = _DAT_020990fc | 1;
    _DAT_020990e4 = 0;
    _DAT_020990e8 = "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16";
    _DAT_020990ec = 0xffffffff;
    _DAT_020990f0 = 0;
    _DAT_020990f4 = &DAT_017cd290;
    _DAT_020990f8 = 8;
  }
  FUN_010dca80(&DAT_020990e4);
  if ((_DAT_020990fc & 2) == 0) {
    _DAT_020990fc = _DAT_020990fc | 2;
    _DAT_020990cc = 0;
    _DAT_020990d0 = "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32";
    _DAT_020990d4 = 0xffffffff;
    _DAT_020990d8 = 0;
    _DAT_020990dc = &DAT_017cd248;
    _DAT_020990e0 = 8;
  }
  FUN_010dca80(&DAT_020990cc);
  if ((_DAT_020990fc & 4) == 0) {
    _DAT_020990fc = _DAT_020990fc | 4;
    _DAT_020990b4 = 0;
    _DAT_020990b8 = "hkcdDynamicTreeDefaultTreePtrStorage";
    _DAT_020990bc = 0xffffffff;
    _DAT_020990c0 = 0;
    _DAT_020990c4 = &DAT_017cd210;
    _DAT_020990c8 = 6;
  }
  FUN_010dca80(&DAT_020990b4);
  if ((_DAT_020990fc & 8) == 0) {
    _DAT_020990fc = _DAT_020990fc | 8;
    _DAT_0209909c = 0;
    _DAT_020990a0 = "hkcdDynamicTreeDefaultTree32Storage";
    _DAT_020990a4 = 0xffffffff;
    _DAT_020990a8 = 0;
    _DAT_020990ac = &DAT_017cd1d8;
    _DAT_020990b0 = 6;
  }
  FUN_010dca80(&DAT_0209909c);
  if ((_DAT_020990fc & 0x10) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x10;
    _DAT_02099084 = 0;
    _DAT_02099088 = "hkcdDynamicTreeDefaultTree48Storage";
    _DAT_0209908c = 0xffffffff;
    _DAT_02099090 = 0;
    _DAT_02099094 = &DAT_017cd1a0;
    _DAT_02099098 = 6;
  }
  FUN_010dca80(&DAT_02099084);
  if ((_DAT_020990fc & 0x20) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x20;
    _DAT_0209906c = 0;
    _DAT_02099070 = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4";
    _DAT_02099074 = 0xffffffff;
    _DAT_02099078 = 0;
    _DAT_0209907c = &DAT_017cd170;
    _DAT_02099080 = 5;
  }
  FUN_010dca80(&DAT_0209906c);
  if ((_DAT_020990fc & 0x40) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x40;
    _DAT_02099054 = 0;
    _DAT_02099058 = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5";
    _DAT_0209905c = 0xffffffff;
    _DAT_02099060 = 0;
    _DAT_02099064 = &DAT_017cd140;
    _DAT_02099068 = 5;
  }
  FUN_010dca80(&DAT_02099054);
  if ((_DAT_020990fc & 0x80) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x80;
    _DAT_0209903c = 0;
    _DAT_02099040 = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6";
    _DAT_02099044 = 0xffffffff;
    _DAT_02099048 = 0;
    _DAT_0209904c = &DAT_017cd110;
    _DAT_02099050 = 5;
  }
  FUN_010dca80(&DAT_0209903c);
  if ((_DAT_020990fc & 0x100) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x100;
    _DAT_02099024 = 0;
    _DAT_02099028 = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32";
    _DAT_0209902c = 0xffffffff;
    _DAT_02099030 = 0;
    _DAT_02099034 = &DAT_017cd0e0;
    _DAT_02099038 = 5;
  }
  FUN_010dca80(&DAT_02099024);
  if ((_DAT_020990fc & 0x200) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x200;
    _DAT_0209900c = 0;
    _DAT_02099010 = "hkcdStaticTreeDefaultTreeStorage32";
    _DAT_02099014 = 0xffffffff;
    _DAT_02099018 = 0;
    _DAT_0209901c = &DAT_017cd0b8;
    _DAT_02099020 = 4;
  }
  FUN_010dca80(&DAT_0209900c);
  if ((_DAT_020990fc & 0x400) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x400;
    _DAT_02098ff4 = 0;
    _DAT_02098ff8 = "hkcdStaticTreeDefaultTreeStorage4";
    _DAT_02098ffc = 0xffffffff;
    _DAT_02099000 = 0;
    _DAT_02099004 = &DAT_017cd090;
    _DAT_02099008 = 4;
  }
  FUN_010dca80(&DAT_02098ff4);
  if ((_DAT_020990fc & 0x800) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x800;
    _DAT_02098fdc = 0;
    _DAT_02098fe0 = "hkcdStaticTreeDefaultTreeStorage5";
    _DAT_02098fe4 = 0xffffffff;
    _DAT_02098fe8 = 0;
    _DAT_02098fec = &DAT_017cd068;
    _DAT_02098ff0 = 4;
  }
  FUN_010dca80(&DAT_02098fdc);
  if ((_DAT_020990fc & 0x1000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x1000;
    _DAT_02098fc4 = 0;
    _DAT_02098fc8 = "hkcdStaticTreeDefaultTreeStorage6";
    _DAT_02098fcc = 0xffffffff;
    _DAT_02098fd0 = 0;
    _DAT_02098fd4 = &DAT_017cd040;
    _DAT_02098fd8 = 4;
  }
  FUN_010dca80(&DAT_02098fc4);
  if ((_DAT_020990fc & 0x2000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x2000;
    _DAT_02098fac = 0;
    _DAT_02098fb0 = "hkcdStaticMeshTreeBaseSectionDataRuns";
    _DAT_02098fb4 = 0xffffffff;
    _DAT_02098fb8 = 0;
    _DAT_02098fbc = &DAT_017cd030;
    _DAT_02098fc0 = 1;
  }
  FUN_010dca80(&DAT_02098fac);
  if ((_DAT_020990fc & 0x4000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x4000;
    _DAT_02098f94 = 0;
    _DAT_02098f98 = "hkcdStaticMeshTreeBaseSectionSharedVertices";
    _DAT_02098f9c = 0xffffffff;
    _DAT_02098fa0 = 0;
    _DAT_02098fa4 = &DAT_017cd020;
    _DAT_02098fa8 = 1;
  }
  FUN_010dca80(&DAT_02098f94);
  if ((_DAT_020990fc & 0x8000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x8000;
    _DAT_02098f7c = 0;
    _DAT_02098f80 = "hkcdStaticMeshTreeBaseSectionPrimitives";
    _DAT_02098f84 = 0xffffffff;
    _DAT_02098f88 = 0;
    _DAT_02098f8c = &DAT_017cd010;
    _DAT_02098f90 = 1;
  }
  FUN_010dca80(&DAT_02098f7c);
  if ((_DAT_020990fc & 0x10000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x10000;
    _DAT_02098f64 = 0;
    _DAT_02098f68 = "hkcdStaticMeshTreeBase";
    _DAT_02098f6c = 0xffffffff;
    _DAT_02098f70 = 0;
    _DAT_02098f74 = &DAT_017ccf90;
    _DAT_02098f78 = 0xf;
  }
  FUN_010dca80(&DAT_02098f64);
  if ((_DAT_020990fc & 0x20000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x20000;
    _DAT_02098f4c = 0;
    _DAT_02098f50 = "hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedint";
    _DAT_02098f54 = 0xffffffff;
    _DAT_02098f58 = 0;
    _DAT_02098f5c = &DAT_017ccf70;
    _DAT_02098f60 = 3;
  }
  FUN_010dca80(&DAT_02098f4c);
  if ((_DAT_020990fc & 0x40000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x40000;
    _DAT_02098f34 = 0;
    _DAT_02098f38 = "hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshort";
    _DAT_02098f3c = 0xffffffff;
    _DAT_02098f40 = 0;
    _DAT_02098f44 = &DAT_017ccf50;
    _DAT_02098f48 = 3;
  }
  FUN_010dca80(&DAT_02098f34);
  if ((_DAT_020990fc & 0x80000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x80000;
    _DAT_02098f1c = 0;
    _DAT_02098f20 = "hkcdStaticMeshTreeDefaultDataRun";
    _DAT_02098f24 = 0xffffffff;
    _DAT_02098f28 = 0;
    _DAT_02098f2c = &DAT_017ccf38;
    _DAT_02098f30 = 2;
  }
  FUN_010dca80(&DAT_02098f1c);
  if ((_DAT_020990fc & 0x100000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x100000;
    _DAT_02098f04 = 0;
    _DAT_02098f08 = "hkcdStaticMeshTreeBaseSection";
    _DAT_02098f0c = 0xffffffff;
    _DAT_02098f10 = 0;
    _DAT_02098f14 = &DAT_017cceb0;
    _DAT_02098f18 = 0x10;
  }
  FUN_010dca80(&DAT_02098f04);
  if ((_DAT_020990fc & 0x200000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x200000;
    _DAT_02098eec = 0;
    _DAT_02098ef0 = "hkcdStaticMeshTreeBasePrimitive";
    _DAT_02098ef4 = 0xffffffff;
    _DAT_02098ef8 = 0;
    _DAT_02098efc = &DAT_017ccea0;
    _DAT_02098f00 = 1;
  }
  FUN_010dca80(&DAT_02098eec);
  if ((_DAT_020990fc & 0x400000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x400000;
    _DAT_02098ed4 = "hkcdStaticMeshTreeBaseSection";
    _DAT_02098ed8 = "hkcdStaticMeshTreeBaseSection";
    _DAT_02098edc = 0;
    _DAT_02098ee0 = 1;
    _DAT_02098ee4 = &DAT_017cce90;
    _DAT_02098ee8 = 1;
  }
  FUN_010dca80(&DAT_02098ed4);
  if ((_DAT_020990fc & 0x800000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x800000;
    _DAT_02098ebc = 0;
    _DAT_02098ec0 = "hkcdShapeDispatchType";
    _DAT_02098ec4 = 0xffffffff;
    _DAT_02098ec8 = 0;
    _DAT_02098ecc = &DAT_017cce70;
    _DAT_02098ed0 = 0;
  }
  FUN_010dca80(&DAT_02098ebc);
  if ((_DAT_020990fc & 0x1000000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x1000000;
    _DAT_02098ea4 = 0;
    _DAT_02098ea8 = "hkcdShapeInfoCodecType";
    _DAT_02098eac = 0xffffffff;
    _DAT_02098eb0 = 0;
    _DAT_02098eb4 = &DAT_017cce50;
    _DAT_02098eb8 = 0;
  }
  FUN_010dca80(&DAT_02098ea4);
  if ((_DAT_020990fc & 0x2000000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x2000000;
    _DAT_02098e8c = 0;
    _DAT_02098e90 = "hkcdShapeType";
    _DAT_02098e94 = 0xffffffff;
    _DAT_02098e98 = 0;
    _DAT_02098e9c = &DAT_017cce38;
    _DAT_02098ea0 = 0;
  }
  FUN_010dca80(&DAT_02098e8c);
  if ((_DAT_020990fc & 0x4000000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x4000000;
    _DAT_02098e74 = 0;
    _DAT_02098e78 = "hkcdShape";
    _DAT_02098e7c = 0xffffffff;
    _DAT_02098e80 = 0;
    _DAT_02098e84 = &DAT_017ccde8;
    _DAT_02098e88 = 9;
  }
  FUN_010dca80(&DAT_02098e74);
  if ((_DAT_020990fc & 0x8000000) == 0) {
    _DAT_020990fc = _DAT_020990fc | 0x8000000;
    _DAT_02098e5c = "hkcdStaticMeshTreeBaseSection";
    _DAT_02098e60 = "hkcdStaticMeshTreeBaseSection";
    _DAT_02098e64 = 1;
    _DAT_02098e68 = 2;
    _DAT_02098e6c = &DAT_017ccdc8;
    _DAT_02098e70 = 3;
  }
  FUN_010dca80(&DAT_02098e5c);
  return;
}

// 01047660  FUN_01047660  size=13  [run]
void FUN_01047660(void)

{
  FUN_01046390(DAT_0209b83c);
  return;
}

// 01047670  FUN_01047670  size=19  [run]
void __thiscall FUN_01047670(undefined2 *param_1,int param_2)

{
  *param_1 = *(undefined2 *)(param_2 + 2);
  return;
}

// 01047690  FUN_01047690  size=13  [run]
void __fastcall FUN_01047690(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0104769b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x2c))();
  return;
}

// 010476A0  FUN_010476a0  size=23  [run]
undefined4 * __thiscall FUN_010476a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)*param_1 + 8))();
  *param_2 = uVar1;
  return param_2;
}

// 010476E0  FUN_010476e0  size=33  [run]
void __thiscall FUN_010476e0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x40))(param_1[1],param_2);
  return;
}

// 01047710  FUN_01047710  size=28  [run]
void __thiscall FUN_01047710(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x38))(param_1[1],param_2);
  return;
}

// 01047730  FUN_01047730  size=43  [run]
void __thiscall FUN_01047730(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x28))(param_3);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 01047760  FUN_01047760  size=121  [run]
void FUN_01047760(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_extraData");
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"extraData");
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 010477E0  FUN_010477e0  size=121  [run]
void FUN_010477e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_variant");
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"variant");
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 01047860  FUN_01047860  size=121  [run]
void FUN_01047860(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_texture");
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"texture");
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 010478E0  FUN_010478e0  size=121  [run]
void FUN_010478e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_variant");
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"variant");
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 01047960  FUN_01047960  size=121  [run]
void FUN_01047960(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_value");
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"value");
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 010479E0  FUN_010479e0  size=121  [run]
void FUN_010479e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_object");
  puVar2 = (undefined4 *)(**(code **)(*local_c + 0x34))(local_8);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"object");
  (**(code **)(*local_14 + 0x5c))(local_10,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

// 01047A60  FUN_01047a60  size=59  [run]
void FUN_01047a60(undefined4 *param_1)

{
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"timeFactor");
  (**(code **)(*local_c + 0x50))(local_8,0x3f800000);
  return;
}

// 01047AA0  FUN_01047aa0  size=648  [run]
void FUN_01047aa0(undefined4 *param_1)

{
  undefined2 uVar1;
  int *local_84;
  undefined4 local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68;
  int *local_64;
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,&DAT_01662d64);
  uVar1 = (**(code **)(*local_c + 0x30))(local_8);
  switch(uVar1) {
  case 0:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_5c,&DAT_01662d64);
    (**(code **)(*local_5c + 0x44))(local_58,0);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_64,"numElements");
    (**(code **)(*local_64 + 0x44))(local_60,0);
    return;
  case 1:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_7c,&DAT_01662d64);
    (**(code **)(*local_7c + 0x44))(local_78,1);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_84,"numElements");
    (**(code **)(*local_84 + 0x44))(local_80,4);
    break;
  case 2:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_4c,&DAT_01662d64);
    (**(code **)(*local_4c + 0x44))(local_48,2);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_54,"numElements");
    (**(code **)(*local_54 + 0x44))(local_50,2);
    return;
  case 3:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_6c,&DAT_01662d64);
    (**(code **)(*local_6c + 0x44))(local_68,3);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_74,"numElements");
    (**(code **)(*local_74 + 0x44))(local_70,1);
    return;
  case 4:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_c,&DAT_01662d64);
    (**(code **)(*local_c + 0x44))(local_8,4);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"numElements");
    (**(code **)(*local_14 + 0x44))(local_10,1);
    return;
  case 5:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_1c,&DAT_01662d64);
    (**(code **)(*local_1c + 0x44))(local_18,4);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_24,"numElements");
    (**(code **)(*local_24 + 0x44))(local_20,2);
    return;
  case 6:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_2c,&DAT_01662d64);
    (**(code **)(*local_2c + 0x44))(local_28,4);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_34,"numElements");
    (**(code **)(*local_34 + 0x44))(local_30,3);
    return;
  case 7:
    (**(code **)(*(int *)*param_1 + 0xc))(&local_3c,&DAT_01662d64);
    (**(code **)(*local_3c + 0x44))(local_38,4);
    (**(code **)(*(int *)*param_1 + 0xc))(&local_44,"numElements");
    (**(code **)(*local_44 + 0x44))(local_40,4);
    return;
  }
  return;
}

// 01047D50  FUN_01047d50  size=313  [run]
void FUN_01047d50(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,"old_strings");
  piVar2 = (int *)(**(code **)(*local_c + 0x28))(local_8);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"strings");
  piVar3 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = (**(code **)(*piVar2 + 0x14))();
  (**(code **)(*piVar3 + 0x10))(uVar4);
  param_1 = (undefined4 *)0x0;
  iVar5 = (**(code **)(*piVar2 + 0x14))();
  if (0 < iVar5) {
    do {
      piVar6 = (int *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (piVar6 != (int *)0x0) {
        *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
        piVar6[2] = piVar6[2] + 1;
      }
      (**(code **)(*piVar6 + 0xc))(&local_1c,"string");
      uVar4 = (**(code **)(*local_1c + 0x2c))(local_18);
      (**(code **)(*piVar3 + 0x38))(param_1,uVar4);
      *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
      piVar1 = piVar6 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar6)(1);
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
      iVar5 = (**(code **)(*piVar2 + 0x14))();
    } while ((int)param_1 < iVar5);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar6 = piVar3 + 2;
  *piVar6 = *piVar6 + -1;
  if (*piVar6 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01047E90  FUN_01047e90  size=275  [run]
void FUN_01047e90(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"old_userChannels");
  piVar2 = (int *)(**(code **)(*local_10 + 0x28))(local_c);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_18,"userChannels");
  piVar3 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_8 = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      (**(code **)(*piVar3 + 0x60))(param_1,puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < local_8);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01047FB0  FUN_01047fb0  size=3158  [run]
void FUN_01047fb0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  float10 fVar9;
  undefined1 local_114 [8];
  undefined1 local_10c [8];
  int *local_104;
  undefined4 local_100;
  int *local_fc;
  undefined4 local_f8;
  int *local_f4;
  undefined4 local_f0;
  int *local_ec;
  undefined4 local_e8;
  int *local_e4;
  undefined4 local_e0;
  int *local_dc;
  undefined4 local_d8;
  int *local_d4;
  undefined4 local_d0;
  int *local_cc;
  undefined4 local_c8;
  int *local_c4;
  undefined4 local_c0;
  int *local_bc;
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_a0;
  int *local_9c;
  undefined4 local_98;
  int *local_94;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88;
  int *local_84;
  undefined4 local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  char local_31;
  undefined1 local_30;
  int *local_2c;
  undefined1 local_28;
  char local_27;
  undefined1 local_26;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puVar7 = param_1;
  piVar1 = (int *)(**(code **)(*(int *)*param_1 + 8))();
  local_18 = (int *)(**(code **)(*piVar1 + 4))();
  (**(code **)(*(int *)*puVar7 + 0xc))(&local_74,"vertexData");
  piVar1 = (int *)(**(code **)(*local_74 + 0x28))(local_70);
  if (piVar1 != (int *)0x0) {
    *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
    piVar1[2] = piVar1[2] + 1;
  }
  local_1c = piVar1;
  local_58 = (int *)(**(code **)(*piVar1 + 0x18))();
  piVar2 = local_18;
  local_64 = (**(code **)(*local_18 + 0x24))("hkxVertexBufferVertexData");
  piVar2 = (int *)(**(code **)(*piVar2 + 0x10))(&local_64,0);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  local_20 = piVar2;
  local_3c = (int *)(**(code **)(*piVar1 + 0x14))();
  (**(code **)(*piVar2 + 0xc))(&local_50,"numVerts");
  (**(code **)(*local_50 + 0x44))(local_4c,local_3c);
  (**(code **)(*(int *)*puVar7 + 0xc))(&local_50,&DAT_01705448);
  (**(code **)(*local_50 + 0x5c))(local_4c,piVar2);
  (**(code **)(*(int *)*puVar7 + 0xc))(&local_fc,"vertexDesc");
  local_4c = (int *)(**(code **)(*local_fc + 0x34))(local_f8);
  if (local_4c != (int *)0x0) {
    *(short *)((int)local_4c + 6) = *(short *)((int)local_4c + 6) + 1;
    local_4c[2] = local_4c[2] + 1;
  }
  (**(code **)(*local_4c + 0xc))(&local_cc,"decls");
  piVar3 = (int *)(**(code **)(*local_cc + 0x28))(local_c8);
  piVar2 = local_18;
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  local_54 = piVar3;
  local_68 = (**(code **)(*local_18 + 0x24))("hkxVertexDescription");
  piVar2 = (int *)(**(code **)(*piVar2 + 0x10))(&local_68,0);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  local_6c = piVar2;
  (**(code **)(*(int *)*param_1 + 0xc))(&local_60,&DAT_0170d850);
  (**(code **)(*local_60 + 0x5c))(local_5c,piVar2);
  (**(code **)(*piVar2 + 0xc))(&local_8c,"decls");
  piVar2 = (int *)(**(code **)(*local_8c + 0x28))(local_88);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  local_3c = piVar2;
  uVar4 = (**(code **)(*piVar3 + 0x14))();
  (**(code **)(*piVar2 + 0x10))(uVar4);
  local_c = (**(code **)(*piVar1 + 0x14))();
  local_40 = 0;
  local_44 = 0;
  local_18 = (int *)0x0;
  iVar5 = (**(code **)(*piVar3 + 0x14))();
  if (0 < iVar5) {
    do {
      piVar1 = local_18;
      piVar2 = (int *)(**(code **)(*local_54 + 0x5c))(local_18);
      if (piVar2 != (int *)0x0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
        piVar2[2] = piVar2[2] + 1;
      }
      local_5c = piVar2;
      piVar1 = (int *)(**(code **)(*local_3c + 0x5c))(piVar1);
      if (piVar1 != (int *)0x0) {
        *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
        piVar1[2] = piVar1[2] + 1;
      }
      local_24 = piVar1;
      (**(code **)(*piVar2 + 0xc))(local_10c,&DAT_01662d64);
      (**(code **)(*piVar1 + 0xc))(&local_f4,&DAT_01662d64);
      (**(code **)(*local_f4 + 0x60))(local_f0,local_10c);
      (**(code **)(*piVar2 + 0xc))(local_114,"usage");
      (**(code **)(*piVar1 + 0xc))(&local_9c,"usage");
      (**(code **)(*local_9c + 0x60))(local_98,local_114);
      (**(code **)(*piVar2 + 0xc))(&local_dc,&DAT_01662d64);
      iVar5 = (**(code **)(*local_dc + 0x30))(local_d8);
      (**(code **)(*piVar1 + 0xc))(&local_ac,"byteStride");
      (**(code **)(*local_ac + 0x44))(local_a8,*(undefined4 *)(&DAT_017ce13c + iVar5 * 4));
      (**(code **)(*piVar2 + 0xc))(&local_104,"usage");
      iVar5 = (**(code **)(*local_104 + 0x30))(local_100);
      piVar1 = local_1c;
      puVar7 = param_1;
      switch(iVar5) {
      case 1:
      case 4:
      case 8:
      case 0x10:
        if (iVar5 == 1) {
          pcVar6 = "position";
        }
        else if (iVar5 == 4) {
          pcVar6 = "normal";
        }
        else if (iVar5 == 0x10) {
          pcVar6 = "binormal";
        }
        else {
          pcVar6 = (char *)((iVar5 != 8) - 1 & 0x17608f0);
        }
        piVar1 = (int *)(**(code **)(*local_1c + 0x28))(pcVar6);
        if (piVar1 != (int *)0x0) {
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
          piVar1[2] = piVar1[2] + 1;
        }
        (**(code **)(*local_20 + 0xc))(&local_bc,"vectorData");
        piVar2 = (int *)(**(code **)(*local_bc + 0x28))(local_b8);
        if (piVar2 != (int *)0x0) {
          *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        local_8 = (int *)(**(code **)(*piVar2 + 0x14))();
        iVar5 = (**(code **)(*piVar2 + 0x14))();
        (**(code **)(*local_24 + 0xc))(&local_ec,"byteOffset");
        (**(code **)(*local_ec + 0x44))(local_e8,iVar5 << 4);
        iVar5 = (**(code **)(*piVar2 + 0x14))();
        (**(code **)(*piVar2 + 0x10))(iVar5 + local_c);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            uVar4 = (**(code **)(*piVar1 + 0x2c))(iVar5);
            (**(code **)(*piVar2 + 0x30))(iVar5 + (int)local_8,uVar4);
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        break;
      case 2:
        local_31 = (char)local_44 + 'A';
        local_38 = 0x66666964;
        local_34 = 0x7375;
        local_32 = 0x65;
        local_30 = 0;
        if ((local_40 == 0) && (iVar5 = (**(code **)(*local_58 + 0x2c))(&local_38), iVar5 == -1)) {
          local_31 = '\0';
        }
        piVar1 = (int *)(**(code **)(*local_1c + 0x28))(&local_38);
        if (piVar1 != (int *)0x0) {
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
          piVar1[2] = piVar1[2] + 1;
        }
        (**(code **)(*local_20 + 0xc))(&local_7c,"uint32Data");
        piVar2 = (int *)(**(code **)(*local_7c + 0x28))(local_78);
        if (piVar2 != (int *)0x0) {
          *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        local_8 = (int *)(**(code **)(*piVar2 + 0x14))();
        iVar5 = (**(code **)(*piVar2 + 0x14))();
        (**(code **)(*local_24 + 0xc))(&local_84,"byteOffset");
        (**(code **)(*local_84 + 0x44))(local_80,iVar5 * 4);
        iVar5 = (**(code **)(*piVar2 + 0x14))();
        (**(code **)(*piVar2 + 0x10))(iVar5 + local_c);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            uVar4 = (**(code **)(*piVar1 + 0x4c))(iVar5);
            (**(code **)(*piVar2 + 0x50))(iVar5 + (int)local_8,uVar4);
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        local_44 = local_44 + 1;
        break;
      default:
        goto switchD_01048348_caseD_3;
      case 0x20:
        local_27 = (char)local_40 + '0';
        param_1._0_2_ = CONCAT11(local_27,0x75);
        param_1._3_1_ = SUB41(puVar7,3);
        param_1._0_3_ = (uint3)(ushort)param_1;
        local_28 = 0x76;
        local_26 = 0;
        if ((local_40 == 0) && (iVar5 = (**(code **)(*local_58 + 0x2c))(&param_1), iVar5 == -1)) {
          param_1._0_2_ = (ushort)(byte)param_1;
          local_27 = '\0';
        }
        piVar1 = local_1c;
        local_14 = (int *)(**(code **)(*local_1c + 0x28))(&param_1);
        if (local_14 != (int *)0x0) {
          *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + 1;
          local_14[2] = local_14[2] + 1;
        }
        local_10 = (int *)(**(code **)(*piVar1 + 0x28))(&local_28);
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
          local_10[2] = local_10[2] + 1;
        }
        (**(code **)(*local_20 + 0xc))(&local_94,"floatData");
        piVar1 = (int *)(**(code **)(*local_94 + 0x28))(local_90);
        if (piVar1 != (int *)0x0) {
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
          piVar1[2] = piVar1[2] + 1;
        }
        local_8 = (int *)(**(code **)(*piVar1 + 0x14))();
        iVar5 = (**(code **)(*piVar1 + 0x14))();
        (**(code **)(*local_24 + 0xc))(&local_a4,"byteOffset");
        (**(code **)(*local_a4 + 0x44))(local_a0,iVar5 * 4);
        iVar8 = (**(code **)(*piVar1 + 0x14))();
        iVar5 = local_c;
        (**(code **)(*piVar1 + 0x10))(iVar8 + local_c * 4);
        iVar8 = 0;
        piVar2 = local_8;
        if (0 < iVar5) {
          do {
            fVar9 = (float10)(**(code **)(*local_14 + 0x3c))(iVar8);
            local_8 = (int *)(float)fVar9;
            (**(code **)(*piVar1 + 0x40))(piVar2,local_8);
            fVar9 = (float10)(**(code **)(*local_10 + 0x3c))(iVar8);
            local_8 = (int *)(float)fVar9;
            (**(code **)(*piVar1 + 0x40))((int)piVar2 + 1,local_8);
            iVar8 = iVar8 + 1;
            piVar2 = (int *)((int)piVar2 + 2);
          } while (iVar8 < local_c);
        }
        local_40 = local_40 + 1;
        *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
        piVar2 = piVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*piVar1)(1);
        }
        piVar1 = local_14;
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
          piVar2 = local_10 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*local_10)(1);
            piVar1 = local_14;
          }
        }
        goto LAB_01048746;
      case 0x40:
        local_8 = (int *)(**(code **)(*local_1c + 0x28))(&DAT_017608c8);
        if (local_8 != (int *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
          local_8[2] = local_8[2] + 1;
        }
        local_2c = (int *)(**(code **)(*piVar1 + 0x28))(&DAT_017608c4);
        if (local_2c != (int *)0x0) {
          *(short *)((int)local_2c + 6) = *(short *)((int)local_2c + 6) + 1;
          local_2c[2] = local_2c[2] + 1;
        }
        local_10 = (int *)(**(code **)(*piVar1 + 0x28))(&DAT_017608c0);
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
          local_10[2] = local_10[2] + 1;
        }
        local_14 = (int *)(**(code **)(*piVar1 + 0x28))(&DAT_017608bc);
        if (local_14 != (int *)0x0) {
          *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + 1;
          local_14[2] = local_14[2] + 1;
        }
        (**(code **)(*local_20 + 0xc))(&local_b4,"uint8Data");
        piVar1 = (int *)(**(code **)(*local_b4 + 0x28))(local_b0);
        if (piVar1 != (int *)0x0) {
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
          piVar1[2] = piVar1[2] + 1;
        }
        local_48 = (**(code **)(*piVar1 + 0x14))();
        uVar4 = (**(code **)(*piVar1 + 0x14))();
        (**(code **)(*local_24 + 0xc))(&local_c4,"byteOffset");
        (**(code **)(*local_c4 + 0x44))(local_c0,uVar4);
        iVar8 = (**(code **)(*piVar1 + 0x14))();
        iVar5 = local_c;
        (**(code **)(*piVar1 + 0x10))(iVar8 + local_c * 4);
        iVar8 = 0;
        if (0 < iVar5) {
          iVar5 = local_48 + 2;
          do {
            uVar4 = (**(code **)(*local_8 + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5 + -2,uVar4);
            uVar4 = (**(code **)(*local_2c + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5 + -1,uVar4);
            uVar4 = (**(code **)(*local_10 + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5,uVar4);
            uVar4 = (**(code **)(*local_14 + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5 + 1,uVar4);
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar8 < local_c);
        }
        *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
        piVar2 = piVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*piVar1)(1);
        }
        if (local_14 != (int *)0x0) {
          *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + -1;
          piVar1 = local_14 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_14)(1);
          }
        }
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
          piVar1 = local_10 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_10)(1);
          }
        }
        piVar1 = local_8;
        if (local_2c != (int *)0x0) {
          *(short *)((int)local_2c + 6) = *(short *)((int)local_2c + 6) + -1;
          piVar2 = local_2c + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*local_2c)(1);
            piVar1 = local_8;
          }
        }
LAB_01048746:
        if (piVar1 != (int *)0x0) {
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
          piVar2 = piVar1 + 2;
          *piVar2 = *piVar2 + -1;
          iVar5 = *piVar2;
LAB_01048b36:
          if (iVar5 != 0) goto switchD_01048348_caseD_3;
          puVar7 = (undefined4 *)*piVar1;
          goto LAB_01048b3a;
        }
        goto switchD_01048348_caseD_3;
      case 0x80:
        local_10 = (int *)(**(code **)(*local_1c + 0x28))(&DAT_017608b8);
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
          local_10[2] = local_10[2] + 1;
        }
        local_14 = (int *)(**(code **)(*piVar1 + 0x28))(&DAT_017608b4);
        if (local_14 != (int *)0x0) {
          *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + 1;
          local_14[2] = local_14[2] + 1;
        }
        local_2c = (int *)(**(code **)(*piVar1 + 0x28))(&DAT_017608b0);
        if (local_2c != (int *)0x0) {
          *(short *)((int)local_2c + 6) = *(short *)((int)local_2c + 6) + 1;
          local_2c[2] = local_2c[2] + 1;
        }
        local_8 = (int *)(**(code **)(*piVar1 + 0x28))(&DAT_017608ac);
        if (local_8 != (int *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
          local_8[2] = local_8[2] + 1;
        }
        (**(code **)(*local_20 + 0xc))(&local_d4,"uint8Data");
        piVar1 = (int *)(**(code **)(*local_d4 + 0x28))(local_d0);
        if (piVar1 != (int *)0x0) {
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
          piVar1[2] = piVar1[2] + 1;
        }
        local_48 = (**(code **)(*piVar1 + 0x14))();
        uVar4 = (**(code **)(*piVar1 + 0x14))();
        (**(code **)(*local_24 + 0xc))(&local_e4,"byteOffset");
        (**(code **)(*local_e4 + 0x44))(local_e0,uVar4);
        iVar8 = (**(code **)(*piVar1 + 0x14))();
        iVar5 = local_c;
        (**(code **)(*piVar1 + 0x10))(iVar8 + local_c * 4);
        iVar8 = 0;
        if (0 < iVar5) {
          iVar5 = local_48 + 2;
          do {
            uVar4 = (**(code **)(*local_10 + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5 + -2,uVar4);
            uVar4 = (**(code **)(*local_14 + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5 + -1,uVar4);
            uVar4 = (**(code **)(*local_2c + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5,uVar4);
            uVar4 = (**(code **)(*local_8 + 0x4c))(iVar8);
            (**(code **)(*piVar1 + 0x50))(iVar5 + 1,uVar4);
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar8 < local_c);
        }
        *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
        piVar2 = piVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*piVar1)(1);
        }
        if (local_8 != (int *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
          piVar1 = local_8 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_8)(1);
          }
        }
        if (local_2c != (int *)0x0) {
          *(short *)((int)local_2c + 6) = *(short *)((int)local_2c + 6) + -1;
          piVar1 = local_2c + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_2c)(1);
          }
        }
        if (local_14 != (int *)0x0) {
          *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + -1;
          piVar1 = local_14 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_14)(1);
          }
        }
        if (local_10 == (int *)0x0) goto switchD_01048348_caseD_3;
        *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
        piVar1 = local_10 + 2;
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        piVar1 = local_10;
        goto LAB_01048b36;
      }
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
      piVar3 = piVar2 + 2;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*piVar2)(1);
      }
      if (piVar1 != (int *)0x0) {
        *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
        piVar2 = piVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          puVar7 = (undefined4 *)*piVar1;
LAB_01048b3a:
          (*(code *)*puVar7)(1);
        }
      }
switchD_01048348_caseD_3:
      *(short *)((int)local_24 + 6) = *(short *)((int)local_24 + 6) + -1;
      piVar1 = local_24 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_24)(1);
      }
      *(short *)((int)local_5c + 6) = *(short *)((int)local_5c + 6) + -1;
      piVar1 = local_5c + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_5c)(1);
      }
      iVar8 = (int)local_18 + 1;
      local_18 = (int *)iVar8;
      iVar5 = (**(code **)(*local_54 + 0x14))();
    } while (iVar8 < iVar5);
  }
  *(short *)((int)local_3c + 6) = *(short *)((int)local_3c + 6) + -1;
  piVar1 = local_3c + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*local_3c)(1);
  }
  *(short *)((int)local_6c + 6) = *(short *)((int)local_6c + 6) + -1;
  piVar1 = local_6c + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*local_6c)(1);
  }
  *(short *)((int)local_54 + 6) = *(short *)((int)local_54 + 6) + -1;
  piVar1 = local_54 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*local_54)(1);
  }
  *(short *)((int)local_4c + 6) = *(short *)((int)local_4c + 6) + -1;
  piVar1 = local_4c + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*local_4c)(1);
  }
  *(short *)((int)local_20 + 6) = *(short *)((int)local_20 + 6) + -1;
  piVar1 = local_20 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*local_20)(1);
  }
  *(short *)((int)local_1c + 6) = *(short *)((int)local_1c + 6) + -1;
  piVar1 = local_1c + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*local_1c)(1);
  }
  return;
}

// 01048CA0  FUN_01048ca0  size=303  [run]
void FUN_01048ca0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"mapping");
  piVar2 = (int *)(**(code **)(*local_10 + 0x28))(local_c);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_18,"nodeNames");
  piVar3 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_8 = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar4) {
    do {
      piVar5 = (int *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (piVar5 != (int *)0x0) {
        *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
        piVar5[2] = piVar5[2] + 1;
        (**(code **)(*piVar5 + 0xc))(&local_20,&DAT_0164d4cc);
        uVar6 = (**(code **)(*local_20 + 0x2c))(local_1c);
        (**(code **)(*piVar3 + 0x38))(param_1,uVar6);
        *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
        piVar1 = piVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar5)(1);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < local_8);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar5 = piVar3 + 2;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01048DD0  FUN_01048dd0  size=275  [run]
void FUN_01048dd0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"old_attributeGroups");
  piVar2 = (int *)(**(code **)(*local_10 + 0x28))(local_c);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_18,"attributeGroups");
  piVar3 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_8 = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      (**(code **)(*piVar3 + 0x60))(param_1,puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < local_8);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01048EF0  FUN_01048ef0  size=275  [run]
void FUN_01048ef0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"old_indexMappings");
  piVar2 = (int *)(**(code **)(*local_10 + 0x28))(local_c);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_18,"indexMappings");
  piVar3 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_8 = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      (**(code **)(*piVar3 + 0x60))(param_1,puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < local_8);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01049010  FUN_01049010  size=275  [run]
void FUN_01049010(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_10,"old_declaredEnums");
  piVar2 = (int *)(**(code **)(*local_10 + 0x28))(local_c);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_18,"declaredEnums");
  piVar3 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  local_8 = iVar4;
  (**(code **)(*piVar3 + 0x10))(iVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_1);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      (**(code **)(*piVar3 + 0x60))(param_1,puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < local_8);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01049130  FUN_01049130  size=199  [run]
void FUN_01049130(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 0xc))(&local_c,&DAT_0173b100);
  piVar2 = (int *)(**(code **)(*local_c + 0x28))(local_8);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(&local_14,"halfs");
  piVar3 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  iVar4 = 0;
  do {
    fVar5 = (float10)(**(code **)(*piVar2 + 0x3c))(iVar4);
    (**(code **)(*piVar3 + 0x50))(iVar4,(int)(float)fVar5 >> 0x10 & 0xffff);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  return;
}

// 01049200  FUN_01049200  size=13387  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01049200(void)

{
  if ((DAT_0209a390 & 1) == 0) {
    DAT_0209a390 = DAT_0209a390 | 1;
    _DAT_01b1b878 = &DAT_01701cd0;
  }
  if ((DAT_0209a390 & 2) == 0) {
    DAT_0209a390 = DAT_0209a390 | 2;
    _DAT_0209a378 = 0;
    _DAT_0209a37c = "hkLocalFrameGroup";
    _DAT_0209a380 = 0xffffffff;
    _DAT_0209a384 = 0;
    _DAT_0209a388 = &DAT_017cff88;
    _DAT_0209a38c = 4;
  }
  FUN_010dca80(&DAT_0209a378);
  if ((DAT_0209a390 & 4) == 0) {
    DAT_0209a390 = DAT_0209a390 | 4;
    _DAT_0209a360 = 0;
    _DAT_0209a364 = "hkSemanticsAttribute";
    _DAT_0209a368 = 0xffffffff;
    _DAT_0209a36c = 0;
    _DAT_0209a370 = &DAT_017cff78;
    _DAT_0209a374 = 1;
  }
  FUN_010dca80(&DAT_0209a360);
  if ((DAT_0209a390 & 8) == 0) {
    DAT_0209a390 = DAT_0209a390 | 8;
    _DAT_0209a348 = 0;
    _DAT_0209a34c = "hkRangeInt32Attribute";
    _DAT_0209a350 = 0xffffffff;
    _DAT_0209a354 = 0;
    _DAT_0209a358 = &DAT_017cff50;
    _DAT_0209a35c = 4;
  }
  FUN_010dca80(&DAT_0209a348);
  if ((DAT_0209a390 & 0x10) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x10;
    _DAT_0209a330 = 0;
    _DAT_0209a334 = "hkMeshVertexBuffer";
    _DAT_0209a338 = 0xffffffff;
    _DAT_0209a33c = 0;
    _DAT_0209a340 = &DAT_017cff30;
    _DAT_0209a344 = 3;
  }
  FUN_010dca80(&DAT_0209a330);
  if ((DAT_0209a390 & 0x20) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x20;
    _DAT_0209a318 = 0;
    _DAT_0209a31c = "hkArrayTypeAttribute";
    _DAT_0209a320 = 0xffffffff;
    _DAT_0209a324 = 0;
    _DAT_0209a328 = &DAT_017cff20;
    _DAT_0209a32c = 1;
  }
  FUN_010dca80(&DAT_0209a318);
  if ((DAT_0209a390 & 0x40) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x40;
    _DAT_0209a300 = 0;
    _DAT_0209a304 = "hkRangeRealAttribute";
    _DAT_0209a308 = 0xffffffff;
    _DAT_0209a30c = 0;
    _DAT_0209a310 = &DAT_017cfef8;
    _DAT_0209a314 = 4;
  }
  FUN_010dca80(&DAT_0209a300);
  if ((DAT_0209a390 & 0x80) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x80;
    _DAT_0209a2e8 = 0;
    _DAT_0209a2ec = "hkDataObjectTypeAttribute";
    _DAT_0209a2f0 = 0xffffffff;
    _DAT_0209a2f4 = 0;
    _DAT_0209a2f8 = &DAT_017cfee8;
    _DAT_0209a2fc = 1;
  }
  FUN_010dca80(&DAT_0209a2e8);
  if ((DAT_0209a390 & 0x100) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x100;
    _DAT_0209a2d0 = 0;
    _DAT_0209a2d4 = "hkLinkAttribute";
    _DAT_0209a2d8 = 0xffffffff;
    _DAT_0209a2dc = 0;
    _DAT_0209a2e0 = &DAT_017cfed8;
    _DAT_0209a2e4 = 1;
  }
  FUN_010dca80(&DAT_0209a2d0);
  if ((DAT_0209a390 & 0x200) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x200;
    _DAT_0209a2b8 = 0;
    _DAT_0209a2bc = "hkDescriptionAttribute";
    _DAT_0209a2c0 = 0xffffffff;
    _DAT_0209a2c4 = 0;
    _DAT_0209a2c8 = &DAT_017cfec8;
    _DAT_0209a2cc = 1;
  }
  FUN_010dca80(&DAT_0209a2b8);
  if ((DAT_0209a390 & 0x400) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x400;
    _DAT_0209a2a0 = 0;
    _DAT_0209a2a4 = "hkMeshShape";
    _DAT_0209a2a8 = 0xffffffff;
    _DAT_0209a2ac = 0;
    _DAT_0209a2b0 = &DAT_017cfea8;
    _DAT_0209a2b4 = 3;
  }
  FUN_010dca80(&DAT_0209a2a0);
  if ((DAT_0209a390 & 0x800) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x800;
    _DAT_0209a288 = 0;
    _DAT_0209a28c = "hkGizmoAttribute";
    _DAT_0209a290 = 0xffffffff;
    _DAT_0209a294 = 0;
    _DAT_0209a298 = &DAT_017cfe88;
    _DAT_0209a29c = 3;
  }
  FUN_010dca80(&DAT_0209a288);
  if ((DAT_0209a390 & 0x1000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x1000;
    _DAT_0209a270 = 0;
    _DAT_0209a274 = "hkMeshSectionCinfo";
    _DAT_0209a278 = 0xffffffff;
    _DAT_0209a27c = 0;
    _DAT_0209a280 = &DAT_017cfe20;
    _DAT_0209a284 = 0xc;
  }
  FUN_010dca80(&DAT_0209a270);
  if ((DAT_0209a390 & 0x2000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x2000;
    _DAT_0209a258 = 0;
    _DAT_0209a25c = "hkUiAttribute";
    _DAT_0209a260 = 0xffffffff;
    _DAT_0209a264 = 0;
    _DAT_0209a268 = &DAT_017cfde8;
    _DAT_0209a26c = 6;
  }
  FUN_010dca80(&DAT_0209a258);
  if ((DAT_0209a390 & 0x4000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x4000;
    _DAT_0209a240 = 0;
    _DAT_0209a244 = "hkDocumentationAttribute";
    _DAT_0209a248 = 0xffffffff;
    _DAT_0209a24c = 0;
    _DAT_0209a250 = &DAT_017cfdd8;
    _DAT_0209a254 = 1;
  }
  FUN_010dca80(&DAT_0209a240);
  if ((DAT_0209a390 & 0x8000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x8000;
    _DAT_0209a228 = 0;
    _DAT_0209a22c = "hkMemoryMeshShape";
    _DAT_0209a230 = 0xffffffff;
    _DAT_0209a234 = 0;
    _DAT_0209a238 = &DAT_017cfd88;
    _DAT_0209a23c = 9;
  }
  FUN_010dca80(&DAT_0209a228);
  if ((DAT_0209a390 & 0x10000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x10000;
    _DAT_0209a210 = 0;
    _DAT_0209a214 = "hkMeshMaterial";
    _DAT_0209a218 = 0xffffffff;
    _DAT_0209a21c = 0;
    _DAT_0209a220 = &DAT_017cfd68;
    _DAT_0209a224 = 3;
  }
  FUN_010dca80(&DAT_0209a210);
  if ((DAT_0209a390 & 0x20000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x20000;
    _DAT_0209a1f8 = 0;
    _DAT_0209a1fc = "hkMeshSection";
    _DAT_0209a200 = 0xffffffff;
    _DAT_0209a204 = 0;
    _DAT_0209a208 = &DAT_017cfcf0;
    _DAT_0209a20c = 0xe;
  }
  FUN_010dca80(&DAT_0209a1f8);
  if ((DAT_0209a390 & 0x40000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x40000;
    _DAT_0209a1e0 = 0;
    _DAT_0209a1e4 = "hkModelerNodeTypeAttribute";
    _DAT_0209a1e8 = 0xffffffff;
    _DAT_0209a1ec = 0;
    _DAT_0209a1f0 = &DAT_017cfce0;
    _DAT_0209a1f4 = 1;
  }
  FUN_010dca80(&DAT_0209a1e0);
  if ((DAT_0209a390 & 0x80000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x80000;
    _DAT_0209a1c8 = 0;
    _DAT_0209a1cc = "hkHalf";
    _DAT_0209a1d0 = 0xffffffff;
    _DAT_0209a1d4 = 0;
    _DAT_0209a1d8 = &DAT_017cfcd0;
    _DAT_0209a1dc = 1;
  }
  FUN_010dca80(&DAT_0209a1c8);
  if ((DAT_0209a390 & 0x100000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x100000;
    _DAT_0209a1b0 = "hkSimpleLocalFrame";
    _DAT_0209a1b4 = "hkSimpleLocalFrame";
    _DAT_0209a1b8 = 0;
    _DAT_0209a1bc = 1;
    _DAT_0209a1c0 = &DAT_017cfcb8;
    _DAT_0209a1c4 = 2;
  }
  FUN_010dca80(&DAT_0209a1b0);
  if ((DAT_0209a390 & 0x200000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x200000;
    _DAT_0209a198 = 0;
    _DAT_0209a19c = "hkAlignSceneToNodeOptions";
    _DAT_0209a1a0 = 0xffffffff;
    _DAT_0209a1a4 = 0;
    _DAT_0209a1a8 = &DAT_017cfc68;
    _DAT_0209a1ac = 9;
  }
  FUN_010dca80(&DAT_0209a198);
  if ((DAT_0209a390 & 0x400000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x400000;
    _DAT_0209a180 = "hkxVertexP4N4C1T10";
    _DAT_0209a184 = "hkxVertexP4N4C1T10";
    _DAT_0209a188 = 0;
    _DAT_0209a18c = 1;
    _DAT_0209a190 = &DAT_017cfc48;
    _DAT_0209a194 = 3;
  }
  FUN_010dca80(&DAT_0209a180);
  if ((DAT_0209a390 & 0x800000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x800000;
    _DAT_0209a168 = "hkxVertexP4N4T4B4W4I4C1T12";
    _DAT_0209a16c = "hkxVertexP4N4T4B4W4I4C1T12";
    _DAT_0209a170 = 0;
    _DAT_0209a174 = 1;
    _DAT_0209a178 = &DAT_017cfc28;
    _DAT_0209a17c = 3;
  }
  FUN_010dca80(&DAT_0209a168);
  if ((DAT_0209a390 & 0x1000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x1000000;
    _DAT_0209a150 = "hkxVertexP4N4C1T2";
    _DAT_0209a154 = "hkxVertexP4N4C1T2";
    _DAT_0209a158 = 0;
    _DAT_0209a15c = 1;
    _DAT_0209a160 = &DAT_017cfc08;
    _DAT_0209a164 = 3;
  }
  FUN_010dca80(&DAT_0209a150);
  if ((DAT_0209a390 & 0x2000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x2000000;
    _DAT_0209a138 = "hkxVertexP4N4C1T6";
    _DAT_0209a13c = "hkxVertexP4N4C1T6";
    _DAT_0209a140 = 0;
    _DAT_0209a144 = 1;
    _DAT_0209a148 = &DAT_017cfbe8;
    _DAT_0209a14c = 3;
  }
  FUN_010dca80(&DAT_0209a138);
  if ((DAT_0209a390 & 0x4000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x4000000;
    _DAT_0209a120 = "hkxVertexP4N4T4B4C1T2";
    _DAT_0209a124 = "hkxVertexP4N4T4B4C1T2";
    _DAT_0209a128 = 0;
    _DAT_0209a12c = 1;
    _DAT_0209a130 = &DAT_017cfbc8;
    _DAT_0209a134 = 3;
  }
  FUN_010dca80(&DAT_0209a120);
  if ((DAT_0209a390 & 0x8000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x8000000;
    _DAT_0209a108 = "hkxVertexP4N4T4B4C1T6";
    _DAT_0209a10c = "hkxVertexP4N4T4B4C1T6";
    _DAT_0209a110 = 0;
    _DAT_0209a114 = 1;
    _DAT_0209a118 = &DAT_017cfba8;
    _DAT_0209a11c = 3;
  }
  FUN_010dca80(&DAT_0209a108);
  if ((DAT_0209a390 & 0x10000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x10000000;
    _DAT_0209a0f0 = "hkxVertexP4N4T4B4C1T10";
    _DAT_0209a0f4 = "hkxVertexP4N4T4B4C1T10";
    _DAT_0209a0f8 = 0;
    _DAT_0209a0fc = 1;
    _DAT_0209a100 = &DAT_017cfb88;
    _DAT_0209a104 = 3;
  }
  FUN_010dca80(&DAT_0209a0f0);
  if ((DAT_0209a390 & 0x20000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x20000000;
    _DAT_0209a0d8 = "hkxVertexP4N4T4B4W4I4C1T4";
    _DAT_0209a0dc = "hkxVertexP4N4T4B4W4I4C1T4";
    _DAT_0209a0e0 = 0;
    _DAT_0209a0e4 = 1;
    _DAT_0209a0e8 = &DAT_017cfb68;
    _DAT_0209a0ec = 3;
  }
  FUN_010dca80(&DAT_0209a0d8);
  if ((DAT_0209a390 & 0x40000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x40000000;
    _DAT_0209a0c0 = "hkxVertexP4N4T4B4W4I4C1T8";
    _DAT_0209a0c4 = "hkxVertexP4N4T4B4W4I4C1T8";
    _DAT_0209a0c8 = 0;
    _DAT_0209a0cc = 1;
    _DAT_0209a0d0 = &DAT_017cfb48;
    _DAT_0209a0d4 = 3;
  }
  FUN_010dca80(&DAT_0209a0c0);
  if ((DAT_0209a390 & 0x80000000) == 0) {
    DAT_0209a390 = DAT_0209a390 | 0x80000000;
    _DAT_0209a0a8 = "hkxVertexP4N4W4I4C1T4";
    _DAT_0209a0ac = "hkxVertexP4N4W4I4C1T4";
    _DAT_0209a0b0 = 0;
    _DAT_0209a0b4 = 1;
    _DAT_0209a0b8 = &DAT_017cfb28;
    _DAT_0209a0bc = 3;
  }
  FUN_010dca80(&DAT_0209a0a8);
  if ((_DAT_0209a0a4 & 1) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 1;
    _DAT_0209a08c = "hkxVertexP4N4W4I4C1T8";
    _DAT_0209a090 = "hkxVertexP4N4W4I4C1T8";
    _DAT_0209a094 = 0;
    _DAT_0209a098 = 1;
    _DAT_0209a09c = &DAT_017cfb08;
    _DAT_0209a0a0 = 3;
  }
  FUN_010dca80(&DAT_0209a08c);
  if ((_DAT_0209a0a4 & 2) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 2;
    _DAT_0209a074 = "hkxVertexP4N4W4I4C1T12";
    _DAT_0209a078 = "hkxVertexP4N4W4I4C1T12";
    _DAT_0209a07c = 0;
    _DAT_0209a080 = 1;
    _DAT_0209a084 = &DAT_017cfae8;
    _DAT_0209a088 = 3;
  }
  FUN_010dca80(&DAT_0209a074);
  if ((_DAT_0209a0a4 & 4) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 4;
    _DAT_0209a05c = "hkUiAttribute";
    _DAT_0209a060 = "hkUiAttribute";
    _DAT_0209a064 = 0;
    _DAT_0209a068 = 1;
    _DAT_0209a06c = &DAT_017cfad8;
    _DAT_0209a070 = 1;
  }
  FUN_010dca80(&DAT_0209a05c);
  if ((_DAT_0209a0a4 & 8) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 8;
    _DAT_0209a044 = "hkHalf";
    _DAT_0209a048 = 0;
    _DAT_0209a04c = 0;
    _DAT_0209a050 = 0xffffffff;
    _DAT_0209a054 = &DAT_017cfac8;
    _DAT_0209a058 = 1;
  }
  FUN_010dca80(&DAT_0209a044);
  if ((_DAT_0209a0a4 & 0x10) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x10;
    _DAT_0209a02c = "hkUiAttribute";
    _DAT_0209a030 = "hkUiAttribute";
    _DAT_0209a034 = 1;
    _DAT_0209a038 = 2;
    _DAT_0209a03c = &DAT_017cfab8;
    _DAT_0209a040 = 1;
  }
  FUN_010dca80(&DAT_0209a02c);
  if ((_DAT_0209a0a4 & 0x20) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x20;
    _DAT_0209a014 = 0;
    _DAT_0209a018 = "hkGeometry";
    _DAT_0209a01c = 0xffffffff;
    _DAT_0209a020 = 0;
    _DAT_0209a024 = &DAT_017cfa98;
    _DAT_0209a028 = 3;
  }
  FUN_010dca80(&DAT_0209a014);
  if ((_DAT_0209a0a4 & 0x40) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x40;
    _DAT_02099ffc = 0;
    _DAT_0209a000 = "hkGeometryTriangle";
    _DAT_0209a004 = 0xffffffff;
    _DAT_0209a008 = 0;
    _DAT_0209a00c = &DAT_017cfa70;
    _DAT_0209a010 = 4;
  }
  FUN_010dca80(&DAT_02099ffc);
  if ((_DAT_0209a0a4 & 0x80) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x80;
    _DAT_02099fe4 = 0;
    _DAT_02099fe8 = "hkxVertexBufferVertexData";
    _DAT_02099fec = 0xffffffff;
    _DAT_02099ff0 = 0;
    _DAT_02099ff4 = &DAT_017cfa10;
    _DAT_02099ff8 = 0xb;
  }
  FUN_010dca80(&DAT_02099fe4);
  if ((_DAT_0209a0a4 & 0x100) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x100;
    _DAT_02099fcc = "hkxVertexDescriptionElementDecl";
    _DAT_02099fd0 = "hkxVertexDescriptionElementDecl";
    _DAT_02099fd4 = 0;
    _DAT_02099fd8 = 1;
    _DAT_02099fdc = &DAT_017cfa00;
    _DAT_02099fe0 = 1;
  }
  FUN_010dca80(&DAT_02099fcc);
  if ((_DAT_0209a0a4 & 0x200) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x200;
    _DAT_02099fb4 = "hkxVertexBuffer";
    _DAT_02099fb8 = "hkxVertexBuffer";
    _DAT_02099fbc = 0;
    _DAT_02099fc0 = 1;
    _DAT_02099fc4 = &DAT_017cf9b8;
    _DAT_02099fc8 = 8;
  }
  FUN_010dca80(&DAT_02099fb4);
  if ((_DAT_0209a0a4 & 0x400) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x400;
    _DAT_02099f9c = "hkxVertexDescription";
    _DAT_02099fa0 = "hkxVertexDescription";
    _DAT_02099fa4 = 0;
    _DAT_02099fa8 = 1;
    _DAT_02099fac = &DAT_017cf9a8;
    _DAT_02099fb0 = 1;
  }
  FUN_010dca80(&DAT_02099f9c);
  if ((_DAT_0209a0a4 & 0x800) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x800;
    _DAT_02099f84 = 0;
    _DAT_02099f88 = "hkxEnum";
    _DAT_02099f8c = 0xffffffff;
    _DAT_02099f90 = 0;
    _DAT_02099f94 = &DAT_017cf978;
    _DAT_02099f98 = 5;
  }
  FUN_010dca80(&DAT_02099f84);
  if ((_DAT_0209a0a4 & 0x1000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x1000;
    _DAT_02099f6c = 0;
    _DAT_02099f70 = "hkxEnumItem";
    _DAT_02099f74 = 0xffffffff;
    _DAT_02099f78 = 0;
    _DAT_02099f7c = &DAT_017cf960;
    _DAT_02099f80 = 2;
  }
  FUN_010dca80(&DAT_02099f6c);
  if ((_DAT_0209a0a4 & 0x2000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x2000;
    _DAT_02099f54 = "hkxVertexP4N4C1T10";
    _DAT_02099f58 = 0;
    _DAT_02099f5c = 1;
    _DAT_02099f60 = 0xffffffff;
    _DAT_02099f64 = &DAT_017cf8e8;
    _DAT_02099f68 = 0xe;
  }
  FUN_010dca80(&DAT_02099f54);
  if ((_DAT_0209a0a4 & 0x4000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x4000;
    _DAT_02099f3c = "hkxVertexP4N4T4";
    _DAT_02099f40 = 0;
    _DAT_02099f44 = 0;
    _DAT_02099f48 = 0xffffffff;
    _DAT_02099f4c = &DAT_017cf8b0;
    _DAT_02099f50 = 6;
  }
  FUN_010dca80(&DAT_02099f3c);
  if ((_DAT_0209a0a4 & 0x8000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x8000;
    _DAT_02099f24 = "hkxVertexP4N4T4B4W4I4C1T12";
    _DAT_02099f28 = 0;
    _DAT_02099f2c = 1;
    _DAT_02099f30 = 0xffffffff;
    _DAT_02099f34 = &DAT_017cf7d8;
    _DAT_02099f38 = 0x1a;
  }
  FUN_010dca80(&DAT_02099f24);
  if ((_DAT_0209a0a4 & 0x10000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x10000;
    _DAT_02099f0c = "hkxVertexP4N4C1T2";
    _DAT_02099f10 = 0;
    _DAT_02099f14 = 1;
    _DAT_02099f18 = 0xffffffff;
    _DAT_02099f1c = &DAT_017cf7a0;
    _DAT_02099f20 = 6;
  }
  FUN_010dca80(&DAT_02099f0c);
  if ((_DAT_0209a0a4 & 0x20000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x20000;
    _DAT_02099ef4 = "hkxVertexP4N4C1T6";
    _DAT_02099ef8 = 0;
    _DAT_02099efc = 1;
    _DAT_02099f00 = 0xffffffff;
    _DAT_02099f04 = &DAT_017cf748;
    _DAT_02099f08 = 10;
  }
  FUN_010dca80(&DAT_02099ef4);
  if ((_DAT_0209a0a4 & 0x40000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x40000;
    _DAT_02099edc = "hkxVertexP4N4T4B4C1T2";
    _DAT_02099ee0 = 0;
    _DAT_02099ee4 = 1;
    _DAT_02099ee8 = 0xffffffff;
    _DAT_02099eec = &DAT_017cf700;
    _DAT_02099ef0 = 8;
  }
  FUN_010dca80(&DAT_02099edc);
  if ((_DAT_0209a0a4 & 0x80000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x80000;
    _DAT_02099ec4 = "hkxVertexP4N4T4B4C1T6";
    _DAT_02099ec8 = 0;
    _DAT_02099ecc = 1;
    _DAT_02099ed0 = 0xffffffff;
    _DAT_02099ed4 = &DAT_017cf698;
    _DAT_02099ed8 = 0xc;
  }
  FUN_010dca80(&DAT_02099ec4);
  if ((_DAT_0209a0a4 & 0x100000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x100000;
    _DAT_02099eac = "hkxVertexP4N4T4B4W4I4Q4";
    _DAT_02099eb0 = 0;
    _DAT_02099eb4 = 0;
    _DAT_02099eb8 = 0xffffffff;
    _DAT_02099ebc = &DAT_017cf650;
    _DAT_02099ec0 = 8;
  }
  FUN_010dca80(&DAT_02099eac);
  if ((_DAT_0209a0a4 & 0x200000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x200000;
    _DAT_02099e94 = "hkxVertexP4N4T4B4W4I4T6";
    _DAT_02099e98 = 0;
    _DAT_02099e9c = 0;
    _DAT_02099ea0 = 0xffffffff;
    _DAT_02099ea4 = &DAT_017cf5b8;
    _DAT_02099ea8 = 0x12;
  }
  FUN_010dca80(&DAT_02099e94);
  if ((_DAT_0209a0a4 & 0x400000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x400000;
    _DAT_02099e7c = "hkxVertexP4N4T4B4C1T10";
    _DAT_02099e80 = 0;
    _DAT_02099e84 = 1;
    _DAT_02099e88 = 0xffffffff;
    _DAT_02099e8c = &DAT_017cf530;
    _DAT_02099e90 = 0x10;
  }
  FUN_010dca80(&DAT_02099e7c);
  if ((_DAT_0209a0a4 & 0x800000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x800000;
    _DAT_02099e64 = "hkxVertexP4N4T4B4W4I4C1Q2";
    _DAT_02099e68 = 0;
    _DAT_02099e6c = 0;
    _DAT_02099e70 = 0xffffffff;
    _DAT_02099e74 = &DAT_017cf4e0;
    _DAT_02099e78 = 9;
  }
  FUN_010dca80(&DAT_02099e64);
  if ((_DAT_0209a0a4 & 0x1000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x1000000;
    _DAT_02099e4c = "hkxVertexP4N4T4B4W4I4C1T4";
    _DAT_02099e50 = 0;
    _DAT_02099e54 = 1;
    _DAT_02099e58 = 0xffffffff;
    _DAT_02099e5c = &DAT_017cf448;
    _DAT_02099e60 = 0x12;
  }
  FUN_010dca80(&DAT_02099e4c);
  if ((_DAT_0209a0a4 & 0x2000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x2000000;
    _DAT_02099e34 = "hkxVertexP4N4T4B4W4I4C1T8";
    _DAT_02099e38 = 0;
    _DAT_02099e3c = 1;
    _DAT_02099e40 = 0xffffffff;
    _DAT_02099e44 = &DAT_017cf390;
    _DAT_02099e48 = 0x16;
  }
  FUN_010dca80(&DAT_02099e34);
  if ((_DAT_0209a0a4 & 0x4000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x4000000;
    _DAT_02099e1c = "hkxVertexP4N4W4I4C1Q2";
    _DAT_02099e20 = 0;
    _DAT_02099e24 = 0;
    _DAT_02099e28 = 0xffffffff;
    _DAT_02099e2c = &DAT_017cf350;
    _DAT_02099e30 = 7;
  }
  FUN_010dca80(&DAT_02099e1c);
  if ((_DAT_0209a0a4 & 0x8000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x8000000;
    _DAT_02099e04 = "hkxVertexP4N4W4I4C1T4";
    _DAT_02099e08 = 0;
    _DAT_02099e0c = 1;
    _DAT_02099e10 = 0xffffffff;
    _DAT_02099e14 = &DAT_017cf2c8;
    _DAT_02099e18 = 0x10;
  }
  FUN_010dca80(&DAT_02099e04);
  if ((_DAT_0209a0a4 & 0x10000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x10000000;
    _DAT_02099dec = "hkxVertexP4N4W4I4C1T8";
    _DAT_02099df0 = 0;
    _DAT_02099df4 = 1;
    _DAT_02099df8 = 0xffffffff;
    _DAT_02099dfc = &DAT_017cf220;
    _DAT_02099e00 = 0x14;
  }
  FUN_010dca80(&DAT_02099dec);
  if ((_DAT_0209a0a4 & 0x20000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x20000000;
    _DAT_02099dd4 = "hkxVertexP4N4T4B4T4";
    _DAT_02099dd8 = 0;
    _DAT_02099ddc = 0;
    _DAT_02099de0 = 0xffffffff;
    _DAT_02099de4 = &DAT_017cf1d8;
    _DAT_02099de8 = 8;
  }
  FUN_010dca80(&DAT_02099dd4);
  if ((_DAT_0209a0a4 & 0x40000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x40000000;
    _DAT_02099dbc = "hkxVertexP4N4W4I4C1T12";
    _DAT_02099dc0 = 0;
    _DAT_02099dc4 = 1;
    _DAT_02099dc8 = 0xffffffff;
    _DAT_02099dcc = &DAT_017cf110;
    _DAT_02099dd0 = 0x18;
  }
  FUN_010dca80(&DAT_02099dbc);
  if ((_DAT_0209a0a4 & 0x80000000) == 0) {
    _DAT_0209a0a4 = _DAT_0209a0a4 | 0x80000000;
    _DAT_02099da4 = "hkxSparselyAnimatedString";
    _DAT_02099da8 = "hkxSparselyAnimatedString";
    _DAT_02099dac = 0;
    _DAT_02099db0 = 1;
    _DAT_02099db4 = &DAT_017cf0e8;
    _DAT_02099db8 = 4;
  }
  FUN_010dca80(&DAT_02099da4);
  if ((_DAT_02099da0 & 1) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 1;
    _DAT_02099d88 = "hkxSparselyAnimatedStringStringType";
    _DAT_02099d8c = 0;
    _DAT_02099d90 = 0;
    _DAT_02099d94 = 0xffffffff;
    _DAT_02099d98 = &DAT_017cf0d8;
    _DAT_02099d9c = 1;
  }
  FUN_010dca80(&DAT_02099d88);
  if ((_DAT_02099da0 & 2) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 2;
    _DAT_02099d70 = "hkxVertexP4N4W4I4T2";
    _DAT_02099d74 = 0;
    _DAT_02099d78 = 0;
    _DAT_02099d7c = 0xffffffff;
    _DAT_02099d80 = &DAT_017cf070;
    _DAT_02099d84 = 0xc;
  }
  FUN_010dca80(&DAT_02099d70);
  if ((_DAT_02099da0 & 4) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 4;
    _DAT_02099d58 = "hkxVertexP4N4W4I4T6";
    _DAT_02099d5c = 0;
    _DAT_02099d60 = 0;
    _DAT_02099d64 = 0xffffffff;
    _DAT_02099d68 = &DAT_017cefe8;
    _DAT_02099d6c = 0x10;
  }
  FUN_010dca80(&DAT_02099d58);
  if ((_DAT_02099da0 & 8) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 8;
    _DAT_02099d40 = "hkxTextureInplace";
    _DAT_02099d44 = "hkxTextureInplace";
    _DAT_02099d48 = 0;
    _DAT_02099d4c = 1;
    _DAT_02099d50 = &DAT_017cefd8;
    _DAT_02099d54 = 1;
  }
  FUN_010dca80(&DAT_02099d40);
  if ((_DAT_02099da0 & 0x10) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x10;
    _DAT_02099d28 = "hkxIndexBuffer";
    _DAT_02099d2c = "hkxIndexBuffer";
    _DAT_02099d30 = 0;
    _DAT_02099d34 = 1;
    _DAT_02099d38 = &DAT_017cefc8;
    _DAT_02099d3c = 1;
  }
  FUN_010dca80(&DAT_02099d28);
  if ((_DAT_02099da0 & 0x20) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x20;
    _DAT_02099d10 = "hkxVertexIntDataChannel";
    _DAT_02099d14 = "hkxVertexIntDataChannel";
    _DAT_02099d18 = 0;
    _DAT_02099d1c = 1;
    _DAT_02099d20 = &DAT_017cefb8;
    _DAT_02099d24 = 1;
  }
  FUN_010dca80(&DAT_02099d10);
  if ((_DAT_02099da0 & 0x40) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x40;
    _DAT_02099cf8 = "hkxMaterialEffect";
    _DAT_02099cfc = "hkxMaterialEffect";
    _DAT_02099d00 = 0;
    _DAT_02099d04 = 1;
    _DAT_02099d08 = &DAT_017cefa8;
    _DAT_02099d0c = 1;
  }
  FUN_010dca80(&DAT_02099cf8);
  if ((_DAT_02099da0 & 0x80) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x80;
    _DAT_02099ce0 = "hkxMeshSection";
    _DAT_02099ce4 = "hkxMeshSection";
    _DAT_02099ce8 = 0;
    _DAT_02099cec = 1;
    _DAT_02099cf0 = &DAT_017cef98;
    _DAT_02099cf4 = 1;
  }
  FUN_010dca80(&DAT_02099ce0);
  if ((_DAT_02099da0 & 0x100) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x100;
    _DAT_02099cc8 = "hkxEdgeSelectionChannel";
    _DAT_02099ccc = "hkxEdgeSelectionChannel";
    _DAT_02099cd0 = 0;
    _DAT_02099cd4 = 1;
    _DAT_02099cd8 = &DAT_017cef88;
    _DAT_02099cdc = 1;
  }
  FUN_010dca80(&DAT_02099cc8);
  if ((_DAT_02099da0 & 0x200) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x200;
    _DAT_02099cb0 = "hkxScene";
    _DAT_02099cb4 = "hkxScene";
    _DAT_02099cb8 = 0;
    _DAT_02099cbc = 1;
    _DAT_02099cc0 = &DAT_017cef78;
    _DAT_02099cc4 = 1;
  }
  FUN_010dca80(&DAT_02099cb0);
  if ((_DAT_02099da0 & 0x400) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x400;
    _DAT_02099c98 = "hkxSparselyAnimatedString";
    _DAT_02099c9c = "hkxSparselyAnimatedString";
    _DAT_02099ca0 = 1;
    _DAT_02099ca4 = 2;
    _DAT_02099ca8 = &DAT_017cef68;
    _DAT_02099cac = 1;
  }
  FUN_010dca80(&DAT_02099c98);
  if ((_DAT_02099da0 & 0x800) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x800;
    _DAT_02099c80 = "hkxSparselyAnimatedBool";
    _DAT_02099c84 = "hkxSparselyAnimatedBool";
    _DAT_02099c88 = 0;
    _DAT_02099c8c = 1;
    _DAT_02099c90 = &DAT_017cef58;
    _DAT_02099c94 = 1;
  }
  FUN_010dca80(&DAT_02099c80);
  if ((_DAT_02099da0 & 0x1000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x1000;
    _DAT_02099c68 = "hkxSparselyAnimatedInt";
    _DAT_02099c6c = "hkxSparselyAnimatedInt";
    _DAT_02099c70 = 0;
    _DAT_02099c74 = 1;
    _DAT_02099c78 = &DAT_017cef48;
    _DAT_02099c7c = 1;
  }
  FUN_010dca80(&DAT_02099c68);
  if ((_DAT_02099da0 & 0x2000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x2000;
    _DAT_02099c50 = "hkxMesh";
    _DAT_02099c54 = "hkxMesh";
    _DAT_02099c58 = 0;
    _DAT_02099c5c = 1;
    _DAT_02099c60 = &DAT_017cef38;
    _DAT_02099c64 = 1;
  }
  FUN_010dca80(&DAT_02099c50);
  if ((_DAT_02099da0 & 0x4000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x4000;
    _DAT_02099c38 = "hkxAnimatedFloat";
    _DAT_02099c3c = "hkxAnimatedFloat";
    _DAT_02099c40 = 0;
    _DAT_02099c44 = 1;
    _DAT_02099c48 = &DAT_017cef28;
    _DAT_02099c4c = 1;
  }
  FUN_010dca80(&DAT_02099c38);
  if ((_DAT_02099da0 & 0x8000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x8000;
    _DAT_02099c20 = "hkxTriangleSelectionChannel";
    _DAT_02099c24 = "hkxTriangleSelectionChannel";
    _DAT_02099c28 = 0;
    _DAT_02099c2c = 1;
    _DAT_02099c30 = &DAT_017cef18;
    _DAT_02099c34 = 1;
  }
  FUN_010dca80(&DAT_02099c20);
  if ((_DAT_02099da0 & 0x10000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x10000;
    _DAT_02099c08 = "hkxSparselyAnimatedEnum";
    _DAT_02099c0c = "hkxSparselyAnimatedEnum";
    _DAT_02099c10 = 0;
    _DAT_02099c14 = 1;
    _DAT_02099c18 = &DAT_017ceef0;
    _DAT_02099c1c = 4;
  }
  FUN_010dca80(&DAT_02099c08);
  if ((_DAT_02099da0 & 0x20000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x20000;
    _DAT_02099bf0 = "hkxMaterialShaderSet";
    _DAT_02099bf4 = "hkxMaterialShaderSet";
    _DAT_02099bf8 = 0;
    _DAT_02099bfc = 1;
    _DAT_02099c00 = &DAT_017ceee0;
    _DAT_02099c04 = 1;
  }
  FUN_010dca80(&DAT_02099bf0);
  if ((_DAT_02099da0 & 0x40000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x40000;
    _DAT_02099bd8 = "hkxVertexSelectionChannel";
    _DAT_02099bdc = "hkxVertexSelectionChannel";
    _DAT_02099be0 = 0;
    _DAT_02099be4 = 1;
    _DAT_02099be8 = &DAT_017ceed0;
    _DAT_02099bec = 1;
  }
  FUN_010dca80(&DAT_02099bd8);
  if ((_DAT_02099da0 & 0x80000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x80000;
    _DAT_02099bc0 = "hkxAnimatedQuaternion";
    _DAT_02099bc4 = "hkxAnimatedQuaternion";
    _DAT_02099bc8 = 0;
    _DAT_02099bcc = 1;
    _DAT_02099bd0 = &DAT_017ceec0;
    _DAT_02099bd4 = 1;
  }
  FUN_010dca80(&DAT_02099bc0);
  if ((_DAT_02099da0 & 0x100000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x100000;
    _DAT_02099ba8 = "hkxVertexFloatDataChannel";
    _DAT_02099bac = "hkxVertexFloatDataChannel";
    _DAT_02099bb0 = 0;
    _DAT_02099bb4 = 1;
    _DAT_02099bb8 = &DAT_017ceeb0;
    _DAT_02099bbc = 1;
  }
  FUN_010dca80(&DAT_02099ba8);
  if ((_DAT_02099da0 & 0x200000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x200000;
    _DAT_02099b90 = "hkxTextureFile";
    _DAT_02099b94 = "hkxTextureFile";
    _DAT_02099b98 = 0;
    _DAT_02099b9c = 1;
    _DAT_02099ba0 = &DAT_017ceea0;
    _DAT_02099ba4 = 1;
  }
  FUN_010dca80(&DAT_02099b90);
  if ((_DAT_02099da0 & 0x400000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x400000;
    _DAT_02099b78 = "hkxLight";
    _DAT_02099b7c = "hkxLight";
    _DAT_02099b80 = 0;
    _DAT_02099b84 = 1;
    _DAT_02099b88 = &DAT_017cee90;
    _DAT_02099b8c = 1;
  }
  FUN_010dca80(&DAT_02099b78);
  if ((_DAT_02099da0 & 0x800000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x800000;
    _DAT_02099b60 = "hkxAnimatedMatrix";
    _DAT_02099b64 = "hkxAnimatedMatrix";
    _DAT_02099b68 = 0;
    _DAT_02099b6c = 1;
    _DAT_02099b70 = &DAT_017cee80;
    _DAT_02099b74 = 1;
  }
  FUN_010dca80(&DAT_02099b60);
  if ((_DAT_02099da0 & 0x1000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x1000000;
    _DAT_02099b48 = "hkxAttributeHolder";
    _DAT_02099b4c = "hkxAttributeHolder";
    _DAT_02099b50 = 0;
    _DAT_02099b54 = 1;
    _DAT_02099b58 = &DAT_017cee70;
    _DAT_02099b5c = 1;
  }
  FUN_010dca80(&DAT_02099b48);
  if ((_DAT_02099da0 & 0x2000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x2000000;
    _DAT_02099b30 = "hkAlignSceneToNodeOptions";
    _DAT_02099b34 = "hkAlignSceneToNodeOptions";
    _DAT_02099b38 = 0;
    _DAT_02099b3c = 1;
    _DAT_02099b40 = &DAT_017cee58;
    _DAT_02099b44 = 2;
  }
  FUN_010dca80(&DAT_02099b30);
  if ((_DAT_02099da0 & 0x4000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x4000000;
    _DAT_02099b18 = "hkxMaterialShader";
    _DAT_02099b1c = "hkxMaterialShader";
    _DAT_02099b20 = 0;
    _DAT_02099b24 = 1;
    _DAT_02099b28 = &DAT_017cee48;
    _DAT_02099b2c = 1;
  }
  FUN_010dca80(&DAT_02099b18);
  if ((_DAT_02099da0 & 0x8000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x8000000;
    _DAT_02099b00 = "hkxSkinBinding";
    _DAT_02099b04 = "hkxSkinBinding";
    _DAT_02099b08 = 0;
    _DAT_02099b0c = 1;
    _DAT_02099b10 = &DAT_017cee38;
    _DAT_02099b14 = 1;
  }
  FUN_010dca80(&DAT_02099b00);
  if ((_DAT_02099da0 & 0x10000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x10000000;
    _DAT_02099ae8 = "hkxCamera";
    _DAT_02099aec = "hkxCamera";
    _DAT_02099af0 = 0;
    _DAT_02099af4 = 1;
    _DAT_02099af8 = &DAT_017cee28;
    _DAT_02099afc = 1;
  }
  FUN_010dca80(&DAT_02099ae8);
  if ((_DAT_02099da0 & 0x20000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x20000000;
    _DAT_02099ad0 = "hkxVertexVectorDataChannel";
    _DAT_02099ad4 = "hkxVertexVectorDataChannel";
    _DAT_02099ad8 = 0;
    _DAT_02099adc = 1;
    _DAT_02099ae0 = &DAT_017cee18;
    _DAT_02099ae4 = 1;
  }
  FUN_010dca80(&DAT_02099ad0);
  if ((_DAT_02099da0 & 0x40000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x40000000;
    _DAT_02099ab8 = "hkxAnimatedVector";
    _DAT_02099abc = "hkxAnimatedVector";
    _DAT_02099ac0 = 0;
    _DAT_02099ac4 = 1;
    _DAT_02099ac8 = &DAT_017cee08;
    _DAT_02099acc = 1;
  }
  FUN_010dca80(&DAT_02099ab8);
  if ((_DAT_02099da0 & 0x80000000) == 0) {
    _DAT_02099da0 = _DAT_02099da0 | 0x80000000;
    _DAT_02099aa0 = "hkMemoryResourceHandleExternalLink";
    _DAT_02099aa4 = "hkMemoryResourceHandleExternalLink";
    _DAT_02099aa8 = 0;
    _DAT_02099aac = 1;
    _DAT_02099ab0 = &DAT_017cedf0;
    _DAT_02099ab4 = 2;
  }
  FUN_010dca80(&DAT_02099aa0);
  if ((_DAT_02099a9c & 1) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 1;
    _DAT_02099a84 = "hkMemoryResourceHandle";
    _DAT_02099a88 = "hkMemoryResourceHandle";
    _DAT_02099a8c = 0;
    _DAT_02099a90 = 1;
    _DAT_02099a94 = &DAT_017cede0;
    _DAT_02099a98 = 1;
  }
  FUN_010dca80(&DAT_02099a84);
  if ((_DAT_02099a9c & 2) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 2;
    _DAT_02099a6c = "hkMemoryResourceContainer";
    _DAT_02099a70 = "hkMemoryResourceContainer";
    _DAT_02099a74 = 0;
    _DAT_02099a78 = 1;
    _DAT_02099a7c = &DAT_017cedd0;
    _DAT_02099a80 = 1;
  }
  FUN_010dca80(&DAT_02099a6c);
  if ((_DAT_02099a9c & 4) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 4;
    _DAT_02099a54 = "hkMeshSectionCinfo";
    _DAT_02099a58 = "hkMeshSectionCinfo";
    _DAT_02099a5c = 0;
    _DAT_02099a60 = 1;
    _DAT_02099a64 = &DAT_017cedc0;
    _DAT_02099a68 = 1;
  }
  FUN_010dca80(&DAT_02099a54);
  if ((_DAT_02099a9c & 8) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 8;
    _DAT_02099a3c = "hkMeshSection";
    _DAT_02099a40 = "hkMeshSection";
    _DAT_02099a44 = 0;
    _DAT_02099a48 = 1;
    _DAT_02099a4c = &DAT_017cedb0;
    _DAT_02099a50 = 1;
  }
  FUN_010dca80(&DAT_02099a3c);
  if ((_DAT_02099a9c & 0x10) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x10;
    _DAT_02099a24 = "hkxEnvironment";
    _DAT_02099a28 = "hkxEnvironment";
    _DAT_02099a2c = 0;
    _DAT_02099a30 = 1;
    _DAT_02099a34 = &DAT_017ceda0;
    _DAT_02099a38 = 1;
  }
  FUN_010dca80(&DAT_02099a24);
  if ((_DAT_02099a9c & 0x20) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x20;
    _DAT_02099a0c = "hkMemoryResourceHandle";
    _DAT_02099a10 = "hkMemoryResourceHandle";
    _DAT_02099a14 = 1;
    _DAT_02099a18 = 2;
    _DAT_02099a1c = &DAT_017ced90;
    _DAT_02099a20 = 1;
  }
  FUN_010dca80(&DAT_02099a0c);
  if ((_DAT_02099a9c & 0x40) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x40;
    _DAT_020999f4 = "hkAlignSceneToNodeOptions";
    _DAT_020999f8 = "hkAlignSceneToNodeOptions";
    _DAT_020999fc = 1;
    _DAT_02099a00 = 2;
    _DAT_02099a04 = &DAT_017ced80;
    _DAT_02099a08 = 1;
  }
  FUN_010dca80(&DAT_020999f4);
  if ((_DAT_02099a9c & 0x80) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x80;
    _DAT_020999dc = "hkxNode";
    _DAT_020999e0 = "hkxNode";
    _DAT_020999e4 = 0;
    _DAT_020999e8 = 1;
    _DAT_020999ec = &DAT_017ced78;
    _DAT_020999f0 = 0;
  }
  FUN_010dca80(&DAT_020999dc);
  if ((_DAT_02099a9c & 0x100) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x100;
    _DAT_020999c4 = "hkxSkinBinding";
    _DAT_020999c8 = "hkxSkinBinding";
    _DAT_020999cc = 1;
    _DAT_020999d0 = 2;
    _DAT_020999d4 = &DAT_017ced50;
    _DAT_020999d8 = 4;
  }
  FUN_010dca80(&DAT_020999c4);
  if ((_DAT_02099a9c & 0x200) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x200;
    _DAT_020999ac = 0;
    _DAT_020999b0 = "hkMemoryMeshMaterial";
    _DAT_020999b4 = 0xffffffff;
    _DAT_020999b8 = 0;
    _DAT_020999bc = &DAT_017ced10;
    _DAT_020999c0 = 7;
  }
  FUN_010dca80(&DAT_020999ac);
  if ((_DAT_02099a9c & 0x400) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x400;
    _DAT_02099994 = 0;
    _DAT_02099998 = "hkMemoryMeshVertexBuffer";
    _DAT_0209999c = 0xffffffff;
    _DAT_020999a0 = 0;
    _DAT_020999a4 = &DAT_017ceca8;
    _DAT_020999a8 = 0xc;
  }
  FUN_010dca80(&DAT_02099994);
  if ((_DAT_02099a9c & 0x800) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x800;
    _DAT_0209997c = 0;
    _DAT_02099980 = "hkVertexFormatElement";
    _DAT_02099984 = 0xffffffff;
    _DAT_02099988 = 0;
    _DAT_0209998c = &DAT_017cec70;
    _DAT_02099990 = 6;
  }
  FUN_010dca80(&DAT_0209997c);
  if ((_DAT_02099a9c & 0x1000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x1000;
    _DAT_02099964 = 0;
    _DAT_02099968 = "hkMultipleVertexBufferElementInfo";
    _DAT_0209996c = 0xffffffff;
    _DAT_02099970 = 0;
    _DAT_02099974 = &DAT_017cec58;
    _DAT_02099978 = 2;
  }
  FUN_010dca80(&DAT_02099964);
  if ((_DAT_02099a9c & 0x2000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x2000;
    _DAT_0209994c = 0;
    _DAT_02099950 = "hkMultipleVertexBuffer";
    _DAT_02099954 = 0xffffffff;
    _DAT_02099958 = 0;
    _DAT_0209995c = &DAT_017cebb0;
    _DAT_02099960 = 0x14;
  }
  FUN_010dca80(&DAT_0209994c);
  if ((_DAT_02099a9c & 0x4000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x4000;
    _DAT_02099934 = 0;
    _DAT_02099938 = "hkIndexedTransformSet";
    _DAT_0209993c = 0xffffffff;
    _DAT_02099940 = 0;
    _DAT_02099944 = &DAT_017ceb68;
    _DAT_02099948 = 8;
  }
  FUN_010dca80(&DAT_02099934);
  if ((_DAT_02099a9c & 0x8000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x8000;
    _DAT_0209991c = 0;
    _DAT_02099920 = "hkMeshBody";
    _DAT_02099924 = 0xffffffff;
    _DAT_02099928 = 0;
    _DAT_0209992c = &DAT_017ceb48;
    _DAT_02099930 = 3;
  }
  FUN_010dca80(&DAT_0209991c);
  if ((_DAT_02099a9c & 0x10000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x10000;
    _DAT_02099904 = 0;
    _DAT_02099908 = "hkMemoryMeshTexture";
    _DAT_0209990c = 0xffffffff;
    _DAT_02099910 = 0;
    _DAT_02099914 = &DAT_017ceb00;
    _DAT_02099918 = 8;
  }
  FUN_010dca80(&DAT_02099904);
  if ((_DAT_02099a9c & 0x20000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x20000;
    _DAT_020998ec = 0;
    _DAT_020998f0 = "hkMemoryMeshBody";
    _DAT_020998f4 = 0xffffffff;
    _DAT_020998f8 = 0;
    _DAT_020998fc = &DAT_017cea98;
    _DAT_02099900 = 0xc;
  }
  FUN_010dca80(&DAT_020998ec);
  if ((_DAT_02099a9c & 0x40000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x40000;
    _DAT_020998d4 = 0;
    _DAT_020998d8 = "hkMeshTexture";
    _DAT_020998dc = 0xffffffff;
    _DAT_020998e0 = 0;
    _DAT_020998e4 = &DAT_017cea78;
    _DAT_020998e8 = 3;
  }
  FUN_010dca80(&DAT_020998d4);
  if ((_DAT_02099a9c & 0x80000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x80000;
    _DAT_020998bc = 0;
    _DAT_020998c0 = "hkMultipleVertexBufferVertexBufferInfo";
    _DAT_020998c4 = 0xffffffff;
    _DAT_020998c8 = 0;
    _DAT_020998cc = &DAT_017cea48;
    _DAT_020998d0 = 5;
  }
  FUN_010dca80(&DAT_020998bc);
  if ((_DAT_02099a9c & 0x100000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x100000;
    _DAT_020998a4 = 0;
    _DAT_020998a8 = "hkMultipleVertexBufferLockedElement";
    _DAT_020998ac = 0xffffffff;
    _DAT_020998b0 = 0;
    _DAT_020998b4 = &DAT_017cea08;
    _DAT_020998b8 = 7;
  }
  FUN_010dca80(&DAT_020998a4);
  if ((_DAT_02099a9c & 0x200000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x200000;
    _DAT_0209988c = 0;
    _DAT_02099890 = "hkVertexFormat";
    _DAT_02099894 = 0xffffffff;
    _DAT_02099898 = 0;
    _DAT_0209989c = &DAT_017ce9e4;
    _DAT_020998a0 = 3;
  }
  FUN_010dca80(&DAT_0209988c);
  if ((_DAT_02099a9c & 0x400000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x400000;
    _DAT_02099874 = 0;
    _DAT_02099878 = "hkMeshBoneIndexMapping";
    _DAT_0209987c = 0xffffffff;
    _DAT_02099880 = 0;
    _DAT_02099884 = &DAT_017ce9d4;
    _DAT_02099888 = 1;
  }
  FUN_010dca80(&DAT_02099874);
  if ((_DAT_02099a9c & 0x800000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x800000;
    _DAT_0209985c = "hkIndexedTransformSet";
    _DAT_02099860 = "hkIndexedTransformSet";
    _DAT_02099864 = 0;
    _DAT_02099868 = 1;
    _DAT_0209986c = &DAT_017ce9bc;
    _DAT_02099870 = 2;
  }
  FUN_010dca80(&DAT_0209985c);
  if ((_DAT_02099a9c & 0x1000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x1000000;
    _DAT_02099844 = "hkMemoryMeshTexture";
    _DAT_02099848 = "hkMemoryMeshTexture";
    _DAT_0209984c = 0;
    _DAT_02099850 = 1;
    _DAT_02099854 = &DAT_017ce9ac;
    _DAT_02099858 = 1;
  }
  FUN_010dca80(&DAT_02099844);
  if ((_DAT_02099a9c & 0x2000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x2000000;
    _DAT_0209982c = "hkPackfileHeader";
    _DAT_02099830 = "hkPackfileHeader";
    _DAT_02099834 = 0;
    _DAT_02099838 = 1;
    _DAT_0209983c = &DAT_017ce98c;
    _DAT_02099840 = 3;
  }
  FUN_010dca80(&DAT_0209982c);
  if ((_DAT_02099a9c & 0x4000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x4000000;
    _DAT_02099814 = "hkMemoryMeshTexture";
    _DAT_02099818 = "hkMemoryMeshTexture";
    _DAT_0209981c = 1;
    _DAT_02099820 = 2;
    _DAT_02099824 = &DAT_017ce974;
    _DAT_02099828 = 2;
  }
  FUN_010dca80(&DAT_02099814);
  if ((_DAT_02099a9c & 0x8000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x8000000;
    _DAT_020997fc = 0;
    _DAT_02099800 = "hkxMaterialProperty";
    _DAT_02099804 = 0xffffffff;
    _DAT_02099808 = 0;
    _DAT_0209980c = &DAT_017ce95c;
    _DAT_02099810 = 2;
  }
  FUN_010dca80(&DAT_020997fc);
  if ((_DAT_02099a9c & 0x10000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x10000000;
    _DAT_020997e4 = "hkxMaterial";
    _DAT_020997e8 = "hkxMaterial";
    _DAT_020997ec = 0;
    _DAT_020997f0 = 1;
    _DAT_020997f4 = &DAT_017ce944;
    _DAT_020997f8 = 2;
  }
  FUN_010dca80(&DAT_020997e4);
  if ((_DAT_02099a9c & 0x20000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x20000000;
    _DAT_020997cc = 0;
    _DAT_020997d0 = "hkHalf8";
    _DAT_020997d4 = 0xffffffff;
    _DAT_020997d8 = 0;
    _DAT_020997dc = &DAT_017ce934;
    _DAT_020997e0 = 1;
  }
  FUN_010dca80(&DAT_020997cc);
  if ((_DAT_02099a9c & 0x40000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x40000000;
    _DAT_020997b4 = "hkMemoryMeshVertexBuffer";
    _DAT_020997b8 = "hkMemoryMeshVertexBuffer";
    _DAT_020997bc = 0;
    _DAT_020997c0 = 1;
    _DAT_020997c4 = &DAT_017ce924;
    _DAT_020997c8 = 1;
  }
  FUN_010dca80(&DAT_020997b4);
  if ((_DAT_02099a9c & 0x80000000) == 0) {
    _DAT_02099a9c = _DAT_02099a9c | 0x80000000;
    _DAT_0209979c = "hkMotionState";
    _DAT_020997a0 = "hkMotionState";
    _DAT_020997a4 = 0;
    _DAT_020997a8 = 1;
    _DAT_020997ac = &DAT_017ce90c;
    _DAT_020997b0 = 2;
  }
  FUN_010dca80(&DAT_0209979c);
  if ((_DAT_02099798 & 1) == 0) {
    _DAT_02099798 = _DAT_02099798 | 1;
    _DAT_02099780 = "hkHalf8";
    _DAT_02099784 = "hkHalf8";
    _DAT_02099788 = 0;
    _DAT_0209978c = 1;
    _DAT_02099790 = &DAT_017ce8fc;
    _DAT_02099794 = 1;
  }
  FUN_010dca80(&DAT_02099780);
  if ((_DAT_02099798 & 2) == 0) {
    _DAT_02099798 = _DAT_02099798 | 2;
    _DAT_02099768 = 0;
    _DAT_0209976c = "hkAabbHalf";
    _DAT_02099770 = 0xffffffff;
    _DAT_02099774 = 0;
    _DAT_02099778 = &DAT_017ce8e4;
    _DAT_0209977c = 2;
  }
  FUN_010dca80(&DAT_02099768);
  if ((_DAT_02099798 & 4) == 0) {
    _DAT_02099798 = _DAT_02099798 | 4;
    _DAT_02099750 = "hkxVertexDescriptionElementDecl";
    _DAT_02099754 = "hkxVertexDescriptionElementDecl";
    _DAT_02099758 = 1;
    _DAT_0209975c = 2;
    _DAT_02099760 = &DAT_017ce8cc;
    _DAT_02099764 = 2;
  }
  FUN_010dca80(&DAT_02099750);
  if ((_DAT_02099798 & 8) == 0) {
    _DAT_02099798 = _DAT_02099798 | 8;
    _DAT_02099738 = 0;
    _DAT_0209973c = "hkPackedVector3";
    _DAT_02099740 = 0xffffffff;
    _DAT_02099744 = 0;
    _DAT_02099748 = &DAT_017ce8bc;
    _DAT_0209974c = 1;
  }
  FUN_010dca80(&DAT_02099738);
  if ((_DAT_02099798 & 0x10) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x10;
    _DAT_02099720 = 0;
    _DAT_02099724 = "hkQTransform";
    _DAT_02099728 = 0xffffffff;
    _DAT_0209972c = 0;
    _DAT_02099730 = &DAT_017ce8a4;
    _DAT_02099734 = 2;
  }
  FUN_010dca80(&DAT_02099720);
  if ((_DAT_02099798 & 0x20) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x20;
    _DAT_02099708 = 0;
    _DAT_0209970c = "hkPostFinishAttribute";
    _DAT_02099710 = 0xffffffff;
    _DAT_02099714 = 0;
    _DAT_02099718 = &DAT_017ce89c;
    _DAT_0209971c = 0;
  }
  FUN_010dca80(&DAT_02099708);
  if ((_DAT_02099798 & 0x40) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x40;
    _DAT_020996f0 = 0;
    _DAT_020996f4 = "hkFourTransposedPoints";
    _DAT_020996f8 = 0xffffffff;
    _DAT_020996fc = 0;
    _DAT_02099700 = &DAT_017ce88c;
    _DAT_02099704 = 1;
  }
  FUN_010dca80(&DAT_020996f0);
  if ((_DAT_02099798 & 0x80) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x80;
    _DAT_020996d8 = "hkHalf8";
    _DAT_020996dc = "hkHalf8";
    _DAT_020996e0 = 1;
    _DAT_020996e4 = 2;
    _DAT_020996e8 = &DAT_017ce86c;
    _DAT_020996ec = 3;
  }
  FUN_010dca80(&DAT_020996d8);
  if ((_DAT_02099798 & 0x100) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x100;
    _DAT_020996c0 = "hkxMaterial";
    _DAT_020996c4 = "hkxMaterial";
    _DAT_020996c8 = 1;
    _DAT_020996cc = 2;
    _DAT_020996d0 = &DAT_017ce844;
    _DAT_020996d4 = 4;
  }
  FUN_010dca80(&DAT_020996c0);
  if ((_DAT_02099798 & 0x200) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x200;
    _DAT_020996a8 = "hkMemoryResourceHandle";
    _DAT_020996ac = "hkMemoryResourceHandle";
    _DAT_020996b0 = 2;
    _DAT_020996b4 = 3;
    _DAT_020996b8 = &DAT_017ce81c;
    _DAT_020996bc = 4;
  }
  FUN_010dca80(&DAT_020996a8);
  if ((_DAT_02099798 & 0x400) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x400;
    _DAT_02099690 = "hkxMaterialTextureStage";
    _DAT_02099694 = "hkxMaterialTextureStage";
    _DAT_02099698 = 0;
    _DAT_0209969c = 1;
    _DAT_020996a0 = &DAT_017ce7f4;
    _DAT_020996a4 = 4;
  }
  FUN_010dca80(&DAT_02099690);
  if ((_DAT_02099798 & 0x800) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x800;
    _DAT_02099678 = "hkxMeshSection";
    _DAT_0209967c = "hkxMeshSection";
    _DAT_02099680 = 1;
    _DAT_02099684 = 2;
    _DAT_02099688 = &DAT_017ce7cc;
    _DAT_0209968c = 4;
  }
  FUN_010dca80(&DAT_02099678);
  if ((_DAT_02099798 & 0x1000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x1000;
    _DAT_02099660 = "hkRootLevelContainerNamedVariant";
    _DAT_02099664 = "hkRootLevelContainerNamedVariant";
    _DAT_02099668 = 0;
    _DAT_0209966c = 1;
    _DAT_02099670 = &DAT_017ce7a4;
    _DAT_02099674 = 4;
  }
  FUN_010dca80(&DAT_02099660);
  if ((_DAT_02099798 & 0x2000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x2000;
    _DAT_02099648 = "hkxAttribute";
    _DAT_0209964c = "hkxAttribute";
    _DAT_02099650 = 0;
    _DAT_02099654 = 1;
    _DAT_02099658 = &DAT_017ce77c;
    _DAT_0209965c = 4;
  }
  FUN_010dca80(&DAT_02099648);
  if ((_DAT_02099798 & 0x4000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x4000;
    _DAT_02099630 = "hkxNode";
    _DAT_02099634 = "hkxNode";
    _DAT_02099638 = 1;
    _DAT_0209963c = 2;
    _DAT_02099640 = &DAT_017ce754;
    _DAT_02099644 = 4;
  }
  FUN_010dca80(&DAT_02099630);
  if ((_DAT_02099798 & 0x8000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x8000;
    _DAT_02099618 = "hkxAttributeHolder";
    _DAT_0209961c = "hkxAttributeHolder";
    _DAT_02099620 = 1;
    _DAT_02099624 = 2;
    _DAT_02099628 = &DAT_017ce72c;
    _DAT_0209962c = 4;
  }
  FUN_010dca80(&DAT_02099618);
  if ((_DAT_02099798 & 0x10000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x10000;
    _DAT_02099600 = "hkIndexedTransformSet";
    _DAT_02099604 = "hkIndexedTransformSet";
    _DAT_02099608 = 1;
    _DAT_0209960c = 2;
    _DAT_02099610 = &DAT_017ce704;
    _DAT_02099614 = 4;
  }
  FUN_010dca80(&DAT_02099600);
  if ((_DAT_02099798 & 0x20000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x20000;
    _DAT_020995e8 = "hkClass";
    _DAT_020995ec = "hkClass";
    _DAT_020995f0 = 0;
    _DAT_020995f4 = 1;
    _DAT_020995f8 = &DAT_017ce6dc;
    _DAT_020995fc = 4;
  }
  FUN_010dca80(&DAT_020995e8);
  if ((_DAT_02099798 & 0x40000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x40000;
    _DAT_020995d0 = "hkMemoryMeshMaterial";
    _DAT_020995d4 = "hkMemoryMeshMaterial";
    _DAT_020995d8 = 0;
    _DAT_020995dc = 1;
    _DAT_020995e0 = &DAT_017ce6b4;
    _DAT_020995e4 = 4;
  }
  FUN_010dca80(&DAT_020995d0);
  if ((_DAT_02099798 & 0x80000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x80000;
    _DAT_020995b8 = 0;
    _DAT_020995bc = "hkDemoReplayUtilityFrame";
    _DAT_020995c0 = 0xffffffff;
    _DAT_020995c4 = 0;
    _DAT_020995c8 = &DAT_017ce640;
    _DAT_020995cc = 10;
  }
  FUN_010dca80(&DAT_020995b8);
  if ((_DAT_02099798 & 0x100000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x100000;
    _DAT_020995a0 = 0;
    _DAT_020995a4 = "hkDemoReplayUtilityMouseCallbacks";
    _DAT_020995a8 = 0xffffffff;
    _DAT_020995ac = 0;
    _DAT_020995b0 = &DAT_017ce5fc;
    _DAT_020995b4 = 3;
  }
  FUN_010dca80(&DAT_020995a0);
  if ((_DAT_02099798 & 0x200000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x200000;
    _DAT_02099588 = 0;
    _DAT_0209958c = "hkDemoReplayUtility";
    _DAT_02099590 = 0xffffffff;
    _DAT_02099594 = 0;
    _DAT_02099598 = &DAT_017ce5b0;
    _DAT_0209959c = 6;
  }
  FUN_010dca80(&DAT_02099588);
  if ((_DAT_02099798 & 0x400000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x400000;
    _DAT_02099570 = 0;
    _DAT_02099574 = "hkDemoReplayUtilityReplayData";
    _DAT_02099578 = 0xffffffff;
    _DAT_0209957c = 0;
    _DAT_02099580 = &DAT_017ce550;
    _DAT_02099584 = 7;
  }
  FUN_010dca80(&DAT_02099570);
  if ((_DAT_02099798 & 0x800000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x800000;
    _DAT_02099558 = 0;
    _DAT_0209955c = "hkDemoReplayUtilityCamera";
    _DAT_02099560 = 0xffffffff;
    _DAT_02099564 = 0;
    _DAT_02099568 = &DAT_017ce510;
    _DAT_0209956c = 3;
  }
  FUN_010dca80(&DAT_02099558);
  if ((_DAT_02099798 & 0x1000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x1000000;
    _DAT_02099540 = "hkHalf8";
    _DAT_02099544 = 0;
    _DAT_02099548 = 2;
    _DAT_0209954c = 0xffffffff;
    _DAT_02099550 = &DAT_017ce500;
    _DAT_02099554 = 1;
  }
  FUN_010dca80(&DAT_02099540);
  if ((_DAT_02099798 & 0x2000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x2000000;
    _DAT_02099528 = 0;
    _DAT_0209952c = "hkRefCountedPropertiesEntry";
    _DAT_02099530 = 0xffffffff;
    _DAT_02099534 = 0;
    _DAT_02099538 = &DAT_017ce4d0;
    _DAT_0209953c = 5;
  }
  FUN_010dca80(&DAT_02099528);
  if ((_DAT_02099798 & 0x4000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x4000000;
    _DAT_02099510 = 0;
    _DAT_02099514 = "hkRefCountedProperties";
    _DAT_02099518 = 0xffffffff;
    _DAT_0209951c = 0;
    _DAT_02099520 = &DAT_017ce4a0;
    _DAT_02099524 = 5;
  }
  FUN_010dca80(&DAT_02099510);
  if ((_DAT_02099798 & 0x8000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x8000000;
    _DAT_020994f8 = 0;
    _DAT_020994fc = "hkFloat16";
    _DAT_02099500 = 0xffffffff;
    _DAT_02099504 = 0;
    _DAT_02099508 = &DAT_017ce490;
    _DAT_0209950c = 1;
  }
  FUN_010dca80(&DAT_020994f8);
  if ((_DAT_02099798 & 0x10000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x10000000;
    _DAT_020994e0 = 0;
    _DAT_020994e4 = "hkFloat16Transform";
    _DAT_020994e8 = 0xffffffff;
    _DAT_020994ec = 0;
    _DAT_020994f0 = &DAT_017ce478;
    _DAT_020994f4 = 2;
  }
  FUN_010dca80(&DAT_020994e0);
  if ((_DAT_02099798 & 0x20000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x20000000;
    _DAT_020994c8 = 0;
    _DAT_020994cc = "hkSetunsignedinthkContainerHeapAllocatorhkMapOperationsunsignedint";
    _DAT_020994d0 = 0xffffffff;
    _DAT_020994d4 = 0;
    _DAT_020994d8 = &DAT_017ce460;
    _DAT_020994dc = 2;
  }
  FUN_010dca80(&DAT_020994c8);
  if ((_DAT_02099798 & 0x40000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x40000000;
    _DAT_020994b0 = 0;
    _DAT_020994b4 = "hkSetUint32";
    _DAT_020994b8 = 0xffffffff;
    _DAT_020994bc = 0;
    _DAT_020994c0 = &DAT_017ce448;
    _DAT_020994c4 = 2;
  }
  FUN_010dca80(&DAT_020994b0);
  if ((_DAT_02099798 & 0x80000000) == 0) {
    _DAT_02099798 = _DAT_02099798 | 0x80000000;
    _DAT_02099498 = 0;
    _DAT_0209949c = "hkxBlob";
    _DAT_020994a0 = 0xffffffff;
    _DAT_020994a4 = 1;
    _DAT_020994a8 = &DAT_017ce418;
    _DAT_020994ac = 4;
  }
  FUN_010dca80(&DAT_02099498);
  if ((_DAT_02099494 & 1) == 0) {
    _DAT_02099494 = _DAT_02099494 | 1;
    _DAT_0209947c = 0;
    _DAT_02099480 = "hkSkinnedMeshShapePart";
    _DAT_02099484 = 0xffffffff;
    _DAT_02099488 = 0;
    _DAT_0209948c = &DAT_017ce3c0;
    _DAT_02099490 = 7;
  }
  FUN_010dca80(&DAT_0209947c);
  if ((_DAT_02099494 & 2) == 0) {
    _DAT_02099494 = _DAT_02099494 | 2;
    _DAT_02099464 = 0;
    _DAT_02099468 = "hkSkinnedMeshShapeBoneSection";
    _DAT_0209946c = 0xffffffff;
    _DAT_02099470 = 0;
    _DAT_02099474 = &DAT_017ce364;
    _DAT_02099478 = 6;
  }
  FUN_010dca80(&DAT_02099464);
  if ((_DAT_02099494 & 4) == 0) {
    _DAT_02099494 = _DAT_02099494 | 4;
    _DAT_0209944c = 0;
    _DAT_02099450 = "hkSkinnedMeshShape";
    _DAT_02099454 = 0xffffffff;
    _DAT_02099458 = 0;
    _DAT_0209945c = &DAT_017ce330;
    _DAT_02099460 = 3;
  }
  FUN_010dca80(&DAT_0209944c);
  if ((_DAT_02099494 & 8) == 0) {
    _DAT_02099494 = _DAT_02099494 | 8;
    _DAT_02099434 = 0;
    _DAT_02099438 = "hkSkinnedRefMeshShape";
    _DAT_0209943c = 0xffffffff;
    _DAT_02099440 = 0;
    _DAT_02099444 = &DAT_017ce2c0;
    _DAT_02099448 = 10;
  }
  FUN_010dca80(&DAT_02099434);
  if ((_DAT_02099494 & 0x10) == 0) {
    _DAT_02099494 = _DAT_02099494 | 0x10;
    _DAT_0209941c = 0;
    _DAT_02099420 = "hkStorageSkinnedMeshShape";
    _DAT_02099424 = 0xffffffff;
    _DAT_02099428 = 0;
    _DAT_0209942c = &DAT_017ce250;
    _DAT_02099430 = 9;
  }
  FUN_010dca80(&DAT_0209941c);
  if ((_DAT_02099494 & 0x20) == 0) {
    _DAT_02099494 = _DAT_02099494 | 0x20;
    _DAT_02099404 = 0;
    _DAT_02099408 = "hkxBlobMeshShape";
    _DAT_0209940c = 0xffffffff;
    _DAT_02099410 = 0;
    _DAT_02099414 = &DAT_017ce1f8;
    _DAT_02099418 = 7;
  }
  FUN_010dca80(&DAT_02099404);
  return;
}

// 0104C650  FUN_0104c650  size=13  [run]
void FUN_0104c650(void)

{
  FUN_01049200(DAT_0209b83c);
  return;
}

// 0104C690  FUN_0104c690  size=14  [run]
undefined4 __thiscall FUN_0104c690(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0xc + param_2 * 4);
}

// 0104C6A0  FUN_0104c6a0  size=148  [run]
undefined4 FUN_0104c6a0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  switch((&DAT_017d2ee8)[param_2 * 4]) {
  case 1:
    return *(undefined4 *)(param_1 + 0xc + (uint)(byte)(&DAT_017d2ee9)[param_2 * 4] * 4);
  default:
    return 0;
  case 4:
    uVar1 = FUN_010e16f0(*(undefined4 *)
                          (param_1 + 0xc + (uint)(byte)(&DAT_017d2ee9)[param_2 * 4] * 4),
                         (&DAT_017d2eea)[param_2 * 4]);
    return uVar1;
  case 5:
    if (param_3 != 0) {
      uVar1 = FUN_010093a0();
      uVar1 = FUN_010e1290(uVar1);
      uVar1 = FUN_010e1690(uVar1);
      return uVar1;
    }
switchD_0104c6b4_caseD_7:
    uVar1 = FUN_010e1690(*(undefined4 *)(param_1 + 8));
    return uVar1;
  case 6:
    uVar1 = FUN_010093a0();
    uVar1 = FUN_010e1290(uVar1);
    return uVar1;
  case 7:
    goto switchD_0104c6b4_caseD_7;
  }
}

// 0104C750  FUN_0104c750  size=78  [run]
undefined1 * FUN_0104c750(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      iVar2 = FUN_01009590(iVar3);
      bVar1 = *(byte *)(iVar2 + 0xc);
      if ((bVar1 == 0x16) || ((0x19 < bVar1 && (bVar1 < 0x1c)))) {
        *param_1 = 1;
        return param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = FUN_01009570();
    } while (iVar3 < iVar2);
  }
  *param_1 = 0;
  return param_1;
}

// 0104C7A0  FUN_0104c7a0  size=248  [run]
void __thiscall FUN_0104c7a0(int param_1,int param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int unaff_ESI;
  undefined4 uStack_8;
  
  uVar1 = 0;
  uStack_8 = param_1;
  switch((&DAT_017d2ee8)[param_1 * 4]) {
  case 1:
    uVar1 = *(undefined4 *)(unaff_ESI + 0xc + (uint)(byte)(&DAT_017d2ee9)[param_1 * 4] * 4);
    break;
  case 2:
    if (param_2 == 0x19) {
      uVar1 = FUN_010093a0();
      uVar1 = FUN_010e1290(uVar1);
      if ((param_4 != '\0') && (pcVar2 = (char *)FUN_0104c750((int)&uStack_8 + 3), *pcVar2 != '\0'))
      {
        uVar1 = FUN_010e1690(uVar1);
      }
    }
    else {
      uVar1 = FUN_0104c6a0();
    }
    if (param_3 != 0) {
      uVar1 = FUN_010e16f0(uVar1,param_3);
    }
    FUN_010e16c0(uVar1);
    return;
  case 3:
    goto LAB_0104c879;
  case 4:
    uVar1 = FUN_010e16f0(*(undefined4 *)
                          (unaff_ESI + 0xc + (uint)(byte)(&DAT_017d2ee9)[param_1 * 4] * 4),
                         (&DAT_017d2eea)[param_1 * 4]);
    break;
  case 5:
    uVar1 = FUN_0104c6a0();
    uVar1 = FUN_010e1690(uVar1);
    break;
  case 6:
  case 7:
LAB_0104c879:
    uVar1 = FUN_0104c6a0();
  }
  if (param_3 != 0) {
    FUN_010e16f0(uVar1,param_3);
  }
  return;
}

// 0104C8C0  hkSerializeDeprecated2::hkSerializeDeprecated2  size=74  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hkSerializeDeprecated2::hkSerializeDeprecated2(void)

{
  if ((_DAT_0209a39c & 1) == 0) {
    _DAT_0209a39c = _DAT_0209a39c | 1;
    _DAT_0209a39a = 1;
    _DAT_0209a394 = vftable;
    _atexit((_func_4879 *)&LAB_015fc3d0);
  }
  if (DAT_0209b840 != (undefined *)0x0) {
    FUN_01005e60();
  }
  DAT_0209b840 = &DAT_0209a394;
  return;
}

// 0104C910  hkSerializeDeprecated2::hkSerializeDeprecated2  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hkSerializeDeprecated2::hkSerializeDeprecated2(void)

{
  if ((_DAT_0209a39c & 1) == 0) {
    _DAT_0209a39c = _DAT_0209a39c | 1;
    _DAT_0209a39a = 1;
    _DAT_0209a394 = vftable;
    _atexit((_func_4879 *)&LAB_015fc3d0);
  }
  if (DAT_0209b840 != (undefined *)0x0) {
    FUN_01005e60();
  }
  DAT_0209b840 = &DAT_0209a394;
  return;
}

// 0104C920  FUN_0104c920  size=553  [run]
int FUN_0104c920(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar4 = *param_1;
  uVar3 = FUN_010093a0();
  iVar4 = (**(code **)(iVar4 + 0x24))(uVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_010093b0();
    if (iVar4 != 0) {
      uVar3 = FUN_010093b0(param_3,param_4);
      FUN_0104c920(param_1,uVar3);
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x80000000;
    local_38 = FUN_010093a0();
    iVar4 = FUN_010093b0();
    if (iVar4 == 0) {
      local_30 = 0;
    }
    else {
      FUN_010093b0();
      local_30 = FUN_010093a0();
    }
    local_34 = FUN_010097a0();
    local_c = (**(code **)(*param_1 + 0x2c))();
    local_8 = 0;
    iVar4 = FUN_010095e0();
    if (0 < iVar4) {
      do {
        puVar5 = (undefined4 *)FUN_010095f0(local_8);
        uVar3 = *(undefined4 *)(local_c + 0x10);
        if ((*(ushort *)(puVar5 + 4) & 0x400) != 0x400) {
          iVar4 = FUN_01016300();
          if (iVar4 != 0) {
            iVar4 = FUN_01016340("hk.DataObjectType");
            if (iVar4 == 0) {
              iVar4 = FUN_01009990("hk.DataObjectType");
              if (iVar4 != 0) {
                FUN_0143e7c0(iVar4,"typeName");
                iVar4 = *param_3;
                puVar6 = (undefined4 *)FUN_0143e860(0);
                (**(code **)(iVar4 + 0x10))(*puVar6);
              }
            }
            else {
              FUN_0143e7c0(iVar4,"typeName");
              iVar4 = *param_3;
              puVar6 = (undefined4 *)FUN_0143e860(0);
              (**(code **)(iVar4 + 0x10))(*puVar6);
            }
          }
          local_10 = (uint)*(byte *)(puVar5 + 3);
          uVar1 = *(undefined1 *)((int)puVar5 + 0xd);
          uVar3 = FUN_01016320(param_4);
          uVar3 = FUN_0104c7a0(uVar1,uVar3);
        }
        if (local_28 == (local_24 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,0xc);
        }
        uVar2 = *puVar5;
        puVar5 = (undefined4 *)(local_2c + local_28 * 0xc);
        puVar5[1] = uVar3;
        *puVar5 = uVar2;
        iVar7 = local_8 + 1;
        puVar5[2] = 0;
        local_28 = local_28 + 1;
        local_8 = iVar7;
        iVar4 = FUN_010095e0();
      } while (iVar7 < iVar4);
    }
    iVar4 = (**(code **)(*param_1 + 0xc))(&local_38);
    local_28 = 0;
    if (-1 < (int)local_24) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,(local_24 & 0x3fffffff) * 0xc);
    }
  }
  return iVar4;
}

// 0104CB60  FUN_0104cb60  size=39  [run]
void FUN_0104cb60(undefined4 param_1)

{
  if (DAT_0209b840 != 0) {
    FUN_01005e60();
    DAT_0209b840 = param_1;
    return;
  }
  DAT_0209b840 = param_1;
  return;
}

// 0104CBC0  FUN_0104cbc0  size=38  [run]
void FUN_0104cbc0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104CBF0  hkSerializeDeprecated::vf00  size=53  [run]
undefined4 * __thiscall hkSerializeDeprecated::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104CCA0  _anon_4671B7E4::DataWorldNative::DataWorldNative  size=39  [run]
undefined4 * __thiscall
_anon_4671B7E4::DataWorldNative::DataWorldNative(undefined4 *param_1,undefined1 param_2)

{
  hkDataWorldNative::hkDataWorldNative((uint)param_1 & 0xffffff00);
  *(undefined1 *)(param_1 + 0x31) = param_2;
  *param_1 = vftable;
  return param_1;
}

// 0104CCD0  _anon_4671B7E4::DataWorldNative::vf2C  size=4  [run]
int __fastcall _anon_4671B7E4::DataWorldNative::vf2C(int param_1)

{
  return param_1 + 0x30;
}

// 0104CD00  FUN_0104cd00  size=27  [run]
uint __fastcall FUN_0104cd00(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 0104CD20  FUN_0104cd20  size=9  [run]
void FUN_0104cd20(void)

{
  FUN_01025470();
  return;
}

// 0104CD30  FUN_0104cd30  size=9  [run]
void FUN_0104cd30(void)

{
  FUN_01025be0();
  return;
}

// 0104CD40  FUN_0104cd40  size=12  [run]
void __thiscall FUN_0104cd40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0104CD80  FUN_0104cd80  size=22  [run]
void __fastcall FUN_0104cd80(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0104CDA0  FUN_0104cda0  size=40  [run]
void __thiscall FUN_0104cda0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = param_2;
  return;
}

// 0104CDD0  FUN_0104cdd0  size=31  [run]
int * __thiscall FUN_0104cdd0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 0104CDF0  FUN_0104cdf0  size=22  [run]
void __fastcall FUN_0104cdf0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0104CE30  FUN_0104ce30  size=34  [run]
undefined4 * __fastcall FUN_0104ce30(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_010e6cb0();
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  return param_1;
}

// 0104CE60  FUN_0104ce60  size=24  [run]
void __thiscall FUN_0104ce60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  FUN_01006780(param_3);
  return;
}

// 0104CE80  FUN_0104ce80  size=38  [run]
void FUN_0104ce80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104CEB0  FUN_0104ceb0  size=37  [run]
void FUN_0104ceb0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0104CEE0  hkBaseObject::hkBaseObject_201  size=34  [run]
void __fastcall hkBaseObject::hkBaseObject_201(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 0104CF10  FUN_0104cf10  size=37  [run]
void FUN_0104cf10(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0104CF40  _anon_4671B7E4::ClassWrapper::ClassWrapper  size=91  [run]
undefined4 * __thiscall
_anon_4671B7E4::ClassWrapper::ClassWrapper(undefined4 *param_1,undefined1 param_2,int param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = param_2;
  if (param_3 == 0) {
    param_3 = (**(code **)(*DAT_0209b610 + 0x10))();
    if (param_3 == 0) goto LAB_0104cf84;
  }
  FUN_01006000();
LAB_0104cf84:
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = param_3;
  return param_1;
}

// 0104D000  FUN_0104d000  size=29  [run]
void __thiscall FUN_0104d000(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 0104D030  FUN_0104d030  size=38  [run]
void FUN_0104d030(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104D060  hkBaseObject::hkBaseObject_193  size=30  [run]
void __fastcall hkBaseObject::hkBaseObject_193(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 0104D080  hkVersionPatchManager::ClassWrapper::vf00  size=53  [run]
undefined4 * __thiscall hkVersionPatchManager::ClassWrapper::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104D0C0  FUN_0104d0c0  size=38  [run]
void FUN_0104d0c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104D0F0  _anon_4671B7E4::DataWorldNative::vf00  size=52  [run]
int __thiscall _anon_4671B7E4::DataWorldNative::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_207();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0104D130  hkSerializeDeprecated2::vf0C  size=111  [run]
undefined4
hkSerializeDeprecated2::vf0C
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  undefined2 local_c;
  undefined4 local_8;
  
  local_14[0] = 0;
  FUN_010e6cb0();
  local_c = 0;
  local_8 = 0;
  hkXmlPackfileWriter::hkXmlPackfileWriter(local_14);
  hkXmlPackfileWriter::vf10(param_1,param_2,param_5);
  uVar1 = hkXmlPackfileWriter::vf1C(param_3,param_4);
  hkBaseObject::hkBaseObject_239();
  return uVar1;
}

// 0104D1A0  hkSerializeDeprecated2::vf10  size=59  [run]
bool hkSerializeDeprecated2::vf10(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 2) {
    iVar1 = FUN_01015eb0(param_1 + 3,&DAT_01b1dc08,4);
    return iVar1 == 0;
  }
  if (*param_1 != 3) {
    return false;
  }
  return true;
}

// 0104D1E0  hkBaseObject::hkBaseObject_192  size=34  [run]
void __fastcall hkBaseObject::hkBaseObject_192(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 0104D210  hkSerializeDeprecated2::vf00  size=53  [run]
undefined4 * __thiscall hkSerializeDeprecated2::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104D280  FUN_0104d280  size=54  [run]
int __thiscall FUN_0104d280(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 0104D2E0  _anon_4671B7E4::ClassWrapper::vf00  size=72  [run]
undefined4 * __thiscall _anon_4671B7E4::ClassWrapper::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104D330  _anon_4671B7E4::DataWorldNative::vf60  size=42  [run]
void __thiscall
_anon_4671B7E4::DataWorldNative::vf60
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_0104c7a0(param_3,param_5,*(undefined1 *)(param_1 + 0xc4));
  return;
}

// 0104D360  FUN_0104d360  size=49  [run]
int __fastcall FUN_0104d360(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 0104D3A0  FUN_0104d3a0  size=64  [run]
void __thiscall FUN_0104d3a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104D420  FUN_0104d420  size=34  [run]
void FUN_0104d420(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0104D450  FUN_0104d450  size=38  [run]
void FUN_0104d450(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104D480  hkVtableClassRegistry::vf10  size=21  [run]
void hkVtableClassRegistry::vf10(undefined4 param_1)

{
  FUN_01010160(param_1,0);
  return;
}

// 0104D4A0  hkVtableClassRegistry::vf14  size=23  [run]
void hkVtableClassRegistry::vf14(undefined4 *param_1)

{
  FUN_01010160(*param_1,0);
  return;
}

// 0104D4C0  FUN_0104d4c0  size=16  [run]
undefined4 __thiscall FUN_0104d4c0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0104D4D0  FUN_0104d4d0  size=21  [run]
void __thiscall FUN_0104d4d0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0104D4F0  FUN_0104d4f0  size=57  [run]
void __thiscall FUN_0104d4f0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0104D530  hkVtableClassRegistry::vf00  size=76  [run]
undefined4 * __thiscall hkVtableClassRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104D580  FUN_0104d580  size=58  [run]
void __thiscall FUN_0104d580(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0104D5E0  FUN_0104d5e0  size=36  [run]
void __thiscall FUN_0104d5e0(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 0104D610  hkVtableClassRegistry::vf18  size=140  [run]
void __thiscall hkVtableClassRegistry::vf18(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar1) {
    piVar3 = *(int **)(param_1 + 8);
    do {
      if (*piVar3 != -1) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 <= iVar1);
  }
  if (iVar4 <= iVar1) {
    do {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 4 + iVar4 * 8);
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
      }
      *(undefined4 *)(*param_2 + param_2[1] * 4) = uVar2;
      param_2[1] = param_2[1] + 1;
      iVar1 = *(int *)(param_1 + 0x10);
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar1) {
        piVar3 = (int *)(*(int *)(param_1 + 8) + iVar4 * 8);
        do {
          if (*piVar3 != -1) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 2;
        } while (iVar4 <= iVar1);
      }
    } while (iVar4 <= iVar1);
  }
  return;
}

// 0104D6E0  FUN_0104d6e0  size=38  [run]
void FUN_0104d6e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104D710  hkClassPointerVtable::VtableRegistry::vf00  size=76  [run]
undefined4 * __thiscall hkClassPointerVtable::VtableRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104D760  FUN_0104d760  size=64  [run]
void __fastcall FUN_0104d760(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104D7A0  hkBaseObject::hkBaseObject_195  size=1039  [run]
int hkBaseObject::hkBaseObject_195
              (undefined4 param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  LPVOID pvVar10;
  uint extraout_ECX;
  undefined **ppuVar11;
  bool bVar12;
  undefined **local_150 [49];
  undefined1 local_8c;
  undefined1 local_88 [52];
  undefined1 local_54 [8];
  undefined1 local_4c [32];
  undefined **local_2c;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_3);
  if (iVar1 != 0) {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 6;
      FUN_01006780("Failed to load file");
    }
    return 1;
  }
  uVar2 = (**(code **)(*param_2 + 0x28))("Havok-7.0.0-r1");
  iVar3 = FUN_01015b90(uVar2);
  iVar1 = DAT_0209a3a0;
  if (iVar3 < 1) {
    if (DAT_0209a3a0 != 0) {
      FUN_01006000();
    }
    iVar3 = FUN_01051be0(param_2,iVar1,"Havok-7.0.0-r1");
    if (iVar3 != 0) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 4;
        FUN_01006780("Unable to version contents.");
      }
      if (iVar1 != 0) {
        FUN_010060a0();
      }
      return 1;
    }
    if (iVar1 != 0) {
      FUN_010060a0();
    }
  }
  local_14 = 0;
  uVar2 = (**(code **)(*param_2 + 0x28))(&DAT_017d3118);
  iVar1 = FUN_01015b90(uVar2);
  if (iVar1 < 0) {
    local_14 = 1;
  }
  piVar4 = (int *)(**(code **)(*param_2 + 0x30))();
  piVar5 = (int *)(**(code **)(*param_2 + 0x1c))();
  local_8 = local_8 & 0xffffff00;
  local_10 = piVar5;
  FUN_01025830(local_8);
  local_8 = 0;
  if (0 < piVar5[1]) {
    do {
      uVar2 = *(undefined4 *)(*piVar5 + 4 + local_8 * 8);
      puVar9 = (undefined4 *)(*piVar5 + local_8 * 8);
      uVar6 = FUN_010093a0();
      FUN_01025470(uVar6,uVar2);
      ppuVar11 = &PTR_s_rejectChassisListener_017d30c4;
      do {
        iVar1 = (**(code **)(*piVar4 + 0x10))(ppuVar11[-1]);
        if ((iVar1 != 0) && (pcVar7 = (char *)FUN_010093e0(&local_a,puVar9[1]), *pcVar7 != '\0')) {
          FUN_0143e7f0(*puVar9,puVar9[1],*ppuVar11);
          FUN_0143e9e0();
          local_18 = FUN_01016300();
          puVar8 = (undefined4 *)FUN_0143e840();
          *puVar8 = local_18;
        }
        ppuVar11 = ppuVar11 + 2;
      } while ((int)ppuVar11 < 0x17d311c);
      iVar1 = (**(code **)(*piVar4 + 0x10))("hkpEntity");
      if ((iVar1 != 0) && (pcVar7 = (char *)FUN_010093e0(&local_9,puVar9[1]), *pcVar7 != '\0')) {
        FUN_0143e7f0(*puVar9,puVar9[1],"motion");
        uVar2 = 0;
        FUN_0143e9f0(local_54,&DAT_01662d64);
        pcVar7 = (char *)FUN_0143e920(uVar2);
        uVar2 = (**(code **)(*piVar4 + 0x10))(*(undefined4 *)(&DAT_01b1ba54 + *pcVar7 * 4));
        puVar9 = (undefined4 *)FUN_0143e840();
        *puVar9 = uVar2;
      }
      local_8 = local_8 + 1;
      piVar5 = local_10;
    } while ((int)local_8 < local_10[1]);
  }
  hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_6(local_4c);
  local_26 = 1;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xffffffff;
  local_2c = hkClassPointerVtable::VtableRegistry::vftable;
  uVar2 = (**(code **)(*param_2 + 0x10))(0,local_88);
  iVar1 = (**(code **)(*param_2 + 0x34))();
  *(undefined4 *)(iVar1 + 0x30) = 0;
  hkDataWorldNative::hkDataWorldNative(extraout_ECX & 0xffffff00);
  bVar12 = local_14 != 0;
  local_150[0] = _anon_4671B7E4::DataWorldNative::vftable;
  local_8c = bVar12;
  FUN_010e2ce0(piVar4);
  FUN_010e2d10(&local_2c);
  uVar6 = (**(code **)(*param_2 + 0x18))();
  uVar6 = FUN_01025be0(uVar6,0);
  FUN_010e2ee0(uVar2,uVar6);
  FUN_010e7ee0(param_1,local_150);
  if (*(int *)(param_4 + 4) < 9) {
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    puVar9 = (undefined4 *)(**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0x10);
    puVar9[1] = 0x10010;
    *puVar9 = _anon_4671B7E4::ClassWrapper::vftable;
    puVar9[2] = 0;
    *(bool *)(puVar9 + 3) = bVar12;
    iVar1 = (**(code **)(*DAT_0209b610 + 0x10))();
    if (iVar1 != 0) {
      FUN_01006000();
    }
    if (puVar9[2] != 0) {
      FUN_010060a0();
    }
    puVar9[2] = iVar1;
  }
  else {
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0xc);
    *(undefined2 *)(iVar1 + 4) = 0xc;
    puVar9 = (undefined4 *)hkDefaultClassWrapper::hkDefaultClassWrapper(0);
  }
  iVar1 = FUN_010de930(param_1,puVar9);
  FUN_010060a0();
  if ((iVar1 != 0) && (param_5 != (undefined4 *)0x0)) {
    *param_5 = 4;
    FUN_01006780("Unable to version contents, check warning log");
  }
  hkBaseObject_207();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_2c = vftable;
  hkBaseObject_233();
  FUN_01025870();
  return iVar1;
}

// 0104DBC0  FUN_0104dbc0  size=139  [run]
undefined4 FUN_0104dbc0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_84 [52];
  undefined1 local_50 [76];
  
  if (*param_3 == 2) {
    hkBinaryPackfileReader::BinaryPackfileData::BinaryPackfileData();
    uVar1 = hkBaseObject::hkBaseObject_195(param_1,local_84,param_2,param_3,param_4);
    hkBinaryPackfileReader::~hkBinaryPackfileReader();
    return uVar1;
  }
  if (*param_3 != 3) {
    return 1;
  }
  hkXmlPackfileUpdateTracker::hkXmlPackfileUpdateTracker();
  uVar1 = hkBaseObject::hkBaseObject_195(param_1,local_50,param_2,param_3,param_4);
  hkXmlPackfileReader::~hkXmlPackfileReader();
  return uVar1;
}

// 0104DC50  hkSerializeDeprecated2::vf14  size=148  [run]
undefined4 hkSerializeDeprecated2::vf14(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_9c [152];
  
  hkDataWorldDict::hkDataWorldDict_2();
  iVar2 = FUN_0104dbc0(local_9c,param_1,param_2,param_3);
  if (iVar2 == 0) {
    uVar4 = 1;
    uVar3 = hkDataWorldDict::vf1C(&param_3);
    uVar3 = FUN_010e80b0(uVar3,uVar4);
    if (param_3 != (undefined4 *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_3)(1);
      }
    }
    hkBaseObject::hkBaseObject_200();
    return uVar3;
  }
  hkBaseObject::hkBaseObject_200();
  return 0;
}

// 0104DCF0  hkSerializeDeprecated2::vf18  size=148  [run]
undefined4 hkSerializeDeprecated2::vf18(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_9c [152];
  
  hkDataWorldDict::hkDataWorldDict_2();
  iVar2 = FUN_0104dbc0(local_9c,param_1,param_2,param_3);
  if (iVar2 == 0) {
    uVar4 = 1;
    uVar3 = hkDataWorldDict::vf1C(&param_3);
    uVar3 = FUN_010e8070(uVar3,uVar4);
    if (param_3 != (undefined4 *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_3)(1);
      }
    }
    hkBaseObject::hkBaseObject_200();
    return uVar3;
  }
  hkBaseObject::hkBaseObject_200();
  return 0;
}

// 0104DD90  FUN_0104dd90  size=64  [run]
void __fastcall FUN_0104dd90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104DDF0  FUN_0104ddf0  size=66  [run]
void __fastcall FUN_0104ddf0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0xc),(*(uint *)(param_1 + 0x14) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 0104DE40  _anon_4671B7E4::ClassWrapper::vf0C  size=76  [run]
void __thiscall _anon_4671B7E4::ClassWrapper::vf0C(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x24))(param_3);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_3);
    if (iVar1 == 0) {
      return;
    }
    FUN_0104c920(param_2,iVar1,*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc));
  }
  return;
}

// 0104DE90  FUN_0104de90  size=42  [run]
void __thiscall FUN_0104de90(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

// 0104DED0  FUN_0104ded0  size=117  [run]
undefined4 FUN_0104ded0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_010093a0();
  uVar2 = FUN_010093a0();
  iVar3 = FUN_01015b90(uVar2,uVar1);
  if (iVar3 != 0) {
    uVar1 = FUN_010093a0();
    uVar2 = FUN_010093a0();
    iVar3 = FUN_01015b90(uVar2,uVar1);
    if (iVar3 != 0) {
      iVar3 = *param_1;
      uVar1 = FUN_010093a0();
      iVar3 = (**(code **)(iVar3 + 0x10))(uVar1);
      if (iVar3 == 0) {
        (**(code **)(*param_1 + 0x1c))(param_2,0);
      }
    }
  }
  return 0;
}

// 0104DF50  FUN_0104df50  size=16  [run]
int __fastcall FUN_0104df50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    iVar1 = *param_1;
  }
  return iVar2;
}

// 0104DF60  FUN_0104df60  size=16  [run]
int __fastcall FUN_0104df60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    iVar1 = *param_1;
  }
  return iVar2;
}

// 0104DF70  FUN_0104df70  size=60  [run]
undefined4 FUN_0104df70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[1];
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(int **)(*unaff_EDI + iVar1 * 4) + 0xc))();
    iVar3 = FUN_01015b90(uVar2,param_1);
  } while (iVar3 != 0);
  return *(undefined4 *)(*unaff_EDI + iVar1 * 4);
}

// 0104DFB0  FUN_0104dfb0  size=231  [run]
undefined4 __thiscall
FUN_0104dfb0(undefined4 param_1,int param_2,undefined4 param_3,code *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  uVar4 = param_2;
  uVar2 = FUN_010093a0();
  uVar1 = param_3;
  uVar2 = FUN_01025530(uVar2);
  FUN_01025890((int)&param_2 + 3,uVar2);
  if (param_2._3_1_ == '\0') {
    iVar3 = (*param_4)(param_1,uVar4,param_5);
    if (iVar3 == 1) {
      return 1;
    }
    uVar4 = FUN_010093a0();
    FUN_01025470(uVar4,1);
    iVar3 = FUN_010093b0();
    if (iVar3 != 0) {
      uVar4 = uVar1;
      pcVar6 = param_4;
      uVar2 = param_5;
      uVar5 = FUN_010093b0(uVar1,param_4,param_5);
      iVar3 = FUN_0104dfb0(uVar5,uVar4,pcVar6,uVar2);
      if (iVar3 == 1) {
        return 1;
      }
    }
    param_2 = 0;
    iVar3 = FUN_010095e0();
    if (0 < iVar3) {
      do {
        iVar3 = FUN_010095f0(param_2);
        if (*(int *)(iVar3 + 4) != 0) {
          uVar4 = uVar1;
          pcVar6 = param_4;
          uVar2 = param_5;
          uVar5 = FUN_010162f0(uVar1,param_4,param_5);
          iVar3 = FUN_0104dfb0(uVar5,uVar4,pcVar6,uVar2);
          if (iVar3 == 1) {
            return 1;
          }
        }
        param_2 = param_2 + 1;
        iVar3 = FUN_010095e0();
      } while (param_2 < iVar3);
    }
  }
  return 0;
}

// 0104E0A0  ValidatedClassNameRegistry::vf1C  size=88  [run]
void ValidatedClassNameRegistry::vf1C(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 local_14 [16];
  
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = FUN_010093a0();
  }
  FUN_01025470(uVar1,param_1);
  param_2 = param_2 & 0xffffff00;
  FUN_01025830(param_2);
  FUN_0104dfb0(param_1,local_14,FUN_0104ded0,0);
  FUN_01025870();
  return;
}

// 0104E100  FUN_0104e100  size=57  [run]
void __thiscall FUN_0104e100(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

// 0104E140  FUN_0104e140  size=1406  [run]
undefined4 __thiscall FUN_0104e140(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = param_1;
  iVar3 = FUN_01015b90(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if ((int)(param_4[2] & 0x3fffffffU) < iVar3) {
    iVar5 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar3 < iVar5) {
      iVar3 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_4,iVar3,4);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x80000000;
  uVar4 = 0;
  if (0 < (int)uVar1) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_3c,((int)uVar1 < 0) - 1 & uVar1,4);
    uVar4 = local_38;
  }
  iVar3 = uVar1 - uVar4;
  puVar8 = (undefined4 *)(local_3c + uVar4 * 4);
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
  }
  local_24 = 0;
  local_20 = 0;
  uVar4 = *(uint *)(param_1 + 0xc);
  iVar3 = 0;
  local_1c = 0x80000000;
  local_38 = uVar1;
  if (0 < (int)uVar4) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,uVar4 & ((int)uVar4 < 0) - 1,4);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  if (0 < (int)uVar1) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_18,uVar1 & ((int)uVar1 < 0) - 1,4);
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar5 = FUN_01015b90(param_3,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + iVar3 * 4) + 4))
      ;
      if (iVar5 == 0) {
        iVar5 = FUN_01015b90(param_2,**(undefined4 **)(*(int *)(param_1 + 8) + iVar3 * 4));
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 8);
          if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b8c,param_4,4);
          }
          *(undefined4 *)(*param_4 + param_4[1] * 4) = *(undefined4 *)(iVar5 + iVar3 * 4);
          param_4[1] = param_4[1] + 1;
          local_14 = 0;
          if ((local_10 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,local_10 * 4);
          }
          local_18 = 0;
          local_10 = 0x80000000;
          local_20 = 0;
          if ((local_1c & 0x80000000) != 0) goto LAB_0104e685;
          goto LAB_0104e675;
        }
        if (local_14 == (local_10 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,&local_18,4);
        }
        *(int *)(local_18 + local_14 * 4) = iVar3;
        local_14 = local_14 + 1;
      }
      else {
        if (local_20 == (local_1c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,&local_24,4);
        }
        *(int *)(local_24 + local_20 * 4) = iVar3;
        local_20 = local_20 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x80000000;
  if (0 < (int)uVar1) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_30,((int)uVar1 < 0) - 1 & uVar1,4);
  }
  bVar2 = false;
  do {
    uVar1 = local_14;
    uVar4 = local_20;
    if (local_14 == 0) {
      if (bVar2) {
        FUN_0104ef80(&local_30);
      }
      local_2c = 0;
      if ((local_28 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_30,local_28 * 4);
      }
      local_30 = 0;
      local_14 = 0;
      local_28 = 0x80000000;
      if ((local_10 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,local_10 * 4);
      }
      local_18 = 0;
      local_20 = 0;
      local_10 = 0x80000000;
      if ((local_1c & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c * 4);
      }
      local_24 = 0;
      local_38 = 0;
      local_1c = 0x80000000;
      if ((local_34 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_3c,local_34 * 4);
      }
      return 1;
    }
    while (local_8 = uVar4 - 1, -1 < (int)local_8) {
      iVar3 = *(int *)(local_24 + local_8 * 4);
      iVar5 = 0;
      uVar4 = local_8;
      if (0 < (int)uVar1) {
        do {
          iVar7 = *(int *)(local_18 + iVar5 * 4);
          iVar6 = FUN_01015b90(*(undefined4 *)(*(int *)(*(int *)(local_c + 8) + iVar3 * 4) + 4),
                               **(undefined4 **)(*(int *)(local_c + 8) + iVar7 * 4));
          if (iVar6 == 0) {
            *(int *)(local_3c + iVar3 * 4) = iVar7;
            iVar7 = FUN_01015b90(**(undefined4 **)(*(int *)(local_c + 8) + iVar3 * 4),param_2);
            if (iVar7 == 0) goto joined_r0x0104e59a;
            if (local_2c == (local_28 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b8c,&local_30,4);
            }
            *(int *)(local_30 + local_2c * 4) = iVar3;
            local_2c = local_2c + 1;
            local_20 = local_20 - 1;
            if (local_20 != local_8) {
              *(undefined4 *)(local_24 + local_8 * 4) = *(undefined4 *)(local_24 + local_20 * 4);
            }
          }
          iVar5 = iVar5 + 1;
          uVar1 = local_14;
          uVar4 = local_8;
        } while (iVar5 < (int)local_14);
      }
    }
    FUN_0104ef80(&local_30);
    bVar2 = (bool)(bVar2 ^ 1);
    local_2c = 0;
  } while( true );
joined_r0x0104e59a:
  for (; iVar3 != -1; iVar3 = *(int *)(iVar3 * 4 + local_3c)) {
    iVar5 = *(int *)(local_c + 8);
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b8c,param_4,4);
    }
    *(undefined4 *)(*param_4 + param_4[1] * 4) = *(undefined4 *)(iVar5 + iVar3 * 4);
    param_4[1] = param_4[1] + 1;
  }
  if (bVar2) {
    FUN_0104ef80(&local_30);
  }
  local_2c = 0;
  if ((local_28 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_30,local_28 * 4);
  }
  local_30 = 0;
  local_28 = 0x80000000;
  local_14 = 0;
  if ((local_10 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,local_10 * 4);
  }
  local_18 = 0;
  local_10 = 0x80000000;
  local_20 = 0;
  if ((local_1c & 0x80000000) == 0) {
LAB_0104e675:
    local_10 = 0x80000000;
    local_18 = 0;
    local_20 = 0;
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c * 4);
  }
LAB_0104e685:
  local_24 = 0;
  local_1c = 0x80000000;
  local_38 = 0;
  if ((local_34 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_3c,local_34 * 4);
  }
  return 0;
}

// 0104E6C0  hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_4  size=75  [run]
undefined4 * __thiscall
hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_4(undefined4 *param_1,int param_2)

{
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  FUN_01025830(local_8);
  *param_1 = ValidatedClassNameRegistry::vftable;
  if (param_2 != 0) {
    vf24(param_2);
  }
  return param_1;
}

// 0104E710  hkVersionRegistry::hkVersionRegistry  size=73  [run]
undefined4 * __fastcall hkVersionRegistry::hkVersionRegistry(undefined4 *param_1)

{
  uint uVar1;
  uint local_8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  uVar1 = FUN_0104df50();
  local_8 = (uint)param_1 & 0xffffff00;
  param_1[3] = uVar1;
  param_1[2] = &PTR_PTR_01885bb0;
  param_1[4] = uVar1 | 0x80000000;
  FUN_01025830(local_8);
  return param_1;
}

// 0104E760  hkBaseObject::hkBaseObject_187  size=174  [run]
void __fastcall hkBaseObject::hkBaseObject_187(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uStack_8;
  
  *param_1 = hkVersionRegistry::vftable;
  uStack_8 = param_1;
  uVar1 = FUN_010253c0();
  FUN_01025890((int)&uStack_8 + 3,uVar1);
  while (uStack_8._3_1_ != '\0') {
    FUN_01025400(uVar1);
    FUN_01005e60();
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890((int)&uStack_8 + 3,uVar1);
  }
  FUN_01025720();
  FUN_01025870();
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0104E810  FUN_0104e810  size=692  [run]
int * __thiscall FUN_0104e810(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  LPVOID pvVar6;
  int *piVar7;
  int *piVar8;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  local_c = param_1 + 0x14;
  piVar8 = (int *)0x0;
  local_14 = param_1;
  iVar1 = FUN_01025900(param_2,&local_10);
  if (iVar1 == 0) {
    return local_10;
  }
  uVar2 = FUN_010e0a10();
  uVar2 = FUN_01025530(uVar2);
  FUN_01025890(&local_5,uVar2);
  if (local_5 == '\0') {
    uVar2 = (**(code **)(*DAT_0209b610 + 0x10))();
    FUN_01006000();
    uVar3 = FUN_010e0a10();
    FUN_01025470(uVar3,uVar2);
  }
  uVar2 = FUN_010e0a10();
  iVar1 = FUN_01015b90(param_2,uVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_01025900(param_2,&param_2);
    if (iVar1 == 0) {
      piVar8 = param_2;
    }
    return piVar8;
  }
  local_20 = 0;
  local_1c = (int *)0x0;
  piVar7 = &local_20;
  local_18 = -0x80000000;
  uVar2 = FUN_010e0a10(piVar7);
  iVar1 = FUN_0104e140(param_2,uVar2,piVar7);
  if (iVar1 == 1) {
    local_1c = (int *)0x0;
    if (-1 < local_18) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 * 4);
    }
    return (int *)0x0;
  }
  uVar4 = FUN_0104df60();
  piVar7 = local_1c;
  do {
    piVar7 = (int *)((int)piVar7 + -1);
    local_10 = piVar7;
    if ((int)piVar7 < 0) {
      if (-1 < (int)(uVar4 | 0x80000000)) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(&PTR_DAT_01885c60,uVar4 * 4);
      }
      goto joined_r0x0104eaab;
    }
    uVar2 = FUN_01025be0(*(undefined4 *)(*(int *)(local_20 + (int)piVar7 * 4) + 4),0);
    piVar8 = (int *)FUN_01025be0(**(undefined4 **)(local_20 + (int)piVar7 * 4),0);
    if (piVar8 == (int *)0x0) {
      piVar5 = (int *)FUN_0104df70(**(undefined4 **)(local_20 + (int)piVar7 * 4));
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      iVar1 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x4c);
      *(undefined2 *)(iVar1 + 4) = 0x4c;
      piVar8 = (int *)hkBindingClassNameRegistry::hkBindingClassNameRegistry
                                (**(undefined4 **)(*(int *)(local_20 + (int)piVar7 * 4) + 8),uVar2);
      iVar1 = *piVar8;
      uVar2 = (**(code **)(*piVar5 + 0xc))();
      (**(code **)(iVar1 + 0x18))(uVar2);
      (**(code **)(*piVar8 + 0x24))(piVar5);
      uVar2 = (**(code **)(*piVar8 + 0xc))();
      FUN_01025470(uVar2,piVar8);
      piVar7 = local_10;
    }
    iVar1 = FUN_01015b90(**(undefined4 **)(local_20 + (int)piVar7 * 4),param_2);
  } while (iVar1 != 0);
  if (-1 < (int)(uVar4 | 0x80000000)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(&PTR_DAT_01885c60,uVar4 * 4);
  }
joined_r0x0104eaab:
  if (-1 < local_18) {
    local_1c = (int *)0x0;
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 * 4);
  }
  return piVar8;
}

// 0104EAD0  FUN_0104ead0  size=71  [run]
undefined4 FUN_0104ead0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = (**(code **)(*param_1 + 0xc))();
  piVar3 = (int *)FUN_0104e810(uVar2);
  iVar1 = *piVar3;
  uVar2 = hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_4(param_1);
  (**(code **)(iVar1 + 0x24))(uVar2);
  FUN_01025870();
  return 0;
}

// 0104EB20  hkBaseObject::hkBaseObject_184  size=530  [run]
undefined4 hkBaseObject::hkBaseObject_184(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined **local_68 [7];
  undefined **local_4c;
  undefined2 local_46;
  undefined1 local_44 [16];
  int *local_34;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  uVar5 = param_3;
  local_10 = (int *)0x0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_0104e140(param_2,param_3,&local_10);
  uVar4 = param_3 >> 8;
  param_3 = uVar4 << 8;
  FUN_01025830(param_3);
  param_3 = uVar4 << 8;
  FUN_01025830(param_3);
  piVar6 = (int *)FUN_0104e810(param_2);
  piVar7 = (int *)FUN_0104e810(uVar5);
  param_3 = uVar4 << 8;
  local_46 = 1;
  local_4c = hkRenamedClassNameRegistry::vftable;
  FUN_01025830(param_3);
  local_34 = (int *)0x0;
  if ((piVar7 != (int *)0x0) && (FUN_01006000(), local_34 != (int *)0x0)) {
    FUN_010060a0();
  }
  local_34 = piVar7;
  hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_4(0);
  for (piVar2 = param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    if (piVar2[2] != 0) {
      hkDynamicClassNameRegistry::vf24(piVar2[2]);
    }
    piVar10 = (int *)*piVar2;
    if (piVar10 != (int *)0x0) {
      iVar8 = *piVar10;
      while (iVar8 != 0) {
        FUN_01025470(iVar8,piVar10[1]);
        piVar1 = piVar10 + 2;
        piVar10 = piVar10 + 2;
        iVar8 = *piVar1;
      }
    }
  }
  (**(code **)(*piVar6 + 0x30))(local_44);
  (**(code **)(*piVar7 + 0x24))(local_68);
  for (piVar7 = param_1; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[3]) {
    piVar2 = (int *)piVar7[1];
    if (piVar2 != (int *)0x0) {
      iVar8 = piVar2[3];
      while (iVar8 != 0) {
        if (*piVar2 == -1) {
          (**(code **)(*piVar6 + 0x10))(piVar2[3]);
          iVar8 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
          *piVar2 = iVar8;
        }
        if (piVar2[1] == -1) {
          uVar9 = FUN_01025be0(piVar2[3],piVar2[3]);
          if (local_34 != (int *)0x0) {
            (**(code **)(*local_34 + 0x10))(uVar9);
          }
          iVar8 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
          piVar2[1] = iVar8;
        }
        iVar8 = piVar2[8];
        piVar2 = piVar2 + 5;
      }
    }
  }
  iVar8 = *(int *)(*local_10 + 8);
  iVar3 = *(int *)(iVar8 + 0xc);
  while (iVar3 != 0) {
    iVar8 = *(int *)(iVar8 + 0xc);
    iVar3 = *(int *)(iVar8 + 0xc);
  }
  *(int **)(iVar8 + 0xc) = param_1;
  FUN_01025870();
  local_68[0] = vftable;
  local_4c = hkRenamedClassNameRegistry::vftable;
  if (local_34 != (int *)0x0) {
    FUN_010060a0();
  }
  FUN_01025870();
  local_4c = vftable;
  FUN_01025870();
  FUN_01025870();
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
  }
  return 0;
}

// 0104ED70  FUN_0104ed70  size=9  [run]
void FUN_0104ed70(void)

{
  FUN_0104e810();
  return;
}

// 0104EDB0  FUN_0104edb0  size=27  [run]
uint __fastcall FUN_0104edb0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 0104EDD0  FUN_0104edd0  size=9  [run]
void FUN_0104edd0(void)

{
  FUN_01025470();
  return;
}

// 0104EDE0  FUN_0104ede0  size=9  [run]
void FUN_0104ede0(void)

{
  FUN_01025be0();
  return;
}

// 0104EDF0  FUN_0104edf0  size=43  [run]
undefined4 FUN_0104edf0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01025900(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 0104EE30  FUN_0104ee30  size=9  [run]
void FUN_0104ee30(void)

{
  FUN_01025400();
  return;
}

// 0104EE40  FUN_0104ee40  size=9  [run]
void FUN_0104ee40(void)

{
  FUN_01025440();
  return;
}

// 0104EE50  FUN_0104ee50  size=24  [run]
undefined4 FUN_0104ee50(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 0104EE80  FUN_0104ee80  size=27  [run]
uint __fastcall FUN_0104ee80(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 0104EEA0  FUN_0104eea0  size=9  [run]
void FUN_0104eea0(void)

{
  FUN_01025470();
  return;
}

// 0104EEE0  FUN_0104eee0  size=15  [run]
int __thiscall FUN_0104eee0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0104EF00  FUN_0104ef00  size=32  [run]
void __thiscall FUN_0104ef00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0104EF50  FUN_0104ef50  size=15  [run]
int __thiscall FUN_0104ef50(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0104EF60  FUN_0104ef60  size=15  [run]
int __thiscall FUN_0104ef60(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0104EF80  FUN_0104ef80  size=44  [run]
void __thiscall FUN_0104ef80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 0104EFB0  FUN_0104efb0  size=32  [run]
void __thiscall FUN_0104efb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0104EFE0  FUN_0104efe0  size=15  [run]
int __thiscall FUN_0104efe0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0104F010  FUN_0104f010  size=34  [run]
void FUN_0104f010(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0104F040  FUN_0104f040  size=26  [run]
void __thiscall FUN_0104f040(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0104F060  FUN_0104f060  size=26  [run]
void __thiscall FUN_0104f060(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0104F090  FUN_0104f090  size=26  [run]
void __thiscall FUN_0104f090(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0104F0E0  FUN_0104f0e0  size=19  [run]
void __thiscall FUN_0104f0e0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 4) != 0;
  return;
}

// 0104F100  hkDynamicClassNameRegistry::vf1C  size=40  [run]
void hkDynamicClassNameRegistry::vf1C(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = FUN_010093a0();
  }
  FUN_01025470(param_2,param_1);
  return;
}

// 0104F150  hkBaseObject::hkBaseObject_175  size=19  [run]
void __fastcall hkBaseObject::hkBaseObject_175(undefined4 *param_1)

{
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 0104F170  FUN_0104f170  size=37  [run]
void FUN_0104f170(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0104F1A0  hkBaseObject::hkBaseObject_176  size=37  [run]
void __fastcall hkBaseObject::hkBaseObject_176(undefined4 *param_1)

{
  *param_1 = hkRenamedClassNameRegistry::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 0104F1D0  hkRenamedClassNameRegistry::vf0C  size=19  [run]
undefined4 __fastcall hkRenamedClassNameRegistry::vf0C(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0104f1de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
    return uVar1;
  }
  return 0;
}

// 0104F1F0  hkRenamedClassNameRegistry::vf14  size=24  [run]
void __fastcall hkRenamedClassNameRegistry::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0104f202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
    return;
  }
  return;
}

// 0104F210  FUN_0104f210  size=38  [run]
void FUN_0104f210(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104F240  hkRenamedClassNameRegistry::vf10  size=48  [run]
undefined4 __thiscall hkRenamedClassNameRegistry::vf10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01025be0(param_2,param_2);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(uVar1);
    return uVar1;
  }
  return 0;
}

// 0104F270  FUN_0104f270  size=49  [run]
void FUN_0104f270(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      FUN_01025470(iVar2,param_1[1]);
      piVar1 = param_1 + 2;
      param_1 = param_1 + 2;
      iVar2 = *piVar1;
    }
  }
  return;
}

// 0104F2B0  hkRenamedClassNameRegistry::vf00  size=79  [run]
undefined4 * __thiscall hkRenamedClassNameRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  FUN_01025870();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104F300  hkBaseObject::hkBaseObject_178  size=19  [run]
void __fastcall hkBaseObject::hkBaseObject_178(undefined4 *param_1)

{
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 0104F340  FUN_0104f340  size=32  [run]
void __thiscall FUN_0104f340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0104F360  FUN_0104f360  size=36  [run]
undefined4 FUN_0104f360(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01025530(param_2);
  FUN_01025890(param_1,uVar1);
  return param_1;
}

// 0104F390  FUN_0104f390  size=36  [run]
undefined4 FUN_0104f390(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01025530(param_2);
  FUN_01025890(param_1,uVar1);
  return param_1;
}

// 0104F400  FUN_0104f400  size=32  [run]
void __thiscall FUN_0104f400(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0104F420  FUN_0104f420  size=57  [run]
void __thiscall FUN_0104f420(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0104F460  FUN_0104f460  size=52  [run]
undefined4 __thiscall FUN_0104f460(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0104F4A0  FUN_0104f4a0  size=28  [run]
void __thiscall FUN_0104f4a0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0104F4C0  FUN_0104f4c0  size=88  [run]
void __thiscall FUN_0104f4c0(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_3 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_3;
  return;
}

// 0104F550  FUN_0104f550  size=38  [run]
void FUN_0104f550(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104F580  hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_3  size=50  [run]
undefined4 * __thiscall
hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_3(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  param_2 = param_2 & 0xffffff00;
  param_1[2] = uVar1;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_01025830(param_2);
  return param_1;
}

// 0104F5C0  hkDynamicClassNameRegistry::vf0C  size=4  [run]
undefined4 __fastcall hkDynamicClassNameRegistry::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0104F5D0  hkDynamicClassNameRegistry::vf18  size=13  [run]
void __thiscall hkDynamicClassNameRegistry::vf18(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 0104F5E0  hkDynamicClassNameRegistry::vf20  size=44  [run]
void __thiscall hkDynamicClassNameRegistry::vf20(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while (iVar2 != 0) {
    (**(code **)(*param_1 + 0x1c))(iVar2,0);
    piVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar2 = *piVar1;
  }
  return;
}

// 0104F620  FUN_0104f620  size=9  [run]
void FUN_0104f620(void)

{
  FUN_01025400();
  return;
}

// 0104F630  FUN_0104f630  size=9  [run]
void FUN_0104f630(void)

{
  FUN_01025440();
  return;
}

// 0104F640  FUN_0104f640  size=24  [run]
undefined4 FUN_0104f640(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 0104F670  hkDynamicClassNameRegistry::vf10  size=21  [run]
void hkDynamicClassNameRegistry::vf10(undefined4 param_1)

{
  FUN_01025be0(param_1,0);
  return;
}

// 0104F690  ValidatedClassNameRegistry::vf28  size=93  [run]
void __thiscall ValidatedClassNameRegistry::vf28(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_010253c0();
  FUN_01025890((int)&param_2 + 3,uVar1);
  while (param_2._3_1_ != '\0') {
    uVar2 = FUN_01025400(uVar1);
    (**(code **)(*param_1 + 0x1c))(uVar2,0);
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890((int)&param_2 + 3,uVar1);
  }
  return;
}

// 0104F6F0  FUN_0104f6f0  size=51  [run]
int __thiscall FUN_0104f6f0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 0104F730  FUN_0104f730  size=38  [run]
void FUN_0104f730(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104F760  hkDynamicClassNameRegistry::vf00  size=61  [run]
undefined4 * __thiscall hkDynamicClassNameRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01025870();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104F7A0  hkClassNameRegistry::vf00  size=53  [run]
undefined4 * __thiscall hkClassNameRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104F7E0  FUN_0104f7e0  size=37  [run]
void FUN_0104f7e0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0104F810  hkRenamedClassNameRegistry::hkRenamedClassNameRegistry_2  size=130  [run]
undefined4 * __thiscall
hkRenamedClassNameRegistry::hkRenamedClassNameRegistry_2
          (undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_01025830(local_8);
  param_1[6] = 0;
  if (param_3 != 0) {
    FUN_01006000();
  }
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[6] = param_3;
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    while (iVar2 != 0) {
      FUN_01025470(iVar2,param_2[1]);
      piVar1 = param_2 + 2;
      param_2 = param_2 + 2;
      iVar2 = *piVar1;
    }
  }
  return param_1;
}

// 0104F8A0  FUN_0104f8a0  size=46  [run]
int __fastcall FUN_0104f8a0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 0104F8D0  FUN_0104f8d0  size=58  [run]
void __thiscall FUN_0104f8d0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0104F910  FUN_0104f910  size=58  [run]
void __thiscall FUN_0104f910(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0104F950  FUN_0104f950  size=53  [run]
undefined4 __thiscall FUN_0104f950(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0104F990  FUN_0104f990  size=58  [run]
void __thiscall FUN_0104f990(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0104F9D0  FUN_0104f9d0  size=53  [run]
undefined4 __thiscall FUN_0104f9d0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0104FA10  FUN_0104fa10  size=89  [run]
void __thiscall FUN_0104fa10(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_2 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_2;
  return;
}

// 0104FA70  FUN_0104fa70  size=61  [run]
void __fastcall FUN_0104fa70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FAB0  FUN_0104fab0  size=61  [run]
void __thiscall FUN_0104fab0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FAF0  FUN_0104faf0  size=61  [run]
void __thiscall FUN_0104faf0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FB30  FUN_0104fb30  size=61  [run]
void __thiscall FUN_0104fb30(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FB70  hkDynamicClassNameRegistry::vf14  size=135  [run]
void hkDynamicClassNameRegistry::vf14(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_8;
  
  uVar2 = FUN_010253c0();
  FUN_01025890((int)&uStack_8 + 3,uVar2);
  while (uStack_8._3_1_ != '\0') {
    uVar3 = FUN_01025400(uVar2);
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    *(undefined4 *)(*param_1 + iVar1 * 4) = uVar3;
    uVar2 = FUN_01025440(uVar2);
    FUN_01025890((int)&uStack_8 + 3,uVar2);
  }
  return;
}

// 0104FC00  FUN_0104fc00  size=61  [run]
void __fastcall FUN_0104fc00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FC40  FUN_0104fc40  size=61  [run]
void __fastcall FUN_0104fc40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FC80  FUN_0104fc80  size=61  [run]
void __fastcall FUN_0104fc80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FCC0  FUN_0104fcc0  size=61  [run]
void __fastcall FUN_0104fcc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FD00  FUN_0104fd00  size=61  [run]
void __fastcall FUN_0104fd00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FD40  FUN_0104fd40  size=61  [run]
void __fastcall FUN_0104fd40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FD80  FUN_0104fd80  size=61  [run]
void __fastcall FUN_0104fd80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FDC0  FUN_0104fdc0  size=61  [run]
void __fastcall FUN_0104fdc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FE00  FUN_0104fe00  size=61  [run]
void __fastcall FUN_0104fe00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0104FE40  hkDynamicClassNameRegistry::vf24  size=128  [run]
void __thiscall hkDynamicClassNameRegistry::vf24(int *param_1,int *param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  (**(code **)(*param_2 + 0x14))(&local_10);
  iVar1 = 0;
  if (0 < local_c) {
    do {
      (**(code **)(*param_1 + 0x1c))(*(undefined4 *)(local_10 + iVar1 * 4),0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_c);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return;
}

// 0104FEC0  FUN_0104fec0  size=38  [run]
void FUN_0104fec0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104FEF0  ValidatedClassNameRegistry::vf00  size=61  [run]
undefined4 * __thiscall ValidatedClassNameRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01025870();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0104FF30  FUN_0104ff30  size=38  [run]
void FUN_0104ff30(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0104FF60  hkVersionRegistry::vf00  size=52  [run]
int __thiscall hkVersionRegistry::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_187();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0104FFE0  FUN_0104ffe0  size=82  [run]
void FUN_0104ffe0(undefined4 param_1)

{
  int iVar1;
  int unaff_EDI;
  
  FUN_01026e40(param_1,"\tstatic const hkInternalClassEnumItem %sEnumItems[] =\r\n\t{\r\n");
  iVar1 = 0;
  if (0 < *(int *)(unaff_EDI + 8)) {
    do {
      FUN_01026e40(param_1,"\t\t{%d, \"%s\"},\r\n",
                   *(undefined4 *)(*(int *)(unaff_EDI + 4) + iVar1 * 8),
                   *(undefined4 *)(*(int *)(unaff_EDI + 4) + 4 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_EDI + 8));
  }
  FUN_010267c0("\t};\r\n");
  return;
}

// 01050040  FUN_01050040  size=112  [run]
void FUN_01050040(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_01026140(&DAT_016416fa);
  if (((unaff_ESI < 1) || (0x12 < unaff_ESI)) && (unaff_ESI != 0x1e)) {
    if ((unaff_ESI == 0x18) || (unaff_ESI == 0x1f)) {
      iVar1 = FUN_01016260(param_1);
      FUN_01026140(*(undefined4 *)(iVar1 + 4));
    }
    return;
  }
  if ((unaff_ESI == 1) || (unaff_ESI - 0xcU < 7)) {
    FUN_01026140(&DAT_0165c24c);
  }
  iVar1 = FUN_01016260();
  FUN_010267c0(*(undefined4 *)(iVar1 + 4));
  return;
}

// 010500B0  FUN_010500b0  size=58  [run]
void __thiscall FUN_010500b0(int param_1,int *param_2)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if (0 < in_EAX) {
    piVar3 = (int *)(param_1 + 4);
    local_8 = in_EAX;
    do {
      if (*piVar3 != 0) {
        iVar2 = *param_2;
        uVar1 = FUN_010093a0();
        iVar2 = (**(code **)(iVar2 + 0x10))(uVar1);
        *piVar3 = iVar2;
      }
      piVar3 = piVar3 + 2;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 010500F0  FUN_010500f0  size=6  [run]
char * FUN_010500f0(void)

{
  return "Havok-7.0.0-r1";
}

// 01050100  FUN_01050100  size=16  [run]
int __fastcall FUN_01050100(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    iVar1 = *param_1;
  }
  return iVar2;
}

// 01050110  FUN_01050110  size=929  [run]
void __fastcall FUN_01050110(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 - 1;
  if (0x1f < uVar1) {
switchD_01050137_caseD_13:
    return;
  }
  do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((&switchD_01050137::switchdataD_01050504)[uVar1]) {
    case 1:
      FUN_01053820();
      FUN_01026140();
      return;
    case 2:
      FUN_01053830();
      FUN_010262e0();
      return;
    case 3:
      FUN_01053840();
      FUN_010262e0();
      return;
    case 4:
      FUN_01053850();
      FUN_010262e0();
      return;
    case 5:
      FUN_01053860();
      FUN_010262e0();
      return;
    case 6:
      FUN_01053870();
      FUN_010262e0();
      return;
    case 7:
      FUN_01053880();
      FUN_010262e0();
      return;
    case 8:
      FUN_01053890();
      FUN_010262e0();
      return;
    case 9:
      FUN_010538a0();
      FUN_010262e0();
      return;
    case 10:
      FUN_010538b0();
      FUN_010262e0();
      return;
    case 0xb:
      FUN_010538d0();
      FUN_010262e0();
      return;
    case 0xc:
    case 0xd:
      FUN_010262e0();
      return;
    case 0xe:
    case 0xf:
    case 0x10:
      FUN_010262e0();
      return;
    case 0x11:
    case 0x12:
      FUN_010262e0();
      return;
    default:
      goto switchD_01050137_caseD_13;
    case 0x18:
    case 0x1f:
      uVar1 = param_2 - 1;
      param_2 = 0;
      if (0x1f < uVar1) {
        return;
      }
      break;
    case 0x1e:
      FUN_010538c0();
      FUN_010262e0();
      return;
    case 0x20:
      FUN_010538e0();
      FUN_010262e0();
      return;
    }
  } while( true );
}

// 01050530  _anon_B1A2C86F::PackfileObjectCopier::PackfileObjectCopier  size=43  [run]
undefined4 * __thiscall
_anon_B1A2C86F::PackfileObjectCopier::PackfileObjectCopier
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkObjectCopier::hkObjectCopier(param_2,param_3,0);
  *param_1 = vftable;
  return param_1;
}

// 01050560  _anon_B1A2C86F::PackfileObjectCopier::vf10  size=292  [run]
undefined4 _anon_B1A2C86F::PackfileObjectCopier::vf10(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  
  cVar1 = *(char *)(param_1 + 0xc);
  cVar2 = *(char *)(param_2 + 0xc);
  if ((cVar1 == cVar2) || ((cVar1 == '\x1a' && (cVar2 == '\x16')))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((cVar1 != '\x1d') || (bVar6 = true, cVar2 != '!')) {
    bVar6 = false;
  }
  if (((cVar1 == '\x1c') && (cVar2 == '\x14')) && (*(char *)(param_2 + 0xd) == '\x19')) {
    iVar8 = FUN_01016300();
    if (iVar8 == 0) goto LAB_010505e4;
    FUN_010162f0();
    uVar9 = FUN_010093a0();
    uVar9 = FUN_010093a0(uVar9);
    iVar8 = FUN_01015b90(uVar9);
    bVar7 = true;
    if (iVar8 != 0) goto LAB_010505e4;
  }
  else {
LAB_010505e4:
    bVar7 = false;
  }
  cVar1 = *(char *)(param_1 + 0xd);
  cVar2 = *(char *)(param_2 + 0xd);
  if ((cVar1 == cVar2) || ((cVar1 == '\x1d' && (cVar2 == '!')))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((cVar1 == '\x1c') && (cVar2 == '\x14')) {
    iVar8 = FUN_01016300();
    if (iVar8 != 0) {
      FUN_010162f0();
      uVar9 = FUN_010093a0();
      uVar9 = FUN_010093a0(uVar9);
      iVar8 = FUN_01015b90(uVar9);
      if (iVar8 == 0) {
        bVar3 = true;
        goto LAB_01050645;
      }
    }
  }
  bVar3 = false;
LAB_01050645:
  iVar8 = hkObjectCopier::vf10(param_1,param_2);
  if ((((iVar8 == 0) && (!bVar6)) && (!bVar7)) && ((!bVar4 || ((!bVar5 && (!bVar3)))))) {
    return 0;
  }
  return 1;
}

// 01050690  FUN_01050690  size=4  [run]
undefined4 __fastcall FUN_01050690(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 010506A0  FUN_010506a0  size=7  [run]
undefined4 __fastcall FUN_010506a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}

// 010506B0  FUN_010506b0  size=493  [run]
void FUN_010506b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_10;
  undefined4 local_c;
  
  local_10 = 0;
  iVar3 = FUN_01009570();
  if (0 < iVar3) {
    do {
      iVar3 = FUN_01009590(local_10);
      if ((*(ushort *)(iVar3 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar3 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_1;
          iVar2 = param_4;
          if (*(char *)(iVar3 + 0xd) == '\x1c') {
            while (-1 < iVar2 + -1) {
              FUN_0143e7a0(iVar1,iVar3);
              FUN_0143e9a0(0);
              FUN_010500b0(param_3);
              iVar4 = FUN_01009750();
              iVar1 = iVar1 + iVar4;
              iVar2 = iVar2 + -1;
            }
          }
          else if (*(char *)(iVar3 + 0xd) == '\x19') {
            while (-1 < iVar2 + -1) {
              FUN_0143e7a0(iVar1,iVar3);
              puVar5 = (undefined4 *)FUN_0143e9a0(0);
              uVar6 = FUN_010162f0(param_3,puVar5[1]);
              FUN_010506b0(*puVar5,uVar6);
              iVar4 = FUN_01009750();
              iVar1 = iVar1 + iVar4;
              iVar2 = iVar2 + -1;
            }
          }
          break;
        case 0x19:
          iVar4 = FUN_01016320();
          iVar1 = param_1;
          iVar2 = param_4;
          if (iVar4 == 0) {
            local_c = 1;
          }
          else {
            local_c = FUN_01016320();
          }
          while (-1 < iVar2 + -1) {
            FUN_0143e7a0(iVar1,iVar3);
            uVar6 = FUN_010162f0(param_3,local_c);
            uVar6 = FUN_0143e830(uVar6);
            FUN_010506b0(uVar6);
            iVar4 = FUN_01009750();
            iVar1 = iVar1 + iVar4;
            iVar2 = iVar2 + -1;
          }
          break;
        case 0x1c:
          iVar4 = FUN_01016320();
          iVar1 = param_1;
          iVar2 = param_4;
          if (iVar4 != 0) {
            FUN_01016320();
          }
          while (-1 < iVar2 + -1) {
            FUN_0143e7a0(iVar1,iVar3);
            FUN_0143e830(param_3);
            FUN_010500b0();
            iVar4 = FUN_01009750();
            iVar1 = iVar1 + iVar4;
            iVar2 = iVar2 + -1;
          }
        }
      }
      local_10 = local_10 + 1;
      iVar3 = FUN_01009570();
    } while (local_10 < iVar3);
  }
  return;
}

// 010508C0  FUN_010508c0  size=151  [run]
void __thiscall FUN_010508c0(int param_1,int *param_2,int *param_3,int param_4)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_8;
  
  if (0 < in_EAX) {
    piVar3 = (int *)(param_1 + 4);
    local_8 = in_EAX;
    do {
      if ((*piVar3 != 0) && (iVar1 = FUN_01010120(*piVar3), *(int *)(param_4 + 8) < iVar1)) {
        iVar1 = *param_3;
        uVar2 = FUN_010093a0();
        iVar1 = (**(code **)(iVar1 + 0x10))(uVar2);
        if (iVar1 == 0) {
          (**(code **)(*param_2 + 0x18))(*piVar3,0,0);
        }
        else {
          FUN_010100a0(&PTR_vftable_018e9b94,iVar1,*piVar3);
          (**(code **)(*param_2 + 0x18))(*piVar3,iVar1,&DAT_01f9050c);
          (**(code **)(*param_2 + 0x20))(iVar1);
        }
      }
      piVar3 = piVar3 + 2;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 01050960  FUN_01050960  size=126  [run]
void FUN_01050960(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  
  if ((*unaff_EDI != 0) && (iVar1 = FUN_01010120(*unaff_EDI), *(int *)(param_3 + 8) < iVar1)) {
    iVar1 = *param_2;
    uVar2 = FUN_010093a0();
    iVar1 = (**(code **)(iVar1 + 0x10))(uVar2);
    if (iVar1 != 0) {
      FUN_010100a0(&PTR_vftable_018e9b94,iVar1,*unaff_EDI);
      (**(code **)(*param_1 + 0x18))(*unaff_EDI,iVar1,&DAT_01f9050c);
      (**(code **)(*param_1 + 0x20))(iVar1);
      return;
    }
    (**(code **)(*param_1 + 0x18))(*unaff_EDI,0,0);
  }
  return;
}

// 010509E0  FUN_010509e0  size=530  [run]
void FUN_010509e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_10;
  undefined4 local_c;
  
  local_10 = 0;
  iVar3 = FUN_01009570();
  if (0 < iVar3) {
    do {
      iVar3 = FUN_01009590(local_10);
      if ((*(ushort *)(iVar3 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar3 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_2;
          iVar2 = param_5;
          if (*(char *)(iVar3 + 0xd) == '\x1c') {
            while (-1 < iVar2 + -1) {
              FUN_0143e7a0(iVar1,iVar3);
              FUN_0143e9a0(0);
              FUN_010508c0(param_1,param_4,param_6);
              iVar4 = FUN_01009750();
              iVar1 = iVar1 + iVar4;
              iVar2 = iVar2 + -1;
            }
          }
          else if (*(char *)(iVar3 + 0xd) == '\x19') {
            while (-1 < iVar2 + -1) {
              FUN_0143e7a0(iVar1,iVar3);
              puVar5 = (undefined4 *)FUN_0143e9a0(0);
              uVar6 = FUN_010162f0(param_4,puVar5[1],param_6);
              FUN_010509e0(param_1,*puVar5,uVar6);
              iVar4 = FUN_01009750();
              iVar1 = iVar1 + iVar4;
              iVar2 = iVar2 + -1;
            }
          }
          break;
        case 0x19:
          iVar4 = FUN_01016320();
          iVar1 = param_2;
          iVar2 = param_5;
          if (iVar4 == 0) {
            local_c = 1;
          }
          else {
            local_c = FUN_01016320();
          }
          while (-1 < iVar2 + -1) {
            FUN_0143e7a0(iVar1,iVar3);
            uVar6 = FUN_010162f0(param_4,local_c,param_6);
            uVar6 = FUN_0143e830(uVar6);
            FUN_010509e0(param_1,uVar6);
            iVar4 = FUN_01009750();
            iVar1 = iVar1 + iVar4;
            iVar2 = iVar2 + -1;
          }
          break;
        case 0x1c:
          iVar4 = FUN_01016320();
          iVar1 = param_2;
          iVar2 = param_5;
          if (iVar4 != 0) {
            FUN_01016320();
          }
          while (-1 < iVar2 + -1) {
            FUN_0143e7a0(iVar1,iVar3);
            FUN_0143e830(param_4,param_6);
            FUN_010508c0(param_1);
            iVar4 = FUN_01009750();
            iVar1 = iVar1 + iVar4;
            iVar2 = iVar2 + -1;
          }
        }
      }
      local_10 = local_10 + 1;
      iVar3 = FUN_01009570();
    } while (local_10 < iVar3);
  }
  return;
}

// 01050C20  FUN_01050c20  size=418  [run]
void FUN_01050c20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_10;
  undefined4 local_c;
  
  local_10 = 0;
  iVar3 = FUN_01009570();
  if (0 < iVar3) {
    do {
      iVar3 = FUN_01009590(local_10);
      if ((*(ushort *)(iVar3 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar3 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_2;
          iVar2 = param_5;
          if (*(char *)(iVar3 + 0xd) == '\x19') {
            while (-1 < iVar2 + -1) {
              FUN_0143e7a0(iVar1,iVar3);
              puVar5 = (undefined4 *)FUN_0143e9a0(0);
              uVar6 = FUN_010162f0(param_4,puVar5[1],param_6);
              FUN_01050c20(param_1,*puVar5,uVar6);
              iVar4 = FUN_01009750();
              iVar1 = iVar1 + iVar4;
              iVar2 = iVar2 + -1;
            }
          }
          break;
        case 0x19:
          iVar4 = FUN_01016320();
          iVar1 = param_2;
          iVar2 = param_5;
          if (iVar4 == 0) {
            local_c = 1;
          }
          else {
            local_c = FUN_01016320();
          }
          while (-1 < iVar2 + -1) {
            FUN_0143e7a0(iVar1,iVar3);
            uVar6 = FUN_010162f0(param_4,local_c,param_6);
            uVar6 = FUN_0143e830(uVar6);
            FUN_01050c20(param_1,uVar6);
            iVar4 = FUN_01009750();
            iVar1 = iVar1 + iVar4;
            iVar2 = iVar2 + -1;
          }
          break;
        case 0x1b:
          iVar1 = param_2;
          iVar2 = param_5;
          while (iVar2 = iVar2 + -1, -1 < iVar2) {
            FUN_0143e7a0(iVar1,iVar3);
            FUN_0143e9b0(0);
            FUN_01050960(param_1,param_4,param_6);
            iVar4 = FUN_01009750();
            iVar1 = iVar1 + iVar4;
          }
        }
      }
      local_10 = local_10 + 1;
      iVar3 = FUN_01009570();
    } while (local_10 < iVar3);
  }
  return;
}

// 01050DE0  FUN_01050de0  size=590  [run]
int FUN_01050de0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *piVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  hkOstream::hkOstream_3(&local_1c);
  local_78 = 0x80000000;
  local_6c = 0x80000000;
  local_60 = 0x80000000;
  local_54 = 0x80000000;
  iVar6 = 0;
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0xffffffff;
  if (0 < in_EAX[1]) {
    do {
      local_10 = *(int *)(*in_EAX + iVar6 * 4) * 8;
      puVar7 = (undefined4 *)(*param_1 + local_10);
      FUN_010e6cc0(&DAT_01b1dc08);
      FUN_010e6cc0(&DAT_01b1dc08);
      _anon_B1A2C86F::PackfileObjectCopier::PackfileObjectCopier(local_c,local_8);
      piVar3 = (int *)(*param_2 + local_10);
      local_10 = piVar3[1];
      *piVar3 = local_18;
      FUN_010100a0(&PTR_vftable_018e9b94,*puVar7,local_18);
      _anon_B1A2C86F::PackfileObjectCopier::vf0C(*puVar7,puVar7[1],local_2c,local_10,&local_80);
      hkBaseObject::hkBaseObject_138();
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_EAX[1]);
  }
  iVar6 = local_18;
  iVar8 = 0;
  if (local_18 == 0) {
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
    FUN_010f79a0();
    hkBaseObject::hkBaseObject_38();
    local_18 = 0;
    if (-1 < (int)local_14) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
    }
    return 0;
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar6 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(iVar6);
  (**(code **)(*param_3 + 0x10))(iVar6,local_18,5);
  FUN_01015e80(iVar6,local_1c,local_18);
  iVar5 = 0;
  if (0 < in_EAX[1]) {
    do {
      piVar3 = (int *)(*param_2 + *(int *)(*in_EAX + iVar5 * 4) * 8);
      *piVar3 = *piVar3 + iVar6;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_EAX[1]);
  }
  iVar5 = 0;
  if (0 < local_7c) {
    do {
      iVar2 = iVar5 * 8;
      iVar1 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      *(int *)(iVar6 + *(int *)(local_80 + iVar1)) = *(int *)(local_80 + 4 + iVar2) + iVar6;
    } while (iVar5 < local_7c);
  }
  if (0 < local_70) {
    iVar5 = 0;
    do {
      (**(code **)(*param_3 + 0x14))
                (*(undefined4 *)(iVar5 + 4 + local_74),*(int *)(iVar5 + local_74) + iVar6);
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar8 < local_70);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_010f79a0();
  hkBaseObject::hkBaseObject_38();
  local_18 = 0;
  if (-1 < (int)local_14) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
  }
  return iVar6;
}

// 01051030  FUN_01051030  size=166  [run]
undefined4 FUN_01051030(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 4);
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  if (0 < (int)uVar1) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_10,((int)uVar1 < 0) - 1 & uVar1,4);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      *(int *)(local_10 + iVar2 * 4) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  local_c = uVar1;
  uVar3 = FUN_01050de0(param_1,param_2,param_3);
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
  }
  return uVar3;
}

// 010510E0  FUN_010510e0  size=140  [run]
undefined4 * __thiscall
FUN_010510e0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_1[1] = param_2;
  param_1[2] = param_1 + 5;
  param_1[4] = 0x80000080;
  param_1[3] = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)param_1[2] = 0;
  param_1[0x26] = 1;
  param_1[0x27] = 0x80000080;
  param_1[0x25] = param_1 + 0x28;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)param_1[0x25] = 0;
  param_2 = param_2 & 0xffffff00;
  param_1[0x48] = param_3;
  param_1[0x49] = param_4;
  FUN_01025830(param_2);
  uVar1 = FUN_010094f0(&DAT_0164fcc8);
  *param_1 = uVar1;
  return param_1;
}

// 01051170  hkRenamedClassNameRegistry::hkRenamedClassNameRegistry  size=2390  [run]
undefined4
hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
          (int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78 [6];
  int *local_60;
  undefined4 *local_5c;
  int local_58;
  int local_54;
  undefined4 *local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  puVar7 = param_3;
  piVar4 = param_1;
  hkRenamedClassNameRegistry_2(*param_3,param_4);
  for (piVar2 = (int *)puVar7[3]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    piVar10 = (int *)*piVar2;
    if (piVar10 != (int *)0x0) {
      iVar9 = *piVar10;
      while (iVar9 != 0) {
        FUN_01025470(iVar9,piVar10[1]);
        piVar1 = piVar10 + 2;
        piVar10 = piVar10 + 2;
        iVar9 = *piVar1;
      }
    }
  }
  uVar3 = param_1[1];
  local_10 = (int *)0x0;
  local_c = 0;
  local_8 = 0x80000000;
  if (0 < (int)uVar3) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_10,uVar3 & ((int)uVar3 < 0) - 1,4);
  }
  FUN_010546a0(param_3,param_1,&local_10);
  uVar3 = param_1[1];
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  if (0 < (int)uVar3) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_1c,uVar3 & ((int)uVar3 < 0) - 1,4);
  }
  uVar3 = param_1[1];
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x80000000;
  if (0 < (int)uVar3) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_28,uVar3 & ((int)uVar3 < 0) - 1,4);
  }
  local_40 = (undefined4 *)0x0;
  local_38 = 0x80000000;
  if (0 < param_1[1]) {
    param_3 = (undefined4 *)(param_1[1] * 8);
    local_40 = (undefined4 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_3);
    local_38 = (int)((int)param_3 + ((int)param_3 >> 0x1f & 7U)) >> 3;
  }
  local_3c = param_1[1];
  iVar9 = *param_1;
  if (0 < local_3c) {
    puVar7 = local_40;
    iVar8 = local_3c;
    do {
      *puVar7 = *(undefined4 *)((iVar9 - (int)local_40) + (int)puVar7);
      puVar7[1] = *(undefined4 *)((iVar9 - (int)local_40) + 4 + (int)puVar7);
      puVar7 = puVar7 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x80000000;
  if (0 < (int)local_c) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_4c,local_c & ((int)local_c < 0) - 1,4);
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  if (0 < (int)local_c) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_34,local_c & ((int)local_c < 0) - 1,4);
  }
  local_50 = (undefined4 *)0x0;
  if (0 < (int)local_c) {
    do {
      iVar9 = local_10[(int)local_50];
      local_54 = FUN_010093a0();
      local_58 = FUN_01025be0(local_54,0);
      uVar5 = FUN_01025be0(local_54,local_54);
      if (local_60 == (int *)0x0) {
        param_3 = (undefined4 *)0x0;
      }
      else {
        param_3 = (undefined4 *)(**(code **)(*local_60 + 0x10))(uVar5);
      }
      if ((*(byte *)(local_58 + 8) & 0x10) == 0) {
        *(undefined4 **)(iVar9 * 8 + 4 + *param_1) = param_3;
        if (param_3 == (undefined4 *)0x0) {
          local_30 = 0;
          if (-1 < (int)local_2c) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_34,local_2c * 4);
          }
          local_34 = 0;
          local_2c = 0x80000000;
          local_48 = 0;
          if (-1 < (int)local_44) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_4c,local_44 * 4);
          }
          local_4c = 0;
          local_44 = 0x80000000;
          if ((local_38 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_40,local_38 * 8);
          }
          local_24 = 0;
          if (-1 < (int)local_20) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_28,local_20 * 4);
          }
          goto LAB_010517a9;
        }
        uVar3 = *(uint *)(local_58 + 8);
        if ((uVar3 & 2) == 0) {
          if ((uVar3 & 8) == 0) {
            if ((uVar3 & 4) != 0) {
              FUN_010e0aa0(local_40[iVar9 * 2],local_40[iVar9 * 2 + 1],param_3);
              (**(code **)(*param_2 + 0x20))(local_40[iVar9 * 2]);
              local_5c = (undefined4 *)(*param_2 + 0x1c);
              uVar5 = FUN_010093a0();
              (*(code *)*local_5c)(local_40[iVar9 * 2],uVar5);
            }
          }
          else {
            if (local_18 == (local_14 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b8c,&local_1c,4);
            }
            *(int *)(local_1c + local_18 * 4) = iVar9;
            local_18 = local_18 + 1;
          }
        }
        if ((*(byte *)(local_58 + 8) & 0x20) != 0) {
          if (local_48 == (local_44 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b8c,&local_4c,4);
          }
          *(int *)(local_4c + local_48 * 4) = iVar9;
          local_48 = local_48 + 1;
        }
        if ((*(byte *)(local_58 + 8) & 0x40) != 0) {
          if (local_30 == (local_2c & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b8c,&local_34,4);
          }
          *(int *)(local_34 + local_30 * 4) = iVar9;
          local_30 = local_30 + 1;
        }
        uVar5 = FUN_010093a0(local_54);
        iVar8 = FUN_01015b90(uVar5);
        if (iVar8 != 0) {
          (**(code **)(*param_2 + 0x20))(local_40[iVar9 * 2]);
          iVar8 = *param_2;
          uVar5 = FUN_010093a0();
          (**(code **)(iVar8 + 0x1c))(local_40[iVar9 * 2],uVar5);
        }
      }
      else {
        (**(code **)(*param_2 + 0x20))(*(undefined4 *)(iVar9 * 8 + *param_1));
        if (local_24 == (local_20 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,&local_28,4);
        }
        *(int *)(local_28 + local_24 * 4) = iVar9;
        local_24 = local_24 + 1;
      }
      local_50 = (undefined4 *)((int)local_50 + 1);
    } while ((int)local_50 < (int)local_c);
  }
  FUN_01050de0(&local_40,param_1,param_2);
  iVar9 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0xffffffff;
  if (0 < (int)local_48) {
    do {
      iVar8 = *(int *)(local_4c + iVar9 * 4);
      FUN_010509e0(param_2,*(undefined4 *)(*param_1 + iVar8 * 8),
                   *(undefined4 *)(*param_1 + 4 + iVar8 * 8),local_78,1,&local_84);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)local_48);
  }
  iVar9 = 0;
  if (0 < (int)local_30) {
    do {
      iVar8 = *(int *)(local_34 + iVar9 * 4);
      FUN_01050c20(param_2,*(undefined4 *)(*param_1 + iVar8 * 8),
                   *(undefined4 *)(*param_1 + 4 + iVar8 * 8),local_78,1,&local_84);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)local_30);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_30 = 0;
  if (-1 < (int)local_2c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_34,local_2c * 4);
  }
  local_34 = 0;
  local_2c = 0x80000000;
  local_48 = 0;
  if (-1 < (int)local_44) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_4c,local_44 * 4);
  }
  piVar2 = param_1 + 1;
  iVar9 = 0;
  local_50 = (undefined4 *)(*piVar2 + 1);
  local_54 = 0;
  puVar7 = local_50;
  if (local_c != 0) {
    puVar7 = (undefined4 *)*local_10;
  }
  param_1 = (undefined4 *)0x0;
  param_3 = puVar7;
  if (0 < *piVar2) {
    do {
      if ((int)param_1 < (int)puVar7) {
        puVar7 = (undefined4 *)(*piVar4 + (int)param_1 * 8);
        uVar5 = FUN_010093a0();
        local_5c = (undefined4 *)FUN_01025be0(uVar5,0);
        if (local_5c != (undefined4 *)0x0) {
          (**(code **)(*param_2 + 0x20))(*puVar7);
          (**(code **)(*param_2 + 0x1c))(*puVar7,local_5c);
        }
        uVar5 = FUN_010093a0();
        uVar5 = FUN_01025be0(uVar5,uVar5);
        if (local_60 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (**(code **)(*local_60 + 0x10))(uVar5);
        }
        puVar7[1] = iVar8;
        puVar7 = param_3;
        iVar9 = local_54;
        if (iVar8 == 0) {
          if ((local_38 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_40,local_38 * 8);
          }
          local_24 = 0;
          if (-1 < (int)local_20) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_28,local_20 * 4);
          }
LAB_010517a9:
          local_18 = 0;
          local_28 = 0;
          local_20 = 0x80000000;
          if (-1 < (int)local_14) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1c,local_14 * 4);
          }
          local_1c = 0;
          local_14 = 0x80000000;
          FUN_01025870();
          local_c = 0;
          if ((local_8 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
          }
          local_78[0] = vftable;
          local_8 = 0x80000000;
          local_10 = (int *)0x0;
          if (local_60 != (int *)0x0) {
            FUN_010060a0();
          }
          FUN_01025870();
          return 1;
        }
      }
      else if ((param_1 == puVar7) &&
              (local_54 = iVar9 + 1, puVar7 = local_50, iVar9 = local_54, param_3 = local_50,
              local_54 < (int)local_c)) {
        param_3 = (undefined4 *)local_10[local_54];
        puVar7 = param_3;
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar4[1]);
  }
  param_3 = (undefined4 *)0x0;
  if (0 < (int)local_c) {
    do {
      iVar9 = local_10[(int)param_3];
      iVar8 = *piVar4;
      puVar7 = local_40 + iVar9 * 2;
      uVar5 = FUN_010093a0();
      iVar6 = FUN_01025be0(uVar5,0);
      if ((iVar6 != 0) && (*(code **)(iVar6 + 0x10) != (code *)0x0)) {
        (**(code **)(iVar6 + 0x10))(puVar7,iVar8 + iVar9 * 8,param_2);
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
    } while ((int)param_3 < (int)local_c);
  }
  iVar9 = 0;
  param_3 = (undefined4 *)local_24;
  if (0 < (int)local_18) {
    do {
      iVar8 = *(int *)(local_1c + iVar9 * 4);
      param_3 = (undefined4 *)(*piVar4 + iVar8 * 8);
      (**(code **)(*param_2 + 0x18))(local_40[iVar8 * 2],*param_3,param_3[1]);
      iVar9 = iVar9 + 1;
      param_3 = (undefined4 *)local_24;
    } while (iVar9 < (int)local_18);
  }
  while (param_3 = (undefined4 *)((int)param_3 - 1), -1 < (int)param_3) {
    iVar9 = *(int *)(local_28 + (int)param_3 * 4);
    (**(code **)(*param_2 + 0x18))(local_40[iVar9 * 2],0,0);
    piVar4[1] = piVar4[1] + -1;
    if (piVar4[1] != iVar9) {
      puVar7 = (undefined4 *)(*piVar4 + iVar9 * 8);
      iVar9 = (*piVar4 + piVar4[1] * 8) - (int)puVar7;
      iVar8 = 2;
      do {
        *puVar7 = *(undefined4 *)(iVar9 + (int)puVar7);
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if ((local_38 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_40,local_38 * 8);
  }
  local_24 = 0;
  if (-1 < (int)local_20) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_28,local_20 * 4);
  }
  local_28 = 0;
  local_20 = 0x80000000;
  local_18 = 0;
  if (-1 < (int)local_14) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1c,local_14 * 4);
  }
  local_1c = 0;
  local_14 = 0x80000000;
  FUN_01025870();
  local_c = 0;
  if ((local_8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
  }
  local_10 = (int *)0x0;
  local_8 = 0x80000000;
  local_78[0] = vftable;
  if (local_60 != (int *)0x0) {
    FUN_010060a0();
  }
  FUN_01025870();
  return 0;
}

// 01051AD0  FUN_01051ad0  size=259  [run]
int FUN_01051ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  if (param_5 == 0) {
    param_5 = FUN_010500f0();
  }
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  iVar2 = FUN_0104e140(param_4,param_5,&local_10);
  if (iVar2 != 0) {
    uVar3 = FUN_010500f0();
    FUN_01015b90(param_4,uVar3);
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
    }
    return 1;
  }
  iVar2 = 0;
  do {
    if (local_c <= iVar2) break;
    iVar4 = *(int *)(local_10 + iVar2 * 4);
    piVar1 = (int *)(local_10 + iVar2 * 4);
    if (*(int *)(iVar4 + 0xc) == 0) {
      uVar3 = FUN_0104ed70(*(undefined4 *)(iVar4 + 4));
      iVar4 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                        (param_1,param_2,*(undefined4 *)(*piVar1 + 8),uVar3);
    }
    else {
      iVar4 = (**(code **)(iVar4 + 0xc))(param_1,param_2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar4 == 0);
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
  }
  return iVar4;
}

// 01051BE0  FUN_01051be0  size=122  [run]
undefined4 FUN_01051be0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = FUN_01015b90(uVar1,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (*(int *)(iVar2 + 4) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x24))(param_2,uVar1,param_3);
    iVar2 = FUN_01051ad0(iVar2,uVar1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x2c))(param_3);
      return 0;
    }
  }
  return 1;
}

// 01051C60  FUN_01051c60  size=27  [run]
void FUN_01051c60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010500f0();
  FUN_01051be0(param_1,param_2,uVar1);
  return;
}

// 01051C80  FUN_01051c80  size=471  [run]
undefined4 FUN_01051c80(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 local_a0;
  uint local_98;
  
  iVar1 = param_4;
  piVar4 = param_3;
  if ((param_3 != (int *)0x0) && (param_4 != 0)) {
    if (param_2 != 0) {
      FUN_01018f60(param_1,"#ifndef %s\r\n#define %s\r\n",param_2,param_2);
      FUN_01018d00(&DAT_017d391c);
    }
    FUN_01018d00("#include <Common/Compat/Deprecated/Compat/hkHavokAllClasses.h>\r\n\r\n");
    uVar2 = FUN_010500f0();
    FUN_01026840(uVar2);
    FUN_01026c40("Havok",&DAT_016416fa,1);
    FUN_01026c40(&DAT_016563a8,&DAT_016416fa,1);
    FUN_01026c40(&DAT_01656d18,&DAT_016416fa,1);
    FUN_01018f60(param_1,"namespace hkHavok%sClasses\r\n{\r\n",local_a0);
    FUN_01018f60(param_1,
                 "\textern const char VersionString[];\r\n\textern const int ClassVersion;\r\n\textern const hkStaticClassNameRegistry %s;\r\n"
                 ,iVar1);
    FUN_01018d00(&DAT_017d391c);
    param_3 = (int *)((uint)param_3 & 0xffffff00);
    FUN_01025830(param_3);
    for (; *piVar4 != 0; piVar4 = piVar4 + 1) {
      uVar2 = FUN_010093a0();
      uVar2 = FUN_01025530(uVar2);
      FUN_01025890((int)&param_3 + 3,uVar2);
      if (param_3._3_1_ == '\0') {
        uVar2 = FUN_010093a0();
        FUN_01025470(uVar2,1);
        pbVar3 = (byte *)FUN_010099b0();
        if ((*pbVar3 & 1) == 0) {
          uVar2 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
          uVar2 = FUN_010093a0(uVar2);
          FUN_01018f60(param_1,"\textern hkClass %sClass; /* 0x%p */\r\n",uVar2);
        }
      }
    }
    FUN_01018f60(param_1,"} // namespace hkHavok%sClasses\r\n",local_a0);
    if (param_2 != 0) {
      FUN_01018f60(param_1,"#endif // %s",param_2);
      FUN_01018d00(&DAT_017d391c);
    }
    FUN_01025870();
    if (-1 < (int)local_98) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_a0,local_98 & 0x3fffffff);
    }
    return 0;
  }
  return 1;
}

// 01051E60  FUN_01051e60  size=1066  [run]
void FUN_01051e60(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *local_2f0;
  undefined4 local_2ec;
  uint local_2e8;
  undefined1 local_2e4 [132];
  undefined1 *local_260;
  undefined4 local_25c;
  uint local_258;
  undefined1 local_254 [132];
  undefined1 *local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  undefined1 local_1c4 [132];
  undefined1 *local_140;
  undefined4 local_13c;
  uint local_138;
  undefined1 local_134 [132];
  undefined1 *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined1 local_a4 [36];
  undefined4 local_80 [24];
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  FUN_01026140("\tnamespace\r\n\t{\r\n");
  local_2f0 = local_2e4;
  local_18 = 0;
  local_2e8 = 0x80000080;
  local_2ec = 1;
  local_2e4[0] = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    do {
      local_20 = (undefined4 *)FUN_010095f0(*(undefined4 *)(*param_1 + local_14 * 4));
      local_b0 = local_a4;
      local_a8 = 0x80000080;
      local_ac = 1;
      local_a4[0] = 0;
      local_1c = (uint)*(byte *)((int)local_20 + 0xd);
      uVar4 = (uint)*(byte *)(local_20 + 3);
      FUN_01026140(&DAT_016416fa);
      if (((uVar4 == 0) || (0x12 < uVar4)) && (uVar4 != 0x1e)) {
        if ((uVar4 == 0x18) || (uVar4 == 0x1f)) {
          iVar1 = FUN_01016260(local_1c);
          FUN_01026140(*(undefined4 *)(iVar1 + 4));
        }
      }
      else {
        if ((uVar4 == 1) || (uVar4 - 0xc < 7)) {
          FUN_01026140(&DAT_0165c24c);
        }
        iVar1 = FUN_01016260(uVar4);
        FUN_010267c0(*(undefined4 *)(iVar1 + 4));
      }
      FUN_01026e40(&local_2f0,"\t\t\t%s m_%s;\r\n",local_b0,*local_20);
      local_ac = 0;
      if (-1 < (int)local_a8) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_b0,local_a8 & 0x3fffffff);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_1[1]);
  }
  uVar2 = FUN_010095e0(local_2f0);
  uVar2 = FUN_010093a0(uVar2);
  FUN_01026e40(param_2,
               "\t\tstruct %s_DefaultStruct\r\n\t\t{\r\n\t\t\tint s_defaultOffsets[%d];\r\n\t\t\ttypedef hkInt8 _hkBool;\r\n\t\t\ttypedef hkReal _hkVector4[4];\r\n\t\t\ttypedef hkReal _hkQuaternion[4];\r\n\t\t\ttypedef hkReal _hkMatrix3[12];\r\n\t\t\ttypedef hkReal _hkRotation[12];\r\n\t\t\ttypedef hkReal _hkQsTransform[12];\r\n\t\t\ttypedef hkReal _hkMatrix4[16];\r\n\t\t\ttypedef hkReal _hkTransform[16];\r\n%s\t\t};\r\n"
               ,uVar2);
  local_140 = local_134;
  local_13c = 1;
  local_1cc = 1;
  local_138 = 0x80000080;
  local_1d0 = local_1c4;
  local_1c8 = 0x80000080;
  iVar5 = 0;
  local_134[0] = 0;
  local_1c4[0] = 0;
  local_14 = 0;
  iVar1 = FUN_010095e0();
  if (0 < iVar1) {
    do {
      if ((local_18 < param_1[1]) && (*(int *)(*param_1 + local_18 * 4) == iVar5)) {
        puVar3 = (undefined4 *)FUN_010095f0(iVar5);
        uVar2 = FUN_010093a0(*puVar3);
        FUN_01026e40(&local_140,"HK_OFFSET_OF(%s_DefaultStruct,m_%s)",uVar2);
        FUN_010267c0(&DAT_01701288);
        puVar6 = local_80;
        local_80[0] = 0;
        uVar2 = FUN_010096b0(*puVar3);
        FUN_01009a70(uVar2,puVar6);
        local_260 = local_254;
        local_258 = 0x80000080;
        local_25c = 1;
        local_254[0] = 0;
        FUN_01050110(*(undefined1 *)(puVar3 + 3));
        FUN_010263d0(local_260,&DAT_01701288,0,0,0,0);
        local_18 = local_18 + 1;
        local_25c = 0;
        if (-1 < (int)local_258) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_260,local_258 & 0x3fffffff);
        }
      }
      else {
        FUN_010267c0(&DAT_017d3920);
        local_14 = iVar5;
      }
      iVar5 = local_14 + 1;
      local_14 = iVar5;
      iVar1 = FUN_010095e0();
    } while (iVar5 < iVar1);
  }
  uVar2 = FUN_010093a0(local_140,local_1d0);
  uVar2 = FUN_010093a0(uVar2);
  FUN_01026e40(param_2,
               "\t\tconst %s_DefaultStruct %s_Default =\r\n\t\t{\r\n\t\t\t{%s},\r\n\t\t\t%s\r\n\t\t};\r\n"
               ,uVar2);
  FUN_010267c0(&DAT_017d3570);
  local_1cc = 0;
  if ((local_1c8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1d0,local_1c8 & 0x3fffffff);
  }
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = 0x80000000;
  local_13c = 0;
  if ((local_138 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_140,local_138 & 0x3fffffff);
  }
  local_140 = (undefined1 *)0x0;
  local_138 = 0x80000000;
  local_2ec = 0;
  if ((local_2e8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_2f0,local_2e8 & 0x3fffffff);
  }
  return;
}

// 01052290  FUN_01052290  size=2592  [run]
void FUN_01052290(int param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_7d0 [20];
  undefined4 local_780;
  undefined4 local_77c;
  uint local_778;
  undefined4 local_6f0;
  undefined4 local_6ec;
  uint local_6e8;
  undefined4 local_660;
  undefined4 local_65c;
  uint local_658;
  int local_5d0 [36];
  undefined4 local_540;
  undefined4 local_53c;
  uint local_538;
  undefined4 local_4b0;
  undefined4 local_4ac;
  uint local_4a8;
  undefined4 local_420;
  undefined4 local_41c;
  uint local_418;
  undefined4 local_390;
  undefined4 local_38c;
  uint local_388;
  undefined1 *local_300;
  undefined4 local_2fc;
  uint local_2f8;
  undefined1 local_2f4 [132];
  undefined1 *local_270;
  undefined4 local_26c;
  uint local_268;
  undefined1 local_264 [132];
  undefined1 *local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined1 local_1d4 [132];
  undefined1 *local_150;
  undefined4 local_14c;
  uint local_148;
  undefined1 local_144 [132];
  undefined1 *local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined1 local_b4 [132];
  int local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  char local_11;
  
  uVar1 = FUN_010093a0();
  uVar1 = FUN_01025530(uVar1);
  FUN_01025890(&local_11,uVar1);
  if (local_11 == '\0') {
    uVar1 = FUN_010093a0();
    FUN_01025470(uVar1,1);
    pbVar2 = (byte *)FUN_010099b0();
    if ((*pbVar2 & 1) == 0) {
      local_c0 = local_b4;
      local_b8 = 0x80000080;
      local_bc = 1;
      local_b4[0] = 0;
      uVar1 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
      uVar1 = FUN_010093a0(uVar1);
      FUN_010262e0(&local_c0,"\textern hkClass %sClass; /* 0x%p */\r\n",uVar1);
      iVar9 = local_1c;
      FUN_010267c0(local_c0);
      iVar3 = (*(undefined4 **)(iVar9 + 4))[1];
      iVar4 = 0;
      if (0 < iVar3) {
        piVar8 = (int *)**(undefined4 **)(iVar9 + 4);
LAB_01052395:
        if (param_1 != *piVar8) goto code_r0x01052399;
        iVar3 = FUN_010093b0();
        if (iVar3 != 0) {
          uVar1 = FUN_010093b0();
          FUN_01052290(uVar1);
        }
        FUN_01026840("HK_NULL");
        FUN_01026840("HK_NULL");
        FUN_01026840("HK_NULL");
        FUN_01026840("HK_NULL");
        FUN_01026840(&DAT_016b964c);
        FUN_01026840("HK_NULL");
        local_270 = local_264;
        local_1e0 = local_1d4;
        local_300 = local_2f4;
        local_264[0] = 0;
        local_1d4[0] = 0;
        local_2f4[0] = 0;
        local_144[0] = 0;
        local_150 = local_144;
        local_268 = 0x80000080;
        local_26c = 1;
        local_1d8 = 0x80000080;
        local_1dc = 1;
        local_2f8 = 0x80000080;
        local_2fc = 1;
        local_148 = 0x80000080;
        local_14c = 1;
        iVar3 = FUN_010093b0();
        if (iVar3 != 0) {
          FUN_010093b0();
          uVar1 = FUN_010093a0();
          FUN_010262e0(local_5d0,"&%sClass",uVar1);
        }
        FUN_01009480();
        iVar3 = FUN_01009560();
        if (0 < iVar3) {
          uVar1 = FUN_010093a0();
          FUN_010262e0(&local_4b0,"reinterpret_cast<const hkClassEnum*>(%sEnums)",uVar1);
          uVar1 = FUN_010093a0();
          FUN_010262e0(&local_c0,"\tstatic const hkInternalClassEnum %sEnums[] =\r\n\t{\r\n",uVar1);
          FUN_010267c0(local_c0);
          local_18 = 0;
          iVar3 = FUN_01009560();
          if (0 < iVar3) {
            do {
              puVar5 = (undefined4 *)FUN_01009540(local_18);
              local_20 = FUN_01010160(puVar5,0);
              local_24 = *(undefined4 *)(local_1c + 0x124);
              uVar1 = FUN_01025530(local_20);
              FUN_01025890(&local_11,uVar1);
              if (local_11 == '\0') {
                FUN_01025470(local_20,1);
                FUN_0104ffe0(&local_270);
                FUN_010262e0(&local_c0,"\t\t{\"%s\", %sEnumItems, %d, HK_NULL, %d },\r\n",*puVar5,
                             local_20,puVar5[2],puVar5[4]);
                FUN_010267c0(local_c0);
                uVar1 = FUN_010093a0(local_18);
                FUN_010262e0(&local_c0,
                             "\textern const hkClassEnum* %sEnum = reinterpret_cast<const hkClassEnum*>(&%sEnums[%d]);\r\n"
                             ,local_20,uVar1);
                FUN_010267c0(local_c0);
              }
              iVar9 = local_18 + 1;
              local_18 = iVar9;
              iVar3 = FUN_01009560();
            } while (iVar9 < iVar3);
          }
          FUN_010267c0("\t};\r\n");
        }
        FUN_010267c0(local_300);
        FUN_010267c0(local_270);
        FUN_010267c0(local_1e0);
        iVar3 = FUN_010095e0();
        if (0 < iVar3) {
          local_30 = 0;
          local_2c = 0;
          local_28 = 0x80000000;
          local_7d0[0] = 0;
          uVar1 = FUN_010093a0();
          FUN_010262e0(&local_420,"reinterpret_cast<const hkClassMember*>(%sClass_Members)",uVar1);
          uVar1 = FUN_010093a0();
          FUN_010262e0(&local_390,"int(sizeof(%sClass_Members)/sizeof(hkInternalClassMember))",uVar1
                      );
          uVar1 = FUN_010093a0();
          FUN_010262e0(&local_c0,"\tstatic hkInternalClassMember %sClass_Members[] =\r\n\t{\r\n",
                       uVar1);
          FUN_010267c0(local_c0);
          local_18 = 0;
          iVar3 = FUN_010095e0();
          if (0 < iVar3) {
            do {
              FUN_01026840("HK_NULL");
              FUN_01026840("HK_NULL");
              puVar6 = (undefined4 *)FUN_010095f0(local_18);
              puVar5 = local_7d0;
              uVar1 = FUN_010096b0(*puVar6);
              iVar3 = FUN_01009a70(uVar1,puVar5);
              if (iVar3 == 0) {
                if (local_2c == (local_28 & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,&local_30,4);
                }
                *(int *)(local_30 + local_2c * 4) = local_18;
                local_2c = local_2c + 1;
              }
              if (puVar6[1] != 0) {
                pbVar2 = (byte *)FUN_010099b0();
                if ((*pbVar2 & 1) == 0) {
                  uVar1 = FUN_010093a0();
                  FUN_010262e0(&local_780,"&%sClass",uVar1);
                }
                FUN_01052290(puVar6[1]);
              }
              if (puVar6[2] != 0) {
                uVar1 = FUN_01010160(puVar6[2],0);
                FUN_010262e0(&local_660,"%sEnum",uVar1);
              }
              FUN_01017740(*(undefined1 *)(puVar6 + 3),&local_20);
              FUN_01017740(*(undefined1 *)((int)puVar6 + 0xd),&local_24);
              FUN_010262e0(&local_c0,
                           "\t\t{ \"%s\", %s, %s, hkClassMember::%s, hkClassMember::%s, %d, %d, 0, HK_NULL },\r\n"
                           ,*puVar6,local_780,local_660,local_20,local_24,
                           *(undefined2 *)((int)puVar6 + 0xe),*(undefined2 *)(puVar6 + 4));
              FUN_010267c0(local_c0);
              local_65c = 0;
              if (-1 < (int)local_658) {
                (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_660,local_658 & 0x3fffffff);
              }
              local_660 = 0;
              local_658 = 0x80000000;
              local_77c = 0;
              if (-1 < (int)local_778) {
                (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_780,local_778 & 0x3fffffff);
              }
              iVar9 = local_18 + 1;
              local_18 = iVar9;
              iVar3 = FUN_010095e0();
            } while (iVar9 < iVar3);
          }
          FUN_010267c0("\t};\r\n");
          if (0 < (int)local_2c) {
            uVar1 = FUN_010093a0();
            FUN_010262e0(&local_540,"&%s_Default",uVar1);
            FUN_01051e60(&local_30,&local_c0);
            FUN_010267c0(local_c0);
          }
          local_2c = 0;
          if (-1 < (int)local_28) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 * 4);
          }
        }
        uVar1 = local_4b0;
        local_24 = local_6f0;
        local_18 = local_5d0[0];
        uVar7 = FUN_01009560(local_420,local_390,local_540);
        uVar1 = FUN_01009480(uVar1,uVar7);
        uVar1 = FUN_010093a0(local_18,local_24,uVar1);
        uVar1 = FUN_010093a0(uVar1);
        FUN_010262e0(&local_c0,
                     "\thkClass %sClass(\r\n\t\t\"%s\",\r\n\t\t%s,\r\n\t\t0,\r\n\t\t%s,\r\n\t\t%d,\r\n\t\t%s,\r\n\t\t%d,\r\n\t\t%s,\r\n\t\t%s,\r\n\t\t%s\r\n\t);\r\n"
                     ,uVar1);
        FUN_010267c0(local_c0);
        FUN_010267c0(local_150);
        local_14c = 0;
        if ((local_148 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_150,local_148 & 0x3fffffff);
        }
        local_150 = (undefined1 *)0x0;
        local_148 = 0x80000000;
        local_2fc = 0;
        if ((local_2f8 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_300,local_2f8 & 0x3fffffff);
        }
        local_300 = (undefined1 *)0x0;
        local_2f8 = 0x80000000;
        local_1dc = 0;
        if ((local_1d8 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1e0,local_1d8 & 0x3fffffff);
        }
        local_1e0 = (undefined1 *)0x0;
        local_1d8 = 0x80000000;
        local_26c = 0;
        if ((local_268 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_270,local_268 & 0x3fffffff);
        }
        local_270 = (undefined1 *)0x0;
        local_268 = 0x80000000;
        local_53c = 0;
        if ((local_538 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_540,local_538 & 0x3fffffff);
        }
        local_540 = 0;
        local_538 = 0x80000000;
        local_38c = 0;
        if ((local_388 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_390,local_388 & 0x3fffffff);
        }
        local_390 = 0;
        local_388 = 0x80000000;
        local_41c = 0;
        if ((local_418 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_420,local_418 & 0x3fffffff);
        }
        local_420 = 0;
        local_418 = 0x80000000;
        local_4ac = 0;
        if ((local_4a8 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_4b0,local_4a8 & 0x3fffffff);
        }
        local_4b0 = 0;
        local_4a8 = 0x80000000;
        local_6ec = 0;
        if ((local_6e8 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_6f0,local_6e8 & 0x3fffffff);
        }
        local_6f0 = 0;
        local_6e8 = 0x80000000;
        local_5d0[1] = 0;
        if ((local_5d0[2] & 0x80000000U) == 0) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_5d0[0],local_5d0[2] & 0x3fffffff);
        }
        local_5d0[0] = 0;
        local_5d0[2] = 0x80000000;
        if ((local_b8 & 0x80000000) != 0) {
          return;
        }
        goto LAB_01052c88;
      }
LAB_010523a1:
      if (-1 < (int)local_b8) {
LAB_01052c88:
        local_bc = 0;
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_c0,local_b8 & 0x3fffffff);
      }
    }
    else {
      iVar3 = FUN_010093b0();
      if (iVar3 != 0) {
        uVar1 = FUN_010093b0();
        FUN_01052290(uVar1);
        return;
      }
    }
  }
  return;
code_r0x01052399:
  iVar4 = iVar4 + 1;
  piVar8 = piVar8 + 1;
  if (iVar3 <= iVar4) goto LAB_010523a1;
  goto LAB_01052395;
}

// 01052CB0  FUN_01052cb0  size=2367  [run]
/* WARNING: Removing unreachable block (ram,0x0105341e) */

undefined4 FUN_01052cb0(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  LPVOID pvVar8;
  undefined4 local_658;
  uint local_650;
  undefined4 local_5cc;
  uint local_5c4;
  undefined1 *local_49c;
  undefined4 local_498;
  uint local_494;
  undefined1 local_490 [128];
  undefined4 local_410;
  undefined4 local_40c;
  uint local_408;
  undefined1 *local_384;
  undefined4 local_380;
  uint local_37c;
  undefined1 local_378 [128];
  undefined1 *local_2f8;
  int local_2f4;
  uint local_2f0;
  undefined1 local_2ec [128];
  undefined1 *local_26c;
  undefined4 local_268;
  uint local_264;
  undefined1 local_260 [128];
  undefined1 *local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined1 local_1d4 [128];
  undefined1 *local_154;
  undefined4 local_150;
  uint local_14c;
  undefined1 local_148 [128];
  undefined1 *local_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined1 local_bc [128];
  undefined1 local_3c [16];
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20 [7];
  
  if ((param_2 == 0) || (param_4 == 0)) {
    return 1;
  }
  if (param_3 != 0) {
    FUN_01018d00(param_3);
    FUN_01018d00(&DAT_017d3a00);
  }
  FUN_01018d00("#include <Common/Compat/Deprecated/Compat/hkHavokAllClasses.h>\r\n\r\n");
  local_c8 = local_bc;
  local_c0 = 0x80000080;
  local_c4 = 1;
  local_bc[0] = 0;
  uVar2 = FUN_010500f0();
  FUN_01026840(uVar2);
  FUN_01026c40("Havok",&DAT_016416fa,1);
  FUN_01026c40(&DAT_016563a8,&DAT_016416fa,1);
  FUN_01026c40(&DAT_01656d18,&DAT_016416fa,1);
  FUN_01018f60(param_1,"namespace hkHavok%sClasses\r\n{\r\n",local_410);
  FUN_01018f60(param_1,
               "\textern const char VersionString[];\r\n\textern const int ClassVersion;\r\n\textern const hkStaticClassNameRegistry %s;\r\n"
               ,param_4);
  FUN_01018d00(&DAT_017d391c);
  local_20[5] = FUN_01050100();
  local_20[6] = local_20[5] | 0x80000000;
  local_20[4] = param_2;
  param_2 = param_2 & 0xffffff00;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = -1;
  FUN_01025830(param_2);
  local_2f8 = local_2ec;
  local_49c = local_490;
  local_2f0 = 0x80000080;
  local_2f4 = 1;
  local_2ec[0] = 0;
  local_494 = 0x80000080;
  local_498 = 1;
  local_490[0] = 0;
  local_20[3] = 0;
  if (0 < local_20[5]) {
    do {
      iVar5 = local_20[3];
      param_2 = 0;
      iVar3 = FUN_01009560();
      if (0 < iVar3) {
        do {
          puVar4 = (undefined4 *)FUN_01009540(param_2);
          iVar5 = FUN_01010120(puVar4);
          if (local_20[2] < iVar5) {
            uVar2 = FUN_010093a0(*puVar4);
            FUN_010262e0(&local_49c,&DAT_0165864c,uVar2);
            uVar2 = FUN_01016080(local_49c);
            FUN_010100a0(&PTR_vftable_018e9b94,puVar4,uVar2);
            FUN_010262e0(&local_c8,"\textern const hkClassEnum* %sEnum;\r\n",local_49c);
            FUN_010267c0(local_c8);
          }
          param_2 = param_2 + 1;
          iVar3 = FUN_01009560();
          iVar5 = local_20[3];
        } while ((int)param_2 < iVar3);
      }
      local_20[3] = iVar5 + 1;
    } while (local_20[3] < local_20[5]);
  }
  local_498 = 0;
  if (-1 < (int)local_494) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_49c,local_494 & 0x3fffffff);
  }
  local_26c = local_260;
  local_1e0 = local_1d4;
  local_384 = local_378;
  local_154 = local_148;
  bVar1 = false;
  local_264 = 0x80000080;
  local_268 = 1;
  local_260[0] = 0;
  local_1d8 = 0x80000080;
  local_1dc = 1;
  local_1d4[0] = 0;
  local_37c = 0x80000080;
  local_380 = 1;
  local_378[0] = 0;
  local_14c = 0x80000080;
  local_150 = 1;
  local_148[0] = 0;
  local_20[3] = 0;
  local_24 = 0;
  if (0 < local_20[5]) {
    do {
      iVar5 = local_24;
      local_2c = *(undefined4 *)(local_20[4] + local_24 * 4);
      pbVar6 = (byte *)FUN_010099b0();
      if ((*pbVar6 & 1) == 0) {
        iVar3 = 0;
        local_28 = 0;
        iVar7 = FUN_010095e0();
        if (0 < iVar7) {
          do {
            iVar5 = FUN_010095f0(iVar3);
            if ((*(int *)(iVar5 + 8) != 0) &&
               (iVar7 = FUN_01010120(*(int *)(iVar5 + 8)), local_20[2] < iVar7)) {
              puVar4 = *(undefined4 **)(iVar5 + 8);
              uVar2 = FUN_01016080(*puVar4);
              FUN_010100a0(&PTR_vftable_018e9b94,puVar4,uVar2);
              FUN_01025470(uVar2,1);
              if (!bVar1) {
                bVar1 = true;
                FUN_010262e0(&local_c8,"\tstatic const hkInternalClassEnum %sEnums[] =\r\n\t{\r\n",
                             &DAT_016416fa);
                FUN_010267c0(local_c8);
              }
              FUN_01026e40(&local_26c,
                           "\tstatic const hkInternalClassEnumItem %sEnumItems[] =\r\n\t{\r\n",uVar2
                          );
              iVar5 = 0;
              if (0 < (int)puVar4[2]) {
                do {
                  FUN_01026e40(&local_26c,"\t\t{%d, \"%s\"},\r\n",
                               *(undefined4 *)(puVar4[1] + iVar5 * 8),
                               *(undefined4 *)(puVar4[1] + 4 + iVar5 * 8));
                  iVar5 = iVar5 + 1;
                } while (iVar5 < (int)puVar4[2]);
              }
              FUN_010267c0("\t};\r\n");
              FUN_010262e0(&local_c8,"\t\t{\"%s\", %sEnumItems, %d, HK_NULL, %d },\r\n",*puVar4,
                           uVar2,puVar4[2],puVar4[4]);
              FUN_010267c0(local_c8);
              iVar5 = local_20[3];
              FUN_010262e0(&local_c8,
                           "\textern const hkClassEnum* %sEnum = reinterpret_cast<const hkClassEnum*>(&%sEnums[%d]);\r\n"
                           ,uVar2,&DAT_016416fa,local_20[3]);
              local_20[3] = iVar5 + 1;
              FUN_010267c0(local_c8);
              iVar3 = local_28;
            }
            iVar3 = iVar3 + 1;
            local_28 = iVar3;
            iVar7 = FUN_010095e0();
            iVar5 = local_24;
          } while (iVar3 < iVar7);
        }
      }
      local_24 = iVar5 + 1;
    } while (local_24 < local_20[5]);
    if (bVar1) {
      FUN_010267c0("\t};\r\n");
      FUN_010267c0(local_384);
      FUN_010267c0(local_26c);
      FUN_010267c0(local_1e0);
    }
  }
  FUN_010510e0(local_20 + 4,local_20,local_3c);
  iVar5 = 0;
  if (0 < local_20[5]) {
    do {
      FUN_01052290(*(undefined4 *)(local_20[4] + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_20[5]);
  }
  uVar2 = FUN_01050690();
  FUN_01018d00(uVar2);
  FUN_01018d00(&DAT_017d391c);
  if (local_2f4 != 1 && -1 < local_2f4 + -1) {
    FUN_01018d00(local_2f8);
    FUN_01018d00(&DAT_017d391c);
  }
  uVar2 = FUN_010506a0();
  FUN_01018d00(uVar2);
  FUN_01026140(&DAT_016416fa);
  iVar5 = 0;
  if (0 < local_20[5]) {
    do {
      pbVar6 = (byte *)FUN_010099b0();
      if ((*pbVar6 & 1) == 0) {
        uVar2 = FUN_010093a0();
        FUN_010262e0(&local_c8,"\t\t&%sClass,\r\n",uVar2);
        FUN_010267c0(local_c8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_20[5]);
  }
  FUN_01018f60(param_1,
               "\tstatic hkClass* const Classes[] =\r\n\t{\r\n%s\t\tHK_NULL\r\n\t};\r\n\r\n\tconst hkStaticClassNameRegistry %s(Classes, ClassVersion, VersionString);\r\n"
               ,local_154,param_4);
  FUN_01018f60(param_1,"} // namespace hkHavok%sClasses\r\n",local_410);
  iVar5 = 0;
  if (-1 < local_20[2]) {
    do {
      if (*(int *)(local_20[0] + iVar5 * 8) != -1) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_20[2]);
  }
  if (iVar5 <= local_20[2]) {
    do {
      uVar2 = *(undefined4 *)(local_20[0] + 4 + iVar5 * 8);
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar8 + 0x2c),uVar2);
      do {
        iVar5 = iVar5 + 1;
        if (local_20[2] < iVar5) break;
      } while (*(int *)(local_20[0] + iVar5 * 8) == -1);
    } while (iVar5 <= local_20[2]);
  }
  FUN_01025870();
  if ((local_5c4 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_5cc,local_5c4 & 0x3fffffff);
  }
  if ((local_650 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_658,local_650 & 0x3fffffff);
  }
  local_150 = 0;
  if ((local_14c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_154,local_14c & 0x3fffffff);
  }
  local_14c = 0x80000000;
  local_154 = (undefined1 *)0x0;
  local_380 = 0;
  if ((local_37c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_384,local_37c & 0x3fffffff);
  }
  local_384 = (undefined1 *)0x0;
  local_37c = 0x80000000;
  local_1dc = 0;
  if ((local_1d8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1e0,local_1d8 & 0x3fffffff);
  }
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = 0x80000000;
  local_268 = 0;
  if ((local_264 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_26c,local_264 & 0x3fffffff);
  }
  local_26c = (undefined1 *)0x0;
  local_264 = 0x80000000;
  local_2f4 = 0;
  if ((local_2f0 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_2f8,local_2f0 & 0x3fffffff);
  }
  local_2f8 = (undefined1 *)0x0;
  local_2f0 = 0x80000000;
  FUN_01025870();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_20[5] = 0;
  if ((local_20[6] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20[4],local_20[6] * 4);
  }
  local_20[4] = 0;
  local_20[6] = 0x80000000;
  local_40c = 0;
  if ((local_408 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_410,local_408 & 0x3fffffff);
  }
  local_408 = 0x80000000;
  local_410 = 0;
  local_c4 = 0;
  if ((local_c0 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_c8,local_c0 & 0x3fffffff);
  }
  return 0;
}

// 01053630  FUN_01053630  size=21  [run]
bool __thiscall FUN_01053630(uint *param_1,uint param_2)

{
  return (*param_1 & param_2) == param_2;
}

// 01053650  FUN_01053650  size=14  [run]
void __thiscall FUN_01053650(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01053660  FUN_01053660  size=14  [run]
void __thiscall FUN_01053660(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01053670  FUN_01053670  size=9  [run]
void FUN_01053670(void)

{
  FUN_01010160();
  return;
}

// 01053680  FUN_01053680  size=27  [run]
uint __fastcall FUN_01053680(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010536A0  FUN_010536a0  size=9  [run]
void FUN_010536a0(void)

{
  FUN_01025470();
  return;
}

// 010536B0  FUN_010536b0  size=9  [run]
void FUN_010536b0(void)

{
  FUN_01025be0();
  return;
}

// 010536C0  FUN_010536c0  size=43  [run]
undefined4 FUN_010536c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01025900(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 010536F0  FUN_010536f0  size=32  [run]
void __thiscall FUN_010536f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01053710  FUN_01053710  size=15  [run]
int __thiscall FUN_01053710(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01053750  FUN_01053750  size=15  [run]
int __thiscall FUN_01053750(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010537A0  FUN_010537a0  size=15  [run]
int __thiscall FUN_010537a0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01053820  FUN_01053820  size=8  [run]
undefined4 FUN_01053820(undefined4 param_1)

{
  return param_1;
}

// 01053830  FUN_01053830  size=8  [run]
undefined4 FUN_01053830(undefined4 param_1)

{
  return param_1;
}

// 01053840  FUN_01053840  size=8  [run]
undefined4 FUN_01053840(undefined4 param_1)

{
  return param_1;
}

// 01053850  FUN_01053850  size=8  [run]
undefined4 FUN_01053850(undefined4 param_1)

{
  return param_1;
}

// 01053860  FUN_01053860  size=8  [run]
undefined4 FUN_01053860(undefined4 param_1)

{
  return param_1;
}

// 01053870  FUN_01053870  size=8  [run]
undefined4 FUN_01053870(undefined4 param_1)

{
  return param_1;
}

// 01053880  FUN_01053880  size=8  [run]
undefined4 FUN_01053880(undefined4 param_1)

{
  return param_1;
}

// 01053890  FUN_01053890  size=8  [run]
undefined4 FUN_01053890(undefined4 param_1)

{
  return param_1;
}

// 010538A0  FUN_010538a0  size=8  [run]
undefined4 FUN_010538a0(undefined4 param_1)

{
  return param_1;
}

// 010538B0  FUN_010538b0  size=8  [run]
undefined4 FUN_010538b0(undefined4 param_1)

{
  return param_1;
}

// 010538C0  FUN_010538c0  size=8  [run]
undefined4 FUN_010538c0(undefined4 param_1)

{
  return param_1;
}

// 010538D0  FUN_010538d0  size=8  [run]
undefined4 FUN_010538d0(undefined4 param_1)

{
  return param_1;
}

// 010538E0  FUN_010538e0  size=8  [run]
undefined4 FUN_010538e0(undefined4 param_1)

{
  return param_1;
}

// 01053920  FUN_01053920  size=15  [run]
int __thiscall FUN_01053920(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010539B0  FUN_010539b0  size=40  [run]
void FUN_010539b0(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 010539E0  FUN_010539e0  size=52  [run]
undefined4 __thiscall FUN_010539e0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 8);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return uVar2;
}

// 01053A20  FUN_01053a20  size=28  [run]
void __thiscall FUN_01053a20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01053A40  FUN_01053a40  size=25  [run]
void __thiscall FUN_01053a40(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01053A60  FUN_01053a60  size=28  [run]
void __thiscall FUN_01053a60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01053A90  FUN_01053a90  size=28  [run]
void __thiscall FUN_01053a90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01053AC0  FUN_01053ac0  size=26  [run]
void __thiscall FUN_01053ac0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01053AE0  FUN_01053ae0  size=52  [run]
undefined4 __thiscall FUN_01053ae0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01053B30  FUN_01053b30  size=33  [run]
void FUN_01053b30(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_3 + (int)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01053B70  FUN_01053b70  size=21  [run]
void FUN_01053b70(undefined4 param_1)

{
  FUN_01025be0(param_1,0);
  return;
}

// 01053B90  _anon_B1A2C86F::PackfileObjectCopier::vf14  size=10  [run]
undefined4 _anon_B1A2C86F::PackfileObjectCopier::vf14(undefined4 param_1)

{
  return param_1;
}

// 01053BA0  FUN_01053ba0  size=38  [run]
void FUN_01053ba0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01053BD0  _anon_B1A2C86F::PackfileObjectCopier::vf00  size=52  [run]
int __thiscall _anon_B1A2C86F::PackfileObjectCopier::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_138();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01053C30  FUN_01053c30  size=153  [run]
int FUN_01053c30(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  FUN_01025830(local_8);
  while (param_2 != 0) {
    uVar2 = FUN_010093a0();
    FUN_01025470(uVar2,param_2);
    param_2 = FUN_010093b0();
  }
  iVar5 = 0;
  if (0 < param_1[1]) {
    do {
      iVar4 = *(int *)(*param_1 + iVar5 * 4);
      iVar3 = *(int *)(iVar4 + 0xc);
      while (iVar3 != 0) {
        iVar3 = FUN_01025be0(iVar3,0);
        if (iVar3 != 0) {
          FUN_01025870();
          return iVar4;
        }
        piVar1 = (int *)(iVar4 + 0x20);
        iVar4 = iVar4 + 0x14;
        iVar3 = *piVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1]);
  }
  FUN_01025870();
  return 0;
}

// 01053D10  FUN_01053d10  size=32  [run]
void __thiscall FUN_01053d10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01053DB0  FUN_01053db0  size=25  [run]
void FUN_01053db0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01053DD0  FUN_01053dd0  size=25  [run]
void FUN_01053dd0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01053DF0  FUN_01053df0  size=16  [run]
undefined4 __thiscall FUN_01053df0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 01053E00  FUN_01053e00  size=21  [run]
void __thiscall FUN_01053e00(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01053E20  FUN_01053e20  size=25  [run]
void FUN_01053e20(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01053EC0  FUN_01053ec0  size=138  [run]
int * __thiscall FUN_01053ec0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_3;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar1 * 8);
    }
    param_3 = (int *)(piVar2[1] * 8);
    iVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_3 + ((int)param_3 >> 0x1f & 7U)) >> 3;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 01053F50  FUN_01053f50  size=63  [run]
void __thiscall FUN_01053f50(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01053F90  FUN_01053f90  size=60  [run]
void __thiscall FUN_01053f90(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01053FD0  FUN_01053fd0  size=63  [run]
void __thiscall FUN_01053fd0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054010  FUN_01054010  size=63  [run]
void __thiscall FUN_01054010(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054060  FUN_01054060  size=149  [run]
void __thiscall
FUN_01054060(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_6) * 4,*param_1 + (param_4 + param_3) * 4,
               ((iVar1 - param_3) - param_4) * 4);
  puVar3 = (undefined4 *)(*param_1 + param_3 * 4);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(param_5 + (int)puVar3);
      puVar3 = puVar3 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 01054120  FUN_01054120  size=56  [run]
void __thiscall FUN_01054120(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01054180  FUN_01054180  size=31  [run]
void __thiscall FUN_01054180(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010541C0  FUN_010541c0  size=36  [run]
void __thiscall FUN_010541c0(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01054210  FUN_01054210  size=31  [run]
void __thiscall FUN_01054210(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01054230  FUN_01054230  size=145  [run]
int * __thiscall FUN_01054230(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,uVar1 * 8);
    }
    param_2 = (int *)(piVar2[1] * 8);
    iVar3 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 010542D0  FUN_010542d0  size=63  [run]
void __fastcall FUN_010542d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054310  FUN_01054310  size=60  [run]
void __fastcall FUN_01054310(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054350  FUN_01054350  size=63  [run]
void __fastcall FUN_01054350(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054390  FUN_01054390  size=63  [run]
void __fastcall FUN_01054390(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010543D0  FUN_010543d0  size=63  [run]
void __fastcall FUN_010543d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054410  FUN_01054410  size=61  [run]
void __thiscall FUN_01054410(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054450  FUN_01054450  size=30  [run]
void FUN_01054450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01054060(param_1,param_2,0,param_3,param_4);
  return;
}

// 01054470  FUN_01054470  size=63  [run]
void __fastcall FUN_01054470(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010544B0  FUN_010544b0  size=60  [run]
void __fastcall FUN_010544b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010544F0  FUN_010544f0  size=63  [run]
void __fastcall FUN_010544f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054530  FUN_01054530  size=63  [run]
void __fastcall FUN_01054530(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054570  FUN_01054570  size=26  [run]
void FUN_01054570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01054450(param_1,param_2,param_3,1);
  return;
}

// 01054590  FUN_01054590  size=63  [run]
void __fastcall FUN_01054590(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010545D0  FUN_010545d0  size=61  [run]
void __fastcall FUN_010545d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01054610  FUN_01054610  size=48  [run]
void __fastcall FUN_01054610(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0xc] = 0;
  return;
}

// 01054640  FUN_01054640  size=25  [run]
void FUN_01054640(undefined4 param_1,undefined4 param_2)

{
  FUN_01054570(&PTR_vftable_018e9b8c,param_1,param_2);
  return;
}

// 01054660  FUN_01054660  size=61  [run]
void __fastcall FUN_01054660(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010546A0  FUN_010546a0  size=297  [run]
undefined4 __thiscall FUN_010546a0(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_c = local_c & 0xffffff00;
  local_8 = param_1;
  FUN_01025830(local_c);
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  piVar1 = param_4;
  for (; param_4 = piVar1, param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
    if (*(int *)(param_2 + 4) != 0) {
      FUN_01054570(&PTR_vftable_018e9b8c,0,param_2 + 4);
    }
    piVar1 = param_4;
  }
  param_2 = 0;
  if (0 < param_3[1]) {
    do {
      uVar5 = *(undefined4 *)(*param_3 + 4 + param_2 * 8);
      uVar2 = FUN_010093a0();
      iVar3 = FUN_01025900(uVar2,&param_4);
      piVar4 = param_4;
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_01053c30(&local_18,uVar5);
        uVar5 = FUN_010093a0();
        FUN_01025470(uVar5,piVar4);
      }
      if (piVar4 != (int *)0x0) {
        if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,piVar1,4);
        }
        *(int *)(*piVar1 + piVar1[1] * 4) = param_2;
        piVar1[1] = piVar1[1] + 1;
      }
      param_2 = param_2 + 1;
      param_1 = local_8;
    } while (param_2 < param_3[1]);
  }
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,local_10 * 4);
  }
  return param_1;
}

// 010547D0  FUN_010547d0  size=127  [run]
void __fastcall FUN_010547d0(int param_1)

{
  FUN_01025870();
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x9c)) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))
              (*(undefined4 *)(param_1 + 0x94),*(uint *)(param_1 + 0x9c) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x10)) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))
              (*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0x10) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  return;
}

// 01054850  FUN_01054850  size=118  [run]
void __thiscall FUN_01054850(int *param_1,int *param_2)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  
  FUN_0143e7c0(in_EAX,"className");
  piVar1 = (int *)FUN_0143e860(0);
  iVar2 = *param_1;
  if (iVar2 != 0) {
    while (*piVar1 != 0) {
      iVar2 = FUN_01015b90(*piVar1,iVar2);
      if (iVar2 == 0) {
        iVar2 = FUN_01016080(param_1[1]);
        (**(code **)(*param_2 + 0xc))(iVar2);
        *piVar1 = iVar2;
        return;
      }
      iVar2 = param_1[2];
      param_1 = param_1 + 2;
      if (iVar2 == 0) {
        return;
      }
    }
  }
  return;
}

// 010548D0  FUN_010548d0  size=66  [run]
void FUN_010548d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_EDI + 4)) {
    do {
      FUN_01009750();
      FUN_01054850(param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_EDI + 4));
  }
  return;
}

// 01054920  FUN_01054920  size=223  [run]
void FUN_01054920(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1c [16];
  undefined4 local_c;
  int local_8;
  
  if ((*param_2 != 0) && (local_8 = 0, 0 < param_1[1])) {
    do {
      iVar3 = local_8 * 8;
      local_c = *(undefined4 *)(*param_1 + 4 + iVar3);
      uVar1 = FUN_010093a0("hkRootLevelContainer");
      iVar2 = FUN_01015b90(uVar1);
      if (iVar2 == 0) {
        FUN_0143e7c0(*param_1 + iVar3,"namedVariants");
        FUN_0143e9a0(0);
        iVar3 = FUN_0143ea60(local_1c);
        FUN_010548d0(*(undefined4 *)(iVar3 + 4),param_2,param_3);
      }
      uVar1 = FUN_010093a0("hkRootLevelContainerNamedVariant");
      iVar3 = FUN_01015b90(uVar1);
      if (iVar3 == 0) {
        FUN_01054850(param_3);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1[1]);
  }
  return;
}

// 01054A00  FUN_01054a00  size=168  [run]
void FUN_01054a00(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  FUN_0143e9e0();
  local_10 = FUN_01016520();
  FUN_0143e9e0();
  local_14 = FUN_01016520();
  piVar1 = (int *)FUN_0143e840();
  local_8 = (int *)FUN_0143e840();
  local_c = piVar1[1];
  FUN_0143e9e0();
  local_20 = FUN_010162f0();
  FUN_0143e9e0();
  local_18 = FUN_010162f0();
  iVar3 = *piVar1;
  iVar4 = *local_8;
  iVar2 = local_c;
  if (0 < local_c) {
    do {
      local_24 = iVar3;
      local_1c = iVar4;
      (*param_3)(&local_24,&local_1c,param_4);
      iVar3 = iVar3 + local_10;
      iVar4 = iVar4 + local_14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01054AC0  hkXmlPackfileWriter::hkXmlPackfileWriter  size=117  [run]
undefined4 * __thiscall
hkXmlPackfileWriter::hkXmlPackfileWriter(undefined4 *param_1,undefined4 param_2)

{
  hkPackfileWriter::hkPackfileWriter(param_2);
  *param_1 = vftable;
  vf20(PTR_s___types___01b1dc04);
  vf28(&DAT_01f9050c,PTR_s___types___01b1dc04);
  vf28(&DAT_01f9047c,PTR_s___types___01b1dc04);
  vf28(&DAT_01f904dc,PTR_s___types___01b1dc04);
  vf28(&DAT_01f904ac,PTR_s___types___01b1dc04);
  return param_1;
}

// 01054B40  FUN_01054b40  size=462  [run]
undefined4
FUN_01054b40(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,int param_6
            ,int *param_7,undefined4 param_8,int *param_9,int param_10)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_228 [256];
  undefined1 local_128 [256];
  undefined1 local_28 [12];
  char *local_1c [3];
  int local_10;
  undefined4 *local_8;
  
  iVar4 = FUN_01010120(param_5);
  if (iVar4 <= *(int *)(param_10 + 8)) {
    return 1;
  }
  puVar1 = (undefined4 *)(*param_4 + param_5 * 0x18);
  local_8 = puVar1;
  (**(code **)(*param_9 + 4))(puVar1[2],local_128,0x100);
  if (puVar1[4] != param_6) {
    iVar4 = FUN_01015b90(local_128,&DAT_0164cd24);
    if (iVar4 != 0) {
      return 0;
    }
    FUN_010100a0(&PTR_vftable_018e9b94,param_5,0);
    return 1;
  }
  FUN_010100a0(&PTR_vftable_018e9b94,param_5,1);
  iVar4 = FUN_010550a0(puVar1[2]);
  while (iVar4 != -1) {
    iVar5 = *(int *)(*param_7 + iVar4 * 8);
    (**(code **)(*param_9 + 4))(*(undefined4 *)(*param_4 + 8 + iVar5 * 0x18),local_228,0x100);
    iVar5 = FUN_01054b40(param_1,param_2,param_3,param_4,iVar5,param_6,param_7,param_8,param_9,
                         param_10);
    if (iVar5 == 0) {
      iVar4 = *(int *)(*param_7 + 4 + iVar4 * 8);
      puVar1 = local_8;
    }
    else {
      iVar4 = FUN_010553f0(local_8[2],iVar4);
      puVar1 = local_8;
    }
  }
  uVar6 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
  FUN_01015b50(local_28,0xb,"%#08x",uVar6);
  local_1c[1] = local_28;
  local_1c[0] = "signature";
  iVar5 = 2;
  iVar4 = FUN_01010160(*puVar1,0);
  if (iVar4 != 0) {
    local_1c[2] = "export";
    iVar5 = 4;
    local_10 = iVar4;
  }
  pcVar2 = *(code **)(*param_1 + 0x14);
  uVar6 = puVar1[1];
  uVar3 = *puVar1;
  local_1c[iVar5] = (char *)0x0;
  (*pcVar2)(param_2,uVar3,uVar6,local_128,local_1c);
  FUN_01018f60(param_3,&DAT_016cc51c);
  return 1;
}

// 01054D10  hkXmlPackfileWriter::vf1C  size=722  [run]
bool __thiscall hkXmlPackfileWriter::vf1C(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_18c [256];
  undefined1 local_8c [32];
  undefined **local_6c [2];
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  undefined **local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  int local_c;
  int local_8;
  
  iVar6 = param_3;
  local_3c = param_1 + 0x14;
  local_38 = param_1 + 0x58;
  local_34 = param_1 + 0x20;
  local_40 = _anon_9F0BD5E4::PackfileNameFromAddress::vftable;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xffffffff;
  hkXmlObjectWriter::hkXmlObjectWriter(&local_40,*(undefined1 *)(param_3 + 9));
  local_8 = FUN_010e59a0(PTR_s___types___01b1dc04);
  if ((*(char *)(iVar6 + 8) == '\0') && (local_c = 0, 0 < *(int *)(param_1 + 0xc))) {
    iVar4 = 0;
    do {
      piVar7 = (int *)(*(int *)(param_1 + 8) + iVar4);
      if (piVar7[4] == local_8) {
        FUN_010100a0(&PTR_vftable_018e9b94,piVar7[2],0);
        if (piVar7[2] != *piVar7) {
          FUN_010100a0(&PTR_vftable_018e9b94,*piVar7,0);
        }
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + 0x18;
      iVar6 = param_3;
    } while (local_c < *(int *)(param_1 + 0xc));
  }
  hkOstream::hkOstream_4(param_2);
  FUN_01018f60(local_18,"<?xml version=\"1.0\" encoding=\"ascii\"?>\n");
  puVar5 = *(undefined1 **)(iVar6 + 0xc);
  if (puVar5 == (undefined1 *)0x0) {
    FUN_010e56c0(local_8c,0x20);
    puVar5 = local_8c;
  }
  _anon_9F0BD5E4::PackfileNameFromAddress::vf04
            (*(undefined4 *)(*(int *)(param_1 + 8) + 8 + *(int *)(param_1 + 0x8c) * 0x18),local_18c,
             0x100);
  FUN_01018f60(local_18,
               "<hkpackfile classversion=\"%d\" contentsversion=\"%s\" toplevelobject=\"%s\">\n",
               DAT_01b1bbd4,puVar5,local_18c);
  FUN_010f89c0(1);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      uVar2 = FUN_010093a0(*(undefined4 *)(*(int *)(param_1 + 0x80) + iVar6 * 8));
      FUN_01018f60(local_18,"\t<!-- Skipped %s at address %p -->\n",uVar2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x84));
  }
  iVar6 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      if ((*(char *)(param_3 + 8) != '\0') || (iVar6 != local_8)) {
        FUN_01018f60(local_18,"\n\t<hksection name=\"%s\">\n",
                     *(undefined4 *)(*(int *)(param_1 + 100) + iVar6 * 4));
        FUN_010f89c0(1);
        iVar4 = *(int *)(param_1 + 0xc);
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          FUN_01054b40(local_6c,param_2,local_18,param_1 + 8,iVar4,iVar6,param_1 + 0xb8,
                       param_1 + 0x2c,&local_40,&local_24);
        }
        FUN_010f89c0(0xffffffff);
        FUN_01018f60(local_18,"\n\t</hksection>");
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x68));
  }
  FUN_010f89c0(0xffffffff);
  FUN_01018f60(local_18,"\n\n</hkpackfile>\n");
  (**(code **)(*param_2 + 0x14))();
  pcVar3 = (char *)(**(code **)(*param_2 + 0xc))((int)&param_3 + 3);
  cVar1 = *pcVar3;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  hkBaseObject::hkBaseObject_38();
  local_60 = 0;
  if (-1 < (int)local_5c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_64,local_5c & 0x3fffffff);
  }
  local_64 = 0;
  local_5c = 0x80000000;
  local_6c[0] = hkBaseObject::vftable;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return cVar1 == '\0';
}

// 01055010  FUN_01055010  size=9  [run]
void FUN_01055010(void)

{
  FUN_01010160();
  return;
}

// 01055020  FUN_01055020  size=9  [run]
void FUN_01055020(void)

{
  FUN_01010160();
  return;
}

// 01055030  FUN_01055030  size=9  [run]
void FUN_01055030(void)

{
  FUN_01010160();
  return;
}

// 01055040  FUN_01055040  size=18  [run]
int __thiscall FUN_01055040(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x18;
}

// 01055070  FUN_01055070  size=15  [run]
int __thiscall FUN_01055070(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01055090  FUN_01055090  size=15  [run]
int __thiscall FUN_01055090(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010550A0  FUN_010550a0  size=21  [run]
void FUN_010550a0(undefined4 param_1)

{
  FUN_01010160(param_1,0xffffffff);
  return;
}

// 010550C0  FUN_010550c0  size=9  [run]
void FUN_010550c0(void)

{
  FUN_01010120();
  return;
}

// 010550D0  FUN_010550d0  size=15  [run]
int __thiscall FUN_010550d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010550E0  FUN_010550e0  size=38  [run]
void FUN_010550e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01055110  FUN_01055110  size=39  [run]
void FUN_01055110(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01055140  hkXmlObjectWriter::NameFromAddress::vf00  size=50  [run]
undefined4 * __thiscall hkXmlObjectWriter::NameFromAddress::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01055180  hkXmlPackfileWriter::vf00  size=52  [run]
int __thiscall hkXmlPackfileWriter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_239();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010551C0  hkXmlObjectWriter::NameFromAddress::NameFromAddress  size=34  [run]
void __fastcall hkXmlObjectWriter::NameFromAddress::NameFromAddress(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 01055220  FUN_01055220  size=15  [run]
int __thiscall FUN_01055220(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01055230  FUN_01055230  size=16  [run]
undefined4 __thiscall FUN_01055230(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 01055240  FUN_01055240  size=25  [run]
void FUN_01055240(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01055260  FUN_01055260  size=16  [run]
undefined4 __thiscall FUN_01055260(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 01055270  FUN_01055270  size=19  [run]
void __thiscall FUN_01055270(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 01055290  FUN_01055290  size=26  [run]
void FUN_01055290(undefined4 param_1)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,0);
  return;
}

// 010552B0  _anon_9F0BD5E4::PackfileNameFromAddress::vf04  size=241  [run]
undefined4 __thiscall
_anon_9F0BD5E4::PackfileNameFromAddress::vf04(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    iVar2 = FUN_01010160(param_2,0);
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar2 = FUN_01010160(iVar1,0);
      param_2 = iVar1;
    }
    iVar2 = FUN_01010160(param_2,0);
    if (iVar2 != 0) {
      FUN_01015cb0(param_3,&DAT_017d3a48,param_4);
      FUN_01015cb0(param_3 + 1,iVar2,param_4 + -1);
      uVar3 = FUN_01015cd0(param_3);
      return uVar3;
    }
    iVar2 = FUN_01010160(param_2,0xffffffff);
    if (iVar2 == -1) {
      iVar2 = FUN_01010160(param_2,0);
      if (iVar2 == -1) goto LAB_01055380;
      iVar2 = (*(uint *)(param_1 + 0x14) & 0x7fffffff) + 1;
      FUN_010100a0(&PTR_vftable_018e9b94,param_2,iVar2);
    }
    if (iVar2 != 0) {
      uVar3 = FUN_01015b50(param_3,param_4,"#%04i",iVar2);
      return uVar3;
    }
  }
LAB_01055380:
  FUN_01015cb0(param_3,&DAT_0164cd24,param_4);
  return 4;
}

// 010553D0  FUN_010553d0  size=31  [run]
void __thiscall FUN_010553d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010553F0  FUN_010553f0  size=133  [run]
int __thiscall FUN_010553f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = *(int *)(iVar3 + 4 + param_3 * 8);
  if (iVar4 == -1) {
    iVar3 = FUN_01010120(param_2);
    piVar1 = (int *)(param_1[3] + 4 + iVar3 * 8);
    iVar4 = *piVar1;
    if (iVar4 == param_3) {
      *piVar1 = -1;
      iVar4 = param_3;
    }
    else {
      piVar2 = (int *)(*param_1 + 4 + iVar4 * 8);
      iVar3 = *piVar2;
      if (iVar3 == param_3) {
        *piVar2 = -1;
        iVar4 = param_3;
      }
      else {
        *piVar1 = iVar3;
        *(undefined4 *)(*param_1 + param_3 * 8) = *(undefined4 *)(*param_1 + iVar4 * 8);
      }
    }
    param_3 = -1;
  }
  else {
    *(undefined4 *)(iVar3 + param_3 * 8) = *(undefined4 *)(iVar3 + iVar4 * 8);
    *(undefined4 *)(iVar3 + 4 + param_3 * 8) = *(undefined4 *)(iVar3 + 4 + iVar4 * 8);
  }
  *(int *)(*param_1 + 4 + iVar4 * 8) = param_1[6];
  param_1[6] = iVar4;
  return param_3;
}

// 01055480  _anon_9F0BD5E4::PackfileNameFromAddress::PackfileNameFromAddress  size=48  [run]
void __thiscall
_anon_9F0BD5E4::PackfileNameFromAddress::PackfileNameFromAddress
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = param_2;
  param_1[3] = param_4;
  *param_1 = vftable;
  param_1[2] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  return;
}

// 010554B0  _anon_9F0BD5E4::PackfileNameFromAddress::vf00  size=73  [run]
undefined4 * __thiscall
_anon_9F0BD5E4::PackfileNameFromAddress::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkXmlObjectWriter::NameFromAddress::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01055500  FUN_01055500  size=57  [run]
void __fastcall FUN_01055500(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01055540  hkBaseObject::hkBaseObject_136  size=65  [run]
void __fastcall hkBaseObject::hkBaseObject_136(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010555B0  hkBinaryPackfileReader::BinaryPackfileData::vf0C  size=4  [run]
undefined4 __fastcall hkBinaryPackfileReader::BinaryPackfileData::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 01055660  hkObjectInspector::ObjectListener::vf00  size=11  [run]
void __fastcall hkObjectInspector::ObjectListener::vf00(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01055680  FUN_01055680  size=32  [run]
void FUN_01055680(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x2c);
    do {
      *puVar1 = puVar1[-1];
      puVar1[-2] = puVar1[-1];
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010556A0  FUN_010556a0  size=61  [run]
void __thiscall FUN_010556a0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *(uint *)(param_2 + iVar3 * 4);
      if ((uVar1 & 1) != 0) {
        uVar2 = FUN_01016080(uVar1);
        *(undefined4 *)(param_2 + iVar3 * 4) = uVar2;
        (**(code **)(**(int **)(param_1 + 4) + 0xc))(uVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return;
}

// 010556E0  FUN_010556e0  size=44  [run]
int FUN_010556e0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX == 0) {
    return 0;
  }
  iVar2 = (int)((in_EAX >> 0x1f & 3U) + in_EAX) >> 2;
  iVar2 = iVar2 - iVar2 % unaff_ESI;
  iVar1 = *(int *)(unaff_EDI + iVar2 * 4);
  while (iVar1 < 0) {
    iVar2 = iVar2 - unaff_ESI;
    iVar1 = *(int *)(unaff_EDI + iVar2 * 4);
  }
  return iVar2 + unaff_ESI;
}

// 01055710  FUN_01055710  size=48  [run]
char * FUN_01055710(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x28) == -1) {
    if (*(int *)(param_1 + 0xc) == 1) {
      return "Havok-3.0.0";
    }
    pcVar1 = (char *)((*(int *)(param_1 + 0xc) != 2) - 1 & 0x17d3b7c);
  }
  return pcVar1;
}

// 010557A0  FUN_010557a0  size=79  [run]
uint FUN_010557a0(undefined4 param_1)

{
  undefined *puVar1;
  undefined **in_EAX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (PTR_s_Havok_5_0_0_b1_01b1bd48 != (undefined *)0x0) {
    in_EAX = &PTR_s_Havok_5_0_0_b1_01b1bd48;
    do {
      puVar1 = *in_EAX;
      uVar2 = FUN_01015cd0(puVar1);
      iVar3 = FUN_01015bd0(param_1,puVar1,uVar2);
      if (iVar3 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      in_EAX = &PTR_s_Havok_5_0_0_b1_01b1bd48 + iVar4;
    } while ((&PTR_s_Havok_5_0_0_b1_01b1bd48)[iVar4] != (undefined *)0x0);
  }
  return (uint)in_EAX & 0xffffff00;
}

// 010557F0  FUN_010557f0  size=51  [run]
void FUN_010557f0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_010093a0("hctAttributeDescription");
  iVar2 = FUN_01015b90(uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_01009660(&DAT_01704c3c);
    if (*(int *)(iVar2 + 4) == 0) {
      *(undefined **)(iVar2 + 4) = &DAT_01f904dc;
    }
  }
  return;
}

// 01055830  FUN_01055830  size=122  [run]
void FUN_01055830(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar2 = *param_1;
    uVar1 = FUN_010093a0();
    iVar2 = (**(code **)(iVar2 + 0x10))(uVar1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x1c))(param_2,0);
      uVar1 = FUN_010093b0();
      FUN_01055830(param_1,uVar1);
      iVar2 = FUN_010095e0();
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          FUN_010095f0(iVar2);
          uVar1 = FUN_01016300();
          FUN_01055830(param_1,uVar1);
          iVar2 = iVar2 + 1;
          iVar3 = FUN_010095e0();
        } while (iVar2 < iVar3);
      }
    }
  }
  return;
}

// 010558D0  FUN_010558d0  size=19  [run]
int __thiscall FUN_010558d0(int param_1,int param_2)

{
  return param_2 * 0x30 + *(int *)(param_1 + 0x20);
}

// 010558F0  FUN_010558f0  size=52  [run]
bool __thiscall FUN_010558f0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x34))();
  iVar2 = *(int *)param_1[6];
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2);
  iVar2 = (**(code **)(iVar2 + 0x18))(uVar1);
  return iVar2 == 0;
}

// 01055930  hkBinaryPackfileReader::vf3C  size=73  [run]
int __thiscall hkBinaryPackfileReader::vf3C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_01015b90(*(int *)(param_1 + 0x20) + iVar2,param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14));
  }
  return -1;
}

// 01055980  FUN_01055980  size=61  [run]
void __fastcall FUN_01055980(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1[7] + 0x18);
  iVar2 = *(int *)(param_1[7] + 0x1c);
  if ((-1 < iVar1) && (-1 < iVar2)) {
    (**(code **)(*param_1 + 0x40))(iVar1,iVar2);
    return;
  }
  iVar1 = *param_1;
  uVar3 = (**(code **)(iVar1 + 0x3c))("__data__",0);
  (**(code **)(iVar1 + 0x40))(uVar3);
  return;
}

// 010559C0  FUN_010559c0  size=32  [run]
undefined4 __fastcall FUN_010559c0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1[7] + 0x20);
  iVar2 = *(int *)(param_1[7] + 0x24);
  if ((-1 < iVar1) && (-1 < iVar2)) {
    uVar3 = (**(code **)(*param_1 + 0x40))(iVar1,iVar2);
    return uVar3;
  }
  return 0;
}

// 010559E0  hkBinaryPackfileReader::vf18  size=19  [run]
void __fastcall hkBinaryPackfileReader::vf18(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0105f4f0();
    return;
  }
  FUN_010559c0();
  return;
}

