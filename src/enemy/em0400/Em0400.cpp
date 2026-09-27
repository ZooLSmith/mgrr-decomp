// src/enemy/em0400/Em0400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0059BC90..00AB9200, 26 functions

#include "mgrr.h"
#include "Em0400.h"

// 0059BC90  Em0400::vf44  size=49  [class]
void __fastcall Em0400::vf44(int param_1)

{
  FUN_00a944d0();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorEmBase::vf44();
  return;
}

// 0059BCD0  Em0400::vf48  size=51  [class]
void __fastcall Em0400::vf48(int param_1)

{
  BehaviorEmBase::vf48();
  if (*(char *)(param_1 + 0xdc3) != '\0') {
    *(undefined4 *)(param_1 + 0x82c) = 0x600;
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  }
  return;
}

// 0059BD10  Em0400::vf50  size=16  [class]
void Em0400::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 0059BD20  Em0400::vf264  size=38  [class]
undefined4 __thiscall Em0400::vf264(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x44) == 1) {
    *(undefined1 *)(param_1 + 0xdc0) = 1;
  }
  FUN_00a8caf0(0,0,0,0);
  return 1;
}

// 0059BD50  FUN_0059bd50  size=172  [between]
void __fastcall FUN_0059bd50(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 0xdc0) != '\0') && (*(char *)(param_1 + 0xdc2) == '\0')) {
      if (DAT_01b76230 < 3) {
        pcVar2 = "p410_GIRL_HELLO";
      }
      else {
        pcVar2 = "p410_MOE_HELLO";
      }
      FUN_0093b4a0(pcVar2,0,0);
    }
    FUN_00a9e290(&DAT_01641bdc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined1 *)(param_1 + 0xdc2) = 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8caf0(0,0,0,0);
    }
  }
  return;
}

// 0059BE00  FUN_0059be00  size=261  [between]
void __fastcall FUN_0059be00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_01641bd4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a9e290(&DAT_01642b58,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      FUN_00a9e290(&DAT_01642b50,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 3) {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        FUN_00a8caf0(0,0,0,0);
      }
    }
  }
  return;
}

// 0059BF10  FUN_0059bf10  size=165  [between]
void __fastcall FUN_0059bf10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_0163b7bc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a9e290(&DAT_0163bafc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  return;
}

// 0059BFC0  FUN_0059bfc0  size=208  [between]
void __fastcall FUN_0059bfc0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_01642b64,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      fVar2 = (float10)FUN_00ac8f80();
      if (fVar2 - (float10)0.0033333334 < (float10)0) {
        (**(code **)(*param_1 + 0x20))();
        FUN_009fdde0();
        FUN_00ac8fd0((float)(float10)0);
        return;
      }
      FUN_00ac8fd0((float)(fVar2 - (float10)0.0033333334));
    }
  }
  return;
}

// 0059C090  FUN_0059c090  size=89  [between]
undefined4 __thiscall FUN_0059c090(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  if (2 < iVar1) {
    return 0;
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    iVar1 = FUN_00ac8cd0(param_2);
    if (iVar1 != 0) {
      FUN_00ac8d00(param_1,param_2,0);
      *(undefined4 *)(param_1 + 0x870) = 0;
      *(undefined1 *)(param_1 + 0xdc4) = 1;
      return 1;
    }
  }
  return 0;
}

// 0059C0F0  FUN_0059c0f0  size=303  [between]
void __fastcall FUN_0059c0f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_0093b4a0("P410_START03",0,0);
    FUN_00a9e290(&DAT_0163b7bc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a9e290(&DAT_0163bafc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      iVar1 = FUN_00937e00("P410_START03");
      if (iVar1 != 0) {
        FUN_00a9e290(&DAT_01642b6c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        return;
      }
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 3) {
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 != 0) {
          FUN_00a8caf0(5,0,0,0);
        }
      }
    }
  }
  return;
}

