// src/misc/cCustomizeSelMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098F900..009C52D0, 62 functions

#include "mgrr.h"
#include "cCustomizeSelMenu.h"

// 0098F900  FUN_0098f900  size=47  [callgraph]
void __thiscall FUN_0098f900(int param_1,int param_2)

{
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3d8 + param_2 * 4),1);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3d8 + param_2 * 4),1,3);
  return;
}

// 0098F930  FUN_0098f930  size=41  [callgraph]
void __thiscall FUN_0098f930(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x414));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  return;
}

// 0098F980  FUN_0098f980  size=109  [callgraph]
void __fastcall FUN_0098f980(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x468) != 0) {
    if ((DAT_01bea004 == 0) && (DAT_01bea000 == DAT_01be9ffc)) {
      uVar1 = *DAT_01be9ff4;
    }
    else {
      uVar1 = 0xffffffff;
    }
    iVar2 = FUN_00a7f600(uVar1);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 0x20))();
    }
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x468) = 0;
  }
  return;
}

// 0098FB60  FUN_0098fb60  size=172  [callgraph]
float10 __thiscall FUN_0098fb60(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float local_58;
  float local_54 [21];
  
  local_58 = 0.0;
  local_54[0x11] = 0.0;
  local_54[0x12] = 0.0;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  local_54[4] = 0.0;
  local_54[5] = 0.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 0.0;
  local_54[0xb] = 0.0;
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 0.0;
  local_54[0x10] = 0.0;
  local_54[0x13] = -NAN;
  iVar1 = FUN_00cf9900(*(undefined4 *)(param_1 + 0x1c + param_2 * 4),param_3,local_54);
  if (iVar1 != 0) {
    local_58 = local_54[param_4] + local_54[0x11];
  }
  iVar1 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x1c + param_2 * 4));
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 0098FC10  FUN_0098fc10  size=35  [callgraph]
float10 __thiscall FUN_0098fc10(int param_1,int param_2,float param_3)

{
  float local_8 [2];
  
  FUN_00cb3240(local_8,*(undefined4 *)(param_1 + 0x1c + param_2 * 4));
  return (float10)param_3 / (float10)local_8[0];
}

// 0098FC40  cCustomizeSelMenu::vf0C  size=72  [class]
void __fastcall cCustomizeSelMenu::vf0C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = 0;
    do {
      FUN_00d389f0(0xd,iVar1,0,0,*(undefined4 *)(param_1 + 0x18),iVar1 + 0x38,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
  }
  return;
}

// 0098FC90  FUN_0098fc90  size=175  [callgraph]
void __fastcall FUN_0098fc90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x358);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    if (iVar1 == 6) {
      FUN_00f972f0();
      *(undefined4 *)(param_1 + 0x380) = 0;
      *(undefined4 *)(param_1 + 900) = 0;
      *(undefined4 *)(param_1 + 0x388) = 0;
      *(undefined4 *)(param_1 + 0x38c) = 0;
      *(undefined4 *)(param_1 + 0x390) = 0;
      *(undefined1 *)(param_1 + 0x360) = 0;
      return;
    }
    if (2 < *(byte *)(param_1 + 0x360)) {
      return;
    }
    if (*(int *)(param_1 + 0x368) == -1) {
      return;
    }
    if (*(int *)(param_1 + 0x364) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x364) = 0;
    }
    FUN_00a00bd0(*(undefined4 *)(param_1 + 0x368),0);
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x360) = 3;
  return;
}

// 00990640  FUN_00990640  size=153  [callgraph]
undefined4 FUN_00990640(short param_1)

{
  if (param_1 < 0xd) {
    if (param_1 < 0x16) {
      return 0x14;
    }
  }
  else if (param_1 < 0x16) {
    switch(param_1) {
    case 0xd:
      return 7;
    case 0xe:
      return 8;
    case 0xf:
      return 9;
    case 0x10:
      return 0xf;
    case 0x11:
      return 10;
    case 0x12:
      return 0x10;
    case 0x13:
      return 0x11;
    case 0x14:
      return 0xb;
    default:
      return 0x14;
    }
  }
  if (param_1 < 0x19) {
    if (param_1 == 0x16) {
      return 0xc;
    }
    if (param_1 == 0x17) {
      return 0xd;
    }
    if (param_1 == 0x18) {
      return 0xe;
    }
  }
  return 0x14;
}

// 00990700  FUN_00990700  size=35  [callgraph]
uint FUN_00990700(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)(&DAT_01b73860)[param_1 * 0x20];
  if (uVar1 == 1) {
    return 1;
  }
  if (uVar1 != 2) {
    if (uVar1 - 3 != 0) {
      return uVar1 - 3 & 0xffffff00;
    }
    return 3;
  }
  return 2;
}

// 00990730  cCustomizeSelMenu::setItemState  size=45  [class]
void cCustomizeSelMenu::setItemState(uint param_1,undefined4 param_2)

{
  if (0x100 < param_1) {
    FUN_00dd5650("cCustomizeSelMenu::setItemState idx[%d] state[%d]",param_1,param_2);
    return;
  }
  (&DAT_01b73860)[param_1 * 0x20] = (undefined1)param_2;
  return;
}

// 009B2B00  cCustomizeSelMenu::vf00  size=30  [class]
undefined4 __thiscall cCustomizeSelMenu::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_19();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B2B20  FUN_009b2b20  size=466  [callgraph]
void __thiscall FUN_009b2b20(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int local_80 [32];
  
  local_80[0xe] = 4;
  local_80[0xf] = 4;
  local_80[0x10] = 10;
  local_80[0x11] = 10;
  local_80[0x12] = 0xb;
  local_80[0x13] = 0xb;
  local_80[0x14] = 0xc;
  local_80[0x15] = 0xc;
  local_80[0x16] = 5;
  local_80[0x17] = 5;
  local_80[0x1a] = 7;
  local_80[0x1b] = 7;
  local_80[9] = 2;
  local_80[10] = 2;
  local_80[3] = 2;
  iVar2 = *(int *)(param_1 + 0x358);
  local_80[0x1c] = 8;
  local_80[0x1d] = 8;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 1;
  local_80[0xb] = 1;
  local_80[0xc] = 3;
  local_80[0xd] = 3;
  local_80[0x18] = 6;
  local_80[0x19] = 6;
  local_80[0x1e] = 9;
  local_80[0x1f] = 9;
  local_80[0] = 0x19;
  local_80[1] = 1;
  local_80[2] = 0x1a;
  local_80[4] = 0x1b;
  local_80[5] = 3;
  if (iVar2 != 0) {
    if (iVar2 != 3) {
      if (iVar2 == 6) {
        *(undefined1 *)(param_1 + 0x360) = 1;
        return;
      }
      iVar2 = cXmlBinary::cXmlBinary_84(param_2);
      if (iVar2 != -1) {
        *(int *)(param_1 + 0x368) = iVar2;
      }
      return;
    }
    *(undefined4 *)(param_1 + 0x374) = 0;
    uVar1 = 0;
    do {
      if (local_80[uVar1 * 2] == (int)(short)param_2) {
        iVar2 = local_80[uVar1 * 2 + 1];
        *(undefined1 *)(param_1 + 0x37c) = 1;
        *(int *)(param_1 + 0x378) = iVar2;
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    *(undefined4 *)(param_1 + 0x378) = 0;
    *(undefined1 *)(param_1 + 0x37c) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x378) = DAT_01be9fb0;
  uVar1 = 0;
  do {
    if (local_80[uVar1 * 2 + 6] == (int)(short)param_2) {
      iVar2 = local_80[uVar1 * 2 + 7];
      *(undefined1 *)(param_1 + 0x37c) = 1;
      *(int *)(param_1 + 0x374) = iVar2;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xd);
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined1 *)(param_1 + 0x37c) = 1;
  return;
}

// 009B2D00  FUN_009b2d00  size=138  [callgraph]
void __thiscall FUN_009b2d00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x21c) != 0) {
    puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0x414));
    uVar1 = *puVar4;
    iVar3 = *(int *)(param_1 + 0x21c);
    uVar2 = puVar4[1];
    FUN_0099a440(iVar3 + 0x8c,&DAT_016575ac,param_2);
    *(undefined4 *)(iVar3 + 0x10c) = uVar1;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x110) = uVar2;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x114) = 0x41700000;
  }
  return;
}

// 009B2D90  FUN_009b2d90  size=1118  [callgraph]
void __thiscall FUN_009b2d90(int param_1,int param_2,short param_3)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  short *psVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  iVar1 = param_2;
  switch(param_2) {
  case 0:
    bVar3 = 0;
    param_2._0_1_ = 0xd;
    break;
  case 1:
    bVar3 = 0xd;
    param_2._0_1_ = 0x16;
    break;
  case 2:
    bVar3 = 0x16;
    param_2._0_1_ = 0x19;
    break;
  case 3:
    bVar3 = 0x19;
    param_2._0_1_ = 0x1c;
    break;
  default:
    goto switchD_009b2da4_caseD_4;
  case 6:
    bVar3 = 0x25;
    param_2._0_1_ = 0x33;
  }
  pcVar7 = &DAT_01b73861 + param_3 * 0x20;
  if (*pcVar7 != '\0') {
    if (iVar1 == 2) {
      DAT_01b7588c = 0;
LAB_009b2f6b:
      *pcVar7 = '\0';
      bVar3 = 5;
      do {
        if (*(short *)(param_1 + 0x328 + (char)bVar3 * 2) == param_3) {
          if (bVar3 < 0xf) {
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x2f8),0);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x304),1);
            FUN_00cce090(*(undefined4 *)(param_1 + 0x308),&DAT_016563a8);
          }
          break;
        }
        bVar3 = bVar3 + 1;
      } while ((char)bVar3 < '\x0f');
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
      FUN_00ce4d70(4);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_07",0,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x009b2ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_009b32b4)[iVar1])();
      return;
    }
    if (iVar1 == 3) {
      FUN_009c4e80(0);
      goto LAB_009b2f6b;
    }
    if (iVar1 == 6) goto LAB_009b2f6b;
    if (*pcVar7 != '\0') {
      return;
    }
  }
  if ((iVar1 != 6) && (bVar3 < (byte)param_2)) {
    pcVar2 = &DAT_01b73861 + (char)bVar3 * 0x20;
    do {
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        bVar4 = 5;
        psVar5 = (short *)(param_1 + 0x332);
        do {
          if ((*psVar5 == (short)(char)bVar3) && (bVar4 < 0xf)) {
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x2f8),0);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x304),1);
            FUN_00cce090(*(undefined4 *)(param_1 + 0x308),&DAT_016563a8);
          }
          bVar4 = bVar4 + 1;
          psVar5 = psVar5 + 1;
        } while ((char)bVar4 < '\x0f');
      }
      bVar3 = bVar3 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while ((char)bVar3 < (char)(byte)param_2);
  }
  FUN_0098fdb0(*(char *)(param_1 + 0x319) + '\x05');
  *pcVar7 = '\x01';
  if (*(int *)(param_1 + 0x358) == 1) {
    FUN_009c52d0(1);
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
  FUN_00ce4d70(2);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_09",0,0xffffffff);
  FUN_00e5e050("core_se_sys_custom_item_equip",0);
  switch(param_3) {
  case 0:
    FUN_009c4f20(0);
    break;
  case 1:
    FUN_009c4f20(2);
    break;
  case 2:
    FUN_009c4f20(1);
    break;
  case 3:
    FUN_009c4f20(3);
    break;
  case 4:
    FUN_009c4f20(4);
    break;
  case 5:
    FUN_009c4f20(5);
    break;
  case 6:
    FUN_009c4f20(6);
    break;
  case 7:
    FUN_009c4f20(7);
    break;
  case 8:
    FUN_009c4f20(8);
    break;
  case 9:
    FUN_009c4f20(9);
    break;
  case 10:
    FUN_009c4f20(10);
    break;
  case 0xb:
    FUN_009c4f20(0xb);
    break;
  case 0xc:
    FUN_009c4f20(0xc);
    break;
  case 0xd:
    FUN_009c4d40(0);
    break;
  case 0xe:
    FUN_009c4d40(1);
    break;
  case 0xf:
    FUN_009c4d40(2);
    break;
  case 0x10:
    FUN_009c4d40(3);
    break;
  case 0x11:
    FUN_009c4d40(4);
    break;
  case 0x12:
    FUN_009c4d40(5);
    break;
  case 0x13:
    FUN_009c4d40(7);
    break;
  case 0x14:
    FUN_009c4d40(6);
    break;
  case 0x15:
    FUN_009c4d40(8);
    break;
  case 0x16:
    DAT_01b7588c = 2;
    break;
  case 0x17:
    DAT_01b7588c = 3;
    break;
  case 0x18:
    DAT_01b7588c = 4;
    break;
  case 0x19:
    uVar6 = 1;
    goto LAB_009b31cf;
  case 0x1a:
    uVar6 = 2;
    goto LAB_009b31cf;
  case 0x1b:
    uVar6 = 3;
LAB_009b31cf:
    FUN_009c4e80(uVar6);
  }
  switch(*(undefined4 *)(param_1 + 0x358)) {
  case 0:
    pcVar7 = "customize_unremovable";
    break;
  case 1:
    pcVar7 = "customize_weapon_unremovable";
    break;
  case 2:
    pcVar7 = "customize_weapon_equipped";
    break;
  case 3:
  case 6:
    pcVar7 = "customize_equipped";
    break;
  default:
    goto switchD_009b31e4_caseD_4;
  }
  FUN_009b2d00(pcVar7);
switchD_009b31e4_caseD_4:
  if (param_3 == 0x15) {
    FUN_009b2d00("customize_unremovable");
  }
switchD_009b2da4_caseD_4:
  return;
}

