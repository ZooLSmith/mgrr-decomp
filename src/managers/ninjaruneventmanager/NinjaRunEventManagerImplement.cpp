// src/managers/ninjaruneventmanager/NinjaRunEventManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1BA90..00C629B0, 29 functions

#include "types.h"

// 00C1BA90  NinjaRunEventManagerImplement::PhantomUnit::vf00  size=31  [class]
void __fastcall NinjaRunEventManagerImplement::PhantomUnit::vf00(int *param_1)

{
  FUN_00900ca0();
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

// 00C1BB70  NinjaRunEventManagerImplement::PhantomUnit::vf04  size=31  [class]
undefined4 * __thiscall
NinjaRunEventManagerImplement::PhantomUnit::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C1BB90  FUN_00c1bb90  size=15  [between]
undefined4 __fastcall FUN_00c1bb90(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00C1BBF0  NinjaRunEventManagerImplement::vf0C  size=10  [class]
void __thiscall NinjaRunEventManagerImplement::vf0C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 00C1BC00  NinjaRunEventManagerImplement::vf10  size=8  [class]
void __fastcall NinjaRunEventManagerImplement::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}

// 00C1BC10  NinjaRunEventManagerImplement::vf14  size=1  [class]
void NinjaRunEventManagerImplement::vf14(void)

{
  return;
}

// 00C1BC20  NinjaRunEventManagerImplement::vf18  size=1  [class]
void NinjaRunEventManagerImplement::vf18(void)

{
  return;
}

// 00C2CBD0  FUN_00c2cbd0  size=113  [callgraph]
int __thiscall FUN_00c2cbd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      iVar2 = *piVar3;
      if (*(int *)(iVar2 + 0x10) == param_2) goto LAB_00c2cc00;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  iVar2 = 0;
LAB_00c2cc00:
  iVar2 = *(int *)(iVar2 + 0x170);
  if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 4), piVar3 != piVar3 + *(int *)(iVar2 + 8))) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x10) == param_3) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00C2CC50  FUN_00c2cc50  size=82  [callgraph]
int FUN_00c2cc50(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00c2cb50(param_1,param_2);
  iVar2 = *(int *)(iVar2 + 0x170);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x10) == param_3) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00C2CCB0  FUN_00c2ccb0  size=82  [callgraph]
int FUN_00c2ccb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00c2cbd0(param_1,param_2);
  iVar2 = *(int *)(iVar2 + 0x170);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x10) == param_3) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00C2D0C0  FUN_00c2d0c0  size=133  [callgraph]
void FUN_00c2d0c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    FUN_00a7c8a0(uVar3);
    iVar2 = FUN_00a12210(uVar3);
    iVar1 = param_1 + 0x20;
    D3DXMatrixTranslation
              (iVar1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x60) = 1;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      *(float *)(param_1 + 0x50) = *(float *)(iVar2 + 0x40) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(iVar2 + 0x44) + *(float *)(param_1 + 0x54);
      *(float *)(param_1 + 0x58) = *(float *)(iVar2 + 0x48) + *(float *)(param_1 + 0x58);
      return;
    }
    D3DXMatrixMultiply(iVar1,iVar1,iVar2 + 0x10);
  }
  return;
}

