// src/unsorted/unit_009C8990.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009C8990..009C9DA0, 26 functions

#include "mgrr.h"

// 009C8990  FUN_009c8990  size=359  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_009c8990(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar4 = (undefined4 *)(param_1 + 0x69e0);
  if (param_5 != 0) {
    FUN_009c4120(param_1 + 0x4880,param_6);
    if (param_6 == 1) {
      *(undefined4 *)(param_1 + 0x4844) = 0;
    }
    else if (param_6 == 2) {
      *(undefined4 *)(param_1 + 0x485c) = 0;
    }
  }
  FUN_009c3e30(puVar4,param_6);
  FUN_009c4020(puVar4);
  _memset((void *)(param_1 + 0x7490),0,0x19c0);
  if ((_DAT_01bea098 & 0x20000000) != 0) {
    *(undefined1 *)(param_1 + 0x8e3d) = 1;
  }
  *(undefined4 *)(param_1 + 0x8cf0) = 0xffffffff;
  if (10 < param_4) {
    param_4 = 10;
  }
  if (0 < param_4) {
    puVar3 = (undefined4 *)(param_2 * 0xc0 + 0x400 + param_1);
    param_5 = param_4;
    do {
      param_5 = param_5 + -1;
      puVar5 = puVar3;
      puVar6 = puVar4;
      for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = puVar3 + 0xf0;
      puVar4 = puVar4 + 0x30;
    } while (param_5 != 0);
  }
  *(int *)(param_1 + 0x7250) = param_2;
  bVar1 = false;
  *(uint *)(param_1 + 0x7254) = ~-(uint)(param_2 != 0) & param_3;
  if (((_DAT_01bea098 & 0x20000000) != 0) || (DAT_01b77e1d != '\0')) {
    bVar1 = true;
  }
  FID_conflict__memcpy(&DAT_01b73860,(void *)(param_1 + 0x4880),0x2160);
  puVar4 = (undefined4 *)(param_1 + 0x69e0);
  puVar3 = &DAT_01b759c0;
  for (iVar2 = 0x2ac; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FID_conflict__memcpy(&DAT_01b76470,(void *)(param_1 + 0x7490),0x19c0);
  if (bVar1) {
    DAT_01b77e1d = '\x01';
  }
  DAT_01b73824 = *(undefined4 *)(param_1 + 0x4844);
  DAT_01b7383c = *(undefined4 *)(param_1 + 0x485c);
  FUN_009c7c20();
  return;
}

// 009C8B00  FUN_009c8b00  size=149  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009c8b00(undefined4 param_1,void *param_2,undefined4 *param_3)

{
  DAT_01b395b0 = *param_3;
  DAT_01b395b4 = param_3[1];
  DAT_01b395b8 = param_3[2];
  DAT_01b395bc = param_3[3];
  FID_conflict__memcpy(&DAT_01b395c0,param_2,0x8ee0);
  DAT_01b3959c = 0;
  DAT_01b395a4 = 3;
  DAT_01b39598 = param_1;
  _DAT_01b77ec0 = FUN_00dd82c0(&LAB_009c8700,0,0x4000,0,"DataSave",0);
  if (_DAT_01b77ec0 == 0) {
    FUN_00dd5650(&DAT_01658800);
    return 0;
  }
  return 1;
}

// 009C8BA0  FUN_009c8ba0  size=82  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009c8ba0(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
  iVar1 = param_1 + 0x18 + *(int *)(param_1 + 8) * 0x10;
  _DAT_01b6a924 = 1;
  FID_conflict__memcpy((void *)(param_1 + 0x50),&DAT_01b660c0,0x8ee0);
  FUN_009c56d0(iVar1,&DAT_01b660c0);
  FUN_009c8b00(*(undefined4 *)(param_1 + 0x10),(void *)(param_1 + 0x50),iVar1,0);
  return;
}

