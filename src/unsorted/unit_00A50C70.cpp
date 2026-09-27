// src/unsorted/unit_00A50C70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A50C70..00A517B0, 7 functions

#include "types.h"

// 00A50C70  FUN_00a50c70  size=486  [run]
void __fastcall FUN_00a50c70(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
LAB_00a50c80:
  do {
    switch(param_1[10]) {
    default:
      goto switchD_00a50c8c_caseD_0;
    case 2:
      iVar2 = FUN_00a4c210();
      break;
    case 3:
      iVar2 = FUN_00a4c310();
      break;
    case 4:
      if ((*(byte *)(param_1 + 6) & 8) == 0) {
        piVar1 = (int *)FUN_00c18350();
        (**(code **)(*piVar1 + 0x18))(param_1);
        FUN_00e51d40(param_1);
        param_1[10] = 5;
      }
      else {
        param_1[10] = 0x12;
      }
      goto LAB_00a50c80;
    case 5:
    case 7:
      piVar1 = (int *)FUN_00c18350();
      iVar2 = (**(code **)(*piVar1 + 0x14))(param_1);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_00e468b0(param_1);
      if (iVar2 == 0) {
        return;
      }
      param_1[10] = 8;
      goto LAB_00a50c80;
    case 6:
      piVar1 = (int *)FUN_00c18350();
      (**(code **)(*piVar1 + 0x18))(param_1);
      FUN_00e51d40(param_1);
      param_1[10] = 7;
      goto LAB_00a50c80;
    case 8:
      if ((param_1[6] & 8) == 0) {
        if ((param_1[6] & 1) != 0) {
          return;
        }
        param_1[10] = 9;
      }
      else {
        param_1[10] = 0x10;
      }
      goto LAB_00a50c80;
    case 9:
      param_1[10] = 10;
      goto LAB_00a50c80;
    case 10:
      iVar2 = FUN_00a4e400();
      break;
    case 0xb:
      iVar2 = FUN_00a501b0();
      break;
    case 0xc:
      iVar2 = FUN_00a4c4d0();
      break;
    case 0xd:
      if ((*(byte *)(param_1 + 6) & 0xc) == 0) {
        return;
      }
      if (param_1[9] == -3) {
        param_1[0xc] = 0;
        param_1[0xb] = 0;
        param_1[7] = 0xffffffff;
        param_1[9] = 0xffffffff;
        param_1[8] = 0xffffffff;
        param_1[10] = 1;
      }
      else {
        param_1[10] = 0xe;
      }
      goto LAB_00a50c80;
    case 0xe:
      FUN_00a4e610(param_1);
      param_1[10] = 0xf;
      goto LAB_00a50c80;
    case 0xf:
      iVar2 = FUN_00a4c560();
      break;
    case 0x10:
      FUN_00a4db00(*param_1);
      piVar1 = (int *)FUN_00c18350();
      (**(code **)(*piVar1 + 0x10))(*param_1);
      FUN_00e51d60(param_1);
      param_1[10] = 0x11;
      goto LAB_00a50c80;
    case 0x11:
      iVar2 = FUN_00a48e90();
      break;
    case 0x12:
      FUN_00e9d6a0(param_1[0xb]);
      if (param_1[0xc] != 0) {
        FUN_00e9d6a0(param_1[0xc]);
      }
      param_1[10] = 0x13;
      goto LAB_00a50c80;
    case 0x13:
      iVar2 = FUN_00a48f20();
    }
    if (iVar2 == 0) {
switchD_00a50c8c_caseD_0:
      return;
    }
  } while( true );
}

