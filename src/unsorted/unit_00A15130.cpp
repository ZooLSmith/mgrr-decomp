// src/unsorted/unit_00A15130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A15130..00A15760, 5 functions

#include "mgrr.h"

// 00A15130  FUN_00a15130  size=40  [run]
undefined4 __fastcall FUN_00a15130(int param_1)

{
  undefined4 extraout_ECX;
  
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_00a06cd0();
  return extraout_ECX;
}

// 00A15160  FUN_00a15160  size=40  [run]
void FUN_00a15160(void)

{
  int extraout_ECX;
  
  FUN_00a06cd0();
  *(undefined4 *)(extraout_ECX + 0xe0) = 0;
  *(undefined4 *)(extraout_ECX + 0xe4) = 0;
  *(undefined4 *)(extraout_ECX + 0xe8) = 0;
  *(undefined4 *)(extraout_ECX + 0xec) = 0;
  *(undefined4 *)(extraout_ECX + 0xf0) = 0;
  return;
}

// 00A15190  FUN_00a15190  size=375  [run]
void __fastcall FUN_00a15190(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    FID_conflict__memcpy(&local_a0,(void *)(param_1 + 0x10),0x40);
  }
  else {
    D3DXMatrixInverse(local_50,0,*(int *)(param_1 + 0xa8) + 0x10);
    D3DXMatrixMultiply(&stack0xffffff54,param_1 + 0x10,&fStack_5c);
  }
  *(undefined4 *)(param_1 + 0x50) = local_70;
  *(undefined4 *)(param_1 + 0x54) = local_6c;
  *(undefined4 *)(param_1 + 0x58) = local_68;
  *(undefined4 *)(param_1 + 0x5c) = local_64;
  fStack_5c = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
  fStack_58 = SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c);
  fVar2 = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c);
  fVar3 = fStack_88 / fVar2;
  fVar1 = fStack_78 / fVar2;
  fVar4 = (float10)FUN_00ddbaa0(-(local_98 / fVar2));
  fVar5 = (float10)fpatan((float10)fVar3,(float10)fVar1);
  *(float *)(param_1 + 0x90) = (float)fVar5;
  *(float *)(param_1 + 0x94) = (float)fVar4;
  fVar4 = (float10)local_9c;
  fVar5 = (float10)local_a0;
  fVar6 = (float10)fpatan(fVar4 / (float10)fStack_58,fVar5 / (float10)fStack_5c);
  *(float *)(param_1 + 0x98) = (float)fVar6;
  *(float *)(param_1 + 0x70) =
       (float)SQRT((float10)local_98 * (float10)local_98 + fVar5 * fVar5 + fVar4 * fVar4);
  *(float *)(param_1 + 0x74) =
       SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c);
  *(float *)(param_1 + 0x78) =
       SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c);
  FUN_00ddb590(param_1 + 0x60,(float *)(param_1 + 0x90));
  return;
}

