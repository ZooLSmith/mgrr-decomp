// src/misc/cCustomizeMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098F7E0..009BADE0, 5 functions

#include "types.h"

// 0098F7E0  cCustomizeMenu::vf0C  size=184  [class]
void __fastcall cCustomizeMenu::vf0C(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x460)) {
      puVar2 = (undefined4 *)(param_1 + 0x3d8);
      do {
        uVar5 = 1;
        uVar4 = 0x5b;
        uVar1 = FUN_00cb3300(*puVar2);
        FUN_00d389f0(0xc,iVar3,0,0,uVar1,uVar4,uVar5);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x460));
    }
    local_20 = 0x441f4000;
    local_1c = 0x43000000;
    local_18 = 0x44952000;
    local_14 = 0x441f8000;
    FUN_00cfdc80(0xc,0x1e,0,0,&local_20,1);
  }
  return;
}

// 009B22F0  cCustomizeMenu::vf00  size=30  [class]
undefined4 __thiscall cCustomizeMenu::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_20();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B2310  FUN_009b2310  size=1189  [callgraph]
void __fastcall FUN_009b2310(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int local_58;
  int local_54 [7];
  int local_38 [14];
  
  iVar4 = 0x1c;
  pcVar5 = &DAT_01b73bc0;
  do {
    cVar1 = pcVar5[0x20];
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) {
      switch(iVar4) {
      case 0x1d:
      case 0x21:
      case 0x34:
      case 0x39:
      case 0x3e:
      case 0x43:
      case 0x48:
      case 0x4d:
      case 0x52:
      case 0x57:
      case 0x5c:
      case 0x61:
      case 0x66:
      case 0x6b:
      case 0x70:
      case 0x75:
      case 0x7a:
      case 0x7f:
      case 0x84:
      case 0x89:
      case 0x8f:
      case 0x94:
      case 0x99:
      case 0x9e:
      case 0xa3:
      case 0xa8:
      case 0xad:
      case 0xb2:
      case 0xb7:
      case 0xbc:
      case 0xc1:
      case 0xc6:
        cVar1 = *pcVar5;
        if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 == '\x03')) {
          uVar6 = 2;
LAB_009b2390:
          iVar3 = FUN_009c51b0(uVar6,0xffffffff);
          if (iVar3 != 0) {
            cCustomizeSelMenu::setItemState(iVar4,1);
          }
        }
        break;
      case 0x1e:
      case 0x22:
      case 0x35:
      case 0x3a:
      case 0x3f:
      case 0x44:
      case 0x49:
      case 0x4e:
      case 0x53:
      case 0x58:
      case 0x5d:
      case 0x62:
      case 0x67:
      case 0x6c:
      case 0x71:
      case 0x76:
      case 0x7b:
      case 0x80:
      case 0x85:
      case 0x8a:
      case 0x90:
      case 0x95:
      case 0x9a:
      case 0x9f:
      case 0xa4:
      case 0xa9:
      case 0xae:
      case 0xb3:
      case 0xb8:
      case 0xbd:
      case 0xc2:
      case 199:
        cVar1 = *pcVar5;
        if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 == '\x03')) {
          uVar6 = 3;
          goto LAB_009b2390;
        }
        break;
      case 0x1f:
      case 0x23:
      case 0x36:
      case 0x3b:
      case 0x40:
      case 0x45:
      case 0x4a:
      case 0x4f:
      case 0x54:
      case 0x59:
      case 0x5e:
      case 99:
      case 0x68:
      case 0x6d:
      case 0x72:
      case 0x77:
      case 0x7c:
      case 0x81:
      case 0x86:
      case 0x8b:
      case 0x91:
      case 0x96:
      case 0x9b:
      case 0xa0:
      case 0xa5:
      case 0xaa:
      case 0xaf:
      case 0xb4:
      case 0xb9:
      case 0xbe:
      case 0xc3:
      case 200:
        cVar1 = *pcVar5;
        if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 == '\x03')) {
          uVar6 = 4;
          goto LAB_009b2390;
        }
        break;
      case 0x24:
      case 0x37:
      case 0x3c:
      case 0x41:
      case 0x46:
      case 0x4b:
      case 0x50:
      case 0x55:
      case 0x5a:
      case 0x5f:
      case 100:
      case 0x69:
      case 0x6e:
      case 0x73:
      case 0x78:
      case 0x7d:
      case 0x82:
      case 0x87:
      case 0x8c:
      case 0x92:
      case 0x97:
      case 0x9c:
      case 0xa1:
      case 0xa6:
      case 0xab:
      case 0xb0:
      case 0xb5:
      case 0xba:
      case 0xbf:
      case 0xc4:
      case 0xc9:
        cVar1 = *pcVar5;
        if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 == '\x03')) {
          uVar6 = 6;
          goto LAB_009b2390;
        }
      }
    }
    pcVar5 = pcVar5 + 0x20;
    iVar4 = iVar4 + 1;
    if (0x1b7535f < (int)pcVar5) {
      local_38[1] = 0xd;
      local_38[2] = 0xd;
      local_38[3] = 0x16;
      local_38[4] = 0x16;
      local_38[5] = 0x19;
      local_38[6] = 0x19;
      local_38[0] = 0;
      local_38[7] = 0x1c;
      local_38[8] = 0x1c;
      local_38[9] = 0x20;
      local_38[10] = 0x20;
      local_38[0xb] = 0x25;
      local_38[0xc] = 0x25;
      local_38[0xd] = 0x33;
      local_58 = 0;
      do {
        iVar4 = 0;
        iVar3 = 0;
        if (local_58 < 7) {
          iVar4 = local_38[local_58 * 2];
          iVar3 = local_38[local_58 * 2 + 1];
        }
        *(undefined1 *)(param_1 + 0x433 + local_58) = 0;
        *(undefined1 *)(param_1 + 0x42c + local_58) = 0;
        *(undefined1 *)(param_1 + 0x43a + local_58) = 1;
        local_54[local_58] = 1;
        for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
          cVar1 = (&DAT_01b73860)[iVar4 * 0x20];
          if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) &&
             (*(undefined1 *)(local_58 + 0x42c + param_1) = 1,
             (&DAT_01b73860)[iVar4 * 0x20] == '\x01')) {
            switch(iVar4) {
            case 8:
              uVar6 = 4;
              break;
            case 9:
            case 0x14:
              uVar6 = 3;
              break;
            case 10:
              uVar6 = 0;
              break;
            case 0xb:
              uVar6 = 1;
              break;
            case 0xc:
              uVar6 = 2;
              break;
            default:
              goto switchD_009b249c_caseD_d;
            case 0x15:
              uVar6 = 0xffffffff;
            }
            if (iVar4 == 0x15) {
              iVar2 = FUN_009c7400();
              if (iVar2 != 0) {
switchD_009b249c_caseD_d:
                *(undefined1 *)(local_58 + 0x433 + param_1) = 1;
              }
            }
            else {
              iVar2 = FUN_009c73f0(uVar6);
              if (iVar2 != 0) {
                *(undefined1 *)(local_58 + 0x433 + param_1) = 1;
              }
            }
          }
          cVar1 = (&DAT_01b73860)[iVar4 * 0x20];
          if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x03')) {
            switch(iVar4) {
            case 8:
              uVar6 = 4;
              break;
            case 9:
            case 0x14:
              uVar6 = 3;
              break;
            case 10:
              uVar6 = 0;
              break;
            case 0xb:
              uVar6 = 1;
              break;
            case 0xc:
              uVar6 = 2;
              break;
            default:
              *(undefined1 *)(local_58 + 0x43a + param_1) = 0;
              local_54[local_58] = 0;
              goto LAB_009b2593;
            case 0x15:
              uVar6 = 0xffffffff;
            }
            if (iVar4 == 0x15) {
              iVar2 = FUN_009c7400();
              if (iVar2 != 0) {
                *(undefined1 *)(local_58 + 0x43a + param_1) = 0;
              }
            }
            else {
              iVar2 = FUN_009c73f0(uVar6);
              if (iVar2 != 0) {
                *(undefined1 *)(local_58 + 0x43a + param_1) = 0;
              }
            }
          }
