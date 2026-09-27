// src/collision/sMapInfoRayCastWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00963940..0096B300, 103 functions

#include "types.h"

// 00963940  FUN_00963940  size=170  [callgraph]
undefined4 __fastcall FUN_00963940(int param_1)

{
  int iVar1;
  
  if ((((((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x1c) == 0)) ||
        (iVar1 = FUN_00d4f120(*(int *)(param_1 + 0x18),1), iVar1 == 0)) ||
       ((iVar1 = FUN_00d4f120(*(undefined4 *)(param_1 + 0x1c),1), iVar1 != 0 &&
        (iVar1 = FUN_00d45a70(*(undefined4 *)(param_1 + 0x1c)), iVar1 == 0)))) &&
      ((*(int *)(param_1 + 0x18) != 0 ||
       ((*(int *)(param_1 + 0x1c) != 0 &&
        ((*(int *)(param_1 + 0x1c) == 0 ||
         ((iVar1 = FUN_00d4f120(*(int *)(param_1 + 0x1c),1), iVar1 != 0 &&
          (iVar1 = FUN_00d45a70(*(undefined4 *)(param_1 + 0x1c)), iVar1 == 0)))))))))) &&
     ((*(int *)(param_1 + 0x1c) != 0 ||
      ((*(int *)(param_1 + 0x18) == 0 ||
       (iVar1 = FUN_00d4f120(*(int *)(param_1 + 0x18),1), iVar1 == 0)))))) {
    return 0;
  }
  return 1;
}

// 00963A00  FUN_00963a00  size=15  [callgraph]
undefined4 __fastcall FUN_00963a00(undefined4 param_1)

{
  FUN_00904d60();
  return param_1;
}

// 00963A30  FUN_00963a30  size=57  [callgraph]
void __fastcall FUN_00963a30(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x3c);
  iVar2 = 8;
  do {
    if ((*puVar3 & 0xc0000000) == 0) {
      iVar1 = FUN_00963940();
      if ((iVar1 != 0) && (puVar3[-3] != 0)) {
        FUN_009637a0();
      }
    }
    puVar3 = puVar3 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00963A80  FUN_00963a80  size=278  [callgraph]
void __thiscall FUN_00963a80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar2 = (int)param_2 - (int)param_1;
  param_1[2] = param_2[2];
  iVar3 = 0x10;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  puVar1 = param_1 + 0xe;
  do {
    *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
    puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
    puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  return;
}

// 00963BF0  FUN_00963bf0  size=121  [callgraph]
void __fastcall FUN_00963bf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x30);
  iVar1 = 8;
  do {
    if (puVar2[-2] != 0) {
      FUN_00dd4940(puVar2[-2]);
      puVar2[-2] = 0;
    }
    if (puVar2[4] != 0) {
      FUN_00dd4920(puVar2[4]);
      puVar2[4] = 0;
    }
    if (puVar2[5] != 0) {
      FUN_00dd4920(puVar2[5]);
      puVar2[5] = 0;
    }
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  return;
}

// 00963DA0  FUN_00963da0  size=112  [callgraph]
uint __thiscall FUN_00963da0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_2 < 8) && (param_1 = param_1 + param_2 * 0x20, *(int *)(param_1 + 0x30) != 0)) &&
      (-1 < param_3)) && (param_3 <= *(int *)(param_1 + 0x2c))) {
    uVar2 = param_3 * 0x130 + *(int *)(param_1 + 0x28);
    if (*(int *)(uVar2 + 0xf8) != param_3) {
      FUN_00dd5650(&DAT_016515f0,param_2,param_3);
      return 0;
    }
    iVar1 = FUN_00412ef0(uVar2 + 0x10c,0);
    return ~-(uint)(iVar1 != 0) & uVar2;
  }
  return 0;
}

// 00963F20  FUN_00963f20  size=243  [callgraph]
undefined4 FUN_00963f20(int param_1,int *param_2,undefined4 param_3)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  
  iVar4 = 0;
  if (param_1 != 0) {
    iVar2 = (**(code **)(*param_2 + 0x10))(param_3);
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(*param_2 + 0x14))(param_2,iVar4);
        uVar6 = uVar3;
        iVar2 = (**(code **)(*param_2 + 0x18))(uVar3,"BranchNo");
        sVar5 = (short)uVar6;
        if (iVar2 != -1) {
          (**(code **)(*param_2 + 0x5c))(iVar2,param_1 + 0x38 + iVar4 * 0xc);
        }
        iVar2 = (**(code **)(*param_2 + 0x18))(uVar3,"BranchFlag");
        if (iVar2 != -1) {
          puVar1 = (ushort *)(param_1 + 0x3a + iVar4 * 0xc);
          param_1 = unaff_EBP;
          (**(code **)(*param_2 + 0x6c))(iVar2,puVar1);
          *puVar1 = *puVar1 & 0xfff;
          unaff_EBP = param_1;
        }
        iVar2 = (**(code **)(*param_2 + 0x18))(uVar3,"BranchWidth");
        if (iVar2 != -1) {
          (**(code **)(*param_2 + 0x54))(iVar2,param_1 + (iVar4 * 3 + 0xf) * 4);
        }
        iVar4 = (int)(short)(sVar5 + 1);
        iVar2 = (**(code **)(*param_2 + 0x10))(unaff_EBP);
      } while (iVar4 < iVar2);
    }
    return 1;
  }
  return 0;
}

// 009640F0  FUN_009640f0  size=176  [callgraph]
undefined4 FUN_009640f0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [52];
  undefined1 auStack_6c [28];
  undefined1 local_50 [76];
  
  if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 0x34), iVar1 != 0)) {
    local_e4 = param_2[2];
    local_e8 = param_2[1];
    local_ec = *param_2;
    D3DXMatrixTranslation(local_50);
    D3DXMatrixInverse(auStack_a0,0,iVar1 + 0x10);
    D3DXMatrixMultiply(&local_ec,auStack_6c,auStack_ac);
    *param_1 = uStack_c8;
    param_1[1] = uStack_c4;
    param_1[2] = uStack_c0;
    return 1;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 0;
}

// 00964270  sMapInfoRayCastWork::vf00  size=78  [class]
bool __fastcall sMapInfoRayCastWork::vf00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00907560(param_1 + 0x10,0,0,0,0,0,0,0);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_00907560(param_1 + 4,0,0,0,0,0,0,0);
  return iVar1 != 0;
}

// 009642C0  sMapInfoRayCastWork::vf08  size=39  [class]
void __fastcall sMapInfoRayCastWork::vf08(int param_1)

{
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  return;
}

// 009642F0  sMapInfoRayCastWork::vf10  size=44  [class]
void __thiscall
sMapInfoRayCastWork::vf10(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_2;
  *(undefined2 *)(param_1 + 10) = param_3;
  *(undefined2 *)(param_1 + 0xc) = param_4;
  *(undefined2 *)(param_1 + 0x16) = param_3;
  *(undefined2 *)(param_1 + 0x18) = param_4;
  return;
}

// 00964450  FUN_00964450  size=120  [between]
undefined4 __thiscall FUN_00964450(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00964530  FUN_00964530  size=120  [between]
undefined4 __thiscall FUN_00964530(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00964700  FUN_00964700  size=120  [between]
undefined4 __thiscall FUN_00964700(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 8,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 8,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00964820  FUN_00964820  size=121  [between]
undefined4 __thiscall FUN_00964820(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x14,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 0x14,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00964990  FUN_00964990  size=120  [between]
undefined4 __thiscall FUN_00964990(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00964B40  FUN_00964b40  size=33  [between]
undefined4 __thiscall FUN_00964b40(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00964BE0  FUN_00964be0  size=252  [between]
void __thiscall FUN_00964be0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  puVar2 = param_2 + 0xe;
  puVar3 = param_1 + 0xe;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  return;
}

// 00964E70  FUN_00964e70  size=139  [between]
void __fastcall FUN_00964e70(undefined1 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0xc0400000;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x44) = 0xc0400000;
  *(undefined4 *)(param_1 + 0x48) = 0x40400000;
  *(undefined4 *)(param_1 + 0x50) = 0x40400000;
  *(undefined4 *)(param_1 + 0x54) = 0x40400000;
  *(undefined4 *)(param_1 + 0x5c) = 0x40400000;
  *(undefined4 *)(param_1 + 0x4c) = 0xc0400000;
  *(undefined4 *)(param_1 + 0x58) = 0xc0400000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f000000;
  *(undefined4 *)(param_1 + 100) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x68) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x74) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

// 00965060  FUN_00965060  size=50  [between]
void __fastcall FUN_00965060(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_14;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  return;
}

// 009650D0  FUN_009650d0  size=44  [between]
undefined4 * __thiscall FUN_009650d0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  FUN_009629c0(param_2,param_1 + 0x10);
  return param_2;
}

// 00965120  hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_3  size=284  [between]
bool __thiscall
hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_3
          (int param_1,float *param_2,float *param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_28;
  undefined1 local_24;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    return false;
  }
  local_70 = *param_2;
  local_68 = param_2[2];
  local_64 = param_2[3];
  local_60 = *param_3;
  local_58 = param_3[2];
  local_54 = param_3[3];
  local_6c = param_2[1] + param_5;
  local_5c = param_5 + param_3[1];
  thunk_FUN_00dde510(&local_78,&local_74,&local_60,&local_70);
  local_28 = vftable;
  local_24 = 0;
  local_50 = param_4;
  local_4c = 0x3dcccccd;
  local_48 = SQRT((local_68 - local_58) * (local_68 - local_58) +
                  (local_6c - local_5c) * (local_6c - local_5c) +
                  (local_70 - local_60) * (local_70 - local_60));
  local_40 = -local_78;
  local_3c = local_74;
  local_38 = 0;
  iVar1 = FUN_009f8b40();
  iVar1 = hkpFirstCdBodyPairCollector
                    (&local_28,&local_70,&local_40,&local_50,iVar1 << 0x10 | 0x1e,"MapInfo");
  return iVar1 == 0;
}

// 00965340  FUN_00965340  size=104  [between]
float10 __thiscall FUN_00965340(int param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),param_2);
  pfVar2 = (float *)FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),param_3);
  if ((pfVar1 != (float *)0x0) && (pfVar2 != (float *)0x0)) {
    return SQRT(((float10)*pfVar1 - (float10)*pfVar2) * ((float10)*pfVar1 - (float10)*pfVar2) +
                ((float10)pfVar1[1] - (float10)pfVar2[1]) *
                ((float10)pfVar1[1] - (float10)pfVar2[1]) +
                ((float10)pfVar1[2] - (float10)pfVar2[2]) *
                ((float10)pfVar1[2] - (float10)pfVar2[2]));
  }
  return (float10)10000.0;
}

// 009653D0  FUN_009653d0  size=50  [between]
undefined4 * __thiscall FUN_009653d0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),param_3);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  return param_2;
}

// 00965410  FUN_00965410  size=84  [between]
float10 __thiscall FUN_00965410(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  iVar1 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),param_2);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xfc))) {
    psVar3 = (short *)(iVar1 + 0x38);
    iVar2 = 0;
    do {
      if (*psVar3 == param_3) {
        return (float10)*(float *)(iVar1 + (iVar2 * 3 + 0xf) * 4);
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 6;
    } while (iVar2 < *(int *)(iVar1 + 0xfc));
  }
  return (float10)0;
}

