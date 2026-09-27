// src/unsorted/unit_009ECC10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009ECC10..009ED0B0, 4 functions

#include "mgrr.h"

// 009ECC10  FUN_009ecc10  size=53  [run]
void __fastcall FUN_009ecc10(int param_1)

{
  cEspShaderShimmer_DAF::vf04();
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return;
}

// 009ECC50  FUN_009ecc50  size=69  [run]
void __fastcall FUN_009ecc50(int param_1)

{
  cEspShaderShimmer_DAF::vf04();
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  return;
}

// 009ECCA0  FUN_009ecca0  size=1014  [run]
void __thiscall FUN_009ecca0(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  
  iVar7 = *(int *)(param_2 + 0x30);
  if (iVar7 != 0) {
    iVar3 = FUN_009e6cc0(&local_70,param_2);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_2 + 0x34);
      if (iVar3 == 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x41);
        if (uVar6 <= *(byte *)(param_1 + 0x42)) {
          puVar5 = (uint *)(uVar6 * 0x70 + 0x38 + iVar7);
          iVar7 = (*(byte *)(param_1 + 0x42) - uVar6) + 1;
          do {
            *puVar5 = *puVar5 & 0xfffffffe;
            puVar5 = puVar5 + 0x1c;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + 0x41);
        bVar1 = *(byte *)(param_1 + 0x42);
        if (uVar6 <= bVar1) {
          do {
            puVar5 = (uint *)((uint)*(byte *)(uVar6 + iVar3) * 0x70 + 0x38 + iVar7);
            *puVar5 = *puVar5 & 0xfffffffe;
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 <= (int)(uint)bVar1);
          return;
        }
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0x34);
      if (iVar3 == 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x41);
        uVar8 = (uint)*(byte *)(param_1 + 0x42);
        if (uVar6 <= uVar8) {
          if (3 < (int)((uVar8 - uVar6) + 1)) {
            iVar3 = uVar6 * 0x70;
            iVar4 = ((uVar8 - uVar6) - 3 >> 2) + 1;
            uVar6 = uVar6 + iVar4 * 4;
            puVar5 = (uint *)(iVar3 + 0xa8 + iVar7);
            do {
              puVar5[-0x1c] = puVar5[-0x1c] | 1;
              puVar5[-0x22] = local_50;
              puVar5[-0x21] = local_4c;
              puVar5[-0x20] = local_48;
              puVar5[-0x1f] = local_44;
              *puVar5 = *puVar5 | 1;
              puVar5[-6] = local_50;
              puVar5[-5] = local_4c;
              puVar5[-4] = local_48;
              puVar5[-3] = local_44;
              puVar5[0x1c] = puVar5[0x1c] | 1;
              puVar5[0x16] = local_50;
              puVar5[0x17] = local_4c;
              puVar5[0x18] = local_48;
              puVar5[0x19] = local_44;
              puVar5[0x38] = puVar5[0x38] | 1;
              iVar4 = iVar4 + -1;
              puVar5[0x32] = local_50;
              puVar5[0x33] = local_4c;
              puVar5[0x34] = local_48;
              puVar5[0x35] = local_44;
              puVar5 = puVar5 + 0x70;
            } while (iVar4 != 0);
          }
          if ((int)uVar6 <= (int)uVar8) {
            iVar3 = (uVar8 - uVar6) + 1;
            puVar5 = (uint *)(uVar6 * 0x70 + 0x38 + iVar7);
            do {
              *puVar5 = *puVar5 | 1;
              puVar5[-6] = local_50;
              iVar3 = iVar3 + -1;
              puVar5[-5] = local_4c;
              puVar5[-4] = local_48;
              puVar5[-3] = local_44;
              puVar5 = puVar5 + 0x1c;
            } while (iVar3 != 0);
          }
        }
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + 0x41);
        uVar8 = (uint)*(byte *)(param_1 + 0x42);
        if (uVar6 <= uVar8) {
          if (3 < (int)((uVar8 - uVar6) + 1)) {
            do {
              iVar4 = (uint)*(byte *)(iVar3 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              uVar6 = uVar6 + 4;
              *(uint *)(iVar4 + 0x20) = local_50;
              *(uint *)(iVar4 + 0x24) = local_4c;
              *(uint *)(iVar4 + 0x28) = local_48;
              *(uint *)(iVar4 + 0x2c) = local_44;
              iVar4 = (uint)*(byte *)(iVar3 + -3 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              *(uint *)(iVar4 + 0x20) = local_50;
              *(uint *)(iVar4 + 0x24) = local_4c;
              *(uint *)(iVar4 + 0x28) = local_48;
              *(uint *)(iVar4 + 0x2c) = local_44;
              iVar4 = (uint)*(byte *)(iVar3 + -2 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              *(uint *)(iVar4 + 0x20) = local_50;
              *(uint *)(iVar4 + 0x24) = local_4c;
              *(uint *)(iVar4 + 0x28) = local_48;
              *(uint *)(iVar4 + 0x2c) = local_44;
              iVar4 = (uint)*(byte *)(iVar3 + -1 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              *(uint *)(iVar4 + 0x20) = local_50;
              *(uint *)(iVar4 + 0x24) = local_4c;
              *(uint *)(iVar4 + 0x28) = local_48;
              *(uint *)(iVar4 + 0x2c) = local_44;
            } while ((int)uVar6 <= (int)(uVar8 - 3));
          }
          for (; (int)uVar6 <= (int)uVar8; uVar6 = uVar6 + 1) {
            iVar4 = (uint)*(byte *)(uVar6 + iVar3) * 0x70;
            *(uint *)(iVar4 + 0x20 + iVar7) = local_50;
            *(uint *)(iVar4 + 0x24 + iVar7) = local_4c;
            *(uint *)(iVar4 + 0x28 + iVar7) = local_48;
            *(uint *)(iVar4 + 0x2c + iVar7) = local_44;
            puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
            *puVar5 = *puVar5 | 1;
          }
        }
      }
      iVar7 = *(int *)(param_2 + 0x28);
      if (iVar7 != 0) {
        uVar2 = *(ushort *)(param_1 + 0x2a);
        iVar3 = 0;
        if (uVar2 != 0) {
          do {
            iVar4 = *(int *)(iVar7 + iVar3 * 4);
            if (local_30 != 0) {
              FUN_00a08de0(1,local_30,local_2c);
              *(undefined4 *)(iVar4 + 0xc) = local_38;
              *(undefined4 *)(iVar4 + 0x1c) = local_34;
              *(undefined4 *)(iVar4 + 0xe0) = local_40;
              *(undefined4 *)(iVar4 + 0xe4) = local_3c;
            }
            if (local_28 != 0) {
              FUN_00a08de0(5,local_28,local_24);
              *(undefined4 *)(iVar4 + 0xc0) = local_70;
              *(undefined4 *)(iVar4 + 0xc4) = local_6c;
              *(undefined4 *)(iVar4 + 200) = local_68;
              *(undefined4 *)(iVar4 + 0xcc) = local_64;
            }
            if (local_20 != 0) {
              FUN_00a08de0(10,local_20,local_1c);
              *(undefined4 *)(iVar4 + 0xd0) = local_60;
              *(undefined4 *)(iVar4 + 0xd4) = local_5c;
              *(undefined4 *)(iVar4 + 0xd8) = local_58;
              *(undefined4 *)(iVar4 + 0xdc) = local_54;
            }
            FID_conflict__memcpy((void *)(iVar4 + 0x20),local_18,0x80);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)uVar2);
          return;
        }
      }
    }
  }
  return;
}