// 00A50EB0  FUN_00a50eb0  size=451  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00a50eb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00dd5650("--- STARTUP GAME ---");
  FUN_00a4a1b0();
  thunk_FUN_00d8a8c0();
  FUN_00eb3a80();
  iVar1 = FUN_00dd8a10(4,0x18000,&DAT_01b7bcf0);
  if (iVar1 != 0) {
    _DAT_01be8f34 = 0;
    _DAT_01be9144 = 0xffffffff;
    _DAT_01be9148 = 0xffffffff;
    _DAT_01be914c = 0xffffffff;
    _DAT_01be9150 = 0xffffffff;
    _DAT_01be9154 = 0xffffffff;
    _DAT_01be9158 = 0xffffffff;
    _DAT_01be915c = 0xffffffff;
    _DAT_01be9160 = 0xffffffff;
    iVar1 = FUN_00cad690();
    if (iVar1 != 0) {
      iVar1 = FUN_00d1e0a0();
      if (iVar1 != 0) {
        iVar1 = FUN_00cb1f60();
        if (iVar1 != 0) {
          uVar2 = FUN_00de4500("lod.bxm");
          cXmlBinary::cXmlBinary_81(uVar2);
          iVar1 = EspSystemApp::StartupGame(&DAT_01b7bcf0);
          if (iVar1 == 0) {
            FUN_00dd5650(&DAT_01662094);
            return 0;
          }
          FUN_009cf640();
          FUN_009cf650();
          FUN_00c56da0();
          FUN_00c13b50();
          GameWorkManagerImplement::GameWorkManagerImplement(&DAT_01b7bcf0);
          GameStageManagerImplement::GameStageManagerImplement(&DAT_01b7bcf0);
          FUN_00c67780(&DAT_01b7bcf0);
          PhaseReadManagerImplement::PhaseReadManagerImplement();
          FUN_00d4df70(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
          FUN_00dd7870(&LAB_00a50700,0,0,"SceneTask");
          *(undefined4 *)(param_1 + 0xa4) = 0;
          FUN_00930570(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
          FUN_00e71bf0();
          FUN_00c1d470();
          FUN_00c81d90();
          FUN_00c824a0();
          FUN_00c828a0();
          FUN_00956e30();
          FUN_009c8280();
          thunk_FUN_00dfd6a0();
          FUN_00c20a60();
          UICollision::cUIHitManager::cUIHitManager(&DAT_01b7be50);
          *(undefined4 *)(param_1 + 0x88) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00A51080  FUN_00a51080  size=896  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00a51080(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((DAT_01bea084 & 0x20) != 0) {
    thunk_FUN_00f9bc30(0);
    DAT_01bea084 = DAT_01bea084 & 0xffffffdf;
  }
  if ((DAT_01bea084 & 0x10) != 0) {
    thunk_FUN_00f9bc30(2);
    DAT_01bea084 = DAT_01bea084 & 0xffffffef;
  }
  if ((DAT_01bea084 & 8) != 0) {
    thunk_FUN_00f9bc30(4);
    DAT_01bea084 = DAT_01bea084 & 0xfffffff7;
  }
  if ((DAT_01bea084 & 4) != 0) {
    thunk_FUN_00f9bc30(8);
    DAT_01bea084 = DAT_01bea084 & 0xfffffffb;
  }
  if ((DAT_01bea088 & 0x8000) != 0) {
    thunk_FUN_00f9bca0(5);
    DAT_01bea088 = DAT_01bea088 & 0xffff7fff;
  }
  if ((DAT_01bea088 & 0x4000) != 0) {
    thunk_FUN_00f9bca0(4);
    DAT_01bea088 = DAT_01bea088 & 0xffffbfff;
  }
  if ((DAT_01bea088 & 0x2000) != 0) {
    thunk_FUN_00f9bca0(3);
    DAT_01bea088 = DAT_01bea088 & 0xffffdfff;
  }
  if ((DAT_01bea088 & 0x1000) != 0) {
    thunk_FUN_00f9bca0(2);
    DAT_01bea088 = DAT_01bea088 & 0xffffefff;
  }
  if ((DAT_01bea088 & 0x800) != 0) {
    thunk_FUN_00f9bca0(1);
    DAT_01bea088 = DAT_01bea088 & 0xfffff7ff;
  }
  if ((DAT_01bea088 & 0x400) != 0) {
    thunk_FUN_00f9bca0(0);
    DAT_01bea088 = DAT_01bea088 & 0xfffffbff;
  }
  if ((DAT_01bea084 & 2) != 0) {
    FUN_00df9030();
    DAT_01bea084 = DAT_01bea084 & 0xfffffffd;
  }
  iVar4 = thunk_FUN_00f98960();
  if (iVar4 != 0) {
    iVar4 = FUN_00fa0740(0);
    if (iVar4 == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(iVar4 + 8);
    }
    iVar4 = FUN_00fa0740(0);
    if (iVar4 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(int *)(iVar4 + 0xc);
    }
    local_18 = 0;
    local_8 = 0;
    local_14 = 0;
    FUN_00f97440(&local_18,&local_8);
    local_4 = local_18;
    cLockableTexture::unlock();
    uVar3 = DAT_018da678;
    uVar2 = DAT_018da674;
    uVar1 = DAT_018da670;
    uVar7 = DAT_018da65c;
    iVar4 = thunk_FUN_00f9d0b0();
    if (iVar4 == 0) {
      return 0;
    }
    FUN_00f9c030();
    FUN_00f9d8f0(uVar7);
    FUN_00f9d970(uVar1,uVar2,uVar3);
    CRect::SetRect((CRect *)&DAT_01be0894,local_c,local_10,1,0);
    FUN_00f974a0(&local_18,&local_14);
    iVar4 = local_18;
    uVar8 = 0;
    while( true ) {
      iVar5 = FUN_00fa0740(0);
      if ((iVar5 == 0) || (*(uint *)(iVar5 + 0xc) <= uVar8)) break;
      uVar6 = 0;
      if (local_14 != 0) {
        do {
          *(undefined1 *)(uVar8 * local_14 + uVar6 + iVar4) =
               *(undefined1 *)(uVar8 * local_8 + uVar6 + local_4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_14);
      }
      uVar8 = uVar8 + 1;
    }
    cLockableTexture::unlock();
    uVar7 = FUN_00f98aa0(1);
    uVar7 = FUN_00f98a90(uVar7);
    FUN_00fa17f0(&DAT_01be1e20,&DAT_01be0894,0,0,uVar7);
    FUN_00fa26b0();
    uVar7 = FUN_00f98aa0();
    uVar7 = FUN_00f98a90(uVar7);
    FUN_00df8f20(uVar7);
    DAT_01bea088 = DAT_01bea088 | 0x40000000;
    iVar4 = FUN_00df8520();
    if (iVar4 == 0) {
      DAT_01bea084 = DAT_01bea084 | 0x100;
    }
    else {
      DAT_01bea084 = DAT_01bea084 & 0xfffffeff;
    }
    _DAT_01dc2d88 = 1;
  }
  iVar4 = FUN_00f99190();
  if (iVar4 == 0) {
    thunk_FUN_00debcd0();
    FUN_00e9f140();
    FUN_00a307e0();
    FUN_00fc1520();
    FUN_00a45590();
    FUN_00a28820();
    FUN_009cf0f0();
    Vram::transfarVramToMainMemory();
    if ((DAT_01bea060 & 0x8000) == 0) {
      FUN_00a50660();
      FUN_00eb4040();
    }
    FUN_00a475d0();
    DAT_01bea088 = DAT_01bea088 & 0xbfffffff;
  }
  return 1;
}

// 00A51440  FUN_00a51440  size=149  [run]
void __fastcall FUN_00a51440(int param_1)

{
  Hw::cTexture::cTexture_5();
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x34),0);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00A514E0  FUN_00a514e0  size=96  [run]
undefined4 __fastcall FUN_00a514e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4b740(0x80,&DAT_01b7bcf0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a50920(0x20,&DAT_01b7bcf0);
    if (iVar1 != 0) {
      iVar1 = FUN_00a50a50(0x20,&DAT_01b7bcf0);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 1;
        FUN_00a4b480();
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 900) = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 00A51540  FUN_00a51540  size=247  [run]
void __fastcall FUN_00a51540(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar6 = *(int **)(param_1 + 0x48);
  piVar2 = *(int **)(param_1 + 0x44);
  do {
    do {
      do {
        if (piVar2 == piVar6) {
          if (*(int *)(param_1 + 0x34) != 0) {
            iVar8 = 0;
            if (0 < *(int *)(param_1 + 0x38)) {
              piVar6 = (int *)(*(int *)(param_1 + 0x34) + 8);
              do {
                *piVar6 = (int)(piVar6 + -6);
                piVar6[1] = (int)(piVar6 + 2);
                iVar8 = iVar8 + 1;
                piVar6 = piVar6 + 4;
              } while (iVar8 < *(int *)(param_1 + 0x38));
            }
            iVar8 = *(int *)(param_1 + 0x34);
            *(undefined4 *)(iVar8 + 8) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x34) + -4 + *(int *)(param_1 + 0x38) * 0x10) = 0;
            *(int *)(param_1 + 0x40) = iVar8;
            *(undefined4 *)(*(int *)(param_1 + 0x48) + 8) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x48) + 0xc) = 0;
            *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
            *(undefined4 *)(param_1 + 0x3c) = 0;
          }
          return;
        }
        iVar8 = *(int *)(*piVar2 + 0x330);
        iVar3 = piVar2[1];
        piVar2 = (int *)piVar2[3];
      } while (iVar8 == 0);
      iVar4 = *(int *)(iVar8 + 0x54);
      iVar8 = *(int *)(iVar8 + 0x58);
    } while (((iVar4 == 0) || (iVar8 < 1)) || (iVar7 = 0, iVar8 < 1));
    do {
      if (iVar3 == 0) {
        iVar5 = *(int *)(iVar4 + iVar7 * 8);
        if (iVar5 != 2) goto LAB_00a515a8;
      }
      else {
        iVar5 = *(int *)(iVar4 + iVar7 * 8);
LAB_00a515a8:
        if (iVar5 != 99) {
          if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = *(undefined4 *)(iVar4 + 4 + iVar7 * 8);
            }
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          }
          *(undefined4 *)(param_1 + 0x58) = 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  } while( true );
}

// 00A517B0  FUN_00a517b0  size=902  [run]
uint __fastcall FUN_00a517b0(int param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined8 uVar9;
  uint local_28;
  uint local_24;
  char local_20 [32];
  
  uVar6 = *(int *)(param_1 + 0x5c) - 2;
  switch(uVar6) {
  case 0:
    FUN_00a4b4b0();
    if (*(int *)(param_1 + 900) != 0) {
      return 0;
    }
    FUN_00a51540(unaff_EBX,unaff_ESI);
    puVar8 = *(undefined4 **)(param_1 + 4);
    bVar2 = false;
    local_28 = 0;
    if (puVar8 != puVar8 + *(int *)(param_1 + 0xc)) {
      do {
        piVar3 = (int *)FUN_00a4b430(unaff_EDI,unaff_EBP);
        if (piVar3 == (int *)0x0) {
          bVar2 = true;
          break;
        }
        iVar4 = FUN_00f9e370(*puVar8);
        if ((iVar4 != 0) && ((*(uint *)(iVar4 + 8) & 0x1700002) == 0)) {
          _sprintf_s(local_20,0x20,"HTextures/%08x.wtb",*(undefined4 *)(iVar4 + 0xc));
          iVar5 = FUN_00dec390(local_20);
          if ((iVar5 == 0) || (iVar5 = FUN_00e9e570(6,local_20,&DAT_01b82050,1,0), iVar5 == 0)) {
            *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x1000002;
          }
          else {
            *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x200000;
            iVar4 = *(int *)(iVar4 + 0xc);
            *piVar3 = iVar5;
            piVar3[1] = iVar4;
            piVar3[2] = 1;
            local_28 = 1;
            *(undefined4 *)(param_1 + 0x80) = 3;
          }
        }
        iVar5 = (int)puVar8 - *(int *)(param_1 + 4) >> 2;
        iVar4 = iVar5;
        if (iVar5 < *(int *)(param_1 + 0xc) + -1) {
          do {
            puVar8 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4);
            *puVar8 = puVar8[1];
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0xc) + -1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4);
      } while (puVar8 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
      if (local_28 != 0) {
        return local_28;
      }
      if (bVar2) {
        return 0;
      }
    }
    uVar9 = FUN_00a4b460();
    if (((int)uVar9 == 0) &&
       (*(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1, *(int *)(param_1 + 0x80) < 1)) {
      *(undefined4 *)(param_1 + 0x5c) = 3;
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    return (uint)((ulonglong)uVar9 >> 0x20);
  case 1:
    iVar4 = param_1;
    uVar6 = FUN_00a4b4b0();
    if (*(int *)(param_1 + 900) == 0) {
      bVar2 = false;
      local_24 = 0;
      do {
        piVar3 = (int *)(&DAT_01f20a88)[local_24 % 0x409];
        while (piVar3 != (int *)0x0) {
          iVar5 = *piVar3;
          uVar6 = *(uint *)(iVar5 + 8);
          if (((uVar6 & 0x1700002) != 0) || (bVar2)) {
            if ((((uVar6 & 1) != 0) || (((uVar6 & 0x400000) == 0 || ((uVar6 & 0x200000) != 0)))) ||
               (*(int *)(iVar5 + 0x14) != 1)) goto LAB_00a51857;
            FUN_00a4dc30(iVar5);
            piVar3 = (int *)(&DAT_01f20a88)[local_24 % 0x409];
            param_1 = iVar4;
          }
          else {
            iVar7 = FUN_00a4b430();
            if (iVar7 == 0) {
              bVar2 = true;
            }
            else {
              FUN_00a4dba0(iVar5,iVar7,0);
            }
LAB_00a51857:
            piVar3 = (int *)piVar3[1];
            param_1 = iVar4;
          }
        }
        local_24 = local_24 + 1;
      } while ((int)local_24 < 0x409);
      uVar6 = 0;
      piVar3 = (int *)(param_1 + 0x84);
      while (*piVar3 == 0) {
        uVar6 = uVar6 + 1;
        piVar3 = piVar3 + 3;
        if (0x3f < uVar6) {
          *(undefined4 *)(param_1 + 0x5c) = 5;
          DAT_01f126cc = 0;
          DAT_01f204d0 = 0;
          return uVar6;
        }
      }
    }
    break;
  case 2:
    uVar6 = 0;
    iVar4 = param_1;
    do {
      piVar3 = (int *)(&DAT_01f20a88)[uVar6 % 0x409];
      while (piVar3 != (int *)0x0) {
        iVar5 = *piVar3;
        uVar1 = *(uint *)(iVar5 + 8);
        if (((((uVar1 & 1) == 0) && ((uVar1 & 0x400000) != 0)) && ((uVar1 & 0x200000) == 0)) &&
           (*(int *)(iVar5 + 0x14) == 1)) {
          _sprintf_s(local_20,0x20,"HTextures/%08x.wtb",*(undefined4 *)(iVar5 + 0xc));
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + -1;
          FUN_00fa1a90(iVar5);
          FUN_00e9dbc0(local_20);
          piVar3 = (int *)(&DAT_01f20a88)[uVar6 % 0x409];
          param_1 = iVar4;
        }
        else {
          piVar3 = (int *)piVar3[1];
          param_1 = iVar4;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x409);
    *(undefined4 *)(param_1 + 0x5c) = 5;
    DAT_01f126cc = 0;
    return 0;
  case 3:
    if (DAT_01f126cc != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 4;
    }
    if (DAT_01f204d0 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 3;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 2;
    }
  }
  return uVar6;
}

