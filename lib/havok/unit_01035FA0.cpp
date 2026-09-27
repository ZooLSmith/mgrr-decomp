// lib/havok/unit_01035FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01035FA0..010366E0, 21 functions

#include "types.h"

// 01035FA0  FUN_01035fa0  size=88  [run]
void __thiscall
FUN_01035fa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  param_1[4] = *param_3;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  uVar3 = param_1[6];
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *param_1 = *param_1;
  param_1[1] = param_1[4];
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[4] = uVar1;
  param_1[5] = param_1[5];
  param_1[6] = param_1[9];
  param_1[7] = param_1[0xb];
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = param_1[10];
  param_1[0xb] = param_1[0xb];
  return;
}

// 01036000  FUN_01036000  size=22  [run]
undefined4 __thiscall FUN_01036000(undefined4 param_1,undefined4 param_2)

{
  FUN_010087a0(param_2);
  return param_1;
}

// 01036020  FUN_01036020  size=72  [run]
void FUN_01036020(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  FUN_0143e7c0(param_1,&DAT_017157d8);
  FUN_0143e7c0(param_2,&DAT_017157d8);
  puVar1 = (undefined1 *)FUN_0143e920(0);
  puVar2 = (undefined1 *)FUN_0143e920(0);
  *puVar2 = *puVar1;
  return;
}

// 01036090  FUN_01036090  size=71  [run]
void FUN_01036090(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_0143e7c0(param_1,"flags");
  FUN_0143e7c0(param_1,"flags");
  puVar1 = (undefined2 *)FUN_0143e910(0);
  puVar2 = (undefined2 *)FUN_0143e910(0);
  *puVar2 = *puVar1;
  return;
}

// 010360E0  FUN_010360e0  size=182  [run]
void FUN_010360e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"numDeclaredMembers");
  FUN_0143e7c0(param_2,"numDeclaredMembers");
  piVar3 = (int *)FUN_0143e8b0(0);
  iVar1 = *piVar3;
  FUN_0143e7c0(param_1,"declaredMembers");
  FUN_0143e7c0(param_2,"declaredMembers");
  piVar3 = (int *)FUN_0143e850(0);
  iVar2 = *piVar3;
  FUN_0143e850(0);
  FUN_0143e9e0();
  local_18 = FUN_01016300();
  FUN_0143e9e0();
  FUN_01016300();
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      local_1c = *(undefined4 *)(iVar2 + iVar4 * 4);
      FUN_01036090(&local_1c,local_2c,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}

// 010361B0  FUN_010361b0  size=72  [run]
void FUN_010361b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"userData");
  FUN_0143e7c0(param_2,"userData");
  puVar1 = (undefined4 *)FUN_0143e8c0(0);
  puVar2 = (undefined4 *)FUN_0143e8f0(0);
  *puVar2 = *puVar1;
  return;
}

// 01036200  FUN_01036200  size=9  [run]
void FUN_01036200(void)

{
  FUN_010361b0();
  return;
}

// 01036210  FUN_01036210  size=132  [run]
void FUN_01036210(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  FUN_0143e7c0(param_1,"savedMotion");
  FUN_0143e7c0(param_2,"savedMotion");
  puVar1 = (undefined4 *)FUN_0143e850(0);
  puVar2 = (undefined4 *)FUN_0143e850(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"savedQualityTypeIndex");
  FUN_0143e7c0(param_2,"savedQualityTypeIndex");
  puVar3 = (undefined2 *)FUN_0143e8b0(0);
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = *puVar3;
  return;
}

// 010362A0  FUN_010362a0  size=227  [run]
void FUN_010362a0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,"deactivationClass");
  FUN_0143e7c0(param_2,"deactivationClass");
  puVar1 = (undefined1 *)FUN_0143e900(0);
  puVar2 = (undefined1 *)FUN_0143e920(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"maxLinearVelocity");
  FUN_0143e7c0(param_2,"maxLinearVelocity");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  local_c = *puVar3;
  FUN_0100b3c0(&local_c);
  puVar1 = (undefined1 *)FUN_0143e920(0);
  *puVar1 = local_5;
  FUN_0143e7c0(param_1,"maxAngularVelocity");
  FUN_0143e7c0(param_2,"maxAngularVelocity");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  local_c = *puVar3;
  FUN_0100b3c0(&local_c);
  puVar1 = (undefined1 *)FUN_0143e920(0);
  *puVar1 = local_5;
  return;
}

