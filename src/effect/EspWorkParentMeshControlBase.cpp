// src/effect/EspWorkParentMeshControlBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D14C0..009F6C70, 10 functions

#include "mgrr.h"
#include "EspWorkParentMeshControlBase.h"

// 009D14C0  EspWorkParentMeshControlBase::vf08  size=25  [class]
void __fastcall EspWorkParentMeshControlBase::vf08(int *param_1)

{
  esp39::vf08();
  FUN_00efed20();
                    /* WARNING: Could not recover jumptable at 0x009d14d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

// 009D14E0  EspWorkParentMeshControlBase::vf10  size=1  [class]
void EspWorkParentMeshControlBase::vf10(void)

{
  return;
}

// 009D5720  EspWorkParentMeshControlBase::vf1C  size=1  [class]
void EspWorkParentMeshControlBase::vf1C(void)

{
  return;
}

// 009D5730  EspWorkParentMeshControlBase::vf00  size=36  [class]
undefined4 * __thiscall EspWorkParentMeshControlBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E4D40  EspWorkParentMeshControlBase::EspWorkParentMeshControlBase_3  size=92  [class]
undefined4 * __fastcall
EspWorkParentMeshControlBase::EspWorkParentMeshControlBase_3(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *param_1 = vftable;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  return param_1;
}

// 009E4DA0  EspWorkParentMeshControlBase::vf14  size=59  [class]
void __fastcall EspWorkParentMeshControlBase::vf14(int *param_1)

{
  if (param_1[0x117] != 0) {
    FUN_009db4f0(param_1);
    if (param_1[0x117] != 0) {
      (**(code **)(*param_1 + 0x24))();
      param_1[0x117] = 0;
    }
  }
  esp39::vf14();
  return;
}

// 009E4DF0  FUN_009e4df0  size=616  [callgraph]
undefined4 __thiscall FUN_009e4df0(int param_1,short param_2,short param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  byte local_19;
  uint local_14;
  uint local_10;
  int local_c;
  char local_4 [4];
  
  if ((param_3 != -1) && (param_3 <= param_2)) {
    param_3 = param_2;
  }
  iVar7 = FUN_009db440();
  if (iVar7 == 0) {
    FUN_009cca90(param_1,&DAT_0165ad74);
    return 0;
  }
  sVar5 = *(short *)(iVar7 + 0x324);
  local_14 = (uint)sVar5;
  if (0x100 < local_14) {
    FUN_009cca90(param_1,&DAT_0165ad30);
    local_14 = 0x100;
  }
  local_10 = 0;
  if (sVar5 < 1) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(iVar7 + 800);
  }
  local_19 = 0;
  if (local_14 != 0) {
    uVar10 = 0;
    do {
      iVar7 = *(int *)(*(int *)(uVar10 * 0x70 + 0x60 + local_c) + 0x40);
      if ((iVar7 != 0) && (iVar7 = FUN_00e05f70(iVar7,&DAT_0163dcac), iVar7 != 0)) {
        bVar2 = (&DAT_016caad0)[*(byte *)(iVar7 + 4)];
        uVar8 = (ushort)bVar2;
        if (bVar2 == 0xff) {
          uVar8 = 0;
        }
        bVar3 = (&DAT_016caad0)[*(byte *)(iVar7 + 5)];
        uVar9 = (ushort)bVar3;
        if (bVar3 == 0xff) {
          uVar9 = 0;
        }
        bVar4 = (&DAT_016caad0)[*(byte *)(iVar7 + 6)];
        uVar6 = (ushort)bVar4;
        if (bVar4 == 0xff) {
          uVar6 = 0;
        }
        if (((bVar2 == 0xff) || (bVar3 == 0xff)) || (bVar4 == 0xff)) {
          _strncpy_s(local_4,4,(char *)(iVar7 + 4),3);
          FUN_009cca90(param_1,&DAT_0165ad0c,local_4);
        }
        else {
          sVar5 = uVar6 + (uVar9 + uVar8 * 10) * 10;
          if ((param_2 == -1) || ((param_2 <= sVar5 && ((param_3 == -1 || (sVar5 <= param_3)))))) {
            if (0xf < local_10) {
              FUN_009cca90(param_1,&DAT_0165acb8,0x10);
              break;
            }
            *(byte *)(local_10 + 0x460 + param_1) = local_19;
            local_10 = local_10 + 1;
            puVar1 = (uint *)(param_1 + 0x470 + (uVar10 >> 5) * 4);
            *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar10 & 0x1f);
          }
        }
      }
      local_19 = local_19 + 1;
      uVar10 = (uint)local_19;
    } while (uVar10 < local_14);
    if (local_10 != 0) {
      _qsort((void *)(param_1 + 0x460),local_10,1,(_PtFuncCompare *)&LAB_009d1530);
      *(uint *)(param_1 + 0x45c) = local_10;
      return 1;
    }
  }
  FUN_009cca90(param_1,&DAT_0165ac88,(int)param_2,(int)param_3);
  return 0;
}

// 009F0840  EspWorkParentMeshControlBase::vf04  size=422  [class]
bool __thiscall
EspWorkParentMeshControlBase::vf04
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_00a7c990(&DAT_01ee11f4);
  if ((((iVar2 != 0) || (iVar2 = FUN_00a81330(), iVar2 == 0)) ||
      (iVar2 = FUN_00a7c800(), iVar2 == 0)) || (param_1[0x14] == 0)) {
    FUN_009cca90(param_1,&DAT_0165b6e0);
    return false;
  }
  if ((short)param_1[0x100] != -1) {
    FUN_009cca90(param_1,&DAT_0165b760);
    return false;
  }
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  local_1c = 0;
  local_18 = 0;
  local_10 = (int *)0x0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_20 = 0;
  local_14 = 1;
  uVar4 = 0;
  uVar1 = 0;
  param_1[0x116] = 0;
  puVar3 = (undefined2 *)FUN_009d4a80();
  if (puVar3 != (undefined2 *)0x0) {
    uVar1 = puVar3[1];
    uVar4 = *puVar3;
    if (puVar3[2] != 0) {
      param_1[0x116] = 1;
    }
    iVar2 = (int)(short)puVar3[3];
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        FUN_009cca90(param_1,&DAT_0165b710);
      }
      else if (iVar2 == 2) {
        local_1c = 1;
      }
      else {
        FUN_009cca90(param_1,&DAT_0165b74c,iVar2);
      }
    }
    if (*(char *)((int)puVar3 + 0x15) != '\0') {
      local_18 = 1;
    }
  }
  iVar2 = FUN_009e4df0(uVar4,uVar1);
  if (iVar2 == 0) {
    return false;
  }
  local_c = param_1[0x117];
  local_10 = param_1 + 0x118;
  iVar2 = (**(code **)(*param_1 + 0x20))(&local_28);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_009ec3b0(param_1);
  return iVar2 != 0;
}

// 009F6B70  EspWorkParentMeshControlBase::EspWorkParentMeshControlBase  size=34  [class]
void __fastcall EspWorkParentMeshControlBase::EspWorkParentMeshControlBase(undefined4 *param_1)

{
  *param_1 = EspWorkParentMeshControl::vftable;
  Spline<float>::Spline<float>_2();
  *param_1 = vftable;
  cEspBase::cEspBase_5();
  return;
}

// 009F6C70  EspWorkParentMeshControlBase::EspWorkParentMeshControlBase_2  size=34  [class]
void __fastcall EspWorkParentMeshControlBase::EspWorkParentMeshControlBase_2(undefined4 *param_1)

{
  *param_1 = EspWorkParentMeshControlWtr::vftable;
  Spline<float>::Spline<float>();
  *param_1 = vftable;
  cEspBase::cEspBase_5();
  return;
}

