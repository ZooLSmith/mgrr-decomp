// lib/havok/unit_0105CA10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0105CA10..0105F9D0, 130 functions

#include "types.h"

// 0105CA10  FUN_0105ca10  size=616  [run]
void __thiscall
FUN_0105ca10(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
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
              puVar6 = (undefined4 *)FUN_0143e9a0(0);
              FUN_0105c930(*puVar6,puVar6[1],param_4);
              iVar4 = FUN_01009750();
              iVar1 = iVar1 + iVar4;
              iVar2 = iVar2 + -1;
            }
          }
          else if (*(char *)(iVar3 + 0xd) == '\x19') {
            while (-1 < iVar2 + -1) {
              FUN_0143e7a0(iVar1,iVar3);
              puVar6 = (undefined4 *)FUN_0143e9a0(0);
              uVar9 = puVar6[1];
              uVar10 = param_4;
              uVar5 = FUN_010162f0(param_4,uVar9);
              FUN_0105ca10(*puVar6,uVar5,uVar10,uVar9);
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
            uVar9 = param_4;
            uVar10 = local_c;
            uVar5 = FUN_010162f0(param_4,local_c);
            uVar8 = FUN_0143e830(uVar5);
            FUN_0105ca10(uVar8,uVar5,uVar9,uVar10);
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
            piVar7 = (int *)FUN_0143e9b0(0);
            if (*piVar7 != 0) {
              (**(code **)(*param_1 + 0x14))(*piVar7,piVar7);
              FUN_0105ca10(piVar7[1],*piVar7,param_4,piVar7[2]);
            }
            iVar4 = FUN_01009750();
            iVar1 = iVar1 + iVar4;
          }
          break;
        case 0x1c:
          iVar4 = FUN_01016320();
          iVar1 = param_2;
          iVar2 = param_5;
          if (iVar4 == 0) {
            local_8 = 1;
          }
          else {
            local_8 = FUN_01016320();
          }
          while (-1 < iVar2 + -1) {
            FUN_0143e7a0(iVar1,iVar3);
            uVar9 = local_8;
            uVar10 = param_4;
            uVar5 = FUN_0143e830(local_8,param_4);
            FUN_0105c930(uVar5,uVar9,uVar10);
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

// 0105CCC0  hkXmlPackfileUpdateTracker::vf18  size=59  [run]
void __thiscall
hkXmlPackfileUpdateTracker::vf18
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*piVar1 != 0) {
    FUN_010060a0();
  }
  *piVar1 = 0;
  hkPackfileObjectUpdateTracker::vf18(param_2,param_3,param_4);
  return;
}

// 0105CD00  hkXmlPackfileUpdateTracker::vf20  size=51  [run]
void __thiscall hkXmlPackfileUpdateTracker::vf20(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*piVar1 != 0) {
    FUN_010060a0();
  }
  *piVar1 = 0;
  hkPackfileObjectUpdateTracker::vf20(param_2);
  return;
}