// 009BC430  cCustomizeSelMenu::setItemState_3  size=1196  [class]
void __thiscall cCustomizeSelMenu::setItemState_3(int param_1,byte param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  if (-1 < *(char *)(param_1 + 0x31a)) {
    uVar3 = FUN_00e03ea0("c_item_04");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x2f4),uVar3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f0),0);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f4),0);
    uVar4 = (uint)*(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x31a) * 2);
    if ((&DAT_01b73860)[uVar4 * 0x20] == '\x01') {
      if (uVar4 < 0x101) {
        (&DAT_01b73860)[uVar4 * 0x20] = 2;
      }
      else {
        FUN_00dd5650("cCustomizeSelMenu::setItemState idx[%d] state[%d]",uVar4,2);
      }
      uVar8 = 1;
      uVar3 = cXmlBinary::cXmlBinary_50
                        (*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x31a) * 2));
      FUN_0098fe20(*(char *)(param_1 + 0x31a) + '\x05',uVar3,uVar8);
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x238),0);
  }
  if (9 < param_2) goto switchD_009bc8a8_caseD_d;
  iVar6 = (int)(char)param_2;
  uVar3 = FUN_00e03ea0("c_item_05");
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x2f4),uVar3);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f0),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f4),2);
  iVar5 = cXmlBinary::cXmlBinary_50(*(undefined2 *)(param_1 + 0x332 + iVar6 * 2));
  if (iVar5 != *(int *)(param_1 + 0x68)) {
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 0x70) = (iVar5 - *(int *)(param_1 + 0x6c)) / 0x14;
  }
  *(undefined1 *)(param_1 + 100) = 10;
  sVar2 = *(short *)(param_1 + 0x332 + iVar6 * 2);
  iVar5 = sVar2 * 0x20;
  cVar1 = (&DAT_01b73860)[iVar5];
  if (cVar1 == '\x01') {
    uVar3 = 1;
  }
  else if (cVar1 == '\x02') {
    uVar3 = 2;
  }
  else if (cVar1 == '\x03') {
    uVar3 = 3;
  }
  else {
    uVar3 = 0;
  }
  switch(uVar3) {
  case 0:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),0);
    FUN_00ce4d70(1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),&DAT_016416fa,0,0xffffffff);
    break;
  case 1:
  case 2:
    iVar5 = cXmlBinary::cXmlBinary_50(sVar2);
    if (DAT_01b7589c < iVar5) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
      FUN_00ce4d70(3);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_06",0,0xffffffff);
      pcVar7 = "customize_icon";
    }
    else {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
      FUN_00ce4d70(1);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_08",0,0xffffffff);
      pcVar7 = "customize_icon";
    }
LAB_009bc79a:
    FUN_009b2d00(pcVar7);
    break;
  case 3:
    if ((&DAT_01b73861)[iVar5] == '\0') {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
      FUN_00ce4d70(4);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_07",0,0xffffffff);
      switch(*(undefined4 *)(param_1 + 0x358)) {
      case 0:
      case 3:
      case 6:
        pcVar7 = "customize_available";
        break;
      case 1:
      case 2:
        pcVar7 = "customize_weapon_available";
        break;
      default:
        pcVar7 = "customize_upgraded";
      }
      FUN_009b2d00(pcVar7);
      if (*(short *)(param_1 + 0x332 + iVar6 * 2) == 0x15) {
        pcVar7 = "customize_available";
        goto LAB_009bc79a;
      }
      break;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
    FUN_00ce4d70(2);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_09",0,0xffffffff);
    switch(*(undefined4 *)(param_1 + 0x358)) {
    case 0:
      pcVar7 = "customize_unremovable";
      break;
    case 1:
      pcVar7 = "customize_weapon_unremovable";
      break;
    case 2:
      pcVar7 = "customize_weapon_equipped";
      break;
    case 3:
    case 6:
      pcVar7 = "customize_equipped";
      break;
    default:
      goto switchD_009bc6f9_caseD_4;
    }
    FUN_009b2d00(pcVar7);
switchD_009bc6f9_caseD_4:
    if (*(short *)(param_1 + 0x332 + iVar6 * 2) == 0x15) {
      pcVar7 = "customize_unremovable";
      goto LAB_009bc79a;
    }
  }
  cXmlBinary::cXmlBinary_89(*(undefined2 *)(param_1 + 0x332 + iVar6 * 2));
  iVar5 = *(int *)(param_1 + 0x358);
  if ((iVar5 == 1) || (iVar5 == 2)) {
    FUN_00990020((int)*(short *)(param_1 + 0x332 + iVar6 * 2));
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b4),7);
    if (*(int *)(param_1 + 0x218) != 0) {
      sVar2 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
      cVar1 = (&DAT_01b73860)[sVar2 * 0x20];
      if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x03')) ||
         (iVar5 = FUN_00990640(sVar2), iVar5 == 0x14)) {
        FUN_00ce4d70(0);
      }
      else {
        iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x27c + iVar6 * 4));
        FUN_00990860(*(undefined4 *)(iVar5 + 0x90),*(undefined4 *)(iVar5 + 0x94),iVar6 % 5 == 4);
      }
    }
  }
  else if (iVar5 == 6) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24c),7);
  }
  switch(*(undefined2 *)(param_1 + 0x332 + iVar6 * 2)) {
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x14:
  case 0x15:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x238),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x238),1,3);
  }
switchD_009bc8a8_caseD_d:
  *(byte *)(param_1 + 0x31a) = param_2;
  return;
}

// 009C0BC0  cCustomizeSelMenu::vf08  size=1579  [class]
void __fastcall cCustomizeSelMenu::vf08(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int local_4;
  
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x22c) = uVar2;
  uVar2 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x234) = uVar2;
  uVar2 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  uVar2 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x23c) = uVar2;
  uVar2 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x240) = uVar2;
  uVar2 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  uVar2 = FUN_00cb25d0(8);
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  uVar2 = FUN_00cb25d0(9);
  *(undefined4 *)(param_1 + 0x24c) = uVar2;
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x254) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 600) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x25c) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x260) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x2a4) = uVar2;
  uVar2 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x2a8) = uVar2;
  uVar2 = FUN_00cb25d0(0x5d);
  *(undefined4 *)(param_1 + 0x2ac) = uVar2;
  uVar2 = FUN_00cb25d0(0x5e);
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  uVar2 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x2b4) = uVar2;
  uVar2 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  uVar2 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 700) = uVar2;
  uVar2 = FUN_00cb25d0(0x49);
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  uVar2 = FUN_00cb25d0(0x4a);
  *(undefined4 *)(param_1 + 0x2c4) = uVar2;
  uVar2 = FUN_00cb25d0(0x4b);
  *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  uVar2 = FUN_00cb25d0(0x4c);
  *(undefined4 *)(param_1 + 0x2cc) = uVar2;
  uVar2 = FUN_00cb25d0(0x4d);
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  uVar2 = FUN_00cb25d0(0x4e);
  *(undefined4 *)(param_1 + 0x2d4) = uVar2;
  uVar2 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  uVar2 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0x2dc) = uVar2;
  uVar2 = FUN_00cb25d0(0x53);
  *(undefined4 *)(param_1 + 0x2e0) = uVar2;
  uVar2 = FUN_00cb25d0(0x54);
  *(undefined4 *)(param_1 + 0x2e4) = uVar2;
  uVar2 = FUN_00cb25d0(0x55);
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  uVar2 = FUN_00cb25d0(0x56);
  *(undefined4 *)(param_1 + 0x2ec) = uVar2;
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x240));
  FUN_00cb2240(uVar2);
  FUN_009a04a0();
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
  FUN_00ce4d70(1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_08",0,0xffffffff);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x240),0);
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x264) = uVar2;
  iVar5 = 0x33;
  puVar3 = (undefined4 *)(param_1 + 0x268);
  local_4 = 0xf;
  do {
    uVar2 = FUN_00cb25d0(iVar5);
    *puVar3 = uVar2;
    uVar2 = FUN_00cb3300(uVar2);
    FUN_00cb2240(uVar2);
    FUN_00cb2310(*puVar3,0);
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x2f4) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  uVar2 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  uVar2 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x304) = uVar2;
  uVar2 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x308) = uVar2;
  uVar2 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x30c) = uVar2;
  uVar2 = FUN_00cb25d0(0x1b);
  *(undefined4 *)(param_1 + 0x310) = uVar2;
  uVar2 = FUN_00cb25d0(0x1c);
  cVar4 = '\0';
  *(undefined4 *)(param_1 + 0x314) = uVar2;
  do {
    FUN_009a0be0(cVar4);
    uVar2 = FUN_00e03ea0("c_item_04");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x2f4),uVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f0),0);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f4),0);
    cVar4 = cVar4 + '\x01';
  } while (cVar4 < '\x0f');
  uVar2 = cXmlBinary::cXmlBinary_88(*(undefined4 *)(param_1 + 0x358));
  *(undefined4 *)(param_1 + 0x324) = uVar2;
  cXmlBinary::cXmlBinary_86(*(undefined4 *)(param_1 + 0x358),0);
  *(undefined2 *)(param_1 + 0x31e) = 0;
  iVar5 = *(int *)(param_1 + 0x324) / 5;
  if (iVar5 * 5 < *(int *)(param_1 + 0x324)) {
    sVar1 = (short)iVar5 + 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x324) / 5;
  }
  *(short *)(param_1 + 800) = sVar1 * 5 + -10;
  setItemState_3(*(undefined1 *)(param_1 + 0x319));
  FUN_00cb23d0(*(undefined4 *)(param_1 + 0x2b4),1);
  FUN_00cb23d0(*(undefined4 *)(param_1 + 0x24c),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 600),0);
  if (*(short *)(param_1 + 800) < 1) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x260),0);
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x22c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x230),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x238),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x244),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x248),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 600),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x260),0);
  if (*(int *)(param_1 + 0x220) == 0) goto switchD_009c10e1_default;
  FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0x40c),0);
  FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0x410),0);
  switch(*(undefined4 *)(param_1 + 0x358)) {
  case 0:
    pcVar6 = "CUSTOM_TITLE_02";
    break;
  case 1:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x220) + 0x40c);
    pcVar6 = "CUSTOM_TITLE_03";
    goto LAB_009c1167;
  case 2:
    pcVar6 = "CUSTOM_TITLE_04";
    break;
  case 3:
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x220) + 0x40c);
    pcVar6 = "CUSTOM_TITLE_05";
    goto LAB_009c1167;
  case 4:
    pcVar6 = "CUSTOM_TITLE_06";
    break;
  case 5:
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x220) + 0x40c);
    pcVar6 = "CUSTOM_TITLE_07";
    goto LAB_009c1167;
  case 6:
    pcVar6 = "CUSTOM_TITLE_08";
    break;
  default:
    goto switchD_009c10e1_default;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x220) + 0x40c);
LAB_009c1167:
  FUN_00cf9770(uVar2,pcVar6,1,0xffffffff);
switchD_009c10e1_default:
  FUN_00cb2600(1);
  FUN_00ce4d70(1);
  FUN_00e5e050("core_se_sys_custom_item_window_open",0);
  puVar3 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7be50);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar3 = cUpdatePop::vftable;
    puVar3[3] = "cCustomizeSelMenu";
    FUN_00d29ca0(0x74,9);
    puVar3[4] = 0;
  }
  *(undefined4 **)(param_1 + 0x218) = puVar3;
  FUN_009b2b20(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
  return;
}

