// src/unsorted/unit_00F9D0B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9D0B0..00F9E0A0, 31 functions

#include "types.h"

// 00F9D0B0  FUN_00f9d0b0  size=1351  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f9d0b0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  piVar6 = DAT_01f20734;
  if (DAT_01f20734 != DAT_01f20738) {
    do {
      switch(piVar6[2]) {
      case 0:
      case 1:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        piVar1 = (int *)*piVar6;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar6 = 0;
        }
        *(undefined4 *)piVar6[1] = 0;
      }
      piVar6 = (int *)piVar6[0xb];
    } while (piVar6 != DAT_01f20738);
  }
  iVar4 = FUN_00df8520();
  puVar5 = &DAT_01f20620;
  if (iVar4 == 0) {
    puVar5 = &DAT_01f205e8;
  }
  iVar4 = (**(code **)(*DAT_01f206d4 + 0x40))(DAT_01f206d4,puVar5);
  if (iVar4 != -0x7789f798) {
    if (iVar4 != -0x7789f794) {
      if (iVar4 < 0) {
        FUN_00dd5650("device reset failed.");
        return 0;
      }
      DAT_01f206f4 = 0;
      FUN_00dd5650("device reset succeed.");
      piVar6 = DAT_01f20734;
      if (DAT_01f20734 != DAT_01f20738) {
        do {
          switch(piVar6[2]) {
          case 0:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0x10) = DAT_01f206e0;
            }
            piVar1 = DAT_01f206d4;
            if ((piVar6[3] == 8) || (piVar6[9] == 9)) {
              iVar4 = (**(code **)(*DAT_01f206d4 + 0x74))
                                (DAT_01f206d4,piVar6[3],piVar6[4],piVar6[6],0,0,0,piVar6[1],0);
              *piVar6 = *(int *)piVar6[1];
            }
            else {
              iVar4 = *DAT_01f206d4;
              uVar7 = FUN_00f98930(DAT_01f206a0,0,piVar6[1],0);
              iVar4 = (**(code **)(iVar4 + 0x74))
                                (piVar1,(int)((ulonglong)uVar7 >> 0x20),piVar6[4],piVar6[6],
                                 (int)uVar7);
              *(undefined4 *)(piVar6[8] + 0x14) = DAT_01f20708;
              *piVar6 = *(int *)piVar6[1];
            }
            break;
          case 1:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 8) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206e0;
            }
            piVar1 = DAT_01f206d4;
            if ((piVar6[3] == 8) || (piVar6[9] == 9)) {
              iVar4 = (**(code **)(*DAT_01f206d4 + 0x70))
                                (DAT_01f206d4,piVar6[3],piVar6[4],piVar6[6],0,0,0,piVar6[1],0);
              *piVar6 = *(int *)piVar6[1];
            }
            else {
              iVar4 = *DAT_01f206d4;
              uVar7 = FUN_00f98930(DAT_01f206a0,0,piVar6[1],0);
              iVar4 = (**(code **)(iVar4 + 0x70))
                                (piVar1,(int)((ulonglong)uVar7 >> 0x20),piVar6[4],piVar6[6],
                                 (int)uVar7);
              *(undefined4 *)(piVar6[8] + 0x24) = DAT_01f20708;
              *piVar6 = *(int *)piVar6[1];
            }
            break;
          case 6:
            iVar4 = (**(code **)(*DAT_01f206d4 + 0x1d8))(DAT_01f206d4,9,piVar6[1]);
            goto LAB_00f9d47d;
          case 7:
            if (((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) && (piVar6[6] != 0x1c))
            {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 8) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206e0;
            }
            iVar4 = D3DXCreateTexture(DAT_01f206d4,piVar6[3],piVar6[4],1,piVar6[5],piVar6[6],
                                      piVar6[7],piVar6[1]);
            *piVar6 = *(int *)piVar6[1];
            break;
          case 8:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 8) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206e0;
            }
            iVar4 = D3DXCreateTexture(DAT_01f206d4,piVar6[3],piVar6[4],1,piVar6[5],piVar6[6],
                                      piVar6[7],piVar6[1]);
            *piVar6 = *(int *)piVar6[1];
            break;
          case 9:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0x10) = DAT_01f206e0;
            }
          case 10:
            iVar4 = D3DXCreateTexture(DAT_01f206d4,piVar6[3],piVar6[4],1,piVar6[5],piVar6[6],
                                      piVar6[7],piVar6[1]);
