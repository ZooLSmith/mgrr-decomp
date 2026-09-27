// lib/havok/Source/Physics/Utilities/Constraint/Bilateral/hkpConstraintUtils.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 012834C0..012841B0, 6 functions

#include "mgrr.h"

// 012834C0  FUN_012834c0  size=242  [__FILE__]
undefined4 FUN_012834c0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_210 [524];
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar5 = (**(code **)(*piVar1 + 0x2c))();
  switch(uVar5) {
  case 0:
    iVar2 = piVar1[9];
    iVar3 = piVar1[10];
    iVar4 = piVar1[0xb];
    *param_2 = piVar1[8];
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
    iVar2 = piVar1[0xd];
    iVar3 = piVar1[0xe];
    iVar4 = piVar1[0xf];
    *param_3 = piVar1[0xc];
    param_3[1] = iVar2;
    param_3[2] = iVar3;
    param_3[3] = iVar4;
    return 0;
  case 1:
    iVar2 = piVar1[0x15];
    iVar3 = piVar1[0x16];
    iVar4 = piVar1[0x17];
    *param_2 = piVar1[0x14];
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
    iVar2 = piVar1[0x25];
    iVar3 = piVar1[0x26];
    iVar4 = piVar1[0x27];
    *param_3 = piVar1[0x24];
    param_3[1] = iVar2;
    param_3[2] = iVar3;
    param_3[3] = iVar4;
    return 0;
  case 2:
    iVar2 = piVar1[0x15];
    iVar3 = piVar1[0x16];
    iVar4 = piVar1[0x17];
    *param_2 = piVar1[0x14];
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
    iVar2 = piVar1[0x25];
    iVar3 = piVar1[0x26];
    iVar4 = piVar1[0x27];
    *param_3 = piVar1[0x24];
    param_3[1] = iVar2;
    param_3[2] = iVar3;
    param_3[3] = iVar4;
    return 0;
  default:
    hkErrStream::hkErrStream(local_210,0x200);
    FUN_01018d00("Unsupported type of constraint in prepareSystemForRagdoll()");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbabf3b,local_210,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Bilateral\\hkpConstraintUtils.cpp"
               ,0xe5);
    hkBaseObject::hkBaseObject_38();
    return 1;
  case 7:
    iVar2 = piVar1[0x15];
    iVar3 = piVar1[0x16];
    iVar4 = piVar1[0x17];
    *param_2 = piVar1[0x14];
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
    iVar2 = piVar1[0x25];
    iVar3 = piVar1[0x26];
    iVar4 = piVar1[0x27];
    *param_3 = piVar1[0x24];
    param_3[1] = iVar2;
    param_3[2] = iVar3;
    param_3[3] = iVar4;
    return 0;
  }
}

// 012835E0  FUN_012835e0  size=230  [__FILE__]
undefined4 FUN_012835e0(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_210 [524];
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (iVar1 == 2) {
    *param_2 = param_1[0x30];
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
  if (iVar1 != 7) {
    *param_4 = 0;
    *param_3 = 0;
    *param_2 = 0;
    hkErrStream::hkErrStream(local_210,0x200);
    FUN_01018d00("This type of constraint does not have motors");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbae233,local_210,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Bilateral\\hkpConstraintUtils.cpp"
               ,0x107);
    hkBaseObject::hkBaseObject_38();
    return 1;
  }
  iVar1 = FUN_011d4a70();
  *param_2 = iVar1;
  uVar2 = FUN_011d4ae0();
  *param_3 = uVar2;
  uVar2 = FUN_011d4b10();
  *param_4 = uVar2;
  return 0;
}

// 01284060  FUN_01284060  size=24  [between]
void FUN_01284060(void)

{
  undefined4 in_EAX;
  int unaff_ESI;
  
  FUN_011d7220(in_EAX);
  if (*(int *)(unaff_ESI + 0xb0) != 0) {
    FUN_01006000();
    return;
  }
  return;
}

// 01284080  FUN_01284080  size=242  [between]
void FUN_01284080(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_c;
  undefined1 local_5;
  
  uVar6 = 0;
  uVar7 = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar1 = FUN_0118fc90();
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = FUN_0118fca0(iVar5);
          if (((param_3 == (int *)0x0) ||
              (pcVar3 = (char *)(**(code **)(*param_3 + 4))(&local_5,uVar2), *pcVar3 != '\0')) &&
             (iVar4 = FUN_01010120(uVar2), -1 < iVar4)) {
            FUN_010100a0(&PTR_vftable_018e9b8c,uVar2,1);
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
            }
            *(undefined4 *)(*param_2 + param_2[1] * 4) = uVar2;
            param_2[1] = param_2[1] + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 4));
  }
  FUN_01010310(&PTR_vftable_018e9b8c);
  FUN_0100fd10(uVar6,uVar7);
  return;
}

// 01284180  FUN_01284180  size=41  [between]
void __fastcall FUN_01284180(int param_1)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  
  FUN_011d7400(in_EAX);
  piVar1 = (int *)(param_1 + 0xe0);
  iVar2 = 3;
  do {
    if (*piVar1 != 0) {
      FUN_01006000();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 012841B0  FUN_012841b0  size=601  [__FILE__]
undefined4 FUN_012841b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_218 [524];
  int *local_c;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  local_c = *(int **)(param_1 + 0xc);
  iVar1 = (**(code **)(*local_c + 0x2c))();
  if (iVar1 == 2) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x100);
    *(undefined2 *)(iVar1 + 4) = 0x100;
    uVar3 = hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData();
    FUN_01284060();
    FUN_011a75b0(param_2);
    FUN_011a7670(0,param_3);
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x38);
    *(undefined2 *)(iVar1 + 4) = 0x38;
    uVar4 = hkpConstraintInstance::hkpConstraintInstance
                      (local_8,uVar4,uVar3,*(undefined1 *)(param_1 + 0x1c));
    FUN_010060a0();
    FUN_01006780(*(uint *)(param_1 + 0x28) & 0xfffffffe);
    return uVar4;
  }
  if (iVar1 != 7) {
    hkErrStream::hkErrStream(local_218,0x200);
    pcVar6 = "\" to a powered constraint.";
    uVar5 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
    FUN_01018d00("Cannot convert constraint \"");
    FUN_01018d00(uVar5);
    FUN_01018d00(pcVar6);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabba1b34,local_218,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Bilateral\\hkpConstraintUtils.cpp"
               ,0x72);
    hkBaseObject::hkBaseObject_38();
    hkErrStream::hkErrStream(local_218,0x200);
    FUN_01018d00("Only limited hinges and ragdoll constraints can be powered.");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabba1b34,local_218,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Bilateral\\hkpConstraintUtils.cpp"
               ,0x73);
    hkBaseObject::hkBaseObject_38();
    return 0;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x160);
  *(undefined2 *)(iVar1 + 4) = 0x160;
  uVar3 = hkpRagdollConstraintData::hkpRagdollConstraintData();
  FUN_01284180();
  FUN_011d4ac0(param_2);
  FUN_011d4b20(param_2);
  FUN_011d4af0(param_2);
  FUN_011d4db0(0,param_3);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x38);
  *(undefined2 *)(iVar1 + 4) = 0x38;
  uVar4 = hkpConstraintInstance::hkpConstraintInstance
                    (local_8,uVar4,uVar3,*(undefined1 *)(param_1 + 0x1c));
  FUN_010060a0();
  FUN_01006780(*(uint *)(param_1 + 0x28) & 0xfffffffe);
  return uVar4;
}

