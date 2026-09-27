// src/misc/cLockonPartsList.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A87D90..00A88BE0, 24 functions

#include "mgrr.h"
#include "cLockonPartsList.h"

// 00A87D90  cLockonPartsList::cLockonPartsList  size=37  [class]
void __fastcall cLockonPartsList::cLockonPartsList(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  return;
}

// 00A87DC0  cLockonPartsList::~cLockonPartsList  size=215  [class]
void __fastcall cLockonPartsList::~cLockonPartsList(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],(param_1[7] & 0x3fffffff) * 0x30);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],(param_1[7] & 0x3fffffff) * 0x30);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  return;
}

// 00A87EA0  FUN_00a87ea0  size=282  [between]
void __thiscall FUN_00a87ea0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((*(byte *)(param_1 + 0x137) & 1) == 0) &&
      (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != param_2)) && (iVar2 = FUN_00a87a80(), iVar2 != 0))
  {
    FUN_00a85340(param_2);
    switch(iVar1) {
    case 1:
      FUN_00a87940();
      break;
    case 2:
      FUN_00a87990();
      break;
    case 3:
      FUN_00a879e0();
      break;
    case 4:
      FUN_00a87a30();
    }
    if (iVar1 < param_2) {
      switch(param_2 + -1) {
      case 0:
        FUN_00a873e0(param_3);
        return;
      case 1:
        FUN_00a87430(param_3);
        return;
      case 2:
        FUN_00a87500(param_3);
        return;
      case 3:
        FUN_00a87550(param_3);
        return;
      }
    }
    else {
      switch(param_2 + -1) {
      case 0:
        FUN_00a87680(param_3);
        return;
      case 1:
        FUN_00a87700(param_3);
        return;
      case 2:
        FUN_00a87760(param_3);
        return;
      case 3:
        FUN_00a877b0(param_3);
      }
    }
  }
  return;
}

// 00A87FF0  FUN_00a87ff0  size=138  [between]
void __fastcall FUN_00a87ff0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0x137) & 1) == 0) && (iVar3 = *(int *)(param_1 + 0x3c) + 1, iVar3 != 5))
  {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x4e4) != 0) {
          *(undefined4 *)(param_1 + 0x3c) = 0;
          FUN_00a87ea0(iVar3,1);
          return;
        }
        if (iVar3 == 4) {
          FUN_00a85390();
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
        }
      }
    }
    FUN_00a87ea0(iVar3,1);
  }
  return;
}

// 00A88080  FUN_00a88080  size=237  [between]
void __thiscall FUN_00a88080(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0x137) & 1) == 0) && (*(int *)(param_1 + 0x3c) != 4)) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x4e4) == 0) {
          if (param_2 == 1) {
            FUN_00a85390();
            uVar2 = FUN_00a7c7f0();
            FUN_00a7c960(uVar2);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
      }
    }
    if ((((*(byte *)(param_1 + 0x137) & 1) == 0) && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 4))
       && (iVar3 = FUN_00a87a80(), iVar3 != 0)) {
      FUN_00a85340(4);
      switch(iVar1) {
      case 1:
        FUN_00a87940();
        break;
      case 2:
        FUN_00a87990();
        break;
      case 3:
        FUN_00a879e0();
        break;
      case 4:
        FUN_00a87a30();
      }
      if (iVar1 < 4) {
        FUN_00a87550(param_2);
        return;
      }
      FUN_00a877b0(param_2);
    }
  }
  return;
}

// 00A88180  FUN_00a88180  size=42  [between]
void __thiscall FUN_00a88180(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((((*(byte *)(param_1 + 0x137) & 1) == 0) && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 4))
      && (iVar1 != 3)) && (iVar1 != 2)) {
    FUN_00a87ea0(2,param_2);
  }
  return;
}

