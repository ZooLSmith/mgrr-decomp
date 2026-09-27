// src/unsorted/unit_008F2060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F2060..008F3B10, 29 functions

#include "types.h"

// 008F2060  FUN_008f2060  size=88  [run]
uint __fastcall FUN_008f2060(int *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (1 < *(int *)(iVar2 + 0xc)) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  sVar1 = FUN_00912c40(**(undefined4 **)(iVar2 + 8));
  if (sVar1 == 0xfff) {
    return 0xffffffff;
  }
  return (uint)(sVar1 == -1);
}

// 008F22B0  FUN_008f22b0  size=212  [run]
void __fastcall FUN_008f22b0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_4;
  
  FUN_004066f0();
  iVar3 = (**(code **)(*param_1 + 0x1c))();
  if (iVar3 == 0) {
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        FUN_00910a40(*(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4));
        uVar4 = 0;
        if (iStack_4 != 0) {
          uVar2 = *(uint *)(iStack_4 + 0xc);
          if (uVar2 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)((-(uint)(uVar2 != 0) & uVar2) + 0x38);
          }
        }
        FUN_00910a90(uVar4,4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
    }
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar1 = (int *)(iVar3 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
    return;
  }
  return;
}

// 008F2390  FUN_008f2390  size=171  [run]
void __thiscall FUN_008f2390(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x40);
    }
    if (iVar2 == -1) {
      iVar2 = *(int *)(param_1 + 0x34);
      goto LAB_008f23a7;
    }
  }
  iVar2 = FUN_00a12210(iVar2);
LAB_008f23a7:
  if (param_2 == 0) {
    FUN_0119f5b0(1,1,0);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
      return;
    }
  }
  else if (param_2 == 1) {
    FUN_0119f5b0(4,1,0);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xfffb;
      return;
    }
  }
  else if (param_2 == 2) {
    FUN_0119f5b0(3,1,0);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xfffb;
      return;
    }
  }
  else {
    FUN_0119f5b0(5,1,0);
  }
  return;
}