// 00965500  FUN_00965500  size=347  [between]
float10 __thiscall FUN_00965500(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  if ((*(uint *)(param_1 + 0x60) & 0x80000000) != 0) {
    fVar8 = (float10)FUN_00965340(param_2,param_3);
    return fVar8;
  }
  pfVar4 = (float *)FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),param_2);
  pfVar5 = (float *)FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),param_3);
  if ((pfVar4 != (float *)0x0) && (pfVar5 != (float *)0x0)) {
    fVar1 = pfVar4[0x46];
    fVar2 = pfVar4[0x45];
    fVar3 = pfVar4[0x3f];
    iVar7 = 0;
    fVar8 = SQRT(((float10)*pfVar4 - (float10)*pfVar5) * ((float10)*pfVar4 - (float10)*pfVar5) +
                 ((float10)pfVar4[1] - (float10)pfVar5[1]) *
                 ((float10)pfVar4[1] - (float10)pfVar5[1]) +
                 ((float10)pfVar4[2] - (float10)pfVar5[2]) *
                 ((float10)pfVar4[2] - (float10)pfVar5[2]));
    fVar9 = (float10)5.0;
    if (3 < (int)fVar3) {
      iVar6 = ((int)fVar3 - 4U >> 2) + 1;
      iVar7 = iVar6 * 4;
      pfVar5 = pfVar4 + 0x10;
      do {
        if (((*(short *)(pfVar5 + -2) == param_3) && ((int)fVar1 < (int)fVar2)) &&
           ((int)fVar2 <= (int)*pfVar5)) {
          fVar8 = fVar8 * fVar9;
        }
        if (((*(short *)(pfVar5 + 1) == param_3) && ((int)fVar1 < (int)fVar2)) &&
           ((int)fVar2 <= (int)pfVar5[3])) {
          fVar8 = fVar8 * fVar9;
        }
        if (((*(short *)(pfVar5 + 4) == param_3) && ((int)fVar1 < (int)fVar2)) &&
           ((int)fVar2 <= (int)pfVar5[6])) {
          fVar8 = fVar8 * fVar9;
        }
        if (((*(short *)(pfVar5 + 7) == param_3) && ((int)fVar1 < (int)fVar2)) &&
           ((int)fVar2 <= (int)pfVar5[9])) {
          fVar8 = fVar8 * fVar9;
        }
        pfVar5 = pfVar5 + 0xc;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (iVar7 < (int)fVar3) {
      pfVar4 = pfVar4 + iVar7 * 3 + 0x10;
      iVar7 = (int)fVar3 - iVar7;
      do {
        if (((*(short *)(pfVar4 + -2) == param_3) && ((int)fVar1 < (int)fVar2)) &&
           ((int)fVar2 <= (int)*pfVar4)) {
          fVar8 = fVar8 * fVar9;
        }
        pfVar4 = pfVar4 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    return fVar8;
  }
  return (float10)10000.0;
}

// 00965660  FUN_00965660  size=257  [between]
int * __thiscall FUN_00965660(int param_1,undefined4 *param_2)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  iVar8 = *(int *)(param_1 + 0x7c);
  iVar7 = 0;
  iVar5 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),*param_2);
  if (iVar5 != 0) {
    iVar7 = *(int *)(iVar5 + 0xfc);
  }
  if (iVar8 < iVar7) {
    puVar6 = (ushort *)(iVar5 + 0x3a + iVar8 * 0xc);
    do {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      uVar2 = *puVar6;
      if ((uVar2 & 0x8000) == 0) {
        if (((uVar2 & 2) == 0) || ((*(byte *)(param_1 + 0x60) & 0x10) == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (((uVar2 & 4) == 0) || ((*(byte *)(param_1 + 0x60) & 0x20) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar3) && (bVar4)) {
          iVar7 = (int)*(short *)(iVar5 + 0x38 + iVar8 * 0xc);
          iVar8 = *(int *)(param_1 + 0xc) + 1;
          piVar1 = (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18);
          *(int *)(param_1 + 0xc) = iVar8;
          if (0x3ff < iVar8) {
            FUN_00dd5650("Node Buff Over !!!!!!");
            return (int *)0x0;
          }
          piVar1[1] = 0;
          *piVar1 = -1;
          piVar1[2] = 0;
          piVar1[4] = 0;
          piVar1[3] = 0;
          piVar1[5] = 0;
          *piVar1 = iVar7;
          fVar9 = (float10)FUN_00965500(*param_2,iVar7);
          piVar1[1] = (int)(float)(fVar9 + (float10)(float)param_2[1]);
          return piVar1;
        }
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 6;
    } while (iVar8 < iVar7);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return (int *)0x0;
}

// 00965780  FUN_00965780  size=680  [between]
undefined4 __thiscall
FUN_00965780(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,float param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float unaff_ESI;
  uint uVar5;
  float unaff_EDI;
  float *pfStack_120;
  undefined4 *puStack_11c;
  float *pfStack_118;
  float *pfStack_114;
  float *pfStack_110;
  float *pfStack_10c;
  float *pfStack_108;
  float *pfStack_104;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0 [3];
  undefined1 auStack_d4 [4];
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4 [3];
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_d0 = *param_3;
    pfStack_108 = (float *)&local_b0;
    pfStack_10c = (float *)&local_b8;
    local_c8 = param_3[2];
    local_c4[0] = param_3[3];
    local_b0 = *param_4;
    local_a8 = param_4[2];
    local_a4 = param_4[3];
    local_cc = (float)param_3[1] + param_6;
    local_ac = param_6 + (float)param_4[1];
    pfStack_104 = (float *)&local_d0;
    pfStack_110 = &local_b4;
    pfStack_114 = (float *)0x9657f6;
    thunk_FUN_00dde510();
    pfStack_104 = (float *)0x965801;
    iVar3 = FUN_009f8b40();
    local_e0[0] = param_5 * 0.5;
    pfStack_104 = (float *)0x5;
    pfStack_108 = &local_60;
    pfStack_10c = (float *)local_50;
    local_e0[1] = 0.0;
    local_e0[2] = 0.0;
    local_f0 = -local_e0[0];
    local_ec = 0.0;
    local_e8 = 0.0;
    local_60 = -local_b4;
    local_5c = local_b8;
    local_58 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = 0.0;
    local_94 = 0.0;
    local_98 = 0.0;
    local_9c = 0.0;
    local_64 = 0x3f800000;
    local_78 = 0x3f800000;
    local_8c = 1.0;
    local_a0 = 1.0;
    pfStack_110 = (float *)0x9658c3;
    thunk_FUN_00ddc1d0();
    pfStack_10c = &local_a0;
    pfStack_108 = (float *)local_50;
    pfStack_110 = (float *)0x9658db;
    pfStack_104 = pfStack_10c;
    D3DXMatrixMultiply();
    pfStack_110 = (float *)(*(int *)(param_1 + 0x5c) + 0xb0);
    pfStack_118 = &local_ac;
    puStack_11c = (undefined4 *)0x9658f1;
    pfStack_114 = pfStack_118;
    D3DXMatrixMultiply();
    puStack_11c = &local_b8;
    pfStack_120 = &fStack_f8;
    D3DXVec3TransformNormal(pfStack_120);
    uVar5 = iVar3 << 0x10 | 0x1e;
    pfStack_104 = (float *)(local_94 + (float)pfStack_104 + fStack_f4);
    fVar1 = local_90 + unaff_EDI + local_f0;
    fVar2 = local_8c + unaff_ESI + local_ec;
    fStack_f8 = fStack_f8 + local_e8;
    iVar3 = FUN_0090dc50(0,0,0,&pfStack_104,auStack_d4,uVar5,"MapInfo_canMoveWidth_R");
    D3DXVec3TransformNormal(&pfStack_114,&pfStack_114,local_c4);
    pfStack_120 = (float *)(local_a0 + (float)pfStack_120 + fVar1);
    puStack_11c = (undefined4 *)(local_9c + (float)puStack_11c + fVar2);
    pfStack_118 = (float *)(local_98 + (float)pfStack_118 + fStack_f8);
    pfStack_114 = (float *)((float)pfStack_114 + fStack_f4);
    iVar4 = FUN_0090dc50(0,0,0,&pfStack_120,local_e0,uVar5,"MapInfo_canMoveWidth_L");
    if (iVar3 == 0) {
      if (iVar4 == 0) {
        return 3;
      }
      return 2;
    }
    if (iVar4 == 0) {
      return 1;
    }
  }
  return 0;
}

// 00965A30  FUN_00965a30  size=680  [between]
undefined4 __thiscall
FUN_00965a30(int param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float unaff_ESI;
  uint uVar5;
  float unaff_EDI;
  float *pfStack_120;
  undefined4 *puStack_11c;
  float *pfStack_118;
  float *pfStack_114;
  float *pfStack_110;
  float *pfStack_10c;
  float *pfStack_108;
  float *pfStack_104;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0 [3];
  undefined1 auStack_d4 [4];
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4 [3];
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_d0 = *param_2;
    pfStack_108 = (float *)&local_b0;
    pfStack_10c = (float *)&local_b8;
    local_c8 = param_2[2];
    local_c4[0] = param_2[3];
    local_b0 = *param_3;
    local_a8 = param_3[2];
    local_a4 = param_3[3];
    local_cc = (float)param_2[1] + param_5;
    local_ac = param_5 + (float)param_3[1];
    pfStack_104 = (float *)&local_d0;
    pfStack_110 = &local_b4;
    pfStack_114 = (float *)0x965aa6;
    thunk_FUN_00dde510();
    pfStack_104 = (float *)0x965ab1;
    iVar3 = FUN_009f8b40();
    local_e0[0] = param_4 * 0.5;
    pfStack_104 = (float *)0x5;
    pfStack_108 = &local_60;
    pfStack_10c = (float *)local_50;
    local_e0[1] = 0.0;
    local_e0[2] = 0.0;
    local_f0 = -local_e0[0];
    local_ec = 0.0;
    local_e8 = 0.0;
    local_60 = -local_b4;
    local_5c = local_b8;
    local_58 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = 0.0;
    local_94 = 0.0;
    local_98 = 0.0;
    local_9c = 0.0;
    local_64 = 0x3f800000;
    local_78 = 0x3f800000;
    local_8c = 1.0;
    local_a0 = 1.0;
    pfStack_110 = (float *)0x965b73;
    thunk_FUN_00ddc1d0();
    pfStack_10c = &local_a0;
    pfStack_108 = (float *)local_50;
    pfStack_110 = (float *)0x965b8b;
    pfStack_104 = pfStack_10c;
    D3DXMatrixMultiply();
    pfStack_110 = (float *)(*(int *)(param_1 + 0x5c) + 0xb0);
    pfStack_118 = &local_ac;
    puStack_11c = (undefined4 *)0x965ba1;
    pfStack_114 = pfStack_118;
    D3DXMatrixMultiply();
    puStack_11c = &local_b8;
    pfStack_120 = &fStack_f8;
    D3DXVec3TransformNormal(pfStack_120);
    uVar5 = iVar3 << 0x10 | 0x1e;
    pfStack_104 = (float *)(local_94 + (float)pfStack_104 + fStack_f4);
    fVar1 = local_90 + unaff_EDI + local_f0;
    fVar2 = local_8c + unaff_ESI + local_ec;
    fStack_f8 = fStack_f8 + local_e8;
    iVar3 = FUN_0090dc50(0,0,0,&pfStack_104,auStack_d4,uVar5,"MapInfo_canMoveWidth_R");
    D3DXVec3TransformNormal(&pfStack_114,&pfStack_114,local_c4);
    pfStack_120 = (float *)(local_a0 + (float)pfStack_120 + fVar1);
    puStack_11c = (undefined4 *)(local_9c + (float)puStack_11c + fVar2);
    pfStack_118 = (float *)(local_98 + (float)pfStack_118 + fStack_f8);
    pfStack_114 = (float *)((float)pfStack_114 + fStack_f4);
    iVar4 = FUN_0090dc50(0,0,0,&pfStack_120,local_e0,uVar5,"MapInfo_canMoveWidth_L");
    if (iVar3 == 0) {
      if (iVar4 == 0) {
        return 3;
      }
      return 2;
    }
    if (iVar4 == 0) {
      return 1;
    }
  }
  return 0;
}

// 00965CE0  FUN_00965ce0  size=110  [between]
void __fastcall FUN_00965ce0(float *param_1)

{
  float fVar1;
  
  if (((uint)param_1[0x42] & 0x80000000) != 0) {
    if ((param_1[0xc] != 0.0) && ((*(byte *)((int)param_1[0xc] + 0x4c8) & 3) == 0)) {
      fVar1 = param_1[0xd];
      D3DXVec3TransformNormal(param_1,param_1 + 4,(int)fVar1 + 0x10);
      *param_1 = *(float *)((int)fVar1 + 0x40) + *param_1;
      param_1[1] = *(float *)((int)fVar1 + 0x44) + param_1[1];
      param_1[2] = *(float *)((int)fVar1 + 0x48) + param_1[2];
      return;
    }
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
  }
  *param_1 = param_1[8];
  param_1[1] = param_1[9];
  param_1[2] = param_1[10];
  param_1[3] = param_1[0xb];
  return;
}

// 00965D70  FUN_00965d70  size=326  [between]
/* WARNING: Removing unreachable block (ram,0x00965e18) */

void __thiscall FUN_00965d70(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float unaff_EDI;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint uStack_60;
  undefined1 local_50 [76];
  
  if (param_2 != (float *)0x0) {
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0.0;
    local_84 = 0.0;
    local_88 = 0.0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_64 = 0x3f800000;
    local_78 = 0x3f800000;
    local_8c = 0x3f800000;
    local_a0 = 0x3f800000;
    thunk_FUN_00ddc1d0(local_50,param_1 + 0x50,5);
    puVar4 = &local_a0;
    puVar3 = local_50;
    D3DXMatrixMultiply(puVar4);
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    uStack_60 = DAT_01dd0814 >> 8;
    fVar2 = (float)uStack_60;
    fVar1 = *(float *)(param_1 + 0x68);
    D3DXVec3TransformNormal(&stack0xffffff44,&stack0xffffff44,auStack_ac);
    *param_2 = *(float *)(param_1 + 0x40);
    param_2[1] = *(float *)(param_1 + 0x44);
    param_2[2] = *(float *)(param_1 + 0x48);
    param_2[3] = *(float *)(param_1 + 0x4c);
    *param_2 = *param_2 + (float)puVar3 + local_88;
    param_2[1] = (float)puVar4 + local_84 + param_2[1];
    param_2[2] = unaff_EDI + local_80 + param_2[2];
    param_2[3] = param_2[3] +
                 fVar1 * 0.5 * 0.6 * (1.0 - (fVar2 * 5.960465e-08 + fVar2 * 5.960465e-08));
  }
  return;
}

// 00965EC0  FUN_00965ec0  size=110  [between]
void __fastcall FUN_00965ec0(undefined4 *param_1)

{
  float *pfVar1;
  int iVar2;
  
  if ((param_1[0x20] & 0x80000000) != 0) {
    if ((param_1[0x18] != 0) && ((*(byte *)(param_1[0x18] + 0x4c8) & 3) == 0)) {
      iVar2 = param_1[0x19];
      pfVar1 = (float *)(param_1 + 0x10);
      D3DXVec3TransformNormal(pfVar1,param_1 + 8,iVar2 + 0x10);
      *pfVar1 = *(float *)(iVar2 + 0x40) + *pfVar1;
      param_1[0x11] = *(float *)(iVar2 + 0x44) + (float)param_1[0x11];
      param_1[0x12] = *(float *)(iVar2 + 0x48) + (float)param_1[0x12];
      return;
    }
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  param_1[0x10] = *param_1;
  param_1[0x11] = param_1[1];
  param_1[0x12] = param_1[2];
  param_1[0x13] = param_1[3];
  return;
}

// 00965F30  FUN_00965f30  size=57  [between]
void __fastcall FUN_00965f30(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 8) != 0) && ((*(uint *)(param_1 + 0x10) & 0x80000000) != 0)) &&
     (iVar1 = 0, 0 < *(int *)(param_1 + 4))) {
    do {
      FUN_00965ce0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  return;
}

// 009662A0  FUN_009662a0  size=198  [between]
undefined4 FUN_009662a0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  
  iVar3 = FUN_00963da0(param_1,param_2);
  iVar4 = FUN_00963da0(param_1,param_3);
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0xfc)) {
    psVar7 = (short *)(iVar3 + 0x38);
    do {
      if (*psVar7 == param_3) goto LAB_009662e5;
      iVar5 = iVar5 + 1;
      psVar7 = psVar7 + 6;
    } while (iVar5 < *(int *)(iVar3 + 0xfc));
  }
  iVar5 = -1;