// 00A881B0  FUN_00a881b0  size=132  [between]
void __thiscall FUN_00a881b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (((((*(byte *)(param_1 + 0x137) & 1) == 0) && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 4))
      && (iVar1 != 3)) && (iVar2 = FUN_00a87a80(), iVar2 != 0)) {
    FUN_00a85340(3);
    switch(iVar1) {
    case 1:
      FUN_00a87940();
      break;
    case 2:
      FUN_00a87990();
      break;
    case 3:
      FUN_00a879e0();
      break;
    case 4:
      FUN_00a87a30();
    }
    if (iVar1 < 3) {
      FUN_00a87500(param_2);
      return;
    }
    FUN_00a87760(param_2);
  }
  return;
}

// 00A88250  FUN_00a88250  size=208  [between]
void __thiscall FUN_00a88250(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((*(uint *)(param_1 + 0x134) & 0x80000000) != 0) && (iVar1 = FUN_00a87a80(), iVar1 != 0)) &&
      ((*(byte *)(param_1 + 0x137) & 1) == 0)) &&
     ((iVar1 = FUN_00a85390(), iVar1 != 0 && (*(int *)(iVar1 + 0x4e4) == 0)))) {
    FUN_00a88080(1);
    *(undefined4 *)(param_1 + 0x120) = *param_3;
    *(undefined4 *)(param_1 + 0x124) = param_3[1];
    *(undefined4 *)(param_1 + 0x128) = param_3[2];
    *(undefined4 *)(param_1 + 300) = param_3[3];
    if (param_2 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar1 + 0x40);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(iVar1 + 0x44);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar1 + 0x48);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(iVar1 + 0x4c);
      }
    }
  }
  return;
}

// 00A88320  FUN_00a88320  size=208  [between]
void __thiscall FUN_00a88320(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((*(uint *)(param_1 + 0x134) & 0x80000000) != 0) && (iVar1 = FUN_00a87a80(), iVar1 != 0)) &&
      ((*(byte *)(param_1 + 0x137) & 1) == 0)) &&
     ((iVar1 = FUN_00a85390(), iVar1 != 0 && (*(int *)(iVar1 + 0x4e4) == 0)))) {
    FUN_00a88180(0);
    *(undefined4 *)(param_1 + 0x120) = *param_3;
    *(undefined4 *)(param_1 + 0x124) = param_3[1];
    *(undefined4 *)(param_1 + 0x128) = param_3[2];
    *(undefined4 *)(param_1 + 300) = param_3[3];
    if (param_2 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar1 + 0x40);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(iVar1 + 0x44);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar1 + 0x48);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(iVar1 + 0x4c);
      }
    }
  }
  return;
}

// 00A883F0  FUN_00a883f0  size=244  [between]
void __thiscall FUN_00a883f0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((*(uint *)(param_1 + 0x134) & 0x80000000) != 0) && (iVar1 = FUN_00a87a80(), iVar1 != 0)) &&
      ((*(byte *)(param_1 + 0x137) & 1) == 0)) &&
     ((iVar1 = FUN_00a85390(), iVar1 != 0 && (*(int *)(iVar1 + 0x4e4) == 0)))) {
    if (param_2 == 2) {
      FUN_00a88180(0);
    }
    else if (param_2 == 3) {
      FUN_00a881b0(0);
    }
    else if (param_2 == 4) {
      FUN_00a88080(0);
    }
    *(undefined4 *)(param_1 + 0x120) = *param_4;
    *(undefined4 *)(param_1 + 0x124) = param_4[1];
    *(undefined4 *)(param_1 + 0x128) = param_4[2];
    *(undefined4 *)(param_1 + 300) = param_4[3];
    if (param_3 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar1 + 0x40);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(iVar1 + 0x44);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar1 + 0x48);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(iVar1 + 0x4c);
      }
    }
  }
  return;
}

// 00A884F0  FUN_00a884f0  size=17  [between]
void __fastcall FUN_00a884f0(int param_1)

{
  if ((*(byte *)(param_1 + 0x137) & 1) == 0) {
    FUN_00a88080();
    return;
  }
  return;
}