// 009ED0B0  FUN_009ed0b0  size=1041  [run]
void __thiscall FUN_009ed0b0(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  void *local_20;
  
  iVar7 = *(int *)(param_2 + 0x34);
  if (iVar7 != 0) {
    iVar3 = FUN_009e7290(&local_80,param_2);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_2 + 0x38);
      if (iVar3 == 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x51);
        if (uVar6 <= *(byte *)(param_1 + 0x52)) {
          puVar5 = (uint *)(uVar6 * 0x70 + 0x38 + iVar7);
          iVar7 = (*(byte *)(param_1 + 0x52) - uVar6) + 1;
          do {
            *puVar5 = *puVar5 & 0xfffffffe;
            puVar5 = puVar5 + 0x1c;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + 0x51);
        bVar1 = *(byte *)(param_1 + 0x52);
        if (uVar6 <= bVar1) {
          do {
            puVar5 = (uint *)((uint)*(byte *)(uVar6 + iVar3) * 0x70 + 0x38 + iVar7);
            *puVar5 = *puVar5 & 0xfffffffe;
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 <= (int)(uint)bVar1);
          return;
        }
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0x38);
      if (iVar3 == 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x51);
        uVar8 = (uint)*(byte *)(param_1 + 0x52);
        if (uVar6 <= uVar8) {
          if (3 < (int)((uVar8 - uVar6) + 1)) {
            iVar3 = uVar6 * 0x70;
            iVar4 = ((uVar8 - uVar6) - 3 >> 2) + 1;
            uVar6 = uVar6 + iVar4 * 4;
            puVar5 = (uint *)(iVar3 + 0xa8 + iVar7);
            do {
              puVar5[-0x1c] = puVar5[-0x1c] | 1;
              puVar5[-0x22] = local_60;
              puVar5[-0x21] = local_5c;
              puVar5[-0x20] = local_58;
              puVar5[-0x1f] = local_54;
              *puVar5 = *puVar5 | 1;
              puVar5[-6] = local_60;
              puVar5[-5] = local_5c;
              puVar5[-4] = local_58;
              puVar5[-3] = local_54;
              puVar5[0x1c] = puVar5[0x1c] | 1;
              puVar5[0x16] = local_60;
              puVar5[0x17] = local_5c;
              puVar5[0x18] = local_58;
              puVar5[0x19] = local_54;
              puVar5[0x38] = puVar5[0x38] | 1;
              iVar4 = iVar4 + -1;
              puVar5[0x32] = local_60;
              puVar5[0x33] = local_5c;
              puVar5[0x34] = local_58;
              puVar5[0x35] = local_54;
              puVar5 = puVar5 + 0x70;
            } while (iVar4 != 0);
          }
          if ((int)uVar6 <= (int)uVar8) {
            iVar3 = (uVar8 - uVar6) + 1;
            puVar5 = (uint *)(uVar6 * 0x70 + 0x38 + iVar7);
            do {
              *puVar5 = *puVar5 | 1;
              puVar5[-6] = local_60;
              iVar3 = iVar3 + -1;
              puVar5[-5] = local_5c;
              puVar5[-4] = local_58;
              puVar5[-3] = local_54;
              puVar5 = puVar5 + 0x1c;
            } while (iVar3 != 0);
          }
        }
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + 0x51);
        uVar8 = (uint)*(byte *)(param_1 + 0x52);
        if (uVar6 <= uVar8) {
          if (3 < (int)((uVar8 - uVar6) + 1)) {
            do {
              iVar4 = (uint)*(byte *)(iVar3 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              uVar6 = uVar6 + 4;
              *(uint *)(iVar4 + 0x20) = local_60;
              *(uint *)(iVar4 + 0x24) = local_5c;
              *(uint *)(iVar4 + 0x28) = local_58;
              *(uint *)(iVar4 + 0x2c) = local_54;
              iVar4 = (uint)*(byte *)(iVar3 + -3 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              *(uint *)(iVar4 + 0x20) = local_60;
              *(uint *)(iVar4 + 0x24) = local_5c;
              *(uint *)(iVar4 + 0x28) = local_58;
              *(uint *)(iVar4 + 0x2c) = local_54;
              iVar4 = (uint)*(byte *)(iVar3 + -2 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              *(uint *)(iVar4 + 0x20) = local_60;
              *(uint *)(iVar4 + 0x24) = local_5c;
              *(uint *)(iVar4 + 0x28) = local_58;
              *(uint *)(iVar4 + 0x2c) = local_54;
              iVar4 = (uint)*(byte *)(iVar3 + -1 + uVar6) * 0x70;
              puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
              *puVar5 = *puVar5 | 1;
              iVar4 = iVar4 + iVar7;
              *(uint *)(iVar4 + 0x20) = local_60;
              *(uint *)(iVar4 + 0x24) = local_5c;
              *(uint *)(iVar4 + 0x28) = local_58;
              *(uint *)(iVar4 + 0x2c) = local_54;
            } while ((int)uVar6 <= (int)(uVar8 - 3));
          }
          for (; (int)uVar6 <= (int)uVar8; uVar6 = uVar6 + 1) {
            iVar4 = (uint)*(byte *)(uVar6 + iVar3) * 0x70;
            *(uint *)(iVar4 + 0x20 + iVar7) = local_60;
            *(uint *)(iVar4 + 0x24 + iVar7) = local_5c;
            *(uint *)(iVar4 + 0x28 + iVar7) = local_58;
            *(uint *)(iVar4 + 0x2c + iVar7) = local_54;
            puVar5 = (uint *)(iVar4 + 0x38 + iVar7);
            *puVar5 = *puVar5 | 1;
          }
        }
      }
      iVar7 = *(int *)(param_2 + 0x2c);
      if (iVar7 != 0) {
        uVar2 = *(ushort *)(param_1 + 0x3a);
        iVar3 = 0;
        if (uVar2 != 0) {
          do {
            iVar4 = *(int *)(iVar7 + iVar3 * 4);
            if (local_40 != 0) {
              FUN_00a08de0(1,local_40,local_3c);
              *(undefined4 *)(iVar4 + 0xc) = local_48;
              *(undefined4 *)(iVar4 + 0x1c) = local_44;
              *(undefined4 *)(iVar4 + 0xe0) = local_50;
              *(undefined4 *)(iVar4 + 0xe4) = local_4c;
            }
            if (local_38 != 0) {
              FUN_00a08de0(5,local_38,local_34);
              *(undefined4 *)(iVar4 + 0xc0) = local_80;
              *(undefined4 *)(iVar4 + 0xc4) = local_7c;
              *(undefined4 *)(iVar4 + 200) = local_78;
              *(undefined4 *)(iVar4 + 0xcc) = local_74;
            }
            if (local_30 != 0) {
              FUN_00a08de0(2,local_30,local_2c);
              *(undefined4 *)(iVar4 + 0xd0) = local_70;
              *(undefined4 *)(iVar4 + 0xd4) = local_6c;
              *(undefined4 *)(iVar4 + 0xd8) = local_68;
              *(undefined4 *)(iVar4 + 0xdc) = local_64;
            }
            if (local_28 != 0) {
              FUN_00a08de0(10,local_28,local_24);
            }
            FID_conflict__memcpy((void *)(iVar4 + 0x20),local_20,0x80);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)uVar2);
          return;
        }
      }
    }
  }
  return;
}

