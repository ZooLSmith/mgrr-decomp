// src/misc/cMovieViewer.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00991240..009B33B0, 19 functions

#include "types.h"

// 00991240  cMovieViewer::vf0C  size=287  [class]
void __fastcall cMovieViewer::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d389f0(0x16,0,0,0,*(int *)(param_1 + 0x18),0xe,1);
    FUN_00d389f0(0x16,1,0,0,*(undefined4 *)(param_1 + 0x18),0x10,1);
    FUN_00d389f0(0x16,2,0,0,*(undefined4 *)(param_1 + 0x18),0x12,1);
    FUN_00d389f0(0x16,10,0,0,*(undefined4 *)(param_1 + 0x18),0x20,1);
    FUN_00d389f0(0x16,0xb,0,0,*(undefined4 *)(param_1 + 0x18),0x24,1);
    FUN_00d389f0(0x16,0xc,0,0,*(undefined4 *)(param_1 + 0x18),0x2a,1);
    FUN_00d389f0(0x16,0xd,0,0,*(undefined4 *)(param_1 + 0x18),0x2e,1);
  }
  return;
}

// 009913F0  FUN_009913f0  size=96  [callgraph]
void __thiscall FUN_009913f0(int param_1,int param_2)

{
  char *local_c [3];
  
  local_c[0] = "CHAPTER_SEL_15";
  local_c[1] = "CHAPTER_SEL_16";
  local_c[2] = "CHAPTER_SEL_17";
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x88),local_c[param_2],0,0xffffffff);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x88),1,3);
  return;
}

// 009914A0  FUN_009914a0  size=71  [callgraph]
undefined4 FUN_009914a0(int param_1,int param_2)

{
  if (param_1 == 0) {
    return *(undefined4 *)(&DAT_01655424 + param_2 * 0xc);
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0;
    }
    return *(undefined4 *)(&DAT_016556ac + param_2 * 0xc);
  }
  return (&DAT_0165561c)[param_2 * 3];
}

// 009914F0  FUN_009914f0  size=740  [callgraph]
void __thiscall FUN_009914f0(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char local_40 [64];
  
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),1);
  local_40[0x20] = 0;
  local_40[0x21] = '\0';
  local_40[0x22] = '\0';
  local_40[0x23] = '\0';
  local_40[0x24] = '\0';
  local_40[0x25] = '\0';
  local_40[0x26] = '\0';
  local_40[0x27] = '\0';
  local_40[0x28] = '\0';
  local_40[0x29] = '\0';
  local_40[0x2a] = '\0';
  local_40[0x2b] = '\0';
  local_40[0x2c] = '\0';
  local_40[0x2d] = '\0';
  local_40[0x2e] = '\0';
  local_40[0x2f] = '\0';
  local_40[0x30] = '\0';
  local_40[0x31] = '\0';
  local_40[0x32] = '\0';
  local_40[0x33] = '\0';
  local_40[0x34] = '\0';
  local_40[0x35] = '\0';
  local_40[0x36] = '\0';
  local_40[0x37] = '\0';
  local_40[0x38] = '\0';
  local_40[0x39] = '\0';
  local_40[0x3a] = '\0';
  local_40[0x3b] = '\0';
  local_40[0x3c] = '\0';
  local_40[0x3d] = '\0';
  local_40[0x3e] = '\0';
  local_40[0x3f] = 0;
  switch(param_2) {
  case 0:
    pcVar1 = "HUD_PLACE_00";
    break;
  case 1:
    pcVar1 = "HUD_PLACE_01";
    break;
  case 2:
    pcVar1 = "HUD_PLACE_02";
    break;
  case 3:
    pcVar1 = "HUD_PLACE_03";
    break;
  case 4:
    pcVar1 = "HUD_PLACE_04";
    break;
  case 5:
    pcVar1 = "HUD_PLACE_05";
    break;
  case 6:
    pcVar1 = "HUD_PLACE_06";
    break;
  case 7:
    pcVar1 = "HUD_PLACE_07";
    break;
  case 8:
    pcVar1 = "HUD_PLACE_10";
    break;
  case 9:
    pcVar1 = "HUD_PLACE_08";
    break;
  case 10:
    pcVar1 = "HUD_PLACE_09";
    break;
  default:
    goto switchD_00991549_default;
  }
  _sprintf_s(local_40 + 0x20,0x20,pcVar1);
switchD_00991549_default:
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x40),local_40 + 0x20,0,0xffffffff);
  if ((*(int *)(param_1 + 0xad0) != param_2) || (param_3 != 0)) {
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x40),1,3);
  }
  if ((param_2 == 9) || (param_2 == 10)) {
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4c),"CHAPTER_TITLE_04",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x50),"CHAPTER_TITLE_04",0,0xffffffff);
    if ((*(int *)(param_1 + 0xad0) == 9) || (*(int *)(param_1 + 0xad0) == 10)) goto LAB_0099168a;
LAB_0099168e:
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x50),1,3);
  }
  else {
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4c),"CHAPTER_TITLE_01",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x50),"CHAPTER_TITLE_01",0,0xffffffff);
    if ((*(int *)(param_1 + 0xad0) == 9) || (*(int *)(param_1 + 0xad0) == 10)) goto LAB_0099168e;
LAB_0099168a:
    if (param_3 != 0) goto LAB_0099168e;
  }
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x14] = '\0';
  local_40[0x15] = '\0';
  local_40[0x16] = '\0';
  local_40[0x17] = '\0';
  local_40[0x18] = '\0';
  local_40[0x19] = '\0';
  local_40[0x1a] = '\0';
  local_40[0x1b] = '\0';
  local_40[0x1c] = '\0';
  local_40[0x1d] = '\0';
  local_40[0x1e] = '\0';
  local_40[0x1f] = 0;
  switch(param_2) {
  case 0:
    pcVar1 = "CHAPTER_SEL_00";
    break;
  case 1:
    pcVar1 = "CHAPTER_SEL_01";
    break;
  case 2:
    pcVar1 = "CHAPTER_SEL_02";
    break;
  case 3:
    pcVar1 = "CHAPTER_SEL_03";
    break;
  case 4:
    pcVar1 = "CHAPTER_SEL_04";
    break;
  case 5:
    pcVar1 = "CHAPTER_SEL_05";
    break;
  case 6:
    pcVar1 = "CHAPTER_SEL_06";
    break;
  case 7:
    pcVar1 = "CHAPTER_SEL_07";
    break;
  case 8:
    pcVar1 = "CHAPTER_SEL_18";
    break;
  case 9:
    pcVar1 = "CHAPTER_SEL_08";
    break;
  case 10:
    pcVar1 = "CHAPTER_SEL_09";
    break;
  default:
    goto switchD_009916e1_default;
  }
  _sprintf_s(local_40,0x20,pcVar1);