LAB_009b2593:
        }
        if (local_58 == 1) {
          iVar4 = 0x33;
          do {
            if (((0x8d < iVar4) && (iVar4 < 0x9d)) ||
               ((iVar4 - 0x7eU < 0x10 && (iVar3 = FUN_009c73f0(3), iVar3 == 0)))) goto LAB_009b2714;
            cVar1 = DAT_01b73a00;
            if (iVar4 < 0x42) {
LAB_009b25ea:
              if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 == '\x03')) {
                iVar3 = iVar4 * 0x20;
LAB_009b260a:
                pcVar5 = &DAT_01b73860 + iVar3;
                if (*pcVar5 == '\x01') {
                  *(undefined1 *)(param_1 + 0x434) = 1;
                }
LAB_009b2617:
                cVar1 = *pcVar5;
LAB_009b2704:
                if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x03')) {
                  *(undefined1 *)(param_1 + 0x43b) = 0;
                }
              }
            }
            else {
              cVar1 = DAT_01b73a20;
              if (iVar4 < 0x56) {
LAB_009b26de:
                if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x03'))
                goto LAB_009b2714;
                if ((&DAT_01b73860)[iVar4 * 0x20] == '\x01') {
                  *(undefined1 *)(param_1 + 0x434) = 1;
                }
                cVar1 = (&DAT_01b73860)[iVar4 * 0x20];
                goto LAB_009b2704;
              }
              if (iVar4 < 0x6a) {
                if (((DAT_01b73a40 == '\x01') || (DAT_01b73a40 == '\x02')) ||
                   (DAT_01b73a40 != '\x03')) goto LAB_009b2714;
                pcVar5 = &DAT_01b73860 + iVar4 * 0x20;
                if (*pcVar5 == '\x01') {
                  *(undefined1 *)(param_1 + 0x434) = 1;
                  cVar1 = *pcVar5;
                  goto LAB_009b2704;
                }
                goto LAB_009b2617;
              }
              cVar1 = DAT_01b73a80;
              if (iVar4 < 0x7e) goto LAB_009b25ea;
              cVar1 = DAT_01b73ae0;
              if (iVar4 < 0x8e) goto LAB_009b26de;
              if (iVar4 < 0xac) {
                if (((DAT_01b73a60 != '\x01') && (DAT_01b73a60 != '\x02')) &&
                   (DAT_01b73a60 == '\x03')) {
                  iVar3 = iVar4 << 5;
                  goto LAB_009b260a;
                }
              }
              else {
                cVar1 = DAT_01b73aa0;
                if (iVar4 < 0xbb) goto LAB_009b25ea;
                cVar1 = DAT_01b73ac0;
                if (iVar4 < 0xca) goto LAB_009b26de;
              }
            }
LAB_009b2714:
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0xd9);
        }
        else if (local_58 == 2) {
          iVar4 = 0x8e;
          pcVar5 = &DAT_01b74a20;
          do {
            cVar1 = DAT_01b73b20;
            if ((0x92 < iVar4) && (cVar1 = DAT_01b73b40, 0x97 < iVar4)) {
              cVar1 = DAT_01b73b60;
            }
            if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 == '\x03')) {
              if (*pcVar5 == '\x01') {
                *(undefined1 *)(param_1 + 0x435) = 1;
              }
              cVar1 = *pcVar5;
              if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x03')) {
                *(undefined1 *)(param_1 + 0x43c) = 0;
              }
            }
            pcVar5 = pcVar5 + 0x20;
            iVar4 = iVar4 + 1;
          } while ((int)pcVar5 < 0x1b74be1);
        }
        local_58 = local_58 + 1;
        if (6 < local_58) {
          iVar4 = 0;
          do {
            if (local_54[iVar4] == 0) {
              return;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 7);
          FUN_009c6540(0x29);
          return;
        }
      } while( true );
    }
  } while( true );
}

