// src/misc/cItemViscelaBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E8FC0..00ABABA0, 14 functions

#include "mgrr.h"
#include "cItemViscelaBase.h"

// 005E8FC0  FUN_005e8fc0  size=328  [callgraph]
void __fastcall FUN_005e8fc0(int *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  float10 fVar4;
  
  if (param_1[0x24e] == 0) {
    iVar2 = FUN_0094ab80();
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x300))(), iVar2 != 0)) {
      fVar4 = (float10)FUN_00a92ff0();
      fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x24a];
      param_1[0x24a] = (int)(float)fVar4;
      if ((float10)*(float *)param_1[0x24c] < fVar4) {
        fVar4 = (float10)FUN_00a92ff0();
        fVar1 = (float)param_1[0x24b];
        param_1[0x24b] = (int)(float)(fVar4 + (float10)fVar1);
        if ((float10)*(float *)(param_1[0x24c] + 8) < fVar4 + (float10)fVar1) {
          param_1[0x24b] = 0;
          if ((char)param_1[0x251] == '\x01') {
            pcVar3 = *(code **)(*param_1 + 0x30c);
            *(undefined1 *)(param_1 + 0x251) = 0;
            (*pcVar3)();
            pcVar3 = *(code **)(*param_1 + 0x1c);
          }
          else {
            *(undefined1 *)(param_1 + 0x251) = 1;
            (**(code **)(*param_1 + 0x310))();
            pcVar3 = *(code **)(*param_1 + 0x20);
          }
          (*pcVar3)();
        }
      }
      if ((float)param_1[0x24a] <= *(float *)(param_1[0x24c] + 4)) {
        return;
      }
      (**(code **)(*param_1 + 0x310))();
      FUN_009fdde0();
      return;
    }
    if ((char)param_1[0x251] != '\0') {
      (**(code **)(*param_1 + 0x30c))();
      (**(code **)(*param_1 + 0x1c))();
      *(undefined1 *)(param_1 + 0x251) = 0;
    }
    param_1[0x24a] = 0;
  }
  else {
    fVar4 = (float10)FUN_00a92ff0();
    fVar1 = (float)param_1[0x250];
    param_1[0x250] = (int)(float)((float10)fVar1 - fVar4);
    if ((float10)fVar1 - fVar4 < (float10)0) {
      (**(code **)(*param_1 + 0x310))();
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 005E9110  FUN_005e9110  size=609  [callgraph]
/* WARNING: Removing unreachable block (ram,0x005e9306) */
/* WARNING: Removing unreachable block (ram,0x005e925a) */

void __fastcall FUN_005e9110(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int local_8;
  
  fVar5 = (float10)FUN_00e049b0();
  fVar5 = fVar5 + (float10)*(float *)(param_1 + 0x924);
  *(float *)(param_1 + 0x924) = (float)fVar5;
  if ((float10)60.0 < fVar5) {
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x920)) {
  default:
    uVar2 = 0xff00ffff;
    break;
  case 1:
    uVar2 = 0xffff0000;
    break;
  case 2:
    uVar2 = 0xffffff00;
    break;
  case 3:
    uVar2 = 0xffffffff;
    break;
  case 4:
    fVar6 = (float10)*(float *)(param_1 + 0x924) * (float10)0.016666668 * (float10)6.2831855;
    fVar7 = (float10)fsin((float10)5.2359877 + fVar6);
    fVar5 = (float10)1;
    fVar8 = (float10)136.0;
    fVar9 = (float10)fsin(fVar6 + (float10)3.1415927);
    fVar6 = (float10)fsin(fVar6 + (float10)1.0471976);
    uVar2 = (((int)ROUND((fVar7 + fVar5) * fVar8) & 0xffU | 0xffffff00) << 8 |
            (int)ROUND((fVar9 + fVar5) * fVar8) & 0xffU) << 8 |
            (int)ROUND(fVar8 * (fVar6 + fVar5)) & 0xffU;
  }
  iVar1 = *(int *)(param_1 + 0x964);
  iVar3 = 0;
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x1c) = (float)(uVar2 >> 0x18) * 0.003921569;
    *(float *)(iVar1 + 0x10) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(iVar1 + 0x14) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
    *(float *)(iVar1 + 0x18) = (float)(uVar2 & 0xff) * 0.003921569;
    return;
  }
  local_8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar3) + 0x40);
      iVar4 = *(int *)(param_1 + 800) + iVar3;
      if ((iVar1 != 0) && (iVar1 = FUN_00fdbbd0(iVar1,"blue_syo"), iVar1 != 0)) {
        *(float *)(iVar4 + 0x1c) = (float)(uVar2 >> 0x18) * 0.003921569;
        *(float *)(iVar4 + 0x10) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(iVar4 + 0x14) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(iVar4 + 0x18) = (float)(uVar2 & 0xff) * 0.003921569;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x70;
    } while (local_8 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 005E9390  cItemViscelaBase::vf310  size=128  [class]
void __fastcall cItemViscelaBase::vf310(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x920)) {
  default:
    FUN_00a8c9b0(0,5,0,0);
    return;
  case 1:
    FUN_00a8c9b0(0,1,0,0);
    return;
  case 2:
    FUN_00a8c9b0(0,2,0,0);
    return;
  case 3:
    FUN_00a8c9b0(0,4,0,0);
    return;
  case 4:
    FUN_00a8c9b0(0,3,0,0);
    return;
  }
}

