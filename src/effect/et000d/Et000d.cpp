// src/effect/et000d/Et000d.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005CBA00..00AB7F90, 37 functions

#include "types.h"

// 005CBA00  Et000d::vf40  size=123  [class]
undefined4 __fastcall Et000d::vf40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00a8caf0(0,0,0,0);
  param_1[0x220] = 0;
  pcVar1 = *(code **)(*param_1 + 0x20);
  param_1[0x221] = -0x40800000;
  param_1[0x21e] = 0;
  param_1[0x222] = 0x43b40000;
  param_1[0x21f] = 0;
  param_1[0x223] = -1;
  param_1[0x225] = 0;
  param_1[0x21c] = 0;
  (*pcVar1)();
  return 1;
}

// 005CBA80  Et000d::vf44  size=47  [class]
void __fastcall Et000d::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
    *(undefined4 *)(param_1 + 0x764) = 0;
  }
  Behavior::vf44();
  return;
}

// 005CBAB0  Et000d::vf48  size=1  [class]
void Et000d::vf48(void)

{
  return;
}

// 005CBAC0  Et000d::vf50  size=16  [class]
void Et000d::vf50(void)

{
  FUN_00a93170();
  Behavior::vf50();
  return;
}

// 005CBAD0  FUN_005cbad0  size=35  [between]
void __fastcall FUN_005cbad0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 100))();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x186] = 0x37;
  }
  return;
}

// 005CBB20  FUN_005cbb20  size=964  [between]
void __thiscall FUN_005cbb20(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  *(byte *)(param_1 + 0x898) = *param_2;
  *(byte *)(param_1 + 0x899) = param_2[1];
  *(byte *)(param_1 + 0x89a) = param_2[2];
  *(byte *)(param_1 + 0x89b) = param_2[3];
  *(undefined1 *)(param_1 + 0x89c) = 0;
  pbVar4 = &DAT_0164351c;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbb80:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbb85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbb80;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbb85:
  if (iVar3 == 0) {
    FUN_00a8caf0(4,0,0,0);
    return;
  }
  pbVar4 = &DAT_01643514;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbbc0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbbc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbbc0;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbbc5:
  if (iVar3 == 0) {
    FUN_00a8caf0(9,0,0,0);
    return;
  }
  pbVar4 = &DAT_0163e1d8;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbc00:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbc05;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbc00;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbc05:
  if (iVar3 == 0) {
    FUN_00a8caf0(5,0,0,0);
    return;
  }
  pbVar4 = &DAT_0163e1d0;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbc40:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbc45;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbc40;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbc45:
  if (iVar3 == 0) {
    FUN_00a8caf0(6,0,0,0);
    return;
  }
  pbVar4 = &DAT_0163cfb0;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbc80:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbc85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbc80;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbc85:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x10,0,0,0);
    return;
  }
  pbVar4 = &DAT_0164350c;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbcc0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbcc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbcc0;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbcc5:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x12,0,0,0);
    return;
  }
  pbVar4 = &DAT_01640d24;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbd00:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbd05;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbd00;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbd05:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x13,0,0,0);
    return;
  }
  pbVar4 = &DAT_01640d7c;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbd40:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbd45;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbd40;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbd45:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x14,0,0,0);
    return;
  }
  pbVar4 = &DAT_01643504;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbd80:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbd85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbd80;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbd85:
  if (iVar3 == 0) {
    FUN_00a8caf0(0xd,0,0,0);
    return;
  }
  pbVar4 = &DAT_016434fc;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbdc0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbdc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbdc0;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbdc5:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x1d,0,0,0);
    return;
  }
  pbVar4 = &DAT_016434f4;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbe00:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbe05;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbe00;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbe05:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x1f,0,0,0);
    return;
  }
  pbVar4 = &DAT_016434ec;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbe40:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbe45;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbe40;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbe45:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x20,0,0,0);
    return;
  }
  pbVar4 = &DAT_016434e4;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005cbe80:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbe85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005cbe80;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbe85:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x21,0,0,0);
    return;
  }
  pbVar2 = &DAT_016434dc;
  do {
    bVar1 = *param_2;
    bVar5 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_005cbec0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005cbec5;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar5 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_005cbec0;
    param_2 = param_2 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cbec5:
  if (iVar3 == 0) {
    FUN_00a8caf0(0x22,0,0,0);
    return;
  }
  FUN_00a8caf0(0,0,0,0);
  return;
}

// 005CBEF0  FUN_005cbef0  size=42  [between]
float10 __fastcall FUN_005cbef0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if ((iVar1 != 2) && (iVar1 != 7)) {
    if (iVar1 != 0x37) {
      return (float10)15.0;
    }
    return (float10)60.0;
  }
  return (float10)30.0;
}

// 005CBF20  FUN_005cbf20  size=63  [between]
void __fastcall FUN_005cbf20(int *param_1)

{
  float fVar1;
  
  fVar1 = (float)param_1[0x21d];
  param_1[0x21e] = 1;
  param_1[0x21d] = (int)(fVar1 - 1.0);
  if (fVar1 - 1.0 < 0.0) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x21e] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x005cbf5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 005CC010  FUN_005cc010  size=68  [between]
uint FUN_005cc010(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01be9db8;
  (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
  iVar2 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar2 != 0) & (uint)piVar1;
}

// 005CC060  FUN_005cc060  size=188  [between]
void __fastcall FUN_005cc060(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005cc072_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    goto switchD_005cc072_default;
  }
  FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 0;
