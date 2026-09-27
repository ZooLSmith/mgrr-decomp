// src/object/bh0187/Bh0187.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040E950..0040FD40, 15 functions

#include "mgrr.h"
#include "Bh0187.h"

// 0040E950  FUN_0040e950  size=44  [callgraph]
void __fastcall FUN_0040e950(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xfffffffe;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0x1010000;
  return;
}

// 0040E9A0  FUN_0040e9a0  size=30  [callgraph]
undefined4 __thiscall FUN_0040e9a0(undefined4 param_1,byte param_2)

{
  cXml::cXml_6();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0040E9C0  Bh0187::Bh0187  size=70  [class]
undefined4 * __fastcall Bh0187::Bh0187(undefined4 *param_1)

{
  Behavior::Behavior_95();
  param_1[0x220] = 0;
  param_1[0x224] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x225] = 0;
  param_1[0x21e] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  *param_1 = vftable;
  return param_1;
}

// 0040EA10  Bh0187::vf04  size=6  [class]
undefined * Bh0187::vf04(void)

{
  return &DAT_01b34b70;
}

// 0040EA80  FUN_0040ea80  size=42  [between]
uint FUN_0040ea80(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c28;
  (**(code **)(*param_1 + 4))(&DAT_01be9c28);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0040EB40  Bh0187::vf44  size=90  [class]
void __fastcall Bh0187::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a8c820();
  FUN_00a9d8a0();
  iVar1 = *(int *)(param_1 + 0x874);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x874) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  Behavior::vf44();
  return;
}

// 0040EBA0  Bh0187::vf48  size=79  [class]
void __fastcall Bh0187::vf48(int param_1)

{
  BehaviorDebrisActor::vf48();
  if (((*(int *)(param_1 + 0x874) != 0) && (*(int *)(param_1 + 0x870) != 0)) &&
     ((*(char *)(param_1 + 0x470) == '\0' ||
      (((*(byte *)(param_1 + 0x472) & 0x80) == 0 || (*(char *)(param_1 + 0x471) == '\0')))))) {
    FUN_0092bcd0();
    if (*(char *)(*(int *)(param_1 + 0x874) + 0x20) != '\0') {
      FUN_0092b680();
      return;
    }
  }
  return;
}

