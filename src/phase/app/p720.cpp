// src/phase/app/p720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4AAC0..00D6E1C0, 8 functions

#include "types.h"

// 00D4AAC0  cP720::vf1C  size=3  [class]
void cP720::vf1C(void)

{
  return;
}

// 00D4AAD0  cP720::vf18  size=1  [class]
void cP720::vf18(void)

{
  return;
}

// 00D55270  cP720::vf10  size=89  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cP720::vf10(void)

{
  DAT_01bea094 = DAT_01bea094 & 0xffffffbf;
  if (DAT_018b91a0 != 0x730) {
    FUN_00e51db0(&DAT_01dc5248,1);
    FUN_00de3540(0,0);
    if (DAT_01dc5250 != 0) {
      FUN_00e9d6a0(DAT_01dc5250);
      DAT_01dc5250 = 0;
    }
    _DAT_01dc5254 = 0;
  }
  return;
}

// 00D63EC0  cP720::vf14  size=461  [__FILE__]
void __fastcall cP720::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00e03ea0("P720_START");
  if (DAT_018b9178 != iVar1) {
    iVar1 = FUN_00e03ea0("P720_MOVIE");
    if (DAT_018b9178 != iVar1) {
      iVar1 = FUN_00e03ea0("P720_EXCELSUS");
      if (DAT_018b9178 != iVar1) goto LAB_00d63f40;
    }
  }
  iVar1 = *(int *)(param_1 + 0x11c);
  *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 1;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x58))(iVar1);
  }
  uVar3 = FUN_00d57960(FUN_00d5c080,0,0,"d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p720.cpp"
                       ,0x2d);
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
LAB_00d63f40:
  iVar1 = FUN_00e03ea0(&DAT_01642c78);
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x11c);
    *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 2;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d57960(FUN_00d5c190,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p720.cpp",0x35);
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
  }
  iVar1 = FUN_00e03ea0("P720_EXCELSUS_2");
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x11c);
    *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 4;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d57960(FUN_00d5c330,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p720.cpp",0x3d);
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
  }
  iVar1 = FUN_00e03ea0(&DAT_01642c5c);
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x11c);
    *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 4;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d57960(FUN_00d5c440,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p720.cpp",0x45);
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
  }
  iVar1 = FUN_00e03ea0(&DAT_01642c50);
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 0x11c);
    *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 4;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar2 + 0x58))(iVar1);
    }
    uVar3 = FUN_00d57960(&LAB_00d5c5e0,0,0,
                         "d:\\project\\prj_020\\p1\\common\\src\\phase\\app/p720.cpp",0x4d);
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
  }
  return;
}

// 00D64090  cP720::vf08  size=351  [class]
/* WARNING: Removing unreachable block (ram,0x00d641d4) */
/* WARNING: Removing unreachable block (ram,0x00d641de) */

void __fastcall cP720::vf08(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  int unaff_EDI;
  char *pcVar5;
  char *pcVar6;
  int local_14 [5];
  
  *(undefined4 *)(param_1 + 0x134) = 0x42700000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[4] = 0;
  uVar1 = FUN_00a1d5c0();
  FUN_00a6eda0(0x1e,uVar1);
  piVar2 = (int *)FUN_00c14bb0();
  pcVar5 = "r721_before";
  (**(code **)(*piVar2 + 0x14))(local_14,"r721_before",0x721);
  iVar4 = unaff_ESI;
  if (unaff_ESI != unaff_ESI + local_14[0] * 4) {
    do {
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != unaff_ESI + local_14[0] * 4);
  }
  local_14[0] = 0;
  piVar2 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar2 + 0x14))(&stack0xffffffe0,"r721_after",0x721);
  pcVar6 = pcVar5;
  if (pcVar5 != pcVar5 + unaff_EDI * 4) {
    do {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
      pcVar5 = pcVar5 + 4;
    } while (pcVar5 != pcVar6 + unaff_EDI * 4);
  }
  DAT_01bea094 = DAT_01bea094 | 0x40;
  if ((pcVar6 != (char *)0x0) && (unaff_ESI != 0)) {
    FUN_00dd48d0(pcVar6,0);
  }
  *(undefined1 *)(param_1 + 300) = 0;
  return;
}

// 00D641F0  FUN_00d641f0  size=262  [callgraph]
void FUN_00d641f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  int iStack_20;
  int local_14 [5];
  
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[4] = 0;
  iStack_20 = 0xd64210;
  iStack_20 = FUN_00a1d5c0();
  FUN_00a6eda0(0x1e);
  iStack_20 = 0xd64221;
  piVar1 = (int *)FUN_00c14bb0();
  iStack_20 = 0x721;
  piVar5 = local_14;
  (**(code **)(*piVar1 + 0x14))(piVar5,"r721_before");
  iVar4 = unaff_EDI;
  if (unaff_EDI != unaff_EDI + local_14[0] * 4) {
    do {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        piVar1 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar1 + 0x20))();
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != unaff_EDI + local_14[0] * 4);
  }
  local_14[0] = 0;
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x14))(&iStack_20,"r721_after",0x721);
  piVar1 = piVar5;
  if (piVar5 != piVar5 + iStack_20) {
    do {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x1c))();
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1 + iStack_20);
  }
  if ((piVar1 != (int *)0x0) && (iStack_20 = 0, unaff_EDI != 0)) {
    FUN_00dd48d0(piVar1,0);
  }
  return;
}

// 00D68C80  cP720::vf0C  size=189  [class]
void __fastcall cP720::vf0C(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar4 = 0;
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01b351a0;
      (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
      iVar1 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  iVar1 = FUN_00a81330();
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01b351a0;
      (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
      iVar1 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  *(uint *)(param_1 + 0x124) = uVar3;
  if (uVar4 == 0) {
    return;
  }
  iVar1 = FUN_0059f8d0();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x128) == 0)) {
    FUN_00d641f0();
    *(undefined4 *)(param_1 + 0x128) = 1;
  }
  FUN_00d5bf90();
  return;
}

// 00D6E1C0  cP720::vf00  size=54  [class]
undefined4 * __thiscall cP720::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

