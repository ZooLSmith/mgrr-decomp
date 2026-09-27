// src/phase/app/p470.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4A7C0..00D713F0, 13 functions

#include "mgrr.h"
#include "cP470.h"

// 00D4A7C0  cP470::vf08  size=101  [class]
void __fastcall cP470::vf08(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  iVar1 = 0;
  do {
    FUN_00a33520(0,0x400,iVar1);
    iVar1 = iVar1 + 1;
  } while ((ushort)iVar1 < 0xe);
  FUN_00a33520(1,0x400,5);
  FUN_00a33520(1,0x400,0xe);
  return;
}

// 00D4A830  cP470::vf1C  size=3  [class]
void cP470::vf1C(void)

{
  return;
}

// 00D5B340  cP470::vf0C  size=93  [class]
void __fastcall cP470::vf0C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x124) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x124) = uVar2;
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar1 = FUN_00c19c00(0,0,0);
    if (iVar1 != 0) {
      FUN_00d54d20(iVar1);
    }
  }
  return;
}

// 00D5B3A0  cP470::vf10  size=21  [class]
void cP470::vf10(void)

{
  DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
  DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
  return;
}

// 00D5B3C0  FUN_00d5b3c0  size=122  [callgraph]
void __fastcall FUN_00d5b3c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x58))(0x40f,1);
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x60))(0x40f);
  iVar2 = FUN_00a7f600(0xd5414);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))();
    }
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_00a5be70(1);
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  DAT_01bea094 = DAT_01bea094 | 0x40;
  return;
}

// 00D5B440  FUN_00d5b440  size=123  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d5b440(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 300) == 0) {
    if (*(int *)(param_1 + 0x124) == 0) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x124) + 0x1174) == 0) {
      return;
    }
    FUN_00d54d90();
  }
  else {
    if (*(int *)(param_1 + 300) != 1) {
      return;
    }
    _DAT_01beaa88 = _DAT_01beaa88 | 0x8000000;
    iVar1 = FUN_00d54c80();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00a9f710("pl0010_992f");
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x14c) == 0) {
      FUN_00a5be70(0);
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      *(undefined4 *)(param_1 + 0x14c) = 1;
      return;
    }
  }
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  return;
}

// 00D5B4E0  FUN_00d5b4e0  size=518  [callgraph]
void __fastcall FUN_00d5b4e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x164) == 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        puVar5 = &DAT_01be9db8;
        (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d70(puVar5);
        piVar1 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar1);
      }
    }
    iVar2 = FUN_00c19c00(0,1,0);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar5 = &DAT_01b34eb0;
        (**(code **)(*piVar3 + 4))(&DAT_01b34eb0);
        iVar2 = FUN_00dd6d70(puVar5);
        piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
      }
    }
    if (((*(int **)(param_1 + 0x124) != (int *)0x0) && (piVar1 != (int *)0x0)) &&
       (piVar3 != (int *)0x0)) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x124) + 0x14c))(0x6a,piVar1[0x13c]);
      if (iVar2 != 0) {
        (**(code **)(**(int **)(param_1 + 0x124) + 0x150))(0x6a,piVar1[0x13c]);
        (**(code **)(*piVar1 + 0x150))(0x6a,*(undefined4 *)(*(int *)(param_1 + 0x124) + 0x4f0));
        (**(code **)(*piVar3 + 0x150))(0x6a,piVar1[0x13c]);
        FUN_00a7c970(piVar3[0x13c]);
      }
    }
    if (*(int *)(param_1 + 0x14c) != 0) {
      FUN_00a5be70(1);
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    FUN_00d54c30();
    FUN_00e5e1b0("bgm_Sundowner_QTE4");
    iVar2 = FUN_00a7f600(0xf5030);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 != (int *)0x0) {
        uVar4 = FUN_00de4500("ba5030_000b.mot");
        piVar1[0x14] = 0;
        piVar1[0x15] = 0;
        piVar1[0x16] = 0;
        piVar1[0x17] = 0;
        piVar1[0x24] = 0;
        piVar1[0x25] = 0;
        piVar1[0x26] = 0;
        piVar1[0x27] = 0;
        FUN_00a9efb0(uVar4,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        (**(code **)(*piVar1 + 100))();
        switchD_0080dbae::default();
        (**(code **)(*piVar1 + 0x1c))();
      }
    }
    *(undefined4 *)(param_1 + 0x164) = 1;
    FUN_00a5bf00();
    return;
  }
  return;
}

