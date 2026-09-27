// src/misc/cNpcInfoParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBBD10..00D31800, 5 functions

#include "mgrr.h"
#include "cNpcInfoParts.h"

// 00CBBD10  cNpcInfoParts::vf08  size=204  [class]
void __fastcall cNpcInfoParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9c);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb2);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14a);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x3c) = uVar2;
  if (iVar1 != 0) {
    FUN_00cab4a0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CEF930  cNpcInfoParts::vf00  size=63  [class]
undefined4 * __thiscall cNpcInfoParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D01780  cNpcInfoParts::vf14  size=965  [class]
void __fastcall cNpcInfoParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined4 *)(param_1 + 0x44)) {
  case 0:
    if ((*(int *)(param_1 + 0x48) != -1) &&
       (*(float *)(param_1 + 0x60) <= *(float *)(param_1 + 0x68))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdef90(0,1);
      }
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"HUD_TYPE_03",0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),"HUD_TYPE_03",0,0xffffffff);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    break;
  case 1:
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x6c)) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x28),1,3);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      *(undefined4 *)(param_1 + 0x40) = 1;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar5 = FUN_00cdf400(), iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x44) = 3;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x48) == -1) ||
       (*(float *)(param_1 + 0x68) < *(float *)(param_1 + 0x60) !=
        (*(float *)(param_1 + 0x68) == *(float *)(param_1 + 0x60)))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar5 = FUN_00cdf400(), iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) goto LAB_00d01b37;
  iVar4 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x50));
  if (iVar4 == 0) goto LAB_00d01b37;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    if (*(float *)(param_1 + 0x60) <= 10.0) {
      iVar5 = 1;
      goto LAB_00d01971;
    }
  }
  else if ((*(int *)(param_1 + 0x74) == 1) && (iVar5 = 1, 11.0 < *(float *)(param_1 + 0x60))) {
    iVar5 = 0;
LAB_00d01971:
    *(int *)(param_1 + 0x74) = iVar5;
  }
  local_28[0] = 1.0;
  iVar4 = FUN_00c12740();
  fVar1 = *(float *)(param_1 + 0x50) - *(float *)(iVar4 + 0x1b0);
  fVar3 = *(float *)(param_1 + 0x54) - *(float *)(iVar4 + 0x1b4);
  fVar2 = *(float *)(param_1 + 0x58) - *(float *)(iVar4 + 0x1b8);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if ((NAN(fVar1) || 35.0 < fVar1 == (fVar1 == 35.0)) || (60.0 < fVar1)) {
    if (60.0 < fVar1) {
      local_28[0] = 0.7;
    }
  }
  else {
    local_28[0] = (0.3 - (fVar1 - 35.0) * 0.04 * 0.3) + 0.7;
  }
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x3c),local_28[0]);
  FUN_00cb2c20(*(undefined4 *)(param_1 + 0x3c),local_28[0]);
  iVar4 = *(int *)(param_1 + 0x18);
  if (((((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x2c))) ||
       (iVar4 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 == 0)) ||
      (*(int *)(iVar4 + 0x3b0) == 0)) && (iVar5 != 0)) {
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(int *)(iVar4 + 0x3b0) = iVar5;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x30))) ||
     ((iVar4 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 == 0 ||
      (*(int *)(iVar4 + 0x3b0) == 0)))) {
    if (iVar5 == 0) {
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x28),1,3);
    }
  }
  else {
    _sprintf_s((char *)local_28,8,"%2.1fM",(double)*(float *)(param_1 + 0x60));
    FUN_00cce090(*(undefined4 *)(param_1 + 0x24),local_28);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x28),local_28);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(uint *)(iVar4 + 0x3b0) = (uint)(iVar5 == 0);
  }
LAB_00d01b37:
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}

// 00D31770  cNpcInfoParts::cNpcInfoParts  size=132  [class]
undefined4 * cNpcInfoParts::cNpcInfoParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x18] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0xffffffff;
    puVar1[0x19] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0x3f800000;
    puVar1[3] = "cNpcInfoParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0x32);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D31800  FUN_00d31800  size=806  [callgraph]