// 009C8C00  FUN_009c8c00  size=191  [run]
undefined4 __thiscall FUN_009c8c00(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  DAT_01b77cd0 = param_3;
  iVar1 = FUN_00a4ae60();
  if (((iVar1 != 0) && (((param_2 < 4 || (7 < param_2)) && (iVar2 = 0, DAT_018b9174 == 0xd20)))) &&
     (param_2 == 0)) {
    iVar2 = 1;
  }
  FUN_009c8520(param_2,iVar2);
  if (iVar2 == 0) {
    return 1;
  }
  if ((param_2 != 4) && (param_2 != 6)) {
    param_1[1] = 0;
  }
  if (param_1[2] == -1) {
    FUN_00dd5650(&DAT_016586ac);
  }
  else {
    if (*param_1 == 3) {
      param_1[5] = 1;
      return 1;
    }
    iVar1 = FUN_009c8ba0();
    if (iVar1 != 0) {
      param_1[0x23cc] = 0x78;
      *param_1 = 3;
      return 1;
    }
  }
  return 0;
}

// 009C8CC0  FUN_009c8cc0  size=141  [run]
undefined4 __fastcall FUN_009c8cc0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DAT_01b77cd0 = 0xffffffff;
  FUN_00a4ae60();
  puVar2 = &DAT_01b77e30;
  puVar3 = &DAT_01b66030;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_01b77e30;
  puVar3 = &DAT_01b6ef10;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_1[2] == -1) {
    FUN_00dd5650(&DAT_016586ac);
  }
  else {
    if (*param_1 == 3) {
      param_1[5] = 1;
      return 1;
    }
    iVar1 = FUN_009c8ba0();
    if (iVar1 != 0) {
      param_1[0x23cc] = 0x78;
      *param_1 = 3;
      return 1;
    }
  }
  return 0;
}

// 009C8D50  FUN_009c8d50  size=149  [run]
undefined4 __fastcall FUN_009c8d50(int *param_1)

{
  int iVar1;
  
  DAT_01b77cd0 = 0xffffffff;
  FUN_00a4ae60();
  FID_conflict__memcpy(&DAT_01b5d1e0,&DAT_01b6efe0,0x4880);
  FID_conflict__memcpy(&DAT_01b660c0,&DAT_01b5d1e0,0x4880);
  param_1[1] = 0;
  if (param_1[2] == -1) {
    FUN_00dd5650(&DAT_016586ac);
  }
  else {
    if (*param_1 == 3) {
      param_1[5] = 1;
      return 1;
    }
    iVar1 = FUN_009c8ba0();
    if (iVar1 != 0) {
      param_1[0x23cc] = 0x78;
      *param_1 = 3;
      return 1;
    }
  }
  return 0;
}

// 009C8DF0  FUN_009c8df0  size=189  [run]
undefined4 __fastcall FUN_009c8df0(int *param_1)

{
  int iVar1;
  
  DAT_01b77cd0 = 0xffffffff;
  FUN_00a4ae60();
  FID_conflict__memcpy(&DAT_01b5d1e0,&DAT_01b6efe0,0x4880);
  FID_conflict__memcpy(&DAT_01b61a60,&DAT_01b73860,0x2160);
  FID_conflict__memcpy(&DAT_01b660c0,&DAT_01b5d1e0,0x4880);
  FID_conflict__memcpy(&DAT_01b6a940,&DAT_01b61a60,0x2160);
  param_1[1] = 0;
  if (param_1[2] == -1) {
    FUN_00dd5650(&DAT_016586ac);
  }
  else {
    if (*param_1 == 3) {
      param_1[5] = 1;
      return 1;
    }
    iVar1 = FUN_009c8ba0();
    if (iVar1 != 0) {
      param_1[0x23cc] = 0x78;
      *param_1 = 3;
      return 1;
    }
  }
  return 0;
}

// 009C8EB0  FUN_009c8eb0  size=232  [run]
undefined4 __fastcall FUN_009c8eb0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DAT_01b76230 = 0xffffffff;
  DAT_01b76470 = 0;
  bVar1 = true;
  DAT_01b77cd0 = 0;
  iVar2 = FUN_00a4ae60();
  if ((iVar2 != 0) && (bVar1 = false, DAT_018b9174 == 0xd20)) {
    bVar1 = true;
  }
  piVar3 = (int *)FUN_00c13920();
  (**(code **)(*piVar3 + 0x7c))();
  FUN_00953d30();
  FID_conflict__memcpy(&DAT_01b5d1e0,&DAT_01b6efe0,0x8ee0);
  if (!bVar1) {
    return 1;
  }
  FID_conflict__memcpy(&DAT_01b660c0,&DAT_01b5d1e0,0x8ee0);
  param_1[1] = 0;
  if (param_1[2] == -1) {
    FUN_00dd5650(&DAT_016586ac);
  }
  else {
    if (*param_1 == 3) {
      param_1[5] = 1;
      return 1;
    }
    iVar2 = FUN_009c8ba0();
    if (iVar2 != 0) {
      param_1[0x23cc] = 0x78;
      *param_1 = 3;
      return 1;
    }
  }
  return 0;
}