// 00D5B6F0  FUN_00d5b6f0  size=754  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00d5b6f0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar6;
  undefined *puVar7;
  int iVar8;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00d4a840();
  if (*(int *)(param_1 + 0x14c) == 0) {
    FUN_00a5be70(0);
    *(undefined4 *)(param_1 + 0x14c) = 1;
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar2 = FUN_00c18c10(0,0);
    if (iVar2 == 0) {
      FUN_00c18610(0,0);
      iVar2 = FUN_00c19c00(0,0,0);
      if (iVar2 != 0) {
        FUN_00d54d20(iVar2);
      }
      if (*(int *)(param_1 + 0x124) != 0) goto LAB_00d5b76e;
    }
  }
  else {
LAB_00d5b76e:
    FUN_0057e900();
  }
  iVar2 = FUN_00c19c00(0,1,0);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    piVar4 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      puVar7 = &DAT_01b34eb0;
      (**(code **)(*piVar3 + 4))(&DAT_01b34eb0);
      iVar2 = FUN_00dd6d70(puVar7);
      piVar4 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
    }
    if (piVar4 != (int *)0x0) goto LAB_00d5b807;
  }
  FUN_00c18610(0,1);
  iVar2 = FUN_00c19c00(0,1,0);
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar7 = &DAT_01b34eb0;
      (**(code **)(*piVar4 + 4))(&DAT_01b34eb0);
      iVar2 = FUN_00dd6d70(puVar7);
      piVar4 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar4);
    }
  }
LAB_00d5b807:
  FUN_00a5be00(0xffffffff,1);
  FUN_00a55860(0x3f800000);
  if (param_2 != 0) {
    _DAT_01d61384 = 10;
    _DAT_01d61388 = 1;
    _DAT_01d6138c = 0;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar8 = 0;
  iVar2 = (**(code **)(*piVar3 + 0x28))();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d70(puVar7);
      if ((iVar2 != 0) && (piVar4 != (int *)0x0)) {
        uStack_24 = 0;
        uStack_20 = 0xbfc90fdb;
        uStack_1c = 0;
        iStack_34 = -0x3cea0000;
        iStack_30 = 0x42973333;
        iStack_2c = 0;
        if (param_2 == 0) {
          iStack_34 = piVar3[0x14];
          iStack_30 = piVar3[0x15];
          iStack_2c = piVar3[0x16];
          iStack_28 = piVar3[0x17];
        }
        puVar6 = &uStack_24;
        (**(code **)(*piVar3 + 0x7c))(&iStack_34);
        (**(code **)(*piVar4 + 0x7c))(&stack0xffffffc4,&iStack_2c);
        if (*(int *)(param_1 + 0x124) != 0) {
          FUN_0057ea10(*(undefined4 *)(*(int *)(param_1 + 0x124) + 0x4f0));
        }
        uVar5 = FUN_009f8b40();
        FUN_009f8ae0(uVar5);
        piVar4[0x560] = (int)puVar6;
        pcVar1 = *(code **)(*piVar3 + 0x150);
        piVar4[0x561] = iVar8;
        piVar4[0x562] = unaff_EDI;
        piVar4[0x563] = unaff_ESI;
        (*pcVar1)(0x76,piVar4[0x13c]);
        (**(code **)(*piVar4 + 0x150))(0x76,piVar3[0x13c]);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  FUN_00a5bec0();
  *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x158) = 1;
  FUN_00a80ad0(0xd00e9);
  FUN_00a80ad0(0xe0058);
  FUN_00d54ee0();
  DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
  return;
}

// 00D63CE0  cP470::vf28  size=98  [class]
void __thiscall cP470::vf28(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) == 0xcf09) {
    *(undefined4 *)(param_1 + 0x154) = 1;
    FUN_00d5ea40(&DAT_01641f14,1,0);
    iVar1 = FUN_00a7f600(0xf5030);
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) | 2;
        *(undefined4 *)(iVar1 + 0x18c) = *(undefined4 *)(param_1 + 0x160);
      }
    }
  }
  return;
}

