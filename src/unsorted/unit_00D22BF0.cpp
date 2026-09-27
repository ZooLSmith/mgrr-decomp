// src/unsorted/unit_00D22BF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D22BF0..00D23420, 4 functions

#include "types.h"

// 00D22BF0  FUN_00d22bf0  size=1286  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00d22bf0(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar7;
  float local_4;
  
  if (DAT_01dc14c8 == 0) {
    return;
  }
  fVar6 = (float10)_DAT_01dc0884;
  if ((float10)_DAT_01dc0888 < fVar6) {
    fVar6 = (float10)_DAT_01dc0888;
  }
  fVar7 = (float10)0;
  if (fVar6 < fVar7) {
    fVar6 = fVar7;
  }
  local_4 = (float)fVar6;
  if (((float10)*(float *)(DAT_01dc14c8 + 0x2bac) <= fVar7) || (*(int *)(param_1 + 0x3ec) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  *(uint *)(param_1 + 0x3ec) = (uint)(fVar7 < (float10)*(float *)(DAT_01dc14c8 + 0x2bac));
  if ((param_2 == 1) || (fVar6 != (float10)*(float *)(param_1 + 0x398))) {
    fVar7 = ABS((float10)*(float *)(param_1 + 0x398) - fVar6) * (float10)0.2;
    if (fVar7 < (float10)0.5) {
      fVar7 = (float10)0.5;
    }
    if ((float10)*(float *)(param_1 + 0x398) <= fVar6) {
      if ((float10)*(float *)(param_1 + 0x398) < fVar6) {
        fVar7 = (float10)*(float *)(param_1 + 0x398) + fVar7;
        *(float *)(param_1 + 0x398) = (float)fVar7;
        if (fVar6 < fVar7) {
          *(float *)(param_1 + 0x398) = (float)fVar6;
        }
        fVar7 = (float10)_DAT_01dc0888;
        iVar4 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0xbc);
        if ((((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= uVar1)) ||
            (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 == 0)) ||
           (*(int *)(iVar4 + 0x3b0) == 0)) {
          FUN_00cb2310(uVar1,1);
          if (*(int *)(param_1 + 0x18) != 0) {
            FUN_00cdeec0(0xe);
          }
          *(undefined4 *)(param_1 + 0x1c0) = 1;
        }
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xbc),(float)(fVar6 / fVar7));
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x398) / _DAT_01dc0888;
      fVar7 = (float10)*(float *)(param_1 + 0x398) - fVar7;
      *(float *)(param_1 + 0x398) = (float)fVar7;
      if (fVar7 < fVar6) {
        *(float *)(param_1 + 0x398) = (float)fVar6;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0xb4);
      if (((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= uVar1)) ||
         ((iVar5 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar5 == 0 ||
          (*(int *)(iVar5 + 0x3b0) == 0)))) {
        if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        iVar4 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0xbc);
        if (((((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= uVar1)) ||
             (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 == 0)) ||
            (*(int *)(iVar4 + 0x3b0) == 0)) &&
           (FUN_00cb2310(uVar1,1), *(int *)(param_1 + 0x18) != 0)) {
          FUN_00cdeec0(0xe);
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(0xc);
        }
        *(undefined4 *)(param_1 + 0x1bc) = 1;
        *(undefined4 *)(param_1 + 0x1c0) = 1;
        *(undefined4 *)(param_1 + 0x1c4) = 0;
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xb4),fVar2);
        fVar6 = (float10)local_4;
      }
      if (*(int *)(param_1 + 0x3ec) == 0) {
        if ((float10)*(float *)(param_1 + 0x39c) != fVar6) {
LAB_00d22f18:
          iVar4 = *(int *)(param_1 + 0x18);
          uVar1 = *(uint *)(param_1 + 0xbc);
          *(undefined4 *)(param_1 + 0x1c4) = 0;
          if ((((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= uVar1)) ||
              ((iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 == 0 ||
               (*(int *)(iVar4 + 0x3b0) == 0)))) &&
             (FUN_00cb2310(uVar1,1), *(int *)(param_1 + 0x18) != 0)) {
            FUN_00cdeec0(0xe);
          }
          if (*(int *)(param_1 + 1000) == 0) {
            *(undefined4 *)(param_1 + 0x3e4) = 0;
            FUN_00cec400();
            *(undefined4 *)(param_1 + 1000) = 1;
            if (*(int *)(param_1 + 0x18) != 0) {
              FUN_00cdeec0(0x10);
            }
            DAT_01dc0894 = 1;
          }
        }
      }
      else if (((bVar3) || ((float10)1.0 < (float10)*(float *)(param_1 + 0x39c) - fVar6)) ||
              (1 < DAT_01dc0890)) goto LAB_00d22f18;
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xbc),*(float *)(param_1 + 0x398) / _DAT_01dc0888);
    }
    fVar2 = 0.0;
    if (*(float *)(param_1 + 0x398) != 0.0) {
      fVar2 = (*(float *)(param_1 + 0x398) / _DAT_01dc0888) * 0.955 + 0.045;
    }
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xb8),fVar2);
    FUN_00d13d50(*(float *)(param_1 + 0x398) / _DAT_01dc088c);
    fVar6 = (float10)local_4;
    goto LAB_00d230ac;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0xb4);
  if ((((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
      (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x3b0) != 0)) {
    if (*(int *)(param_1 + 0x1bc) == 0) {
      iVar4 = FUN_00ce4dd0(0xd);
      fVar6 = extraout_ST0;
      if (iVar4 != 0) {
        fVar6 = (float10)FUN_00cb2310(uVar1,0);
      }
      if (*(int *)(param_1 + 0x1bc) == 0) goto LAB_00d22d13;
    }
    iVar4 = FUN_00ca8620(param_1 + 0x1c4,0x1e);
    fVar6 = extraout_ST0_00;
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0xd);
        fVar6 = (float10)local_4;
      }
      *(undefined4 *)(param_1 + 0x1bc) = 0;
    }
  }
