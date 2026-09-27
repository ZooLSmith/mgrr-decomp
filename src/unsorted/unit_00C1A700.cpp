// src/unsorted/unit_00C1A700.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1A700..00C1AF20, 11 functions

#include "types.h"

// 00C1A700  FUN_00c1a700  size=133  [run]
void __fastcall FUN_00c1a700(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar6 = (int *)(param_1 + 0x18);
    do {
      if ((*(byte *)(piVar6 + 2) & 1) == 0) {
        if (*piVar6 != 0) {
          iVar2 = FUN_00a7c8a0();
          if (*(int *)(iVar2 + 0x674) == 0) {
            FUN_00a7c8a0();
            cVar1 = FUN_00a8e750();
            if (cVar1 == '\0') {
              piVar3 = (int *)FUN_00a7c8a0();
              cVar1 = (**(code **)(*piVar3 + 0x2f0))();
              if ((cVar1 == '\0') && (iVar2 = FUN_00a7c7e0(), iVar2 != 0)) goto LAB_00c1a76e;
            }
          }
          uVar4 = uVar4 + 1;
          piVar6[2] = piVar6[2] | 1;
          *piVar6 = 0;
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
LAB_00c1a76e:
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 3;
    } while (uVar5 < *(uint *)(param_1 + 0x14));
  }
  if (*(uint *)(param_1 + 0x10) <= uVar4) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 1;
  }
  return;
}

// 00C1A790  FUN_00c1a790  size=329  [run]
void __fastcall FUN_00c1a790(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char local_8 [8];
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    do {
      if (*piVar3 != 0) {
        iVar1 = FUN_00a7c7e0();
        if (iVar1 != 0) {
          FUN_00a7c8a0();
          FUN_009fdde0();
          piVar3[2] = piVar3[2] | 1;
        }
        *piVar3 = 0;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar4 < *(uint *)(param_1 + 0x14));
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    if (*(int *)(param_1 + 4) != 0) {
      _sprintf_s(local_8,5,"%04x",*(undefined4 *)(param_1 + 0x50));
      uVar12 = 0x3f800000;
      uVar11 = 0xbf800000;
      pcVar6 = local_8;
      uVar10 = 0;
      uVar9 = 0x3f800000;
      uVar8 = 0x3e4ccccd;
      uVar7 = 0;
      FUN_00a7c8a0(pcVar6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      iVar1 = FUN_00a9f2b0(pcVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      iVar2 = FUN_00a7c8a0();
      *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
      if (iVar1 != -1) {
        uVar7 = 0;
        FUN_00a7c8a0(0);
        fVar5 = (float10)FUN_00a95680(uVar7);
        FUN_00a7c8a0();
        FUN_00a92f90();
        iVar1 = FUN_00e26e90();
        if (iVar1 != 0) {
          Animation::Motion::Unit::setCurrentTime(0,(float)fVar5);
        }
      }
    }
  }
  else if (iVar1 == 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1a8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x20))();
      return;
    }
  }
  else if (iVar1 == 3) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1a8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x20))();
      return;
    }
  }
  return;
}

// 00C1A8E0  FUN_00c1a8e0  size=315  [run]
void __fastcall FUN_00c1a8e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = FUN_00a7c8a0();
    iVar2 = *(int *)(param_1 + 0x5c);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + 0x6c);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    iVar2 = *(int *)(param_1 + 0x60);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + 0x70);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    iVar2 = *(int *)(param_1 + 100);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + 0x74);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    iVar2 = *(int *)(param_1 + 0x68);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + 0x78);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}