// 00A88530  FUN_00a88530  size=137  [between]
void __thiscall FUN_00a88530(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (((((*(byte *)(param_1 + 0x137) & 1) == 0) && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 3))
      && (iVar1 != 2)) && ((iVar1 != 1 && (iVar2 = FUN_00a87a80(), iVar2 != 0)))) {
    FUN_00a85340(3);
    switch(iVar1) {
    case 1:
      FUN_00a87940();
      break;
    case 2:
      FUN_00a87990();
      break;
    case 3:
      FUN_00a879e0();
      break;
    case 4:
      FUN_00a87a30();
    }
    if (iVar1 < 3) {
      FUN_00a87500(param_2);
      return;
    }
    FUN_00a87760(param_2);
  }
  return;
}

// 00A885D0  FUN_00a885d0  size=37  [between]
void __thiscall FUN_00a885d0(int param_1,undefined4 param_2)

{
  if ((((*(byte *)(param_1 + 0x137) & 1) == 0) && (*(int *)(param_1 + 0x3c) != 2)) &&
     (*(int *)(param_1 + 0x3c) != 1)) {
    FUN_00a87ea0(2,param_2);
  }
  return;
}

// 00A88600  FUN_00a88600  size=32  [between]
void __thiscall FUN_00a88600(int param_1,undefined4 param_2)

{
  if (((*(byte *)(param_1 + 0x137) & 1) == 0) && (*(int *)(param_1 + 0x3c) != 1)) {
    FUN_00a87ea0(1,param_2);
  }
  return;
}

// 00A88620  FUN_00a88620  size=71  [between]
void __fastcall FUN_00a88620(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_00a92fb0();
    fVar1 = (float10)FUN_00e049b0();
    fVar1 = (float10)*(float *)(param_1 + 0x108) - fVar1;
    *(float *)(param_1 + 0x108) = (float)fVar1;
    if ((fVar1 < (float10)0) && (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0)) {
      FUN_00a87ba0();
    }
  }
  return;
}