// 0059C220  FUN_0059c220  size=122  [between]
void __fastcall FUN_0059c220(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (((iVar1 == 1) && (*(char *)(param_1 + 0xdc1) == '\0')) && ((DAT_01bea060 & 0x40040000) == 0))
  {
    *(undefined1 *)(param_1 + 0xdc1) = 1;
    FUN_00a8caf0(6,0,0,0);
  }
  return;
}

// 0059C2A0  FUN_0059c2a0  size=318  [between]
void __fastcall FUN_0059c2a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xdc1) == '\x02') {
      FUN_0093b4a0("P410_START02",0,0);
      *(char *)(param_1 + 0xdc1) = *(char *)(param_1 + 0xdc1) + '\x01';
    }
    FUN_00a9e290(&DAT_01641bd4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a9e290(&DAT_01642b58,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      iVar1 = FUN_00937e00("P410_START02");
      if (iVar1 != 0) {
        FUN_00a9e290(&DAT_01642b50,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        return;
      }
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 3) {
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 != 0) {
          FUN_00a8caf0(8,0,0,0);
        }
      }
    }
  }
  return;
}

// 0059C3E0  FUN_0059c3e0  size=163  [between]
void __fastcall FUN_0059c3e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xdc1) == '\x01') {
      FUN_0093b4a0("P410_START01",0,0);
      *(char *)(param_1 + 0xdc1) = *(char *)(param_1 + 0xdc1) + '\x01';
    }
    FUN_00a9e290(&DAT_01641bdc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_00937e00("P410_START01");
      if (iVar1 != 0) {
        FUN_00a8caf0(7,0,0,0);
      }
    }
  }
  return;
}

// 0059C490  Em0400::vf1D0  size=51  [class]
void __thiscall Em0400::vf1D0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  if (iVar1 < 1) {
    if (*(char *)(param_1 + 0xdc4) == '\0') {
      return;
    }
    iVar1 = FUN_00a8ef10();
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 0059C4D0  Em0400::vf1C0  size=5  [class]
void __thiscall Em0400::vf1C0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined *puVar8;
  
  piVar5 = param_2;
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    param_2 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  piVar5 = param_3;
  if (param_3 != (int *)0x0) {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
  }
  uVar3 = FUN_009f8b40();
  FUN_009f8ae0(uVar3);
  if (uVar6 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    FUN_00a7c960(&param_2);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  uVar1 = param_1[300];
  if (uVar1 < 0x20141) {
    if (uVar1 != 0x20140) {
      switch(uVar1) {
      case 0x20010:
      case 0x20050:
        goto switchD_00ace80d_caseD_20010;
      case 0x20030:
      case 0x20033:
      case 0x20035:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2003f,0x20030);
        break;
      case 0x20071:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20070);
        break;
      case 0x20081:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20080);
      }
      goto switchD_00ace80d_caseD_20011;
    }
switchD_00ace80d_caseD_20010:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20012,0x20010);
    FUN_00a92f90();
    iVar2 = 0x2014f;
  }
  else {
    switch(uVar1) {
    case 0x20142:
    case 0x20144:
    case 0x20160:
      goto switchD_00ace80d_caseD_20010;
    default:
      goto switchD_00ace80d_caseD_20011;
    case 0x20150:
    case 0x20152:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      FUN_00a92f90();
      iVar2 = 0x2015f;
      break;
    case 0x20170:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      iVar2 = param_1[300];
      FUN_00a92f90();
    }
  }
  FUN_00e27330(iVar2,0x20010);