LAB_00f9d47d:
            *piVar6 = *(int *)piVar6[1];
          }
          if (iVar4 < 0) {
            FUN_00dd5650(&DAT_016eb91c);
            return 0;
          }
          piVar6 = (int *)piVar6[0xb];
        } while (piVar6 != DAT_01f20738);
      }
      iVar4 = FUN_00df8520();
      _DAT_01f206b0 = DAT_01f205e8;
      _DAT_01f206b4 = DAT_01f205ec;
      if (iVar4 != 0) {
        _DAT_01f206b0 = DAT_01f20620;
        _DAT_01f206b4 = DAT_01f20624;
      }
      fVar2 = (float)_DAT_01f206b4;
      if (_DAT_01f206b4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar3 = (float)_DAT_01f206b0;
      if (_DAT_01f206b0 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      _DAT_01f206b8 = fVar2 / fVar3;
      if (0.5625 <= _DAT_01f206b8) {
        _DAT_01f206c0 = 0;
        _DAT_01f206c4 = (uint)(_DAT_01f206b4 - (int)(longlong)ROUND(fVar3 * 0.0625 * 9.0)) >> 1;
        _DAT_01f206cc = _DAT_01f206b4 + _DAT_01f206c4 * -2;
        _DAT_01f206c8 = _DAT_01f206b0;
      }
      else {
        _DAT_01f206c4 = 0;
        _DAT_01f206c0 = (uint)(_DAT_01f206b0 - (int)(longlong)ROUND((fVar2 / 9.0) * 16.0)) >> 1;
        _DAT_01f206c8 = _DAT_01f206b0 + _DAT_01f206c0 * -2;
        _DAT_01f206cc = _DAT_01f206b4;
      }
      FUN_00dd5650("device reset end.");
      return 1;
    }
    FUN_00dd5650("device reset failed.(D3DERR_INVALIDCALL)");
  }
  return 0;
}

// 00F9D650  FUN_00f9d650  size=10  [run]
void FUN_00f9d650(void)

{
  FUN_00f98070();
  FUN_00f9cc10();
  return;
}

// 00F9D660  FUN_00f9d660  size=55  [run]
bool FUN_00f9d660(float param_1)

{
  int iVar1;
  
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xc3,param_1 * -1.0);
  return -1 < iVar1;
}

// 00F9D6E0  FUN_00f9d6e0  size=49  [run]
undefined4 FUN_00f9d6e0(int param_1)

{
  if (DAT_018da63c != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,param_1);
    }
    DAT_018da63c = param_1;
  }
  return 1;
}

// 00F9D720  FUN_00f9d720  size=52  [run]
undefined4 FUN_00f9d720(void)

{
  if (DAT_018da640 != 0) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xc2,0);
    }
    DAT_018da640 = 0;
  }
  return 1;
}

// 00F9D760  FUN_00f9d760  size=56  [run]
undefined4 FUN_00f9d760(int param_1)

{
  if (DAT_018da644 != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,param_1 != 0);
    }
    DAT_018da644 = param_1;
  }
  return 1;
}

// 00F9D7A0  FUN_00f9d7a0  size=56  [run]
undefined4 FUN_00f9d7a0(int param_1)

{
  if (DAT_018da648 != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,param_1 != 0);
    }
    DAT_018da648 = param_1;
  }
  return 1;
}

// 00F9D7E0  FUN_00f9d7e0  size=36  [run]
undefined4 FUN_00f9d7e0(undefined4 param_1)

{
  if (DAT_01f206d4 != (int *)0x0) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xa1,param_1);
  }
  return 1;
}

// 00F9D810  FUN_00f9d810  size=49  [run]
undefined4 FUN_00f9d810(int param_1)

{
  if (DAT_018da64c != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x17,param_1);
    }
    DAT_018da64c = param_1;
  }
  return 1;
}