// 00C2D150  FUN_00c2d150  size=258  [callgraph]
void FUN_00c2d150(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar4 = *(int **)(*(int *)(param_1 + 0x170) + 4);
  if (piVar4 != piVar4 + *(int *)(*(int *)(param_1 + 0x170) + 8)) {
    do {
      iVar1 = *piVar4;
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        uVar5 = *(undefined4 *)(iVar1 + 0x24);
        FUN_00a7c8a0(uVar5);
        iVar3 = FUN_00a12210(uVar5);
        iVar2 = iVar1 + 0x40;
        D3DXMatrixTranslation
                  (iVar2,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),
                   *(undefined4 *)(iVar1 + 0x38));
        *(undefined4 *)(iVar1 + 0x80) = 1;
        if ((*(byte *)(iVar1 + 0x28) & 1) == 0) {
          D3DXMatrixMultiply(iVar2,iVar2,iVar3 + 0x10);
        }
        else {
          *(float *)(iVar1 + 0x70) = *(float *)(iVar1 + 0x70) + *(float *)(iVar3 + 0x40);
          *(float *)(iVar1 + 0x74) = *(float *)(iVar3 + 0x44) + *(float *)(iVar1 + 0x74);
          *(float *)(iVar1 + 0x78) = *(float *)(iVar3 + 0x48) + *(float *)(iVar1 + 0x78);
        }
      }
      Phantom::setTransform(iVar1 + 0x40);
      if ((*(byte *)(iVar1 + 0xc0) & 8) != 0) {
        FUN_00c2d0c0(iVar1 + 0xf0);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(*(int *)(param_1 + 0x170) + 4) +
                              *(int *)(*(int *)(param_1 + 0x170) + 8) * 4));
  }
  return;
}

// 00C2D310  FUN_00c2d310  size=292  [callgraph]
void __fastcall FUN_00c2d310(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 8) + 4);
  if (piVar3 != piVar3 + *(int *)(*(int *)(param_1 + 8) + 8)) {
    do {
      iVar1 = *piVar3;
      if (DAT_01885d68 != 1) {
        iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar4 = (int *)(iVar2 + 4);
        *piVar4 = *piVar4 + 1;
      }
      iVar2 = *(int *)(iVar1 + 0x170);
      piVar4 = *(int **)(iVar2 + 4);
      if (piVar4 != piVar4 + *(int *)(iVar2 + 8)) {
        do {
          iVar2 = *piVar4;
          FUN_00c2d0c0(iVar2 + 0x20);
          Phantom::setTransform(iVar2 + 0x40);
          FUN_00c2d150(iVar2);
          iVar2 = *(int *)(iVar1 + 0x170);
          piVar4 = piVar4 + 1;
        } while (piVar4 != (int *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 4));
      }
      if (DAT_01885d68 != 1) {
        piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar4 = *piVar4 + -1;
        if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)(*(int *)(*(int *)(param_1 + 8) + 4) +
                              *(int *)(*(int *)(param_1 + 8) + 8) * 4));
  }
  return;
}