// 009C1220  cCustomizeSelMenu::vf14  size=10202  [class]
void __fastcall cCustomizeSelMenu::vf14(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  int *piVar10;
  undefined2 uVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined2 extraout_DX;
  undefined4 extraout_EDX;
  undefined2 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined6 uVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined *puVar21;
  byte local_d9;
  short *local_d8;
  undefined2 *local_d4;
  uint local_d0;
  float local_cc;
  uint local_c8;
  uint local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar13 = 0;
  do {
    FUN_00d38a30(0xd,iVar13,*(undefined4 *)(param_1 + 0x18));
    iVar13 = iVar13 + 1;
  } while (iVar13 < 10);
  switch(*(char *)(param_1 + 0x318)) {
  case '\0':
    iVar13 = FUN_00ce4dd0(1);
    if ((((((iVar13 != 0) && (DAT_01bea058 == 0)) && (DAT_01bea054 == DAT_01bea050)) &&
         ((1 < DAT_01bea05c && (DAT_01bea044 == 0)))) && (DAT_01bea040 == DAT_01bea03c)) &&
       ((DAT_01bea030 == 2 ||
        (((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) &&
           ((DAT_01bea018 == 0 &&
            (((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)) &&
             (DAT_01bea000 == DAT_01be9ffc)))))) &&
          ((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)))) &&
         ((DAT_01be9ff0 == 0 &&
          (((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)) && (DAT_01be9fc4 == DAT_01be9fc0))
          )))))))) {
      if (*(int *)(param_1 + 0x324) < 0xb) {
        local_d9 = *(byte *)(param_1 + 0x324);
      }
      else {
        local_d9 = 10;
      }
      if ('\0' < (char)local_d9) {
        local_d8 = (short *)(uint)local_d9;
        pcVar19 = (char *)(param_1 + 0x348);
        puVar14 = (undefined4 *)(param_1 + 0x27c);
        do {
          if (((int)*pcVar19 ==
               (int)((int)*(char *)(param_1 + 0x31c) +
                    ((int)*(char *)(param_1 + 0x31c) >> 0x1f & 3U)) >> 2) &&
             (iVar13 = FUN_00cb2480(*puVar14), iVar13 == 0)) {
            FUN_00cb2310(*puVar14,1);
            FUN_00ce4ce0(*puVar14,5);
            FUN_00e5e050("core_se_sys_icon_open",0);
          }
          puVar14 = puVar14 + 1;
          pcVar19 = pcVar19 + 1;
          local_d8 = (short *)((int)local_d8 - 1);
        } while (local_d8 != (short *)0x0);
      }
      iVar13 = (int)*(char *)(param_1 + 0x31c);
      iVar7 = (int)(char)local_d9;
      if (iVar13 == iVar7 * 4) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x234),2);
        *(char *)(param_1 + 0x31c) = *(char *)(param_1 + 0x31c) + '\x01';
      }
      else if (iVar13 == iVar7 * 4 + 4) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x23c),2);
        *(char *)(param_1 + 0x31c) = *(char *)(param_1 + 0x31c) + '\x01';
      }
      else if (iVar13 == iVar7 * 4 + 8) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x244),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x248),1);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x244),2);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x248),2);
        *(char *)(param_1 + 0x31c) = *(char *)(param_1 + 0x31c) + '\x01';
      }
      else {
        if (iVar13 == iVar7 * 4 + 0xc) {
          FUN_0098f900(0xd);
          FUN_00989440();
          *(undefined4 *)(param_1 + 0x70) = 0;
          *(undefined4 *)(param_1 + 0x6c) = 0;
          *(undefined4 *)(param_1 + 0x68) = 0;
          iVar13 = cXmlBinary::cXmlBinary_50
                             (*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
          if (iVar13 != *(int *)(param_1 + 0x68)) {
            *(int *)(param_1 + 0x68) = iVar13;
            *(int *)(param_1 + 0x70) = (iVar13 - *(int *)(param_1 + 0x6c)) / 0x14;
          }
          *(undefined1 *)(param_1 + 100) = 10;
          *(undefined1 *)(param_1 + 100) = 10;
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x240),1);
          if (0 < *(short *)(param_1 + 800)) {
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x260),1);
          }
          if ((*(int *)(param_1 + 0x358) == 4) || (*(int *)(param_1 + 0x358) == 5)) {
            *(undefined1 *)(param_1 + 0x360) = 1;
          }
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f0),2);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f4),2);
          if (*(short *)(param_1 + 0x31e) == 0) {
            FUN_00ce4d40(*(undefined4 *)(param_1 + 0x254),1,1);
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2a4),0);
            uVar8 = 0;
          }
          else {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2a4),8);
            uVar8 = 8;
          }
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2a8),uVar8);
          if (*(short *)(param_1 + 0x31e) < *(short *)(param_1 + 800)) {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2ac),8);
            uVar8 = 8;
          }
          else {
            FUN_00ce4d40(*(undefined4 *)(param_1 + 0x25c),1,1);
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2ac),0);
            uVar8 = 0;
          }
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b0),uVar8);
          iVar13 = *(int *)(param_1 + 0x358);
          if ((iVar13 == 1) || (iVar13 == 2)) {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b4),7);
            if (*(int *)(param_1 + 0x218) != 0) {
              cVar4 = FUN_00990700((int)*(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2)
                                  );
              if (cVar4 == '\x03') {
                uVar15 = FUN_00990640(extraout_ECX);
                if ((int)uVar15 != 0x14) {
                  iVar13 = FUN_00cb2760(*(undefined4 *)
                                         (param_1 + 0x27c + (int)((ulonglong)uVar15 >> 0x20) * 4));
                  FUN_00990860(*(undefined4 *)(iVar13 + 0x90),*(undefined4 *)(iVar13 + 0x94),
                               (int)*(char *)(param_1 + 0x319) % 5 == 4);
                  goto LAB_009c176b;
                }
              }
              FUN_00ce4d70(0);
            }
          }
          else if (iVar13 == 6) {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24c),7);
          }
LAB_009c176b:
          switch(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2)) {
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0x14:
          case 0x15:
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x238),1);
            FUN_00ccdf90(*(undefined4 *)(param_1 + 0x238),1,3);
          }
          *(char *)(param_1 + 0x318) = *(char *)(param_1 + 0x318) + '\x01';
        }
        *(char *)(param_1 + 0x31c) = *(char *)(param_1 + 0x31c) + '\x01';
      }
    }
    break;
  case '\x01':
    bVar1 = false;
    cVar4 = FUN_00d0d3e0(0xe,0);
    if (cVar4 != '\0') {
      bVar1 = true;
      uVar16 = FUN_00990640(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
      sVar5 = (short)((uint6)uVar16 >> 0x20);
      if ((((int)uVar16 != 0x14) && (cVar4 = (&DAT_01b73860)[sVar5 * 0x20], cVar4 != '\x01')) &&
         ((cVar4 != '\x02' && (cVar4 == '\x03')))) {
        *(short *)(param_1 + 0x346) = sVar5;
        FUN_00ce4d70(0);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b4),0);
        uVar20 = 0;
        uVar8 = FUN_00cb25d0(0xd);
        FUN_00cb2310(uVar8,uVar20);
        uVar18 = 0xffffffff;
        uVar20 = 1;
        puVar17 = &DAT_016416fa;
        uVar8 = FUN_00cb25d0(0x11);
        FUN_00cf9770(uVar8,puVar17,uVar20,uVar18);
        if (*(int *)(param_1 + 0x218) != 0) {
          FUN_00ce4d70(0);
        }
        *(char *)(param_1 + 0x318) = *(char *)(param_1 + 0x318) + '\x01';
        *(undefined1 *)(param_1 + 0x31b) = *(undefined1 *)(param_1 + 0x319);
        *(undefined2 *)(param_1 + 0x319) = 0xff00;
        *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x358);
        *(int *)(param_1 + 0x358) = (int)uVar16;
        FUN_00e5e050("core_se_sys_custom_item_powerup_decide",0);
      }
    }
    cVar4 = '\0';
    local_d9 = -1;
    local_d0 = local_d0 & 0xffffff00;
    do {
      if (bVar1) goto switchD_009c126a_caseD_4;
      cVar2 = FUN_00d0d3e0(0xd,(int)cVar4);
      if ((cVar2 != '\0') && (*(short *)(param_1 + 0x332 + cVar4 * 2) != -1)) {
        if (*(char *)(param_1 + 0x319) != cVar4) {
          *(char *)(param_1 + 0x319) = cVar4;
          setItemState_3(local_d0);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x27c + *(char *)(param_1 + 0x319) * 4),6);
          if (*(int *)(param_1 + 0x35c) == 0x14) {
            FUN_0098fc90();
            FUN_009b2b20(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
          }
          FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
          local_d9 = cVar4;
        }
        sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
        cVar4 = (&DAT_01b73860)[sVar5 * 0x20];
        if ((cVar4 == '\x01') || ((cVar4 != '\x01' && (cVar4 == '\x02')))) {
          iVar13 = cXmlBinary::cXmlBinary_50(sVar5);
          if (DAT_01b7589c < iVar13) {
            pcVar19 = "core_se_sys_custom_item_money_error";
          }
          else {
            (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0x10,0,1);
            *(undefined1 *)(param_1 + 0x318) = 3;
            pcVar19 = "core_se_sys_decide_s";
          }
          FUN_00e5e050(pcVar19,0);
        }
        else {
          cVar4 = FUN_00990700((int)sVar5);
          if (cVar4 == '\x03') {
            FUN_009b2d90(*(undefined4 *)(param_1 + 0x358),extraout_EDX);
          }
        }
        if (local_d9 != -1) goto switchD_009c126a_caseD_4;
        break;
      }
      cVar4 = cVar4 + '\x01';
      local_d0 = CONCAT31(local_d0._1_3_,cVar4);
    } while (cVar4 < '\n');
    cVar4 = FUN_00cac7e0(8,0);
    if (((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x40000,0), cVar4 == '\0')) &&
       (cVar4 = FUN_00cac9c0(0), cVar4 == '\0')) {
      cVar4 = FUN_00cac7e0(4,0);
      if (((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x80000,0), cVar4 == '\0')) &&
         (cVar4 = FUN_00cac9c0(1), cVar4 == '\0')) {
        cVar4 = FUN_00cac7e0(1,0);
        if ((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x10000,0), cVar4 == '\0')) {
          cVar4 = FUN_00cac7e0(2,0);
          if ((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x20000,0), cVar4 == '\0')) {
            cVar4 = FUN_00ce12f0(0);
            if (cVar4 == '\0') {
              cVar4 = FUN_00cac640(0x40,0);
              if ((cVar4 == '\0') && (iVar13 = FUN_00dd9400(0x58), iVar13 == 0)) {
                cVar4 = FUN_00ce1360(0);
                if ((cVar4 != '\0') || (cVar4 = FUN_00cac960(), cVar4 != '\0')) {
                  if (*(int *)(param_1 + 0x35c) == 0x14) {
                    FUN_0098fc90();
                    if ((*(int *)(param_1 + 0x358) == 4) || (*(int *)(param_1 + 0x358) == 5)) {
                      *(undefined1 *)(param_1 + 0x360) = 3;
                    }
                    FUN_009b2d00("customize");
                    setItemState_3(0xffffffff);
                    FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0x40c),0);
                    FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0x410),0);
                    uVar20 = 0;
                    uVar8 = FUN_00cb25d0(0xd);
                    FUN_00cb2310(uVar8,uVar20);
                    uVar18 = 0xffffffff;
                    uVar20 = 1;
                    puVar17 = &DAT_016416fa;
                    uVar8 = FUN_00cb25d0(0x11);
                    FUN_00cf9770(uVar8,puVar17,uVar20,uVar18);
                    if (*(int *)(param_1 + 0x218) != 0) {
                      FUN_00ce4d70(0);
                    }
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b4),0);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24c),0);
                    *(undefined1 *)(param_1 + 0x318) = 100;
                    FUN_00e5e050("core_se_sys_cancel",0);
                  }
                  else {
                    setItemState_3(0xffffffff);
                    *(undefined2 *)(param_1 + 0x346) = 0xffff;
                    FUN_00ce4d70(0);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b4),0);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24c),0);
                    uVar20 = 0;
                    uVar8 = FUN_00cb25d0(0xd);
                    FUN_00cb2310(uVar8,uVar20);
                    uVar18 = 0xffffffff;
                    uVar20 = 1;
                    puVar17 = &DAT_016416fa;
                    uVar8 = FUN_00cb25d0(0x11);
                    FUN_00cf9770(uVar8,puVar17,uVar20,uVar18);
                    *(undefined1 *)(param_1 + 0x319) = *(undefined1 *)(param_1 + 0x31b);
                    *(undefined1 *)(param_1 + 0x31a) = 0xff;
                    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x35c);
                    *(undefined4 *)(param_1 + 0x35c) = 0x14;
                    *(undefined1 *)(param_1 + 0x318) = 2;
                    FUN_00e5e050("core_se_sys_cancel",0);
                  }
                }
              }
              else {
                uVar16 = FUN_00990640(*(undefined2 *)
                                       (param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
                if (((int)uVar16 != 0x14) &&
                   (cVar4 = FUN_00990700((int)(short)((uint6)uVar16 >> 0x20)), cVar4 == '\x03')) {
                  *(undefined2 *)(param_1 + 0x346) = extraout_DX;
                  FUN_00ce4d70(0);
                  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b4),0);
                  uVar20 = 0;
                  uVar8 = FUN_00cb25d0(0xd);
                  FUN_00cb2310(uVar8,uVar20);
                  uVar18 = 0xffffffff;
                  uVar20 = 1;
                  puVar17 = &DAT_016416fa;
                  uVar8 = FUN_00cb25d0(0x11);
                  FUN_00cf9770(uVar8,puVar17,uVar20,uVar18);
                  if (*(int *)(param_1 + 0x218) != 0) {
                    FUN_00ce4d70(0);
                  }
                  *(char *)(param_1 + 0x318) = *(char *)(param_1 + 0x318) + '\x01';
                  *(undefined1 *)(param_1 + 0x31b) = *(undefined1 *)(param_1 + 0x319);
                  *(undefined2 *)(param_1 + 0x319) = 0xff00;
                  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x358);
                  *(int *)(param_1 + 0x358) = (int)uVar16;
                  FUN_00e5e050("core_se_sys_custom_item_powerup_decide",0);
                }
              }
            }
            else {
              cVar4 = FUN_00990700((int)*(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2)
                                  );
              if ((cVar4 == '\x01') || (cVar4 == '\x02')) {
                iVar13 = cXmlBinary::cXmlBinary_50(extraout_ECX_00);
                if (DAT_01b7589c < iVar13) {
                  FUN_00e5e050("core_se_sys_custom_item_money_error",0);
                }
                else {
                  (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0x10,0,1);
                  *(undefined1 *)(param_1 + 0x318) = 3;
                  FUN_00e5e050("core_se_sys_decide_s",0);
                }
              }
              else if (cVar4 == '\x03') {
                FUN_009b2d90(*(undefined4 *)(param_1 + 0x358),extraout_ECX_00);
              }
            }
            break;
          }
          cVar2 = *(char *)(param_1 + 0x319);
          if ((int)cVar2 % 5 == 4) {
            cVar4 = cVar2 + '\x01';
            *(char *)(param_1 + 0x319) = cVar4;
            if (cVar4 == '\n') {
              *(undefined1 *)(param_1 + 0x319) = 5;
              cVar4 = '\x05';
              if (*(short *)(param_1 + 0x31e) < *(short *)(param_1 + 800)) {
                setItemState_3(5);
                setItemState_3(0xffffffff);
                cXmlBinary::cXmlBinary_86(*(undefined4 *)(param_1 + 0x358),1);
                *(short *)(param_1 + 0x31e) = *(short *)(param_1 + 0x31e) + 5;
                FUN_00ce4d70(4);
                FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x25c),8);
                if (*(int *)(param_1 + 0x35c) == 0x14) {
                  FUN_0098fc90();
                }
                goto LAB_009c227d;
              }
            }
            else if (*(int *)(param_1 + 0x324) < 6) {
              cVar4 = cVar2 + -4;
              goto LAB_009c2025;
            }
          }
          else {
            cVar4 = cVar2 + '\x01';
            *(char *)(param_1 + 0x319) = cVar4;
            if (*(short *)(param_1 + 0x332 + cVar4 * 2) < 0) {
              cVar4 = cVar4 - cVar4 % '\x05';
              *(char *)(param_1 + 0x319) = cVar4;
              if (cVar4 == *(char *)(param_1 + 0x31a)) break;
            }
          }
        }
        else {
          cVar4 = *(char *)(param_1 + 0x319);
          if (((int)cVar4 % 5 == 0) && (cVar4 == '\0')) {
            if (0 < *(short *)(param_1 + 0x31e)) {
              *(short *)(param_1 + 0x31e) = *(short *)(param_1 + 0x31e) + -5;
              *(undefined1 *)(param_1 + 0x319) = 4;
              setItemState_3(4);
              setItemState_3(0xffffffff);
              FUN_00ce4d70(3);
              FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x254),8);
              if (*(int *)(param_1 + 0x35c) == 0x14) {
                FUN_0098fc90();
              }
              uVar8 = *(undefined4 *)(param_1 + 0x358);
              goto LAB_009c2276;
            }
            cVar4 = '\x04';
            *(undefined1 *)(param_1 + 0x319) = 4;
            if (*(short *)(param_1 + 0x33a) < 0) {
              cVar2 = '\x04';
              if (*(char *)(param_1 + 0x31a) < '\x04') {
                do {
                  cVar2 = cVar4;
                  if (-1 < *(short *)(param_1 + 0x332 + cVar4 * 2)) break;
                  cVar4 = cVar4 + -1;
                  cVar2 = cVar4;
                } while (*(char *)(param_1 + 0x31a) < cVar4);
              }
              cVar4 = cVar2;
              *(char *)(param_1 + 0x319) = cVar4;
              if (cVar4 == *(char *)(param_1 + 0x31a)) break;
            }
          }
          else {
            cVar4 = cVar4 + -1;
LAB_009c2025:
            *(char *)(param_1 + 0x319) = cVar4;
          }
        }
        setItemState_3(cVar4);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x27c + *(char *)(param_1 + 0x319) * 4),6);
        if (*(int *)(param_1 + 0x35c) == 0x14) {
          FUN_0098fc90();
          uVar11 = *(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
LAB_009c206f:
          FUN_009b2b20(uVar11);
          FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
        }
        else {
LAB_009c2284:
          FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
        }
      }
      else {
        if (*(char *)(param_1 + 0x319) < '\x05') {
          cVar4 = *(char *)(param_1 + 0x319) + '\x05';
          *(char *)(param_1 + 0x319) = cVar4;
          if (*(short *)(param_1 + 0x332 + cVar4 * 2) < 0) {
            if ((cVar4 < '\x05') || (*(int *)(param_1 + 0x324) < 6)) {
              *(undefined1 *)(param_1 + 0x319) = *(undefined1 *)(param_1 + 0x31a);
              break;
            }
            do {
              if (-1 < *(short *)(param_1 + 0x332 + cVar4 * 2)) break;
              cVar4 = cVar4 + -1;
            } while ('\x04' < cVar4);
            *(char *)(param_1 + 0x319) = cVar4;
          }
          setItemState_3(cVar4);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x27c + *(char *)(param_1 + 0x319) * 4),6);
          if (*(int *)(param_1 + 0x35c) != 0x14) goto LAB_009c2284;
          FUN_0098fc90();
          uVar11 = *(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
          goto LAB_009c206f;
        }
        if (*(short *)(param_1 + 0x31e) < *(short *)(param_1 + 800)) {
          setItemState_3(0xffffffff);
          cXmlBinary::cXmlBinary_86(*(undefined4 *)(param_1 + 0x358),1);
          *(short *)(param_1 + 0x31e) = *(short *)(param_1 + 0x31e) + 5;
          FUN_00ce4d70(4);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x25c),8);
          if (*(int *)(param_1 + 0x35c) == 0x14) {
            FUN_0098fc90();
          }
          goto LAB_009c227d;
        }
      }
    }
    else if (*(char *)(param_1 + 0x319) < '\x05') {
      if (*(short *)(param_1 + 0x31e) != 0) {
        *(short *)(param_1 + 0x31e) = *(short *)(param_1 + 0x31e) + -5;
        FUN_00ce4d70(3);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x254),8);
        setItemState_3(0xffffffff);
        if (*(int *)(param_1 + 0x35c) == 0x14) {
          FUN_0098fc90();
        }
        uVar8 = *(undefined4 *)(param_1 + 0x358);