// 00F9D850  FUN_00f9d850  size=56  [run]
undefined4 FUN_00f9d850(int param_1)

{
  if (DAT_018da650 != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xf,param_1 != 0);
    }
    DAT_018da650 = param_1;
  }
  return 1;
}

// 00F9D890  FUN_00f9d890  size=95  [run]
undefined4 FUN_00f9d890(int param_1,char param_2)

{
  if ((DAT_018da654 != param_2) || (DAT_018da658 != param_1)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x18,param_2);
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x19,param_1);
      }
    }
    DAT_018da654 = param_2;
    DAT_018da658 = param_1;
  }
  return 1;
}

// 00F9D8F0  FUN_00f9d8f0  size=49  [run]
undefined4 FUN_00f9d8f0(int param_1)

{
  if (DAT_018da65c != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,param_1);
    }
    DAT_018da65c = param_1;
  }
  return 1;
}

// 00F9D930  FUN_00f9d930  size=50  [run]
undefined4 FUN_00f9d930(int param_1)

{
  if (DAT_018da66c != param_1) {
    DAT_018da66c = param_1;
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xce,param_1);
    }
  }
  return 1;
}

// 00F9D970  FUN_00f9d970  size=143  [run]
undefined4 FUN_00f9d970(int param_1,int param_2,int param_3)

{
  if (((DAT_018da670 != param_1) || (DAT_018da674 != param_2)) || (DAT_018da678 != param_3)) {
    DAT_018da678 = param_3;
    DAT_018da670 = param_1;
    DAT_018da674 = param_2;
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x13,param_1);
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x14,DAT_018da674);
        if (DAT_01f206d4 != (int *)0x0) {
          (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xab,DAT_018da678);
        }
      }
    }
  }
  return 1;
}

// 00F9DA00  FUN_00f9da00  size=72  [run]
undefined4 FUN_00f9da00(int param_1,int param_2,int param_3)

{
  if (((DAT_018da67c != param_1) || (DAT_018da680 != param_2)) || (DAT_018da684 != param_3)) {
    DAT_018da67c = param_1;
    DAT_018da680 = param_2;
    DAT_018da684 = param_3;
    FUN_00f9c5f0(&DAT_018da638);
  }
  return 1;
}

// 00F9DA50  FUN_00f9da50  size=52  [run]
undefined4 FUN_00f9da50(int param_1)

{
  if (DAT_018da688 != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xa8,param_1);
    }
    DAT_018da688 = param_1;
  }
  return 1;
}

// 00F9DA90  FUN_00f9da90  size=64  [run]
undefined4 FUN_00f9da90(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_018da688 & 8;
  if (param_1 != 0) {
    uVar2 = uVar2 | 7;
  }
  uVar1 = DAT_018da688;
  if ((DAT_018da688 != uVar2) && (uVar1 = uVar2, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xa8,uVar2);
  }
  DAT_018da688 = uVar1;
  return 1;
}

// 00F9DAD0  FUN_00f9dad0  size=84  [run]
undefined4 FUN_00f9dad0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_018da688 & 8;
  if (param_1 != 0) {
    uVar2 = uVar2 | 1;
  }
  if (param_2 != 0) {
    uVar2 = uVar2 | 2;
  }
  if (param_3 != 0) {
    uVar2 = uVar2 | 4;
  }
  uVar1 = DAT_018da688;
  if ((DAT_018da688 != uVar2) && (uVar1 = uVar2, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xa8,uVar2);
  }
  DAT_018da688 = uVar1;
  return 1;
}

// 00F9DB30  FUN_00f9db30  size=64  [run]
undefined4 FUN_00f9db30(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_018da688 & 7;
  if (param_1 != 0) {
    uVar2 = uVar2 | 8;
  }
  uVar1 = DAT_018da688;
  if ((DAT_018da688 != uVar2) && (uVar1 = uVar2, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xa8,uVar2);
  }
  DAT_018da688 = uVar1;
  return 1;
}

// 00F9DB70  FUN_00f9db70  size=77  [run]
undefined4 FUN_00f9db70(int param_1,int param_2,int param_3)