// 005EB6A0  cItemViscelaBase::vf40  size=214  [class]
undefined4 __fastcall cItemViscelaBase::vf40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = cItemObjectBase::vf40();
  if (iVar2 != 0) {
    iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar2 != 0) {
      if ((undefined4 *)param_1[0x1db] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x1db] = 0;
      }
      EntitySystem::addDatsuEntity(param_1[0x13c]);
      iVar2 = FUN_0094b750();
      param_1[0x24c] = iVar2;
      iVar2 = FUN_0094b780();
      param_1[0x250] = 0;
      param_1[0x24d] = iVar2;
      param_1[0x24e] = 0;
      param_1[0x24f] = 0;
      FUN_00dde2a0(0,5);
      pcVar1 = *(code **)(*param_1 + 0x314);
      param_1[0x248] = 0;
      *(undefined1 *)(param_1 + 0x242) = 0;
      *(undefined1 *)(param_1 + 0x251) = 0;
      param_1[0x244] = 0;
      (*pcVar1)();
      fVar3 = (float10)FUN_00dde300(*(undefined4 *)(param_1[0x24c] + 0x18),
                                    *(undefined4 *)(param_1[0x24c] + 0x18));
      param_1[0x232] = (int)(float)fVar3;
      param_1[0x233] = 0;
      return 1;
    }
  }
  return 0;
}

// 005EB780  cItemViscelaBase::vf44  size=34  [class]
void __fastcall cItemViscelaBase::vf44(int *param_1)

{
  FUN_00f972f0();
  (**(code **)(*param_1 + 0x310))();
  cItemObjectBase::vf44();
  return;
}

// 005EB7B0  cItemViscelaBase::vf54  size=41  [class]
void __fastcall cItemViscelaBase::vf54(int param_1)

{
  int iVar1;
  
  cItemObjectBase::vf54();
  iVar1 = FUN_00d467a0();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x618) != 1)) {
    FUN_005e8fc0();
    return;
  }
  return;
}

// 005EB7E0  cItemViscelaBase::vf50  size=124  [class]
void __fastcall cItemViscelaBase::vf50(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x618) == 1) {
    if (*(int *)(param_1 + 0x910) == 0) {
      fVar1 = (float10)FUN_00a92ff0();
      *(float *)(param_1 + 0x54) =
           (float)(fVar1 * (float10)*(float *)(param_1 + 0x894) +
                  (float10)*(float *)(param_1 + 0x54));
    }
    FUN_005ea150();
    if (*(char *)(param_1 + 0x908) == '\x01') {
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    }
  }
  else if (*(int *)(param_1 + 0x910) == 0) {
    fVar1 = (float10)FUN_00a92ff0();
    *(float *)(param_1 + 0x54) =
         (float)(fVar1 * (float10)*(float *)(param_1 + 0x894) + (float10)*(float *)(param_1 + 0x54))
    ;
  }
  if ((*(char *)(param_1 + 0x908) == '\0') || ((*(uint *)(param_1 + 0x364) & 0x40000) == 0)) {
    FUN_00a93170();
  }
  Behavior::vf50();
  return;
}

// 005EC210  cItemViscelaBase::vf30C  size=157  [class]
void __fastcall cItemViscelaBase::vf30C(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_160 [348];
  
  switch(*(undefined4 *)(param_1 + 0x920)) {
  case 0:
    FUN_004039a0(5,param_1,0);
    goto LAB_005ec291;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    FUN_004039a0(2,param_1,0);
    goto LAB_005ec291;
  case 3:
    FUN_004039a0(4,param_1,0);
    goto LAB_005ec291;
  case 4:
    uVar1 = 3;
    break;
  default:
    uVar1 = 5;
  }
  FUN_004039a0(uVar1,param_1,0);
LAB_005ec291:
  puVar2 = local_160;
  uVar1 = FUN_00e00b40(*(undefined4 *)(param_1 + 0x4b0),puVar2);
  FUN_00a8c930(uVar1,puVar2);
  return;
}