// 009BA760  cCustomizeMenu::vf08  size=1631  [class]
/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall cCustomizeMenu::vf08(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  char local_79;
  short local_78 [2];
  short local_74 [2];
  int local_70;
  char *local_6c;
  int local_68;
  undefined4 *local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined1 local_28;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x3d8) = uVar2;
  uVar2 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  uVar2 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  uVar2 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 1000) = uVar2;
  uVar2 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x3ec) = uVar2;
  uVar2 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x3f0) = uVar2;
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x3f4) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x3f8) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x3fc) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x400) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x404) = uVar2;
  uVar2 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x408) = uVar2;
  uVar2 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x40c) = uVar2;
  uVar2 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x410) = uVar2;
  uVar2 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x414) = uVar2;
  FUN_009b2310();
  *(undefined4 *)(param_1 + 0x444 + *(int *)(param_1 + 0x460) * 4) = 0;
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  *(undefined4 *)(param_1 + 0x444 + *(int *)(param_1 + 0x460) * 4) = 1;
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  iVar7 = *(int *)(param_1 + 0x460);
  if (*(char *)(param_1 + 0x42e) != '\0') {
    *(undefined4 *)(param_1 + 0x444 + iVar7 * 4) = 2;
    *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
    iVar7 = *(int *)(param_1 + 0x460);
  }
  if (*(char *)(param_1 + 0x42f) != '\0') {
    *(undefined4 *)(param_1 + 0x444 + iVar7 * 4) = 3;
    *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
    iVar7 = *(int *)(param_1 + 0x460);
  }
  *(undefined4 *)(param_1 + 0x444 + iVar7 * 4) = 4;
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  *(undefined4 *)(param_1 + 0x444 + *(int *)(param_1 + 0x460) * 4) = 5;
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  *(undefined4 *)(param_1 + 0x444 + *(int *)(param_1 + 0x460) * 4) = 6;
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  local_6c = (char *)(param_1 + 0x418);
  iVar7 = param_1 + 0x74;
  puVar8 = (undefined4 *)(param_1 + 0x444);
  local_5c = -0x418 - param_1;
  local_79 = '\0';
LAB_009ba943:
  local_70 = iVar7;
  local_64 = puVar8;
  uVar2 = FUN_00cb3300(puVar8[-0x1b]);
  FUN_00cb2240(uVar2);
  FUN_0099fb30(*puVar8);
  local_6c[7] = '\0';
  FUN_00cb2310(puVar8[-0x1b],0);
  switch(*puVar8) {
  case 0:
    uVar4 = 0;
    uVar2 = FUN_009c4f70(0);
    cXmlBinary::cXmlBinary_25(uVar2,uVar4);
    break;
  case 1:
    uVar4 = 1;
    uVar2 = FUN_009c4d90(0);
    cXmlBinary::cXmlBinary_25(uVar2,uVar4);
    break;
  case 2:
    local_60 = DAT_01b7588c;
    cXmlBinary::cXmlBinary_103();
    local_58 = DAT_018b92f0;
    local_54 = DAT_018b92f4;
    iVar3 = FUN_00de4550("Customize_Info.bxm",0);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_01656494);
      local_48 = cXmlBinary::vftable;
      FUN_00e04180();
      break;
    }
    local_68 = -1;
    if (local_60 == 2) {
      local_68 = 0x16;
    }
    else if (local_60 == 3) {
      local_68 = 0x17;
    }
    else if (local_60 == 4) {
      local_68 = 0x18;
    }
    FUN_00e062b0(iVar3,0);
    uVar2 = FUN_00e041c0();
    uVar2 = FUN_00e06390(uVar2,"SubWepon");
    local_28 = 0;
    local_27 = 0;
    local_23 = 0;
    local_1f = 0;
    local_1b = 0;
    local_17 = 0;
    local_13 = 0;
    local_f = 0;
    local_b = 0;
    local_9 = 0;
    local_60 = FUN_00e053e0(uVar2);
    iVar3 = 0;
    if (0 < local_60) {
      do {
        uVar4 = FUN_00e05410(uVar2,iVar3);
        uVar5 = FUN_00e06390(uVar4,&DAT_01655cd0);
        FUN_00e068f0(uVar5,local_78);
        if (local_78[0] == local_68) goto LAB_009bac4f;
        iVar3 = iVar3 + 1;
        iVar7 = local_70;
      } while (iVar3 < local_60);
    }
    goto LAB_009bac82;
  case 3:
    local_60 = FUN_009c4ed0(0);
    cXmlBinary::cXmlBinary_103();
    local_50 = DAT_018b92f0;
    local_4c = DAT_018b92f4;
    iVar3 = FUN_00de4550("Customize_Info.bxm",0);
    if (iVar3 != 0) {
      local_68 = -1;
      if (local_60 == 1) {
        local_68 = 0x19;
      }
      else if (local_60 == 2) {
        local_68 = 0x1a;
      }
      else if (local_60 == 3) {
        local_68 = 0x1b;
      }
      FUN_00e062b0(iVar3,0);
      uVar2 = FUN_00e041c0();
      uVar2 = FUN_00e06390(uVar2,&DAT_01656470);
      local_28 = 0;
      local_27 = 0;
      local_23 = 0;
      local_1f = 0;
      local_1b = 0;
      local_17 = 0;
      local_13 = 0;
      local_f = 0;
      local_b = 0;
      local_9 = 0;
      local_60 = FUN_00e053e0(uVar2);
      iVar3 = 0;
      if (0 < local_60) {
        do {
          uVar4 = FUN_00e05410(uVar2,iVar3);
          uVar5 = FUN_00e06390(uVar4,&DAT_01655cd0);
          FUN_00e068f0(uVar5,local_74);
          if (local_74[0] == local_68) goto LAB_009bac4f;
          iVar3 = iVar3 + 1;
          iVar7 = local_70;
        } while (iVar3 < local_60);
      }
      goto LAB_009bac82;
    }
    FUN_00dd5650(&DAT_01656494);
    local_48 = cXmlBinary::vftable;
    FUN_00e04180();
  }
  goto switchD_009ba980_default;