LAB_00d22d13:
  iVar4 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0xbc);
  if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
     ((iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0 && (*(int *)(iVar4 + 0x3b0) != 0))
     )) {
    if (*(int *)(param_1 + 0x1c0) == 0) {
      iVar4 = FUN_00ce4dd0(0xf);
      fVar6 = extraout_ST0_01;
      if (iVar4 != 0) {
        fVar6 = (float10)FUN_00cb2310(uVar1,0);
      }
      if (*(int *)(param_1 + 0x1c0) == 0) goto LAB_00d230ac;
    }
    if (fVar6 == (float10)*(float *)(param_1 + 0x39c)) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0xf);
        fVar6 = (float10)local_4;
      }
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
  }
LAB_00d230ac:
  if ((*(int *)(param_1 + 1000) != 0) &&
     (*(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1, 6 < *(int *)(param_1 + 0x3e4))) {
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    FUN_00cd2390();
    fVar6 = (float10)local_4;
    *(undefined4 *)(param_1 + 1000) = 0;
    DAT_01dc0894 = 0;
  }
  *(float *)(param_1 + 0x39c) = (float)fVar6;
  DAT_01dc0890 = 0;
  return;
}

// 00D23100  FUN_00d23100  size=485  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00d23100(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  fVar1 = 1.0;
  switch(*(undefined4 *)(param_1 + 0x1d8)) {
  case 0:
    if (*(int *)(param_1 + 0x1d4) == 0) {
      FUN_00d13d50(0);
      return 0;
    }
    if (_DAT_01dc088c != 0.0) {
      fVar1 = _DAT_01dc0888 / _DAT_01dc088c;
    }
    *(float *)(param_1 + 0x1b8) = fVar1;
    fVar1 = (fVar1 - 1.0) * 280.0 + 200.0;
    *(float *)(param_1 + 0x3a0) = fVar1;
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x98),fVar1);
    FUN_00d13d50(0);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    FUN_00d22bf0(1);
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    break;
  case 1:
    break;
  case 2:
    goto LAB_00d23223;
  case 3:
    uVar3 = 1;
  default:
    goto switchD_00d2311d_default;
  }
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
  if (*(int *)(param_1 + 0x1dc) < 7) {
switchD_00d2311d_default:
    return uVar3;
  }
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x1e8) = 1;
  if (_DAT_01dc088c == 0.0) {
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  }
  else {
    fVar1 = _DAT_01dc0888 / _DAT_01dc088c;
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    *(float *)(param_1 + 0x1e4) = fVar1 * 0.05;
  }
