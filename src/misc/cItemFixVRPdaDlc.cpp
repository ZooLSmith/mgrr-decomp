// src/misc/cItemFixVRPdaDlc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085AE30..00AB9C50, 17 functions

#include "types.h"

// 0085AE30  cItemFixVRPdaDlc::vf54  size=43  [class]
void __fastcall cItemFixVRPdaDlc::vf54(int param_1)

{
  int iVar1;
  
  cItemObjectBase::vf54();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  return;
}

// 0085AE60  FUN_0085ae60  size=70  [between]
void __thiscall FUN_0085ae60(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x24c] = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_0094e9c0(0x15e901d6,*(undefined4 *)(param_2 + 0x5c));
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0xc;
    }
    FUN_00aa92c0(uVar2);
    (**(code **)(*param_1 + 0x28))(*(undefined4 *)(param_2 + 4));
  }
  return;
}

// 0085AEB0  FUN_0085aeb0  size=28  [between]
void __fastcall FUN_0085aeb0(int param_1)

{
  uint *puVar1;
  
  if (1 < *(short *)(param_1 + 0x324)) {
    puVar1 = (uint *)(*(int *)(param_1 + 800) + 0xa8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}

// 0085AEF0  FUN_0085aef0  size=35  [between]
void __fastcall FUN_0085aef0(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xad0));
  }
  return;
}

// 0085AF20  FUN_0085af20  size=92  [between]
void __fastcall FUN_0085af20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0094e9c0(0x15e901d6,*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x5c));
  if (iVar1 == 0) {
    FUN_00aa92c0(1);
    FUN_00a8ca50(2,0,0);
    return;
  }
  FUN_00aa92c0(0xb);
  FUN_00a8ca50(0xc,0,0);
  return;
}

// 0085AF80  FUN_0085af80  size=167  [between]
void __fastcall FUN_0085af80(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  FUN_00d46920();
  FUN_00d46930();
  iVar1 = FUN_00a12210(0xf01);
  iVar2 = FUN_00a12210(0xf02);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    local_20 = *(undefined4 *)(iVar1 + 0x40);
    local_1c = *(undefined4 *)(iVar1 + 0x44);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    fVar3 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)*(float *)(iVar1 + 0x40),
                            (float10)*(float *)(iVar2 + 0x48) - (float10)*(float *)(iVar1 + 0x48));
    local_14 = (float)fVar3;
    FUN_00d46970(&local_20);
  }
  FUN_00a4ac40(*(int *)(*(int *)(param_1 + 0x930) + 0x5c) + 0x70 + (DAT_018b9174 & 0xf00),0,
               0xffffffff);
  return;
}

// 0085B030  FUN_0085b030  size=45  [between]
void __fastcall FUN_0085b030(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  param_1[0x9b6] = 1;
  param_1[0x9b5] = 0;
  return;
}

// 0085B060  FUN_0085b060  size=45  [between]
void __fastcall FUN_0085b060(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  param_1[0x9b6] = 1;
  param_1[0x9b5] = 0;
  return;
}

// 0085B090  FUN_0085b090  size=42  [between]
uint FUN_0085b090(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35b00;
  (**(code **)(*param_1 + 4))(&DAT_01b35b00);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0085B0C0  cItemFixVRPdaDlc::vf40  size=426  [class]
undefined4 __fastcall cItemFixVRPdaDlc::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = cItemFixBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xadc) = 0;
  iVar1 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = RigidBodyCollection::RigidBodyCollection_2();
  }
  *(int *)(param_1 + 0x7b0) = iVar1;
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x4f0);
    uVar2 = FUN_00de46d0("_col.hkx",0);
    uVar3 = FUN_00de4550("_col.hkx",0);
    iVar1 = FUN_008f6410(uVar4,uVar3,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f03a0(1,0);
      FUN_008f03a0(2,0);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x120))();
      *(undefined4 *)(param_1 + 0xad0) = uVar4;
    }
  }
  iVar1 = FUN_00d46780();
  if (iVar1 == 0) {
    iVar1 = FUN_00d467a0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x978) = 0x40000000;
      *(undefined4 *)(param_1 + 0x974) = 0xbf000000;
      *(undefined4 *)(param_1 + 0xab0) = 0x40400000;
      *(undefined4 *)(param_1 + 0xac0) = 0x3fd9999a;
      *(undefined4 *)(param_1 + 0xabc) = 0xbfc00000;
      *(undefined4 *)(param_1 + 0xab4) = 0xbf800000;
      uVar4 = 0x3f800000;
      goto LAB_0085b231;
    }
  }
  *(undefined4 *)(param_1 + 0x978) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x974) = 0xbf000000;
  *(undefined4 *)(param_1 + 0xab0) = 0x40400000;
  *(undefined4 *)(param_1 + 0xac0) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0xabc) = 0xbf000000;
  *(undefined4 *)(param_1 + 0xab4) = 0xbf4ccccd;
  uVar4 = 0x3f4ccccd;