// 0105CD40  FUN_0105cd40  size=513  [run]
void __thiscall FUN_0105cd40(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  if (0 < param_2[1]) {
    do {
      uVar1 = *(undefined4 *)(*param_2 + local_14 * 8);
      local_c = 0;
      iVar2 = FUN_01009570();
      if (0 < iVar2) {
        do {
          iVar2 = FUN_01009590(local_c);
          if ((*(ushort *)(iVar2 + 0x10) & 0x400) == 0x400) goto switchD_0105cdbc_caseD_17;
          uVar8 = param_3;
          switch(*(undefined1 *)(iVar2 + 0xc)) {
          case 0x16:
          case 0x1a:
            if (*(char *)(iVar2 + 0xd) == '\x1c') {
              FUN_0143e7a0(uVar1,iVar2);
              puVar5 = (undefined4 *)FUN_0143e9a0(0);
              FUN_0105c930(*puVar5,puVar5[1],param_3);
              break;
            }
            if (*(char *)(iVar2 + 0xd) == '\x19') {
              FUN_0143e7a0(uVar1,iVar2);
              puVar5 = (undefined4 *)FUN_0143e9a0(0);
              uVar8 = puVar5[1];
              uVar4 = param_3;
              uVar6 = FUN_010162f0(param_3,uVar8);
              FUN_0105ca10(*puVar5,uVar6,uVar4,uVar8);
              FUN_01009750();
            }
          default:
            goto switchD_0105cdbc_caseD_17;
          case 0x19:
            iVar3 = FUN_01016320();
            if (iVar3 == 0) {
              local_10 = 1;
            }
            else {
              local_10 = FUN_01016320();
            }
            FUN_0143e7a0(uVar1,iVar2);
            iVar2 = FUN_010162f0(param_3,local_10);
            iVar3 = FUN_0143e830(iVar2);
LAB_0105cf03:
            FUN_0105ca10(iVar3,iVar2,uVar8,local_10);
            break;
          case 0x1b:
            FUN_0143e7a0(uVar1,iVar2);
            piVar7 = (int *)FUN_0143e9b0(0);
            if (*piVar7 != 0) {
              (**(code **)(*param_1 + 0x14))(*piVar7,piVar7);
              local_10 = piVar7[2];
              iVar2 = *piVar7;
              iVar3 = piVar7[1];
              goto LAB_0105cf03;
            }
            break;
          case 0x1c:
            iVar3 = FUN_01016320();
            if (iVar3 == 0) {
              local_10 = 1;
            }
            else {
              local_10 = FUN_01016320();
            }
            FUN_0143e7a0(uVar1,iVar2);
            uVar4 = FUN_0143e830(local_10,param_3);
            FUN_0105c930(uVar4,local_10,uVar8);
          }
          FUN_01009750();
switchD_0105cdbc_caseD_17:
          local_c = local_c + 1;
          iVar2 = FUN_01009570();
        } while (local_c < iVar2);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_2[1]);
  }
  return;
}

// 0105CF60  hkXmlPackfileUpdateTracker::vf00  size=52  [run]
int __thiscall hkXmlPackfileUpdateTracker::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_53();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105CFA0  FUN_0105cfa0  size=27  [run]
uint __fastcall FUN_0105cfa0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 0105D000  FUN_0105d000  size=105  [run]
undefined4 FUN_0105d000(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_1;
  uVar1 = FUN_01025530(param_1);
  FUN_01025890((int)&param_1 + 3,uVar1);
  if (param_1._3_1_ == '\0') {
    uVar2 = FUN_01015d80(uVar2,&PTR_vftable_018e9b94);
    FUN_01025470(uVar2,param_2);
    return uVar2;
  }
  uVar2 = FUN_010253e0(uVar1);
  FUN_01025420(uVar1,param_2);
  return uVar2;
}

// 0105D070  FUN_0105d070  size=96  [run]
void FUN_0105d070(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  uVar1 = FUN_010253c0();
  FUN_01025890((int)&uStack_8 + 3,uVar1);
  while (uStack_8._3_1_ != '\0') {
    uVar2 = FUN_010253e0(uVar1);
    FUN_01015db0(uVar2,&PTR_vftable_018e9b94);
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890((int)&uStack_8 + 3,uVar1);
  }
  FUN_01025720();
  return;
}

// 0105D0D0  FUN_0105d0d0  size=28  [run]
void FUN_0105d0d0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0105D0F0  FUN_0105d0f0  size=58  [run]
void FUN_0105d0f0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0105D130  FUN_0105d130  size=69  [run]
void FUN_0105d130(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0105D180  FUN_0105d180  size=24  [run]
void __fastcall FUN_0105d180(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 0105D1A0  FUN_0105d1a0  size=39  [run]
void FUN_0105d1a0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 0105D1D0  FUN_0105d1d0  size=37  [run]
void FUN_0105d1d0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0105D210  FUN_0105d210  size=54  [run]
void __thiscall FUN_0105d210(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != -1) {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar1 = param_3;
    do {
      **(undefined4 **)(iVar2 + iVar1 * 8) = param_2;
      iVar2 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(iVar2 + 4 + iVar1 * 8);
    } while (iVar1 != -1);
  }
  FUN_0105d0d0(param_2,param_3);
  return;
}

// 0105D270  FUN_0105d270  size=16  [run]
void FUN_0105d270(void)

{
  FUN_0105d070();
  FUN_01025870();
  return;
}

// 0105D280  FUN_0105d280  size=67  [run]
int __thiscall FUN_0105d280(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 0105D2D0  FUN_0105d2d0  size=61  [run]
void __fastcall FUN_0105d2d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105D310  FUN_0105d310  size=152  [run]
void FUN_0105d310(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 == param_1) {
      *piVar1 = 0;
    }
    else {
      puVar3 = (undefined4 *)puVar2[1];
      while (puVar3 != param_1) {
        puVar2 = (undefined4 *)puVar2[1];
        puVar3 = (undefined4 *)puVar2[1];
      }
      puVar2[1] = param_1[1];
    }
    param_1[2] = 0;
  }
  do {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar4 = puVar3, puVar4 != (undefined4 *)0x0) {
      puVar2 = puVar4;
      puVar3 = (undefined4 *)*puVar4;
    }
    param_1 = (undefined4 *)puVar2[1];
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)puVar2[2];
    }
    if ((undefined4 *)puVar2[2] != (undefined4 *)0x0) {
      *(undefined4 *)puVar2[2] = 0;
    }
    if (puVar2[3] != 0) {
      FUN_010060a0();
    }
    puVar2[3] = 0;
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 8))(puVar2,0x10);
  } while (param_1 != (undefined4 *)0x0);
  return;
}

// 0105D3B0  FUN_0105d3b0  size=104  [run]
int * __thiscall FUN_0105d3b0(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0105D420  FUN_0105d420  size=135  [run]
void __fastcall FUN_0105d420(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0105D4B0  FUN_0105d4b0  size=61  [run]
void __fastcall FUN_0105d4b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105D4F0  FUN_0105d4f0  size=34  [run]
void __thiscall FUN_0105d4f0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_0105a690();
  puVar1 = (undefined4 *)(*param_1 + iVar2 * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_3;
  return;
}

// 0105D520  FUN_0105d520  size=23  [run]
void __fastcall FUN_0105d520(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0105d310(*param_1);
    *param_1 = 0;
  }
  return;
}

// 0105D540  FUN_0105d540  size=23  [run]
void FUN_0105d540(undefined4 param_1,undefined4 param_2)

{
  FUN_0105d4f0(&param_1,param_2);
  return;
}

// 0105D560  FUN_0105d560  size=38  [run]
void FUN_0105d560(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0105D590  FUN_0105d590  size=23  [run]
void __fastcall FUN_0105d590(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0105d310(*param_1);
    *param_1 = 0;
  }
  return;
}

// 0105D5B0  FUN_0105d5b0  size=124  [run]
int __thiscall FUN_0105d5b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_2,&local_8,param_4);
  FUN_010060a0();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_3,param_4);
    if (local_8 != 0) {
      FUN_0105d310(local_8);
    }
    return iVar1;
  }
  if (local_8 != 0) {
    FUN_0105d310(local_8);
  }
  return iVar1;
}

