// src/hw/cOtWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CC4E0..00FAAA30, 31 functions

#include "mgrr.h"

// 009CC4E0  Hw::cOtWork::vf00  size=31  [class]
undefined4 * __thiscall Hw::cOtWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009CD7E0  Hw::cOtWork::cOtWork_24  size=55  [class]
void __fastcall Hw::cOtWork::cOtWork_24(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00A2A070  Hw::cOtWork::cOtWork_19  size=19  [class]
void __fastcall Hw::cOtWork::cOtWork_19(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00A2A750  Hw::cOtWork::cOtWork_20  size=27  [class]
void __fastcall Hw::cOtWork::cOtWork_20(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00A494B0  Hw::cOtWork::cOtWork_21  size=33  [class]
void __fastcall Hw::cOtWork::cOtWork_21(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00A4C6F0  Hw::cOtWork::cOtWork_28  size=33  [class]
void __fastcall Hw::cOtWork::cOtWork_28(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00CB03A0  Hw::cOtWork::cOtWork_13  size=30  [class]
void __fastcall Hw::cOtWork::cOtWork_13(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00CB03C0  FUN_00cb03c0  size=181  [between]
undefined4 __thiscall FUN_00cb03c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00f9cae0(0x30,param_3,*(undefined4 *)(param_2 + 4));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00f9c7d0(param_3,*(undefined4 *)(param_2 + 8));
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00f99ca0();
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = FUN_00f999c0();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - 1.0;
  return 1;
}

// 00CB04C0  FUN_00cb04c0  size=917  [between]
undefined4 __thiscall FUN_00cb04c0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xc0) + param_3 <= *(uint *)(param_1 + 0xc4)) {
    if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x58) != 0)) {
      uVar4 = 0;
      if (3 < (int)param_3) {
        iVar6 = (param_3 - 4 >> 2) + 1;
        uVar4 = iVar6 * 4;
        puVar3 = (undefined4 *)(param_2 + 0x18);
        do {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc0) * 0x30 + *(int *)(param_1 + 0x54));
          *puVar5 = puVar3[-6];
          puVar5[1] = puVar3[-5];
          puVar5[2] = puVar3[-4];
          puVar5[3] = puVar3[-3];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x30) = puVar3[-2];
          iVar1 = iVar2 + 0x10 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[-1];
          *(undefined4 *)(iVar1 + 8) = *puVar3;
          *(undefined4 *)(iVar1 + 0xc) = puVar3[1];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x20 + iVar1 * 0x30) = puVar3[2];
          iVar1 = iVar2 + 0x20 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[3];
          *(undefined4 *)(iVar1 + 8) = puVar3[4];
          *(undefined4 *)(iVar1 + 0xc) = puVar3[5];
          *(short *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc0) * 2) =
               (short)*(int *)(param_1 + 0xc0);
          *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc0) * 0x30 + *(int *)(param_1 + 0x54));
          *puVar5 = puVar3[6];
          puVar5[1] = puVar3[7];
          puVar5[2] = puVar3[8];
          puVar5[3] = puVar3[9];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x30) = puVar3[10];
          iVar1 = iVar2 + 0x10 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[0xb];
          *(undefined4 *)(iVar1 + 8) = puVar3[0xc];
          *(undefined4 *)(iVar1 + 0xc) = puVar3[0xd];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x20 + iVar1 * 0x30) = puVar3[0xe];
          iVar1 = iVar2 + 0x20 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[0xf];
          *(undefined4 *)(iVar1 + 8) = puVar3[0x10];
          *(undefined4 *)(iVar1 + 0xc) = puVar3[0x11];
          *(short *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc0) * 2) =
               (short)*(int *)(param_1 + 0xc0);
          *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc0) * 0x30 + *(int *)(param_1 + 0x54));
          *puVar5 = puVar3[0x12];
          puVar5[1] = puVar3[0x13];
          puVar5[2] = puVar3[0x14];
          puVar5[3] = puVar3[0x15];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x30) = puVar3[0x16];
          iVar1 = iVar2 + 0x10 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[0x17];
          *(undefined4 *)(iVar1 + 8) = puVar3[0x18];
          *(undefined4 *)(iVar1 + 0xc) = puVar3[0x19];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x20 + iVar1 * 0x30) = puVar3[0x1a];
          iVar1 = iVar2 + 0x20 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[0x1b];
          *(undefined4 *)(iVar1 + 8) = puVar3[0x1c];
          *(undefined4 *)(iVar1 + 0xc) = puVar3[0x1d];
          *(short *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc0) * 2) =
               (short)*(int *)(param_1 + 0xc0);
          *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc0) * 0x30 + *(int *)(param_1 + 0x54));
          *puVar5 = puVar3[0x1e];
          puVar5[1] = puVar3[0x1f];
          puVar5[2] = puVar3[0x20];
          puVar5[3] = puVar3[0x21];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x30) = puVar3[0x22];
          iVar1 = iVar2 + 0x10 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[0x23];
          *(undefined4 *)(iVar1 + 8) = puVar3[0x24];
          *(undefined4 *)(iVar1 + 0xc) = puVar3[0x25];
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x54) + 0x20 + *(int *)(param_1 + 0xc0) * 0x30)
          ;
          *puVar5 = puVar3[0x26];
          puVar5[1] = puVar3[0x27];
          puVar5[2] = puVar3[0x28];
          puVar5[3] = puVar3[0x29];
          *(short *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc0) * 2) =
               (short)*(int *)(param_1 + 0xc0);
          *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
          iVar6 = iVar6 + -1;
          puVar3 = puVar3 + 0x30;
        } while (iVar6 != 0);
      }
      if (uVar4 < param_3) {
        iVar6 = param_3 - uVar4;
        puVar3 = (undefined4 *)(uVar4 * 0x30 + param_2 + 0x18);
        do {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc0) * 0x30 + *(int *)(param_1 + 0x54));
          *puVar5 = puVar3[-6];
          puVar5[1] = puVar3[-5];
          puVar5[2] = puVar3[-4];
          puVar5[3] = puVar3[-3];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x30) = puVar3[-2];
          iVar1 = iVar2 + 0x10 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[-1];
          *(undefined4 *)(iVar1 + 8) = *puVar3;
          *(undefined4 *)(iVar1 + 0xc) = puVar3[1];
          iVar1 = *(int *)(param_1 + 0xc0);
          iVar2 = *(int *)(param_1 + 0x54);
          *(undefined4 *)(iVar2 + 0x20 + iVar1 * 0x30) = puVar3[2];
          iVar1 = iVar2 + 0x20 + iVar1 * 0x30;
          *(undefined4 *)(iVar1 + 4) = puVar3[3];
          *(undefined4 *)(iVar1 + 8) = puVar3[4];
          *(undefined4 *)(iVar1 + 0xc) = puVar3[5];
          *(short *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc0) * 2) =
               (short)*(int *)(param_1 + 0xc0);
          *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
          iVar6 = iVar6 + -1;
          puVar3 = puVar3 + 0xc;
        } while (iVar6 != 0);
      }
    }
    return 1;
  }
  return 0;
}