// 0040EBF0  Bh0187::vf4C  size=1172  [class]
void __fastcall Bh0187::vf4C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int unaff_ESI;
  undefined *puVar7;
  int iStack_58;
  int iStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [44];
  
  Behavior::vf4C();
  if (*(int *)(param_1 + 0x870) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x7b0) == 0) {
    return;
  }
  piVar1 = (int *)FUN_00c18350();
  iVar3 = *piVar1;
  uVar2 = FUN_00e03ea0(&DAT_0163c784);
  fStack_4c = (float)(**(code **)(iVar3 + 0x40))(uVar2);
  piVar1 = (int *)FUN_00c18350();
  iVar3 = *piVar1;
  uVar2 = FUN_00e03ea0(&DAT_0163c77c);
  (**(code **)(iVar3 + 0x40))(uVar2);
  piVar1 = (int *)FUN_00c18350();
  iVar3 = *piVar1;
  uVar2 = FUN_00e03ea0(&DAT_0163c774);
  fStack_50 = (float)(**(code **)(iVar3 + 0x40))(uVar2);
  piVar1 = (int *)FUN_00c18350();
  iVar3 = *piVar1;
  uVar2 = FUN_00e03ea0(&DAT_0163c76c);
  iVar3 = (**(code **)(iVar3 + 0x40))(uVar2);
  if ((iStack_58 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar7 = &DAT_01be9c28;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c28);
    FUN_00dd6d80(puVar7);
  }
  if ((unaff_ESI != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar7 = &DAT_01be9c28;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c28);
    FUN_00dd6d80(puVar7);
  }
  if ((iStack_54 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar7 = &DAT_01be9c28;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c28);
    FUN_00dd6d80(puVar7);
  }
  if ((iVar3 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar7 = &DAT_01be9c28;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c28);
    FUN_00dd6d80(puVar7);
  }
  if (iStack_58 == 0) {
    if ((unaff_ESI == 0) && (*(int *)(param_1 + 0x88c) == 0)) {
      FUN_004066f0();
      pfVar5 = (float *)FUN_00a8bac0(auStack_30,0x41700000);
      fStack_40 = *pfVar5 + *(float *)(param_1 + 0x40);
      fStack_3c = pfVar5[1] + *(float *)(param_1 + 0x44);
      fStack_38 = pfVar5[2] + *(float *)(param_1 + 0x48);
      fStack_34 = pfVar5[3] + *(float *)(param_1 + 0x4c);
      pfVar5 = (float *)FUN_00a925a0(auStack_30);
      fStack_50 = *pfVar5 * 100.0;
      fStack_4c = pfVar5[1] * 100.0;
      fStack_48 = pfVar5[2] * 100.0;
      fStack_44 = pfVar5[3] * 100.0;
      pfVar5 = &fStack_40;
      pfVar6 = &fStack_50;
      goto LAB_0040eefc;
    }
  }
  else if ((((unaff_ESI != 0) && (iVar4 = FUN_00a8fa20(0), iVar4 != 0)) &&
           (iVar4 = FUN_00a8fa20(0), iVar4 != 0)) && (*(int *)(param_1 + 0x88c) == 0)) {
    FUN_004066f0();
    pfVar5 = (float *)FUN_00a8bac0(&fStack_40,0x41700000);
    fStack_50 = *(float *)(param_1 + 0x40) + *pfVar5;
    fStack_4c = pfVar5[1] + *(float *)(param_1 + 0x44);
    fStack_48 = pfVar5[2] + *(float *)(param_1 + 0x48);
    fStack_44 = pfVar5[3] + *(float *)(param_1 + 0x4c);
    pfVar5 = (float *)FUN_00a925a0(auStack_30);
    fStack_40 = *pfVar5 * 100.0;
    fStack_3c = pfVar5[1] * 100.0;
    fStack_38 = pfVar5[2] * 100.0;
    fStack_34 = pfVar5[3] * 100.0;
    pfVar5 = &fStack_50;
    pfVar6 = &fStack_40;
LAB_0040eefc:
    (**(code **)(**(int **)(param_1 + 0x7b0) + 200))(pfVar6,pfVar5,0);
    *(undefined4 *)(param_1 + 0x894) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x88c) = 1;
    FUN_00406760();
  }
  if (iStack_54 == 0) {
    if ((iVar3 != 0) || (*(int *)(param_1 + 0x888) != 0)) goto LAB_0040f055;
    FUN_004066f0();
    pfVar5 = (float *)FUN_00a8bac0(auStack_30,0x41700000);
    fStack_40 = *(float *)(param_1 + 0x40) + *pfVar5;
  }
  else {
    if (((iVar3 == 0) || (iVar4 = FUN_00a8fa20(0), iVar4 == 0)) ||
       ((iVar4 = FUN_00a8fa20(0), iVar4 == 0 || (*(int *)(param_1 + 0x888) != 0))))
    goto LAB_0040f055;
    FUN_004066f0();
    pfVar5 = (float *)FUN_00a8bac0(auStack_30,0x41700000);
    fStack_40 = *pfVar5 + *(float *)(param_1 + 0x40);
  }
  fStack_3c = pfVar5[1] + *(float *)(param_1 + 0x44);
  fStack_38 = pfVar5[2] + *(float *)(param_1 + 0x48);
  fStack_34 = pfVar5[3] + *(float *)(param_1 + 0x4c);
  pfVar5 = (float *)FUN_00a925a0(auStack_30);
  fStack_50 = *pfVar5 * 100.0;
  fStack_4c = pfVar5[1] * 100.0;
  fStack_48 = pfVar5[2] * 100.0;
  fStack_44 = pfVar5[3] * 100.0;
  (**(code **)(**(int **)(param_1 + 0x7b0) + 200))(&fStack_50,&fStack_40,0);
  *(undefined4 *)(param_1 + 0x890) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x888) = 1;
  FUN_00406760();
