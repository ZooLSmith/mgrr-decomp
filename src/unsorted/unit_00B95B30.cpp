// src/unsorted/unit_00B95B30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B95B30..00B96B30, 9 functions

#include "mgrr.h"

// 00B95B30  FUN_00b95b30  size=753  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b95b30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined1 auStack_20 [28];
  
  if (*(undefined4 **)(param_1 + 2000) != (undefined4 *)0x0) {
    puVar5 = &DAT_01be9ef4;
    (**(code **)**(undefined4 **)(param_1 + 2000))(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        FUN_00aa5a70(*(int *)(param_1 + 17000) + iVar2);
        iVar2 = iVar2 + 0x70;
      } while (iVar2 < 0xd20);
    }
  }
  if ((*(int *)(param_1 + 0x764) != 0) && ((DAT_01bea060 & 0x80000) == 0)) {
    FUN_00d83610();
    *(undefined4 *)(param_1 + 0x4fa8) = *(undefined4 *)(param_1 + 0x40d4);
    *(undefined4 *)(param_1 + 0x4fac) = *(undefined4 *)(param_1 + 0x5070);
    *(undefined4 *)(param_1 + 0x4fb0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x4fb4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x4fb8) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x4fbc) = *(undefined4 *)(param_1 + 0x4c);
    puVar3 = (undefined4 *)FUN_00a926e0(auStack_20);
    *(undefined4 *)(param_1 + 0x4fc0) = *puVar3;
    *(undefined4 *)(param_1 + 0x4fc4) = puVar3[1];
    *(undefined4 *)(param_1 + 0x4fc8) = puVar3[2];
    *(undefined4 *)(param_1 + 0x4fcc) = puVar3[3];
    puVar3 = (undefined4 *)FUN_00a925a0(auStack_20);
    *(undefined4 *)(param_1 + 0x4fd0) = *puVar3;
    *(undefined4 *)(param_1 + 0x4fd4) = puVar3[1];
    *(undefined4 *)(param_1 + 0x4fd8) = puVar3[2];
    *(undefined4 *)(param_1 + 0x4fdc) = puVar3[3];
    puVar3 = (undefined4 *)FUN_00a92640(auStack_20);
    *(undefined4 *)(param_1 + 0x4fe0) = *puVar3;
    *(undefined4 *)(param_1 + 0x4fe4) = puVar3[1];
    *(undefined4 *)(param_1 + 0x4fe8) = puVar3[2];
    *(undefined4 *)(param_1 + 0x4fec) = puVar3[3];
    puVar3 = (undefined4 *)FUN_009f8b60();
    *(undefined4 *)(param_1 + 0x4ff0) = *puVar3;
    fVar4 = (float10)hkBaseObject::hkBaseObject_209();
    *(float *)(param_1 + 0x4ff8) = (float)fVar4;
    fVar4 = (float10)FUN_008e0e30();
    *(float *)(param_1 + 0x4ffc) = (float)fVar4;
    *(undefined4 *)(param_1 + 0x4ff4) = *(undefined4 *)(*(int *)(param_1 + 0x764) + 0xfc);
    *(undefined4 *)(param_1 + 0x5050) = *(undefined4 *)(param_1 + 0x4230);
    *(undefined4 *)(param_1 + 0x5054) = *(undefined4 *)(param_1 + 0x4234);
    *(undefined4 *)(param_1 + 0x5058) = *(undefined4 *)(param_1 + 0x4238);
    *(undefined4 *)(param_1 + 0x505c) = *(undefined4 *)(param_1 + 0x423c);
    *(undefined4 *)(param_1 + 0x5060) = *(undefined4 *)(param_1 + 0x26c0);
    iVar2 = FUN_00a12290(0);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x5000) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x5004) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x5008) = *(undefined4 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
    }
    else {
      *(undefined4 *)(param_1 + 0x5000) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(param_1 + 0x5004) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(param_1 + 0x5008) = *(undefined4 *)(iVar2 + 0x48);
      uVar1 = *(undefined4 *)(iVar2 + 0x4c);
    }
    *(undefined4 *)(param_1 + 0x500c) = uVar1;
    iVar2 = FUN_00a12290(0xd);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x5010) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x5014) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x5018) = *(undefined4 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
    }
    else {
      *(undefined4 *)(param_1 + 0x5010) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(param_1 + 0x5014) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(param_1 + 0x5018) = *(undefined4 *)(iVar2 + 0x48);
      uVar1 = *(undefined4 *)(iVar2 + 0x4c);
    }
    *(undefined4 *)(param_1 + 0x501c) = uVar1;
    iVar2 = FUN_00a12290(9);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x5020) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x5024) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x5028) = *(undefined4 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
    }
    else {
      *(undefined4 *)(param_1 + 0x5020) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(param_1 + 0x5024) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(param_1 + 0x5028) = *(undefined4 *)(iVar2 + 0x48);
      uVar1 = *(undefined4 *)(iVar2 + 0x4c);
    }
    *(undefined4 *)(param_1 + 0x502c) = uVar1;
    if ((DAT_01bea060 & 0x100000) == 0) {
      iVar2 = FUN_00a8cab0();
      if ((iVar2 == 0x47) || ((_DAT_01b7b910 & 0x4000) != 0)) {
        FUN_00d89720();
      }
    }
  }
  return;
}