switchD_005cc072_caseD_1:
  iVar1 = FUN_005cc010();
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar1 + 0xcf8) & *(uint *)(iVar1 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
switchD_005cc072_default:
      return;
    }
  }
  fVar2 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar2;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CC130  FUN_005cc130  size=219  [between]
void __fastcall FUN_005cc130(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x894) = 0x14;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00a8caf0(0x37,0,0,0);
    return;
  }
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x32c))(), iVar2 == 0)) {
      iVar2 = *(int *)(param_1 + 0x618);
      if ((iVar2 != 2) && (iVar2 != 7)) {
        if (iVar2 != 0x37) {
          *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
          *(undefined4 *)(param_1 + 0x874) = 0x41700000;
          return;
        }
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(undefined4 *)(param_1 + 0x874) = 0x42700000;
        return;
      }
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x874) = 0x41f00000;
    }
  }
  return;
}

// 005CC210  FUN_005cc210  size=248  [between]
void __fastcall FUN_005cc210(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005cc222_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    goto switchD_005cc222_default;
  }
  FUN_00a9e290(&DAT_01643524,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 0x17;
switchD_005cc222_caseD_1:
  iVar1 = FUN_005cc010();
  if (iVar1 == 0) {
LAB_005cc2c7:
    (**(code **)(*param_1 + 100))();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      iVar2 = *param_1;
      uVar4 = (**(code **)(*piVar3 + 0x84))();
      (**(code **)(iVar2 + 0x7c))(piVar3 + 0x10,uVar4);
    }
    if ((*(int *)(iVar1 + 0x40c8) != 8) ||
       ((*(uint *)(iVar1 + 0xcf8) & *(uint *)(iVar1 + 0xe50)) != 0)) goto LAB_005cc2c7;
  }
  fVar5 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar5;
  param_1[0x187] = param_1[0x187] + 1;
switchD_005cc222_default:
  return;
}