LAB_009bac4f:
  uVar2 = FUN_00e06390(uVar4,&DAT_016511c4);
  (*(code *)local_48[0x1d])(uVar2,&local_28,0x20);
  FUN_00ce4d70(8);
  iVar7 = local_70;
LAB_009bac82:
  FUN_00cf9770(*(undefined4 *)(iVar7 + 0x38),&local_28,0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(iVar7 + 0x3c),&local_28,0,0xffffffff);
  local_48 = cXmlBinary::vftable;
  FUN_00e04180();
  puVar8 = local_64;
switchD_009ba980_default:
  if ((int)(local_6c + local_5c) < *(int *)(param_1 + 0x460)) {
    while( true ) {
      cVar1 = FUN_00dde2d0(0,*(short *)(param_1 + 0x460) + -1);
      cVar6 = '\0';
      if (local_79 < '\x01') break;
      while (cVar1 != *(char *)(cVar6 + 0x418 + param_1)) {
        cVar6 = cVar6 + '\x01';
        if (local_79 <= cVar6) goto LAB_009bad12;
      }
    }
LAB_009bad12:
    *local_6c = cVar1;
  }
  local_6c = local_6c + 1;
  local_79 = local_79 + '\x01';
  puVar8 = puVar8 + 1;
  iVar7 = iVar7 + 0x7c;
  if ('\x06' < local_79) {
    local_70 = iVar7;
    local_64 = puVar8;
    uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x404));
    FUN_00cb2240(uVar2);
    FUN_009a04a0();
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x404),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x40c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x410),0);
    FUN_00cb2600(1);
    FUN_00ce4d70(0);
    FUN_00e5e050("core_se_sys_custom_menu_open",0);
    *(undefined4 *)(param_1 + 0x470) = DAT_01be9fb4;
    *(undefined4 *)(param_1 + 0x474) = DAT_01be9fb0;
    return;
  }
  goto LAB_009ba943;
}

