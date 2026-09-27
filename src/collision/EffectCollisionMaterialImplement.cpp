// src/collision/EffectCollisionMaterialImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FE980..00900280, 7 functions

#include "mgrr.h"
#include "EffectCollisionMaterialImplement.h"

// 008FE980  EffectCollisionMaterialImplement::vf04  size=1  [class]
void EffectCollisionMaterialImplement::vf04(void)

{
  return;
}

// 008FEC00  FUN_008fec00  size=120  [callgraph]
void __fastcall FUN_008fec00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 != piVar2 + *(int *)(iVar1 + 8)) {
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          if (*(undefined4 **)(iVar1 + 0x1c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar1 + 0x1c))(1);
            *(undefined4 *)(iVar1 + 0x1c) = 0;
          }
          FUN_00dd4920(iVar1);
          *piVar2 = 0;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) +
                                *(int *)(*(int *)(param_1 + 0x1c) + 8) * 4));
    }
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}

// 008FEC80  EffectCollisionMaterialImplement::vf00  size=314  [class]
undefined4 __thiscall
EffectCollisionMaterialImplement::vf00
          (undefined4 *param_1,uint *param_2,uint *param_3,int param_4,float param_5,int param_6,
          int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = param_1[8];
  piVar5 = *(int **)(iVar2 + 4);
  if (piVar5 != piVar5 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar5 + *(int *)(iVar2 + 8);
    do {
      piVar3 = (int *)*piVar5;
      if (*piVar3 == param_4) {
        iVar2 = piVar3[7];
        if (iVar2 != 0) {
          piVar5 = *(int **)(iVar2 + 4);
          if (piVar5 != piVar5 + *(int *)(iVar2 + 8) * 2) {
            piVar1 = piVar5 + *(int *)(iVar2 + 8) * 2;
            do {
              if (*piVar5 == param_6) {
                *param_3 = piVar5[1] & 0xffff;
                *param_2 = piVar5[1] & 0xffff0000;
                return 1;
              }
              piVar5 = piVar5 + 2;
            } while (piVar5 != piVar1);
          }
        }
        if (param_5 < (float)param_1[7] == (param_5 == (float)param_1[7])) {
          if (param_5 < (float)param_1[2] == (param_5 == (float)param_1[2])) {
            if (param_5 < (float)param_1[3] == (param_5 == (float)param_1[3])) {
              if (param_5 < (float)param_1[4] == (param_5 == (float)param_1[4])) {
                if (param_5 < (float)param_1[5] == (param_5 == (float)param_1[5])) {
                  uVar6 = piVar3[5];
                }
                else {
                  uVar6 = piVar3[4];
                }
              }
              else {
                uVar6 = piVar3[3];
              }
            }
            else {
              uVar6 = piVar3[2];
            }
          }
          else {
            uVar6 = piVar3[1];
          }
        }
        else {
          uVar6 = piVar3[6];
        }
        *param_3 = uVar6 & 0xffff;
        *param_2 = uVar6 & 0xffff0000;
        return 1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
  }
  if (param_7 != 0) {
    uVar4 = (**(code **)*param_1)(param_2,param_3,0xffffffff,param_5,param_6,0);
    return uVar4;
  }
  return 0;
}

// 00900130  FUN_00900130  size=135  [callgraph]
undefined4 __fastcall FUN_00900130(int param_1)

{
  char cVar1;
  int iVar2;
  int local_74 [29];
  
  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
  iVar2 = FUN_00de4550("effectCollision.bxm",0);
  if (iVar2 != 0) {
    FUN_00e91420(iVar2);
    cVar1 = (**(code **)(local_74[0] + 0x10))(&DAT_0164a448,0);
    FUN_009000c0(local_74,"effectCollision",param_1 + 4);
    if (cVar1 != '\0') {
      (**(code **)(local_74[0] + 0x14))(&DAT_0164a448,0);
    }
  }
  cXml::cXml_5();
  return 1;
}

// 009001C0  EffectCollisionMaterialImplement::EffectCollisionMaterialImplement  size=18  [class]
undefined4 * __fastcall
EffectCollisionMaterialImplement::EffectCollisionMaterialImplement(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00900130();
  return param_1;
}

// 00900200  EffectCollisionMaterialImplement::vf08  size=45  [class]
undefined4 * __thiscall EffectCollisionMaterialImplement::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_008fec00();
  *param_1 = EffectCollisionMaterial::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00900280  EffectCollisionMaterialImplement::EffectCollisionMaterialImplement_2  size=65  [class]
undefined4 EffectCollisionMaterialImplement::EffectCollisionMaterialImplement_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x24,&DAT_01b7bd48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    FUN_00900130();
    DAT_01b35dbc = puVar1;
    return 1;
  }
  DAT_01b35dbc = (undefined4 *)0x0;
  return 1;
}