// 005CC320  FUN_005cc320  size=139  [between]
void __fastcall FUN_005cc320(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    iVar1 = FUN_005cc010();
    if ((((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
        (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && (*(int *)(iVar1 + 0x4b4) == 0xf0070)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x894) = 0x23;
    }
  case 1:
    iVar1 = FUN_005cc010();
    if ((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 == 0)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  }
  return;
}

// 005CC3C0  FUN_005cc3c0  size=139  [between]
void __fastcall FUN_005cc3c0(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    iVar1 = FUN_005cc010();
    if ((((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
        (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && (*(int *)(iVar1 + 0x4b4) == 0x2070a)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x894) = 0x24;
    }
  case 1:
    iVar1 = FUN_005cc010();
    if ((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 == 0)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  }
  return;
}

// 005CC460  FUN_005cc460  size=203  [between]
undefined4 FUN_005cc460(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float unaff_retaddr;
  undefined *puVar5;
  
  fVar3 = (float10)FUN_00e049b0();
  if (fVar3 < (float10)0.1) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 != (int *)0x0) {
        puVar5 = &DAT_01be9db8;
        (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar5);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*piVar1 + 0x32c))();
          if (iVar2 != 0) {
            iVar2 = FUN_00b8bca0();
            if (iVar2 == 0) {
              iVar2 = FUN_00a957b0(0);
              fVar3 = (float10)FUN_005cbef0();
              fVar4 = (float10)FUN_00a958c0(0);
              if ((float10)(float)((float10)iVar2 - fVar3 * (float10)unaff_retaddr) <
                  fVar4 * (float10)60.0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 005CC530  FUN_005cc530  size=104  [between]
undefined4 FUN_005cc530(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x32c))();
        if (iVar2 != 0) {
          fVar3 = (float10)FUN_00bda020();
          if ((float10)0 == fVar3) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 005CC5A0  FUN_005cc5a0  size=249  [between]
void __fastcall FUN_005cc5a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_005cc5b2_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0x61c) = 1;
  *(undefined4 *)(param_1 + 0x894) = 3;
switchD_005cc5b2_caseD_1:
  iVar1 = FUN_005cc010();
  iVar2 = FUN_00a81330();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
  }
  if (((((iVar1 == 0) || (*(int *)(iVar1 + 0x40c8) != 8)) ||
       ((*(uint *)(iVar1 + 0xcf8) & *(uint *)(iVar1 + 0xe50)) != 0)) &&
      ((piVar3 == (int *)0x0 ||
       (iVar1 = (**(code **)(*piVar3 + 0x158))(0x44,*(undefined4 *)(iVar1 + 0x4f0)), iVar1 == 0))))
     && (iVar1 = FUN_005cc530(), iVar1 == 0)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x618);
  if ((iVar1 != 2) && (iVar1 != 7)) {
    if (iVar1 != 0x37) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x874) = 0x41700000;
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x874) = 0x42700000;
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0x874) = 0x41f00000;
  return;
}

// 005CC6B0  FUN_005cc6b0  size=126  [between]
void __thiscall FUN_005cc6b0(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_2;
  if (fVar3 < (float10)0) {
    fVar3 = (float10)FUN_00e049b0();
  }
  iVar2 = FUN_005cc460((float)fVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_005cc530();
    if (iVar2 == 0) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x618);
  if ((iVar2 == 2) || (iVar2 == 7)) {
    uVar1 = 0x41f00000;
  }
  else if (iVar2 == 0x37) {
    uVar1 = 0x42700000;
  }
  else {
    uVar1 = 0x41700000;
  }
  *(undefined4 *)(param_1 + 0x874) = uVar1;
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 005CCA70  FUN_005cca70  size=248  [between]
void __fastcall FUN_005cca70(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005cca82_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    return;
  }
  FUN_00a9e290(&DAT_0163cfb0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 != (int *)0x0) {
    iVar3 = *param_1;
    uVar2 = (**(code **)(*piVar1 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
  }
  param_1[0x225] = 0x22;
switchD_005cca82_caseD_1:
  iVar3 = FUN_005cc010();
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar3 + 0xcf8) & *(uint *)(iVar3 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CCB80  FUN_005ccb80  size=443  [between]
void __fastcall FUN_005ccb80(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005ccb9c_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    return;
  }
  FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 8;
  iVar1 = FUN_008ec660(param_1,0x3f99999a,0x3f000000,0x41a00000,0x41a00000,0x78,6,0);
  local_20 = 0x3fc90fdb;
  local_1c = 0;
  local_18 = 0;
  param_1[0x1d9] = iVar1;
  FUN_008e0b20(&local_20);
  *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
  FUN_008e59c0(0x40);
  FUN_008e6d00();
switchD_005ccb9c_caseD_1:
  iVar1 = FUN_005cc010();
  fVar2 = (float10)FUN_00e049b0();
  fVar3 = (float10)FUN_00e049b0();
  FUN_00a96030(0,(float)((float10)(float)fVar2 / fVar3));
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x40c8) != 8)) ||
      ((*(uint *)(iVar1 + 0xcf8) & *(uint *)(iVar1 + 0xe50)) != 0)) &&
     ((DAT_01bea090 & 0x8000) == 0)) {
    (**(code **)(*param_1 + 100))();
    fVar2 = (float10)FUN_00bda020();
    if (((float10)10.0 <= fVar2) && (iVar1 = FUN_00a94ce0(0), iVar1 == 0)) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar2 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar2;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CCEB0  FUN_005cceb0  size=595  [between]
void __fastcall FUN_005cceb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9e290(&DAT_01643534,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 5;
    iVar2 = FUN_008ec660(param_1,0x3f99999a,0x3f000000,0x41a00000,0x41a00000,0x78,6,0);
    local_20 = 0x3fc90fdb;
    local_1c = 0;
    local_18 = 0;
    param_1[0x1d9] = iVar2;
    FUN_008e0b20(&local_20);
    iVar2 = param_1[0x1d9];
    if (*(int *)(iVar2 + 0x104) != 1) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
    FUN_008e59c0(0x40);
    FUN_008e59c0(0x20);
    FUN_008e6d00();
    iVar2 = FUN_00a12210(0);
    FUN_008e4580(iVar2 + 0x40,1);
    break;
  case 1:
    break;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    return;
  }
  piVar1 = (int *)FUN_005cc010();
  FUN_00a92f90();
  iVar2 = FUN_00e26e90();
  if (iVar2 == 0) {
    fVar4 = (float10)1;
  }
  else {
    fVar4 = (float10)FUN_00e36840(0);
  }
  fVar3 = (float10)FUN_00e049b0();
  FUN_00a96030(0,(float)((float10)(float)fVar4 / fVar3));
  iVar2 = (**(code **)(*piVar1 + 0x32c))();
  if (iVar2 != 0) {
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar4 = (float10)1;
    }
    else {
      fVar4 = (float10)FUN_00e36840(0);
    }
    fVar3 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)(fVar4 * (float10)0.5) / fVar3));
  }
  if ((piVar1[0x1032] != 8) || ((piVar1[0x33e] & piVar1[0x394]) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CD890  FUN_005cd890  size=249  [between]
void __fastcall FUN_005cd890(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005cd8a2_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    goto switchD_005cd8a2_default;
  }
  FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 6;
switchD_005cd8a2_caseD_1:
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 == (int *)0x0) {
LAB_005cd934:
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  else {
    if (piVar1[0x1032] != 8) {
      iVar3 = *param_1;
      uVar2 = (**(code **)(*piVar1 + 0x84))();
      (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
      if (piVar1[0x1032] != 8) goto LAB_005cd934;
    }
    if ((piVar1[0x33e] & piVar1[0x394]) != 0) goto LAB_005cd934;
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
switchD_005cd8a2_default:
  return;
}

// 005CD9A0  FUN_005cd9a0  size=572  [between]
void __fastcall FUN_005cd9a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 7;
    iVar2 = FUN_008ec660(param_1,0x3f99999a,0x3f000000,0x41a00000,0x41a00000,0x78,5,0);
    local_20 = 0x3fc90fdb;
    local_1c = 0;
    local_18 = 0;
    param_1[0x1d9] = iVar2;
    FUN_008e0b20(&local_20);
    iVar2 = param_1[0x1d9];
    if (*(int *)(iVar2 + 0x104) != 1) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
    FUN_008e6d00();
    iVar2 = FUN_00a12210(0);
    FUN_008e4580(iVar2 + 0x40,1);
    FUN_008e5ac0(2);
    break;
  case 1:
    break;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    return;
  }
  piVar1 = (int *)FUN_005cc010();
  FUN_00a92f90();
  iVar2 = FUN_00e26e90();
  if (iVar2 == 0) {
    fVar3 = (float10)1;
  }
  else {
    fVar3 = (float10)FUN_00e36840(0);
  }
  FUN_00a96030(0,(float)fVar3);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x32c))();
    if (iVar2 != 0) {
      uVar4 = 0;
      FUN_00a92f90(0);
      fVar3 = (float10)FUN_00407ae0(uVar4);
      FUN_00a96030(0,(float)(fVar3 + fVar3));
    }
    if (piVar1[0x1032] != 8) {
      iVar2 = *param_1;
      uVar4 = (**(code **)(*piVar1 + 0x84))();
      (**(code **)(iVar2 + 0x7c))(piVar1 + 0x10,uVar4);
      if (piVar1[0x1032] != 8) goto LAB_005cdb7d;
    }
    if ((piVar1[0x33e] & piVar1[0x394]) == 0) goto LAB_005cdb63;
  }
