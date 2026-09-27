// src/managers/phasereadmanager/PhaseReadManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D445E0..00D58370, 19 functions

#include "types.h"

// 00D445E0  FUN_00d445e0  size=59  [callgraph]
void __fastcall FUN_00d445e0(int param_1)

{
  if ((*(int *)(param_1 + 0xc) == -1) && (*(int *)(param_1 + 0x10) == -1)) {
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 6;
  return;
}

// 00D44620  FUN_00d44620  size=45  [callgraph]
void __fastcall FUN_00d44620(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
  }
  *(uint *)(param_1 + 8) = (*(int *)(param_1 + 0x10) != -1) + 1;
  return;
}

// 00D44650  FUN_00d44650  size=30  [callgraph]
void __fastcall FUN_00d44650(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 8) = 8;
  return;
}

// 00D446A0  PhaseReadManagerImplement::vf1C  size=20  [class]
undefined4 __fastcall PhaseReadManagerImplement::vf1C(int param_1)

{
  if ((*(int *)(param_1 + 8) != 2) && (*(int *)(param_1 + 8) != 3)) {
    return 0;
  }
  return 1;
}

// 00D44780  PhaseReadManagerImplement::vf24  size=157  [class]
void __fastcall PhaseReadManagerImplement::vf24(int param_1)

{
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    FUN_009c92f0(" Reader :None\n");
    return;
  case 1:
    FUN_009c92f0(" Reader :StayNoData\n");
    return;
  case 2:
    FUN_009c92f0(" Reader :ReadStart\n");
    return;
  case 3:
    FUN_009c92f0(" Reader :ReadWait\n");
    return;
  case 4:
    FUN_009c92f0(" Reader :StayData\n");
    return;
  case 5:
    FUN_009c92f0(" Reader :ReleaseStart\n");
    return;
  case 6:
    FUN_009c92f0(" Reader :ReleaseWait\n");
    return;
  case 7:
    FUN_009c92f0(" Reader :ReadCancelStart\n");
    return;
  case 8:
    FUN_009c92f0(" Reader :ReadCancelWait\n");
    return;
  default:
    FUN_009c92f0(" Reader :Unknown\n");
    return;
  }
}

// 00D4D4B0  PhaseReadManagerImplement::PhaseReadManagerImplement_2  size=113  [class]
undefined4 * __fastcall PhaseReadManagerImplement::PhaseReadManagerImplement_2(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  *param_1 = vftable;
  Hw::cHeapPhysical::cHeapPhysical();
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  pcVar1 = *(code **)(param_1[10] + 0x44);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[0x126] = 0;
  param_1[2] = 0;
  iVar2 = (*pcVar1)(0x180000,&DAT_01b7bcf0,"Phase");
  if (iVar2 == 0) {
    param_1[2] = 0;
    FUN_00dd5650(&DAT_016bc9b0);
    return param_1;
  }
  param_1[2] = 1;
  return param_1;
}

// 00D4D530  PhaseReadManagerImplement::vf04  size=4  [class]
undefined4 __fastcall PhaseReadManagerImplement::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00D4D540  PhaseReadManagerImplement::vf20  size=7  [class]
undefined4 __fastcall PhaseReadManagerImplement::vf20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x498);
}

// 00D4D550  PhaseReadManagerImplement::vf18  size=10  [class]
uint __fastcall PhaseReadManagerImplement::vf18(int param_1)

{
  return *(uint *)(param_1 + 4) >> 3 & 1;
}

// 00D4D5D0  PhaseReadManagerImplement::vf28  size=30  [class]
undefined4 __thiscall PhaseReadManagerImplement::vf28(undefined4 param_1,byte param_2)

{
  PhaseReadManager::PhaseReadManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D4D5F0  PhaseReadManagerImplement::vf08  size=159  [class]
undefined4 __thiscall
PhaseReadManagerImplement::vf08
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char local_14 [20];
  
  if ((*(int *)(param_1 + 8) != 1) && (*(int *)(param_1 + 8) != 4)) {
    return 0;
  }
  _sprintf_s(local_14,0x14,"ph%x/p%03x.dat",param_2 >> 8 & 0xf,param_2);
  iVar1 = FUN_00dec390(local_14);
  if (iVar1 != 0) {
    uVar2 = FUN_00deb980(local_14);
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
    if (uVar2 < uVar3) {
      if (*(int *)(param_1 + 0xc) != param_2) {
        *(int *)(param_1 + 0x10) = param_2;
        *(undefined4 *)(param_1 + 0x18) = param_3;
        *(undefined4 *)(param_1 + 0x1c) = param_4;
        *(undefined4 *)(param_1 + 0x20) = param_5;
      }
      return 1;
    }
  }
  return 0;
}