// 0105D630  hkXmlPackfileReader::vf00  size=52  [run]
int __thiscall hkXmlPackfileReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkXmlPackfileReader();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105D670  _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf0C  size=311  [run]
int __thiscall
_anon_EC4D7004::hkPatchClassInstanceXmlParser::vf0C(int param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar3 = hkXmlParser::vf0C(param_2,param_3);
  if ((iVar3 == 0) && (*(int *)(param_1 + 0x20) == 0)) {
    uVar1 = *param_2;
    uVar6 = ~-(uint)(*(int *)(uVar1 + 8) != 1) & uVar1;
    if (uVar6 == 0) {
      if (((uVar1 & (*(int *)(uVar1 + 8) != 2) - 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
    }
    else {
      FUN_010fb580("class",0);
      if ((*(int *)(param_1 + 0x18) == 0) &&
         ((iVar4 = FUN_0105c870("hkobject"), iVar4 == 0 || (cVar2 = FUN_0105a960(), cVar2 != '\0')))
         ) {
        if (((*(int *)(param_1 + 0x1c) != 0) && (iVar4 = FUN_0105c870("hkobject"), iVar4 != 0)) &&
           (cVar2 = FUN_0105a960(), cVar2 != '\0')) {
          iVar3 = FUN_0105d5b0(uVar6,param_2,param_3);
          return iVar3;
        }
      }
      else {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        iVar4 = FUN_0105c870("hkparam");
        if (iVar4 != 0) {
          uVar5 = FUN_010fb580(&DAT_0164d4cc,0);
          iVar4 = FUN_01015b90("attributes",uVar5);
          if (iVar4 == 0) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            iVar3 = FUN_0105d5b0(uVar6,param_2,param_3);
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}

// 0105D7B0  FUN_0105d7b0  size=8  [run]
undefined4 FUN_0105d7b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0105D7C0  hkBindingClassNameRegistry::vf2C  size=35  [run]
void __thiscall hkBindingClassNameRegistry::vf2C(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  hkChainedClassNameRegistry::vf10(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

// 0105D7F0  FUN_0105d7f0  size=20  [run]
void FUN_0105d7f0(undefined4 param_1)

{
  FUN_01025be0(param_1,param_1);
  return;
}

// 0105D810  hkBindingClassNameRegistry::vf34  size=84  [run]
void hkBindingClassNameRegistry::vf34(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    iVar2 = *param_1;
    piVar1 = param_1;
    while (iVar2 != 0) {
      FUN_01025470(iVar2,piVar1[1]);
      FUN_01025470(piVar1[1],*piVar1);
      iVar3 = iVar3 + 1;
      piVar1 = param_1 + iVar3 * 2;
      iVar2 = param_1[iVar3 * 2];
    }
  }
  return;
}

// 0105D870  hkBindingClassNameRegistry::vf30  size=124  [run]
void hkBindingClassNameRegistry::vf30(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_010253c0();
  FUN_01025890((int)&param_1 + 3,uVar1);
  while (param_1._3_1_ != '\0') {
    uVar2 = FUN_010253e0(uVar1);
    uVar3 = FUN_01025400(uVar1);
    FUN_01025470(uVar2,uVar3);
    FUN_01025470(uVar3,uVar2);
    FUN_01025890((int)&param_1 + 3,uVar1);
  }
  return;
}

// 0105D8F0  FUN_0105d8f0  size=62  [run]
void __thiscall FUN_0105d8f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0105ea30(param_2);
  if (iVar1 != -1) {
    iVar2 = *param_1;
    do {
      **(undefined4 **)(iVar2 + iVar1 * 8) = param_3;
      iVar2 = *param_1;
      iVar1 = *(int *)(iVar2 + 4 + iVar1 * 8);
    } while (iVar1 != -1);
  }
  FUN_0105ea50(param_2);
  return;
}

// 0105D930  FUN_0105d930  size=229  [run]
int FUN_0105d930(int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_2 * 0x14);
    FUN_01015e80(iVar2,param_1,param_2 * 0x14);
    if (0 < param_2) {
      piVar7 = (int *)(iVar2 + 8);
      iVar6 = param_1 - iVar2;
      param_1 = param_2;
      do {
        iVar3 = FUN_01016080(piVar7[-2]);
        iVar4 = *piVar7;
        piVar7[-2] = iVar3;
        piVar7[1] = 0;
        pvVar1 = TlsGetValue(DAT_01f8fc4c);
        iVar4 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),iVar4 * 8);
        piVar7[-1] = iVar4;
        FUN_01015e80(iVar4,*(undefined4 *)((int)piVar7 + iVar6 + -4),*piVar7 * 8);
        iVar4 = 0;
        if (0 < *piVar7) {
          do {
            uVar5 = FUN_01016080(*(undefined4 *)(piVar7[-1] + 4 + iVar4 * 8));
            *(undefined4 *)(piVar7[-1] + 4 + iVar4 * 8) = uVar5;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *piVar7);
        }
        piVar7 = piVar7 + 5;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return iVar2;
  }
  return 0;
}

// 0105DA20  FUN_0105da20  size=128  [run]
undefined4 FUN_0105da20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_010095e0();
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    while (*(int *)(param_2 + iVar1 * 4) < 0) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
    }
    FUN_010095f0(iVar1);
    iVar2 = FUN_01016360();
    iVar2 = iVar2 + *(int *)(param_2 + iVar1 * 4);
    if (iVar2 != 0) {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      uVar4 = FUN_01005cb0(*(undefined4 *)((int)pvVar3 + 0x2c),iVar2);
      FUN_01015e80(uVar4,param_2,iVar2);
      return uVar4;
    }
  }
  return 0;
}

// 0105DAA0  FUN_0105daa0  size=191  [run]
void FUN_0105daa0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  
  if (0 < param_2) {
    piVar5 = (int *)(param_1 + 8);
    do {
      iVar1 = piVar5[-1];
      iVar6 = 0;
      if (0 < *piVar5) {
        puVar4 = (undefined4 *)(iVar1 + 4);
        do {
          uVar2 = *puVar4;
          pvVar3 = TlsGetValue(DAT_01f8fc4c);
          FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),uVar2);
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar6 < *piVar5);
      }
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),iVar1);
      iVar1 = piVar5[-2];
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),iVar1);
      piVar5 = piVar5 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),param_1);
  return;
}