LAB_009c2276:
        cXmlBinary::cXmlBinary_86(uVar8,1);
LAB_009c227d:
        *(undefined1 *)(param_1 + 0x318) = 10;
        goto LAB_009c2284;
      }
    }
    else {
      cVar4 = *(char *)(param_1 + 0x319) + -5;
      *(char *)(param_1 + 0x319) = cVar4;
      setItemState_3(cVar4);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x27c + *(char *)(param_1 + 0x319) * 4),6);
      if (*(int *)(param_1 + 0x35c) == 0x14) {
        FUN_0098fc90();
        FUN_009b2b20(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
      }
      FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
    }
    break;
  case '\x02':
    FUN_009a04a0();
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
    FUN_00ce4d70(1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_08",0,0xffffffff);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x240),0);
    cVar4 = '\0';
    local_d4 = (undefined2 *)(param_1 + 0x328);
    local_d8 = (short *)(param_1 + 0x268);
    local_d0 = local_d0 & 0xffffff00;
    do {
      FUN_009a0be0(local_d0);
      uVar8 = FUN_00e03ea0("c_item_04");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x2f4),uVar8);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f0),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2f4),0);
      FUN_00cb2310(*(undefined4 *)local_d8,0);
      local_d8 = (short *)((int)local_d8 + 4);
      cVar4 = cVar4 + '\x01';
      *local_d4 = 0xffff;
      local_d4 = local_d4 + 1;
      local_d0 = CONCAT31(local_d0._1_3_,cVar4);
    } while (cVar4 < '\x0f');
    *(undefined2 *)(param_1 + 0x31e) = 0;
    uVar8 = cXmlBinary::cXmlBinary_88(*(undefined4 *)(param_1 + 0x358));
    *(undefined4 *)(param_1 + 0x324) = uVar8;
    cXmlBinary::cXmlBinary_86(*(undefined4 *)(param_1 + 0x358),0);
    iVar13 = *(int *)(param_1 + 0x324) / 5;
    if (iVar13 * 5 < *(int *)(param_1 + 0x324)) {
      sVar5 = (short)iVar13 + 1;
    }
    else {
      sVar5 = *(short *)(param_1 + 0x324) / 5;
    }
    sVar5 = sVar5 * 5 + -10;
    *(short *)(param_1 + 800) = sVar5;
    if (sVar5 < 0) {
      *(undefined2 *)(param_1 + 800) = 0;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 600),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x260),0);
    setItemState_3(*(undefined1 *)(param_1 + 0x319));
    if (*(int *)(param_1 + 0x218) != 0) {
      FUN_00ce4d70(0);
    }
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b4),0);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x22c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x230),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x238),0);
    FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0x40c),0);
    FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0x410),0);
    FUN_00ce4d70(1);
    *(undefined1 *)(param_1 + 0x31c) = 0;
    *(undefined1 *)(param_1 + 0x318) = 0;
    break;
  case '\x03':
    iVar13 = FUN_00999fa0();
    if (iVar13 == 2) {
      uVar6 = (uint)*(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
      if (uVar6 < 0x101) {
        (&DAT_01b73860)[uVar6 * 0x20] = 3;
      }
      else {
        FUN_00dd5650("cCustomizeSelMenu::setItemState idx[%d] state[%d]",uVar6,3);
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
      FUN_00ce4d70(4);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),"CUSTOM_ETC_07",0,0xffffffff);
      if ((byte)(*(char *)(param_1 + 0x319) + 5U) < 0xf) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x2f8),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x304),1);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x308),&DAT_016563a8);
      }
      cVar4 = '\0';
      if (*(int *)(param_1 + 0x358) == 4) {
        FUN_0098fed0(*(char *)(param_1 + 0x319) + '\x05');
        sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
        if (sVar5 < 0x1f) {
          if (sVar5 == 0x1c) {
            uVar8 = 2;
          }
          else if (sVar5 == 0x1d) {
            uVar8 = 3;
          }
          else {
            if (sVar5 != 0x1e) goto switchD_009c2646_default;
            uVar8 = 4;
          }
          iVar13 = FUN_009c51b0(uVar8,0xffffffff);
          if (iVar13 != 0) {
            sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
LAB_009c2680:
            cVar4 = FUN_00990700(sVar5 + 1);
            if (cVar4 == '\0') {
              setItemState(extraout_ECX_01,1);
              *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
            }
          }
        }
switchD_009c2646_default:
        cVar4 = '\x01';
      }
      else if (*(int *)(param_1 + 0x358) == 5) {
        FUN_0098fed0(*(char *)(param_1 + 0x319) + '\x05');
        sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
        if (sVar5 < 0x24) {
          switch(sVar5) {
          case 0x20:
            uVar8 = 2;
            break;
          case 0x21:
            uVar8 = 3;
            break;
          case 0x22:
            uVar8 = 4;
            break;
          case 0x23:
            uVar8 = 6;
            break;
          default:
            goto switchD_009c2646_default;
          }
          iVar13 = FUN_009c51b0(uVar8,0xffffffff);
          if (iVar13 != 0) {
            sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
            goto LAB_009c2680;
          }
        }
        goto switchD_009c2646_default;
      }
      if ((*(int *)(param_1 + 0x35c) == 1) || (*(int *)(param_1 + 0x35c) == 2)) {
        cVar4 = FUN_009a0ed0(*(undefined4 *)(param_1 + 0x358),
                             *(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
      }
      else if (*(int *)(param_1 + 0x358) == 6) {
        cVar4 = FUN_009a1470(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
      }
      if (cVar4 != '\0') {
        cXmlBinary::cXmlBinary_86(*(undefined4 *)(param_1 + 0x358),0);
        if (*(int *)(param_1 + 0x324) - (int)*(short *)(param_1 + 0x31e) < 0xb) {
          bVar3 = *(char *)(param_1 + 0x324) - *(char *)(param_1 + 0x31e);
        }
        else {
          bVar3 = 10;
        }
        if ('\0' < (char)bVar3) {
          puVar14 = (undefined4 *)(param_1 + 0x27c);
          uVar6 = (uint)bVar3;
          do {
            iVar13 = FUN_00cb2480(*puVar14);
            if (iVar13 == 0) {
              FUN_00cb2310(*puVar14,1);
              FUN_00ce4ce0(*puVar14,5);
              FUN_00e5e050("core_se_sys_icon_open",0);
            }
            puVar14 = puVar14 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      if ((6 < *(int *)(param_1 + 0x358)) && (*(int *)(param_1 + 0x358) < 0x13)) {
        FUN_0098fed0(*(char *)(param_1 + 0x319) + '\x05');
      }
      if (*(int *)(param_1 + 0x358) == 6) {
        FUN_009b2d90(6,*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
      }
      if ((*(int *)(param_1 + 0x358) == 1) || (*(int *)(param_1 + 0x358) == 2)) {
        iVar13 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x27c + *(char *)(param_1 + 0x319) * 4));
        FUN_00990860(*(undefined4 *)(iVar13 + 0x90),*(undefined4 *)(iVar13 + 0x94),
                     (int)*(char *)(param_1 + 0x319) % 5 == 4);
        iVar13 = FUN_00990640(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
        if ((iVar13 == 0x14) && (*(int *)(param_1 + 0x218) != 0)) {
          FUN_00ce4d70(0);
        }
      }
      sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
      if (sVar5 == 0x16) {
        if (((DAT_01b73e20 != '\x01') && (DAT_01b73e20 != '\x02')) && (DAT_01b73e20 != '\x03')) {
          DAT_01b73e20 = '\x01';
          DAT_01b73e40 = 1;
        }
      }
      else if (((sVar5 == 0x18) && (DAT_01b73e80 != '\x01')) &&
              ((DAT_01b73e80 != '\x02' && (DAT_01b73e80 != '\x03')))) {
        DAT_01b73e80 = '\x01';
      }
      iVar7 = cXmlBinary::cXmlBinary_50
                        (*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
      iVar7 = DAT_01b7589c - iVar7;
      iVar13 = *(int *)(param_1 + 0x220);
      DAT_01b7589c = iVar7;
      if (iVar7 != *(int *)(iVar13 + 0x58)) {
        *(int *)(iVar13 + 0x58) = iVar7;
        *(int *)(iVar13 + 0x60) = (iVar7 - *(int *)(iVar13 + 0x5c)) / 0x14;
      }
      *(undefined1 *)(iVar13 + 0x54) = 10;
      *(undefined1 *)(param_1 + 0x318) = 1;
      switch(*(undefined4 *)(param_1 + 0x358)) {
      case 0:
      case 3:
        pcVar19 = "customize_available";
        break;
      case 1:
      case 2:
        pcVar19 = "customize_weapon_available";
        break;
      default:
        pcVar19 = "customize_upgraded";
        break;
      case 6:
        pcVar19 = "customize_equipped";
      }
      FUN_009b2d00(pcVar19);
      if (*(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2) == 0x15) {
        FUN_009b2d00("customize_available");
      }
      FUN_00e5e050("core_se_sys_custom_item_buy",0);
    }
    else if (iVar13 == 1) {
      *(undefined1 *)(param_1 + 0x318) = 1;
    }
    break;
  case '\n':
    iVar13 = FUN_00ce4dd0(4);
    if ((iVar13 != 0) && (iVar13 = FUN_00ce4dd0(3), iVar13 != 0)) {
      *(undefined1 *)(param_1 + 0x318) = 1;
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x264),0);
      puVar12 = (undefined2 *)(param_1 + 0x328);
      puVar14 = (undefined4 *)(param_1 + 0x268);
      local_d4 = (undefined2 *)0xf;
      do {
        FUN_00ce4d40(*puVar14,5,1);
        *puVar12 = 0xffff;
        puVar14 = puVar14 + 1;
        puVar12 = puVar12 + 1;
        local_d4 = (undefined2 *)((int)local_d4 + -1);
      } while (local_d4 != (undefined2 *)0x0);
      if (*(short *)(param_1 + 0x31e) == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2a4),0);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2a8),0);
        uVar8 = 0;
LAB_009c2a33:
        FUN_00cb2310(*(undefined4 *)(param_1 + 600),uVar8);
      }
      else {
        iVar13 = FUN_00cb2480(*(undefined4 *)(param_1 + 600));
        if (iVar13 == 0) {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2a4),8);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2a8),8);
          uVar8 = 1;
          goto LAB_009c2a33;
        }
      }
      if (*(short *)(param_1 + 0x31e) < *(short *)(param_1 + 800)) {
        iVar13 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x260));
        if (iVar13 == 0) {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2ac),8);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b0),8);
          uVar8 = 1;
          goto LAB_009c2aa9;
        }
      }
      else {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2ac),0);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2b0),0);
        uVar8 = 0;