// 00A88670  FUN_00a88670  size=323  [between]
void __fastcall FUN_00a88670(char *param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_90 [64];
  undefined4 auStack_50 [19];
  
  if (((*(int *)(param_1 + 4) != 0) || (*param_1 != '\0')) && (iVar3 = FUN_00a81330(), iVar3 != 0))
  {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      FUN_004066f0();
      if (*param_1 == '\x01') {
        uVar1 = *(undefined4 *)(param_1 + 0xc);
        iVar5 = 0;
        iVar6 = 0;
        if (0 < *(short *)(iVar3 + 0x324)) {
          do {
            *(undefined4 *)(iVar5 + 0x1c + *(int *)(iVar3 + 800)) = uVar1;
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x70;
          } while (iVar6 < *(short *)(iVar3 + 0x324));
        }
        fVar2 = *(float *)(param_1 + 0xc) - 1.0 / *(float *)(param_1 + 8);
        *(float *)(param_1 + 0xc) = fVar2;
        if (fVar2 < 0.0) {
          *param_1 = *param_1 + '\x01';
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
        }
      }
      else if (*param_1 == '\x02') {
        if (*(int *)(param_1 + 4) != 0) {
          piVar4 = (int *)FUN_00910da0();
          (**(code **)(*piVar4 + 0x2c))(param_1 + 4);
        }
        *param_1 = '\0';
        param_1[0x14] = '\x01';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
      }
      *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
      FUN_0091df60(local_90);
      FUN_01005140(auStack_50);
      puVar7 = auStack_50;
      puVar8 = (undefined4 *)(iVar3 + 0x10);
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      switchD_0080dbae::default();
      if (DAT_01885d68 != 1) {
        piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar4 = *piVar4 + -1;
        if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  return;
}

// 00A887C0  FUN_00a887c0  size=146  [between]
void __thiscall FUN_00a887c0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)((int)param_2 + 6);
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[7];
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(param_2 + 10);
    *(undefined2 *)((int)puVar1 + 0x2a) = *(undefined2 *)((int)param_2 + 0x2a);
    puVar1[0xb] = param_2[0xb];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00A88880  cLockonPartsList::vf00  size=30  [class]
undefined4 __thiscall cLockonPartsList::vf00(undefined4 param_1,byte param_2)

{
  ~cLockonPartsList();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A888A0  FUN_00a888a0  size=199  [callgraph]
void __thiscall FUN_00a888a0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_2a;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar4 = *(int **)(param_1 + 8);
    do {
      if (*piVar4 == param_2) {
        if (iVar3 != -1) {
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar3 = *param_4;
  iVar1 = param_4[1];
  iVar2 = param_4[2];
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),0x30);
  }
  piVar4 = (int *)(*(int *)(param_1 + 0xc) * 0x30 + *(int *)(param_1 + 8));
  if (piVar4 != (int *)0x0) {
    piVar4[2] = param_3;
    *(undefined2 *)(piVar4 + 1) = 0;
    *(undefined2 *)((int)piVar4 + 6) = local_2a;
    *piVar4 = param_2;
    piVar4[3] = iVar3;
    piVar4[4] = iVar1;
    piVar4[5] = iVar2;
    piVar4[6] = param_5;
    piVar4[7] = 1;
    piVar4[8] = 0;
    piVar4[10] = 0;
    piVar4[9] = 0;
    piVar4[0xb] = 0;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

// 00A88970  FUN_00a88970  size=51  [callgraph]
void FUN_00a88970(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00a888a0(param_1,param_2,&local_c,param_3);
  return;
}

// 00A889B0  FUN_00a889b0  size=47  [callgraph]
void FUN_00a889b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00a888a0(param_1,0,&local_c,param_2);
  return;
}

// 00A889E0  FUN_00a889e0  size=207  [callgraph]
void __thiscall
FUN_00a889e0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_2a;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar4 = *(int **)(param_1 + 8);
    do {
      if (*piVar4 == param_2) {
        if (iVar3 != -1) {
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar3 = *param_6;
  iVar1 = param_6[1];
  iVar2 = param_6[2];
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),0x30);
  }
  piVar4 = (int *)(*(int *)(param_1 + 0xc) * 0x30 + *(int *)(param_1 + 8));
  if (piVar4 != (int *)0x0) {
    piVar4[2] = param_3;
    *(undefined2 *)(piVar4 + 1) = 0;
    *(undefined2 *)((int)piVar4 + 6) = local_2a;
    *piVar4 = param_2;
    piVar4[3] = iVar3;
    piVar4[4] = iVar1;
    piVar4[5] = iVar2;
    piVar4[6] = param_7;
    piVar4[7] = 1;
    piVar4[8] = param_4;
    piVar4[10] = 0;
    piVar4[9] = param_5;
    piVar4[0xb] = 0;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

// 00A88B50  FUN_00a88b50  size=97  [callgraph]
void __thiscall FUN_00a88b50(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(uint *)(param_1 + 0x134) & 0x80000000) != 0) {
    if (param_3 != 0) {
      FUN_00a87ea0();
      return;
    }
    *(int *)(param_1 + 0x3c) = param_2;
    if (((int)*(uint *)(param_1 + 0x134) < 0) && ((*(uint *)(param_1 + 0x134) & 0x1000000) == 0)) {
      puVar2 = (undefined4 *)(param_1 + 0x4c + param_2 * 0x24);
      puVar3 = (undefined4 *)(param_1 + 0x18);
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
  }
  return;
}

// 00A88BE0  FUN_00a88be0  size=38  [callgraph]
void __fastcall FUN_00a88be0(int param_1)

{
  if ((*(byte *)(param_1 + 0x137) & 1) == 0) {
    if (*(int *)(param_1 + 0x3c) == 1) {
      FUN_00a881b0();
      return;
    }
    if (*(int *)(param_1 + 0x3c) - 3U < 2) {
      FUN_00a885d0();
      return;
    }
  }
  return;
}