// 00D6D910  cP470::vf00  size=76  [class]
undefined4 * __thiscall cP470::vf00(undefined4 *param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
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

// 00D6D960  cP470::vf14  size=832  [class]
void __thiscall cP470::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 local_120 [284];
  
  *(undefined4 *)(param_1 + 0x128) = 5;
  pbVar5 = &DAT_01641f14;
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d6d9a4:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00d6d9a9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d6d9a4;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d9a9:
  if (iVar3 == 0) {
    (**(code **)(*(int *)(param_1 + 0x170) + 8))(0,0,0);
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x170);
    FUN_00e01540(0x400,0x10,local_120);
    *(undefined4 *)(param_1 + 0x128) = 1;
  }
  else {
    pcVar6 = "P470_SUNDOWNER";
    pbVar2 = param_3;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00d6da30:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00d6da35;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00d6da30;
      pbVar2 = pbVar2 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d6da35:
    if (iVar3 != 0) {
      pcVar6 = "P470_SUNDOWNER_2";
      pbVar2 = param_3;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_00d6da64:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00d6da69;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_00d6da64;
        pbVar2 = pbVar2 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d6da69:
      if (iVar3 != 0) {
        pcVar6 = "P470_QTE_DEAD";
        pbVar2 = param_3;
        do {
          bVar1 = *pbVar2;
          bVar7 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_00d6da98:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00d6da9d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_00d6da98;
          pbVar2 = pbVar2 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d6da9d:
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x128) = 2;
        }
        else {
          iVar3 = FUN_00fdbbd0(param_3,"P470_MOVIE");
          if (iVar3 == 0) {
            iVar3 = FUN_00fdbbd0(param_3,"P470_SUN_RESULT");
            if (iVar3 == 0) {
              iVar3 = FUN_00fdbbd0(param_3,"P470_SUN_DEAD");
              if (iVar3 != 0) {
                *(undefined4 *)(param_1 + 0x128) = 4;
                DAT_01bea090 = DAT_01bea090 | 0x80c400;
                DAT_01bea094 = DAT_01bea094 | 0x40000000;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x128) = 3;
              FUN_009c6930();
              DAT_01bea090 = DAT_01bea090 | 0x80c400;
              DAT_01bea094 = DAT_01bea094 | 0x40000000;
            }
          }
          else {
            FUN_009c4b00(2);
            uVar4 = FUN_00e678d0(2,0xc001,0xffffffff);
            FUN_00e80d00(uVar4);
            *(undefined4 *)(param_1 + 0x168) = 1;
          }
        }
        goto LAB_00d6dc30;
      }
    }
    if (*(int *)(param_1 + 0x208) == 0) {
      FUN_00e01ca0();
      FUN_00dffb30(param_1 + 0x170);
      FUN_00e01540(0x400,0xf,local_120);
    }
    pcVar6 = "P470_SUNDOWNER_2";
    do {
      bVar1 = *param_3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00d6dbd0:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00d6dbd5;
      }
      if (bVar1 == 0) break;
      bVar1 = param_3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00d6dbd0;
      param_3 = param_3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d6dbd5:
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x168) == 0)) {
      uVar4 = FUN_00e678d0(2,0xc001,0xffffffff);
      iVar3 = FUN_00e7a6e0(uVar4);
      if (iVar3 == 0) {
        uVar4 = FUN_00e678d0(2,0xc001,0xffffffff);
        FUN_00e80d00(uVar4);
        *(undefined4 *)(param_1 + 0x168) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
LAB_00d6dc30:
  iVar3 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (iVar3 == 0) {
    FUN_00d5b3c0();
  }
  else {
    if (iVar3 == 1) {
      FUN_00d5b6f0(*(int *)(param_1 + 0x154) == 0);
      DAT_01bea094 = DAT_01bea094 | 0x40;
      FUN_00c19400(2,0);
      return;
    }
    if (iVar3 == 2) {
      FUN_00d68770();
      return;
    }
  }
  return;
}

// 00D6DCB0  FUN_00d6dcb0  size=900  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d6dcb0(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined *puVar8;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    return;
  }
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 == 0) {
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  puVar8 = &DAT_01be9db8;
  (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
  iVar3 = FUN_00dd6d70(puVar8);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = 0;
  (**(code **)(*piVar2 + 0x24))();
  _DAT_01beaa88 = _DAT_01beaa88 | 0x8000000;
  switch(*(undefined4 *)(param_1 + 300)) {
  case 0:
    *(undefined4 *)(param_1 + 300) = 1;
    *(undefined4 *)(param_1 + 0x134) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    goto LAB_00d6dd62;
  case 1:
LAB_00d6dd62:
    iVar3 = FUN_00a8cac0();
    if (iVar3 == 10) {
      *(undefined4 *)(param_1 + 300) = 2;
    }
    else {
      iVar3 = FUN_00a8cac0();
      if ((iVar3 == 4) || (iVar3 = FUN_00a8cac0(), iVar3 == 5)) {
        *(undefined4 *)(param_1 + 300) = 5;
      }
      else {
        iVar3 = FUN_00a8cac0();
        if (iVar3 == 0xc) {
          *(undefined4 *)(param_1 + 300) = 3;
          *(undefined4 *)(param_1 + 0x134) = 0;
        }
      }
    }
    break;
  case 2:
    uVar4 = 1;
    fVar1 = *(float *)(param_1 + 0x134);
    fVar7 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar7);
    *(float *)(param_1 + 0x134) = (float)fVar7;
    if (fVar7 <= (float10)0.5) {
      *(float *)(param_1 + 0x134) = (float)(float10)0.5;
      *(undefined4 *)(param_1 + 300) = 3;
    }
    break;
  case 3:
    iVar3 = FUN_00a8cac0();
    if ((iVar3 != 10) && (iVar3 = FUN_00a8cac0(), iVar3 != 0xc)) {
      *(undefined4 *)(param_1 + 300) = 4;
    }
    break;
  case 4:
    iVar3 = FUN_00a8cac0();
    if ((iVar3 == 10) || (iVar3 = FUN_00a8cac0(), iVar3 == 0xc)) {
      *(undefined4 *)(param_1 + 300) = 2;
    }
    goto LAB_00d6de7f;
  case 5:
    uVar4 = 1;
    fVar1 = *(float *)(param_1 + 0x134);
    fVar7 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar7);
    *(float *)(param_1 + 0x134) = (float)fVar7;
    if (fVar7 <= (float10)0.35) {
      *(float *)(param_1 + 0x134) = (float)(float10)0.35;
      *(undefined4 *)(param_1 + 300) = 6;
    }
    break;
  case 6:
    uVar5 = 1;
    iVar3 = FUN_00a8cac0();
    uVar4 = 1;
    if (((iVar3 != 4) && (iVar3 = FUN_00a8cac0(), uVar4 = uVar5, iVar3 != 5)) &&
       (iVar3 = FUN_00a8cac0(), iVar3 != 7)) {
      *(undefined4 *)(param_1 + 300) = 7;
    }
    break;
  case 7:
    iVar3 = FUN_00a8cac0();
    if ((iVar3 == 4) || (iVar3 = FUN_00a8cac0(), iVar3 == 5)) {
      *(undefined4 *)(param_1 + 300) = 5;
    }
LAB_00d6de7f:
    fVar1 = *(float *)(param_1 + 0x134);
    fVar6 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)1;
    fVar6 = (fVar7 - fVar6) * (fVar7 - (float10)fVar1) + (float10)fVar1;
    *(float *)(param_1 + 0x134) = (float)fVar6;
    if ((float10)0.95 <= fVar6) {
      *(float *)(param_1 + 0x134) = (float)fVar7;
      *(undefined4 *)(param_1 + 300) = 1;
    }
    break;
  case 8:
    uVar4 = 1;
  }
  if ((*(int *)(param_1 + 0x150) != 0) && (*(int *)(param_1 + 300) != 8)) {
    FUN_00d687c0(uVar4);
  }
  FUN_00a55860(*(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x134));
  fVar1 = _DAT_01be942c;
  fVar7 = (float10)FUN_00a5be60(0);
  fVar7 = fVar7 * (float10)0.016666668 * (float10)fVar1 + (float10)*(float *)(param_1 + 0x140);
  *(float *)(param_1 + 0x140) = (float)fVar7;
  if (((float10)*(float *)(param_1 + 0x13c) < fVar7) && (*(int *)(param_1 + 0x150) == 0)) {
    *(undefined4 *)(param_1 + 0x150) = 1;
    *(undefined4 *)(param_1 + 0x130) = 0;
    FUN_00a55820();
    return;
  }
  return;
}

// 00D713F0  cP470::vf18  size=62  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cP470::vf18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x148) = _DAT_01be942c;
  if (iVar1 == 0) {
    FUN_00d5b440();
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      DAT_01bea090 = DAT_01bea090 | 0x80c400;
      DAT_01bea094 = DAT_01bea094 | 0x40000000;
    }
    return;
  }
  FUN_00d6dcb0();
  return;
}

