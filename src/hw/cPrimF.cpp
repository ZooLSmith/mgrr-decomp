// src/hw/cPrimF.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA2760..00FAAB90, 4 functions

#include "types.h"

// 00FA2760  Hw::cPrimF::vf04  size=1022  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Hw::cPrimF::vf04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = DAT_018da648;
  iVar4 = DAT_018da644;
  iVar2 = DAT_018da63c;
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  if ((*(byte *)(param_1 + 0x80) & 0x40) == 0) {
    uVar7 = 6;
    uVar6 = 5;
  }
  else {
    uVar7 = 1;
    uVar6 = 2;
  }
  FUN_00f9d970(uVar6,uVar7,1);
  if (((*(int *)(param_1 + 0x78) == 2) || (*(int *)(param_1 + 0x78) == 3)) && (_DAT_018da698 != 1.0)
     ) {
    _DAT_018da698 = 1.0;
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    FUN_00fa05b0(((*(byte *)(param_1 + 0x7e) & 0x1fe | (uint)*(byte *)(param_1 + 0x7f) << 9) << 8 |
                 *(byte *)(param_1 + 0x7d) & 0x1fe) << 7 | (uint)(*(byte *)(param_1 + 0x7c) >> 1));
    FUN_00f9eec0(&DAT_018da524,param_1 + 0x10);
    if (DAT_018da65c != 1) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
      }
      DAT_018da65c = 1;
    }
    FUN_00f9d970(5,6,1);
    if (DAT_018da644 != 0) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,0);
      }
      DAT_018da644 = 0;
    }
    if (DAT_01f20590 != &PTR_vftable_018da4f0) {
      DAT_01f20590 = &PTR_vftable_018da4f0;
      DAT_01f2058c = 1;
    }
    if (DAT_01f2059c != &PTR_vftable_018da4c0) {
      DAT_01f2059c = &PTR_vftable_018da4c0;
      DAT_01f20598 = 1;
    }
    iVar1 = param_1 + 0x50;
    if ((DAT_01f205a0 != iVar1) && (iVar5 = FUN_00f98600(0,iVar1), iVar5 != 0)) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar1;
    }
    FUN_00f9dfb0(*(undefined4 *)(param_1 + 0x78));
  }
  if ((*(uint *)(param_1 + 0x80) & 2) == 0) {
    if (((*(uint *)(param_1 + 0x80) & 0x20) != 0) && (DAT_018da648 != 1)) {
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
  if ((*(uint *)(param_1 + 0x80) & 4) == 0) {
    if (((*(uint *)(param_1 + 0x80) & 8) != 0) && (DAT_018da63c != 2)) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,2);
      }
      DAT_018da63c = 2;
    }
  }
  else if (DAT_018da63c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,1);
    }
    DAT_018da63c = 1;
  }
  if (((*(byte *)(param_1 + 0x80) & 0x41) != 0) && (DAT_018da644 != 0)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,0);
    }
    DAT_018da644 = 0;
  }
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0x7c));
  FUN_00f9eec0(&DAT_018da524,param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x80) & 0x10) == 0) {
    if (DAT_01f20590 == &PTR_vftable_018da4f0) goto LAB_00fa2a62;
    DAT_01f20590 = &PTR_vftable_018da4f0;
  }
  else {
    if (DAT_01f20590 == &PTR_vftable_018da540) goto LAB_00fa2a62;
    DAT_01f20590 = &PTR_vftable_018da540;
  }
  DAT_01f2058c = 1;
LAB_00fa2a62:
  if (DAT_01f2059c != &PTR_vftable_018da4c0) {
    DAT_01f2059c = &PTR_vftable_018da4c0;
    DAT_01f20598 = 1;
  }
  iVar1 = param_1 + 0x50;
  if ((DAT_01f205a0 != iVar1) && (iVar5 = FUN_00f98600(0,iVar1), iVar5 != 0)) {
    DAT_01f20598 = 1;
    DAT_01f205a0 = iVar1;
  }
  FUN_00f9dfb0(*(undefined4 *)(param_1 + 0x78));
  iVar1 = DAT_018da644;
  if ((((*(byte *)(param_1 + 0x80) & 0x41) != 0) && (DAT_018da644 != iVar4)) &&
     (iVar1 = iVar4, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,iVar4 != 0);
  }
  DAT_018da644 = iVar1;
  iVar4 = DAT_018da648;
  if ((((*(byte *)(param_1 + 0x80) & 0x22) != 0) && (DAT_018da648 != iVar3)) &&
     (iVar4 = iVar3, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,iVar3 != 0);
  }
  DAT_018da648 = iVar4;
  iVar4 = DAT_018da63c;
  if ((((*(byte *)(param_1 + 0x80) & 0xc) != 0) && (DAT_018da63c != iVar2)) &&
     (iVar4 = iVar2, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,iVar2);
  }
  DAT_018da63c = iVar4;
  return;
}

// 00FA6750  Hw::cPrimF::cPrimF_2  size=135  [class]
undefined4 * __thiscall Hw::cPrimF::cPrimF_2(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*param_1 != 0) &&
     (puVar1 = (undefined4 *)::cPrimHeap::allocBuffer(0x90,0x20), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = vftable;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1d] = 0;
    iVar2 = cVertexBufferHeap::allocateBuffer(puVar1 + 0x14,0xc,param_3);
    if ((iVar2 != 0) && (iVar2 = FUN_00f99d50(param_2,0xc,param_3), iVar2 != 0)) {
      puVar1[0x20] = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// 00FA67E0  Hw::cPrimF::cPrimF  size=323  [class]
undefined4 * __thiscall Hw::cPrimF::cPrimF(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  if ((*param_1 != 0) &&
     (puVar2 = (undefined4 *)::cPrimHeap::allocBuffer(0x90,0x20), puVar2 != (undefined4 *)0x0)) {
    *puVar2 = vftable;
    piVar1 = puVar2 + 0x14;
    *piVar1 = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1d] = 0;
    iVar3 = cVertexBufferHeap::allocateBuffer(piVar1,0xc,param_3);
    if ((iVar3 != 0) && (iVar3 = FUN_00f99ca0(), iVar3 != 0)) {
      uVar6 = 0;
      if (3 < (int)param_3) {
        iVar7 = (param_3 - 4 >> 2) + 1;
        uVar6 = iVar7 * 4;
        puVar4 = (undefined4 *)(param_2 + 8);
        puVar5 = (undefined4 *)(iVar3 + 8);
        do {
          puVar5[-2] = puVar4[-2];
          iVar7 = iVar7 + -1;
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
        } while (iVar7 != 0);
      }
      if (uVar6 < param_3) {
        iVar7 = param_3 - uVar6;
        puVar4 = (undefined4 *)(param_2 + 8 + uVar6 * 0x10);
        puVar5 = (undefined4 *)(iVar3 + 8 + uVar6 * 0xc);
        do {
          puVar5[-2] = puVar4[-2];
          iVar7 = iVar7 + -1;
          puVar5[-1] = puVar4[-1];
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 3;
        } while (iVar7 != 0);
      }
      piVar1 = (int *)*piVar1;
      if (piVar1 != (int *)0x0) {
        if (puVar2[0x17] == 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        puVar2[0x18] = 0;
      }
      puVar2[0x20] = 0;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

// 00FAAB90  Hw::cPrimF::vf00  size=39  [class]
undefined4 * __thiscall Hw::cPrimF::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa45a0();
  *param_1 = cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