LAB_0040f055:
  if ((iStack_58 == 0) && (unaff_ESI == 0)) {
    *(undefined4 *)(param_1 + 0x878) = 1;
  }
  if ((iStack_54 == 0) && (iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x878) = 1;
  }
  return;
}

// 0040F090  Bh0187::vf00  size=36  [class]
undefined4 * __thiscall Bh0187::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0040F240  FUN_0040f240  size=204  [between]
void FUN_0040f240(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  
  FUN_004066f0();
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] | 0x40;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 4;
    puVar5[4] = puVar5[4] | param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 0040F310  FUN_0040f310  size=206  [between]
void FUN_0040f310(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  
  FUN_004066f0();
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] | 0x40;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 4;
    puVar5[4] = puVar5[4] & ~param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 0040F3E0  FUN_0040f3e0  size=389  [between]
void FUN_0040f3e0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iStack_74;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [20];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  
  iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
  if (0 < iVar5) {
    do {
      piVar6 = (int *)(**(code **)(*(int *)param_1[0x1ec] + 0x14))(auStack_64,0);
      iVar5 = *piVar6;
      uVar8 = uStack_50 | 0x100000;
      puVar7 = (uint *)(**(code **)(*param_1 + 0x68))();
      uStack_38 = *puVar7;
      uStack_34 = puVar7[1];
      uStack_30 = puVar7[2];
      puVar7 = (uint *)FUN_00a925a0(auStack_68);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      if ((iVar5 != 0) && (uVar4 = *(uint *)(iVar5 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 0x80000;
        puVar7[0x15] = 0x57;
        *puVar7 = *puVar7 | 0x100000;
        puVar7[0x16] = 0x47c34f80;
        *puVar7 = *puVar7 | 0x800000;
        puVar7[0x19] = 100;
        *puVar7 = *puVar7 | 0x200000;
        puVar7[0x17] = uVar8;
        *puVar7 = *puVar7 | 0x400000;
        puVar7[0x18] = uStack_4c;
        *puVar7 = *puVar7 | 0x1000000;
        puVar7[0x1a] = uStack_38;
        *puVar7 = *puVar7 | 0x2000000;
        puVar7[0x1b] = uStack_34;
        *puVar7 = *puVar7 | 0x4000000;
        puVar7[0x1c] = uStack_30;
        *puVar7 = *puVar7 | 0x8000000;
        puVar7[0x1d] = uVar1;
        *puVar7 = *puVar7 | 0x10000000;
        puVar7[0x1e] = uVar2;
        *puVar7 = *puVar7 | 0x20000000;
        puVar7[0x1f] = uVar3;
      }
      iStack_74 = iStack_74 + 1;
      iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
    } while (iStack_74 < iVar5);
  }
  return;
}

// 0040F570  Bh0187::vf40  size=1160  [class]
undefined4 __fastcall Bh0187::vf40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 extraout_ECX;
  int unaff_EBX;
  undefined4 uVar11;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  *(undefined4 *)(param_1 + 0x884) = 0;
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = RigidBodyCollection::RigidBodyCollection_2();
  }
  *(int *)(param_1 + 0x7b0) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar11 = *(undefined4 *)(param_1 + 0x4f0);
  uVar3 = FUN_00de46d0("_col.hkx",0);
  uVar4 = FUN_00de4550("_col.hkx",0);
  FUN_008f6410(uVar11,uVar4,uVar3);
  FUN_008f1040(0x3ff001f);
  FUN_008f10e0(0x400000);
  (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_10,&DAT_0163c7a8);
  if (unaff_EBX == 0) {
    return 0;
  }
  FUN_009277e0();
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(1,1);
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0))
  goto LAB_0040f939;
  puVar5 = *(undefined4 **)(iVar2 + 8);
  *puVar5 = 0x18a;
  puVar5[1] = 0x1e;
  puVar5[3] = 0;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[2] = 0;
  *(undefined1 *)(*(int *)(iVar2 + 8) + 0x11) = 7;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = 10000;
  puVar9 = (uint *)(*(int *)(iVar2 + 8) + 0x8c);
  *puVar9 = *puVar9 | 0x20000000;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 0xf4) = 0xffff;
  puVar5 = (undefined4 *)FUN_009f8b60();
  piVar6 = (int *)CollisionMesh::CollisionMesh(1,*puVar5,iVar2);
  if (piVar6 == (int *)0x0) goto LAB_0040f939;
  piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&stack0xffffffe8,"_hvk_hit");
  iVar2 = *piVar7;
  FUN_004066f0();
  iVar10 = _tls_index;
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_0040f74a;
    }
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 1;
    puVar9[2] = puVar9[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar10 * 4);