LAB_005cdb7d:
  (**(code **)(*param_1 + 100))();
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    fVar3 = (float10)FUN_00e049b0();
    FUN_005cc6b0((float)(fVar3 + fVar3));
    return;
  }
LAB_005cdb63:
  fVar3 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar3;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CE040  FUN_005ce040  size=519  [between]
void __fastcall FUN_005ce040(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x225] = 0xc;
    FUN_005cc010();
    iVar1 = FUN_00a94d60(&DAT_01643594);
    if (iVar1 == 0) {
      return;
    }
    param_1[0x187] = 4;
    return;
  case 1:
    FUN_00a9e290(&DAT_0164358c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar1 = FUN_008ec660(param_1,0x3f99999a,0x3f000000,0x41a00000,0x41a00000,0x78,6,0);
    local_20 = 0x3fc90fdb;
    local_1c = 0;
    local_18 = 0;
    param_1[0x1d9] = iVar1;
    FUN_008e0b20(&local_20);
    *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
    FUN_008e59c0(0x40);
    FUN_008e6d00();
    break;
  case 2:
    break;
  case 3:
    FUN_005cbf20();
    return;
  case 4:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    return;
  }
  iVar1 = FUN_005cc010();
  FUN_00a92f90();
  iVar2 = FUN_00e26e90();
  if (iVar2 == 0) {
    fVar4 = (float10)1;
  }
  else {
    fVar4 = (float10)FUN_00e36840(0);
  }
  fVar3 = (float10)FUN_00e049b0();
  FUN_00a96030(0,(float)((float10)(float)fVar4 / fVar3));
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x40c8) != 8)) ||
      (iVar2 = FUN_00a9f710(&DAT_0164358c), iVar2 != 0)) ||
     ((*(uint *)(iVar1 + 0xcf8) & *(uint *)(iVar1 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CE260  FUN_005ce260  size=249  [between]
void __fastcall FUN_005ce260(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005ce272_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    goto switchD_005ce272_default;
  }
  FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 0x11;
switchD_005ce272_caseD_1:
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 == (int *)0x0) {
LAB_005ce304:
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  else {
    if (piVar1[0x1032] != 8) {
      iVar3 = *param_1;
      uVar2 = (**(code **)(*piVar1 + 0x84))();
      (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
      if (piVar1[0x1032] != 8) goto LAB_005ce304;
    }
    if ((piVar1[0x33e] & piVar1[0x394]) != 0) goto LAB_005ce304;
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
switchD_005ce272_default:
  return;
}

// 005CE370  FUN_005ce370  size=249  [between]
void __fastcall FUN_005ce370(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005ce382_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    goto switchD_005ce382_default;
  }
  FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 0x12;
switchD_005ce382_caseD_1:
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 == (int *)0x0) {
LAB_005ce414:
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  else {
    if (piVar1[0x1032] != 8) {
      iVar3 = *param_1;
      uVar2 = (**(code **)(*piVar1 + 0x84))();
      (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
      if (piVar1[0x1032] != 8) goto LAB_005ce414;
    }
    if ((piVar1[0x33e] & piVar1[0x394]) != 0) goto LAB_005ce414;
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
switchD_005ce382_default:
  return;
}

// 005CE480  FUN_005ce480  size=304  [between]
void __fastcall FUN_005ce480(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x186] == 0x18) {
      FUN_00a9e290(&DAT_01643020,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x225] = 0x30;
    }
    else if (param_1[0x186] == 0x19) {
      FUN_00a9e290(&DAT_01643038,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x225] = 0x33;
    }
    else {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 1:
    break;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    return;
  }
  iVar1 = FUN_005cc010();
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar1 + 0xcf8) & *(uint *)(iVar1 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar2 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar2;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CEA30  FUN_005cea30  size=248  [between]
void __fastcall FUN_005cea30(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005cea42_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    return;
  }
  FUN_00a9e290(&DAT_01641638,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 != (int *)0x0) {
    iVar3 = *param_1;
    uVar2 = (**(code **)(*piVar1 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
  }
  param_1[0x225] = 0x21;
switchD_005cea42_caseD_1:
  iVar3 = FUN_005cc010();
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar3 + 0xcf8) & *(uint *)(iVar3 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CECB0  FUN_005cecb0  size=248  [between]
void __fastcall FUN_005cecb0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005cecc2_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    return;
  }
  FUN_00a9e290(&DAT_016434ec,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 != (int *)0x0) {
    iVar3 = *param_1;
    uVar2 = (**(code **)(*piVar1 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
  }
  param_1[0x225] = 0x1e;
switchD_005cecc2_caseD_1:
  iVar3 = FUN_005cc010();
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar3 + 0xcf8) & *(uint *)(iVar3 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CEDC0  FUN_005cedc0  size=248  [between]
void __fastcall FUN_005cedc0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005cedd2_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    return;
  }
  FUN_00a9e290(&DAT_016434e4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 != (int *)0x0) {
    iVar3 = *param_1;
    uVar2 = (**(code **)(*piVar1 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
  }
  param_1[0x225] = 0x1f;
switchD_005cedd2_caseD_1:
  iVar3 = FUN_005cc010();
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar3 + 0xcf8) & *(uint *)(iVar3 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CEED0  FUN_005ceed0  size=248  [between]
void __fastcall FUN_005ceed0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005ceee2_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    return;
  }
  FUN_00a9e290(&DAT_016434dc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  piVar1 = (int *)FUN_005cc010();
  if (piVar1 != (int *)0x0) {
    iVar3 = *param_1;
    uVar2 = (**(code **)(*piVar1 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar1 + 0x10,uVar2);
  }
  param_1[0x225] = 0x20;
switchD_005ceee2_caseD_1:
  iVar3 = FUN_005cc010();
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar3 + 0xcf8) & *(uint *)(iVar3 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar4 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar4;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CEFE0  FUN_005cefe0  size=205  [between]
void __fastcall FUN_005cefe0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_005ceff2_caseD_1;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
  default:
    return;
  }
  FUN_00a9e290(&DAT_016435ac,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 0x32;
switchD_005ceff2_caseD_1:
  iVar1 = FUN_005cc010();
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x40c8) != 8)) ||
     ((*(uint *)(iVar1 + 0xcf8) & *(uint *)(iVar1 + 0xe50)) != 0)) {
    (**(code **)(*param_1 + 100))();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      FUN_005cc6b0(0xbf800000);
      return;
    }
  }
  fVar2 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar2;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CF1C0  FUN_005cf1c0  size=560  [between]
void __fastcall FUN_005cf1c0(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  float10 fVar8;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_005cbf20();
    return;
  case 3:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  default:
    return;
  }
  piVar2 = (int *)FUN_005cc010();
  FUN_00a92f90();
  iVar3 = FUN_00e26e90();
  if (iVar3 == 0) {
    fVar8 = (float10)1;
  }
  else {
    fVar8 = (float10)FUN_00e36840(0);
  }
  FUN_00a96030(0,(float)fVar8);
  iVar3 = (**(code **)(*piVar2 + 0x32c))();
  if (iVar3 != 0) {
    pbVar6 = &DAT_0163e1d0;
    pbVar4 = (byte *)FUN_00a95df0(0);
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005cf2a0:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005cf2a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005cf2a0;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005cf2a5:
    if (iVar3 == 0) {
      FUN_00a92f90(0);
      fVar8 = (float10)FUN_00407ae0(iVar3);
      FUN_00a96030(0,(float)(fVar8 + fVar8));
    }
  }
  pbVar6 = &DAT_0163e1d8;
  pbVar4 = (byte *)FUN_00a95df0(0);
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_005cf2f5:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_005cf2fa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_005cf2f5;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cf2fa:
  if ((iVar3 == 0) && (piVar2[0x1032] != 8)) {
    iVar3 = *param_1;
    uVar5 = (**(code **)(*piVar2 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar2 + 0x10,uVar5);
  }
  pbVar6 = &DAT_0163e1d0;
  pbVar4 = (byte *)FUN_00a95df0(0);
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_005cf350:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_005cf355;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_005cf350;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005cf355:
  if (iVar3 == 0) {
    if (piVar2[0x1032] != 8) {
      iVar3 = *param_1;
      uVar5 = (**(code **)(*piVar2 + 0x84))();
      (**(code **)(iVar3 + 0x7c))(piVar2 + 0x10,uVar5);
      goto LAB_005cf37c;
    }
LAB_005cf385:
    if ((piVar2[0x33e] & piVar2[0x394]) == 0) goto LAB_005cf3a9;
  }
  else {
LAB_005cf37c:
    if (piVar2[0x1032] == 8) goto LAB_005cf385;
  }
  (**(code **)(*param_1 + 100))();
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    FUN_005cc6b0(0xbf800000);
    return;
  }
LAB_005cf3a9:
  fVar8 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar8;
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005CF880  Et000d::vf4C  size=7056  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Et000d::vf4C(int *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 unaff_ESI;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  
  Behavior::vf4C();
  switch(param_1[0x186]) {
  default:
    FUN_005cf1c0();
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x005cf8aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 2:
    switch(param_1[0x187]) {
    case 0:
      iVar5 = FUN_005cc010();
      FUN_00a92f90();
      iVar6 = FUN_00e26e90();
      if (iVar6 != 0) {
        FUN_00e36970(0);
      }
      FUN_00a9e290(&DAT_016434cc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      (**(code **)(*param_1 + 100))();
      param_1[0x14] = *(int *)(iVar5 + 0x40);
      param_1[0x15] = *(int *)(iVar5 + 0x44);
      param_1[0x16] = *(int *)(iVar5 + 0x48);
      param_1[0x17] = *(int *)(iVar5 + 0x4c);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x225] = 2;
      return;
    case 1:
      goto switchD_005cc745_caseD_1;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
    default:
      return;
    }
  case 3:
    switch(param_1[0x187]) {
    case 0:
      FUN_00a9e290(&DAT_016434d4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x225] = 1;
      break;
    case 1:
      break;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    FUN_005ccb80();
    return;
  case 5:
    FUN_005cd890();
    return;
  case 6:
    FUN_005cd9a0();
    return;
  case 7:
    FUN_005cc5a0();
    return;
  case 8:
    FUN_0093dc50();
    switch(param_1[0x187]) {
    case 0:
      goto switchD_005ccd6d_caseD_0;
    case 1:
      goto switchD_005ccd6d_caseD_1;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
  case 9:
    FUN_005cc060();
    return;
  case 10:
    FUN_005cceb0();
    return;
  case 0xb:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x225] = 0xd;
      FUN_005cc010();
      iVar5 = FUN_00a94d60(&DAT_01643544);
      if (iVar5 == 0) {
        return;
      }
      param_1[0x187] = 4;
      return;
    case 1:
      FUN_00a9e290(&DAT_0164353c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 2:
      break;
    case 3:
      FUN_005cbf20();
      return;
    case 4:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((iVar6 = FUN_00a9f710(&DAT_0164353c), iVar6 != 0 ||
        ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)))) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0xc:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x225] = 0xe;
      FUN_005cc010();
      iVar5 = FUN_00a94d60(&DAT_0164354c);
      if (iVar5 == 0) {
        return;
      }
      param_1[0x187] = 4;
      return;
    case 1:
      FUN_00a9e290(&DAT_0164353c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 2:
      break;
    case 3:
      FUN_005cbf20();
      return;
    case 4:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((iVar6 = FUN_00a9f710(&DAT_0164353c), iVar6 != 0 ||
        ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)))) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0xd:
    switch(param_1[0x187]) {
    case 0:
      FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      piVar2 = (int *)FUN_005cc010();
      if (piVar2 != (int *)0x0) {
        iVar5 = *param_1;
        uVar3 = (**(code **)(*piVar2 + 0x84))();
        (**(code **)(iVar5 + 0x7c))(piVar2 + 0x10,uVar3);
      }
      param_1[0x225] = 0x13;
      break;
    case 1:
      break;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0xe:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x225] = 0xf;
      FUN_005cc010();
      iVar5 = FUN_00a94d60(&DAT_0164355c);
      if (iVar5 == 0) {
        return;
      }
      param_1[0x187] = 4;
      return;
    case 1:
      FUN_00a9e290(&DAT_01643554,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 2:
      break;
    case 3:
      FUN_005cbf20();
      return;
    case 4:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((iVar6 = FUN_00a9f710(&DAT_01643554), iVar6 != 0 ||
        ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)))) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0xf:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x225] = 0x10;
      FUN_005cc010();
      iVar5 = FUN_00a94d60(&DAT_0164356c);
      if (iVar5 == 0) {
        return;
      }
      param_1[0x187] = 4;
      return;
    case 1:
      FUN_00a9e290(&DAT_01643564,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 2:
      break;
    case 3:
      FUN_005cbf20();
      return;
    case 4:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((iVar6 = FUN_00a9f710(&DAT_01643564), iVar6 != 0 ||
        ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)))) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0x10:
    FUN_005cca70();
    return;
  case 0x11:
    FUN_0093dc50();
    switch(param_1[0x187]) {
    case 0:
      goto switchD_005cdc0d_caseD_0;
    case 1:
      goto switchD_005cdc0d_caseD_1;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
  case 0x12:
    switch(param_1[0x187]) {
    case 0:
      FUN_00a9e290(param_1 + 0x226,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x225] = 9;
      break;
    case 1:
      break;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0x13:
    FUN_005ce260();
    return;
  case 0x14:
    FUN_005ce370();
    return;
  case 0x15:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x225] = 0xb;
      FUN_005cc010();
      iVar5 = FUN_00a94d60(&DAT_01643584);
      if (iVar5 == 0) {
        return;
      }
      param_1[0x187] = 4;
      return;
    case 1:
      FUN_00a9e290(&DAT_0164357c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      piVar2 = (int *)FUN_005cc010();
      if (piVar2 != (int *)0x0) {
        iVar5 = *param_1;
        uVar3 = (**(code **)(*piVar2 + 0x84))();
        (**(code **)(iVar5 + 0x7c))(piVar2 + 0x10,uVar3);
      }
      break;
    case 2:
      break;
    case 3:
      FUN_005cbf20();
      return;
    case 4:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((iVar6 = FUN_00a9f710(&DAT_0164357c), iVar6 != 0 ||
        ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)))) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0x16:
    FUN_005ce040();
    return;
  case 0x17:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
    break;
  case 0x18:
  case 0x19:
    FUN_005ce480();
    return;
  case 0x1a:
    FUN_005cc210();
    return;
  case 0x1b:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x225] = 0x18;
      FUN_005cc010();
      iVar5 = FUN_00a94d60(&DAT_016435a4);
      if (iVar5 == 0) {
        return;
      }
      param_1[0x187] = 4;
      return;
    case 1:
      FUN_00a9e290(&DAT_0164359c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 2:
      break;
    case 3:
      FUN_005cbf20();
      return;
    case 4:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((iVar6 = FUN_00a9f710(&DAT_0164359c), iVar6 != 0 ||
        ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)))) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0x1c:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x225] = 0x19;
      FUN_005cc010();
      iVar5 = FUN_00a94d60(&DAT_016435a4);
      if (iVar5 == 0) {
        return;
      }
      param_1[0x187] = 4;
      return;
    case 1:
      FUN_00a9e290(&DAT_0164359c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 2:
      break;
    case 3:
      FUN_005cbf20();
      return;
    case 4:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if ((((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
        (iVar6 = FUN_00a9f710(&DAT_0164359c), iVar6 != 0)) ||
       ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0x1d:
    switch(param_1[0x187]) {
    case 0:
      FUN_00a9e290(&DAT_016434fc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      piVar2 = (int *)FUN_005cc010();
      if (piVar2 != (int *)0x0) {
        iVar5 = *param_1;
        uVar3 = (**(code **)(*piVar2 + 0x84))();
        (**(code **)(iVar5 + 0x7c))(piVar2 + 0x10,uVar3);
      }
      param_1[0x225] = 0x1a;
      break;
    case 1:
      break;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0x1e:
    FUN_005cea30();
    return;
  case 0x1f:
    switch(param_1[0x187]) {
    case 0:
      FUN_00a9e290(&DAT_016434f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      piVar2 = (int *)FUN_005cc010();
      if (piVar2 != (int *)0x0) {
        iVar5 = *param_1;
        uVar3 = (**(code **)(*piVar2 + 0x84))();
        (**(code **)(iVar5 + 0x7c))(piVar2 + 0x10,uVar3);
      }
      param_1[0x225] = 0x1d;
      break;
    case 1:
      break;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0,0);
      return;
    default:
      return;
    }
    iVar5 = FUN_005cc010();
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 == 0) {
      fVar10 = (float10)1;
    }
    else {
      fVar10 = (float10)FUN_00e36840(0);
    }
    fVar9 = (float10)FUN_00e049b0();
    FUN_00a96030(0,(float)((float10)(float)fVar10 / fVar9));
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40c8) != 8)) ||
       ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)) {
      (**(code **)(*param_1 + 100))();
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 == 0) {
        FUN_005cc6b0(0xbf800000);
        return;
      }
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 0x20:
    FUN_005cecb0();
    return;
  case 0x21:
    FUN_005cedc0();
    return;
  case 0x22:
    FUN_005ceed0();
    return;
  case 0x23:
    FUN_005cefe0();
    return;
  case 0x24:
    switch(param_1[0x187]) {
    case 0:
      goto switchD_005cf0d2_caseD_0;
    case 1:
      goto switchD_005cf0d2_caseD_1;
    case 2:
      FUN_005cbf20();
      return;
    case 3:
      FUN_00a8caf0(0x37,0,0);
      return;
    default:
      return;
    }
  case 0x35:
    FUN_005cc320();
    return;
  case 0x36:
    FUN_005cc3c0();
    return;
  case 0x37:
    iVar5 = param_1[0x187];
    if (iVar5 == 0) {
      iVar5 = param_1[0x186];
      if ((iVar5 == 2) || (iVar5 == 7)) {
        iVar5 = 0x41f00000;
      }
      else if (iVar5 == 0x37) {
        iVar5 = 0x42700000;
      }
      else {
        iVar5 = 0x41700000;
      }
      param_1[0x220] = iVar5;
      param_1[0x21f] = 1;
      param_1[0x187] = 1;
    }
    else if (iVar5 != 1) {
      if (iVar5 != 2) {
        return;
      }
      FUN_009fdde0();
      return;
    }
    fVar11 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar11 - 1.0);
    if (fVar11 - 1.0 < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    return;
  }
  switch(param_1[0x187]) {
  case 0:
    goto switchD_005cf415_caseD_0;
  default:
    return;
  case 2:
    (**(code **)(*param_1 + 100))();
    fVar11 = (float)param_1[0x221];
    bVar8 = false;
    if (!NAN(fVar11) && 0.0 < fVar11 != (fVar11 == 0.0)) {
      fVar11 = (float)param_1[0x221];
      param_1[0x221] = (int)((float)param_1[0x221] - 1.0);
      if (0.0 < fVar11) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    iVar5 = FUN_005cc010();
    iVar6 = FUN_00a94ce0(0);
    if (((iVar6 == 0) &&
        ((iVar5 == 0 || ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) != 0)))) && (!bVar8))
    {
      FUN_005cc6b0(0xbf800000);
      return;
    }
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 3:
    FUN_005cbf20();
    return;
  case 4:
    FUN_00a8caf0(0x37,0,0,0);
    return;
  }