// 00D4D690  PhaseReadManagerImplement::vf10  size=39  [class]
void __fastcall PhaseReadManagerImplement::vf10(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d4d6a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 != 0) {
    param_1[1] = param_1[1] | 4;
  }
  return;
}

// 00D4D6C0  PhaseReadManagerImplement::vf0C  size=5  [class]
void __fastcall PhaseReadManagerImplement::vf0C(int param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  return;
}

// 00D4D6F0  FUN_00d4d6f0  size=98  [between]
void __fastcall FUN_00d4d6f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_14 [20];
  
  *(undefined4 *)(param_1 + 8) = 6;
  _sprintf_s(local_14,0x14,"ph%x/p%03x.dat",*(int *)(param_1 + 0x10) >> 8 & 0xf,
             *(int *)(param_1 + 0x10));
  iVar1 = FUN_00dec390(local_14);
  if (iVar1 != 0) {
    uVar2 = FUN_00e9e570(2,local_14,param_1 + 0x28,0,0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 8) = 3;
  return;
}

// 00D4D760  FUN_00d4d760  size=87  [between]
void __fastcall FUN_00d4d760(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 8) = 7;
    return;
  }
  iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x498) = uVar2;
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))();
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 4;
  }
  return;
}

// 00D4D7C0  FUN_00d4d7c0  size=69  [between]
void __fastcall FUN_00d4d7c0(int param_1)