switchD_00ace80d_caseD_20011:
  iVar2 = 0;
  iVar4 = FUN_00ac89d0();
  if (iVar4 == 0) {
    iVar4 = param_1[0xcc];
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x330);
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xcc);
  }
  param_1[0x295] = iVar2;
  if ((unaff_retaddr != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9c78;
    (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      iVar2 = *param_1;
      param_1[0x139] = piVar5[0x139];
      uVar3 = (**(code **)(*piVar5 + 0x1d8))();
      (**(code **)(iVar2 + 0x1d4))(uVar3);
      if ((piVar5[0x351] & 0x80000000U) != 0) {
        uVar7 = 0;
        uVar3 = FUN_00a82d50(0);
        FUN_00a88b50(uVar3,uVar7);
      }
      FUN_0040ac60(piVar5 + 0x2ac);
      *(short *)(param_1 + 0x36b) = (short)piVar5[0x36b];
      param_1[0x36c] = piVar5[0x36c];
      *(char *)(param_1 + 0x36d) = (char)piVar5[0x36d];
      param_1[0x28c] = piVar5[0x28c];
      param_1[0x28d] = piVar5[0x28d];
      param_1[0x28e] = piVar5[0x28e];
      param_1[0x28f] = piVar5[0x28f];
      param_1[0x290] = piVar5[0x290];
      *(char *)(param_1 + 0x291) = (char)piVar5[0x291];
      param_1[0x292] = piVar5[0x292];
      param_1[0x12a] = piVar5[0x12a];
      param_1[0x296] = piVar5[0x296];
    }
  }
  (**(code **)(*param_1 + 0x334))(uVar6,unaff_retaddr);
  return;
}

