// src/unsorted/unit_0098BE20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098BE20..0098C350, 3 functions

#include "types.h"

// 0098BE20  FUN_0098be20  size=37  [run]
undefined4 __thiscall FUN_0098be20(int param_1,int param_2,undefined4 param_3)

{
  if ((-1 < param_2) && (param_2 < 0x60)) {
    *(undefined4 *)(param_1 + 0x180 + param_2 * 4) = param_3;
    return 1;
  }
  return 0;
}

// 0098BE90  FUN_0098be90  size=1209  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0098be90(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = 0;
  uVar4 = 1;
  do {
    *(uint *)(param_1 + iVar2 * 4) = (uint)((uVar4 & DAT_01b6f3bc) == 0);
    *(uint *)(param_1 + 0x180 + iVar2 * 4) = (uint)((uVar4 & DAT_01b6f3c0) == 0);
    iVar2 = iVar2 + 1;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
  } while (iVar2 < 0x16);
  uVar5 = 1;
  uVar3 = 0x400000;
  iVar2 = 0x1e;
  uVar4 = 0x16;
  do {
    uVar6 = uVar4;
    *(uint *)(param_1 + uVar6 * 4) = (uint)((uVar5 & DAT_01b6f3b4) == 0);
    *(uint *)(param_1 + 0x180 + uVar6 * 4) = (uint)(((&DAT_01b6f3c0)[uVar6 >> 5] & uVar3) == 0);
    uVar4 = uVar6 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  bVar1 = (byte)uVar4 & 0x1f;
  uVar3 = 1 << bVar1 | 1U >> 0x20 - bVar1;
  *(uint *)(param_1 + uVar4 * 4) = ~DAT_01b6f3b8 & 1;
  *(uint *)(param_1 + 0x180 + uVar4 * 4) = (uint)(((&DAT_01b6f3c0)[uVar4 >> 5] & uVar3) == 0);
  *(uint *)(param_1 + 4 + uVar4 * 4) = ~(DAT_01b6f3b8 >> 1) & 1;
  uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  *(uint *)(param_1 + 0x184 + uVar4 * 4) = (uint)(((&DAT_01b6f3c0)[uVar6 + 2 >> 5] & uVar3) == 0);
  *(uint *)(param_1 + 8 + uVar4 * 4) = ~(DAT_01b6f3b8 >> 2) & 1;
  uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  *(uint *)(param_1 + 0x188 + uVar4 * 4) = (uint)(((&DAT_01b6f3c0)[uVar6 + 3 >> 5] & uVar3) == 0);
  *(uint *)(param_1 + 0xc + uVar4 * 4) = ~(DAT_01b6f3b8 >> 3) & 1;
  uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  *(uint *)(param_1 + 0x18c + uVar4 * 4) = (uint)(((&DAT_01b6f3c0)[uVar6 + 4 >> 5] & uVar3) == 0);
  *(uint *)(param_1 + (uVar6 + 5) * 4) = ~(DAT_01b6f3b8 >> 4) & 1;
  uVar5 = 1;
  *(uint *)(param_1 + 400 + uVar4 * 4) =
       (uint)(((uVar3 << 1 | (uint)((int)uVar3 < 0)) & (&DAT_01b6f3c0)[uVar6 + 5 >> 5]) == 0);
  bVar1 = (byte)(uVar6 + 6) & 0x1f;
  uVar3 = 1 << bVar1 | 1U >> 0x20 - bVar1;
  iVar2 = 0x17;
  uVar4 = uVar6 + 6;
  do {
    uVar6 = uVar4;
    *(uint *)(param_1 + uVar6 * 4) = (uint)((uVar5 & DAT_01b6f3b0) == 0);
    *(uint *)(param_1 + 0x180 + uVar6 * 4) = (uint)(((&DAT_01b6f3c0)[uVar6 >> 5] & uVar3) == 0);
    uVar4 = uVar6 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = FUN_009c73f0(6);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 0x180 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 4 + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 0x184 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 8 + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 0x188 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0xc + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 0x18c + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x10 + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 400 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x14 + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 0x194 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x18 + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 0x198 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x1c + uVar4 * 4) = 1;
    *(undefined4 *)(param_1 + 0x19c + uVar4 * 4) = 0;
  }
  else {
    *(uint *)(param_1 + uVar4 * 4) = ~_DAT_01b7381c & 1;
    *(uint *)(param_1 + 0x180 + uVar4 * 4) = ~DAT_01b73820 & 1;
    *(uint *)(param_1 + 4 + uVar4 * 4) = ~(_DAT_01b7381c >> 1) & 1;
    *(uint *)(param_1 + 0x184 + uVar4 * 4) = ~(DAT_01b73820 >> 1) & 1;
    *(uint *)(param_1 + 8 + uVar4 * 4) = ~(_DAT_01b7381c >> 2) & 1;
    *(uint *)(param_1 + 0x188 + uVar4 * 4) = ~(DAT_01b73820 >> 2) & 1;
    *(uint *)(param_1 + 0xc + uVar4 * 4) = ~DAT_01b73818 & 1;
    *(uint *)(param_1 + 0x18c + uVar4 * 4) = ~(DAT_01b73820 >> 3) & 1;
    *(uint *)(param_1 + 0x10 + uVar4 * 4) = ~(DAT_01b73818 >> 1) & 1;
    *(uint *)(param_1 + 400 + uVar4 * 4) = ~(DAT_01b73820 >> 4) & 1;
    *(uint *)(param_1 + 0x14 + uVar4 * 4) = ~(DAT_01b73818 >> 2) & 1;
    *(uint *)(param_1 + 0x194 + uVar4 * 4) = ~(DAT_01b73820 >> 5) & 1;
    *(uint *)(param_1 + 0x18 + uVar4 * 4) = ~(DAT_01b73818 >> 3) & 1;
    *(uint *)(param_1 + 0x198 + uVar4 * 4) = ~(DAT_01b73820 >> 6) & 1;
    *(uint *)(param_1 + 0x1c + uVar4 * 4) = ~(DAT_01b73818 >> 4) & 1;
    *(uint *)(param_1 + 0x19c + uVar4 * 4) = ~(DAT_01b73820 >> 7) & 1;
  }
  iVar7 = uVar6 + 9;
  iVar2 = FUN_009c73f0(7);
  if (iVar2 != 0) {
    *(uint *)(param_1 + iVar7 * 4) = ~_DAT_01b73834 & 1;
    *(uint *)(param_1 + 0x180 + iVar7 * 4) = ~DAT_01b73838 & 1;
    *(uint *)(param_1 + 4 + iVar7 * 4) = ~(_DAT_01b73834 >> 1) & 1;
    *(uint *)(param_1 + 0x184 + iVar7 * 4) = ~(DAT_01b73838 >> 1) & 1;
    *(uint *)(param_1 + 8 + iVar7 * 4) = ~(_DAT_01b73834 >> 2) & 1;
    *(uint *)(param_1 + 0x188 + iVar7 * 4) = ~(DAT_01b73838 >> 2) & 1;
    *(uint *)(param_1 + 0xc + iVar7 * 4) = ~DAT_01b73830 & 1;
    *(uint *)(param_1 + 0x18c + iVar7 * 4) = ~(DAT_01b73838 >> 3) & 1;
    *(uint *)(param_1 + 0x10 + iVar7 * 4) = ~(DAT_01b73830 >> 1) & 1;
    *(uint *)(param_1 + 400 + iVar7 * 4) = ~(DAT_01b73838 >> 4) & 1;
    *(uint *)(param_1 + 0x14 + iVar7 * 4) = ~(DAT_01b73830 >> 2) & 1;
    *(uint *)(param_1 + 0x194 + iVar7 * 4) = ~(DAT_01b73838 >> 5) & 1;
    *(uint *)(param_1 + 0x18 + iVar7 * 4) = ~(DAT_01b73830 >> 3) & 1;
    *(uint *)(param_1 + 0x198 + iVar7 * 4) = ~(DAT_01b73838 >> 6) & 1;
    *(uint *)(param_1 + 0x1c + iVar7 * 4) = ~(DAT_01b73830 >> 4) & 1;
    *(uint *)(param_1 + 0x19c + iVar7 * 4) = ~(DAT_01b73838 >> 7) & 1;
    return;
  }
  *(undefined4 *)(param_1 + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 0x180 + iVar7 * 4) = 0;
  *(undefined4 *)(param_1 + 4 + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 0x184 + iVar7 * 4) = 0;
  *(undefined4 *)(param_1 + 8 + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 0x188 + iVar7 * 4) = 0;
  *(undefined4 *)(param_1 + 0xc + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 0x18c + iVar7 * 4) = 0;
  *(undefined4 *)(param_1 + 0x10 + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 400 + iVar7 * 4) = 0;
  *(undefined4 *)(param_1 + 0x14 + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 0x194 + iVar7 * 4) = 0;
  *(undefined4 *)(param_1 + 0x18 + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 0x198 + iVar7 * 4) = 0;
  *(undefined4 *)(param_1 + 0x1c + iVar7 * 4) = 1;
  *(undefined4 *)(param_1 + 0x19c + iVar7 * 4) = 0;
  return;
}

