// src/unsorted/unit_00EC7140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC7140..00EC75E0, 8 functions

#include "mgrr.h"

// 00EC7140  FUN_00ec7140  size=27  [run]
void __fastcall FUN_00ec7140(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  return;
}

// 00EC7160  FUN_00ec7160  size=48  [run]
void __fastcall FUN_00ec7160(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

// 00EC71F0  FUN_00ec71f0  size=554  [run]
undefined4 __thiscall FUN_00ec71f0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  int local_18;
  int local_14;
  ushort local_c;
  ushort local_8;
  
  if (param_2[4] == 0) {
    return 0;
  }
  iVar5 = param_2[4];
  *param_1 = *(undefined4 *)(iVar5 + 0x50);
  param_1[1] = *(undefined4 *)(iVar5 + 0x54);
  param_1[2] = *(undefined4 *)(iVar5 + 0x58);
  param_1[3] = *(undefined4 *)(iVar5 + 0x5c);
  iVar5 = param_2[4];
  param_1[4] = *(undefined4 *)(iVar5 + 0x50);
  param_1[5] = *(undefined4 *)(iVar5 + 0x54);
  param_1[6] = *(undefined4 *)(iVar5 + 0x58);
  param_1[7] = *(undefined4 *)(iVar5 + 0x5c);
  iVar5 = param_2[4];
  param_1[8] = *(undefined4 *)(iVar5 + 0x90);
  param_1[9] = *(undefined4 *)(iVar5 + 0x94);
  param_1[10] = *(undefined4 *)(iVar5 + 0x98);
  param_1[0xb] = *(undefined4 *)(iVar5 + 0x9c);
  param_1[0x10] = *param_2;
  param_1[0x11] = param_2[1];
  param_1[0x12] = param_2[2];
  param_1[0x13] = param_2[3];
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = param_2[7];
  param_1[0x1a] = 0xffffffff;
  if ((float)param_2[6] != 0.0) {
    if (param_2[5] == 0) {
      return 0;
    }
    iVar5 = (int)*(short *)(param_2[5] + 0x324);
    local_18 = 0;
    if (0 < iVar5) {
      local_14 = 0;
      do {
        if ((((-1 < local_18) && (local_18 < *(short *)(param_2[5] + 0x324))) &&
            (iVar6 = *(int *)(param_2[5] + 800) + local_14, iVar6 != 0)) &&
           ((iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 0x40), iVar6 != 0 &&
            (iVar6 = FUN_00e05f70(iVar6,&DAT_016d8d9c), iVar6 != 0)))) {
          bVar1 = (&DAT_016cabd0)[*(byte *)(iVar6 + 4)];
          local_c = 0;
          local_8 = 0;
          uVar7 = 0;
          if (bVar1 != 0xff) {
            uVar7 = (ushort)bVar1;
          }
          bVar2 = (&DAT_016cabd0)[*(byte *)(iVar6 + 5)];
          uVar4 = (ushort)bVar2;
          if (bVar2 == 0xff) {
            uVar4 = local_c;
          }
          local_c = uVar4;
          bVar3 = (&DAT_016cabd0)[*(byte *)(iVar6 + 6)];
          uVar4 = (ushort)bVar3;
          if (bVar3 == 0xff) {
            uVar4 = local_8;
          }
          local_8 = uVar4;
          if (((bVar1 == 0xff) || (bVar2 == 0xff)) || (bVar3 == 0xff)) {
            FUN_00dd5650(&DAT_016d8da4,(int)(char)*(byte *)(iVar6 + 4),
                         (int)(char)*(byte *)(iVar6 + 5),(int)(char)*(byte *)(iVar6 + 6));
          }
          else if ((ushort)((uVar7 * 0x10 + local_c) * 0x10 + local_8) ==
                   *(short *)(param_2[4] + 0xa0)) {
            param_1[0x1a] = local_18;
            return 1;
          }
        }
        local_14 = local_14 + 0x70;
        local_18 = local_18 + 1;
      } while (local_18 < iVar5);
      return 1;
    }
  }
  return 1;
}

// 00EC7480  FUN_00ec7480  size=62  [run]
void __fastcall FUN_00ec7480(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  puVar1 = param_1;
  do {
    iVar2 = 0x20;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x708] = 0;
  param_1[0x706] = 0;
  param_1[0x704] = param_1;
  param_1[0x705] = param_1 + 0x380;
  return;
}

// 00EC74D0  FUN_00ec74d0  size=101  [run]
void __fastcall FUN_00ec74d0(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x1c20) = *(undefined4 *)(param_1 + 0x1c1c);
  *(undefined4 *)(param_1 + 0x1c1c) = 0;
  if (*(int *)(param_1 + 0x1c18) == 0) {
    *(undefined4 *)(param_1 + 0x1c18) = 1;
    *(int *)(param_1 + 0x1c10) = param_1 + 0xe00;
    *(int *)(param_1 + 0x1c14) = param_1;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c18) = 0;
    *(int *)(param_1 + 0x1c10) = param_1;
    *(int *)(param_1 + 0x1c14) = param_1 + 0xe00;
  }
  uVar1 = 0;
  do {
    *(undefined4 *)(uVar1 + *(int *)(param_1 + 0x1c10)) = 0;
    uVar1 = uVar1 + 0x70;
  } while (uVar1 < 0xe00);
  return;
}

// 00EC7540  FUN_00ec7540  size=1  [run]
void FUN_00ec7540(void)

{
  return;
}

// 00EC7550  FUN_00ec7550  size=15  [run]
undefined4 __thiscall FUN_00ec7550(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return 1;
}

// 00EC75E0  FUN_00ec75e0  size=31  [run]
int __fastcall FUN_00ec75e0(int param_1)

{
  FUN_00de3610(0,0);
  *(undefined4 *)(param_1 + 8) = 0xfff;
  cXmlBinary::cXmlBinary_103();
  return param_1;
}