{
  if (((DAT_018da68c != param_1) || (DAT_018da690 != param_2)) || (DAT_018da694 != param_3)) {
    FUN_00f9c670(param_1,param_2,param_3);
    DAT_018da68c = param_1;
    DAT_018da690 = param_2;
    DAT_018da694 = param_3;
  }
  return 1;
}

// 00F9DBC0  FUN_00f9dbc0  size=115  [run]
undefined4 FUN_00f9dbc0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = DAT_018da68c & 8;
  uVar3 = DAT_018da690 & 8;
  uVar2 = DAT_018da694 & 8;
  if (param_1 != 0) {
    uVar1 = uVar1 | 7;
  }
  if (param_2 != 0) {
    uVar3 = uVar3 | 7;
  }
  if (param_3 != 0) {
    uVar2 = uVar2 | 7;
  }
  if (((DAT_018da68c != uVar1) || (DAT_018da690 != uVar3)) || (DAT_018da694 != uVar2)) {
    FUN_00f9c670(uVar1,uVar3,uVar2);
    DAT_018da68c = uVar1;
    DAT_018da690 = uVar3;
    DAT_018da694 = uVar2;
  }
  return 1;
}

// 00F9DC40  FUN_00f9dc40  size=115  [run]
undefined4 FUN_00f9dc40(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = DAT_018da68c & 7;
  uVar3 = DAT_018da690 & 7;
  uVar2 = DAT_018da694 & 7;
  if (param_1 != 0) {
    uVar1 = uVar1 | 8;
  }
  if (param_2 != 0) {
    uVar3 = uVar3 | 8;
  }
  if (param_3 != 0) {
    uVar2 = uVar2 | 8;
  }
  if (((DAT_018da68c != uVar1) || (DAT_018da690 != uVar3)) || (DAT_018da694 != uVar2)) {
    FUN_00f9c670(uVar1,uVar3,uVar2);
    DAT_018da68c = uVar1;
    DAT_018da690 = uVar3;
    DAT_018da694 = uVar2;
  }
  return 1;
}

// 00F9DCF0  FUN_00f9dcf0  size=121  [run]
undefined4 FUN_00f9dcf0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (DAT_018da69c != param_1) {
    uVar1 = 0;
    uVar2 = 0;
    if (param_1 == 1) {
      uVar1 = 1;
      uVar2 = 0;
    }
    else if (param_1 == 2) {
      uVar1 = 1;
      uVar2 = 1;
    }
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x34,uVar1);
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xb9,uVar2);
      }
    }
    DAT_018da69c = param_1;
  }
  return 1;
}

// 00F9DD70  FUN_00f9dd70  size=135  [run]
undefined4 FUN_00f9dd70(int param_1,int param_2,int param_3)

{
  if (((DAT_018da6a0 != param_1) || (DAT_018da6a4 != param_2)) || (DAT_018da6a8 != param_3)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x35,param_1);
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x36,param_2);
        if (DAT_01f206d4 != (int *)0x0) {
          (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x37,param_3);
        }
      }
    }
    DAT_018da6a0 = param_1;
    DAT_018da6a4 = param_2;
    DAT_018da6a8 = param_3;
  }
  return 1;
}

// 00F9DE50  FUN_00f9de50  size=135  [run]
undefined4 FUN_00f9de50(int param_1,int param_2,int param_3)

{
  if (((DAT_018da6b8 != param_1) || (DAT_018da6bc != param_2)) || (DAT_018da6c0 != param_3)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x38,param_1);
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x39,param_2);
        if (DAT_01f206d4 != (int *)0x0) {
          (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x3a,param_3);
        }
      }
    }
    DAT_018da6b8 = param_1;
    DAT_018da6bc = param_2;
    DAT_018da6c0 = param_3;
  }
  return 1;
}

// 00F9DF20  FUN_00f9df20  size=49  [run]
undefined4 FUN_00f9df20(int param_1)

{
  if (DAT_018da6c8 != param_1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x3b,param_1);
    }
    DAT_018da6c8 = param_1;
  }
  return 1;
}