// 00C1AA20  FUN_00c1aa20  size=168  [run]
void __fastcall FUN_00c1aa20(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = FUN_00a7c8a0();
    iVar2 = *(int *)(param_1 + 0x6c);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + 0x70);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + 0x74);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + 0x78);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(short *)(iVar3 + 0x324))) {
      puVar1 = (uint *)(iVar2 * 0x70 + *(int *)(iVar3 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  return;
}

// 00C1AC30  FUN_00c1ac30  size=115  [run]
void __fastcall FUN_00c1ac30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x5004) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  iVar3 = 0x80;
  do {
    puVar1[0xf] = 0;
    puVar1[-3] = 0;
    puVar1[0x10] = 0;
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    puVar1[0xb] = 0;
    puVar1[9] = 0;
    puVar1[0xe] = 0;
    puVar1[0xc] = 0;
    puVar2 = puVar1 + 0x18;
    iVar4 = 4;
    do {
      puVar2[-4] = 0xffffffff;
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar1 = puVar1 + 0x28;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x5000) = 0;
  return;
}

// 00C1ACB0  thunk_FUN_00c1ac30  size=5  [run]
void __fastcall thunk_FUN_00c1ac30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x5004) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  iVar3 = 0x80;
  do {
    puVar1[0xf] = 0;
    puVar1[-3] = 0;
    puVar1[0x10] = 0;
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    puVar1[0xb] = 0;
    puVar1[9] = 0;
    puVar1[0xe] = 0;
    puVar1[0xc] = 0;
    puVar2 = puVar1 + 0x18;
    iVar4 = 4;
    do {
      puVar2[-4] = 0xffffffff;
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar1 = puVar1 + 0x28;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x5000) = 0;
  return;
}

// 00C1ACE0  FUN_00c1ace0  size=64  [run]
uint __thiscall FUN_00c1ace0(int *param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar1 = in_EAX & 0xffffff00;
  uVar2 = 0;
  piVar3 = param_1;
  if (param_1[0x1400] != 0) {
    while (*piVar3 != param_2) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x28;
      if ((uint)param_1[0x1400] <= uVar2) {
        return uVar1;
      }
    }
    uVar1 = CONCAT31((int3)(uVar2 * 0xa0 >> 8),(*(byte *)(param_1 + uVar2 * 0x28 + 0x15) & 4) != 0);
  }
  return uVar1;
}

// 00C1ADC0  FUN_00c1adc0  size=6  [run]
undefined4 FUN_00c1adc0(void)

{
  return 1;
}

// 00C1ADD0  FUN_00c1add0  size=1  [run]
void FUN_00c1add0(void)

{
  return;
}

// 00C1AE60  FUN_00c1ae60  size=182  [run]
uint * __thiscall FUN_00c1ae60(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int local_10;
  uint local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_c = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return (uint *)0x0;
  }
  local_10 = 0;
LAB_00c1ae90:
  puVar3 = (uint *)(*(int *)(param_1 + 0xc) + local_10);
  if (param_3 <= puVar3[4]) {
    uVar4 = 0;
    if (*puVar3 != 0) {
      iVar2 = 0;
      do {
        iVar1 = FUN_00d900c0(puVar3[1] + iVar2,param_2);
        if (iVar1 != 0) goto LAB_00c1aeee;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0x60;
      } while (uVar4 < *puVar3);
    }
    uVar4 = 0;
    if (puVar3[2] != 0) {
      iVar2 = 0;
      do {
        iVar1 = FUN_00d900c0(puVar3[3] + iVar2,param_2);
        if (iVar1 != 0) goto LAB_00c1aeee;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0x80;
      } while (uVar4 < puVar3[2]);
    }
  }
  goto LAB_00c1aef9;
LAB_00c1aeee:
  param_3 = puVar3[4];
  local_8 = puVar3;
LAB_00c1aef9:
  local_10 = local_10 + 0x1c;
  local_c = local_c + 1;
  if (*(uint *)(param_1 + 4) <= local_c) {
    return local_8;
  }
  goto LAB_00c1ae90;
}

// 00C1AF20  FUN_00c1af20  size=160  [run]
void __fastcall FUN_00c1af20(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[4] == 0) {
    if (*param_1 != 0) {
      iVar1 = 0;
      do {
        FUN_00d90320(param_1[1] + iVar1,0xffffffff);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x60;
      } while (uVar2 < *param_1);
    }
    uVar2 = 0;
    if (param_1[2] != 0) {
      iVar1 = 0;
      do {
        FUN_00d90320(param_1[3] + iVar1,0xffffffff);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x80;
      } while (uVar2 < param_1[2]);
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      iVar1 = 0;
      do {
        FUN_00d90320(param_1[1] + iVar1,0xff00ffff);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x60;
      } while (uVar2 < *param_1);
    }
    uVar2 = 0;
    if (param_1[2] != 0) {
      iVar1 = 0;
      do {
        FUN_00d90320(param_1[3] + iVar1,0xff00ffff);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x80;
      } while (uVar2 < param_1[2]);
    }
  }
  return;
}