LAB_009662e5:
  iVar6 = 0;
  if (0 < *(int *)(iVar4 + 0xfc)) {
    psVar7 = (short *)(iVar4 + 0x38);
    do {
      if (*psVar7 == param_2) goto LAB_00966308;
      iVar6 = iVar6 + 1;
      psVar7 = psVar7 + 6;
    } while (iVar6 < *(int *)(iVar4 + 0xfc));
  }
  iVar6 = -1;
LAB_00966308:
  if ((iVar5 != -1) && (iVar6 != -1)) {
    puVar1 = (ushort *)(iVar3 + 0x3a + iVar5 * 0xc);
    puVar2 = (ushort *)(iVar4 + 0x3a + iVar6 * 0xc);
    if (param_4 == 0) {
      *puVar1 = *puVar1 & 0x7fff;
      *puVar2 = *puVar2 & 0x7fff;
      return 1;
    }
    *puVar1 = *puVar1 | 0x8000;
    *puVar2 = *puVar2 | 0x8000;
    return 1;
  }
  return 0;
}

// 00966370  FUN_00966370  size=185  [between]
void FUN_00966370(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  iVar2 = FUN_00963da0(param_1,param_2);
  iVar3 = FUN_00963da0(param_1,param_3);
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0xfc)) {
    psVar6 = (short *)(iVar2 + 0x38);
    do {
      if (*psVar6 == param_3) goto LAB_009663b9;
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 6;
    } while (iVar4 < *(int *)(iVar2 + 0xfc));
  }
  iVar4 = -1;
LAB_009663b9:
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0xfc)) {
    psVar6 = (short *)(iVar3 + 0x38);
    do {
      if (*psVar6 == param_2) goto LAB_009663e8;
      iVar5 = iVar5 + 1;
      psVar6 = psVar6 + 6;
    } while (iVar5 < *(int *)(iVar3 + 0xfc));
  }
  iVar5 = -1;
LAB_009663e8:
  if ((iVar4 != -1) && (iVar5 != -1)) {
    piVar1 = (int *)(iVar2 + 0x40 + iVar4 * 0xc);
    *piVar1 = *piVar1 + param_4;
    FUN_00963140();
    piVar1 = (int *)(iVar3 + 0x40 + iVar5 * 0xc);
    *piVar1 = *piVar1 + param_4;
    FUN_00963140();
  }
  return;
}

// 00966430  FUN_00966430  size=189  [between]
undefined4 FUN_00966430(undefined4 param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  float local_14;
  
  FUN_00962e70();
  *(undefined4 *)(extraout_ECX + 0x20) = *param_3;
  *(undefined4 *)(extraout_ECX + 0x24) = param_3[1];
  *(undefined4 *)(extraout_ECX + 0x28) = param_3[2];
  *(undefined4 *)(extraout_ECX + 0x2c) = param_3[3];
  if ((*(uint *)(param_2 + 0x108) & 0x80000000) != 0) {
    iVar3 = *(int *)(param_2 + 0x30);
    iVar4 = *(int *)(param_2 + 0x34);
    if ((iVar3 != 0) && (iVar4 != 0)) {
      fVar1 = *(float *)(iVar4 + 0x44);
      fVar2 = *(float *)(iVar4 + 0x48);
      *(float *)(extraout_ECX + 0x10) = *(float *)(extraout_ECX + 0x20) - *(float *)(iVar4 + 0x40);
      *(float *)(extraout_ECX + 0x14) = *(float *)(extraout_ECX + 0x24) - fVar1;
      *(float *)(extraout_ECX + 0x18) = *(float *)(extraout_ECX + 0x28) - fVar2;
      *(float *)(extraout_ECX + 0x1c) = *(float *)(extraout_ECX + 0x2c) - local_14;
      *(int *)(extraout_ECX + 0x34) = iVar4;
      *(int *)(extraout_ECX + 0x30) = iVar3;
      *(undefined4 *)(extraout_ECX + 0x100) = *(undefined4 *)(param_2 + 0x100);
      *(undefined4 *)(extraout_ECX + 0x104) = *(undefined4 *)(param_2 + 0x104);
      *(uint *)(extraout_ECX + 0x108) = *(uint *)(extraout_ECX + 0x108) | 0x80000000;
      FUN_00965ce0();
      return 1;
    }
  }
  FUN_00965ce0();
  return 0;
}

// 009664F0  FUN_009664f0  size=87  [between]
void __fastcall FUN_009664f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  piVar2 = (int *)(param_1 + 0x2c);
  local_4 = 8;
  do {
    iVar1 = FUN_00963940();
    if ((((iVar1 != 0) && (piVar2[1] != 0)) && ((piVar2[3] & 0x80000000U) != 0)) &&
       (iVar1 = 0, 0 < *piVar2)) {
      do {
        FUN_00965ce0();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *piVar2);
    }
    piVar2 = piVar2 + 8;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 009665D0  FUN_009665d0  size=335  [between]
void FUN_009665d0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (float *)0x0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return;
  }
  if (((uint)param_2[0x42] & 0x20000000) != 0) {
    local_18 = param_2[2];
    local_14 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    fVar1 = param_2[3];
    param_1[3] = fVar1;
    local_20 = -*param_1;
    local_1c = -param_1[1];
    local_18 = local_18 - param_1[2];
    local_14 = local_14 - fVar1;
    fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_18 = 0.0;
      local_20 = 0.0;
      local_1c = 1.0;
    }
    *param_1 = *param_1 + local_20 * param_3;
    param_1[1] = param_1[1] + local_1c * param_3;
    param_1[2] = local_18 * param_3 + param_1[2];
    param_1[3] = param_1[3] + param_3 * local_14;
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[1] = param_1[1] + param_3;
  return;
}

// 00966730  FUN_00966730  size=31  [between]
int __fastcall FUN_00966730(int param_1)

{
  FUN_00904d60();
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  return param_1;
}

// 00966750  FUN_00966750  size=27  [between]
void __fastcall FUN_00966750(int *param_1)

{
  if (*param_1 != 0) {
    RayCastManager::getWork(param_1);
  }
  FUN_00905ce0();
  return;
}

// 00966770  FUN_00966770  size=78  [between]
undefined4 __thiscall FUN_00966770(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00963da0((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6));
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return 0;
  }
  FUN_009665d0(param_2,iVar1,param_3);
  return 1;
}

// 009667C0  FUN_009667c0  size=78  [between]
undefined4 __thiscall FUN_009667c0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00963da0((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 8));
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return 0;
  }
  FUN_009665d0(param_2,iVar1,param_3);
  return 1;
}

// 00966810  sMapInfoRayCastWork::sMapInfoRayCastWork  size=90  [class]
undefined4 * __fastcall sMapInfoRayCastWork::sMapInfoRayCastWork(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00904d60();
  *(undefined2 *)((int)param_1 + 10) = 0xffff;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  FUN_00904d60();
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)((int)param_1 + 10) = 0xffff;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  return param_1;
}

// 00966870  sMapInfoRayCastWork::~sMapInfoRayCastWork  size=134  [class]
void __fastcall sMapInfoRayCastWork::~sMapInfoRayCastWork(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1 + 1;
  *param_1 = vftable;
  if (*piVar1 != 0) {
    RayCastManager::getWork(piVar1);
  }
  piVar2 = param_1 + 4;
  if (*piVar2 != 0) {
    RayCastManager::getWork(piVar2);
  }
  *(undefined2 *)((int)param_1 + 10) = 0xffff;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  if (*piVar2 != 0) {
    RayCastManager::getWork(piVar2);
  }
  FUN_00905ce0();
  if (*piVar1 != 0) {
    RayCastManager::getWork(piVar1);
  }
  FUN_00905ce0();
  return;
}

// 00966900  sMapInfoRayCastWork::vf0C  size=59  [class]
void __fastcall sMapInfoRayCastWork::vf0C(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  if (iVar1 != 0) {
    FUN_009662a0((int)*(short *)(param_1 + 2),(int)*(short *)((int)param_1 + 10),
                 (int)*(short *)(param_1 + 3),1);
    return;
  }
  FUN_009662a0((int)*(short *)(param_1 + 2),(int)*(short *)((int)param_1 + 10),
               (int)*(short *)(param_1 + 3),0);
  return;
}

// 00966940  sMapInfoRayCastWork::vf14  size=415  [class]
undefined4 __fastcall sMapInfoRayCastWork::vf14(int param_1)