// 0105DB60  FUN_0105db60  size=141  [run]
void FUN_0105db60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char local_5;
  
  FUN_010e6cb0();
  local_18 = 0;
  local_14 = 0;
  local_10 = 0xffffffff;
  uVar1 = FUN_010253c0();
  FUN_01025890(&local_5,uVar1);
  while (local_5 != '\0') {
    uVar2 = FUN_01025400(uVar1);
    FUN_010e71e0(uVar2,&local_18,1);
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890(&local_5,uVar1);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 0105DBF0  FUN_0105dbf0  size=103  [run]
void FUN_0105dbf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1[2];
  iVar3 = 0;
  if (-1 < iVar1) {
    piVar2 = (int *)*param_1;
    do {
      if (*piVar2 != -1) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 <= iVar1);
  }
  if (iVar3 <= iVar1) {
    do {
      FUN_0105d8f0(*(undefined4 *)(*param_1 + iVar3 * 8),*(undefined4 *)(*param_1 + 4 + iVar3 * 8));
      iVar1 = param_1[2];
      iVar3 = iVar3 + 1;
      if (iVar3 <= iVar1) {
        piVar2 = (int *)(*param_1 + iVar3 * 8);
        do {
          if (*piVar2 != -1) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 <= iVar1);
      }
    } while (iVar3 <= iVar1);
  }
  return;
}

// 0105DC60  thunk_FUN_0105ee20  size=5  [run]
uint __fastcall thunk_FUN_0105ee20(int param_1)

{
  return *(uint *)(param_1 + 0x10) & 0x7fffffff;
}

// 0105DC70  FUN_0105dc70  size=165  [run]
void __thiscall FUN_0105dc70(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  int *piVar4;
  
  if (0 < param_3) {
    piVar4 = (int *)(param_2 + 8);
    do {
      iVar1 = *piVar4;
      if (((iVar1 != 0) && (iVar2 = FUN_01010120(iVar1), iVar2 <= *(int *)(param_4 + 8))) &&
         (iVar2 = FUN_01010160(iVar1,0), iVar2 != 0)) {
        FUN_0105daa0(iVar1,1);
        FUN_010100a0(&PTR_vftable_018e9b94,iVar1,0);
      }
      iVar1 = piVar4[-2];
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),iVar1);
      piVar4 = piVar4 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),param_2,param_1);
  return;
}

// 0105DD20  FUN_0105dd20  size=253  [run]
void FUN_0105dd20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  undefined1 local_c [8];
  
  FUN_0143ea20(param_1,&DAT_01f9050c);
  FUN_0143e7c0(local_c,"declaredEnums");
  puVar2 = (undefined4 *)FUN_0143e9a0(0);
  FUN_0105daa0(*puVar2,puVar2[1]);
  FUN_0143e7c0(local_c,"declaredMembers");
  puVar2 = (undefined4 *)FUN_0143e9a0(0);
  FUN_0105dc70(*puVar2,puVar2[1],param_2);
  FUN_0143e7c0(local_c,"defaults");
  puVar2 = (undefined4 *)FUN_0143e850(0);
  uVar1 = *puVar2;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
  FUN_0143e7c0(local_c,&DAT_0164d4cc);
  puVar2 = (undefined4 *)FUN_0143e860(0);
  uVar1 = *puVar2;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),param_1);
  return;
}