switchD_009916e1_default:
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x58),local_40,0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x5c),local_40,0,0xffffffff);
  if ((*(int *)(param_1 + 0xad0) != param_2) || (param_3 != 0)) {
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x58),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x5c),1,3);
  }
  *(int *)(param_1 + 0xad0) = param_2;
  return;
}

// 00991830  FUN_00991830  size=276  [callgraph]
void __thiscall FUN_00991830(int param_1,int param_2,int param_3)

{
  char local_20 [32];
  
  if (*(int *)(param_1 + 0xcc) == 1) {
    param_2 = param_2 % (*(int *)(param_1 + 0xdc) / 2);
  }
  else if (*(int *)(param_1 + 0xcc) == 2) {
    param_2 = param_2 % (*(int *)(param_1 + 0xe0) / 2);
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
  if (param_3 != 0) {
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x6c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x70),1,3);
  }
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  local_20[0x10] = '\0';
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = '\0';
  local_20[0x18] = '\0';
  local_20[0x19] = '\0';
  local_20[0x1a] = '\0';
  local_20[0x1b] = '\0';
  local_20[0x1c] = '\0';
  local_20[0x1d] = '\0';
  local_20[0x1e] = '\0';
  local_20[0x1f] = 0;
  local_20[0] = '\0';
  _sprintf_s(local_20,0x20,"%03d",param_2 + 1);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x74),local_20);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x78),local_20);
  if (param_3 != 0) {
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x74),1,3);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x78),1,3);
  }
  *(int *)(param_1 + 0xad4) = param_2;
  return;
}

// 00991950  FUN_00991950  size=158  [callgraph]
void __fastcall FUN_00991950(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar1 = *(int *)(param_1 + 0xcc);
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = (&DAT_01655428)[*(int *)(param_1 + 0xd0) * 3];
    }
    else if (iVar1 == 1) {
      iVar2 = (&DAT_01655620)[*(int *)(param_1 + 0xd0) * 3];
    }
    else if (iVar1 == 2) {
      iVar2 = (&DAT_016556b0)[*(int *)(param_1 + 0xd0) * 3];
    }
    if ((*(int *)(param_1 + 0x548 + iVar2 * 0x1c) != 0) &&
       (*(int *)(param_1 + iVar2 * 0x1c + 0x544) != 0)) {
      FUN_00ccde60(*(undefined4 *)(param_1 + 0x24),param_1 + (iVar2 * 5 + 0x50) * 4);
      FUN_00ce4d70(0xc);
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
  }
  return;
}

// 009919F0  FUN_009919f0  size=117  [callgraph]
void __fastcall FUN_009919f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xd0) + -3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0xcc) * 4);
  }
  puVar4 = (undefined4 *)(param_1 + 0xe8);
  iVar5 = 7;
  do {
    iVar1 = *(int *)(param_1 + 0xcc);
    if (iVar1 == 0) {
      uVar3 = (&DAT_01655428)[iVar2 * 3];
LAB_00991a48:
      *puVar4 = uVar3;
    }
    else {
      if (iVar1 == 1) {
        uVar3 = (&DAT_01655620)[iVar2 * 3];
        goto LAB_00991a48;
      }
      if (iVar1 == 2) {
        uVar3 = (&DAT_016556b0)[iVar2 * 3];
        goto LAB_00991a48;
      }
    }
    iVar2 = iVar2 + 1;
    if (*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0xcc) * 4) <= iVar2) {
      iVar2 = 0;
    }
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}

// 00991A70  FUN_00991a70  size=208  [callgraph]
void __fastcall FUN_00991a70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = *(int *)(param_1 + 0xe8 + iVar2 * 4);
    if (((iVar3 != *(int *)(param_1 + 0x104 + iVar2 * 4)) &&
        (*(int *)(param_1 + 0x548 + iVar3 * 0x1c) != 0)) &&
       (*(int *)(param_1 + iVar3 * 0x1c + 0x544) != 0)) {
      switch(iVar2) {
      case 0:
        uVar1 = *(undefined4 *)(param_1 + 0xa8);
        break;
      case 1:
        uVar1 = *(undefined4 *)(param_1 + 0xac);
        break;
      case 2:
        uVar1 = *(undefined4 *)(param_1 + 0xb0);
        break;
      case 3:
        iVar3 = param_1 + (iVar3 * 5 + 0x50) * 4;
        FUN_00ccde60(*(undefined4 *)(param_1 + 0xb4),iVar3);
        uVar1 = *(undefined4 *)(param_1 + 0xc4);
        goto LAB_00991b1d;
      case 4:
        uVar1 = *(undefined4 *)(param_1 + 0xb8);
        break;
      case 5:
        uVar1 = *(undefined4 *)(param_1 + 0xbc);
        break;
      case 6:
        uVar1 = *(undefined4 *)(param_1 + 0xc0);
        break;
      default:
        goto switchD_00991abd_default;
      }
      iVar3 = param_1 + (iVar3 * 5 + 0x50) * 4;
LAB_00991b1d:
      FUN_00ccde60(uVar1,iVar3);
switchD_00991abd_default:
      *(undefined4 *)(param_1 + 0x104 + iVar2 * 4) = *(undefined4 *)(param_1 + 0xe8 + iVar2 * 4);
    }
    iVar2 = iVar2 + 1;
    if (6 < iVar2) {
      return;
    }
  } while( true );
}

// 00991B70  FUN_00991b70  size=167  [callgraph]
float10 __thiscall FUN_00991b70(int param_1,int param_2,int param_3)

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
  iVar1 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x20 + param_2 * 4),local_54);
  if (iVar1 != 0) {
    local_58 = local_54[param_3] + local_54[0x11];
  }
  iVar1 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x20 + param_2 * 4));
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 00991C20  FUN_00991c20  size=167  [callgraph]
float10 __thiscall FUN_00991c20(int param_1,int param_2,int param_3)

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
  iVar1 = FUN_00cf9960(*(undefined4 *)(param_1 + 0x20 + param_2 * 4),local_54);
  if (iVar1 != 0) {
    local_58 = local_54[param_3] + local_54[0x11];
  }
  iVar1 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x20 + param_2 * 4));
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 00991CD0  FUN_00991cd0  size=35  [callgraph]
float10 __thiscall FUN_00991cd0(int param_1,int param_2,float param_3)

