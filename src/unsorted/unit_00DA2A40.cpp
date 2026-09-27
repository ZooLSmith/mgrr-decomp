// src/unsorted/unit_00DA2A40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DA2A40..00DA3830, 18 functions

#include "types.h"

// 00DA2A40  FUN_00da2a40  size=114  [run]
undefined4 __thiscall FUN_00da2a40(short *param_1,short param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *param_1;
  if (param_2 < sVar1) {
    return 0;
  }
  if (((sVar1 == param_2) && (*(int *)(param_1 + 2) != 0)) &&
     (iVar2 = FUN_00d45910((int)sVar1,*(int *)(param_1 + 2)), param_3 < iVar2)) {
    return 0;
  }
  sVar1 = param_1[1];
  if (sVar1 < param_2) {
    return 0;
  }
  if (((sVar1 == param_2) && (*(int *)(param_1 + 4) != 0)) &&
     (iVar2 = FUN_00d45910((int)sVar1,*(int *)(param_1 + 4)), iVar2 < param_3)) {
    return 0;
  }
  return 1;
}

// 00DA2AD0  FUN_00da2ad0  size=67  [run]
undefined4 __fastcall FUN_00da2ad0(short *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00a6e640();
  iVar2 = (**(code **)(*piVar1 + 0x24))((int)*param_1,1,1);
  piVar1 = (int *)FUN_00a6e640();
  iVar3 = (**(code **)(*piVar1 + 0x24))((int)*param_1,1,2);
  if ((iVar2 == 0) && (iVar3 == 0)) {
    return 0;
  }
  return 1;
}

// 00DA2B20  FUN_00da2b20  size=95  [run]
void __fastcall FUN_00da2b20(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[9] = 0;
  param_1[1] = 0x20000;
  param_1[3] = 0x20000;
  param_1[2] = 0x20000;
  param_1[4] = 0x20000;
  param_1[5] = 0x20000;
  param_1[6] = 0x20000;
  param_1[7] = 0x20000;
  param_1[8] = 0x20000;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}

// 00DA2B80  FUN_00da2b80  size=79  [run]
undefined4 __thiscall FUN_00da2b80(uint *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  iVar1 = 0;
  puVar2 = param_1 + 1;
  while ((((*param_1 & 1 << ((byte)iVar1 & 0x1f)) == 0 || (param_2 < *puVar2)) ||
         (puVar2[1] < param_2))) {
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
    if (3 < iVar1) {
      return 0;
    }
  }
  return 1;
}