// 009BADE0  cCustomizeMenu::vf14  size=5506  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCustomizeMenu::vf14(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  undefined *puVar12;
  ushort local_124 [2];
  int local_120;
  int local_11c;
  undefined4 *local_118;
  int local_114;
  undefined4 local_110 [2];
  int local_108;
  short local_104 [2];
  undefined4 local_100;
  float local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined **local_e8;
  char *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined1 uStack_b4;
  undefined4 local_b3;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  
  FUN_00c20a50();
  if (*(char *)(param_1 + 0x427) == '\0') {
    if (*(char *)(param_1 + 0x426) != '\f') {
      return;
    }
    FUN_009a0530();
    return;
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x460)) {
    puVar8 = (undefined4 *)(param_1 + 0x3d8);
    do {
      uVar4 = FUN_00cb3300(*puVar8);
      FUN_00d38a30(0xc,iVar11,uVar4);
      iVar11 = iVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x460));
  }
  switch(*(undefined1 *)(param_1 + 0x426)) {
  case 0:
    uVar4 = FUN_009c4ed0(0);
    uVar5 = FUN_009c4f70(0);
    *(undefined4 *)(param_1 + 0x470) = uVar5;
    *(undefined4 *)(param_1 + 0x474) = uVar4;
    *(undefined1 *)(param_1 + 0x464) = 1;
    FUN_009b2310();
    FUN_00ce4d70(1);
LAB_009bbcd7:
    *(char *)(param_1 + 0x426) = *(char *)(param_1 + 0x426) + '\x01';
    break;
  case 1:
    iVar11 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0x3f8));
    if (iVar11 != 0) {
      if (*(char *)(param_1 + 0x54) == '\0') {
        *(undefined1 *)(param_1 + 0x54) = 10;
        if (DAT_01b7589c != *(int *)(param_1 + 0x58)) {
          iVar11 = DAT_01b7589c - *(int *)(param_1 + 0x5c);
          *(int *)(param_1 + 0x58) = DAT_01b7589c;
          *(int *)(param_1 + 0x60) = iVar11 / 0x14;
        }
        *(undefined1 *)(param_1 + 0x54) = 10;
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x404),1);
      }
      local_124[0] = local_124[0] & 0xff00;
      if (0 < *(int *)(param_1 + 0x460)) {
        iVar11 = 0;
        do {
          iVar9 = (int)*(char *)(iVar11 + 0x418 + param_1);
          if (*(char *)(iVar9 + 0x41f + param_1) == '\0') {
            if ((int)((int)*(char *)(param_1 + 0x429) +
                     ((int)*(char *)(param_1 + 0x429) >> 0x1f & 3U)) >> 2 == iVar9) {
              *(undefined1 *)(iVar9 + 0x41f + param_1) = 1;
              FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3d8 + iVar11 * 4),2);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x3d8 + iVar11 * 4),1);
              local_114 = (int)*(char *)(param_1 + 0x42c + *(int *)(param_1 + 0x444 + iVar11 * 4));
              iVar9 = iVar11 * 0x7c + 0x74 + param_1;
              FUN_00cb2310(*(undefined4 *)(iVar11 * 0x7c + 0xbc + param_1),local_114);
              FUN_00cb2310(*(undefined4 *)(iVar9 + 0x60),local_114);
              local_114 = (int)*(char *)(param_1 + 0x433 + *(int *)(param_1 + 0x444 + iVar11 * 4));
              FUN_00cb2310(*(undefined4 *)(iVar9 + 0x40),local_114);
              FUN_00cb2310(*(undefined4 *)(iVar9 + 0x5c),local_114);
              iVar11 = (int)*(char *)(param_1 + 0x43a + *(int *)(param_1 + 0x444 + iVar11 * 4));
              FUN_00cb2310(*(undefined4 *)(iVar9 + 0x44),iVar11);
              FUN_00cb2310(*(undefined4 *)(iVar9 + 0x54),iVar11);
            }
          }
          else {
            iVar9 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0x3d8 + iVar11 * 4));
            if ((iVar9 != 0) && (*(char *)(iVar11 * 0x7c + 0xe8 + param_1) == '\0')) {
              *(undefined1 *)(iVar11 * 0x7c + param_1 + 0xe8) = 1;
            }
          }
          iVar11 = (int)(char)((char)local_124[0] + '\x01');
          local_124[0] = CONCAT11(local_124[0]._1_1_,(char)local_124[0] + '\x01');
        } while (iVar11 < *(int *)(param_1 + 0x460));
      }
      *(char *)(param_1 + 0x429) = *(char *)(param_1 + 0x429) + '\x01';
      cVar10 = '\0';
      if (0 < *(int *)(param_1 + 0x460)) {
        iVar11 = 0;
        do {
          if (*(char *)(iVar11 * 0x7c + 0xe8 + param_1) == '\0') goto switchD_009bae6e_caseD_5;
          cVar10 = cVar10 + '\x01';
          iVar11 = (int)cVar10;
        } while (iVar11 < *(int *)(param_1 + 0x460));
      }
      goto LAB_009bbcd7;
    }
    break;
  case 2:
    cVar10 = '\0';
    local_124[0] = CONCAT11(local_124[0]._1_1_,0xff);
    if (0 < *(int *)(param_1 + 0x460)) {
      iVar11 = 0;
      do {
        cVar3 = FUN_00d0d3e0(0xc,iVar11);
        if (cVar3 != '\0') {
          cVar3 = *(char *)(param_1 + 0x42a);
          if (cVar3 != cVar10) {
            local_124[0] = CONCAT11(local_124[0]._1_1_,cVar10);
            FUN_00ce4d70(1);
            *(char *)(param_1 + 0x42a) = cVar10;
            FUN_00ce4d70(2);
            FUN_00ce4d70(9);
            iVar11 = *(char *)(param_1 + 0x42b) * 0x7c;
            FUN_00ce4ce0(*(undefined4 *)(iVar11 + 0x90 + param_1),0);
            FUN_00cb2310(*(undefined4 *)(iVar11 + param_1 + 0x90),0);
            iVar11 = *(char *)(param_1 + 0x42a) * 0x7c;
            FUN_00ce4ce0(*(undefined4 *)(iVar11 + 0x90 + param_1),0);
            FUN_00cb2310(*(undefined4 *)(iVar11 + param_1 + 0x90),1);
            cVar3 = *(char *)(param_1 + 0x42a);
            *(char *)(param_1 + 0x42b) = cVar3;
          }
          if (*(char *)(*(int *)(param_1 + 0x444 + cVar3 * 4) + 0x42c + param_1) != '\0') {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3d8 + cVar3 * 4),2);
            *(undefined1 *)(param_1 + 0x426) = 10;
          }
          FUN_00e5e050("core_se_sys_custom_menu_decide",0);
          if ((char)local_124[0] != -1) goto switchD_009bae6e_caseD_5;
          break;
        }
        cVar10 = cVar10 + '\x01';
        iVar11 = (int)cVar10;
      } while (iVar11 < *(int *)(param_1 + 0x460));
    }
    cVar10 = FUN_00cac7e0(8,0);
    if (((cVar10 == '\0') && (cVar10 = FUN_00cac7e0(0x40000,0), cVar10 == '\0')) &&
       (cVar10 = FUN_00cac9c0(0), cVar10 == '\0')) {
      cVar10 = FUN_00cac7e0(4,0);
      if (((cVar10 == '\0') && (cVar10 = FUN_00cac7e0(0x80000,0), cVar10 == '\0')) &&
         (cVar10 = FUN_00cac9c0(1), cVar10 == '\0')) {
        cVar10 = FUN_00ce12f0(0);
        if (cVar10 == '\0') {
          cVar10 = FUN_00ce1360(0);
          if ((cVar10 != '\0') || (cVar10 = FUN_00cac960(), cVar10 != '\0')) {
            (**(code **)(*(int *)(param_1 + 100) + 4))(0x12,0,1);
            FUN_00e5e050("core_se_sys_cancel",0);
            *(undefined1 *)(param_1 + 0x426) = 100;
          }
        }
        else {
          if (*(char *)(*(int *)(param_1 + 0x444 + *(char *)(param_1 + 0x42a) * 4) + 0x42c + param_1
                       ) != '\0') {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3d8 + *(char *)(param_1 + 0x42a) * 4),2);
            *(undefined1 *)(param_1 + 0x426) = 10;
          }
          FUN_00e5e050("core_se_sys_custom_menu_decide",0);
        }
      }
      else {
        if (*(int *)(param_1 + 0x460) + -1 <= (int)*(char *)(param_1 + 0x42a)) {
          FUN_00ce4d70(1);
          FUN_00cb2310(*(undefined4 *)(*(char *)(param_1 + 0x42a) * 0x7c + 0x90 + param_1),1);
          FUN_00ce4d70(6);
          *(undefined1 *)(param_1 + 0x42a) = 0;
          goto LAB_009bb455;
        }
        FUN_00ce4d70(1);
        FUN_00cb2310(*(undefined4 *)(*(char *)(param_1 + 0x42a) * 0x7c + 0x90 + param_1),1);
        FUN_00ce4d70(3);
        *(char *)(param_1 + 0x42a) = *(char *)(param_1 + 0x42a) + '\x01';
LAB_009bb3d6:
        FUN_00ce4d70(2);
        FUN_00ce4d70(9);
        *(char *)(param_1 + 0x426) = *(char *)(param_1 + 0x426) + '\x01';
        FUN_00e5e050("core_se_sys_custom_menu_cursor",0);
      }
    }
    else {
      if ('\0' < *(char *)(param_1 + 0x42a)) {
        FUN_00ce4d70(1);
        FUN_00cb2310(*(undefined4 *)(*(char *)(param_1 + 0x42a) * 0x7c + 0x90 + param_1),1);
        FUN_00ce4d70(4);
        *(char *)(param_1 + 0x42a) = *(char *)(param_1 + 0x42a) + -1;
        goto LAB_009bb3d6;
      }
      FUN_00ce4d70(1);
      FUN_00cb2310(*(undefined4 *)(*(char *)(param_1 + 0x42a) * 0x7c + 0x90 + param_1),1);
      FUN_00ce4d70(5);
      *(char *)(param_1 + 0x42a) = *(char *)(param_1 + 0x460) + -1;
LAB_009bb455:
      *(undefined1 *)(param_1 + 0x426) = 4;
      FUN_00e5e050("core_se_sys_custom_menu_cursor",0);
    }
    break;
  case 3:
    iVar11 = FUN_00cb24b0(*(undefined4 *)(*(char *)(param_1 + 0x42b) * 0x7c + 0x90 + param_1));
    if (iVar11 != 0) {
      iVar11 = *(char *)(param_1 + 0x42b) * 0x7c;
      FUN_00ce4ce0(*(undefined4 *)(iVar11 + 0x90 + param_1),0);
      FUN_00cb2310(*(undefined4 *)(iVar11 + param_1 + 0x90),0);
      iVar11 = *(char *)(param_1 + 0x42a) * 0x7c;
      FUN_00ce4ce0(*(undefined4 *)(iVar11 + 0x90 + param_1),0);
      FUN_00cb2310(*(undefined4 *)(iVar11 + param_1 + 0x90),1);
      *(char *)(param_1 + 0x426) = *(char *)(param_1 + 0x426) + -1;
      *(undefined1 *)(param_1 + 0x42b) = *(undefined1 *)(param_1 + 0x42a);
    }
    break;
  case 4:
    iVar11 = FUN_00cb24b0(*(undefined4 *)(*(char *)(param_1 + 0x42b) * 0x7c + 0x90 + param_1));
    if (iVar11 != 0) {
      iVar11 = *(char *)(param_1 + 0x42b) * 0x7c;
      FUN_00ce4ce0(*(undefined4 *)(iVar11 + 0x90 + param_1),0);
      FUN_00cb2310(*(undefined4 *)(iVar11 + param_1 + 0x90),0);
      if (*(char *)(param_1 + 0x42a) == '\0') {
        *(char *)(param_1 + 0x42b) = *(char *)(param_1 + 0x42b) + -1;
      }
      else {
        *(char *)(param_1 + 0x42b) = *(char *)(param_1 + 0x42b) + '\x01';
      }
      iVar11 = *(char *)(param_1 + 0x42b) * 0x7c;
      FUN_00ce4ce0(*(undefined4 *)(iVar11 + 0x90 + param_1),0);
      FUN_00cb2310(*(undefined4 *)(iVar11 + param_1 + 0x90),1);
      cVar10 = *(char *)(param_1 + 0x42b);
      if (cVar10 == *(char *)(param_1 + 0x42a)) {
        FUN_00ce4d70(2);
        FUN_00ce4d70(9);
        *(undefined1 *)(param_1 + 0x426) = 2;
      }
      else if (*(char *)(param_1 + 0x42a) == '\0') {
        FUN_00cb2310(*(undefined4 *)(cVar10 * 0x7c + 0x90 + param_1),1);
        FUN_00ce4d70(6);
      }
      else {
        FUN_00cb2310(*(undefined4 *)(cVar10 * 0x7c + 0x90 + param_1),1);
        FUN_00ce4d70(5);
      }
    }
    break;
  case 10:
    iVar11 = FUN_00ce4dd0(2);
    if (iVar11 != 0) {
      FUN_00ce4d70(4);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x408),0);
      FUN_0098f980();
      goto LAB_009bbcd7;
    }
    break;
  case 0xb:
    iVar11 = FUN_00ce4dd0(4);
    if ((((((iVar11 != 0) && (DAT_01bea058 == 0)) && (DAT_01bea054 == DAT_01bea050)) &&
         ((1 < DAT_01bea05c && (DAT_01bea044 == 0)))) && (DAT_01bea040 == DAT_01bea03c)) &&
       ((DAT_01bea030 == 2 ||
        ((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) &&
          ((DAT_01bea018 == 0 &&
           (((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)) && (DAT_01bea000 == DAT_01be9ffc)
            ))))) &&
         (((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)) &&
          ((DAT_01be9ff0 == 0 &&
           (((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)) && (DAT_01be9fc4 == DAT_01be9fc0)
            ))))))))))) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3f4),0);
      local_118 = (undefined4 *)(param_1 + 0x41f);
      puVar8 = (undefined4 *)(param_1 + 0x444);
      local_120 = 7;
      do {
        FUN_00cb2310(puVar8[-0x1b],0);
        FUN_0099fb30(*puVar8);
        FUN_00ce4d70(1);
        *(undefined1 *)local_118 = 0;
        local_118 = (undefined4 *)((int)local_118 + 1);
        puVar8 = puVar8 + 1;
        local_120 = local_120 + -1;
      } while (local_120 != 0);
      FUN_00ce4d70(2);
      FUN_00ce4d70(9);
      iVar11 = *(char *)(param_1 + 0x42a) * 0x7c;
      FUN_00ce4ce0(*(undefined4 *)(iVar11 + 0x90 + param_1),0);
      FUN_00cb2310(*(undefined4 *)(iVar11 + param_1 + 0x90),1);
      *(char *)(param_1 + 0x426) = *(char *)(param_1 + 0x426) + '\x01';
      iVar11 = *(int *)(param_1 + 0x444 + *(char *)(param_1 + 0x42a) * 4);
      if (iVar11 == 1) {
        DAT_01bea000 = FUN_009c7430(0xffffffff);
      }
      else if (iVar11 == 2) {
        DAT_01be9fd8 = 0xffffffff;
        *(undefined1 *)(param_1 + 0x427) = 0;
        break;
      }
      *(undefined1 *)(param_1 + 0x427) = 0;
    }
    break;
  case 0xc:
    FUN_009b2310();
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x408),1);
    *(undefined1 *)(param_1 + 0x426) = 1;
    *(undefined1 *)(param_1 + 0x429) = 0;
    uVar4 = FUN_009c4ed0(0);
    uVar5 = FUN_009c4f70(0);
    iVar11 = param_1 + 0x74;
    local_118 = (undefined4 *)(param_1 + 0x444);
    *(undefined4 *)(param_1 + 0x470) = uVar5;
    *(undefined4 *)(param_1 + 0x474) = uVar4;
    *(undefined1 *)(param_1 + 0x464) = 1;
    local_114 = 7;
    do {
      uVar1 = DAT_01b7588c;
      local_120 = iVar11;
      switch(*local_118) {
      case 0:
        uVar5 = 0;
        uVar4 = FUN_009c4f70(0);
        cXmlBinary::cXmlBinary_25(uVar4,uVar5);
        break;
      case 1:
        uVar5 = 1;
        uVar4 = FUN_009c4d90(0);
        cXmlBinary::cXmlBinary_25(uVar4,uVar5);
        break;
      case 2:
        cXmlBinary::cXmlBinary_103();
        local_94 = DAT_018b92f4;
        local_98 = DAT_018b92f0;
        iVar9 = FUN_00de4550("Customize_Info.bxm",0);
        if (iVar9 == 0) {
          FUN_00dd5650(&DAT_01656494);
        }
        else {
          local_11c = -1;
          if (uVar1 == 2) {
            local_11c = 0x16;
          }
          else if (uVar1 == 3) {
            local_11c = 0x17;
          }
          else if (uVar1 == 4) {
            local_11c = 0x18;
          }
          FUN_00e062b0(iVar9,0);
          uVar4 = FUN_00e041c0();
          local_120 = FUN_00e06390(uVar4,"SubWepon");
          local_c8 = (char *)0x0;
          local_c4 = 0;
          local_c0 = 0;
          local_bc = (undefined1 *)0x0;
          local_b8 = 0;
          uStack_b4 = 0;
          local_b3 = 0;
          local_af = 0;
          local_ab = 0;
          local_a9 = 0;
          local_108 = FUN_00e053e0(local_120);
          iVar9 = 0;
          if (0 < local_108) {
            do {
              local_110[0] = FUN_00e05410(local_120,iVar9);
              uVar4 = FUN_00e06390(local_110[0],&DAT_01655cd0);
              FUN_00e068f0(uVar4,local_124);
              if ((short)local_124[0] == local_11c) {
                uVar4 = FUN_00e06390(local_110[0],&DAT_016511c4);
                (*(code *)local_e8[0x1d])(uVar4,&local_c8,0x20);
                FUN_00ce4d70(8);
                break;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_108);
          }
LAB_009bbc4a:
          FUN_00cf9770(*(undefined4 *)(iVar11 + 0x38),&local_c8,0,0xffffffff);
          FUN_00cf9770(*(undefined4 *)(iVar11 + 0x3c),&local_c8,0,0xffffffff);
        }
        goto LAB_009bbc72;
      case 3:
        iVar9 = FUN_009c4ed0(0);
        cXmlBinary::cXmlBinary_103();
        local_100 = DAT_018b92f0;
        local_fc = DAT_018b92f4;
        iVar6 = FUN_00de4550("Customize_Info.bxm",0);
        if (iVar6 != 0) {
          local_11c = -1;
          if (iVar9 == 1) {
            local_11c = 0x19;
          }
          else if (iVar9 == 2) {
            local_11c = 0x1a;
          }
          else if (iVar9 == 3) {
            local_11c = 0x1b;
          }
          FUN_00e062b0(iVar6,0);
          uVar4 = FUN_00e041c0();
          local_110[0] = FUN_00e06390(uVar4,&DAT_01656470);
          local_c8 = (char *)0x0;
          local_c4 = 0;
          local_c0 = 0;
          local_bc = (undefined1 *)0x0;
          local_b8 = 0;
          uStack_b4 = 0;
          local_b3 = 0;
          local_af = 0;
          local_ab = 0;
          local_a9 = 0;
          local_108 = FUN_00e053e0(local_110[0]);
          iVar9 = 0;
          if (0 < local_108) {
            do {
              uVar4 = FUN_00e05410(local_110[0],iVar9);
              uVar5 = FUN_00e06390(uVar4,&DAT_01655cd0);
              FUN_00e068f0(uVar5,local_104);
              if (local_104[0] == local_11c) {
                uVar4 = FUN_00e06390(uVar4,&DAT_016511c4);
                (*(code *)local_e8[0x1d])(uVar4,&local_c8,0x20);
                FUN_00ce4d70(8);
                iVar11 = local_120;
                break;
              }
              iVar9 = iVar9 + 1;
              iVar11 = local_120;
            } while (iVar9 < local_108);
          }
          goto LAB_009bbc4a;
        }
        FUN_00dd5650(&DAT_01656494);
LAB_009bbc72:
        local_e8 = cXmlBinary::vftable;
        FUN_00e04180();
      }
      local_118 = local_118 + 1;
      iVar11 = iVar11 + 0x7c;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
    local_114 = 0;
    local_120 = iVar11;
    break;
  case 100:
    iVar11 = FUN_00999fa0();
    if (iVar11 == 2) {
      FUN_009c8df0();
      goto LAB_009bbcd7;
    }
    if (iVar11 == 1) {
      *(undefined1 *)(param_1 + 0x426) = 2;
    }
    break;
  case 0x65:
    iVar11 = FUN_009c5690();
    if ((iVar11 == 0) && (DAT_018b5758 == 0)) goto LAB_009bbcd7;
  }
switchD_009bae6e_caseD_5:
  if (*(byte *)(param_1 + 0x426) < 10) {
    switch(*(char *)(param_1 + 0x464)) {
    case '\x01':
      if (*(int *)(param_1 + 0x468) != 0) {
        FUN_0098f980();
      }
      if (((((DAT_01bea058 == 0) && (DAT_01bea054 == DAT_01bea050)) && (1 < DAT_01bea05c)) &&
          ((DAT_01bea044 == 0 && (DAT_01bea040 == DAT_01bea03c)))) &&
         ((DAT_01bea030 == 2 ||
          (((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) &&
           (((DAT_01bea018 == 0 &&
             (((((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)) &&
                (DAT_01bea000 == DAT_01be9ffc)) &&
               ((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)))) && (DAT_01be9ff0 == 0)))) &&
            (((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)) &&
             (DAT_01be9fc4 == DAT_01be9fc0)))))))))) {
        DAT_01be9fb4 = FUN_009c7420(*(undefined4 *)(param_1 + 0x470));
        uVar1 = *(uint *)(param_1 + 0x474);
        uVar2 = uVar1;
        DAT_01bea028 = DAT_01be9fb4;
        if (3 < uVar1) {
          FUN_00dd5650(&DAT_01655734,uVar1);
          uVar1 = DAT_01be9fb0;
          uVar2 = DAT_01bea014;
        }
        DAT_01bea014 = uVar2;
        DAT_01be9fb0 = uVar1;
        if (DAT_01be9ffc < 0) {
          uVar4 = FUN_009c4d90(0);
          DAT_01bea000 = FUN_009c7430(uVar4);
        }
        if (((int)DAT_01be9fd4 < 0) && (DAT_01be9fd8 = DAT_01b7588c, DAT_01bea030 - 8U < 2)) {
          DAT_01be9fd8 = DAT_01b7588c | 0x80000000;
        }
        *(char *)(param_1 + 0x464) = *(char *)(param_1 + 0x464) + '\x01';
      }
      break;
    case '\x02':
      if (((((DAT_01bea058 == 0) && (DAT_01bea054 == DAT_01bea050)) && (1 < DAT_01bea05c)) &&
          ((DAT_01bea044 == 0 && (DAT_01bea040 == DAT_01bea03c)))) &&
         ((DAT_01bea030 == 2 ||
          ((((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) &&
              ((DAT_01bea018 == 0 &&
               (((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)) &&
                (DAT_01bea000 == DAT_01be9ffc)))))) &&
             ((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)))) && (DAT_01be9ff0 == 0)) &&
           (((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)) && (DAT_01be9fc4 == DAT_01be9fc0)
            ))))))) {
        *(char *)(param_1 + 0x464) = *(char *)(param_1 + 0x464) + '\x01';
      }
      break;
    case '\x03':
      if (1 < *(byte *)(param_1 + 0x426)) {
        FUN_0040b190();
        local_40 = 0x3f800000;
        local_3c = 0xbf800000;
        FUN_00a7ca40();
        FUN_00de3530();
        if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
          uVar4 = *DAT_01bea01c;
        }
        else {
          uVar4 = 0xffffffff;
        }
        local_c4 = 0x10010;
        local_c0 = 0x10010;
        local_bc = local_90;
        local_c8 = "Pl0010";
        local_b8 = 0;
        cObjReadManager::getDataAtSet(local_110,uVar4,0);
        uVar4 = FUN_00de44b0(&DAT_01657e1c,0);
        local_a8 = cModelDataManager::EntryModelData(uVar4,0);
        local_9c = FUN_00de4550("_param.bxm",0);
        iVar11 = FUN_00de44b0(&DAT_0164518c,0);
        uVar4 = FUN_00de44b0(&DAT_01645174,0);
        local_a0 = FUN_00de44b0(&DAT_01645170,0);
        local_a4 = uVar4;
        if (iVar11 != 0) {
          local_a4 = 0;
          local_a0 = iVar11;
        }
        iVar11 = FUN_00a81b80(&local_c8);
        if (iVar11 != 0) {
          piVar7 = (int *)FUN_00c13920();
          (**(code **)(*piVar7 + 0x60))(0xffffffff);
          *(int *)(param_1 + 0x468) = iVar11;
          piVar7 = (int *)FUN_00a7c8a0();
          if (piVar7 != (int *)0x0) {
            Behavior::setupCloth(local_110);
            FUN_008e3c10();
            (**(code **)(*piVar7 + 0x20))();
            puVar12 = &DAT_01be9db8;
            (**(code **)(*piVar7 + 4))(&DAT_01be9db8);
            iVar11 = FUN_00dd6d80(puVar12);
            if (iVar11 != 0) {
              piVar7[0x2dd] = 1;
            }
          }
        }
        *(char *)(param_1 + 0x464) = *(char *)(param_1 + 0x464) + '\x01';
        *(undefined4 *)(param_1 + 0x46c) = 0;
      }
      break;
    case '\x04':
      if (((*(int *)(param_1 + 0x46c) < 8) &&
          (iVar11 = *(int *)(param_1 + 0x46c) + 1, *(int *)(param_1 + 0x46c) = iVar11, iVar11 == 8))
         && (*(int *)(param_1 + 0x468) != 0)) {
        piVar7 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar7 + 0x1c))();
      }
      if (*(int *)(param_1 + 0x468) != 0) {
        cVar10 = FUN_00cac570(0x100000,0);
        if ((cVar10 != '\0') ||
           ((cVar10 = FUN_00d0d380(0xc,0x1e), cVar10 != '\0' &&
            (0.0 < _DAT_01b7b7a8 - _DAT_01b7b7b8)))) {
          puVar8 = (undefined4 *)FUN_00a7c8d0();
          local_100 = *puVar8;
          uStack_f8 = puVar8[2];
          uStack_f4 = puVar8[3];
          local_fc = (float)puVar8[1] + 0.08726646;
        }
        else {
          cVar10 = FUN_00cac570(0x200000,0);
          if ((cVar10 == '\0') &&
             ((cVar10 = FUN_00d0d380(0xc,0x1e), cVar10 == '\0' ||
              (0.0 <= _DAT_01b7b7a8 - _DAT_01b7b7b8)))) break;
          puVar8 = (undefined4 *)FUN_00a7c8d0();
          local_100 = *puVar8;
          uStack_f8 = puVar8[2];
          uStack_f4 = puVar8[3];
          local_fc = (float)puVar8[1] - 0.08726646;
        }
        FUN_00a7cf00(&local_100);
      }
    }
  }
  iVar11 = 7;
  do {
    FUN_0099fed0();
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  FUN_009a0530();
  return;
}