{
  float local_8 [2];
  
  FUN_00cb3240(local_8,*(undefined4 *)(param_1 + 0x20 + param_2 * 4));
  return (float10)param_3 / (float10)local_8[0];
}

// 00991D00  FUN_00991d00  size=160  [callgraph]
void FUN_00991d00(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *_DstBuf;
  int local_18c [3];
  char local_180;
  undefined1 local_17f [383];
  
  puVar4 = &DAT_01b388c0;
  for (iVar3 = 0x33; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_180 = '\0';
  _memset(local_17f,0,0x17f);
  local_18c[0] = 0;
  local_18c[1] = 0x28;
  local_18c[2] = 0x2e;
  iVar3 = 0;
  _DstBuf = &local_180;
  do {
    iVar1 = local_18c[iVar3];
    if (iVar1 < 0x33) {
      _sprintf_s(_DstBuf,0x80,"ui\\cutscene\\scene_%02d.wtb",iVar1 + 1);
      uVar2 = FUN_00e9e570(5,_DstBuf,&DAT_01b82930,0,0);
      (&DAT_01b388c0)[iVar1] = uVar2;
    }
    iVar3 = iVar3 + 1;
    _DstBuf = _DstBuf + 0x80;
  } while (iVar3 < 3);
  return;
}

// 00991DA0  FUN_00991da0  size=116  [callgraph]
void FUN_00991da0(void)

{
  undefined4 uVar1;
  int iVar2;
  char local_80;
  undefined1 local_7f [127];
  
  local_80 = '\0';
  _memset(local_7f,0,0x7f);
  iVar2 = 0;
  do {
    if ((&DAT_01b388c0)[iVar2] == 0) {
      _sprintf_s(&local_80,0x80,"ui\\cutscene\\scene_%02d.wtb",iVar2 + 1);
      uVar1 = FUN_00e9e570(5,&local_80,&DAT_01b82930,0,0);
      (&DAT_01b388c0)[iVar2] = uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x33);
  return;
}

// 009A3070  cMovieViewer::vf08  size=1266  [class]
void __fastcall cMovieViewer::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_00cb25d0(0x13);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_00cb25d0(0x22);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = FUN_00cb25d0(0x24);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = FUN_00cb25d0(0x25);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_00cb25d0(0x26);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = FUN_00cb25d0(0x2a);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_00cb25d0(0x2b);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = FUN_00cb25d0(0x2c);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = FUN_00cb25d0(0x2e);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = FUN_00cb25d0(0x2f);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = FUN_00cb25d0(0x30);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = FUN_00cb25d0(0x58);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x80));
  FUN_00cb2240(uVar2);
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_00cb25d0(0x2a);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  uVar2 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  uVar2 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  FUN_00ce4dc0(1,1);
  FUN_00ce4dc0(5,1);
  iVar3 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar3 != 0) {
      uVar2 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar3 + 4) = uVar2;
    }
  }
  *(int *)(param_1 + 0x130) = iVar3;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x84));
    uVar2 = *puVar4;
    iVar3 = *(int *)(param_1 + 0x130);
    uVar1 = puVar4[1];
    FUN_0099a440(iVar3 + 0x8c,&DAT_016575ac,"movie_view");
    *(undefined4 *)(iVar3 + 0x10c) = uVar2;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x110) = uVar1;
    *(undefined4 *)(iVar3 + 0x114) = 0x41700000;
    iVar3 = *(int *)(param_1 + 0x130);
    *(undefined4 *)(iVar3 + 0x78) = 1;
    *(undefined4 *)(iVar3 + 0x74) = 0;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),9);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),9);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),10);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x34),10);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),10);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c),10);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00cb2740(0);
  }
  iVar3 = *(int *)(param_1 + 0xd8) + -3;
  if (*(int *)(param_1 + 0xd8) <= iVar3) {
    iVar3 = 0;
  }
  iVar5 = iVar3 + 1;
  *(undefined4 *)(param_1 + 0xe8) = (&DAT_01655428)[iVar3 * 3];
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  if (*(int *)(param_1 + 0xd8) <= iVar5) {
    iVar5 = 0;
  }
  iVar3 = iVar5 + 1;
  *(undefined4 *)(param_1 + 0xec) = (&DAT_01655428)[iVar5 * 3];
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  if (*(int *)(param_1 + 0xd8) <= iVar3) {
    iVar3 = 0;
  }
  iVar5 = iVar3 + 1;
  *(undefined4 *)(param_1 + 0xf0) = (&DAT_01655428)[iVar3 * 3];
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  if (*(int *)(param_1 + 0xd8) <= iVar5) {
    iVar5 = 0;
  }
  iVar3 = iVar5 + 1;
  *(undefined4 *)(param_1 + 0xf4) = (&DAT_01655428)[iVar5 * 3];
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  if (*(int *)(param_1 + 0xd8) <= iVar3) {
    iVar3 = 0;
  }
  iVar5 = iVar3 + 1;
  *(undefined4 *)(param_1 + 0xf8) = (&DAT_01655428)[iVar3 * 3];
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  if (*(int *)(param_1 + 0xd8) <= iVar5) {
    iVar5 = 0;
  }
  iVar3 = iVar5 + 1;
  *(undefined4 *)(param_1 + 0xfc) = (&DAT_01655428)[iVar5 * 3];
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  if (*(int *)(param_1 + 0xd8) <= iVar3) {
    iVar3 = 0;
  }
  uVar2 = (&DAT_01655428)[iVar3 * 3];
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),0);
  FUN_00cb2600(1);
  FUN_00cb2630(1);
  FUN_00991da0();
  return;
}