{
  int iVar1;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [80];
  undefined1 local_60 [92];
  
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  iVar1 = FUN_00963da0((int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 10));
  if (iVar1 != 0) {
    FUN_009665d0(&local_d0,iVar1,0x3fa00000);
    iVar1 = FUN_00963da0((int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 0xc));
    if (iVar1 != 0) {
      FUN_009665d0(&local_c0,iVar1,0x3fa00000);
      iVar1 = FUN_00966770(&local_e0,0x3ee66666);
      if (iVar1 != 0) {
        iVar1 = FUN_009667c0(&local_f0,0x3ee66666);
        if (iVar1 != 0) {
          FUN_00468970(param_1 + 4,0,&local_d0,&local_c0,0x1e,0,0,0,"sMapInfoRayCastWork",0,0);
          HavokRayCastManager::set(local_b0);
          FUN_00468970(param_1 + 0x10,0,&local_e0,&local_f0,0x1e,0,0,0,"sMapInfoRayCastWork",0,0);
          HavokRayCastManager::set(local_60);
          RayCastManager::getWork_2(param_1 + 4,1);
          RayCastManager::getWork_2(param_1 + 0x10,1);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00966AE0  FUN_00966ae0  size=132  [between]
undefined4 * __fastcall FUN_00966ae0(undefined4 *param_1)

{
  sMapInfoRayCastWork::sMapInfoRayCastWork();
  *param_1 = &PTR_DAT_01651694;
  FUN_00904d60();
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  FUN_00904d60();
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)((int)param_1 + 10) = 0xffff;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined2 *)(param_1 + 0xb) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x2e) = 0xffff;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  return param_1;
}

// 00966B70  FUN_00966b70  size=233  [between]
void __fastcall FUN_00966b70(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = &PTR_DAT_01651694;
  if (param_1[1] != 0) {
    RayCastManager::getWork(param_1 + 1);
  }
  if (param_1[4] != 0) {
    RayCastManager::getWork(param_1 + 4);
  }
  piVar1 = param_1 + 7;
  if (param_1[7] != 0) {
    RayCastManager::getWork(piVar1);
  }
  piVar2 = param_1 + 10;
  if (*piVar2 != 0) {
    RayCastManager::getWork(piVar2);
  }
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)((int)param_1 + 10) = 0xffff;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined2 *)(param_1 + 0xb) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x2e) = 0xffff;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  if (*piVar2 != 0) {
    RayCastManager::getWork(piVar2);
  }
  FUN_00905ce0();
  if (*piVar1 != 0) {
    RayCastManager::getWork(piVar1);
  }
  FUN_00905ce0();
  sMapInfoRayCastWork::~sMapInfoRayCastWork();
  return;
}

// 00966C60  FUN_00966c60  size=396  [between]
undefined4 __fastcall FUN_00966c60(int param_1)

{
  int iVar1;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [80];
  undefined1 local_60 [92];
  
  iVar1 = sMapInfoRayCastWork::vf14();
  if (iVar1 != 0) {
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0;
    local_e4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    iVar1 = FUN_00963da0((int)*(short *)(param_1 + 0x20),(int)*(short *)(param_1 + 0x22));
    if (iVar1 != 0) {
      FUN_009665d0(&local_d0,iVar1,0x3fa00000);
      iVar1 = FUN_009667c0(&local_c0,0x3fa00000);
      if (iVar1 != 0) {
        iVar1 = FUN_00966770(&local_e0,0x3ee66666);
        if (iVar1 != 0) {
          iVar1 = FUN_009667c0(&local_f0,0x3ee66666);
          if (iVar1 != 0) {
            FUN_00468970(param_1 + 0x1c,0,&local_d0,&local_c0,0x1e,0,0,0,"sMapInfoRayCastWork",0,0);
            HavokRayCastManager::set(local_b0);
            FUN_00468970(param_1 + 0x28,0,&local_e0,&local_f0,0x1e,0,0,0,"sMapInfoRayCastWork",0,0);
            HavokRayCastManager::set(local_60);
            RayCastManager::getWork_2(param_1 + 0x1c,1);
            RayCastManager::getWork_2(param_1 + 0x28,1);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00966EF0  FUN_00966ef0  size=43  [between]
void __fastcall FUN_00966ef0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00966F20  FUN_00966f20  size=43  [between]
void __fastcall FUN_00966f20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00966FE0  FUN_00966fe0  size=60  [between]
void __thiscall FUN_00966fe0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00967070  FUN_00967070  size=43  [between]
void __fastcall FUN_00967070(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009670A0  FUN_009670a0  size=43  [between]
void __fastcall FUN_009670a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009670D0  FUN_009670d0  size=43  [between]
void __fastcall FUN_009670d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00967990  FUN_00967990  size=30  [between]
undefined4 __thiscall FUN_00967990(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009679E0  FUN_009679e0  size=92  [between]
void __thiscall FUN_009679e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x34);
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    param_1[10] = *(undefined4 *)(param_3 + 0xf8);
    param_1[9] = uVar1;
    *param_1 = param_4;
    param_1[8] = uVar2;
    FUN_00962910(param_1 + 4,param_2);
    return;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = param_4;
  param_1[10] = 0xffffffff;
  FUN_00962910(param_1 + 4,param_2);
  return;
}

// 00967A40  FUN_00967a40  size=486  [between]
bool __thiscall FUN_00967a40(int param_1,float *param_2,float *param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar3 = *(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30;
    local_30 = *(float *)(iVar3 + 0x10);
    local_2c = *(float *)(iVar3 + 0x14);
    local_28 = *(float *)(iVar3 + 0x18);
    local_24 = *(undefined4 *)(iVar3 + 0x1c);
    FUN_009629c0(&local_30,iVar3 + 0x10);
    bVar2 = (param_2[2] - local_28) * (param_2[2] - local_28) +
            (*param_2 - local_30) * (*param_2 - local_30) <= param_4 * param_4;
    if (bVar2) {
      iVar3 = *(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30;
      *(undefined4 *)(param_1 + 0x20) =
           *(undefined4 *)(*(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x18);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar3 + 0x28);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = local_30;
      param_3[1] = local_2c;
      param_3[2] = local_28;
    }
    if (1 < *(int *)(param_1 + 0x14)) {
      iVar3 = (*(int *)(param_1 + 0x14) * 3 + -6) * 0x10 + *(int *)(param_1 + 0x10);
      local_40 = *(float *)(iVar3 + 0x10);
      local_3c = *(float *)(iVar3 + 0x14);
      local_38 = *(float *)(iVar3 + 0x18);
      local_34 = *(undefined4 *)(iVar3 + 0x1c);
      FUN_009629c0(&local_40,iVar3 + 0x10);
    }
    iVar3 = *(int *)(param_1 + 0x14);
    if (0 < iVar3) {
      iVar1 = *(int *)(param_1 + 0x10) + -0x30 + iVar3 * 0x30;
      local_40 = *(float *)(iVar1 + 0x10);
      local_3c = *(float *)(iVar1 + 0x14);
      local_38 = *(float *)(iVar1 + 0x18);
      local_34 = *(undefined4 *)(iVar1 + 0x1c);
      FUN_009629c0(&local_40,iVar1 + 0x10);
      if (1 < iVar3) {
        FUN_009650d0(local_20);
      }
      FUN_00962910(*(int *)(param_1 + 0x10) + iVar3 * 0x30 + -0x20,&local_40);
      if (param_3 == (float *)0x0) {
        return bVar2;
      }
      *param_3 = local_40;
      param_3[1] = local_3c;
      param_3[2] = local_38;
      return bVar2;
    }
  }
  return (bool)5;
}

// 00967C30  FUN_00967c30  size=245  [between]
undefined1 __fastcall FUN_00967c30(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined1 uVar7;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + -8 + *(int *)(param_1 + 0x14) * 0x30);
    iVar3 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),iVar2);
    if (iVar3 != 0) {
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 0xfc)) {
        psVar6 = (short *)(iVar3 + 0x38);
        do {
          if ((int)*psVar6 == *(int *)(param_1 + 0x48)) {
            uVar1 = *(ushort *)(iVar3 + 0x3a + iVar4 * 0xc);
            uVar7 = (uVar1 & 2) != 0;
            if ((uVar1 & 4) != 0) {
              uVar7 = 2;
            }
            return uVar7;
          }
          iVar4 = iVar4 + 1;
          psVar6 = psVar6 + 6;
        } while (iVar4 < *(int *)(iVar3 + 0xfc));
      }
      iVar4 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x48));
      if ((iVar4 != 0) && (0 < *(int *)(iVar3 + 0xfc))) {
        psVar6 = (short *)(iVar4 + 0x38);
        iVar5 = 0;
        do {
          if (*psVar6 == iVar2) {
            uVar1 = *(ushort *)(iVar4 + 0x3a + iVar5 * 0xc);
            uVar7 = (uVar1 & 2) != 0;
            if ((uVar1 & 4) != 0) {
              uVar7 = 2;
            }
            return uVar7;
          }
          iVar5 = iVar5 + 1;
          psVar6 = psVar6 + 6;
        } while (iVar5 < *(int *)(iVar3 + 0xfc));
      }
    }
  }
  return 0;
}

// 00967D60  FUN_00967d60  size=714  [between]
int __thiscall FUN_00967d60(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  float *pfVar12;
  float10 fVar13;
  
  puVar1 = (undefined4 *)param_1[2];
  param_1[3] = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[1] = 0;
  *puVar1 = param_2;
  fVar13 = (float10)FUN_00965340(param_2,param_3);
  puVar1[2] = (float)fVar13;
  puVar1[4] = 0;
  puVar1[3] = (float)(fVar13 + (float10)(float)puVar1[1]);
  puVar1[5] = *param_1;
  *param_1 = (int)puVar1;
  do {
    piVar5 = (int *)FUN_00962c50();
    if (piVar5 == (int *)0x0) break;
    if (*piVar5 == param_3) {
      piVar5[5] = param_1[1];
      param_1[1] = (int)piVar5;
      param_1[0x20] = 1;
      return 1;
    }
    piVar6 = (int *)FUN_00965660(piVar5);
    if (piVar6 != (int *)0x0) {
LAB_00967df6:
      fVar13 = (float10)FUN_00965500(*piVar5,*piVar6);
      piVar8 = (int *)*param_1;
      if (piVar8 != (int *)0x0) {
        do {
          if (*piVar8 == *piVar6) goto LAB_00967e2f;
          piVar8 = (int *)piVar8[5];
        } while (piVar8 != (int *)0x0);
      }
      piVar8 = (int *)param_1[1];
      if (piVar8 != (int *)0x0) {
        do {
          if (*piVar8 == *piVar6) goto LAB_00967e2f;
          piVar8 = (int *)piVar8[5];
        } while (piVar8 != (int *)0x0);
      }
      goto LAB_00967e3d;
    }
LAB_00967ff2:
    piVar5[5] = param_1[1];
    param_1[1] = (int)piVar5;
  } while (*param_1 != 0);
  return param_1[0x20];
LAB_00967e2f:
  if ((float10)(float)piVar6[1] <= fVar13 + (float10)(float)piVar5[1]) goto LAB_00967fe0;
LAB_00967e3d:
  iVar2 = *piVar6;
  piVar6[1] = (int)(float)(fVar13 + (float10)(float)piVar5[1]);
  uVar3 = param_1[7];
  if ((((uVar3 < 8) && ((&DAT_01b375e8)[uVar3 * 8] != 0)) && (-1 < iVar2)) &&
     (iVar2 <= (int)(&DAT_01b375e4)[uVar3 * 8])) {
    uVar11 = (&DAT_01b375e0)[uVar3 * 8] + iVar2 * 0x130;
    if (*(int *)(uVar11 + 0xf8) != iVar2) {
      FUN_00dd5650(&DAT_016515f0,uVar3,iVar2);
      goto LAB_00967e8f;
    }
    pfVar12 = (float *)(~-(uint)((*(uint *)(uVar11 + 0x10c) & 0x80000000) != 0) & uVar11);
  }
  else {
LAB_00967e8f:
    pfVar12 = (float *)0x0;
  }
  uVar3 = param_1[7];
  if (((uVar3 < 8) && ((&DAT_01b375e8)[uVar3 * 8] != 0)) &&
     ((-1 < param_3 && (param_3 <= (int)(&DAT_01b375e4)[uVar3 * 8])))) {
    uVar11 = param_3 * 0x130 + (&DAT_01b375e0)[uVar3 * 8];
    if (*(int *)(uVar11 + 0xf8) != param_3) {
      FUN_00dd5650(&DAT_016515f0,uVar3,param_3);
      goto LAB_00967ee0;
    }
    pfVar7 = (float *)(~-(uint)((*(uint *)(uVar11 + 0x10c) & 0x80000000) != 0) & uVar11);
  }
  else {
LAB_00967ee0:
    pfVar7 = (float *)0x0;
  }
  if ((pfVar12 == (float *)0x0) || (pfVar7 == (float *)0x0)) {
    fVar4 = 10000.0;
  }
  else {
    fVar4 = SQRT((*pfVar12 - *pfVar7) * (*pfVar12 - *pfVar7) +
                 (pfVar12[1] - pfVar7[1]) * (pfVar12[1] - pfVar7[1]) +
                 (pfVar12[2] - pfVar7[2]) * (pfVar12[2] - pfVar7[2]));
  }
  piVar6[2] = (int)fVar4;
  piVar6[4] = (int)piVar5;
  piVar6[3] = (int)(fVar4 + (float)piVar6[1]);
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar6;
    piVar9 = piVar8;
    while (*piVar9 != iVar2) {
      piVar9 = (int *)piVar9[5];
      if (piVar9 == (int *)0x0) goto LAB_00967f8c;
    }
    if (*piVar8 == iVar2) goto LAB_00967f86;
    do {
      piVar9 = piVar8;
      piVar8 = (int *)piVar9[5];
    } while (*piVar8 != iVar2);
    if (piVar9 == (int *)0x0) {
LAB_00967f86:
      param_1[1] = piVar8[5];
    }
    else {
      piVar9[5] = piVar8[5];
    }
  }