LAB_009c2aa9:
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x260),uVar8);
      }
      cXmlBinary::cXmlBinary_86(*(undefined4 *)(param_1 + 0x358),0);
      cVar4 = *(char *)(param_1 + 0x319);
      if (*(short *)(param_1 + 0x332 + cVar4 * 2) < 0) {
        while ((-1 < cVar4 && (*(short *)(param_1 + 0x332 + cVar4 * 2) < 0))) {
          cVar4 = cVar4 + -1;
        }
        *(char *)(param_1 + 0x319) = cVar4;
      }
      setItemState_3(*(undefined1 *)(param_1 + 0x319));
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x27c + *(char *)(param_1 + 0x319) * 4),6);
      FUN_009b2b20(*(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2));
      local_d8 = (short *)(param_1 + 0x328);
      cVar4 = '\0';
      puVar14 = (undefined4 *)(param_1 + 0x268);
      do {
        if ((cVar4 < '\x05') || (-1 < *local_d8)) {
          uVar8 = *puVar14;
          uVar20 = 1;
        }
        else {
          uVar8 = *puVar14;
          uVar20 = 0;
        }
        FUN_00cb2310(uVar8,uVar20);
        local_d8 = local_d8 + 1;
        cVar4 = cVar4 + '\x01';
        puVar14 = puVar14 + 1;
      } while (cVar4 < '\x0f');
    }
    break;
  case 'd':
    if (*(char *)(param_1 + 0x360) == '\0') {
      *(char *)(param_1 + 0x318) = *(char *)(param_1 + 0x318) + '\x01';
    }
  }
switchD_009c126a_caseD_4:
  iVar13 = *(int *)(param_1 + 0x358);
  if ((iVar13 == 0) || (iVar13 == 3)) {
    switch(*(undefined1 *)(param_1 + 0x360)) {
    case 0:
      if ((((*(char *)(param_1 + 0x37c) != '\0') && (DAT_01bea058 == 0)) &&
          ((DAT_01bea054 == DAT_01bea050 &&
           (((1 < DAT_01bea05c && (DAT_01bea044 == 0)) && (DAT_01bea040 == DAT_01bea03c)))))) &&
         ((DAT_01bea030 == 2 ||
          ((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) &&
            ((((DAT_01bea018 == 0 && ((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)))) &&
              (DAT_01bea000 == DAT_01be9ffc)) &&
             ((((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)) && (DAT_01be9ff0 == 0)) &&
              ((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)))))))) &&
           (DAT_01be9fc4 == DAT_01be9fc0)))))) {
        DAT_01be9fb4 = FUN_009c7420(*(undefined4 *)(param_1 + 0x374));
        uVar6 = *(uint *)(param_1 + 0x378);
        DAT_01bea028 = DAT_01be9fb4;
        if (uVar6 < 4) {
          DAT_01be9fb0 = uVar6;
          DAT_01bea014 = uVar6;
          *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
          *(undefined1 *)(param_1 + 0x37c) = 0;
        }
        else {
          FUN_00dd5650(&DAT_01655734,uVar6);
          *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
          *(undefined1 *)(param_1 + 0x37c) = 0;
        }
      }
      break;
    case 1:
      if (((((DAT_01bea058 == 0) && (DAT_01bea054 == DAT_01bea050)) &&
           ((1 < DAT_01bea05c && ((DAT_01bea044 == 0 && (DAT_01bea040 == DAT_01bea03c)))))) &&
          ((DAT_01bea030 == 2 ||
           (((((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) && (DAT_01bea018 == 0)) &&
               ((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)))) &&
              (DAT_01bea000 == DAT_01be9ffc)) &&
             ((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)))) &&
            ((DAT_01be9ff0 == 0 &&
             (((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)) &&
              (DAT_01be9fc4 == DAT_01be9fc0)))))))))) && (*(char *)(param_1 + 0x318) == '\x01')) {
        iVar7 = *(int *)(param_1 + 0x220);
        if (iVar13 == 0) {
          FUN_0040b190();
          local_40 = 0xbfa66666;
          local_3c = 0xbf800000;
          local_28 = 0x3f7ae148;
          local_24 = 0x3f7ae148;
          local_20 = 0x3f7ae148;
        }
        else {
          FUN_0040b190();
          local_40 = 0xbf266666;
          local_3c = 0xbfd47ae1;
          local_38 = 0x3fcccccd;
        }
        FUN_00a7ca40();
        FUN_00de3530();
        if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
          uVar8 = *DAT_01bea01c;
        }
        else {
          uVar8 = 0xffffffff;
        }
        local_bc = 0x10010;
        local_b8 = 0x10010;
        local_b4 = local_90;
        local_c0 = "Pl0010";
        local_b0 = 0;
        cObjReadManager::getDataAtSet(&local_d0,uVar8,0);
        uVar8 = FUN_00de44b0(&DAT_01657e1c,0);
        local_a0 = cModelDataManager::EntryModelData(uVar8,0);
        local_94 = FUN_00de4550("_param.bxm",0);
        iVar13 = FUN_00de44b0(&DAT_0164518c,0);
        uVar8 = FUN_00de44b0(&DAT_01645174,0);
        local_98 = FUN_00de44b0(&DAT_01645170,0);
        local_9c = uVar8;
        if (iVar13 != 0) {
          local_9c = 0;
          local_98 = iVar13;
        }
        iVar13 = FUN_00a81b80(&local_c0);
        if (iVar13 != 0) {
          piVar10 = (int *)FUN_00c13920();
          (**(code **)(*piVar10 + 0x60))(0xffffffff);
          *(int *)(iVar7 + 0x468) = iVar13;
          piVar10 = (int *)FUN_00a7c8a0();
          if (piVar10 != (int *)0x0) {
            Behavior::setupCloth(&local_d0);
            FUN_008e3c10();
            (**(code **)(*piVar10 + 0x20))();
            puVar21 = &DAT_01be9db8;
            (**(code **)(*piVar10 + 4))(&DAT_01be9db8);
            iVar13 = FUN_00dd6d80(puVar21);
            if (iVar13 != 0) {
              piVar10[0x2dd] = 1;
            }
          }
        }
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x220) + 0x468);
        *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
        *(undefined4 *)(param_1 + 0x364) = uVar8;
        *(undefined4 *)(param_1 + 0x370) = 0;
      }
      break;
    case 2:
      if (((*(int *)(param_1 + 0x370) < 8) &&
          (iVar13 = *(int *)(param_1 + 0x370) + 1, *(int *)(param_1 + 0x370) = iVar13, iVar13 == 8))
         && (*(int *)(param_1 + 0x364) != 0)) {
        piVar10 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar10 + 0x1c))();
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x364) != 0) {
        FUN_0098f980();
        *(undefined4 *)(param_1 + 0x364) = 0;
      }
      *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
      break;
    case 4:
switchD_009c33cc_caseD_4:
      *(undefined1 *)(param_1 + 0x360) = 0;
    }
    goto switchD_009c2c44_default;
  }
  if ((iVar13 == 4) || (iVar13 == 5)) {
    if (*(char *)(param_1 + 0x360) == '\x01') {
      iVar13 = FUN_00a82090("CustomizeModel",0x70070,0);
      *(int *)(param_1 + 0x364) = iVar13;
      if (iVar13 != 0) {
        iVar13 = FUN_00a7c800();
        *(undefined4 *)(iVar13 + 0x50) = 0xbf99999a;
        *(undefined4 *)(iVar13 + 0x54) = 0xbecccccd;
        *(undefined4 *)(iVar13 + 0x90) = 0x3f060a92;
        piVar10 = (int *)FUN_00a7c8a0();
        if (piVar10 != (int *)0x0) {
          puVar21 = &DAT_01b35390;
          (**(code **)(*piVar10 + 4))(&DAT_01b35390);
          FUN_00dd6d80(puVar21);
        }
        if (*(int *)(param_1 + 0x358) == 4) {
          uVar8 = 0x3855170f;
        }
        else {
          uVar8 = 0x4cbfda41;
        }
        uVar8 = FUN_0094dfd0(uVar8);
        FUN_005e9f50(uVar8);
        FUN_005e86c0(1);
        FUN_005e8720(1);
      }
      *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
    }
    else if (*(char *)(param_1 + 0x360) == '\x03') {
      if (*(int *)(param_1 + 0x364) != 0) {
        FUN_00a805f0();
        *(undefined4 *)(param_1 + 0x364) = 0;
      }
      goto switchD_009c33cc_caseD_4;
    }
    goto switchD_009c2c44_default;
  }
  if (iVar13 == 6) {
    if (*(char *)(param_1 + 0x360) == '\x01') {
      uVar8 = FUN_00e9d0b0(*(undefined4 *)
                            (*(int *)(param_1 + 0x224) + -0x94 +
                            *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2) * 4));
      FUN_00fa25d0(uVar8);
      *(int *)(param_1 + 900) = param_1 + 0x394;
      if (*(int *)(param_1 + 0x3a0) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x39c);
      }
      *(undefined4 *)(param_1 + 0x390) = uVar8;
      FUN_00ccde60(*(undefined4 *)(param_1 + 0x24c),param_1 + 0x380);
      *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
    }
    goto switchD_009c2c44_default;
  }
  switch(*(char *)(param_1 + 0x360)) {
  case '\0':
    if (((((*(int *)(param_1 + 0x368) != -1) && (DAT_01bea058 == 0)) &&
         (DAT_01bea054 == DAT_01bea050)) &&
        (((1 < DAT_01bea05c && (DAT_01bea044 == 0)) && (DAT_01bea040 == DAT_01bea03c)))) &&
       ((DAT_01bea030 == 2 ||
        (((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) &&
           ((DAT_01bea018 == 0 &&
            ((((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)) &&
              (DAT_01bea000 == DAT_01be9ffc)) &&
             ((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)))))))) &&
          ((DAT_01be9ff0 == 0 && ((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)))))) &&
         (DAT_01be9fc4 == DAT_01be9fc0)))))) {
      FUN_00a00a60(*(int *)(param_1 + 0x368),0);
      *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
    }
    break;
  case '\x01':
    iVar13 = FUN_00a00ca0(*(undefined4 *)(param_1 + 0x368),0);
    if (((iVar13 == 0) || (*(int *)(param_1 + 0x364) != 0)) ||
       (*(char *)(param_1 + 0x318) != '\x01')) break;
    uVar8 = FUN_00a82090("CustomyModel",*(undefined4 *)(param_1 + 0x368),0);
    *(undefined4 *)(param_1 + 0x364) = uVar8;
    iVar7 = FUN_00a7c800();
    *(undefined4 *)(iVar7 + 0x50) = 0xbf800000;
    uVar8 = 0;
    *(undefined4 *)(iVar7 + 0x58) = 0;
    iVar13 = *(int *)(param_1 + 0x358);
    if (iVar13 != 1) {
      if (*(int *)(param_1 + 0x35c) == 1) {
        if (iVar13 == 1) goto LAB_009c3043;
        uVar11 = *(undefined2 *)(param_1 + 0x346);
        goto LAB_009c305b;
      }
      if (iVar13 != 2) {
        if (*(int *)(param_1 + 0x35c) == 2) {
          if (iVar13 == 2) goto LAB_009c2e4d;
          sVar5 = *(short *)(param_1 + 0x346);
          goto LAB_009c2e65;
        }
        goto LAB_009c31f2;
      }
LAB_009c2e4d:
      sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
LAB_009c2e65:
      if (sVar5 == 0x16) {
        *(undefined4 *)(iVar7 + 0x50) = 0xbf90a3d7;
        *(undefined4 *)(iVar7 + 0x54) = 0x3c23d70a;
        *(undefined4 *)(iVar7 + 0x58) = 0x3d23d70a;
        *(undefined4 *)(iVar7 + 0x70) = 0x3f000000;
        *(undefined4 *)(iVar7 + 0x74) = 0x3f000000;
        *(undefined4 *)(iVar7 + 0x78) = 0x3f000000;
        *(undefined4 *)(iVar7 + 0x90) = 0x3f81205e;
        *(undefined4 *)(iVar7 + 0x94) = 0xbf51ff7e;
        *(undefined4 *)(iVar7 + 0x98) = 0xbd567750;
        *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
        break;
      }
      if (sVar5 == 0x17) {
        *(undefined4 *)(iVar7 + 0x50) = 0xbfa3d70a;
        *(undefined4 *)(iVar7 + 0x54) = 0xbe75c28f;
        *(undefined4 *)(iVar7 + 0x58) = 0x3e428f5c;
        *(undefined4 *)(iVar7 + 0x70) = 0x3ff1eb85;
        *(undefined4 *)(iVar7 + 0x74) = 0x3ff1eb85;
        *(undefined4 *)(iVar7 + 0x78) = 0x3ff1eb85;
        *(undefined4 *)(iVar7 + 0x90) = 0xc0948ffb;
        *(undefined4 *)(iVar7 + 0x94) = 0x3f0d30ae;
        *(undefined4 *)(iVar7 + 0x98) = 0x40243359;
        *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
        break;
      }
      if (sVar5 == 0x18) {
        *(undefined4 *)(iVar7 + 0x50) = 0xbf87ae14;
        *(undefined4 *)(iVar7 + 0x54) = 0x3f2b851f;
        *(undefined4 *)(iVar7 + 0x58) = 0xbe0f5c29;
        *(undefined4 *)(iVar7 + 0x70) = 0x3f7ae148;
        *(undefined4 *)(iVar7 + 0x74) = 0x3f7ae148;
        *(undefined4 *)(iVar7 + 0x78) = 0x3f7ae148;
        *(undefined4 *)(iVar7 + 0x90) = 0xbfbbe196;
        *(undefined4 *)(iVar7 + 0x94) = 0x40490fdb;
        *(undefined4 *)(iVar7 + 0x98) = 0x400cbe4c;
        iVar13 = *(int *)(iVar7 + 0x360);
        if (*(int *)(iVar7 + 0x360) == 0) {
          iVar13 = iVar7;
        }
        if ((5 < *(short *)(iVar13 + 0x358)) &&
           (iVar13 = *(int *)(iVar13 + 0x350), iVar13 != -0x370)) {
          *(undefined4 *)(iVar13 + 0x3c0) = 0x3e8f5c29;
          *(undefined4 *)(iVar13 + 0x3c8) = 0x3e8f5c29;
          *(undefined4 *)(iVar13 + 0x400) = 0x3edf66f3;
          *(undefined4 *)(iVar13 + 0x408) = 0x3fc90fdb;
        }
        iVar13 = *(int *)(iVar7 + 0x360);
        if (*(int *)(iVar7 + 0x360) == 0) {
          iVar13 = iVar7;
        }
        if ((0 < *(short *)(iVar13 + 0x358)) && (*(int *)(iVar13 + 0x350) != 0)) {
          *(undefined4 *)(*(int *)(iVar13 + 0x350) + 0x94) = 0xbf685696;
        }
        if (*(int *)(iVar7 + 0x360) != 0) {
          iVar7 = *(int *)(iVar7 + 0x360);
        }
        if ((1 < *(short *)(iVar7 + 0x358)) && (*(int *)(iVar7 + 0x350) != -0xb0)) {
          *(undefined4 *)(*(int *)(iVar7 + 0x350) + 0x144) = 0xbeb2b8c2;
          *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
          break;
        }
      }
      goto LAB_009c31f2;
    }