LAB_0040f74a:
      piVar7 = (int *)(iVar8 + 4);
      *piVar7 = *piVar7 + -1;
      if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar10 * 4);
      goto LAB_0040f7bb;
    }
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 4;
    puVar9[4] = puVar9[4] | 0x3ff001f;
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar10 * 4);
LAB_0040f7bb:
      piVar7 = (int *)(iVar8 + 4);
      *piVar7 = *piVar7 + -1;
      if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar10 * 4);
      goto LAB_0040f82a;
    }
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 1;
    puVar9[2] = puVar9[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar10 * 4);
LAB_0040f82a:
      piVar7 = (int *)(iVar8 + 4);
      *piVar7 = *piVar7 + -1;
      if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar10 = *(int *)((int)ThreadLocalStoragePointer + iVar10 * 4);
      goto LAB_0040f89b;
    }
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 4;
    puVar9[4] = puVar9[4] & 0xffbfffff;
    if (DAT_01885d68 != 1) {
      iVar10 = *(int *)((int)ThreadLocalStoragePointer + iVar10 * 4);
LAB_0040f89b:
      piVar7 = (int *)(iVar10 + 4);
      *piVar7 = *piVar7 + -1;
      if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00d78e50(iVar2);
  puVar5 = (undefined4 *)FUN_009f8b60();
  (**(code **)(*piVar6 + 0x20))(2,*puVar5,0);
  FUN_00a8c370(piVar6,1);
  piVar6[0xe1] = piVar6[0xe1] | 1;
  piVar6[0xe0] = 1;
  piVar6[0xe3] = 1;
  piVar6[0xfc] = *(int *)(param_1 + 0x4f0);
  FUN_00d7b0f0();
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
  FUN_00d7b890();
  FUN_00d776d0(0);
  *(int **)(param_1 + 0x870) = piVar6;
LAB_0040f939:
  local_10 = 0;
  uStack_c = 0;
  uStack_14 = 1;
  iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&uStack_14);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00de4550("_DRInfo.bxm",0);
  if (iVar2 != 0) {
    iVar10 = FUN_00dd3500(0x50,&DAT_01b7bd48);
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = FUN_0092b420();
    }
    *(int *)(param_1 + 0x874) = iVar10;
    if (iVar10 == 0) {
      return 0;
    }
    uVar11 = *(undefined4 *)(param_1 + 0x7b0);
    uVar4 = FUN_00a7c7f0(iVar2,uVar11);
    uVar3 = extraout_ECX;
    FUN_00a7c940(uVar4);
    FUN_0092b4e0(uVar3,iVar2,uVar11);
    FUN_00928d50(4);
    FUN_00928d50(2);
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x80000;
  }
  return 1;
}