// 008F2440  FUN_008f2440  size=210  [run]
void __thiscall FUN_008f2440(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0xc))();
    iVar2 = param_4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar5);
        if (((param_4 != 0) && (iVar4 = FUN_0091a900(param_3), iVar4 != 0)) &&
           (FUN_008f2390(param_2,param_4), iVar2 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008f24cd;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008f24cd:
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F2520  FUN_008f2520  size=264  [run]
void __thiscall FUN_008f2520(int *param_1,undefined4 param_2,byte *param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  pbVar7 = &DAT_016416fa;
  pbVar3 = param_3;
  do {
    bVar2 = *pbVar3;
    bVar9 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_008f2550:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_008f2555;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar9 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_008f2550;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_008f2555:
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*param_1 + 8))(), iVar4 != 0)) {
    FUN_004066f0();
    iVar5 = (**(code **)(*param_1 + 0xc))();
    iVar4 = param_4;
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        (**(code **)(*param_1 + 0x14))(&param_4,iVar8);
        iVar6 = FUN_00916410(param_3);
        if ((iVar6 != 0) && (FUN_008f2390(param_2,param_4), iVar4 != 0)) {
          if (DAT_01885d68 == 1) {
            return;
          }
          iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          goto LAB_008f25e3;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
    }
    if (DAT_01885d68 != 1) {
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008f25e3:
      piVar1 = (int *)(iVar4 + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F2630  FUN_008f2630  size=276  [run]
void __thiscall FUN_008f2630(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uStack_5;
  int *local_4;
  
  if (param_1[5] != 0) {
    local_4 = param_1;
    FUN_004066f0();
    iVar5 = (**(code **)(*param_1 + 0x1c))();
    if (iVar5 == 0) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      iVar7 = 0;
      if (0 < *(int *)(iVar5 + 0x18)) {
        do {
          iVar2 = *(int *)(*(int *)(iVar5 + 0x14) + iVar7 * 4);
          if (iVar2 != 0) {
            iVar3 = *(int *)(iVar2 + 0x14);
            if (iVar3 == 0) {
              iVar6 = 0;
LAB_008f269b:
              iVar6 = FUN_00a12210(iVar6);
            }
            else {
              uVar4 = *(uint *)(iVar3 + 0xc);
              if (uVar4 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)((-(uint)(uVar4 != 0) & uVar4) + 0x40);
              }
              if (iVar6 != -1) goto LAB_008f269b;
              iVar6 = local_4[0xd];
            }
            if (iVar6 != 0) {
              *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) | 0x100;
            }
            if (iVar3 == param_2) {
              FUN_01197e40(&uStack_5,iVar2);
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar5 + 0x18));
      }
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar5 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F2810  FUN_008f2810  size=58  [run]
void __thiscall FUN_008f2810(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F2850  FUN_008f2850  size=65  [run]
void __fastcall FUN_008f2850(undefined4 *param_1)

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

// 008F28A0  FUN_008f28a0  size=83  [run]
void __fastcall FUN_008f28a0(int param_1)

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

// 008F29E0  FUN_008f29e0  size=57  [run]
void __thiscall FUN_008f29e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F2A20  FUN_008f2a20  size=58  [run]
void __thiscall FUN_008f2a20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F2A60  FUN_008f2a60  size=156  [run]
void __thiscall FUN_008f2a60(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (uVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x40);
    }
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x34);
      goto LAB_008f2a82;
    }
  }
  iVar3 = FUN_00a12210(iVar3);
LAB_008f2a82:
  FUN_0119f5b0(1,1,0);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F2B00  FUN_008f2b00  size=20  [run]
void FUN_008f2b00(undefined4 param_1,undefined4 param_2)

{
  FUN_008f2440(0,param_1,param_2);
  return;
}

// 008F2B20  FUN_008f2b20  size=20  [run]
void FUN_008f2b20(undefined4 param_1,undefined4 param_2)

{
  FUN_008f2520(0,param_1,param_2);
  return;
}

// 008F2B40  FUN_008f2b40  size=393  [run]
void __fastcall FUN_008f2b40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iStack_4;
  
  FUN_004066f0();
  iVar3 = (**(code **)(*param_1 + 0x1c))();
  if (iVar3 == 0) {
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        FUN_00910a40(*(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4));
        FUN_00910a70(1);
        if (iStack_4 != 0) {
          if (DAT_01885d68 != 1) {
            iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
            if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
              if (DAT_01885db8 == 0) {
                FUN_00dd72e0();
              }
              else {
                FUN_00dd5650(&DAT_0163b898);
              }
            }
            piVar1 = (int *)(iVar2 + 4);
            *piVar1 = *piVar1 + 1;
          }
          puVar4 = (uint *)(-(uint)(*(uint *)(iStack_4 + 0xc) != 0) & *(uint *)(iStack_4 + 0xc));
          *puVar4 = *puVar4 | 0x1000;
          puVar4[0xe] = 1;
          if (DAT_01885d68 != 1) {
            piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar1 = *piVar1 + -1;
            if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
    }
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar1 = (int *)(iVar3 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
    return;
  }
  return;
}

// 008F2CD0  FUN_008f2cd0  size=446  [run]
void __thiscall FUN_008f2cd0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  FUN_004066f0();
  iVar3 = (**(code **)(*param_1 + 0x1c))();
  if (iVar3 == 0) {
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        FUN_00910a40(*(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4));
        FUN_00910a70(4);
        if (param_1 != (int *)0x0) {
          if (DAT_01885d68 != 1) {
            iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
            if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
              if (DAT_01885db8 == 0) {
                FUN_00dd72e0();
              }
              else {
                FUN_00dd5650(&DAT_0163b898);
              }
            }
            piVar1 = (int *)(iVar2 + 4);
            *piVar1 = *piVar1 + 1;
          }
          puVar4 = (uint *)(-(uint)(param_1[3] != 0) & param_1[3]);
          *puVar4 = *puVar4 | 0x1000;
          puVar4[0xe] = 4;
          if (DAT_01885d68 != 1) {
            piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar1 = *piVar1 + -1;
            if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        if (param_2 != 0) {
          FUN_00915f10(0x3f800000);
          FUN_00915f60(0x3f800000);
          FUN_00915e80(0x43480000);
          FUN_00915ec0(0x43200000);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
    }
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar1 = (int *)(iVar3 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
  return;
}

// 008F2EA0  FUN_008f2ea0  size=391  [run]
void __fastcall FUN_008f2ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iStack_4;
  
  FUN_004066f0();
  iVar3 = (**(code **)(*param_1 + 0x1c))();
  if (iVar3 == 0) {
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        FUN_00910a40(*(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4));
        FUN_00910a70(5);
        if (iStack_4 != 0) {
          if (DAT_01885d68 != 1) {
            iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
            if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
              if (DAT_01885db8 == 0) {
                FUN_00dd72e0();
              }
              else {
                FUN_00dd5650(&DAT_0163b898);
              }
            }
            piVar1 = (int *)(iVar2 + 4);
            *piVar1 = *piVar1 + 1;
          }
          puVar4 = (uint *)(-(uint)(*(uint *)(iStack_4 + 0xc) != 0) & *(uint *)(iStack_4 + 0xc));
          *puVar4 = *puVar4 | 0x1000;
          puVar4[0xe] = 5;
          if (DAT_01885d68 != 1) {
            piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar1 = *piVar1 + -1;
            if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
    }
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar1 = (int *)(iVar3 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
    return;
  }
  return;
}

// 008F3030  FUN_008f3030  size=168  [run]
void __thiscall FUN_008f3030(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (uVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x40);
    }
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x34);
      goto LAB_008f3052;
    }
  }
  iVar3 = FUN_00a12210(iVar3);
LAB_008f3052:
  FUN_0119f5b0(4,1,0);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) & 0xfffb;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F30E0  FUN_008f30e0  size=20  [run]