// 0098C350  FUN_0098c350  size=888  [run]
void __fastcall FUN_0098c350(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int local_8;
  
  iVar5 = 0;
  piVar9 = (int *)(param_1 + 0x184);
  do {
    bVar4 = (byte)iVar5;
    DAT_01b6f3c0 = DAT_01b6f3c0 | (uint)(piVar9[-1] != 1) << (bVar4 & 0x1f);
    iVar8 = *piVar9;
    iVar5 = iVar5 + 2;
    piVar9 = piVar9 + 2;
    DAT_01b6f3c0 = DAT_01b6f3c0 | (uint)(iVar8 != 1) << (bVar4 + 1 & 0x1f);
  } while (iVar5 < 0x16);
  uVar3 = 0x18;
  piVar9 = (int *)(param_1 + 0x1dc);
  local_8 = 5;
  uVar7 = 0x16;
  do {
    uVar6 = uVar7;
    (&DAT_01b6f3c0)[uVar6 >> 5] =
         (&DAT_01b6f3c0)[uVar6 >> 5] | (uint)(piVar9[-1] != 1) << ((byte)uVar6 & 0x1f);
    (&DAT_01b6f3c0)[uVar3 - 1 >> 5] =
         (&DAT_01b6f3c0)[uVar3 - 1 >> 5] | (uint)(*piVar9 != 1) << ((byte)uVar3 - 1 & 0x1f);
    (&DAT_01b6f3c0)[uVar3 >> 5] =
         (&DAT_01b6f3c0)[uVar3 >> 5] | (uint)(piVar9[1] != 1) << ((byte)uVar3 & 0x1f);
    (&DAT_01b6f3c0)[uVar3 + 1 >> 5] =
         (&DAT_01b6f3c0)[uVar3 + 1 >> 5] | (uint)(piVar9[2] != 1) << ((byte)(uVar3 + 1) & 0x1f);
    uVar1 = uVar3 + 3;
    (&DAT_01b6f3c0)[uVar3 + 2 >> 5] =
         (&DAT_01b6f3c0)[uVar3 + 2 >> 5] | (uint)(piVar9[3] != 1) << ((byte)(uVar3 + 2) & 0x1f);
    piVar2 = piVar9 + 4;
    uVar7 = uVar6 + 6;
    piVar9 = piVar9 + 6;
    uVar3 = uVar3 + 6;
    (&DAT_01b6f3c0)[uVar1 >> 5] =
         (&DAT_01b6f3c0)[uVar1 >> 5] | (uint)(*piVar2 != 1) << ((byte)uVar1 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  local_8 = 0x17;
  (&DAT_01b6f3c0)[uVar7 >> 5] =
       (&DAT_01b6f3c0)[uVar7 >> 5] |
       (uint)(*(int *)(param_1 + 0x180 + uVar7 * 4) != 1) << ((byte)uVar7 & 0x1f);
  (&DAT_01b6f3c0)[uVar6 + 7 >> 5] =
       (&DAT_01b6f3c0)[uVar6 + 7 >> 5] |
       (uint)(*(int *)(param_1 + 0x184 + uVar7 * 4) != 1) << ((byte)(uVar6 + 7) & 0x1f);
  (&DAT_01b6f3c0)[uVar6 + 8 >> 5] =
       (&DAT_01b6f3c0)[uVar6 + 8 >> 5] |
       (uint)(*(int *)(param_1 + 0x188 + uVar7 * 4) != 1) << ((byte)(uVar6 + 8) & 0x1f);
  (&DAT_01b6f3c0)[uVar6 + 9 >> 5] =
       (&DAT_01b6f3c0)[uVar6 + 9 >> 5] |
       (uint)(*(int *)(param_1 + 0x18c + uVar7 * 4) != 1) << ((byte)(uVar6 + 9) & 0x1f);
  (&DAT_01b6f3c0)[uVar6 + 10 >> 5] =
       (&DAT_01b6f3c0)[uVar6 + 10 >> 5] |
       (uint)(*(int *)(param_1 + 400 + uVar7 * 4) != 1) << ((byte)(uVar6 + 10) & 0x1f);
  piVar9 = (int *)(param_1 + 0x180 + (uVar6 + 0xb) * 4);
  uVar3 = uVar6 + 0xb;
  do {
    uVar7 = uVar3;
    iVar5 = *piVar9;
    uVar3 = uVar7 + 1;
    piVar9 = piVar9 + 1;
    (&DAT_01b6f3c0)[uVar7 >> 5] =
         (&DAT_01b6f3c0)[uVar7 >> 5] | (uint)(iVar5 != 1) << ((byte)uVar7 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = FUN_009c73f0(6);
  if (iVar5 != 0) {
    DAT_01b73820 = DAT_01b73820 | *(int *)(param_1 + 0x180 + uVar3 * 4) != 1;
    DAT_01b73820 = DAT_01b73820 | (uint)(*(int *)(param_1 + 0x184 + uVar3 * 4) != 1) * 2;
    DAT_01b73820 = DAT_01b73820 | (uint)(*(int *)(param_1 + 0x188 + uVar3 * 4) != 1) * 4;
    DAT_01b73820 = DAT_01b73820 | (uint)(*(int *)(param_1 + 0x18c + uVar3 * 4) != 1) * 8;
    DAT_01b73820 = DAT_01b73820 | (uint)(*(int *)(param_1 + 400 + uVar3 * 4) != 1) << 4;
    DAT_01b73820 = DAT_01b73820 | (uint)(*(int *)(param_1 + 0x194 + uVar3 * 4) != 1) << 5;
    DAT_01b73820 = DAT_01b73820 | (uint)(*(int *)(param_1 + 0x198 + uVar3 * 4) != 1) << 6;
    DAT_01b73820 = DAT_01b73820 | (uint)(*(int *)(param_1 + 0x19c + uVar3 * 4) != 1) << 7;
  }
  iVar8 = uVar7 + 9;
  iVar5 = FUN_009c73f0(7);
  if (iVar5 != 0) {
    DAT_01b73838 = DAT_01b73838 | *(int *)(param_1 + 0x180 + iVar8 * 4) != 1;
    DAT_01b73838 = DAT_01b73838 | (uint)(*(int *)(param_1 + 0x184 + iVar8 * 4) != 1) * 2;
    DAT_01b73838 = DAT_01b73838 | (uint)(*(int *)(param_1 + 0x188 + iVar8 * 4) != 1) * 4;
    DAT_01b73838 = DAT_01b73838 | (uint)(*(int *)(param_1 + 0x18c + iVar8 * 4) != 1) * 8;
    DAT_01b73838 = DAT_01b73838 | (uint)(*(int *)(param_1 + 400 + iVar8 * 4) != 1) << 4;
    DAT_01b73838 = DAT_01b73838 | (uint)(*(int *)(param_1 + 0x194 + iVar8 * 4) != 1) << 5;
    DAT_01b73838 = DAT_01b73838 | (uint)(*(int *)(param_1 + 0x198 + iVar8 * 4) != 1) << 6;
    DAT_01b73838 = DAT_01b73838 | (uint)(*(int *)(param_1 + 0x19c + iVar8 * 4) != 1) << 7;
  }
  return;
}