// 01036390  FUN_01036390  size=121  [run]
void FUN_01036390(undefined4 param_1,undefined4 param_2,code *param_3)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_ESI;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(in_EAX,unaff_ESI);
  FUN_0143e7c0(param_1,unaff_ESI);
  iVar1 = FUN_0143ea60(local_2c);
  local_20 = *(undefined4 *)(iVar1 + 4);
  puVar2 = (undefined4 *)FUN_0143ea60(local_2c);
  local_24 = *puVar2;
  iVar1 = FUN_0143ea60(local_2c);
  local_18 = *(undefined4 *)(iVar1 + 4);
  puVar2 = (undefined4 *)FUN_0143ea60(local_2c);
  local_1c = *puVar2;
  (*param_3)(&local_24,&local_1c,param_2);
  return;
}

// 01036410  FUN_01036410  size=36  [run]
void FUN_01036410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01036390(param_2,param_3,FUN_010362a0);
  return;
}

// 01036440  FUN_01036440  size=36  [run]
void FUN_01036440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01036390(param_2,param_3,FUN_01036410);
  return;
}

// 01036470  FUN_01036470  size=72  [run]
void FUN_01036470(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"userData");
  FUN_0143e7c0(param_2,"userData");
  puVar1 = (undefined4 *)FUN_0143e850(0);
  puVar2 = (undefined4 *)FUN_0143e8f0(0);
  *puVar2 = *puVar1;
  return;
}

// 010364C0  FUN_010364c0  size=50  [run]
void FUN_010364c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01036470(param_1,param_2,param_3);
  FUN_01036390(param_2,param_3,FUN_010362a0);
  return;
}

// 01036500  FUN_01036500  size=9  [run]
void FUN_01036500(void)

{
  FUN_01036470();
  return;
}

// 01036510  FUN_01036510  size=72  [run]
void FUN_01036510(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  FUN_0143e7c0(param_1,"endMode");
  FUN_0143e7c0(param_2,"endMode");
  puVar1 = (undefined1 *)FUN_0143e920(0);
  puVar2 = (undefined1 *)FUN_0143e920(0);
  *puVar2 = *puVar1;
  return;
}

// 01036560  FUN_01036560  size=95  [run]
void FUN_01036560(undefined4 param_1,char param_2)

{
  undefined4 in_EAX;
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  
  FUN_0143e7c0(in_EAX,"flags");
  FUN_0143e7c0(param_1,"flags");
  puVar1 = (undefined2 *)FUN_0143e900(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  if (param_2 != '\0') {
    puVar3 = (ushort *)FUN_0143e900(0);
    *puVar3 = *puVar3 | 0x800;
  }
  return;
}

// 010365C0  FUN_010365c0  size=219  [run]
void __thiscall FUN_010365c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_28;
  undefined4 local_24;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  FUN_0143e7c0(in_EAX,param_1);
  FUN_0143e7c0(param_2,param_1);
  iVar1 = FUN_0143e9a0(0);
  iVar1 = *(int *)(iVar1 + 4);
  local_8 = iVar1;
  FUN_0143ea60(local_10);
  iVar2 = FUN_0143ea60(local_10);
  local_24 = *(undefined4 *)(iVar2 + 4);
  FUN_0143e9e0();
  FUN_010162f0();
  FUN_01009750();
  FUN_0143e9e0();
  FUN_010162f0();
  local_c = FUN_01009750();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      FUN_0143e9a0(0);
      piVar3 = (int *)FUN_0143e9a0(0);
      local_28 = *piVar3 + iVar1;
      FUN_01036560(&local_28,param_3);
      iVar1 = iVar1 + local_c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 010366A0  FUN_010366a0  size=27  [run]
void FUN_010366a0(undefined4 param_1,undefined4 param_2)

{
  FUN_010365c0(param_2,1);
  return;
}

// 010366C0  FUN_010366c0  size=27  [run]
void FUN_010366c0(undefined4 param_1,undefined4 param_2)

{
  FUN_010365c0(param_2,0);
  return;
}

// 010366E0  FUN_010366e0  size=174  [run]
void FUN_010366e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  FUN_0143e7c0(param_1,"controlDataPalette");
  FUN_0143e7c0(param_2,"controlDataPalette");
  piVar1 = (int *)FUN_0143e830();
  piVar2 = (int *)FUN_0143e830();
  FUN_0143e9e0();
  FUN_010162f0();
  iVar3 = FUN_01009750();
  FUN_0143e9e0();
  FUN_010162f0();
  iVar4 = FUN_01009750();
  if (0 < piVar1[1]) {
    local_c = 0;
    local_8 = 0;
    iVar5 = 0;
    do {
      FUN_01015e80(*piVar2 + local_c,*piVar1 + local_8,iVar4);
      local_8 = local_8 + iVar3;
      local_c = local_c + iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar1[1]);
  }
  return;
}