// 0040FA00  Bh0187::vf50  size=828  [class]
void __fastcall Bh0187::vf50(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined2 uStack_3c;
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  Behavior::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    if (*(int *)(param_1 + 0x888) != 0) {
      fVar7 = (float10)FUN_00a93060();
      fVar7 = (float10)*(float *)(param_1 + 0x890) - fVar7;
      *(float *)(param_1 + 0x890) = (float)fVar7;
      if (fVar7 <= (float10)0) {
        *(undefined4 *)(param_1 + 0x888) = 0;
        piVar1 = (int *)FUN_00c18350();
        iVar4 = *piVar1;
        uVar2 = FUN_00e03ea0(&DAT_0163c784);
        iVar3 = (**(code **)(iVar4 + 0x40))(uVar2);
        piVar1 = (int *)FUN_00c18350();
        iVar4 = *piVar1;
        uVar2 = FUN_00e03ea0(&DAT_0163c77c);
        iVar4 = (**(code **)(iVar4 + 0x40))(uVar2);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          uVar2 = FUN_00a7c8a0();
          iVar3 = FUN_0040ea80(uVar2);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          uVar2 = FUN_00a7c8a0();
          iVar4 = FUN_0040ea80(uVar2);
        }
        if ((iVar3 != 0) && (iVar5 = FUN_00a8fa20(0), iVar5 == 0)) {
          FUN_0040f3e0(iVar3);
        }
        if ((iVar4 != 0) && (iVar3 = FUN_00a8fa20(0), iVar3 == 0)) {
          FUN_0040f3e0(iVar4);
        }
      }
    }
    if (*(int *)(param_1 + 0x88c) != 0) {
      fVar7 = (float10)FUN_00a93060();
      fVar7 = (float10)*(float *)(param_1 + 0x894) - fVar7;
      *(float *)(param_1 + 0x894) = (float)fVar7;
      if (fVar7 <= (float10)0) {
        *(undefined4 *)(param_1 + 0x88c) = 0;
        piVar1 = (int *)FUN_00c18350();
        iVar4 = *piVar1;
        uVar2 = FUN_00e03ea0(&DAT_0163c774);
        iVar3 = (**(code **)(iVar4 + 0x40))(uVar2);
        piVar1 = (int *)FUN_00c18350();
        iVar4 = *piVar1;
        uVar2 = FUN_00e03ea0(&DAT_0163c76c);
        iVar4 = (**(code **)(iVar4 + 0x40))(uVar2);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          uVar2 = FUN_00a7c8a0();
          iVar3 = FUN_0040ea80(uVar2);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          uVar2 = FUN_00a7c8a0();
          iVar4 = FUN_0040ea80(uVar2);
        }
        if ((iVar3 != 0) && (iVar5 = FUN_00a8fa20(0), iVar5 == 0)) {
          FUN_0040f3e0(iVar3);
        }
        if ((iVar4 != 0) && (iVar3 = FUN_00a8fa20(0), iVar3 == 0)) {
          FUN_0040f3e0(iVar4);
        }
      }
    }
    if ((*(int *)(param_1 + 0x870) != 0) && (*(int *)(param_1 + 0x87c) == 0)) {
      FUN_004066f0();
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&uStack_64,0);
      if (*piVar1 != 0) {
        bVar6 = *(int *)(param_1 + 0x878) != 0;
        if ((bVar6) && (*(int *)(param_1 + 0x884) == 0)) {
          *(undefined4 *)(param_1 + 0x884) = 1;
          FUN_008f03a0(1,1);
          FUN_008f03a0(0x20,1);
          FUN_0040e950();
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_34 = 0;
          uStack_68 = *(undefined4 *)(param_1 + 0x40);
          uStack_c = 0xffffffff;
          uStack_3c = 0;
          uStack_64 = *(undefined4 *)(param_1 + 0x44);
          uStack_54 = 0xffffffff;
          uStack_4c = 0xffffffff;
          uStack_60 = *(undefined4 *)(param_1 + 0x48);
          uStack_39 = 1;
          uStack_38 = 1;
          FUN_00c15b80(&uStack_68,0x43960000);
          FUN_00c5e350(param_1,&uStack_5c,&uStack_38);
        }
        if (*(int *)(param_1 + 0x870) != 0) {
          if ((*(int *)(*(int *)(param_1 + 0x870) + 0x35c) == 0) && (bVar6)) {
            FUN_00d77bc0();
            FUN_00406760();
            return;
          }
          FUN_00d798d0();
        }
      }
      FUN_00406760();
      return;
    }
  }
  return;
}

// 0040FD40  Bh0187::vf54  size=879  [class]
/* WARNING: Type propagation algorithm not settling */

