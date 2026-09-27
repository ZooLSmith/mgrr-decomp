// src/hw/cIndexBufferHeap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9C7F0..00FAAA50, 18 functions

#include "mgrr.h"

// 00F9C7F0  Hw::cIndexBufferHeap::cIndexBufferHeap  size=29  [class]
void __fastcall Hw::cIndexBufferHeap::cIndexBufferHeap(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00F9C810  FUN_00f9c810  size=105  [callgraph]
undefined4 __thiscall FUN_00f9c810(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x6c))
                      (DAT_01f206d4,param_2 * param_3,0,(param_2 != 2) + 'e',1,param_1 + 4,0);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0xc) = param_2;
      *(int *)(param_1 + 0x10) = param_3;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return 1;
    }
  }
  return 0;
}

// 00F9C880  FUN_00f9c880  size=31  [callgraph]
void __fastcall FUN_00f9c880(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  return;
}

// 00F9C8A0  FUN_00f9c8a0  size=566  [callgraph]
void __fastcall FUN_00f9c8a0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  uint *puVar7;
  uint local_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar4 = FUN_00f99ca0();
  if ((iVar4 != 0) && (local_28 = 0, param_1[7] != 0)) {
    pfVar6 = (float *)(iVar4 + 8);
    do {
      puVar7 = (uint *)(param_1[8] * local_28 + param_1[9]);
      if (*puVar7 == 0) {
        FUN_00dd5650(&DAT_016eb424);
      }
      uVar1 = *puVar7;
      uVar5 = uVar1 >> 0xb & 0x7ff;
      if (((ushort)*puVar7 & 0x7ff) == 0) {
        local_20 = 0.0;
      }
      else {
        local_20 = ((float)((short)((ushort)*puVar7 << 5) + 0x8000) * 2.0) / 65504.0 - 1.0;
      }
      if ((short)uVar5 == 0) {
        local_1c = 0.0;
      }
      else {
        local_1c = ((float)((short)(uVar5 << 5) + 0x8000) * 2.0) / 65504.0 - 1.0;
      }
      if ((ushort)(uVar1 >> 0x16) == 0) {
        local_18 = 0.0;
      }
      else {
        local_18 = ((float)((short)((uVar1 >> 0x16) << 6) + 0x8000) * 2.0) / 65472.0 - 1.0;
      }
      local_14 = 0x3f800000;
      if (((local_20 == 0.0) && (local_1c == 0.0)) && (local_18 == 0.0)) {
        local_18 = 1.0;
      }
      fVar3 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_20 = 0.0;
        local_1c = 1.0;
        local_18 = 0.0;
      }
      pfVar6[-2] = local_20;
      local_28 = local_28 + 1;
      pfVar6[-1] = local_1c;
      *pfVar6 = local_18;
      pfVar6 = pfVar6 + 3;
    } while (local_28 < (uint)param_1[7]);
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    if (param_1[3] == 0) {
      (**(code **)(*piVar2 + 0x30))(piVar2);
    }
    param_1[4] = 0;
  }
  return;
}

// 00F9CAE0  FUN_00f9cae0  size=33  [callgraph]
undefined4 __thiscall FUN_00f9cae0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  uVar1 = cVertexBufferHeap::allocateBuffer(param_1,param_2,param_3);
  return uVar1;
}

// 00F9CB10  FUN_00f9cb10  size=25  [callgraph]
void __fastcall FUN_00f9cb10(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00F9CB30  FUN_00f9cb30  size=56  [callgraph]
undefined4 __thiscall FUN_00f9cb30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f99ef0(param_2,param_3,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00F9CB70  FUN_00f9cb70  size=27  [callgraph]
void __fastcall FUN_00f9cb70(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00F9CBC0  FUN_00f9cbc0  size=66  [callgraph]
void __fastcall FUN_00f9cbc0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}

// 00F9CC10  FUN_00f9cc10  size=257  [callgraph]
void FUN_00f9cc10(void)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_4;
  
  uVar5 = FUN_00fa85c0();
  while (uVar2 = DAT_01f2065c, uVar5 != 0) {
    if (DAT_01f2065c != 0) {
      *(uint *)(DAT_01f2065c + 0x10) = uVar5;
      *(uint *)(uVar5 + 0x14) = DAT_01f2065c;
    }
    DAT_01f2065c = uVar5;
    uVar5 = FUN_00fa85c0();
  }
  while (uVar5 = uVar2, uVar5 != 0) {
    puVar1 = (uint *)(uVar5 + 0x14);
    uVar2 = *puVar1;
    if (*(undefined4 **)(uVar5 + 4) == (undefined4 *)0x0) {
      uVar4 = uVar2;
      if (*(int *)(uVar5 + 0x10) != 0) {
        *(uint *)(*(int *)(uVar5 + 0x10) + 0x14) = uVar2;
        uVar4 = DAT_01f2065c;
      }
      DAT_01f2065c = uVar4;
      if (*puVar1 != 0) {
        *(undefined4 *)(*puVar1 + 0x10) = *(undefined4 *)(uVar5 + 0x10);
      }
      *(undefined4 *)(uVar5 + 0x10) = 0;
      *puVar1 = 0;
      if (((DAT_018da4b0 != 0) && (DAT_018da4b0 <= uVar5)) &&
         (uVar5 < DAT_018da4b0 + DAT_018da4b4 * 0x1c)) {
        FUN_00fa87e0(uVar5);
      }
    }
    else {
      *(undefined2 *)(uVar5 + 9) = 0;
      if (*(char *)(uVar5 + 8) == '\x03') {
        piVar3 = (int *)**(undefined4 **)(uVar5 + 4);
        uStack_4 = 0;
        iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,&uStack_4,4,0);
        if (iVar6 == 0) {
          *(undefined4 *)(uVar5 + 0xc) = uStack_4;
          *(undefined1 *)(uVar5 + 10) = 1;
          *(undefined1 *)(uVar5 + 9) = 1;
        }
        else {
          *(undefined4 *)(uVar5 + 0xc) = 0;
          *(undefined1 *)(uVar5 + 9) = 1;
        }
      }
      else {
        *(undefined4 *)(uVar5 + 0xc) = 0;
      }
      *(undefined1 *)(uVar5 + 8) = 0;
    }
  }
  return;
}

