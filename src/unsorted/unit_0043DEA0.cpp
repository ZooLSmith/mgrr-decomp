// src/unsorted/unit_0043DEA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043DEA0..0043E800, 12 functions

#include "types.h"

// 0043DEA0  FUN_0043dea0  size=112  [run]
void __fastcall FUN_0043dea0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_0163d4dc,0,0,0x3f800000,0x8000080,0xbf800000,0x40000000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00a94d60(&DAT_0163d4dc);
    if (iVar1 != 0) {
      FUN_00a8caf0(2,0,0,0);
      return;
    }
  }
  return;
}

// 0043DF10  FUN_0043df10  size=110  [run]
void __fastcall FUN_0043df10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_0163d4e4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00a95540(0,0x28);
    if (iVar1 != 0) {
      FUN_00a8e5d0(param_1,param_1 + 0x880,0);
      return;
    }
  }
  return;
}

// 0043DF80  FUN_0043df80  size=201  [run]
void __fastcall FUN_0043df80(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float unaff_ESI;
  float10 fVar4;
  float *pfVar5;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))();
  iVar3 = FUN_00a7c8a0();
  fStack_34 = *(float *)(iVar3 + 0x40);
  uStack_30 = *(undefined4 *)(iVar3 + 0x44);
  uStack_2c = *(undefined4 *)(iVar3 + 0x48);
  uStack_28 = *(undefined4 *)(iVar3 + 0x4c);
  pfVar5 = &fStack_34;
  uStack_24 = *(undefined4 *)(param_1 + 0x50);
  uStack_20 = *(undefined4 *)(param_1 + 0x54);
  uStack_1c = *(undefined4 *)(param_1 + 0x58);
  uStack_18 = *(undefined4 *)(param_1 + 0x5c);
  D3DXVec3TransformNormal(pfVar5,pfVar5,param_1 + 0xf0);
  fVar1 = *(float *)(param_1 + 0x124);
  D3DXVec3TransformNormal(&uStack_30,&uStack_30,param_1 + 0xf0);
  fVar4 = (float10)fpatan((float10)(float)pfVar5 -
                          ((float10)*(float *)(param_1 + 0x120) + (float10)(fVar1 + unaff_ESI)),
                          (float10)0.0 - ((float10)*(float *)(param_1 + 0x128) + (float10)fStack_34)
                         );
  *(float *)(param_1 + 0x94) = (float)fVar4;
  return;
}

// 0043E070  FUN_0043e070  size=134  [run]
void __fastcall FUN_0043e070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a9e060(0);
    FUN_00a81330();
    FUN_00a805f0();
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
    *(undefined4 *)(param_1 + 0x764) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a8c820();
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 0043E110  FUN_0043e110  size=42  [run]
void __fastcall FUN_0043e110(int *param_1)

{
  (**(code **)(*param_1 + 100))();
  switchD_0080dbae::default();
  Behavior::vf50();
  if (param_1[0x1ec] != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 0043E160  FUN_0043e160  size=302  [run]
undefined4 * __thiscall FUN_0043e160(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)((int)param_2 + 0x11);
  param_1[5] = param_2[5];
  FUN_00a7c960(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  puVar2 = param_2 + 0x10;
  puVar3 = param_1 + 0x10;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)((int)param_1 + 0x82) = *(undefined2 *)((int)param_2 + 0x82);
  *(undefined2 *)(param_1 + 0x21) = *(undefined2 *)(param_2 + 0x21);
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  puVar2 = param_2 + 0x28;
  puVar3 = param_1 + 0x28;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}

// 0043E290  FUN_0043e290  size=141  [run]
void __fastcall FUN_0043e290(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 0;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    (**(code **)(*param_1 + 0x1c))();
    FUN_00a9e290(&DAT_0163d4ec,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_0043df80();
  return;
}

// 0043E320  FUN_0043e320  size=253  [run]
void __fastcall FUN_0043e320(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_90 [8];
  undefined4 local_88;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
      *(undefined4 *)param_1[0xdc] = 1;
    }
    FUN_0040b190();
    local_88 = 0;
    uVar2 = FUN_00a82090("cardboard",0x21000,local_90);
    FUN_00a7c970(uVar2);
    iVar1 = param_1[0x13c];
    uVar4 = 0xffffffff;
    uVar3 = 0xffffffff;
    uVar2 = FUN_00a81330(0xffffffff,0xffffffff);
    FUN_00a8c5f0(0,iVar1,uVar2,uVar3,uVar4);
    FUN_00a9e290(&DAT_0163d4ec,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x20))();
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x1c))();
    FUN_00a8caf0(1,0,0,0);
  }
  return;
}