// 00B95E30  FUN_00b95e30  size=36  [run]
undefined4 __fastcall FUN_00b95e30(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x40d4) + 0x14c);
  if (fVar1 * fVar1 < *(float *)(param_1 + 0xd28)) {
    return 1;
  }
  return 0;
}

// 00B95E60  FUN_00b95e60  size=22  [run]
void FUN_00b95e60(void)

{
  undefined1 local_20 [28];
  
  FUN_00b8afd0(local_20);
  return;
}

// 00B95E80  FUN_00b95e80  size=70  [run]
bool __fastcall FUN_00b95e80(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe48)) == 0) {
    return false;
  }
  iVar1 = FUN_00b8b920();
  if (iVar1 != 0) {
    return (bool)3;
  }
  iVar1 = FUN_00b8b9c0();
  if (iVar1 != 0) {
    return (bool)4;
  }
  iVar1 = FUN_00b8b840();
  return iVar1 != 0;
}

// 00B95ED0  FUN_00b95ed0  size=232  [run]
void __fastcall FUN_00b95ed0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    uVar3 = 0x3ee;
    if (param_1[0x2dd] == 0) {
      if (DAT_01bea024 == 0xe) {
        uVar3 = 0x3ef;
      }
    }
    else {
      uVar3 = 0x3ed;
    }
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x24] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x2dd] = 1;
    pcVar1 = *(code **)(*param_1 + 0x39c);
    param_1[0x988] = 0;
    (*pcVar1)();
    FUN_00b88400();
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x23,0,0,0);
  }
  return;
}

// 00B95FD0  FUN_00b95fd0  size=134  [run]
void __fastcall FUN_00b95fd0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x3f0,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 00B96060  FUN_00b96060  size=269  [run]
void __fastcall FUN_00b96060(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x3f1,0,0x3ed55555,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    fVar2 = (float10)FUN_00dde300(0,0x42700000);
    param_1[0x248] = (int)(float)(fVar2 + (float10)60.0);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    return;
  case 2:
    FUN_00aa4080(0x3f2,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0;
      return;
    }
  default:
    return;
  }
}

// 00B96180  FUN_00b96180  size=2129  [run]
void __fastcall FUN_00b96180(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined2 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = (float)param_1[0x342];
  local_1c = (float)param_1[0x343];
  local_18 = 0.0;
  bVar4 = 40000.0 <= local_1c * local_1c + local_20 * local_20;
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x3f3,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    if ((DAT_01bea094 & 0x100000) == 0) {
      FUN_00aa4080(0x3f3,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    }
    else {
      FUN_00a9f4c0("COMU WALK",0x3e088889,0x8000000,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x3f1,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x3f3,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x3f4,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,1,0,0,0x3f6,0x3e088889,0x8000000);
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x3f5,0x3e088889,0x8000000);
    }
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0;
    param_1[0x24b] = 0;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((DAT_01bea094 & 0x100000) != 0) {
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      if (bVar4) {
        fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_30,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_28 = 0.0;
          fStack_2c = 1.0;
          fStack_30 = 0.0;
        }
        fStack_30 = fStack_30 * 1000.0;
        fStack_2c = fStack_2c * 1000.0;
        fStack_28 = fStack_28 * 1000.0;
        fStack_24 = fStack_24 * 1000.0;
      }
      fVar1 = (fStack_30 * 0.001 - (float)param_1[0x24a]) * 0.3 + (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar1;
      fVar2 = (fStack_2c * -0.001 - (float)param_1[0x24b]) * 0.3 + (float)param_1[0x24b];
      param_1[0x24b] = (int)fVar2;
      FUN_00a947e0(0,fVar1,0,fVar2);
      goto switchD_00b961e8_default;
    }
    goto LAB_00b9698c;
  case 2:
    if ((DAT_01bea094 & 0x100000) == 0) {
      FUN_00aa4080(0x3f9,0,0,0x3f800000,0,0,0x3f800000);
    }
    else {
      FUN_00a9f4c0("COMU WALK",0x3e088889,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x3f1,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x3f9,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x3fb,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,1,0,0,0x3fd,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x3fc,0x3e088889,0);
    }
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x249] = 0;
    goto LAB_00b9661a;
  case 3:
LAB_00b9661a:
    if ((float)param_1[0x34a] <= 810000.0) {
      param_1[0x248] = (int)((1.0 - (float)param_1[0x248]) * 0.1 + (float)param_1[0x248]);
      fVar1 = -(float)param_1[0x249];
    }
    else {
      param_1[0x248] = (int)((1.5 - (float)param_1[0x248]) * 0.1 + (float)param_1[0x248]);
      fVar1 = 1.0 - (float)param_1[0x249];
    }
    param_1[0x249] = (int)(fVar1 * 0.1 + (float)param_1[0x249]);
    if ((DAT_01bea094 & 0x100000) != 0) {
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      if (bVar4) {
        fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_30,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_28 = 0.0;
          fStack_2c = 1.0;
          fStack_30 = 0.0;
        }
        fStack_30 = fStack_30 * 1000.0;
        fStack_2c = fStack_2c * 1000.0;
        fStack_28 = fStack_28 * 1000.0;
        fStack_24 = fStack_24 * 1000.0;
      }
      fVar2 = (fStack_30 * 0.001 - (float)param_1[0x24a]) * 0.3 + (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar2;
      fVar1 = (fStack_2c * -0.001 - (float)param_1[0x24b]) * 0.3 + (float)param_1[0x24b];
      param_1[0x24b] = (int)fVar1;
      FUN_00a947e0(0,fVar2,0,fVar1);
    }
    break;
  case 4:
    FUN_00aa4080(0x3f9,0,0x3e088889,0x3f800000,0,0,0x3f800000);
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  case 6:
    uVar6 = 0x3fa;
    iVar5 = FUN_00a94ee0(0,0,0x2f);
    if (iVar5 != 0) {
      uVar6 = 0x3f7;
    }
    FUN_00aa4080(uVar6,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    if ((DAT_01bea094 & 0x100000) != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      FUN_0041cc40(uVar8);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0x23,0,0,0);
    }
  default:
    goto switchD_00b961e8_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
switchD_00b961e8_default:
  if ((DAT_01bea094 & 0x100000) == 0) {
LAB_00b9698c:
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x23d] = param_1[0x34c];
    (*pcVar3)(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  else {
    if ((200.0 < (float)param_1[0x344]) || ((float)param_1[0x344] < -200.0)) {
      fVar1 = (float)param_1[0x344];
      fVar2 = (float)param_1[0xd01];
      fVar7 = (float10)FUN_00da7570();
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] -
                                           fVar7 * (float10)((fVar1 - 200.0) * 0.00125 * fVar2)));
      param_1[0x25] = (int)(float)fVar7;
    }
    if (bVar4) {
      FUN_00b7cf60((float)param_1[0xd00] * (float)param_1[0x244],param_1[0x34c]);
      return;
    }
  }
  return;
}

// 00B96B30  FUN_00b96b30  size=147  [run]
void __fastcall FUN_00b96b30(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  FUN_00da8810(0x41f00000);
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x380c) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x3814) = 0;
  FUN_00a7c950();
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  FUN_00a7c950();
  FUN_00b90990();
  FUN_00e5e0c0("core_se_btl_qte_out",param_1,0xffffffff,0);
  return;
}