// 00DA2BE0  FUN_00da2be0  size=160  [run]
undefined4 __thiscall FUN_00da2be0(int param_1,short param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar2 == 0) {
    return 1;
  }
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0x30);
  do {
    if ((uVar2 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
      sVar1 = (short)piVar4[-2];
      if ((sVar1 <= param_2) &&
         (((sVar1 != param_2 || (piVar4[-1] == 0)) ||
          (iVar3 = FUN_00d45910((int)sVar1,piVar4[-1]), iVar3 <= param_3)))) {
        sVar1 = *(short *)((int)piVar4 + -6);
        if ((param_2 <= sVar1) &&
           (((sVar1 != param_2 || (*piVar4 == 0)) ||
            (iVar3 = FUN_00d45910((int)sVar1,*piVar4), param_3 <= iVar3)))) {
          return 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 3;
    if (3 < iVar5) {
      return 0;
    }
  } while( true );
}

// 00DA2C80  FUN_00da2c80  size=201  [run]
void __fastcall FUN_00da2c80(uint *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_1 | 0xf0000000;
  param_1[1] = param_1[1] | 0x80000000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x40400000;
  param_1[4] = 0x3f5f66f3;
  param_1[5] = 0;
  param_1[6] = 0x3f000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x40600000;
  param_1[10] = 0x40900000;
  param_1[0xb] = 0x3e32b8c2;
  param_1[0xc] = 0xbeb2b8c2;
  param_1[0xd] = 0x3f9c61aa;
  param_1[0xe] = 0x3e99999a;
  param_1[0xf] = 0x3eb2b8c2;
  param_1[0x10] = 0x3f860a92;
  param_1[0x11] = 0x3d4ccccd;
  param_1[0x12] = 0x3e4ccccd;
  param_1[0x15] = 0x3e4ccccd;
  param_1[0x13] = 0x3f000000;
  param_1[0x14] = 0x3d4ccccd;
  param_1[0x16] = 0x3ecccccd;
  param_1[0x17] = 0x41200000;
  param_1[0x18] = 0x3f000000;
  param_1[0x19] = 0;
  return;
}

// 00DA2DA0  FUN_00da2da0  size=170  [run]
void __fastcall FUN_00da2da0(undefined4 *param_1)

{
  *param_1 = 0x41200000;
  param_1[1] = 0x40800000;
  param_1[2] = 0x40c00000;
  param_1[3] = 0x40a00000;
  param_1[5] = 0x40a00000;
  param_1[4] = 0x40c00000;
  param_1[6] = 0x40c00000;
  param_1[7] = 0x3dcccccd;
  param_1[8] = 0x3dcccccd;
  param_1[9] = 0x3dcccccd;
  param_1[10] = 0x3dcccccd;
  param_1[0xf] = 0x40a00000;
  param_1[0xb] = 0x3dcccccd;
  param_1[0x10] = 0x41200000;
  param_1[0xc] = 0x3dcccccd;
  param_1[0x11] = 0x3f000000;
  param_1[0xd] = 0x3dcccccd;
  param_1[0x12] = 0x3f800000;
  param_1[0xe] = 0x3dcccccd;
  param_1[0x13] = 0x3dcccccd;
  return;
}

// 00DA2EA0  FUN_00da2ea0  size=624  [run]
void __fastcall FUN_00da2ea0(undefined4 *param_1)

{
  *param_1 = 0x3f000000;
  param_1[1] = 0x40000000;
  param_1[3] = 0x40000000;
  param_1[2] = 0x3f000000;
  param_1[4] = 0x42200000;
  param_1[5] = 0x3f400000;
  param_1[6] = 0x40000000;
  param_1[7] = 0x42b40000;
  param_1[8] = 0x3dcccccd;
  param_1[9] = 0x42b40000;
  param_1[10] = 0x3e99999a;
  param_1[0xb] = 0xbf8e147b;
  param_1[0xc] = 0x3fb9999a;
  param_1[0xd] = 0xc008f5c3;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3fa147ae;
  param_1[0x10] = 0x40200000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3fa66666;
  param_1[0x13] = 0x3f000000;
  param_1[0x14] = 0x41e00000;
  param_1[0x15] = 0x42200000;
  param_1[0x16] = 0x3fa66666;
  param_1[0x17] = 0xbf8e147b;
  param_1[0x18] = 0x3fb9999a;
  param_1[0x19] = 0xc008f5c3;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3fa147ae;
  param_1[0x1c] = 0x40200000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3fa66666;
  param_1[0x1f] = 0x3f000000;
  param_1[0x20] = 0xbf8e147b;
  param_1[0x21] = 0x3fb9999a;
  param_1[0x22] = 0xc008f5c3;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3fa147ae;
  param_1[0x25] = 0x40200000;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3fa66666;
  param_1[0x28] = 0x3f000000;
  param_1[0x29] = 0x41e00000;
  param_1[0x2a] = 0x42200000;
  param_1[0x2b] = 0x3fa66666;
  param_1[0x2c] = 0xbf8e147b;
  param_1[0x2d] = 0x3fb9999a;
  param_1[0x2e] = 0xc008f5c3;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x3fa147ae;
  param_1[0x31] = 0x40200000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3fa66666;
  param_1[0x34] = 0x3f000000;
  param_1[0x35] = 0x41e00000;
  param_1[0x36] = 0x42200000;
  param_1[0x37] = 0x3fa66666;
  param_1[0x38] = 0x3f000000;
  param_1[0x39] = 0x3fc00000;
  param_1[0x3a] = 0xbf000000;
  param_1[0x3b] = 0x41f00000;
  param_1[0x3c] = 0xbf000000;
  param_1[0x3d] = 0x3fc51eb8;
  param_1[0x3e] = 0xbf59999a;
  param_1[0x3f] = 0xbe4ccccd;
  param_1[0x40] = 0x3fb33333;
  param_1[0x41] = 0x40200000;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3fa66666;
  param_1[0x44] = 0x3ecccccd;
  param_1[0x45] = 0x42480000;
  param_1[0x46] = 0xc2480000;
  param_1[0x47] = 0x42480000;
  param_1[0x48] = 0x42480000;
  param_1[0x49] = 0x42480000;
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x42480000;
  return;
}

// 00DA3170  FUN_00da3170  size=348  [run]
void __fastcall FUN_00da3170(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x19] = 0;
  param_1[0x32] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0x10010;
  param_1[4] = 0x10010;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x10010;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x10010;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x10010;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x10010;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x10010;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x10010;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0x10010;
  param_1[0x1d] = 0x10010;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x10010;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x10010;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x10010;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x10010;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x10010;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x10010;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)((int)param_1 + 0xce) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)((int)param_1 + 0xda) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined2 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  return;
}

