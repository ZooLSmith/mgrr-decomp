// src/unsorted/unit_00FA6050.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA6050..00FA6650, 4 functions

#include "mgrr.h"

// 00FA6050  FUN_00fa6050  size=248  [run]
undefined4 __thiscall
FUN_00fa6050(undefined4 *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  
  param_2 = param_2 >> 1;
  iVar1 = FUN_00dd29b0(param_2,0x20,0,0);
  param_1[9] = iVar1;
  if (iVar1 != 0) {
    param_1[10] = 0;
    param_1[0xb] = param_2;
    param_1[0xc] = 0;
    iVar1 = FUN_00dd29b0(param_2,0x20,0,0);
    param_1[0xe] = iVar1;
    if (iVar1 != 0) {
      param_1[0xf] = 0;
      param_1[0x10] = param_2;
      param_1[0x11] = 0;
      param_3 = param_3 >> 1;
      iVar1 = FUN_00f99ef0(param_3,param_5,param_1 + 0x12);
      if (iVar1 != 0) {
        param_1[0x15] = param_5;
        param_1[0x16] = param_3;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        iVar1 = FUN_00f99ef0(param_3,param_5,param_1 + 0x19);
        if (iVar1 != 0) {
          param_1[0x1d] = param_3;
          param_1[0x1c] = param_5;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          iVar1 = FUN_00f9c810(2,param_4 >> 1,param_5);
          if (iVar1 != 0) {
            iVar1 = FUN_00f9c810(2,param_4 >> 1,param_5);
            if (iVar1 != 0) {
              param_1[6] = 0;
              param_1[7] = 0;
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              param_1[3] = 0;
              param_1[4] = 0;
              param_1[5] = 0;
              FUN_00f9d030();
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_00fa4eb0();
  return 0;
}

// 00FA6150  FUN_00fa6150  size=423  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00fa6150(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Hw::GraphicDevice_2(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00f991f0(param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00fa5d00(*(undefined4 *)(param_1 + 0xc),param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_00f998a0();
        if (iVar1 != 0) {
          iVar1 = FUN_00f9f880(param_2);
          if (iVar1 != 0) {
            iVar1 = Hw::cVertexFormatP::vf00();
            if (iVar1 != 0) {
              iVar1 = Hw::cVertexFormatPV::vf00();
              if (iVar1 != 0) {
                iVar1 = Hw::cVertexFormatPT::vf00();
                if (iVar1 != 0) {
                  iVar1 = Hw::cVertexFormatPG::vf00();
                  if (iVar1 != 0) {
                    _DAT_018da698 = 0x3f800000;
                    DAT_01f20584 = DAT_01f206dc;
                    DAT_01f20580 = DAT_01f206e0;
                    DAT_01f20564 = 0;
                    DAT_018da640 = 0;
                    DAT_018da644 = 0;
                    DAT_018da650 = 0;
                    DAT_018da654 = 0;
                    DAT_018da65c = 0;
                    DAT_018da660 = 0;
                    DAT_018da664 = 0;
                    DAT_018da668 = 0;
                    DAT_018da66c = 0;
                    DAT_018da69c = 0;
                    DAT_018da6bc = 0;
                    _DAT_018da638 = 3;
                    DAT_018da63c = 1;
                    DAT_018da648 = 1;
                    DAT_018da658 = 8;
                    DAT_018da670 = 1;
                    DAT_018da678 = 1;
                    DAT_018da67c = 2;
                    DAT_018da680 = 1;
                    DAT_018da684 = 1;
                    DAT_018da688 = 0xf;
                    DAT_018da6a0 = 1;
                    DAT_018da6a4 = 1;
                    DAT_018da6a8 = 1;
                    _DAT_018da6ac = 1;
                    _DAT_018da6b0 = 1;
                    _DAT_018da6b4 = 1;
                    DAT_018da6b8 = 8;
                    DAT_018da6c0 = 0xffffffff;
                    _DAT_018da6c4 = 8;
                    DAT_018da6c8 = 0xffffffff;
                    _DAT_018da6cc = 0xffffffff;
                    DAT_018da64c = 4;
                    DAT_018da68c = 0xf;
                    DAT_018da690 = 0xf;
                    DAT_018da694 = 0xf;
                    FUN_00f9da90(7);
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FA6300  FUN_00fa6300  size=844  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa6300(void)

{
  DAT_01f20564 = 0;
  _DAT_01f2094c = 0xffffffff;
  _DAT_01f20950 = 0xffffffff;
  _DAT_01f20954 = 0xffffffff;
  _DAT_01f20958 = 0xffffffff;
  DAT_01f2095c = 0xffffffff;
  _DAT_01f20960 = 0x1111111;
  _DAT_01f20928 = 0xffffffff;
  _DAT_01f2092c = 0xffffffff;
  _DAT_01f20930 = 0xffffffff;
  _DAT_01f20934 = 0xffffffff;
  _DAT_01f20938 = 0xffffffff;
  _DAT_01f2093c = 0xffffffff;
  _DAT_01f20940 = 0xffffffff;
  _DAT_01f20944 = 0xffffffff;
  _DAT_01f20948 = 0xffffffff;
  Hw::cShader::vf04();
  _DAT_01f207ac = 0xffffffff;
  DAT_01f207b0 = 0xffffffff;
  _DAT_01f207b4 = 0x1111111;
  _DAT_01f20788 = 0xffffffff;
  _DAT_01f2078c = 0xffffffff;
  _DAT_01f20790 = 0xffffffff;
  _DAT_01f20794 = 0xffffffff;
  _DAT_01f20798 = 0xffffffff;
  _DAT_01f2079c = 0xffffffff;
  _DAT_01f207a0 = 0xffffffff;
  _DAT_01f207a4 = 0xffffffff;
  _DAT_01f207a8 = 0xffffffff;
  Hw::cShader::vf04();
  _DAT_01f20804 = 0xffffffff;
  _DAT_01f20808 = 0xffffffff;
  _DAT_01f2080c = 0x1111111;
  _DAT_01f207e0 = 0xffffffff;
  _DAT_01f207e4 = 0xffffffff;
  _DAT_01f207e8 = 0xffffffff;
  _DAT_01f207ec = 0xffffffff;
  _DAT_01f207f0 = 0xffffffff;
  _DAT_01f207f4 = 0xffffffff;
  _DAT_01f207f8 = 0xffffffff;
  _DAT_01f207fc = 0xffffffff;
  _DAT_01f20800 = 0xffffffff;
  Hw::cShader::vf04();
  _DAT_01f2085c = 0xffffffff;
  DAT_01f20860 = 0xffffffff;
  _DAT_01f20864 = 0x1111111;
  _DAT_01f20868 = 0xffffffff;
  DAT_01f2086c = 0xffffffff;
  _DAT_01f20870 = 0x1111111;
  _DAT_01f20874 = 0xffffffff;
  DAT_01f20878 = 0xffffffff;
  _DAT_01f2087c = 0x1111111;
  _DAT_01f20838 = 0xffffffff;
  _DAT_01f2083c = 0xffffffff;
  _DAT_01f20840 = 0xffffffff;
  _DAT_01f20844 = 0xffffffff;
  _DAT_01f20848 = 0xffffffff;
  _DAT_01f2084c = 0xffffffff;
  _DAT_01f20850 = 0xffffffff;
  _DAT_01f20854 = 0xffffffff;
  _DAT_01f20858 = 0xffffffff;
  Hw::cShader::vf04();
  _DAT_01f208cc = 0xffffffff;
  _DAT_01f208d0 = 0xffffffff;
  _DAT_01f208d4 = 0x1111111;
  _DAT_01f208d8 = 0xffffffff;
  _DAT_01f208dc = 0xffffffff;
  _DAT_01f208e0 = 0x1111111;
  _DAT_01f208e4 = 0xffffffff;
  _DAT_01f208e8 = 0xffffffff;
  _DAT_01f208ec = 0x1111111;
  _DAT_01f208f0 = 0xffffffff;
  _DAT_01f208f4 = 0xffffffff;
  _DAT_01f208f8 = 0x1111111;
  _DAT_01f208a8 = 0xffffffff;
  _DAT_01f208ac = 0xffffffff;
  _DAT_01f208b0 = 0xffffffff;
  _DAT_01f208b4 = 0xffffffff;
  _DAT_01f208b8 = 0xffffffff;
  _DAT_01f208bc = 0xffffffff;
  _DAT_01f208c0 = 0xffffffff;
  _DAT_01f208c4 = 0xffffffff;
  _DAT_01f208c8 = 0xffffffff;
  Hw::cShader::vf04();
  _DAT_018da5b8 = 0xffffffff;
  _DAT_018da5bc = 0xffffffff;
  _DAT_018da5c0 = 0xffffffff;
  _DAT_018da5c4 = 0xffffffff;
  _DAT_018da5c8 = 0xffffffff;
  _DAT_018da5cc = 0xffffffff;
  _DAT_018da5d0 = 0xffffffff;
  _DAT_018da5d4 = 0xffffffff;
  _DAT_018da5d8 = 0xffffffff;
  Hw::cShader::vf04();
  _DAT_018da518 = 0xffffffff;
  _DAT_018da51c = 0xffffffff;
  _DAT_018da520 = 0xffffffff;
  _DAT_018da524 = 0xffffffff;
  _DAT_018da528 = 0xffffffff;
  _DAT_018da52c = 0xffffffff;
  _DAT_018da530 = 0xffffffff;
  _DAT_018da534 = 0xffffffff;
  _DAT_018da538 = 0xffffffff;
  Hw::cShader::vf04();
  _DAT_018da568 = 0xffffffff;
  _DAT_018da56c = 0xffffffff;
  _DAT_018da570 = 0xffffffff;
  _DAT_018da574 = 0xffffffff;
  _DAT_018da578 = 0xffffffff;
  _DAT_018da57c = 0xffffffff;
  _DAT_018da580 = 0xffffffff;
  _DAT_018da584 = 0xffffffff;
  _DAT_018da588 = 0xffffffff;
  Hw::cShader::vf04();
  if (DAT_018da4e8 != (int *)0x0) {
    (**(code **)(*DAT_018da4e8 + 8))(DAT_018da4e8);
    DAT_018da4e8 = (int *)0x0;
  }
  if (DAT_018da4dc != (int *)0x0) {
    (**(code **)(*DAT_018da4dc + 8))(DAT_018da4dc);
    DAT_018da4dc = (int *)0x0;
  }
  if (DAT_018da4d0 != (int *)0x0) {
    (**(code **)(*DAT_018da4d0 + 8))(DAT_018da4d0);
    DAT_018da4d0 = (int *)0x0;
  }
  if (DAT_018da4c4 != (int *)0x0) {
    (**(code **)(*DAT_018da4c4 + 8))(DAT_018da4c4);
    DAT_018da4c4 = (int *)0x0;
  }
  FUN_00fa5910();
  FUN_00f9f940();
  FUN_00fa5df0();
  FUN_00f9f5f0();
  return;
}

// 00FA6650  thunk_FUN_00fa5a00  size=5  [run]
/* WARNING: Removing unreachable block (ram,0x00fa5a57) */

void thunk_FUN_00fa5a00(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iStack_c;
  
  puVar8 = &DAT_01f144d0;
  iStack_c = 0x800;
  do {
    if ((param_1 <= *puVar8) && (*puVar8 < param_1 + param_2)) {
      LOCK();
      DAT_01f126c8 = 1;
      UNLOCK();
      iVar7 = 0;
      for (uVar1 = puVar8[2]; uVar1 != 0; uVar1 = uVar1 - 1) {
        uVar2 = puVar8[1];
        iVar3 = *(int *)(uVar2 + 0x2c + iVar7);
        piVar5 = &DAT_01f204e0;
        iVar6 = 0x10;
        do {
          if (iVar3 == *piVar5) {
            *piVar5 = 0;
            piVar5[1] = 0;
          }
          piVar5 = piVar5 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (puVar8[4] == 0) {
          FUN_00fa3610(uVar2 + iVar7);
        }
        iVar7 = iVar7 + 0x30;
      }
      puVar4 = (undefined4 *)puVar8[1];
      if (puVar4 != (undefined4 *)0x0) {
        if (puVar4[-1] == 0) {
          FUN_00dd4940(puVar4 + -1);
        }
        else {
          (**(code **)*puVar4)(3);
        }
      }
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
    }
    if ((param_1 <= puVar8[5]) && (puVar8[5] < param_1 + param_2)) {
      FUN_00fa3830(puVar8);
    }
    puVar8 = puVar8 + 6;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  return;
}