LAB_009c3043:
    uVar11 = *(undefined2 *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
LAB_009c305b:
    *(undefined4 *)(iVar7 + 0x90) = 0x3f137207;
    *(undefined4 *)(iVar7 + 0x94) = 0xbf714639;
    *(undefined4 *)(iVar7 + 0x98) = 0x3edf66f3;
    *(undefined4 *)(iVar7 + 0x70) = 0x3f333333;
    *(undefined4 *)(iVar7 + 0x74) = 0x3f333333;
    *(undefined4 *)(iVar7 + 0x78) = 0x3f333333;
    switch(uVar11) {
    case 0xd:
      *(undefined4 *)(iVar7 + 0x50) = 0xbf4f5c29;
      *(undefined4 *)(iVar7 + 0x54) = 0x3eeb851f;
      uVar8 = 0xbe6147ae;
      goto LAB_009c30be;
    case 0xe:
      *(undefined4 *)(iVar7 + 0x50) = 0xbf4ccccd;
      *(undefined4 *)(iVar7 + 0x54) = 0x3ed70a3d;
LAB_009c30be:
      *(undefined4 *)(iVar7 + 0x58) = uVar8;
      *(undefined4 *)(iVar7 + 0x70) = 0x3fd70a3d;
      *(undefined4 *)(iVar7 + 0x74) = 0x3fd70a3d;
      *(undefined4 *)(iVar7 + 0x78) = 0x3fd70a3d;
      break;
    case 0xf:
      *(undefined4 *)(iVar7 + 0x50) = 0xbf3d70a4;
      *(undefined4 *)(iVar7 + 0x54) = 0x3ee147ae;
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x70) = 0x3fc28f5c;
      *(undefined4 *)(iVar7 + 0x74) = 0x3fc28f5c;
      *(undefined4 *)(iVar7 + 0x78) = 0x3fc28f5c;
      break;
    case 0x10:
      *(undefined4 *)(iVar7 + 0x50) = 0xbf28f5c3;
      *(undefined4 *)(iVar7 + 0x54) = 0x3f028f5c;
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x70) = 0x3fa8f5c3;
      *(undefined4 *)(iVar7 + 0x74) = 0x3fa8f5c3;
      *(undefined4 *)(iVar7 + 0x78) = 0x3fa8f5c3;
      break;
    case 0x11:
    case 0x15:
      *(undefined4 *)(iVar7 + 0x50) = 0xbf47ae14;
      *(undefined4 *)(iVar7 + 0x54) = 0x3f000000;
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x70) = 0x3feb851f;
      *(undefined4 *)(iVar7 + 0x74) = 0x3feb851f;
      *(undefined4 *)(iVar7 + 0x78) = 0x3feb851f;
      *(undefined4 *)(iVar7 + 0x90) = 0xbe22a303;
      *(undefined4 *)(iVar7 + 0x94) = 0x3fa31564;
      *(undefined4 *)(iVar7 + 0x98) = 0xc0148ffb;
      break;
    case 0x12:
    case 0x14:
      *(undefined4 *)(iVar7 + 0x50) = 0xbf23d70a;
      *(undefined4 *)(iVar7 + 0x54) = 0x3f0ccccd;
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x70) = 0x3fb851ec;
      *(undefined4 *)(iVar7 + 0x74) = 0x3fb851ec;
      *(undefined4 *)(iVar7 + 0x78) = 0x3fb851ec;
      break;
    case 0x13:
      *(undefined4 *)(iVar7 + 0x50) = 0xbf70a3d7;
      *(undefined4 *)(iVar7 + 0x54) = 0x3ec28f5c;
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x70) = 0x3fd33333;
      *(undefined4 *)(iVar7 + 0x74) = 0x3fd33333;
      *(undefined4 *)(iVar7 + 0x78) = 0x3fd33333;
    }
    uVar8 = FUN_00a7c8a0();
    iVar13 = FUN_0099a3d0(uVar8);
    if (iVar13 != 0) {
      FUN_00c11be0();
    }
LAB_009c31f2:
    *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
    break;
  case '\x02':
    if (iVar13 == 1) {
LAB_009c320d:
      sVar5 = *(short *)(param_1 + 0x332 + *(char *)(param_1 + 0x319) * 2);
    }
    else {
      if (*(int *)(param_1 + 0x35c) != 1) break;
      if (iVar13 == 1) goto LAB_009c320d;
      sVar5 = *(short *)(param_1 + 0x346);
    }
    if (sVar5 == 0x10) {
      uVar8 = FUN_00a7c8a0();
      iVar13 = FUN_0099a3d0(uVar8);
      if (iVar13 != 0) {
        FUN_00c11f90();
      }
    }
    break;
  case '\x03':
    iVar13 = FUN_00a00da0(*(undefined4 *)(param_1 + 0x36c),0);
    if (iVar13 != 0) goto switchD_009c33cc_caseD_4;
  }
switchD_009c2c44_default:
  if (*(int *)(param_1 + 0x364) == 0) goto LAB_009c39e9;
  if (*(int *)(param_1 + 0x358) == 0) {
    cVar4 = FUN_00cac570(0x100000,0);
    if (cVar4 == '\0') {
      cVar4 = FUN_00cac570(0x200000,0);
      if (cVar4 == '\0') goto LAB_009c399d;
      puVar9 = (uint *)FUN_00a7c8d0();
      local_d0 = *puVar9;
      local_c8 = puVar9[2];
      local_c4 = puVar9[3];
      local_cc = (float)puVar9[1] - 0.08726646;
    }
    else {
      puVar9 = (uint *)FUN_00a7c8d0();
      local_d0 = *puVar9;
      local_c8 = puVar9[2];
      local_c4 = puVar9[3];
      local_cc = (float)puVar9[1] + 0.08726646;
    }
    FUN_00a7cf00(&local_d0);
  }
LAB_009c399d:
  iVar13 = *(int *)(param_1 + 0x358);
  if ((((iVar13 != 0) && (iVar13 != 3)) && (iVar13 != 4)) &&
     ((iVar13 != 5 && (piVar10 = (int *)FUN_00a7c8a0(), piVar10 != (int *)0x0)))) {
    (**(code **)(*piVar10 + 100))();
    (**(code **)(*piVar10 + 0x4c))();
    (**(code **)(*piVar10 + 0x50))();
    switchD_0080dbae::default();
  }
LAB_009c39e9:
  FUN_009a0530();
  if (*(int **)(param_1 + 0x218) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x218) + 4))();
  }
  return;
}

// 009C3BA0  FUN_009c3ba0  size=1  [callgraph]
void FUN_009c3ba0(void)

{
  return;
}