// 0059C4E0  FUN_0059c4e0  size=295  [between]
void __fastcall FUN_0059c4e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e5610(1);
      FUN_008e5610(2);
      FUN_008e5610(4);
      FUN_008e5610(8);
      FUN_008e5610(0x10);
      FUN_008e5c50(0x1e);
    }
    uVar2 = 0x8000000;
    iVar1 = FUN_00ac8a30();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      uVar2 = 0x8000040;
    }
    FUN_00a9e290(&DAT_01642b64,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    fVar3 = (float10)FUN_00ac8f80();
    if ((float10)0 <= fVar3 - (float10)0.0033333334) {
      FUN_00ac8fd0((float)(fVar3 - (float10)0.0033333334));
      return;
    }
    (**(code **)(*param_1 + 0x20))();
    FUN_009fdde0();
    FUN_00ac8fd0((float)(float10)0);
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0059C640  Em0400::vf40  size=1028  [class]
undefined4 __fastcall Em0400::vf40(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 != 0) {
    FUN_00acf600(0x20401,"Em0400Body");
    *(undefined2 *)((int)param_1 + 0xdc3) = 0;
    *(undefined1 *)(param_1 + 0x370) = 0;
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      uVar7 = 1;
      FUN_00a92f90(1);
      FUN_00e26e50(uVar7);
      FUN_00a9e290(&DAT_0163b5f4,0,0,0,0,0xbf800000,0x3f800000);
      iVar1 = FUN_00ac8a50();
      if (iVar1 == 0) {
        iVar1 = FUN_008ec660(param_1,0x3f800000,0x3e99999a,0x42200000,0x41a00000,0x78,7,0);
        param_1[0x1d9] = iVar1;
        if (iVar1 != 0) {
          FUN_008e5610(0x100);
          FUN_008e0bb0(0xffffffff);
          *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.75;
          FUN_008e6d00();
          FUN_008e1cc0();
        }
        lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
        FUN_00410540(1,&DAT_01b7bd48);
        uVar7 = FUN_00a8d2a0();
        puVar2 = (undefined4 *)FUN_009f8b60();
        iVar1 = CollisionCapsule::CollisionCapsule(4,*puVar2,0);
        if (iVar1 == 0) {
          return 0;
        }
        *(undefined4 *)(iVar1 + 0x380) = 0;
        FUN_00d77c50(param_1[0x13c],0xffffffff);
        local_20 = 0;
        local_1c = 0x3f000000;
        local_18 = 0;
        local_14 = 0x3f800000;
        FUN_00d77c90(&local_20);
        *(undefined4 *)(iVar1 + 0x594) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0x590) = 0x3dcccccd;
        _strncpy_s((char *)(iVar1 + 0x394),0x20,"UketsukeBody",0x1f);
        FUN_00a93a00(iVar1,uVar7);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      else if ((int *)param_1[0x1ec] != (int *)0x0) {
        uVar7 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
        lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(uVar7);
        Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],4);
        iVar3 = 0;
        iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
        if (0 < iVar1) {
          do {
            (**(code **)(*(int *)param_1[0x1ec] + 300))(auStack_24,iVar3);
            if (unaff_ESI != 0) {
              uVar7 = FUN_009124a0();
              lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(iVar3,uVar7);
            }
            iVar3 = iVar3 + 1;
            iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
          } while (iVar3 < iVar1);
        }
      }
      local_20 = 0x3f99999a;
      local_1c = 0x3f99999a;
      local_18 = 0x3f99999a;
      local_14 = 0x3f800000;
      (**(code **)(*param_1 + 0x90))(&local_20);
      FUN_00a82610(param_1[0x13c],0x55,0xffffffff);
      param_1[0x3a8] = 0x3d23d70a;
      iVar1 = FUN_00a12210(0x55);
      uVar6 = 0;
      uVar5 = 0xbf5f66f3;
      uVar4 = 0;
      uVar7 = 0x3f5f66f3;
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*param_1 + 0x84))(0x3f5f66f3,0,0xbf5f66f3,0);
      }
      else {
        iVar1 = iVar1 + 0x90;
      }
      FUN_00a832d0(iVar1,uVar7,uVar4,uVar5,uVar6);
      FUN_009fd240();
      if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
        param_1[0xd9] = param_1[0xd9] | 0x400000;
        *(undefined4 *)param_1[0xdc] = 0;
      }
      if (param_1[0xdc] != 0) {
        *(undefined4 *)(param_1[0xdc] + 4) = 1;
        *(undefined4 *)(param_1[0xdc] + 8) = 1;
      }
      if (param_1[0xdc] != 0) {
        *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
      }
      *(undefined2 *)((int)param_1 + 0xdc1) = 0;
      FUN_00a8caf0(0,0,0,0);
      param_1[0x1e3] = 0;
      iVar1 = FUN_00dd3580(0x20,&DAT_01b7bd48);
      param_1[0x1e2] = iVar1;
      FUN_00a8c720(6,10);
      FUN_00a8c720(7,0xb);
      FUN_00a8c720(8,0xc);
      FUN_00a8c720(9,0xd);
      FUN_00a8c720(0xf,0x13);
      FUN_00a8c720(0x10,0x14);
      FUN_00a8c720(0x11,0x15);
      FUN_00a8c720(0x12,0x16);
      FUN_00a95e20(param_1[0x1e2],param_1[0x1e3]);
      param_1[0x3ac] = -1;
      return 1;
    }
  }
  return 0;
}

// 0059CA50  FUN_0059ca50  size=177  [between]
void __fastcall FUN_0059ca50(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (*(char *)((int)param_1 + 0xdc2) == '\0') {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
    if (iVar2 != 0) {
      pfVar4 = (float *)FUN_00a7c8b0();
      pfVar5 = (float *)(**(code **)(*param_1 + 0x68))();
      fVar1 = SQRT((pfVar5[2] - pfVar4[2]) * (pfVar5[2] - pfVar4[2]) +
                   (*pfVar5 - *pfVar4) * (*pfVar5 - *pfVar4));
      if ((fVar1 < 10.0 != (fVar1 == 10.0)) && ((DAT_01bea060 & 0x40040000) == 0)) {
        FUN_00a8caf0(1,0,0,0);
      }
    }
  }
  return;
}