// 009A3570  FUN_009a3570  size=2277  [callgraph]
void __fastcall FUN_009a3570(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int local_34;
  char *local_30 [3];
  undefined1 uStack_24;
  undefined4 local_23;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  iVar5 = FUN_00c1d6c0();
  if (iVar5 != 0) {
    return;
  }
  iVar5 = 0;
  do {
    FUN_00d38a30(0x16,iVar5 + 10,*(undefined4 *)(param_1 + 0x18));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  local_34 = -1;
  iVar5 = 0;
  do {
    cVar4 = FUN_00d0d3e0(0x16,iVar5);
    if ((cVar4 != '\0') && (*(int *)(param_1 + 0xcc) != iVar5)) {
      iVar8 = *(int *)(param_1 + 0xcc);
      if (iVar8 == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),10);
        uVar7 = *(undefined4 *)(param_1 + 0x2c);
LAB_009a3624:
        FUN_00ce4ce0(uVar7,10);
      }
      else {
        if (iVar8 == 1) {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),10);
          uVar7 = *(undefined4 *)(param_1 + 0x34);
          goto LAB_009a3624;
        }
        if (iVar8 == 2) {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),10);
          uVar7 = *(undefined4 *)(param_1 + 0x3c);
          goto LAB_009a3624;
        }
      }
      *(int *)(param_1 + 0xcc) = iVar5;
      if (iVar5 == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),9);
        uVar7 = *(undefined4 *)(param_1 + 0x2c);
LAB_009a367b:
        FUN_00ce4ce0(uVar7,9);
      }
      else {
        if (iVar5 == 1) {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),9);
          uVar7 = *(undefined4 *)(param_1 + 0x34);
          goto LAB_009a367b;
        }
        if (iVar5 == 2) {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),9);
          uVar7 = *(undefined4 *)(param_1 + 0x3c);
          goto LAB_009a367b;
        }
      }
      iVar8 = *(int *)(param_1 + 0xcc);
      local_30[0] = "CHAPTER_SEL_15";
      local_30[1] = "CHAPTER_SEL_16";
      local_30[2] = "CHAPTER_SEL_17";
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),1);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x88),local_30[iVar8],0,0xffffffff);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x88),1,3);
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      if (*(int *)(param_1 + 0xcc) == 1) {
        iVar8 = *(int *)(param_1 + 0xdc);
LAB_009a36ff:
        iVar8 = (int)(0 % (longlong)(iVar8 / 2));
      }
      else if (*(int *)(param_1 + 0xcc) == 2) {
        iVar8 = *(int *)(param_1 + 0xe0);
        goto LAB_009a36ff;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
      local_30[1] = (char *)0x0;
      local_30[2] = (char *)0x0;
      uStack_24 = 0;
      local_23 = 0;
      local_1f = 0;
      local_1b = 0;
      local_17 = 0;
      local_13 = 0;
      local_11 = 0;
      local_30[0] = (char *)0x0;
      _sprintf_s((char *)local_30,0x20,"%03d",iVar8 + 1);
      FUN_00cce090(*(undefined4 *)(param_1 + 0x74),local_30);
      FUN_00cce090(*(undefined4 *)(param_1 + 0x78),local_30);
      iVar2 = *(int *)(param_1 + 0xcc);
      *(int *)(param_1 + 0xad4) = iVar8;
      if (iVar2 == 0) {
LAB_009a37a3:
        uVar7 = 0;
      }
      else if (iVar2 == 1) {
        uVar7 = 9;
      }
      else {
        if (iVar2 != 2) goto LAB_009a37a3;
        uVar7 = 10;
      }
      FUN_009914f0(uVar7,0);
      FUN_009919f0();
      FUN_00ce4d70(0xd);
      *(undefined4 *)(param_1 + 0x138) = 1;
      FUN_00e5e050("core_se_sys_cursor",0);
      local_34 = iVar5;
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  bVar3 = false;
  iVar5 = 0;
  do {
    if ((*(int *)(param_1 + 0xd4) == 1) || (*(int *)(param_1 + 0xd4) == 2)) break;
    cVar4 = FUN_00d0d3e0(0x16,iVar5 + 10);
    if (cVar4 != '\0') {
      bVar3 = true;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  if (local_34 != -1) {
    return;
  }
  cVar4 = FUN_00cac7e0(8,0);
  if (((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x40000,0), cVar4 == '\0')) &&
     (cVar4 = FUN_00cac9c0(0), cVar4 == '\0')) {
    cVar4 = FUN_00cac7e0(4,0);
    if (((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x80000,0), cVar4 == '\0')) &&
       (cVar4 = FUN_00cac9c0(1), cVar4 == '\0')) {
      cVar4 = FUN_00ce12f0(0);
      if (((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(2,0), cVar4 == '\0')) &&
         ((cVar4 = FUN_00cac7e0(0x20000,0), cVar4 == '\0' && (!bVar3)))) {
        cVar4 = FUN_00ce1360(0);
        if ((cVar4 == '\0') && (cVar4 = FUN_00cac960(), cVar4 == '\0')) {
          return;
        }
        (**(code **)(*(int *)(param_1 + 0x120) + 4))(0x35,0,1);
        *(undefined4 *)(param_1 + 200) = 6;
        FUN_00e5e050("core_se_sys_cancel",0);
        return;
      }
      FUN_00ce4d70(5);
      FUN_00ce4d70(0xf);
      FUN_00ce4d70(4);
      iVar5 = *(int *)(param_1 + 0xcc);
      if (iVar5 == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),8);
        uVar7 = *(undefined4 *)(param_1 + 0x2c);
      }
      else if (iVar5 == 1) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),8);
        uVar7 = *(undefined4 *)(param_1 + 0x34);
      }
      else {
        if (iVar5 != 2) goto LAB_009a39a2;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),8);
        uVar7 = *(undefined4 *)(param_1 + 0x3c);
      }
      FUN_00ce4ce0(uVar7,8);
LAB_009a39a2:
      *(undefined4 *)(param_1 + 200) = 4;
      if (*(int *)(param_1 + 0x130) != 0) {
        puVar6 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x84));
        local_30[0] = (char *)*puVar6;
        iVar5 = *(int *)(param_1 + 0x130);
        local_30[1] = (char *)puVar6[1];
        FUN_0099a440(iVar5 + 0x8c,&DAT_016575ac,"movie_view_play");
        *(char **)(iVar5 + 0x10c) = local_30[0];
        *(undefined4 *)(iVar5 + 0x118) = 0;
        *(char **)(iVar5 + 0x110) = local_30[1];
        *(undefined4 *)(iVar5 + 0x5c) = 1;
        *(undefined4 *)(iVar5 + 0x114) = 0x41700000;
      }
      FUN_00e5e050("core_se_sys_decide_s",0);
      return;
    }
    iVar5 = *(int *)(param_1 + 0xcc);
    if (iVar5 == 0) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),10);
      uVar7 = *(undefined4 *)(param_1 + 0x2c);
