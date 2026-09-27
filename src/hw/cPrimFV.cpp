// src/hw/cPrimFV.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA2B60..00FAABC0, 14 functions

#include "mgrr.h"

// 00FA2B60  Hw::cPrimFV::vf04  size=205  [class]
void __fastcall Hw::cPrimFV::vf04(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0x7c));
  FUN_00fa03d0(*(undefined4 *)(param_1 + 0x80));
  FUN_00f9eec0(&DAT_018da5c4,param_1 + 0x10);
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  FUN_00f9d970(5,6,1);
  if (DAT_01f20590 != &PTR_vftable_018da590) {
    DAT_01f20590 = &PTR_vftable_018da590;
    DAT_01f2058c = 1;
  }
  if (DAT_01f2059c != &PTR_vftable_018da4cc) {
    DAT_01f2059c = &PTR_vftable_018da4cc;
    DAT_01f20598 = 1;
  }
  iVar1 = param_1 + 0x50;
  if (DAT_01f205a0 != iVar1) {
    iVar2 = FUN_00f98600(0,iVar1);
    if (iVar2 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar1;
    }
  }
  FUN_00f9dfb0(*(undefined4 *)(param_1 + 0x78));
  return;
}

// 00FA6930  Hw::cPrimFV::cPrimFV  size=526  [class]
/* WARNING: Removing unreachable block (ram,0x00fa69ed) */
/* WARNING: Removing unreachable block (ram,0x00fa6b0a) */