LAB_00d23223:
  fVar1 = *(float *)(param_1 + 0x1e4) + *(float *)(param_1 + 0x1e0);
  *(float *)(param_1 + 0x1e0) = fVar1;
  if (*(float *)(param_1 + 0x1b8) <= fVar1) {
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1b8);
  }
  fVar1 = *(float *)(param_1 + 0x1e0) / *(float *)(param_1 + 0x1b8);
  if (_DAT_01dc088c != 0.0) {
    fVar1 = (_DAT_01dc0888 / _DAT_01dc088c) * fVar1;
    fVar2 = _DAT_01dc0884 / _DAT_01dc088c;
    if (fVar2 < fVar1) goto LAB_00d23294;
  }
  fVar2 = fVar1;
LAB_00d23294:
  FUN_00d13d50(fVar2);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xac),
               (*(float *)(param_1 + 0x1e0) / *(float *)(param_1 + 0x1b8)) *
               ((*(float *)(param_1 + 0x1b8) - 1.0) * 1.33 + 1.0));
  return 0;
}

// 00D23300  FUN_00d23300  size=284  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d23300(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x3f8);
  if (iVar1 == 0) {
    fVar2 = _DAT_01dc0888 / _DAT_01dc088c;
    *(undefined4 *)(param_1 + 0x3f8) = 1;
    *(float *)(param_1 + 0x1b8) = fVar2;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = 0;
    FUN_00d22bf0(1);
    return;
  }
  fVar2 = *(float *)(param_1 + 0x1e0) + 0.01;
  *(float *)(param_1 + 0x1e0) = fVar2;
  if (*(float *)(param_1 + 0x1b8) <= fVar2) {
    *(int *)(param_1 + 0x3f8) = *(int *)(param_1 + 0x3f8) + 1;
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1b8);
  }
  fVar2 = (*(float *)(param_1 + 0x1e0) - 1.0) * 280.0 + 200.0;
  *(float *)(param_1 + 0x3a0) = fVar2;
  FUN_00cb28a0(*(undefined4 *)(param_1 + 0x98),fVar2);
  FUN_00d13d50(*(float *)(param_1 + 0x398) / _DAT_01dc088c);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xac),(*(float *)(param_1 + 0x1e0) - 1.0) * 1.33 + 1.0);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xb8),
               (*(float *)(param_1 + 0x398) / (*(float *)(param_1 + 0x1e0) * _DAT_01dc088c)) * 0.955
               + 0.045);
  return;
}

// 00D23420  FUN_00d23420  size=286  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d23420(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  fVar2 = _DAT_01dc0888 / _DAT_01dc088c;
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x98);
  *(float *)(param_1 + 0x1b8) = fVar2;
  fVar2 = (fVar2 - 1.0) * 280.0 + 200.0;
  *(float *)(param_1 + 0x3a0) = fVar2;
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar4 = (float10)FUN_00ddb510(fVar2,0);
    *(float *)(iVar3 + 0xc0) = (float)fVar4;
  }
  FUN_00d13d50(*(float *)(param_1 + 0x398) / _DAT_01dc088c);
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0xac);
  fVar2 = (*(float *)(param_1 + 0x1b8) - 1.0) * 1.33 + 1.0;
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (*(uint *)(iVar3 + 0x80) <= uVar1) {
      fRam000000d0 = fVar2;
      FUN_00d22bf0(1);
      return;
    }
    *(float *)(*(int *)(iVar3 + 0x7c) + 0x370 + uVar1 * 0x400) = fVar2;
    FUN_00d22bf0(1);
    return;
  }
  FUN_00d22bf0(1);
  return;
}