LAB_009a3a7d:
      FUN_00ce4ce0(uVar7,10);
    }
    else {
      if (iVar5 == 1) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),10);
        uVar7 = *(undefined4 *)(param_1 + 0x34);
        goto LAB_009a3a7d;
      }
      if (iVar5 == 2) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),10);
        uVar7 = *(undefined4 *)(param_1 + 0x3c);
        goto LAB_009a3a7d;
      }
    }
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    if (2 < *(int *)(param_1 + 0xcc)) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    iVar5 = *(int *)(param_1 + 0xcc);
    if (iVar5 == 0) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),9);
      uVar7 = *(undefined4 *)(param_1 + 0x2c);
LAB_009a3ae6:
      FUN_00ce4ce0(uVar7,9);
    }
    else {
      if (iVar5 == 1) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),9);
        uVar7 = *(undefined4 *)(param_1 + 0x34);
        goto LAB_009a3ae6;
      }
      if (iVar5 == 2) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),9);
        uVar7 = *(undefined4 *)(param_1 + 0x3c);
        goto LAB_009a3ae6;
      }
    }
    iVar5 = *(int *)(param_1 + 0xcc);
    local_30[0] = "CHAPTER_SEL_15";
    local_30[1] = "CHAPTER_SEL_16";
    local_30[2] = "CHAPTER_SEL_17";
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x88),local_30[iVar5],0,0xffffffff);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x88),1,3);
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (*(int *)(param_1 + 0xcc) == 1) {
      iVar5 = *(int *)(param_1 + 0xdc);
LAB_009a3b6e:
      iVar5 = (int)(0 % (longlong)(iVar5 / 2));
    }
    else if (*(int *)(param_1 + 0xcc) == 2) {
      iVar5 = *(int *)(param_1 + 0xe0);
      goto LAB_009a3b6e;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
    local_30[1] = (char *)0x0;
    local_30[2] = (char *)0x0;
    uStack_24 = 0;
    local_23 = 0;
    local_1f = 0;
    local_1b = 0;
    local_17 = 0;
    local_13 = 0;
    local_11 = 0;
    local_30[0] = (char *)0x0;
    _sprintf_s((char *)local_30,0x20,"%03d",iVar5 + 1);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x74),local_30);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x78),local_30);
    iVar8 = *(int *)(param_1 + 0xcc);
    *(int *)(param_1 + 0xad4) = iVar5;
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        FUN_009914f0(9,0);
        goto LAB_009a3e27;
      }
      if (iVar8 == 2) {
        FUN_009914f0(10,0);
        goto LAB_009a3e27;
      }
    }
    FUN_009914f0(0,0);
    goto LAB_009a3e27;
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  if (iVar5 == 0) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),10);
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
LAB_009a3c89:
    FUN_00ce4ce0(uVar7,10);
  }
  else {
    if (iVar5 == 1) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),10);
      uVar7 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_009a3c89;
    }
    if (iVar5 == 2) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),10);
      uVar7 = *(undefined4 *)(param_1 + 0x3c);
      goto LAB_009a3c89;
    }
  }
  piVar1 = (int *)(param_1 + 0xcc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0xcc) = 2;
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  if (iVar5 == 0) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),9);
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
LAB_009a3cef:
    FUN_00ce4ce0(uVar7,9);
  }
  else {
    if (iVar5 == 1) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),9);
      uVar7 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_009a3cef;
    }
    if (iVar5 == 2) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),9);
      uVar7 = *(undefined4 *)(param_1 + 0x3c);
      goto LAB_009a3cef;
    }
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  local_30[0] = "CHAPTER_SEL_15";
  local_30[1] = "CHAPTER_SEL_16";
  local_30[2] = "CHAPTER_SEL_17";
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x88),local_30[iVar5],0,0xffffffff);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x88),1,3);
  iVar5 = *(int *)(param_1 + 0xcc);
  if (iVar5 == 0) {
LAB_009a3d6c:
    uVar7 = 0;
  }
  else if (iVar5 == 1) {
    uVar7 = 9;
  }
  else {
    if (iVar5 != 2) goto LAB_009a3d6c;
    uVar7 = 10;
  }
  FUN_009914f0(uVar7,0);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xcc) == 1) {
    iVar5 = *(int *)(param_1 + 0xdc);
LAB_009a3da2:
    iVar5 = (int)(0 % (longlong)(iVar5 / 2));
  }
  else if (*(int *)(param_1 + 0xcc) == 2) {
    iVar5 = *(int *)(param_1 + 0xe0);
    goto LAB_009a3da2;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
  local_30[1] = (char *)0x0;
  local_30[2] = (char *)0x0;
  uStack_24 = 0;
  local_23 = 0;
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_30[0] = (char *)0x0;
  _sprintf_s((char *)local_30,0x20,"%03d",iVar5 + 1);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x74),local_30);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x78),local_30);
  *(int *)(param_1 + 0xad4) = iVar5;
LAB_009a3e27:
  FUN_009919f0();
  FUN_00ce4d70(0xd);
  *(undefined4 *)(param_1 + 0x138) = 1;
  FUN_00e5e050("core_se_sys_cursor",0);
  return;
}