undefined4 * __thiscall Hw::cPrimFV::cPrimFV(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if ((*param_1 != 0) &&
     (puVar3 = (undefined4 *)::cPrimHeap::allocBuffer(0x90,0x20), puVar3 != (undefined4 *)0x0)) {
    *puVar3 = vftable;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1d] = 0;
    iVar4 = cVertexBufferHeap::allocateBuffer(puVar3 + 0x14,0x10,param_3);
    if ((iVar4 != 0) && (iVar4 = FUN_00f99ca0(), iVar4 != 0)) {
      uVar8 = 0;
      if (3 < (int)param_3) {
        puVar5 = (undefined4 *)(iVar4 + 8);
        puVar7 = (undefined4 *)(param_2 + 8);
        do {
          puVar5[-2] = puVar7[-2];
          puVar5[-1] = puVar7[-1];
          *puVar5 = *puVar7;
          puVar5[1] = (float)(uVar8 % 3);
          puVar5[2] = puVar7[1];
          puVar5[3] = puVar7[2];
          puVar5[4] = puVar7[3];
          iVar6 = uVar8 + ((uVar8 + 1) / 3) * -3 + 1;
          fVar2 = (float)iVar6;
          if (iVar6 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          puVar5[5] = fVar2;
          puVar5[6] = puVar7[4];
          puVar5[7] = puVar7[5];
          puVar5[8] = puVar7[6];
          iVar6 = uVar8 + ((uVar8 + 2) / 3) * -3 + 2;
          fVar2 = (float)iVar6;
          if (iVar6 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          puVar5[9] = fVar2;
          puVar5[10] = puVar7[7];
          puVar5[0xb] = puVar7[8];
          puVar5[0xc] = puVar7[9];
          iVar6 = uVar8 + (1 - (uVar8 + 3) / 3) * 3;
          fVar2 = (float)iVar6;
          if (iVar6 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          puVar5[0xd] = fVar2;
          uVar8 = uVar8 + 4;
          puVar7 = puVar7 + 0xc;
          puVar5 = puVar5 + 0x10;
        } while (uVar8 < param_3 - 3);
      }
      if (uVar8 < param_3) {
        puVar5 = (undefined4 *)(iVar4 + 8 + uVar8 * 0x10);
        puVar7 = (undefined4 *)(param_2 + 8 + uVar8 * 0xc);
        do {
          puVar5[-2] = puVar7[-2];
          puVar5[-1] = puVar7[-1];
          *puVar5 = *puVar7;
          puVar5[1] = (float)(uVar8 % 3);
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 3;
          puVar5 = puVar5 + 4;
        } while (uVar8 < param_3);
      }
      piVar1 = (int *)puVar3[0x14];
      if (piVar1 != (int *)0x0) {
        if (puVar3[0x17] == 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        puVar3[0x18] = 0;
      }
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}

// 00FA6B50  Hw::cPrimFV::cPrimFV_2  size=532  [class]
/* WARNING: Removing unreachable block (ram,0x00fa6c0d) */
/* WARNING: Removing unreachable block (ram,0x00fa6d2a) */

undefined4 * __thiscall Hw::cPrimFV::cPrimFV_2(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if ((*param_1 != 0) &&
     (puVar3 = (undefined4 *)::cPrimHeap::allocBuffer(0x90,0x20), puVar3 != (undefined4 *)0x0)) {
    *puVar3 = vftable;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1d] = 0;
    iVar4 = cVertexBufferHeap::allocateBuffer(puVar3 + 0x14,0x10,param_3);
    if ((iVar4 != 0) && (iVar4 = FUN_00f99ca0(), iVar4 != 0)) {
      uVar8 = 0;
      if (3 < (int)param_3) {
        puVar7 = (undefined4 *)(param_2 + 0x10);
        puVar5 = (undefined4 *)(iVar4 + 4);
        do {
          puVar5[-1] = puVar7[-4];
          *puVar5 = *(undefined4 *)((int)puVar5 + (param_2 - iVar4));
          puVar5[1] = puVar7[-2];
          puVar5[2] = (float)(uVar8 % 3);
          puVar5[3] = *puVar7;
          puVar5[4] = puVar7[1];
          puVar5[5] = puVar7[2];
          iVar6 = uVar8 + ((uVar8 + 1) / 3) * -3 + 1;
          fVar2 = (float)iVar6;
          if (iVar6 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          puVar5[6] = fVar2;
          puVar5[7] = puVar7[4];
          puVar5[8] = puVar7[5];
          puVar5[9] = puVar7[6];
          iVar6 = uVar8 + ((uVar8 + 2) / 3) * -3 + 2;
          fVar2 = (float)iVar6;
          if (iVar6 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          puVar5[10] = fVar2;
          puVar5[0xb] = puVar7[8];
          puVar5[0xc] = puVar7[9];
          puVar5[0xd] = puVar7[10];
          iVar6 = uVar8 + (1 - (uVar8 + 3) / 3) * 3;
          fVar2 = (float)iVar6;
          if (iVar6 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          puVar5[0xe] = fVar2;
          uVar8 = uVar8 + 4;
          puVar7 = puVar7 + 0x10;
          puVar5 = puVar5 + 0x10;
        } while (uVar8 < param_3 - 3);
      }
      if (uVar8 < param_3) {
        puVar7 = (undefined4 *)(param_2 + uVar8 * 0x10);
        puVar5 = (undefined4 *)(iVar4 + 4 + uVar8 * 0x10);
        do {
          puVar5[-1] = *puVar7;
          *puVar5 = *(undefined4 *)((param_2 - iVar4) + (int)puVar5);
          puVar5[1] = puVar7[2];
          puVar5[2] = (float)(uVar8 % 3);
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 4;
          puVar5 = puVar5 + 4;
        } while (uVar8 < param_3);
      }
      piVar1 = (int *)puVar3[0x14];
      if (piVar1 != (int *)0x0) {
        if (puVar3[0x17] == 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        puVar3[0x18] = 0;
      }
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}

// 00FA6D70  FUN_00fa6d70  size=162  [callgraph]
uint __thiscall FUN_00fa6d70(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xb0,0x20);
    if (iVar1 != 0) {
      uVar2 = Hw::cPrimFT::cPrimFT();
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x50) == 0)) {
        iVar1 = cVertexBufferHeap::allocateBuffer(uVar2 + 0x50,0xc,param_4);
        if ((iVar1 != 0) && (*(int *)(uVar2 + 0x78) == 0)) {
          iVar1 = cVertexBufferHeap::allocateBuffer(uVar2 + 0x78,8,param_4);
          if (iVar1 != 0) {
            iVar1 = FUN_00f99d50(param_2,0xc,param_4);
            if (iVar1 != 0) {
              iVar1 = FUN_00f99d50(param_3,8,param_4);
              return -(uint)(iVar1 != 0) & uVar2;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FA6E20  FUN_00fa6e20  size=418  [callgraph]
int __thiscall FUN_00fa6e20(int *param_1,int param_2,void *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *_Dst;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 != 0) {
    iVar2 = cPrimHeap::allocBuffer(0xb0,0x20);
    if (iVar2 != 0) {
      iVar2 = Hw::cPrimFT::cPrimFT();
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x50) == 0)) {
        iVar3 = cVertexBufferHeap::allocateBuffer(iVar2 + 0x50,0xc,param_4);
        if ((iVar3 != 0) && (*(int *)(iVar2 + 0x78) == 0)) {
          iVar3 = cVertexBufferHeap::allocateBuffer(iVar2 + 0x78,8,param_4);
          if (iVar3 != 0) {
            iVar3 = FUN_00f99ca0();
            if (iVar3 != 0) {
              uVar7 = 0;
              if (3 < (int)param_4) {
                iVar6 = (param_4 - 4 >> 2) + 1;
                uVar7 = iVar6 * 4;
                puVar4 = (undefined4 *)(param_2 + 8);
                puVar5 = (undefined4 *)(iVar3 + 8);
                do {
                  puVar5[-2] = puVar4[-2];
                  iVar6 = iVar6 + -1;
                  puVar5[-1] = puVar4[-1];
                  *puVar5 = *puVar4;
                  puVar5[1] = puVar4[2];
                  puVar5[2] = puVar4[3];
                  puVar5[3] = puVar4[4];
                  puVar5[4] = puVar4[6];
                  puVar5[5] = puVar4[7];
                  puVar5[6] = puVar4[8];
                  puVar5[7] = puVar4[10];
                  puVar5[8] = puVar4[0xb];
                  puVar5[9] = puVar4[0xc];
                  puVar4 = puVar4 + 0x10;
                  puVar5 = puVar5 + 0xc;
                } while (iVar6 != 0);
              }
              if (uVar7 < param_4) {
                iVar6 = param_4 - uVar7;
                puVar4 = (undefined4 *)(param_2 + 8 + uVar7 * 0x10);
                puVar5 = (undefined4 *)(iVar3 + 8 + uVar7 * 0xc);
                do {
                  puVar5[-2] = puVar4[-2];
                  iVar6 = iVar6 + -1;
                  puVar5[-1] = puVar4[-1];
                  *puVar5 = *puVar4;
                  puVar4 = puVar4 + 4;
                  puVar5 = puVar5 + 3;
                } while (iVar6 != 0);
              }
              piVar1 = *(int **)(iVar2 + 0x50);
              if (piVar1 != (int *)0x0) {
                if (*(int *)(iVar2 + 0x5c) == 0) {
                  (**(code **)(*piVar1 + 0x30))(piVar1);
                }
                *(undefined4 *)(iVar2 + 0x60) = 0;
              }
              if ((*(int *)(iVar2 + 0x90) == 8) && (*(uint *)(iVar2 + 0x94) == param_4)) {
                _Dst = (void *)FUN_00f99ca0();
                if (_Dst != (void *)0x0) {
                  FID_conflict__memcpy(_Dst,param_3,param_4 * 8);
                  piVar1 = *(int **)(iVar2 + 0x78);
                  if (piVar1 != (int *)0x0) {
                    if (*(int *)(iVar2 + 0x84) == 0) {
                      (**(code **)(*piVar1 + 0x30))(piVar1);
                    }
                    *(undefined4 *)(iVar2 + 0x88) = 0;
                  }
                  return iVar2;
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

// 00FA7490  FUN_00fa7490  size=168  [callgraph]
int __thiscall
FUN_00fa7490(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xb0,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimIF::cPrimIF();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x50) == 0)) {
        iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_3);
        if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
          iVar2 = cIndexBufferHeap::allocateBuffer(iVar1 + 0x78,param_5);
          if (iVar2 != 0) {
            iVar2 = FUN_00f99d50(param_2,0xc,param_3);
            if (iVar2 != 0) {
              iVar2 = FUN_00f99a60(param_4,2,param_5);
              if (iVar2 != 0) {
                *(undefined4 *)(iVar1 + 0xa0) = 0;
                return iVar1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FA7540  FUN_00fa7540  size=432  [callgraph]
int __thiscall FUN_00fa7540(int *param_1,int param_2,uint param_3,void *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *_Dst;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if ((((*param_1 != 0) && (iVar2 = cPrimHeap::allocBuffer(0xb0,0x20), iVar2 != 0)) &&
      (iVar2 = Hw::cPrimIF::cPrimIF(), iVar2 != 0)) &&
     (((*(int *)(iVar2 + 0x50) == 0 &&
       (iVar3 = cVertexBufferHeap::allocateBuffer(iVar2 + 0x50,0xc,param_3), iVar3 != 0)) &&
      ((*(int *)(iVar2 + 0x78) == 0 &&
       ((iVar3 = cIndexBufferHeap::allocateBuffer(iVar2 + 0x78,param_5), iVar3 != 0 &&
        (iVar3 = FUN_00f99ca0(), iVar3 != 0)))))))) {
    uVar7 = 0;
    if (3 < (int)param_3) {
      iVar6 = (param_3 - 4 >> 2) + 1;
      uVar7 = iVar6 * 4;
      puVar4 = (undefined4 *)(param_2 + 8);
      puVar5 = (undefined4 *)(iVar3 + 8);
      do {
        puVar5[-2] = puVar4[-2];
        iVar6 = iVar6 + -1;
        puVar5[-1] = puVar4[-1];
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[2];
        puVar5[2] = puVar4[3];
        puVar5[3] = puVar4[4];
        puVar5[4] = puVar4[6];
        puVar5[5] = puVar4[7];
        puVar5[6] = puVar4[8];
        puVar5[7] = puVar4[10];
        puVar5[8] = puVar4[0xb];
        puVar5[9] = puVar4[0xc];
        puVar4 = puVar4 + 0x10;
        puVar5 = puVar5 + 0xc;
      } while (iVar6 != 0);
    }
    if (uVar7 < param_3) {
      iVar6 = param_3 - uVar7;
      puVar4 = (undefined4 *)(param_2 + 8 + uVar7 * 0x10);
      puVar5 = (undefined4 *)(iVar3 + 8 + uVar7 * 0xc);
      do {
        puVar5[-2] = puVar4[-2];
        iVar6 = iVar6 + -1;
        puVar5[-1] = puVar4[-1];
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 3;
      } while (iVar6 != 0);
    }
    piVar1 = *(int **)(iVar2 + 0x50);
    if (piVar1 != (int *)0x0) {
      if (*(int *)(iVar2 + 0x5c) == 0) {
        (**(code **)(*piVar1 + 0x30))(piVar1);
      }
      *(undefined4 *)(iVar2 + 0x60) = 0;
    }
    if (((*(int *)(iVar2 + 0x8c) == 2) && (*(int *)(iVar2 + 0x90) == param_5)) &&
       (_Dst = (void *)FUN_00f999c0(), _Dst != (void *)0x0)) {
      FID_conflict__memcpy(_Dst,param_4,param_5 * 2);
      piVar1 = *(int **)(iVar2 + 0x78);
      if (piVar1 != (int *)0x0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        *(undefined4 *)(iVar2 + 0x84) = 0;
      }
      *(undefined4 *)(iVar2 + 0xa0) = 0;
      return iVar2;
    }
  }
  return 0;
}

// 00FA76F0  FUN_00fa76f0  size=213  [callgraph]
uint __thiscall
FUN_00fa76f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xe0,0x20);
    if (iVar1 != 0) {
      uVar2 = Hw::cPrimIFT::cPrimIFT();
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x50) == 0)) {
        iVar1 = cVertexBufferHeap::allocateBuffer(uVar2 + 0x50,0xc,param_4);
        if ((iVar1 != 0) && (*(int *)(uVar2 + 0x78) == 0)) {
          iVar1 = cVertexBufferHeap::allocateBuffer(uVar2 + 0x78,8,param_4);
          if ((iVar1 != 0) && (*(int *)(uVar2 + 0xa0) == 0)) {
            iVar1 = cIndexBufferHeap::allocateBuffer(uVar2 + 0xa0,param_6);
            if (iVar1 != 0) {
              iVar1 = FUN_00f99d50(param_2,0xc,param_4);
              if (iVar1 != 0) {
                iVar1 = FUN_00f99d50(param_3,8,param_4);
                if (iVar1 != 0) {
                  iVar1 = FUN_00f99a60(param_5,2,param_6);
                  return -(uint)(iVar1 != 0) & uVar2;
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

// 00FA77D0  FUN_00fa77d0  size=776  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fa78bb) */
/* WARNING: Removing unreachable block (ram,0x00fa79da) */

int __thiscall
FUN_00fa77d0(int *param_1,int param_2,void *param_3,uint param_4,void *param_5,int param_6)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if ((((((*param_1 != 0) && (iVar3 = cPrimHeap::allocBuffer(0xe0,0x20), iVar3 != 0)) &&
        (iVar3 = Hw::cPrimIFT::cPrimIFT(), iVar3 != 0)) &&
       (((*(int *)(iVar3 + 0x50) == 0 &&
         (iVar4 = cVertexBufferHeap::allocateBuffer(iVar3 + 0x50,0xc,param_4), iVar4 != 0)) &&
        ((*(int *)(iVar3 + 0x78) == 0 &&
         ((iVar4 = cVertexBufferHeap::allocateBuffer(iVar3 + 0x78,8,param_4), iVar4 != 0 &&
          (*(int *)(iVar3 + 0xa0) == 0)))))))) &&
      (iVar4 = cIndexBufferHeap::allocateBuffer(iVar3 + 0xa0,param_6), iVar4 != 0)) &&
     (iVar4 = FUN_00f99ca0(), iVar4 != 0)) {
    uVar9 = 0;
    if (3 < (int)param_4) {
      puVar8 = (undefined4 *)(param_2 + 0x10);
      puVar6 = (undefined4 *)(iVar4 + 4);
      do {
        puVar6[-1] = puVar8[-4];
        *puVar6 = *(undefined4 *)((int)puVar6 + (param_2 - iVar4));
        puVar6[1] = puVar8[-2];
        puVar6[2] = (float)(uVar9 % 3);
        puVar6[3] = *puVar8;
        puVar6[4] = puVar8[1];
        puVar6[5] = puVar8[2];
        iVar7 = uVar9 + ((uVar9 + 1) / 3) * -3 + 1;
        fVar2 = (float)iVar7;
        if (iVar7 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        puVar6[6] = fVar2;
        puVar6[7] = puVar8[4];
        puVar6[8] = puVar8[5];
        puVar6[9] = puVar8[6];
        iVar7 = uVar9 + ((uVar9 + 2) / 3) * -3 + 2;
        fVar2 = (float)iVar7;
        if (iVar7 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        puVar6[10] = fVar2;
        puVar6[0xb] = puVar8[8];
        puVar6[0xc] = puVar8[9];
        puVar6[0xd] = puVar8[10];
        iVar7 = uVar9 + (1 - (uVar9 + 3) / 3) * 3;
        fVar2 = (float)iVar7;
        if (iVar7 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        puVar6[0xe] = fVar2;
        uVar9 = uVar9 + 4;
        puVar8 = puVar8 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (uVar9 < param_4 - 3);
    }
    if (uVar9 < param_4) {
      puVar8 = (undefined4 *)(param_2 + uVar9 * 0x10);
      puVar6 = (undefined4 *)(iVar4 + 4 + uVar9 * 0x10);
      do {
        puVar6[-1] = *puVar8;
        *puVar6 = *(undefined4 *)((param_2 - iVar4) + (int)puVar6);
        puVar6[1] = puVar8[2];
        puVar6[2] = (float)(uVar9 % 3);
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 4;
        puVar6 = puVar6 + 4;
      } while (uVar9 < param_4);
    }
    piVar1 = *(int **)(iVar3 + 0x50);
    if (piVar1 != (int *)0x0) {
      if (*(int *)(iVar3 + 0x5c) == 0) {
        (**(code **)(*piVar1 + 0x30))(piVar1);
      }
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
    if (((*(int *)(iVar3 + 0x90) == 8) && (*(uint *)(iVar3 + 0x94) == param_4)) &&
       (pvVar5 = (void *)FUN_00f99ca0(), pvVar5 != (void *)0x0)) {
      FID_conflict__memcpy(pvVar5,param_3,param_4 * 8);
      piVar1 = *(int **)(iVar3 + 0x78);
      if (piVar1 != (int *)0x0) {
        if (*(int *)(iVar3 + 0x84) == 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        *(undefined4 *)(iVar3 + 0x88) = 0;
      }
      if (((*(int *)(iVar3 + 0xb4) == 2) && (*(int *)(iVar3 + 0xb8) == param_6)) &&
         (pvVar5 = (void *)FUN_00f999c0(), pvVar5 != (void *)0x0)) {
        FID_conflict__memcpy(pvVar5,param_5,param_6 * 2);
        piVar1 = *(int **)(iVar3 + 0xa0);
        if (piVar1 != (int *)0x0) {
          if (*(int *)(iVar3 + 0xa8) == 0) {
            (**(code **)(*piVar1 + 0x30))(piVar1);
          }
          *(undefined4 *)(iVar3 + 0xac) = 0;
        }
        return iVar3;
      }
    }
  }
  return 0;
}

// 00FA7AE0  FUN_00fa7ae0  size=172  [callgraph]
int __thiscall FUN_00fa7ae0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xc0,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimG::cPrimG();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x50) == 0)) {
        iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_4);
        if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
          iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x78,4,param_4);
          if (iVar2 != 0) {
            iVar2 = FUN_00f99d50(param_2,0xc,param_4);
            if (iVar2 != 0) {
              iVar2 = FUN_00f99d50(param_3,4,param_4);
              if (iVar2 != 0) {
                *(undefined4 *)(iVar1 + 0xa8) = 0;
                return iVar1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FA7B90  FUN_00fa7b90  size=424  [callgraph]
int __thiscall FUN_00fa7b90(int *param_1,int param_2,void *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *_Dst;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 != 0) {
    iVar2 = cPrimHeap::allocBuffer(0xc0,0x20);
    if (iVar2 != 0) {
      iVar2 = Hw::cPrimG::cPrimG();
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x50) == 0)) {
        iVar3 = cVertexBufferHeap::allocateBuffer(iVar2 + 0x50,0xc,param_4);
        if ((iVar3 != 0) && (*(int *)(iVar2 + 0x78) == 0)) {
          iVar3 = cVertexBufferHeap::allocateBuffer(iVar2 + 0x78,4,param_4);
          if (iVar3 != 0) {
            iVar3 = FUN_00f99ca0();
            if (iVar3 != 0) {
              uVar7 = 0;
              if (3 < (int)param_4) {
                iVar6 = (param_4 - 4 >> 2) + 1;
                uVar7 = iVar6 * 4;
                puVar4 = (undefined4 *)(param_2 + 8);
                puVar5 = (undefined4 *)(iVar3 + 8);
                do {
                  puVar5[-2] = puVar4[-2];
                  iVar6 = iVar6 + -1;
                  puVar5[-1] = puVar4[-1];
                  *puVar5 = *puVar4;
                  puVar5[1] = puVar4[2];
                  puVar5[2] = puVar4[3];
                  puVar5[3] = puVar4[4];
                  puVar5[4] = puVar4[6];
                  puVar5[5] = puVar4[7];
                  puVar5[6] = puVar4[8];
                  puVar5[7] = puVar4[10];
                  puVar5[8] = puVar4[0xb];
                  puVar5[9] = puVar4[0xc];
                  puVar4 = puVar4 + 0x10;
                  puVar5 = puVar5 + 0xc;
                } while (iVar6 != 0);
              }
              if (uVar7 < param_4) {
                iVar6 = param_4 - uVar7;
                puVar4 = (undefined4 *)(param_2 + 8 + uVar7 * 0x10);
                puVar5 = (undefined4 *)(iVar3 + 8 + uVar7 * 0xc);
                do {
                  puVar5[-2] = puVar4[-2];
                  iVar6 = iVar6 + -1;
                  puVar5[-1] = puVar4[-1];
                  *puVar5 = *puVar4;
                  puVar4 = puVar4 + 4;
                  puVar5 = puVar5 + 3;
                } while (iVar6 != 0);
              }
              piVar1 = *(int **)(iVar2 + 0x50);
              if (piVar1 != (int *)0x0) {
                if (*(int *)(iVar2 + 0x5c) == 0) {
                  (**(code **)(*piVar1 + 0x30))(piVar1);
                }
                *(undefined4 *)(iVar2 + 0x60) = 0;
              }
              if ((*(int *)(iVar2 + 0x90) == 4) && (*(uint *)(iVar2 + 0x94) == param_4)) {
                _Dst = (void *)FUN_00f99ca0();
                if (_Dst != (void *)0x0) {
                  FID_conflict__memcpy(_Dst,param_3,param_4 * 4);
                  piVar1 = *(int **)(iVar2 + 0x78);
                  if (piVar1 != (int *)0x0) {
                    if (*(int *)(iVar2 + 0x84) == 0) {
                      (**(code **)(*piVar1 + 0x30))(piVar1);
                    }
                    *(undefined4 *)(iVar2 + 0x88) = 0;
                  }
                  *(undefined4 *)(iVar2 + 0xa8) = 0;
                  return iVar2;
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

// 00FA7D50  FUN_00fa7d50  size=85  [callgraph]
void __fastcall FUN_00fa7d50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = Hw::cPrimF::cPrimF(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20));
  }
  else {
    iVar1 = Hw::cPrimF::cPrimF_2(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 8);
  puVar3 = (undefined4 *)(param_1 + 0x40);
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(param_1 + 0x30);
  return;
}

// 00FA7DB0  FUN_00fa7db0  size=83  [callgraph]
void __fastcall FUN_00fa7db0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = Hw::cPrimFV::cPrimFV_2(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20));
  }
  else {
    iVar1 = Hw::cPrimFV::cPrimFV(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(param_1 + 0xc);
  puVar3 = (undefined4 *)(param_1 + 0x40);
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

// 00FAABC0  Hw::cPrimFV::vf00  size=39  [class]
undefined4 * __thiscall Hw::cPrimFV::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa45a0();
  *param_1 = cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

