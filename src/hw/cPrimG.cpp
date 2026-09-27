// src/hw/cPrimG.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA09A0..00FAAFD0, 9 functions

#include "mgrr.h"

// 00FA09A0  Hw::cPrimG::vf04  size=992  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Hw::cPrimG::vf04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_018da644;
  if (((*(int *)(param_1 + 0xa0) == 2) || (*(int *)(param_1 + 0xa0) == 3)) && (_DAT_018da698 != 1.0)
     ) {
    _DAT_018da698 = 1.0;
  }
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  if ((*(byte *)(param_1 + 0xa8) & 0x40) == 0) {
    uVar6 = 6;
    uVar5 = 5;
  }
  else {
    uVar6 = 1;
    uVar5 = 2;
  }
  FUN_00f9d970(uVar5,uVar6,1);
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    FUN_00fa05b0(((*(byte *)(param_1 + 0xa6) & 0x1fe | (uint)*(byte *)(param_1 + 0xa7) << 9) << 8 |
                 *(byte *)(param_1 + 0xa5) & 0x1fe) << 7 | (uint)(*(byte *)(param_1 + 0xa4) >> 1));
    FUN_00f9eec0(&DAT_018da61c,param_1 + 0x10);
    if (DAT_018da644 != 0) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,0);
      }
      DAT_018da644 = 0;
    }
    if (DAT_01f20590 != &PTR_vftable_018da5e8) {
      DAT_01f20590 = &PTR_vftable_018da5e8;
      DAT_01f2058c = 1;
    }
    if (DAT_01f2059c != &PTR_vftable_018da4e4) {
      DAT_01f2059c = &PTR_vftable_018da4e4;
      DAT_01f20598 = 1;
    }
    iVar3 = param_1 + 0x50;
    if ((DAT_01f205a0 != iVar3) && (iVar2 = FUN_00f98600(0,iVar3), iVar2 != 0)) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar3;
    }
    iVar3 = param_1 + 0x78;
    if ((DAT_01f205a4 != iVar3) && (iVar2 = FUN_00f98600(1,iVar3), iVar2 != 0)) {
      DAT_01f20598 = 1;
      DAT_01f205a4 = iVar3;
    }
    FUN_00f9dfb0(*(undefined4 *)(param_1 + 0xa0));
  }
  iVar3 = DAT_018da648;
  iVar2 = iVar3;
  if ((*(uint *)(param_1 + 0xa8) & 2) == 0) {
    iVar2 = 0;
    if (((*(uint *)(param_1 + 0xa8) & 0x20) != 0) && (iVar2 = iVar3, DAT_018da648 != 1)) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,1);
      }
      DAT_018da648 = 1;
    }
  }
  else if (DAT_018da648 != 0) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,0);
    }
    DAT_018da648 = 0;
  }
  iVar3 = DAT_018da63c;
  iVar4 = 3;
  if (((*(byte *)(param_1 + 0xa8) & 4) != 0) && (iVar4 = iVar3, DAT_018da63c != 1)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,1);
    }
    DAT_018da63c = 1;
  }
  iVar3 = DAT_018da63c;
  if (((*(byte *)(param_1 + 0xa8) & 8) != 0) && (iVar4 = iVar3, DAT_018da63c != 2)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,2);
    }
    DAT_018da63c = 2;
  }
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0xa4));
  FUN_00f9eec0(&DAT_018da61c,param_1 + 0x10);
  iVar3 = DAT_018da644;
  if ((DAT_018da644 != iVar1) && (iVar3 = iVar1, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,iVar1 != 0);
  }
  DAT_018da644 = iVar3;
  if (DAT_01f20590 != &PTR_vftable_018da5e8) {
    DAT_01f20590 = &PTR_vftable_018da5e8;
    DAT_01f2058c = 1;
  }
  if (DAT_01f2059c != &PTR_vftable_018da4e4) {
    DAT_01f2059c = &PTR_vftable_018da4e4;
    DAT_01f20598 = 1;
  }
  iVar1 = param_1 + 0x50;
  if ((DAT_01f205a0 != iVar1) && (iVar3 = FUN_00f98600(0,iVar1), iVar3 != 0)) {
    DAT_01f20598 = 1;
    DAT_01f205a0 = iVar1;
  }
  iVar1 = param_1 + 0x78;
  if ((DAT_01f205a4 != iVar1) && (iVar3 = FUN_00f98600(1,iVar1), iVar3 != 0)) {
    DAT_01f20598 = 1;
    DAT_01f205a4 = iVar1;
  }
  FUN_00f9dfb0(*(undefined4 *)(param_1 + 0xa0));
  iVar1 = DAT_018da648;
  if ((((*(byte *)(param_1 + 0xa8) & 0x22) != 0) && (DAT_018da648 != iVar2)) &&
     (iVar1 = iVar2, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,iVar2 != 0);
  }
  DAT_018da648 = iVar1;
  iVar1 = DAT_018da63c;
  if ((((*(byte *)(param_1 + 0xa8) & 0xc) != 0) && (DAT_018da63c != iVar4)) &&
     (iVar1 = iVar4, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,iVar4);
  }
  DAT_018da63c = iVar1;
  return;
}