// 009C8FA0  FUN_009c8fa0  size=317  [run]
void __fastcall FUN_009c8fa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 == 3) {
    param_1[0x23cc] = param_1[0x23cc] + -1;
  }
  if (*param_1 != 0) {
    if (DAT_01b395a4 == 1) {
      FUN_009c74c0();
    }
    else if (DAT_01b395a4 == 2) {
      FUN_009c8160();
    }
    if (DAT_01b395a4 == 0) {
      switch(*param_1) {
      case 3:
        if (param_1[5] == 0) {
          if (-1 < param_1[0x23cc]) {
            return;
          }
          param_1[0x23cc] = 0;
        }
        else {
          iVar2 = FUN_00df7c00(8);
          if (iVar2 == 0) {
            FUN_009c8ba0();
            param_1[5] = 0;
            return;
          }
        }
        break;
      case 4:
        FUN_009c8280();
        FUN_009c85e0(param_1 + 0x14);
        iVar2 = param_1[4];
        param_1[4] = -1;
        param_1[2] = iVar2;
        *param_1 = 0;
        return;
      case 5:
        FUN_009c8280();
        param_1[2] = param_1[4];
        FUN_009c8c00(0,0xffffffff);
        return;
      case 6:
        piVar1 = param_1 + param_1[4] * 4 + 6;
        piVar1[1] = 0;
        piVar1[2] = 0;
        piVar1[3] = 0;
        *piVar1 = -1;
        param_1[4] = -1;
        *param_1 = 0;
        return;
      case 7:
        param_1[0x23cc] = 0;
        *param_1 = 3;
        FUN_009c56d0(param_1 + param_1[4] * 4 + 6,param_1 + 0x14);
        FUN_009c8b00(param_1[3],param_1 + 0x14,param_1 + param_1[4] * 4 + 6,1);
        return;
      }
      *param_1 = 0;
      param_1[4] = -1;
    }
  }
  return;
}

// 009C9100  FUN_009c9100  size=193  [run]
void FUN_009c9100(void)

{
  int iVar1;
  
  FUN_00dfd530();
  FUN_00dfe810();
  if (DAT_01b5428c != 0) {
    if (DAT_01b54280 < 1) {
      if (DAT_01b5428c == 1) {
        FUN_009c3ce0();
      }
      else if (DAT_01b5428c == 2) {
        iVar1 = FUN_00dfe880();
        if (iVar1 != 0) {
          DAT_01b5428c = 0;
          DAT_01b395a8 = 0;
        }
      }
    }
    else {
      DAT_01b54280 = DAT_01b54280 + -1;
    }
  }
  FUN_009c8fa0();
  if (DAT_01b5d1d0 != 0) {
    iVar1 = FUN_00df8040(DAT_01b5d1d0);
    if (iVar1 != 0) {
      FUN_00df8060(DAT_01b5d1d0);
      DAT_01b5d1d0 = 0;
    }
  }
  iVar1 = FUN_00dfd590(0);
  if (iVar1 != 0) {
    if (DAT_01b5d1d0 == 0) {
      DAT_01b5d1d0 = FUN_00df8030(0,&DAT_018cea18);
      FUN_00dfd560();
    }
    DAT_01b5d1dc = 1;
  }
  return;
}

// 009C92F0  FUN_009c92f0  size=1  [run]
void FUN_009c92f0(void)

{
  return;
}

// 009C9310  FUN_009c9310  size=1  [run]
void FUN_009c9310(void)

{
  return;
}

// 009C9350  FUN_009c9350  size=1  [run]
void FUN_009c9350(void)