// 009C3BD0  FUN_009c3bd0  size=71  [callgraph]
undefined4 FUN_009c3bd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00dfd7a0(0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = FUN_00dfd6c0();
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00dfd6b0(iVar3);
      iVar1 = FUN_00dfd680(0,uVar2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_00dfd6c0();
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 009C3C50  FUN_009c3c50  size=1  [callgraph]
void FUN_009c3c50(void)

{
  return;
}

// 009C3CE0  FUN_009c3ce0  size=87  [callgraph]
void FUN_009c3ce0(void)

{
  char cVar1;
  int iVar2;
  
  if (DAT_01b395ac == 0) {
    cVar1 = (DAT_01b395a8 != 0) + '\x02';
  }
  else {
    cVar1 = '\x01';
  }
  iVar2 = FUN_00dfe870(0,cVar1);
  if (iVar2 != 0) {
    DAT_01b395ac = 0;
    DAT_01b5428c = 2;
    DAT_01b395a8 = 0;
    return;
  }
  DAT_01b54280 = 0x3c;
  return;
}

// 009C3E30  FUN_009c3e30  size=482  [callgraph]
void FUN_009c3e30(void *param_1,int param_2)

{
  if (param_2 == 0) {
    _memset(param_1,0,0x600);
    *(undefined4 *)((int)param_1 + 0x900) = 0;
    *(undefined4 *)((int)param_1 + 0x904) = 0;
    *(undefined4 *)((int)param_1 + 0x908) = 0;
    *(undefined4 *)((int)param_1 + 0x90c) = 0;
    *(undefined4 *)((int)param_1 + 0x910) = 0;
    *(undefined4 *)((int)param_1 + 0x914) = 0;
    *(undefined4 *)((int)param_1 + 0x918) = 0;
    *(undefined4 *)((int)param_1 + 0x91c) = 0;
    *(undefined4 *)((int)param_1 + 0x920) = 0;
    *(undefined4 *)((int)param_1 + 0x924) = 0;
    *(undefined4 *)((int)param_1 + 0x928) = 0;
    *(undefined4 *)((int)param_1 + 0x92c) = 0;
    *(undefined4 *)((int)param_1 + 0x930) = 0;
    *(undefined4 *)((int)param_1 + 0x934) = 0;
    *(undefined4 *)((int)param_1 + 0x938) = 0;
    *(undefined4 *)((int)param_1 + 0x93c) = 0;
    *(undefined4 *)((int)param_1 + 0x940) = 0;
    *(undefined4 *)((int)param_1 + 0x944) = 0;
    *(undefined4 *)((int)param_1 + 0x948) = 0;
    *(undefined4 *)((int)param_1 + 0x94c) = 0;
    *(undefined4 *)((int)param_1 + 0x950) = 0;
    *(undefined4 *)((int)param_1 + 0x954) = 0;
    *(undefined4 *)((int)param_1 + 0x958) = 0;
    *(undefined4 *)((int)param_1 + 0x95c) = 0;
    *(undefined4 *)((int)param_1 + 0x960) = 0;
    *(undefined4 *)((int)param_1 + 0x964) = 0;
    *(undefined4 *)((int)param_1 + 0x968) = 0;
    *(undefined4 *)((int)param_1 + 0x96c) = 0;
    *(undefined4 *)((int)param_1 + 0x970) = 0;
    *(undefined4 *)((int)param_1 + 0x974) = 0;
    *(undefined4 *)((int)param_1 + 0x978) = 0;
    *(undefined4 *)((int)param_1 + 0x97c) = 0;
    *(undefined4 *)((int)param_1 + 0x980) = 0;
    *(undefined4 *)((int)param_1 + 0x984) = 0;
    *(undefined4 *)((int)param_1 + 0x988) = 0;
    *(undefined4 *)((int)param_1 + 0x98c) = 0;
    *(undefined4 *)((int)param_1 + 0x990) = 0;
    *(undefined4 *)((int)param_1 + 0x994) = 0;
    *(undefined4 *)((int)param_1 + 0x998) = 0;
    *(undefined4 *)((int)param_1 + 0x99c) = 0;
    _memset((void *)((int)param_1 + 0x878),0,0x80);
  }
  else if (param_2 == 1) {
    _memset((void *)((int)param_1 + 0x600),0,0xc0);
    *(undefined4 *)((int)param_1 + 0x9a0) = 0;
    *(undefined4 *)((int)param_1 + 0x9a4) = 0;
    *(undefined4 *)((int)param_1 + 0x9a8) = 0;
    *(undefined4 *)((int)param_1 + 0x9ac) = 0;
    *(undefined4 *)((int)param_1 + 0x9b0) = 0;
  }
  else if (param_2 == 2) {
    _memset((void *)((int)param_1 + 0x6c0),0,0xc0);
    *(undefined4 *)((int)param_1 + 0x9b4) = 0;
    *(undefined4 *)((int)param_1 + 0x9b8) = 0;
    *(undefined4 *)((int)param_1 + 0x9bc) = 0;
    *(undefined4 *)((int)param_1 + 0x9c0) = 0;
    *(undefined4 *)((int)param_1 + 0x9c4) = 0;
  }
  _memset((void *)((int)param_1 + 0x780),0,0xc0);
  _memset((void *)((int)param_1 + 0x840),0,0x30);
  *(undefined4 *)((int)param_1 + 0x874) = 0;
  *(undefined4 *)((int)param_1 + 0x9c8) = 0;
  *(undefined4 *)((int)param_1 + 0x8fc) = 0;
  *(undefined4 *)((int)param_1 + 0x8f8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x870) = 0xffffffff;
  return;
}

// 009C4020  FUN_009c4020  size=249  [callgraph]
void FUN_009c4020(int param_1)

{
  *(undefined4 *)(param_1 + 0x9cc) = 0;
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  *(undefined4 *)(param_1 + 0x9d4) = 0;
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  *(undefined4 *)(param_1 + 0x9dc) = 0;
  *(undefined4 *)(param_1 + 0x9e0) = 0;
  *(undefined4 *)(param_1 + 0x9e4) = 0;
  *(undefined4 *)(param_1 + 0x9e8) = 0;
  *(undefined4 *)(param_1 + 0x9ec) = 0;
  *(undefined4 *)(param_1 + 0x9f0) = 0;
  *(undefined4 *)(param_1 + 0x9f4) = 0;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  *(undefined4 *)(param_1 + 0x9fc) = 0;
  *(undefined4 *)(param_1 + 0xa00) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined4 *)(param_1 + 0xa14) = 0;
  *(undefined4 *)(param_1 + 0xa18) = 0;
  *(undefined4 *)(param_1 + 0xa1c) = 0;
  *(undefined4 *)(param_1 + 0xa20) = 0;
  *(undefined4 *)(param_1 + 0xa24) = 0;
  *(undefined4 *)(param_1 + 0xa28) = 0;
  *(undefined4 *)(param_1 + 0xa2c) = 0;
  *(undefined4 *)(param_1 + 0xa30) = 0;
  *(undefined4 *)(param_1 + 0xa34) = 0;
  *(undefined4 *)(param_1 + 0xa38) = 0;
  *(undefined4 *)(param_1 + 0xa3c) = 0;
  *(undefined4 *)(param_1 + 0xa40) = 0;
  *(undefined4 *)(param_1 + 0xa44) = 0;
  *(undefined4 *)(param_1 + 0xa48) = 0;
  *(undefined4 *)(param_1 + 0xa4c) = 0;
  *(undefined4 *)(param_1 + 0xa50) = 0;
  *(undefined4 *)(param_1 + 0xa54) = 0;
  *(undefined4 *)(param_1 + 0xa58) = 0;
  *(undefined4 *)(param_1 + 0xa5c) = 0;
  *(undefined4 *)(param_1 + 0xa60) = 0;
  *(undefined4 *)(param_1 + 0xa64) = 0;
  *(undefined4 *)(param_1 + 0xa68) = 0;
  return;
}

// 009C4120  FUN_009c4120  size=454  [callgraph]
void FUN_009c4120(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  iVar2 = 0x20;
  if (param_2 == 0) {
    iVar1 = FUN_0094a8e0(0);
    iVar2 = FUN_0094a8e0(8);
    _memset(param_1,0,0x2020);
    *(undefined4 *)((int)param_1 + 0x2034) = 0;
    *(undefined4 *)((int)param_1 + 0x2038) = 0;
    *(undefined4 *)((int)param_1 + 0x203c) = 0;
    *(undefined4 *)((int)param_1 + 0x2040) = 0;
    *(undefined4 *)((int)param_1 + 0x2044) = 0;
    *(undefined4 *)((int)param_1 + 0x2048) = 0;
    *(undefined4 *)((int)param_1 + 0x210c) = 0;
    *(undefined4 *)((int)param_1 + 0x2110) = 0;
    *(undefined4 *)((int)param_1 + 0x2114) = 0;
    *(undefined4 *)((int)param_1 + 0x2118) = 0;
    *(undefined4 *)((int)param_1 + 0x2020) = 0;
    *(undefined4 *)((int)param_1 + 0x2028) = 0;
    *(undefined4 *)((int)param_1 + 0x2024) = 0;
    *(undefined4 *)((int)param_1 + 0x202c) = 0;
    *(undefined4 *)((int)param_1 + 0x2030) = 0;
  }
  else if (param_2 == 1) {
    iVar1 = FUN_0094a8e0(8);
    iVar2 = FUN_0094a8e0(9);
    *(undefined4 *)((int)param_1 + 0x211c) = 0;
    *(undefined4 *)((int)param_1 + 0x2120) = 0;
    *(undefined4 *)((int)param_1 + 0x212c) = 0;
    *(undefined4 *)((int)param_1 + 0x2130) = 0;
    *(undefined4 *)((int)param_1 + 0x2134) = 10;
    *(undefined4 *)((int)param_1 + 0x2138) = 0xf;
    *(undefined4 *)((int)param_1 + 0x213c) = 0xffffffff;
  }
  else if (param_2 == 2) {
    iVar1 = FUN_0094a8e0(9);
    *(undefined4 *)((int)param_1 + 0x2124) = 0;
    *(undefined4 *)((int)param_1 + 0x2128) = 0;
    *(undefined4 *)((int)param_1 + 0x2140) = 0;
    *(undefined4 *)((int)param_1 + 0x2144) = 0;
    *(undefined4 *)((int)param_1 + 0x2148) = 0xb;
    *(undefined4 *)((int)param_1 + 0x214c) = 0x10;
    *(undefined4 *)((int)param_1 + 0x2150) = 0xffffffff;
  }
  if (iVar1 < iVar2) {
    puVar3 = (undefined4 *)((int)param_1 + iVar1 * 4 + 0x204c);
    for (iVar2 = iVar2 - iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x20cc) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20d0) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20d4) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20d8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20dc) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20e0) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20e4) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20e8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20ec) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20f0) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20f4) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20f8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x20fc) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2100) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2104) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2108) = 0xffffffff;
  return;
}

// 009C42F0  FUN_009c42f0  size=174  [callgraph]
void FUN_009c42f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0x57;
  *(undefined4 *)(param_1 + 0x34) = 0x53;
  *(undefined4 *)(param_1 + 0x38) = 0x41;
  *(undefined4 *)(param_1 + 0x3c) = 0x44;
  *(undefined4 *)(param_1 + 0x40) = 9;
  *(undefined4 *)(param_1 + 0x44) = 0x20;
  *(undefined4 *)(param_1 + 0x48) = 0x80000001;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000002;
  *(undefined4 *)(param_1 + 0x50) = 0x9f;
  *(undefined4 *)(param_1 + 0x54) = 0x9b;
  *(undefined4 *)(param_1 + 0x58) = 0x46;
  *(undefined4 *)(param_1 + 0x5c) = 0x52;
  *(undefined4 *)(param_1 + 0x60) = 0x45;
  *(undefined4 *)(param_1 + 100) = 0x43;
  *(undefined4 *)(param_1 + 0x68) = 0x51;
  *(undefined4 *)(param_1 + 0x6c) = 0x31;
  *(undefined4 *)(param_1 + 0x70) = 0x32;
  *(undefined4 *)(param_1 + 0x74) = 0x33;
  *(undefined4 *)(param_1 + 0x78) = 0x91;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000004;
  *(undefined4 *)(param_1 + 0x80) = 0x58;
  *(undefined4 *)(param_1 + 0x84) = 0x5a;
  *(undefined4 *)(param_1 + 0x88) = 0x80000001;
  return;
}