// 0059CB10  FUN_0059cb10  size=354  [between]
undefined4 __thiscall FUN_0059cb10(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  float10 fVar4;
  
  if (param_1[0x139] != 0) {
    return 0;
  }
  iVar1 = *param_2;
  uVar2 = 0;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && ((iVar1 != 0x1b0 && (iVar1 != 0x147)))) {
    (**(code **)(*param_1 + 0x30c))(param_2[1],0);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c8a0();
    }
    (**(code **)(*param_1 + 0x220))(0x40000000);
    fVar4 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar4;
    (**(code **)(*param_1 + 0x198))(uVar2,param_2,1);
    uVar2 = 1;
    iVar1 = FUN_00ac8a50();
    if (iVar1 == 0) {
      bVar3 = DAT_018b9174 == 0x410;
      if (bVar3) {
        FUN_00c81b30(0x4b);
      }
      if (((param_2[0x23] & 0x20000U) != 0) && (*(char *)((int)param_1 + 0xdc3) == '\0')) {
        *(undefined1 *)((int)param_1 + 0xdc3) = 1;
        FUN_00aa92c0(0x207);
        bVar3 = true;
      }
      if (param_1[0x21c] < 1) {
        param_1[0x21c] = 0;
        param_1[0x139] = 1;
        FUN_00a8caf0(9,0,0,0);
        return 1;
      }
      if (bVar3) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 3) {
          FUN_00a8caf0(3,0,0,0);
        }
      }
    }
  }
  return uVar2;
}

// 0059CC80  Em0400::vf33C  size=200  [class]
void __thiscall Em0400::vf33C(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  undefined1 local_20 [28];
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 < 3) && ((-1 < (int)*(uint *)(param_3 + 0x10) || (-1 < *(int *)(param_3 + 8))))) &&
     (((*(uint *)(param_3 + 0x10) & 0x20000000) == 0 || ((*(uint *)(param_3 + 8) >> 0x1d & 1) == 0))
     )) {
    iVar1 = param_2[0x32];
    pfVar2 = (float *)FUN_00a92640(local_20);
    if (pfVar2[2] * *(float *)(iVar1 + 0x18) +
        *pfVar2 * *(float *)(iVar1 + 0x10) + pfVar2[1] * *(float *)(iVar1 + 0x14) <= 0.0) {
      param_2[1] = 0;
    }
    else {
      param_2[1] = 1;
    }
    *param_2 = 1;
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
    if (*(int *)(param_1 + 0x618) == 9) {
      *param_2 = 0;
      return;
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x18) = 0x42000;
  }
  return;
}

// 0059CD50  Em0400::vf334  size=345  [class]
void __thiscall Em0400::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  
  BehaviorEmBase::vf334(param_2,param_3);
  if (param_3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar11 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar11);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_3;
  }
  FUN_009fd240();
  if (uVar5 != 0) {
    piVar1 = (int *)FUN_00acdea0();
    if (piVar1 != (int *)0x0) {
      puVar11 = &DAT_01b35170;
      (**(code **)(*piVar1 + 4))(&DAT_01b35170);
      iVar2 = FUN_00dd6d80(puVar11);
      if ((iVar2 != 0) && (piVar1 != param_1)) {
        FUN_00a8caf0(piVar1[0x28c],piVar1[0x28d],piVar1[0x28e],piVar1[0x28f]);
        uVar12 = 0x3f800000;
        uVar10 = 0xbf800000;
        uVar3 = FUN_00a95d20(0);
        uVar9 = 0x3f800000;
        uVar8 = 0;
        uVar7 = 0;
        uVar4 = FUN_00a95df0(0);
        FUN_00a9e290(uVar4,uVar7,uVar8,uVar9,uVar3,uVar10,uVar12);
        fVar6 = (float10)FUN_00a958c0(0);
        FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          Animation::Motion::Unit::setCurrentTime(0,(float)fVar6);
        }
        FUN_0040ac60(piVar1 + 0x2ac);
      }
    }
  }
  piVar1 = (int *)FUN_00ac8a30();
  if (piVar1 != (int *)0x0) {
    param_1[0x3ac] = *piVar1;
  }
  if (param_1[0x3ac] == 1) {
    FUN_00a8caf0(4,0,0,0);
  }
  return;
}