// 009A3E60  FUN_009a3e60  size=1519  [callgraph]
void __fastcall FUN_009a3e60(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  char local_20 [32];
  
  iVar5 = FUN_00c1d6c0();
  if (iVar5 != 0) {
    return;
  }
  bVar2 = false;
  iVar5 = 0;
  do {
    FUN_00d38a30(0x16,iVar5 + 10,*(undefined4 *)(param_1 + 0x18));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  bVar3 = false;
  iVar5 = 0;
  do {
    if ((*(int *)(param_1 + 0xd4) == 1) || (*(int *)(param_1 + 0xd4) == 2)) break;
    cVar4 = FUN_00d0d3e0(0x16,iVar5 + 10);
    if (cVar4 != '\0') {
      bVar3 = true;
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    if ((*(int *)(param_1 + 0xd4) == 1) || (*(int *)(param_1 + 0xd4) == 2)) break;
    cVar4 = FUN_00d0d3e0(0x16,iVar5);
    if (cVar4 != '\0') {
      bVar2 = true;
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  if (*(int *)(param_1 + 0xd4) == 1) {
    uVar8 = 2;
LAB_009a3f1b:
    iVar5 = FUN_00ce4dd0(uVar8);
    if (iVar5 == 0) {
      return;
    }
    FUN_009919f0();
    FUN_00ce4d70(1);
    *(undefined4 *)(param_1 + 0xd4) = 0;
    return;
  }
  uVar8 = 0;
  if (*(int *)(param_1 + 0xd4) == 2) goto LAB_009a3f1b;
  cVar4 = FUN_00cac7e0(8,0);
  if (((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x40000,0), cVar4 == '\0')) &&
     (cVar4 = FUN_00cac9c0(0), cVar4 == '\0')) {
    cVar4 = FUN_00cac7e0(4,0);
    if (((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(0x80000,0), cVar4 == '\0')) &&
       ((cVar4 = FUN_00cac9c0(1), cVar4 == '\0' && (!bVar3)))) {
      cVar4 = FUN_00ce12f0(0);
      if (cVar4 != '\0') {
        *(undefined4 *)(param_1 + 0xe4) = 0;
        *(undefined4 *)(param_1 + 200) = 5;
        DAT_01b391fc = 0;
        FUN_00e5e050("core_se_sys_decide_s");
        return;
      }
      cVar4 = FUN_00cac640(0x40,0);
      if ((cVar4 != '\0') || (iVar5 = FUN_00dd9400(0x58), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
        *(undefined4 *)(param_1 + 200) = 5;
        DAT_01b391fc = 1;
        FUN_00e5e050("core_se_sys_decide_s",0);
        return;
      }
      cVar4 = FUN_00ce1360(0);
      if ((((cVar4 == '\0') && (cVar4 = FUN_00cac7e0(1,0), cVar4 == '\0')) &&
          (cVar4 = FUN_00cac7e0(0x10000,0), cVar4 == '\0')) &&
         ((cVar4 = FUN_00cac960(), cVar4 == '\0' && (!bVar2)))) {
        return;
      }
      FUN_00ce4d70(6);
      FUN_00ce4d70(0x10);
      FUN_00ce4d70(5);
      iVar5 = *(int *)(param_1 + 0xcc);
      if (iVar5 == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),9);
        uVar8 = *(undefined4 *)(param_1 + 0x2c);
      }
      else if (iVar5 == 1) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),9);
        uVar8 = *(undefined4 *)(param_1 + 0x34);
      }
      else {
        if (iVar5 != 2) goto LAB_009a4105;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),9);
        uVar8 = *(undefined4 *)(param_1 + 0x3c);
      }
      FUN_00ce4ce0(uVar8,9);
LAB_009a4105:
      *(undefined4 *)(param_1 + 200) = 3;
      if (*(int *)(param_1 + 0x130) != 0) {
        puVar6 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x84));
        FUN_009a2df0("movie_view",*puVar6,puVar6[1],0x41700000,0);
      }
      FUN_00e5e050("core_se_sys_cancel",0);
      return;
    }
    FUN_00ce4d70(3);
    FUN_00ce4d70(0);
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    iVar5 = *(int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0xd8 + iVar5 * 4) + -1 < *(int *)(param_1 + 0xd0)) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    iVar7 = *(int *)(param_1 + 0xd0);
    if (iVar5 == 0) {
      uVar8 = *(undefined4 *)(&DAT_01655420 + iVar7 * 0xc);
    }
    else if (iVar5 == 1) {
      uVar8 = (&DAT_01655618)[iVar7 * 3];
    }
    else if (iVar5 == 2) {
      uVar8 = *(undefined4 *)(&DAT_016556a8 + iVar7 * 0xc);
    }
    else {
      uVar8 = 0;
    }
    FUN_009914f0(uVar8,0);
    iVar5 = *(int *)(param_1 + 0xd0);
    if (*(int *)(param_1 + 0xcc) == 1) {
      iVar7 = *(int *)(param_1 + 0xdc);
LAB_009a4230:
      iVar5 = iVar5 % (iVar7 / 2);
    }
    else if (*(int *)(param_1 + 0xcc) == 2) {
      iVar7 = *(int *)(param_1 + 0xe0);
      goto LAB_009a4230;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = 0;
    local_20[0] = '\0';
    _sprintf_s(local_20,0x20,"%03d",iVar5 + 1);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x74),local_20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x78),local_20);
    *(int *)(param_1 + 0xad4) = iVar5;
    *(undefined4 *)(param_1 + 0xd4) = 2;
    FUN_00ccde60(*(undefined4 *)(param_1 + 0xc4),param_1 + (*(int *)(param_1 + 0xf8) * 5 + 0x50) * 4
                );
    *(undefined4 *)(param_1 + 0x138) = 1;
    goto LAB_009a4441;
  }
  FUN_00ce4d70(2);
  FUN_00ce4d70(2);
  piVar1 = (int *)(param_1 + 0xd0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0xcc) * 4) + -1;
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  iVar7 = *(int *)(param_1 + 0xd0);
  if (iVar5 == 0) {
    uVar8 = *(undefined4 *)(&DAT_01655420 + iVar7 * 0xc);
  }
  else if (iVar5 == 1) {
    uVar8 = (&DAT_01655618)[iVar7 * 3];
  }
  else if (iVar5 == 2) {
    uVar8 = *(undefined4 *)(&DAT_016556a8 + iVar7 * 0xc);
  }
  else {
    uVar8 = 0;
  }
  FUN_009914f0(uVar8,0);
  iVar5 = *(int *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0xcc) == 1) {
    iVar7 = *(int *)(param_1 + 0xdc);
LAB_009a438b:
    iVar5 = iVar5 % (iVar7 / 2);
  }
  else if (*(int *)(param_1 + 0xcc) == 2) {
    iVar7 = *(int *)(param_1 + 0xe0);
    goto LAB_009a438b;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),1);
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  local_20[0x10] = '\0';
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = '\0';
  local_20[0x18] = '\0';
  local_20[0x19] = '\0';
  local_20[0x1a] = '\0';
  local_20[0x1b] = '\0';
  local_20[0x1c] = '\0';
  local_20[0x1d] = '\0';
  local_20[0x1e] = '\0';
  local_20[0x1f] = 0;
  local_20[0] = '\0';
  _sprintf_s(local_20,0x20,"%03d",iVar5 + 1);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x74),local_20);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x78),local_20);
  *(int *)(param_1 + 0xad4) = iVar5;
  *(undefined4 *)(param_1 + 0xd4) = 1;
  FUN_00ccde60(*(undefined4 *)(param_1 + 0xc4),param_1 + (*(int *)(param_1 + 0xf0) * 5 + 0x50) * 4);
  *(undefined4 *)(param_1 + 0x138) = 1;