switchD_005cf0d2_caseD_0:
  FUN_00a9e290(&DAT_016420c4,0,0,0x3f800000,0x8000000,0xbf800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 0x31;
switchD_005cf0d2_caseD_1:
  iVar5 = FUN_005cc010();
  (**(code **)(*param_1 + 100))();
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x40c8) == 8)) &&
     ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) == 0)) {
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 == 0) {
    FUN_005cc6b0(0xbf800000);
    return;
  }
  fVar10 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar10;
  param_1[0x187] = 2;
  return;
switchD_005cc745_caseD_1:
  iVar5 = FUN_005cc010();
  FUN_00a92f90();
  iVar6 = FUN_00e26e90();
  if (iVar6 == 0) {
    fVar10 = (float10)1;
  }
  else {
    fVar10 = (float10)FUN_00e36840(0);
  }
  FUN_00a96030(0,(float)fVar10);
  if (((iVar5 != 0) && ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) == 0)) &&
     (*(int *)(iVar5 + 0x40c8) == 8)) {
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  (**(code **)(*param_1 + 100))();
  FUN_00a92f90();
  iVar5 = FUN_00e26e90();
  if (iVar5 == 0) {
    fVar10 = (float10)-1.0;
  }
  else {
    fVar10 = (float10)FUN_00e36970(0);
  }
  fVar11 = (float)(fVar10 + (float10)0.15);
  if ((float10)0 < fVar10 + (float10)0.15) {
    uVar3 = 0;
    FUN_00a92f90(0);
    fVar10 = (float10)FUN_0043f390(uVar3);
    fVar11 = (float)((float10)fVar11 / fVar10);
  }
  iVar5 = FUN_00a94ce0(0);
  if ((iVar5 != 0) || (0.7 < fVar11)) {
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_005cc6b0(0xbf800000);
  return;
switchD_005cdc0d_caseD_0:
  iVar5 = FUN_005cc010();
  if (iVar5 == 0) {
    fVar10 = (float10)-1.0;
  }
  else {
    uVar3 = 0;
    FUN_00a92f90(0);
    fVar10 = (float10)FUN_00407b40(uVar3);
  }
  FUN_00a9e290(&DAT_01643574,0,0,0x3f800000,0x8000000,(float)fVar10,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 10;
switchD_005cdc0d_caseD_1:
  iVar5 = FUN_005cc010();
  (**(code **)(*param_1 + 100))();
  fVar11 = _DAT_01be942c;
  fVar10 = (float10)FUN_00a92ff0();
  FUN_00a96030(0,(float)((float10)fVar11 / fVar10));
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x40c8) == 8)) &&
     ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) == 0)) {
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 == 0) {
    FUN_005cc6b0(0xbf800000);
    return;
  }
  fVar10 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar10;
  param_1[0x187] = 2;
  return;