// 00DA32D0  FUN_00da32d0  size=89  [run]
undefined4 __thiscall FUN_00da32d0(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  iVar2 = 0;
  puVar1 = param_1;
  while (((((*param_1 & 1 << ((byte)iVar2 & 0x1f)) == 0 || (puVar1[1] != param_2)) ||
          (param_3 < puVar1[2])) || (puVar1[3] < param_3))) {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 3;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 00DA3330  FUN_00da3330  size=83  [run]
undefined4 __thiscall FUN_00da3330(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = 0;
  if (*(uint *)(param_1 + 100) != 0) {
    puVar2 = (uint *)(param_1 + 0x70);
    do {
      if (((((*(uint *)(param_1 + 100) & 1 << ((byte)iVar1 & 0x1f)) != 0) && (puVar2[-2] == param_2)
           ) && (puVar2[-1] <= param_3)) && (param_3 <= *puVar2)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar1 < 8);
  }
  return 0;
}

// 00DA3390  FUN_00da3390  size=170  [run]
undefined4 __thiscall FUN_00da3390(int param_1,short param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 200);
  if (uVar2 == 0) {
    return 1;
  }
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0xd4);
  do {
    if ((uVar2 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
      sVar1 = (short)piVar4[-2];
      if ((sVar1 <= param_2) &&
         (((sVar1 != param_2 || (piVar4[-1] == 0)) ||
          (iVar3 = FUN_00d45910((int)sVar1,piVar4[-1]), iVar3 <= param_3)))) {
        sVar1 = *(short *)((int)piVar4 + -6);
        if ((param_2 <= sVar1) &&
           (((sVar1 != param_2 || (*piVar4 == 0)) ||
            (iVar3 = FUN_00d45910((int)sVar1,*piVar4), param_3 <= iVar3)))) {
          return 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 3;
    if (3 < iVar5) {
      return 0;
    }
  } while( true );
}

// 00DA3440  FUN_00da3440  size=122  [run]
undefined4 __fastcall FUN_00da3440(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  uVar1 = *(uint *)(param_1 + 0xfc);
  if (uVar1 == 0) {
    return 1;
  }
  iVar5 = 0;
  psVar6 = (short *)(param_1 + 0x100);
  do {
    if ((uVar1 & 1 << ((byte)iVar5 & 0x1f)) != 0) {
      piVar2 = (int *)FUN_00a6e640();
      iVar3 = (**(code **)(*piVar2 + 0x24))((int)*psVar6,1,1);
      piVar2 = (int *)FUN_00a6e640();
      iVar4 = (**(code **)(*piVar2 + 0x24))((int)*psVar6,1,2);
      if ((iVar3 != 0) || (iVar4 != 0)) {
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
    psVar6 = psVar6 + 1;
    if (0 < iVar5) {
      return 0;
    }
  } while( true );
}

// 00DA34C0  FUN_00da34c0  size=104  [run]
undefined4 __thiscall FUN_00da34c0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x104) == 0) {
    return 1;
  }
  iVar2 = 0;
  while (((*(uint *)(param_1 + 0x104) & 1 << ((byte)iVar2 & 0x1f)) == 0 ||
         (bVar1 = *(byte *)(iVar2 + 0x108 + param_1),
         (*(uint *)(param_2 + 0x8b8 + (uint)(bVar1 >> 5) * 4) & 0x80000000U >> (bVar1 & 0x1f)) == 0)
         )) {
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 00DA3530  FUN_00da3530  size=192  [run]
void __fastcall FUN_00da3530(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3f5f66f3;
  param_1[5] = 0x40400000;
  param_1[6] = 0x3e3851ec;
  param_1[7] = 0x3e19999a;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0xb] = 0xbdfa35dd;
  *(undefined2 *)(param_1 + 0x10) = 0x78;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0xbfb2b8c2;
  param_1[0xf] = 0x3fb2b8c2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x15] = 0x40490fdb;
  *(undefined4 *)((int)param_1 + 0x5a) = 0xf000f;
  *(undefined4 *)((int)param_1 + 0x5e) = 0xf000f;
  *(undefined4 *)((int)param_1 + 0x62) = 0xf000f;
  *(undefined2 *)((int)param_1 + 0x66) = 0xf;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0xf000f;
  return;
}

// 00DA3620  FUN_00da3620  size=283  [run]
void __thiscall FUN_00da3620(undefined4 *param_1,undefined4 *param_2)

{
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
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((int)param_1 + 0x59) = *(undefined1 *)((int)param_2 + 0x59);
  *(undefined2 *)((int)param_1 + 0x5a) = *(undefined2 *)((int)param_2 + 0x5a);
  *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)(param_2 + 0x17);
  *(undefined2 *)((int)param_1 + 0x5e) = *(undefined2 *)((int)param_2 + 0x5e);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)((int)param_1 + 0x62) = *(undefined2 *)((int)param_2 + 0x62);
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_2 + 0x19);
  *(undefined2 *)((int)param_1 + 0x66) = *(undefined2 *)((int)param_2 + 0x66);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined2 *)((int)param_1 + 0x6a) = *(undefined2 *)((int)param_2 + 0x6a);
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x1b);
  *(undefined2 *)((int)param_1 + 0x6e) = *(undefined2 *)((int)param_2 + 0x6e);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)((int)param_1 + 0x72) = *(undefined2 *)((int)param_2 + 0x72);
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0x1d);
  *(undefined2 *)((int)param_1 + 0x76) = *(undefined2 *)((int)param_2 + 0x76);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
  return;
}

// 00DA37F0  FUN_00da37f0  size=53  [run]
void FUN_00da37f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00f98aa0();
  uVar2 = FUN_00f98a90(uVar1);
  FUN_00de5560(param_1,param_2,param_3,uVar2,uVar1);
  return;
}

// 00DA3830  FUN_00da3830  size=89  [run]
void __thiscall
FUN_00da3830(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  if ((*(int *)(param_1 + 0x90) != 0) && ((DAT_01bea084 & 0x80000000) == 0)) {
    FUN_00de59f0(param_2);
    *(undefined4 *)(param_1 + 0x88) = param_4;
    *(undefined4 *)(param_1 + 0x84) = param_3;
    FUN_00de6460(param_5,param_6,param_7);
  }
  return;
}