// 005EC2D0  FUN_005ec2d0  size=63  [between]
void __fastcall FUN_005ec2d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 005EC410  cItemViscelaBase::vf4C  size=460  [class]
void __fastcall cItemViscelaBase::vf4C(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_2b0 [336];
  undefined1 auStack_160 [348];
  
  Behavior::vf4C();
  iVar2 = FUN_0094ab80();
  if ((((iVar2 != 0) && (param_1[0x24e] != 0)) && ((char)param_1[0x242] != '\0')) &&
     (param_1[0x24f] == 0)) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        FUN_004039a0(0x40,param_1,0);
        FUN_00a8c930(0,auStack_2b0);
        FUN_004039a0(199,iVar2,0);
        FUN_00a963e0(auStack_160);
        if (param_1[300] == 0x70500) {
          uVar4 = 0x76;
        }
        else {
          uVar4 = 0x78;
        }
        FUN_00cbac80(0xffffffff,uVar4,0);
        iVar2 = FUN_00d46710();
        if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
          FUN_00be8310(*(undefined4 *)(param_1[0x24d] + 100 + DAT_01b76230 * 4));
          uVar4 = *(undefined4 *)(param_1[0x24d] + 0x50 + DAT_01b76230 * 4);
        }
        else {
          iVar2 = FUN_009c4bf0();
          FUN_00be8310(*(undefined4 *)(param_1[0x24d] + 100 + iVar2 * 4));
          iVar2 = FUN_009c4bf0();
          uVar4 = *(undefined4 *)(param_1[0x24d] + 0x50 + iVar2 * 4);
        }
        FUN_00b94770(uVar4);
        pcVar1 = *(code **)(*param_1 + 0x20);
        param_1[0x24f] = 1;
        (*pcVar1)();
        param_1[0x250] = 0x42700000;
        (**(code **)(*param_1 + 0x310))();
        FUN_00e5e050("core_se_sys_item_get",0);
        return;
      }
    }
  }
  (**(code **)(*param_1 + 100))();
  iVar2 = FUN_00d467a0();
  if ((iVar2 == 0) && (param_1[0x186] != 1)) {
    FUN_005e8fc0();
  }
  FUN_005e9110();
  return;
}

// 005ED850  cItemViscelaBase::vf48  size=408  [class]
void __fastcall cItemViscelaBase::vf48(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  BehaviorDebrisActor::vf48();
  if (*(char *)(param_1 + 0x908) != '\0') {
    fVar3 = (float10)FUN_00a92ff0();
    *(float *)(param_1 + 0x8d8) = (float)((float10)*(float *)(param_1 + 0x8d8) - fVar3);
  }
  if (*(float *)(param_1 + 0x8d8) <= 0.0) {
    *(undefined4 *)(param_1 + 0x8d8) = 0;
  }
  if (*(int *)(param_1 + 0x910) != 0) {
    *(undefined4 *)(param_1 + 0x8d8) = 0;
    *(undefined1 *)(param_1 + 0x908) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x908) == '\0') {
    iVar2 = FUN_00d45b10();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x8c8) = 0;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x870);
    fVar3 = (float10)FUN_00a92ff0();
    fVar3 = fVar3 * (float10)*(float *)(iVar2 + 0x14) + (float10)*(float *)(param_1 + 0x8cc);
    *(float *)(param_1 + 0x8cc) = (float)fVar3;
    fVar3 = (float10)*(float *)(param_1 + 0x8c8) - fVar3;
    *(float *)(param_1 + 0x8c8) = (float)fVar3;
    if ((fVar3 < (float10)0) && ((float10)*(float *)(iVar2 + 0x18) < ABS(fVar3))) {
      *(float *)(param_1 + 0x8c8) = -*(float *)(iVar2 + 0x18);
      *(float *)(param_1 + 0x8cc) = (float)(float10)0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    iVar2 = FUN_00d45b10();
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x618) != 1) {
      fVar1 = *(float *)(param_1 + 0x8d4) + 1.0;
      *(float *)(param_1 + 0x8d4) = fVar1;
      if (*(float *)(*(int *)(param_1 + 0x870) + 0x10) <= fVar1) {
        *(undefined4 *)(param_1 + 0x8d4) = 0;
        fVar1 = *(float *)(*(int *)(param_1 + 0x870) + 0x14);
        *(undefined1 *)(param_1 + 0x908) = 0;
        *(float *)(param_1 + 0x8c8) = -fVar1;
      }
    }
  }
  uStack_60 = 0;
  uStack_5c = *(undefined4 *)(param_1 + 0x8c8);
  uStack_58 = *(undefined4 *)(param_1 + 0x8d0);
  uStack_54 = 0x3f800000;
  D3DXMatrixRotationY(auStack_50,*(float *)(param_1 + 0x8c0) * 0.017453292);
  D3DXVec3TransformNormal(param_1 + 0x890,auStack_68,&uStack_58);
  FUN_005ec7b0();
  return;
}

// 00AB6750  cItemViscelaBase::vf04  size=6  [class]
undefined * cItemViscelaBase::vf04(void)

{
  return &DAT_01b353c0;
}

// 00AB6760  cItemViscelaBase::vf314  size=1  [class]
void cItemViscelaBase::vf314(void)

{
  return;
}

// 00ABABA0  cItemViscelaBase::vf00  size=43  [class]
undefined4 __thiscall cItemViscelaBase::vf00(undefined4 param_1,byte param_2)

{
  Hw::cTexture::cTexture_5();
  Behavior::Behavior_124();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