{
  return;
}

// 009C9410  FUN_009c9410  size=1  [run]
void FUN_009c9410(void)

{
  return;
}

// 009C9440  FUN_009c9440  size=71  [run]
void FUN_009c9440(void)

{
  char local_30 [48];
  
  if ((DAT_0188f518 == 7) && (DAT_0188f514 != 3)) {
    _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stage",DAT_018b9174);
    FUN_00e5e1b0(local_30);
    DAT_0188f514 = 3;
  }
  return;
}

// 009C9490  FUN_009c9490  size=71  [run]
void FUN_009c9490(void)

{
  char local_30 [48];
  
  if ((DAT_0188f518 == 7) && (DAT_0188f514 != 4)) {
    _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
    FUN_00e5e1b0(local_30);
    DAT_0188f514 = 4;
  }
  return;
}

// 009C94E0  FUN_009c94e0  size=71  [run]
void FUN_009c94e0(void)

{
  char local_30 [48];
  
  if ((DAT_0188f518 == 7) && (DAT_0188f514 != 5)) {
    _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_battle",DAT_018b9174);
    FUN_00e5e1b0(local_30);
    DAT_0188f514 = 5;
  }
  return;
}

// 009C9530  FUN_009c9530  size=21  [run]
void FUN_009c9530(void)

{
  FUN_00e5cbb0(1,0x41200000);
  return;
}

// 009C9550  FUN_009c9550  size=1  [run]
void FUN_009c9550(void)

{
  return;
}

// 009C9560  FUN_009c9560  size=11  [run]
void FUN_009c9560(void)

{
  DAT_0188f514 = 3;
  return;
}

// 009C9570  FUN_009c9570  size=977  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c9570(void)