switchD_005ccd6d_caseD_0:
  iVar5 = FUN_005cc010();
  if (iVar5 == 0) {
    fVar10 = (float10)-1.0;
  }
  else {
    uVar3 = 0;
    FUN_00a92f90(0);
    fVar10 = (float10)FUN_00407b40(uVar3);
  }
  FUN_00a9e290(&DAT_0164352c,0,0,0x3f800000,0x8000000,(float)fVar10,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x225] = 4;
switchD_005ccd6d_caseD_1:
  iVar5 = FUN_005cc010();
  fVar11 = _DAT_01be942c;
  fVar10 = (float10)FUN_00a92ff0();
  FUN_00a96030(0,(float)((float10)fVar11 / fVar10));
  (**(code **)(*param_1 + 100))();
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x40c8) == 8)) &&
     ((*(uint *)(iVar5 + 0xcf8) & *(uint *)(iVar5 + 0xe50)) == 0)) {
    fVar10 = (float10)FUN_005cbef0();
    param_1[0x21d] = (int)(float)fVar10;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 == 0) {
    FUN_005cc6b0(0xbf800000);
    return;
  }
  fVar10 = (float10)FUN_005cbef0();
  param_1[0x21d] = (int)(float)fVar10;
  param_1[0x187] = 2;
  return;