void __fastcall Bh0187::vf54(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  float10 fVar8;
  undefined *puVar9;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  undefined4 uStack_98;
  int local_94 [2];
  undefined1 auStack_8c [12];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  uint uStack_48;
  uint uStack_44;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  Behavior::vf54();
  if ((*(byte *)(param_1 + 0x4c0) & 1) == 0) {
    if (*(int *)(param_1 + 0x87c) != 0) {
      if (*(undefined4 **)(param_1 + 0x870) != (undefined4 *)0x0) {
        puVar9 = &DAT_01dc5328;
        (**(code **)**(undefined4 **)(param_1 + 0x870))(&DAT_01dc5328);
        FUN_00dd6d80(puVar9);
        FUN_00d78e90();
      }
      FUN_00a9d8a0();
      fVar8 = (float10)FUN_00a92ff0();
      *(float *)(param_1 + 0x880) = (float)((float10)*(float *)(param_1 + 0x880) - fVar8);
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
      iVar6 = *(int *)(param_1 + 0x874);
      if (iVar6 != 0) {
        cXml::cXml_6();
        FUN_00dd4920(iVar6);
        *(undefined4 *)(param_1 + 0x874) = 0;
      }
      *(undefined4 *)(param_1 + 0x870) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x7b0) != 0) {
      FUN_008f7760(param_1,&DAT_0163c7a8);
    }
    switchD_0080dbae::default();
    FUN_004066f0();
    if ((*(int *)(param_1 + 0x7b0) != 0) &&
       (((FUN_008f3d80(param_1,&DAT_0163c7a8), *(int *)(param_1 + 0x88c) != 0 ||
         (*(int *)(param_1 + 0x888) != 0)) && (*(int *)(param_1 + 0x87c) == 0)))) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(local_94,&DAT_0163c7a8);
      FUN_00911e50(&fStack_68);
      uStack_98 = 0;
      local_94[0] = 0;
      local_94[1] = 0x3f800000;
      D3DXMatrixRotationY(auStack_58,uStack_64);
      D3DXVec3TransformNormal(local_94 + 1,auStack_a0,auStack_60);
      FUN_00ddc1d0(&fStack_6c,&fStack_7c,5);
      D3DXVec3TransformNormal(auStack_8c,&stack0xffffff54,&fStack_6c);
      iVar6 = local_94[0];
      if ((ABS(fStack_68 * fStack_78 + fStack_80 * fStack_70 + fStack_6c * fStack_7c) < 0.2) &&
         (local_94[0] != 0)) {
        uStack_30 = *(uint *)(param_1 + 0x40);
        uStack_2c = *(uint *)(param_1 + 0x44);
        uStack_28 = *(uint *)(param_1 + 0x48);
        puVar7 = (uint *)FUN_00a925a0(local_94 + 1);
        uVar5 = *(uint *)(iVar6 + 0xc);
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        if (uVar5 != 0) {
          puVar7 = (uint *)(-(uint)(uVar5 != 0) & uVar5);
          *puVar7 = *puVar7 | 0x80000;
          puVar7[0x15] = 0x18e;
          *puVar7 = *puVar7 | 0x100000;
          puVar7[0x16] = 0x47c34f80;
          *puVar7 = *puVar7 | 0x800000;
          puVar7[0x19] = 100;
          *puVar7 = *puVar7 | 0x200000;
          puVar7[0x17] = uStack_48 | 0x100000;
          *puVar7 = *puVar7 | 0x400000;
          puVar7[0x18] = uStack_44;
          *puVar7 = *puVar7 | 0x1000000;
          puVar7[0x1a] = uStack_30;
          *puVar7 = *puVar7 | 0x2000000;
          puVar7[0x1b] = uStack_2c;
          *puVar7 = *puVar7 | 0x4000000;
          puVar7[0x1c] = uStack_28;
          *puVar7 = *puVar7 | 0x8000000;
          puVar7[0x1d] = uVar2;
          *puVar7 = *puVar7 | 0x10000000;
          puVar7[0x1e] = uVar3;
          *puVar7 = *puVar7 | 0x20000000;
          puVar7[0x1f] = uVar4;
          uStack_9c = uVar4;
        }
        *(undefined4 *)(param_1 + 0x87c) = 1;
        *(undefined4 *)(param_1 + 0x880) = 0x43340000;
      }
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

