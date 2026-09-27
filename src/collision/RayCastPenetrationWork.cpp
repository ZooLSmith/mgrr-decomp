// src/collision/RayCastPenetrationWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905CA0..0090B030, 9 functions

#include "mgrr.h"
#include "RayCastPenetrationWork.h"

// 00905CA0  RayCastPenetrationWork::vf1C  size=15  [class]
void __fastcall RayCastPenetrationWork::vf1C(int param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
                    /* WARNING: Could not recover jumptable at 0x00905cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x28) + 8))();
  return;
}

// 00905CB0  RayCastPenetrationWork::vf14  size=44  [class]
void __fastcall RayCastPenetrationWork::vf14(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[5] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 != 0) {
      FUN_00905560(param_1[0xe]);
    }
                    /* WARNING: Could not recover jumptable at 0x00905cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  return;
}

// 00906780  RayCastPenetrationWork::vf00  size=6  [class]
undefined * RayCastPenetrationWork::vf00(void)

{
  return &DAT_01b35df4;
}

// 009067B0  RayCastPenetrationWork::vf0C  size=11  [class]
bool __fastcall RayCastPenetrationWork::vf0C(int param_1)

{
  return *(char *)(param_1 + 0x2c) != '\0';
}

// 009067C0  RayCastPenetrationWork::vf04  size=30  [class]
undefined4 __thiscall RayCastPenetrationWork::vf04(undefined4 param_1,byte param_2)

{
  hkpCdBodyPairCollector::hkpCdBodyPairCollector_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00907070  RayCastPenetrationWork::vf08  size=307  [class]
void __fastcall RayCastPenetrationWork::vf08(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
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
  
  (**(code **)(*param_1 + 0x14))();
  iVar4 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  puVar3 = *(undefined4 **)(DAT_01885d20 + 0x70);
  uStack_60 = *puVar3;
  uStack_5c = puVar3[1];
  uStack_58 = puVar3[2];
  uStack_54 = puVar3[3];
  uStack_50 = puVar3[4];
  uStack_4c = puVar3[5];
  uStack_48 = puVar3[6];
  uStack_40 = puVar3[8];
  uStack_3c = puVar3[9];
  uStack_38 = puVar3[10];
  uStack_34 = puVar3[0xb];
  uStack_30 = puVar3[0xc];
  uStack_2c = puVar3[0xd];
  uStack_28 = puVar3[0xe];
  uStack_24 = puVar3[0xf];
  uStack_20 = puVar3[0x10];
  uStack_1c = puVar3[0x11];
  uStack_18 = puVar3[0x12];
  uStack_14 = puVar3[0x13];
  LthkpWorld::getPenetrations(param_1[8] + 0x10,&uStack_60,param_1 + 10);
  if ((DAT_01885d68 != 1) &&
     (iVar4 = *(int *)((int)ThreadLocalStoragePointer + iVar4 * 4), *(int *)(iVar4 + 4) == 0)) {
    piVar1 = (int *)(iVar4 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  if (param_1[9] != 0) {
    FUN_010060a0();
  }
  param_1[9] = param_1[8];
  pcVar5 = *(code **)(*param_1 + 0x10);
  param_1[8] = 0;
  (*pcVar5)();
  return;
}

// 0090AFB0  RayCastPenetrationWork::vf10  size=60  [class]
void __fastcall RayCastPenetrationWork::vf10(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[5] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 != 0) {
      iVar1 = param_1[0xe];
      iVar2 = FUN_0090a5d0(iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0090afea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c))();
        return;
      }
      FUN_00905500(iVar1);
    }
  }
  return;
}

// 0090AFF0  RayCastPenetrationWork::vf18  size=54  [class]
void __fastcall RayCastPenetrationWork::vf18(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = param_1[0xe];
    iVar2 = FUN_0090a5d0(iVar1);
    if (iVar2 == 0) {
      FUN_00905560(iVar1);
                    /* WARNING: Could not recover jumptable at 0x0090b021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
  }
  return;
}

// 0090B030  RayCastPenetrationWork::vf20  size=59  [class]
void __thiscall RayCastPenetrationWork::vf20(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = param_1[0xe];
    iVar2 = FUN_0090a690(iVar1,param_2);
    if (iVar2 != 0) {
      FUN_00905560(iVar1);
      (**(code **)(*param_1 + 0x1c))();
    }
  }
  return;
}