switchD_005cf415_caseD_0:
  switch(param_1[0x186]) {
  case 0x25:
    _strcpy_s(&stack0xfffffff8,5,"90e0");
    param_1[0x225] = 0x25;
    break;
  case 0x26:
    _strcpy_s(&stack0xfffffff8,5,"90e1");
    param_1[0x225] = 0x26;
    break;
  case 0x27:
    _strcpy_s(&stack0xfffffff8,5,"90e2");
    param_1[0x225] = 0x27;
    break;
  case 0x28:
    _strcpy_s(&stack0xfffffff8,5,"90e3");
    param_1[0x225] = 0x29;
    break;
  case 0x29:
    _strcpy_s(&stack0xfffffff8,5,"90e5");
    param_1[0x225] = 0x2a;
    break;
  case 0x2a:
    _strcpy_s(&stack0xfffffff8,5,"90e4");
    param_1[0x225] = 0x2b;
    break;
  case 0x2b:
    _strcpy_s(&stack0xfffffff8,5,"90e6");
    param_1[0x225] = 0x2c;
    break;
  case 0x2c:
    _strcpy_s(&stack0xfffffff8,5,"90e7");
    param_1[0x225] = 0x28;
    break;
  case 0x2d:
    _strcpy_s(&stack0xfffffff8,5,"90e8");
    param_1[0x225] = 0x2d;
    if ((DAT_018b9174 & 0xf00) == 0xc00) {
      _strcpy_s(&stack0xfffffff8,5,"90ec");
    }
    break;
  case 0x2e:
    _strcpy_s(&stack0xfffffff8,5,"9410");
    param_1[0x225] = 0x2e;
    break;
  case 0x2f:
    _strcpy_s(&stack0xfffffff8,5,"90e9");
    param_1[0x225] = 0x2f;
    break;
  case 0x30:
    _strcpy_s(&stack0xfffffff8,5,"90ea");
    param_1[0x225] = 0x14;
    break;
  case 0x31:
    _strcpy_s(&stack0xfffffff8,5,"9475");
    param_1[0x225] = 0x15;
    break;
  case 0x32:
    _strcpy_s(&stack0xfffffff8,5,"9476");
    param_1[0x225] = 0x16;
    break;
  case 0x33:
    _strcpy_s(&stack0xfffffff8,5,"9951");
    param_1[0x225] = 0x1b;
    goto LAB_005cf663;
  case 0x34:
    _strcpy_s(&stack0xfffffff8,5,"9953");
    param_1[0x225] = 0x1c;
LAB_005cf663:
    param_1[0x221] = param_1[0x222];
  }
  if ((DAT_018b9174 & 0xf00) == 0xc00) {
    pbVar7 = &DAT_016435e4;
    pbVar4 = &stack0xfffffff8;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_005cf6b0:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_005cf6b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_005cf6b0;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_005cf6b5:
    if (((iVar5 == 0) && (iVar5 = FUN_00a7f600(0x2c200), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      FUN_00a9e440(iVar5,&stack0xfffffff8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      (**(code **)(*param_1 + 100))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  FUN_00a9e290(&stack0xfffffff8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  (**(code **)(*param_1 + 100))(unaff_ESI);
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 00AA6990  Et000d::Et000d  size=18  [class]
undefined4 * __fastcall Et000d::Et000d(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA69B0  Et000d::vf04  size=6  [class]
undefined * Et000d::vf04(void)

{
  return &DAT_01b352a0;
}

// 00AB7F90  Et000d::vf00  size=105  [class]
undefined4 * __thiscall Et000d::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