LAB_009a4441:
  FUN_00e5e050("core_se_sys_cursor",0);
  return;
}

// 009A4460  FUN_009a4460  size=399  [callgraph]
void __fastcall FUN_009a4460(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0xe4)) {
  case 0:
    fVar1 = *(float *)(param_1 + 0x134) + 0.1;
    *(float *)(param_1 + 0x134) = fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      *(undefined4 *)(param_1 + 0x134) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xe4) = 1;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00cb2740(*(undefined4 *)(param_1 + 0x134));
    }
    FUN_00cb2740(1.0 - *(float *)(param_1 + 0x134));
    iVar4 = *(int *)(param_1 + 0x130);
    if (iVar4 != 0) {
      fVar1 = *(float *)(param_1 + 0x134);
      *(undefined4 *)(iVar4 + 0x78) = 1;
      *(float *)(iVar4 + 0x74) = 1.0 - fVar1;
      return;
    }
    break;
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0xcc);
    uVar3 = FUN_009914a0(uVar2,*(undefined4 *)(param_1 + 0xd0));
    DAT_01b391f8 = *(undefined4 *)(param_1 + 0xd0);
    DAT_01b391f4 = uVar2;
    FUN_00c1d5b0(uVar3,0);
    *(undefined4 *)(param_1 + 0xe4) = 2;
    return;
  case 2:
    iVar4 = FUN_00c1d6c0();
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xe4) = 3;
      return;
    }
    break;
  case 3:
    iVar4 = FUN_00c1d6c0();
    if (iVar4 == 0) {
      DAT_01b391f4 = iVar4;
      DAT_01b391f8 = iVar4;
      DAT_01b391fc = iVar4;
      *(undefined4 *)(param_1 + 0xe4) = 6;
      return;
    }
    break;
  case 4:
  case 5:
    break;
  case 6:
    fVar1 = *(float *)(param_1 + 0x134) - 0.1;
    *(float *)(param_1 + 0x134) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 200) = 4;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00cb2740(*(undefined4 *)(param_1 + 0x134));
    }
    FUN_00cb2740(1.0 - *(float *)(param_1 + 0x134));
    iVar4 = *(int *)(param_1 + 0x130);
    if (iVar4 != 0) {
      fVar1 = *(float *)(param_1 + 0x134);
      *(undefined4 *)(iVar4 + 0x78) = 1;
      *(float *)(iVar4 + 0x74) = 1.0 - fVar1;
    }
    break;
  default:
    goto switchD_009a4473_default;
  }
switchD_009a4473_default:
  return;
}