LAB_00967f8c:
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
LAB_00967fa1:
    piVar6[5] = (int)piVar8;
    *param_1 = (int)piVar6;
  }
  else {
    iVar2 = *piVar6;
    piVar9 = piVar8;
    while (*piVar9 != iVar2) {
      piVar9 = (int *)piVar9[5];
      if (piVar9 == (int *)0x0) goto LAB_00967fa1;
    }
    piVar9 = piVar8;
    if (*piVar8 == iVar2) goto LAB_00967fd0;
    do {
      piVar10 = piVar9;
      piVar9 = (int *)piVar10[5];
    } while (*piVar9 != iVar2);
    if (piVar10 == (int *)0x0) {
LAB_00967fd0:
      piVar6[5] = piVar8[5];
      *param_1 = (int)piVar6;
    }
    else {
      piVar6[5] = piVar9[5];
      piVar10[5] = (int)piVar6;
    }
  }
LAB_00967fe0:
  piVar6 = (int *)FUN_00965660(piVar5);
  if (piVar6 == (int *)0x0) goto LAB_00967ff2;
  goto LAB_00967df6;
}

// 00968030  FUN_00968030  size=339  [between]
float10 __thiscall FUN_00968030(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_24;
  
  fVar12 = (float10)0;
  fVar1 = *param_3;
  fVar9 = (float10)fVar1;
  fVar2 = param_3[1];
  fVar10 = (float10)fVar2;
  piVar4 = *(int **)(param_1 + 4);
  fVar3 = param_3[2];
  fVar11 = (float10)fVar3;
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[4];
    while (iVar5 != 0) {
      local_24 = (float)fVar12;
      uVar6 = *(uint *)(param_1 + 0x1c);
      iVar5 = *piVar4;
      if ((((uVar6 < 8) && ((&DAT_01b375e8)[uVar6 * 8] != 0)) && (-1 < iVar5)) &&
         (iVar5 <= (int)(&DAT_01b375e4)[uVar6 * 8])) {
        uVar8 = (&DAT_01b375e0)[uVar6 * 8] + iVar5 * 0x130;
        if (*(int *)(uVar8 + 0xf8) == iVar5) {
          pfVar7 = (float *)(~-(uint)((*(uint *)(uVar8 + 0x10c) & 0x80000000) != 0) & uVar8);
        }
        else {
          FUN_00dd5650(&DAT_016515f0,uVar6,iVar5);
          fVar10 = (float10)fVar2;
          fVar12 = (float10)local_24;
          pfVar7 = (float *)0x0;
          fVar11 = (float10)fVar3;
          fVar9 = (float10)fVar1;
        }
      }
      else {
        pfVar7 = (float *)0x0;
      }
      fVar1 = *pfVar7;
      piVar4 = (int *)piVar4[4];
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar9 = fVar9 - (float10)fVar1;
      fVar10 = fVar10 - (float10)fVar2;
      fVar11 = fVar11 - (float10)fVar3;
      fVar12 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11) + fVar12;
      fVar9 = (float10)fVar1;
      fVar10 = (float10)fVar2;
      fVar11 = (float10)fVar3;
      iVar5 = piVar4[4];
    }
  }
  return SQRT((fVar10 - (float10)param_2[1]) * (fVar10 - (float10)param_2[1]) +
              (fVar9 - (float10)*param_2) * (fVar9 - (float10)*param_2) +
              (fVar11 - (float10)param_2[2]) * (fVar11 - (float10)param_2[2])) + fVar12;
}

// 00968230  FUN_00968230  size=357  [between]
undefined4 __thiscall FUN_00968230(int param_1,float *param_2,float *param_3,float param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x14) < 2) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30;
  local_20 = *(float *)(iVar1 + 0x10);
  local_1c = *(undefined4 *)(iVar1 + 0x14);
  local_18 = *(float *)(iVar1 + 0x18);
  local_14 = *(undefined4 *)(iVar1 + 0x1c);
  FUN_009629c0(&local_20,iVar1 + 0x10);
  if ((param_2[2] - local_18) * (param_2[2] - local_18) +
      (*param_2 - local_20) * (*param_2 - local_20) <= param_4 * param_4) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30);
    *(undefined4 *)(param_1 + 0x20) = *puVar2;
    *(undefined4 *)(param_1 + 0x30) = puVar2[4];
    *(undefined4 *)(param_1 + 0x34) = puVar2[5];
    *(undefined4 *)(param_1 + 0x38) = puVar2[6];
    *(undefined4 *)(param_1 + 0x3c) = puVar2[7];
    *(undefined4 *)(param_1 + 0x40) = puVar2[8];
    *(undefined4 *)(param_1 + 0x44) = puVar2[9];
    *(undefined4 *)(param_1 + 0x48) = puVar2[10];
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    if (*(int *)(param_1 + 0x14) < 2) {
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      param_3[3] = param_2[3];
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30;
  local_30 = *(float *)(iVar1 + 0x10);
  local_2c = *(float *)(iVar1 + 0x14);
  local_28 = *(float *)(iVar1 + 0x18);
  local_24 = *(float *)(iVar1 + 0x1c);
  FUN_009629c0(&local_30,iVar1 + 0x10);
  *param_3 = local_30;
  param_3[1] = local_2c;
  param_3[2] = local_28;
  param_3[3] = local_24;
  return 0;
}

// 009683A0  FUN_009683a0  size=1498  [between]
undefined4 __thiscall FUN_009683a0(int param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_78 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x14) == 3) {
      local_20 = *param_2;
      iVar2 = *(int *)(param_1 + 0x10);
      pfVar1 = (float *)(iVar2 + 0x70);
      local_1c = param_2[1];
      local_18 = param_2[2];
      local_14 = param_2[3];
      local_70 = *pfVar1;
      local_6c = *(float *)(iVar2 + 0x74);
      local_68 = *(float *)(iVar2 + 0x78);
      local_64 = *(undefined4 *)(iVar2 + 0x7c);
      iVar3 = *(int *)(iVar2 + 0x84);
      if (iVar3 == 0) {
        local_70 = *pfVar1;
        local_6c = *(float *)(iVar2 + 0x74);
        local_68 = *(float *)(iVar2 + 0x78);
        local_64 = *(undefined4 *)(iVar2 + 0x7c);
      }
      else {
        D3DXVec3TransformNormal(&local_70,pfVar1,iVar3 + 0x10);
        local_70 = *(float *)(iVar3 + 0x40) + local_70;
        local_6c = *(float *)(iVar3 + 0x44) + local_6c;
        local_68 = *(float *)(iVar3 + 0x48) + local_68;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      local_60 = *(float *)(iVar2 + 0x10);
      local_5c = *(float *)(iVar2 + 0x14);
      local_58 = *(float *)(iVar2 + 0x18);
      local_54 = *(undefined4 *)(iVar2 + 0x1c);
      iVar3 = *(int *)(iVar2 + 0x24);
      if (iVar3 == 0) {
        local_60 = *(float *)(iVar2 + 0x10);
        local_5c = *(float *)(iVar2 + 0x14);
        local_58 = *(float *)(iVar2 + 0x18);
        local_54 = *(undefined4 *)(iVar2 + 0x1c);
      }
      else {
        D3DXVec3TransformNormal(&local_60,(float *)(iVar2 + 0x10),iVar3 + 0x10);
        local_60 = *(float *)(iVar3 + 0x40) + local_60;
        local_5c = *(float *)(iVar3 + 0x44) + local_5c;
        local_58 = *(float *)(iVar3 + 0x48) + local_58;
      }
      if (ABS(local_5c - (local_1c + 0.45)) < 3.0) {
        iVar2 = *(int *)(param_1 + 0x10);
        local_30 = local_70;
        pfVar1 = (float *)(iVar2 + 0x40);
        local_2c = local_6c;
        local_28 = local_68;
        local_24 = local_64;
        local_50 = *pfVar1;
        local_4c = *(float *)(iVar2 + 0x44);
        local_48 = *(float *)(iVar2 + 0x48);
        local_44 = *(undefined4 *)(iVar2 + 0x4c);
        iVar3 = *(int *)(iVar2 + 0x54);
        if (iVar3 == 0) {
          local_50 = *pfVar1;
          local_4c = *(float *)(iVar2 + 0x44);
          local_48 = *(float *)(iVar2 + 0x48);
          local_44 = *(undefined4 *)(iVar2 + 0x4c);
        }
        else {
          D3DXVec3TransformNormal(&local_50,pfVar1,iVar3 + 0x10);
          local_50 = *(float *)(iVar3 + 0x40) + local_50;
          local_4c = *(float *)(iVar3 + 0x44) + local_4c;
          local_48 = *(float *)(iVar3 + 0x48) + local_48;
        }
        thunk_FUN_00de19d0(&local_20,&local_50,&local_60,&local_30);
        iVar2 = FUN_00965780(0,&local_20,&local_30,*(undefined4 *)(param_1 + 0x54),0x3ee66666);
        if (iVar2 == 3) {
          iVar3 = *(int *)(param_1 + 0x14);
          iVar4 = *(int *)(param_1 + 0x10);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + -0x30 + iVar3 * 0x30);
          iVar2 = iVar4 + -0x30 + iVar3 * 0x30;
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar4 + -0x20 + iVar3 * 0x30);
          local_78 = 1;
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x14);
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar2 + 0x18);
          *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar2 + 0x1c);
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x20);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x24);
          *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x28);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          if (param_3 != (float *)0x0) {
            *param_3 = local_30;
            param_3[1] = local_2c;
            param_3[2] = local_28;
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0x14) < 1) goto LAB_00968965;
    iVar2 = *(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30;
    local_40 = *(float *)(iVar2 + 0x10);
    local_3c = *(float *)(iVar2 + 0x14);
    local_38 = *(float *)(iVar2 + 0x18);
    local_34 = *(undefined4 *)(iVar2 + 0x1c);
    iVar3 = *(int *)(iVar2 + 0x24);
    if (iVar3 == 0) {
      local_40 = *(float *)(iVar2 + 0x10);
      local_3c = *(float *)(iVar2 + 0x14);
      local_38 = *(float *)(iVar2 + 0x18);
      local_34 = *(undefined4 *)(iVar2 + 0x1c);
    }
    else {
      D3DXVec3TransformNormal(&local_40,(float *)(iVar2 + 0x10),iVar3 + 0x10);
      local_40 = *(float *)(iVar3 + 0x40) + local_40;
      local_3c = *(float *)(iVar3 + 0x44) + local_3c;
      local_38 = *(float *)(iVar3 + 0x48) + local_38;
    }
    if (param_4 * param_4 <
        (param_2[2] - local_38) * (param_2[2] - local_38) +
        (*param_2 - local_40) * (*param_2 - local_40)) break;
    iVar2 = *(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30;
    *(undefined4 *)(param_1 + 0x20) =
         *(undefined4 *)(*(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x10);
    local_78 = 1;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x28);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_40;
    param_3[1] = local_3c;
    param_3[2] = local_38;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 < 1) {
LAB_00968965:
    local_78 = 5;
  }
  else {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
    iVar3 = *(int *)(param_1 + 0x10) + -0x30 + iVar2 * 0x30;
    local_50 = *(float *)(iVar3 + 0x10);
    local_4c = *(float *)(iVar3 + 0x14);
    local_48 = *(float *)(iVar3 + 0x18);
    local_44 = *(undefined4 *)(iVar3 + 0x1c);
    FUN_009629c0(&local_50,iVar3 + 0x10);
    if ((2 < iVar2) &&
       (iVar3 = (iVar2 * 3 + -6) * 0x10, *(int *)(*(int *)(param_1 + 0x10) + iVar3) == -0x80000000))
    {
      local_60 = local_50;
      local_5c = local_4c;
      local_58 = local_48;
      local_54 = local_44;
      FUN_009650d0(&local_70);
      FUN_009650d0(&local_30);
      if (ABS(local_2c - (local_1c + 0.45)) < 3.0) {
        thunk_FUN_00de19d0(&local_50,&local_70,&local_30,&local_60);
        iVar4 = FUN_00965780(2,&local_20,&local_60,*(undefined4 *)(param_1 + 0x54),0x3ee66666);
        if (iVar4 == 3) {
          FUN_00962910(*(int *)(param_1 + 0x10) + iVar3 + 0x10,&local_60);
          FUN_00962aa0(*(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          if (param_3 != (float *)0x0) {
            *param_3 = local_60;
            param_3[1] = local_5c;
            param_3[2] = local_58;
          }
          return 1;
        }
      }
    }
    iVar3 = FUN_00965780(4,&local_20,&local_50,*(undefined4 *)(param_1 + 0x54),0x3ee66666);
    if (iVar3 == 0) {
      local_78 = 2;
    }
    else if (iVar3 == 1) {
      local_78 = 3;
    }
    else if (iVar3 == 2) {
      local_78 = 4;
    }
    FUN_00962910(*(int *)(param_1 + 0x10) + iVar2 * 0x30 + -0x20,&local_50);
    if (param_3 != (float *)0x0) {
      *param_3 = local_50;
      param_3[1] = local_4c;
      param_3[2] = local_48;
      return local_78;
    }
  }
  return local_78;
}

// 00968980  FUN_00968980  size=838  [between]
undefined4 __thiscall FUN_00968980(int param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = *(int *)(param_1 + 0x14);
  local_6c = 0;
  if (0 < iVar4) {
    local_64 = param_4 * param_4;
    do {
      local_20 = *param_2;
      local_1c = param_2[1];
      local_18 = param_2[2];
      iVar3 = *(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30;
      pfVar1 = (float *)(iVar3 + 0x10);
      local_14 = param_2[3];
      local_60 = *pfVar1;
      local_5c = *(float *)(iVar3 + 0x14);
      local_58 = *(float *)(iVar3 + 0x18);
      local_54 = *(undefined4 *)(iVar3 + 0x1c);
      if (*(int *)(iVar3 + 0x24) == 0) {
        local_60 = *pfVar1;
        local_5c = *(float *)(iVar3 + 0x14);
        local_58 = *(float *)(iVar3 + 0x18);
        local_54 = *(undefined4 *)(iVar3 + 0x1c);
      }
      else {
        local_68 = *(int *)(iVar3 + 0x24) + 0x10;
        D3DXVec3TransformNormal(&local_60,pfVar1,local_68);
        local_60 = *(float *)(local_68 + 0x30) + local_60;
        local_5c = *(float *)(local_68 + 0x34) + local_5c;
        local_58 = *(float *)(local_68 + 0x38) + local_58;
      }
      if (param_3 != (float *)0x0) {
        *param_3 = local_60;
        param_3[1] = local_5c;
        param_3[2] = local_58;
      }
      fVar2 = (param_2[2] - local_58) * (param_2[2] - local_58) +
              (*param_2 - local_60) * (*param_2 - local_60);
      if (fVar2 < local_64 == (fVar2 == local_64)) {
        if (iVar4 < 3) {
          return local_6c;
        }
        iVar5 = (iVar4 * 3 + -9) * 0x10;
        iVar3 = *(int *)(param_1 + 0x10) + iVar5;
        local_50 = *(float *)(iVar3 + 0x10);
        local_4c = *(float *)(iVar3 + 0x14);
        local_48 = *(float *)(iVar3 + 0x18);
        local_44 = *(undefined4 *)(iVar3 + 0x1c);
        FUN_009629c0(&local_50,iVar3 + 0x10);
        iVar3 = (iVar4 * 3 + -6) * 0x10;
        iVar4 = *(int *)(param_1 + 0x10) + iVar3;
        local_40 = *(undefined4 *)(iVar4 + 0x10);
        local_3c = *(undefined4 *)(iVar4 + 0x14);
        local_38 = *(undefined4 *)(iVar4 + 0x18);
        local_34 = *(undefined4 *)(iVar4 + 0x1c);
        FUN_009629c0(&local_40,iVar4 + 0x10);
        iVar5 = *(int *)(param_1 + 0x10) + iVar5;
        local_30 = *(undefined4 *)(iVar5 + 0x10);
        local_2c = *(undefined4 *)(iVar5 + 0x14);
        local_28 = *(undefined4 *)(iVar5 + 0x18);
        local_24 = *(undefined4 *)(iVar5 + 0x1c);
        FUN_009629c0(&local_30,iVar5 + 0x10);
        thunk_FUN_00dde510(&local_68,&local_64,&local_30,&local_40);
        iVar4 = FUN_00dde6c0(&local_40,&local_20,local_64,0x3fc90fdb);
        if (iVar4 != 0) {
          return local_6c;
        }
        thunk_FUN_00de19d0(&local_20,&local_40,&local_30,&local_50);
        iVar4 = FUN_00965a30(&local_20,&local_50,*(undefined4 *)(param_1 + 0x54),0x3ee66666);
        if (iVar4 == 3) {
          FUN_00962910(*(int *)(param_1 + 0x10) + iVar3 + 0x10,&local_50);
          FUN_00962aa0(*(int *)(param_1 + 0x10) + -0x30 + *(int *)(param_1 + 0x14) * 0x30);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          if (param_3 == (float *)0x0) {
            return local_6c;
          }
          *param_3 = local_50;
          param_3[1] = local_4c;
          param_3[2] = local_48;
          return local_6c;
        }
        if (iVar4 == 0) {
          return 2;
        }
        if (iVar4 != 1) {
          if (iVar4 != 2) {
            return local_6c;
          }
          return 4;
        }
        return 3;
      }
      iVar3 = *(int *)(param_1 + 0x14);
      iVar5 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar5 + -0x30 + iVar3 * 0x30);
      iVar4 = iVar5 + -0x30 + iVar3 * 0x30;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar5 + -0x20 + iVar3 * 0x30);
      local_6c = 1;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar4 + 0x14);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar4 + 0x18);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar4 + 0x28);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      iVar4 = *(int *)(param_1 + 0x14);
    } while (0 < iVar4);
  }
  return 5;
}