// 0043E420  FUN_0043e420  size=332  [run]
void __thiscall FUN_0043e420(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  if ((*(int **)(param_1 + 0x370) == (int *)0x0) || (**(int **)(param_1 + 0x370) == 0)) {
    fVar1 = *(float *)(param_2 + 0xa0);
    fVar2 = *(float *)(param_2 + 0xa4);
    fVar3 = *(float *)(param_2 + 0xa8);
    fVar4 = *(float *)(param_2 + 0xb0);
    fVar5 = *(float *)(param_2 + 0xb4);
    fVar6 = *(float *)(param_2 + 0xb8);
    FUN_00ddbaa0(-(*(float *)(param_2 + 0xa8) /
                  SQRT(*(float *)(param_2 + 200) * *(float *)(param_2 + 200) +
                       *(float *)(param_2 + 0xc4) * *(float *)(param_2 + 0xc4) +
                       *(float *)(param_2 + 0xc0) * *(float *)(param_2 + 0xc0))));
    fVar7 = (float10)fpatan((float10)*(float *)(param_2 + 0xa4) /
                            (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                            (float10)*(float *)(param_2 + 0xa0) /
                            (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    fVar7 = fVar7 * (float10)57.29578;
    if ((((float10)80.0 <= fVar7) && (fVar7 <= (float10)100.0)) ||
       (((float10)-100.0 <= fVar7 && (fVar7 < (float10)-90.0 != (fVar7 == (float10)-90.0))))) {
      FUN_0043e160(param_2);
      FUN_00a8caf0(4,0,0,0);
      return;
    }
    FUN_00a8caf0(3,0,0,0);
  }
  return;
}

// 0043E570  FUN_0043e570  size=392  [run]
undefined4 __fastcall FUN_0043e570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      local_168 = 0;
      local_164 = 0;
      local_16c = 1;
      iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
              StaticArray<Behavior::EffectIntegrationContainer,32>(&local_16c);
      if (iVar1 != 0) {
        if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
          **(undefined4 **)(param_1 + 0x370) = 1;
        }
        uVar2 = FUN_004039a0(4,param_1,0);
        FUN_00a8c8b0(0x20040,uVar2);
        local_170 = 0;
        iVar1 = FUN_00a54ae0(&local_170,param_1 + 0x494,"_col.hkx");
        if (iVar1 != 0) {
          iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
          if (iVar3 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = RigidBodyCollection::RigidBodyCollection_2();
          }
          *(undefined4 *)(param_1 + 0x7b0) = uVar2;
          iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,local_170);
          if (iVar1 != 0) {
            FUN_008f2cd0(0);
            (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1c);
            puVar4 = (undefined4 *)FUN_009f8b60();
            (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
            FUN_008f1600(0x80000000);
            FUN_008f1600(0x20);
            FUN_008f1600(0x4000000);
          }
        }
        FUN_00a8caf0(0,0,0,0);
        *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x20;
        FUN_00c5e220(*(undefined4 *)(param_1 + 0x4f0));
        return 1;
      }
    }
  }
  return 0;
}

// 0043E700  FUN_0043e700  size=251  [run]
void __fastcall FUN_0043e700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_0163d4dc,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00a95540(0,0x82);
    if (iVar1 != 0) {
      FUN_00a8c9b0(0,4,0,0);
      uVar2 = FUN_004039a0(0x5e,param_1,0);
      FUN_00a8c8b0(0x20040,uVar2);
      uVar2 = FUN_004039a0(2,param_1,0);
      FUN_00a8c8b0(0x20040,uVar2);
    }
    iVar1 = FUN_00a94d60(&DAT_0163d4dc);
    if (iVar1 != 0) {
      FUN_00a8caf0(2,0,0,0);
      return;
    }
  }
  return;
}

// 0043E800  FUN_0043e800  size=69  [run]
void FUN_0043e800(void)

{
  undefined4 uVar1;
  
  Behavior::vf4C();
  uVar1 = FUN_00a8cab0();
  switch(uVar1) {
  case 0:
    FUN_0043e320();
    return;
  case 1:
    FUN_0043e700();
    return;
  case 2:
    FUN_0043e290();
    return;
  case 3:
    FUN_0043dea0();
    return;
  case 4:
    FUN_0043df10();
    return;
  default:
    return;
  }
}