LAB_0085b231:
  *(undefined4 *)(param_1 + 0xab8) = uVar4;
  FUN_00d9c2d0(param_1 + 0x10);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
  *(undefined4 *)(param_1 + 0x930) = 0;
  *(undefined4 *)(param_1 + 0xad4) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  return 1;
}

// 0085B270  FUN_0085b270  size=30  [between]
undefined4 __thiscall FUN_0085b270(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_6();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0085B290  cItemFixVRPdaDlc::vf48  size=690  [class]
void __fastcall cItemFixVRPdaDlc::vf48(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cItemFixBase::vf48();
  if (*(int *)(param_1 + 0xad4) == 0) {
    if (*(int *)(param_1 + 0x930) != 0) {
      iVar1 = FUN_00c1bd80();
      if (iVar1 == 0) {
        piVar3 = (int *)FUN_00c13920();
        iVar1 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
        if (iVar1 != 0) {
          iVar1 = FUN_0094a2a0();
          if (iVar1 == 0) {
            uVar4 = FUN_00a7c8b0();
            iVar1 = FUN_00d95c60(uVar4);
          }
          else {
            uVar4 = FUN_00a7c8b0();
            iVar1 = FUN_00d900c0(*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x78),uVar4);
          }
          if (iVar1 != 0) {
            iVar1 = FUN_00d46850();
            if (iVar1 != 0) {
              iVar1 = FUN_00d45b10();
              if (iVar1 != 0) {
                iVar1 = FUN_00d466f0();
                if (iVar1 != 0) {
                  uVar4 = FUN_00a7c8a0();
                  piVar3 = (int *)FUN_00602f90(uVar4);
                  if (piVar3 != (int *)0x0) {
                    iVar1 = (**(code **)(*piVar3 + 0x380))();
                    if (iVar1 != 0) {
                      DAT_01dc1300 = 1;
                      DAT_01dc12fc = 4;
                      if ((*(byte *)(piVar3 + 0x33f) & 0x20) != 0) {
                        *(undefined4 *)(param_1 + 0xad4) = 1;
                        iVar1 = cMessWindowCtrl::cMessWindowCtrl_29();
                        *(int *)(param_1 + 0xad8) = iVar1;
                        if (iVar1 == 0) {
                          FUN_00dd5650(&DAT_01648d54);
                          *(undefined4 *)(param_1 + 0xad4) = 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0xad8) != 0) {
      iVar1 = FUN_0099a2a0();
      if (iVar1 != 0) {
        iVar2 = FUN_0099a290();
        iVar1 = *(int *)(param_1 + 0xad8);
        if (iVar2 == 0) {
          if (iVar1 != 0) {
            cMessWindowCtrl::cMessWindowCtrl_6();
            FUN_00dd4920(iVar1);
            *(undefined4 *)(param_1 + 0xad8) = 0;
          }
          *(undefined4 *)(param_1 + 0xad4) = 0;
        }
        else {
          if (iVar1 != 0) {
            cMessWindowCtrl::cMessWindowCtrl_6();
            FUN_00dd4920(iVar1);
            *(undefined4 *)(param_1 + 0xad8) = 0;
          }
          piVar3 = (int *)FUN_00c13920();
          iVar1 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
          if (iVar1 != 0) {
            uVar4 = FUN_00a7c8a0();
            piVar3 = (int *)FUN_00602f90(uVar4);
            if (piVar3 != (int *)0x0) {
              if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
                iVar1 = **(int **)(param_1 + 0x7b0);
                uVar4 = FUN_009f8b40();
                (**(code **)(iVar1 + 0x114))(uVar4);
              }
              uVar5 = 0x40400000;
              uVar4 = (**(code **)(*piVar3 + 0x68))(0x40400000);
              FUN_00948180(uVar4,uVar5);
              (**(code **)(*piVar3 + 0x220))(0x3f800000);
              (**(code **)(*piVar3 + 0x150))(0x67,*(undefined4 *)(param_1 + 0x4f0));
              *(undefined4 *)(param_1 + 0xadc) = 1;
              iVar1 = FUN_00d46780();
              if (iVar1 != 0) {
                FUN_00c82240(0xd);
                if ((DAT_018b9174 == 0xc50) && (*(int *)(*(int *)(param_1 + 0x930) + 0x5c) == 5)) {
                  FUN_00c82240(6);
                }
              }
              FUN_00d4f310();
            }
          }
        }
      }
    }
    if (*(int *)(param_1 + 0xadc) == 0) {
      DAT_01dc1300 = 1;
      DAT_01dc12fc = 4;
      return;
    }
  }
  return;
}

// 0085B550  FUN_0085b550  size=1188  [between]
void __fastcall FUN_0085b550(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0xd9] = param_1[0xd9] & 0xffefffff;
  (*pcVar1)();
  (**(code **)(*param_1 + 0x220))(0x3f800000);
  iVar2 = param_1[0x1d9];
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
  }
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    if (param_1[0x1d9] != 0) {
      FUN_008e6c60(0);
    }
    (**(code **)(*param_1 + 0x39c))();
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = *param_1;
      uVar3 = FUN_00a81330();
      (**(code **)(iVar2 + 0x15c))(0x67,uVar3);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a81330();
    FUN_00a7c8a0();
    if (param_1[0x2dd] == 0) {
      FUN_00aa4080(0x13a,0,0,0x3f800000,0x8000000,0,0x3f800000);
      iVar2 = FUN_00b7d0b0();
      if (iVar2 != 0) {
        uVar12 = 0x3f800000;
        uVar11 = 0xbf800000;
        uVar10 = 0x8000000;
        uVar9 = 0x3f800000;
        uVar8 = 0;
        uVar3 = 0;
        puVar7 = &DAT_01645378;
        FUN_00b7d0b0(&DAT_01645378,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00a7c8a0();
        FUN_00a9e290(puVar7,uVar3,uVar8,uVar9,uVar10,uVar11,uVar12);
      }
    }
    else {
      FUN_00aa4080(0x13b,0,0,0x3f800000,0x8000000,0,0x3f800000);
    }
    param_1[0x2dd] = 1;
    iVar2 = FUN_00a12210(0xf01);
    iVar4 = FUN_00a12210(0xf02);
    if ((iVar2 != 0) && (iVar4 != 0)) {
      uStack_34 = 0;
      uStack_2c = 0;
      uStack_28 = 0x3f800000;
      uStack_24 = *(undefined4 *)(iVar2 + 0x40);
      uStack_20 = *(undefined4 *)(iVar2 + 0x44);
      uStack_1c = *(undefined4 *)(iVar2 + 0x48);
      uStack_18 = *(undefined4 *)(iVar2 + 0x4c);
      fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)*(float *)(iVar2 + 0x40),
                              (float10)*(float *)(iVar4 + 0x48) - (float10)*(float *)(iVar2 + 0x48))
      ;
      fStack_30 = (float)fVar6;
      (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
      param_1[0x248] = 0;
      param_1[0x250] = 0;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 1) {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        FUN_00a81330();
        piVar5 = (int *)FUN_00a7c8a0();
        if (piVar5 != (int *)0x0) {
          puVar7 = &DAT_01b35b00;
          (**(code **)(*piVar5 + 4))(&DAT_01b35b00);
          iVar2 = FUN_00dd6d80(puVar7);
          if (iVar2 != 0) {
            FUN_0085af20();
          }
        }
        FUN_00aa4080(0x13c,0,0,0x3f800000,0x8000000,0,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    else {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 2) {
        if (param_1[0x250] == 0) {
          fVar6 = (float10)FUN_00a92ff0();
          fVar6 = fVar6 * (float10)0.016666668 + (float10)(float)param_1[0x248];
          param_1[0x248] = (int)(float)fVar6;
          if ((float10)2.0 <= fVar6) {
            param_1[0x250] = 1;
            FUN_00a81330();
            uVar3 = FUN_00a7c8a0();
            iVar2 = FUN_0085b090(uVar3);
            if (iVar2 != 0) {
              FUN_0085aeb0();
              FUN_0085af80();
            }
          }
        }
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          FUN_00aa4080(0x13d,0,0,0x3f800000,0x8000000,0,0x3f800000);
          param_1[0x187] = param_1[0x187] + 1;
        }
      }
      else {
        iVar2 = FUN_00a8cac0();
        if (iVar2 == 3) {
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            if (param_1[0x1d9] != 0) {
              FUN_008e6c60(1);
            }
            DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
            iVar2 = FUN_00a81330();
            if (iVar2 != 0) {
              FUN_00a81330();
              uVar3 = FUN_00a7c8a0();
              iVar2 = FUN_0085b090(uVar3);
              if (iVar2 != 0) {
                FUN_0085aef0();
              }
            }
            iVar2 = *param_1;
            uVar3 = FUN_00a81330();
            (**(code **)(iVar2 + 0x15c))(0x67,uVar3);
            FUN_00ba6810(1,0);
            pcVar1 = *(code **)(*param_1 + 0x388);
            param_1[0xd9] = param_1[0xd9] | 0x100000;
            (*pcVar1)(0);
          }
        }
      }
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar7 = &DAT_01b35b00;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b00);
      iVar2 = FUN_00dd6d80(puVar7);
      if ((iVar2 != 0) && (piVar5[0x24c] != 0)) {
        iVar2 = FUN_0094a2c0();
        if (iVar2 != 0) goto LAB_0085b9da;
      }
    }
  }
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
LAB_0085b9da:
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 0085BA00  FUN_0085ba00  size=924  [between]
void __fastcall FUN_0085ba00(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[0x118] = 0x3f800000;
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0xd9] = param_1[0xd9] & 0xffefffff;
  (*pcVar1)();
  (**(code **)(*param_1 + 0x220))(0x3f800000);
  iVar3 = param_1[0x1d9];
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
  }
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    if (param_1[0x1d9] != 0) {
      FUN_008e6c60(0);
    }
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = *param_1;
      uVar4 = FUN_00a81330();
      (**(code **)(iVar3 + 0x15c))(0x67,uVar4);
      param_1[0x118] = 0x3dcccccd;
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
    FUN_00aa4080(0x61,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x2dd] = 1;
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01b35b00;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b00);
      iVar3 = FUN_00dd6d80(puVar8);
      if (iVar3 != 0) {
        FUN_0085af20();
      }
    }
    iVar3 = FUN_00a12210(0xf01);
    iVar6 = FUN_00a12210(0xf02);
    if ((iVar3 != 0) && (iVar6 != 0)) {
      uStack_34 = 0;
      uStack_2c = 0;
      uStack_28 = 0x3f800000;
      uStack_24 = *(undefined4 *)(iVar3 + 0x40);
      uStack_20 = *(undefined4 *)(iVar3 + 0x44);
      uStack_1c = *(undefined4 *)(iVar3 + 0x48);
      uStack_18 = *(undefined4 *)(iVar3 + 0x4c);
      fVar7 = (float10)fpatan((float10)*(float *)(iVar6 + 0x40) - (float10)*(float *)(iVar3 + 0x40),
                              (float10)*(float *)(iVar6 + 0x48) - (float10)*(float *)(iVar3 + 0x48))
      ;
      fStack_30 = (float)fVar7;
      (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
      param_1[0x248] = 0;
      param_1[0x250] = 0;
    }
  }
  else {
    iVar3 = FUN_00a8cac0();
    if ((iVar3 == 1) && (iVar3 = FUN_00a94ce0(0), iVar3 != 0)) {
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        uVar4 = FUN_00a7c8a0();
        iVar3 = FUN_0085b090(uVar4);
        if (iVar3 != 0) {
          FUN_0085aef0();
        }
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e6c60(1);
      }
      iVar3 = *param_1;
      uVar4 = FUN_00a81330();
      (**(code **)(iVar3 + 0x15c))(0x67,uVar4);
      FUN_00ba6810(1,0);
      pcVar1 = *(code **)(*param_1 + 0x314);
      param_1[0xd9] = param_1[0xd9] | 0x100000;
      (*pcVar1)();
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  bVar2 = true;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01b35b00;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b00);
      iVar3 = FUN_00dd6d80(puVar8);
      if (((iVar3 != 0) && (piVar5[0x24c] != 0)) && (iVar3 = FUN_0094a2c0(), iVar3 != 0)) {
        bVar2 = false;
      }
    }
    iVar3 = FUN_00a8c760(0xb);
    if ((iVar3 != 0) && (param_1[0x250] == 0)) {
      param_1[0x250] = 1;
      FUN_00a81330();
      uVar4 = FUN_00a7c8a0();
      iVar3 = FUN_0085b090(uVar4);
      if (iVar3 != 0) {
        FUN_0085aeb0();
        FUN_0085af80();
      }
    }
    if (!bVar2) goto LAB_0085bd82;
  }
  iVar3 = FUN_00a92f90();
  if (iVar3 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
LAB_0085bd82:
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 0085BDA0  cItemFixVRPdaDlc::vf44  size=49  [class]
void __fastcall cItemFixVRPdaDlc::vf44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xad8);
  if (iVar1 != 0) {
    cMessWindowCtrl::cMessWindowCtrl_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0xad8) = 0;
  }
  cItemFixBase::thunk_vf44();
  return;
}

// 00AB1AA0  cItemFixVRPdaDlc::vf04  size=6  [class]
undefined * cItemFixVRPdaDlc::vf04(void)

{
  return &DAT_01b35b00;
}

// 00AB9C50  cItemFixVRPdaDlc::vf00  size=30  [class]
undefined4 __thiscall cItemFixVRPdaDlc::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_124();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

