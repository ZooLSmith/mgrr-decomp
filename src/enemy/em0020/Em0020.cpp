// src/enemy/em0020/Em0020.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004161B0..00AB6990, 388 functions

#include "mgrr.h"
#include "Em0020.h"
#include "hkpAllCdPointCollector.h"
#include "hkpCdPointCollector.h"

// 004161B0  FUN_004161b0  size=29  [callgraph]
undefined4 __fastcall FUN_004161b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x360);
  if (((iVar1 != 1) && (iVar1 < 4)) && (iVar1 == 0)) {
    return 1;
  }
  return 0;
}

// 004168F0  FUN_004168f0  size=31  [callgraph]
void FUN_004168f0(uint param_1)

{
  (&DAT_01bea060)[param_1 >> 5] =
       (&DAT_01bea060)[param_1 >> 5] & ~(0x80000000U >> ((byte)param_1 & 0x1f));
  return;
}

// 00416910  FUN_00416910  size=33  [callgraph]
bool FUN_00416910(uint param_1)

{
  return (0x80000000U >> ((byte)param_1 & 0x1f) & (&DAT_01bea060)[param_1 >> 5]) != 0;
}

// 00416D50  FUN_00416d50  size=33  [callgraph]
bool FUN_00416d50(uint param_1)

{
  return (0x80000000U >> ((byte)param_1 & 0x1f) & (&DAT_01bea090)[param_1 >> 5]) != 0;
}

// 00416DB0  FUN_00416db0  size=24  [callgraph]
undefined4 __fastcall FUN_00416db0(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x341c)) {
    return 1;
  }
  return 0;
}

// 00416E30  FUN_00416e30  size=150  [callgraph]
void __thiscall
FUN_00416e30(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,uint param_6)

{
  *param_1 = *param_1 & 0xfffffffe | 2;
  param_1[0x48] = *param_2;
  param_1[0x49] = param_2[1];
  param_1[0x4a] = param_2[2];
  param_1[0x4b] = param_2[3];
  param_1[0x4c] = *param_3;
  param_1[0x4d] = param_3[1];
  param_1[0x4e] = param_3[2];
  param_1[0x4f] = param_3[3];
  param_1[0x50] = *param_4;
  param_1[0x51] = param_4[1];
  param_1[0x52] = param_4[2];
  param_1[0x53] = param_4[3];
  param_1[0x58] = param_5;
  param_1[0x59] = param_6;
  return;
}

// 00416F50  FUN_00416f50  size=394  [callgraph]
void __fastcall FUN_00416f50(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xf70) = 0;
  *(undefined4 *)(param_1 + 0xf74) = 0;
  *(undefined4 *)(param_1 + 0xf78) = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    piVar6 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar4 = *(byte **)(*piVar6 + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pcVar2 = "_dam1_CBODY";
        do {
          bVar1 = *pcVar2;
          bVar7 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00416fb0:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00416fb5;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar7 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00416fb0;
          pcVar2 = pcVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00416fb5:
        if (iVar3 == 0) {
          if ((iVar5 != -1) && (iVar5 = iVar5 * 0x70 + *(int *)(param_1 + 800), iVar5 != 0)) {
            *(int *)(param_1 + 0xf70) = iVar5;
            *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) & 0xfffffffe;
          }
          break;
        }
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x1c;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    piVar6 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar4 = *(byte **)(*piVar6 + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pcVar2 = "_dam1_LBODY";
        do {
          bVar1 = *pcVar2;
          bVar7 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00417026:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0041702b;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar7 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00417026;
          pcVar2 = pcVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0041702b:
        if (iVar3 == 0) {
          if ((iVar5 != -1) && (iVar5 = iVar5 * 0x70 + *(int *)(param_1 + 800), iVar5 != 0)) {
            *(int *)(param_1 + 0xf74) = iVar5;
            *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) & 0xfffffffe;
          }
          break;
        }
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x1c;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  iVar5 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
    return;
  }
  piVar6 = (int *)(*(int *)(param_1 + 800) + 0x60);
  do {
    pbVar4 = *(byte **)(*piVar6 + 0x40);
    if (pbVar4 != (byte *)0x0) {
      pcVar2 = "_dam1_RBODY";
      do {
        bVar1 = *pcVar2;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_004170a0:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_004170a5;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_004170a0;
        pcVar2 = pcVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004170a5:
      if (iVar3 == 0) {
        if (iVar5 == -1) {
          return;
        }
        iVar5 = iVar5 * 0x70 + *(int *)(param_1 + 800);
        if (iVar5 == 0) {
          return;
        }
        *(int *)(param_1 + 0xf78) = iVar5;
        *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) & 0xfffffffe;
        return;
      }
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 0x1c;
    if (*(short *)(param_1 + 0x324) <= iVar5) {
      return;
    }
  } while( true );
}

// 004170E0  FUN_004170e0  size=50  [callgraph]
void __fastcall FUN_004170e0(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00907640(param_1 + 0x119c,0,&local_20);
  return;
}

// 00417120  FUN_00417120  size=50  [callgraph]
void __fastcall FUN_00417120(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00907640(param_1 + 0x11a0,0,&local_20);
  return;
}

// 00417160  FUN_00417160  size=50  [callgraph]
void __fastcall FUN_00417160(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00907640(param_1 + 0x11a4,0,&local_20);
  return;
}

// 004171A0  FUN_004171a0  size=50  [callgraph]
void __fastcall FUN_004171a0(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00907640(param_1 + 0x11a8,0,&local_20);
  return;
}

// 004171E0  FUN_004171e0  size=24  [callgraph]
undefined4 __fastcall FUN_004171e0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x10e4);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

// 00417210  Em0020::vf184  size=34  [class]
int __thiscall Em0020::vf184(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return -1;
  }
  iVar1 = (**(code **)(*param_1 + 0x17c))();
  return (-(uint)(iVar1 != 0) & 6) - 1;
}

// 00417250  FUN_00417250  size=277  [between]
void __fastcall FUN_00417250(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  iVar2 = FUN_00ac45b0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00a7c8b0();
    local_20 = *puVar3;
    local_18 = puVar3[2];
    local_14 = puVar3[3];
    local_1c = (float)puVar3[1] + 1.2;
  }
  uVar1 = *(uint *)(param_1 + 0x1064);
  bVar4 = (DAT_01bea060 & 0x42000000) == 0 &&
          ((uVar1 & 0x10000000) == 0 &&
          ((uVar1 & 0x8000000) == 0 && ((uVar1 & 0x20000000) == 0 && (uVar1 & 0x2000000) == 0)));
  iVar2 = FUN_00a8c760(0x13);
  bVar5 = iVar2 == 0 && bVar4;
  bVar4 = iVar2 == 0 && bVar4;
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84780(&local_20,bVar4,bVar5,0,0,0x3f800000);
  switchD_0080dbae::default();
  FUN_00a84780(&local_20,bVar4,bVar5,0,0,0x3f800000);
  switchD_0080dbae::default();
  return;
}

// 00417370  FUN_00417370  size=227  [between]
void __fastcall FUN_00417370(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0xa84) != 0) &&
     ((*(int *)(param_1 + 0x618) != 0x70000 || (1 < *(int *)(param_1 + 0x61c))))) {
    iVar1 = FUN_00a959f0(0);
    iVar2 = FUN_00a957b0(0);
    iVar3 = FUN_00a959f0(0);
    iVar4 = FUN_00a957b0(0);
    if ((*(int *)(param_1 + 0x13c0) < iVar1) && (iVar1 < iVar2)) {
      *(int *)(param_1 + 0x13c8) = *(int *)(param_1 + 0x13c8) + (iVar1 - *(int *)(param_1 + 0x13c0))
      ;
      *(int *)(param_1 + 0x13c0) = iVar1;
    }
    if ((*(int *)(param_1 + 0x13c4) < iVar3) && (iVar3 < iVar4)) {
      *(int *)(param_1 + 0x13cc) = *(int *)(param_1 + 0x13cc) + (iVar3 - *(int *)(param_1 + 0x13c4))
      ;
      uVar5 = FUN_00a959f0(0);
      *(undefined4 *)(param_1 + 0x13c4) = uVar5;
    }
    if (*(float *)(param_1 + 0x11c8) == 1.0) {
      FUN_00a93020(0x3f800000,1,0);
      return;
    }
    FUN_00a93020(*(undefined4 *)(param_1 + 0x11c8),2,0);
  }
  return;
}

// 004174A0  FUN_004174a0  size=287  [between]
void __fastcall FUN_004174a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00aa4080(0x1b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 1;
      return;
    }
  default:
    return;
  }
}

// 004175D0  FUN_004175d0  size=95  [between]
void FUN_004175d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x24,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00417690  FUN_00417690  size=121  [between]
void FUN_00417690(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_009c6930();
    FUN_00aa4080(0x20,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00417710  FUN_00417710  size=433  [between]
void __fastcall FUN_00417710(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x2b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
    goto LAB_0041777f;
  case 1:
LAB_0041777f:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
    }
    break;
  case 2:
    FUN_00aa4080(0x26,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 2;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x2c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 5;
    goto LAB_0041784a;
  case 5:
LAB_0041784a:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 004178E0  FUN_004178e0  size=626  [between]
void __fastcall FUN_004178e0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x31,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x28,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43160000;
    param_1[0x187] = 3;
    goto LAB_004179c7;
  case 3:
LAB_004179c7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_004178f5_default;
  case 4:
    uVar2 = FUN_00a957b0(0);
    iVar3 = FUN_00a95540(0,uVar2);
    if (iVar3 == 0) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    else {
      param_1[0x187] = 5;
    }
    goto switchD_004178f5_default;
  case 5:
    FUN_00aa4080(0x32,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 6;
    goto LAB_00417a63;
  case 6:
LAB_00417a63:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_004178f5_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = 2;
  }
switchD_004178f5_default:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8cac0(), iVar3 < 5)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    param_1[0x23c] = (int)((float)param_1[0x23c] + 0.34906584);
    param_1[0x23d] = (int)((float)param_1[0x23d] + 0.34906584);
    param_1[0x23e] = (int)((float)param_1[0x23e] + 0.34906584);
    param_1[0x23f] = (int)((float)param_1[0x23f] + 0.34906584);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  fVar1 = (float)param_1[0x248];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00417B70  FUN_00417b70  size=607  [between]
void __fastcall FUN_00417b70(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x34,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x29,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43160000;
    param_1[0x187] = 3;
    goto switchD_00417b85_default;
  case 3:
    goto LAB_00417c5a;
  case 4:
    uVar2 = FUN_00a957b0(0);
    iVar3 = FUN_00a95540(0,uVar2);
    if (iVar3 != 0) {
      param_1[0x187] = 5;
      goto switchD_00417b85_default;
    }
LAB_00417c5a:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_00417b85_default;
  case 5:
    FUN_00aa4080(0x35,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 6;
    goto LAB_00417ce0;
  case 6:
LAB_00417ce0:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00417b85_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = 2;
  }
switchD_00417b85_default:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8cac0(), iVar3 < 5)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    param_1[0x23c] = (int)((float)param_1[0x23c] - 0.34906584);
    param_1[0x23d] = (int)((float)param_1[0x23d] - 0.34906584);
    param_1[0x23e] = (int)((float)param_1[0x23e] - 0.34906584);
    param_1[0x23f] = (int)((float)param_1[0x23f] - 0.34906584);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  fVar1 = (float)param_1[0x248];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00417DF0  FUN_00417df0  size=1  [between]
void FUN_00417df0(void)

{
  return;
}

// 00417E00  FUN_00417e00  size=481  [between]
void __fastcall FUN_00417e00(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 local_20 [4];
  float local_1c;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  if (param_1[0x187] != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar2 = FUN_00a959f0(0);
      iVar1 = FUN_00a7c8a0();
      if (uVar2 < 0x1a) {
        FUN_00a8ce90(&local_30,local_20);
        fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + local_1c);
        param_1[0x25] = (int)(float)fVar4;
        D3DXVec3TransformNormal(&local_30,&local_30,iVar1 + 0x10);
        local_30 = *(float *)(iVar1 + 0x40) + local_30;
        fStack_2c = *(float *)(iVar1 + 0x44) + fStack_2c;
        fStack_28 = *(float *)(iVar1 + 0x48) + fStack_28;
        param_1[0x16] = (int)fStack_28;
        param_1[0x14] = (int)local_30;
        param_1[0x15] = (int)fStack_2c;
        param_1[0x17] = iStack_24;
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
      }
      else if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
  }
  if (param_1[0x187] == 0) {
    uVar10 = 0x3f800000;
    uVar9 = 0xbf800000;
    uVar8 = 0;
    uVar7 = 0x3f800000;
    uVar6 = 0x3d088889;
    uVar5 = 0;
    uVar3 = FUN_00a81330(0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa4520(0x185,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x394))();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8eea0();
    if (iVar1 < 1) {
      FUN_00a8caf0(0xdb,0,0,0);
      return;
    }
    FUN_00da8810(0x41800000);
    FUN_00a8caf0(0xcd,0,0,0);
  }
  return;
}

// 00418000  FUN_00418000  size=54  [between]
void __thiscall FUN_00418000(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 0x108c) = 0;
    return;
  }
  iVar1 = FUN_00a8cab0();
  if (param_2 == iVar1) {
    *(int *)(param_1 + 0x108c) = *(int *)(param_1 + 0x108c) + 1;
  }
  return;
}

// 00418090  FUN_00418090  size=52  [between]
void __thiscall FUN_00418090(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10f0) = *param_2;
  *(undefined4 *)(param_1 + 0x10f4) = param_2[1];
  *(undefined4 *)(param_1 + 0x10f8) = param_2[2];
  *(undefined4 *)(param_1 + 0x10fc) = param_2[3];
  *(undefined4 *)(param_1 + 0x1100) = 0;
  return;
}

// 004180D0  FUN_004180d0  size=91  [between]
undefined4 FUN_004180d0(void)

{
  float fVar1;
  
  fVar1 = *(float *)(DAT_01beb8c0 + 0x1e4) * 57.29578;
  if ((fVar1 <= 150.0) && (-150.0 <= fVar1)) {
    if (30.0 <= fVar1) {
      return 0;
    }
    if (fVar1 <= -30.0) {
      return 0;
    }
  }
  return 1;
}

// 00418130  FUN_00418130  size=237  [between]
int __thiscall FUN_00418130(int param_1,int param_2)

{
  FUN_00a7c960(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  return param_1;
}

// 00418220  FUN_00418220  size=89  [between]
void __thiscall FUN_00418220(int param_1,float *param_2,float *param_3)

{
  if (*(float *)(param_1 + 0x910) * 0.49 *
      SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
           (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
           (param_2[2] - param_3[2]) * (param_2[2] - param_3[2])) * 0.08 < 0.4) {
    return;
  }
  return;
}

// 00418280  FUN_00418280  size=283  [between]
void __fastcall FUN_00418280(int param_1)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x1204) = 1;
  *(undefined4 *)(param_1 + 0x1414) = 0x43480000;
  *(undefined4 *)(param_1 + 0x1098) = 0;
  *(undefined4 *)(param_1 + 0x1480) = 0x40f33333;
  *(undefined4 *)(param_1 + 0x1214) = 0;
  *(undefined4 *)(param_1 + 0x1270) = 0;
  *(undefined4 *)(param_1 + 0x1274) = 0;
  *(undefined4 *)(param_1 + 0x1278) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x127c) = local_14;
  *(undefined4 *)(param_1 + 0x1280) = 0;
  *(undefined4 *)(param_1 + 0x1284) = 0;
  *(undefined4 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x128c) = local_14;
  *(undefined4 *)(param_1 + 0x1290) = 0;
  *(undefined4 *)(param_1 + 0x1294) = 0;
  *(undefined4 *)(param_1 + 0x1298) = 0;
  *(undefined4 *)(param_1 + 0x129c) = local_14;
  *(undefined4 *)(param_1 + 0x12a0) = 0;
  *(undefined4 *)(param_1 + 0x12a4) = 0;
  *(undefined4 *)(param_1 + 0x12a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12ac) = local_14;
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined4 *)(param_1 + 0x13c8) = 0;
  *(undefined4 *)(param_1 + 0x12b0) = 0x40000000;
  *(undefined4 *)(param_1 + 0x13d0) = 0;
  *(undefined4 *)(param_1 + 0x13e4) = 0;
  *(undefined4 *)(param_1 + 0x1228) = 0;
  *(undefined4 *)(param_1 + 0x11fc) = 0;
  *(undefined4 *)(param_1 + 0x123c) = 0;
  *(undefined4 *)(param_1 + 0x11f8) = 0;
  *(undefined4 *)(param_1 + 0x121c) = 0;
  *(undefined4 *)(param_1 + 0x1220) = 0;
  *(undefined4 *)(param_1 + 0x13ac) = 0;
  *(undefined4 *)(param_1 + 0x1208) = 0;
  *(undefined4 *)(param_1 + 0x120c) = 0;
  *(undefined4 *)(param_1 + 0x11f0) = 0;
  return;
}

// 004183C0  FUN_004183c0  size=44  [between]
undefined4 FUN_004183c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a9f760(0x105);
  if (iVar1 == 0) {
    iVar1 = FUN_00a9f760(0x103);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

// 004183F0  FUN_004183f0  size=275  [between]
undefined4 FUN_004183f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (((((iVar1 != 0x30000) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x30001)) &&
       (iVar1 = FUN_00a8cab0(), iVar1 != 0x30002)) &&
      (((iVar1 = FUN_00a8cab0(), iVar1 != 0x30003 && (iVar1 = FUN_00a8cab0(), iVar1 != 0x30004)) &&
       ((iVar1 = FUN_00a8cab0(), iVar1 != 0x30005 &&
        ((iVar1 = FUN_00a8cab0(), iVar1 != 0x30006 && (iVar1 = FUN_00a8cab0(), iVar1 != 0x30009)))))
       ))) && ((iVar1 = FUN_00a8cab0(), iVar1 != 0x3000c &&
               (((((iVar1 = FUN_00a8cab0(), iVar1 != 0x3001e &&
                   (iVar1 = FUN_00a8cab0(), iVar1 != 0x3001a)) &&
                  (iVar1 = FUN_00a8cab0(), iVar1 != 0x3001e)) &&
                 ((iVar1 = FUN_00a8cab0(), iVar1 != 0x30020 &&
                  (iVar1 = FUN_00a8cab0(), iVar1 != 0x30021)))) &&
                (iVar1 = FUN_00a8cab0(), iVar1 != 0x3001f)))))) {
    return 0;
  }
  iVar1 = FUN_00a959f0(0);
  if ((float)iVar1 <= 10.0) {
    return 0;
  }
  return 1;
}

// 00418510  FUN_00418510  size=62  [between]
undefined4 __fastcall FUN_00418510(int param_1)

{
  float fVar1;
  
  if (DAT_018b9174 - 0xa00U < 0x100) {
    fVar1 = *(float *)(param_1 + 0x14bc);
    if (*(int *)(param_1 + 0x1200) != 0) {
      fVar1 = *(float *)(param_1 + 0x14c0);
    }
    if (fVar1 < *(float *)(param_1 + 0x14cc) != (fVar1 == *(float *)(param_1 + 0x14cc))) {
      return 1;
    }
  }
  return 0;
}

// 004185B0  FUN_004185b0  size=115  [between]
void __fastcall FUN_004185b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a8ccb0(1);
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x11fc) = 1;
    FUN_00aa3f60(0xa2);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 != 2) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00418630  FUN_00418630  size=116  [between]
void FUN_00418630(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x87,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004186B0  FUN_004186b0  size=116  [between]
void FUN_004186b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x88,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00418730  FUN_00418730  size=116  [between]
void FUN_00418730(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x8a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004187B0  FUN_004187b0  size=116  [between]
void FUN_004187b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x8c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00418830  FUN_00418830  size=116  [between]
void FUN_00418830(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x169,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004188B0  FUN_004188b0  size=116  [between]
void FUN_004188b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x8f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00418930  FUN_00418930  size=116  [between]
void FUN_00418930(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x90,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004189B0  FUN_004189b0  size=141  [between]
void __fastcall FUN_004189b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x91,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) + 1.5707964;
    switchD_0080dbae::default();
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00418A50  FUN_00418a50  size=139  [between]
void __fastcall FUN_00418a50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x94,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x10c0) = 0;
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00418B00  FUN_00418b00  size=139  [between]
void __fastcall FUN_00418b00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x97,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x10c0) = 0;
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00418BB0  FUN_00418bb0  size=139  [between]
void __fastcall FUN_00418bb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x9a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
    *(undefined4 *)(param_1 + 0x10c0) = 0;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00418C60  FUN_00418c60  size=139  [between]
void __fastcall FUN_00418c60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x9d,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
    *(undefined4 *)(param_1 + 0x10c0) = 0;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00418D40  FUN_00418d40  size=145  [between]
void __fastcall FUN_00418d40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
    *(undefined4 *)(param_1 + 0x10c0) = 0;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00418E10  FUN_00418e10  size=145  [between]
void __fastcall FUN_00418e10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x10c0) = 0;
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00418EF0  FUN_00418ef0  size=636  [between]
void __fastcall FUN_00418ef0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x388))(0);
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 2:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(3);
      return;
    }
    break;
  case 4:
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) != 0)) {
      if (*(int *)(iVar1 + 0x1110) != 0) {
        FUN_00a8cb60(5);
        return;
      }
LAB_00418f9e:
      FUN_00a8cb60(9);
      return;
    }
    goto LAB_00418fb2;
  case 6:
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) != 0)) {
      if (*(int *)(iVar1 + 0x1110) != 0) {
        FUN_00a8cb60(0x15);
        return;
      }
      goto LAB_00418f9e;
    }
    goto LAB_0041914a;
  case 8:
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) != 0)) {
      FUN_00a8cb60(9);
      return;
    }
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) == 0)) {
      FUN_00a8cb60(0xf);
      return;
    }
    break;
  case 10:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (*(int *)(iVar1 + 0x10c0) == 0) {
        FUN_00a8cb60(0x13);
        return;
      }
      FUN_00a8cb60(0x11);
      return;
    }
    break;
  case 0xc:
  case 0xe:
  case 0x10:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
    FUN_00dc1270(0,0);
    (**(code **)(*param_1 + 0x30c))(100,0);
    goto LAB_004190cc;
  case 0x12:
  case 0x14:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
LAB_004190cc:
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
      return;
    }
    break;
  case 0x16:
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) != 0)) {
      FUN_00a8cb60(0x17);
      return;
    }
LAB_00418fb2:
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) == 0)) {
      FUN_00a8cb60(0xb);
      return;
    }
    break;
  case 0x18:
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) != 0)) {
      FUN_00a8cb60(7);
      return;
    }
LAB_0041914a:
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0x10c0) == 0)) {
      FUN_00a8cb60(0xd);
    }
  }
  return;
}

// 004191B0  FUN_004191b0  size=830  [between]
void __fastcall FUN_004191b0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar5 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    FUN_00a8ce90(&local_30,local_20);
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar5 + 0x94) + local_1c);
    param_1[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar5 + 0x10);
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    param_1[0x14] = (int)(*(float *)(iVar5 + 0x40) + local_30);
    param_1[0x15] = (int)(fVar1 + fStack_2c);
    param_1[0x16] = (int)(fVar2 + fStack_28);
    param_1[0x17] = iStack_24;
  }
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    goto switchD_00419270_default;
  case 1:
    FUN_00aa43e0(0x161,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(2);
    (**(code **)(*param_1 + 0x394))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x14:
  case 0x16:
  case 0x18:
    goto switchD_00419270_caseD_2;
  case 3:
    FUN_00aa43e0(0x162,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 4;
    break;
  case 5:
    FUN_00aa43e0(0x163,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 6;
    break;
  case 7:
    FUN_00aa43e0(0x165,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 8;
    break;
  case 9:
    FUN_00aa43e0(0x167,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 10;
    break;
  case 0xb:
    FUN_00aa43e0(0x164,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 0xc;
    break;
  case 0xd:
    FUN_00aa43e0(0x166,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 0xe;
    break;
  case 0xf:
    FUN_00aa43e0(0x168,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 0x10;
    break;
  case 0x11:
    FUN_00aa43e0(0x169,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0x12);
  case 0x12:
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar4 = FUN_00a959f0(0);
    if (0x31 < uVar4) {
      FUN_004168f0(6);
    }
    goto switchD_00419270_default;
  case 0x13:
    FUN_00aa43e0(0x16a,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 0x14;
    break;
  case 0x15:
    FUN_00aa43e0(0x16b,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 0x16;
    break;
  case 0x17:
    FUN_00aa43e0(0x16c,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar7 = 0x18;
    break;
  default:
    goto switchD_00419270_default;
  }
  FUN_00a8cb60(uVar7);
switchD_00419270_caseD_2:
  FUN_00b94790(0x3f800000,0x3f800000);
switchD_00419270_default:
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x10c4) != 0)) {
    FUN_00b7ab80(0x40000000,0x3dcccccd);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00dc1270(0,0);
  }
  return;
}

// 00419560  FUN_00419560  size=763  [between]
void __fastcall FUN_00419560(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x388))(0);
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar2 = FUN_00a8cac0();
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 2:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 3;
    break;
  default:
    goto switchD_004195d6_caseD_3;
  case 4:
    if (*(int *)(iVar1 + 0x13e0) == 0) goto LAB_004196d0;
    if (*(int *)(iVar1 + 0x10c0) == 0) goto LAB_00419611;
    uVar3 = 5;
    break;
  case 6:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 7;
    break;
  case 8:
  case 0x25:
  case 0x2d:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 9;
    break;
  case 10:
    if (*(int *)(iVar1 + 0x13d4) == 0) {
      if (*(int *)(iVar1 + 0x13e0) == 0) goto LAB_004196d0;
    }
    else if (*(int *)(iVar1 + 0x13e0) == 0) goto switchD_004195d6_caseD_3;
    if (*(int *)(iVar1 + 0x10c0) == 0) {
LAB_00419611:
      *(undefined4 *)(iVar1 + 0x13e0) = 0;
      (**(code **)(*param_1 + 0x388))(0);
      goto switchD_004195d6_caseD_3;
    }
    uVar3 = 0xb;
    break;
  case 0xc:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0xd;
    break;
  case 0xe:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0xf;
    break;
  case 0x10:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00a8cab0();
      if (iVar4 == 0x70014) {
        uVar3 = 0x11;
      }
      else if (iVar4 == 0x7001b) {
        uVar3 = 0x1e;
      }
      else {
        if (iVar4 != 0x7001f) goto LAB_004196d0;
        uVar3 = 0x26;
      }
      FUN_00a8cb60(uVar3);
    }
LAB_004196d0:
    iVar4 = FUN_00416910(6);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar1 + 0x13e0) = 0;
      (**(code **)(*param_1 + 0x388))(0);
    }
    goto switchD_004195d6_caseD_3;
  case 0x12:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x13;
    break;
  case 0x14:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x15;
    break;
  case 0x16:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x17;
    break;
  case 0x18:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x19;
    break;
  case 0x1a:
    if (*(int *)(iVar1 + 0x13e0) == 0) goto LAB_004196d0;
    if (*(int *)(iVar1 + 0x10c0) == 0) goto LAB_00419611;
    uVar3 = 0x1b;
    break;
  case 0x1b:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x1c;
    break;
  case 0x1d:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
    goto switchD_004195d6_caseD_3;
  case 0x1f:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x20;
    break;
  case 0x21:
    if (*(int *)(iVar1 + 0x13e0) == 0) goto LAB_004196d0;
    if (*(int *)(iVar1 + 0x10c0) == 0) goto LAB_00419611;
    uVar3 = 0x22;
    break;
  case 0x23:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x24;
    break;
  case 0x27:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x28;
    break;
  case 0x29:
    if (*(int *)(iVar1 + 0x13e0) == 0) goto LAB_004196d0;
    if (*(int *)(iVar1 + 0x10c0) == 0) goto LAB_00419611;
    uVar3 = 0x2a;
    break;
  case 0x2b:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) goto switchD_004195d6_caseD_3;
    uVar3 = 0x2c;
  }
  FUN_00a8cb60(uVar3);
switchD_004195d6_caseD_3:
  iVar4 = FUN_00a8cac0();
  if (iVar2 != iVar4) {
    *(undefined4 *)(iVar1 + 0x13c4) = 0;
  }
  return;
}

// 004198E0  FUN_004198e0  size=1  [between]
void FUN_004198e0(void)

{
  return;
}

// 004198F0  FUN_004198f0  size=1147  [between]
void __fastcall FUN_004198f0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00da8810(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    param_1[0x24] = *(int *)(iVar2 + 0x90);
    param_1[0x25] = *(int *)(iVar2 + 0x94);
    param_1[0x26] = *(int *)(iVar2 + 0x98);
    param_1[0x27] = *(int *)(iVar2 + 0x9c);
    param_1[0x14] = *(int *)(iVar2 + 0x40);
    param_1[0x15] = *(int *)(iVar2 + 0x44);
    param_1[0x16] = *(int *)(iVar2 + 0x48);
    param_1[0x17] = *(int *)(iVar2 + 0x4c);
  }
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00c81e40(7);
    FUN_00aa4520(0x191,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(1);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x318))();
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(2);
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0x192,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(3);
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(4);
      return;
    }
    break;
  case 4:
    FUN_00aa4520(0x193,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(5);
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(6);
      return;
    }
    break;
  case 6:
    FUN_00aa4520(0x194,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(7);
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(8);
      return;
    }
    break;
  case 8:
    FUN_00aa4520(0x195,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(9);
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 10:
    FUN_00aa4520(0x196,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(0xb);
    FUN_00e03a70(0,0x3df5c28f);
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a95540(0,10);
    if (iVar1 != 0) {
      FUN_00e03a70(0,0x3f800000);
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(0xc);
      return;
    }
    break;
  case 0xc:
    FUN_00aa4520(0x197,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(0xd);
  case 0xd:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8caf0(0xef,0,0,0);
      return;
    }
  }
  return;
}

// 00419DB0  FUN_00419db0  size=1  [between]
void FUN_00419db0(void)

{
  return;
}

// 00419DC0  FUN_00419dc0  size=61  [between]
void __fastcall FUN_00419dc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a957b0(0);
  iVar2 = FUN_00a957b0(0);
  *(float *)(param_1 + 0x11c8) = (float)iVar1 / (float)iVar2;
  return;
}

// 00419E00  FUN_00419e00  size=51  [between]
void __fastcall FUN_00419e00(int param_1)

{
  if (*(int *)(param_1 + 0x13ac) != 0) {
    FUN_00a8c9b0(0,6,0x41a00000,0x3f800000);
    *(undefined4 *)(param_1 + 0x13ac) = 0;
  }
  return;
}

// 00419EC0  FUN_00419ec0  size=1  [between]
void FUN_00419ec0(void)

{
  return;
}

// 00419ED0  FUN_00419ed0  size=489  [between]
void __fastcall FUN_00419ed0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float unaff_EBX;
  int iVar5;
  float unaff_ESI;
  float10 fVar6;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar5 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  iVar4 = FUN_00a8cac0();
  if (iVar4 == 0) {
    FUN_00aa4520(0x187,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    (**(code **)(*param_1 + 0x318))();
  }
  else if (iVar4 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  if ((param_1[0x221] != 0) && (fVar6 = (float10)FUN_00a958c0(0), (float10)0.95 < fVar6)) {
    (**(code **)(*param_1 + 0x314))();
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    if ((iVar5 != 0) && (iVar3 = FUN_00a959f0(0), 1 < iVar3)) {
      FUN_00a8ce90(auStack_30,auStack_20);
      fVar6 = (float10)FUN_00ddba30(*(float *)(iVar5 + 0x94) + fStack_1c);
      param_1[0x25] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)3.1415927));
      param_1[0x25] = (int)(float)fVar6;
      D3DXVec3TransformNormal(auStack_30,auStack_30,iVar5 + 0x10);
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      param_1[0x14] = (int)(*(float *)(iVar5 + 0x40) + unaff_ESI);
      param_1[0x16] = (int)(fVar2 + fStack_34);
      if (param_1[0x221] != 0) {
        param_1[0x15] = (int)(fVar1 + unaff_EBX);
        return;
      }
    }
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8eea0();
  if (iVar3 < 1) {
    FUN_00a8caf0(0xdb,0,0,0);
    return;
  }
  FUN_00a8caf0(0xce,0,0,0);
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  return;
}

// 0041A0C0  FUN_0041a0c0  size=1  [between]
void FUN_0041a0c0(void)

{
  return;
}

// 0041A0D0  FUN_0041a0d0  size=469  [between]
void __fastcall FUN_0041a0d0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float unaff_EBX;
  int iVar5;
  float unaff_ESI;
  float10 fVar6;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar5 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  iVar4 = FUN_00a8cac0();
  if (iVar4 == 0) {
    FUN_00aa4520(0x188,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x318))();
    FUN_00a8ccb0(1);
  }
  else if (iVar4 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  if ((param_1[0x221] != 0) && (fVar6 = (float10)FUN_00a958c0(0), (float10)1.3 < fVar6)) {
    (**(code **)(*param_1 + 0x314))();
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    if ((iVar5 != 0) && (iVar3 = FUN_00a959f0(0), 1 < iVar3)) {
      FUN_00a8ce90(auStack_30,auStack_20);
      fVar6 = (float10)FUN_00ddba30(*(float *)(iVar5 + 0x94) + fStack_1c);
      param_1[0x25] = (int)(float)fVar6;
      D3DXVec3TransformNormal(auStack_30,auStack_30,iVar5 + 0x10);
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      param_1[0x14] = (int)(*(float *)(iVar5 + 0x40) + unaff_ESI);
      param_1[0x16] = (int)(fVar2 + fStack_34);
      if (param_1[0x221] != 0) {
        param_1[0x15] = (int)(fVar1 + unaff_EBX);
        return;
      }
    }
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8eea0();
  if (iVar3 < 1) {
    FUN_00a8caf0(0xdb,0,0,0);
    return;
  }
  FUN_00a8caf0(0xcd,0,0,0);
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  return;
}

// 0041A2B0  FUN_0041a2b0  size=1  [between]
void FUN_0041a2b0(void)

{
  return;
}

// 0041A2D0  FUN_0041a2d0  size=471  [between]
void __fastcall FUN_0041a2d0(int param_1)

{
  int iVar1;
  float unaff_ESI;
  bool bVar2;
  float10 fVar3;
  float fVar4;
  float fStack_7c;
  float fStack_78;
  int local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [4];
  float local_5c;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x1394) = 0;
    FUN_00aa4080(0x10e,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      bVar2 = *(int *)(param_1 + 0x1394) == 0;
      if (!bVar2) {
        local_74 = FUN_00a959f0(0);
        if (*(float *)(param_1 + 0x920) <= (float)local_74) {
          *(undefined4 *)(param_1 + 0x1394) = 0;
        }
        bVar2 = *(int *)(param_1 + 0x1394) == 0;
      }
      if (bVar2) {
        fVar4 = *(float *)(param_1 + 0x920) - 1.0;
        *(float *)(param_1 + 0x920) = fVar4;
        FUN_00a95e60(0,fVar4 * 0.016666668);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
    }
    goto LAB_0041a412;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a959f0(0);
  if (99 < iVar1) {
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x920) = 0x42c80000;
  }
LAB_0041a412:
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8ce90(local_70,local_60);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + local_5c);
    *(float *)(*(int *)(param_1 + 0xa84) + 0x94) = (float)fVar3;
    fVar4 = *(float *)(param_1 + 0x94);
    D3DXMatrixRotationY(local_50);
    D3DXVec3TransformNormal(&fStack_78,&fStack_78,auStack_58);
    iVar1 = *(int *)(param_1 + 0xa84);
    *(float *)(iVar1 + 0x50) = *(float *)(param_1 + 0x50) + fVar4;
    *(float *)(iVar1 + 0x54) = *(float *)(param_1 + 0x54) + unaff_ESI;
    *(float *)(iVar1 + 0x58) = *(float *)(param_1 + 0x58) + fStack_7c;
    *(float *)(iVar1 + 0x5c) = *(float *)(param_1 + 0x5c) + fStack_78;
  }
  return;
}

// 0041A4D0  FUN_0041a4d0  size=93  [between]
void __fastcall FUN_0041a4d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x61c) == 3) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x200006) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x200007) {
      *(undefined4 *)(param_1 + 0x61c) = 0xc;
    }
  }
  return;
}

// 0041A530  FUN_0041a530  size=1514  [between]
void __fastcall FUN_0041a530(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00da8810(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  iVar1 = FUN_00a81330();
  if (((iVar1 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) && (iVar2 = FUN_00a8cac0(), iVar2 == 3)
     ) {
    fVar4 = (float10)FUN_00a958c0(0);
    FUN_00a95e60(0,(float)fVar4);
  }
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4520(0x1a4,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 1;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0x1a5,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 3;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4520(0x1ac,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 5;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4520(0x1ad,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 7;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 8;
      return;
    }
    break;
  case 8:
    FUN_00aa4520(0x1b1,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 9;
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 10;
      return;
    }
    break;
  case 10:
    FUN_00aa4520(0x1b2,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 0xb;
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x314))();
      FUN_00dc1270(0,0);
      (**(code **)(*param_1 + 0x388))(0);
      FUN_004168f0(1);
      return;
    }
    break;
  case 0xc:
    FUN_00aa4520(0x1a7,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 0xd;
  case 0xd:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0xe;
      return;
    }
    break;
  case 0xe:
    FUN_00aa4520(0x1a8,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 0xf;
  case 0xf:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0x10;
      return;
    }
    break;
  case 0x10:
    FUN_00aa4520(0x1b1,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 0x11;
  case 0x11:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0x12;
      return;
    }
    break;
  case 0x12:
    FUN_00aa4520(0x1b2,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 0x13;
  case 0x13:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x314))();
      FUN_00dc1270(0,0);
      (**(code **)(*param_1 + 0x388))(0);
      FUN_004168f0(1);
      return;
    }
  }
  return;
}

// 0041AB80  FUN_0041ab80  size=1  [between]
void FUN_0041ab80(void)

{
  return;
}

// 0041AB90  FUN_0041ab90  size=1557  [between]
void __fastcall FUN_0041ab90(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 local_20 [4];
  float local_1c;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar6 = 0;
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) &&
     ((iVar4 = FUN_00a8cac0(), iVar4 < 2 || (iVar4 = FUN_00a8cac0(), 4 < iVar4)))) {
    FUN_00a8ce90(&local_30,local_20);
    fVar7 = (float10)FUN_00ddba30(*(float *)(iVar6 + 0x94) + local_1c);
    param_1[0x25] = (int)(float)fVar7;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar6 + 0x10);
    fVar1 = *(float *)(iVar6 + 0x44);
    fVar2 = *(float *)(iVar6 + 0x48);
    param_1[0x14] = (int)(*(float *)(iVar6 + 0x40) + local_30);
    param_1[0x15] = (int)(fVar1 + fStack_2c);
    param_1[0x16] = (int)(fVar2 + fStack_28);
    param_1[0x17] = iStack_24;
  }
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00aa4520(0x1b4,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    (**(code **)(*param_1 + 0x318))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x187] = 1;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0x1b5,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x251] = 0;
    param_1[0x187] = 3;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a957b0(0);
    param_1[0x248] = (int)(float)iVar4;
    iVar4 = FUN_00a8c760(0x20);
    if ((iVar4 != 0) && (param_1[0x251] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x251] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
      FUN_00b7ab30(0);
      if ((param_1[0x251] != 0) && ((**(code **)(*param_1 + 0x314))(), param_1[0x1d9] != 0)) {
        FUN_008e6d00();
      }
    }
    else {
      FUN_00b7ab30(0x40a00000);
    }
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        FUN_00b7e040(&DAT_0163cfb0);
        FUN_00b89d30(0xf6,4,0xc6,0,0x12,iVar3,param_1[0x248],0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        param_1[0x1029] = -0x40800000;
      }
    }
    if (iVar6 == 0) {
LAB_0041af89:
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
LAB_0041af9a:
        param_1[0x187] = 5;
        return;
      }
    }
    else {
      iVar3 = FUN_00a8cac0();
      if (iVar3 == 5) {
        param_1[0x187] = 5;
        return;
      }
    }
    break;
  case 4:
    if (iVar6 != 0) {
      iVar3 = FUN_00a8cac0();
      if (iVar3 < 5) {
        (**(code **)(*param_1 + 0x388))(0);
        return;
      }
      goto LAB_0041af9a;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    goto LAB_0041af89;
  case 5:
    FUN_00aa4520(0x1b7,iVar3,0,0x3f800000,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 6;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
  case 6:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 7;
      return;
    }
    break;
  case 7:
    FUN_00aa4520(0x1b8,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 8;
  case 8:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 9;
      return;
    }
    break;
  case 9:
    FUN_00aa4520(0x1b9,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 10;
  case 10:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0xb;
      return;
    }
    break;
  case 0xb:
    FUN_00aa4520(0x1ba,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = 0xc;
  case 0xc:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    return;
  default:
    break;
  }
  return;
}

// 0041B200  FUN_0041b200  size=62  [between]
void __fastcall FUN_0041b200(int param_1)

{
  if (*(short *)(param_1 + 0x14b8) == 0) {
    FUN_00e5e1b0("bgm_Samuel_Stage6_Sword_Lost");
    *(short *)(param_1 + 0x14b8) = *(short *)(param_1 + 0x14b8) + 1;
  }
  else if (*(short *)(param_1 + 0x14b8) == 1) {
    FUN_00e5e1b0("bgm_Samuel_Stage6_Sword_Pickedup");
    *(short *)(param_1 + 0x14b8) = *(short *)(param_1 + 0x14b8) + 1;
    return;
  }
  return;
}

// 0041B240  FUN_0041b240  size=94  [between]
void __fastcall FUN_0041b240(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x14ba);
  if (sVar1 == 0) {
    FUN_00e5e1b0("bgm_Samuel_Stage6_Finish_etaer1");
    *(undefined2 *)(param_1 + 0x14ba) = 2;
  }
  else {
    if (sVar1 == 1) {
      FUN_00e5e1b0("bgm_Samuel_Stage6_Finish_failed");
      *(undefined2 *)(param_1 + 0x14ba) = 0;
      return;
    }
    if (sVar1 == 2) {
      FUN_00e5e1b0("bgm_Samuel_Stage6_Finish_succeeded");
      *(short *)(param_1 + 0x14ba) = *(short *)(param_1 + 0x14ba) + 1;
      return;
    }
  }
  return;
}

// 0041B310  FUN_0041b310  size=636  [between]
void __fastcall FUN_0041b310(int *param_1)

{
  float fVar1;
  int iVar2;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  int local_60;
  float local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    iVar2 = param_1[0x2a1];
    local_80 = 0.0;
    local_7c = 0.0;
    local_78 = 0.0;
    local_60 = param_1[0x14];
    local_58 = param_1[0x16];
    local_54 = param_1[0x17];
    local_5c = (float)param_1[0x15] + 1.0;
    if (iVar2 == 0) {
      local_70 = 0.0;
      local_6c = 0.0;
      local_68 = 5.0;
      FUN_00ddc1d0(local_50,param_1 + 0x24,5);
      D3DXVec3TransformNormal(&local_70,&local_70,local_50);
      local_80 = local_70 + (float)param_1[0x14];
      local_7c = local_6c + (float)param_1[0x15];
      local_78 = (float)param_1[0x16] + local_68;
      local_74 = fStack_64 + (float)param_1[0x17];
      local_70 = local_80;
      local_6c = local_7c;
      local_68 = local_78;
      fStack_64 = local_74;
      iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&local_80,0,0,0,&local_60,&local_80,0x1e,"em0020_fireSlash");
      if (iVar2 != 0) goto LAB_0041b3c0;
      param_1[0x448] = (int)local_70;
      param_1[0x449] = (int)local_6c;
      param_1[0x44a] = (int)local_68;
      fVar1 = fStack_64;
    }
    else {
      local_80 = *(float *)(iVar2 + 0x50);
      local_78 = *(float *)(iVar2 + 0x58);
      local_74 = *(float *)(iVar2 + 0x5c);
      local_7c = *(float *)(iVar2 + 0x54) + 1.0;
      iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (&local_80,0,0,0,&local_60,&local_80,0x1e,"em0020_fireSlash");
      if (iVar2 == 0) {
        iVar2 = param_1[0x2a1];
        param_1[0x448] = *(int *)(iVar2 + 0x50);
        param_1[0x449] = *(int *)(iVar2 + 0x54);
        param_1[0x44a] = *(int *)(iVar2 + 0x58);
        fVar1 = *(float *)(iVar2 + 0x5c);
      }
      else {
LAB_0041b3c0:
        param_1[0x448] = (int)local_80;
        param_1[0x449] = (int)local_7c;
        param_1[0x44a] = (int)local_78;
        fVar1 = local_74;
      }
    }
    param_1[1099] = (int)fVar1;
    FUN_00aa4080(0x3e,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    param_1[0x248] = 0x43340000;
  }
  else if (iVar2 != 1) goto LAB_0041b547;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
LAB_0041b547:
  FUN_00a8e880(param_1 + 0x448);
  (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 0041B630  FUN_0041b630  size=97  [between]
void FUN_0041b630(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x5a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0041B760  FUN_0041b760  size=142  [between]
void __thiscall FUN_0041b760(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))(param_2);
    FUN_00fdbc60();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0041b7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x24))();
    return;
  case 2:
    (**(code **)(**(int **)(param_1 + 0x754) + 100))(param_2);
    FUN_00fdbc60();
    return;
  case 3:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))(param_2);
    FUN_00fdbc60();
    return;
  case 4:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))(param_2);
    FUN_00fdbc60();
    return;
  }
}

// 0041B810  FUN_0041b810  size=90  [between]
void __fastcall FUN_0041b810(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0041b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0041b868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))();
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0041b83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 100))();
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0041b84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0041b85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
    return;
  }
}

// 0041B980  FUN_0041b980  size=1  [between]
void FUN_0041b980(void)

{
  return;
}

// 0041BA60  FUN_0041ba60  size=44  [between]
void FUN_0041ba60(void)

{
  FUN_00aa4080(0xd5,1,0,0x3f800000,0x8000010,0,0x3f800000);
  return;
}

// 0041BAB0  FUN_0041bab0  size=97  [between]
void __fastcall FUN_0041bab0(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_00a8eea0();
  if (iVar4 < *(int *)(param_1 + 0x12b8)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x4e);
    uVar5 = 0x52;
  }
  else {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x754) + 0x24);
    if (iVar4 < *(int *)(param_1 + 0x12b4)) {
      uVar2 = (*pcVar1)(0x4d);
      uVar5 = 0x51;
    }
    else {
      uVar2 = (*pcVar1)(0x4c);
      uVar5 = 0x50;
    }
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(uVar5);
  FUN_00dde2a0(uVar2,uVar3);
  return;
}

// 0041BB20  FUN_0041bb20  size=66  [between]
undefined2 __fastcall FUN_0041bb20(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_00a8eea0();
  if (iVar2 < *(int *)(param_1 + 0x12b8)) {
    uVar1 = FUN_0041b760(0x62);
    return uVar1;
  }
  if (iVar2 < *(int *)(param_1 + 0x12b4)) {
    uVar1 = FUN_0041b760(0x61);
    return uVar1;
  }
  uVar1 = FUN_0041b760(0x60);
  return uVar1;
}

// 0041BB80  FUN_0041bb80  size=123  [between]
undefined4 __fastcall FUN_0041bb80(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (((byte)DAT_01bea090 & 0x10) != 0) {
    return 0;
  }
  iVar3 = FUN_00a8c760(0x10);
  if (iVar3 == 0) {
    fVar1 = *(float *)(param_1 + 0x10e4);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      return 1;
    }
    iVar3 = FUN_00a8cab0();
    if (iVar3 == 0x20000) {
      sVar2 = FUN_00dde2d0(0,2);
      if (*(int *)(param_1 + 0xdc0) == 1) {
        sVar2 = FUN_00dde2d0(2,4);
      }
      if (*(int *)(param_1 + 0x10cc) <= (int)sVar2) {
        return 1;
      }
    }
    return *(undefined4 *)(param_1 + 0x10b4);
  }
  return 0;
}

// 0041BC30  FUN_0041bc30  size=1  [between]
void FUN_0041bc30(void)

{
  return;
}

// 0041BC40  FUN_0041bc40  size=481  [between]
void __fastcall FUN_0041bc40(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
    FUN_00a8ce90(&local_30,local_20);
    fVar4 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar4;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar3 + 0x10);
    local_30 = *(float *)(iVar3 + 0x40) + local_30;
    fStack_2c = *(float *)(iVar3 + 0x44) + fStack_2c;
    fVar1 = *(float *)(iVar3 + 0x48);
    *(float *)(param_1 + 0x50) = local_30;
    *(float *)(param_1 + 0x58) = fVar1 + fStack_28;
    if ((*(int *)(param_1 + 0x940) < 5) || (*(int *)(param_1 + 0x61c) == 0)) {
      *(float *)(param_1 + 0x54) = fStack_2c;
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
    }
  }
  iVar3 = FUN_00a92f90();
  if (iVar3 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa43e0(0x18b,iVar2);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar3 != 1) {
    return;
  }
  iVar3 = FUN_00a8eea0();
  if ((iVar3 < 1) && (iVar3 = FUN_00a959f0(0), 222.0 < (float)iVar3)) {
    FUN_00a8caf0(0xda,0,0,0);
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  }
  FUN_00bf54e0(0xc9,1);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    FUN_00a8ce90(&local_30,local_20);
    fVar4 = (float10)FUN_00ddba30(*(float *)(iVar2 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar4;
  }
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  return;
}

// 0041BE30  FUN_0041be30  size=615  [between]
void __thiscall FUN_0041be30(int param_1,undefined4 param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (DAT_018b9174 - 0xa00U < 0x100) {
    if (((byte)DAT_01bea090 & 0x10) != 0) {
      if ((*(uint *)(param_1 + 0x1084) & 0xffff0000) != 0x80000) {
        FUN_00420b80(0x80007,0,0,0,0);
        return;
      }
      FUN_00420b80(0x10000,0,0,0,0);
      return;
    }
    sVar2 = FUN_00dde2a0(0,6);
    if (*(int *)(param_1 + 0x1200) == 0) {
      sVar2 = FUN_00dde2a0(0,0xf);
    }
    fVar1 = *(float *)(DAT_01beb8c0 + 0x1e4) * 57.29578;
    if (((sVar2 == 0) && (fVar1 <= -20.0)) && (-160.0 <= fVar1)) {
      FUN_00420b80(0x30021,0,0,0,0);
      return;
    }
  }
  if ((1 < *(int *)(param_1 + 0x108c)) &&
     ((*(int *)(param_1 + 0x1084) == 0x80001 || (*(int *)(param_1 + 0x1084) == 0x80002)))) {
    FUN_00420b80(0x80003,0,0,0,0);
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar3 = FUN_00907640(param_1 + 0x11a0,0,&local_20);
  if (iVar3 != 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar3 = FUN_00907640(param_1 + 0x119c,0,&local_20);
    if (iVar3 != 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar3 = FUN_00907640(param_1 + 0x11a4,0,&local_20);
      if ((iVar3 != 0) && (iVar3 = FUN_004171a0(), iVar3 != 0)) {
        param_2 = 0x80005;
      }
    }
  }
  switch(param_2) {
  case 0x80000:
  case 0x80003:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar3 = FUN_00907640(param_1 + 0x11a0,0,&local_20);
    if (iVar3 == 0) goto switchD_0041bfec_default;
    iVar3 = FUN_00417160();
    if (iVar3 != 0) {
      iVar3 = FUN_004171a0();
      if (iVar3 == 0) {
        param_2 = 0x80002;
      }
      goto switchD_0041bfec_default;
    }
    break;
  case 0x80001:
    iVar3 = FUN_00417160();
    if (iVar3 == 0) goto switchD_0041bfec_default;
    iVar3 = FUN_004171a0();
    if (iVar3 == 0) {
      param_2 = 0x80002;
      goto switchD_0041bfec_default;
    }
LAB_0041c06e:
    iVar3 = FUN_00417120();
    if (iVar3 == 0) {
      param_2 = 0x80003;
    }
    goto switchD_0041bfec_default;
  case 0x80002:
    iVar3 = FUN_004171a0();
    if (iVar3 == 0) goto switchD_0041bfec_default;
    iVar3 = FUN_00417160();
    if (iVar3 != 0) goto LAB_0041c06e;
    break;
  default:
    goto switchD_0041bfec_default;
  }
  param_2 = 0x80001;
switchD_0041bfec_default:
  FUN_00420b80(param_2,0,0,0,0);
  return;
}

// 0041C0D0  FUN_0041c0d0  size=185  [between]
void __fastcall FUN_0041c0d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xb3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 0041C1A0  hkpCdPointCollector::vf08  size=10  [between]
void __fastcall hkpCdPointCollector::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x7f7fffee;
  return;
}

// 0041C220  FUN_0041c220  size=1  [between]
void FUN_0041c220(void)

{
  return;
}

// 0041C230  FUN_0041c230  size=599  [between]
void __fastcall FUN_0041c230(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar3 = FUN_00a92f90();
  if (iVar3 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    FUN_00a8ce90(&local_30,local_20);
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x94) + local_1c);
    param_1[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar4 + 0x10);
    fVar1 = *(float *)(iVar4 + 0x44);
    fVar2 = *(float *)(iVar4 + 0x48);
    param_1[0x14] = (int)(*(float *)(iVar4 + 0x40) + local_30);
    param_1[0x15] = (int)(fVar1 + fStack_2c);
    param_1[0x16] = (int)(fVar2 + fStack_28);
    param_1[0x17] = iStack_24;
  }
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    FUN_00bee830();
    FUN_00db3e80(0x41700000,0,&DAT_01bea1d0);
    FUN_00aa4520(0x146,iVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000080,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8ccb0(1);
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0x147,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000080,1);
    FUN_00a8ccb0(1);
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x314))();
      FUN_00ba6810(1,0);
      iVar3 = FUN_00a8eea0();
      if (0 < iVar3) {
        FUN_00a8caf0(0xce,0,0,0);
        return;
      }
      FUN_00a8caf0(0xdb,0,0,0);
      return;
    }
  }
  return;
}

// 0041C500  FUN_0041c500  size=228  [between]
void __fastcall FUN_0041c500(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00a8c760(0x3b);
  if (((iVar2 == 0) || (*(short *)(param_1 + 0x14b2) == 2)) || (*(short *)(param_1 + 0x14b2) == 3))
  {
    iVar2 = FUN_00a8c760(0x3c);
    if (((iVar2 == 0) || (*(short *)(param_1 + 0x14b2) == 6)) || (*(short *)(param_1 + 0x14b2) == 7)
       ) {
      if ((*(ushort *)(param_1 + 0x14b2) < 8) &&
         (fVar1 = *(float *)(param_1 + 0x14b4) - *(float *)(param_1 + 0x910),
         *(float *)(param_1 + 0x14b4) = fVar1, fVar1 <= 0.0)) {
        *(undefined2 *)(param_1 + 0x14b2) = 4;
        fVar3 = (float10)FUN_00dde300(0x3f800000,0x40000000);
        *(float *)(param_1 + 0x14b4) = (float)(fVar3 * (float10)60.0);
      }
      return;
    }
    *(undefined2 *)(param_1 + 0x14b2) = 6;
  }
  else {
    *(undefined2 *)(param_1 + 0x14b2) = 3;
  }
  fVar3 = (float10)FUN_00dde300(0,0x40000000);
  *(float *)(param_1 + 0x14b4) = (float)(fVar3 * (float10)10.0 + (float10)30.0);
  return;
}

// 0041C610  FUN_0041c610  size=93  [between]
void __fastcall FUN_0041c610(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1060) != 0) {
    if (*(int *)(param_1 + 0xf80) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x48))();
      }
    }
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0041c669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x48))();
        return;
      }
    }
  }
  return;
}

// 0041C670  FUN_0041c670  size=93  [between]
void __fastcall FUN_0041c670(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1060) != 0) {
    if (*(int *)(param_1 + 0xf80) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x50))();
      }
    }
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0041c6c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x50))();
        return;
      }
    }
  }
  return;
}

// 0041C6D0  FUN_0041c6d0  size=93  [between]
void __fastcall FUN_0041c6d0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1060) != 0) {
    if (*(int *)(param_1 + 0xf80) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x54))();
      }
    }
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0041c729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x54))();
        return;
      }
    }
  }
  return;
}

// 0041C730  FUN_0041c730  size=100  [between]
void __thiscall FUN_0041c730(int param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xf84) != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
     (FUN_00aa4080(param_2,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000), param_3 == 0)) {
    FUN_00a96070(0,0x8000000,1);
  }
  return;
}

// 0041C810  Em0020::vf10C  size=24  [class]
undefined4 __thiscall Em0020::vf10C(int param_1,int param_2)

{
  if (param_2 != 0x20026) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xf7c);
}

// 0041C960  FUN_0041c960  size=42  [callgraph]
uint FUN_0041c960(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9db8;
  (**(code **)(*param_1 + 4))(&DAT_01be9db8);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0041C9E0  FUN_0041c9e0  size=42  [callgraph]
uint FUN_0041c9e0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34c30;
  (**(code **)(*param_1 + 4))(&DAT_01b34c30);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0041CA10  FUN_0041ca10  size=42  [callgraph]
uint FUN_0041ca10(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9db8;
  (**(code **)(*param_1 + 4))(&DAT_01be9db8);
  iVar1 = FUN_00dd6d70(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0041CC40  FUN_0041cc40  size=34  [callgraph]
void __thiscall FUN_0041cc40(int param_1,undefined4 param_2)

{
  FUN_00e26e90();
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  *(undefined4 *)(param_1 + 0xec) = param_2;
  return;
}

// 0041CC70  FUN_0041cc70  size=86  [callgraph]
void __thiscall
FUN_0041cc70(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x94) = 1;
  puVar2 = (undefined4 *)(param_1 + 0xa0);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = param_3;
  *(undefined4 *)(param_1 + 0xe4) = param_4;
  *(undefined4 *)(param_1 + 0xe8) = param_5;
  *(undefined4 *)(param_1 + 0xec) = param_6;
  *(undefined4 *)(param_1 + 0xf0) = param_7;
  return;
}

// 0041CD00  FUN_0041cd00  size=27  [callgraph]
void __thiscall FUN_0041cd00(int param_1,char *param_2)

{
  _strncpy_s((char *)(param_1 + 0x394),0x20,param_2,0x1f);
  return;
}

// 0041CD70  FUN_0041cd70  size=52  [callgraph]
void __thiscall FUN_0041cd70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x6c4) = param_2;
  *(undefined4 *)(param_1 + 0x6d0) = *param_3;
  *(undefined4 *)(param_1 + 0x6d4) = param_3[1];
  *(undefined4 *)(param_1 + 0x6d8) = param_3[2];
  *(undefined4 *)(param_1 + 0x6dc) = param_3[3];
  return;
}

// 0041CDB0  FUN_0041cdb0  size=44  [callgraph]
void __thiscall FUN_0041cdb0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x120) = *param_2;
  *(undefined4 *)(param_1 + 0x124) = param_2[1];
  *(undefined4 *)(param_1 + 0x128) = param_2[2];
  *(undefined4 *)(param_1 + 300) = param_2[3];
  return;
}

// 0041CF30  FUN_0041cf30  size=310  [callgraph]
void __fastcall FUN_0041cf30(undefined4 *param_1)

{
  param_1[1] = 0x3b000;
  param_1[0x44] = 0xffff;
  *param_1 = 1;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x3f800000;
  param_1[0x52] = 0x3f800000;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0xffff;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined2 *)((int)param_1 + 0x17a) = 0xffff;
  param_1[100] = 0;
  param_1[0x5c] = 0;
  param_1[0x65] = 0;
  param_1[0x58] = 0x3f800000;
  param_1[0x59] = 0x42c80000;
  param_1[0x5b] = 0x3f800000;
  param_1[0x5a] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[4] = 0x146;
  param_1[5] = 1;
  param_1[7] = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[6] = 1;
  param_1[0x27] = param_1[0x27] | 0x10000000;
  param_1[0xb8] = 0xffffffff;
  param_1[0xc4] = 0xffffffff;
  return;
}

// 0041D070  FUN_0041d070  size=401  [callgraph]
void __fastcall FUN_0041d070(int param_1)

{
  int iVar1;
  
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),4,0);
  *(uint *)(param_1 + 0xdd0) = *(uint *)(param_1 + 0xdd0) | 2;
  FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3eb2b8c2,0xbeb2b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),5,0);
  *(uint *)(param_1 + 0xea0) = *(uint *)(param_1 + 0xea0) | 2;
  FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  iVar1 = FUN_00a12210(0x7a0);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x80;
  }
  iVar1 = FUN_00a12210(0x7a1);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x80;
  }
  iVar1 = FUN_00a12210(0x7a2);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x80;
  }
  return;
}

// 0041D210  Em0020::vf264  size=267  [class]
undefined4 __thiscall Em0020::vf264(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  *(undefined4 *)(param_1 + 0x1068) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x40);
  if (*(int *)(param_1 + 0x1068) == 1) {
    FUN_00a8caf0(0x200002,0,0,0);
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xd0))(0);
    }
  }
  if ((DAT_018b9174 - 0xa00U < 0x100) && (DAT_018b925c != (byte *)0x0)) {
    pbVar4 = (byte *)0x163d100;
    pbVar2 = DAT_018b925c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0041d2c6:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_0041d2cb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0041d2c6;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0041d2cb:
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x1200) = 1;
      *(undefined4 *)(param_1 + 0x1414) = 0x43480000;
      *(undefined4 *)(param_1 + 0x1208) = 1;
      *(undefined4 *)(param_1 + 0x1480) = 0x40a00000;
      *(undefined4 *)(param_1 + 0x14cc) = 0;
    }
  }
  if (*(int *)(param_2 + 0x70) == 2) {
    *(undefined4 *)(param_1 + 0x1200) = 1;
    *(undefined4 *)(param_1 + 0x1208) = 1;
    *(undefined4 *)(param_1 + 0x121c) = 1;
  }
  return 1;
}

// 0041D320  FUN_0041d320  size=640  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0041d320(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  float local_70 [4];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (*(float *)(param_1 + 0x11b0) <= 5.0) {
    *(float *)(param_1 + 0x11b0) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x11b0);
    return;
  }
  *(undefined4 *)(param_1 + 0x11b0) = 0;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_54 = *(undefined4 *)(param_1 + 0x4c);
  local_5c = *(float *)(param_1 + 0x44) + 1.0;
  iVar1 = FUN_009f8b40();
  uVar2 = iVar1 << 0x10 | 7;
  switch(*(undefined2 *)(param_1 + 0x11ac)) {
  case 0:
    local_70[0] = 0.0;
    local_70[1] = 0.0;
    local_70[2] = *(float *)(param_1 + 0x11b4);
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(local_70,local_70,local_50);
    pcVar3 = "Sam View Front";
    iVar1 = param_1 + 0x119c;
    break;
  case 1:
    local_70[0] = 0.0;
    local_70[1] = 0.0;
    local_70[2] = *(float *)(param_1 + 0x11b4) * -1.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(local_70,local_70,local_50);
    pcVar3 = "Sam View Back";
    iVar1 = param_1 + 0x11a0;
    break;
  case 2:
    local_70[0] = *(float *)(param_1 + 0x11b4) * -1.0;
    local_70[1] = 0.0;
    local_70[2] = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(local_70,local_70,local_50);
    pcVar3 = "Sam View Right";
    iVar1 = param_1 + 0x11a4;
    break;
  case 3:
    local_70[0] = *(float *)(param_1 + 0x11b4);
    local_70[1] = 0.0;
    local_70[2] = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(local_70,local_70,local_50);
    FUN_0090fa30(param_1 + 0x11a8,0,local_70 + 1,0x3f000000,&stack0xffffff84,uVar2,"Sam View Left");
    *(undefined2 *)(param_1 + 0x11ac) = 0;
  default:
    return;
  }
  FUN_0090fa30(iVar1,0,local_70 + 1,0x3f000000,&stack0xffffff84,uVar2,pcVar3);
  *(short *)(param_1 + 0x11ac) = *(short *)(param_1 + 0x11ac) + 1;
  return;
}

// 0041D5B0  Em0020::vf104  size=48  [class]
void __fastcall Em0020::vf104(int param_1)

{
  int *piVar1;
  
  Bh0064::vf104();
  FUN_00417250();
  if (*(int *)(param_1 + 0xf7c) != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041d5dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x104))();
      return;
    }
  }
  return;
}

// 0041D5E0  Em0020::vf54  size=16  [class]
void Em0020::vf54(void)

{
  BehaviorEmBase::vf54();
  FUN_0041c6d0();
  return;
}

// 0041D610  Em0020::vf248  size=152  [class]
void __fastcall Em0020::vf248(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  iVar1 = FUN_00a81330();
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x4f0);
  }
  else {
    uVar2 = FUN_00a81330(0);
  }
  FUN_00e03080(uVar2,uVar3);
  if (*(int *)(param_1 + 0xf88) != 0) {
    FUN_00e03080(*(int *)(param_1 + 0xf88),1);
  }
  if (*(int *)(param_1 + 0xf84) != 0) {
    FUN_00e03080(*(int *)(param_1 + 0xf84),2);
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00e030a0(*(int *)(param_1 + 0xa84),5);
    iVar1 = *(int *)(*(int *)(param_1 + 0xa84) + 0x1190);
    if (iVar1 != 0) {
      FUN_00e03080(iVar1,6);
    }
  }
  return;
}

// 0041D6B0  Em0020::vf14C  size=70  [class]
undefined4 Em0020::vf14C(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_00a7c8a0();
  }
  if ((((param_1 != 2) && (param_1 != 3)) &&
      ((param_1 == 9 || ((param_1 == 10 || (param_1 == 0xb)))))) &&
     ((iVar1 != 0 && ((*(byte *)(iVar1 + 0x4c0) & 0x10) != 0)))) {
    return 1;
  }
  return 0;
}

// 0041D700  Em0020::vf17C  size=76  [class]
undefined4 __fastcall Em0020::vf17C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_00a8c760(0x32);
  if ((iVar2 != 0) && (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x1fc))();
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 0041D750  FUN_0041d750  size=112  [between]
float10 __fastcall FUN_0041d750(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined *puVar3;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      if (((iVar1 != 0x51) && (iVar1 != 0x5d)) && (iVar1 != 0x69)) {
        return (float10)1.0;
      }
      fVar2 = (float10)FUN_00dde300(0x3fa66666,0x3fc00000);
      return fVar2;
    }
  }
  return (float10)0;
}

// 0041D7C0  FUN_0041d7c0  size=30  [between]
void __fastcall FUN_0041d7c0(int param_1)

{
  if (*(float *)(param_1 + 0xa90) <= 16.0) {
    FUN_00a8cb50(0x20000);
  }
  return;
}

// 0041D7E0  FUN_0041d7e0  size=197  [between]
bool __fastcall FUN_0041d7e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  undefined *puVar9;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x68))();
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *pfVar6;
    fVar3 = *(float *)(param_1 + 0x48);
    fVar4 = pfVar6[2];
    iVar7 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x84))();
    fVar8 = (float10)fpatan((float10)(fVar1 - fVar2),(float10)(fVar3 - fVar4));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)*(float *)(iVar7 + 4)));
    if (((fVar8 <= (float10)1.5707964) && ((float10)-1.5707964 <= fVar8)) &&
       (piVar5 = *(int **)(param_1 + 0xa84), piVar5 != (int *)0x0)) {
      puVar9 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar7 = FUN_00dd6d80(puVar9);
      if ((iVar7 != 0) && (piVar5[0x2de] != 0)) {
        iVar7 = FUN_00a8cab0();
        return iVar7 != 0x2d;
      }
    }
  }
  return false;
}

// 0041D8B0  FUN_0041d8b0  size=102  [between]
void __thiscall FUN_0041d8b0(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 != 0x100000) && (param_2 != 0x10000)) && (param_2 != 0x20000)) {
    *(undefined4 *)(param_1 + 0x1098) = 0;
    *(undefined4 *)(param_1 + 0x10b4) = 1;
    return;
  }
  if (param_2 == 0x30000) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1098) = 0;
      *(undefined4 *)(param_1 + 0x10b4) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x10b4) = 0;
  return;
}

// 0041D920  FUN_0041d920  size=87  [between]
undefined4 FUN_0041d920(int param_1)

{
  int iVar1;
  
  if (((byte)DAT_01bea090 & 0x10) == 0) {
    if ((((param_1 == 0x30020) || (param_1 == 0x30021)) || (param_1 == 0x10006)) ||
       ((param_1 == 0x3002a || (param_1 == 0x30025)))) {
      return 1;
    }
    if ((0xff < DAT_018b9174 - 0xa00U) && (iVar1 = FUN_004171e0(), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

// 0041D980  FUN_0041d980  size=182  [between]
void __fastcall FUN_0041d980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  
  iVar1 = FUN_00c51a30(*(undefined4 *)(param_1 + 0x1378));
  if (iVar1 == 0) {
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    uVar2 = FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,0x507,&local_c0,&local_b0,0x41a00000,
                         0x40a00000,0xbf800000);
    FUN_00418130(uVar2);
    uVar2 = FUN_00c5abe0(param_1 + 0x12e0);
    *(undefined4 *)(param_1 + 0x1378) = uVar2;
    FUN_00c52ab0(uVar2,1);
  }
  return;
}

// 0041DA40  FUN_0041da40  size=215  [between]
undefined4 __fastcall FUN_0041da40(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((*(int *)(param_1 + 0x1208) == 0) || (*(int *)(param_1 + 0x1200) != 0)) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      if (*(float *)(param_1 + 0x14c4) < *(float *)(param_1 + 0x14cc) !=
          (*(float *)(param_1 + 0x14c4) == *(float *)(param_1 + 0x14cc))) {
        return 1;
      }
      iVar2 = FUN_00b7c970();
      iVar3 = FUN_00b7c980(0);
      if (((float)(iVar2 / iVar3) < 0.4 != ((float)(iVar2 / iVar3) == 0.4)) &&
         (iVar2 = (**(code **)(*piVar1 + 0x1fc))(), iVar2 != 0)) {
        return 0;
      }
      if (*(float *)(param_1 + 0xa8c) < 3.5) {
        iVar2 = FUN_004183f0();
        if (iVar2 != 0) {
          return 1;
        }
        if (piVar1[0x2de] != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 0041DB20  FUN_0041db20  size=140  [between]
void __fastcall FUN_0041db20(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    DAT_01bea060 = DAT_01bea060 & 0xbfffffff;
    if (*(int *)(param_1 + 0x1200) == 0) {
      *(undefined4 *)(param_1 + 0x1200) = 1;
    }
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      puVar2 = &DAT_01be9db8;
      (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar2);
      if (iVar1 != 0) {
        FUN_00b7d790(0);
      }
    }
    FUN_00a93090(6);
    *(uint *)(param_1 + 0x1064) = *(uint *)(param_1 + 0x1064) & 0xff7fffff;
    *(undefined4 *)(param_1 + 0x1414) = 0x43480000;
    *(undefined4 *)(param_1 + 0x1480) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x14cc) = 0;
  }
  return;
}

// 0041DBB0  FUN_0041dbb0  size=157  [between]
undefined4 __fastcall FUN_0041dbb0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01be9db8;
  (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
  iVar2 = FUN_00dd6d80(puVar3);
  if (iVar2 != 0) {
    if (((*(float *)(param_1 + 0xa8c) < 3.5) &&
        ((((*(int *)(param_1 + 0x10b8) != 0 &&
           (iVar2 = (**(code **)(*piVar1 + 0x1fc))(), iVar2 != 0)) || (piVar1[0x2de] != 0)) ||
         (iVar2 = FUN_004183f0(), iVar2 != 0)))) && (*(int *)(param_1 + 0x121c) != 0)) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x1200) != 0) &&
       (*(float *)(param_1 + 0x14c8) < *(float *)(param_1 + 0x14cc) !=
        (*(float *)(param_1 + 0x14c8) == *(float *)(param_1 + 0x14cc)))) {
      return 1;
    }
    return 0;
  }
  return 0;
}

// 0041DC50  FUN_0041dc50  size=239  [between]
void __thiscall FUN_0041dc50(int *param_1,uint param_2)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0x70000) {
    if (param_2 == 0x200000) {
      param_1[0x14] = -0x41c28f5c;
      param_1[0x15] = 0x3fde657c;
      if (-67.0 < (float)param_1[0x16]) {
        fVar1 = (float)param_1[0x16];
        if (!NAN(fVar1) && -50.0 < fVar1 != (fVar1 == -50.0)) {
          param_1[0x16] = -0x3db80000;
        }
      }
      else {
        param_1[0x16] = -0x3d7a0000;
      }
    }
    else {
      iVar3 = FUN_0041d920(param_2);
      if (iVar3 == 0) {
        param_1[0x486] = 0;
      }
    }
  }
  param_1[0x485] = 0;
  FUN_0041d8b0(param_2 & 0xffff0000);
  uVar4 = FUN_00a8cab0();
  if (param_2 == uVar4) {
    uVar4 = FUN_00a8cab0();
    if (param_2 == uVar4) {
      param_1[0x423] = param_1[0x423] + 1;
    }
  }
  else {
    param_1[0x423] = 0;
  }
  pcVar2 = *(code **)(*param_1 + 0x1d4);
  param_1[0x4e0] = 0x3f800000;
  (*pcVar2)(0);
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  pcVar2 = *(code **)(*param_1 + 0x1f8);
  param_1[0x42f] = 0;
  (*pcVar2)(0);
  return;
}

// 0041DD40  FUN_0041dd40  size=279  [between]
void __fastcall FUN_0041dd40(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 == (int *)0x0) goto LAB_0041de16;
  puVar4 = &DAT_01be9db8;
  (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
  iVar3 = FUN_00dd6d80(puVar4);
  if (iVar3 == 0) goto LAB_0041de16;
  if (((byte)DAT_01bea090 & 0x10) == 0) {
    fVar2 = 10.0;
    if (*(float *)(param_1 + 0xa8c) <= 10.0) goto LAB_0041dd8b;
LAB_0041dda8:
    if ((*(float *)(param_1 + 0xa8c) <= fVar2) || (20.0 < *(float *)(param_1 + 0xa8c))) {
      if (*(float *)(param_1 + 0xa8c) <= 20.0) goto LAB_0041de16;
      *(undefined4 *)(param_1 + 0x1108) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1108) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x10ac);
  }
  else {
    if (5.0 < *(float *)(param_1 + 0xa8c)) {
      fVar2 = 3.0;
      goto LAB_0041dda8;
    }
LAB_0041dd8b:
    *(undefined4 *)(param_1 + 0x1108) = 0;
    if (piVar1[0x2de] == 0) goto LAB_0041de16;
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x10ac) = fVar2;
LAB_0041de16:
  if (*(int *)(param_1 + 0x1108) != 2) {
    *(undefined4 *)(param_1 + 0x10a8) = 0;
    *(float *)(param_1 + 0x10a4) = *(float *)(param_1 + 0x10a4) + 1.0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10a4) = 0;
  *(float *)(param_1 + 0x10a8) = *(float *)(param_1 + 0x10a8) + 1.0;
  return;
}

// 0041DE60  FUN_0041de60  size=222  [between]
void __fastcall FUN_0041de60(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x108,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if ((*(int *)(param_1 + 0xf84) != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x1b,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    if ((*(int *)(param_1 + 0xf84) != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0))
    {
      fVar3 = (float10)FUN_00a958c0(0);
      FUN_00a95e60(0,(float)fVar3);
      (**(code **)(*piVar2 + 100))();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 0041DF40  FUN_0041df40  size=1309  [between]
void __fastcall FUN_0041df40(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar5 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    FUN_00a8ce90(&local_30,local_20);
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar5 + 0x94) + local_1c);
    param_1[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar5 + 0x10);
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    param_1[0x14] = (int)(*(float *)(iVar5 + 0x40) + local_30);
    param_1[0x15] = (int)(fVar1 + fStack_2c);
    param_1[0x16] = (int)(fVar2 + fStack_28);
    param_1[0x17] = iStack_24;
  }
  (**(code **)(*param_1 + 0x314))();
  if (iVar5 == 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x214))(0,0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
    goto switchD_0041e011_default;
  case 1:
    FUN_00aa43e0(0x17b,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(2);
    (**(code **)(*param_1 + 0x394))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x21:
  case 0x23:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2b:
  case 0x2d:
    goto switchD_0041e011_caseD_2;
  case 3:
    FUN_00aa43e0(0x16e,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 4;
    break;
  case 5:
    FUN_00aa43e0(0x16f,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(6);
    FUN_00419dc0();
    goto switchD_0041e011_caseD_2;
  case 7:
    FUN_00aa43e0(0x170,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 8;
    break;
  case 9:
    FUN_00aa43e0(0x171,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 10;
    break;
  case 0xb:
    FUN_00aa43e0(0x172,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0xc);
    FUN_00419dc0();
    goto switchD_0041e011_caseD_2;
  case 0xd:
    FUN_00aa43e0(0x173,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0xe;
    break;
  case 0xf:
    FUN_00aa43e0(0x174,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x10;
    break;
  case 0x11:
    FUN_00aa43e0(0x175,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0x12);
    FUN_00419dc0();
    goto switchD_0041e011_caseD_2;
  case 0x13:
    FUN_00aa43e0(0x176,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x14;
    break;
  case 0x15:
    FUN_00aa43e0(0x177,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x16;
    break;
  case 0x17:
    FUN_00aa43e0(0x178,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x18;
    break;
  case 0x19:
    FUN_00aa43e0(0x179,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x1a;
    break;
  case 0x1c:
    FUN_00aa43e0(0x17a,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0x1d);
  case 0x1d:
    uVar4 = FUN_00a959f0(0);
    if (0x27 < uVar4) {
      FUN_004168f0(6);
    }
    goto switchD_0041e011_caseD_2;
  case 0x1e:
    FUN_00aa43e0(0x17c,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0x1f);
  case 0x1f:
    uVar7 = 0x3f99999a;
    uVar8 = 0;
    FUN_00a92f90(0,0x3f99999a);
    FUN_00407ab0(uVar8,uVar7);
    goto switchD_0041e011_caseD_2;
  case 0x20:
    FUN_00aa43e0(0x17d,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x21;
    break;
  case 0x22:
    FUN_00aa43e0(0x17e,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0x23);
    FUN_00419dc0();
    goto switchD_0041e011_caseD_2;
  case 0x24:
    FUN_00aa43e0(0x17f,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x25;
    break;
  case 0x26:
    FUN_00aa43e0(0x180,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x27;
    break;
  case 0x28:
    FUN_00aa43e0(0x181,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x29;
    break;
  case 0x2a:
    FUN_00aa43e0(0x182,iVar3);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0x2b);
    FUN_00419dc0();
    goto switchD_0041e011_caseD_2;
  case 0x2c:
    FUN_00aa43e0(0x183,iVar3);
    FUN_00a96070(0,0x8000000,1);
    uVar8 = 0x2d;
    break;
  default:
    goto switchD_0041e011_default;
  }
  FUN_00a8cb60(uVar8);
switchD_0041e011_caseD_2:
  FUN_00b94790(0x3f800000,0x3f800000);
switchD_0041e011_default:
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x10c4) != 0)) {
    FUN_00b7ab80(0x40000000,0x3dcccccd);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00dc1270(0,0);
  }
  return;
}

// 0041E520  FUN_0041e520  size=903  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041e520(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00da8810(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  piVar4 = (int *)0x0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x318))();
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 9) {
    iVar2 = FUN_00a7f600(0xd00a8);
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      param_1[0x14] = *(int *)(iVar2 + 0x40);
      param_1[0x15] = *(int *)(iVar2 + 0x44);
      param_1[0x16] = *(int *)(iVar2 + 0x48);
      param_1[0x17] = *(int *)(iVar2 + 0x4c);
      param_1[0x24] = *(int *)(iVar2 + 0x90);
      param_1[0x25] = *(int *)(iVar2 + 0x94);
      param_1[0x26] = *(int *)(iVar2 + 0x98);
      param_1[0x27] = *(int *)(iVar2 + 0x9c);
    }
    if (piVar4 != (int *)0x0) {
      puVar5 = &DAT_01b34c30;
      (**(code **)(*piVar4 + 4))(&DAT_01b34c30);
      FUN_00dd6d80(puVar5);
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
  }
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa43e0(0x199,iVar1);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(1);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(2);
      return;
    }
    break;
  case 2:
    FUN_00aa43e0(0x19a,iVar1);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(3);
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(4);
      return;
    }
    break;
  case 4:
    FUN_00aa43e0(0x19b,iVar1);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(5);
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(6);
      return;
    }
    break;
  case 6:
    FUN_00aa43e0(0x19c,iVar1);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(7);
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(8);
      return;
    }
    break;
  case 8:
    FUN_00aa43e0(0x19d,iVar1);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(9);
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    _DAT_01bea690 = DAT_01bea390;
    _DAT_01bea694 = DAT_01bea394;
    _DAT_01bea698 = DAT_01bea398;
    _DAT_01bea69c = DAT_01bea39c;
    _DAT_01bea630 = DAT_01bea380;
    _DAT_01bea634 = DAT_01bea384;
    _DAT_01bea638 = DAT_01bea388;
    _DAT_01bea63c = DAT_01bea38c;
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x314))();
      FUN_00dc1270(0,0);
      (**(code **)(*param_1 + 0x388))(0);
      DAT_01bea060 = DAT_01bea060 & 0xbfffffff;
      FUN_00c81e90(7);
      FUN_00c81e40(8);
    }
  }
  return;
}

// 0041E8D0  FUN_0041e8d0  size=359  [between]
void __fastcall FUN_0041e8d0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iStack_120;
  int local_110 [4];
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_90;
  
  if (*(int *)(param_1 + 0xf98) == 0) {
    FUN_004105d0();
    local_fc = *(undefined4 *)(param_1 + 0x4f0);
    local_110[1] = 100;
    local_110[3] = 0xf;
    local_100 = 2;
    local_110[2] = 0x96;
    local_90 = 0xffffffff;
    uVar1 = CollisionAttackData::CollisionAttackData(local_110);
    uVar1 = FUN_009f8b40(uVar1);
    piVar2 = (int *)CollisionCapsule::CollisionCapsule(10,uVar1);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      piVar2[0xe0] = local_110[0];
      piVar2[0xe3] = 1;
      uVar1 = FUN_009f8b40(0);
      (**(code **)(iVar3 + 0x20))(0x1e,uVar1);
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0x701);
      iVar3 = FUN_00a959f0(0);
      if (iVar3 < 10) {
        piVar2[0x165] = 0x40000000;
        piVar2[0x15c] = 0;
        piVar2[0x15d] = -0x41000000;
        piVar2[0x15e] = 0;
        piVar2[0x15f] = iStack_120;
        iVar3 = 0x40a00000;
      }
      else {
        piVar2[0x165] = 0x3f800000;
        piVar2[0x15c] = 0;
        piVar2[0x15d] = -0x41000000;
        piVar2[0x15e] = 0;
        piVar2[0x15f] = iStack_120;
        iVar3 = 0x3e4ccccd;
      }
      piVar2[0x164] = iVar3;
      FUN_00a8c370(piVar2,*(undefined4 *)(param_1 + 0x760));
      *(int **)(param_1 + 0xf98) = piVar2;
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
  }
  return;
}

// 0041EA40  FUN_0041ea40  size=500  [between]
void __fastcall FUN_0041ea40(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  undefined1 local_20 [4];
  float local_1c;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    FUN_00a8ce90(&local_30,local_20);
    fVar3 = (float10)FUN_00ddba30(*(float *)(iVar2 + 0x94) + local_1c);
    param_1[0x25] = (int)(float)fVar3;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar2 + 0x10);
    local_30 = *(float *)(iVar2 + 0x40) + local_30;
    fStack_2c = *(float *)(iVar2 + 0x44) + fStack_2c;
    fStack_28 = *(float *)(iVar2 + 0x48) + fStack_28;
    param_1[0x16] = (int)fStack_28;
    param_1[0x14] = (int)local_30;
    param_1[0x15] = (int)fStack_2c;
    param_1[0x17] = iStack_24;
    fVar3 = (float10)FUN_00a958c0(0);
    if (((float10)(float)(undefined *)0x0 < fVar3) &&
       ((fVar3 = (float10)FUN_00a958c0(0), (float10)(float)(undefined *)0x0 < fVar3 &&
        (iVar2 = FUN_0041c9e0(iVar2), iVar2 != 0)))) {
      fVar3 = (float10)FUN_00a958c0(0);
      FUN_00a95e60(0,(float)fVar3);
    }
  }
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4520(0x1a2,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    (**(code **)(*param_1 + 0x314))();
    FUN_00dc1270(0,0);
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 0041EC40  FUN_0041ec40  size=545  [between]
void __fastcall FUN_0041ec40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  
  FUN_00a929d0();
  if (*(int *)(param_1 + 0x754) != 0) {
    if (DAT_018b9174 - 0xa00U < 0x100) {
      FUN_00a8cb50(0x10006);
      *(undefined4 *)(param_1 + 0x874) = 3000;
      *(undefined4 *)(param_1 + 0x870) = 3000;
      *(undefined4 *)(param_1 + 0x12b4) = 0;
      *(undefined4 *)(param_1 + 0x12b8) = 0;
      return;
    }
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_bc = 0;
    DAT_01dc08dc = 0;
    local_b8 = 0;
    DAT_01dc08e0 = 0;
    uVar1 = FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,0x507,&local_c0,&local_b0,0x41200000,
                         0x3f000000,0xbf800000);
    FUN_00418130(uVar1);
    uVar1 = FUN_00c5abe0(param_1 + 0x12e0);
    *(undefined4 *)(param_1 + 0x1378) = uVar1;
    FUN_00c52ab0(uVar1,1);
    FUN_00c52700(*(undefined4 *)(param_1 + 0x1378),0);
    uVar1 = FUN_0041b760(0x40);
    *(undefined4 *)(param_1 + 0x874) = uVar1;
    uVar1 = FUN_0041b760(0x40);
    *(undefined4 *)(param_1 + 0x870) = uVar1;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x44);
    *(int *)(param_1 + 0x12b4) = iVar2 * (*(int *)(param_1 + 0x874) / 100);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x47);
    *(int *)(param_1 + 0x12b8) = iVar2 * (*(int *)(param_1 + 0x874) / 100);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x45);
    *(int *)(param_1 + 0x12bc) = iVar2 * (*(int *)(param_1 + 0x874) / 100);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x46);
    *(int *)(param_1 + 0x12c0) = iVar2 * (*(int *)(param_1 + 0x874) / 100);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x48);
    *(undefined4 *)(param_1 + 0x12c4) = uVar1;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x4a);
    *(float *)(param_1 + 0x12d0) = (float)fVar3;
  }
  return;
}

// 0041EE70  Em0020::vf130  size=1107  [class]
int __thiscall Em0020::vf130(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint local_c;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_0163d15c);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar5 = 10;
  local_c = 1;
  FUN_00a8d280();
  if (*(int *)(param_1 + 0x754) != 0) {
    if (DAT_018b9174 - 0xa00U < 0x100) {
      uVar5 = FUN_00ac8520((uint)*param_2);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
      local_c = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
      if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
        puVar6 = &DAT_01be9db8;
        (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
        iVar4 = FUN_00dd6d80(puVar6);
        if (((iVar4 != 0) && (*(int *)(param_1 + 0x1200) != 0)) &&
           (iVar4 = FUN_00b7c970(), iVar4 < (int)uVar5)) {
          *(undefined4 *)(param_1 + 0x10b8) = 1;
        }
      }
    }
    else {
      uVar5 = FUN_00ac8520(*param_2 + 1);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2 + 1);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2 + 1);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2 + 1);
      local_c = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2 + 1);
      iVar4 = FUN_00a8cab0();
      if (((iVar4 == 0x3000c) && (*(int *)(param_1 + 0x870) <= *(int *)(param_1 + 0x874) / 10)) ||
         (iVar4 = FUN_00a8cab0(), iVar4 == 0x200008)) {
        uVar5 = 400;
      }
    }
  }
  *(undefined1 *)(puVar1 + 4) = 10;
  puVar1[1] = uVar5;
  puVar1[3] = local_c;
  puVar1[2] = 10;
  *puVar1 = (uint)*param_2;
  *(undefined2 *)(puVar1 + 0x21) = 0x5001;
  switch(*param_2) {
  case 4:
    *puVar1 = 0xca;
    break;
  case 6:
    *puVar1 = 0xcb;
    break;
  case 8:
    *puVar1 = 0xcc;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    break;
  case 10:
    *(undefined2 *)(puVar1 + 0x21) = 0x5004;
    *puVar1 = 0xcd;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    break;
  case 0xc:
    goto switchD_0041f0c2_caseD_c;
  case 0xe:
    *(undefined2 *)(puVar1 + 0x21) = 0x5003;
    *puVar1 = 0xcf;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    break;
  case 0x10:
    *puVar1 = 0xd0;
    goto switchD_0041f0c2_caseD_c;
  case 0x12:
    *puVar1 = 0xd1;
    break;
  case 0x14:
    *puVar1 = 0xd2;
    break;
  case 0x16:
    *puVar1 = 0xd3;
    break;
  case 0x18:
    *puVar1 = 0xd4;
    puVar1[0x23] = puVar1[0x23] | 0x2000;
    break;
  case 0x1a:
    *(undefined2 *)(puVar1 + 0x21) = 0x5002;
    *puVar1 = 0xd5;
    puVar1[0x23] = puVar1[0x23] | 0x2000;
    break;
  case 0x1c:
    *puVar1 = 0xd6;
    goto LAB_0041f19a;
  case 0x20:
    *(undefined2 *)(puVar1 + 0x21) = 0x5003;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    break;
  case 0x22:
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    if (*(int *)(param_1 + 0x1084) == 0x3000e) {
      *puVar1 = 0xce;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      break;
    }
    goto LAB_0041f136;
  case 0x24:
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *puVar1 = 0xce;
    goto LAB_0041f19a;
  case 0x28:
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_0041f19a:
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x31:
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *puVar1 = 0xcf;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x33:
    puVar1[0x23] = puVar1[0x23] | 0x100;
  }
switchD_0041f0c2_caseD_5:
  if ((((byte)DAT_01bea090 & 0x10) != 0) && (1000.0 < *(float *)(param_1 + 0x123c))) {
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x2000;
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    if ((puVar1[0x23] & 0x2000) != 0) {
      return iVar2;
    }
  }
  else {
    iVar4 = FUN_00a8c760(0x39);
    if (iVar4 != 0) {
      puVar1[0x23] = puVar1[0x23] & 0xfffffeff;
      return iVar2;
    }
    if (*(int *)(param_1 + 0x1084) == 0x3000e) {
      return iVar2;
    }
    iVar4 = FUN_00a8cab0();
    if (iVar4 == 0x30029) {
      return iVar2;
    }
    iVar4 = FUN_00a8cab0();
    if (iVar4 == 0x3002a) {
      return iVar2;
    }
  }
  puVar1[0x23] = puVar1[0x23] | 0x100;
  return iVar2;
switchD_0041f0c2_caseD_c:
  *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_0041f136:
  puVar1[0x23] = puVar1[0x23] | 0x40000000;
  goto switchD_0041f0c2_caseD_5;
}

// 0041F350  FUN_0041f350  size=286  [callgraph]
void __fastcall FUN_0041f350(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_120;
  int local_110 [4];
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_90;
  
  if (*(int *)(param_1 + 0xf98) == 0) {
    FUN_004105d0();
    local_fc = *(undefined4 *)(param_1 + 0x4f0);
    local_110[1] = 100;
    local_110[3] = 0xf;
    local_100 = 2;
    local_110[2] = 0x96;
    local_90 = 0xffffffff;
    uVar2 = CollisionAttackData::CollisionAttackData(local_110);
    uVar2 = FUN_009f8b40(uVar2);
    piVar3 = (int *)CollisionCapsule::CollisionCapsule(10,uVar2);
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      piVar3[0xe0] = local_110[0];
      piVar3[0xe3] = 1;
      uVar2 = FUN_009f8b40(0);
      (**(code **)(iVar1 + 0x20))(0x1e,uVar2);
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      piVar3[0x165] = 0x40733333;
      piVar3[0x15c] = 0;
      piVar3[0x15d] = 0;
      piVar3[0x15e] = 0x3f800000;
      piVar3[0x15f] = iStack_120;
      piVar3[0x164] = 0x3f266666;
      FUN_00a8c370(piVar3,*(undefined4 *)(param_1 + 0x760));
      *(int **)(param_1 + 0xf98) = piVar3;
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
  }
  return;
}

// 0041F470  FUN_0041f470  size=53  [callgraph]
void __fastcall FUN_0041f470(int param_1)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0xa8c) <= 6.25) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      FUN_00a8cca0(1);
      FUN_00a8cb60(0);
    }
  }
  return;
}

// 0041F4B0  FUN_0041f4b0  size=65  [callgraph]
void __fastcall FUN_0041f4b0(int param_1)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0xa8c) <= 6.25) {
    iVar1 = FUN_00a8cac0();
    if (0 < iVar1) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
        FUN_00a8cca0(1);
        FUN_00a8cb60(0);
      }
    }
  }
  return;
}

// 0041F500  FUN_0041f500  size=246  [callgraph]
void __fastcall FUN_0041f500(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x870) <= *(int *)(param_1 + 0x874) / 10) {
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      local_20 = 0;
      local_1c = 0xbf000000;
      local_18 = 0x40400000;
      iVar2 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x404ccccd,
                           0x40400000,0x1b,9);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x48) = 0;
        *(undefined4 *)(iVar2 + 0x40) = 0x3f4ccccd;
        *(undefined4 *)(iVar2 + 0x44) = 0x3ecccccd;
      }
      piVar1 = *(int **)(param_1 + 0xa84);
      if (piVar1 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d70(puVar3);
        if ((iVar2 != 0) && (piVar1[0x3d3] != 0)) {
          FUN_00b7ab80(0x40400000,0x3d4ccccd);
        }
      }
    }
  }
  FUN_0041f350();
  return;
}

// 0041F620  FUN_0041f620  size=77  [callgraph]
undefined4 __thiscall FUN_0041f620(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 == 0x4f) {
    return 0;
  }
  iVar1 = FUN_00a8c760(0x10);
  if ((iVar1 == 0) && (uVar2 = FUN_0041bb20(), (int)(uVar2 & 0xffff) <= *(int *)(param_1 + 0x10cc)))
  {
    iVar1 = FUN_00a8c760(0x37);
    if (iVar1 == 0) {
      return 0;
    }
    if (*param_2 == 0x2f) {
      return 0;
    }
  }
  return 1;
}

// 0041F670  FUN_0041f670  size=99  [callgraph]
void __thiscall FUN_0041f670(int param_1,int param_2)

{
  short sVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x12c8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x10e4) = 0;
    *(undefined4 *)(param_1 + 0x12c8) = 1;
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      FUN_0041be30(0x80001);
      return;
    }
    if (sVar1 == 1) {
      FUN_0041be30(0x80002);
      return;
    }
  }
  return;
}

// 0041F750  FUN_0041f750  size=813  [callgraph]
void __fastcall FUN_0041f750(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xf7c) == 0) {
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_0041c500();
  uVar1 = 0x3e2aaaab;
  if (*(short *)(param_1 + 0x14b2) != 0) {
    uVar1 = 0x3c888889;
  }
  switch(*(short *)(param_1 + 0x14b2)) {
  case 0:
    FUN_00a9e290("em0026_0000",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 1;
    goto LAB_0041f7de;
  case 1:
LAB_0041f7de:
                    /* WARNING: Could not recover jumptable at 0x0041f7e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 100))();
    return;
  case 2:
    FUN_00a9e290("em0026_0001",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 3;
    break;
  case 3:
  case 7:
  case 0xb:
  case 0x13:
    break;
  case 4:
    FUN_00a9e290("em0026_0010",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 5;
    goto LAB_0041f9f8;
  case 5:
  case 9:
  case 0xd:
  case 0x11:
    goto LAB_0041f9f8;
  case 6:
    FUN_00a9e290("em0026_0002",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 7;
    break;
  case 8:
    FUN_00a9e290("em0026_0080",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 9;
    goto LAB_0041f9f8;
  case 10:
    FUN_00a9e290("em0026_0081",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 0xb;
    break;
  case 0xc:
    FUN_00a9e290("em0026_0082",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 0xd;
    goto LAB_0041f9f8;
  case 0xe:
    FUN_00a9e290("em0026_a600",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 0xf;
    goto LAB_0041f993;
  case 0xf:
LAB_0041f993:
    (**(code **)(*piVar2 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x14b2) = 0x10;
    return;
  case 0x10:
    FUN_00a9e290("em0026_a6f0",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 0x11;
LAB_0041f9f8:
    (**(code **)(*piVar2 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x14b2) = 0;
    return;
  case 0x12:
    FUN_00a9e290("em0026_a6f2",0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x14b2) = 0x13;
    break;
  default:
    goto switchD_0041f79b_default;
  }
  (**(code **)(*piVar2 + 100))();
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(undefined2 *)(param_1 + 0x14b2) = 0;
    return;
  }
switchD_0041f79b_default:
  return;
}

// 0041FEE0  FUN_0041fee0  size=33  [callgraph]
undefined4 __fastcall FUN_0041fee0(undefined4 param_1)

{
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  return param_1;
}

// 0041FF10  FUN_0041ff10  size=566  [callgraph]
void __fastcall FUN_0041ff10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_008ec660(param_1,0x40000000,0x3f000000,0x41a00000,0x41a00000,0x78,7,0);
  *(int *)(param_1 + 0x764) = iVar2;
  *(float *)(iVar2 + 0xf4) = *(float *)(iVar2 + 0xf4) * 0.5;
  FUN_008e6d00();
  FUN_0041ec40();
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
  uVar3 = FUN_00a8d2a0();
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar2 + 0x594) = 0x3f666666;
    *(undefined4 *)(iVar2 + 0x590) = 0x3f000000;
    FUN_00d771d0(0xb);
    FUN_00a93a00(iVar2,uVar3);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  uVar3 = FUN_00a8d2a0();
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionSphere::CollisionSphere(0,*puVar4,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x380) = 1;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar2 + 0x510) = 0x3fc00000;
    _strncpy_s((char *)(iVar2 + 0x394),0x20,"AvoidArea",0x1f);
    FUN_00a93a00(iVar2,uVar3);
    *(uint *)(iVar2 + 900) = *(uint *)(iVar2 + 900) | 1;
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x7b0) = uVar3;
  uVar3 = FUN_00de46d0("_col.hkx",0);
  uVar5 = FUN_00de4550("_col.hkx",0);
  iVar2 = FUN_008f6410(uVar1,uVar5,uVar3);
  if (iVar2 != 0) {
    FUN_008f2cd0(0);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(7);
    puVar4 = (undefined4 *)FUN_009f8b60();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
    FUN_008f1600(0x80000000);
    FUN_008f1600(0x20);
    FUN_008f18c0(0x100);
  }
  return;
}

// 00420150  Em0020::vf44  size=342  [class]
void __fastcall Em0020::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a92a00();
  FUN_00a944d0();
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa840();
  FUN_00a934c0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
  DAT_01dc08dc = 0;
  DAT_01dc08e0 = 0;
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  *(undefined4 *)(param_1 + 0x1194) = 0;
  if (*(int *)(param_1 + 0x118c) != 0) {
    *(undefined4 *)(param_1 + 0x1194) = 0;
    if (*(int *)(param_1 + 0x1198) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x118c),0);
      *(undefined4 *)(param_1 + 0x1198) = 0;
    }
    *(undefined4 *)(param_1 + 0x118c) = 0;
    *(undefined4 *)(param_1 + 0x1190) = 0;
  }
  FUN_00a829b0();
  FUN_00a829b0();
  RayCastManager::getWork(param_1 + 0x119c);
  RayCastManager::getWork(param_1 + 0x11a0);
  RayCastManager::getWork(param_1 + 0x11a4);
  RayCastManager::getWork(param_1 + 0x11a8);
  BehaviorEmBase::vf44();
  return;
}

// 004202B0  Em0020::vf19C  size=179  [class]
void __thiscall Em0020::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 00420370  FUN_00420370  size=282  [callgraph]
void __fastcall FUN_00420370(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  
  if (DAT_018b9174 - 0xa00U < 0x100) {
    FUN_0041dd40();
    return;
  }
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x1370) == 0) {
        fVar2 = 20.0;
      }
      else {
        fVar2 = 10.0;
      }
      if (fVar2 < *(float *)(param_1 + 0xa8c)) {
        if ((*(float *)(param_1 + 0xa8c) <= fVar2) || (50.0 < *(float *)(param_1 + 0xa8c))) {
          if (*(float *)(param_1 + 0xa8c) <= 50.0) goto LAB_0042044a;
          *(undefined4 *)(param_1 + 0x1108) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x1108) = 1;
        }
        fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x10ac);
      }
      else {
        *(undefined4 *)(param_1 + 0x1108) = 0;
        if (piVar1[0x2de] == 0) goto LAB_0042044a;
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 0x10ac) = fVar2;
    }
  }
LAB_0042044a:
  if (*(int *)(param_1 + 0x1108) == 2) {
    *(undefined4 *)(param_1 + 0x10a4) = 0;
    *(float *)(param_1 + 0x10a8) = *(float *)(param_1 + 0x10a8) + 1.0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10a8) = 0;
  *(float *)(param_1 + 0x10a4) = *(float *)(param_1 + 0x10a4) + 1.0;
  return;
}

// 00420490  FUN_00420490  size=131  [callgraph]
void __fastcall FUN_00420490(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x23,0,*(undefined4 *)(param_1 + 0x109c),0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x109c) = 0x3e4ccccd;
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x93c) = 0x43340000;
    *(undefined4 *)(param_1 + 0x12c8) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00420530  FUN_00420530  size=426  [callgraph]
void __thiscall FUN_00420530(int *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  if (DAT_018b9174 - 0xa00U < 0x100) {
    FUN_0041dc50(param_2);
    return;
  }
  uVar2 = param_1[0x186];
  uVar4 = param_2 & 0xffff0000;
  if (((uVar4 == 0x20000) && ((param_1[0x421] & 0xffff0000U) != 0x20000)) && (param_1[0x370] != 2))
  {
    fVar6 = (float10)FUN_00dde300(0,0x40800000);
    param_1[0x4df] = (int)(float)(fVar6 * (float10)10.0 + (float10)150.0);
  }
  if ((((uVar2 & 0xffff0000) == 0x30000) && (uVar4 == 0x40000)) && (param_1[0x43a] == 0)) {
    param_1[0x439] = 0x43160000;
  }
  if ((param_1[0x4b2] != 0) &&
     (((((uVar2 & 0xffff0000) == 0x30000 && (uVar4 != 0x30000)) &&
       ((param_1[0x421] & 0xffff0000U) == 0x80000)) || (uVar4 == 0x40000)))) {
    param_1[0x4b2] = 0;
  }
  FUN_0041d8b0(uVar4);
  if (param_1[0x4dc] == 0) {
    bVar5 = uVar4 == 0x30000;
  }
  else {
    bVar5 = uVar4 == 0x80000;
  }
  if (bVar5) {
    param_1[0x433] = 0;
  }
  uVar2 = FUN_00a8cab0();
  if (param_2 == uVar2) {
    uVar2 = FUN_00a8cab0();
    if (param_2 == uVar2) {
      param_1[0x423] = param_1[0x423] + 1;
    }
  }
  else {
    param_1[0x423] = 0;
  }
  pcVar1 = *(code **)(*param_1 + 0x1d4);
  param_1[0x4e0] = 0x3f800000;
  (*pcVar1)(0);
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  pcVar1 = *(code **)(*param_1 + 0x1f8);
  param_1[0x42f] = 0;
  (*pcVar1)(0);
  if (param_1[0x4e4] == 0) {
    iVar3 = FUN_00a8cab0();
    if (iVar3 == 0x30025) {
      uVar2 = FUN_00a8cab0();
      if (uVar2 != param_2) {
        param_1[0x4e4] = 1;
      }
    }
  }
  return;
}

// 004206E0  FUN_004206e0  size=682  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_004206e0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  float *pfStack_3d0;
  float *pfStack_3cc;
  float *pfStack_3c8;
  undefined1 *puStack_3c4;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float local_390 [5];
  undefined1 auStack_37c [12];
  undefined1 local_370 [52];
  float afStack_33c [4];
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined4 uStack_318;
  uint uStack_2a0;
  uint uStack_29c;
  undefined4 uStack_228;
  
  local_390[0] = 0.0;
  local_390[1] = 0.0;
  puStack_3c4 = (undefined1 *)0x5;
  local_390[2] = 1.0;
  pfStack_3c8 = (float *)(param_1 + 0x90);
  pfStack_3cc = (float *)local_370;
  pfStack_3d0 = (float *)0x420714;
  FUN_00ddc1d0();
  puStack_3c4 = local_370;
  pfStack_3cc = local_390;
  pfStack_3d0 = (float *)0x420729;
  pfStack_3c8 = pfStack_3cc;
  D3DXVec3TransformNormal();
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = *(float *)(param_1 + 0x4c) + param_2[3] + local_390[0];
  pfStack_3d0 = (float *)0x42077b;
  FUN_004105d0();
  pfStack_3d0 = (float *)0x420787;
  FUN_00410710();
  pfStack_3d0 = (float *)0x420793;
  FUN_0041cf30();
  local_390[1] = 0.0;
  local_390[2] = *(float *)(param_1 + 0x94);
  uStack_228 = 0x2b;
  local_390[3] = 0.0;
  fStack_3ac = *param_3 + fStack_39c + fVar4 + fVar1;
  fStack_3a8 = param_3[1] + fVar5 + fVar2 + fStack_398;
  fStack_3a4 = param_3[2] + fVar6 + fVar3 + fStack_394;
  fStack_3a0 = param_3[3] + fVar7;
  pfStack_3d0 = (float *)0x42f00000;
  FUN_00416e30(&stack0xfffffc44,&fStack_3ac,local_390 + 1,0x40000000);
  uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
  uStack_29c = uStack_29c | 0x2000000;
  uStack_2a0 = uStack_2a0 | 0x42002000;
  uStack_32c = 0xcf;
  uStack_328 = 100;
  uStack_320 = 0xf;
  uStack_31c = 2;
  uStack_324 = 0x96;
  pfStack_3d0 = (float *)0x420875;
  pfStack_3d0 = (float *)FUN_00a7c7f0();
  FUN_00a7c960();
  pfStack_3d0 = afStack_33c;
  afStack_33c[1] = 3.44385e-40;
  piVar8 = (int *)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0));
  if (piVar8 != (int *)0x0) {
    pfStack_3d0 = (float *)&DAT_01b354b0;
    (**(code **)(*piVar8 + 4))();
    iVar9 = FUN_00dd6d80();
    if (iVar9 != 0) {
      pfStack_3d0 = (float *)0x4208f3;
      pfVar10 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x68))();
      fStack_3ac = *pfVar10;
      fStack_3a8 = pfVar10[1];
      fStack_3a4 = pfVar10[2];
      fStack_3a0 = pfVar10[3];
      pfStack_3d0 = &fStack_3ac;
      FUN_00a8e880();
      pfStack_3d0 = *(float **)(param_1 + 0x94);
      D3DXMatrixRotationY(auStack_37c);
      D3DXVec3TransformNormal(&puStack_3c4,&puStack_3c4,local_390 + 3);
      FUN_00602820();
      pfStack_3d0 = (float *)((float)pfStack_3d0 * 0.5);
      pfStack_3cc = (float *)((float)pfStack_3cc * 0.5);
      pfStack_3c8 = (float *)((float)pfStack_3c8 * 0.5);
      puStack_3c4 = (undefined1 *)((float)puStack_3c4 * 0.5);
      FUN_00601c30(&pfStack_3d0);
    }
  }
  return;
}

// 00420B80  FUN_00420b80  size=2096  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00420b80(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  
  if (DAT_018b9174 - 0xa00U < 0x100) {
    fVar1 = (float)param_1[0x52f];
    if (param_1[0x480] != 0) {
      fVar1 = (float)param_1[0x530];
    }
    if ((fVar1 < (float)param_1[0x533] != (fVar1 == (float)param_1[0x533])) && (param_2 == 0x10000))
    {
      param_2 = 0x20000;
    }
  }
  if ((param_1[0x3e1] != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
    FUN_00aa4080(4,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
  }
  iVar6 = FUN_00a92f90();
  if (iVar6 != 0) {
    iVar6 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar6 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0xec) = 0x3f800000;
  }
  if (param_2 == 0x70000) {
    param_2 = 0x20000;
  }
  uVar8 = param_2 & 0xffff0000;
  if (uVar8 != 0x60000) {
    if (param_1[0x2a1] != 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x460] = iVar6;
    }
    if ((((((byte)DAT_01bea090 & 0x10) == 0) &&
         ((((iVar6 = FUN_00a8cab0(), iVar6 == 0x10000 || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10001))
           || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10002)) ||
          (iVar6 = FUN_00a8cab0(), iVar6 == 0x10006)))) && (uVar8 != 0x10000)) &&
       ((iVar6 = FUN_00a8cab0(), iVar6 != 0x10006 || (param_1[0x187] != 5)))) {
      param_1[0x422] = param_2;
      param_2 = 0x1000b;
      uVar8 = 0x10000;
    }
    FUN_00420530(param_2);
    uVar7 = FUN_00a8cab0();
    uVar7 = uVar7 & 0xffff0000;
    if ((uVar7 == 0x70000) || (uVar7 == 0x200000)) {
      DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
      FUN_00d89e60(0x22);
      if ((uVar8 != 0x70000) && (uVar8 != 0x200000)) {
        _DAT_01bea6c0 = 0;
        local_20 = 0;
        local_1c = 1.0;
        local_18 = 0;
        FUN_00de6060(&local_20);
        _DAT_01bea660 = local_20;
        _DAT_01bea664 = local_1c;
        _DAT_01bea668 = local_18;
        _DAT_01bea66c = local_14;
      }
      param_1[0x1bb] = 1;
      if ((0xff < DAT_018b9174 - 0xa00U) && ((int *)param_1[0x2a1] != (int *)0x0)) {
        puVar10 = &DAT_01be9db8;
        (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
        iVar6 = FUN_00dd6d80(puVar10);
        if (iVar6 != 0) {
          FUN_00b7eba0(param_1[0x13c]);
        }
      }
    }
    if (param_1[0x181] != 6) {
      FUN_00a93090(6);
    }
    param_1[0x419] = param_1[0x419] & 0x847fffff;
    iVar6 = param_1[0x3e6];
    if ((((iVar6 != 0) && (iVar2 = *(int *)(iVar6 + 0x360), iVar2 != 1)) && (iVar2 < 4)) &&
       (iVar2 == 0)) {
      FUN_00a9dac0(iVar6);
      param_1[0x3e6] = 0;
    }
    if ((uVar8 != 0x40000) && (param_2 != 0x20000)) {
      param_1[0x432] = 0;
    }
    if ((param_1[0x4dc] != 0) && (param_2 == 0x80006)) {
      param_2 = 0x30027;
    }
    if ((int)uVar8 < 0x70001) {
      if (uVar8 == 0x70000) {
        param_1[0x1bb] = 0;
        FUN_00419e00();
        if (param_2 == 0x70000) {
          param_1[0x4f5] = 0;
          param_1[0x4f6] = 0;
          param_1[0x4f7] = 0;
          param_1[0x430] = 0;
          param_1[0x42f] = 0;
          param_1[0x4f8] = 0;
        }
        param_1[0x472] = 0x3f800000;
        if ((uVar7 == 0x70000) && (param_1[0x4eb] != 0)) {
          FUN_00a8c9b0(0,6,0x3f800000,0);
          param_1[0x4eb] = 0;
        }
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        param_1[0x419] = param_1[0x419] | 0x40000000;
        param_1[0x419] = param_1[0x419] | 0x2000000;
        DAT_01bea060 = DAT_01bea060 | 0x2000000;
        FUN_00a93090(2);
        param_1[0x444] = 1;
        param_1[0x4f0] = 0;
      }
      else if ((int)uVar8 < 0x40001) {
        if (uVar8 == 0x40000) {
          param_1[0x48c] = 0;
          if ((DAT_018b9174 - 0xa00U < 0x100) && (param_2 == 0x40008)) {
            param_2 = 0x40004;
          }
          param_1[0x419] = param_1[0x419] | 0x50000000;
          if ((param_2 != 0x40005) && (param_1[0x2a1] != 0)) {
            FUN_00a8e880(param_1[0x2a1] + 0x50);
            iVar6 = FUN_00a8e9b0();
            param_1[0x25] = *(int *)(iVar6 + 4);
          }
          (**(code **)(*param_1 + 0x1f8))(1);
          if ((param_1[0x4dc] != 0) &&
             (uVar8 = FUN_00dde2a0(5,7), (int)(uVar8 & 0xffff) <= param_1[0x433])) {
            param_2 = 0x80008;
            param_1[0x48b] = 0x40a00000;
            param_1[0x433] = 0;
          }
        }
        else if (uVar8 == 0x20000) {
          param_1[0x419] = param_1[0x419] | 0x40000000;
          if (param_2 == 0x20000) {
            fVar9 = (float10)FUN_00dde300(0,0x40000000);
            param_1[0x248] = (int)(float)(fVar9 * (float10)15.0);
            if (param_1[0x370] == 2) {
              param_1[0x248] = 0;
            }
          }
          else if (param_2 == 0x20005) {
            if (param_1[0x480] == 0) {
              param_1[0x448] = 0;
              param_1[0x449] = 0;
              iVar6 = -0x3db80000;
            }
            else {
              local_1c = (float)param_1[0x11];
              fVar1 = (float)param_1[0x10];
              fVar3 = (float)param_1[0x11] - (float)param_1[0x11];
              if (SQRT(((float)param_1[0x12] - 10.0) * ((float)param_1[0x12] - 10.0) +
                       fVar1 * fVar1 +
                       ((float)param_1[0x11] - local_1c) * ((float)param_1[0x11] - local_1c)) <=
                  SQRT(((float)param_1[0x12] - -8.0) * ((float)param_1[0x12] - -8.0) +
                       fVar3 * fVar3 + fVar1 * fVar1)) {
                param_1[0x448] = 0;
                param_1[0x449] = (int)local_1c;
                iVar6 = 0x41200000;
              }
              else {
                param_1[0x448] = 0;
                param_1[0x449] = param_1[0x11];
                iVar6 = -0x3f000000;
              }
            }
            param_1[0x44a] = iVar6;
            param_1[1099] = local_14;
          }
        }
        else if (uVar8 == 0x30000) {
          FUN_00a8d280();
          if ((param_2 == 0x3000f) || (param_2 == 0x30018)) {
            uVar8 = FUN_00dde2a0(1,3);
            param_1[0x42c] = uVar8 & 0xffff;
          }
          param_1[0x419] = param_1[0x419] | 0x60000000;
          param_1[0x443] = param_1[0x442];
        }
      }
      else if (uVar8 == 0x50000) {
        param_1[0x419] = param_1[0x419] | 0x48000000;
      }
    }
    else if (uVar8 == 0x80000) {
      param_1[0x461] = param_1[0x460];
      fVar9 = (float10)FUN_0041d750();
      param_1[0x249] = (int)(float)(fVar9 * (float10)5.0);
      param_1[0x48b] = (int)((float)param_1[0x48b] + 1.0);
      if (((param_1[0x4dc] != 0) && (param_1[0x186] == 0x80008)) &&
         (uVar4 = FUN_00dde2a0(8,10),
         (float)uVar4 < (float)param_1[0x48b] != ((float)uVar4 == (float)param_1[0x48b]))) {
        if ((param_1[0x442] == 1) || (param_1[0x442] == 2)) {
          sVar5 = FUN_00dde2a0(0,1);
          if (sVar5 == 0) {
            param_2 = 0x30029;
          }
          else if (sVar5 == 1) {
            param_2 = 0x10000f;
          }
        }
        else {
          param_2 = 0x10000f;
        }
      }
    }
    else if (uVar8 == 0x100000) {
      param_1[0x426] = param_1[0x426] + 1;
      if ((((byte)DAT_01bea090 & 0x10) != 0) && (iVar6 = FUN_0041c960(param_1[0x2a1]), iVar6 != 0))
      {
        FUN_00a8caf0(0xc1,0,0,0);
      }
      if (param_1[0x2a1] != 0) {
        FUN_00a8e880(param_1[0x2a1] + 0x50);
        iVar6 = FUN_00a8e9b0();
        param_1[0x25] = *(int *)(iVar6 + 4);
      }
      param_1[0x419] = param_1[0x419] | 0x41000000;
    }
    else if (uVar8 == 0x200000) {
      DAT_01bea060 = DAT_01bea060 | 0x2000000;
      param_1[0x1bb] = 0;
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      if ((((param_2 != 0x200004) && (param_2 != 0x200005)) && (param_2 != 0x200006)) &&
         (param_2 != 0x200007)) {
        FUN_00a93090(2);
      }
      param_1[0x419] = param_1[0x419] | 0x800000;
      if (DAT_018b9174 - 0xa00U < 0x100) {
        param_1[0x505] = 0x43480000;
        param_1[0x520] = 0x40a00000;
      }
      param_1[0x25] = 0;
    }
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    FUN_00d89e60(0x23);
  }
  iVar6 = FUN_00a8cab0();
  param_1[0x421] = iVar6;
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  return;
}

// 004213B0  Em0020::vf1A0  size=443  [class]
undefined4 __thiscall Em0020::vf1A0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_3 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x618);
          if (iVar1 == 0x30014) {
            FUN_00420b80(0x30015,0,0,0,0);
            (**(code **)(*piVar2 + 0x150))(0x1e,*(undefined4 *)(param_1 + 0x4f0));
            return 1;
          }
          if (iVar1 == 0x30016) {
            FUN_00420b80(0x30017,0,0,0,0);
            (**(code **)(*piVar2 + 0x150))(0x1f,*(undefined4 *)(param_1 + 0x4f0));
            return 1;
          }
          if (iVar1 == 0x30029) {
            FUN_00420b80(0x3002a,0,0,0,0);
            (**(code **)(*piVar2 + 0x150))(0x23,*(undefined4 *)(param_1 + 0x4f0));
            return 1;
          }
          uVar3 = FUN_00a8cab0();
          iVar1 = FUN_0041d920(uVar3);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x1214) = 1;
          }
          if (*(int *)(param_1 + 0x10b8) != 0) {
            iVar1 = FUN_00a8cab0();
            if (iVar1 != 0xc9) {
              *(undefined4 *)(param_1 + 0x121c) = 1;
              FUN_00bf54e0(0xc9,0);
            }
          }
          iVar1 = FUN_00416d50(0x1b);
          if ((iVar1 != 0) && (*(float *)(param_1 + 0x123c) <= 700.0)) {
            *(undefined4 *)(param_1 + 0x109c) = 0x3f4ccccd;
            FUN_00a8caf0(0xf3,0,0,0);
            return 1;
          }
        }
      }
    }
  }
  *(uint *)(param_1 + 0x1064) = *(uint *)(param_1 + 0x1064) | 0x20000000;
  *(undefined4 *)(param_1 + 0x1230) = 0;
  return 0;
}

// 00421570  FUN_00421570  size=116  [between]
void __fastcall FUN_00421570(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x10d4) = 0;
  *(undefined4 *)(param_1 + 0x1194) = 0;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>(param_1 + 0x1188,1);
  iVar1 = *(int *)(param_1 + 0x1194);
  iVar2 = *(int *)(param_1 + 0x118c);
  for (iVar4 = *(int *)(param_1 + 0x118c); iVar4 != iVar1 * 0x150 + iVar2; iVar4 = iVar4 + 0x150) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), *(int *)(iVar3 + 0x4b0) == 0x10010)) {
      *(undefined4 *)(param_1 + 0x10d4) = 1;
    }
  }
  return;
}

// 004215F0  FUN_004215f0  size=341  [between]
void __fastcall FUN_004215f0(int param_1)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  if (((DAT_018b9174 - 0xa00U < 0x100) && (((byte)DAT_01bea090 & 0x10) != 0)) &&
     (fVar1 = *(float *)(param_1 + 0x123c), !NAN(fVar1) && 700.0 < fVar1 != (fVar1 == 700.0))) {
    *(undefined4 *)(param_1 + 0x1220) = 1;
LAB_0042162d:
    FUN_00420b80(0x10001,0,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x1108) == 0) {
    if (((byte)DAT_01bea090 & 0x10) == 0) goto LAB_0042172e;
  }
  else {
    if (((byte)DAT_01bea090 & 0x10) != 0) goto LAB_0042162d;
    sVar3 = FUN_00dde2a0(0,3);
    if ((((float)(ushort)(sVar3 * 100) + 200.0 < *(float *)(param_1 + 0x10ac)) &&
        (*(int *)(param_1 + 0x61c) == 1)) && (iVar4 = FUN_00a94ce0(0), iVar4 != 0)) {
      uVar2 = FUN_00dde2a0(0,2);
      if (uVar2 < 2) goto LAB_0042162d;
      if (uVar2 == 2) {
        FUN_00420b80(0x10006,0,0,0,0);
        *(undefined4 *)(param_1 + 0x61c) = 2;
        return;
      }
    }
  }
  if (*(int *)(param_1 + 0x1200) == 0) {
    return;
  }
  if (((byte)DAT_01bea090 & 0x10) != 0) {
    return;
  }
  sVar3 = FUN_00dde2a0(0,3);
  if (*(float *)(param_1 + 0x10ac) <= (float)(ushort)(sVar3 * 100) + 100.0) {
    return;
  }
LAB_0042172e:
  FUN_00420b80(0x20000,0,0,0,0);
  return;
}

// 00421750  FUN_00421750  size=481  [between]
void __fastcall FUN_00421750(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    param_1[0x248] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
    }
    break;
  case 2:
    FUN_00aa4080(10,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    break;
  case 3:
    goto LAB_0042182f;
  case 4:
    uVar1 = FUN_00a957b0(0);
    iVar2 = FUN_00a95540(0,uVar1);
    if (iVar2 != 0) {
      param_1[0x187] = 5;
      break;
    }
LAB_0042182f:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 5:
    FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x10000,0,0,0,0);
    }
  default:
    break;
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 00421950  FUN_00421950  size=164  [between]
void __fastcall FUN_00421950(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x82,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
  FUN_00420b80(*(undefined4 *)(param_1 + 0x1088),0,0,0,0);
  return;
}

// 00421A00  FUN_00421a00  size=61  [between]
void __fastcall FUN_00421a00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if ((0 < iVar1) && (*(float *)(param_1 + 0xa90) <= 81.0)) {
    FUN_00420b80(0x3001a,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1380) = 0x3f800000;
  }
  return;
}

// 00421A40  FUN_00421a40  size=324  [between]
void __fastcall FUN_00421a40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (400.0 < (float)param_1[0x2a4]) {
      FUN_00aa4080(0x19,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a8ccb0(1);
    }
    else {
      FUN_00420b80(0x3000c,0,0,0,0);
    }
  }
  else if (iVar1 == 1) {
    FUN_0041f350();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a959f0(0);
      if (iVar1 < 0xb) {
        FUN_00ac80a0(0x3f800000,0);
      }
      else {
        FUN_00ac80a0(param_1[0x4e0],0);
      }
    }
    else {
      FUN_00420b80(0x20000,0,0,0,0);
      param_1[0x4e0] = 0x3f800000;
    }
  }
  if (param_1[0x2a1] != 0) {
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
    }
  }
  return;
}

// 00421B90  FUN_00421b90  size=196  [between]
void __fastcall FUN_00421b90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((0xff < DAT_018b9174 - 0xa00U) && (*(int *)(param_1 + 0x870) <= *(int *)(param_1 + 0x12b8)))
     && (*(int *)(param_1 + 0x1084) == 0x30025)) {
    *(undefined4 *)(param_1 + 0x10e4) = 0x42f00000;
  }
  iVar2 = FUN_00a8cac0();
  if (((0 < iVar2) && (*(int *)(param_1 + 0x1108) == 0)) &&
     ((DAT_018b9174 - 0xa00U < 0x100 && (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0))
     )) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (((iVar2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x354))(), iVar2 == 0)) &&
       ((iVar2 = FUN_00416d50(0x1b), iVar2 == 0 && ((*(uint *)(param_1 + 0x1064) & 0x800000) == 0)))
       ) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  return;
}

// 00421C60  FUN_00421c60  size=972  [between]
void __fastcall FUN_00421c60(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[0x42b] = 0;
  iVar2 = FUN_00a8cac0();
  if ((iVar2 == 0) && (param_1[0x18a] == 0x30025)) {
    param_1[0x187] = 2;
  }
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0x1b,0,param_1[0x427],0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x427] = 0x3e4ccccd;
    FUN_00a8ccb0(1);
switchD_00421c9c_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
LAB_00421d1d:
      FUN_00a8ccb0(1);
    }
switchD_00421c9c_default:
    if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
    }
    return;
  case 1:
    goto switchD_00421c9c_caseD_1;
  case 2:
    if (DAT_018b9174 - 0xa00U < 0x100) {
      sVar1 = FUN_00dde2a0(0,2);
      if (sVar1 == 0) goto LAB_00421e67;
      if (sVar1 == 1) {
        FUN_00aa4080(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        *(undefined2 *)((int)param_1 + 0x14b2) = 10;
      }
      else if (sVar1 == 2) {
        FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        *(undefined2 *)((int)param_1 + 0x14b2) = 0xc;
      }
    }
    else {
      sVar1 = FUN_00dde2a0(0,1);
      if (sVar1 == 0) {
LAB_00421e67:
        FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        *(undefined2 *)((int)param_1 + 0x14b2) = 8;
      }
      else if (sVar1 == 1) {
        FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        *(undefined2 *)((int)param_1 + 0x14b2) = 0xc;
      }
    }
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) goto switchD_00421c9c_default;
    if ((0xff < DAT_018b9174 - 0xa00U) && (param_1[0x4e7] == 0)) {
      param_1[0x4e7] = 1;
      FUN_00a8ccb0(1);
      goto switchD_00421c9c_default;
    }
    if (DAT_018b9174 - 0xa00U < 0x100) {
      if ((param_1[0x442] != 0) || (iVar2 = FUN_00416d50(0x1b), iVar2 != 0)) {
        FUN_00420b80(0x10000,0,0,0,0);
      }
      goto switchD_00421c9c_default;
    }
    goto LAB_00421d1d;
  case 4:
    FUN_00aa4080(0x1c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  default:
    goto switchD_00421c9c_default;
  }
}

// 00422050  FUN_00422050  size=558  [between]
void __fastcall FUN_00422050(int *param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 2;
    }
  case 2:
    FUN_00aa4080(0x27,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
    param_1[0x187] = 3;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x2f,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  if (param_1[0x187] < 4) {
    fVar1 = (float)param_1[0x248];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
      return;
    }
    if (DAT_018b9174 - 0xa00U < 0x100) {
      param_1[0x187] = 4;
      return;
    }
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_00420b80(0x20004,0,0,0,0);
    }
    else if (sVar2 == 1) {
      FUN_00420b80(0x20003,0,0,0,0);
      return;
    }
  }
  return;
}

// 004222A0  FUN_004222a0  size=363  [between]
void __fastcall FUN_004222a0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a8c760(0x38);
  if (iVar2 != 0) {
    uVar3 = FUN_00ac8520(0x2a);
    if (0xff < DAT_018b9174 - 0xa00U) {
      uVar3 = FUN_00ac8520(0x2b);
    }
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa84) + 0x30c))(uVar3,0);
    }
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1370) != 0) {
      FUN_00420b80(0x10008,0,0,0,0);
      return;
    }
    FUN_00420b80(0x20000,0,0,0,0);
    return;
  }
  if (0xff < DAT_018b9174 - 0xa00U) goto LAB_004223ae;
  if (*(int *)(param_1 + 0x1200) == 0) {
    if (-62.0 < *(float *)(param_1 + 0x58)) {
      if (*(float *)(param_1 + 0x58) <= -62.0) goto LAB_004223ae;
      uVar3 = 0;
    }
    else {
LAB_004223a2:
      uVar3 = 0x40490fdb;
    }
  }
  else {
    uVar3 = 0;
    fVar1 = *(float *)(param_1 + 0x58);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      if (0.0 <= *(float *)(param_1 + 0x58)) goto LAB_004223ae;
      goto LAB_004223a2;
    }
  }
  *(undefined4 *)(param_1 + 0x94) = uVar3;
LAB_004223ae:
  FUN_00aa4080(0x5c,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0x8000000,1);
  FUN_00a8ccb0(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00422410  Em0020::vf34C  size=46  [class]
void Em0020::vf34C(void)

{
  int iVar1;
  
  iVar1 = FUN_0041dbb0();
  if (iVar1 != 0) {
    FUN_00420b80(0x10000,0,0,0,0);
    return;
  }
  FUN_00420b80(0x20000,0,0,0,0);
  return;
}

// 00422440  FUN_00422440  size=1287  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0042266b) */
/* WARNING: Removing unreachable block (ram,0x004227ee) */

void FUN_00422440(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float unaff_retaddr;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  pfStack_64 = (float *)0x42245f;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_2c;
      pfVar7[1] = local_28;
      pfVar7[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_2 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if (param_4 < (float)param_2) {
    param_2 = (float *)param_4;
  }
  if ((float)param_2 < param_5) {
    param_2 = (float *)param_5;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (local_40 <= local_28) {
    local_4c = local_28 + (float)param_2;
  }
  else {
    local_4c = (float)param_2;
    if (local_40 + 5.0 < local_28) {
      local_4c = (float)param_2 * 0.5;
    }
    local_4c = local_4c + local_40;
  }
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_38 = local_50 - local_20;
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
  fVar6 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    pfStack_64 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfStack_64 = pfVar7;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)pfStack_64 * (float)param_2 + local_34;
      pfVar1[1] = unaff_ESI * (float)param_2 + local_30;
      pfVar1[2] = local_5c * (float)param_2 + local_2c;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = local_38;
      }
      iVar2 = local_10 + 2;
      if (iVar2 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar2 = local_10 + 3;
      }
    }
  }
  local_10 = iVar2;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  pfStack_64 = (float *)(local_4c - local_34);
  local_5c = local_44 - local_2c;
  fVar6 = local_5c * local_5c +
          (float)pfStack_64 * (float)pfStack_64 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * unaff_retaddr;
  fVar8 = (float)pfVar7 * unaff_retaddr;
  pfStack_64 = (float *)((float)pfStack_64 * unaff_retaddr);
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar6;
        pfVar7[1] = local_50 - fVar8;
        pfVar7[2] = local_4c - (float)pfStack_64;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,ppfVar4,fVar6,fVar8);
  }
  return;
}

// 00422950  FUN_00422950  size=110  [callgraph]
undefined4 __fastcall FUN_00422950(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x1108) != 0)) &&
      (*(int *)(param_1 + 0x1200) == 0)) &&
     ((DAT_018b9174 - 0xa00U < 0x100 && (300.0 < *(float *)(param_1 + 0x10ac))))) {
    iVar1 = FUN_00418510();
    if (iVar1 == 0) {
      FUN_00420b80(0x10000,0,0,0,0);
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return 1;
    }
  }
  return 0;
}

// 004229C0  FUN_004229c0  size=1017  [callgraph]
undefined4 __fastcall FUN_004229c0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  int unaff_retaddr;
  undefined4 uVar6;
  
  if (((uint)param_1[0x440] < 5) || (5 < (uint)param_1[0x440])) {
    uVar6 = 0;
  }
  else {
    fVar1 = (float)param_1[0x225] - (9.8 / ((float)param_1[0x244] * 60.0)) * 5.0;
    param_1[0x225] = (int)fVar1;
    if (0.0 <= fVar1) {
      uVar6 = 1;
    }
    else {
      uVar6 = 1;
      param_1[0x225] = (int)(fVar1 * -1.0);
    }
  }
  (**(code **)(*param_1 + 0x1d4))(uVar6);
  param_1[0x225] = (int)((float)param_1[0x244] * (float)param_1[0x225]);
  switch(param_1[0x440]) {
  case 0:
    if (unaff_retaddr == 0) {
      uVar6 = 0xd;
    }
    else {
      uVar6 = 0x12;
    }
    FUN_00aa4080(uVar6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    pcVar2 = *(code **)(*param_1 + 0x220);
    param_1[0x440] = 1;
    (*pcVar2)(0x41200000);
    FUN_00a5dc60();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x318))();
    param_1[0x505] = (int)((float)param_1[0x505] * 3.0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x440] = 2;
      return 0;
    }
    break;
  case 2:
    if (unaff_retaddr == 0) {
      FUN_00aa4080(0xe,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    else {
      FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
    }
    param_1[0x225] = 0x3efae148;
    param_1[0x440] = 3;
    FUN_00422440(param_1 + 0x508,param_1 + 0x10,param_1 + 0x43c,0x40400000,0x3f000000);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = 0x3efae148;
    fVar4 = (float10)FUN_00a581b0(&stack0xfffffff0,0x3efae148,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar4;
    param_1[0x14] = 0;
    fVar5 = (float10)1;
    if (fVar5 < fVar4) {
      fVar5 = fVar4 - fVar5;
    }
    else {
      fVar5 = fVar5 - fVar4;
    }
    param_1[0x15] =
         (int)(float)(((float10)0.0 - (float10)(float)param_1[0x15]) * fVar5 +
                     (float10)(float)param_1[0x15]);
    param_1[0x16] = 0;
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar5;
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x440] = 4;
    }
    if ((unaff_retaddr == 0) && (iVar3 = FUN_00a94ce0(0), iVar3 != 0)) {
      param_1[0x187] = 4;
      return 0;
    }
    break;
  case 4:
    if (unaff_retaddr == 0) {
      FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x440] = 5;
    }
    else {
      FUN_00aa4080(0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x440] = 5;
    }
    goto LAB_00422d08;
  case 5:
LAB_00422d08:
    param_1[0x225] = 0x3efae148;
    fVar5 = (float10)FUN_00a581b0(&stack0xfffffff0,0x3efae148,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar5;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar5;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x440] = 6;
      return 0;
    }
    break;
  case 6:
    if (unaff_retaddr == 0) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x15;
    }
    FUN_00aa4080(uVar6,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    pcVar2 = *(code **)(*param_1 + 0x1d4);
    param_1[0x440] = 7;
    (*pcVar2)(0);
    param_1[0x225] = 0;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00422E80  FUN_00422e80  size=206  [callgraph]
void __thiscall FUN_00422e80(int param_1,undefined4 param_2,uint param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 2) == 0) {
      if ((param_3 & 8) == 0) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0x14d8);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x14d0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10dc) = *(undefined4 *)(param_1 + 0x10e0);
    *(undefined4 *)(param_1 + 0x10d8) = *(undefined4 *)(param_1 + 0x12cc);
    FUN_00420b80(0x40013,0,0,0,0);
    fVar1 = *(float *)(param_1 + 0x14d4);
    *(undefined4 *)(param_1 + 0x1098) = 0;
  }
  *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + 1;
  if (((0.0 < fVar1) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      iVar2 = *piVar3;
      uVar4 = FUN_00fdbc60(1);
      (**(code **)(iVar2 + 0x30c))(uVar4);
    }
  }
  return;
}

// 00422F50  FUN_00422f50  size=444  [callgraph]
void __fastcall FUN_00422f50(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined *puVar4;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00420b80(0x10006,0,0,0,0);
    iVar1 = *(int *)(param_1 + 0xa84);
    local_20 = 0;
    local_1c = 0.0;
    local_18 = 0;
    if (iVar1 != 0) {
      local_20 = *(undefined4 *)(iVar1 + 0x50);
      local_18 = *(undefined4 *)(iVar1 + 0x58);
      local_14 = *(undefined4 *)(iVar1 + 0x5c);
      local_1c = *(float *)(iVar1 + 0x54) + 1.2;
    }
    FUN_00a84720();
    FUN_00a84720();
    FUN_00a84780(&local_20,0,0,0,0,0x3f800000);
    FUN_00a84780(&local_20,0,0,0,0,0x3f800000);
    switchD_0080dbae::default();
    *(undefined4 *)(param_1 + 0x1200) = 1;
    FUN_00c81e40(7);
    FUN_00a93090(2);
    *(uint *)(param_1 + 0x1064) = *(uint *)(param_1 + 0x1064) | 0x800000;
    *(undefined4 *)(param_1 + 0x1414) = 0x43480000;
    *(undefined4 *)(param_1 + 0x1480) = 0x40a00000;
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    if (*(int *)(param_1 + 0xf84) != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        fVar3 = (float10)FUN_00a958c0(0);
        FUN_00a95e60(0,(float)fVar3);
        (**(code **)(*piVar2 + 100))();
      }
    }
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        FUN_00be8e60();
        FUN_00b7d790(1);
      }
    }
    *(undefined4 *)(param_1 + 0x14cc) = 0;
  }
  return;
}

// 00423110  FUN_00423110  size=216  [callgraph]
void __fastcall FUN_00423110(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x220))(0x40000000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x17,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00a8ccb0(1);
    (**(code **)(*param_1 + 0x318))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00420b80(0x20000,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x004231e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x314))();
  return;
}

// 004231F0  FUN_004231f0  size=47  [callgraph]
void FUN_004231f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 2) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x7000c,0,0,0,0);
    }
  }
  return;
}

// 00423220  FUN_00423220  size=341  [callgraph]
void __fastcall FUN_00423220(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_160 [348];
  
  iVar2 = FUN_00a8cac0();
  if (0 < iVar2) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar2 = FUN_00a8c760(0x33);
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar3 = FUN_00a7c8a0();
        FUN_00e021c0(uVar3);
        puVar4 = local_160;
        uVar3 = FUN_00e00b40(0x20020,puVar4);
        FUN_00a8c930(uVar3,puVar4);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar2 = FUN_00a8c760(0x30);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 0;
        return;
      }
      if (((byte)DAT_01b7b914 & 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 1;
        return;
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10c0) = 0;
      *(undefined4 *)(param_1 + 0x1110) = 0;
    }
    else {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10c0) != 0) {
        sVar1 = FUN_00dde2a0(0,3);
        if (sVar1 != 0) {
          *(undefined4 *)(param_1 + 0x1110) = 1;
          FUN_00420b80(0x70002,0,0,0,0);
          return;
        }
        *(undefined4 *)(param_1 + 0x1110) = 0;
        FUN_00420b80(0x70004,0,0,0,0);
        return;
      }
    }
    FUN_00420b80(0x70005,0,0,0,0);
  }
  return;
}

// 00423380  FUN_00423380  size=377  [callgraph]
void __fastcall FUN_00423380(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_160 [348];
  
  iVar2 = FUN_00a8cac0();
  if (0 < iVar2) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar2 = FUN_00a8c760(0x33);
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar3 = FUN_00a7c8a0();
        FUN_00e021c0(uVar3);
        puVar4 = local_160;
        uVar3 = FUN_00e00b40(0x20020,puVar4);
        FUN_00a8c930(uVar3,puVar4);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar2 = FUN_00a8c760(0x30);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 0;
        return;
      }
      if (((byte)DAT_01b7b914 & 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 1;
        return;
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10c0) = 0;
    }
    else {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10c0) != 0) {
        fVar1 = *(float *)(param_1 + 0x58);
        if ((!NAN(fVar1) && -2.0 < fVar1 != (fVar1 == -2.0)) && (*(float *)(param_1 + 0x58) <= 2.0))
        {
          *(undefined4 *)(param_1 + 0x1110) = 0;
          FUN_00420b80(0x70004,0,0,0,0);
          return;
        }
        *(undefined4 *)(param_1 + 0x1110) = 1;
        FUN_00420b80(0x7000a,0,0,0,0);
        return;
      }
    }
    FUN_00420b80(0x70006,0,0,0,0);
  }
  return;
}

// 00423500  FUN_00423500  size=303  [callgraph]
void __fastcall FUN_00423500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x33);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar2 = FUN_00a7c8a0();
        FUN_00e021c0(uVar2);
        puVar3 = local_160;
        uVar2 = FUN_00e00b40(0x20020,puVar3);
        FUN_00a8c930(uVar2,puVar3);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 0;
        return;
      }
      if (((byte)DAT_01b7b914 & 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 1;
        return;
      }
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10c0) = 0;
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10c0) != 0) {
        FUN_00420b80(0x70004,0,0,0,0);
        return;
      }
    }
    FUN_00420b80(0x70007,0,0,0,0);
  }
  return;
}

// 00423630  FUN_00423630  size=198  [callgraph]
void __fastcall FUN_00423630(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x31);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
        DAT_01dc1300 = 1;
        DAT_01dc12fc = 1;
        if (((byte)DAT_01b7b914 & 0x70) != 0) {
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 0;
          return;
        }
        if ((char)(byte)DAT_01b7b914 < '\0') {
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 1;
          return;
        }
      }
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10c0) = 0;
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10c0) != 0) {
        FUN_00420b80(0x70008,0,0,0,0);
        return;
      }
    }
    FUN_00420b80(0x70009,0,0,0,0);
  }
  return;
}

// 00423700  FUN_00423700  size=80  [callgraph]
void __fastcall FUN_00423700(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x80003,0,0,0,0);
    if (*(int *)(param_1 + 0x13ac) != 0) {
      FUN_00a8c9b0(0,6,0x3f800000,0);
      *(undefined4 *)(param_1 + 0x13ac) = 0;
    }
  }
  return;
}

// 00423750  FUN_00423750  size=222  [callgraph]
void __fastcall FUN_00423750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x13ac) == 0) {
      FUN_004039a0(6,param_1,0);
      uVar2 = FUN_00a7c8a0();
      FUN_00e021c0(uVar2);
      puVar3 = local_160;
      uVar2 = FUN_00e00b40(0x20020,puVar3);
      FUN_00a8c930(uVar2,puVar3);
      *(undefined4 *)(param_1 + 0x13ac) = 1;
    }
    FUN_00aa4080(0x89,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00423830  FUN_00423830  size=80  [callgraph]
void __fastcall FUN_00423830(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
    if (*(int *)(param_1 + 0x13ac) != 0) {
      FUN_00a8c9b0(0,6,0x3f800000,0);
      *(undefined4 *)(param_1 + 0x13ac) = 0;
    }
  }
  return;
}

// 00423880  FUN_00423880  size=222  [callgraph]
void __fastcall FUN_00423880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x13ac) == 0) {
      FUN_004039a0(6,param_1,0);
      uVar2 = FUN_00a7c8a0();
      FUN_00e021c0(uVar2);
      puVar3 = local_160;
      uVar2 = FUN_00e00b40(0x20020,puVar3);
      FUN_00a8c930(uVar2,puVar3);
      *(undefined4 *)(param_1 + 0x13ac) = 1;
    }
    FUN_00aa4080(0x8b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00423960  FUN_00423960  size=80  [callgraph]
void __fastcall FUN_00423960(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
    if (*(int *)(param_1 + 0x13ac) != 0) {
      FUN_00a8c9b0(0,6,0x3f800000,0);
      *(undefined4 *)(param_1 + 0x13ac) = 0;
    }
  }
  return;
}

// 004239B0  FUN_004239b0  size=222  [callgraph]
void __fastcall FUN_004239b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x13ac) == 0) {
      FUN_004039a0(6,param_1,0);
      uVar2 = FUN_00a7c8a0();
      FUN_00e021c0(uVar2);
      puVar3 = local_160;
      uVar2 = FUN_00e00b40(0x20020,puVar3);
      FUN_00a8c930(uVar2,puVar3);
      *(undefined4 *)(param_1 + 0x13ac) = 1;
    }
    FUN_00aa4080(0x8d,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00423A90  FUN_00423a90  size=52  [callgraph]
void __fastcall FUN_00423a90(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x30c))(100,0);
    FUN_00420b80(0x80003,0,0,0,0);
  }
  return;
}

// 00423AD0  FUN_00423ad0  size=36  [callgraph]
void FUN_00423ad0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 00423B00  FUN_00423b00  size=354  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00423b00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x33);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar2 = FUN_00a7c8a0();
        FUN_00e021c0(uVar2);
        puVar3 = local_160;
        uVar2 = FUN_00e00b40(0x20020,puVar3);
        FUN_00a8c930(uVar2,puVar3);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) != 0) {
LAB_00423bf8:
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 0;
        return;
      }
      if (((byte)DAT_01b7b914 & 0x40) != 0) {
        if ((_DAT_01b7b910 & 0x10000) != 0) {
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 1;
          return;
        }
        goto LAB_00423bf8;
      }
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) + 1.5707964;
      switchD_0080dbae::default();
      *(undefined4 *)(param_1 + 0x10c0) = 0;
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10c0) != 0) {
        FUN_00420b80(0x7000b,0,0,0,0);
        return;
      }
      *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) + 1.5707964;
      switchD_0080dbae::default();
    }
    FUN_00420b80(0x70005,0,0,0,0);
  }
  return;
}

// 00423C70  FUN_00423c70  size=303  [callgraph]
void __fastcall FUN_00423c70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x33);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar2 = FUN_00a7c8a0();
        FUN_00e021c0(uVar2);
        puVar3 = local_160;
        uVar2 = FUN_00e00b40(0x20020,puVar3);
        FUN_00a8c930(uVar2,puVar3);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 0;
        return;
      }
      if (((byte)DAT_01b7b914 & 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x10bc) = 1;
        *(undefined4 *)(param_1 + 0x10c0) = 1;
        return;
      }
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10c0) = 0;
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10c0) != 0) {
        FUN_00420b80(0x70003,0,0,0,0);
        return;
      }
    }
    FUN_00420b80(0x70006,0,0,0,0);
  }
  return;
}

// 00423DA0  FUN_00423da0  size=166  [callgraph]
void __fastcall FUN_00423da0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x93,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x7000d,0,0,0,0);
      return;
    }
  }
  return;
}

// 00423E50  FUN_00423e50  size=298  [callgraph]
void __fastcall FUN_00423e50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x13ac) != 0) {
      FUN_00a8c9b0(0,6,0x3f800000,0);
      *(undefined4 *)(param_1 + 0x13ac) = 0;
    }
    FUN_00aa4080(0x95,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    if (*(int *)(param_1 + 0x13e0) != 0) {
      iVar1 = FUN_00a957b0(0);
      iVar2 = FUN_00a957b0(0);
      *(float *)(param_1 + 0x11c8) = (float)iVar1 / (float)iVar2;
    }
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x11c8) = 0x3f800000;
      FUN_00420b80(0x7000f,0,0,0,0);
      return;
    }
  }
  return;
}

// 00423F80  FUN_00423f80  size=166  [callgraph]
void __fastcall FUN_00423f80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x96,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x70010,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424030  FUN_00424030  size=264  [callgraph]
void __fastcall FUN_00424030(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x98,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    if (*(int *)(param_1 + 0x13e0) != 0) {
      iVar1 = FUN_00a957b0(0);
      iVar2 = FUN_00a957b0(0);
      *(float *)(param_1 + 0x11c8) = (float)iVar1 / (float)iVar2;
    }
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x11c8) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x13e0) = 0;
      FUN_00420b80(0x70012,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424140  FUN_00424140  size=166  [callgraph]
void __fastcall FUN_00424140(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x99,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x70013,0,0,0,0);
      return;
    }
  }
  return;
}

// 004241F0  FUN_004241f0  size=254  [callgraph]
void __fastcall FUN_004241f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x9b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    if (*(int *)(param_1 + 0x13e0) != 0) {
      iVar1 = FUN_00a957b0(0);
      iVar2 = FUN_00a957b0(0);
      *(float *)(param_1 + 0x11c8) = (float)iVar1 / (float)iVar2;
    }
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x11c8) = 0x3f800000;
      FUN_00420b80(0x70015,0,0,0,0);
      return;
    }
  }
  return;
}

// 004242F0  FUN_004242f0  size=166  [callgraph]
void __fastcall FUN_004242f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x9c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x70016,0,0,0,0);
      return;
    }
  }
  return;
}

// 004243A0  FUN_004243a0  size=166  [callgraph]
void __fastcall FUN_004243a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x9e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x70018,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424450  FUN_00424450  size=166  [callgraph]
void __fastcall FUN_00424450(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x9f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x70019,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424500  FUN_00424500  size=166  [callgraph]
void __fastcall FUN_00424500(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x7001a,0,0,0,0);
      return;
    }
  }
  return;
}

// 004245B0  FUN_004245b0  size=166  [callgraph]
void __fastcall FUN_004245b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x80003,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424660  FUN_00424660  size=225  [callgraph]
void __fastcall FUN_00424660(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      FUN_00e36720(0,0x3f99999a);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x11c8) = 0x3f800000;
      FUN_00420b80(0x7001c,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424750  FUN_00424750  size=254  [callgraph]
void __fastcall FUN_00424750(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    if (*(int *)(param_1 + 0x13e0) != 0) {
      iVar1 = FUN_00a957b0(0);
      iVar2 = FUN_00a957b0(0);
      *(float *)(param_1 + 0x11c8) = (float)iVar1 / (float)iVar2;
    }
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x11c8) = 0x3f800000;
      FUN_00420b80(0x7001e,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424850  FUN_00424850  size=166  [callgraph]
void __fastcall FUN_00424850(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x70010,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424900  FUN_00424900  size=180  [callgraph]
void __fastcall FUN_00424900(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x11c8) = 0x3f800000;
      FUN_00420b80(0x70020,0,0,0,0);
      return;
    }
  }
  return;
}

// 004249C0  FUN_004249c0  size=254  [callgraph]
void __fastcall FUN_004249c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xa9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    if (*(int *)(param_1 + 0x13e0) != 0) {
      iVar1 = FUN_00a957b0(0);
      iVar2 = FUN_00a957b0(0);
      *(float *)(param_1 + 0x11c8) = (float)iVar1 / (float)iVar2;
    }
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x11c8) = 0x3f800000;
      FUN_00420b80(0x70022,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424AC0  FUN_00424ac0  size=166  [callgraph]
void __fastcall FUN_00424ac0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xaa,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    iVar1 = FUN_00a957b0(0);
    *(int *)(param_1 + 0x13d0) = *(int *)(param_1 + 0x13d0) + iVar1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x70010,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424B70  FUN_00424b70  size=934  [callgraph]
void FUN_00424b70(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0xfa,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(1);
    return;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8cb60(2);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xfb,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(3);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8cb60(4);
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xfc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(5);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8cb60(6);
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0xfd,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(7);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8cb60(8);
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0xfe,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(9);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8cb60(10);
      return;
    }
    break;
  case 10:
    FUN_00aa4080(0xff,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(0xb);
    FUN_00e03a70(0,0x3df5c28f);
    goto LAB_00424e49;
  case 0xb:
LAB_00424e49:
    iVar2 = FUN_00a95540(0,10);
    if (iVar2 != 0) {
      FUN_00e03a70(0,0x3f800000);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8cb60(0xc);
      return;
    }
    break;
  case 0xc:
    FUN_00aa4080(0x100,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(0xd);
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x200001,0,0,0,0);
      return;
    }
  }
  return;
}

// 00424F50  FUN_00424f50  size=639  [callgraph]
void __fastcall FUN_00424f50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8cac0();
  if (((iVar1 != 9) && (iVar1 = FUN_00a7f600(0xd00a8), iVar1 != 0)) &&
     (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar1 + 0x94);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar1 + 0x98);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
  }
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa3f60(0x102);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(2);
      return;
    }
    break;
  case 2:
    FUN_00aa3f60(0x103);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(3);
  case 3:
    iVar1 = FUN_00a959f0(0);
    if (0 < iVar1) {
      *(undefined4 *)(param_1 + 0x1204) = 0;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1204) = 1;
      FUN_00a8cb60(4);
      return;
    }
    break;
  case 4:
    FUN_00aa3f60(0x104);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(5);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8cb60(6);
      return;
    }
    break;
  case 6:
    FUN_00aa3f60(0x105);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(7);
  case 7:
    iVar1 = FUN_00a959f0(0);
    if (0 < iVar1) {
      *(undefined4 *)(param_1 + 0x1204) = 0;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1204) = 1;
      FUN_00a8cb60(8);
      return;
    }
    break;
  case 8:
    FUN_00aa3f60(0x106);
    FUN_00a96070(0,0x8038000,1);
    FUN_00a8cb60(9);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x10000,0,0,0,0);
      *(undefined4 *)(param_1 + 0x13ec) = 1;
    }
  }
  return;
}

// 00425200  FUN_00425200  size=104  [callgraph]
void __fastcall FUN_00425200(int param_1)

{
  *(undefined4 *)(param_1 + 0x13e4) = 1;
  *(undefined4 *)(param_1 + 0x13e0) = 1;
  *(undefined4 *)(param_1 + 0x10bc) = 1;
  *(undefined4 *)(param_1 + 0x10c0) = 0;
  FUN_00420b80(0x20000,0,0,0,0);
  if (*(int *)(param_1 + 0x13ac) != 0) {
    FUN_00a8c9b0(0,6,0x41a00000,0x3f800000);
    *(undefined4 *)(param_1 + 0x13ac) = 0;
  }
  return;
}

// 00425270  FUN_00425270  size=377  [callgraph]
void __fastcall FUN_00425270(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar1 = FUN_00a8c760(0x38);
  if (iVar1 != 0) {
    uVar2 = FUN_00ac8520(0x18);
    if (0xff < DAT_018b9174 - 0xa00U) {
      uVar2 = FUN_00ac8520(0x19);
    }
    (**(code **)(*(int *)param_1[0x2a1] + 0x30c))(uVar2,0);
  }
  (**(code **)(*param_1 + 0x220))(0x40000000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x65,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if (param_1[0x3e1] != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(7,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
      }
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x3e1] != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      fVar4 = (float10)FUN_00a958c0(0);
      FUN_00a95e60(0,(float)fVar4);
      (**(code **)(*piVar3 + 100))();
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 004253F0  FUN_004253f0  size=234  [callgraph]
void __fastcall FUN_004253f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8c760(0x38);
  if (iVar1 != 0) {
    uVar2 = FUN_00ac8520(0x18);
    if (0xff < DAT_018b9174 - 0xa00U) {
      uVar2 = FUN_00ac8520(0x19);
    }
    (**(code **)(*(int *)param_1[0x2a1] + 0x30c))(uVar2,0);
  }
  (**(code **)(*param_1 + 0x220))(0x40000000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x68,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 004254E0  FUN_004254e0  size=322  [callgraph]
void __fastcall FUN_004254e0(int param_1)

{
  int iVar1;
  float10 fVar2;
  char *pcVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
    goto LAB_004255db;
  }
  FUN_00aa4080(0x10b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0x8000000,1);
  FUN_00a8ccb0(1);
  if (*(short *)(param_1 + 0x14b8) == 0) {
    pcVar3 = "bgm_Samuel_Stage6_Sword_Lost";
LAB_0042555a:
    FUN_00e5e1b0(pcVar3);
    *(short *)(param_1 + 0x14b8) = *(short *)(param_1 + 0x14b8) + 1;
  }
  else if (*(short *)(param_1 + 0x14b8) == 1) {
    pcVar3 = "bgm_Samuel_Stage6_Sword_Pickedup";
    goto LAB_0042555a;
  }
  *(undefined4 *)(param_1 + 0x10e4) = 0;
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
    fVar2 = (float10)FUN_00a8e9c0();
    *(float *)(param_1 + 0x94) = (float)fVar2;
  }
  if (*(int *)(param_1 + 0xf88) != 0) {
    FUN_00a9e060(0x12);
    FUN_00a8c5f0(0x12,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xf88),0xffe,0);
    *(undefined4 *)(param_1 + 0xf90) = 0;
  }
  *(undefined2 *)(param_1 + 0x14b2) = 0xe;
LAB_004255db:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
    FUN_00a9e060(0x12);
    *(undefined4 *)(param_1 + 0xf90) = 0;
  }
  return;
}

// 00425630  FUN_00425630  size=301  [callgraph]
void __fastcall FUN_00425630(int param_1)

{
  int iVar1;
  float unaff_ESI;
  float10 fVar2;
  float fVar3;
  float fStack_7c;
  float afStack_78 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [4];
  float local_5c;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x10d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_004256c8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x200005,0,0,0,0);
  }
LAB_004256c8:
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8ce90(local_70,local_60);
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + local_5c);
    *(float *)(*(int *)(param_1 + 0xa84) + 0x94) = (float)fVar2;
    fVar3 = *(float *)(param_1 + 0x94);
    D3DXMatrixRotationY(local_50);
    D3DXVec3TransformNormal(afStack_78,afStack_78,auStack_58);
    iVar1 = *(int *)(param_1 + 0xa84);
    *(float *)(iVar1 + 0x50) = *(float *)(param_1 + 0x50) + fVar3;
    *(float *)(iVar1 + 0x54) = *(float *)(param_1 + 0x54) + unaff_ESI;
    *(float *)(iVar1 + 0x58) = *(float *)(param_1 + 0x58) + fStack_7c;
    *(float *)(iVar1 + 0x5c) = *(float *)(param_1 + 0x5c) + afStack_78[0];
  }
  return;
}

// 00425760  FUN_00425760  size=647  [callgraph]
void __fastcall FUN_00425760(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined *puVar6;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [76];
  
  if ((*(int *)(param_1 + 0x61c) == 2) &&
     (piVar2 = *(int **)(param_1 + 0xa84), piVar2 != (int *)0x0)) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 != 0) {
      FUN_00cbc8f0(0x1000,1);
      if ((*(byte *)(piVar2 + 0x33f) & 0x40) != 0) {
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        fStack_98 = 0.0;
        if ((((*(int *)(param_1 + 0xa84) != 0) &&
             (*(int *)(*(int *)(param_1 + 0xa84) + 0x1190) != 0)) &&
            (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (iVar3 = FUN_00a12210(0), iVar3 != 0)) {
          fStack_a0 = *(float *)(iVar3 + 0x40);
          fStack_9c = *(float *)(iVar3 + 0x44);
          fStack_98 = *(float *)(iVar3 + 0x48);
          fStack_94 = *(float *)(iVar3 + 0x4c);
          fStack_80 = 0.0;
          fStack_7c = 0.0;
          fStack_78 = 0.5;
          fStack_70 = 0.0;
          fStack_6c = 0.0;
          fStack_68 = 0.0;
          fStack_5c = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                           *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                           *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
          fStack_58 = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                           *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                           *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
          fVar1 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                       *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                       *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
          fStack_84 = *(float *)(iVar3 + 0x28) / fVar1;
          fStack_88 = *(float *)(iVar3 + 0x38) / fVar1;
          fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar1));
          fVar5 = (float10)fpatan((float10)fStack_84,(float10)fStack_88);
          fStack_70 = (float)fVar5;
          fStack_6c = (float)fVar4;
          fVar4 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)fStack_58,
                                  (float10)*(float *)(iVar3 + 0x10) / (float10)fStack_5c);
          fStack_68 = (float)fVar4;
          FUN_00ddc1d0(auStack_50,&fStack_70,5);
          D3DXVec3TransformNormal(&fStack_80,&fStack_80,auStack_50);
          fStack_a0 = fStack_80 + fStack_a0;
          fStack_9c = fStack_7c + fStack_9c;
          fStack_98 = fStack_78 + fStack_98;
          fStack_94 = fStack_74 + fStack_94;
        }
        FUN_00e02cf0(param_1,0x88,&fStack_a0);
        *(undefined4 *)(param_1 + 0x1394) = 1;
        *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) + 10.0;
      }
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_00420b80(0x200006,0,0,0,0);
        return;
      }
      fVar1 = *(float *)(param_1 + 0x924);
      if ((!NAN(fVar1) && 2000.0 < fVar1 != (fVar1 == 2000.0)) ||
         (*(float *)(param_1 + 0x920) <= 0.0)) {
        FUN_00420b80(0x200007,0,0,0,0);
      }
    }
  }
  return;
}

// 004259F0  FUN_004259f0  size=1158  [callgraph]
void __fastcall FUN_004259f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x11d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
    FUN_0041b240();
    FUN_0041d980();
    *(undefined2 *)((int)param_1 + 0x14b2) = 0x10;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xd1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 3;
    param_1[599] = 0;
    FUN_00c52770(param_1[0x4de],0x41200000);
    FUN_00c52700(param_1[0x4de],1);
    if ((param_1[0x2a1] != 0) && (iVar2 = FUN_0041c960(param_1[0x2a1]), iVar2 != 0)) {
      FUN_004168f0(6);
      FUN_004168f0(1);
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8e520();
    if (iVar2 == 0) {
      if (param_1[599] != 0) {
        param_1[599] = 0;
        FUN_00c52770(param_1[0x4de],0x41200000);
        FUN_00c52700(param_1[0x4de],0);
      }
    }
    else {
      param_1[599] = param_1[599] + 1;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00c52770(param_1[0x4de],0x41200000);
      FUN_00c52700(param_1[0x4de],0);
      DAT_01bea060 = DAT_01bea060 & 0xbdffffff;
      FUN_00420b80(0x20000,0,0,0,0);
      *(undefined2 *)((int)param_1 + 0x14ba) = 1;
      FUN_0041b240();
      return;
    }
    break;
  case 4:
    break;
  case 5:
    if (((param_1[0x2a1] != 0) && (iVar2 = FUN_0041c960(param_1[0x2a1]), iVar2 != 0)) &&
       ((iVar2 = FUN_00416db0(), iVar2 != 0 || (iVar2 = FUN_00a8cab0(), iVar2 != 0xf6)))) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    DAT_01bea060 = DAT_01bea060 | 0x42000000;
    FUN_00aa4080(0x120,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x344))(0xb,1,1);
    param_1[0x187] = 6;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 7;
      return;
    }
    break;
  case 7:
    FUN_00aa4080(0x121,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 8;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 9;
      return;
    }
    break;
  case 9:
    FUN_00aa4080(0x122,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 10;
  case 10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 0xb;
      return;
    }
    break;
  case 0xb:
    FUN_00aa4080(0x123,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0xc;
    param_1[0x21c] = 0;
    FUN_009c6930();
  case 0xc:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    return;
  }
  return;
}

// 00425EB0  Em0020::vf128  size=2166  [class]
void __fastcall Em0020::vf128(int *param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_ESI;
  int **ppiVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  float *pfVar12;
  int *piVar13;
  undefined4 *puVar14;
  float *pfVar15;
  bool bVar16;
  float10 fVar17;
  ushort **ppuVar18;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  float local_604;
  int *piStack_5f0;
  float local_5ec;
  ushort *local_5e8;
  int *apiStack_5e4 [3];
  float afStack_5d8 [6];
  float local_5c0 [17];
  undefined4 uStack_57c;
  undefined4 uStack_578;
  int local_574;
  float local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 auStack_544 [9];
  undefined1 local_520 [36];
  undefined1 auStack_4fc [8];
  undefined1 auStack_4f4 [84];
  int local_4a0 [16];
  int local_460 [16];
  undefined **local_420;
  int *local_41c;
  int local_418;
  undefined4 local_414;
  int local_410 [259];
  
  BehaviorEmBase::vf128();
  iVar4 = FUN_00a96130();
  local_41c = local_410;
  local_418 = 0;
  local_414 = 0x100;
  local_420 = lib::StaticArray<Collision*,256>::vftable;
  local_574 = iVar4;
  FUN_00a9d9a0();
  local_5ec = 0.0;
  if (0 < iVar4) {
    do {
      puVar11 = (ushort *)local_460[(int)local_5ec];
      local_5e8 = puVar11;
      FID_conflict__memcpy(local_4a0,param_1 + 4,0x40);
      FID_conflict__memcpy(local_520,param_1 + 4,0x40);
      FUN_00a92f90();
      iVar4 = FUN_00e3a1e0();
      bVar16 = iVar4 != 0;
      local_604 = (float)(uint)bVar16;
      uVar3 = puVar11[3];
      if (bVar16) {
        uVar3 = FUN_00a96170();
      }
      piVar5 = param_1;
      if (uVar3 != 0xffff) {
        piVar5 = (int *)FUN_00a12210();
      }
      if (piVar5 != (int *)0x0) {
        piVar5 = piVar5 + 4;
        piVar13 = local_4a0;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar13 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar13 = piVar13 + 1;
        }
      }
      local_570 = *(float *)(puVar11 + 6);
      local_56c = *(undefined4 *)(puVar11 + 8);
      local_568 = *(undefined4 *)(puVar11 + 10);
      fVar1 = *(float *)(puVar11 + 0xc);
      fVar2 = *(float *)(puVar11 + 0xe);
      if (bVar16) {
        fVar2 = fVar2 * -1.0;
        local_570 = local_570 * -1.0;
      }
      local_5c0[0xe] = 0.0;
      local_5c0[0xd] = 0.0;
      local_5c0[0xc] = 0.0;
      local_5c0[0xb] = 0.0;
      local_5c0[9] = 0.0;
      local_5c0[8] = 0.0;
      local_5c0[7] = 0.0;
      local_5c0[6] = 0.0;
      local_5c0[4] = 0.0;
      local_5c0[3] = 0.0;
      local_5c0[2] = 0.0;
      local_5c0[1] = 0.0;
      local_5c0[0xf] = 1.0;
      local_5c0[10] = 1.0;
      local_5c0[5] = 1.0;
      local_5c0[0] = 1.0;
      if (*(float *)(puVar11 + 0x10) != 0.0) {
        D3DXMatrixRotationZ();
        D3DXMatrixMultiply();
      }
      if (fVar2 != 0.0) {
        D3DXMatrixRotationY();
        D3DXMatrixMultiply();
      }
      if (fVar1 != 0.0) {
        D3DXMatrixRotationX();
        D3DXMatrixMultiply();
      }
      local_5c0[0xc] = local_570;
      local_5c0[0xd] = (float)local_56c;
      local_5c0[0xe] = (float)local_568;
      D3DXMatrixMultiply();
      local_5e8 = *(ushort **)(puVar11 + 0x14);
      local_5ec = 0.0;
      apiStack_5e4[0] = (int *)0x0;
      afStack_5d8[0] = -*(float *)(puVar11 + 0x14);
      apiStack_5e4[2] = (int *)0x0;
      afStack_5d8[1] = 0.0;
      D3DXVec3TransformNormal(&local_5ec);
      ppuVar18 = &local_5e8;
      fVar1 = (float)piStack_5f0 + local_5c0[8];
      D3DXVec3TransformNormal(ppuVar18,ppuVar18,afStack_5d8);
      piStack_5f0 = (int *)(fVar1 + local_5c0[4]);
      local_5ec = local_5ec + local_5c0[5];
      piVar5 = param_1;
      switch(*(undefined1 *)((int)puVar11 + 3)) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 8:
        goto LAB_0042636a;
      case 9:
LAB_0042636a:
        ppiVar9 = apiStack_5e4;
        puVar10 = auStack_544;
        for (iVar4 = 0x10; piVar5 = unaff_ESI, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *ppiVar9;
          ppiVar9 = ppiVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        break;
      case 10:
      case 7:
        goto LAB_0042636a;
      case 0xb:
        ppiVar9 = apiStack_5e4;
        puVar10 = auStack_544;
        for (iVar4 = 0x10; piVar5 = unaff_ESI, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *ppiVar9;
          ppiVar9 = ppiVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        break;
      case 0xc:
        ppiVar9 = apiStack_5e4;
        puVar10 = auStack_544;
        for (iVar4 = 0x10; piVar5 = unaff_ESI, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *ppiVar9;
          ppiVar9 = ppiVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      D3DXVec3TransformNormal(&stack0xfffff9bc,&stack0xfffff9bc,auStack_544);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x130))(puVar11);
      puVar11 = local_5e8;
      apiStack_5e4[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        FUN_00dd5650();
      }
      else {
        iVar4 = piVar5[2];
        *(ushort *)(iVar4 + 0x80) = local_5e8[4];
        *(ushort *)(iVar4 + 0x82) = local_5e8[2];
        *(ushort ***)(iVar4 + 0x20) = ppuVar18;
        *(undefined4 *)(iVar4 + 0x24) = uStack_61c;
        *(undefined4 *)(iVar4 + 0x28) = uStack_618;
        *(undefined4 *)(iVar4 + 0x2c) = uStack_614;
        fVar17 = (float10)fpatan((float10)(float)piStack_5f0,(float10)local_604);
        *(float *)(iVar4 + 0x30) = (float)fVar17;
        iVar6 = FUN_00a12210();
        if (iVar6 == 0) {
          auStack_544[7] = 0;
          auStack_544[6] = 0;
          auStack_544[5] = 0;
          auStack_544[4] = 0;
          auStack_544[2] = 0;
          auStack_544[1] = 0;
          auStack_544[0] = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_554 = 0;
          uStack_558 = 0;
          uStack_55c = 0;
          auStack_544[8] = 0x3f800000;
          auStack_544[3] = 0x3f800000;
          uStack_54c = 0x3f800000;
          local_560 = 0x3f800000;
          D3DXMatrixRotationZ();
          D3DXMatrixMultiply();
          D3DXMatrixRotationX(auStack_4f4,0x40490fdb);
          D3DXMatrixMultiply(&uStack_57c,auStack_4fc,&uStack_57c);
          D3DXMatrixMultiply(iVar4 + 0x40,local_5c0 + 0xe,&local_5e8);
        }
        else {
          puVar10 = (undefined4 *)(iVar6 + 0x10);
          puVar14 = (undefined4 *)(iVar4 + 0x40);
          for (iVar8 = 0x10; puVar11 = local_5e8, piVar5 = apiStack_5e4[0], iVar8 != 0;
              iVar8 = iVar8 + -1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
        }
        if (*puVar11 < 4) {
          *(uint *)(iVar4 + 0x34) = (uint)puVar11[2];
        }
        local_604 = (float)(uint)*puVar11;
        if (3 < (uint)local_604) {
          local_604 = 5.60519e-45;
        }
        if ((char)puVar11[1] == '\x03') {
          piStack_5f0 = local_41c;
          if (local_41c != local_41c + local_418) {
            do {
              iVar4 = *(int *)(*piStack_5f0 + 0x378);
              if ((iVar4 != 0) && (iVar6 = FUN_00ac82f0(), iVar6 == 0)) {
                iVar4 = *(int *)(iVar4 + 8);
                uStack_578 = *(undefined4 *)(local_5e8 + 0x12);
                uStack_57c = *(undefined4 *)(local_5e8 + 0x14);
                uVar7 = (**(code **)(*param_1 + 0x270))();
                iVar6 = param_1[0x1d8];
                *(undefined4 *)(iVar4 + 0x94) = 1;
                pfVar12 = local_5c0;
                pfVar15 = (float *)(iVar4 + 0xa0);
                for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *pfVar15 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  pfVar15 = pfVar15 + 1;
                }
                *(undefined4 *)(iVar4 + 0xe0) = uStack_578;
                *(undefined4 *)(iVar4 + 0xe4) = uStack_57c;
                *(undefined4 *)(iVar4 + 0xe8) = uVar7;
                *(undefined4 *)(iVar4 + 0xec) = 0;
                *(int *)(iVar4 + 0xf0) = iVar6 + (int)local_604;
                piVar5 = apiStack_5e4[0];
              }
              piStack_5f0 = piStack_5f0 + 1;
            } while (piStack_5f0 != local_41c + local_418);
          }
        }
        else if (local_418 != 0) {
          piVar13 = local_41c;
          while ((piVar13 != local_41c + local_418 &&
                 (((*(int *)(*piVar13 + 0x378) == 0 ||
                   (iVar4 = *(int *)(*(int *)(*piVar13 + 0x378) + 8),
                   *(ushort *)(iVar4 + 0x80) != puVar11[4])) ||
                  (*(ushort *)(iVar4 + 0x82) != puVar11[2]))))) {
            piVar13 = piVar13 + 1;
          }
        }
        (**(code **)(*piVar5 + 4))();
      }
      local_5ec = (float)((int)local_5ec + 1);
    } while ((int)local_5ec < local_574);
  }
  return;
}

// 00426760  FUN_00426760  size=181  [between]
void __fastcall FUN_00426760(int param_1)

{
  undefined2 uVar1;
  
  if (*(float *)(param_1 + 0x123c) <= 700.0) {
    FUN_00420b80(0x30022,0,0,0,0);
    return;
  }
  uVar1 = FUN_00dde2a0(0,5);
  switch(uVar1) {
  case 0:
    FUN_00420b80(0x30005,0,0,0,0);
    return;
  case 2:
    FUN_00420b80(0x30006,0,0,0,0);
    return;
  case 3:
    FUN_00420b80(0x30003,0,0,0,0);
    return;
  case 4:
    FUN_00420b80(0x30004,0,0,0,0);
    return;
  case 5:
    FUN_00420b80(0x3001e,0,0,0,0);
  }
  return;
}

// 00426830  FUN_00426830  size=164  [between]
void __fastcall FUN_00426830(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_00dde2a0(0,10);
  switch(uVar2) {
  case 0:
  case 1:
    uVar4 = 0x30003;
    break;
  case 2:
  case 3:
    uVar4 = 0x30004;
    break;
  case 4:
  case 5:
  case 6:
    uVar4 = 0x30005;
    break;
  default:
    uVar4 = 0x30006;
  }
  sVar3 = FUN_00dde2a0(0,2);
  fVar1 = *(float *)(param_1 + 0x123c);
  if ((!NAN(fVar1) && 700.0 < fVar1 != (fVar1 == 700.0)) && (sVar3 != 0)) {
    if (*(int *)(param_1 + 0x1108) == 0) {
      uVar4 = 0x3001e;
    }
    else if (*(int *)(param_1 + 0x1108) - 1U < 2) {
      FUN_00420b80(0x30007,0,0,0,0);
      return;
    }
  }
  FUN_00420b80(uVar4,0,0,0,0);
  return;
}

// 004268F0  FUN_004268f0  size=224  [between]
void __fastcall FUN_004268f0(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = FUN_00dde2a0(0,10);
  if (*(int *)(param_1 + 0x13a8) == 0) {
    iVar3 = (*(int *)(param_1 + 0x870) < *(int *)(param_1 + 0x12b8)) + 0x30024;
  }
  else {
    switch(uVar1) {
    case 2:
    case 3:
      iVar3 = ((*(int *)(param_1 + 0x870) < *(int *)(param_1 + 0x12b8)) - 1 & 0xb) + 0x3001a;
      break;
    case 4:
    case 5:
      iVar3 = 0x3001a;
      break;
    case 6:
    case 7:
      iVar3 = 0x30007;
      break;
    case 8:
    case 9:
      iVar3 = (-(uint)(*(int *)(param_1 + 0x1108) != 2) & 3) + 0x30007;
      break;
    default:
      sVar2 = FUN_00dde2a0(0,1);
      if (*(int *)(param_1 + 0x12b8) <= *(int *)(param_1 + 0x870)) {
        sVar2 = 0;
      }
      if (sVar2 != 0) {
        if (sVar2 == 1) {
          iVar3 = 0x30025;
        }
        break;
      }
    case 0:
    case 1:
      iVar3 = 0x30024;
    }
  }
  *(undefined4 *)(param_1 + 0x13a8) = 1;
  FUN_00420b80(iVar3,0,0,0,0);
  return;
}

// 00426A00  FUN_00426a00  size=263  [between]
void __fastcall FUN_00426a00(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_00dde2a0(0,8);
  if (*(int *)(param_1 + 0x12b8) < *(int *)(param_1 + 0x870)) {
    uVar1 = FUN_00dde2a0(0,7);
  }
  switch(uVar1) {
  case 0:
    FUN_00420b80(0x30003,0,0,0,0);
    return;
  case 1:
    FUN_00420b80(0x30004,0,0,0,0);
    return;
  case 2:
    FUN_00420b80(0x30005,0,0,0,0);
    return;
  case 3:
    FUN_00420b80(0x30006,0,0,0,0);
    return;
  case 4:
    FUN_00420b80(0x30007,0,0,0,0);
    return;
  case 5:
  case 6:
    FUN_00420b80(0x3000a,0,0,0,0);
    return;
  case 7:
    FUN_00420b80(0x3001e,0,0,0,0);
    return;
  case 8:
    uVar2 = 0x30025;
  }
  FUN_00420b80(uVar2,0,0,0,0);
  return;
}

// 00426B30  FUN_00426b30  size=235  [between]
void __fastcall FUN_00426b30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00426bc0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00426bc0:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00426C20  FUN_00426c20  size=264  [between]
void __fastcall FUN_00426c20(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x3a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    FUN_00a959f0(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00426D30  FUN_00426d30  size=235  [between]
void __fastcall FUN_00426d30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x3b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00426dc0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00426dc0:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00426E20  FUN_00426e20  size=235  [between]
void __fastcall FUN_00426e20(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x5e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00426eb0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00426eb0:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00426F10  FUN_00426f10  size=235  [between]
void __fastcall FUN_00426f10(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x5f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00426fa0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00426fa0:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00427000  FUN_00427000  size=328  [between]
void __fastcall FUN_00427000(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x61,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if ((param_1[0x3e1] != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x16,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_004270ed;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_004270ed:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00427150  FUN_00427150  size=328  [between]
void __fastcall FUN_00427150(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x62,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if ((param_1[0x3e1] != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x17,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_0042723d;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_0042723d:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 004272A0  FUN_004272a0  size=248  [between]
void __fastcall FUN_004272a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x3d,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    param_1[0x47e] = 1;
  }
  else if (iVar1 != 1) goto LAB_0042733d;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    FUN_00420b80(0x30008,0,0,0,0);
  }
LAB_0042733d:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f000000,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 004273A0  FUN_004273a0  size=238  [between]
void __fastcall FUN_004273a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_00a8cac0();
  if (0 < iVar4) {
    fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1120);
    fVar3 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x1124);
    fVar2 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x1128);
    if (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 <= 9.0) {
      FUN_00420b80(0x30009,0,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fVar1 = *(float *)(param_1 + 0xa9c) * 57.29578;
      if (((fVar1 < 15.0) && (-15.0 < fVar1)) && (*(float *)(param_1 + 0xa8c) <= 9.0)) {
        FUN_00420b80(0x30009,0,0,0,0);
      }
      if (*(float *)(param_1 + 0x920) <= 0.0) {
        FUN_00420b80(0x30009,0,0,0,0);
      }
      FUN_0041f350();
      return;
    }
  }
  return;
}

// 00427490  FUN_00427490  size=70  [between]
void __fastcall FUN_00427490(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && ((*(uint *)(param_1 + 0x1064) & 0x20000000) == 0)) {
      FUN_00420b80(0x20000,0,0,0,0);
      *(undefined4 *)(param_1 + 0x11f8) = 1;
    }
  }
  return;
}

// 004274E0  FUN_004274e0  size=156  [between]
void __fastcall FUN_004274e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x3f,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
    *(undefined4 *)(param_1 + 0x11f8) = 1;
  }
  return;
}

// 00427580  FUN_00427580  size=310  [between]
void __fastcall FUN_00427580(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x41,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if ((*(int *)(param_1 + 0xf84) != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0xc,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar2 != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    uVar1 = FUN_00dde2a0(0,4);
    switch(uVar1) {
    case 0:
    case 1:
      FUN_00420b80(0x3000b,0,0,0,0);
      return;
    case 2:
    case 3:
    case 4:
      if (*(int *)(param_1 + 0x1108) != 2) {
        FUN_00420b80(0x3000d,0,0,0,0);
        return;
      }
      FUN_00420b80(0x3000b,0,0,0,0);
      return;
    }
  }
  return;
}

// 004276D0  FUN_004276d0  size=266  [between]
void __fastcall FUN_004276d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x42,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    if ((param_1[0x3e1] != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0xd,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00427795;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    FUN_00420b80(0x3000c,0,0,0,0);
  }
LAB_00427795:
  FUN_00a8e880(param_1[0x2a1] + 0x50);
  (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 004277E0  FUN_004277e0  size=766  [between]
void __fastcall FUN_004277e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    param_1[0x473] = 0x41136ddb;
    param_1[0x474] = 0x3f800000;
    if (param_1[0x500] != 0) {
      param_1[0x248] = 0x41200000;
    }
    FUN_00aa4080(0x43,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0xe,0);
    FUN_00a8ccb0(1);
    goto LAB_0042787a;
  case 1:
LAB_0042787a:
    iVar2 = FUN_00a959f0(0);
    if (iVar2 < 0x17) {
LAB_0042789d:
      if (param_1[0x421] == 0x3000b) {
        FUN_00ac80a0(0x3f800000,0x3f800000);
        goto switchD_004277f3_default;
      }
    }
    else if (param_1[0x421] == 0x3000b) {
      FUN_00a8ccb0(1);
      goto LAB_0042789d;
    }
    param_1[0x187] = 3;
    goto switchD_004277f3_default;
  case 2:
    break;
  case 3:
    FUN_00aa4080(0x37,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(10,0);
    if ((float)param_1[0x473] < (float)param_1[0x2a3]) {
      param_1[0x474] = (int)((float)param_1[0x2a3] / (float)param_1[0x473]);
      if (2.5 < (float)param_1[0x2a3] / (float)param_1[0x473]) {
        param_1[0x474] = 0x40200000;
      }
      param_1[0x474] = (int)((float)param_1[0x244] * (float)param_1[0x474]);
    }
    FUN_00a8ccb0(1);
    goto LAB_004279ba;
  case 4:
LAB_004279ba:
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3db2b8c2,0);
    FUN_00ac80a0(param_1[0x474],0x3f800000);
    if (((float)param_1[0x2a3] < 12.0) || (iVar2 = FUN_00a952e0(0,0x42500000), iVar2 != 0)) {
      param_1[0x474] = 0x3f800000;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x474] = 0x3f800000;
      FUN_00420b80(0x20000,0,0,0,0);
    }
    goto switchD_004277f3_default;
  case 5:
    FUN_00aa4080(0x43,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0xe,0);
    FUN_00a8ccb0(1);
    break;
  case 6:
    break;
  default:
    goto switchD_004277f3_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
switchD_004277f3_default:
  if (param_1[0x4fb] != 0) {
    param_1[0x4fb] = 0;
  }
  return;
}

// 00427B00  FUN_00427b00  size=297  [between]
void __fastcall FUN_00427b00(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x44,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(9,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
      }
    }
    *(undefined4 *)(param_1 + 0x920) = 0;
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1 + 0xf84) != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      fVar3 = (float10)FUN_00a958c0(0);
      FUN_00a95e60(0,(float)fVar3);
      (**(code **)(*piVar2 + 100))();
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 00427C30  FUN_00427c30  size=390  [between]
void __fastcall FUN_00427c30(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    param_1[0x48c] = 0;
    FUN_00aa4080(100,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if ((param_1[0x3e1] != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(6,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00427d5a;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x3e1] != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    fVar3 = (float10)FUN_00a958c0(0);
    FUN_00a95e60(0,(float)fVar3);
    (**(code **)(*piVar2 + 100))();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00427d5a:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00427DC0  FUN_00427dc0  size=558  [between]
void __fastcall FUN_00427dc0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    param_1[0x48c] = 0;
    FUN_00aa4080(0x67,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
    D3DXMatrixRotationY(local_50,param_1[0x25]);
    D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
    param_1[0x478] = (int)local_60;
    param_1[0x479] = (int)local_5c;
    param_1[0x47a] = (int)local_58;
    param_1[0x47b] = (int)fStack_54;
    param_1[0x248] = 0x3e4ccccd;
  }
  else if (iVar2 != 1) goto LAB_00427f90;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    iVar2 = FUN_00a959f0(0);
    if (iVar2 - 0x59U < 0x16) {
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 1.0;
      D3DXMatrixRotationY(local_50,param_1[0x25]);
      D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
      fVar1 = (float)param_1[0x244] * (float)param_1[0x248];
      param_1[0x248] = (int)((float)param_1[0x248] * 0.95);
      param_1[0x14] = (int)((float)param_1[0x14] + local_60 * fVar1);
      param_1[0x15] = (int)((float)param_1[0x15] + local_5c * fVar1);
      param_1[0x16] = (int)((float)param_1[0x16] + local_58 * fVar1);
      param_1[0x17] = (int)((float)param_1[0x17] + fStack_54 * fVar1);
      param_1[0x478] = (int)(local_60 * fVar1);
      param_1[0x479] = (int)(local_5c * fVar1);
      param_1[0x47a] = (int)(local_58 * fVar1);
      param_1[0x47b] = (int)(fStack_54 * fVar1);
    }
  }
  else {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00427f90:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00427FF0  FUN_00427ff0  size=217  [between]
void __fastcall FUN_00427ff0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x4a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00428080;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00428080:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 004280D0  FUN_004280d0  size=1912  [between]
void __fastcall FUN_004280d0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 *puVar6;
  int local_190;
  float local_18c;
  int local_188;
  int iStack_184;
  float local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [348];
  
  if (param_1[0x2a1] == 0) {
    FUN_00420b80(0x20000,0,0,0,0);
    return;
  }
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar5 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar5;
    FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00a8ccb0(1);
    FUN_00a5dc60();
    (**(code **)(*param_1 + 0x318))();
    goto LAB_004281b1;
  case 1:
LAB_004281b1:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8ccb0(1);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00aa4080(0xe,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    local_190 = param_1[0x10];
    iVar3 = param_1[0x2a1];
    local_18c = (float)param_1[0x11];
    local_188 = param_1[0x12];
    iStack_184 = param_1[0x13];
    uStack_170 = *(undefined4 *)(iVar3 + 0x50);
    uStack_16c = *(undefined4 *)(iVar3 + 0x54);
    uStack_168 = *(undefined4 *)(iVar3 + 0x58);
    uStack_164 = *(undefined4 *)(iVar3 + 0x5c);
    if (0xff < DAT_018b9174 - 0xa00U) {
      FUN_004039a0(0x3e,param_1,0);
      FUN_00e021c0(param_1);
      puVar6 = auStack_160;
      uVar2 = FUN_00e00b40(0x20020,puVar6);
      FUN_00a8c930(uVar2,puVar6);
    }
    fVar5 = (float10)FUN_00418220(&local_190,&uStack_170);
    param_1[0x521] = (int)(float)fVar5;
    param_1[0x524] = local_190;
    param_1[0x525] = (int)local_18c;
    param_1[0x526] = local_188;
    param_1[0x527] = iStack_184;
    FUN_00422440(param_1 + 0x508,&local_190,&uStack_170,0x41200000,0x40800000);
    param_1[0x249] = 0;
    FUN_00a8ccb0(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_190 = 0;
    local_18c = 0.0;
    local_188 = 0;
    fVar5 = (float10)FUN_00a581b0(&local_190,(float)param_1[0x521] * (float)param_1[0x244],
                                  param_1[0x249]);
    param_1[0x249] = (int)(float)fVar5;
    param_1[0x14] = local_190;
    param_1[0x15] = (int)local_18c;
    param_1[0x16] = local_188;
    FUN_00422440(param_1 + 0x508,param_1 + 0x524,param_1[0x2a1] + 0x40,0x41200000,0x40800000);
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar5 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar5;
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) ||
       (fVar1 = (float)param_1[0x249], !NAN(fVar1) && 0.5 < fVar1 != (fVar1 == 0.5))) {
      FUN_00a8ccb0(1);
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    return;
  case 4:
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_174 = 1.0 - (float)param_1[0x249];
    local_190 = 0;
    local_18c = 0.0;
    local_188 = 0;
    fVar5 = (float10)FUN_00a581b0(&local_190,(float)param_1[0x521] * (float)param_1[0x244],
                                  param_1[0x249]);
    param_1[0x249] = (int)(float)fVar5;
    param_1[0x14] = local_190;
    param_1[0x15] = (int)((local_18c - (float)param_1[0x15]) * local_174 + (float)param_1[0x15]);
    param_1[0x16] = local_188;
    FUN_00422440(param_1 + 0x508,param_1 + 0x524,param_1[0x2a1] + 0x40,0x41200000,0x40800000);
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar5 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar5;
    fVar1 = 0.8;
    goto LAB_0042853a;
  case 6:
    FUN_00aa4080(0x6a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_190 = 0;
    local_18c = 0.0;
    local_188 = 0;
    fVar4 = (float10)FUN_00a581b0(&local_190,(float)param_1[0x521] * 0.4 * (float)param_1[0x244],
                                  param_1[0x249]);
    param_1[0x249] = (int)(float)fVar4;
    param_1[0x14] = local_190;
    fVar5 = (float10)1;
    if (fVar5 < fVar4) {
      fVar5 = fVar4 - fVar5;
    }
    else {
      fVar5 = fVar5 - fVar4;
    }
    param_1[0x15] =
         (int)(float)(((float10)local_18c - (float10)(float)param_1[0x15]) * fVar5 +
                     (float10)(float)param_1[0x15]);
    param_1[0x16] = local_188;
    FUN_00422440(param_1 + 0x508,param_1 + 0x524,param_1[0x2a1] + 0x40,0x41200000,0x40800000);
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar5 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar5;
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8ccb0(1);
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0x6b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_190 = 0;
    local_18c = 0.0;
    local_188 = 0;
    fVar5 = (float10)FUN_00a581b0(&local_190,(float)param_1[0x521] * (float)param_1[0x244],
                                  param_1[0x249]);
    param_1[0x249] = (int)(float)fVar5;
    FUN_00422440(param_1 + 0x508,param_1 + 0x524,param_1[0x2a1] + 0x40,0x41200000,0x40800000);
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar5 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar5;
    param_1[0x14] = local_190;
    param_1[0x15] = (int)local_18c;
    param_1[0x16] = local_188;
    fVar1 = 2.0;
LAB_0042853a:
    if (fVar1 < (float)param_1[0x249] != (fVar1 == (float)param_1[0x249])) {
      FUN_00a8ccb0(1);
      return;
    }
    break;
  case 10:
    FUN_00aa4080(0x6c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    (**(code **)(*param_1 + 0x1d4))(0);
    (**(code **)(*param_1 + 0x314))();
    param_1[0x225] = 0;
    param_1[0x521] = 0;
    return;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  return;
}

// 00428880  FUN_00428880  size=1153  [between]
void __fastcall FUN_00428880(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  int local_30;
  float local_2c;
  int local_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (param_1[0x2a1] == 0) {
    FUN_00420b80(0x20000,0,0,0,0);
    return;
  }
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar3 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar3;
    FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00a8ccb0(1);
    FUN_00a5dc60();
    (**(code **)(*param_1 + 0x318))();
    iVar2 = param_1[0x2a1];
    local_30 = *(int *)(iVar2 + 0x50);
    local_2c = *(float *)(iVar2 + 0x54);
    local_28 = *(undefined4 *)(iVar2 + 0x58);
    uStack_24 = *(undefined4 *)(iVar2 + 0x5c);
    iStack_20 = param_1[0x10];
    iStack_1c = param_1[0x11];
    iStack_18 = param_1[0x12];
    iStack_14 = param_1[0x13];
    fVar3 = (float10)FUN_00418220(&iStack_20,&local_30);
    param_1[0x521] = (int)(float)fVar3;
    FUN_00422440(param_1 + 0x508,&iStack_20,&local_30,0x40800000,0x40200000);
    param_1[0x249] = 0;
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xe,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_30 = 0;
    local_2c = 0.0;
    local_28 = 0;
    fVar3 = (float10)FUN_00a581b0(&local_30,param_1[0x521],param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    param_1[0x14] = local_30;
    param_1[0x15] = (int)local_2c;
    param_1[0x16] = local_28;
    if ((float10)0.5 <= fVar3) {
      FUN_00a8ccb0(1);
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    return;
  case 4:
    FUN_00aa4080(0x7d,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    param_1[0x24f] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x225] = param_1[0x24f];
      iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar2 == 0) {
        param_1[0x187] = param_1[0x187] + 1;
        uVar4 = 0;
        uVar1 = 0xf;
      }
      else {
        uVar4 = 0x8000000;
        param_1[0x187] = 7;
        uVar1 = 0x10;
      }
      FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
    }
    local_30 = 0;
    local_2c = 0.0;
    local_28 = 0;
    fVar3 = (float10)FUN_00a581b0(&local_30,param_1[0x521],param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    if (fVar3 < (float10)2.0 != (fVar3 == (float10)2.0)) {
      param_1[0x24f] = (int)(local_2c - (float)param_1[0x15]);
      param_1[0x14] = local_30;
      param_1[0x15] = (int)local_2c;
      param_1[0x16] = local_28;
      return;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aa4080(0x10,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      return;
    }
    break;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  return;
}

// 00428D30  FUN_00428d30  size=430  [between]
void __fastcall FUN_00428d30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar1 = FUN_00a8c760(0x38);
  if (iVar1 != 0) {
    uVar2 = FUN_00ac8520(0x1e);
    if (0xff < DAT_018b9174 - 0xa00U) {
      uVar2 = FUN_00ac8520(0x1f);
    }
    iVar1 = FUN_00a8c760(10);
    if (iVar1 != 0) {
      uVar2 = FUN_00fdbc60();
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      (**(code **)(**(int **)(param_1 + 0xa84) + 0x30c))(uVar2,0);
    }
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    FUN_00aa4080(0x71,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(0x19,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
      }
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1 + 0xf84) != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      fVar4 = (float10)FUN_00a958c0(0);
      FUN_00a95e60(0,(float)fVar4);
      (**(code **)(*piVar3 + 100))();
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
    DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  }
  return;
}

// 00428EE0  FUN_00428ee0  size=235  [between]
void __fastcall FUN_00428ee0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x6e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_00428f70;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
LAB_00428f70:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00428FD0  FUN_00428fd0  size=146  [between]
void FUN_00428fd0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x6f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 00429070  FUN_00429070  size=36  [between]
void FUN_00429070(void)

{
  if (0xff < DAT_018b9174 - 0xa00U) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 004290A0  FUN_004290a0  size=3108  [between]
void __fastcall FUN_004290a0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int iStack_78;
  int iStack_70;
  int iStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((param_1[0x187] < 10) || (0x10 < param_1[0x187])) {
    uVar4 = 0;
  }
  else {
    fVar1 = (float)param_1[0x225] - (9.8 / ((float)param_1[0x244] * 60.0)) * 5.0;
    param_1[0x225] = (int)fVar1;
    if (0.0 <= fVar1) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      param_1[0x225] = (int)(fVar1 * -1.0);
    }
  }
  (**(code **)(*param_1 + 0x1d4))(uVar4);
  if (param_1[0x187] < 0x11) {
    (**(code **)(*param_1 + 0x220))(0x40000000);
  }
  param_1[0x225] = (int)((float)param_1[0x225] * (float)param_1[0x244]);
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    param_1[0x486] = param_1[0x486] + 1;
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    if (DAT_018b9174 - 0xa00U < 0x100) {
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      if (param_1[0x480] == 0) {
        if (param_1[0x2a1] == 0) {
          iVar2 = param_1[0x486] + -1;
        }
        else {
          if (param_1[0x486] == 1) {
            fVar1 = *(float *)(DAT_01beb8c0 + 0x1e4) * 57.29578;
            if ((150.0 < fVar1) || (fVar1 < -150.0)) {
              fStack_84 = (float)param_1[0x490];
              fStack_80 = (float)param_1[0x491];
              fStack_7c = (float)param_1[0x492];
              iStack_78 = param_1[0x493];
              param_1[0x498] = 1;
            }
            else {
              if ((30.0 <= fVar1) || (fVar1 <= -30.0)) {
                FUN_00420b80(0x20000,0,0,0,0);
                return;
              }
              fStack_84 = (float)param_1[0x494];
              fStack_80 = (float)param_1[0x495];
              fStack_7c = (float)param_1[0x496];
              iStack_78 = param_1[0x497];
              param_1[0x498] = 0;
            }
            goto LAB_004292e3;
          }
          iVar2 = param_1[0x498];
        }
        if (iVar2 == 0) {
          fStack_84 = (float)param_1[0x490];
          fStack_80 = (float)param_1[0x491];
          fStack_7c = (float)param_1[0x492];
          iStack_78 = param_1[0x493];
        }
        else {
          fStack_84 = (float)param_1[0x494];
          fStack_80 = (float)param_1[0x495];
          fStack_7c = (float)param_1[0x496];
          iStack_78 = param_1[0x497];
        }
      }
    }
LAB_004292e3:
    FUN_00418090(&fStack_84);
    param_1[0x187] = 3;
    return;
  case 1:
  case 2:
  case 9:
    break;
  case 3:
    iVar2 = FUN_004229c0(param_1[0x486] != 2);
    if (iVar2 != 0) {
      param_1[0x187] = 5;
      return;
    }
    break;
  case 4:
  case 5:
    uVar4 = FUN_00a8cad0();
    switch(uVar4) {
    case 0:
      FUN_00aa4080(0x1b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a8ccc0(1);
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        FUN_00a8ccc0(1);
        return;
      }
      break;
    case 2:
      FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a8ccc0(1);
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        param_1[0x187] = 6;
        param_1[0x188] = 0;
      }
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
      return;
    }
    break;
  case 6:
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    fVar3 = (float10)FUN_00dde300(0x41a00000,0x42700000);
    param_1[0x24a] = (int)(float)fVar3;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x24a];
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      param_1[0x187] = 8;
      return;
    }
    param_1[0x24a] = (int)((float)param_1[0x24a] - (float)param_1[0x244]);
    return;
  case 8:
    FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00a5dc60();
    iVar2 = param_1[0x2a1];
    fStack_88 = *(float *)(iVar2 + 0x40);
    fStack_84 = *(float *)(iVar2 + 0x44);
    fStack_80 = *(float *)(iVar2 + 0x48);
    fStack_7c = *(float *)(iVar2 + 0x4c);
    iStack_48 = param_1[0x10];
    iStack_44 = param_1[0x11];
    iStack_40 = param_1[0x12];
    iStack_3c = param_1[0x13];
    fStack_68 = fStack_88 - (float)param_1[0x10];
    fStack_64 = fStack_84 - (float)param_1[0x11];
    fStack_60 = fStack_80 - (float)param_1[0x12];
    fStack_5c = fStack_7c - (float)param_1[0x13];
    if (((fStack_68 != 0.0) || (fStack_64 != 0.0)) || (fStack_60 != 0.0)) {
      fVar1 = fStack_60 * fStack_60 + fStack_68 * fStack_68 + fStack_64 * fStack_64;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_68,&fStack_68);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_68 = 0.0;
        fStack_64 = 1.0;
        fStack_60 = 0.0;
      }
    }
    fStack_88 = fStack_88 - fStack_68;
    fStack_84 = fStack_84 - fStack_64;
    fStack_80 = fStack_80 - fStack_60;
    fStack_7c = fStack_7c - fStack_5c;
    if (param_1[0x480] == 0) {
      if (NAN(fStack_80) || -41.0 < fStack_80 == (fStack_80 == -41.0)) {
        if (fStack_80 <= -78.0) {
          fStack_80 = fStack_80 + 2.0;
        }
      }
      else {
        fStack_80 = fStack_80 - 2.0;
      }
    }
    fStack_58 = 0.0;
    fStack_54 = 0.0;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    fStack_24 = fStack_84 + 0.1;
    fStack_34 = fStack_84 - 30.0;
    fStack_38 = fStack_88;
    fStack_30 = fStack_80;
    fStack_2c = fStack_7c;
    fStack_28 = fStack_88;
    fStack_20 = fStack_80;
    fStack_1c = fStack_7c;
    iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (&fStack_58,0,0,0,&fStack_28,&fStack_38,0x1e,"em0020_Jump_Attack");
    if (iVar2 != 0) {
      fStack_88 = fStack_58;
      fStack_84 = fStack_54;
      fStack_80 = fStack_50;
      fStack_7c = fStack_4c;
    }
    FUN_00422440(param_1 + 0x508,&iStack_48,&fStack_88,0x40200000,0x40000000);
    fVar3 = (float10)FUN_00418220(&iStack_48,&fStack_88);
    param_1[0x521] = (int)(float)fVar3;
    param_1[0x187] = 10;
    param_1[0x249] = 0;
    return;
  case 10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 0xb;
      return;
    }
    break;
  case 0xb:
    FUN_00aa4080(0xe,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    return;
  case 0xc:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    fVar3 = (float10)FUN_00a581b0(&fStack_84,param_1[0x521],param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    param_1[0x14] = (int)fStack_84;
    param_1[0x15] = (int)fStack_80;
    param_1[0x16] = (int)fStack_7c;
    if ((float10)0.5 <= fVar3) {
      param_1[0x187] = 0xd;
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    return;
  case 0xd:
    FUN_00aa4080(0x6a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    param_1[0x187] = 0xe;
  case 0xe:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    param_1[0x225] = (int)((float)param_1[0x244] * 0.49);
    fVar3 = (float10)FUN_00a581b0(&fStack_84,(float)param_1[0x244] * 0.49,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    param_1[0x14] = (int)fStack_84;
    param_1[0x15] = (int)fStack_80;
    param_1[0x16] = (int)fStack_7c;
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      fVar3 = (float10)FUN_00a8e9c0();
      param_1[0x25] = (int)(float)fVar3;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    return;
  case 0xf:
    FUN_00aa4080(0x6b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    goto LAB_00429a63;
  case 0x10:
LAB_00429a63:
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    param_1[0x225] = (int)((float)param_1[0x244] * 0.49);
    fVar3 = (float10)FUN_00a581b0(&fStack_84,(float)param_1[0x244] * 0.49,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    if ((float10)1 < fVar3 != ((float10)1 == fVar3)) {
      fStack_34 = (float)param_1[0x10];
      fStack_2c = (float)param_1[0x12];
      fStack_28 = (float)param_1[0x13];
      fStack_30 = (float)param_1[0x11] + 0.1;
      fStack_20 = (float)param_1[0x11] - 0.5;
      fStack_24 = fStack_34;
      fStack_1c = fStack_2c;
      fStack_18 = fStack_28;
      iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (0,0,0,0,&fStack_34,&fStack_24,0x1e,"em0020_Jump_Attack");
      if (iVar2 != 0) {
        FUN_00a8ccb0(1);
      }
    }
    param_1[0x14] = (int)fStack_84;
    if (1.0 < (float)param_1[0x249]) {
      param_1[0x15] =
           (int)((fStack_80 - (float)param_1[0x15]) * ((float)param_1[0x249] - 1.0) +
                (float)param_1[0x15]);
      param_1[0x16] = (int)fStack_7c;
      return;
    }
    param_1[0x15] =
         (int)((1.0 - (float)param_1[0x249]) * (fStack_80 - (float)param_1[0x15]) +
              (float)param_1[0x15]);
    param_1[0x16] = (int)fStack_7c;
    return;
  case 0x11:
    FUN_00aa4080(0x6c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000040,1);
    FUN_00a8ccb0(1);
    (**(code **)(*param_1 + 0x1d4))(0);
    param_1[0x225] = 0;
    (**(code **)(*param_1 + 0x314))();
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00a962d0(1,0);
    goto LAB_00429c14;
  case 0x12:
LAB_00429c14:
    iStack_70 = 0;
    iStack_6c = 0;
    fStack_68 = 0.0;
    FUN_00a581b0(&iStack_70,param_1[0x225],param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.06666667 + (float)param_1[0x249]);
    param_1[0x14] = iStack_70;
    param_1[0x15] = iStack_6c;
    param_1[0x16] = (int)fStack_68;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x10006,0,0,0,0);
      FUN_00a962d0(0,0);
      return;
    }
  }
  return;
}

// 00429D20  FUN_00429d20  size=2371  [between]
void __fastcall FUN_00429d20(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float fStack_68;
  float fStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  float fStack_54;
  undefined1 auStack_50 [76];
  
  if (param_1[0x187] < 0xd) {
    (**(code **)(*param_1 + 0x220))(0x40000000);
  }
  FUN_00a962d0(1,0);
  uVar6 = FUN_00a8cac0();
  switch(uVar6) {
  case 0:
    FUN_00aa4080(0x73,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x25] = 0x3fc90fdb;
    param_1[0x187] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    pcVar4 = *(code **)(*param_1 + 0x318);
    param_1[0x248] = 0;
    param_1[0x225] = 0;
    (*pcVar4)();
    goto LAB_00429df6;
  case 1:
LAB_00429df6:
    fVar3 = (float)param_1[0x244];
    param_1[0x14] = (int)((float)param_1[0x14] + fVar3 * 0.0);
    param_1[0x15] = (int)((float)param_1[0x15] + fVar3 * 0.05);
    param_1[0x16] = (int)(fVar3 * 0.0 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fVar3 * fStack_54 + (float)param_1[0x17]);
    fStack_64 = (float)param_1[0x4ac];
    if (((float)param_1[0x520] <= fStack_64 * 0.252 + (float)param_1[0x14]) ||
       ((float)param_1[0x14] - fStack_64 * 0.252 <= (float)param_1[0x520] * -1.0)) {
      fStack_64 = ((float)param_1[0x520] - (float)param_1[0x14]) * 3.9682539;
    }
    iVar7 = FUN_00a959f0(0);
    fVar3 = 1.0;
    if (0xf < iVar7) {
      fVar3 = fStack_64;
    }
    FUN_00ac80a0(fVar3,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x74,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
  case 3:
    fVar3 = (float)param_1[0x4ac];
    if (((float)param_1[0x520] <= fVar3 * 0.252 + (float)param_1[0x14]) ||
       ((float)param_1[0x14] - fVar3 * 0.252 <= (float)param_1[0x520] * -1.0)) {
      param_1[0x187] = 4;
      fVar3 = ((float)param_1[0x520] - (float)param_1[0x14]) * 3.9682539;
    }
    FUN_00ac80a0(fVar3,0x3f800000);
    iStack_60 = param_1[0x49c];
    iStack_5c = param_1[0x49d];
    iStack_58 = param_1[0x49e];
    fStack_54 = (float)param_1[0x49f];
    D3DXMatrixRotationY(auStack_50,param_1[0x25]);
    D3DXVec3TransformNormal(&fStack_68,&fStack_68,&iStack_58);
    fVar3 = (float)param_1[0x244];
    param_1[0x14] = (int)((float)param_1[0x14] + fVar3 * 0.0);
    param_1[0x15] = (int)((float)param_1[0x15] + fVar3 * 0.05);
    param_1[0x16] = (int)(fVar3 * 0.0 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fVar3 * fStack_68 + (float)param_1[0x17]);
    fVar3 = (float)param_1[0x520];
    if (((float)param_1[0x520] < (float)param_1[0x14]) ||
       (fVar3 = fVar3 * -1.0, (float)param_1[0x14] < fVar3)) {
      param_1[0x14] = (int)fVar3;
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x75,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x187] = 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x76,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 7;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x4a8] * 0.06);
    param_1[0x15] = (int)((float)param_1[0x15] + 0.01);
    param_1[0x16] = (int)((float)param_1[0x4aa] * 0.06 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x4ab] * 0.06 + (float)param_1[0x17]);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x187] = 8;
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0x77,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    iVar7 = param_1[0x2a1];
    param_1[0x187] = 9;
    pfVar1 = (float *)(param_1 + 0x4a0);
    fVar8 = (float10)fpatan((float10)*(float *)(iVar7 + 0x40) - (float10)(float)param_1[0x10],
                            (float10)*(float *)(iVar7 + 0x48) - (float10)(float)param_1[0x12]);
    param_1[0x25] = (int)(float)(fVar8 + (float10)3.1415927);
    param_1[0x4a4] = *(int *)(iVar7 + 0x40);
    param_1[0x4a5] = *(int *)(iVar7 + 0x44);
    param_1[0x4a6] = *(int *)(iVar7 + 0x48);
    param_1[0x4a7] = *(int *)(iVar7 + 0x4c);
    *pfVar1 = (float)param_1[0x4a4] - (float)param_1[0x10];
    param_1[0x4a1] = (int)((float)param_1[0x4a5] - (float)param_1[0x11]);
    param_1[0x4a2] = (int)((float)param_1[0x4a6] - (float)param_1[0x12]);
    param_1[0x4a3] = (int)((float)param_1[0x4a7] - (float)param_1[0x13]);
    if (((*pfVar1 != 0.0) || ((float)param_1[0x4a1] != 0.0)) || ((float)param_1[0x4a2] != 0.0)) {
      fVar3 = (float)param_1[0x4a2] * (float)param_1[0x4a2] +
              *pfVar1 * *pfVar1 + (float)param_1[0x4a1] * (float)param_1[0x4a1];
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        fStack_64 = (float)param_1[0x4a2];
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x4a1] = 0x3f800000;
        param_1[0x4a2] = 0;
      }
      fVar3 = *pfVar1;
      fVar2 = (float)param_1[0x4a2];
      *pfVar1 = *pfVar1 * 0.6;
      param_1[0x4a1] = (int)((float)param_1[0x4a1] * 0.6);
      param_1[0x4a2] = (int)((float)param_1[0x4a2] * 0.6);
      param_1[0x4a3] = (int)((float)param_1[0x4a3] * 0.6);
      fVar5 = ((float)param_1[0x4a4] - fVar3 * 2.0) - (float)param_1[0x10];
      fVar3 = ((float)param_1[0x4a6] - fVar2 * 2.0) - (float)param_1[0x12];
      *pfVar1 = 0.0;
      param_1[0x4a1] = 0;
      param_1[0x4a2] = 0;
      param_1[0x4a3] = (int)fStack_54;
      param_1[0x4a1] =
           (int)(((float)param_1[0x11] /
                 (SQRT(fVar5 * fVar5 + fVar3 * fVar3) / ((float)param_1[0x4ac] * 0.252))) * -1.0);
    }
  case 9:
    FUN_00ac80a0((float)param_1[0x4ac] * 0.5,0x3f800000);
    param_1[0x14] = (int)((float)param_1[0x4a8] * 0.03 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + 0.01);
    param_1[0x16] = (int)((float)param_1[0x4aa] * 0.03 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x4ab] * 0.03 + (float)param_1[0x17]);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x187] = 10;
      return;
    }
    break;
  case 10:
    FUN_00aa4080(0x78,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 0xb;
  case 0xb:
    FUN_00ac80a0(param_1[0x4ac],0x3f800000);
    fVar3 = (float)param_1[0x244];
    param_1[0x14] = (int)((float)param_1[0x14] + fVar3 * (float)param_1[0x4a0]);
    param_1[0x15] = (int)((float)param_1[0x4a1] * fVar3 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x4a2] * fVar3 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x4a3] * fVar3 + (float)param_1[0x17]);
    if (param_1[0x480] == 0) {
      fVar3 = 1.8;
    }
    else {
      fVar3 = 6.8;
    }
    if ((float)param_1[0x15] < fVar3) {
      param_1[0x15] = (int)fVar3;
    }
    if (SQRT(((float)param_1[0x4a4] - (float)param_1[0x10]) *
             ((float)param_1[0x4a4] - (float)param_1[0x10]) +
             ((float)param_1[0x4a5] - (float)param_1[0x11]) *
             ((float)param_1[0x4a5] - (float)param_1[0x11]) +
             ((float)param_1[0x4a6] - (float)param_1[0x12]) *
             ((float)param_1[0x4a6] - (float)param_1[0x12])) < 4.0) {
      param_1[0x187] = 0xc;
      return;
    }
    break;
  case 0xc:
    FUN_00aa4080(0x79,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0xd;
  case 0xd:
    fVar3 = (float)param_1[0x244];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x4a0] * fVar3);
    param_1[0x15] = (int)((float)param_1[0x4a1] * fVar3 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x4a2] * fVar3 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x4a3] * fVar3 + (float)param_1[0x17]);
    if (param_1[0x480] == 0) {
      fVar3 = 1.8;
    }
    else {
      fVar3 = 6.8;
    }
    if ((float)param_1[0x15] < fVar3) {
      param_1[0x15] = (int)fVar3;
    }
    fVar3 = 2.5;
    if (param_1[0x480] != 0) {
      fVar3 = 1.4;
    }
    if (((float)param_1[0x10] < fVar3) && (fVar3 * -1.0 < (float)param_1[0x10])) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x314))();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  return;
}

// 0042A6A0  FUN_0042a6a0  size=206  [between]
void __fastcall FUN_0042a6a0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x488] = 0;
    FUN_00aa4080(0x7b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x10006,0,0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f000000,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0042A770  FUN_0042a770  size=637  [between]
void __fastcall FUN_0042a770(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x45,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0xf,0);
    FUN_00a8ccb0(1);
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x46,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_0041c730(0x10,1);
    FUN_00a8ccb0(1);
    goto LAB_0042a855;
  case 3:
LAB_0042a855:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00a8ccb0(1);
    return;
  case 4:
    FUN_00aa4080(0x47,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0x11,0);
    FUN_00a8ccb0(1);
    goto LAB_0042a8db;
  case 5:
LAB_0042a8db:
    iVar2 = FUN_00a959f0(0);
    if (0x16 < iVar2) {
      fVar3 = (float10)FUN_00dde300(0xbca3d70a,0x3df5c28f);
      fVar4 = (float10)FUN_00dde300(0xbca3d70a,0x3ca3d70a);
      local_30 = (float)fVar4;
      local_2c = (float)fVar3;
      fVar5 = (float10)FUN_00dde300(0x3c23d70a,0x3c23d70a);
      local_28 = (float)fVar5;
      local_1c = (float)fVar3 + 1.0;
      local_18 = 0;
      local_20 = (float)fVar4;
      FUN_004206e0(&local_20,&local_30);
      FUN_00a8ccb0(1);
    }
    goto LAB_0042a995;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  default:
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
LAB_0042a995:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042AA10  FUN_0042aa10  size=788  [between]
void __fastcall FUN_0042aa10(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0x45,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0xf,0);
    FUN_00a8ccb0(1);
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x46,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_0041c730(0x10,0);
    FUN_00a8ccb0(1);
    goto LAB_0042aaf6;
  case 3:
LAB_0042aaf6:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    else {
      FUN_00a8ccb0(1);
    }
    goto switchD_0042aa2d_default;
  case 4:
    FUN_00aa4080(0x47,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0x11,0);
    FUN_00a8ccb0(1);
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      fVar5 = (float10)FUN_00a8e9c0();
      param_1[0x25] = (int)(float)fVar5;
    }
    goto LAB_0042ab9e;
  case 5:
LAB_0042ab9e:
    iVar4 = FUN_00a959f0(0);
    if (2 < iVar4) {
      iVar4 = 0;
      do {
        fVar5 = (float10)FUN_00dde300(0xbdcccccd,0x3dcccccd);
        fVar1 = (float)fVar5;
        fVar5 = (float10)FUN_00dde300(0x3ca3d70a,0x3dcccccd);
        fVar2 = (float)fVar5;
        fVar5 = (float10)FUN_00dde300(0x3f000000,0x3f4ccccd);
        if (iVar4 == 0) {
          fVar1 = 0.0;
          fVar2 = 0.06;
        }
        local_28 = (float)fVar5;
        local_1c = fVar2 + 0.1;
        local_18 = 0;
        local_30 = fVar1;
        local_2c = fVar2;
        local_20 = fVar1;
        FUN_004206e0(&local_20,&local_30);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      FUN_00a8ccb0(1);
    }
    goto LAB_0042ac78;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  default:
    goto switchD_0042aa2d_default;
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
LAB_0042ac78:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    param_1[0x187] = 4;
  }
switchD_0042aa2d_default:
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0042AD40  FUN_0042ad40  size=2669  [between]
void __fastcall FUN_0042ad40(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  float fVar7;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 local_1a0 [64];
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x41,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if (param_1[0x4e3] < 3) {
      if (param_1[0x4e3] != 0) {
        uVar5 = 0x3f000000;
        uVar1 = 0;
        FUN_00a92f90(0,0x3f000000);
        FUN_00407b10(uVar1,uVar5);
      }
    }
    else {
      param_1[0x4e3] = 0;
    }
    FUN_0041c730(0xc,0);
    param_1[0x187] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    param_1[0x4e3] = param_1[0x4e3] + 1;
    FUN_004039a0(0x3e,param_1,0);
    FUN_00e021c0(param_1);
    puVar6 = local_160;
    uVar1 = FUN_00e00b40(0x20020,puVar6);
    FUN_00a8c930(uVar1,puVar6);
    if (param_1[0x2a1] != 0) {
      local_1e0 = -0.5;
      local_1dc = 0.0;
      local_1d8 = 0.0;
      D3DXMatrixRotationY(local_1a0,param_1[0x25]);
      D3DXVec3TransformNormal(&fStack_1e8,&fStack_1e8,&fStack_1a8);
      iVar2 = param_1[0x2a1];
      fStack_1b0 = *(float *)(iVar2 + 0x40) + local_1e0;
      fStack_1ac = *(float *)(iVar2 + 0x44) + local_1dc;
      fStack_1a8 = *(float *)(iVar2 + 0x48) + local_1d8;
      fStack_1a4 = *(float *)(iVar2 + 0x4c) + fStack_1d4;
      FUN_00a8e880(&fStack_1b0);
    }
    fVar4 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar4;
    FUN_00aa4080(0x37,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(10,0);
    if ((float)param_1[0x473] < (float)param_1[0x2a3]) {
      param_1[0x474] = (int)((float)param_1[0x2a3] / (float)param_1[0x473]);
      if (2.0 < (float)param_1[0x2a3] / (float)param_1[0x473]) {
        param_1[0x474] = 0x40000000;
      }
      param_1[0x474] = (int)((float)param_1[0x244] * (float)param_1[0x474]);
    }
    param_1[0x187] = 3;
    goto LAB_0042afa1;
  case 3:
LAB_0042afa1:
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar4 = (float10)FUN_00a8e9c0();
    param_1[0x25] = (int)(float)fVar4;
    FUN_00ac80a0(param_1[0x474],0x3f800000);
    if (((float)param_1[0x2a3] < 30.0) || (iVar2 = FUN_00a959f0(0), 0x19 < iVar2)) {
      param_1[0x474] = 0x3f800000;
      local_1e0 = 0.0;
      local_1dc = 0.0;
      local_1d8 = 1.0;
      iVar2 = param_1[0x25];
      param_1[0x187] = (uint)(2 < param_1[0x4e3]) * 4 + 4;
      D3DXMatrixRotationY(local_1a0);
      D3DXVec3TransformNormal(&fStack_1e8,&fStack_1e8,&fStack_1a8);
      param_1[0x478] = iVar2;
      param_1[0x479] = (int)unaff_EDI;
      param_1[0x47a] = (int)unaff_ESI;
      param_1[0x47b] = (int)fStack_1e8;
      param_1[0x248] = 0x3f333333;
      param_1[0x249] = 0x3e800000;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x7f,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0x13,0);
    param_1[0x187] = 5;
    goto LAB_0042b0ef;
  case 5:
LAB_0042b0ef:
    (**(code **)(*param_1 + 0x314))();
    iVar2 = FUN_00a959f0(0);
    if (iVar2 < 0x11) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      fVar4 = (float10)FUN_00a8e9c0();
      param_1[0x25] = (int)(float)fVar4;
      fVar7 = SQRT((float)param_1[0x479] * (float)param_1[0x479] +
                   (float)param_1[0x478] * (float)param_1[0x478] +
                   (float)param_1[0x47a] * (float)param_1[0x47a]);
      param_1[0x478] = (int)((float)param_1[0x478] / fVar7);
      param_1[0x479] = (int)((float)param_1[0x479] / fVar7);
      param_1[0x47a] = (int)((float)param_1[0x47a] / fVar7);
      param_1[0x47b] = (int)((float)param_1[0x47b] / fVar7);
      fVar7 = (float)param_1[0x244] * (float)param_1[0x249];
      param_1[0x478] = (int)(fVar7 * (float)param_1[0x478]);
      param_1[0x479] = (int)(fVar7 * (float)param_1[0x479]);
      param_1[0x47a] = (int)(fVar7 * (float)param_1[0x47a]);
      param_1[0x47b] = (int)(fVar7 * (float)param_1[0x47b]);
      param_1[0x249] = (int)((float)param_1[0x249] * 0.98);
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x478]);
      param_1[0x15] = (int)((float)param_1[0x479] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x47a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x47b] + (float)param_1[0x17]);
    }
    else {
      fVar7 = SQRT((float)param_1[0x47a] * (float)param_1[0x47a] +
                   (float)param_1[0x478] * (float)param_1[0x478] +
                   (float)param_1[0x479] * (float)param_1[0x479]);
      param_1[0x478] = (int)((float)param_1[0x478] / fVar7);
      param_1[0x479] = (int)((float)param_1[0x479] / fVar7);
      param_1[0x47a] = (int)((float)param_1[0x47a] / fVar7);
      param_1[0x47b] = (int)((float)param_1[0x47b] / fVar7);
      fVar7 = (float)param_1[0x244] * (float)param_1[0x248];
      param_1[0x478] = (int)(fVar7 * (float)param_1[0x478]);
      param_1[0x479] = (int)((float)param_1[0x479] * fVar7);
      param_1[0x47a] = (int)((float)param_1[0x47a] * fVar7);
      param_1[0x47b] = (int)(fVar7 * (float)param_1[0x47b]);
      param_1[0x248] = (int)((float)param_1[0x248] * 0.95);
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x478]);
      param_1[0x15] = (int)((float)param_1[0x479] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x47a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x47b] + (float)param_1[0x17]);
      if (param_1[0x2a1] != 0) {
        local_1e0 = -0.5;
        local_1dc = 0.0;
        local_1d8 = 0.0;
        fVar7 = (float)param_1[0x25];
        D3DXMatrixRotationY(local_1a0,fVar7);
        D3DXVec3TransformNormal(&fStack_1e8,&fStack_1e8,&fStack_1a8);
        iVar2 = param_1[0x2a1];
        fStack_1e4 = *(float *)(iVar2 + 0x40) + fVar7;
        local_1e0 = *(float *)(iVar2 + 0x44) + unaff_EDI;
        local_1dc = *(float *)(iVar2 + 0x48) + unaff_ESI;
        local_1d8 = *(float *)(iVar2 + 0x4c) + fStack_1e8;
        FUN_00a8e880(&fStack_1e4);
        FUN_00a8e880(param_1[0x2a1] + 0x50);
        (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3db2b8c2,0);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0x30025,0,0,0);
      param_1[0x187] = 2;
      return;
    }
    break;
  case 6:
  case 7:
    break;
  case 8:
    FUN_00aa4080(0x80,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0x14,0);
    param_1[0x187] = 9;
    goto LAB_0042b453;
  case 9:
LAB_0042b453:
    (**(code **)(*param_1 + 0x314))();
    iVar2 = FUN_00a959f0(0);
    if (iVar2 < 0x11) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      fVar4 = (float10)FUN_00a8e9c0();
      param_1[0x25] = (int)(float)fVar4;
      fVar7 = SQRT((float)param_1[0x479] * (float)param_1[0x479] +
                   (float)param_1[0x478] * (float)param_1[0x478] +
                   (float)param_1[0x47a] * (float)param_1[0x47a]);
      param_1[0x478] = (int)((float)param_1[0x478] / fVar7);
      param_1[0x479] = (int)((float)param_1[0x479] / fVar7);
      param_1[0x47a] = (int)((float)param_1[0x47a] / fVar7);
      param_1[0x47b] = (int)((float)param_1[0x47b] / fVar7);
      fVar7 = (float)param_1[0x244] * (float)param_1[0x249];
      param_1[0x478] = (int)(fVar7 * (float)param_1[0x478]);
      param_1[0x479] = (int)(fVar7 * (float)param_1[0x479]);
      param_1[0x47a] = (int)(fVar7 * (float)param_1[0x47a]);
      param_1[0x47b] = (int)(fVar7 * (float)param_1[0x47b]);
      param_1[0x249] = (int)((float)param_1[0x249] * 0.98);
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x478]);
      param_1[0x15] = (int)((float)param_1[0x479] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x47a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x47b] + (float)param_1[0x17]);
    }
    else {
      fVar7 = SQRT((float)param_1[0x479] * (float)param_1[0x479] +
                   (float)param_1[0x478] * (float)param_1[0x478] +
                   (float)param_1[0x47a] * (float)param_1[0x47a]);
      param_1[0x478] = (int)((float)param_1[0x478] / fVar7);
      param_1[0x479] = (int)((float)param_1[0x479] / fVar7);
      param_1[0x47a] = (int)((float)param_1[0x47a] / fVar7);
      param_1[0x47b] = (int)((float)param_1[0x47b] / fVar7);
      fVar7 = (float)param_1[0x244] * (float)param_1[0x248];
      param_1[0x478] = (int)(fVar7 * (float)param_1[0x478]);
      param_1[0x479] = (int)(fVar7 * (float)param_1[0x479]);
      param_1[0x47a] = (int)(fVar7 * (float)param_1[0x47a]);
      param_1[0x47b] = (int)(fVar7 * (float)param_1[0x47b]);
      param_1[0x248] = (int)((float)param_1[0x248] * 0.95);
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x478]);
      param_1[0x15] = (int)((float)param_1[0x479] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x47a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x47b] + (float)param_1[0x17]);
      if (param_1[0x2a1] != 0) {
        local_1e0 = -0.5;
        local_1dc = 0.0;
        local_1d8 = 0.0;
        fVar7 = (float)param_1[0x25];
        D3DXMatrixRotationY(local_1a0,fVar7);
        D3DXVec3TransformNormal(&fStack_1e8,&fStack_1e8,&fStack_1a8);
        iVar2 = param_1[0x2a1];
        fStack_1d4 = fVar7 + *(float *)(iVar2 + 0x40);
        fStack_1d0 = *(float *)(iVar2 + 0x44) + unaff_EDI;
        fStack_1cc = *(float *)(iVar2 + 0x48) + unaff_ESI;
        fStack_1c8 = *(float *)(iVar2 + 0x4c) + fStack_1e8;
        FUN_00a8e880(&fStack_1d4);
        FUN_00a8e880(param_1[0x2a1] + 0x50);
        (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3db2b8c2,0);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x439] = 0x42b40000;
      if (param_1[0x4e4] == 0) {
        param_1[0x4e4] = 1;
      }
      iVar2 = param_1[0x3e6];
      if ((iVar2 != 0) && (iVar3 = FUN_004161b0(), iVar3 != 0)) {
        FUN_00a9dac0(iVar2);
        param_1[0x3e6] = 0;
      }
      FUN_00a8caf0(0x10006,0,0,0);
      FUN_0041c730(4,0);
      return;
    }
  }
  return;
}

// 0042B7E0  FUN_0042b7e0  size=47  [between]
void __fastcall FUN_0042b7e0(int param_1)

{
  if ((*(float *)(param_1 + 0xa8c) < 81.0) && (*(int *)(param_1 + 0x61c) == 2)) {
    FUN_00420b80(0x3000c,0,0,0,0);
  }
  return;
}

// 0042B810  FUN_0042b810  size=454  [between]
void __fastcall FUN_0042b810(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x41,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0041c730(0xc,0);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
    }
    break;
  case 2:
    FUN_00aa4080(0x19,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if ((param_1[0x3e1] != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(4,0,0x3c888889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    FUN_00a8ccb0(1);
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      param_1[0x4e0] = 0x3f800000;
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 0042B9F0  FUN_0042b9f0  size=240  [between]
void __fastcall FUN_0042b9f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x84,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
    }
  }
  return;
}

// 0042BAE0  FUN_0042bae0  size=546  [between]
void __fastcall FUN_0042bae0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0xde,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x225] = 0x3e800000;
    pcVar2 = *(code **)(*param_1 + 0x1d4);
    param_1[0x289] = 0x41700000;
    param_1[0x187] = 1;
    param_1[0x288] = 1;
    (*pcVar2)(1);
    param_1[0x228] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xdf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xe0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    pcVar2 = *(code **)(*param_1 + 0x1d4);
    param_1[0x187] = 5;
    param_1[0x228] = 1;
    (*pcVar2)(0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      fVar1 = (float)param_1[0x2a3];
      if (NAN(fVar1) || 9.0 < fVar1 == (fVar1 == 9.0)) {
        FUN_00420b80(0x30026,0,0,0,0);
        return;
      }
      FUN_00420b80(0x1000c,0,0,0,0);
      return;
    }
  }
  return;
}

// 0042BD20  FUN_0042bd20  size=221  [between]
void __fastcall FUN_0042bd20(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xec,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x225] = 0x3da3d70a;
    param_1[0x289] = 0x41100000;
    param_1[0x288] = 1;
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00420b80(0x40009,0,0,0,0);
  FUN_00a8cb60(2);
                    /* WARNING: Could not recover jumptable at 0x0042bdfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x314))();
  return;
}

// 0042BE00  FUN_0042be00  size=418  [between]
void __thiscall FUN_0042be00(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [76];
  
  iVar1 = (**(code **)(*param_1 + 0x1fc))();
  if (iVar1 != 0) {
    return;
  }
  param_1[0x436] = param_1[0x436] - param_2;
  if (param_1[0x436] <= param_1[0x4b3] / 3) {
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    fStack_58 = -0.5;
    D3DXMatrixRotationY(auStack_50,param_1[0x25]);
    D3DXVec3TransformNormal(auStack_68,auStack_68,&fStack_58);
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_60);
    param_1[0x15] = (int)((float)param_1[0x15] + fStack_5c);
    param_1[0x16] = (int)((float)param_1[0x16] + fStack_58);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_54);
    switch(param_1[0x186]) {
    case 0x100000:
      uVar2 = 0x100004;
      break;
    case 0x100001:
      uVar2 = 0x100005;
      break;
    case 0x100002:
      uVar2 = 0x100006;
      break;
    case 0x100003:
      uVar2 = 0x100007;
      break;
    default:
      goto switchD_0042beba_default;
    }
    FUN_00420b80(uVar2,0,0,0,0);
  }
switchD_0042beba_default:
  if (param_1[0x436] < 1) {
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00b7ab80(0x41a00000,0x3d4ccccd);
      }
    }
    FUN_00420b80(0x4000c,0,0,0,0);
    param_1[0x439] = 0x438c0000;
    (**(code **)(*param_1 + 0x30c))(param_1[0x4b1],0);
    param_1[0x436] = param_1[0x4b3];
    param_1[0x43a] = 1;
  }
  return;
}

// 0042BFC0  FUN_0042bfc0  size=420  [between]
void __fastcall FUN_0042bfc0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0xf2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x14e4) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xf3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x10e4);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    *(float *)(param_1 + 0x10e4) = *(float *)(param_1 + 0x10e4) - *(float *)(param_1 + 0x910);
    return;
  case 4:
    FUN_00aa4080(0xf4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  return;
}

// 0042C180  FUN_0042c180  size=149  [between]
void FUN_0042c180(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xcf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 0042C220  FUN_0042c220  size=149  [between]
void FUN_0042c220(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xd0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 0042C2C0  FUN_0042c2c0  size=149  [between]
void FUN_0042c2c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xd1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 0042C360  FUN_0042c360  size=149  [between]
void FUN_0042c360(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xee,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 0042C400  FUN_0042c400  size=171  [between]
void __fastcall FUN_0042c400(int param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x824) = 4;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xf6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 0042C4B0  FUN_0042c4b0  size=170  [between]
void __fastcall FUN_0042c4b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xf7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1370) != 0) {
      FUN_00420b80(0x40011,0,0,0,0);
      return;
    }
    FUN_00420b80(0x20000,0,0,0,0);
  }
  return;
}

// 0042C560  Em0020::vf30C  size=474  [class]
void __thiscall Em0020::vf30C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0xff < DAT_018b9174 - 0xa00U) {
    iVar2 = *(int *)(param_1 + 0x12b4);
    iVar1 = *(int *)(param_1 + 0x870);
    if ((((iVar1 <= iVar2) && (*(int *)(param_1 + 0x12b8) <= iVar1)) &&
        (*(int *)(param_1 + 0x1370) == 0)) && (param_2 = FUN_00fdbc60(), param_2 < 1)) {
      param_2 = 1;
    }
    if (*(int *)(param_1 + 0x1370) == 0) {
      if ((iVar1 <= iVar2) && (*(int *)(param_1 + 0x12b8) <= iVar1 - param_2)) {
        if (*(int *)(param_1 + 0xdc0) != 2) {
          FUN_00420b80(0x80006,0,0,0,0);
        }
        *(undefined4 *)(param_1 + 0xdc0) = 2;
      }
      if (*(int *)(param_1 + 0x870) - param_2 <= *(int *)(param_1 + 0x12b8)) {
        iVar2 = *(int *)(param_1 + 0xf78);
        if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x38) & 1) == 0)) {
          *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
        }
        iVar2 = *(int *)(param_1 + 0xf74);
        if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x38) & 1) == 0)) {
          *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
        }
        *(undefined4 *)(param_1 + 0xdc0) = 1;
      }
      BehaviorAppBase::vf30C(param_2,0);
      iVar2 = FUN_00a8eea0();
      if (((iVar2 <= *(int *)(param_1 + 0x12b8) / 2) &&
          (iVar2 = *(int *)(param_1 + 0xf70), iVar2 != 0)) && ((*(uint *)(iVar2 + 0x38) & 1) == 0))
      {
        *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
      }
      if (*(int *)(param_1 + 0x870) < 1) {
        *(undefined4 *)(param_1 + 0x870) = 1;
      }
    }
    else {
      BehaviorAppBase::vf30C(param_2,0);
      if (*(int *)(param_1 + 0x870) < 1) {
        *(undefined4 *)(param_1 + 0x870) = 1;
      }
      iVar2 = (*(int *)(param_1 + 0x12b4) - *(int *)(param_1 + 0x12b8)) / 3;
      iVar1 = FUN_00a8eea0();
      if (((iVar1 <= *(int *)(param_1 + 0x12b4) - iVar2) &&
          (iVar1 = *(int *)(param_1 + 0xf78), iVar1 != 0)) && ((*(uint *)(iVar1 + 0x38) & 1) == 0))
      {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
      }
      iVar1 = FUN_00a8eea0();
      if (((iVar1 <= *(int *)(param_1 + 0x12b4) + iVar2 * -2) &&
          (iVar2 = *(int *)(param_1 + 0xf74), iVar2 != 0)) && ((*(uint *)(iVar2 + 0x38) & 1) == 0))
      {
        *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
        return;
      }
    }
  }
  return;
}

// 0042C740  FUN_0042c740  size=179  [between]
void __fastcall FUN_0042c740(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar2 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      FUN_00b85350(0x42b40000,0x3c23d70a,0x3c23d70a,1,1,0x3dcccccd);
      FUN_00c52770(*(undefined4 *)(param_1 + 0x1378),0x41200000);
      FUN_00c52700(*(undefined4 *)(param_1 + 0x1378),1);
      FUN_00420b80(0x40014,0,0,0,0);
      *(undefined4 *)(param_1 + 0x10e8) = 1;
    }
  }
  return;
}

// 0042C800  FUN_0042c800  size=450  [between]
void __fastcall FUN_0042c800(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  float10 fVar3;
  
  if (*(uint *)(param_1 + 0x1098) < 2) {
    return;
  }
  fVar3 = (float10)FUN_00dde300(0,0x3f800000);
  if (((fVar3 < (float10)*(float *)(param_1 + 0x14dc) ==
        (fVar3 == (float10)*(float *)(param_1 + 0x14dc))) ||
      (*(int *)(param_1 + 0x14e0) <= *(int *)(param_1 + 0x14e4))) && (0xff < DAT_018b9174 - 0xa00U))
  {
    return;
  }
  *(int *)(param_1 + 0x14e4) = *(int *)(param_1 + 0x14e4) + 1;
  uVar2 = FUN_00dde2d0(0,7);
  fVar1 = *(float *)(param_1 + 0x10a4);
  if (NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0)) {
    switch(uVar2) {
    case 0:
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        goto switchD_0042c8ab_caseD_0;
      case 1:
      case 3:
        goto switchD_0042c8ab_caseD_1;
      }
      break;
    case 1:
    case 2:
    case 3:
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        FUN_00420b80(0x30012,0,0,0,0);
        return;
      case 1:
      case 3:
        FUN_00420b80(0x30013,0,0,0,0);
        return;
      }
      break;
    case 4:
    case 5:
      goto switchD_0042c895_caseD_2;
    default:
      goto switchD_0042c947_default;
    }
  }
  else {
    switch(uVar2) {
    case 0:
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
switchD_0042c8ab_caseD_0:
        FUN_0041be30(0x80001);
        return;
      case 1:
      case 3:
switchD_0042c8ab_caseD_1:
        FUN_0041be30(0x80002);
        return;
      }
      break;
    case 1:
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        FUN_0041be30(0x30012);
        return;
      case 1:
      case 3:
        FUN_0041be30(0x30013);
        return;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
switchD_0042c895_caseD_2:
      FUN_00420b80(0x3001e,0,0,0,0);
      return;
    default:
      if ((*(float *)(param_1 + 0x1414) < *(float *)(param_1 + 0x10a4) !=
           (*(float *)(param_1 + 0x1414) == *(float *)(param_1 + 0x10a4))) &&
         (*(int *)(param_1 + 0x1200) == 0)) {
        FUN_00420b80(0x30020,0,0,0,0);
        return;
      }
switchD_0042c947_default:
      FUN_00420b80(0x10000e,0,0,0,0);
    }
  }
  return;
}

// 0042CA40  FUN_0042ca40  size=392  [between]
void __fastcall FUN_0042ca40(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    if (((iVar1 != 0) && (iVar1 = FUN_00b7d050(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      uVar6 = 0;
      FUN_00a7c8a0(0);
      iVar1 = FUN_00a12210(uVar6);
      if (iVar1 != 0) {
        uStack_20 = *(undefined4 *)(iVar1 + 0x40);
        uStack_1c = *(undefined4 *)(iVar1 + 0x44);
        uStack_18 = *(undefined4 *)(iVar1 + 0x48);
        uStack_14 = *(undefined4 *)(iVar1 + 0x4c);
        fVar2 = (float10)FUN_00a8ec30(&uStack_20);
        fVar3 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
        fVar3 = fVar3 * (float10)57.29578;
        fVar2 = (float10)0;
        fVar4 = (float10)-90.0;
        if (((fVar3 < fVar2) && (fVar4 < fVar3 != (fVar4 == fVar3))) ||
           ((fVar3 < fVar4 && ((float10)-180.0 < fVar3 != ((float10)-180.0 == fVar3))))) {
          FUN_00420b80(0x100000,0,0,0,0);
          return;
        }
        if (((!NAN(fVar2) && !NAN(fVar3)) && fVar2 < fVar3 != (fVar2 == fVar3)) &&
           (fVar3 <= (float10)90.0)) {
          FUN_00420b80(0x100001,0,0,0,0);
          return;
        }
        if (((float10)90.0 < fVar3) && (fVar3 < (float10)180.0)) {
          FUN_00420b80(0x100001,0,0,0,0);
          return;
        }
      }
    }
  }
  FUN_00420b80(0x100008,0,0,0,0);
  return;
}

// 0042CBD0  FUN_0042cbd0  size=25  [between]
void __fastcall FUN_0042cbd0(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042CBF0  FUN_0042cbf0  size=159  [between]
void __fastcall FUN_0042cbf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xb5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042CC90  FUN_0042cc90  size=25  [between]
void __fastcall FUN_0042cc90(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042CCB0  FUN_0042ccb0  size=159  [between]
void __fastcall FUN_0042ccb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xb6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042CD50  FUN_0042cd50  size=25  [between]
void __fastcall FUN_0042cd50(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042CD70  FUN_0042cd70  size=159  [between]
void __fastcall FUN_0042cd70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xb7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042CE10  FUN_0042ce10  size=25  [between]
void __fastcall FUN_0042ce10(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042CE30  FUN_0042ce30  size=159  [between]
void __fastcall FUN_0042ce30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xb8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042CED0  FUN_0042ced0  size=25  [between]
void __fastcall FUN_0042ced0(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042CEF0  FUN_0042cef0  size=159  [between]
void __fastcall FUN_0042cef0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xba,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042CF90  FUN_0042cf90  size=25  [between]
void __fastcall FUN_0042cf90(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042CFB0  FUN_0042cfb0  size=159  [between]
void __fastcall FUN_0042cfb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xbb,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D050  FUN_0042d050  size=25  [between]
void __fastcall FUN_0042d050(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042D070  FUN_0042d070  size=159  [between]
void __fastcall FUN_0042d070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xbc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D110  FUN_0042d110  size=25  [between]
void __fastcall FUN_0042d110(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042D130  FUN_0042d130  size=159  [between]
void __fastcall FUN_0042d130(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xbd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D1D0  FUN_0042d1d0  size=25  [between]
void __fastcall FUN_0042d1d0(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042D1F0  FUN_0042d1f0  size=159  [between]
void __fastcall FUN_0042d1f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(199,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D290  FUN_0042d290  size=25  [between]
void __fastcall FUN_0042d290(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042D2B0  FUN_0042d2b0  size=159  [between]
void __fastcall FUN_0042d2b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(200,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D350  FUN_0042d350  size=25  [between]
void __fastcall FUN_0042d350(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042D370  FUN_0042d370  size=159  [between]
void __fastcall FUN_0042d370(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xc9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D410  FUN_0042d410  size=25  [between]
void __fastcall FUN_0042d410(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042D430  FUN_0042d430  size=159  [between]
void __fastcall FUN_0042d430(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xca,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D4D0  FUN_0042d4d0  size=25  [between]
void __fastcall FUN_0042d4d0(int param_1)

{
  if (*(int *)(param_1 + 0x940) == 0) {
    FUN_0042c800();
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  return;
}

// 0042D4F0  FUN_0042d4f0  size=159  [between]
void __fastcall FUN_0042d4f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xcb,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D590  FUN_0042d590  size=149  [between]
void FUN_0042d590(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xcd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0042D630  FUN_0042d630  size=782  [between]
void __fastcall FUN_0042d630(int *param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0xb2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
    goto LAB_0042d69f;
  case 1:
LAB_0042d69f:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (iVar4 = FUN_00a8c760(4), iVar4 != 0)) {
      param_1[0x187] = 2;
    }
    break;
  case 2:
    FUN_00aa4080(0xbf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 3;
    param_1[0x500] = 0;
    sVar2 = FUN_00dde2d0(5,10);
    param_1[0x248] = (int)((float)(int)sVar2 * 6.0);
    goto LAB_0042d758;
  case 3:
LAB_0042d758:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 4;
    }
    break;
  case 4:
    FUN_00aa4080(0xc0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 5;
    goto LAB_0042d7c7;
  case 5:
LAB_0042d7c7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (param_1[0x500] == 0) {
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x187] = 6;
      }
    }
    else {
      param_1[0x187] = 8;
    }
    break;
  case 6:
    FUN_00aa4080(0xc1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 7;
    goto LAB_0042d86a;
  case 7:
LAB_0042d86a:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
    break;
  case 8:
    FUN_00420b80(0x3001c,0,0,0,0);
    break;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00420b80(0x3001c,0,0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0042D970  FUN_0042d970  size=515  [between]
void __thiscall FUN_0042d970(int param_1,undefined4 param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (0xff < DAT_018b9174 - 0xa00U) {
    FUN_0041be30(param_2);
    return;
  }
  sVar2 = FUN_00dde2a0(0,10);
  fVar1 = *(float *)(DAT_01beb8c0 + 0x1e4) * 57.29578;
  if ((((sVar2 == 0) && (fVar1 <= -20.0)) && (-160.0 <= fVar1)) &&
     (((byte)DAT_01bea090 & 0x10) == 0)) {
    FUN_00420b80(0x30021,0,0,0,0);
    return;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar3 = FUN_00907640(param_1 + 0x11a0,0,&local_20);
  if (iVar3 != 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar3 = FUN_00907640(param_1 + 0x119c,0,&local_20);
    if (iVar3 != 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar3 = FUN_00907640(param_1 + 0x11a4,0,&local_20);
      if ((iVar3 != 0) && (iVar3 = FUN_004171a0(), iVar3 != 0)) {
        param_2 = 0x80005;
      }
    }
  }
  switch(param_2) {
  case 0x30010:
    iVar3 = FUN_004170e0();
    if (iVar3 == 0) goto switchD_0042daac_default;
    iVar3 = FUN_00417160();
    if (iVar3 == 0) {
      param_2 = 0x30012;
      goto switchD_0042daac_default;
    }
    break;
  case 0x30011:
    iVar3 = FUN_00417120();
    if (iVar3 == 0) goto switchD_0042daac_default;
    iVar3 = FUN_00417160();
    if (iVar3 == 0) {
LAB_0042db32:
      param_2 = 0x30012;
      goto switchD_0042daac_default;
    }
    break;
  case 0x30012:
    iVar3 = FUN_00417160();
    if (iVar3 == 0) goto switchD_0042daac_default;
    iVar3 = FUN_004171a0();
    if (iVar3 == 0) {
      param_2 = 0x30013;
      goto switchD_0042daac_default;
    }
    goto LAB_0042db39;
  case 0x30013:
    iVar3 = FUN_004171a0();
    if (iVar3 == 0) goto switchD_0042daac_default;
    iVar3 = FUN_00417160();
    if (iVar3 == 0) goto LAB_0042db32;
LAB_0042db39:
    iVar3 = FUN_00417120();
    if (iVar3 == 0) {
      param_2 = 0x30011;
    }
    else {
      iVar3 = FUN_004170e0();
      if (iVar3 == 0) {
        param_2 = 0x30010;
      }
    }
  default:
    goto switchD_0042daac_default;
  }
  iVar3 = FUN_004171a0();
  if (iVar3 == 0) {
    param_2 = 0x30013;
  }
switchD_0042daac_default:
  FUN_00420b80(param_2,0,0,0,0);
  return;
}

// 0042DB90  FUN_0042db90  size=136  [between]
void __fastcall FUN_0042db90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x108c) = *(int *)(param_1 + 0x108c) + 1;
  }
  if (*(int *)(param_1 + 0x12c8) == 0) {
    iVar1 = FUN_00a8c760(4);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x61c) != 0)) {
      iVar1 = FUN_00a8cac0();
      if ((0 < iVar1) && (*(int *)(param_1 + 0x108c) == 2)) {
        FUN_00420b80(0x20000,0,0,0,0);
      }
      if (*(int *)(param_1 + 0x1108) == 2) {
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 != 0) {
          FUN_00420b80(0x20000,0,0,0,0);
        }
      }
    }
  }
  return;
}

// 0042DC20  FUN_0042dc20  size=176  [between]
void __fastcall FUN_0042dc20(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    fVar1 = *(float *)(param_1 + 0x920);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
      return;
    }
    FUN_00aa4080(0xae,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (iVar2 == 1) {
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      FUN_00420b80(0x80000,0,0,0,0);
    }
    FUN_00ac80a0(0x3fc00000,0x3f800000);
    return;
  }
  return;
}

// 0042DCD0  FUN_0042dcd0  size=308  [between]
void __fastcall FUN_0042dcd0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    fVar1 = (float)param_1[0x249];
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      FUN_00aa4080(0xaf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a8ccb0(1);
    }
    else {
      param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
  }
  else if (iVar2 == 1) {
    FUN_00ac80a0(0x3fc00000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  if ((param_1[0x423] < 1) && (param_1[0x2a1] != 0)) {
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3eb2b8c2,0);
    }
  }
  return;
}

// 0042DE10  FUN_0042de10  size=299  [between]
void __fastcall FUN_0042de10(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    fVar1 = (float)param_1[0x249];
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      FUN_00aa4080(0xb0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a8ccb0(1);
    }
    else {
      param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
  }
  else if (iVar2 == 1) {
    FUN_00ac80a0(0x3fc00000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3eb2b8c2,0);
    }
  }
  return;
}

// 0042DF40  FUN_0042df40  size=151  [between]
void FUN_0042df40(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4120(0xb2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  return;
}

// 0042DFF0  FUN_0042dff0  size=440  [between]
void __fastcall FUN_0042dff0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float local_14;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    uVar1 = 0x52;
    goto LAB_0042e039;
  case 2:
    FUN_00aa4080(0x53,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    return;
  case 3:
    if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
    }
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x24] * 5.0);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x25] * 0.0);
    param_1[0x16] = (int)((float)param_1[0x26] * 0.0 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x27] * local_14 + (float)param_1[0x17]);
  case 1:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
      return;
    }
    break;
  case 4:
    uVar1 = 0x54;
LAB_0042e039:
    FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    return;
  case 5:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  return;
}

// 0042E1C0  FUN_0042e1c0  size=490  [between]
void __fastcall FUN_0042e1c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [4];
  undefined1 local_50 [76];
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    uVar1 = 0x56;
    break;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
    }
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    return;
  case 2:
    uVar1 = 0x57;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x50);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x8f4);
    local_60[0] = 0.2;
    local_60[1] = 0.0;
    local_60[2] = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(local_60,local_60,local_50);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fStack_6c;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fStack_68;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fStack_64;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + local_60[0];
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00a8ccb0(1);
    return;
  case 4:
    uVar1 = 0x58;
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  default:
    return;
  }
  FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0x8000000,1);
  FUN_00a8ccb0(1);
  return;
}

// 0042E3D0  FUN_0042e3d0  size=544  [between]
void __fastcall FUN_0042e3d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    switch(*(undefined4 *)(param_1 + 0x1104)) {
    case 0:
    case 2:
      *(undefined2 *)(param_1 + 0x10a0) = 0;
      break;
    case 1:
    case 3:
      *(undefined2 *)(param_1 + 0x10a0) = 1;
    }
    local_20 = 0;
    local_1c = 0;
    iVar1 = param_1 + 0x11a4;
    local_18 = 0;
    iVar2 = FUN_00907640(iVar1,0,&local_20);
    if (iVar2 != 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar2 = FUN_00907640(param_1 + 0x11a8,0,&local_20);
      if ((iVar2 != 0) && (*(short *)(param_1 + 0x10a0) == 0)) {
        *(undefined2 *)(param_1 + 0x10a0) = 1;
        return;
      }
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar2 = FUN_00907640(iVar1,0,&local_20);
    if (iVar2 == 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar2 = FUN_00907640(param_1 + 0x11a8,0,&local_20);
      if ((iVar2 != 0) && (*(short *)(param_1 + 0x10a0) == 1)) {
        *(undefined2 *)(param_1 + 0x10a0) = 0;
        return;
      }
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar2 = FUN_00907640(iVar1,0,&local_20);
    if (iVar2 != 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar2 = FUN_00907640(param_1 + 0x11a8,0,&local_20);
      if (iVar2 != 0) {
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        iVar2 = FUN_00907640(param_1 + 0x11a0,0,&local_20);
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 0x10a0) = 2;
          *(undefined4 *)(param_1 + 0x61c) = 6;
          return;
        }
      }
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_00907640(iVar1,0,&local_20);
    if (iVar1 != 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar1 = FUN_00907640(param_1 + 0x11a8,0,&local_20);
      if ((iVar1 != 0) && (iVar1 = FUN_00417120(), iVar1 != 0)) {
        FUN_00420b80(0x20000,0,0,0,0);
      }
    }
  }
  return;
}

// 0042E600  FUN_0042e600  size=846  [between]
void __fastcall FUN_0042e600(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [4];
  undefined1 local_50 [76];
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    if (*(short *)(param_1 + 0x10a0) == 0) {
      uVar1 = 0x52;
    }
    else {
      uVar1 = 0x56;
    }
    break;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
    }
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    return;
  case 2:
    if (*(short *)(param_1 + 0x10a0) == 0) {
      uVar1 = 0x53;
    }
    else {
      uVar1 = 0x57;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (DAT_018b9174 - 0xa00U < 0x100) {
      FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x50);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x8f4);
    }
    local_60[0] = -0.2;
    if (*(short *)(param_1 + 0x10a0) == 1) {
      local_60[0] = 0.2;
      local_60[3] = local_60[3] * -1.0;
    }
    local_60[2] = 0.0;
    local_60[1] = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(local_60,local_60,local_50);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fStack_6c;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fStack_68;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fStack_64;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + local_60[0];
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00a8ccb0(1);
    return;
  case 4:
    if (*(short *)(param_1 + 0x10a0) == 0) {
      uVar1 = 0x54;
    }
    else {
      uVar1 = 0x58;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(4);
    if (iVar2 == 0) {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 == 0) {
        return;
      }
      FUN_00a8ccb0(1);
      return;
    }
    goto LAB_0042e670;
  case 6:
    if (0xff < DAT_018b9174 - 0xa00U) {
      FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x50);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x8f4);
    }
    FUN_00aa4080(0xb2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 7:
    FUN_00ac80a0(0x3fc00000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if ((*(int *)(param_1 + 0x13a4) == 0) && (*(int *)(param_1 + 0xdc0) != 1)) {
        FUN_00420b80(0x20000,0,0,0,0);
        return;
      }
      FUN_00420b80(0x1000a,0,0,0,0);
    }
  default:
    return;
  }
  FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0x8000000,1);
LAB_0042e670:
  FUN_00a8ccb0(1);
  return;
}

// 0042E970  FUN_0042e970  size=96  [between]
void __fastcall FUN_0042e970(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00dde2a0(0,1);
      if (1.0 < *(float *)(param_1 + 0x122c)) {
        *(undefined4 *)(param_1 + 0x1220) = 1;
        FUN_00420b80(0x10001,0,0,0,0);
        return;
      }
      FUN_00420b80(0x10000,0,0,0,0);
    }
  }
  return;
}

// 0042E9D0  FUN_0042e9d0  size=250  [between]
void __fastcall FUN_0042e9d0(int param_1)

{
  int iVar1;
  short sVar2;
  
  sVar2 = FUN_00dde2a0(0,1);
  iVar1 = *(int *)(param_1 + 0x1108);
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 0x1230) < 3) {
      if (sVar2 == 0) {
        FUN_00420b80(0x30027,0,0,0,0);
        return;
      }
    }
    else {
      sVar2 = FUN_00dde2a0(0,3);
      if (sVar2 == 2) {
        FUN_00420b80(0x80006,0,0,0,0);
        return;
      }
      if (sVar2 == 3) {
        FUN_00420b80(0x1000a,0,0,0,0);
        return;
      }
    }
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_00420b80(0x30029,0,0,0,0);
      return;
    }
    if (sVar2 == 1) {
      FUN_00420b80(0x10008,0,0,0,0);
      return;
    }
  }
  FUN_00420b80(0x30028,0,0,0,0);
  return;
}

// 0042EAD0  FUN_0042ead0  size=72  [between]
undefined4 FUN_0042ead0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac8120();
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    switch(uVar2) {
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      FUN_00420b80(0x30029,0,0,0,0);
      return 1;
    }
  }
  return 0;
}

// 0042EB30  FUN_0042eb30  size=133  [between]
void FUN_0042eb30(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x126,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  return;
}

// 0042EBC0  FUN_0042ebc0  size=82  [between]
void __fastcall FUN_0042ebc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(param_1 + 0xaa0) < 0.87266463) && (iVar1 = FUN_00ac8120(), iVar1 != 0)) {
    uVar2 = FUN_00a8cab0();
    switch(uVar2) {
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      FUN_00420b80(0x30029,0,0,0,0);
    }
  }
  return;
}

// 0042EC30  FUN_0042ec30  size=131  [between]
void FUN_0042ec30(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x127,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 != 0) {
      FUN_00420b80(0x10008,0,0,0,0);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 0042ECC0  FUN_0042ecc0  size=290  [between]
void __fastcall FUN_0042ecc0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((float)param_1[0x2a8] < 0.87266463) && (iVar3 = FUN_00ac8120(), iVar3 != 0)) {
    uVar4 = FUN_00a8cab0();
    switch(uVar4) {
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      FUN_00420b80(0x30029,0,0,0,0);
      return;
    }
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 3) {
    if (param_1[0x442] == 0) {
      FUN_0042e9d0();
    }
    uVar1 = FUN_00dde2a0(0,3);
    if (uVar1 < 2) {
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_0042e9d0();
      }
    }
    else if (param_1[0x442] == 2) {
      sVar2 = FUN_00dde2a0(0,1);
      if (sVar2 == 0) {
        uVar4 = 0x20008;
      }
      else {
        if (sVar2 != 1) goto LAB_0042ed99;
        uVar4 = 0x20009;
      }
      FUN_00420b80(uVar4,0,0,0,0);
    }
  }
LAB_0042ed99:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 0042EE00  FUN_0042ee00  size=350  [between]
void __fastcall FUN_0042ee00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x129,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    goto LAB_0042ee6c;
  case 1:
LAB_0042ee6c:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00aa4080(0x12a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(299,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
    break;
  case 5:
    break;
  default:
    goto switchD_0042ee13_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
    return;
  }
switchD_0042ee13_default:
  return;
}

// 0042EF80  FUN_0042ef80  size=167  [between]
void __fastcall FUN_0042ef80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((float)param_1[0x2a8] < 0.87266463) && (iVar1 = FUN_00ac8120(), iVar1 != 0)) {
    uVar2 = FUN_00a8cab0();
    switch(uVar2) {
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      FUN_00420b80(0x30029,0,0,0,0);
      return;
    }
  }
  iVar1 = FUN_00a8cac0();
  if ((iVar1 == 3) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 0042F040  FUN_0042f040  size=350  [between]
void __fastcall FUN_0042f040(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x12d,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    goto LAB_0042f0ac;
  case 1:
LAB_0042f0ac:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00aa4080(0x12e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(0x12f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
    break;
  case 5:
    break;
  default:
    goto switchD_0042f053_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
    return;
  }
switchD_0042f053_default:
  return;
}

// 0042F1C0  FUN_0042f1c0  size=232  [between]
void __fastcall FUN_0042f1c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((float)param_1[0x2a8] < 0.87266463) && (iVar1 = FUN_00ac8120(), iVar1 != 0)) {
    uVar2 = FUN_00a8cab0();
    switch(uVar2) {
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      FUN_00420b80(0x30029,0,0,0,0);
      return;
    }
  }
  if ((((float)param_1[0x2a7] * 57.29578 < 90.0) && (-90.0 < (float)param_1[0x2a7] * 57.29578)) &&
     (iVar1 = FUN_00a94ce0(0), iVar1 != 0)) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 0042F2C0  FUN_0042f2c0  size=350  [between]
void __fastcall FUN_0042f2c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x131,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    goto LAB_0042f32c;
  case 1:
LAB_0042f32c:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00aa4080(0x132,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(0x133,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
    break;
  case 5:
    break;
  default:
    goto switchD_0042f2d3_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
    return;
  }
switchD_0042f2d3_default:
  return;
}

// 0042F440  FUN_0042f440  size=232  [between]
void __fastcall FUN_0042f440(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((float)param_1[0x2a8] < 0.87266463) && (iVar1 = FUN_00ac8120(), iVar1 != 0)) {
    uVar2 = FUN_00a8cab0();
    switch(uVar2) {
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      FUN_00420b80(0x30029,0,0,0,0);
      return;
    }
  }
  if ((((float)param_1[0x2a7] * 57.29578 < 90.0) && (-90.0 < (float)param_1[0x2a7] * 57.29578)) &&
     (iVar1 = FUN_00a94ce0(0), iVar1 != 0)) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 0042F540  FUN_0042f540  size=350  [between]
void __fastcall FUN_0042f540(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x135,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    goto LAB_0042f5ac;
  case 1:
LAB_0042f5ac:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00aa4080(0x136,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(0x137,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
    break;
  case 5:
    break;
  default:
    goto switchD_0042f553_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
    return;
  }
switchD_0042f553_default:
  return;
}

// 0042F6C0  FUN_0042f6c0  size=362  [between]
void __thiscall FUN_0042f6c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((1 < *(int *)(param_1 + 0x108c)) &&
     ((*(int *)(param_1 + 0x1084) == 0x80009 || (*(int *)(param_1 + 0x1084) == 0x8000a)))) {
    FUN_00420b80(0x80008,0,0,0,0);
  }
  switch(param_2) {
  case 0x80000:
  case 0x80003:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_00907640(param_1 + 0x11a0,0,&local_20);
    if (iVar1 == 0) goto switchD_0042f70e_default;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_00907640(param_1 + 0x11a4,0,&local_20);
    if (iVar1 != 0) {
      iVar1 = FUN_004171a0();
      if (iVar1 == 0) {
        param_2 = 0x80002;
      }
      goto switchD_0042f70e_default;
    }
    break;
  case 0x80001:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_00907640(param_1 + 0x11a4,0,&local_20);
    if (iVar1 == 0) goto switchD_0042f70e_default;
    iVar1 = FUN_004171a0();
    if (iVar1 == 0) {
      param_2 = 0x8000a;
      goto switchD_0042f70e_default;
    }
LAB_0042f802:
    iVar1 = FUN_00417120();
    if (iVar1 == 0) {
      param_2 = 0x80008;
    }
    goto switchD_0042f70e_default;
  case 0x80002:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_00907640(param_1 + 0x11a8,0,&local_20);
    if (iVar1 == 0) goto switchD_0042f70e_default;
    iVar1 = FUN_00417160();
    if (iVar1 != 0) goto LAB_0042f802;
    break;
  default:
    goto switchD_0042f70e_default;
  }
  param_2 = 0x80009;
switchD_0042f70e_default:
  FUN_00420b80(param_2,0,0,0,0);
  return;
}

// 0042F840  FUN_0042f840  size=303  [between]
void __fastcall FUN_0042f840(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar3 = FUN_00a8c760(4);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x61c) != 0)) {
    if (((*(int *)(param_1 + 0x1108) == 0) || (*(int *)(param_1 + 0x1108) == 1)) &&
       (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar4);
      if ((iVar3 != 0) && (piVar1[0x2de] != 0)) {
        sVar2 = FUN_00dde2a0(0,1);
        if (sVar2 == 0) {
          if ((1 < *(int *)(param_1 + 0x108c)) &&
             ((*(int *)(param_1 + 0x1084) == 0x80009 || (*(int *)(param_1 + 0x1084) == 0x8000a)))) {
            FUN_00420b80(0x80008,0,0,0,0);
          }
          FUN_00420b80(0x80009,0,0,0,0);
          return;
        }
        if (sVar2 == 1) {
          if ((1 < *(int *)(param_1 + 0x108c)) &&
             ((*(int *)(param_1 + 0x1084) == 0x80009 || (*(int *)(param_1 + 0x1084) == 0x8000a)))) {
            FUN_00420b80(0x80008,0,0,0,0);
          }
          FUN_00420b80(0x8000a,0,0,0,0);
          return;
        }
      }
    }
    FUN_00420b80(0x10008,0,0,0,0);
  }
  return;
}

// 0042F970  FUN_0042f970  size=249  [between]
void __fastcall FUN_0042f970(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x139,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_0042fa20;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  iVar2 = FUN_00a959f0(0);
  iVar1 = 0x3f800000;
  if (iVar2 < 0x28) {
    iVar1 = param_1[0x4e8];
  }
  FUN_00ac80a0(iVar1,0x3f800000);
LAB_0042fa20:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 0042FA70  FUN_0042fa70  size=186  [between]
void __fastcall FUN_0042fa70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_00a8c760(4);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x61c) != 0)) {
    if (((*(int *)(param_1 + 0x1108) == 0) || (*(int *)(param_1 + 0x1108) == 1)) &&
       (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar3);
      if ((iVar2 != 0) && (piVar1[0x2de] != 0)) {
        if ((1 < *(int *)(param_1 + 0x108c)) &&
           ((*(int *)(param_1 + 0x1084) == 0x80009 || (*(int *)(param_1 + 0x1084) == 0x8000a)))) {
          FUN_00420b80(0x80008,0,0,0,0);
        }
        FUN_00420b80(0x80008,0,0,0,0);
        return;
      }
    }
    FUN_00420b80(0x10008,0,0,0,0);
  }
  return;
}

// 0042FB30  FUN_0042fb30  size=229  [between]
void __fastcall FUN_0042fb30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x13a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_0042fbcc;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  FUN_00ac80a0(param_1[0x4e8],0x3f800000);
LAB_0042fbcc:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 0042FC20  FUN_0042fc20  size=186  [between]
void __fastcall FUN_0042fc20(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_00a8c760(4);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x61c) != 0)) {
    if (((*(int *)(param_1 + 0x1108) == 0) || (*(int *)(param_1 + 0x1108) == 1)) &&
       (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar3);
      if ((iVar2 != 0) && (piVar1[0x2de] != 0)) {
        if ((1 < *(int *)(param_1 + 0x108c)) &&
           ((*(int *)(param_1 + 0x1084) == 0x80009 || (*(int *)(param_1 + 0x1084) == 0x8000a)))) {
          FUN_00420b80(0x80008,0,0,0,0);
        }
        FUN_00420b80(0x80008,0,0,0,0);
        return;
      }
    }
    FUN_00420b80(0x10008,0,0,0,0);
  }
  return;
}

// 0042FCE0  FUN_0042fce0  size=229  [between]
void __fastcall FUN_0042fce0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x13b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) goto LAB_0042fd7c;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  FUN_00ac80a0(param_1[0x4e8],0x3f800000);
LAB_0042fd7c:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 0042FDD0  FUN_0042fdd0  size=600  [between]
void __fastcall FUN_0042fdd0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x13d,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
    D3DXMatrixRotationY(local_50,param_1[0x25]);
    D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
    param_1[0x478] = (int)local_60;
    param_1[0x479] = (int)local_5c;
    param_1[0x47a] = (int)local_58;
    param_1[0x47b] = (int)fStack_54;
    param_1[0x248] = (int)((float)param_1[0x244] * 0.1);
LAB_0042feb6:
    iVar2 = FUN_00a8c760(0x3a);
    if ((iVar2 == 0) || (fVar1 = (float)param_1[0x2a3], NAN(fVar1) || 1.0 < fVar1 == (fVar1 == 1.0))
       ) {
      if ((float)param_1[0x2a3] < 1.0) {
        FUN_00a8ccb0(1);
      }
    }
    else {
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 1.0;
      D3DXMatrixRotationY(local_50,param_1[0x25]);
      D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
      fVar1 = (float)param_1[0x244] * (float)param_1[0x248];
      param_1[0x248] = (int)((float)param_1[0x248] * 0.95);
      param_1[0x14] = (int)((float)param_1[0x14] + local_60 * fVar1);
      param_1[0x15] = (int)((float)param_1[0x15] + local_5c * fVar1);
      param_1[0x16] = (int)((float)param_1[0x16] + local_58 * fVar1);
      param_1[0x17] = (int)((float)param_1[0x17] + fStack_54 * fVar1);
      param_1[0x478] = (int)(local_60 * fVar1);
      param_1[0x479] = (int)(local_5c * fVar1);
      param_1[0x47a] = (int)(local_58 * fVar1);
      param_1[0x47b] = (int)(fStack_54 * fVar1);
    }
  }
  else {
    if (iVar2 == 1) goto LAB_0042feb6;
    if (iVar2 != 2) goto LAB_0042ffca;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0042ffca:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 00430030  FUN_00430030  size=600  [between]
void __fastcall FUN_00430030(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x13e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
    D3DXMatrixRotationY(local_50,param_1[0x25]);
    D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
    param_1[0x478] = (int)local_60;
    param_1[0x479] = (int)local_5c;
    param_1[0x47a] = (int)local_58;
    param_1[0x47b] = (int)fStack_54;
    param_1[0x248] = (int)((float)param_1[0x244] * 0.1);
LAB_00430116:
    iVar2 = FUN_00a8c760(0x3a);
    if ((iVar2 == 0) || (fVar1 = (float)param_1[0x2a3], NAN(fVar1) || 1.0 < fVar1 == (fVar1 == 1.0))
       ) {
      if ((float)param_1[0x2a3] < 1.0) {
        FUN_00a8ccb0(1);
      }
    }
    else {
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 1.0;
      D3DXMatrixRotationY(local_50,param_1[0x25]);
      D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
      fVar1 = (float)param_1[0x244] * (float)param_1[0x248];
      param_1[0x248] = (int)((float)param_1[0x248] * 0.95);
      param_1[0x14] = (int)((float)param_1[0x14] + local_60 * fVar1);
      param_1[0x15] = (int)((float)param_1[0x15] + local_5c * fVar1);
      param_1[0x16] = (int)((float)param_1[0x16] + local_58 * fVar1);
      param_1[0x17] = (int)((float)param_1[0x17] + fStack_54 * fVar1);
      param_1[0x478] = (int)(local_60 * fVar1);
      param_1[0x479] = (int)(local_5c * fVar1);
      param_1[0x47a] = (int)(local_58 * fVar1);
      param_1[0x47b] = (int)(fStack_54 * fVar1);
    }
  }
  else {
    if (iVar2 == 1) goto LAB_00430116;
    if (iVar2 != 2) goto LAB_0043022a;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0043022a:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 00430290  FUN_00430290  size=585  [between]
void __fastcall FUN_00430290(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_00aa4080(0x144,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = 2;
    }
    break;
  case 2:
    FUN_00aa4080(0x145,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    iVar5 = param_1[0x2a1];
    param_1[0x187] = 3;
    fVar1 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
    fVar3 = (float)param_1[0x11] - *(float *)(iVar5 + 0x44);
    fVar2 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
    fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    if (NAN(fVar1) || 9.0 < fVar1 == (fVar1 == 9.0)) {
      param_1[0x474] = 0x3f800000;
    }
    else {
      param_1[0x474] = (int)(fVar1 * 0.11111111 * (float)param_1[0x244]);
    }
  case 3:
    FUN_00ac80a0((float)param_1[0x474] * 1.2,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = 4;
    }
    break;
  case 4:
    FUN_00aa4080(0x149,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00420b80(0x10008,0,0,0,0);
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00430500  FUN_00430500  size=338  [between]
void __fastcall FUN_00430500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8c760(0x38);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0xa84) != 0)) && (iVar1 = FUN_00a8cab0(), iVar1 == 0xf7))
  {
    uVar2 = FUN_00ac8520(0x35);
    (**(code **)(**(int **)(param_1 + 0xa84) + 0x30c))(uVar2,0);
  }
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x146,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8ccb0(1);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x147,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x10008,0,0,0,0);
      return;
    }
  }
  return;
}

// 00430670  FUN_00430670  size=54  [between]
void __fastcall FUN_00430670(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(4);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x61c) != 0)) && (*(int *)(param_1 + 0x1108) == 0)) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  return;
}

// 004306B0  FUN_004306b0  size=271  [between]
void FUN_004306b0(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
    goto LAB_00430789;
  }
  sVar1 = FUN_00dde2a0(0,2);
  if (sVar1 == 0) {
    uVar3 = 0x14b;
LAB_00430769:
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
  }
  else {
    if (sVar1 == 1) {
      uVar3 = 0x14c;
      goto LAB_00430769;
    }
    if (sVar1 == 2) {
      uVar3 = 0x14d;
      goto LAB_00430769;
    }
  }
  FUN_00a96070(0,0x8000000,1);
  FUN_00a8ccb0(1);
LAB_00430789:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  return;
}

// 004307C0  FUN_004307c0  size=346  [between]
void __fastcall FUN_004307c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x151,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x152,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 3;
    break;
  case 4:
    FUN_00aa4080(0x153,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x40012,0,0,0,0);
      return;
    }
  default:
    goto switchD_004307d3_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_004307d3_default:
  return;
}

// 00430940  FUN_00430940  size=454  [between]
void __fastcall FUN_00430940(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x155,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x225] = 0x3e800000;
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x289] = 0x41700000;
    param_1[0x288] = 1;
    (*pcVar1)(1);
    param_1[0x187] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x156,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x157,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x1d4))(0);
    param_1[0x187] = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00420b80(0x40012,0,0,0,0);
      return;
    }
  }
  return;
}

// 00430B20  FUN_00430b20  size=196  [between]
void __fastcall FUN_00430b20(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  (**(code **)(*param_1 + 0x318))();
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x159,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00420b80(0x4000f,0,0,0,0);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x314);
  param_1[0x187] = 2;
                    /* WARNING: Could not recover jumptable at 0x00430be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00430BF0  FUN_00430bf0  size=271  [between]
void __fastcall FUN_00430bf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x15b,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x15c,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00420b80(0x40012,0,0,0,0);
      return;
    }
  }
  return;
}

// 00430D10  FUN_00430d10  size=149  [between]
void FUN_00430d10(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x15e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00420b80(0x10008,0,0,0,0);
  }
  return;
}

// 00430DB0  FUN_00430db0  size=408  [between]
void __fastcall FUN_00430db0(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x122c) = 0;
    FUN_00aa4080(0x140,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x141,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(4), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x142,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00420b80(0x10008,0,0,0,0);
      return;
    }
  }
  return;
}

// 00430F60  FUN_00430f60  size=848  [between]
undefined4 __fastcall FUN_00430f60(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1060) = 1;
  iVar1 = FUN_00a82090("Em0020_HAIR",0x20021,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xf80) = iVar1;
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,0);
  }
  iVar1 = FUN_00a82090("Em0020_SCABBARD",0x20024,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xf84) = iVar1;
    FUN_00a8c5f0(0x11,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x7f0,0);
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar8 = 0x3f800000;
      uVar7 = 0xbf800000;
      uVar6 = 0;
      uVar5 = 0x3f800000;
      uVar4 = 0x3e4ccccd;
      uVar3 = 0;
      pcVar2 = "em0024_0000";
      FUN_00a7c8a0("em0024_0000",0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a9e290(pcVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    }
    iVar1 = FUN_00a82090("Em0020_BLADE",0x30100,0);
    if (iVar1 != 0) {
      FUN_00a8c5f0(0x12,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0);
      *(int *)(param_1 + 0xf88) = iVar1;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      FUN_004039a0(0,param_1,0);
      FUN_00dffb20(param_1 + 0xfb0);
      FUN_00e030a0(param_1,0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    }
  }
  *(undefined4 *)(param_1 + 0xf7c) = 0;
  iVar1 = FUN_00a82090("Em0020_FACE",0x20026,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xf7c) = iVar1;
    FUN_00a8c5f0(0x14,*(undefined4 *)(param_1 + 0x4f0),iVar1,0,0);
    FUN_00a8c5f0(0x15,*(undefined4 *)(param_1 + 0x4f0),iVar1,1,1);
    FUN_00a8c5f0(0x16,*(undefined4 *)(param_1 + 0x4f0),iVar1,2,2);
    FUN_00a8c5f0(0x17,*(undefined4 *)(param_1 + 0x4f0),iVar1,3,3);
    FUN_00a8c5f0(0x18,*(undefined4 *)(param_1 + 0x4f0),iVar1,4,4);
    FUN_00a8c5f0(0x19,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
    FUN_00a8c5f0(0x1a,*(undefined4 *)(param_1 + 0x4f0),iVar1,6,6);
    FUN_00a8c5f0(0x1b,*(undefined4 *)(param_1 + 0x4f0),iVar1,10,10);
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      *(int *)(iVar1 + 0x518) = param_1;
    }
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    iVar1 = FUN_00a82090("Em0020_MASK",0x20022,0);
    if (iVar1 == 0) goto LAB_0043122d;
    uVar3 = *(undefined4 *)(param_1 + 0x4f0);
  }
  else {
    iVar1 = FUN_00a82090("Em0020_MASK",0x20023,0);
    if (iVar1 == 0) goto LAB_0043122d;
    uVar3 = *(undefined4 *)(param_1 + 0x4f0);
  }
  FUN_00a8c5f0(0x13,uVar3,iVar1,5,5);
  iVar1 = FUN_00a7c800();
  if (iVar1 != 0) {
    uVar3 = 5;
    FUN_00a7c800(5);
    cModelBase::setRootPartsNo(uVar3);
  }
LAB_0043122d:
  *(undefined4 *)(param_1 + 0xf9c) = 0;
  *(undefined4 *)(param_1 + 0x13f0) = 0;
  *(undefined4 *)(param_1 + 0x13f4) = 0;
  *(undefined4 *)(param_1 + 0x13f8) = 0;
  *(undefined4 *)(param_1 + 0x13fc) = local_164;
  *(undefined4 *)(param_1 + 0x13e0) = 0;
  *(undefined4 *)(param_1 + 0x1404) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  *(undefined4 *)(param_1 + 0x1408) = 0x40200000;
  *(undefined4 *)(param_1 + 0x140c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x14a0) = 0;
  *(undefined4 *)(param_1 + 0x14a4) = 0;
  *(undefined4 *)(param_1 + 0x14a8) = 0;
  *(undefined4 *)(param_1 + 0x14ac) = local_164;
  *(undefined2 *)(param_1 + 0x14b0) = 0;
  return 1;
}

// 004312B0  FUN_004312b0  size=851  [between]
void __fastcall FUN_004312b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined1 auStack_160 [348];
  
  uVar1 = *(uint *)(param_1 + 0x4c0) & 1;
  if ((uVar1 == 0) && (*(int *)(param_1 + 0x1060) != 0)) {
    if (*(int *)(param_1 + 0xf88) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0xf7c) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0xf80) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0x1060) = 0;
    return;
  }
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x1060) == 0)) {
    if (*(int *)(param_1 + 0xf88) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0xf7c) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0xf84) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    if (*(int *)(param_1 + 0xf80) != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
    }
    *(undefined4 *)(param_1 + 0x1060) = 1;
  }
  if (*(int *)(param_1 + 0x1370) == 0) {
    iVar2 = FUN_00a8c760(0x34);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0xf90) == 0) {
        FUN_00a9e060(0x12);
        if (*(int *)(param_1 + 0xf88) != 0) {
          FUN_00a8c5f0(0x12,*(undefined4 *)(param_1 + 0x4f0),*(int *)(param_1 + 0xf88),0x700,0);
          *(undefined4 *)(param_1 + 0xf90) = 1;
        }
      }
    }
    else if (((*(int *)(param_1 + 0xf90) == 0) && (*(int *)(param_1 + 0xf88) != 0)) &&
            (*(int *)(param_1 + 0xf84) != 0)) {
      FUN_00a9e060(0x12);
      FUN_00a8c5f0(0x12,*(undefined4 *)(param_1 + 0xf84),*(undefined4 *)(param_1 + 0xf88),0,0);
      *(undefined4 *)(param_1 + 0xf90) = 0;
    }
  }
  if (*(int *)(param_1 + 0xf80) != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 0x4c))();
    }
  }
  if ((DAT_01bea060 & 0x2000000) == 0) {
    if (*(int *)(param_1 + 0x13ac) == 0) {
      iVar2 = FUN_00a8c760(0x36);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0xf88) != 0) {
          iVar2 = FUN_00a7c8a0();
          if (iVar2 != 0) {
            FUN_004039a0(6,param_1,0);
            uVar4 = FUN_00a7c8a0();
            FUN_00e021c0(uVar4);
            puVar6 = auStack_160;
            uVar4 = FUN_00e00b40(0x20020,puVar6);
            FUN_00a8c930(uVar4,puVar6);
            *(undefined4 *)(param_1 + 0x13ac) = 1;
          }
        }
        goto LAB_004315c9;
      }
    }
    iVar2 = FUN_00a8c760(0x36);
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x13ac) != 0)) {
      FUN_00a8c9b0(0,6,0x40000000,0x3f800000);
      *(undefined4 *)(param_1 + 0x13ac) = 0;
    }
  }
LAB_004315c9:
  if (*(int *)(param_1 + 0xf84) != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      fVar5 = (float10)FUN_00a958c0(0);
      FUN_00a95e60(0,(float)fVar5);
      (**(code **)(*piVar3 + 100))();
    }
  }
  return;
}

// 00431610  FUN_00431610  size=142  [between]
void __thiscall FUN_00431610(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x1384) != 0) {
        return;
      }
      FUN_00420b80(0x200003,0,0,0,0);
      (**(code **)(**(int **)(param_1 + 0xa84) + 0x150))(0x20,*(undefined4 *)(param_1 + 0x4f0));
      *(undefined2 *)(param_1 + 0x14b0) = 0;
      iVar1 = *(int *)(param_1 + 0x870) - *(int *)(param_1 + 0x12c0);
      *(undefined4 *)(param_1 + 0x1384) = 1;
      if ((iVar1 < *(int *)(param_1 + 0x12b8)) ||
         (iVar1 = *(int *)(param_1 + 0x870) - *(int *)(param_1 + 0x12bc),
         *(int *)(param_1 + 0x12b8) < iVar1)) {
        *(int *)(param_1 + 0x12b8) = iVar1;
      }
    }
    *(int *)(param_1 + 0x1370) = param_2;
  }
  return;
}

// 004316A0  FUN_004316a0  size=63  [between]
void __fastcall FUN_004316a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00431700  FUN_00431700  size=335  [between]
void __fastcall FUN_00431700(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 uStack_1c;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x1070) = 0;
  *(undefined4 *)(param_1 + 0x1074) = 0x41180000;
  *(undefined4 *)(param_1 + 0x1078) = 0;
  *(undefined4 *)(param_1 + 0x107c) = local_14;
  *(undefined4 *)(param_1 + 0x1080) = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x41);
  *(undefined4 *)(param_1 + 0x12cc) = uVar1;
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x42);
  *(float *)(param_1 + 0x10e0) = (float)fVar2;
  *(float *)(param_1 + 0x10dc) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x10d8) = *(undefined4 *)(param_1 + 0x12cc);
  *(undefined4 *)(param_1 + 0x10e4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10e8) = 0;
  *(undefined4 *)(param_1 + 0x10ec) = 0;
  *(undefined4 *)(param_1 + 0x137c) = 0;
  *(undefined4 *)(param_1 + 0x1374) = 0;
  *(undefined4 *)(param_1 + 0x1384) = 0;
  *(undefined4 *)(param_1 + 0x1380) = 0x3f800000;
  *(undefined4 *)(param_1 + 5000) = 0;
  *(undefined4 *)(param_1 + 0x138c) = 0;
  *(undefined4 *)(param_1 + 0xdc4) = 0x44960000;
  *(undefined4 *)(param_1 + 0x1390) = 0;
  *(undefined4 *)(param_1 + 0x1394) = 0;
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  *(undefined4 *)(param_1 + 0x11e0) = 0;
  *(undefined4 *)(param_1 + 0x11e4) = 0;
  *(undefined4 *)(param_1 + 0x11e8) = 0;
  *(undefined4 *)(param_1 + 0x11ec) = uStack_1c;
  *(undefined4 *)(param_1 + 0x13a8) = 0;
  *(undefined4 *)(param_1 + 0x13a0) = 0x40000000;
  *(undefined4 *)(param_1 + 0x13a4) = 0;
  FUN_00420b80(0x10006,0,0,0,0);
  *(undefined4 *)(param_1 + 0xf98) = 0;
  *(undefined4 *)(param_1 + 0x1398) = 0;
  *(undefined4 *)(param_1 + 0x139c) = 0;
  if (DAT_018b9174 == 0x610) {
    FUN_009c4b00(3);
  }
  *(undefined4 *)(param_1 + 0x14b8) = 0;
  return;
}

// 00431850  FUN_00431850  size=179  [between]
undefined4 __thiscall FUN_00431850(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0x70000) && (param_2 != 0x200000)) {
    if ((*(int *)(param_1 + 0x618) == 0x40008) && (iVar1 = FUN_00a8c760(4), iVar1 != 0)) {
      return 0;
    }
    uVar2 = FUN_00a8cab0();
    iVar1 = FUN_0041d920(uVar2);
    if ((((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x10), iVar1 == 0)) &&
        (iVar1 = FUN_00a8ef10(), iVar1 == 0)) && (iVar1 = FUN_00a8c760(9), iVar1 == 0)) {
      if (((param_2 != 0x20000) && (param_2 != 0x10000)) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
        return 0;
      }
      if ((param_2 != 0x80000) || (*(int *)(param_1 + 0x12c8) == 0)) {
        return 1;
      }
      FUN_00426a00();
    }
  }
  return 0;
}

// 00431910  FUN_00431910  size=293  [between]
void __fastcall FUN_00431910(int param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_0041d7e0();
  if (iVar2 == 0) {
    return;
  }
  sVar1 = FUN_00dde2d0(0,2);
  if (*(int *)(param_1 + 0x10cc) <= (int)sVar1) {
    return;
  }
  if (((byte)DAT_01bea090 & 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0xa84);
    fVar3 = (float10)fpatan((float10)*(float *)(param_1 + 0x40) - (float10)*(float *)(iVar2 + 0x40),
                            (float10)*(float *)(param_1 + 0x48) - (float10)*(float *)(iVar2 + 0x48))
    ;
    fVar3 = (float10)FUN_00ddba30((float)((float10)*(float *)(iVar2 + 0x94) - fVar3));
    if (((float10)60.0 < fVar3 * (float10)57.29578) || (fVar3 * (float10)57.29578 < (float10)-60.0))
    {
      FUN_00420b80(0x10000,0,0,0,0);
      return;
    }
  }
  if (*(int *)(param_1 + 0x1084) == 0x40000) {
    uVar4 = 0x80000;
  }
  else if (*(int *)(param_1 + 0x1084) == 0x4000d) {
    uVar4 = 0x80008;
  }
  else {
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x80006) goto switchD_004319e5_default;
    switch(*(undefined4 *)(param_1 + 0x1104)) {
    case 0:
    case 2:
      iVar2 = FUN_00a8cab0();
      if (iVar2 == 0x80001) goto switchD_004319e5_default;
      uVar4 = 0x80001;
      break;
    case 1:
    case 3:
      iVar2 = FUN_00a8cab0();
      if (iVar2 == 0x80002) goto switchD_004319e5_default;
      uVar4 = 0x80002;
      break;
    default:
      goto switchD_004319e5_default;
    }
  }
  FUN_0041be30(uVar4);
switchD_004319e5_default:
  *(undefined4 *)(param_1 + 0x10b4) = 0;
  *(undefined4 *)(param_1 + 0x920) = 0;
  *(undefined4 *)(param_1 + 0x924) = 0;
  return;
}

// 00431A50  Em0020::vf150  size=35  [class]
void Em0020::vf150(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_1 == 0x22)) {
    FUN_00420b80(0x200008,0,0,0,0);
  }
  return;
}

// 00431A80  Em0020::vf188  size=96  [class]
void __thiscall Em0020::vf188(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x17c))();
      if (iVar2 != 0) {
        FUN_00420b80(0x70000,0,0,0,0);
      }
    }
  }
  return;
}

// 00431AE0  Em0020::vf1A4  size=450  [class]
void __thiscall Em0020::vf1A4(int param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  
  if (DAT_018b9174 - 0xa00U < 0x100) {
    FUN_00422e80(param_2,param_3);
    return;
  }
  iVar2 = FUN_00a8cab0();
  if (iVar2 == 0x30025) {
    return;
  }
  if ((param_3 & 4) == 0) {
    if ((param_3 & 2) == 0) {
      if ((param_3 & 8) == 0) {
        return;
      }
      iVar2 = FUN_00a8cab0();
      if (iVar2 == 0x30029) {
        FUN_00420b80(0x4000d,0,0,0,0);
      }
      iVar2 = FUN_00a8cab0();
      if ((iVar2 == 0x3001a) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x30009)) {
        sVar1 = FUN_00dde2a0(0,1);
        iVar2 = FUN_00a8eea0();
        if (iVar2 <= *(int *)(param_1 + 0x12b8)) {
          sVar1 = FUN_00dde2a0(0,2);
        }
        if (sVar1 != 0) {
          FUN_0041f670(1);
        }
      }
    }
    else {
      if ((*(int *)(param_1 + 0x1084) == 0x3000e) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x3000c))
      goto LAB_00431b3f;
      iVar2 = FUN_00a8cab0();
      if (iVar2 == 0x30029) {
        FUN_00420b80(0x4000d,0,0,0,0);
        *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + 1;
        return;
      }
    }
    *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + 1;
    return;
  }
  if ((*(int *)(param_1 + 0x1084) != 0x3000e) || (iVar2 = FUN_00a8cab0(), iVar2 != 0x3000c)) {
    FUN_00420b80(0x40013,0,0,0,0);
    iVar2 = FUN_00a8eea0();
    if ((iVar2 <= *(int *)(param_1 + 0x12b8)) && (sVar1 = FUN_00dde2a0(0,1), sVar1 == 0)) {
      FUN_0041f670(1);
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x30029) {
      FUN_00420b80(0x4000d,0,0,0,0);
    }
    *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + 1;
    *(undefined4 *)(param_1 + 0x1098) = 0;
    return;
  }
LAB_00431b3f:
  FUN_0042c740();
  return;
}

// 00431CB0  FUN_00431cb0  size=138  [between]
void FUN_00431cb0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x1e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_0042d970(0x80003);
  }
  return;
}

// 00431D40  FUN_00431d40  size=889  [between]
void __fastcall FUN_00431d40(int *param_1)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((4 < param_1[0x187]) && (param_1[0x187] < 6)) {
    fVar2 = (float)param_1[0x225] - (9.8 / ((float)param_1[0x244] * 60.0)) * 3.0;
    param_1[0x225] = (int)fVar2;
    if (fVar2 < 0.0) {
      param_1[0x225] = (int)(fVar2 * -1.0);
    }
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = 1;
    (*pcVar1)(0x41200000);
    FUN_00a5dc60();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xe,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 5;
    iStack_20 = 0;
    iStack_1c = 0;
    iStack_18 = 0;
    if ((DAT_018b9174 - 0xa00U < 0x100) && (param_1[0x480] == 0)) {
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iStack_1c = 0x40e00000;
      iStack_18 = 0xc21a6666;
      param_1[0x25] = 0;
    }
    iStack_20 = 0;
    param_1[0x225] = 0;
    FUN_00422440(param_1 + 0x508,param_1 + 0x10,&iStack_20,0x40400000,0x3f000000);
    param_1[0x249] = 0;
    goto LAB_00431f9a;
  case 5:
LAB_00431f9a:
    iStack_20 = 0;
    iStack_1c = 0;
    iStack_18 = 0;
    FUN_00a581b0(&iStack_20,param_1[0x225],param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.06666667 + (float)param_1[0x249]);
    param_1[0x14] = iStack_20;
    param_1[0x15] = iStack_1c;
    param_1[0x16] = iStack_18;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x10,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x187] = 7;
    (*pcVar1)(0);
    param_1[0x225] = 0;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  return;
}

// 004320F0  FUN_004320f0  size=574  [between]
void __fastcall FUN_004320f0(int param_1)

{
  int iVar1;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [288];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (((*(int *)(param_1 + 0x598) == 1) || (iVar1 = FUN_00a8c760(0x11), iVar1 != 0)) &&
     (iVar1 = FUN_00a12210(0x12), iVar1 != 0)) {
    FUN_004039a0(0xc,param_1,0);
    FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
    local_40 = *(undefined4 *)(iVar1 + 0x40);
    local_3c = *(float *)(iVar1 + 0x44);
    local_38 = *(undefined4 *)(iVar1 + 0x48);
    local_34 = *(undefined4 *)(iVar1 + 0x4c);
    local_180 = *(undefined4 *)(iVar1 + 0x40);
    local_178 = *(undefined4 *)(iVar1 + 0x48);
    local_174 = *(undefined4 *)(iVar1 + 0x4c);
    local_17c = *(float *)(iVar1 + 0x44) + 1.0;
    local_16c = *(float *)(iVar1 + 0x44) - 5.0;
    local_170 = local_180;
    local_168 = local_178;
    local_164 = local_174;
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (&local_180,0,0,0,&local_180,&local_170,0x1e,"em0020_foot");
    if (iVar1 != 0) {
      local_40 = local_180;
      local_3c = local_17c;
      local_38 = local_178;
      local_34 = local_174;
    }
    FUN_00a8c930(0,local_160);
  }
  if ((*(int *)(param_1 + 0x594) != 1) && (iVar1 = FUN_00a8c760(0x12), iVar1 == 0)) {
    return;
  }
  iVar1 = FUN_00a12210(0x16);
  if (iVar1 != 0) {
    FUN_004039a0(0xc,param_1,0);
    FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
    local_40 = *(undefined4 *)(iVar1 + 0x40);
    local_3c = *(float *)(iVar1 + 0x44);
    local_38 = *(undefined4 *)(iVar1 + 0x48);
    local_34 = *(undefined4 *)(iVar1 + 0x4c);
    local_180 = *(undefined4 *)(iVar1 + 0x40);
    local_178 = *(undefined4 *)(iVar1 + 0x48);
    local_174 = *(undefined4 *)(iVar1 + 0x4c);
    local_17c = *(float *)(iVar1 + 0x44) + 1.0;
    local_16c = *(float *)(iVar1 + 0x44) - 5.0;
    local_170 = local_180;
    local_168 = local_178;
    local_164 = local_174;
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (&local_180,0,0,0,&local_180,&local_170,0x1e,"em0020_foot");
    if (iVar1 != 0) {
      local_40 = local_180;
      local_3c = local_17c;
      local_38 = local_178;
      local_34 = local_174;
    }
    FUN_00a8c930(0,local_160);
  }
  return;
}

// 00432330  FUN_00432330  size=335  [between]
void __thiscall FUN_00432330(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (((param_2 == 0x20000) && (*(int *)(param_1 + 0x1234) == 0)) &&
     (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x354))(), iVar2 != 0)) {
      FUN_00420b80(0x10006,0,0,0,0);
      *(undefined4 *)(param_1 + 0x1234) = 1;
      return;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1084) & 0xffff0000;
  if (((*(float *)(param_1 + 0x10a4) <= *(float *)(param_1 + 0x1414)) || (uVar3 == 0x30000)) ||
     (*(int *)(param_1 + 0x1200) != 0)) {
    if (((byte)DAT_01bea090 & 0x10) == 0) goto LAB_00432447;
  }
  else if (((byte)DAT_01bea090 & 0x10) == 0) {
    iVar2 = FUN_0041d7e0();
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_004180d0();
    if (iVar2 == 0) {
      return;
    }
    FUN_00420b80(0x30020,0,0,0,0);
    return;
  }
  if ((param_2 == 0x80000) || (uVar3 == 0x80000)) {
    if (*(int *)(param_1 + 0x1220) != 0) {
      return;
    }
    FUN_00420b80(0x10000,0,0,0,0);
    return;
  }
LAB_00432447:
  if (((*(int *)(param_1 + 0x1108) == 0) ||
      ((*(int *)(param_1 + 0x1370) != 0 && (*(int *)(param_1 + 0x1108) != 2)))) &&
     (uVar3 = FUN_00a8cab0(), (uVar3 & 0xffff0000) != 0x80000)) {
    FUN_00431910();
  }
  return;
}

// 00432480  FUN_00432480  size=228  [between]
void __fastcall FUN_00432480(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((*(int *)(param_1 + 0x1200) != 0) || (*(int *)(param_1 + 0x1208) != 0)) ||
     (*(int **)(param_1 + 0xa84) == (int *)0x0)) goto LAB_00432532;
  puVar3 = &DAT_01be9db8;
  (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
  iVar1 = FUN_00dd6d80(puVar3);
  if (iVar1 == 0) goto LAB_00432532;
  iVar1 = FUN_00b7c970();
  if ((iVar1 < 1) || (iVar2 = FUN_00b7c980(0), iVar2 / 2 < iVar1)) {
    iVar1 = FUN_00a8eea0();
    if (-1 < iVar1) {
      iVar1 = FUN_00a8eeb0();
      iVar2 = FUN_00a8eea0();
      if (iVar2 <= iVar1 / 2) goto LAB_00432509;
    }
  }
  else {
LAB_00432509:
    *(undefined4 *)(param_1 + 0x1208) = 1;
  }
  if (*(float *)(param_1 + 0x14c4) < *(float *)(param_1 + 0x14cc) !=
      (*(float *)(param_1 + 0x14c4) == *(float *)(param_1 + 0x14cc))) {
    *(undefined4 *)(param_1 + 0x1208) = 1;
  }
LAB_00432532:
  iVar1 = FUN_0041da40();
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x14c))
                        (0x1c,*(undefined4 *)(param_1 + 0x4f0)), iVar1 != 0)) {
    FUN_00422f50();
    return;
  }
  return;
}

// 00432570  FUN_00432570  size=292  [between]
void __fastcall FUN_00432570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x33);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar2 = FUN_00a7c8a0();
        FUN_00e021c0(uVar2);
        puVar3 = local_160;
        uVar2 = FUN_00e00b40(0x20020,puVar3);
        FUN_00a8c930(uVar2,puVar3);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) == 0) {
        if (((byte)DAT_01b7b914 & 0x40) != 0) {
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 1;
          *(undefined4 *)(param_1 + 0x13e0) = 1;
          FUN_00420b80(0x7000e,0,0,0,0);
          return;
        }
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 == 0) {
          return;
        }
      }
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x13e0) = 1;
      *(undefined4 *)(param_1 + 0x1110) = 1;
      if (*(int *)(param_1 + 0x10c0) != 0) {
        FUN_00420b80(0x7000e,0,0,0,0);
        return;
      }
    }
    FUN_00425200();
  }
  return;
}

// 004326A0  FUN_004326a0  size=298  [between]
void __fastcall FUN_004326a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x33);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar2 = FUN_00a7c8a0();
        FUN_00e021c0(uVar2);
        puVar3 = local_160;
        uVar2 = FUN_00e00b40(0x20020,puVar3);
        FUN_00a8c930(uVar2,puVar3);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) == 0) {
        if (((byte)DAT_01b7b914 & 0x40) != 0) {
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 1;
          *(undefined4 *)(param_1 + 0x13e0) = 1;
          FUN_00420b80(0x70011,0,0,0,0);
          return;
        }
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 == 0) {
          return;
        }
      }
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x13e0) = 1;
      *(undefined4 *)(param_1 + 0x1110) = 1;
      if (*(int *)(param_1 + 0x10c0) != 0) {
        *(undefined4 *)(param_1 + 0x1110) = 1;
        FUN_00420b80(0x70011,0,0,0,0);
        return;
      }
    }
    FUN_00425200();
  }
  return;
}

// 004327D0  FUN_004327d0  size=503  [between]
void __fastcall FUN_004327d0(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_160 [348];
  
  iVar3 = FUN_00a8cac0();
  if (iVar3 < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x10bc) == 0) {
    iVar3 = FUN_00a8c760(0x33);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
      FUN_004039a0(6,param_1,0);
      uVar4 = FUN_00a7c8a0();
      FUN_00e021c0(uVar4);
      puVar5 = local_160;
      uVar4 = FUN_00e00b40(0x20020,puVar5);
      FUN_00a8c930(uVar4,puVar5);
      *(undefined4 *)(param_1 + 0x13ac) = 1;
    }
    iVar3 = FUN_00a8c760(0x30);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10c4) = 1;
    }
    if (((byte)DAT_01b7b914 & 0xb0) != 0) {
LAB_0043292b:
      FUN_00425200();
      return;
    }
    if (((byte)DAT_01b7b914 & 0x40) == 0) {
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 == 0) {
        return;
      }
      goto LAB_0043292b;
    }
    *(undefined4 *)(param_1 + 0x10bc) = 1;
    *(undefined4 *)(param_1 + 0x10c0) = 1;
    *(undefined4 *)(param_1 + 0x13e0) = 1;
    uVar2 = FUN_00dde2a0(0,4);
    if ((*(int *)(param_1 + 0x1200) != 0) &&
       ((fVar1 = *(float *)(param_1 + 0x58), !NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0) ||
        (*(float *)(param_1 + 0x58) <= -5.0)))) {
      uVar2 = 4;
    }
    switch(uVar2) {
    case 0:
    case 1:
      goto switchD_004328dd_caseD_0;
    case 2:
    case 3:
      goto switchD_004328dd_caseD_2;
    default:
      goto switchD_004328dd_default;
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x13e0) = 1;
  if (*(int *)(param_1 + 0x10c0) == 0) goto LAB_0043292b;
  *(undefined4 *)(param_1 + 0x10bc) = 1;
  *(undefined4 *)(param_1 + 0x1110) = 1;
  uVar2 = FUN_00dde2a0(0,4);
  switch(uVar2) {
  case 0:
  case 1:
switchD_004328dd_caseD_0:
    if ((*(int *)(param_1 + 0x13d4) == 0) && (*(int *)(param_1 + 0x13d8) == 0)) {
      FUN_00420b80(0x7001b,0,0,0,0);
      *(undefined4 *)(param_1 + 0x13d4) = 1;
      return;
    }
    break;
  case 2:
  case 3:
switchD_004328dd_caseD_2:
    if ((*(int *)(param_1 + 0x13d4) == 0) && (*(int *)(param_1 + 0x13d8) == 0)) {
      FUN_00420b80(0x7001f,0,0,0,0);
      *(undefined4 *)(param_1 + 0x13d8) = 1;
      return;
    }
    break;
  default:
    break;
  }
switchD_004328dd_default:
  FUN_00420b80(0x70014,0,0,0,0);
  return;
}

// 004329F0  FUN_004329f0  size=192  [between]
void __fastcall FUN_004329f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      FUN_00a8c760(0x33);
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0x70) == 0) {
        if ((char)(byte)DAT_01b7b914 < '\0') {
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 1;
          *(undefined4 *)(param_1 + 0x13e0) = 1;
          FUN_00420b80(0x70017,0,0,0,0);
          return;
        }
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 == 0) {
          return;
        }
      }
LAB_00432a6c:
      FUN_00425200();
      return;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x13e0) = 1;
      *(undefined4 *)(param_1 + 0x1110) = 1;
      if (*(int *)(param_1 + 0x10c0) == 0) goto LAB_00432a6c;
      *(undefined4 *)(param_1 + 0x1110) = 1;
      FUN_00420b80(0x70017,0,0,0,0);
    }
  }
  return;
}

// 00432AB0  FUN_00432ab0  size=284  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00432ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x33);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar2 = FUN_00a7c8a0();
        FUN_00e021c0(uVar2);
        puVar3 = local_160;
        uVar2 = FUN_00e00b40(0x20020,puVar3);
        FUN_00a8c930(uVar2,puVar3);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) == 0) {
        if (((byte)DAT_01b7b914 & 0x40) == 0) {
          iVar1 = FUN_00a94ce0(0);
          if (iVar1 == 0) {
            return;
          }
        }
        else if ((_DAT_01b7b910 & 0x20000) != 0) {
          *(undefined4 *)(param_1 + 0x13e0) = 1;
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 1;
          goto LAB_00432bb2;
        }
      }
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x13e0) = 1;
      if (*(int *)(param_1 + 0x10c0) != 0) {
        *(undefined4 *)(param_1 + 0x1110) = 1;
LAB_00432bb2:
        FUN_00420b80(0x7001d,0,0,0,0);
        return;
      }
    }
    FUN_00425200();
  }
  return;
}

// 00432BD0  FUN_00432bd0  size=330  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00432bd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x10bc) == 0) {
      iVar1 = FUN_00a8c760(0x33);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x13ac) == 0)) {
        FUN_004039a0(6,param_1,0);
        uVar2 = FUN_00a7c8a0();
        FUN_00e021c0(uVar2);
        puVar3 = local_160;
        uVar2 = FUN_00e00b40(0x20020,puVar3);
        FUN_00a8c930(uVar2,puVar3);
        *(undefined4 *)(param_1 + 0x13ac) = 1;
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10c4) = 1;
      }
      if (((byte)DAT_01b7b914 & 0xb0) == 0) {
        if (((byte)DAT_01b7b914 & 0x40) == 0) {
          iVar1 = FUN_00a94ce0(0);
          if (iVar1 == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x13e4) = 1;
          *(undefined4 *)(param_1 + 0x13e0) = 1;
          FUN_00420b80(0x20000,0,0,0,0);
          return;
        }
        if ((_DAT_01b7b910 & 0x10000) != 0) {
          *(undefined4 *)(param_1 + 0x13e0) = 1;
          *(undefined4 *)(param_1 + 0x10bc) = 1;
          *(undefined4 *)(param_1 + 0x10c0) = 1;
          goto LAB_00432cf3;
        }
      }
    }
    else {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x13e0) = 1;
      if (*(int *)(param_1 + 0x10c0) != 0) {
        *(undefined4 *)(param_1 + 0x1110) = 1;
LAB_00432cf3:
        FUN_00420b80(0x70021,0,0,0,0);
        return;
      }
    }
    FUN_00425200();
  }
  return;
}

// 00432D20  FUN_00432d20  size=974  [between]
void __fastcall FUN_00432d20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float fVar6;
  float afStack_78 [2];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  iVar2 = FUN_00a8c760(0x38);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x30c))(0x32,0);
    if (((param_1[0x3dc] != 0) && ((*(byte *)(param_1[0x3dc] + 0x38) & 1) == 0)) &&
       (iVar2 = param_1[0x4ad], iVar1 = param_1[0x4ae], iVar3 = FUN_00a8eea0(),
       iVar3 <= param_1[0x4ad] + ((iVar2 - iVar1) / 3) * -2)) {
      *(uint *)(param_1[0x3dc] + 0x38) = *(uint *)(param_1[0x3dc] + 0x38) | 1;
    }
  }
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_00aa4080(0x115,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    break;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
    }
    break;
  case 2:
    FUN_00aa4080(0x116,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 4;
    }
    break;
  case 4:
    FUN_00aa4080(0x11a,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    FUN_00a9e060(0x12);
    FUN_00a8c5f0(0x12,param_1[0x13c],param_1[0x3e2],0xffe,0);
    param_1[0x3e4] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a959f0(0);
    if (0x6d < iVar2) {
      param_1[0x187] = 8;
    }
    goto LAB_00432f4e;
  case 6:
    FUN_00aa4080(0x11b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0041b200();
      FUN_00420b80(0x20000,0,0,0,0);
    }
    break;
  case 8:
    FUN_00a9e060(0x12);
    FUN_00a8c5f0(0x12,param_1[0x13c],param_1[0x3e2],0,0x701);
    param_1[0x3e4] = 0;
    if (param_1[0x2a1] != 0) {
      param_1[0x4dc] = 0;
    }
    param_1[0x187] = 9;
    goto LAB_00433040;
  case 9:
LAB_00433040:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00432f4e:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 6;
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8ce90(auStack_70,auStack_60);
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_5c);
    *(float *)(param_1[0x2a1] + 0x94) = (float)fVar5;
    fVar6 = (float)param_1[0x25];
    D3DXMatrixRotationY(auStack_50);
    D3DXVec3TransformNormal(afStack_78,afStack_78,auStack_58);
    iVar2 = param_1[0x2a1];
    *(float *)(iVar2 + 0x50) = (float)param_1[0x14] + fVar6;
    *(float *)(iVar2 + 0x54) = (float)param_1[0x15] + unaff_EDI;
    *(float *)(iVar2 + 0x58) = (float)param_1[0x16] + unaff_ESI;
    *(float *)(iVar2 + 0x5c) = (float)param_1[0x17] + afStack_78[0];
  }
  return;
}

// 00433120  FUN_00433120  size=919  [between]
void __fastcall FUN_00433120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float unaff_ESI;
  float10 fVar3;
  float fVar4;
  float fStack_7c;
  float afStack_78 [2];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  iVar1 = FUN_00a8c760(0x38);
  if (iVar1 != 0) {
    uVar2 = FUN_00ac8520(0x2f);
    (**(code **)(**(int **)(param_1 + 0xa84) + 0x30c))(uVar2,1);
  }
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x110,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    break;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    break;
  case 2:
    FUN_00aa4080(0x111,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    break;
  case 4:
    FUN_00aa4080(0x11a,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
    FUN_00a9e060(0x12);
    FUN_00a8c5f0(0x12,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xf88),0xffe,0);
    *(undefined4 *)(param_1 + 0xf90) = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a959f0(0);
    if (0x6d < iVar1) {
      *(undefined4 *)(param_1 + 0x61c) = 8;
    }
    goto LAB_00433310;
  case 6:
    FUN_00aa4080(0x11b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_0041b200();
      FUN_00420b80(0x20000,0,0,0,0);
    }
    break;
  case 8:
    FUN_00a9e060(0x12);
    FUN_00a8c5f0(0x12,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xf88),0,0x701);
    *(undefined4 *)(param_1 + 0xf90) = 0;
    if (*(int *)(param_1 + 0xa84) != 0) {
      *(undefined4 *)(param_1 + 0x1370) = 0;
    }
    *(undefined4 *)(param_1 + 0x61c) = 9;
    goto LAB_0043340a;
  case 9:
LAB_0043340a:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00433310:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 6;
    }
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8ce90(auStack_70,auStack_60);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + fStack_5c);
    *(float *)(*(int *)(param_1 + 0xa84) + 0x94) = (float)fVar3;
    fVar4 = *(float *)(param_1 + 0x94);
    D3DXMatrixRotationY(auStack_50);
    D3DXVec3TransformNormal(afStack_78,afStack_78,auStack_58);
    iVar1 = *(int *)(param_1 + 0xa84);
    *(float *)(iVar1 + 0x50) = *(float *)(param_1 + 0x50) + fVar4;
    *(float *)(iVar1 + 0x54) = *(float *)(param_1 + 0x54) + unaff_ESI;
    *(float *)(iVar1 + 0x58) = *(float *)(param_1 + 0x58) + fStack_7c;
    *(float *)(iVar1 + 0x5c) = *(float *)(param_1 + 0x5c) + afStack_78[0];
  }
  return;
}

// 004334E0  FUN_004334e0  size=1429  [between]
void __fastcall FUN_004334e0(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  
  if (DAT_018b9174 - 0xa00U < 0x100) {
    if (((byte)DAT_01bea090 & 0x10) != 0) {
      FUN_00426760();
      return;
    }
    iVar4 = FUN_00418510();
    if (iVar4 == 0) {
      if ((*(int *)(param_1 + 0x1200) == 0) && (*(int *)(param_1 + 0x1208) != 0)) {
        FUN_00426830();
        return;
      }
      iVar4 = FUN_00c81dd0(0xe);
      if (iVar4 != 0) {
        FUN_00426830();
        return;
      }
      if ((((*(int *)(param_1 + 0x1200) == 0) && (*(int *)(param_1 + 0x1210) == 0)) ||
          (((byte)DAT_01bea090 & 0x10) != 0)) && (*(int *)(param_1 + 0x1108) != 0)) {
        if (*(int *)(param_1 + 0x618) == 0x20000) {
          return;
        }
        FUN_00420b80(0x20000,0,0,0,0);
        return;
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0x1370) == 0) &&
       (*(int *)(param_1 + 0x870) <= *(int *)(param_1 + 0x874) / 10)) {
      uVar7 = 0x10003;
LAB_004335ce:
      FUN_00420b80(uVar7,0,0,0,0);
      *(undefined4 *)(param_1 + 0x1380) = 0x40c00000;
      return;
    }
    if ((*(int *)(param_1 + 0xdc0) == 1) && (*(int *)(param_1 + 0x12c8) == 0)) {
      FUN_004268f0();
      return;
    }
    if (*(int *)(param_1 + 0x1370) != 0) {
      FUN_0042e9d0();
      return;
    }
    if ((*(int *)(param_1 + 0xdc0) == 2) && (sVar2 = FUN_00dde2a0(0,3), sVar2 != 0)) {
      iVar4 = FUN_00a8cab0();
      if (iVar4 == 0x3000e) {
        return;
      }
      iVar4 = FUN_00a8cab0();
      if (iVar4 == 0x3000c) {
        return;
      }
      uVar7 = 0x3000e;
      goto LAB_004335ce;
    }
  }
  iVar4 = FUN_00a8eea0();
  iVar5 = FUN_00a8eeb0();
  uVar7 = 0;
  bVar6 = (iVar5 / 2 <= iVar4) - 1U & 2;
  if (DAT_018b9174 - 0xa00U < 0x100) {
    if (*(int *)(param_1 + 0x1200) != 0) {
      bVar6 = 2;
    }
  }
  else if ((*(int *)(param_1 + 0x1390) == 0) &&
          (*(int *)(param_1 + 0x870) < *(int *)(param_1 + 0x12b8))) {
    FUN_00420b80(0x30025,0,0,0,0);
    return;
  }
  uVar1 = FUN_00dde2a0(0,10);
  iVar4 = *(int *)(param_1 + 0x1108);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      if (bVar6 != 0) {
        if (bVar6 == 2) {
          switch(uVar1) {
          case 0:
            goto switchD_004337f7_caseD_0;
          case 1:
            goto switchD_004337f7_caseD_1;
          case 2:
          case 3:
          case 4:
            goto switchD_004337f7_caseD_2;
          case 5:
          case 6:
            goto switchD_00433764_default;
          case 7:
          case 8:
          case 9:
            goto switchD_00433764_caseD_5;
          default:
            sVar2 = FUN_00dde2a0(0,4);
            if (((sVar2 == 0) && (*(int *)(param_1 + 0x870) < *(int *)(param_1 + 0x12b8))) &&
               (0xff < DAT_018b9174 - 0xa00U)) {
              FUN_00420b80(0x30025,0,0,0,0);
              return;
            }
            goto LAB_004337c7;
          }
        }
        goto switchD_0043395f_default;
      }
      switch(uVar1) {
      case 0:
      case 1:
        goto switchD_004337f7_caseD_0;
      case 2:
      case 3:
        goto switchD_004337f7_caseD_1;
      case 4:
      case 5:
      case 6:
switchD_004337f7_caseD_2:
        FUN_00420b80(0x10003,0,0,0,0);
        return;
      case 7:
      case 8:
        goto switchD_00433764_default;
      default:
        sVar2 = FUN_00dde2a0(0,4);
        if (((sVar2 == 0) && (*(int *)(param_1 + 0x870) < *(int *)(param_1 + 0x12b8))) &&
           (0xff < DAT_018b9174 - 0xa00U)) {
          FUN_00420b80(0x30025,0,0,0,0);
          return;
        }
        goto LAB_004337c7;
      }
    }
    if (iVar4 != 2) goto switchD_0043395f_default;
    if ((DAT_018b9174 - 0xa00U < 0x100) && (*(int *)(param_1 + 0x1200) == 0)) {
      FUN_00420b80((-(uint)(4 < uVar1) & 0x13) + 0x30007,0,0,0,0);
      return;
    }
    if (bVar6 == 0) {
      switch(uVar1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        break;
      case 5:
      case 6:
      case 7:
        goto switchD_00433764_caseD_5;
      default:
        goto switchD_00433764_default;
      }
    }
    else {
      if (bVar6 != 2) goto switchD_0043395f_default;
      switch(uVar1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        break;
      case 5:
      case 6:
      case 7:
        goto switchD_00433764_caseD_5;
      default:
        goto switchD_00433764_default;
      }
    }
    if (0xff < DAT_018b9174 - 0xa00U) {
      FUN_00dde2a0(0,4);
switchD_00433764_caseD_5:
      FUN_00420b80(0x3001a,0,0,0,0);
      return;
    }
LAB_004337c7:
    FUN_00420b80(0x3000a,0,0,0,0);
    return;
  }
  if (2 < *(uint *)(param_1 + 0x1230)) {
    if (DAT_018b9174 - 0xa00U < 0x100) {
      sVar2 = FUN_00dde2a0(0,2);
      if (sVar2 == 0) goto switchD_004337f7_caseD_0;
      if (sVar2 == 1) goto switchD_004337f7_caseD_1;
      if (sVar2 == 2) {
        FUN_00420b80(0x80003,0,0,0,0);
        return;
      }
    }
    else {
      uVar3 = FUN_00dde2a0(0,3);
      if (*(int *)(param_1 + 0x1108) == 0) {
        switch(uVar3) {
        case 0:
switchD_004337f7_caseD_0:
          FUN_00420b80(0x30014,0,0,0,0);
          return;
        case 1:
switchD_004337f7_caseD_1:
          FUN_00420b80(0x30016,0,0,0,0);
          return;
        case 2:
          FUN_00420b80(0x80006,0,0,0,0);
          return;
        case 3:
          FUN_00420b80(0x1000a,0,0,0,0);
          return;
        }
      }
      else {
        switch(uVar3) {
        case 0:
        case 1:
          goto switchD_004337f7_caseD_0;
        case 2:
        case 3:
          goto switchD_004337f7_caseD_1;
        }
      }
    }
    goto switchD_0043395f_default;
  }
  if (bVar6 == 0) {
    switch(uVar1) {
    case 0:
switchD_004339e3_caseD_0:
      FUN_00420b80(0x30003,0,0,0,0);
      return;
    case 1:
switchD_004339e3_caseD_2:
      FUN_00420b80(0x30004,0,0,0,0);
      return;
    case 2:
    case 3:
    case 4:
switchD_004339e3_caseD_4:
      FUN_00420b80(0x30005,0,0,0,0);
      return;
    case 5:
    case 6:
    case 7:
switchD_004339e3_caseD_7:
      FUN_00420b80(0x30006,0,0,0,0);
      return;
    }
  }
  else {
    if (bVar6 != 2) goto switchD_0043395f_default;
    switch(uVar1) {
    case 0:
    case 1:
      goto switchD_004339e3_caseD_0;
    case 2:
    case 3:
      goto switchD_004339e3_caseD_2;
    case 4:
    case 5:
    case 6:
      goto switchD_004339e3_caseD_4;
    case 7:
    case 8:
    case 9:
      goto switchD_004339e3_caseD_7;
    }
  }
switchD_00433764_default:
  uVar7 = 0x30007;
switchD_0043395f_default:
  FUN_00420b80(uVar7,0,0,0,0);
  return;
}

// 00433C90  FUN_00433c90  size=307  [between]
void __fastcall FUN_00433c90(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4120(0xb2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(param_1[0x507],0x3f800000);
    uVar2 = FUN_00a959f0(0);
    if (0x12 < uVar2) {
      FUN_00a8ccb0(1);
    }
    goto switchD_00433ca3_default;
  case 2:
    FUN_004334e0();
    break;
  case 3:
    break;
  default:
    goto switchD_00433ca3_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00420b80(0x20000,0,0,0,0);
  }
switchD_00433ca3_default:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00433DE0  FUN_00433de0  size=440  [between]
void __fastcall FUN_00433de0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0xaf,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(param_1[0x507],0x3f800000);
    iVar4 = FUN_00a8c760(4);
    if (iVar4 != 0) {
      FUN_00a8ccb0(1);
    }
    break;
  case 2:
    pfVar3 = (float *)(**(code **)(*(int *)param_1[0x2a1] + 0x68))();
    fVar1 = SQRT((*pfVar3 - (float)param_1[0x10]) * (*pfVar3 - (float)param_1[0x10]) +
                 (pfVar3[1] - (float)param_1[0x11]) * (pfVar3[1] - (float)param_1[0x11]) +
                 (pfVar3[2] - (float)param_1[0x12]) * (pfVar3[2] - (float)param_1[0x12]));
    if (fVar1 < 2.0 == (fVar1 == 2.0)) {
      FUN_004334e0();
    }
    else {
      FUN_00aa4080(0x4f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a8ccb0(1);
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 00433FB0  FUN_00433fb0  size=440  [between]
void __fastcall FUN_00433fb0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0xb0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(param_1[0x507],0x3f800000);
    iVar4 = FUN_00a8c760(4);
    if (iVar4 != 0) {
      FUN_00a8ccb0(1);
    }
    break;
  case 2:
    pfVar3 = (float *)(**(code **)(*(int *)param_1[0x2a1] + 0x68))();
    fVar1 = SQRT((*pfVar3 - (float)param_1[0x10]) * (*pfVar3 - (float)param_1[0x10]) +
                 (pfVar3[1] - (float)param_1[0x11]) * (pfVar3[1] - (float)param_1[0x11]) +
                 (pfVar3[2] - (float)param_1[0x12]) * (pfVar3[2] - (float)param_1[0x12]));
    if (fVar1 < 2.0 == (fVar1 == 2.0)) {
      FUN_004334e0();
    }
    else {
      FUN_00aa4080(0x50,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00a8ccb0(1);
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00420b80(0x20000,0,0,0,0);
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 004341B0  FUN_004341b0  size=190  [between]
void __fastcall FUN_004341b0(int param_1)

{
  short sVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xd4,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar1 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 00434270  FUN_00434270  size=231  [between]
void __fastcall FUN_00434270(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa4080(0xd6,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar3 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) &&
     (((DAT_018b9174 - 0xa00U < 0x100 ||
       (fVar1 = *(float *)(param_1 + 0x10e4), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) ||
      (*(int *)(param_1 + 0x10e8) == 0)))) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar2 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 00434360  FUN_00434360  size=231  [between]
void __fastcall FUN_00434360(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa4080(0xd7,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar3 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) &&
     (((DAT_018b9174 - 0xa00U < 0x100 ||
       (fVar1 = *(float *)(param_1 + 0x10e4), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) ||
      (*(int *)(param_1 + 0x10e8) == 0)))) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar2 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 00434450  FUN_00434450  size=231  [between]
void __fastcall FUN_00434450(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa4080(0xd8,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar3 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) &&
     (((DAT_018b9174 - 0xa00U < 0x100 ||
       (fVar1 = *(float *)(param_1 + 0x10e4), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) ||
      (*(int *)(param_1 + 0x10e8) == 0)))) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar2 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 00434540  FUN_00434540  size=231  [between]
void __fastcall FUN_00434540(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa4080(0xe2,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar3 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) &&
     (((DAT_018b9174 - 0xa00U < 0x100 ||
       (fVar1 = *(float *)(param_1 + 0x10e4), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) ||
      (*(int *)(param_1 + 0x10e8) == 0)))) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar2 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 00434630  FUN_00434630  size=190  [between]
void __fastcall FUN_00434630(int param_1)

{
  short sVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xe3,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar1 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 004346F0  FUN_004346f0  size=190  [between]
void __fastcall FUN_004346f0(int param_1)

{
  short sVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xe4,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar1 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 004347B0  FUN_004347b0  size=190  [between]
void __fastcall FUN_004347b0(int param_1)

{
  short sVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xe5,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      FUN_0042d970(0x80001);
    }
    else if (sVar1 == 1) {
      FUN_0042d970(0x80002);
      return;
    }
  }
  return;
}

// 00434870  FUN_00434870  size=495  [between]
void __fastcall FUN_00434870(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0xda,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    iVar2 = FUN_0041c960(*(undefined4 *)(param_1 + 0xa84));
    if (iVar2 != 0) {
      *(float *)(param_1 + 0x94) = *(float *)(iVar2 + 0x94) + 3.1415927;
    }
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0xdb,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 3;
    break;
  case 4:
    FUN_00aa4080(0xdc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(4);
    if ((iVar2 != 0) && (*(float *)(param_1 + 0xa8c) <= 9.0)) {
      iVar2 = FUN_0041c960(*(undefined4 *)(param_1 + 0xa84));
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0xb78) != 0)) {
        FUN_00420b80(0x20005,0,0,0,0);
        return;
      }
      FUN_00420b80(0x10000e,0,0,0,0);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0042d970(0x80003);
      return;
    }
  default:
    goto switchD_0043488d_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_0043488d_default:
  return;
}

// 00434A80  FUN_00434a80  size=331  [between]
void __fastcall FUN_00434a80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  
  iVar5 = FUN_00a8c760(4);
  if ((((iVar5 == 0) || (*(int *)(param_1 + 0x61c) == 0)) || (*(int *)(param_1 + 0x12c8) != 0)) ||
     (((byte)DAT_01bea090 & 0x10) != 0)) {
    return;
  }
  *(int *)(param_1 + 0x10b0) = *(int *)(param_1 + 0x10b0) + -1;
  if (0 < *(int *)(param_1 + 0x10b0)) {
    FUN_00420b80(0x20000,0,0,0,0);
    return;
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    uVar4 = FUN_00dde2a0(0,4);
    if (uVar4 < 4) goto LAB_00434af7;
  }
  else {
    uVar7 = FUN_00dde2a0(0,5);
    if ((uVar7 & 0xffff) != 0) {
      if ((uVar7 & 0xffff) - 1 < 3) {
        FUN_004334e0();
        return;
      }
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x68))();
  fVar1 = *pfVar6 - *(float *)(param_1 + 0x40);
  fVar3 = pfVar6[1] - *(float *)(param_1 + 0x44);
  fVar2 = pfVar6[2] - *(float *)(param_1 + 0x48);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar1 < 2.0 != (fVar1 == 2.0)) {
    FUN_00aa4080(0x4f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00420b80(0x3000f,0,0,0,0);
    return;
  }
LAB_00434af7:
  FUN_004334e0();
  return;
}

// 00434BD0  FUN_00434bd0  size=334  [between]
void __fastcall FUN_00434bd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  
  iVar5 = FUN_00a8c760(4);
  if ((((iVar5 == 0) || (*(int *)(param_1 + 0x61c) == 0)) || (*(int *)(param_1 + 0x12c8) != 0)) ||
     (((byte)DAT_01bea090 & 0x10) != 0)) {
    return;
  }
  *(int *)(param_1 + 0x10b0) = *(int *)(param_1 + 0x10b0) + -1;
  if (0 < *(int *)(param_1 + 0x10b0)) {
    FUN_00420b80(0x20000,0,0,0,0);
    return;
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    sVar4 = FUN_00dde2a0(0,1);
    if (sVar4 == 0) goto LAB_00434ccc;
  }
  else {
    uVar7 = FUN_00dde2a0(0,5);
    if ((uVar7 & 0xffff) != 0) {
      if ((uVar7 & 0xffff) - 1 < 2) {
        FUN_004334e0();
        return;
      }
      FUN_00420b80(0x20000,0,0,0,0);
      return;
    }
  }
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x68))();
  fVar1 = *pfVar6 - *(float *)(param_1 + 0x40);
  fVar3 = pfVar6[1] - *(float *)(param_1 + 0x44);
  fVar2 = pfVar6[2] - *(float *)(param_1 + 0x48);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar1 < 2.0 != (fVar1 == 2.0)) {
    FUN_00aa4080(0x4f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00420b80(0x3000f,0,0,0,0);
    return;
  }
LAB_00434ccc:
  FUN_004334e0();
  return;
}

// 00434D20  FUN_00434d20  size=451  [between]
void __fastcall FUN_00434d20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  
  iVar5 = FUN_00a8c760(4);
  if ((((iVar5 == 0) || (*(int *)(param_1 + 0x61c) == 0)) || (*(int *)(param_1 + 0x12c8) != 0)) ||
     (((byte)DAT_01bea090 & 0x10) != 0)) {
    return;
  }
  sVar4 = FUN_00dde2a0(0,6);
  if ((DAT_018b9174 - 0xa00U < 0x100) && (*(int *)(param_1 + 0x1200) == 0)) {
    uVar6 = FUN_00dde2a0(0,2);
    if (*(int *)(param_1 + 0x108c) < (int)(uVar6 & 0xffff)) {
      FUN_0042d970(0x80003);
    }
    else {
      uVar6 = FUN_00a8cab0();
      if (((uVar6 & 0xffff0000) == 0x80000) && (*(int *)(param_1 + 0x1108) == 0)) {
        if (sVar4 == 0) {
          FUN_004334e0();
        }
        FUN_00420b80(0x20005,0,0,0,0);
      }
    }
  }
  uVar6 = FUN_00a8cab0();
  if ((uVar6 & 0xffff0000) != 0x80000) {
    return;
  }
  if (*(int *)(param_1 + 0x1108) != 0) {
    return;
  }
  iVar5 = FUN_0041d7e0();
  if (iVar5 == 0) {
switchD_00434e29_caseD_4:
  }
  else {
    switch(sVar4) {
    case 0:
    case 1:
      pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x68))();
      fVar1 = *pfVar7 - *(float *)(param_1 + 0x40);
      fVar3 = pfVar7[1] - *(float *)(param_1 + 0x44);
      fVar2 = pfVar7[2] - *(float *)(param_1 + 0x48);
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      if (fVar1 < 2.0 != (fVar1 == 2.0)) {
        FUN_0042d970(0x30013);
        return;
      }
      break;
    case 2:
    case 3:
      pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x68))();
      fVar1 = *pfVar7 - *(float *)(param_1 + 0x40);
      fVar3 = pfVar7[1] - *(float *)(param_1 + 0x44);
      fVar2 = pfVar7[2] - *(float *)(param_1 + 0x48);
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      if (fVar1 < 2.0 != (fVar1 == 2.0)) {
        FUN_0042d970(0x30012);
        return;
      }
      break;
    case 4:
    case 5:
      goto switchD_00434e29_caseD_4;
    default:
      FUN_00420b80(0x30007,0,0,0,0);
      return;
    }
  }
  FUN_004334e0();
  return;
}

// 00434F00  FUN_00434f00  size=1374  [between]
int __fastcall FUN_00434f00(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  int *piVar13;
  int local_c;
  
  piVar13 = (int *)param_1[0x19f];
  piVar4 = piVar13 + param_1[0x1a1] * 0x54;
  local_c = 0;
  do {
    if (piVar13 == piVar4) {
      return local_c;
    }
    iVar5 = FUN_00a8f040(piVar13);
    if (((((iVar5 == 0) && (iVar5 = *piVar13, iVar5 != 0)) && (iVar5 != 1)) &&
        ((iVar5 != 2 && (iVar5 != 0x1b0)))) && (iVar5 != 0x147)) {
      uVar1 = param_1[0x186];
      iVar5 = piVar13[1];
      iVar6 = FUN_00a8ef10();
      if ((iVar6 != 0) || (iVar6 = FUN_00a8c760(9), iVar6 != 0)) {
        return 0;
      }
      piVar11 = (int *)0x0;
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
      }
      if (((0 < param_1[0x21c]) && (piVar11 != (int *)0x0)) &&
         ((*(byte *)(piVar11 + 0x130) & 0x10) != 0)) {
        (**(code **)(*param_1 + 0x21c))(piVar11,(char)piVar13[4],0x3c23d70a,0);
        (**(code **)(*param_1 + 0x220))(0x40000000);
        iVar6 = (**(code **)(*piVar11 + 0x17c))();
        if (iVar6 != 0) {
          (**(code **)(*piVar11 + 0x184))(*piVar13,param_1[0x13c],piVar13);
        }
        iVar6 = piVar13[0x25];
        if (((piVar13[0x23] & 0x40000000U) != 0) || ((*(byte *)((int)piVar13 + 0x92) & 1) != 0)) {
          iVar6 = 1;
        }
        iVar7 = *piVar13;
        if ((iVar7 == 0x5f) || (iVar7 == 0x94)) {
          iVar6 = 0;
        }
        if (iVar7 - 0x7eU < 4) {
          iVar6 = 1;
        }
        if ((((param_1[0x21c] < param_1[0x4ae]) &&
             (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 == 0)) && (iVar6 != 0)) &&
           (param_1[0x2a1] != 0)) {
          (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x21,param_1[0x13c]);
          FUN_00420b80(0x200004,0,0,0,0);
          param_1[0x370] = 1;
          return 0;
        }
        iVar6 = FUN_00a8cab0();
        if (((iVar6 == 0x10000f) && (1 < param_1[0x187])) &&
           ((param_1[0x187] < 4 && (param_1[0x2a1] != 0)))) {
          (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x1b,param_1[0x13c]);
          FUN_00420b80(0x30019,0,0,0,0);
          return 0;
        }
        iVar6 = FUN_00ac4780();
        if ((((0 < iVar6) && (iVar6 = FUN_00a8cbe0(0x30029), iVar6 == 0)) &&
            ((iVar6 = (**(code **)(*param_1 + 0x1fc))(), iVar6 == 0 &&
             ((((iVar6 = *piVar13, iVar6 == 0x4a || (iVar6 == 0x4b)) || (iVar6 == 0x4c)) ||
              (iVar6 == 0x4d)))))) && (iVar6 = FUN_00a81330(), iVar6 != 0)) {
          uVar8 = FUN_00a7c8a0();
          piVar9 = (int *)FUN_00412580(uVar8);
          if ((piVar9 != (int *)0x0) &&
             (iVar6 = (**(code **)(*piVar9 + 0x14c))(0x1b,param_1[0x13c]), iVar6 != 0)) {
            (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x1b,param_1[0x13c]);
            FUN_00420b80(0x30019,0,0,0,0);
            return 1;
          }
        }
      }
      param_1[0x432] = param_1[0x432] + iVar5;
      pcVar2 = *(code **)(*param_1 + 0x198);
      param_1[0x433] = param_1[0x433] + 1;
      (*pcVar2)(piVar11,piVar13,1);
      bVar12 = false;
      if ((((piVar13[0x24] & 0x8000U) != 0) || (*piVar13 == 0x57)) || (*piVar13 == 0x55)) {
        bVar12 = true;
      }
      uVar8 = FUN_00fdbc60();
      if ((piVar13[0x23] & 0x200U) != 0) {
        uVar8 = FUN_00fdbc60();
      }
      (**(code **)(*param_1 + 0x30c))(uVar8,0);
      if (*piVar13 != 0x4f) {
        iVar5 = FUN_00a8c760(0x10);
        if (iVar5 != 0) {
          return 0;
        }
        uVar10 = FUN_0041bb20();
        if (param_1[0x433] < (int)(uVar10 & 0xffff)) {
          return 0;
        }
        iVar5 = FUN_00a8c760(0x37);
        if ((iVar5 != 0) && (*piVar13 != 0x2f)) {
          return 0;
        }
      }
      iVar5 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar5 != 0) {
        FUN_00420b80(0x40010,0,0,0,0);
        return 1;
      }
      uVar10 = FUN_0041bb20();
      if (param_1[0x433] <= (int)(uVar10 & 0xffff)) {
        return 0;
      }
      if (bVar12) {
        return 0;
      }
      if ((piVar13[0x24] & 0x2000000U) == 0) {
        if (local_c == 0) {
          if (param_1[0x432] < 0x96) {
            if (0x4a < param_1[0x432]) {
              sVar3 = FUN_00dde2a0(0,2);
              if (sVar3 == 0) {
                if (param_1[0x442] == 0) {
                  FUN_00420b80(0x10008,0,0,0,0);
                }
              }
              else if (sVar3 != 1) goto LAB_0043532e;
LAB_00435327:
              FUN_004334e0();
            }
          }
          else if (param_1[0x442] == 0) goto LAB_00435327;
LAB_0043532e:
          iVar5 = FUN_0041bb80();
          if ((iVar5 != 0) && ((uVar1 & 0xffff0000) != 0x80000)) {
            switch(param_1[0x441]) {
            case 0:
            case 1:
            case 2:
            case 3:
              FUN_00420b80(0x4000d,0,0,0,0);
              goto LAB_00435369;
            }
          }
        }
      }
      else {
        FUN_00420b80(0x4000e,0,0,0,0);
        if (piVar11 != (int *)0x0) {
          FUN_00a8e880(piVar11 + 0x10);
          (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
        }
LAB_00435369:
        local_c = 1;
      }
    }
    piVar13 = piVar13 + 0x54;
  } while( true );
}

// 00435470  FUN_00435470  size=762  [between]
void __fastcall FUN_00435470(int param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  
  fVar1 = *(float *)(param_1 + 0xa9c) * 57.29578;
  if ((!NAN(fVar1) && 90.0 < fVar1 != (fVar1 == 90.0)) || (fVar1 < -90.0 != (fVar1 == -90.0))) {
    switch(*(undefined4 *)(param_1 + 0x1104)) {
    case 0:
    case 2:
      uVar4 = 0x20008;
      break;
    case 1:
    case 3:
      uVar4 = 0x20009;
      break;
    default:
      goto switchD_004354aa_default;
    }
    FUN_00420b80(uVar4,0,0,0,0);
  }
switchD_004354aa_default:
  iVar3 = FUN_00ac8120();
  if (iVar3 != 0) {
    uVar4 = FUN_00a8cab0();
    switch(uVar4) {
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      FUN_00420b80(0x30029,0,0,0,0);
      return;
    }
  }
  fVar1 = *(float *)(param_1 + 0xa9c) * 57.29578;
  if (((fVar1 < 90.0) && (-90.0 < fVar1)) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    iVar3 = *(int *)(param_1 + 0x1108);
    if (iVar3 == 0) {
      FUN_0042e9d0();
    }
    else if (iVar3 == 1) {
      uVar2 = FUN_00dde2a0(0,5);
      if (uVar2 < 4) {
        FUN_0042e9d0();
      }
      else {
LAB_004355a3:
        if (0xff < DAT_018b9174 - 0xa00U) {
          FUN_00420b80(0x20006,0,0,0,0);
        }
      }
    }
    else if (iVar3 == 2) {
      uVar2 = FUN_00dde2a0(0,3);
      if (2 < uVar2) goto LAB_004355a3;
      FUN_0042e9d0();
    }
  }
  if ((*(int *)(param_1 + 0x1108) == 0) && (iVar3 = FUN_0041d7e0(), iVar3 != 0)) {
    iVar3 = *(int *)(param_1 + 0x1084);
    if ((iVar3 == 0x80002) || (iVar3 == 0x80001)) {
      if (((byte)DAT_01b7b914 & 0xc0) == 0) {
        FUN_0042d970(0x80008);
        return;
      }
      if (iVar3 != 0x8000a) {
        if (iVar3 != 0x80009) {
          return;
        }
        if (1 < *(int *)(param_1 + 0x108c)) {
          FUN_00420b80(0x80008,0,0,0,0);
        }
        FUN_00420b80(0x8000a,0,0,0,0);
        return;
      }
      if (1 < *(int *)(param_1 + 0x108c)) {
        FUN_00420b80(0x80008,0,0,0,0);
      }
      FUN_00420b80(0x80009,0,0,0,0);
      return;
    }
    if (iVar3 == 0x4000d) {
      uVar4 = 0x80008;
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        if ((1 < *(int *)(param_1 + 0x108c)) && ((iVar3 == 0x80009 || (iVar3 == 0x8000a)))) {
          FUN_00420b80(0x80008,0,0,0,0);
        }
        uVar4 = 0x80009;
        break;
      case 1:
      case 3:
        if ((1 < *(int *)(param_1 + 0x108c)) && ((iVar3 == 0x80009 || (iVar3 == 0x8000a)))) {
          FUN_00420b80(0x80008,0,0,0,0);
        }
        uVar4 = 0x8000a;
        break;
      default:
        goto switchD_0043565e_default;
      }
    }
    FUN_00420b80(uVar4,0,0,0,0);
  }
switchD_0043565e_default:
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 004357E0  Em0020::vf40  size=1168  [class]
undefined4 __fastcall Em0020::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x20;
    if (((byte)DAT_01bea090 & 0x10) == 0) {
      uVar2 = FUN_00c5def0(*(undefined4 *)(param_1 + 0x4f0));
      *(undefined4 *)(param_1 + 0x970) = uVar2;
      FUN_00405230();
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0,&local_90,0,0x42c80000,0x3f800000,0,0);
      FUN_00c57830(local_80);
      *(undefined4 *)(param_1 + 0x6c4) = 0;
      *(undefined4 *)(param_1 + 0x6d0) = 0;
      *(undefined4 *)(param_1 + 0x6d4) = 0;
      *(undefined4 *)(param_1 + 0x6d8) = 0;
      *(undefined4 *)(param_1 + 0x6dc) = local_84;
      *(undefined4 *)(param_1 + 0x6ec) = 1;
      *(undefined4 *)(param_1 + 0x6e8) = 0x3fc00000;
      *(undefined4 *)(param_1 + 0x6e4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x6e0) = 5;
    }
    if (*(int *)(param_1 + 0x75c) != 0) {
      FUN_00aa4080(0x23,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    *(undefined4 *)(param_1 + 0xf90) = 0;
    iVar1 = FUN_00430f60();
    if (iVar1 != 0) {
      FUN_0041ff10();
      FUN_0041d070();
      uVar2 = 0;
      FUN_00a92fb0(0);
      FUN_00e08640(uVar2);
      *(undefined4 *)(param_1 + 0x10c0) = 0;
      *(undefined4 *)(param_1 + 0x10bc) = 0;
      *(undefined4 *)(param_1 + 0x10c4) = 0;
      *(undefined4 *)(param_1 + 0x108c) = 0;
      *(undefined4 *)(param_1 + 0x1110) = 0;
      *(undefined4 *)(param_1 + 0x1120) = 0;
      *(undefined4 *)(param_1 + 0x1124) = 0;
      *(undefined4 *)(param_1 + 0x1128) = 0;
      *(undefined4 *)(param_1 + 0x112c) = local_84;
      *(undefined4 *)(param_1 + 0x1130) = 0;
      *(undefined4 *)(param_1 + 0x1180) = 0;
      uVar3 = FUN_00dde2a0(1,3);
      *(uint *)(param_1 + 0x10b0) = uVar3 & 0xffff;
      *(undefined4 *)(param_1 + 0x890) = 0;
      *(undefined4 *)(param_1 + 0x894) = 0;
      *(undefined4 *)(param_1 + 0x898) = 0;
      *(undefined4 *)(param_1 + 0x89c) = local_84;
      *(undefined4 *)(param_1 + 0x1400) = 0;
      *(undefined2 *)(param_1 + 0x10a0) = 0;
      *(undefined4 *)(param_1 + 0x109c) = 0x3e4ccccd;
      *(undefined4 *)(param_1 + 0x878) = 1;
      *(undefined4 *)(param_1 + 0x1210) = 0;
      *(undefined4 *)(param_1 + 0x1088) = 0;
      *(undefined4 *)(param_1 + 0x10f0) = 0;
      *(undefined4 *)(param_1 + 0x10f4) = 0;
      *(undefined4 *)(param_1 + 0x10f8) = 0;
      *(undefined4 *)(param_1 + 0x10fc) = local_84;
      *(undefined4 *)(param_1 + 0x1100) = 0;
      *(undefined4 *)(param_1 + 0x1218) = 0;
      *(undefined4 *)(param_1 + 0x1484) = 0;
      *(undefined4 *)(param_1 + 0x1240) = 0;
      *(undefined4 *)(param_1 + 0x1244) = 0x40e00000;
      *(undefined4 *)(param_1 + 0x1248) = 0xc21a6666;
      *(undefined4 *)(param_1 + 0x124c) = local_84;
      *(undefined4 *)(param_1 + 0x1250) = 0;
      *(undefined4 *)(param_1 + 0x1254) = 0x40e00000;
      *(undefined4 *)(param_1 + 0x1258) = 0xc2a93333;
      *(undefined4 *)(param_1 + 0x125c) = local_84;
      *(undefined4 *)(param_1 + 0x1260) = 0;
      *(undefined2 *)(param_1 + 0x11ac) = 0;
      *(undefined4 *)(param_1 + 0x11b0) = 0;
      *(undefined4 *)(param_1 + 0x10cc) = 0;
      *(undefined4 *)(param_1 + 0x1230) = 0;
      *(undefined4 *)(param_1 + 0x11b4) = 0x3f99999a;
      *(undefined4 *)(param_1 + 0x10b8) = 0;
      *(undefined4 *)(param_1 + 0x10d0) = 0;
      *(undefined4 *)(param_1 + 0x10ac) = 0;
      *(undefined4 *)(param_1 + 0x1224) = 0x42f00000;
      *(undefined4 *)(param_1 + 0x1090) = 0x3e2e147b;
      *(undefined4 *)(param_1 + 0x1094) = 0x3c23d70a;
      FUN_00418280();
      FUN_00431700();
      *(undefined4 *)(param_1 + 0x141c) = 0x40000000;
      *(undefined4 *)(param_1 + 0x14b4) = 0x42700000;
      *(undefined4 *)(param_1 + 0x1234) = 0;
      *(undefined4 *)(param_1 + 0x1238) = 0;
      *(undefined4 *)(param_1 + 0x10b4) = 0;
      *(undefined4 *)(param_1 + 0xfa4) = 0;
      *(undefined2 *)(param_1 + 0x14b2) = 0;
      FUN_00410540(0x10,&DAT_01b7bd48);
      *(undefined4 *)(param_1 + 0x1178) = 0;
      *(undefined4 *)(param_1 + 0x1174) = 0;
      *(undefined4 *)(param_1 + 0x1170) = 0;
      *(undefined4 *)(param_1 + 0x116c) = 0;
      *(undefined4 *)(param_1 + 0x1164) = 0;
      *(undefined4 *)(param_1 + 0x1160) = 0;
      *(undefined4 *)(param_1 + 0x115c) = 0;
      *(undefined4 *)(param_1 + 0x1158) = 0;
      *(undefined4 *)(param_1 + 0x1150) = 0;
      *(undefined4 *)(param_1 + 0x114c) = 0;
      *(undefined4 *)(param_1 + 0x1148) = 0;
      *(undefined4 *)(param_1 + 0x1144) = 0;
      *(undefined4 *)(param_1 + 0x117c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1168) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1154) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1140) = 0x3f800000;
      iVar1 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(iVar1);
      *(undefined4 *)(param_1 + 0x110c) = 0;
      *(undefined4 *)(param_1 + 0x1108) = 0;
      FUN_00416f50();
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffefffff;
      if (*(int *)(param_1 + 0x754) != 0) {
        *(undefined4 *)(param_1 + 0x14cc) = 0;
        *(undefined4 *)(param_1 + 0x14e4) = 0;
        fVar4 = (float10)FUN_00ac8570(0x57);
        *(float *)(param_1 + 0x14bc) = (float)(fVar4 * (float10)60.0);
        fVar4 = (float10)FUN_00ac8570(0x58);
        *(float *)(param_1 + 0x14c0) = (float)(fVar4 * (float10)60.0);
        *(float *)(param_1 + 0x14c4) = (float)((float10)*(float *)(param_1 + 0x14bc) * (float10)2.0)
        ;
        *(float *)(param_1 + 0x14c8) = (float)((float10)2.0 * fVar4 * (float10)60.0);
        fVar4 = (float10)FUN_00ac8570(0x5d);
        *(float *)(param_1 + 0x14dc) = (float)fVar4;
        uVar2 = FUN_00ac8660(0,0x5e);
        *(undefined4 *)(param_1 + 0x14e0) = uVar2;
        fVar4 = (float10)FUN_00ac8570(0x59);
        *(float *)(param_1 + 0x14d0) = (float)fVar4;
        fVar4 = (float10)FUN_00ac8570(0x5b);
        *(float *)(param_1 + 0x14d4) = (float)fVar4;
        fVar4 = (float10)FUN_00ac8570(0x5a);
        *(float *)(param_1 + 0x14d8) = (float)fVar4;
        fVar4 = (float10)FUN_00ac8570(99);
        *(float *)(param_1 + 0x14e8) = (float)fVar4;
      }
      return 1;
    }
  }
  return 0;
}

// 00435C70  Em0020::vf50  size=64  [class]
void __fastcall Em0020::vf50(int param_1)

{
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  FUN_0041c670();
  if (*(int *)(param_1 + 0x1068) != 1) {
    FUN_004320f0();
    if (*(int *)(param_1 + 0x7b0) != 0) {
      FUN_008f3cb0(param_1);
    }
    BehaviorEmBase::vf128();
    return;
  }
  return;
}

// 00435CB0  FUN_00435cb0  size=261  [between]
void __fastcall FUN_00435cb0(int param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  uVar1 = FUN_00a8cab0();
  iVar2 = FUN_00431850(uVar1 & 0xffff0000);
  if (iVar2 == 0) {
    return;
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    FUN_00432330(uVar1 & 0xffff0000);
    return;
  }
  if (*(int *)(param_1 + 0x1108) == 0) {
LAB_00435d12:
    FUN_00431910();
  }
  else {
    if (*(int *)(param_1 + 0x1370) == 0) goto LAB_00435d26;
    if (*(int *)(param_1 + 0x1108) != 2) goto LAB_00435d12;
  }
  if (*(int *)(param_1 + 0x1370) != 0) {
    return;
  }
LAB_00435d26:
  if (((225.0 < *(float *)(param_1 + 0xa8c)) && (*(int *)(param_1 + 0x618) != 0x10003)) &&
     (*(int *)(param_1 + 0x618) != 0x3000c)) {
    fVar3 = (float10)FUN_00ddba30(*(float *)(*(int *)(param_1 + 0xa84) + 0x94) -
                                  *(float *)(param_1 + 0x94));
    if ((fVar3 * (float10)57.29578 < (float10)100.0) &&
       ((float10)-100.0 < fVar3 * (float10)57.29578)) {
      FUN_00420b80(0x10003,0,0,0,0);
      *(undefined4 *)(param_1 + 0x1380) = 0x40c00000;
      return;
    }
  }
  return;
}

// 00435DC0  FUN_00435dc0  size=1343  [between]
void __fastcall FUN_00435dc0(int *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  
  bVar2 = false;
  if (SQRT(((float)param_1[0x12] - (float)param_1[0x41e]) *
           ((float)param_1[0x12] - (float)param_1[0x41e]) +
           ((float)param_1[0x11] - (float)param_1[0x41d]) *
           ((float)param_1[0x11] - (float)param_1[0x41d]) +
           ((float)param_1[0x10] - (float)param_1[0x41c]) *
           ((float)param_1[0x10] - (float)param_1[0x41c])) <= 60.0) {
    param_1[0x420] = 0;
  }
  else {
    param_1[0x420] = 1;
  }
  if ((param_1[0x4e6] == 0) && ((int *)param_1[0x2a1] != (int *)0x0)) {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar8);
    if (iVar4 != 0) {
      FUN_00b7eba0(param_1[0x13c]);
      param_1[0x4e6] = 1;
    }
  }
  if (param_1[0x4dc] != 0) {
    FUN_00c52770(param_1[0x4de],0x40000000);
    FUN_00c52700(param_1[0x4de],0);
    param_1[0x4c8] = 0;
    return;
  }
  iVar4 = FUN_00a8cab0();
  if ((iVar4 == 0x30025) && (param_1[0x4e4] == 0)) {
    return;
  }
  if ((DAT_01bea060 & 0x42000000) != 0) {
    return;
  }
  if (param_1[0x4b2] != 0) {
    fVar1 = (float)param_1[0x439];
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      param_1[0x439] = -0x40800000;
      return;
    }
    param_1[0x439] = (int)((float)param_1[0x439] - (float)param_1[0x244]);
    iVar4 = FUN_004171e0();
    if (iVar4 != 0) {
      return;
    }
    if (param_1[0x370] != 1) {
      return;
    }
    param_1[0x4e9] = 1;
    return;
  }
  if (param_1[0x21c] <= param_1[0x4ae]) {
    uVar5 = FUN_00a8cab0();
    iVar4 = FUN_0041d920(uVar5);
    if ((iVar4 == 0) && (iVar4 = FUN_004171e0(), iVar4 == 0)) {
      fVar1 = (float)param_1[0x371];
      iVar4 = param_1[0x370];
      if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
        if (iVar4 == 0) {
          param_1[0x370] = 1;
          if (((param_1[0x442] != 2) && (iVar4 = (**(code **)(*param_1 + 0x1d8))(), iVar4 == 0)) &&
             (iVar4 = FUN_00a8cbe0(0x3001a), iVar4 == 0)) {
            FUN_00420b80(0x1000a,0,0,0,0);
          }
          param_1[0x371] = 0x44960000;
          param_1[0x248] = 0;
          param_1[0x4df] = 0;
        }
        else if (iVar4 == 1) {
          param_1[0x370] = 0;
          param_1[0x371] = 0x43160000;
          param_1[0x248] = 0;
          param_1[0x4df] = 0;
        }
        param_1[0x4ea] = 0;
      }
      else {
        param_1[0x371] = (int)((float)param_1[0x371] - (float)param_1[0x244]);
        if (((iVar4 == 1) && (param_1[0x442] == 0)) &&
           ((iVar4 = FUN_00a8c760(4), iVar4 != 0 &&
            ((iVar4 = FUN_00a8cab0(), iVar4 != 0x80006 && (param_1[0x421] != 0x80006)))))) {
          FUN_00420b80(0x80006,0,0,0,0);
        }
      }
    }
  }
  bVar3 = false;
  fVar1 = (float)param_1[0x439];
  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
    param_1[0x439] = -0x40800000;
  }
  else {
    param_1[0x439] = (int)((float)param_1[0x439] - (float)param_1[0x244]);
    iVar4 = FUN_004171e0();
    if ((iVar4 == 0) && (bVar3 = true, param_1[0x370] == 1)) {
      param_1[0x4e9] = 1;
    }
  }
  iVar4 = FUN_00a8cab0();
  if (iVar4 == 0x4000c) {
    bVar3 = false;
  }
  uVar6 = FUN_00a8cab0();
  uVar6 = uVar6 & 0xffff0000;
  if ((int)uVar6 < 0x60001) {
    if (uVar6 != 0x60000) {
      if (0x30000 < (int)uVar6) {
        if (uVar6 == 0x40000) {
          param_1[0x4df] = 0;
          param_1[0x43b] = 0;
          bVar2 = true;
          iVar4 = FUN_00a8cab0();
          if (iVar4 == 0x40013) {
            param_1[0x437] = param_1[0x438];
          }
          goto LAB_004361c7;
        }
        bVar7 = uVar6 == 0x50000;
        goto LAB_004361ae;
      }
      if (uVar6 == 0x30000) goto LAB_004361b0;
      if (uVar6 != 0x10000) {
        if (uVar6 != 0x20000) goto LAB_004361c7;
        fVar1 = (float)param_1[0x4df] - (float)param_1[0x244];
        goto LAB_004361b2;
      }
      goto LAB_004361b8;
    }
LAB_00436188:
    param_1[0x4df] = 0;
  }
  else {
    if ((int)uVar6 < 0x100001) {
      if (uVar6 == 0x100000) {
        param_1[0x437] = param_1[0x438];
        param_1[0x4df] = 0;
        goto LAB_004361c7;
      }
      if (uVar6 == 0x70000) goto LAB_004361b0;
      if (uVar6 != 0x80000) goto LAB_004361c7;
      goto LAB_00436188;
    }
    bVar7 = uVar6 == 0x200000;
LAB_004361ae:
    if (!bVar7) goto LAB_004361c7;
LAB_004361b0:
    fVar1 = 0.0;
LAB_004361b2:
    param_1[0x4df] = (int)fVar1;
LAB_004361b8:
    bVar2 = true;
  }
  param_1[0x43b] = 0;
LAB_004361c7:
  if (((param_1[0x43a] == 0) || (iVar4 = FUN_00a8e520(), iVar4 == 0)) &&
     (iVar4 = FUN_00a8cab0(), iVar4 != 0x200008)) {
    FUN_00c52770(param_1[0x4de],0x40000000);
    FUN_00c52700(param_1[0x4de],0);
    param_1[0x4c8] = 0;
  }
  fVar1 = (float)param_1[0x439];
  if ((NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) && (iVar4 = FUN_00a8e520(), iVar4 == 0)) {
    param_1[0x43a] = 0;
  }
  if (uVar6 != 0x40000) {
    param_1[0x43a] = 0;
  }
  if (((bVar2) && (param_1[0x4ae] < param_1[0x21c])) &&
     (fVar1 = (float)param_1[0x437], param_1[0x437] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] <= 0.0)) {
    param_1[0x437] = param_1[0x438];
    param_1[0x436] = param_1[0x4b3];
  }
  if (((bVar3) && (uVar6 == 0x40000)) && (iVar4 = (**(code **)(*param_1 + 0x1d8))(), iVar4 == 0)) {
    if (param_1[0x442] != 0) {
      if (param_1[0x442] == 1) {
        FUN_00420b80(0x1000a,0,0,0,0);
        return;
      }
      FUN_004334e0();
      return;
    }
    FUN_00420b80(0x80006,0,0,0,0);
  }
  return;
}

// 00436300  FUN_00436300  size=192  [between]
void __fastcall FUN_00436300(int param_1)

{
  short sVar1;
  int iVar2;
  
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
  if (*(int *)(param_1 + 0x1220) == 0) {
    if ((((DAT_018b9174 - 0xa00U < 0x100) && (*(int *)(param_1 + 0x1200) == 0)) &&
        (sVar1 = FUN_00dde2a0(5,7),
        (float)(ushort)(sVar1 * 100) < *(float *)(param_1 + 0x920) !=
        ((float)(ushort)(sVar1 * 100) == *(float *)(param_1 + 0x920)))) &&
       (*(int *)(param_1 + 0x61c) == 3)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    if ((*(int *)(param_1 + 0x1108) != 0) && (iVar2 = FUN_00418510(), iVar2 == 0)) {
      return;
    }
    if (*(int *)(param_1 + 0x61c) == 3) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
  }
  else if (*(float *)(param_1 + 0xa8c) < 1.5) {
    FUN_004334e0();
    return;
  }
  return;
}

// 004363C0  FUN_004363c0  size=787  [between]
void __fastcall FUN_004363c0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = FUN_00a8cac0();
  if (iVar5 == 0) {
    return;
  }
  iVar5 = FUN_00a8c760(4);
  if (iVar5 == 0) {
    return;
  }
  if ((DAT_018b9174 - 0xa00U < 0x100) && (((byte)DAT_01bea090 & 0x10) != 0)) {
    FUN_00420b80(0x10000,0,0,0,0);
  }
  iVar5 = FUN_00422950();
  if (iVar5 != 0) {
    return;
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    fVar1 = 40.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x137c);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      sVar3 = FUN_00dde2a0(0,1);
      if (sVar3 == 0) {
        FUN_00420b80(0x20003,0,0,0,0);
        return;
      }
      if (sVar3 != 1) {
        return;
      }
      FUN_00420b80(0x20004,0,0,0,0);
      return;
    }
    fVar1 = 90.0;
  }
  fVar2 = *(float *)(param_1 + 0xa9c) * 57.29578;
  if ((fVar1 <= fVar2) || (fVar2 <= fVar1 * -1.0)) {
    if (DAT_018b9174 - 0xa00U < 0x100) {
      uVar6 = 0x20001;
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        uVar6 = 0x20003;
        break;
      case 1:
      case 3:
        uVar6 = 0x20004;
        break;
      default:
        goto switchD_004364ed_default;
      }
    }
    FUN_00420b80(uVar6,0,0,0,0);
  }
switchD_004364ed_default:
  fVar2 = *(float *)(param_1 + 0xa9c) * 57.29578;
  if (((fVar2 < fVar1) && (fVar1 * -1.0 < fVar2)) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1d8))();
    if (iVar5 != 0) {
      FUN_00420b80(0x3001a,0,0,0,0);
    }
    iVar5 = *(int *)(param_1 + 0x1108);
    if (iVar5 == 0) {
      FUN_004334e0();
    }
    else if (iVar5 == 1) {
      uVar4 = FUN_00dde2a0(0,5);
      if (uVar4 < 4) {
        FUN_004334e0();
      }
      else {
LAB_004365cd:
        if (0xff < DAT_018b9174 - 0xa00U) {
          FUN_00420b80(0x20001,0,0,0,0);
        }
      }
    }
    else if (iVar5 == 2) {
      uVar4 = FUN_00dde2a0(0,3);
      if (2 < uVar4) goto LAB_004365cd;
      FUN_004334e0();
    }
  }
  if ((*(int *)(param_1 + 0x1108) == 0) && (iVar5 = FUN_0041d7e0(), iVar5 != 0)) {
    iVar5 = *(int *)(param_1 + 0x1084);
    if ((iVar5 == 0x80002) || (iVar5 == 0x80001)) {
      if (((byte)DAT_01b7b914 & 0xc0) == 0) {
        FUN_0042d970(0x80003);
        return;
      }
      if (iVar5 != 0x80002) {
        if (iVar5 != 0x80001) {
          return;
        }
        FUN_0041be30(0x80002);
        return;
      }
      FUN_0041be30(0x80001);
      return;
    }
    if (iVar5 == 0x40000) {
      uVar6 = 0x80000;
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        uVar6 = 0x80001;
        break;
      case 1:
      case 3:
        uVar6 = 0x80002;
        break;
      default:
        goto switchD_0043667a_default;
      }
    }
    FUN_0041be30(uVar6);
  }
switchD_0043667a_default:
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 00437160  FUN_00437160  size=839  [between]
void __fastcall FUN_00437160(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if ((DAT_018b9174 - 0xa00U < 0x100) && (((byte)DAT_01bea090 & 0x10) != 0)) {
    FUN_00420b80(0x10000,0,0,0,0);
  }
  iVar5 = 1;
  if (DAT_018b9174 - 0xa00U < 0x100) {
    uVar6 = FUN_00418510();
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      iVar5 = 0;
    }
  }
  fVar1 = *(float *)(param_1 + 0x93c) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x93c) = fVar1;
  if (((fVar1 <= 0.0) && (iVar5 != 0)) && (iVar5 = FUN_00422950(), iVar5 != 0)) {
    return;
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    fVar1 = 40.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x137c);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      sVar3 = FUN_00dde2a0(0,1);
      if (sVar3 == 0) {
        FUN_00420b80(0x20003,0,0,0,0);
        return;
      }
      if (sVar3 != 1) {
        return;
      }
      FUN_00420b80(0x20004,0,0,0,0);
      return;
    }
    fVar1 = 90.0;
  }
  fVar2 = *(float *)(param_1 + 0xa9c) * 57.29578;
  if ((fVar1 <= fVar2) || (fVar2 <= fVar1 * -1.0)) {
    if (DAT_018b9174 - 0xa00U < 0x100) {
      uVar7 = 0x20001;
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        uVar7 = 0x20003;
        break;
      case 1:
      case 3:
        uVar7 = 0x20004;
        break;
      default:
        goto switchD_004372c1_default;
      }
    }
    FUN_00420b80(uVar7,0,0,0,0);
  }
switchD_004372c1_default:
  fVar2 = *(float *)(param_1 + 0xa9c) * 57.29578;
  if (((fVar2 < fVar1) && (fVar1 * -1.0 < fVar2)) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1d8))();
    if (iVar5 != 0) {
      FUN_00420b80(0x3001a,0,0,0,0);
    }
    iVar5 = *(int *)(param_1 + 0x1108);
    if (iVar5 == 0) {
      FUN_004334e0();
    }
    else if (iVar5 == 1) {
      uVar4 = FUN_00dde2a0(0,5);
      if (uVar4 < 4) {
        FUN_004334e0();
      }
      else {
LAB_004373a1:
        if (0xff < DAT_018b9174 - 0xa00U) {
          FUN_00420b80(0x20001,0,0,0,0);
        }
      }
    }
    else if (iVar5 == 2) {
      uVar4 = FUN_00dde2a0(0,3);
      if (2 < uVar4) goto LAB_004373a1;
      FUN_004334e0();
    }
  }
  if ((*(int *)(param_1 + 0x1108) == 0) && (iVar5 = FUN_0041d7e0(), iVar5 != 0)) {
    iVar5 = *(int *)(param_1 + 0x1084);
    if ((iVar5 == 0x80002) || (iVar5 == 0x80001)) {
      if (((byte)DAT_01b7b914 & 0xc0) == 0) {
        FUN_0042d970(0x80003);
        return;
      }
      if (iVar5 != 0x80002) {
        if (iVar5 != 0x80001) {
          return;
        }
        FUN_0041be30(0x80002);
        return;
      }
      FUN_0041be30(0x80001);
      return;
    }
    if (iVar5 == 0x40000) {
      uVar7 = 0x80000;
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x1104)) {
      case 0:
      case 2:
        uVar7 = 0x80001;
        break;
      case 1:
      case 3:
        uVar7 = 0x80002;
        break;
      default:
        goto switchD_0043744e_default;
      }
    }
    FUN_0041be30(uVar7);
  }
switchD_0043744e_default:
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 004374D0  FUN_004374d0  size=199  [between]
void __fastcall FUN_004374d0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_00422950();
  if (iVar3 == 0) {
    if (param_1[0x442] == 0) {
      FUN_004334e0();
    }
    uVar1 = FUN_00dde2a0(0,3);
    if (uVar1 < 2) {
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_004334e0();
        return;
      }
    }
    else if (param_1[0x442] == 2) {
      if (DAT_018b9174 - 0xa00U < 0x100) {
        if ((float)param_1[0x2a8] <= 0.5235988) {
                    /* WARNING: Could not recover jumptable at 0x00437554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
      else {
        sVar2 = FUN_00dde2a0(0,1);
        if (sVar2 == 0) {
          FUN_00420b80(0x20003,0,0,0,0);
        }
        else if (sVar2 == 1) {
          FUN_00420b80(0x20004,0,0,0,0);
          return;
        }
      }
    }
  }
  return;
}

// 004375A0  FUN_004375a0  size=246  [between]
void __fastcall FUN_004375a0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = FUN_00422950();
  if (iVar4 == 0) {
    if (DAT_018b9174 - 0xa00U < 0x100) {
      fVar1 = 20.0;
    }
    else {
      fVar1 = 90.0;
    }
    fVar2 = *(float *)(param_1 + 0xa9c) * 57.29578;
    if (((fVar2 < fVar1) && (fVar1 * -1.0 < fVar2)) && (*(int *)(param_1 + 0x61c) == 3)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    sVar3 = FUN_00dde2d0(0,2);
    if (((int)sVar3 < *(int *)(param_1 + 0x10cc)) && (*(int *)(param_1 + 0x1108) == 0)) {
      iVar4 = FUN_0041d7e0();
      if (iVar4 == 0) {
        iVar4 = FUN_00a94ce0(0);
        if (iVar4 != 0) {
          FUN_004334e0();
          return;
        }
      }
      else if (*(int *)(param_1 + 0x1084) == 0x40000) {
        FUN_0041be30(0x80000);
      }
      else {
        switch(*(undefined4 *)(param_1 + 0x1104)) {
        case 0:
        case 2:
          FUN_0041be30(0x80001);
          return;
        case 1:
        case 3:
          FUN_0041be30(0x80002);
          return;
        }
      }
    }
  }
  return;
}

// 004376B0  FUN_004376b0  size=246  [between]
void __fastcall FUN_004376b0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = FUN_00422950();
  if (iVar4 == 0) {
    if (DAT_018b9174 - 0xa00U < 0x100) {
      fVar1 = 20.0;
    }
    else {
      fVar1 = 90.0;
    }
    fVar2 = *(float *)(param_1 + 0xa9c) * 57.29578;
    if (((fVar2 < fVar1) && (fVar1 * -1.0 < fVar2)) && (*(int *)(param_1 + 0x61c) == 3)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    sVar3 = FUN_00dde2d0(0,2);
    if (((int)sVar3 < *(int *)(param_1 + 0x10cc)) && (*(int *)(param_1 + 0x1108) == 0)) {
      iVar4 = FUN_0041d7e0();
      if (iVar4 == 0) {
        iVar4 = FUN_00a94ce0(0);
        if (iVar4 != 0) {
          FUN_004334e0();
          return;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1084) == 0x40000) {
          FUN_0042d970(0x80000);
          return;
        }
        switch(*(undefined4 *)(param_1 + 0x1104)) {
        case 0:
        case 2:
          FUN_0041be30(0x80001);
          break;
        case 1:
        case 3:
          FUN_0041be30(0x80002);
          return;
        }
      }
    }
  }
  return;
}

// 004377C0  FUN_004377c0  size=155  [between]
void __fastcall FUN_004377c0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 0x874) = 3000;
  *(undefined4 *)(param_1 + 0x870) = 3000;
  if (((DAT_01bea060 & 0x42000000) == 0) && (FUN_00432480(), ((byte)DAT_01bea090 & 0x10) != 0)) {
    *(float *)(param_1 + 0x123c) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x123c);
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      puVar2 = &DAT_01be9db8;
      (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar2);
      if ((iVar1 != 0) &&
         (((iVar1 = FUN_00a8cab0(), iVar1 == 0xc9 || (iVar1 = FUN_00a8cab0(), iVar1 == 0xca)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0xcb)))) {
        *(undefined4 *)(param_1 + 0x120c) = 1;
      }
    }
  }
  return;
}

// 00437860  FUN_00437860  size=49  [between]
void __fastcall FUN_00437860(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a8c760(4);
    if ((iVar1 != 0) && ((*(int *)(param_1 + 0xdc0) == 1 || (*(int *)(param_1 + 0xdc0) == 2)))) {
      FUN_004334e0();
      return;
    }
  }
  return;
}

// 004378A0  Em0020::vf32C  size=3972  [class]
undefined4 __fastcall Em0020::vf32C(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  int unaff_EBX;
  int *unaff_EDI;
  float10 fVar14;
  int iStack_f4;
  int *local_f0;
  int *piStack_ec;
  int local_e8;
  int local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  int local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if (((DAT_01bea060 & 0x42000000) == 0) && (param_1[0x41a] != 1)) {
    iVar9 = param_1[0x2a1];
    local_c4 = 0;
    if (iVar9 != 0) {
      fVar1 = *(float *)(iVar9 + 0x40) - (float)param_1[0x10];
      fVar2 = *(float *)(iVar9 + 0x48) - (float)param_1[0x12];
      if (fVar2 * fVar2 + fVar1 * fVar1 < 100.0) {
        param_1[0x1bb] = 1;
      }
      iVar9 = FUN_00a8cab0();
      if (iVar9 != 0x60000) {
        param_1[0x1a1] = 0;
        FUN_00ac2080(0);
        if (param_1[0x139] == 0) {
          if (param_1[0x4dc] != 0) {
            uVar10 = FUN_00434f00();
            return uVar10;
          }
          if ((((0xff < DAT_018b9174 - 0xa00U) || (param_1[0x4fb] == 0)) ||
              (iVar9 = FUN_00a8cab0(), iVar9 < 0x3000a)) ||
             (iVar9 = FUN_00a8cab0(), 0x3000c < iVar9)) {
            local_f0 = (int *)param_1[0x19f];
            local_a8 = 0;
            if (local_f0 != local_f0 + param_1[0x1a1] * 0x54) {
              do {
                iVar9 = FUN_004025b0();
                if (iVar9 != 0) {
                  local_e8 = local_f0[1];
                  iVar9 = FUN_00a8f040(local_f0);
                  if (iVar9 == 0) {
                    local_c8 = FUN_0041c960(param_1[0x2a1]);
                    bVar5 = false;
                    local_e4 = 0;
                    if ((((*local_f0 == 0x2f) && (local_f0[0x25] != 0)) &&
                        ((param_1[0x43a] != 0 || (iVar9 = FUN_00a8cab0(), iVar9 == 0x200008)))) &&
                       (((iVar9 = FUN_00a8e520(), iVar9 != 0 &&
                         (FID_conflict__memcpy(&local_90,local_f0 + 0x28,0x40), 0 < local_f0[0x3a]))
                        && (iVar9 = FUN_00c5fb10(param_1[0x13c],&local_90,0xffffffff,0,0),
                           iVar9 != 0)))) {
                      bVar5 = true;
                      local_e4 = 1;
                      local_c0 = local_90;
                      local_bc = local_8c;
                      local_b8 = local_88;
                      local_b4 = local_84;
                      if (((local_90 != 0.0) || (local_8c != 0.0)) || (local_88 != 0.0)) {
                        fVar1 = local_88 * local_88 + local_90 * local_90 + local_8c * local_8c;
                        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                          FUN_00ddf460(&local_c0,&local_c0);
                        }
                        else {
                          FUN_00dd5650(&DAT_0163d0ac);
                          local_b8 = 0.0;
                          local_bc = 1.0;
                          local_c0 = 0.0;
                        }
                        local_bc = local_bc * 20.0;
                        local_b8 = local_b8 * 20.0;
                        local_b4 = local_b4 * 20.0;
                        local_c0 = local_c0 * 20.0;
                      }
                      if (local_c0 < 0.0) {
                        if (local_c0 < 0.0) {
                          local_dc = 0.0;
                          local_d8 = 0.0;
                          local_e0 = local_c0;
                          D3DXMatrixRotationY(local_50,param_1[0x25]);
                          D3DXVec3TransformNormal(&local_e8,&local_e8,auStack_58);
                          fVar1 = local_e0 + (float)param_1[0x10];
                          fVar2 = (float)param_1[0x11] + local_dc;
                          fVar3 = (float)param_1[0x12] + local_d8;
                          fVar4 = (float)param_1[0x13] + fStack_d4;
                          goto LAB_00437c55;
                        }
                      }
                      else {
                        local_9c = 0.0;
                        local_98 = 0.0;
                        local_a0 = local_c0;
                        D3DXMatrixRotationY(local_50,param_1[0x25]);
                        D3DXVec3TransformNormal(&local_a8,&local_a8,auStack_58);
                        fVar1 = local_a0 + (float)param_1[0x10];
                        fVar2 = (float)param_1[0x11] + local_9c;
                        fVar3 = (float)param_1[0x12] + local_98;
                        fVar4 = (float)param_1[0x13] + fStack_94;
LAB_00437c55:
                        local_e4 = 1;
                        param_1[0x528] = (int)fVar1;
                        param_1[0x529] = (int)fVar2;
                        param_1[0x52a] = (int)fVar3;
                        param_1[0x52b] = (int)fVar4;
                      }
                      param_1[0x439] = 0x43160000;
                      FUN_00b85350(0,0x3f800000,0x3dcccccd,0,1,0x3dcccccd);
                      FUN_00c52700(param_1[0x4de],0);
                      iVar9 = FUN_00a8cab0();
                      if (iVar9 == 0x200008) {
                        FUN_0041b240();
                        param_1[0x187] = param_1[0x187] + 2;
                        FUN_00a8cb60(param_1[0x187]);
                      }
                    }
                    iVar9 = FUN_00a8ef10();
                    if (((iVar9 != 0) || (iVar9 = FUN_00a8c760(9), iVar9 != 0)) && (!bVar5)) {
                      return 0;
                    }
                    local_a8 = 1;
                    piStack_ec = (int *)0x0;
                    iVar9 = FUN_00a81330();
                    if (iVar9 != 0) {
                      piStack_ec = (int *)FUN_00a7c8a0();
                    }
                    bVar6 = false;
                    bVar5 = false;
                    uStack_ac = 0;
                    if (((((local_f0[0x24] & 0x8000U) != 0) || (*local_f0 == 0x57)) ||
                        (*local_f0 == 0x55)) && (uStack_ac = 1, param_1[0x4dc] == 0)) {
                      bVar5 = true;
                    }
                    if (((local_f0[0x23] & 0x20000U) != 0) || ((local_f0[0x23] & 0x20U) != 0)) {
                      bVar6 = true;
                    }
                    uStack_a4 = param_1[0x186] & 0xffff0000;
                    if (((uStack_a4 == 0x100000) && (iVar9 = FUN_00a8cab0(), iVar9 != 0x10000e)) &&
                       (!bVar5)) {
                      if ((local_f0[0x24] & 0x2000000U) == 0) {
                        (**(code **)(*param_1 + 0x198))(piStack_ec,local_f0,2);
                        iVar9 = FUN_00a8cab0();
                        if (iVar9 != 0x10000e) {
                          FUN_00420b80(param_1[0x186],0,0,0,0);
                        }
                      }
                      if (0xff < DAT_018b9174 - 0xa00U) {
                        if ((local_f0[0x24] & 0x2000000U) != 0) {
                          FUN_0042be00(local_e8 * 2,1);
                          return 1;
                        }
                        FUN_0042be00(local_e8,0);
                      }
                      return 1;
                    }
                    if (((0 < param_1[0x21c]) && (piStack_ec != (int *)0x0)) &&
                       ((*(byte *)(piStack_ec + 0x130) & 0x10) != 0)) {
                      (**(code **)(*param_1 + 0x21c))(piStack_ec,(char)local_f0[4],0x3c23d70a,0);
                      (**(code **)(*param_1 + 0x220))(0x40000000);
                      if (((DAT_018b9174 - 0xa00U < 0x100) &&
                          (iVar9 = FUN_00a8cab0(), iVar9 == 0x10006)) &&
                         ((fVar1 = *(float *)(DAT_01beb8c0 + 0x1e4) * 57.29578,
                          fVar1 < 0.0 != (fVar1 == 0.0) && (iVar9 = FUN_00416d50(0x1b), iVar9 == 0))
                         )) {
                        FUN_00420b80(0x30021,0,0,0,0);
                      }
                      iVar9 = (**(code **)(*unaff_EDI + 0x17c))();
                      if (((iVar9 != 0) &&
                          (iVar9 = (**(code **)(*piStack_ec + 0x184))
                                             (*local_f0,param_1[0x13c],local_f0), iVar9 == 9)) &&
                         (iVar9 = (**(code **)(*param_1 + 0x1d8))(), iVar9 == 0)) {
                        return 0;
                      }
                      iVar9 = FUN_00a8cab0();
                      if (((iVar9 == 0x10000e) && (2 < param_1[0x187])) &&
                         ((((param_1[0x187] < 6 &&
                            (((local_f0[0x24] & 0x800U) != 0 && ((local_f0[0x23] & 0x100000U) == 0))
                            )) && ((local_f0[0x24] & 0x8000U) == 0)) && (param_1[0x2a1] != 0)))) {
                        (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x1d,param_1[0x13c]);
                        FUN_00420b80(0x10000e,0,0,0,0);
                        param_1[0x187] = 8;
                        return 0;
                      }
                    }
                    param_1[0x432] = param_1[0x432] + local_e8;
                    param_1[0x433] = param_1[0x433] + 1;
                    if ((local_f0[0x23] & 0x200U) != 0) {
                      local_e8 = FUN_00fdbc60();
                    }
                    iVar9 = FUN_00ac4780();
                    if ((((0 < iVar9) && (iVar9 = FUN_00a8cbe0(0x30021), iVar9 == 0)) &&
                        ((iVar9 = *local_f0, iVar9 == 0x4a ||
                         (((iVar9 == 0x4b || (iVar9 == 0x4c)) || (iVar9 == 0x4d)))))) &&
                       ((param_1[0x4dc] == 0 && (param_1[0x43a] == 0)))) {
                      if (local_c8 == 0) {
LAB_0043864b:
                        uVar10 = 0x100000;
                      }
                      else {
                        iVar9 = FUN_00b7d050();
                        if (iVar9 == 0) goto LAB_0043865f;
                        pfVar13 = (float *)FUN_00a7c8b0();
                        local_e0 = *pfVar13;
                        local_dc = pfVar13[1];
                        local_d8 = pfVar13[2];
                        fStack_d4 = pfVar13[3];
                        fVar14 = (float10)FUN_00a8ec30(&local_e0);
                        fVar14 = (float10)FUN_00ddba30((float)(fVar14 - (float10)(float)param_1[0x25
                                                  ]));
                        if ((fVar14 * (float10)57.29578 < (float10)0) &&
                           ((float10)-180.0 <= fVar14 * (float10)57.29578)) goto LAB_0043864b;
                        uVar10 = 0x100001;
                      }
                      FUN_00420b80(uVar10,0,0,0,0);
LAB_0043865f:
                      (**(code **)(*param_1 + 0x198))(piStack_ec,local_f0,3);
                      return 1;
                    }
                    if ((((!bVar6) && (bVar5)) && (param_1[0x1d9] != 0)) &&
                       (iVar9 = FUN_008e2740(), iVar9 != 0)) {
                      fVar14 = (float10)FUN_00a8ec30(local_f0 + 0x40);
                      fVar14 = (float10)FUN_00ddba30((float)(fVar14 - (float10)(float)param_1[0x25])
                                                    );
                      if (((float10)0 <= fVar14 * (float10)57.29578) ||
                         (fVar14 * (float10)57.29578 < (float10)-180.0)) {
                        uVar10 = 0x100001;
                      }
                      else {
                        uVar10 = 0x100000;
                      }
                      FUN_00420b80(uVar10,0,0,0,0);
                      (**(code **)(*param_1 + 0x198))(piStack_ec,local_f0,3);
                      return 1;
                    }
                    bVar5 = false;
                    if (((param_1[0x4ae] < param_1[0x21c]) || (iVar9 = FUN_004171e0(), iVar9 == 0))
                       || (param_1[0x43a] != 0)) {
                      iVar9 = FUN_004171e0();
                      if (iVar9 == 0) {
                        bVar5 = true;
                      }
                    }
                    else {
                      bVar5 = true;
                      param_1[0x43b] = 1;
                    }
                    if (DAT_018b9174 - 0xa00U < 0x100) {
                      iVar9 = FUN_00a8cbe0(0x30021);
                      if ((iVar9 == 0) && (iVar9 = FUN_00a8cbe0(0x3001b), iVar9 == 0)) {
                        uVar10 = 0x3001a;
                        goto LAB_0043802d;
                      }
LAB_00438036:
                      bVar5 = false;
                    }
                    else {
                      uVar10 = 0x200008;
LAB_0043802d:
                      iVar9 = FUN_00a8cbe0(uVar10);
                      if (iVar9 != 0) goto LAB_00438036;
                    }
                    iVar9 = FUN_00a8cbe0(0x40009);
                    if ((((iVar9 != 0) || (iVar9 = FUN_00a8cbe0(0x4000a), iVar9 != 0)) ||
                        (iVar9 = FUN_00a8cbe0(0x4000b), iVar9 != 0)) ||
                       (iVar9 = FUN_00a8cbe0(0x40008), iVar9 != 0)) {
                      bVar5 = false;
                    }
                    if (((!bVar6) && (bVar5)) && (local_e4 == 0)) {
                      uVar11 = FUN_0041bab0();
                      iVar9 = param_1[0x433];
                      if ((((DAT_018b9174 - 0xa00U < 0x100) &&
                           (iVar12 = FUN_00416d50(0x1b), iVar12 != 0)) ||
                          ((int)(uVar11 & 0xffff) < iVar9)) &&
                         ((param_1[0x4dc] == 0 && (param_1[0x43a] == 0)))) {
                        uVar7 = FUN_00dde2a0(0,1);
                        if (uVar7 < 2) {
                          switch(param_1[0x441]) {
                          case 0:
                          case 1:
                            if (local_c8 == 0) {
LAB_00438195:
                              FUN_00420b80(0x100000,0,0,0,0);
                              return 0;
                            }
                            iVar9 = FUN_00b7d050();
                            if (iVar9 != 0) {
                              pfVar13 = (float *)FUN_00a7c8b0();
                              local_e0 = *pfVar13;
                              local_dc = pfVar13[1];
                              local_d8 = pfVar13[2];
                              fStack_d4 = pfVar13[3];
                              fVar14 = (float10)FUN_00a8ec30(&local_e0);
                              fVar14 = (float10)FUN_00ddba30((float)(fVar14 - (float10)(float)
                                                  param_1[0x25]));
                              if (((float10)0 <= fVar14 * (float10)57.29578) ||
                                 (fVar14 * (float10)57.29578 < (float10)-180.0)) {
                                FUN_00420b80(0x100001,0,0,0,0);
                                return 0;
                              }
                              goto LAB_00438195;
                            }
                            break;
                          case 2:
                          case 3:
                            sVar8 = FUN_00dde2a0(0,4);
                            if (sVar8 == 0) {
                              FUN_0041be30(0x80002);
                              return 0;
                            }
                            if (sVar8 == 1) {
                              FUN_0041be30(0x80001);
                              return 0;
                            }
                            FUN_00420b80(0x3001f,0,0,0,0);
                            return 0;
                          }
                        }
                        else {
                          FUN_00420b80(0x10000e,0,0,0,0);
                        }
                        uVar11 = FUN_00a8cab0();
                        if ((uVar11 & 0xffff0000) == 0x100000) {
                          return 0;
                        }
                      }
                    }
                    (**(code **)(*param_1 + 0x198))(piStack_ec,local_f0,1);
                    iVar9 = iStack_f4;
                    if ((local_b8 != 0.0) && (iVar9 = iStack_f4 / 10, iStack_f4 / 10 < 1)) {
                      iVar9 = 1;
                    }
                    (**(code **)(*param_1 + 0x30c))(iVar9,0);
                    if ((local_f0[0x23] & 0x20U) != 0) {
                      FUN_00420b80(0x40017,0,0,0,0);
                      return 1;
                    }
                    if ((local_f0[0x23] & 0x20000U) != 0) {
                      FUN_00420b80(0x40016,0,0,0,0);
                      return 1;
                    }
                    if ((unaff_EBX == 0) && (iVar9 = FUN_0041f620(local_f0), iVar9 != 0)) {
                      return 0;
                    }
                    iVar9 = FUN_00a8cab0();
                    if ((iVar9 == 0x200008) ||
                       ((iVar9 = FUN_00a8cab0(), iVar9 == 0x30025 && (param_1[0x187] < 8)))) {
                      return 1;
                    }
                    iVar9 = (**(code **)(*param_1 + 0x1d8))();
                    if (iVar9 != 0) {
                      iVar9 = FUN_00a8cab0();
                      if (((iVar9 != 0x4000a) && (iVar9 = FUN_00a8cab0(), iVar9 != 0x40009)) &&
                         (iVar9 = FUN_00a8cab0(), iVar9 != 0x4000f)) {
                        return 1;
                      }
                      FUN_00420b80(0x4000a,0,0,0,0);
                      return 1;
                    }
                    if ((local_f0[0x24] & 0x2000000U) != 0) {
                      if (uStack_a4 == 0x100000) {
                        uVar10 = 0x40004;
                      }
                      else {
                        uVar10 = 0x40008;
                      }
                      FUN_00420b80(uVar10,0,0,0,0);
                      if (piStack_ec != (int *)0x0) {
                        FUN_00a8e880(piStack_ec + 0x10);
                        (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
                      }
                      local_c4 = 1;
                    }
                    if ((local_f0[0x24] & 0x800000U) == 0) {
                      if (local_c4 == 0) {
                        if (param_1[0x432] < 0x96) {
                          if (0x4a < param_1[0x432]) {
                            sVar8 = FUN_00dde2a0(0,2);
                            if (sVar8 == 0) {
                              if (param_1[0x442] == 0) {
                                FUN_00420b80(0x20005,0,0,0,0);
                              }
                            }
                            else if (sVar8 != 1) goto LAB_004383a4;
LAB_0043839d:
                            FUN_004334e0();
                          }
                        }
                        else if (param_1[0x442] == 0) goto LAB_0043839d;
LAB_004383a4:
                        iVar9 = FUN_0041bb80();
                        if (iVar9 == 0) {
                          switch(param_1[0x441]) {
                          case 0:
                          case 1:
                            FUN_0042ca40();
                            break;
                          case 2:
                          case 3:
switchD_004383be_caseD_2:
                            uVar10 = 0x40005;
LAB_004384bb:
                            FUN_00420b80(uVar10,0,0,0,0);
                          }
                        }
                        else if (local_e4 == 0) {
                          iVar9 = FUN_0041bb80();
                          if ((iVar9 != 0) && (uStack_a4 != 0x80000)) {
                            switch(param_1[0x441]) {
                            case 0:
                            case 1:
                              if (0x1d < param_1[0x432]) {
                                if (param_1[0x432] < 0x32) {
                                  sVar8 = FUN_00dde2a0(0,2);
                                  if (sVar8 == 0) {
                                    uVar10 = 0x40001;
                                  }
                                  else if (sVar8 == 1) {
                                    uVar10 = 0x40002;
                                  }
                                  else {
                                    if (sVar8 != 2) break;
                                    uVar10 = 0x40003;
                                  }
                                }
                                else {
                                  uVar10 = 0x40004;
                                }
                                goto LAB_004384bb;
                              }
                              FUN_0041ba60();
                              break;
                            case 2:
                            case 3:
                              goto switchD_004383be_caseD_2;
                            }
                          }
                        }
                        else {
                          if ((param_1[0x4ad] < param_1[0x21c]) || (param_1[0x21c] < param_1[0x4ae])
                             ) {
                            uVar10 = 0x4000c;
                            goto LAB_004384bb;
                          }
                          FUN_00431610(1);
                        }
                      }
                    }
                    else {
                      FUN_00420b80(0x40009,0,0,0,0);
                      local_c4 = 1;
                    }
                  }
                }
                local_f0 = local_f0 + 0x54;
              } while (local_f0 != (int *)(param_1[0x1a1] * 0x150 + param_1[0x19f]));
            }
            return local_a8;
          }
        }
      }
    }
  }
  return 0;
}

// 00438860  hkpAllCdPointCollector::hkpAllCdPointCollector_5  size=39  [between]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_5(undefined4 *param_1)

{
  param_1[1] = 0x7f7fffee;
  *param_1 = vftable;
  param_1[4] = param_1 + 8;
  param_1[6] = 0x80000008;
  param_1[5] = 0;
  param_1[1] = 0x7f7fffee;
  return;
}

// 004388C0  hkpCdPointCollector::hkpCdPointCollector_4  size=77  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_4(undefined4 *param_1)

{
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 00438910  Em0020::vf48  size=358  [class]
void __fastcall Em0020::vf48(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  BehaviorEmBase::vf48();
  fVar3 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar3;
  FUN_0041c610();
  if (*(int *)(param_1 + 0x1068) != 1) {
    fVar1 = *(float *)(param_1 + 0xa9c) * 57.29578;
    if ((fVar1 < 0.0) && (!NAN(fVar1) && -90.0 < fVar1 != (fVar1 == -90.0))) {
      *(undefined4 *)(param_1 + 0x1104) = 1;
    }
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (fVar1 <= 90.0)) {
      *(undefined4 *)(param_1 + 0x1104) = 0;
    }
    if ((fVar1 < -90.0) && (!NAN(fVar1) && -180.0 < fVar1 != (fVar1 == -180.0))) {
      *(undefined4 *)(param_1 + 0x1104) = 3;
    }
    if ((90.0 < fVar1) && (fVar1 < 180.0)) {
      *(undefined4 *)(param_1 + 0x1104) = 2;
    }
    if (0xff < DAT_018b9174 - 0xa00U) {
      DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
      DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
      DAT_01dc08ec = 1;
      FUN_00cad2a0();
    }
    iVar2 = FUN_00a8eea0();
    if (((iVar2 < 1) && (DAT_018b9174 - 0xa00U < 0x100)) &&
       (fVar1 = *(float *)(param_1 + 0x1224) - *(float *)(param_1 + 0x910),
       *(float *)(param_1 + 0x1224) = fVar1, fVar1 <= 0.0)) {
      *(undefined4 *)(param_1 + 0x6bc) = 1;
    }
    FUN_00435cb0();
    FUN_0041d320();
    *(float *)(param_1 + 0x14cc) = *(float *)(param_1 + 0x14cc) + *(float *)(param_1 + 0x910);
  }
  return;
}

// 00438A80  FUN_00438a80  size=1406  [between]
void __fastcall FUN_00438a80(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 unaff_ESI;
  
  iVar3 = FUN_00a8cab0();
  if (iVar3 < 0x20001) {
    if (iVar3 == 0x20000) {
      FUN_00437160();
    }
    else {
      switch(iVar3) {
      case 0x10000:
        FUN_004215f0();
        break;
      case 0x10001:
        FUN_00436300();
        break;
      case 0x10002:
        FUN_0041d7c0();
        break;
      case 0x10003:
        FUN_00421a00();
        break;
      case 0x10006:
        FUN_00421b90();
        break;
      case 0x10008:
        FUN_00435470();
        break;
      case 0x10009:
        FUN_0042ebc0();
        break;
      case 0x1000a:
        FUN_00437860();
        break;
      case 0x1000b:
        FUN_004363c0();
      }
    }
  }
  else if (iVar3 < 0x30001) {
    if (iVar3 == 0x30000) {
      FUN_0041f470();
    }
    else {
      switch(iVar3) {
      case 0x20001:
        FUN_004374d0();
        break;
      case 0x20002:
        FUN_00422950();
        break;
      case 0x20003:
        FUN_004375a0();
        break;
      case 0x20004:
        FUN_004376b0();
        break;
      case 0x20006:
        FUN_0042ecc0();
        break;
      case 0x20007:
        FUN_0042ef80();
        break;
      case 0x20008:
        FUN_0042f1c0();
        break;
      case 0x20009:
        FUN_0042f440();
      }
    }
  }
  else if (iVar3 < 0x40001) {
    switch(iVar3) {
    case 0x30001:
      FUN_0041f4b0();
      break;
    case 0x30008:
      FUN_004273a0();
      break;
    case 0x30009:
      FUN_00427490();
      break;
    case 0x3000c:
      FUN_0041f500();
      break;
    case 0x3000e:
      FUN_0042b7e0();
      break;
    case 0x30020:
      FUN_00429070();
      break;
    case 0x30029:
      if (*(int *)(param_1 + 0x61c) != 2) break;
    case 0x30016:
    case 0x30019:
    case 0x30025:
      FUN_0041f350();
    }
  }
  else if (iVar3 < 0x60001) {
    switch(iVar3) {
    case 0x4000d:
      FUN_00430670();
    }
  }
  else if (iVar3 < 0x80001) {
    if (iVar3 == 0x80000) {
      FUN_0042db90();
    }
    else {
      switch(iVar3) {
      case 0x70000:
        FUN_004231f0();
        break;
      case 0x70001:
        FUN_00423220();
        break;
      case 0x70002:
        FUN_00423380();
        break;
      case 0x70003:
        FUN_00423500();
        break;
      case 0x70004:
        FUN_00423630();
        break;
      case 0x70005:
        FUN_00423700();
        break;
      case 0x70006:
        FUN_00423830();
        break;
      case 0x70007:
        FUN_00423960();
        break;
      case 0x70008:
        FUN_00423a90();
        break;
      case 0x70009:
        FUN_00423ad0();
        break;
      case 0x7000a:
        FUN_00423b00();
        break;
      case 0x7000b:
        FUN_00423c70();
        break;
      case 0x7000d:
        FUN_00432570();
        break;
      case 0x70010:
        FUN_004326a0();
        break;
      case 0x70013:
        FUN_004327d0();
        break;
      case 0x70016:
        FUN_004329f0();
        break;
      case 0x7001c:
        FUN_00432ab0();
        break;
      case 0x70020:
        FUN_00432bd0();
      }
    }
  }
  else if (iVar3 < 0x100001) {
    if (iVar3 == 0x100000) {
      FUN_0042cbd0();
    }
    else {
      switch(iVar3) {
      case 0x80001:
        FUN_00434a80();
        break;
      case 0x80002:
        FUN_00434bd0();
        break;
      case 0x80003:
        FUN_00434d20();
        break;
      case 0x80006:
        FUN_0042e3d0();
        break;
      case 0x80007:
        FUN_0042e970();
        break;
      case 0x80008:
        FUN_0042f840();
        break;
      case 0x80009:
        FUN_0042fa70();
        break;
      case 0x8000a:
        FUN_0042fc20();
      }
    }
  }
  else if (iVar3 < 0x200001) {
    if (iVar3 == 0x200000) {
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      switch(iVar3) {
      case 0x100001:
        FUN_0042cc90();
        break;
      case 0x100002:
        FUN_0042cd50();
        break;
      case 0x100003:
        FUN_0042ce10();
        break;
      case 0x100004:
        FUN_0042ced0();
        break;
      case 0x100005:
        FUN_0042cf90();
        break;
      case 0x100006:
        FUN_0042d050();
        break;
      case 0x100007:
        FUN_0042d110();
        break;
      case 0x100008:
        FUN_0042d1d0();
        break;
      case 0x100009:
        FUN_0042d290();
        break;
      case 0x10000a:
        FUN_0042d350();
        break;
      case 0x10000b:
        FUN_0042d410();
        break;
      case 0x10000c:
        FUN_0042d4d0();
      }
    }
  }
  else {
    switch(iVar3) {
    case 0x200003:
      FUN_0041e8d0();
      break;
    case 0x200005:
      FUN_00425760();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x618);
  if ((((((uVar1 != 0x60000) && (uVar1 != 0x30025)) && (*(int *)(param_1 + 0x110c) == 0)) &&
       ((*(int *)(param_1 + 0x1370) == 0 && ((uVar1 & 0xffff0000) == 0x30000)))) &&
      ((0 < *(int *)(param_1 + 0x1108) &&
       ((*(int **)(param_1 + 0xa84) == (int *)0x0 ||
        (iVar3 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1fc))(), iVar3 == 0)))))) &&
     (iVar3 = FUN_00416910(6), iVar3 == 0)) {
    uVar4 = FUN_00a8cab0();
    iVar3 = FUN_0041d920(uVar4);
    if (iVar3 == 0) {
      if ((0xff < DAT_018b9174 - 0xa00U) || (iVar3 = extraout_ECX, *(int *)(param_1 + 0x1200) != 0))
      {
        FUN_00dde2a0(0,3);
        iVar3 = param_1;
      }
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + 0x1210) = 1;
        FUN_004334e0(unaff_ESI);
        *(undefined4 *)(iVar3 + 0x1210) = 0;
      }
      return;
    }
  }
  return;
}

// 00439190  FUN_00439190  size=1561  [between]
void __fastcall FUN_00439190(int *param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  float10 fVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [44];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0x439198;
  iVar4 = FUN_00a8cab0();
  if (iVar4 < 0x20001) {
    if (iVar4 == 0x20000) {
      FUN_00420490();
      return;
    }
    switch(iVar4) {
    case 0x10000:
      FUN_004174a0();
      return;
    case 0x10001:
      FUN_00421750();
      return;
    case 0x10002:
      FUN_004175d0();
      return;
    case 0x10003:
      FUN_00421a40();
      return;
    case 0x10004:
      goto LAB_00436700;
    case 0x10005:
      if ((float)param_1[0x248] <= 15.0) {
        param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
        iStack_8 = 0x3f800000;
        iStack_c = 0x3f800000;
        uStack_10 = 0x436959;
        FUN_00ac80a0();
        return;
      }
      iStack_8 = 0x436960;
      uVar3 = FUN_00a8cac0();
      switch(uVar3) {
      case 0:
        iStack_8 = 0x3f800000;
        iStack_c = 0xbf800000;
        uStack_10 = 0;
        uStack_14 = 0x3f800000;
        puStack_18 = (undefined1 *)0x3e4ccccd;
        uStack_1c = 0;
        uStack_20 = 0x56;
        uStack_24 = 0x4369a3;
        FUN_00aa4080();
        iStack_8 = 1;
        iStack_c = 0x8000000;
        uStack_10 = 0;
        uStack_14 = 0x4369b3;
        FUN_00a96070();
        param_1[0x187] = 1;
      case 1:
        iStack_8 = 0x3f800000;
        iStack_c = 0x3f800000;
        uStack_10 = 0x4369d0;
        FUN_00ac80a0();
        iStack_8 = 0;
        iStack_c = 0x4369d9;
        iVar4 = FUN_00a94ce0();
        if (iVar4 != 0) {
          param_1[0x187] = 2;
        }
        break;
      case 2:
        iStack_8 = 0x3f800000;
        iStack_c = 0xbf800000;
        uStack_10 = 0;
        uStack_14 = 0x3f800000;
        puStack_18 = (undefined1 *)0x3e4ccccd;
        uStack_1c = 0;
        uStack_20 = 0x57;
        uStack_24 = 0x436a21;
        FUN_00aa4080();
        iStack_8 = 1;
        iStack_c = 0x8000000;
        uStack_10 = 0;
        uStack_14 = 0x436a31;
        FUN_00a96070();
        param_1[0x187] = 3;
      case 3:
        iStack_8 = 0x3f800000;
        iStack_c = 0x40000000;
        uStack_10 = 0x436a54;
        FUN_00ac80a0();
        iStack_8 = 0;
        iStack_c = 0x436a5d;
        iVar4 = FUN_00a94ce0();
        if (iVar4 != 0) {
          param_1[0x187] = 4;
        }
        break;
      case 4:
        iStack_8 = 0x3f800000;
        iStack_c = 0xbf800000;
        uStack_10 = 0;
        uStack_14 = 0x3f800000;
        puStack_18 = (undefined1 *)0x3e4ccccd;
        uStack_1c = 0;
        uStack_20 = 0x58;
        uStack_24 = 0x436a9a;
        FUN_00aa4080();
        iStack_8 = 1;
        iStack_c = 0x8000000;
        uStack_10 = 0;
        uStack_14 = 0x436aaa;
        FUN_00a96070();
        param_1[0x187] = 5;
      case 5:
        iStack_8 = 0x3f800000;
        iStack_c = 0x3f800000;
        uStack_10 = 0x436ac7;
        FUN_00ac80a0();
        iStack_8 = 0;
        iStack_c = 0x436ad0;
        iVar4 = FUN_00a94ce0();
        if (iVar4 != 0) {
          iStack_8 = 0x436adb;
          FUN_004334e0();
        }
      }
      if (param_1[0x2a1] != 0) {
        iStack_8 = param_1[0x2a1] + 0x50;
        iStack_c = 0x436af2;
        FUN_00a8e880();
        iStack_8 = 0;
        iStack_c = 0x3eb2b8c2;
        uStack_10 = 0x393702d3;
        uStack_14 = 0x3ecccccd;
        puStack_18 = &LAB_00436b24;
        (**(code **)(*param_1 + 0x308))();
      }
      return;
    case 0x10006:
      FUN_00421c60();
      return;
    case 0x10007:
      FUN_00431d40();
      return;
    case 0x10008:
      FUN_0042eb30();
      return;
    case 0x10009:
      FUN_0042ec30();
      return;
    case 0x1000a:
      FUN_00423110();
      return;
    case 0x1000b:
      FUN_00421950();
      return;
    case 0x1000c:
      FUN_00431cb0();
      return;
    default:
      return;
    }
  }
  if (iVar4 < 0x30001) {
    if (iVar4 == 0x30000) {
      FUN_00426b30();
      return;
    }
    switch(iVar4) {
    case 0x20001:
      FUN_00417710();
      return;
    case 0x20002:
      FUN_00422050();
      return;
    case 0x20003:
      FUN_004178e0();
      return;
    case 0x20004:
      FUN_00417b70();
      return;
    case 0x20005:
      goto LAB_00436b40;
    case 0x20006:
      FUN_0042ee00();
      return;
    case 0x20007:
      FUN_0042f040();
      return;
    case 0x20008:
      FUN_0042f2c0();
      return;
    case 0x20009:
      FUN_0042f540();
      return;
    default:
      goto switchD_004391b3_default;
    }
  }
  if (0x40000 < iVar4) {
    if (iVar4 < 0x60001) {
      if (iVar4 == 0x60000) {
        FUN_00417690();
        return;
      }
      switch(iVar4) {
      case 0x40001:
        FUN_00434270();
        return;
      case 0x40002:
        FUN_00434360();
        return;
      case 0x40003:
        FUN_00434450();
        return;
      case 0x40004:
        FUN_00434540();
        return;
      case 0x40005:
        FUN_00434630();
        return;
      case 0x40006:
        FUN_004346f0();
        return;
      case 0x40007:
        FUN_004347b0();
        return;
      case 0x40008:
        FUN_00434870();
        return;
      case 0x40009:
        FUN_0042bae0();
        return;
      case 0x4000a:
        FUN_0042bd20();
        return;
      case 0x4000b:
        FUN_0042c360();
        return;
      case 0x4000c:
        FUN_0042bfc0();
        return;
      case 0x4000d:
        FUN_004306b0();
        return;
      case 0x4000e:
        FUN_004307c0();
        return;
      case 0x4000f:
        FUN_00430940();
        return;
      case 0x40010:
        FUN_00430b20();
        return;
      case 0x40011:
        FUN_00430bf0();
        return;
      case 0x40012:
        FUN_00430d10();
        return;
      case 0x40013:
        FUN_0042c180();
        return;
      case 0x40014:
        FUN_0042c220();
        return;
      case 0x40015:
        FUN_0042c2c0();
        return;
      case 0x40016:
        FUN_0042c400();
        return;
      case 0x40017:
        FUN_0042c4b0();
        return;
      }
    }
    else if (iVar4 < 0x80001) {
      if (iVar4 == 0x80000) {
        FUN_0042dc20();
        return;
      }
      switch(iVar4) {
      case 0x70000:
        FUN_004185b0();
        return;
      case 0x70001:
        FUN_00418630();
        return;
      case 0x70002:
        FUN_004186b0();
        return;
      case 0x70003:
        FUN_00418730();
        return;
      case 0x70004:
        FUN_004187b0();
        return;
      case 0x70005:
        FUN_00423750();
        return;
      case 0x70006:
        FUN_00423880();
        return;
      case 0x70007:
        FUN_004239b0();
        return;
      case 0x70008:
        FUN_00418830();
        return;
      case 0x70009:
        FUN_004188b0();
        return;
      case 0x7000a:
        FUN_00418930();
        return;
      case 0x7000b:
        FUN_004189b0();
        return;
      case 0x7000c:
        FUN_00423da0();
        return;
      case 0x7000d:
        FUN_00418a50();
        return;
      case 0x7000e:
        FUN_00423e50();
        return;
      case 0x7000f:
        FUN_00423f80();
        return;
      case 0x70010:
        FUN_00418b00();
        return;
      case 0x70011:
        FUN_00424030();
        return;
      case 0x70012:
        FUN_00424140();
        return;
      case 0x70013:
        FUN_00418bb0();
        return;
      case 0x70014:
        FUN_004241f0();
        return;
      case 0x70015:
        FUN_004242f0();
        return;
      case 0x70016:
        FUN_00418c60();
        return;
      case 0x70017:
        FUN_004243a0();
        return;
      case 0x70018:
        FUN_00424450();
        return;
      case 0x70019:
        FUN_00424500();
        return;
      case 0x7001a:
        FUN_004245b0();
        return;
      case 0x7001b:
        FUN_00424660();
        return;
      case 0x7001c:
        FUN_00418d40();
        return;
      case 0x7001d:
        FUN_00424750();
        return;
      case 0x7001e:
        FUN_00424850();
        return;
      case 0x7001f:
        FUN_00424900();
        return;
      case 0x70020:
        FUN_00418e10();
        return;
      case 0x70021:
        FUN_004249c0();
        return;
      case 0x70022:
        FUN_00424ac0();
        return;
      }
    }
    else if (iVar4 < 0x100001) {
      if (iVar4 == 0x100000) {
        FUN_0042cbf0();
        return;
      }
      switch(iVar4) {
      case 0x80001:
        FUN_0042dcd0();
        return;
      case 0x80002:
        FUN_0042de10();
        return;
      case 0x80003:
        FUN_0042df40();
        return;
      case 0x80004:
        FUN_0042dff0();
        return;
      case 0x80005:
        FUN_0042e1c0();
        return;
      case 0x80006:
        FUN_0042e600();
        return;
      case 0x80007:
        FUN_0041c0d0();
        return;
      case 0x80008:
        FUN_0042f970();
        return;
      case 0x80009:
        FUN_0042fb30();
        return;
      case 0x8000a:
        FUN_0042fce0();
        return;
      }
    }
    else if (iVar4 < 0x200001) {
      if (iVar4 == 0x200000) {
        FUN_00424b70();
        return;
      }
      switch(iVar4) {
      case 0x100001:
        FUN_0042ccb0();
        return;
      case 0x100002:
        FUN_0042cd70();
        return;
      case 0x100003:
        FUN_0042ce30();
        return;
      case 0x100004:
        FUN_0042cef0();
        return;
      case 0x100005:
        FUN_0042cfb0();
        return;
      case 0x100006:
        FUN_0042d070();
        return;
      case 0x100007:
        FUN_0042d130();
        return;
      case 0x100008:
        FUN_0042d1f0();
        return;
      case 0x100009:
        FUN_0042d2b0();
        return;
      case 0x10000a:
        FUN_0042d370();
        return;
      case 0x10000b:
        FUN_0042d430();
        return;
      case 0x10000c:
        FUN_0042d4f0();
        return;
      case 0x10000d:
        FUN_0042d590();
        return;
      case 0x10000e:
        FUN_0042d630();
        return;
      case 0x10000f:
        FUN_00430db0();
        return;
      }
    }
    else {
      switch(iVar4) {
      case 0x200001:
        FUN_00424f50();
        return;
      case 0x200002:
        FUN_0041de60();
        return;
      case 0x200003:
        FUN_004254e0();
        return;
      case 0x200004:
        FUN_00425630();
        return;
      case 0x200005:
        FUN_0041a2d0();
        return;
      case 0x200006:
        FUN_00432d20();
        return;
      case 0x200007:
        FUN_00433120();
        return;
      case 0x200008:
        FUN_004259f0();
        return;
      }
    }
switchD_004391b3_default:
    return;
  }
  if (iVar4 == 0x40000) {
    FUN_004341b0();
    return;
  }
  switch(iVar4) {
  case 0x30001:
    FUN_00426c20();
    return;
  case 0x30002:
    FUN_00426d30();
    return;
  case 0x30003:
    FUN_00426e20();
    return;
  case 0x30004:
    FUN_00426f10();
    return;
  case 0x30005:
    FUN_00427000();
    return;
  case 0x30006:
    FUN_00427150();
    return;
  case 0x30007:
    FUN_004272a0();
    return;
  case 0x30008:
    FUN_0041b310();
    return;
  case 0x30009:
    FUN_004274e0();
    return;
  case 0x3000a:
    FUN_00427580();
    return;
  case 0x3000b:
    FUN_004276d0();
    return;
  case 0x3000c:
    FUN_004277e0();
    return;
  case 0x3000d:
    FUN_00427b00();
    return;
  case 0x3000e:
    FUN_0042b810();
    return;
  case 0x3000f:
    FUN_00427ff0();
    return;
  case 0x30010:
    goto LAB_00433b40;
  case 0x30011:
    FUN_00433c90();
    return;
  case 0x30012:
    FUN_00433de0();
    return;
  case 0x30013:
    FUN_00433fb0();
    return;
  case 0x30014:
    FUN_00427c30();
    return;
  case 0x30015:
    FUN_00425270();
    return;
  case 0x30016:
    FUN_00427dc0();
    return;
  case 0x30017:
    FUN_004253f0();
    return;
  case 0x30018:
    FUN_0041b630();
    return;
  case 0x30019:
    FUN_004222a0();
    return;
  case 0x3001a:
    FUN_004280d0();
    return;
  case 0x3001b:
    FUN_00428880();
    return;
  case 0x3001c:
    FUN_00428d30();
    return;
  default:
    goto switchD_004391b3_default;
  case 0x3001e:
    FUN_00428ee0();
    return;
  case 0x3001f:
    FUN_00428fd0();
    return;
  case 0x30020:
    FUN_004290a0();
    return;
  case 0x30021:
    FUN_00429d20();
    return;
  case 0x30022:
    FUN_0042a6a0();
    return;
  case 0x30023:
    FUN_0042a770();
    return;
  case 0x30024:
    FUN_0042aa10();
    return;
  case 0x30025:
    FUN_0042ad40();
    return;
  case 0x30026:
    FUN_0042b9f0();
    return;
  case 0x30027:
    FUN_0042fdd0();
    return;
  case 0x30028:
    FUN_00430030();
    return;
  case 0x30029:
    FUN_00430290();
    return;
  case 0x3002a:
    FUN_00430500();
    return;
  }
LAB_00436700:
  if ((float)param_1[0x248] <= 15.0) {
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    iStack_8 = 0x3f800000;
    iStack_c = 0x3f800000;
    uStack_10 = 0x436739;
    FUN_00ac80a0();
    return;
  }
  iStack_8 = 0x436740;
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    iStack_8 = 0x3f800000;
    iStack_c = 0xbf800000;
    uStack_10 = 0;
    uStack_14 = 0x3f800000;
    puStack_18 = (undefined1 *)0x3e4ccccd;
    uStack_1c = 0;
    uStack_20 = 0x52;
    uStack_24 = 0x436783;
    FUN_00aa4080();
    iStack_8 = 1;
    iStack_c = 0x8000000;
    uStack_10 = 0;
    uStack_14 = 0x436793;
    FUN_00a96070();
    param_1[0x187] = 1;
  case 1:
    iStack_8 = 0x3f800000;
    iStack_c = 0x3f800000;
    uStack_10 = 0x4367b0;
    FUN_00ac80a0();
    iStack_8 = 0;
    iStack_c = 0x4367b9;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      param_1[0x187] = 2;
    }
    break;
  case 2:
    iStack_8 = 0x3f800000;
    iStack_c = 0xbf800000;
    uStack_10 = 0;
    uStack_14 = 0x3f800000;
    puStack_18 = (undefined1 *)0x3e4ccccd;
    uStack_1c = 0;
    uStack_20 = 0x53;
    uStack_24 = 0x436801;
    FUN_00aa4080();
    iStack_8 = 1;
    iStack_c = 0x8000000;
    uStack_10 = 0;
    uStack_14 = 0x436811;
    FUN_00a96070();
    param_1[0x187] = 3;
  case 3:
    iStack_8 = 0x3f800000;
    iStack_c = 0x40000000;
    uStack_10 = 0x436834;
    FUN_00ac80a0();
    iStack_8 = 0;
    iStack_c = 0x43683d;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      param_1[0x187] = 4;
    }
    break;
  case 4:
    iStack_8 = 0x3f800000;
    iStack_c = 0xbf800000;
    uStack_10 = 0;
    uStack_14 = 0x3f800000;
    puStack_18 = (undefined1 *)0x3e4ccccd;
    uStack_1c = 0;
    uStack_20 = 0x54;
    uStack_24 = 0x43687a;
    FUN_00aa4080();
    iStack_8 = 1;
    iStack_c = 0x8000000;
    uStack_10 = 0;
    uStack_14 = 0x43688a;
    FUN_00a96070();
    param_1[0x187] = 5;
  case 5:
    iStack_8 = 0x3f800000;
    iStack_c = 0x3f800000;
    uStack_10 = 0x4368a7;
    FUN_00ac80a0();
    iStack_8 = 0;
    iStack_c = 0x4368b0;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      iStack_8 = 0x4368bb;
      FUN_004334e0();
    }
  }
  if (param_1[0x2a1] != 0) {
    iStack_8 = param_1[0x2a1] + 0x50;
    iStack_c = 0x4368d2;
    FUN_00a8e880();
    iStack_8 = 0;
    iStack_c = 0x3eb2b8c2;
    uStack_10 = 0x393702d3;
    uStack_14 = 0x3ecccccd;
    puStack_18 = &LAB_00436904;
    (**(code **)(*param_1 + 0x308))();
  }
  return;
LAB_00433b40:
  iStack_8 = 0x433b48;
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    iStack_8 = 0x3f800000;
    iStack_c = 0xbf800000;
    uStack_10 = 0;
    uStack_14 = 0x3f800000;
    puStack_18 = (undefined1 *)0x3e4ccccd;
    uStack_1c = 0;
    uStack_20 = 0xb1;
    uStack_24 = 0x433b8a;
    FUN_00aa4080();
    iStack_8 = 1;
    iStack_c = 0x8000000;
    uStack_10 = 0;
    uStack_14 = 0x433b9a;
    FUN_00a96070();
    iStack_8 = 1;
    iStack_c = 0x433ba3;
    FUN_00a8ccb0();
  case 1:
    iStack_8 = 0x3f800000;
    iStack_c = param_1[0x507];
    uStack_10 = 0x433bbc;
    FUN_00ac80a0();
    iStack_8 = 0;
    iStack_c = 0x433bc5;
    uVar2 = FUN_00a959f0();
    if (0xe < uVar2) {
      iStack_8 = 1;
      iStack_c = 0x433bd3;
      FUN_00a8ccb0();
    }
    goto switchD_00433b53_default;
  case 2:
    iStack_8 = 0x433bde;
    FUN_004334e0();
    break;
  case 3:
    break;
  default:
    goto switchD_00433b53_default;
  }
  iStack_8 = 0x3f800000;
  iStack_c = 0x3f800000;
  uStack_10 = 0x433bf5;
  FUN_00ac80a0();
  iStack_8 = 0;
  iStack_c = 0x433bfe;
  iVar4 = FUN_00a94ce0();
  if (iVar4 != 0) {
    iStack_8 = 0;
    iStack_c = 0;
    uStack_10 = 0;
    uStack_14 = 0;
    puStack_18 = (undefined1 *)0x20000;
    uStack_1c = 0x433c16;
    FUN_00420b80();
  }
switchD_00433b53_default:
  if (param_1[0x2a1] != 0) {
    iStack_8 = 0;
    iStack_c = 0x433c2a;
    iVar4 = FUN_00a8c760();
    if (iVar4 != 0) {
      iStack_8 = param_1[0x2a1] + 0x50;
      iStack_c = 0x433c3f;
      FUN_00a8e880();
      iStack_8 = 0;
      iStack_c = 0x3eb2b8c2;
      uStack_10 = 0x393702d3;
      uStack_14 = 0x3ecccccd;
      puStack_18 = &LAB_00433c71;
      (**(code **)(*param_1 + 0x308))();
    }
  }
  return;
LAB_00436b40:
  uVar3 = FUN_00a8cac0(unaff_ESI);
  switch(uVar3) {
  case 0:
    if ((param_1[0x441] != 0) && (param_1[0x441] != 2)) {
      FUN_00aa4080(0x52,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a8cb60(6);
      return;
    }
    FUN_00aa4080(0x56,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8cb60(1);
    return;
  case 1:
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(2);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8cb60(3);
      return;
    }
    break;
  case 3:
    FUN_00aa4080(0x53,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(4);
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    param_1[0x25] = param_1[0x23d];
    fStack_60 = 0.13;
    goto LAB_00436cbd;
  case 5:
    uVar3 = 0x54;
    goto LAB_00436d79;
  case 6:
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(7);
    return;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8cb60(8);
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0x57,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(9);
    return;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    param_1[0x25] = param_1[0x23d];
    fStack_60 = -0.2;
LAB_00436cbd:
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    FUN_00ddc1d0(auStack_50,param_1 + 0x24,5);
    D3DXVec3TransformNormal(&fStack_60,&fStack_60,auStack_50);
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_60);
    param_1[0x15] = (int)(fStack_5c + (float)param_1[0x15]);
    param_1[0x16] = (int)(fStack_58 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_54 + (float)param_1[0x17]);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      if ((float)param_1[0x2a3] < 6.25 != ((float)param_1[0x2a3] == 6.25)) {
        FUN_00a8cb60(0xc);
        return;
      }
LAB_00436f44:
      FUN_00a8cb60(0xe);
      return;
    }
    break;
  case 10:
    uVar3 = 0x58;
LAB_00436d79:
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0xb);
    return;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    if (DAT_018b9174 - 0xa00U < 0x100) {
      if ((float)param_1[0x2a3] < 6.25 == ((float)param_1[0x2a3] == 6.25)) {
        if ((param_1[0x441] == 3) || (param_1[0x441] == 2)) {
          FUN_00420b80(0x20000,0,0,0,0);
        }
        FUN_00a8cb60(0xe);
        return;
      }
      FUN_00a8cb60(0xc);
      return;
    }
    if (9.0 < (float)param_1[0x2a3]) goto LAB_00436f44;
    goto LAB_0043710a;
  case 0xc:
    FUN_00aa4080(0x4a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8cb60(0xd);
    return;
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8cb60(0xe);
      return;
    }
    break;
  case 0xe:
    FUN_00aa4080(0xb2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8cb60(0xf);
    return;
  case 0xf:
    FUN_00ac80a0(0x40000000,0x3f800000);
    if (DAT_018b9174 - 0xa00U < 0x100) {
      if ((param_1[0x441] == 3) || (param_1[0x441] == 2)) {
        FUN_00420b80(0x20000,0,0,0,0);
        return;
      }
      fVar1 = (float)param_1[0x14] - (float)param_1[0x448];
      fVar1 = SQRT(((float)param_1[0x16] - (float)param_1[0x44a]) *
                   ((float)param_1[0x16] - (float)param_1[0x44a]) +
                   ((float)param_1[0x15] - (float)param_1[0x449]) *
                   ((float)param_1[0x15] - (float)param_1[0x449]) + fVar1 * fVar1);
      if (2.5 < fVar1) {
        FUN_00a8e880(param_1 + 0x448);
        fVar5 = (float10)FUN_00ddba30((float)param_1[0x23d] + 3.1415927);
        param_1[0x25] = (int)(float)fVar5;
      }
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 == 0) {
        return;
      }
      if (2.5 < fVar1) {
        return;
      }
      FUN_00420b80(0x30007,0,0,0,0);
      return;
    }
LAB_0043710a:
    FUN_004334e0();
  }
  return;
}

// 00439A20  hkpAllCdPointCollector::hkpAllCdPointCollector_3  size=363  [between]
undefined4 __thiscall hkpAllCdPointCollector::hkpAllCdPointCollector_3(int param_1,float *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  local_1a0 = local_190;
  local_1ac = 0x7f7fffee;
  uVar5 = 0;
  local_1d0 = *param_2 + *(float *)(param_1 + 0x40);
  local_1b0 = vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  local_1cc = param_2[1] + *(float *)(param_1 + 0x44);
  local_1c8 = param_2[2] + *(float *)(param_1 + 0x48);
  local_1c4 = param_2[3] + *(float *)(param_1 + 0x4c);
  local_1c0 = local_1d0;
  local_1bc = local_1cc;
  local_1b8 = local_1c8;
  local_1b4 = local_1c4;
  iVar3 = FUN_009f8b40();
  iVar3 = hkpAllCdPointCollector_24
                    (&local_1b0,&local_1d0,&local_1c0,0x3f000000,iVar3 << 0x10 | 7,"Em0020WallCheck"
                    );
  if ((iVar3 != 0) && (local_1a0 < local_1a0 + local_19c * 0x30)) {
    iVar3 = local_19c;
    piVar7 = (int *)(local_1a0 + 0x28);
    do {
      if (((((float)piVar7[-3] < 1.0) &&
           (iVar6 = (int)*(char *)(*piVar7 + 0x10) + *piVar7, iVar6 != 0)) &&
          (iVar4 = FUN_008f7780(iVar6), iVar3 = local_19c, iVar4 == 0)) &&
         ((uVar2 = *(uint *)(iVar6 + 0xc), uVar2 == 0 ||
          (*(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x20) == 0)))) {
        uVar5 = 1;
      }
      piVar1 = piVar7 + 2;
      piVar7 = piVar7 + 0xc;
    } while (piVar1 < local_1a0 + iVar3 * 0x30);
  }
  local_1b0 = vftable;
  local_19c = 0;
  if (-1 < (int)local_198) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
  }
  return uVar5;
}

// 00439B90  hkpAllCdPointCollector::vf00  size=117  [between]
undefined4 * __thiscall hkpAllCdPointCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = hkpCdPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1a0);
  }
  return param_1;
}

// 00439C10  Em0020::vf4C  size=303  [class]
void __fastcall Em0020::vf4C(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x10c4) = 0;
  BehaviorEmBase::vf4C();
  if (*(int *)(param_1 + 0x1068) == 1) {
    FUN_00438a80();
    FUN_00439190();
    FUN_004312b0();
    return;
  }
  if (DAT_018b9174 - 0xa00U < 0x100) {
    FUN_004377c0();
  }
  else {
    FUN_00435dc0();
  }
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00b7c970();
      if (iVar2 < 0) {
        uVar3 = FUN_00a8cab0();
        if ((uVar3 & 0xffff0000) == 0x70000) {
          (**(code **)(*piVar1 + 0x388))(0);
          FUN_00420b80(0x10000,0,0,0,0);
        }
      }
    }
  }
  FUN_00438a80();
  FUN_00439190();
  FUN_004312b0();
  FUN_00417250();
  FUN_0041f750();
  if ((*(int *)(param_1 + 0x618) != 0x60000) && (*(int *)(param_1 + 0x618) != 0x200008)) {
    FUN_00421570();
    FUN_00420370();
    if ((*(uint *)(param_1 + 0x1064) & 0x2000000) != 0) {
      FUN_00417370();
      return;
    }
    *(undefined4 *)(param_1 + 0x13c0) = 0;
    *(undefined4 *)(param_1 + 0x13c4) = 0;
    *(undefined4 *)(param_1 + 0x13c8) = 0;
    *(undefined4 *)(param_1 + 0x13cc) = 0;
    *(undefined4 *)(param_1 + 0x13d0) = 0;
  }
  return;
}

// 00AABFB0  Em0020::Em0020  size=171  [class]
undefined4 * __fastcall Em0020::Em0020(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  cEspControler::cEspControler();
  param_1[0x462] = 0;
  param_1[0x463] = 0;
  param_1[0x464] = 0;
  param_1[0x465] = 0;
  param_1[0x466] = 0;
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00a8f0e0();
  FUN_00a603a0();
  return param_1;
}

// 00AAC060  Em0020::vf04  size=6  [class]
undefined * Em0020::vf04(void)

{
  return &DAT_01b34c30;
}

// 00AAC070  FUN_00aac070  size=133  [callgraph]
void __fastcall FUN_00aac070(int param_1)

{
  cXml::cXml_7();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  if (*(int *)(param_1 + 0x118c) != 0) {
    *(undefined4 *)(param_1 + 0x1194) = 0;
    if (*(int *)(param_1 + 0x1198) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x118c),0);
      *(undefined4 *)(param_1 + 0x1198) = 0;
    }
    *(undefined4 *)(param_1 + 0x118c) = 0;
    *(undefined4 *)(param_1 + 0x1190) = 0;
  }
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB6990  Em0020::vf00  size=30  [class]
undefined4 __thiscall Em0020::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aac070();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