// 0059CEB0  Em0400::vf4C  size=291  [class]
void __fastcall Em0400::vf4C(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 == 4) || (iVar1 == 3)) {
LAB_0059cef4:
    if (iVar1 == 0) {
      FUN_0059ca50();
    }
    else if (iVar1 == 1) {
      FUN_0059bd50();
    }
    else if (iVar1 == 2) {
      FUN_0059be00();
    }
    else if (iVar1 == 3) {
      FUN_0059bf10();
    }
    else {
      if (iVar1 == 4) {
        FUN_0059c4e0();
        goto LAB_0059cf8f;
      }
      if (iVar1 == 9) {
        FUN_0059bfc0();
      }
    }
  }
  else {
    iVar2 = FUN_00c1bd80();
    if ((iVar2 == 0) || (*(int *)(param_1 + 0x4e4) != 0)) goto LAB_0059cef4;
    FUN_00a8caf0(3,0,0,0);
    FUN_0059bf10();
  }
  if (*(char *)(param_1 + 0xdc0) != '\0') {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 3) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 1) {
        piVar3 = (int *)FUN_00c13920();
        iVar1 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
        if (iVar1 != 0) {
          uVar5 = 1;
          uVar4 = FUN_00a7c8b0(1);
          FUN_00a83330(uVar4,uVar5);
        }
      }
    }
  }
LAB_0059cf8f:
  iVar1 = *(int *)(param_1 + 0x764);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
    *(undefined4 *)(iVar1 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  BehaviorEmBase::vf4C();
  return;
}

// 0059CFE0  Em0400::vf32C  size=348  [class]
undefined4 __fastcall Em0400::vf32C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_ESI;
  int iVar4;
  int *piVar5;
  int local_164;
  undefined1 local_160 [148];
  int local_cc;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  iVar1 = FUN_00a8ef10();
  if ((iVar1 == 0) && (*(char *)(param_1 + 0xdc4) == '\0')) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 == 0) {
      FUN_00ac2080(0);
    }
    else if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      iVar4 = 0;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
      if (0 < iVar1) {
        do {
          (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_164,iVar4);
          if (unaff_ESI != 0) {
            FUN_00ac2080(iVar4);
          }
          iVar4 = iVar4 + 1;
          iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
        } while (iVar4 < iVar1);
      }
    }
    piVar5 = *(int **)(param_1 + 0x67c);
    piVar3 = piVar5 + *(int *)(param_1 + 0x684) * 0x54;
    FUN_00445db0();
    iVar1 = -1;
    local_164 = 0;
    if (piVar5 != piVar3) {
      do {
        if ((*piVar5 != 0x147) && (iVar1 <= piVar5[1])) {
          local_164 = 1;
          FUN_00448f50(piVar5);
          iVar1 = piVar5[1];
        }
        piVar5 = piVar5 + 0x54;
      } while (piVar5 != piVar3);
      if (local_164 != 0) {
        iVar1 = FUN_00ac8a50();
        if (((iVar1 < 3) && (local_cc != 0)) && (iVar1 = FUN_00ac8cd0(local_160), iVar1 != 0)) {
          FUN_00ac8d00(param_1,local_160,0);
          *(undefined4 *)(param_1 + 0x870) = 0;
          *(undefined1 *)(param_1 + 0xdc4) = 1;
          return 0;
        }
        uVar2 = FUN_0059cb10(local_160);
        return uVar2;
      }
    }
  }
  return 0;
}

// 00AB0640  Em0400::Em0400  size=29  [class]
undefined4 * __fastcall Em0400::Em0400(undefined4 *param_1)

{
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a831e0();
  return param_1;
}

// 00AB0660  Em0400::vf04  size=6  [class]
undefined * Em0400::vf04(void)

{
  return &DAT_01b35170;
}

// 00AB9200  Em0400::vf00  size=30  [class]
undefined4 __thiscall Em0400::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