// 0105DE20  FUN_0105de20  size=87  [run]
void __fastcall FUN_0105de20(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105DE80  FUN_0105de80  size=90  [run]
void __thiscall FUN_0105de80(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_3;
  iVar1 = *param_3;
  if ((iVar1 != 0) && (iVar3 = FUN_0105ea30(iVar1), iVar3 != -1)) {
    do {
      if (*(int **)(*param_1 + iVar3 * 8) == piVar2) {
        if (param_2 == iVar1) {
          return;
        }
        FUN_0105ee30(iVar1,iVar3);
        break;
      }
      iVar3 = *(int *)(*param_1 + 4 + iVar3 * 8);
    } while (iVar3 != -1);
  }
  if (param_2 != 0) {
    FUN_0105f0d0(param_2,&param_3);
  }
  *piVar2 = param_2;
  return;
}

// 0105DEE0  FUN_0105dee0  size=389  [run]
int FUN_0105dee0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = FUN_01005cb0(*(undefined4 *)((int)pvVar3 + 0x2c),param_2 * 0x18);
  FUN_01015e80(iVar4,param_1,param_2 * 0x18);
  iVar2 = param_6;
  if (0 < param_2) {
    piVar8 = (int *)(iVar4 + 8);
    param_1 = param_2;
    do {
      iVar5 = FUN_01016080(piVar8[-2]);
      piVar1 = piVar8 + -1;
      piVar8[-2] = iVar5;
      iVar5 = 0;
      piVar8[3] = 0;
      if (piVar8[-1] == 0) {
        if (*piVar8 != 0) {
          iVar7 = param_3;
          if (0 < param_5) {
            do {
              if (*piVar8 == iVar7) {
                iVar5 = param_4 + iVar5 * 0x14;
                *piVar8 = iVar5;
                FUN_010100a0(&PTR_vftable_018e9b94,iVar5,0);
                break;
              }
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + 0x14;
            } while (iVar5 < param_5);
          }
          iVar5 = FUN_01010120(*piVar8);
          if (*(int *)(iVar2 + 8) < iVar5) {
            iVar5 = FUN_01010120(*piVar8);
            if (iVar5 < 0) {
              iVar7 = FUN_010101b0(*piVar8,&param_6);
              iVar5 = 0;
              if (iVar7 == 0) {
                iVar5 = param_6;
              }
            }
            else {
              iVar5 = FUN_0105d930(*piVar8,1);
              FUN_010100a0(&PTR_vftable_018e9b94,iVar5,1);
              FUN_010100a0(&PTR_vftable_018e9b94,*piVar8,iVar5);
            }
            *piVar8 = iVar5;
          }
        }
      }
      else {
        pbVar6 = (byte *)FUN_010099b0();
        if ((*pbVar6 & 1) == 0) {
          FUN_0105de80(*piVar1,piVar1);
        }
        else {
          *piVar1 = 0;
        }
      }
      piVar8 = piVar8 + 6;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return iVar4;
}

// 0105E070  FUN_0105e070  size=32  [run]
void __fastcall FUN_0105e070(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  return;
}

// 0105E090  FUN_0105e090  size=532  [run]
int __thiscall FUN_0105e090(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_1[1];
  iVar3 = iVar1 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  iVar3 = param_1[1] * 0x10 + *param_1;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  param_1[1] = param_1[1] + 1;
  piVar11 = (int *)(iVar1 * 0x10 + *param_1);
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = FUN_01005cb0(*(undefined4 *)((int)pvVar4 + 0x2c),0x30);
  *piVar11 = iVar3;
  iVar3 = FUN_010093b0();
  if (iVar3 != 0) {
    FUN_0143ea20(*piVar11,&DAT_01f9050c);
    FUN_0143e7c0(local_1c,"parent");
    uVar5 = FUN_0143e840();
    uVar6 = FUN_010093b0(uVar5);
    FUN_0105de80(uVar6,uVar5);
  }
  FUN_0143ea20(param_2,&DAT_01f9050c);
  if (param_3 == 0) {
    param_3 = FUN_010093a0();
  }
  local_8 = FUN_01016080(param_3);
  FUN_0143e7c0(local_24,"declaredEnums");
  puVar7 = (undefined4 *)FUN_0143e9a0(0);
  uVar5 = FUN_0105d930(*puVar7,puVar7[1]);
  FUN_0143e7c0(local_24,"declaredMembers");
  local_10 = (undefined4 *)FUN_0143e9a0(0);
  local_18 = FUN_0105dee0(*local_10,local_10[1],*puVar7,uVar5,puVar7[1],piVar11 + 1,param_4);
  FUN_0143e7c0(local_24,"defaults");
  puVar8 = (undefined4 *)FUN_0143e850(0);
  local_c = FUN_0105da20(param_2,*puVar8);
  if (*piVar11 != 0) {
    FUN_0143e7c0(local_24,"flags");
    FUN_0143e7c0(local_24,"numImplementedInterfaces");
    puVar8 = (undefined4 *)FUN_0143e8c0(0);
    puVar9 = (undefined4 *)FUN_0143e8b0(0);
    uVar6 = *puVar8;
    uVar14 = *puVar9;
    uVar20 = 0;
    uVar19 = 0;
    uVar17 = local_10[1];
    uVar15 = puVar7[1];
    uVar13 = 0;
    uVar12 = 0;
    uVar16 = local_18;
    uVar18 = local_c;
    uVar10 = FUN_010093b0(0,0,uVar14,uVar5,uVar15,local_18,uVar17,local_c,0,uVar6,0);
    FUN_010099d0(local_8,uVar10,uVar12,uVar13,uVar14,uVar5,uVar15,uVar16,uVar17,uVar18,uVar19,uVar6,
                 uVar20);
    return *piVar11;
  }
  return 0;
}

// 0105E2B0  FUN_0105e2b0  size=472  [run]
undefined4 FUN_0105e2b0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_30 [12];
  int local_24;
  int local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0105e070();
  uVar1 = FUN_010093a0();
  uVar2 = FUN_010093a0();
  uVar1 = FUN_01025be0(uVar2,uVar1);
  uVar1 = FUN_0105e090(param_1,uVar1,local_30);
  uVar2 = FUN_010093a0();
  FUN_01025470(uVar2,uVar1);
  iVar3 = thunk_FUN_0105ee20();
  if (0 < iVar3) {
    iVar3 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0xffffffff;
    if (-1 < local_1c) {
      do {
        if (*(int *)(local_24 + iVar3 * 8) != -1) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= local_1c);
    }
    if (iVar3 <= local_1c) {
      do {
        uVar2 = *(undefined4 *)(local_24 + iVar3 * 8);
        uVar4 = FUN_010093a0();
        uVar5 = FUN_010093a0();
        uVar4 = FUN_01025be0(uVar5,uVar4);
        iVar6 = (**(code **)(*param_2 + 0x2c))(uVar4);
        if ((iVar6 != 0) || (iVar6 = FUN_01025be0(uVar4,0), iVar6 != 0)) {
          FUN_010100a0(&PTR_vftable_018e9b94,uVar2,iVar6);
        }
        do {
          iVar3 = iVar3 + 1;
          if (local_1c < iVar3) break;
        } while (*(int *)(local_24 + iVar3 * 8) == -1);
      } while (iVar3 <= local_1c);
    }
    FUN_0105dbf0(&local_14);
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  iVar3 = 0;
  iVar6 = thunk_FUN_0105ee20();
  if (0 < iVar6) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0xffffffff;
    if (-1 < local_1c) {
      do {
        if (*(int *)(local_24 + iVar3 * 8) != -1) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= local_1c);
    }
    if (iVar3 <= local_1c) {
      do {
        uVar2 = *(undefined4 *)(local_24 + iVar3 * 8);
        uVar4 = FUN_0105e2b0(uVar2,param_2,param_3,param_4);
        FUN_010100a0(&PTR_vftable_018e9b94,uVar2,uVar4);
        do {
          iVar3 = iVar3 + 1;
          if (local_1c < iVar3) break;
        } while (*(int *)(local_24 + iVar3 * 8) == -1);
      } while (iVar3 <= local_1c);
    }
    FUN_0105dbf0(&local_14);
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  FUN_0105de20();
  return uVar1;
}

// 0105E490  hkBindingClassNameRegistry::vf10  size=149  [run]
int __thiscall hkBindingClassNameRegistry::vf10(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined1 local_14 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_2);
  if ((iVar1 == 0) && (param_1[7] != 0)) {
    uVar2 = FUN_0105d7f0(param_2);
    iVar1 = hkChainedClassNameRegistry::vf10(uVar2);
    if (iVar1 != 0) {
      pbVar3 = (byte *)FUN_010099b0();
      if ((*pbVar3 & 1) == 0) {
        param_2 = param_2 & 0xffffff00;
        FUN_01025830(param_2);
        iVar1 = FUN_0105e2b0(iVar1,param_1,param_1 + 0xf,local_14);
        FUN_0105db60();
        (**(code **)(*param_1 + 0x28))(local_14);
        FUN_01025870();
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

// 0105E530  FUN_0105e530  size=23  [run]
void __fastcall FUN_0105e530(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  return;
}

// 0105E550  FUN_0105e550  size=145  [run]
void __fastcall FUN_0105e550(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1[1]) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FUN_0105dd20(*(undefined4 *)(*param_1 + iVar1),*param_1 + 4 + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < param_1[1]);
  }
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0105E5F0  hkBindingClassNameRegistry::hkBindingClassNameRegistry  size=162  [run]
undefined4 * __thiscall
hkBindingClassNameRegistry::hkBindingClassNameRegistry
          (undefined4 *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  hkDynamicClassNameRegistry::hkDynamicClassNameRegistry(param_3);
  *param_1 = vftable;
  FUN_0105e530();
  uVar1 = param_3 >> 8;
  param_3 = uVar1 << 8;
  FUN_01025830(param_3);
  param_3 = uVar1 << 8;
  FUN_01025830(param_3);
  if (param_2 == (int *)0x0) {
    return param_1;
  }
  iVar2 = *param_2;
  iVar4 = 0;
  piVar3 = param_2;
  if (iVar2 == 0) {
    return param_1;
  }
  do {
    FUN_01025470(iVar2,piVar3[1]);
    FUN_01025470(piVar3[1],*piVar3);
    iVar4 = iVar4 + 1;
    iVar2 = param_2[iVar4 * 2];
    piVar3 = param_2 + iVar4 * 2;
  } while (iVar2 != 0);
  return param_1;
}

// 0105E6A0  hkBindingClassNameRegistry::~hkBindingClassNameRegistry  size=41  [run]
void __fastcall hkBindingClassNameRegistry::~hkBindingClassNameRegistry(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_01025870();
  FUN_01025870();
  FUN_0105e550();
  hkBaseObject::hkBaseObject_11();
  return;
}

// 0105E6D0  FUN_0105e6d0  size=9  [run]
void FUN_0105e6d0(void)

{
  FUN_01010160();
  return;
}

// 0105E6F0  FUN_0105e6f0  size=9  [run]
void FUN_0105e6f0(void)

{
  FUN_010253e0();
  return;
}

// 0105E700  FUN_0105e700  size=9  [run]
void FUN_0105e700(void)

{
  FUN_01025400();
  return;
}

// 0105E710  FUN_0105e710  size=24  [run]
undefined4 FUN_0105e710(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 0105E730  FUN_0105e730  size=9  [run]
void FUN_0105e730(void)

{
  FUN_01025be0();
  return;
}

// 0105E740  FUN_0105e740  size=43  [run]
undefined4 FUN_0105e740(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_010101b0(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 0105E7A0  FUN_0105e7a0  size=15  [run]
int __thiscall FUN_0105e7a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105E7E0  FUN_0105e7e0  size=15  [run]
int __thiscall FUN_0105e7e0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 0105E800  FUN_0105e800  size=9  [run]
void FUN_0105e800(void)

{
  FUN_010101e0();
  return;
}

// 0105E810  FUN_0105e810  size=15  [run]
int __thiscall FUN_0105e810(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105E840  FUN_0105e840  size=28  [run]
void __thiscall FUN_0105e840(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0105E870  FUN_0105e870  size=25  [run]
void __thiscall FUN_0105e870(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 0105E8B0  FUN_0105e8b0  size=39  [run]
void FUN_0105e8b0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 0105E920  FUN_0105e920  size=25  [run]
void FUN_0105e920(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0105E940  FUN_0105e940  size=15  [run]
int __thiscall FUN_0105e940(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105E950  FUN_0105e950  size=16  [run]
undefined4 __thiscall FUN_0105e950(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0105E960  FUN_0105e960  size=15  [run]
undefined4 __thiscall FUN_0105e960(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 0105E970  FUN_0105e970  size=21  [run]
void __thiscall FUN_0105e970(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0105E9B0  FUN_0105e9b0  size=15  [run]
undefined4 __thiscall FUN_0105e9b0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 0105E9C0  FUN_0105e9c0  size=16  [run]
undefined4 __thiscall FUN_0105e9c0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0105E9D0  FUN_0105e9d0  size=21  [run]
void __thiscall FUN_0105e9d0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0105E9F0  FUN_0105e9f0  size=25  [run]
void FUN_0105e9f0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0105EA30  FUN_0105ea30  size=21  [run]
void FUN_0105ea30(undefined4 param_1)

{
  FUN_01010160(param_1,0xffffffff);
  return;
}

// 0105EA50  FUN_0105ea50  size=99  [run]
void __thiscall FUN_0105ea50(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = FUN_01010120(param_2);
  iVar1 = *(int *)(param_1[3] + 4 + iVar5 * 8);
  FUN_010101e0(iVar5);
  if (iVar1 != -1) {
    iVar2 = *param_1;
    iVar5 = iVar1 * 8;
    iVar3 = *(int *)(iVar5 + 4 + iVar2);
    iVar4 = iVar1;
    while (iVar3 != -1) {
      iVar4 = *(int *)(iVar2 + 4 + iVar5);
      iVar5 = iVar4 * 8;
      iVar3 = *(int *)(iVar2 + 4 + iVar4 * 8);
    }
    *(int *)(iVar2 + 4 + iVar4 * 8) = param_1[6];
    param_1[6] = iVar1;
  }
  return;
}

// 0105EAC0  FUN_0105eac0  size=40  [run]
void FUN_0105eac0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 0x14);
  return;
}

// 0105EAF0  FUN_0105eaf0  size=40  [run]
void FUN_0105eaf0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 8);
  return;
}

// 0105EB20  FUN_0105eb20  size=42  [run]
void FUN_0105eb20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 0x18);
  return;
}

// 0105EB50  FUN_0105eb50  size=39  [run]
void FUN_0105eb50(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 0x30);
  return;
}

// 0105EB80  FUN_0105eb80  size=33  [run]
void FUN_0105eb80(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 0105EBB0  FUN_0105ebb0  size=33  [run]
void FUN_0105ebb0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 0105EBE0  FUN_0105ebe0  size=33  [run]
void FUN_0105ebe0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 0105EC10  FUN_0105ec10  size=33  [run]
void FUN_0105ec10(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 0105EC50  FUN_0105ec50  size=52  [run]
undefined4 __thiscall FUN_0105ec50(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 0105ECA0  FUN_0105eca0  size=51  [run]
int __thiscall FUN_0105eca0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0105ED20  FUN_0105ed20  size=31  [run]
void __thiscall FUN_0105ed20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 0105ED60  FUN_0105ed60  size=36  [run]
void __thiscall FUN_0105ed60(int *param_1,int param_2)

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

// 0105EDB0  FUN_0105edb0  size=36  [run]
void __thiscall FUN_0105edb0(int *param_1,int param_2)

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

// 0105EE00  FUN_0105ee00  size=31  [run]
void __thiscall FUN_0105ee00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 0105EE20  FUN_0105ee20  size=9  [run]
uint __fastcall FUN_0105ee20(int param_1)

{
  return *(uint *)(param_1 + 0x10) & 0x7fffffff;
}

// 0105EE30  FUN_0105ee30  size=133  [run]
int __thiscall FUN_0105ee30(int *param_1,undefined4 param_2,int param_3)

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

// 0105EEC0  FUN_0105eec0  size=63  [run]
void __thiscall FUN_0105eec0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105EF00  FUN_0105ef00  size=46  [run]
int __fastcall FUN_0105ef00(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0105EF30  FUN_0105ef30  size=71  [run]
int __thiscall FUN_0105ef30(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 0105EFA0  FUN_0105efa0  size=63  [run]
void __fastcall FUN_0105efa0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105EFE0  FUN_0105efe0  size=62  [run]
uint __fastcall FUN_0105efe0(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if (uVar1 != 0xffffffff) {
    param_1[6] = *(int *)(*param_1 + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = param_1[1];
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  param_1[1] = param_1[1] + 1;
  return uVar1;
}

// 0105F020  FUN_0105f020  size=47  [run]
void FUN_0105f020(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0xc);
    do {
      if (puVar1 != (undefined4 *)0xc) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0xffffffff;
      }
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0105F050  FUN_0105f050  size=53  [run]
void FUN_0105f050(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  return;
}

// 0105F090  FUN_0105f090  size=63  [run]
void __fastcall FUN_0105f090(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105F0D0  FUN_0105f0d0  size=72  [run]
void __thiscall FUN_0105f0d0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_01010160(param_2,0xffffffff);
  iVar3 = FUN_0105efe0();
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 8);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,iVar3);
  return;
}

// 0105F120  FUN_0105f120  size=127  [run]
int __thiscall FUN_0105f120(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = iVar1 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  if (0 < param_3) {
    puVar3 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 0xc);
    iVar4 = param_3;
    do {
      if (puVar3 != (undefined4 *)0xc) {
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0xffffffff;
      }
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar1 * 0x10 + *param_1;
}

// 0105F1F0  FUN_0105f1f0  size=87  [run]
void __fastcall FUN_0105f1f0(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105F270  FUN_0105f270  size=127  [run]
int __thiscall FUN_0105f270(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = iVar1 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  if (0 < param_2) {
    puVar3 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 0xc);
    iVar4 = param_2;
    do {
      if (puVar3 != (undefined4 *)0xc) {
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0xffffffff;
      }
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar1 * 0x10 + *param_1;
}

// 0105F2F0  FUN_0105f2f0  size=108  [run]
void __thiscall FUN_0105f2f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105F370  FUN_0105f370  size=107  [run]
void __fastcall FUN_0105f370(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105F3F0  FUN_0105f3f0  size=107  [run]
void __fastcall FUN_0105f3f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105F470  FUN_0105f470  size=38  [run]
void FUN_0105f470(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0105F4A0  hkBindingClassNameRegistry::vf00  size=52  [run]
int __thiscall hkBindingClassNameRegistry::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkBindingClassNameRegistry();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105F4E0  FUN_0105f4e0  size=9  [run]
void FUN_0105f4e0(void)

{
  FUN_01010c10();
  return;
}

// 0105F4F0  FUN_0105f4f0  size=15  [run]
void __fastcall FUN_0105f4f0(int param_1)

{
  FUN_01010160(*(undefined4 *)(param_1 + 0x34),0);
  return;
}

// 0105F500  hkPackfileObjectUpdateTracker::vf20  size=12  [run]
void hkPackfileObjectUpdateTracker::vf20(void)

{
  FUN_01010c10();
  return;
}

// 0105F510  FUN_0105f510  size=52  [run]
void __thiscall FUN_0105f510(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xd;
  *piVar1 = param_2;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,param_3);
  (**(code **)(*param_1 + 0x14))(*piVar1,piVar1);
  return;
}

// 0105F550  _anon_8D865E27::hkContentsUpdateTracker::vf0C  size=60  [run]
void __thiscall _anon_8D865E27::hkContentsUpdateTracker::vf0C(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(uint *)(iVar1 + 0x38) == (*(uint *)(iVar1 + 0x3c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar1 + 0x34),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x38) * 4) = param_2;
  *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1;
  return;
}

// 0105F590  hkXmlPackfileUpdateTracker::vf1C  size=28  [run]
void hkXmlPackfileUpdateTracker::vf1C(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0105F5B0  _anon_8D865E27::hkContentsUpdateTracker::vf10  size=96  [run]
void __thiscall
_anon_8D865E27::hkContentsUpdateTracker::vf10
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(uint *)(iVar2 + 0x44) == (*(uint *)(iVar2 + 0x48) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 0x40),0xc);
  }
  puVar1 = (undefined8 *)(*(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x44) * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_3,param_2);
    *(undefined4 *)(puVar1 + 1) = param_4;
  }
  *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
  return;
}

// 0105F610  hkBaseObject::hkBaseObject_53  size=123  [run]
void __fastcall hkBaseObject::hkBaseObject_53(undefined4 *param_1)

{
  *param_1 = hkPackfileObjectUpdateTracker::vftable;
  FUN_010060a0();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0105F690  hkXmlPackfileUpdateTracker::vf14  size=101  [run]
void __thiscall hkXmlPackfileUpdateTracker::vf14(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_3;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    iVar3 = FUN_0105a350(iVar1);
    if (iVar3 != -1) {
      do {
        if (*(int **)(*(int *)(param_1 + 0xc) + iVar3 * 8) == piVar2) {
          if (param_2 == iVar1) {
            return;
          }
          FUN_0105a540(iVar1,iVar3);
          break;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4 + iVar3 * 8);
      } while (iVar3 != -1);
    }
  }
  if (param_2 != 0) {
    FUN_0105a7a0(param_2,&param_3);
  }
  *piVar2 = param_2;
  return;
}

// 0105F700  hkPackfileObjectUpdateTracker::vf18  size=226  [run]
void __thiscall
hkPackfileObjectUpdateTracker::vf18(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_c;
  int local_8;
  
  iVar1 = param_3;
  iVar2 = FUN_0105a350(param_2);
  local_8 = iVar2;
  if (param_3 == 0) {
    param_3 = -1;
  }
  else {
    param_3 = FUN_0105a350(param_3);
  }
  for (; iVar2 != -1; iVar2 = *(int *)(param_1[3] + 4 + iVar2 * 8)) {
    local_c = *(int **)(param_1[3] + iVar2 * 8);
    *local_c = iVar1;
    if (param_3 != -1) {
      FUN_0105a7a0(iVar1,&local_c);
    }
  }
  if ((param_3 == -1) && (iVar1 != 0)) {
    if (local_8 != -1) {
      FUN_0105f8e0(param_2,iVar1);
    }
  }
  else {
    FUN_0105f870(param_2);
  }
  iVar2 = param_1[2];
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0x50)) {
    do {
      if (*(int *)(*(int *)(iVar2 + 0x4c) + 4 + iVar4 * 8) == param_2) {
        *(int *)(*(int *)(iVar2 + 0x4c) + 4 + iVar4 * 8) = iVar1;
      }
      iVar2 = param_1[2];
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0x50));
  }
  (**(code **)(*param_1 + 0x20))(param_2);
  if (param_4 != 0) {
    iVar2 = *param_1;
    uVar3 = FUN_010093a0();
    (**(code **)(iVar2 + 0x1c))(iVar1,uVar3);
  }
  return;
}

// 0105F7F0  hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker  size=84  [run]
undefined4 * __thiscall
hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = param_2;
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  FUN_01006000();
  return param_1;
}

// 0105F870  FUN_0105f870  size=99  [run]
void __thiscall FUN_0105f870(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = FUN_01010120(param_2);
  iVar1 = *(int *)(param_1[3] + 4 + iVar5 * 8);
  FUN_010101e0(iVar5);
  if (iVar1 != -1) {
    iVar2 = *param_1;
    iVar5 = iVar1 * 8;
    iVar3 = *(int *)(iVar5 + 4 + iVar2);
    iVar4 = iVar1;
    while (iVar3 != -1) {
      iVar4 = *(int *)(iVar2 + 4 + iVar5);
      iVar5 = iVar4 * 8;
      iVar3 = *(int *)(iVar2 + 4 + iVar4 * 8);
    }
    *(int *)(iVar2 + 4 + iVar4 * 8) = param_1[6];
    param_1[6] = iVar1;
  }
  return;
}

// 0105F8E0  FUN_0105f8e0  size=56  [run]
void __thiscall FUN_0105f8e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_01010120(param_2);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + iVar2 * 8);
  FUN_010101e0(iVar2);
  FUN_010100a0(&PTR_vftable_018e9b94,param_3,uVar1);
  return;
}

// 0105F940  hkPackfileObjectUpdateTracker::vf00  size=52  [run]
int __thiscall hkPackfileObjectUpdateTracker::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_53();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105F980  FUN_0105f980  size=25  [run]
void FUN_0105f980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0143f070(param_1,param_4,param_2);
  return;
}

// 0105F9A0  hkPackfileReader::vf28  size=4  [run]
undefined4 __fastcall hkPackfileReader::vf28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 0105F9B0  FUN_0105f9b0  size=32  [run]
bool __fastcall FUN_0105f9b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_010500f0();
  iVar2 = FUN_01015b90(*(undefined4 *)(param_1 + 0x14),uVar1);
  return -1 < iVar2;
}

// 0105F9D0  hkPackfileReader::vf14  size=38  [run]
void __thiscall hkPackfileReader::vf14(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*DAT_0209b610 + 0xc))();
  (**(code **)(*param_1 + 0x10))(param_2,uVar1);
  return;
}