{
  int iVar1;
  float10 fVar2;
  float local_54;
  float local_50;
  undefined1 local_4c [8];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  float local_3c;
  float local_38;
  undefined1 local_34 [4];
  char local_30 [48];
  
  if (DAT_0188f518 != 0) {
    if (DAT_0188f514 == 3) {
      DAT_01bea060 = DAT_01bea060 & 0xfffffdff;
    }
    else {
      DAT_01bea060 = DAT_01bea060 | 0x200;
    }
    if (DAT_0188f518 != 7) {
      if ((DAT_0188f518 != 1) && (DAT_0188f518 != 2)) {
        _DAT_01b781f4 = 0.0;
        DAT_0188f514 = DAT_0188f518;
        _DAT_01b781f0 = 0;
        return;
      }
      local_54 = 10000.0;
      FUN_00df3d50(local_44,"bgm_SB_Distance1");
      FUN_00df3d50(local_40,"bgm_SB_Distance2");
      FUN_00df3d50(&local_3c,"bgm_SB_Distance3");
      FUN_00df3d50(&local_38,"bgm_SB_Distance4");
      FUN_00df3d50(local_34,"bgm_SB_Distance5");
      FUN_00df3d50(local_4c,"bgm_SB_EscapeResetTime");
      FUN_00df3d50(&local_50,"bgm_SB_NoEnemyDelayTime");
      iVar1 = FUN_00c27930(&local_54);
      if ((iVar1 == 0) || (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) {
        fVar2 = (float10)FUN_00e049b0();
        fVar2 = fVar2 + (float10)_DAT_01b781f4;
        _DAT_01b781f4 = (float)fVar2;
        if ((float10)local_50 * (float10)60.0 < fVar2 !=
            ((float10)local_50 * (float10)60.0 == fVar2)) {
          if (DAT_0188f518 == 1) {
            if (DAT_0188f514 != 4) {
              _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
              FUN_00e5e1b0(local_30);
              DAT_0188f514 = 4;
              return;
            }
          }
          else if (DAT_0188f514 != 3) {
            _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stage",DAT_018b9174);
            FUN_00e5e1b0(local_30);
            DAT_0188f514 = 3;
            return;
          }
        }
      }
      else {
        _DAT_01b781f4 = 0.0;
        if (DAT_0188f514 == 3) {
          if (local_54 <= local_3c) {
            iVar1 = FUN_00c3cb10(local_3c);
            if (iVar1 == 0) {
              _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
              DAT_0188f514 = 4;
              FUN_00e5e1b0(local_30);
              return;
            }
            _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_battle",DAT_018b9174);
            DAT_0188f514 = 5;
            FUN_00e5e1b0(local_30);
            return;
          }
        }
        else if (DAT_0188f514 == 4) {
          if (local_38 < local_54 == (local_38 == local_54)) {
            iVar1 = FUN_00c3cb10(local_38);
            if (iVar1 != 0) {
              _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_battle",DAT_018b9174);
              FUN_00e5e1b0(local_30);
              DAT_0188f514 = 5;
              return;
            }
          }
          else if (DAT_0188f518 != 1) {
            _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stage",DAT_018b9174);
            FUN_00e5e1b0(local_30);
            DAT_0188f514 = 3;
            return;
          }
        }
        else if (DAT_0188f514 == 5) {
          if (local_38 < local_54 != (local_38 == local_54)) {
            if (DAT_0188f518 != 1) {
              _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stage",DAT_018b9174);
              DAT_0188f514 = 3;
              FUN_00e5e1b0(local_30);
              return;
            }
            _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
            DAT_0188f514 = 4;
            FUN_00e5e1b0(local_30);
            return;
          }
          iVar1 = FUN_00c3cb10(local_38);
          if (iVar1 == 0) {
            _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
            DAT_0188f514 = 4;
            FUN_00e5e1b0(local_30);
            return;
          }
        }
      }
    }
  }
  return;
}

// 009C9950  FUN_009c9950  size=287  [run]
void FUN_009c9950(int param_1)

{
  int iVar1;
  float local_38;
  float local_34;
  char local_30 [48];
  
  FUN_00df3d50(&local_38,"bgm_SB_Distance3");
  iVar1 = FUN_00c27930(&local_34);
  if ((iVar1 != 0) && (local_34 < local_38)) {
    iVar1 = FUN_00c3cb10(local_38);
    if (iVar1 == 0) {
      _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
      DAT_0188f514 = 4;
      FUN_00e5e1b0(local_30);
      return;
    }
    _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_battle",DAT_018b9174);
    DAT_0188f514 = 5;
    FUN_00e5e1b0(local_30);
    return;
  }
  if (param_1 != 1) {
    _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stage",DAT_018b9174);
    DAT_0188f514 = 3;
    FUN_00e5e1b0(local_30);
    return;
  }
  _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
  DAT_0188f514 = 4;
  FUN_00e5e1b0(local_30);
  return;
}

// 009C9A70  FUN_009c9a70  size=185  [run]
void FUN_009c9a70(void)

{
  float fVar1;
  float fVar2;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00df3d50(&local_c,"bgm_boost");
  FUN_00df3d50(&local_10,"bgm_boost_Battle");
  FUN_00df3d50(&local_4,"bgm_boost_Zangeki");
  FUN_00df3d50(&local_8,"bgm_boost_max");
  fVar1 = 0.0;
  if (local_8 < local_10 + local_c) {
    fVar1 = local_8 - (local_10 + local_c);
  }
  fVar2 = 0.0;
  if (local_8 < local_4 + local_c) {
    fVar2 = local_8 - (local_4 + local_c);
  }
  FUN_00df3cd0("bgm_boost_Battle_adjust",fVar1,1,fVar2);
  FUN_00df3cd0("bgm_boost_Zangeki_adjust",fVar2,1);
  return;
}

// 009C9C60  FUN_009c9c60  size=12  [run]
undefined4 __fastcall FUN_009c9c60(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 009C9C70  FUN_009c9c70  size=65  [run]
void FUN_009c9c70(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_01b78244;
  iVar2 = 0x20;
  do {
    if (0 < piVar1[-3]) {
      piVar1[-3] = piVar1[-3] + -1;
    }
    if (0 < *piVar1) {
      *piVar1 = *piVar1 + -1;
    }
    if (0 < piVar1[3]) {
      piVar1[3] = piVar1[3] + -1;
    }
    if (0 < piVar1[6]) {
      piVar1[6] = piVar1[6] + -1;
    }
    piVar1 = piVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 009C9DA0  FUN_009c9da0  size=56  [run]
void __fastcall FUN_009c9da0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = -1;
  return;
}