// 00F9DF60  FUN_00f9df60  size=73  [run]
bool FUN_00f9df60(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return true;
  }
  iVar1 = FUN_00f9bf90(0,0);
  if ((iVar1 != 0) && (DAT_01f206d4 != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x144))(DAT_01f206d4,param_1,0,param_2);
    return -1 < iVar1;
  }
  return false;
}

// 00F9DFB0  FUN_00f9dfb0  size=125  [run]
bool FUN_00f9dfb0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(DAT_01f205a0 + 0x1c);
  if (uVar2 != 0) {
    switch(param_1) {
    case 1:
      break;
    case 2:
      uVar2 = uVar2 >> 1;
      break;
    case 3:
      uVar2 = uVar2 - 1;
      break;
    case 4:
      uVar2 = uVar2 / 3;
      break;
    case 5:
    case 6:
      uVar2 = uVar2 - 2;
      break;
    default:
      goto switchD_00f9dfca_default;
    }
    if (uVar2 != 0) {
      iVar1 = FUN_00f9bf90(0,0);
      if ((iVar1 != 0) && (DAT_01f206d4 != (int *)0x0)) {
        iVar1 = (**(code **)(*DAT_01f206d4 + 0x144))(DAT_01f206d4,param_1,0,uVar2);
        return -1 < iVar1;
      }
      return false;
    }
  }
switchD_00f9dfca_default:
  return true;
}

// 00F9E050  FUN_00f9e050  size=56  [run]
undefined4 FUN_00f9e050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00f9bf90(*(undefined4 *)(param_1 + 4),0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 1;
  }
  uVar2 = FUN_00f98720(param_1,DAT_01f20594);
  return uVar2;
}

// 00F9E090  thunk_FUN_00f9d0b0  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_00f9d0b0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  piVar6 = DAT_01f20734;
  if (DAT_01f20734 != DAT_01f20738) {
    do {
      switch(piVar6[2]) {
      case 0:
      case 1:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        piVar1 = (int *)*piVar6;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar6 = 0;
        }
        *(undefined4 *)piVar6[1] = 0;
      }
      piVar6 = (int *)piVar6[0xb];
    } while (piVar6 != DAT_01f20738);
  }
  iVar4 = FUN_00df8520();
  puVar5 = &DAT_01f20620;
  if (iVar4 == 0) {
    puVar5 = &DAT_01f205e8;
  }
  iVar4 = (**(code **)(*DAT_01f206d4 + 0x40))(DAT_01f206d4,puVar5);
  if (iVar4 != -0x7789f798) {
    if (iVar4 != -0x7789f794) {
      if (iVar4 < 0) {
        FUN_00dd5650("device reset failed.");
        return 0;
      }
      DAT_01f206f4 = 0;
      FUN_00dd5650("device reset succeed.");
      piVar6 = DAT_01f20734;
      if (DAT_01f20734 != DAT_01f20738) {
        do {
          switch(piVar6[2]) {
          case 0:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0x10) = DAT_01f206e0;
            }
            piVar1 = DAT_01f206d4;
            if ((piVar6[3] == 8) || (piVar6[9] == 9)) {
              iVar4 = (**(code **)(*DAT_01f206d4 + 0x74))
                                (DAT_01f206d4,piVar6[3],piVar6[4],piVar6[6],0,0,0,piVar6[1],0);
              *piVar6 = *(int *)piVar6[1];
            }
            else {
              iVar4 = *DAT_01f206d4;
              uVar7 = FUN_00f98930(DAT_01f206a0,0,piVar6[1],0);
              iVar4 = (**(code **)(iVar4 + 0x74))
                                (piVar1,(int)((ulonglong)uVar7 >> 0x20),piVar6[4],piVar6[6],
                                 (int)uVar7);
              *(undefined4 *)(piVar6[8] + 0x14) = DAT_01f20708;
              *piVar6 = *(int *)piVar6[1];
            }
            break;
          case 1:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 8) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206e0;
            }
            piVar1 = DAT_01f206d4;
            if ((piVar6[3] == 8) || (piVar6[9] == 9)) {
              iVar4 = (**(code **)(*DAT_01f206d4 + 0x70))
                                (DAT_01f206d4,piVar6[3],piVar6[4],piVar6[6],0,0,0,piVar6[1],0);
              *piVar6 = *(int *)piVar6[1];
            }
            else {
              iVar4 = *DAT_01f206d4;
              uVar7 = FUN_00f98930(DAT_01f206a0,0,piVar6[1],0);
              iVar4 = (**(code **)(iVar4 + 0x70))
                                (piVar1,(int)((ulonglong)uVar7 >> 0x20),piVar6[4],piVar6[6],
                                 (int)uVar7);
              *(undefined4 *)(piVar6[8] + 0x24) = DAT_01f20708;
              *piVar6 = *(int *)piVar6[1];
            }
            break;
          case 6:
            iVar4 = (**(code **)(*DAT_01f206d4 + 0x1d8))(DAT_01f206d4,9,piVar6[1]);
            goto LAB_00f9d47d;
          case 7:
            if (((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) && (piVar6[6] != 0x1c))
            {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 8) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206e0;
            }
            iVar4 = D3DXCreateTexture(DAT_01f206d4,piVar6[3],piVar6[4],1,piVar6[5],piVar6[6],
                                      piVar6[7],piVar6[1]);
            *piVar6 = *(int *)piVar6[1];
            break;
          case 8:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 8) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206e0;
            }
            iVar4 = D3DXCreateTexture(DAT_01f206d4,piVar6[3],piVar6[4],1,piVar6[5],piVar6[6],
                                      piVar6[7],piVar6[1]);
            *piVar6 = *(int *)piVar6[1];
            break;
          case 9:
            if ((DAT_01f206e4 == piVar6[3]) && (DAT_01f206e8 == piVar6[4])) {
              piVar6[3] = DAT_01f206dc;
              *(int *)(piVar6[8] + 0xc) = DAT_01f206dc;
              piVar6[4] = DAT_01f206e0;
              *(int *)(piVar6[8] + 0x10) = DAT_01f206e0;
            }
          case 10:
            iVar4 = D3DXCreateTexture(DAT_01f206d4,piVar6[3],piVar6[4],1,piVar6[5],piVar6[6],
                                      piVar6[7],piVar6[1]);