// 00968CD0  FUN_00968cd0  size=949  [between]
bool __thiscall FUN_00968cd0(int param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float unaff_ESI;
  float *pfVar3;
  undefined1 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fStack_16c;
  undefined4 uStack_168;
  float local_160;
  float local_15c;
  float fStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float *pfStack_144;
  float fStack_140;
  float *pfStack_13c;
  undefined1 auStack_134 [12];
  undefined1 auStack_128 [12];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [8];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [188];
  
  fVar1 = *(float *)(param_1 + 0x68) * 0.5;
  local_160 = fVar1 + 1.5;
  local_15c = 1.75;
  if (param_4 == 0) {
    local_15c = 0.7;
    local_160 = fVar1;
  }
  if ((*(uint *)(param_1 + 0x80) & 0xc000) != 0) {
    local_160 = *(float *)(param_1 + 0x68) * 0.5;
    local_15c = local_160;
  }
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_ec = 0;
  local_f0 = 0.0;
  local_f4 = 0;
  local_f8 = 0.0;
  local_100 = 0.0;
  local_104 = 0;
  local_108 = 0.0;
  local_10c = 0.0;
  local_d4 = 0x3f800000;
  local_e8 = 1.0;
  local_fc = 1.0;
  local_110 = 1.0;
  if (*(float *)(param_1 + 0x58) != 0.0) {
    D3DXMatrixRotationZ(local_d0,*(undefined4 *)(param_1 + 0x58));
    D3DXMatrixMultiply(auStack_118,&local_d8,auStack_118);
  }
  if (*(float *)(param_1 + 0x54) != 0.0) {
    D3DXMatrixRotationY(local_d0,*(undefined4 *)(param_1 + 0x54));
    D3DXMatrixMultiply(auStack_118,&local_d8,auStack_118);
  }
  if (*(float *)(param_1 + 0x50) != 0.0) {
    D3DXMatrixRotationX(local_d0,*(undefined4 *)(param_1 + 0x50));
    D3DXMatrixMultiply(auStack_118,&local_d8,auStack_118);
  }
  local_e0 = *(undefined4 *)(param_1 + 0x40);
  local_dc = *(undefined4 *)(param_1 + 0x44);
  pfVar5 = &fStack_150;
  local_d8 = *(undefined4 *)(param_1 + 0x48);
  fStack_150 = local_160;
  fStack_14c = 0.0;
  fStack_148 = local_15c;
  pfVar6 = pfVar5;
  D3DXVec3TransformNormal(pfVar5,pfVar5,&local_110);
  puVar4 = auStack_11c;
  pfVar3 = &fStack_14c;
  fVar1 = local_e8 + fStack_158;
  fStack_14c = -fStack_16c;
  fStack_148 = 0.0;
  D3DXVec3TransformNormal(pfVar3,pfVar3);
  fVar1 = local_f8 + fVar1;
  fStack_150 = fStack_150 + local_f0;
  pfStack_144 = (float *)0x0;
  fStack_148 = unaff_ESI;
  fStack_140 = -fStack_16c;
  D3DXVec3TransformNormal(&fStack_148,&fStack_148,auStack_128);
  fStack_150 = fStack_150 + local_100;
  fStack_14c = fStack_14c + local_fc;
  fStack_140 = 0.0;
  pfStack_144 = pfVar3;
  pfStack_13c = pfVar5;
  D3DXVec3TransformNormal(&pfStack_144,&pfStack_144,auStack_134);
  fStack_150 = local_110 + fStack_150;
  fStack_14c = fStack_14c + local_10c;
  fStack_148 = fStack_148 + local_108;
  if (param_3 == (undefined1 *)0x0) {
    param_3 = auStack_c0;
  }
  FUN_00964e70();
  *(undefined1 **)(param_3 + 0x40) = puVar4;
  *(float **)(param_3 + 0x44) = pfVar6;
  *(float *)(param_3 + 0x48) = -fStack_16c;
  *(undefined4 *)(param_3 + 0x4c) = uStack_168;
  *(float *)(param_3 + 0x50) = local_160;
  *(float *)(param_3 + 0x54) = fVar1;
  *(float *)(param_3 + 0x58) = fStack_150;
  *(float *)(param_3 + 0x5c) = fStack_148;
  *(float *)(param_3 + 0x60) = (float)pfVar5 + 1.0;
  *(float *)(param_3 + 100) = ((float)pfVar5 + 1.0) - 1.5;
  *(float *)(param_3 + 0x68) = *(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x40);
  *(float *)(param_3 + 0x6c) = *(float *)(param_3 + 0x4c) - *(float *)(param_3 + 0x44);
  *(float *)(param_3 + 0x70) = *(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x40);
  *(float *)(param_3 + 0x74) = *(float *)(param_3 + 0x5c) - *(float *)(param_3 + 0x44);
  *(float *)(param_3 + 0x78) = *(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x50);
  *(float *)(param_3 + 0x7c) = *(float *)(param_3 + 0x5c) - *(float *)(param_3 + 0x54);
  iVar2 = FUN_00d900c0();
  return iVar2 != 0;
}

// 00969090  FUN_00969090  size=383  [between]
void __fastcall FUN_00969090(int param_1)