// 009C43A0  FUN_009c43a0  size=320  [callgraph]
void FUN_009c43a0(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  FUN_009c4120(param_1,0);
  FUN_009c4120(param_1,1);
  iVar1 = FUN_0094a8e0(9);
  *(undefined4 *)(param_1 + 0x2124) = 0;
  *(undefined4 *)(param_1 + 0x2128) = 0;
  *(undefined4 *)(param_1 + 0x2140) = 0;
  *(undefined4 *)(param_1 + 0x2144) = 0;
  *(undefined4 *)(param_1 + 0x2148) = 0xb;
  *(undefined4 *)(param_1 + 0x214c) = 0x10;
  *(undefined4 *)(param_1 + 0x2150) = 0xffffffff;
  if (iVar1 < 0x20) {
    puVar5 = (undefined4 *)(param_1 + 0x204c + iVar1 * 4);
    for (iVar3 = 0x20 - iVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x20cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x202c) = *(undefined4 *)(param_2 + 0x202c);
  puVar4 = (undefined1 *)(param_2 + 0x4a0);
  puVar2 = (undefined1 *)(param_1 + 0x4a1);
  iVar1 = 0xe;
  do {
    puVar2[-1] = *puVar4;
    *puVar2 = puVar2[param_2 - param_1];
    puVar4 = puVar4 + 0x20;
    puVar2 = puVar2 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x2e0) = *(undefined1 *)(param_2 + 0x2e0);
  *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(param_2 + 0x300);
  return;
}

// 009C44E0  FUN_009c44e0  size=178  [callgraph]
undefined4 FUN_009c44e0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    switch(param_1) {
    case 0:
      goto switchD_009c4504_caseD_0;
    case 1:
      piVar2 = &DAT_01b764a0;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *piVar2;
        piVar2 = piVar2 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    case 2:
      FID_conflict__memcpy(param_2,&DAT_01b764d0,0x1800);
      return 1;
    case 3:
      piVar2 = &DAT_01b6efe0;
      for (iVar1 = 0xf4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *piVar2;
        piVar2 = piVar2 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    default:
      return 0;
    }
  }
  return 0;
switchD_009c4504_caseD_0:
  if (DAT_01b77e04 == 0) {
    piVar2 = &DAT_01b76470;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *piVar2;
      piVar2 = piVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  *param_2 = DAT_01b77e04;
  _strcpy_s((char *)(param_2 + 1),0x20,&DAT_01b77e08);
  return 1;
}

// 009C45B0  FUN_009c45b0  size=62  [callgraph]
undefined4 FUN_009c45b0(void)

{
  if (DAT_01b76230 != -1) {
    if ((((DAT_01b77e04 != 0) && (((DAT_01b77e04 & 0xffffff00) != 0 || (DAT_01b77cd0 != -1)))) ||
        ((DAT_01b76470 & 0xffffff00) != 0)) || (DAT_01b77cd0 != -1)) {
      return 1;
    }
  }
  return 0;
}

// 009C45F0  FUN_009c45f0  size=66  [callgraph]
int FUN_009c45f0(void)

{
  uint uVar1;
  
  if ((DAT_01b77e04 & 0xf00) == 0xc00) {
    return 8;
  }
  if ((DAT_01b77e04 & 0xf00) == 0xd00) {
    return 9;
  }
  uVar1 = DAT_01b76470 & 0xf00;
  if (uVar1 == 0) {
    return -1;
  }
  if (uVar1 != 0xa00) {
    return (int)uVar1 >> 8;
  }
  return 0;
}

// 009C4640  FUN_009c4640  size=51  [callgraph]
char FUN_009c4640(int param_1)

{
  char cVar1;
  
  cVar1 = 2 < *(byte *)(param_1 + 0x4c00);
  if (2 < *(byte *)(param_1 + 0x4c20)) {
    cVar1 = cVar1 + '\x01';
  }
  if (2 < *(byte *)(param_1 + 0x4c40)) {
    cVar1 = cVar1 + '\x01';
  }
  if (2 < *(byte *)(param_1 + 0x4c60)) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

// 009C4680  FUN_009c4680  size=60  [callgraph]
char FUN_009c4680(int param_1)

{
  char cVar1;
  
  cVar1 = 2 < *(byte *)(param_1 + 0x4c80);
  if (2 < *(byte *)(param_1 + 0x4ca0)) {
    cVar1 = cVar1 + '\x01';
  }
  if (2 < *(byte *)(param_1 + 0x4cc0)) {
    cVar1 = cVar1 + '\x01';
  }
  if (2 < *(byte *)(param_1 + 0x4ce0)) {
    cVar1 = cVar1 + '\x01';
  }
  if (2 < *(byte *)(param_1 + 0x4d00)) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

// 009C46C0  FUN_009c46c0  size=29  [callgraph]
int FUN_009c46c0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  uVar2 = 1;
  iVar3 = 0x16;
  do {
    if ((DAT_01b6f3bc & uVar2) != 0) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

// 009C46E0  FUN_009c46e0  size=31  [callgraph]
char FUN_009c46e0(void)

{
  char cVar1;
  
  cVar1 = (DAT_01b7381c & 1) != 0;
  if ((DAT_01b7381c & 2) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((DAT_01b7381c & 4) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

// 009C4700  FUN_009c4700  size=31  [callgraph]
char FUN_009c4700(void)

{
  char cVar1;
  
  cVar1 = (DAT_01b73834 & 1) != 0;
  if ((DAT_01b73834 & 2) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((DAT_01b73834 & 4) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

// 009C4760  FUN_009c4760  size=59  [callgraph]
int FUN_009c4760(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(2 < *(byte *)(param_1 + 0x4c00));
  if (2 < *(byte *)(param_1 + 0x4c20)) {
    uVar1 = uVar1 + 1;
  }
  if (2 < *(byte *)(param_1 + 0x4c40)) {
    uVar1 = uVar1 + 1;
  }
  if (2 < *(byte *)(param_1 + 0x4c60)) {
    uVar1 = uVar1 + 1;
  }
  return *(int *)(param_1 + 0x68c0) + uVar1;
}

// 009C47A0  FUN_009c47a0  size=68  [callgraph]
int FUN_009c47a0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(2 < *(byte *)(param_1 + 0x4c80));
  if (2 < *(byte *)(param_1 + 0x4ca0)) {
    uVar1 = uVar1 + 1;
  }
  if (2 < *(byte *)(param_1 + 0x4cc0)) {
    uVar1 = uVar1 + 1;
  }
  if (2 < *(byte *)(param_1 + 0x4ce0)) {
    uVar1 = uVar1 + 1;
  }
  if (2 < *(byte *)(param_1 + 0x4d00)) {
    uVar1 = uVar1 + 1;
  }
  return *(int *)(param_1 + 0x68c4) + uVar1;
}

// 009C47F0  FUN_009c47f0  size=153  [callgraph]
undefined * FUN_009c47f0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return &DAT_01b73a10;
  case 1:
    return &DAT_01b73a30;
  case 2:
    return &DAT_01b73a50;
  case 3:
    return &DAT_01b73a70;
  case 4:
    return &DAT_01b73a90;
  case 5:
    return &DAT_01b73ab0;
  case 6:
    return &DAT_01b73af0;
  case 7:
    return &DAT_01b73ad0;
  default:
    return (undefined *)0x0;
  }
}

// 009C48B0  FUN_009c48b0  size=68  [callgraph]
undefined * FUN_009c48b0(int param_1)

{
  if (param_1 == 2) {
    return &DAT_01b73b30;
  }
  if (param_1 != 3) {
    if (param_1 == 4) {
      return &DAT_01b73b70;
    }
    return (undefined *)0x0;
  }
  return &DAT_01b73b50;
}

// 009C4900  FUN_009c4900  size=37  [callgraph]
undefined4 FUN_009c4900(int param_1)

{
  if ((param_1 - 0xdU < 0xc) && ((&DAT_01b73860)[param_1 * 0x20] == '\x03')) {
    return 1;
  }
  return 0;
}

// 009C4930  FUN_009c4930  size=46  [callgraph]
undefined4 FUN_009c4930(int param_1)

{
  if (((param_1 - 0x25U < 0xe) && ((&DAT_01b73860)[param_1 * 0x20] == '\x03')) &&
     ((&DAT_01b73861)[param_1 * 0x20] != '\0')) {
    return 1;
  }
  return 0;
}

// 009C4980  FUN_009c4980  size=350  [callgraph]
void FUN_009c4980(void *param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  switch(param_3) {
  case 1:
    FID_conflict__memcpy(param_1,param_2,0x4880);
    FID_conflict__memcpy((void *)((int)param_1 + 0x4880),(void *)((int)param_2 + 0x4880),0x2160);
    puVar2 = (undefined4 *)((int)param_2 + 0x69e0);
    puVar3 = (undefined4 *)((int)param_1 + 0x69e0);
    for (iVar1 = 0x2ac; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined4 *)((int)param_2 + 0x8e50);
    puVar3 = (undefined4 *)((int)param_1 + 0x8e50);
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return;
  default:
    FID_conflict__memcpy(param_1,param_2,0x8ee0);
    return;
  case 4:
    *(undefined4 *)((int)param_1 + 0x68ac) = *(undefined4 *)((int)param_2 + 0x68ac);
    *(int *)((int)param_1 + 0x68bc) =
         *(int *)((int)param_1 + 0x68bc) + *(int *)((int)param_2 + 0x68bc);
    if (0x98967e < *(int *)((int)param_1 + 0x68bc)) {
      *(undefined **)((int)param_1 + 0x68bc) = &DAT_0098967f;
    }
    FID_conflict__memcpy(param_1,param_2,0x4880);
    puVar2 = (undefined4 *)((int)param_2 + 0x8e50);
    puVar3 = (undefined4 *)((int)param_1 + 0x8e50);
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return;
  case 5:
    FID_conflict__memcpy(param_1,param_2,0x4880);
    FID_conflict__memcpy((void *)((int)param_1 + 0x4880),(void *)((int)param_2 + 0x4880),0x2160);
    return;
  case 6:
    puVar2 = (undefined4 *)((int)param_2 + 0x8e50);
    puVar3 = (undefined4 *)((int)param_1 + 0x8e50);
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return;
  case 7:
    FID_conflict__memcpy(param_1,param_2,0x4880);
    return;
  }
}

// 009C4B00  FUN_009c4b00  size=30  [callgraph]
void FUN_009c4b00(int param_1)

{
  if (DAT_01b762b8 != param_1) {
    DAT_01b762b8 = param_1;
    DAT_01b762bc = 0;
  }
  return;
}

// 009C4B20  FUN_009c4b20  size=20  [callgraph]
void FUN_009c4b20(void)

{
  if (DAT_01b762b8 != -1) {
    DAT_01b762bc = 1;
  }
  return;
}

// 009C4B40  FUN_009c4b40  size=165  [callgraph]
int FUN_009c4b40(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0xe02) {
    return 3;
  }
  if (param_1 == 0xe03) {
    return 4;
  }
  if (param_1 != 0xe40) {
    if (((0xc70 < param_1) && (param_1 < 0xc76)) || (param_1 - 0xd71U < 5)) {
      if (DAT_01b76230 == 3) {
        return 4;
      }
      if (DAT_01b76230 == 4) {
        return 4;
      }
    }
    if (param_1 == 0xc75) {
      return 0;
    }
    iVar1 = FUN_00a4a3d0(param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_00a4a320(param_1), iVar1 == 0)) {
      iVar2 = FUN_00a4a350(param_1);
      iVar1 = 2;
      if (iVar2 == 0) {
        iVar1 = DAT_01b76230;
      }
      return iVar1;
    }
  }
  return 1;
}

// 009C4BF0  FUN_009c4bf0  size=18  [callgraph]
void FUN_009c4bf0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00932720();
  FUN_009c4b40(uVar1);
  return;
}

// 009C4C10  FUN_009c4c10  size=6  [callgraph]
undefined4 FUN_009c4c10(void)

{
  return DAT_01b76230;
}

// 009C4C20  FUN_009c4c20  size=18  [callgraph]
void FUN_009c4c20(int param_1,undefined4 param_2)

{
  (&DAT_01b76198)[param_1] = param_2;
  return;
}

// 009C4C40  FUN_009c4c40  size=86  [callgraph]
void FUN_009c4c40(int param_1)

{
  if (param_1 == 0) {
    _memset(&DAT_01b6f3e0,0,0x1e00);
    return;
  }
  if (param_1 == 1) {
    _memset(&DAT_01b711e0,0,0x3c0);
    return;
  }
  if (param_1 == 2) {
    _memset(&DAT_01b715a0,0,0x3c0);
  }
  return;
}

// 009C4CA0  FUN_009c4ca0  size=66  [callgraph]
void FUN_009c4ca0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    DAT_01b7598c = param_1;
    return;
  }
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    DAT_01b759a0 = param_1;
    return;
  }
  DAT_01b75894 = param_1;
  return;
}

// 009C4D40  FUN_009c4d40  size=66  [callgraph]
void FUN_009c4d40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    DAT_01b75994 = param_1;
    return;
  }
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    DAT_01b759a8 = param_1;
    return;
  }
  DAT_01b75888 = param_1;
  return;
}

// 009C4D90  FUN_009c4d90  size=70  [callgraph]
undefined4 FUN_009c4d90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d46780();
  if ((iVar1 != 0) || (param_1 == 8)) {
    return DAT_01b75994;
  }
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) && (param_1 != 9)) {
    return DAT_01b75888;
  }
  return DAT_01b759a8;
}

// 009C4E80  FUN_009c4e80  size=66  [callgraph]
void FUN_009c4e80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    DAT_01b7599c = param_1;
    return;
  }
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    DAT_01b759b0 = param_1;
    return;
  }
  DAT_01b75884 = param_1;
  return;
}

// 009C4ED0  FUN_009c4ed0  size=70  [callgraph]
undefined4 FUN_009c4ed0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d46780();
  if ((iVar1 != 0) || (param_1 == 8)) {
    return DAT_01b7599c;
  }
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) && (param_1 != 9)) {
    return DAT_01b75884;
  }
  return DAT_01b759b0;
}

// 009C4F20  FUN_009c4f20  size=66  [callgraph]
void FUN_009c4f20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    DAT_01b75998 = param_1;
    return;
  }
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    DAT_01b759ac = param_1;
    return;
  }
  DAT_01b75880 = param_1;
  return;
}

// 009C4F70  FUN_009c4f70  size=70  [callgraph]
undefined4 FUN_009c4f70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d46780();
  if ((iVar1 != 0) || (param_1 == 8)) {
    return DAT_01b75998;
  }
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) && (param_1 != 9)) {
    return DAT_01b75880;
  }
  return DAT_01b759ac;
}

// 009C4FC0  FUN_009c4fc0  size=77  [callgraph]
undefined4 FUN_009c4fc0(void)

{
  int *piVar1;
  
  if (DAT_01b77e1d == '\0') {
    piVar1 = &DAT_01b6f434;
    do {
      if (*piVar1 != 0) {
        return 1;
      }
      piVar1 = piVar1 + 0x30;
    } while ((int)piVar1 < 0x1b6f7f4);
    piVar1 = &DAT_01b715f4;
    while ((piVar1[-0xf0] == 0 && (*piVar1 == 0))) {
      piVar1 = piVar1 + 0x30;
      if (0x1b719b3 < (int)piVar1) {
        return 0;
      }
    }
  }
  return 1;
}

// 009C5010  FUN_009c5010  size=31  [callgraph]
undefined4 FUN_009c5010(void)

{
  int *piVar1;
  
  piVar1 = &DAT_01b6f434;
  do {
    if (*piVar1 != 0) {
      return 1;
    }
    piVar1 = piVar1 + 0x30;
  } while ((int)piVar1 < 0x1b6f7f4);
  return 0;
}

// 009C5030  FUN_009c5030  size=235  [callgraph]
undefined4 FUN_009c5030(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_14 [5];
  
  piVar2 = local_14;
  if (param_1 != -1) {
    piVar2 = &DAT_01b762c0 + param_1;
    iVar4 = 0;
    piVar3 = &DAT_01b6f434 + param_1 * 0x30;
    while( true ) {
      if (param_2 == 0) {
        iVar1 = *piVar2;
      }
      else {
        iVar1 = *piVar3;
      }
      if (iVar1 == 0) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0xf0;
      piVar2 = piVar2 + 5;
      if (7 < iVar4) {
        return 1;
      }
    }
    return 0;
  }
  piVar3 = &DAT_01b6f7f4;
  while( true ) {
    iVar4 = piVar3[-0xf0];
    *piVar2 = 0;
    if (iVar4 != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (*piVar3 != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (piVar3[0xf0] != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (piVar3[0x1e0] != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (piVar3[0x2d0] != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (piVar3[0x3c0] != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (piVar3[0x4b0] != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (piVar3[0x5a0] != 0) {
      *piVar2 = *piVar2 + 1;
    }
    if (7 < *piVar2) break;
    piVar3 = piVar3 + 0x30;
    piVar2 = piVar2 + 1;
    if (0x1b6fbb3 < (int)piVar3) {
      return 0;
    }
  }
  return 1;
}

// 009C5130  FUN_009c5130  size=119  [callgraph]
bool FUN_009c5130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != -1) {
    param_2 = param_2 + param_1 * 5;
    if (9 < param_1) {
      return *(int *)(&DAT_01b6f484 + param_2 * 0xc0) != 0;
    }
    return (&DAT_01b6f434)[param_2 * 0x30] != 0;
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = iVar2 * 3 + param_1 * 0xf;
    if (param_1 < 10) {
      iVar1 = (&DAT_01b6f434)[iVar1 * 0x10];
    }
    else {
      iVar1 = *(int *)(&DAT_01b71a04 + iVar1 * 0x40);
    }
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      return false;
    }
  }
  return true;
}

// 009C51B0  FUN_009c51b0  size=192  [callgraph]
undefined4 FUN_009c51b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_14 [5];
  
  if (param_2 != -1) {
    if ((param_1 != 8) && (param_1 != 9)) {
      iVar1 = 0;
      if (-1 < param_1) {
        piVar2 = &DAT_01b762c0 + param_2;
        do {
          if (*piVar2 == 0) {
            return 0;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 5;
        } while (iVar1 <= param_1);
      }
      return 1;
    }
    return (&DAT_01b762c0)[param_1 * 5 + param_2];
  }
  iVar1 = 0;
  while( true ) {
    local_14[iVar1] = 0;
    if (((param_1 == 8) || (param_1 == 9)) && ((&DAT_01b762c0)[param_1 * 5 + iVar1] != 0)) {
      return 1;
    }
    if (-1 < param_1) {
      piVar2 = &DAT_01b762c0 + iVar1;
      iVar3 = param_1 + 1;
      do {
        if (*piVar2 != 0) {
          local_14[iVar1] = local_14[iVar1] + 1;
        }
        piVar2 = piVar2 + 5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (param_1 < local_14[iVar1]) break;
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      return 0;
    }
  }
  return 1;
}

// 009C5270  FUN_009c5270  size=81  [callgraph]
undefined4 FUN_009c5270(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x14';
  do {
    iVar1 = (int)cVar2;
    if (((float)(&DAT_01b6efe0)[iVar1 * 4] != 0.0) || ((float)(&DAT_01b6efe4)[iVar1 * 4] != 0.0)) {
      return 1;
    }
    if ((float)(&DAT_01b6efe8)[iVar1 * 4] != 0.0) {
      return 1;
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '2');
  return 0;
}

// 009C52D0  FUN_009c52d0  size=12  [callgraph]
void FUN_009c52d0(undefined4 param_1)

{
  DAT_01b75978 = param_1;
  return;
}