// 00A15310  FUN_00a15310  size=1095  [run]
void __fastcall FUN_00a15310(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *in_stack_ffffff0c;
  undefined4 *in_stack_ffffff10;
  float local_b4;
  undefined1 local_b0 [8];
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [100];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar6 = *(int *)(param_1 + 0xa8);
    puVar8 = (undefined4 *)(iVar6 + 0x10);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x70) * *(float *)(iVar6 + 0x80);
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x74) * *(float *)(iVar6 + 0x84);
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x78) * *(float *)(iVar6 + 0x88);
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x7c) * *(float *)(iVar6 + 0x8c);
    if ((*(ushort *)(param_1 + 0xa2) & 0x2000) == 0) {
      puVar1 = (undefined4 *)(param_1 + 0x10);
      if ((*(ushort *)(param_1 + 0xa2) & 1) == 0) {
        D3DXMatrixRotationQuaternion();
        FUN_00ddd140();
        D3DXMatrixMultiply(puVar1);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
        puVar7 = puVar1;
      }
      else {
        iVar6 = *(int *)(param_1 + 0xa8);
        fVar2 = *(float *)(iVar6 + 0x84);
        fVar3 = *(float *)(iVar6 + 0x88);
        D3DXVec3TransformNormal();
        if (puVar1 != (undefined4 *)(iVar6 + 0x10)) {
          FID_conflict__memcpy(puVar1,(undefined4 *)(iVar6 + 0x10),0x40);
        }
        *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 1.0 / fVar2;
        *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + 1.0 / fVar3;
        *(float *)(param_1 + 0x48) = local_b4 + *(float *)(param_1 + 0x48);
        FUN_00ddd140(&uStack_9c);
        D3DXMatrixMultiply(puVar1,&uStack_9c);
        uStack_70 = 0;
        uStack_74 = 0;
        uStack_78 = 0;
        uStack_7c = 0;
        uStack_84 = 0;
        uStack_88 = 0;
        uStack_8c = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_9c = 0;
        uStack_a0 = 0;
        local_a4 = 0;
        uStack_6c = 0x3f800000;
        uStack_80 = 0x3f800000;
        local_94 = 0x3f800000;
        uStack_a8 = 0x3f800000;
        if (*(float *)(param_1 + 0x98) != 0.0) {
          D3DXMatrixRotationZ(auStack_68,*(undefined4 *)(param_1 + 0x98));
          D3DXMatrixMultiply(local_b0,&uStack_70,local_b0);
        }
        if (*(float *)(param_1 + 0x94) != 0.0) {
          D3DXMatrixRotationY(auStack_68,*(undefined4 *)(param_1 + 0x94));
          D3DXMatrixMultiply(local_b0,&uStack_70,local_b0);
        }
        if (*(float *)(param_1 + 0x90) != 0.0) {
          D3DXMatrixRotationX(auStack_68,*(undefined4 *)(param_1 + 0x90));
          D3DXMatrixMultiply(local_b0,&uStack_70,local_b0);
        }
        in_stack_ffffff10 = &uStack_a8;
        in_stack_ffffff0c = puVar1;
        D3DXMatrixMultiply(puVar1,in_stack_ffffff10,puVar1);
        FUN_00ddd140(&uStack_74,param_1 + 0x80);
        puVar7 = &uStack_74;
        puVar8 = puVar1;
      }
      D3DXMatrixMultiply(puVar1,puVar7);
    }
    else {
      puVar1 = (undefined4 *)(param_1 + 0x10);
      local_94 = *(undefined4 *)(iVar6 + 0x34);
      local_98 = *(undefined4 *)(iVar6 + 0x38);
      D3DXMatrixRotationQuaternion();
      FUN_00ddd140();
      D3DXMatrixMultiply(puVar1);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
      in_stack_ffffff10 = puVar1;
      D3DXMatrixMultiply(puVar1,puVar1,puVar8);
      puVar7 = (undefined4 *)&stack0xffffff20;
      in_stack_ffffff0c = puVar8;
      D3DXVec3TransformNormal(&stack0xffffff30);
      fVar2 = *(float *)(iVar6 + 0x44);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(param_1 + 0x40) = (float)puVar1 + *(float *)(iVar6 + 0x40);
      *(float *)(param_1 + 0x44) = fVar2 + (float)puVar1;
      *(float *)(param_1 + 0x48) = fVar3 + (float)(param_1 + 0x60);
      puVar8 = puVar7;
    }
    iVar4 = param_1 + 0x10;
    iVar6 = *(int *)(param_1 + 0xa4);
    if (iVar6 != 0) {
      iVar5 = iVar4;
      if ((*(byte *)(param_1 + 0xa2) & 0x40) != 0) {
        iVar5 = iVar6;
        iVar6 = iVar4;
      }
      D3DXMatrixMultiply(iVar4,iVar5,iVar6);
      *(undefined4 **)(param_1 + 0x40) = puVar8;
      *(undefined4 **)(param_1 + 0x44) = in_stack_ffffff0c;
      *(undefined4 **)(param_1 + 0x48) = in_stack_ffffff10;
    }
    return;
  }
  D3DXMatrixRotationQuaternion();
  FUN_00ddd140();
  D3DXMatrixMultiply(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x7c);
  return;
}

// 00A15760  FUN_00a15760  size=313  [run]
void __thiscall FUN_00a15760(int *param_1,void *param_2)

{
  undefined4 *_Src;
  int iVar1;
  int local_9c;
  int local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar1 = 0;
  if (0 < (short)param_1[2]) {
    local_98 = 0;
    local_9c = 0;
    do {
      _Src = (undefined4 *)(local_9c + 0x10 + *param_1);
      D3DXVec3TransformNormal(&local_20,param_1[3] + local_98,_Src);
      if (&uStack_60 != _Src) {
        FID_conflict__memcpy(&uStack_60,_Src,0x40);
      }
      fStack_84 = fStack_30 + local_20;
      fStack_74 = fStack_2c + fStack_1c;
      fStack_64 = fStack_28 + fStack_18;
      uStack_90 = uStack_60;
      uStack_8c = uStack_50;
      uStack_88 = uStack_40;
      uStack_80 = uStack_5c;
      uStack_7c = uStack_4c;
      uStack_78 = uStack_3c;
      uStack_70 = uStack_58;
      uStack_6c = uStack_48;
      uStack_68 = uStack_38;
      fStack_30 = fStack_84;
      fStack_2c = fStack_74;
      fStack_28 = fStack_64;
      FID_conflict__memcpy(param_2,&uStack_90,0x30);
      local_9c = local_9c + 0xb0;
      local_98 = local_98 + 0x10;
      iVar1 = iVar1 + 1;
      param_2 = (void *)((int)param_2 + 0x30);
    } while (iVar1 < (short)param_1[2]);
  }
  return;
}