void __fastcall FUN_00d31800(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint local_138;
  float local_130;
  uint local_12c;
  float local_110;
  undefined1 local_10c [116];
  uint auStack_98 [37];
  
  local_110 = 0.0;
  _memset(local_10c,0,0x7c);
  local_138 = 0;
  iVar9 = FUN_00c12740(0);
  fVar1 = *(float *)(iVar9 + 0x1b0);
  fVar2 = *(float *)(iVar9 + 0x1b4);
  fVar3 = *(float *)(iVar9 + 0x1b8);
  if (DAT_01dc1220 != 0) {
    iVar9 = 0x20;
    piVar12 = param_1;
    do {
      piVar12 = piVar12 + 1;
      if ((undefined4 *)*piVar12 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar12)(1);
        *piVar12 = 0;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    DAT_01dc1220 = 0;
  }
  uVar14 = 0;
  param_1 = param_1 + 1;
  local_12c = 0;
  piVar12 = param_1;
  do {
    if ((&DAT_01dbfa18)[local_12c] == 0) {
LAB_00d31a73:
      puVar7 = (undefined4 *)*piVar12;
      if (((puVar7 != (undefined4 *)0x0) && (puVar7[0x10] == 0)) &&
         ((puVar7[0x11] != 0 || (puVar7[0x12] == -1)))) {
        (**(code **)*puVar7)(1);
        *piVar12 = 0;
      }
    }
    else {
      iVar9 = (&DAT_01dc1120)[local_12c];
      if (iVar9 == 0) goto LAB_00d31a73;
      fVar4 = *(float *)(iVar9 + 0x40);
      uVar13 = 0;
      fVar5 = *(float *)(iVar9 + 0x44);
      auStack_98[uVar14 + 2] = local_12c;
      fVar4 = fVar1 - fVar4;
      fVar5 = fVar2 - fVar5;
      fVar8 = fVar3 - *(float *)(iVar9 + 0x48);
      fVar4 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar4 * fVar4);
      *(float *)(local_10c + local_12c * 4 + -4) = fVar4;
      if (3 < (int)uVar14) {
        puVar11 = auStack_98 + uVar14;
        iVar9 = (uVar14 - 4 >> 2) + 1;
        uVar13 = iVar9 * 4;
        do {
          uVar14 = puVar11[2];
          if (*(float *)(local_10c + uVar14 * 4 + -4) < *(float *)(local_10c + puVar11[1] * 4 + -4))
          {
            puVar11[2] = puVar11[1];
            puVar11[1] = uVar14;
          }
          uVar14 = puVar11[1];
          if (*(float *)(local_10c + uVar14 * 4 + -4) < *(float *)(local_10c + *puVar11 * 4 + -4)) {
            puVar11[1] = *puVar11;
            *puVar11 = uVar14;
          }
          uVar14 = *puVar11;
          if (*(float *)(local_10c + uVar14 * 4 + -4) < *(float *)(local_10c + puVar11[-1] * 4 + -4)
             ) {
            *puVar11 = puVar11[-1];
            puVar11[-1] = uVar14;
          }
          uVar14 = puVar11[-1];
          if (*(float *)(local_10c + uVar14 * 4 + -4) < *(float *)(local_10c + puVar11[-2] * 4 + -4)
             ) {
            puVar11[-1] = puVar11[-2];
            puVar11[-2] = uVar14;
          }
          puVar11 = puVar11 + -4;
          iVar9 = iVar9 + -1;
          uVar14 = local_138;
        } while (iVar9 != 0);
      }
      if (uVar13 < uVar14) {
        iVar9 = uVar14 - uVar13;
        puVar11 = auStack_98 + iVar9 + 2;
        do {
          uVar14 = *puVar11;
          if (*(float *)(local_10c + uVar14 * 4 + -4) < *(float *)(local_10c + puVar11[-1] * 4 + -4)
             ) {
            *puVar11 = puVar11[-1];
            puVar11[-1] = uVar14;
          }
          puVar11 = puVar11 + -1;
          iVar9 = iVar9 + -1;
          uVar14 = local_138;
        } while (iVar9 != 0);
      }
      uVar14 = uVar14 + 1;
      local_138 = uVar14;
      if (*piVar12 == 0) {
        iVar9 = cNpcInfoParts::cNpcInfoParts();
        *piVar12 = iVar9;
        if (iVar9 != 0) goto LAB_00d319eb;
      }
      else {
LAB_00d319eb:
        iVar9 = (&DAT_01dc1120)[local_12c];
        local_130 = *(float *)(iVar9 + 0x18c);
        if (local_130 < 0.0) {
          local_130 = 1000.0;
        }
        if (*(int *)(iVar9 + 0x198) == -1) {
          local_130 = local_130 * 0.85;
        }
        iVar10 = FUN_00a12210(0xffffffff);
        iVar6 = *piVar12;
        *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar9 + 0x4b4);
        *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar10 + 0x40);
        *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar10 + 0x44);
        *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(iVar10 + 0x48);
        *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(iVar10 + 0x4c);
        *(float *)(iVar6 + 0x60) = fVar4;
        *(float *)(iVar6 + 0x68) = local_130;
      }
    }
    local_12c = local_12c + 1;
    piVar12 = piVar12 + 1;
    if (0x1f < local_12c) {
      uVar14 = 0;
      do {
        iVar9 = *param_1;
        if (iVar9 != 0) {
          uVar13 = 0;
          if (local_138 != 0) {
            do {
              if (auStack_98[uVar13 + 2] == uVar14) {
                if (*(int *)(iVar9 + 0x44) == 0) {
                  *(uint *)(iVar9 + 0x70) = uVar13 * 0xc;
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < local_138);
          }
          (**(code **)(*(int *)*param_1 + 4))();
        }
        (&DAT_01dc11a0)[uVar14] = (&DAT_01dc1120)[uVar14];
        (&DAT_01dc1120)[uVar14] = 0;
        (&DAT_01dbfa18)[uVar14] = 0;
        uVar14 = uVar14 + 1;
        param_1 = param_1 + 1;
        if (0x1f < uVar14) {
          return;
        }
      } while( true );
    }
  } while( true );
}