// 00FA5C20  Hw::cIndexBufferHeap::cIndexBufferHeap  size=68  [class]
void __fastcall Hw::cIndexBufferHeap::cIndexBufferHeap(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = vftable;
  if (param_1[2] != 0) {
    FUN_00fa16d0(param_1[1]);
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}

// 00FA5C70  thunk_FUN_00fa45a0  size=5  [between]
void __fastcall thunk_FUN_00fa45a0(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  return;
}

// 00FA5C80  FUN_00fa5c80  size=78  [between]
void __fastcall FUN_00fa5c80(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  return;
}

// 00FA5CD0  FUN_00fa5cd0  size=41  [between]
void __thiscall
FUN_00fa5cd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  FUN_00fa4780(param_1,param_2,param_3,param_4,param_5,param_6,param_1 + 4);
  return;
}

// 00FA5D00  FUN_00fa5d00  size=223  [between]
undefined4 FUN_00fa5d00(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_00fa95e0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = -(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 4);
  puVar2 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,param_2);
  if (puVar2 == (uint *)0x0) {
    DAT_01f20664 = (uint *)0x0;
  }
  else {
    *puVar2 = param_1;
    DAT_01f20664 = puVar2 + 1;
    uVar4 = param_1;
    puVar2 = DAT_01f20664;
    if (-1 < (int)(param_1 - 1)) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    if (DAT_01f20664 != (uint *)0x0) {
      uVar4 = 0;
      if (param_1 != 0) {
        iVar1 = 0;
        do {
          iVar3 = GraphicDevice::CreateOcclusionQuery();
          if (iVar3 == 0) {
            return 0;
          }
          if (((-1 < (int)uVar4) && ((int)uVar4 < DAT_018da4b4)) &&
             (iVar3 = iVar1 + DAT_018da4b0, iVar3 != 0)) {
            *(undefined4 *)(iVar3 + 4) = 0;
            *(undefined2 *)(iVar3 + 8) = 0;
            *(undefined1 *)(iVar3 + 10) = 0;
            *(undefined4 *)(iVar3 + 0xc) = 0;
            *(undefined4 *)(iVar3 + 0x10) = 0;
            *(undefined4 *)(iVar3 + 0x14) = 0;
          }
          uVar4 = uVar4 + 1;
          iVar1 = iVar1 + 0x1c;
        } while (uVar4 < param_1);
      }
      DAT_01f2065c = 0;
      DAT_01f20660 = param_1;
      return 1;
    }
  }
  return 0;
}

// 00FA5DF0  FUN_00fa5df0  size=219  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa5df0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  FUN_00f9cc10();
  if (DAT_01f20664 != 0) {
    uVar5 = 0;
    iVar3 = DAT_01f20664;
    if (DAT_01f20660 != 0) {
      do {
        iVar1 = *(int *)(iVar3 + uVar5 * 4);
        piVar4 = (int *)(iVar3 + uVar5 * 4);
        if (iVar1 != 0) {
          FUN_00fa16d0(iVar1);
          piVar2 = (int *)*piVar4;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar4 = 0;
          }
          *piVar4 = 0;
          iVar3 = DAT_01f20664;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < DAT_01f20660);
    }
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + -4);
      piVar4 = (int *)(iVar3 + iVar1 * 4);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        piVar2 = piVar4 + -1;
        piVar4 = piVar4 + -1;
        if (*piVar2 != 0) {
          FUN_00fa16d0(*piVar2);
          piVar2 = (int *)*piVar4;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar4 = 0;
          }
          *piVar4 = 0;
        }
      }
      FUN_00dd4940(iVar3 + -4);
    }
  }
  if ((DAT_018da4b0 != 0) && (DAT_018da4b8 != 0)) {
    FUN_00dd3d90(DAT_018da4b0,0);
  }
  _DAT_018da4a0 = 0;
  _DAT_018da4a4 = 0;
  _DAT_018da4a8 = 0;
  DAT_018da4b8 = 0;
  DAT_018da4b0 = 0;
  DAT_018da4b4 = 0;
  return;
}

// 00FA5ED0  Hw::cIndexBufferHeap::cIndexBufferHeap  size=120  [class]
void __fastcall Hw::cIndexBufferHeap::cIndexBufferHeap(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x20);
  iVar2 = 1;
  do {
    *puVar1 = cPrimHeap::vftable;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)(param_1 + 0x48);
  iVar2 = 1;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)(param_1 + 0x80);
  iVar2 = 1;
  do {
    *puVar1 = vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

// 00FAAA50  Hw::cIndexBufferHeap::vf00  size=88  [class]
undefined4 * __thiscall Hw::cIndexBufferHeap::vf00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  *param_1 = vftable;
  if (param_1[2] != 0) {
    FUN_00fa16d0(param_1[1]);
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