// 00FAA8A0  Hw::cPrimG::cPrimG  size=86  [class]
void __fastcall Hw::cPrimG::cPrimG(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  return;
}

// 00FAAC30  Hw::cPrimG::vf00  size=47  [class]
undefined4 * __thiscall Hw::cPrimG::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa45a0();
  FUN_00fa45a0();
  *param_1 = cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAAD40  FUN_00faad40  size=117  [callgraph]
int __thiscall FUN_00faad40(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xb0,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimFT::cPrimFT();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x50) == 0) {
          iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_2);
          if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
            iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x78,8,param_2);
            if (iVar2 != 0) {
              return iVar1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

// 00FAADC0  FUN_00faadc0  size=117  [callgraph]
int __thiscall FUN_00faadc0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0x110,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimFTyuv::cPrimFTyuv();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x50) == 0) {
          iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_2);
          if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
            iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x78,8,param_2);
            if (iVar2 != 0) {
              return iVar1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

// 00FAAE40  FUN_00faae40  size=117  [callgraph]
int __thiscall FUN_00faae40(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0x130,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimFTyuva::cPrimFTyuva();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x50) == 0) {
          iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_2);
          if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
            iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x78,8,param_2);
            if (iVar2 != 0) {
              return iVar1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

// 00FAAEC0  FUN_00faaec0  size=109  [callgraph]
int __thiscall FUN_00faaec0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xb0,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimIF::cPrimIF();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x50) == 0)) {
        iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_2);
        if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
          iVar2 = cIndexBufferHeap::allocateBuffer(iVar1 + 0x78,param_3);
          if (iVar2 != 0) {
            return iVar1;
          }
        }
      }
    }
  }
  return 0;
}

// 00FAAF30  FUN_00faaf30  size=150  [callgraph]
int __thiscall FUN_00faaf30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xe0,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimIFT::cPrimIFT();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x50) == 0) {
          iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_2);
          if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
            iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x78,8,param_2);
            if ((iVar2 != 0) && (*(int *)(iVar1 + 0xa0) == 0)) {
              iVar2 = cIndexBufferHeap::allocateBuffer(iVar1 + 0xa0,param_3);
              if (iVar2 != 0) {
                return iVar1;
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

// 00FAAFD0  FUN_00faafd0  size=117  [callgraph]
int __thiscall FUN_00faafd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = cPrimHeap::allocBuffer(0xc0,0x20);
    if (iVar1 != 0) {
      iVar1 = Hw::cPrimG::cPrimG();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x50) == 0) {
          iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x50,0xc,param_2);
          if ((iVar2 != 0) && (*(int *)(iVar1 + 0x78) == 0)) {
            iVar2 = cVertexBufferHeap::allocateBuffer(iVar1 + 0x78,4,param_2);
            if (iVar2 != 0) {
              return iVar1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