{
  int iVar1;
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_98 [8];
  undefined1 local_90 [52];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [76];
  
  if ((*(uint *)(param_1 + 0x80) & 0x80000000) != 0) {
    if ((*(int *)(param_1 + 0x60) != 0) && ((*(byte *)(*(int *)(param_1 + 0x60) + 0x4c8) & 3) == 0))
    {
      iVar1 = *(int *)(param_1 + 100);
      local_a8 = 0;
      local_ac = 0;
      local_b0 = 0;
      local_b4 = 0;
      local_bc = 0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d4 = 0;
      local_d8 = 0;
      local_dc = 0;
      local_a4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_cc = 0x3f800000;
      local_e0 = 0x3f800000;
      if (*(float *)(param_1 + 0x38) != 0.0) {
        D3DXMatrixRotationZ(local_90,*(undefined4 *)(param_1 + 0x38));
        D3DXMatrixMultiply(auStack_e8,auStack_98,auStack_e8);
      }
      if (*(float *)(param_1 + 0x34) != 0.0) {
        D3DXMatrixRotationY(local_90,*(undefined4 *)(param_1 + 0x34));
        D3DXMatrixMultiply(auStack_e8,auStack_98,auStack_e8);
      }
      if (*(float *)(param_1 + 0x30) != 0.0) {
        D3DXMatrixRotationX(local_90,*(undefined4 *)(param_1 + 0x30));
        D3DXMatrixMultiply(auStack_e8,auStack_98,auStack_e8);
      }
      D3DXMatrixMultiply(auStack_50,&local_e0,iVar1 + 0x10);
      FUN_00ddba00(&local_ac,auStack_5c);
      FUN_00ddd760(param_1 + 0x50,&local_ac,5);
      return;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

// 00969210  FUN_00969210  size=81  [between]
void __fastcall FUN_00969210(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0x154);
  iVar2 = 0x10;
  do {
    iVar3 = iVar2;
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar3 + -1;
  } while (iVar2 != 0);
  piVar4 = (int *)(param_1 + 0x144);
  iVar3 = iVar3 + 0xf;
  do {
    if (*piVar4 != 0) {
      piVar4[2] = 0;
      if (piVar4[3] != 0) {
        FUN_00dd48d0(*piVar4,0);
        piVar4[3] = 0;
      }
      *piVar4 = 0;
      piVar4[1] = 0;
    }
    piVar4 = piVar4 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00969370  FUN_00969370  size=613  [between]
void FUN_00969370(undefined4 param_1,float *param_2,float *param_3)

{
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined4 *puStack_138;
  undefined1 *puStack_134;
  float *pfStack_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 auStack_108 [2];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [12];
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_68 [8];
  undefined4 auStack_60 [23];
  
  local_124 = param_2[2];
  local_128 = param_2[1];
  local_12c = *param_2;
  pfStack_130 = &local_b0;
  puStack_134 = (undefined1 *)0x9693a0;
  D3DXMatrixTranslation();
  uStack_c8 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_e4 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_c4 = 0x3f800000;
  uStack_d8 = 0x3f800000;
  uStack_ec = 0x3f800000;
  uStack_100 = 0x3f800000;
  if (param_3[2] != 0.0) {
    puStack_134 = (undefined1 *)param_3[2];
    puStack_138 = auStack_60;
    puStack_13c = (undefined4 *)0x96940b;
    D3DXMatrixRotationZ();
    puStack_144 = auStack_108;
    puStack_140 = (undefined4 *)auStack_68;
    puStack_13c = puStack_144;
    D3DXMatrixMultiply();
  }
  if (param_3[1] != 0.0) {
    puStack_134 = (undefined1 *)param_3[1];
    puStack_138 = auStack_60;
    puStack_13c = (undefined4 *)0x969446;
    D3DXMatrixRotationY();
    puStack_144 = auStack_108;
    puStack_140 = (undefined4 *)auStack_68;
    puStack_13c = puStack_144;
    D3DXMatrixMultiply();
  }
  if (*param_3 != 0.0) {
    puStack_134 = (undefined1 *)*param_3;
    puStack_138 = auStack_60;
    puStack_13c = (undefined4 *)0x96947b;
    D3DXMatrixRotationX();
    puStack_144 = auStack_108;
    puStack_140 = (undefined4 *)auStack_68;
    puStack_13c = puStack_144;
    D3DXMatrixMultiply();
  }
  puStack_13c = (undefined4 *)auStack_c0;
  puStack_138 = &uStack_100;
  puStack_140 = (undefined4 *)0x9694a2;
  puStack_134 = (undefined1 *)puStack_13c;
  D3DXMatrixMultiply();
  puStack_140 = &uStack_cc;
  uStack_11c = 0;
  uStack_118 = 0;
  puStack_144 = &uStack_11c;
  uStack_114 = 0xbf000000;
  D3DXVec3TransformNormal(&local_12c);
  fStack_a8 = fStack_a8 + (float)puStack_138;
  fStack_a0 = fStack_a0 + (float)pfStack_130;
  fStack_a4 = fStack_a4 + (float)puStack_134 + 0.75;
  puStack_138 = (undefined4 *)0x0;
  puStack_134 = (undefined1 *)0x0;
  pfStack_130 = (float *)0xc2c80000;
  fStack_98 = fStack_a8;
  fStack_94 = fStack_a4;
  fStack_90 = fStack_a0;
  D3DXVec3TransformNormal(&local_128,&puStack_138,&uStack_d8);
  fStack_b4 = fStack_b4 + (float)puStack_134;
  local_b0 = local_b0 + (float)pfStack_130;
  fStack_ac = fStack_ac + local_12c;
  puStack_144 = (undefined4 *)0x0;
  puStack_140 = (undefined4 *)0x3f800000;
  puStack_13c = (undefined4 *)0x0;
  fStack_94 = fStack_b4;
  fStack_90 = local_b0;
  fStack_8c = fStack_ac;
  thunk_FUN_00de01a0(param_1,&fStack_a4,&fStack_94,&puStack_144);
  D3DXMatrixInverse(param_1,0,param_1);
  return;
}

// 009695E0  sMapInfoRayCastWork::vf04  size=30  [class]
undefined4 __thiscall sMapInfoRayCastWork::vf04(undefined4 param_1,byte param_2)

{
  ~sMapInfoRayCastWork();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00969600  FUN_00969600  size=30  [callgraph]
undefined4 __thiscall FUN_00969600(undefined4 param_1,byte param_2)

{
  FUN_00966b70();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009696A0  FUN_009696a0  size=63  [callgraph]
void __fastcall FUN_009696a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00969740  FUN_00969740  size=43  [callgraph]
void __fastcall FUN_00969740(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00969770  FUN_00969770  size=60  [callgraph]
void __thiscall FUN_00969770(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 4;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00969820  FUN_00969820  size=43  [callgraph]
void __fastcall FUN_00969820(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009698C0  FUN_009698c0  size=44  [callgraph]
undefined4 __fastcall FUN_009698c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_00905ce0();
  }
  param_1[1] = 0;
  return uVar2;
}

// 009698F0  FUN_009698f0  size=94  [callgraph]
void __thiscall FUN_009698f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_00905ce0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00969950  FUN_00969950  size=84  [callgraph]
void __thiscall FUN_00969950(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    FUN_00905cf0(param_3 + 1);
    puVar1[2] = param_3[2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 009699B0  FUN_009699b0  size=102  [callgraph]
void __thiscall FUN_009699b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x30);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[4] = param_3[4];
    puVar1[5] = param_3[5];
    puVar1[6] = param_3[6];
    puVar1[7] = param_3[7];
    puVar1[8] = param_3[8];
    puVar1[9] = param_3[9];
    puVar1[10] = param_3[10];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00969A20  FUN_00969a20  size=63  [callgraph]
void __fastcall FUN_00969a20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00969A80  FUN_00969a80  size=43  [callgraph]
void __fastcall FUN_00969a80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00969AD0  FUN_00969ad0  size=65  [callgraph]
void __fastcall FUN_00969ad0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00969B40  FUN_00969b40  size=43  [callgraph]
void __fastcall FUN_00969b40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00969B70  FUN_00969b70  size=60  [callgraph]
void __thiscall FUN_00969b70(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x130);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00969BB0  FUN_00969bb0  size=65  [callgraph]
void __thiscall FUN_00969bb0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x130);
  }
  if (param_1[1] * 0x130 + *param_1 != 0) {
    FUN_00964be0(param_3);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00969C20  FUN_00969c20  size=43  [callgraph]
void __fastcall FUN_00969c20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00969CC0  FUN_00969cc0  size=83  [callgraph]
void __fastcall FUN_00969cc0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      *piVar1 = (int)(piVar1 + -4);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00969DB0  FUN_00969db0  size=43  [callgraph]
void __fastcall FUN_00969db0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00969DE0  FUN_00969de0  size=151  [callgraph]
undefined4 * __fastcall FUN_00969de0(undefined4 *param_1)

{
  int local_24;
  undefined4 local_14;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_24 = 5;
  param_1[0xf] = local_14;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff;
  do {
    FUN_00904d60();
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  param_1[0x15] = 0x3fc00000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x16] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x17] = 0;
  return param_1;
}

// 00969F80  FUN_00969f80  size=36  [callgraph]
undefined4 FUN_00969f80(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_2 != -1)) {
    uVar1 = FUN_00967d60();
    return uVar1;
  }
  return 0;
}

// 00969FB0  FUN_00969fb0  size=616  [callgraph]
undefined4 __thiscall FUN_00969fb0(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 uVar9;
  uint local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  if ((*(uint *)(param_1 + 0x1c) < 8) &&
     (local_58 = (&DAT_01b375e4)[*(uint *)(param_1 + 0x1c) * 8], 0 < local_58)) {
    local_54 = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      local_54 = FUN_009f8b40();
    }
    local_24 = 0;
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_00964700(8,&DAT_01b7bd48);
    piVar7 = local_20;
    if ((*(uint *)(param_1 + 0x1c) < 8) &&
       (pfVar8 = (float *)(&DAT_01b375e0)[*(uint *)(param_1 + 0x1c) * 8], pfVar8 != (float *)0x0)) {
      if (0 < local_58) {
        do {
          fVar4 = (param_2[2] - pfVar8[2]) * (param_2[2] - pfVar8[2]) +
                  (param_2[1] - pfVar8[1]) * (param_2[1] - pfVar8[1]) +
                  (*param_2 - *pfVar8) * (*param_2 - *pfVar8);
          if (fVar4 < (float)local_20[0xf]) {
            piVar5 = local_20 + 0xe;
            *piVar5 = (int)pfVar8;
            local_20[0xf] = (int)fVar4;
            iVar6 = 6;
            do {
              if ((float)piVar5[-1] < fVar4) break;
              iVar1 = piVar5[-2];
              iVar2 = piVar5[-1];
              piVar5[-2] = *piVar5;
              piVar5[-1] = piVar5[1];
              piVar5[1] = iVar2;
              *piVar5 = iVar1;
              piVar5 = piVar5 + -2;
              iVar6 = iVar6 + -1;
            } while (-1 < iVar6);
          }
          pfVar8 = pfVar8 + 0x4c;
          local_58 = local_58 + -1;
        } while (local_58 != 0);
      }
      if (param_3 == 1) {
        local_5c = 0;
        do {
          puVar3 = (undefined4 *)piVar7[local_5c * 2];
          if (puVar3 == (undefined4 *)0x0) break;
          local_50 = *param_2;
          local_48 = param_2[2];
          local_44 = param_2[3];
          local_40 = *puVar3;
          local_38 = puVar3[2];
          local_34 = puVar3[3];
          local_4c = param_2[1] + 0.45;
          local_3c = (float)puVar3[1] + 0.45;
          iVar6 = FUN_0090dc50(0,0,0,&local_40,&local_50,local_54 << 0x10 | 0x1e,"MapInfo_NearPath")
          ;
          if (iVar6 == 0) {
            iVar6 = local_14;
            if (piVar7 != (int *)0x0) {
              if (local_14 != 0) {
                FUN_00dd48d0(piVar7,0);
                iVar6 = 0;
              }
              piVar7 = (int *)0x0;
            }
            uVar9 = puVar3[0x3e];
            if (piVar7 == (int *)0x0) {
              return uVar9;
            }
            goto LAB_0096a1c2;
          }
          local_5c = local_5c + 1;
        } while (local_5c < 8);
      }
      else if ((local_18 != 0) && (*local_20 != 0)) {
        uVar9 = *(undefined4 *)(*local_20 + 0xf8);
        iVar6 = local_14;
LAB_0096a1c2:
        if (iVar6 != 0) {
          FUN_00dd48d0(piVar7,0);
        }
        return uVar9;
      }
      if ((piVar7 != (int *)0x0) && (local_14 != 0)) {
        FUN_00dd48d0(piVar7,0);
      }
    }
    else if ((local_20 != (int *)0x0) && (local_14 != 0)) {
      FUN_00dd48d0(local_20,0);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

// 0096A220  FUN_0096a220  size=464  [callgraph]
undefined4 __thiscall FUN_0096a220(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  uint uVar10;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  if ((*(uint *)(param_1 + 0x1c) < 8) &&
     (local_48 = (&DAT_01b375e4)[*(uint *)(param_1 + 0x1c) * 8], 0 < local_48)) {
    local_24 = 0;
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_00964700(8,&DAT_01b7bd48);
    piVar5 = local_20;
    if ((*(uint *)(param_1 + 0x1c) < 8) &&
       (pfVar9 = (float *)(&DAT_01b375e0)[*(uint *)(param_1 + 0x1c) * 8], pfVar9 != (float *)0x0)) {
      if (0 < local_48) {
        do {
          fVar4 = (param_2[2] - pfVar9[2]) * (param_2[2] - pfVar9[2]) +
                  (param_2[1] - pfVar9[1]) * (param_2[1] - pfVar9[1]) +
                  (*param_2 - *pfVar9) * (*param_2 - *pfVar9);
          if (fVar4 < (float)local_20[0xf]) {
            piVar6 = local_20 + 0xe;
            *piVar6 = (int)pfVar9;
            local_20[0xf] = (int)fVar4;
            iVar7 = 6;
            do {
              if ((float)piVar6[-1] < fVar4) break;
              iVar1 = piVar6[-2];
              iVar2 = piVar6[-1];
              piVar6[-2] = *piVar6;
              piVar6[-1] = piVar6[1];
              *piVar6 = iVar1;
              piVar6[1] = iVar2;
              piVar6 = piVar6 + -2;
              iVar7 = iVar7 + -1;
            } while (-1 < iVar7);
          }
          pfVar9 = pfVar9 + 0x4c;
          local_48 = local_48 + -1;
        } while (local_48 != 0);
      }
      if (param_3 == 1) {
        uVar10 = 0;
        do {
          puVar3 = (undefined4 *)piVar5[uVar10 * 2];
          if (puVar3 == (undefined4 *)0x0) break;
          local_40 = *puVar3;
          local_3c = puVar3[1];
          local_38 = puVar3[2];
          local_34 = puVar3[3];
          iVar7 = FUN_00965a30(&local_40,param_2,*(undefined4 *)(param_1 + 0x54),0x3ee66666);
          if (iVar7 == 3) {
            uVar8 = puVar3[0x3e];
            if (piVar5 == (int *)0x0) {
              return uVar8;
            }
            goto LAB_0096a3be;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < 8);
      }
      else if ((local_18 != 0) && (*local_20 != 0)) {
        uVar8 = *(undefined4 *)(*local_20 + 0xf8);
LAB_0096a3be:
        if (local_14 != 0) {
          FUN_00dd48d0(piVar5,0);
        }
        return uVar8;
      }
      if ((piVar5 != (int *)0x0) && (local_14 != 0)) {
        FUN_00dd48d0(piVar5,0);
      }
    }
    else if ((local_20 != (int *)0x0) && (local_14 != 0)) {
      FUN_00dd48d0(local_20,0);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

// 0096A630  FUN_0096a630  size=16  [callgraph]
void FUN_0096a630(void)

{
  FUN_00965ec0();
  FUN_00969090();
  return;
}

// 0096A720  FUN_0096a720  size=81  [callgraph]
void __fastcall FUN_0096a720(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x130);
  if (piVar1 != piVar1 + *(int *)(param_1 + 0x138)) {
    do {
      if (*piVar1 != 0) {
        FUN_00dd48d0(*piVar1,0);
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(param_1 + 0x130) + *(int *)(param_1 + 0x138) * 4));
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}

// 0096A800  FUN_0096a800  size=120  [callgraph]
void __thiscall FUN_0096a800(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 < 0x10) {
    piVar2 = *(int **)(param_1 + 0x144 + param_2 * 0x1c);
    param_1 = param_1 + param_2 * 0x1c;
    piVar1 = piVar2 + *(int *)(param_1 + 0x14c);
    if (piVar2 != piVar1) {
      while (*piVar2 != param_3) {
        piVar2 = piVar2 + 1;
        if (piVar2 == piVar1) {
          return;
        }
      }
      iVar3 = (int)piVar2 - *(int *)(param_1 + 0x144) >> 2;
      if (iVar3 < *(int *)(param_1 + 0x14c) + -1) {
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar3 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x144) + 4 + iVar3 * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x14c) + -1);
      }
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
    }
  }
  return;
}

// 0096A8C0  FUN_0096a8c0  size=922  [callgraph]
undefined4 FUN_0096a8c0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar2 = (**(code **)(*param_1 + 0x18))(*param_2,"AreaData");
  local_5c = uVar2;
  iVar3 = (**(code **)(*param_1 + 0x10))(uVar2);
  if (0 < iVar3) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x14))(uVar2,uStack_64);
      if (iVar3 != -1) {
        if (*(int *)(unaff_EDI + 0x134) <= *(int *)(unaff_EDI + 0x138)) {
          FUN_00dd5650(&DAT_01651708,0x80);
          return 1;
        }
        puVar4 = (undefined4 *)FUN_00dd29b0(0xa0,0x20,0,0);
        if (puVar4 == (undefined4 *)0x0) {
          FUN_00dd5650(&DAT_016516c0);
          return 0;
        }
        FUN_009633c0();
        iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"Position");
        uVar2 = unaff_EBX;
        if (iVar5 != -1) {
          unaff_ESI = 0;
          uVar2 = 0;
          uStack_64 = 0;
          (**(code **)(*param_1 + 0x44))(iVar5,&stack0xffffff94);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
        iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"Width");
        if (iVar5 != -1) {
          (**(code **)(*param_1 + 0x54))(iVar5,puVar4 + 0x1a);
        }
        iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"Rotation");
        if (iVar5 != -1) {
          unaff_ESI = 0;
          uVar2 = 0;
          uStack_64 = 0;
          (**(code **)(*param_1 + 0x44))(iVar5,&stack0xffffff94);
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
        }
        iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"WaitBase");
        if (iVar5 != -1) {
          (**(code **)(*param_1 + 0x58))(iVar5,puVar4 + 0x1b);
        }
        iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"EditNo");
        if (iVar5 != -1) {
          (**(code **)(*param_1 + 0x58))(iVar5,puVar4 + 0x1c);
        }
        iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,&DAT_016514a4);
        if (iVar5 != -1) {
          (**(code **)(*param_1 + 0x68))(iVar5,puVar4 + 0x20);
        }
        iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,&DAT_0164fcc8);
        if (iVar5 != -1) {
          (**(code **)(*param_1 + 0x58))(iVar5,puVar4 + 0x1d);
        }
        iVar3 = (**(code **)(*param_1 + 0x18))(iVar3,"PartsInfo");
        if (iVar3 != -1) {
          iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"ObjId");
          if (iVar5 != -1) {
            (**(code **)(*param_1 + 0x58))(iVar5,puVar4 + 0x22);
          }
          iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"PartsNo");
          if (iVar5 != -1) {
            (**(code **)(*param_1 + 0x58))(iVar5,puVar4 + 0x23);
          }
          iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"LocalPos");
          if (iVar5 != -1) {
            local_5c = 0;
            uStack_58 = 0;
            uStack_54 = 0;
            (**(code **)(*param_1 + 0x44))(iVar5,&local_5c);
            puVar4[8] = local_5c;
            puVar4[9] = uStack_58;
            puVar4[10] = uStack_54;
            puVar4[0xb] = uStack_50;
          }
          iVar5 = (**(code **)(*param_1 + 0x18))(iVar3,"LocalRot");
          if (iVar5 != -1) {
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            (**(code **)(*param_1 + 0x44))(iVar5,&uStack_54);
            puVar4[0xc] = uStack_54;
            puVar4[0xd] = uStack_50;
            puVar4[0xe] = uStack_4c;
            puVar4[0xf] = uStack_48;
          }
          iVar3 = (**(code **)(*param_1 + 0x18))(iVar3,"ParentHash");
          if (iVar3 != -1) {
            (**(code **)(*param_1 + 0x68))(iVar3,puVar4 + 0x24);
          }
        }
        AreaData::setParentInfo();
        unaff_EBX = uVar2;
        if (*(int *)(unaff_EDI + 0x138) < *(int *)(unaff_EDI + 0x134)) {
          puVar1 = (undefined4 *)(*(int *)(unaff_EDI + 0x130) + *(int *)(unaff_EDI + 0x138) * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = puVar4;
          }
          *(int *)(unaff_EDI + 0x138) = *(int *)(unaff_EDI + 0x138) + 1;
        }
      }
      unaff_ESI = unaff_ESI + 1;
      iVar3 = (**(code **)(*param_1 + 0x10))(uVar2);
    } while (unaff_ESI < iVar3);
  }
  return 1;
}