void FUN_008f30e0(undefined4 param_1,undefined4 param_2)

{
  FUN_008f2440(1,param_1,param_2);
  return;
}

// 008F3100  FUN_008f3100  size=20  [run]
void FUN_008f3100(undefined4 param_1,undefined4 param_2)

{
  FUN_008f2520(1,param_1,param_2);
  return;
}

// 008F3120  FUN_008f3120  size=168  [run]
void __thiscall FUN_008f3120(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (uVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x40);
    }
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x34);
      goto LAB_008f3142;
    }
  }
  iVar3 = FUN_00a12210(iVar3);
LAB_008f3142:
  FUN_0119f5b0(3,1,0);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) & 0xfffb;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F31D0  FUN_008f31d0  size=139  [run]
void FUN_008f31d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x40);
    }
    if (iVar3 == -1) goto LAB_008f320d;
  }
  FUN_00a12210(iVar3);
LAB_008f320d:
  FUN_0119f5b0(5,1,0);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F32A0  FUN_008f32a0  size=292  [run]
void FUN_008f32a0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  float10 fVar8;
  
  uVar7 = 1;
  fVar8 = (float10)FUN_011a2a30();
  if ((float10)0 != fVar8) {
    uVar7 = 0xb;
  }
  uVar4 = FUN_008fd4d0(param_2);
  if (uVar4 != 0xffffffff) {
    uVar7 = uVar4;
  }
  iVar5 = FUN_00fdbbd0(*(uint *)(param_1 + 0x78) & 0xfffffffe,"buran_wall");
  pvVar3 = ThreadLocalStoragePointer;
  iVar2 = _tls_index;
  if (iVar5 != 0) {
    FUN_004066f0();
    uVar7 = *(uint *)(param_1 + 0xc);
    if (uVar7 != 0) {
      puVar6 = (uint *)(-(uint)(uVar7 != 0) & uVar7);
      *puVar6 = *puVar6 | 1;
      puVar6[2] = puVar6[2] | 0x80000000;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    uVar7 = 0x1f;
  }
  FUN_004066f0();
  puVar6 = (uint *)(-(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc));
  *puVar6 = *puVar6 | 0x2000;
  puVar6[0xf] = uVar7;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00912d80(param_1,uVar7 & 0x1f | param_3 << 0x10);
  return;
}