{
  if ((*(int *)(param_1 + 0x10) == -1) && ((*(uint *)(param_1 + 4) & 4) == 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff9;
  if (*(int *)(param_1 + 0xc) == -1) {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
      (**(code **)(param_1 + 0x1c))();
    }
    *(undefined4 *)(param_1 + 8) = 5;
    return;
  }
  return;
}

// 00D4D830  PhaseReadManagerImplement::vf14  size=9  [class]
uint __fastcall PhaseReadManagerImplement::vf14(int param_1)

{
  return *(uint *)(param_1 + 4) >> 1 & 1;
}

// 00D58290  PhaseReadManagerImplement::vf00  size=128  [class]
void __fastcall PhaseReadManagerImplement::vf00(int param_1)

{
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    break;
  case 2:
    FUN_00d4d6f0();
    return;
  case 3:
    FUN_00d4d760();
    return;
  case 4:
    FUN_00d4d7c0();
    return;
  case 5:
    FUN_00d445e0();
    return;
  case 6:
    FUN_00d44620();
    return;
  case 7:
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00e9d6a0(*(int *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 8) = 8;
    return;
  case 8:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 1;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    *(undefined4 *)(param_1 + 8) = 2;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  return;
}

// 00D58370  PhaseReadManagerImplement::PhaseReadManagerImplement  size=1603  [class]
undefined4 __fastcall PhaseReadManagerImplement::PhaseReadManagerImplement(undefined4 *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int unaff_EDI;
  undefined4 uVar14;
  int iVar15;
  
  param_1[0x84] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x22] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  param_1[0x2d] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0;
  param_1[0x38] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0xffffffff;
  param_1[0x3a] = 0;
  param_1[0x43] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  uVar3 = FUN_00de4500("PhaseInfo.bxm");
  FUN_00e062b0(uVar3,0);
  uVar4 = (**(code **)(param_1[0x6e] + 4))();
  iVar5 = (**(code **)(param_1[0x6e] + 0x18))(uVar4,"InfoList");
  iVar15 = iVar5;
  uVar3 = (**(code **)(param_1[0x6e] + 0x10))(iVar5);
  param_1[0x45] = uVar3;
  uVar3 = FUN_00d45130(&DAT_01b7bcf0,uVar3);
  param_1[0x44] = uVar3;
  uVar3 = 0;
  iVar6 = (**(code **)(param_1[0x6e] + 0x10))(iVar5);
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      unaff_EDI = (**(code **)(param_1[0x6e] + 0x14))(0,unaff_EDI);
      iVar7 = (**(code **)(param_1[0x6e] + 0x9c))(unaff_EDI,&DAT_0164d4cc);
      if (iVar7 != -1) {
        (**(code **)(param_1[0x6e] + 0xa4))(iVar7,&stack0xffffffd4,10);
      }
      if ((char)unaff_EDI == 'p') {
        pcVar8 = &stack0xffffffd4;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar8 - (int)&stack0xffffffd5 != 4) goto LAB_00d586ad;
        lVar9 = _strtol(&stack0xffffffd5,(char **)0x0,0x10);
        *(long *)(iVar6 + param_1[0x44]) = lVar9;
        *(uint *)(iVar6 + 0xc + param_1[0x44]) = uVar4;
        uVar10 = (**(code **)(param_1[0x6e] + 0x18))(uVar4,"SubPhase");
        uVar10 = (**(code **)(param_1[0x6e] + 0x10))(uVar10);
        *(undefined4 *)(iVar6 + 4 + param_1[0x44]) = uVar10;
        uVar4 = *(uint *)(iVar6 + 4 + param_1[0x44]);
        if (uVar4 == 0) {
          *(undefined4 *)(iVar6 + param_1[0x44] + 8) = 0;
        }
        else {
          iVar7 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 0x2c >> 0x20) != 0) |
                               (uint)((ulonglong)uVar4 * 0x2c),&DAT_01b7bcf0);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar13 = uVar4 - 1;
            if (-1 < iVar13) {
              puVar12 = (undefined4 *)(iVar7 + 0x24);
              do {
                *puVar12 = 0;
                puVar12 = puVar12 + 0xb;
                iVar13 = iVar13 + -1;
              } while (-1 < iVar13);
            }
          }
          *(int *)(iVar6 + 8 + param_1[0x44]) = iVar7;
          if (*(int *)(iVar6 + 8 + param_1[0x44]) == 0) {
            FUN_00dd5650("PhaseManager::startup SUBPHASE heap allocate error");
            return 0;
          }
        }
      }
      else {
LAB_00d586ad:
        FUN_00dd5650(&DAT_016bd384);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x10;
      iVar7 = (**(code **)(param_1[0x6e] + 0x10))(iVar15);
    } while (unaff_EDI < iVar7);
  }
  iVar15 = 0;
  if (0 < (int)param_1[0x45]) {
    iVar6 = 0;
    do {
      iVar13 = 0;
      uVar10 = (**(code **)(param_1[0x6e] + 0x18))
                         (*(undefined4 *)(iVar6 + 0xc + param_1[0x44]),"SubPhase",iVar5);
      uVar14 = 0;
      iVar7 = (**(code **)(param_1[0x6e] + 0x10))(uVar10);
      if (0 < iVar7) {
        do {
          iVar7 = unaff_EDI;
          uVar3 = (**(code **)(param_1[0x6e] + 0x14))(uVar3,unaff_EDI);
          (**(code **)(param_1[0x6e] + 0x74))
                    (uVar3,*(int *)(iVar6 + 8 + param_1[0x44]) + iVar13,0x20);
          uVar10 = FUN_00e03ea0(*(int *)(iVar6 + 8 + param_1[0x44]) + iVar13);
          *(undefined4 *)(*(int *)(iVar6 + 8 + param_1[0x44]) + 0x20 + iVar13) = uVar10;
          iVar11 = (**(code **)(param_1[0x6e] + 0x98))(uVar14);
          if (iVar11 == 0) {
            *(undefined4 *)(*(int *)(iVar6 + 8 + param_1[0x44]) + 0x24 + iVar13) = 0;
          }
          else {
            *(undefined4 *)(*(int *)(iVar6 + 8 + param_1[0x44]) + 0x24 + iVar13) = 1;
          }
          iVar13 = iVar13 + 0x2c;
          iVar7 = (**(code **)(param_1[0x6e] + 0x10))(iVar7);
        } while (unaff_EDI < iVar7);
      }
      iVar15 = iVar15 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar15 < (int)param_1[0x45]);
  }
  if (param_1[0x80] == 0) {
    iVar5 = FUN_00dd29b0(0x340,0x20,0,0);
    param_1[0x80] = iVar5;
    if (iVar5 == 0) {
      uVar3 = (**(code **)(DAT_01b7bcf0 + 0x18))();
      uVar3 = FUN_00dd2960(0x340,uVar3);
      FUN_00dd5650(&DAT_0163cadc,uVar3);
    }
    else {
      param_1[0x81] = 0x10;
      param_1[0x82] = 0;
      param_1[0x83] = 1;
    }
  }
  FUN_00a50390();
  puVar12 = (undefined4 *)FUN_00dd3500(0x4a0,&DAT_01b7bcf0);
  if (puVar12 == (undefined4 *)0x0) {
    DAT_01dc51c0 = (undefined4 *)0x0;
    param_1[1] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0x3f800000;
    param_1[0x8d] = 0;
    param_1[0x96] = 0;
    param_1[0x8c] = 0xffffffff;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    return 1;
  }
  *puVar12 = vftable;
  Hw::cHeapPhysical::cHeapPhysical();
  puVar12[3] = 0xffffffff;
  puVar12[4] = 0xffffffff;
  pcVar2 = *(code **)(puVar12[10] + 0x44);
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[1] = 0;
  puVar12[0x126] = 0;
  puVar12[2] = 0;
  iVar5 = (*pcVar2)(0x180000,&DAT_01b7bcf0,"Phase");
  if (iVar5 != 0) {
    puVar12[2] = 1;
    DAT_01dc51c0 = puVar12;
    return 0;
  }
  puVar12[2] = 0;
  FUN_00dd5650(&DAT_016bc9b0);
  DAT_01dc51c0 = puVar12;
  return 0;
}