// 009B3390  cMovieViewer::vf00  size=30  [class]
undefined4 __thiscall cMovieViewer::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_12();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B33B0  cMovieViewer::vf14  size=1786  [class]
void __fastcall cMovieViewer::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  int *local_60 [2];
  float local_58 [2];
  float local_50 [2];
  float local_48 [2];
  char local_40 [64];
  
  switch(*(undefined4 *)(param_1 + 200)) {
  case 0:
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x13c);
    *(float *)(param_1 + 0x13c) = fVar1;
    if (100.0 < fVar1) {
      FUN_00ce4d70(0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x28),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x2c),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x30),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x34),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x38),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3c),1,3);
      FUN_009913f0(*(undefined4 *)(param_1 + 0xcc));
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),1);
      local_40[0x21] = '\0';
      local_40[0x22] = '\0';
      local_40[0x23] = '\0';
      local_40[0x24] = '\0';
      local_40[0x25] = '\0';
      local_40[0x26] = '\0';
      local_40[0x27] = '\0';
      local_40[0x28] = '\0';
      local_40[0x29] = '\0';
      local_40[0x2a] = '\0';
      local_40[0x2b] = '\0';
      local_40[0x2c] = '\0';
      local_40[0x2d] = '\0';
      local_40[0x2e] = '\0';
      local_40[0x2f] = '\0';
      local_40[0x30] = '\0';
      local_40[0x31] = '\0';
      local_40[0x32] = '\0';
      local_40[0x33] = '\0';
      local_40[0x34] = '\0';
      local_40[0x35] = '\0';
      local_40[0x36] = '\0';
      local_40[0x37] = '\0';
      local_40[0x38] = '\0';
      local_40[0x39] = '\0';
      local_40[0x3a] = '\0';
      local_40[0x3b] = '\0';
      local_40[0x3c] = '\0';
      local_40[0x3d] = '\0';
      local_40[0x3e] = '\0';
      local_40[0x3f] = 0;
      local_40[0x20] = 0;
      _sprintf_s(local_40 + 0x20,0x20,"HUD_PLACE_00");
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x40),local_40 + 0x20,0,0xffffffff);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x40),1,3);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x4c),"CHAPTER_TITLE_01",0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x50),"CHAPTER_TITLE_01",0,0xffffffff);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4c),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x50),1,3);
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      local_40[8] = '\0';
      local_40[9] = '\0';
      local_40[10] = '\0';
      local_40[0xb] = '\0';
      local_40[0xc] = '\0';
      local_40[0xd] = '\0';
      local_40[0xe] = '\0';
      local_40[0xf] = '\0';
      local_40[0x10] = '\0';
      local_40[0x11] = '\0';
      local_40[0x12] = '\0';
      local_40[0x13] = '\0';
      local_40[0x14] = '\0';
      local_40[0x15] = '\0';
      local_40[0x16] = '\0';
      local_40[0x17] = '\0';
      local_40[0x18] = '\0';
      local_40[0x19] = '\0';
      local_40[0x1a] = '\0';
      local_40[0x1b] = '\0';
      local_40[0x1c] = '\0';
      local_40[0x1d] = '\0';
      local_40[0x1e] = '\0';
      local_40[0x1f] = 0;
      _sprintf_s(local_40,0x20,"CHAPTER_SEL_00");
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x58),local_40,0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x5c),local_40,0,0xffffffff);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x58),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x5c),1,3);
      *(undefined4 *)(param_1 + 0xad0) = 0;
      FUN_00991830(0,1);
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 200) = 1;
    }
    break;
  case 1:
    iVar2 = FUN_00ce4dd0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 200) = 2;
    }
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x130);
    fVar1 = *(float *)(iVar2 + 0x74) + 0.1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      *(undefined4 *)(param_1 + 200) = 3;
      fVar1 = 1.0;
    }
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x74) = fVar1;
      *(undefined4 *)(iVar2 + 0x78) = 1;
    }
    break;
  case 3:
    if (1 < *(int *)(param_1 + 0xad8)) {
      FUN_009a3570();
    }
    break;
  case 4:
    FUN_009a3e60();
    break;
  case 5:
    FUN_009a4460();
    break;
  case 6:
    iVar2 = FUN_00999fa0();
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 200) = 3;
    }
    else if (iVar2 == 2) {
      FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
    }
  }
  fVar5 = (float10)FUN_00991b70(0xe,0);
  local_60[0] = (int *)(float)fVar5;
  fVar5 = (float10)FUN_00cad4b0();
  local_60[0] = (int *)(float)((float10)(float)local_60[0] - fVar5 * (float10)3.0);
  FUN_00cb32a0(local_58,*(undefined4 *)(param_1 + 0x54));
  local_60[0] = (int *)(local_58[0] + local_58[0] + (float)local_60[0]);
  FUN_00cb3240(local_50,*(undefined4 *)(param_1 + 0x54));
  local_60[0] = (int *)((float)local_60[0] / local_50[0]);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x54),local_60[0]);
  FUN_00cb3240(local_48,*(undefined4 *)(param_1 + 0x48));
  fVar5 = (float10)FUN_00cad4b0();
  local_60[0] = (int *)(float)(-((float10)local_48[0] * (float10)(float)local_60[0]) +
                              fVar5 * (float10)5.0);
  fVar5 = (float10)FUN_00991b70(0xb,0);
  local_58[0] = (float)fVar5;
  fVar5 = (float10)FUN_00cad4b0();
  local_58[0] = (float)((float10)local_58[0] - fVar5 * (float10)3.0);
  FUN_00cb32a0(local_48,*(undefined4 *)(param_1 + 0x48));
  local_58[0] = local_48[0] + local_48[0] + local_58[0];
  FUN_00cb3240(local_50,*(undefined4 *)(param_1 + 0x48));
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x48),local_58[0] / local_50[0]);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 0x4c),local_60[0]);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 0x50),local_60[0]);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 0x48),local_60[0]);
  fVar5 = (float10)FUN_00991c20(0x15,0);
  local_58[0] = (float)fVar5;
  fVar5 = (float10)FUN_00cad4b0();
  local_58[0] = (float)((float10)local_58[0] - fVar5 * (float10)3.0);
  FUN_00cb32a0(local_48,*(undefined4 *)(param_1 + 0x68));
  local_58[0] = local_48[0] + local_48[0] + local_58[0];
  FUN_00cb3240(local_50,*(undefined4 *)(param_1 + 0x68));
  local_58[0] = local_58[0] / local_50[0];
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x68),local_58[0]);
  FUN_00cb3240(local_60,*(undefined4 *)(param_1 + 0x68));
  fVar5 = (float10)FUN_00cad4b0();
  local_60[0] = (int *)(float)(-((float10)(float)local_60[0] * (float10)local_58[0]) +
                              fVar5 * (float10)5.0);
  fVar5 = (float10)FUN_00991b70(0x13,0);
  local_58[0] = (float)fVar5;
  fVar5 = (float10)FUN_00cad4b0();
  local_58[0] = (float)((float10)local_58[0] - fVar5 * (float10)3.0);
  FUN_00cb32a0(local_48,*(undefined4 *)(param_1 + 100));
  local_58[0] = local_48[0] + local_48[0] + local_58[0];
  FUN_00cb3240(local_50,*(undefined4 *)(param_1 + 100));
  local_58[0] = local_58[0] / local_50[0];
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 100),local_58[0]);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 0x6c),local_60[0]);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 0x70),local_60[0]);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 100),local_60[0]);
  if (*(int *)(param_1 + 0xad8) == 0) {
    if ((*(int *)(param_1 + 200) < 1) ||
       ((iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x74)), iVar2 == 0 &&
        (iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x6c)), iVar2 == 0)))) goto LAB_009b39f5;
  }
  else {
    if ((*(int *)(param_1 + 0xad8) != 1) ||
       ((iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x74)), iVar2 != 0 ||
        (iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x6c)), iVar2 != 0)))) goto LAB_009b39f5;
    FUN_00cb3240(local_50,*(undefined4 *)(param_1 + 100));
    fVar5 = (float10)FUN_00cad4b0();
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x7c),
                 (float)((-((float10)local_50[0] * (float10)local_58[0]) + fVar5 * (float10)10.0 +
                         (float10)(float)local_60[0]) * (float10)0.5));
  }
  *(int *)(param_1 + 0xad8) = *(int *)(param_1 + 0xad8) + 1;
LAB_009b39f5:
  FUN_00991950();
  FUN_00991a70();
  local_60[0] = (int *)(param_1 + 0x150);
  piVar4 = (int *)(param_1 + 0x544);
  puVar3 = &DAT_01b388c0;
  do {
    if (((piVar4[1] == 0) || (*piVar4 == 0)) && (iVar2 = FUN_00e9cf60(*puVar3), iVar2 != 0)) {
      local_58[0] = (float)FUN_00e9d0b0(*puVar3);
      FUN_00f972f0();
      FUN_00fa25d0(local_58[0]);
      local_60[0][-3] = (int)(piVar4 + -2);
      if (piVar4[1] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar4;
      }
      *local_60[0] = iVar2;
    }
    local_60[0] = local_60[0] + 5;
    puVar3 = puVar3 + 1;
    piVar4 = piVar4 + 7;
  } while ((int)puVar3 < 0x1b3898c);
  if (*(int *)(param_1 + 0x130) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}