// 0096AC60  FUN_0096ac60  size=70  [callgraph]
void __fastcall FUN_0096ac60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x130);
  if (piVar1 != piVar1 + *(int *)(param_1 + 0x138)) {
    do {
      if (*piVar1 != 0) {
        FUN_00965ec0();
        FUN_00969090();
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(param_1 + 0x130) + *(int *)(param_1 + 0x138) * 4));
  }
  return;
}

// 0096AE40  FUN_0096ae40  size=75  [callgraph]
void FUN_0096ae40(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_01b378e4;
  piVar2 = DAT_01b378e4;
  if (DAT_01b378e4 != DAT_01b378e4 + DAT_01b378ec) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 4))(1);
        *piVar2 = 0;
        piVar1 = DAT_01b378e4;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1 + DAT_01b378ec);
  }
  DAT_01b378ec = 0;
  return;
}

// 0096AE90  FUN_0096ae90  size=599  [callgraph]
void FUN_0096ae90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  short *psVar10;
  uint local_14;
  int local_8;
  
  FUN_0096ae40();
  local_14 = 0;
  piVar9 = &DAT_01b375e0;
  do {
    if ((((local_14 < 8) && (piVar9[2] != 0)) && (iVar4 = FUN_00963940(), iVar4 != 0)) &&
       (piVar9 != (int *)0x0)) {
      uVar2 = piVar9[4];
      iVar4 = piVar9[3];
      sVar3 = 0;
      do {
        if (piVar9[1] <= iVar4) {
          iVar4 = 0;
        }
        if (((piVar9[2] == 0) || (iVar4 < 0)) || (piVar9[1] < iVar4)) {
LAB_0096af3a:
          uVar5 = 0;
        }
        else {
          uVar5 = iVar4 * 0x130 + *piVar9;
          if (*(int *)(uVar5 + 0xf8) != iVar4) {
            FUN_00dd5650(&DAT_016515f0,local_14,iVar4);
            goto LAB_0096af3a;
          }
          uVar5 = ~-(uint)((*(uint *)(uVar5 + 0x10c) & 0x80000000) != 0) & uVar5;
        }
        iVar4 = iVar4 + 1;
        if ((uVar5 != 0) && (0 < *(int *)(uVar5 + 0xfc))) {
          local_8 = 0;
          psVar10 = (short *)(uVar5 + 0x38);
          do {
            iVar6 = (int)*psVar10;
            if (((piVar9[2] != 0) && (-1 < iVar6)) && (iVar6 <= piVar9[1])) {
              iVar8 = iVar6 * 0x130 + *piVar9;
              if (*(int *)(iVar8 + 0xf8) == iVar6) {
                if ((((*(uint *)(iVar8 + 0x10c) & 0x80000000) == 0) && (iVar8 != 0)) &&
                   ((*(byte *)(psVar10 + 1) & 2) == 0)) {
                  if ((uVar2 & 0x40000000) == 0) {
                    iVar6 = FUN_00dd3500(0x34,DAT_01b375b4);
                    if (iVar6 == 0) goto LAB_0096b0d5;
                    piVar7 = (int *)FUN_00966ae0();
                  }
                  else {
                    iVar6 = FUN_00dd3500(0x1c,DAT_01b375b4);
                    if (iVar6 == 0) goto LAB_0096b0d5;
                    piVar7 = (int *)sMapInfoRayCastWork::sMapInfoRayCastWork();
                  }
                  if (piVar7 == (int *)0x0) {
LAB_0096b0d5:
                    FUN_00dd5650(&DAT_016517f8);
                    FUN_0096ae40();
                    return;
                  }
                  (**(code **)(*piVar7 + 0x10))(local_14,*(undefined2 *)(uVar5 + 0xf8),*psVar10);
                  (**(code **)(*piVar7 + 0x14))();
                  if (DAT_01b378ec < DAT_01b378e8) {
                    puVar1 = (undefined4 *)(DAT_01b378e4 + DAT_01b378ec * 4);
                    if (puVar1 != (undefined4 *)0x0) {
                      *puVar1 = piVar7;
                    }
                    DAT_01b378ec = DAT_01b378ec + 1;
                  }
                }
              }
              else {
                FUN_00dd5650(&DAT_016515f0,local_14,iVar6);
              }
            }
            local_8 = local_8 + 1;
            psVar10 = psVar10 + 6;
          } while (local_8 < *(int *)(uVar5 + 0xfc));
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < 1);
      piVar9[3] = iVar4;
    }
    local_14 = local_14 + 1;
    piVar9 = piVar9 + 8;
    if (0x1b376bf < (int)piVar9) {
      return;
    }
  } while( true );
}

// 0096B180  FUN_0096b180  size=97  [callgraph]
void __fastcall FUN_0096b180(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_00905ce0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0096B1F0  FUN_0096b1f0  size=84  [callgraph]
void __thiscall FUN_0096b1f0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    FUN_00905cf0(param_2 + 1);
    puVar1[2] = param_2[2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0096B250  FUN_0096b250  size=102  [callgraph]
void __thiscall FUN_0096b250(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[7];
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[10] = param_2[10];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0096B2C0  FUN_0096b2c0  size=63  [callgraph]
void __fastcall FUN_0096b2c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x130);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0096B300  FUN_0096b300  size=65  [callgraph]
void __thiscall FUN_0096b300(int *param_1,undefined4 param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x130);
  }
  if (param_1[1] * 0x130 + *param_1 != 0) {
    FUN_00964be0(param_2);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