// 00C2D440  NinjaRunEventManagerImplement::vf04  size=232  [class]
void __thiscall
NinjaRunEventManagerImplement::vf04
          (int param_1,int *param_2,int param_3,float param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  
  if ((*(int *)(param_1 + 0xc) == -1) ||
     (iVar6 = FUN_00c2cbd0(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10)), iVar6 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  iVar6 = *(int *)(iVar6 + 0x170);
  piVar7 = *(int **)(iVar6 + 4);
  if (piVar7 != piVar7 + *(int *)(iVar6 + 8)) {
    piVar1 = piVar7 + *(int *)(iVar6 + 8);
    do {
      iVar6 = *piVar7;
      if (((*(int *)(iVar6 + 0x170) == 0) &&
          (fVar4 = *(float *)(iVar6 + 0x70) - *(float *)(param_3 + 0x40),
          fVar5 = *(float *)(iVar6 + 0x74) - *(float *)(param_3 + 0x44),
          fVar3 = *(float *)(iVar6 + 0x78) - *(float *)(param_3 + 0x48),
          fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3), param_4 <= fVar3)) &&
         (fVar3 < param_5 != (fVar3 == param_5))) {
        *(undefined4 *)(iVar6 + 0x170) = 1;
        iVar2 = *(int *)(iVar6 + 0xe4);
        param_2[2] = 0;
        *param_2 = iVar6 + 0x20;
        param_2[1] = iVar2;
        return;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00C2D530  NinjaRunEventManagerImplement::vf00  size=21  [class]
void __fastcall NinjaRunEventManagerImplement::vf00(int *param_1)

{
  FUN_00c2d310();
                    /* WARNING: Could not recover jumptable at 0x00c2d543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}

// 00C42E50  FUN_00c42e50  size=1383  [callgraph]
undefined4 __thiscall FUN_00c42e50(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 uStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined1 auStack_cc [4];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [76];
  
  iVar2 = *(int *)(param_1 + 8);
  piVar5 = *(int **)(iVar2 + 4);
  if (piVar5 != piVar5 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar5 + *(int *)(iVar2 + 8);
    do {
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x10) == param_2) {
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        iVar3 = *(int *)(iVar2 + 0x170);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        piVar5 = *(int **)(iVar3 + 4);
        if (piVar5 == piVar5 + *(int *)(iVar3 + 8)) {
          return 0xffffffff;
        }
        do {
          iVar3 = *piVar5;
          if (*(int *)(iVar3 + 0x80) != 0) {
            local_a0 = *(undefined4 *)(iVar3 + 0x70);
            local_9c = *(undefined4 *)(iVar3 + 0x74);
            local_98 = *(undefined4 *)(iVar3 + 0x78);
            local_94 = *(undefined4 *)(iVar3 + 0x7c);
            local_f0 = 1.0;
            local_fc = 1.0;
            local_d8 = 1.0;
            local_ec = 0.0;
            local_e8 = 0.0;
            local_100 = 0.0;
            local_f8 = 0.0;
            local_e0 = 0.0;
            local_dc = 0.0;
            local_ac = SQRT(*(float *)(iVar3 + 0x44) * *(float *)(iVar3 + 0x44) +
                            *(float *)(iVar3 + 0x40) * *(float *)(iVar3 + 0x40) +
                            *(float *)(iVar3 + 0x48) * *(float *)(iVar3 + 0x48));
            local_a8 = SQRT(*(float *)(iVar3 + 0x50) * *(float *)(iVar3 + 0x50) +
                            *(float *)(iVar3 + 0x54) * *(float *)(iVar3 + 0x54) +
                            *(float *)(iVar3 + 0x58) * *(float *)(iVar3 + 0x58));
            fVar4 = SQRT(*(float *)(iVar3 + 0x68) * *(float *)(iVar3 + 0x68) +
                         *(float *)(iVar3 + 100) * *(float *)(iVar3 + 100) +
                         *(float *)(iVar3 + 0x60) * *(float *)(iVar3 + 0x60));
            local_c4 = *(float *)(iVar3 + 0x58) / fVar4;
            local_c8 = *(float *)(iVar3 + 0x68) / fVar4;
            fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x48) / fVar4));
            fVar8 = (float10)fpatan((float10)local_c4,(float10)local_c8);
            local_c0 = (float)fVar8;
            local_bc = (float)fVar7;
            fVar7 = (float10)fpatan((float10)*(float *)(iVar3 + 0x44) / (float10)local_a8,
                                    (float10)*(float *)(iVar3 + 0x40) / (float10)local_ac);
            local_b8 = (float)fVar7;
            FUN_00ddc1d0(local_50,&local_c0,5);
            D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
            FUN_00ddc1d0(&fStack_5c,auStack_cc,5);
            D3DXVec3TransformNormal(&stack0xfffffef4,&stack0xfffffef4,&fStack_5c);
            FUN_00ddc1d0(&fStack_68,&local_d8,5);
            D3DXVec3TransformNormal(&local_f8,&local_f8,&fStack_68);
            if (((local_f0 != 0.0) || (local_ec != 0.0)) || (local_e8 != 0.0)) {
              fVar4 = local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec;
              if (fVar4 < 0.0 == (fVar4 == 0.0)) {
                FUN_00ddf460(&local_f0,&local_f0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_f0 = 0.0;
                local_ec = 1.0;
                local_e8 = 0.0;
              }
            }
            if (((local_100 != 0.0) || (local_fc != 0.0)) || (local_f8 != 0.0)) {
              fVar4 = local_f8 * local_f8 + local_100 * local_100 + local_fc * local_fc;
              if (fVar4 < 0.0 == (fVar4 == 0.0)) {
                FUN_00ddf460(&local_100,&local_100);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_100 = 0.0;
                local_fc = 1.0;
                local_f8 = 0.0;
              }
            }
            if (((local_e0 != 0.0) || (local_dc != 0.0)) || (local_d8 != 0.0)) {
              fVar4 = local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc;
              if (fVar4 < 0.0 == (fVar4 == 0.0)) {
                FUN_00ddf460(&local_e0,&local_e0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_e0 = 0.0;
                local_dc = 1.0;
                local_d8 = 0.0;
              }
            }
            fStack_90 = local_f0;
            fStack_8c = local_ec;
            fStack_88 = local_e8;
            uStack_84 = uStack_e4;
            fStack_78 = local_f8;
            uStack_74 = uStack_f4;
            uStack_64 = uStack_d4;
            fStack_60 = *(float *)(iVar3 + 0x90) * 0.5;
            fStack_5c = *(float *)(iVar3 + 0x94) * 0.5;
            fStack_58 = *(float *)(iVar3 + 0x98) * 0.5;
            fStack_80 = local_100;
            fStack_7c = local_fc;
            fStack_70 = local_e0;
            fStack_6c = local_dc;
            fStack_68 = local_d8;
            iVar6 = FUN_00d91d90(param_3,0x3eb33333,&local_a0);
            if (iVar6 != 0) {
              return *(undefined4 *)(iVar3 + 0x10);
            }
          }
          piVar5 = piVar5 + 1;
          if (piVar5 == (int *)(*(int *)(*(int *)(iVar2 + 0x170) + 4) +
                               *(int *)(*(int *)(iVar2 + 0x170) + 8) * 4)) {
            return 0xffffffff;
          }
        } while( true );
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
  }
  return 0xffffffff;
}

// 00C433C0  NinjaRunEventManagerImplement::vf28  size=132  [class]
void __thiscall NinjaRunEventManagerImplement::vf28(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar5 = *(int **)(iVar2 + 4);
  if (piVar5 != piVar5 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar5 + *(int *)(iVar2 + 8);
    while (((undefined4 *)*piVar5)[4] != param_2) {
      piVar5 = piVar5 + 1;
      if (piVar5 == piVar1) {
        return;
      }
    }
    (*(code *)**(undefined4 **)*piVar5)();
    iVar2 = *(int *)(param_1 + 8);
    uVar3 = *(uint *)(iVar2 + 8);
    iVar4 = *(int *)(iVar2 + 4);
    piVar1 = (int *)(iVar4 + uVar3 * 4);
    if ((((piVar5 != piVar1) && (iVar4 != 0)) && (uVar3 != 0)) &&
       ((uint)((int)piVar5 - iVar4 >> 2) < uVar3)) {
      for (; piVar5 != piVar1 + -1; piVar5 = piVar5 + 1) {
        *piVar5 = piVar5[1];
      }
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
  }
  return;
}

// 00C50510  NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit  size=177  [class]
undefined4 * __thiscall
NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5
          )

{
  *param_1 = vftable;
  param_1[4] = param_3;
  FUN_00a7c940(param_4);
  param_1[9] = *(undefined4 *)(param_4 + 4);
  param_1[10] = *(undefined4 *)(param_4 + 8);
  param_1[0xc] = *(undefined4 *)(param_4 + 0x10);
  param_1[0xd] = *(undefined4 *)(param_4 + 0x14);
  param_1[0xe] = *(undefined4 *)(param_4 + 0x18);
  param_1[0xf] = *(undefined4 *)(param_4 + 0x1c);
  FID_conflict__memcpy(param_1 + 0x10,(void *)(param_4 + 0x20),0x40);
  param_1[0x20] = *(undefined4 *)(param_4 + 0x60);
  param_1[0x24] = *param_5;
  param_1[0x25] = param_5[1];
  param_1[0x26] = param_5[2];
  param_1[0x27] = param_5[3];
  FUN_009003e0();
  param_1[0x2c] = 0;
  FUN_00a7c930();
  param_1[0x30] = 0;
  return param_1;
}

// 00C50620  NinjaRunEventManagerImplement::PointUnit::vf04  size=31  [class]
undefined4 * __thiscall
NinjaRunEventManagerImplement::PointUnit::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = PhantomUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C50640  NinjaRunEventManagerImplement::vf08  size=1449  [class]
void __thiscall NinjaRunEventManagerImplement::vf08(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 uStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined1 auStack_cc [4];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0xc) != -1) {
    uVar3 = FUN_00c42e50(*(int *)(param_1 + 0xc),param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    iVar4 = FUN_00c2cbd0(*(undefined4 *)(param_1 + 0xc),uVar3);
    if ((iVar4 != 0) &&
       (piVar6 = *(int **)(*(int *)(iVar4 + 0x170) + 4),
       piVar6 != piVar6 + *(int *)(*(int *)(iVar4 + 0x170) + 8))) {
      do {
        iVar1 = *piVar6;
        if ((*(int *)(iVar1 + 0x170) == 0) &&
           ((((*(byte *)(iVar1 + 0xc0) & 0x10) == 0 ||
             ((*(uint *)(iVar1 + 0x160) & DAT_01b7b914) != 0)) && (*(int *)(iVar1 + 0x80) != 0)))) {
          local_a0 = *(undefined4 *)(iVar1 + 0x70);
          local_9c = *(undefined4 *)(iVar1 + 0x74);
          local_98 = *(undefined4 *)(iVar1 + 0x78);
          local_94 = *(undefined4 *)(iVar1 + 0x7c);
          local_f0 = 1.0;
          local_fc = 1.0;
          local_d8 = 1.0;
          local_ec = 0.0;
          local_e8 = 0.0;
          local_100 = 0.0;
          local_f8 = 0.0;
          local_e0 = 0.0;
          local_dc = 0.0;
          local_ac = SQRT(*(float *)(iVar4 + 0x44) * *(float *)(iVar4 + 0x44) +
                          *(float *)(iVar4 + 0x40) * *(float *)(iVar4 + 0x40) +
                          *(float *)(iVar4 + 0x48) * *(float *)(iVar4 + 0x48));
          local_a8 = SQRT(*(float *)(iVar4 + 0x50) * *(float *)(iVar4 + 0x50) +
                          *(float *)(iVar4 + 0x54) * *(float *)(iVar4 + 0x54) +
                          *(float *)(iVar4 + 0x58) * *(float *)(iVar4 + 0x58));
          fVar2 = SQRT(*(float *)(iVar4 + 0x68) * *(float *)(iVar4 + 0x68) +
                       *(float *)(iVar4 + 100) * *(float *)(iVar4 + 100) +
                       *(float *)(iVar4 + 0x60) * *(float *)(iVar4 + 0x60));
          local_c4 = *(float *)(iVar4 + 0x58) / fVar2;
          local_c8 = *(float *)(iVar4 + 0x68) / fVar2;
          fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x48) / fVar2));
          fVar8 = (float10)fpatan((float10)local_c4,(float10)local_c8);
          local_c0 = (float)fVar8;
          local_bc = (float)fVar7;
          fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x44) / (float10)local_a8,
                                  (float10)*(float *)(iVar4 + 0x40) / (float10)local_ac);
          local_b8 = (float)fVar7;
          FUN_00ddc1d0(local_50,&local_c0,5);
          D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
          FUN_00ddc1d0(&fStack_5c,auStack_cc,5);
          D3DXVec3TransformNormal(&stack0xfffffef4,&stack0xfffffef4,&fStack_5c);
          FUN_00ddc1d0(&fStack_68,&local_d8,5);
          D3DXVec3TransformNormal(&local_f8,&local_f8,&fStack_68);
          if (((local_f0 != 0.0) || (local_ec != 0.0)) || (local_e8 != 0.0)) {
            fVar2 = local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec;
            if (fVar2 < 0.0 == (fVar2 == 0.0)) {
              FUN_00ddf460(&local_f0,&local_f0);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              local_f0 = 0.0;
              local_ec = 1.0;
              local_e8 = 0.0;
            }
          }
          if (((local_100 != 0.0) || (local_fc != 0.0)) || (local_f8 != 0.0)) {
            fVar2 = local_f8 * local_f8 + local_100 * local_100 + local_fc * local_fc;
            if (fVar2 < 0.0 == (fVar2 == 0.0)) {
              FUN_00ddf460(&local_100,&local_100);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              local_100 = 0.0;
              local_fc = 1.0;
              local_f8 = 0.0;
            }
          }
          if (((local_e0 != 0.0) || (local_dc != 0.0)) || (local_d8 != 0.0)) {
            fVar2 = local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc;
            if (fVar2 < 0.0 == (fVar2 == 0.0)) {
              FUN_00ddf460(&local_e0,&local_e0);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              local_e0 = 0.0;
              local_dc = 1.0;
              local_d8 = 0.0;
            }
          }
          fStack_90 = local_f0;
          fStack_8c = local_ec;
          fStack_88 = local_e8;
          uStack_84 = uStack_e4;
          fStack_78 = local_f8;
          uStack_74 = uStack_f4;
          uStack_64 = uStack_d4;
          fStack_60 = *(float *)(iVar1 + 0x90) * 0.5;
          fStack_5c = *(float *)(iVar1 + 0x94) * 0.5;
          fStack_58 = *(float *)(iVar1 + 0x98) * 0.5;
          fStack_80 = local_100;
          fStack_7c = local_fc;
          fStack_70 = local_e0;
          fStack_6c = local_dc;
          fStack_68 = local_d8;
          iVar5 = FUN_00d91d90(param_3,0x3eb33333,&local_a0);
          if (iVar5 != 0) {
            iVar4 = *(int *)(iVar1 + 0xe4);
            param_2[2] = iVar1 + 0xf0;
            param_2[1] = iVar4;
            *param_2 = iVar1 + 0x20;
            return;
          }
        }
        piVar6 = piVar6 + 1;
        if (piVar6 == (int *)(*(int *)(*(int *)(iVar4 + 0x170) + 4) +
                             *(int *)(*(int *)(iVar4 + 0x170) + 8) * 4)) {
          param_2[1] = 0;
          param_2[2] = 0;
          *param_2 = 0;
          return;
        }
      } while( true );
    }
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}

// 00C5EC40  NinjaRunEventManagerImplement::RegionUnit::vf04  size=31  [class]
undefined4 * __thiscall
NinjaRunEventManagerImplement::RegionUnit::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = PhantomUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5EC60  NinjaRunEventManagerImplement::RegionUnit::vf00  size=118  [class]
void __fastcall NinjaRunEventManagerImplement::RegionUnit::vf00(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1[0x5c] + 4);
  if (puVar1 != puVar1 + *(int *)(param_1[0x5c] + 8)) {
    do {
      (*(code *)**(undefined4 **)*puVar1)();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1[0x5c] + 4) + *(int *)(param_1[0x5c] + 8) * 4)
            );
  }
  if (*(int *)(param_1[0x5c] + 4) != 0) {
    *(undefined4 *)(param_1[0x5c] + 8) = 0;
  }
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5c])(1);
    param_1[0x5c] = 0;
  }
  FUN_00900ca0();
  (**(code **)(*param_1 + 4))(1);
  return;
}

// 00C5ECE0  NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit_2  size=136  [class]
undefined4 * __thiscall
NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = vftable;
  param_1[4] = param_3;
  FUN_00a7c930();
  FUN_009003e0();
  FUN_00a7c930();
  param_1[0x30] = 0;
  *param_1 = EventUnit::vftable;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_2);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = lib::AllocatedArray<NinjaRunEventManagerImplement::RegionUnit*>::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  param_3 = param_2;
  FUN_00c5ce90(0x10,&param_3);
  param_1[0x5c] = puVar2;
  return param_1;
}

// 00C5ED80  NinjaRunEventManagerImplement::EventUnit::vf04  size=31  [class]
undefined4 * __thiscall
NinjaRunEventManagerImplement::EventUnit::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = PhantomUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5EDA0  NinjaRunEventManagerImplement::EventUnit::vf00  size=107  [class]
void __fastcall NinjaRunEventManagerImplement::EventUnit::vf00(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1[0x5c] + 4);
  if (puVar1 != puVar1 + *(int *)(param_1[0x5c] + 8)) {
    do {
      (*(code *)**(undefined4 **)*puVar1)();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1[0x5c] + 4) + *(int *)(param_1[0x5c] + 8) * 4)
            );
  }
  if (*(int *)(param_1[0x5c] + 4) != 0) {
    *(undefined4 *)(param_1[0x5c] + 8) = 0;
  }
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5c])(1);
    param_1[0x5c] = 0;
  }
  (**(code **)(*param_1 + 4))(1);
  return;
}

// 00C5EE70  NinjaRunEventManagerImplement::PointUnit::PointUnit  size=403  [class]
undefined4 __thiscall
NinjaRunEventManagerImplement::PointUnit::PointUnit
          (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 *param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EDI;
  undefined4 *puStack_44;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puStack_44 = param_3;
  iVar2 = FUN_00c2cbd0(param_2);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x170) == 0) {
      puStack_44 = *(undefined4 **)(param_1 + 4);
      puVar3 = (undefined4 *)FUN_00dd3500(0x18);
      if (puVar3 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = lib::AllocatedArray<NinjaRunEventManagerImplement::PointUnit*>::vftable;
      puVar3[4] = 0;
      puStack_44 = &local_24;
      puVar3[5] = 0;
      local_24 = *(undefined4 *)(param_1 + 4);
      FUN_00c5cd90(8);
      *(undefined4 **)(iVar2 + 0x170) = puVar3;
    }
    puStack_44 = *(undefined4 **)(param_1 + 4);
    puVar3 = (undefined4 *)FUN_00dd3500(0x180);
    if (puVar3 != (undefined4 *)0x0) {
      puStack_44 = param_6;
      PhantomUnit::PhantomUnit(*(undefined4 *)(param_1 + 4),param_4,param_5);
      *puVar3 = vftable;
      puVar3[0x5c] = 0;
      puVar3[0x2c] = iVar2;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      puStack_44 = (undefined4 *)0xc5ef51;
      piVar4 = (int *)FUN_00900480();
      puStack_44 = (undefined4 *)0x1;
      uVar5 = (**(code **)(*piVar4 + 8))(&local_20,&local_20,param_6,0x1f,0);
      lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar5);
      puVar3 = puStack_44;
      iVar2 = puStack_44[0x28];
      if (iVar2 != 0) {
        FUN_004066f0();
        uVar6 = *(uint *)(iVar2 + 0xc);
        uVar6 = -(uint)(uVar6 != 0) & uVar6;
        puVar1 = (uint *)(uVar6 + 4);
        *puVar1 = *puVar1 | 0x10;
        *(undefined4 **)(uVar6 + 0x98) = puVar3;
        if (DAT_01885d68 != 1) {
          piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar4 = *piVar4 + -1;
          if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      (**(code **)(**(int **)(unaff_EDI + 0x170) + 8))(&puStack_44);
      return param_4;
    }
  }
  return 0xffffffff;
}

// 00C5F1C0  NinjaRunEventManagerImplement::vf24  size=82  [class]
undefined4 __thiscall NinjaRunEventManagerImplement::vf24(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = param_1;
  iVar1 = FUN_00dd3500(0x180,*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    local_4 = PhantomUnit::PhantomUnit_2(*(undefined4 *)(param_1 + 4),param_2);
    if (local_4 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(&local_4);
      return param_2;
    }
  }
  return 0xffffffff;
}

// 00C629A0  NinjaRunEventManagerImplement::vf1C  size=4  [class]
undefined4 __fastcall NinjaRunEventManagerImplement::vf1C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00C629B0  NinjaRunEventManagerImplement::vf20  size=4  [class]
undefined4 __fastcall NinjaRunEventManagerImplement::vf20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