LAB_00f9d47d:
            *piVar6 = *(int *)piVar6[1];
          }
          if (iVar4 < 0) {
            FUN_00dd5650(&DAT_016eb91c);
            return 0;
          }
          piVar6 = (int *)piVar6[0xb];
        } while (piVar6 != DAT_01f20738);
      }
      iVar4 = FUN_00df8520();
      _DAT_01f206b0 = DAT_01f205e8;
      _DAT_01f206b4 = DAT_01f205ec;
      if (iVar4 != 0) {
        _DAT_01f206b0 = DAT_01f20620;
        _DAT_01f206b4 = DAT_01f20624;
      }
      fVar2 = (float)_DAT_01f206b4;
      if (_DAT_01f206b4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar3 = (float)_DAT_01f206b0;
      if (_DAT_01f206b0 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      _DAT_01f206b8 = fVar2 / fVar3;
      if (0.5625 <= _DAT_01f206b8) {
        _DAT_01f206c0 = 0;
        _DAT_01f206c4 = (uint)(_DAT_01f206b4 - (int)(longlong)ROUND(fVar3 * 0.0625 * 9.0)) >> 1;
        _DAT_01f206cc = _DAT_01f206b4 + _DAT_01f206c4 * -2;
        _DAT_01f206c8 = _DAT_01f206b0;
      }
      else {
        _DAT_01f206c4 = 0;
        _DAT_01f206c0 = (uint)(_DAT_01f206b0 - (int)(longlong)ROUND((fVar2 / 9.0) * 16.0)) >> 1;
        _DAT_01f206c8 = _DAT_01f206b0 + _DAT_01f206c0 * -2;
        _DAT_01f206cc = _DAT_01f206b4;
      }
      FUN_00dd5650("device reset end.");
      return 1;
    }
    FUN_00dd5650("device reset failed.(D3DERR_INVALIDCALL)");
  }
  return 0;
}

// 00F9E0A0  FUN_00f9e0a0  size=53  [run]
void __fastcall FUN_00f9e0a0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00fa8fa0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_00fa8fa0(param_1[1]);
    param_1[1] = 0;
  }
  return;
}