// 008F33D0  FUN_008f33d0  size=1123  [run]
void FUN_008f33d0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_ac;
  float local_a8;
  float local_a0;
  undefined1 auStack_98 [8];
  undefined1 local_90 [56];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x40);
    }
    if (iVar4 == -1) {
      local_c0 = *(undefined4 *)(param_1 + 0x40);
      local_bc = *(undefined4 *)(param_1 + 0x44);
      local_b8 = *(undefined4 *)(param_1 + 0x48);
      local_ac = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                      *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                      *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18));
      local_a8 = SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                      *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                      *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
      fVar3 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                   *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                   *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
      local_108 = *(float *)(param_1 + 0x28) / fVar3;
      fVar1 = *(float *)(param_1 + 0x38);
      fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar3));
      local_104 = (float)fVar5;
      fVar6 = (float10)fpatan((float10)local_108,(float10)(fVar1 / fVar3));
      local_a0 = (float)fVar6;
      fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) / (float10)local_a8,
                              (float10)*(float *)(param_1 + 0x10) / (float10)local_ac);
      fVar6 = (float10)0;
      local_c8 = (float)fVar6;
      local_cc = (float)fVar6;
      local_d0 = (float)fVar6;
      local_d4 = (float)fVar6;
      local_dc = (float)fVar6;
      local_e0 = (float)fVar6;
      local_e4 = (float)fVar6;
      local_e8 = (float)fVar6;
      local_f0 = (float)fVar6;
      local_f4 = (float)fVar6;
      local_f8 = (float)fVar6;
      local_fc = (float)fVar6;
      local_c4 = 0x3f800000;
      local_d8 = 0x3f800000;
      local_ec = 0x3f800000;
      local_100 = 0x3f800000;
      if (fVar6 != fVar7) {
        D3DXMatrixRotationZ(local_50,(float)fVar7);
        D3DXMatrixMultiply(&local_108,auStack_58,&local_108);
        fVar5 = (float10)local_104;
      }
      if ((float10)0 != fVar5) {
        D3DXMatrixRotationY(local_50,(float)fVar5);
        D3DXMatrixMultiply(&local_108,auStack_58,&local_108);
      }
      if (local_a0 != 0.0) {
        D3DXMatrixRotationX(local_50,local_a0);
        D3DXMatrixMultiply(&local_108,auStack_58,&local_108);
      }
      local_d0 = (float)local_c0;
      local_cc = (float)local_bc;
      local_c8 = (float)local_b8;
      FUN_01005190(&local_100);
      FUN_011a0170(local_90);
      return;
    }
  }
  iVar4 = FUN_00a12210(iVar4);
  if (iVar4 != 0) {
    local_c0 = *(undefined4 *)(iVar4 + 0x40);
    local_bc = *(undefined4 *)(iVar4 + 0x44);
    local_b8 = *(undefined4 *)(iVar4 + 0x48);
    local_ac = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                    *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                    *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    local_a8 = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                    *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                    *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    fVar1 = *(float *)(iVar4 + 0x28);
    local_104 = *(float *)(iVar4 + 0x38) / fVar3;
    fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
    local_108 = (float)fVar5;
    fVar6 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)local_104);
    local_a0 = (float)fVar6;
    fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_a8,
                            (float10)*(float *)(iVar4 + 0x10) / (float10)local_ac);
    fVar6 = (float10)0;
    local_c8 = (float)fVar6;
    local_cc = (float)fVar6;
    local_d0 = (float)fVar6;
    local_d4 = (float)fVar6;
    local_dc = (float)fVar6;
    local_e0 = (float)fVar6;
    local_e4 = (float)fVar6;
    local_e8 = (float)fVar6;
    local_f0 = (float)fVar6;
    local_f4 = (float)fVar6;
    local_f8 = (float)fVar6;
    local_fc = (float)fVar6;
    local_c4 = 0x3f800000;
    local_d8 = 0x3f800000;
    local_ec = 0x3f800000;
    local_100 = 0x3f800000;
    if (fVar6 != fVar7) {
      D3DXMatrixRotationZ(local_90,(float)fVar7);
      D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
      fVar5 = (float10)local_108;
    }
    if ((float10)0 != fVar5) {
      D3DXMatrixRotationY(local_90,(float)fVar5);
      D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
    }
    if (local_a0 != 0.0) {
      D3DXMatrixRotationX(local_90,local_a0);
      D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
    }
    local_d0 = (float)local_c0;
    local_cc = (float)local_bc;
    local_c8 = (float)local_b8;
    FUN_01005190(&local_100);
    FUN_011a0170(local_50);
  }
  FUN_00918520(param_2);
  return;
}

// 008F3840  FUN_008f3840  size=291  [run]
void FUN_008f3840(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_94;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [76];
  
  local_94 = 0;
  if (param_2 == 0) {
    local_94 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    if (uVar1 != 0) {
      local_94 = *(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x40);
    }
    iVar2 = param_1;
    if (local_94 == -1) goto LAB_008f3871;
  }
  iVar2 = FUN_00a12210(local_94);
LAB_008f3871:
  if (iVar2 != 0) {
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
    iVar3 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar3 = param_1;
    }
    if (*(short *)(iVar3 + 0x358) < 1) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 2;
    }
    local_60 = *(undefined4 *)(param_2 + 0x120);
    uStack_5c = *(undefined4 *)(param_2 + 0x124);
    uStack_58 = *(undefined4 *)(param_2 + 0x128);
    uStack_54 = *(undefined4 *)(param_2 + 300);
    iVar3 = iVar2 + 0x10;
    FUN_01005140(iVar3);
    if (local_94 == -1) {
      D3DXMatrixScaling(local_50,*(undefined4 *)(iVar2 + 0x70),*(undefined4 *)(iVar2 + 0x74),
                        *(undefined4 *)(iVar2 + 0x78));
      D3DXMatrixMultiply(iVar3,&local_60,iVar3);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 0x48);
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x4c);
    }
  }
  return;
}

// 008F3970  FUN_008f3970  size=169  [run]
void __thiscall FUN_008f3970(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[5] != 0) {
    FUN_004066f0();
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (iVar2 == 0) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_008f2390(param_2,*(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar2 + 0xc));
      }
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F3A60  FUN_008f3a60  size=65  [run]
void __fastcall FUN_008f3a60(undefined4 *param_1)

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

// 008F3AB0  FUN_008f3ab0  size=93  [run]
undefined4 __thiscall FUN_008f3ab0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_008f28a0();
  return 1;
}

// 008F3B10  FUN_008f3b10  size=61  [run]
void __fastcall FUN_008f3b10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