// 00CB0870  Hw::cOtWork::cOtWork_12  size=27  [class]
void __fastcall Hw::cOtWork::cOtWork_12(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00CCC0F0  Hw::cOtWork::cOtWork_26  size=33  [class]
void __fastcall Hw::cOtWork::cOtWork_26(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00CCC460  Hw::cOtWork::cOtWork_27  size=33  [class]
void __fastcall Hw::cOtWork::cOtWork_27(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00CCC860  Hw::cOtWork::cOtWork_25  size=27  [class]
void __fastcall Hw::cOtWork::cOtWork_25(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00CCD370  Hw::cOtWork::cOtWork_22  size=27  [class]
void __fastcall Hw::cOtWork::cOtWork_22(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00CCD400  Hw::cOtWork::cOtWork_23  size=27  [class]
void __fastcall Hw::cOtWork::cOtWork_23(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B650  Hw::cOtWork::cOtWork_5  size=66  [class]
void __fastcall Hw::cOtWork::cOtWork_5(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B700  Hw::cOtWork::cOtWork_10  size=66  [class]
void __fastcall Hw::cOtWork::cOtWork_10(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B750  Hw::cOtWork::cOtWork_9  size=55  [class]
void __fastcall Hw::cOtWork::cOtWork_9(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B790  Hw::cOtWork::cOtWork_8  size=22  [class]
void __fastcall Hw::cOtWork::cOtWork_8(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B7B0  Hw::cOtWork::cOtWork_7  size=33  [class]
void __fastcall Hw::cOtWork::cOtWork_7(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B7E0  Hw::cOtWork::cOtWork_6  size=44  [class]
void __fastcall Hw::cOtWork::cOtWork_6(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B810  Hw::cOtWork::cOtWork_4  size=55  [class]
void __fastcall Hw::cOtWork::cOtWork_4(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B850  Hw::cOtWork::cOtWork_3  size=33  [class]
void __fastcall Hw::cOtWork::cOtWork_3(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B8D0  Hw::cOtWork::cOtWork_2  size=22  [class]
void __fastcall Hw::cOtWork::cOtWork_2(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3B8F0  Hw::cOtWork::cOtWork  size=33  [class]
void __fastcall Hw::cOtWork::cOtWork(undefined4 *param_1)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F3F760  Hw::cOtWork::cOtWork_11  size=66  [class]
void __fastcall Hw::cOtWork::cOtWork_11(undefined4 *param_1)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00FAA900  Hw::cOtWork::cOtWork_17  size=19  [class]
void __fastcall Hw::cOtWork::cOtWork_17(undefined4 *param_1)

{
  FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00FAA920  Hw::cOtWork::cOtWork_16  size=19  [class]
void __fastcall Hw::cOtWork::cOtWork_16(undefined4 *param_1)

{
  FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00FAA940  Hw::cOtWork::cOtWork_15  size=100  [class]
void __fastcall Hw::cOtWork::cOtWork_15(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1[0x1f] != 0) {
    FUN_00fa16d0(param_1[0x1e]);
    piVar1 = (int *)param_1[0x1e];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x1e] = 0;
    }
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00FAA9B0  Hw::cOtWork::cOtWork_14  size=126  [class]
void __fastcall Hw::cOtWork::cOtWork_14(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1[0x29] != 0) {
    FUN_00fa16d0(param_1[0x28]);
    piVar1 = (int *)param_1[0x28];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x28] = 0;
    }
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  FUN_00fa45a0();
  FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00FAAA30  Hw::cOtWork::cOtWork_18  size=27  [class]
void __fastcall Hw::cOtWork::cOtWork_18(undefined4 *param_1)

{
  FUN_00fa45a0();
  FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

