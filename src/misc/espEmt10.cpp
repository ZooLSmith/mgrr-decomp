// src/misc/espEmt10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EF6A80..00F40570, 23 functions

#include "mgrr.h"
#include "espEmt10.h"

// 00EF6A80  espEmt10::vf14  size=56  [class]
void __fastcall espEmt10::vf14(int param_1)

{
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  if (*(int *)(param_1 + 0x570) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x570),0);
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  return;
}

// 00EF6AC0  FUN_00ef6ac0  size=148  [between]
void __fastcall FUN_00ef6ac0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if ((((*(int *)(param_1 + 0x120) != 0) &&
       (fVar1 = (float)*(int *)(param_1 + 0x120),
       fVar1 < *(float *)(param_1 + 0x118) != (fVar1 == *(float *)(param_1 + 0x118)))) &&
      (*(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 1,
      (*(byte *)(param_1 + 0x55c) & 2) != 0)) && (*(int *)(param_1 + 0x584) < 1)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  }
  if ((((*(byte *)(param_1 + 0x3f) & 1) == 0) || ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0)) &&
     ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    fVar2 = (float10)*(float *)(param_1 + 0x110);
  }
  else {
    fVar2 = (float10)FUN_009d59c0(param_1);
  }
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x118);
  *(float *)(param_1 + 0x118) = (float)fVar2 + *(float *)(param_1 + 0x118);
  return;
}

// 00EF6B60  espEmt10::calcUvBuffer_spu  size=2452  [class]
void __thiscall
espEmt10::calcUvBuffer_spu
          (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
          int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint *puVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  char *pcVar19;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  int local_12c;
  int local_128;
  float local_d8;
  float local_d4;
  
  FUN_00f3a8f0("espEmt10::calcUvBuffer_spu Start\n");
  iVar17 = 0;
  local_12c = 0;
  if (*(int *)(param_1 + 0x5a8) == 0) {
    local_128 = 0;
    if (0 < param_5) {
      puVar18 = (undefined4 *)(param_2 + 0x10);
      puVar11 = (uint *)(param_4 + 0xf4);
      iVar17 = 4;
      do {
        if ((*(byte *)((int)puVar11 + 0x16) & 1) != 0) {
          uVar16 = (uint)((*puVar11 & 0x80000) != 0);
          if ((*puVar11 & 0x40000) != 0) {
            uVar16 = uVar16 | 2;
          }
          if (param_3 < iVar17) {
            pcVar19 = "!! uv buffer overrun %d/%d !!";
            goto LAB_00ef74d6;
          }
          puVar18[-4] = (&DAT_018d6bc0)[uVar16 * 8];
          puVar18[-3] = (&DAT_018d6bc4)[uVar16 * 8];
          FUN_00f3a8f0("espEmt10::calcUvBuffer_spu [%p]\n",puVar18 + -4);
          puVar18[-2] = (&DAT_018d6bc8)[uVar16 * 8];
          puVar18[-1] = (&DAT_018d6bcc)[uVar16 * 8];
          FUN_00f3a8f0("espEmt10::calcUvBuffer_spu [%p]\n",puVar18 + -2);
          *puVar18 = (&DAT_018d6bd0)[uVar16 * 8];
          puVar18[1] = (&DAT_018d6bd4)[uVar16 * 8];
          FUN_00f3a8f0("espEmt10::calcUvBuffer_spu [%p]\n",puVar18);
          puVar18[2] = (&DAT_018d6bd8)[uVar16 * 8];
          puVar18[3] = (&DAT_018d6bdc)[uVar16 * 8];
          FUN_00f3a8f0("espEmt10::calcUvBuffer_spu [%p]\n",puVar18 + 2);
          local_12c = local_12c + 4;
          iVar17 = iVar17 + 4;
          puVar18 = puVar18 + 8;
        }
        local_128 = local_128 + 1;
        puVar11 = puVar11 + 0x48;
      } while (local_128 < param_5);
    }
  }
  else if (0 < param_5) {
    pfVar12 = (float *)(param_7 + 0x10);
    pfVar15 = (float *)(param_4 + 0x110);
    iVar14 = 4;
    pfVar13 = (float *)(param_2 + 0x14);
    do {
      if ((*(byte *)((int)pfVar15 + -6) & 1) != 0) {
        if (param_3 < iVar14) {
          pcVar19 = "!! uv buffer overrun %d/%d !!";
LAB_00ef74d6:
          FUN_00dd5650(pcVar19,local_12c + 4,param_3);
          break;
        }
        if (((uint)pfVar12[2] & 1) == 0) {
          local_d8 = 1.0;
          local_d4 = 1.0;
        }
        else {
          local_d8 = pfVar12[-4];
          local_d4 = pfVar12[-3];
        }
        fVar1 = *pfVar12;
        fVar2 = pfVar12[1];
        fVar9 = local_d8 * *pfVar15 + *pfVar12;
        fVar10 = pfVar15[1] * local_d4 + pfVar12[1];
        fVar3 = pfVar12[5];
        if (fVar3 == 0.0) {
          pfVar13[-5] = fVar1;
          pfVar13[-4] = fVar2;
          pfVar13[-3] = fVar9;
          pfVar13[-2] = fVar2;
          pfVar13[-1] = fVar1;
          *pfVar13 = fVar10;
          pfVar13[2] = fVar10;
          pfVar13[1] = fVar9;
        }
        else {
          local_130 = fVar3 - 0.0;
          if (0.0 < local_130) {
            local_140 = local_130;
            if (1.0 < local_130) {
              local_140 = 1.0;
            }
          }
          else {
            local_140 = 0.0;
          }
          fVar8 = 1.0 - fVar1;
          fVar6 = fVar1 + local_140 * (fVar2 - fVar1);
          fVar5 = (fVar8 - fVar2) * local_140 + fVar2;
          local_138 = fVar3 - 1.0;
          if (0.0 < local_138) {
            local_140 = local_138;
            if (1.0 < local_138) {
              local_140 = 1.0;
            }
          }
          else {
            local_140 = 0.0;
          }
          fVar4 = 1.0 - fVar2;
          fVar6 = local_140 * (fVar8 - fVar6) + fVar6;
          fVar5 = fVar5 + (fVar4 - fVar5) * local_140;
          local_140 = fVar3 - 2.0;
          if (0.0 < local_140) {
            local_144 = local_140;
            if (1.0 < local_140) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          fVar6 = fVar6 + local_144 * (fVar4 - fVar6);
          fVar5 = fVar5 + local_144 * (fVar1 - fVar5);
          fVar3 = fVar3 - 3.0;
          if (0.0 < fVar3) {
            local_144 = fVar3;
            if (1.0 < fVar3) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          pfVar13[-5] = fVar6 + local_144 * (fVar1 - fVar6);
          pfVar13[-4] = fVar5 + local_144 * (fVar2 - fVar5);
          if (0.0 < local_130) {
            local_144 = local_130;
            if (1.0 < local_130) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          fVar7 = 1.0 - fVar9;
          fVar6 = (fVar2 - fVar9) * local_144 + fVar9;
          fVar5 = (fVar7 - fVar2) * local_144 + fVar2;
          if (0.0 < local_138) {
            local_144 = local_138;
            if (1.0 < local_138) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          fVar6 = (fVar7 - fVar6) * local_144 + fVar6;
          fVar5 = (fVar4 - fVar5) * local_144 + fVar5;
          if (0.0 < local_140) {
            local_144 = local_140;
            if (1.0 < local_140) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          fVar6 = (fVar4 - fVar6) * local_144 + fVar6;
          fVar5 = (fVar9 - fVar5) * local_144 + fVar5;
          if (0.0 < fVar3) {
            local_13c = fVar3;
            if (1.0 < fVar3) {
              local_13c = 1.0;
            }
          }
          else {
            local_13c = 0.0;
          }
          pfVar13[-3] = local_13c * (fVar9 - fVar6) + fVar6;
          pfVar13[-2] = (fVar2 - fVar5) * local_13c + fVar5;
          if (0.0 < local_130) {
            local_13c = local_130;
            if (1.0 < local_130) {
              local_13c = 1.0;
            }
          }
          else {
            local_13c = 0.0;
          }
          fVar5 = fVar1 + local_13c * (fVar10 - fVar1);
          fVar2 = (fVar8 - fVar10) * local_13c + fVar10;
          if (0.0 < local_138) {
            local_144 = local_138;
            if (1.0 < local_138) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          fVar6 = 1.0 - fVar10;
          fVar5 = local_144 * (fVar8 - fVar5) + fVar5;
          fVar2 = fVar2 + (fVar6 - fVar2) * local_144;
          if (0.0 < local_140) {
            local_144 = local_140;
            if (1.0 < local_140) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          fVar5 = local_144 * (fVar6 - fVar5) + fVar5;
          fVar2 = fVar2 + (fVar1 - fVar2) * local_144;
          if (0.0 < fVar3) {
            local_144 = fVar3;
            if (1.0 < fVar3) {
              local_144 = 1.0;
            }
          }
          else {
            local_144 = 0.0;
          }
          pfVar13[-1] = local_144 * (fVar1 - fVar5) + fVar5;
          *pfVar13 = fVar2 + (fVar10 - fVar2) * local_144;
          if (0.0 < local_130) {
            if (1.0 < local_130) {
              local_130 = 1.0;
            }
          }
          else {
            local_130 = 0.0;
          }
          fVar2 = fVar9 + local_130 * (fVar10 - fVar9);
          fVar1 = fVar10 + (fVar7 - fVar10) * local_130;
          if (0.0 < local_138) {
            if (1.0 < local_138) {
              local_138 = 1.0;
            }
          }
          else {
            local_138 = 0.0;
          }
          fVar2 = fVar2 + local_138 * (fVar7 - fVar2);
          fVar1 = fVar1 + local_138 * (fVar6 - fVar1);
          if (0.0 < local_140) {
            if (1.0 < local_140) {
              local_140 = 1.0;
            }
          }
          else {
            local_140 = 0.0;
          }
          fVar2 = local_140 * (fVar6 - fVar2) + fVar2;
          fVar1 = fVar1 + (fVar9 - fVar1) * local_140;
          if (0.0 < fVar3) {
            local_140 = fVar3;
            if (1.0 < fVar3) {
              local_140 = 1.0;
            }
          }
          else {
            local_140 = 0.0;
          }
          pfVar13[1] = local_140 * (fVar9 - fVar2) + fVar2;
          pfVar13[2] = (fVar10 - fVar1) * local_140 + fVar1;
        }
        local_12c = local_12c + 4;
        iVar14 = iVar14 + 4;
        pfVar13 = pfVar13 + 8;
      }
      iVar17 = iVar17 + 1;
      pfVar15 = pfVar15 + 0x48;
      pfVar12 = pfVar12 + 0xc;
    } while (iVar17 < param_5);
  }
  FUN_00f3a8f0("espEmt10::calcUvBuffer_spu End\n");
  return;
}

// 00EF7500  espEmt10::calcColorBuffer_spu  size=552  [class]
void espEmt10::calcColorBuffer_spu(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  ushort uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar9 = param_5;
  FUN_00f3a8f0("espEmt10::calcColorBuffer_spu Start\n");
  fVar1 = *(float *)(param_5 + 100);
  iVar8 = 0;
  fVar2 = *(float *)(param_5 + 0x68);
  param_5 = 0;
  fVar3 = *(float *)(iVar9 + 0x6c);
  fVar4 = *(float *)(iVar9 + 0x70);
  uVar6 = *(ushort *)(*(int *)(*(int *)(iVar9 + 0x30) + 4) + 2);
  cVar5 = *(char *)(*(int *)(*(int *)(iVar9 + 0x30) + 8) + 0x25);
  if (0 < param_4) {
    pfVar10 = (float *)(param_1 + 0x18);
    iVar9 = 4;
    pfVar11 = (float *)(param_3 + 0xd0);
    do {
      if ((*(byte *)((int)pfVar11 + 0x3a) & 1) != 0) {
        local_20 = pfVar11[-2];
        local_1c = pfVar11[-1];
        local_18 = *pfVar11;
        if ((uVar6 & 1) != 0) {
          fVar7 = (1.0 / (pfVar11[0xf] * pfVar11[1])) * 0.075 + 1.0;
          local_20 = fVar7 * local_20;
          local_1c = local_1c * fVar7;
          local_18 = fVar7 * local_18;
        }
        local_20 = fVar1 * local_20;
        local_1c = fVar2 * local_1c;
        local_18 = fVar3 * local_18;
        local_14 = pfVar11[0xf] * pfVar11[1] * fVar4;
        if (cVar5 == '\x0f') {
          local_14 = 1.0;
        }
        if (param_2 < iVar9) {
          FUN_00dd5650("!! color buffer overrun %d/%d !!",iVar8 + 4,param_2);
          break;
        }
        pfVar10[-6] = local_20;
        pfVar10[-5] = local_1c;
        pfVar10[-4] = local_18;
        pfVar10[-3] = local_14;
        FUN_00f3a8f0("espEmt10::calcColorBuffer_spu [%p]\n",pfVar10 + -6);
        pfVar10[-2] = local_20;
        pfVar10[-1] = local_1c;
        *pfVar10 = local_18;
        pfVar10[1] = local_14;
        FUN_00f3a8f0("espEmt10::calcColorBuffer_spu [%p]\n",pfVar10 + -2);
        pfVar10[2] = local_20;
        pfVar10[3] = local_1c;
        pfVar10[4] = local_18;
        pfVar10[5] = local_14;
        FUN_00f3a8f0("espEmt10::calcColorBuffer_spu [%p]\n",pfVar10 + 2);
        pfVar10[6] = local_20;
        pfVar10[7] = local_1c;
        pfVar10[8] = local_18;
        pfVar10[9] = local_14;
        FUN_00f3a8f0("espEmt10::calcColorBuffer_spu [%p]\n",pfVar10 + 6);
        iVar8 = iVar8 + 4;
        iVar9 = iVar9 + 4;
        pfVar10 = pfVar10 + 0x10;
      }
      param_5 = param_5 + 1;
      pfVar11 = pfVar11 + 0x48;
    } while (param_5 < param_4);
  }
  FUN_00f3a8f0("espEmt10::calcColorBuffer_spu End\n");
  return;
}

// 00EF7730  espEmt10::calcIndexBuffer_spu  size=327  [class]
void espEmt10::calcIndexBuffer_spu(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  int local_8;
  int local_4;
  
  FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu Start\n");
  sVar1 = *(short *)(*(int *)(param_5 + 0x20) + 0xd0) * 2;
  local_4 = 0;
  local_8 = 0;
  if (0 < param_4) {
    psVar2 = (short *)((int)param_1 + 4);
    param_1 = (byte *)(param_3 + 0x10a);
    sVar3 = sVar1 + 2;
    param_5 = 6;
    do {
      if ((*param_1 & 1) != 0) {
        if (param_2 < param_5) {
          FUN_00dd5650("!! index buffer overrun %d/%d !!",local_8 + 6,param_2);
          break;
        }
        psVar2[-2] = sVar1;
        FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu [%p]\n",psVar2 + -2);
        psVar2[-1] = sVar3 + -1;
        FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu [%p]\n",psVar2 + -1);
        *psVar2 = sVar3;
        FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu [%p]\n",psVar2);
        psVar2[1] = sVar3 + 1;
        FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu [%p]\n",psVar2 + 1);
        psVar2[2] = sVar3;
        FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu [%p]\n",psVar2 + 2);
        psVar2[3] = sVar3 + -1;
        FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu [%p]\n",psVar2 + 3);
        local_8 = local_8 + 6;
        param_5 = param_5 + 6;
        psVar2 = psVar2 + 6;
        sVar1 = sVar1 + 4;
        sVar3 = sVar3 + 4;
      }
      param_1 = param_1 + 0x120;
      local_4 = local_4 + 1;
    } while (local_4 < param_4);
  }
  FUN_00f3a8f0("espEmt10::calcIndexBuffer_spu End\n");
  return;
}

// 00EF7880  espEmt10::calcUvMaskBuffer_spu  size=274  [class]
void espEmt10::calcUvMaskBuffer_spu(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  FUN_00f3a8f0("espEmt10::calcUvMaskBuffer_spu Start\n");
  iVar1 = 0;
  local_4 = 0;
  if (0 < param_4) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    iVar4 = 4;
    pbVar2 = (byte *)(param_3 + 0x10a);
    do {
      if ((*pbVar2 & 1) != 0) {
        if (param_2 < iVar4) {
          FUN_00dd5650("!! uv buffer overrun %d/%d !!",iVar1 + 4,param_2);
          break;
        }
        puVar3[-4] = DAT_018d6bc0;
        puVar3[-3] = DAT_018d6bc4;
        FUN_00f3a8f0("espEmt10::calcUvMaskBuffer_spu [%p]\n",puVar3 + -4);
        puVar3[-2] = DAT_018d6bc8;
        puVar3[-1] = DAT_018d6bcc;
        FUN_00f3a8f0("espEmt10::calcUvMaskBuffer_spu [%p]\n",puVar3 + -2);
        *puVar3 = DAT_018d6bd0;
        puVar3[1] = DAT_018d6bd4;
        FUN_00f3a8f0("espEmt10::calcUvMaskBuffer_spu [%p]\n",puVar3);
        puVar3[2] = DAT_018d6bd8;
        puVar3[3] = DAT_018d6bdc;
        FUN_00f3a8f0("espEmt10::calcUvMaskBuffer_spu [%p]\n",puVar3 + 2);
        iVar1 = iVar1 + 4;
        iVar4 = iVar4 + 4;
        puVar3 = puVar3 + 8;
      }
      local_4 = local_4 + 1;
      pbVar2 = pbVar2 + 0x120;
    } while (local_4 < param_4);
  }
  FUN_00f3a8f0("espEmt10::calcUvMaskBuffer_spu End\n");
  return;
}

// 00F0A630  FUN_00f0a630  size=1391  [callgraph]
void __thiscall FUN_00f0a630(int param_1,undefined4 *param_2,void *param_3,undefined4 param_4)

{
  void *_Dst;
  undefined4 *_Src;
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined1 local_a0 [16];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [24];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_b4;
  FID_conflict__memcpy((void *)(param_1 + 0x510),param_3,0x40);
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x54) = *param_2;
    *(undefined4 *)(param_1 + 0x58) = param_2[1];
    *(undefined4 *)(param_1 + 0x5c) = param_2[2];
  }
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(uint **)(param_1 + 0x58);
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | *(uint *)(uVar4 + 4);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | *(uint *)(uVar4 + 8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar4 + 0x20);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x4000000;
  iVar1 = FUN_00efcbb0();
  if (iVar1 == 0) goto LAB_00f0a8fb;
  if (*(byte *)(uVar4 + 0x15) == 0) {
    *(undefined4 *)(param_1 + 0x558) = param_4;
  }
  else {
    *(uint *)(param_1 + 0x558) = (uint)*(byte *)(uVar4 + 0x15);
  }
  FUN_00ddbbd0(*(undefined4 *)(param_1 + 0x558));
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x90), puVar2 == (uint *)0x0)) {
LAB_00f0a733:
    uVar4 = *(int *)(param_1 + 0x28) + 0xc0;
  }
  else {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(9);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar4 == 0) goto LAB_00f0a733;
  }
  FUN_00ede4f0(uVar4);
  if ((*(uint *)(param_1 + 0x38) & 0x2000) != 0) {
    iVar1 = FUN_00a7c990(&DAT_01ee11f4);
    if ((((iVar1 != 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) ||
        (local_b4 = (float)FUN_00a7c800(), local_b4 == 0.0)) || (*(int *)(param_1 + 0x50) == 0)) {
      FUN_009cca90(param_1,&DAT_016dd8d4);
LAB_00f0a8fb:
      __security_check_cookie(local_14 ^ (uint)&local_b4);
      return;
    }
    _Dst = (void *)(param_1 + 0x490);
    FID_conflict__memcpy(_Dst,(void *)(param_1 + 0x510),0x40);
    local_b0 = *(float *)(param_1 + 0x1f0);
    local_ac = *(float *)(param_1 + 500);
    local_a8[0] = *(float *)(param_1 + 0x1f8);
    FUN_00ddd140(local_a0,&local_b0);
    D3DXMatrixMultiply(_Dst,_Dst,local_a0);
    thunk_FUN_00ddc1d0(&local_ac,param_1 + 0x1b0,5);
    D3DXMatrixMultiply(_Dst,_Dst,&local_ac);
    *(float *)(param_1 + 0x4c0) = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x4c0);
    *(float *)(param_1 + 0x4c4) = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x4c4);
    *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x4c8);
    iVar1 = FUN_00a7c990(&DAT_01ee11f4);
    if (((iVar1 == 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c800(), iVar1 != 0)) {
      iVar1 = FUN_00a12290(0xffffffff);
    }
    else {
      iVar1 = 0;
    }
    D3DXMatrixInverse(auStack_78,0,iVar1 + 0x10);
    D3DXMatrixMultiply(auStack_84,*(int *)(param_1 + 0x50) + 0x10,auStack_84);
    D3DXMatrixTranslation(auStack_90,uStack_60,uStack_5c,uStack_58);
    D3DXMatrixMultiply(_Dst,_Dst,local_a0);
    iVar1 = FUN_00a12210(0xffffffff);
    D3DXMatrixMultiply(_Dst,_Dst,iVar1 + 0x10);
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x20), puVar2 == (uint *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(2);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  if (*(ushort *)(uVar4 + 10) == 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  else {
    *(uint *)(param_1 + 0x120) = *(ushort *)(uVar4 + 10) + 1;
  }
  iVar1 = param_1 + 0x3a0;
  *(undefined4 *)(param_1 + 0x118) = 0x40000000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x550) = 0xc2c80000;
  *(undefined4 *)(param_1 + 0x554) = 0xc2ca0000;
  FUN_00efd190(iVar1);
  FUN_00edfc20(iVar1);
  FUN_00efb130(iVar1);
  if (*(char *)(uVar4 + 0x10) != '\0') {
    _Src = (undefined4 *)(param_1 + 0x490);
    local_b0 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
    local_ac = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    local_a8[0] = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4ac) = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x49c) = 0;
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
    *(undefined4 *)(param_1 + 0x4cc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4b8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4a4) = 0x3f800000;
    *_Src = 0x3f800000;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ(local_a0,*(undefined4 *)(param_1 + 0x1c8));
      D3DXMatrixMultiply(_Src,local_a8,_Src);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY(local_a0,*(undefined4 *)(param_1 + 0x1c4));
      D3DXMatrixMultiply(_Src,local_a8,_Src);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX(local_a0,*(undefined4 *)(param_1 + 0x1c0));
      D3DXMatrixMultiply(_Src,local_a8,_Src);
    }
    *(float *)(param_1 + 0x4c0) = local_b0;
    *(float *)(param_1 + 0x4c4) = local_ac;
    *(float *)(param_1 + 0x4c8) = local_a8[0];
    D3DXMatrixMultiply(_Src,_Src,param_1 + 0x510);
    if (*(int *)(param_1 + 0x50) != 0) {
      D3DXMatrixMultiply(_Src,_Src,*(int *)(param_1 + 0x50) + 0x10);
    }
    FID_conflict__memcpy((void *)(param_1 + 0x4d0),_Src,0x40);
  }
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0;
  if (((((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) &&
       (iVar1 = FUN_00a7c990(&DAT_01ee11f4), iVar1 == 0)) && (iVar1 = FUN_00a81330(), iVar1 != 0))
     && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar5 = (float10)-1.0;
    }
    else {
      fVar5 = (float10)FUN_00e36970(0);
    }
    local_b4 = (float)fVar5;
    *(float *)(param_1 + 0x56c) = local_b4;
  }
  __security_check_cookie(local_14 ^ (uint)&local_b4);
  return;
}

// 00F0ABA0  espEmt10::clacMulColor_spu  size=308  [class]
void __thiscall espEmt10::clacMulColor_spu(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00f3a8f0("espEmt10::clacMulColor_spu Start\n");
  local_20 = 1.0;
  iVar3 = *(int *)(param_2 + 0x30);
  local_1c = 1.0;
  local_18 = 1.0;
  local_24 = 1.0;
  if ((*(int *)(iVar3 + 0x18) != 0) &&
     (iVar4 = *(int *)(iVar3 + 0x18), (*(byte *)(iVar4 + 0x68) & 8) != 0)) {
    local_20 = *(float *)(iVar4 + 0x30);
    local_1c = *(float *)(iVar4 + 0x34);
    local_18 = *(float *)(iVar4 + 0x38);
    local_24 = *(float *)(iVar4 + 0x3c);
  }
  cVar2 = *(char *)(*(int *)(iVar3 + 8) + 0x25);
  switch(cVar2) {
  case '\x06':
  case '\n':
  case '\f':
  case '\x0f':
    local_20 = local_24 * local_20;
    local_1c = local_1c * local_24;
    local_18 = local_18 * local_24;
    if (cVar2 == '\x0f') goto LAB_00f0ac58;
    local_24 = *(float *)(*(int *)(iVar3 + 8) + 0x28) * 0.5 * local_24;
  }
LAB_00f0ac58:
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    fVar1 = 1.0;
  }
  else if (*(float *)(param_1 + 0x90) == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  }
  *(float *)(param_2 + 100) = local_20;
  *(float *)(param_2 + 0x68) = local_1c;
  *(float *)(param_2 + 0x6c) = local_18;
  *(float *)(param_2 + 0x70) = local_24 * fVar1;
  FUN_00f3a8f0("espEmt10::clacMulColor_spu End\n");
  return;
}

// 00F11F80  espEmt10::moveChild_spu  size=872  [class]
void __thiscall espEmt10::moveChild_spu(int param_1,int *param_2)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int local_b8;
  int local_ac;
  uint *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined1 local_68;
  uint *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00f3a8f0("espEmt10::moveChild_spu Start\n");
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
    fVar2 = *(float *)(*param_2 + 0x24);
    if (*(float *)(param_1 + 0x94) <= 0.0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
      *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) - fVar2;
      if (*(float *)(param_1 + 0x9c) < 0.0) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
      *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - fVar2;
    }
  }
  if ((((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) && (*(float *)(param_1 + 0x11c) != 0.0)) &&
     ((**(uint **)(*param_2 + 4) & 0x4000000) != 0)) {
    FUN_00edfda0(*param_2);
  }
  iVar3 = *(int *)(param_1 + 0x5a8);
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x58c) == 0) {
    local_b8 = *(int *)(param_1 + 0x588);
  }
  else {
    local_b8 = 0;
  }
  if (local_b8 < *(int *)(param_1 + 0x580)) {
    iVar4 = local_b8 * 0x120 + *(int *)(param_1 + 0x578) + 0xf4;
    local_b8 = *(int *)(param_1 + 0x580) - local_b8;
    do {
      puVar1 = (uint *)(iVar4 + 8);
      if ((*(uint *)(iVar4 + 8) & 0x80000000) == 0) {
        if ((*(int *)*param_2 == 0) && (*(int *)(iVar4 + 0x10) != 0)) {
          local_a4 = param_1 + 0x450;
          local_9c = iVar4 + -0x74;
          local_98 = iVar4 + -100;
          local_a0 = iVar4 + -0xa4;
          local_94 = iVar4 + -0xf4;
          local_ac = iVar4;
          local_a8 = puVar1;
          FUN_00edc180(&local_a0,&local_ac);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
        local_8c = *(undefined4 *)(param_1 + 0x5a0);
        local_88 = *(undefined4 *)(param_1 + 0x6c);
        local_78 = *(undefined4 *)(param_1 + 0x380);
        local_80 = param_1 + 0x590;
        local_84 = (float)(int)*(short *)(param_1 + 0x400);
        local_7c = iVar4 + -0x1c;
        local_60 = *param_2;
        local_74 = *(undefined4 *)(local_60 + 0x10);
        local_70 = *(undefined4 *)(param_1 + 0x434);
        local_5c = iVar4 + -0xc;
        local_68 = *(undefined1 *)(param_1 + 0x431);
        local_6c = param_1 + 0x43c;
        local_58 = param_1 + 0x110;
        local_54 = iVar4 + -0xf4;
        local_4c = iVar4 + -0x74;
        local_48 = iVar4 + -100;
        local_50 = iVar4 + -0xa4;
        local_40 = iVar4 + -0x54;
        local_3c = iVar4 + -0x2c;
        local_44 = iVar4 + -0x84;
        local_34 = iVar4 + -0x94;
        local_30 = iVar4 + -0x44;
        local_38 = iVar4 + -0x34;
        local_10 = iVar4 + 0x10;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        local_c = 0;
        local_8 = 0;
        local_4 = 0;
        local_90 = iVar4;
        local_64 = puVar1;
        FUN_00f0b160(&local_64,&local_90);
        if ((*puVar1 & 0x80000000) == 0) {
          if (iVar3 != 0) {
            FUN_00ec9530(*(undefined4 *)(param_1 + 0x110));
          }
          *(int *)(param_1 + 0x584) = *(int *)(param_1 + 0x584) + 1;
        }
      }
      iVar4 = iVar4 + 0x120;
      local_b8 = local_b8 + -1;
    } while (local_b8 != 0);
  }
  if (*(int *)*param_2 != 0) {
    FID_conflict__memcpy((void *)(param_1 + 0x450),*(void **)*param_2,0x40);
  }
  *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 2;
  FUN_00f3a8f0("espEmt10::moveChild_spu End\n");
  return;
}

// 00F122F0  FUN_00f122f0  size=87  [callgraph]
void __thiscall FUN_00f122f0(int param_1,int param_2)

{
  EspReadWriteLock::enterWrite();
  *(int *)(param_2 + 0x10) = param_1;
  if (*(int *)(param_1 + 0x420) != 0) {
    *(int *)(*(int *)(param_1 + 0x420) + 0x14) = param_2;
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x420);
  }
  *(int *)(param_1 + 0x420) = param_2;
  if (*(int *)(param_1 + 0x424) == 0) {
    *(int *)(param_1 + 0x424) = param_2;
  }
  *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + 1;
  FUN_00eaac50();
  return;
}

// 00F12350  FUN_00f12350  size=87  [callgraph]
void __thiscall FUN_00f12350(int param_1,int param_2)

{
  EspReadWriteLock::enterWrite();
  *(int *)(param_2 + 0x10) = param_1;
  if (*(int *)(param_1 + 0x424) != 0) {
    *(int *)(*(int *)(param_1 + 0x424) + 0x18) = param_2;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x424);
  }
  *(int *)(param_1 + 0x424) = param_2;
  if (*(int *)(param_1 + 0x420) == 0) {
    *(int *)(param_1 + 0x420) = param_2;
  }
  *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + 1;
  FUN_00eaac50();
  return;
}

// 00F123B0  FUN_00f123b0  size=128  [callgraph]
void __thiscall FUN_00f123b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) != param_1) {
    FUN_00ec47a0(&DAT_016de660,param_2);
    return;
  }
  EspReadWriteLock::enterWrite();
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x18) = iVar1;
  }
  *(int *)(param_2 + 0x14) = iVar2;
  *(int *)(param_2 + 0x18) = iVar1;
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (*(int *)(param_1 + 0x420) == param_2) {
    *(int *)(param_1 + 0x420) = iVar1;
  }
  if (*(int *)(param_1 + 0x424) == param_2) {
    *(int *)(param_1 + 0x424) = iVar2;
  }
  *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + -1;
  FUN_00eaac50();
  return;
}

// 00F1E9A0  FUN_00f1e9a0  size=2884  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00f1e9a0(int param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  ushort *puVar13;
  uint uVar14;
  float10 fVar15;
  undefined1 auStack_114 [12];
  float local_108;
  float local_104;
  float local_100;
  ushort *local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [2];
  undefined1 local_a0 [64];
  undefined1 auStack_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_114;
  if ((*(uint *)(param_1 + 0x55c) & 1) == 0) {
    iVar8 = param_1 + 0x3a0;
    FUN_00edfc20(iVar8);
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x24);
    FUN_00edb3c0(iVar8);
    if (((((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) &&
         (iVar6 = FUN_00a7c990(&DAT_01ee11f4), iVar6 == 0)) && (iVar6 = FUN_00a81330(), iVar6 != 0))
       && (iVar6 = FUN_00a7c890(), iVar6 != 0)) {
      iVar6 = FUN_00e26e90();
      if (iVar6 == 0) {
        fVar15 = (float10)-1.0;
      }
      else {
        fVar15 = (float10)FUN_00e36970(0);
      }
      local_f4 = (float)fVar15;
      if (*(float *)(param_1 + 0x56c) < local_f4 == (*(float *)(param_1 + 0x56c) == local_f4)) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
      }
      else {
        local_100 = local_f4 - *(float *)(param_1 + 0x56c);
        *(float *)(param_1 + 0x110) = local_100 / 0.016666668;
        *(float *)(param_1 + 0x56c) = local_f4;
      }
    }
    FUN_00ef6ac0();
    if ((**(uint **)(param_1 + 0x24) & 0x40000000) != 0) {
      FUN_00f0afe0(iVar8);
    }
    if ((*(uint *)(param_1 + 0x30) & 0x4000) != 0) {
      FUN_00ef8ed0(iVar8);
    }
    if ((**(uint **)(param_1 + 0x24) & 0x10000000) != 0) {
      FUN_00ef9850(iVar8);
    }
    FUN_00efa160(iVar8);
    FUN_00edfc20(iVar8);
    FUN_00efb130(iVar8);
    FUN_00efbd40(iVar8);
    if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
      local_108 = *(float *)(param_1 + 0x11c);
      *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x550);
      local_100 = *(float *)(param_1 + 0x118) - local_108;
      *(float *)(param_1 + 0x550) = *(float *)(param_1 + 0x550) - local_100;
      if ((*(int *)(param_1 + 0x58) == 0) ||
         (puVar7 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x20), puVar7 == (undefined4 *)0x0)) {
        local_fc = (ushort *)0x0;
      }
      else {
        puVar13 = (ushort *)*puVar7;
        local_fc = puVar13;
        if ((ushort *)((int)puVar13 + 0xfU & 0xfffffff0) != puVar13) {
          uVar10 = FUN_00f59ed0(2);
          FUN_00dd5650(&DAT_016597b4,uVar10);
        }
      }
      fVar1 = *(float *)(param_1 + 0x550);
      puVar13 = local_fc;
      while (local_fc = puVar13, fVar1 <= 0.0) {
        if ((*(int *)(param_1 + 0x120) != 0) &&
           (local_100 = (float)(*(int *)(param_1 + 0x120) + -1),
           (float)(int)local_100 < *(float *)(param_1 + 0x560))) {
          __security_check_cookie(local_14 ^ (uint)auStack_114);
          return;
        }
        local_100 = (float)(uint)puVar13[1];
        local_104 = (float)(int)local_100 + 0.999999;
        fVar15 = (float10)FUN_00dde300(0,0x3f800000);
        local_108 = (float)fVar15;
        local_104 = (float)*(byte *)((int)puVar13 + 0xf) * local_108 + local_104;
        if (puVar13[3] != 0) {
          local_104 = (float)puVar13[3] * local_104;
        }
        local_f8 = *(float *)(param_1 + 0x120);
        if (((0 < (int)local_f8) && ((char)puVar13[7] != '\0')) &&
           (local_104 = ((float)(int)(char)puVar13[7] * *(float *)(param_1 + 0x118)) /
                        (float)(int)local_f8 + local_104, local_104 < 1.0)) {
          local_104 = 1.0;
        }
        if (*(float *)(param_1 + 0x550) < -100.0 == (*(float *)(param_1 + 0x550) == -100.0)) {
          *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x550);
          *(float *)(param_1 + 0x550) = *(float *)(param_1 + 0x550) + local_104;
        }
        else {
          *(float *)(param_1 + 0x550) = local_104;
          *(float *)(param_1 + 0x554) = local_104 - 1.0;
        }
        *(float *)(param_1 + 0x560) = local_104 + 0.0001 + *(float *)(param_1 + 0x560);
        if (*(int *)(param_1 + 0x568) == 0) {
          local_100 = 1.4013e-45;
        }
        else {
          local_100 = (float)((byte)puVar13[8] + 1);
        }
        local_f4 = 0.0;
        if (local_100 != 0.0) {
          do {
            puVar13 = local_fc;
            if ((*(uint *)(param_1 + 0x38) & 0x2000) == 0) {
              uVar4 = local_fc[8];
              puVar7 = (undefined4 *)(param_1 + 0x490);
              local_f0 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
              local_ec = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
              local_e8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
              *(undefined4 *)(param_1 + 0x4c8) = 0;
              *(undefined4 *)(param_1 + 0x4c4) = 0;
              *(undefined4 *)(param_1 + 0x4c0) = 0;
              *(undefined4 *)(param_1 + 0x4bc) = 0;
              *(undefined4 *)(param_1 + 0x4b4) = 0;
              *(undefined4 *)(param_1 + 0x4b0) = 0;
              *(undefined4 *)(param_1 + 0x4ac) = 0;
              *(undefined4 *)(param_1 + 0x4a8) = 0;
              *(undefined4 *)(param_1 + 0x4a0) = 0;
              *(undefined4 *)(param_1 + 0x49c) = 0;
              *(undefined4 *)(param_1 + 0x498) = 0;
              *(undefined4 *)(param_1 + 0x494) = 0;
              *(undefined4 *)(param_1 + 0x4cc) = 0x3f800000;
              *(undefined4 *)(param_1 + 0x4b8) = 0x3f800000;
              *(undefined4 *)(param_1 + 0x4a4) = 0x3f800000;
              *puVar7 = 0x3f800000;
              bVar3 = *(float *)(param_1 + 0x1c8) != 0.0;
              if ((char)uVar4 == '\0') {
                if (bVar3) {
                  D3DXMatrixRotationZ(local_a0,*(undefined4 *)(param_1 + 0x1c8));
                  D3DXMatrixMultiply(puVar7,afStack_a8,puVar7);
                }
                if (*(float *)(param_1 + 0x1c4) != 0.0) {
                  D3DXMatrixRotationY(local_a0,*(undefined4 *)(param_1 + 0x1c4));
                  D3DXMatrixMultiply(puVar7,afStack_a8,puVar7);
                }
                if (*(float *)(param_1 + 0x1c0) != 0.0) {
                  D3DXMatrixRotationX(local_a0,*(undefined4 *)(param_1 + 0x1c0));
                  D3DXMatrixMultiply(puVar7,afStack_a8,puVar7);
                }
                *(float *)(param_1 + 0x4c0) = *(float *)(param_1 + 0x4c0) + local_f0;
                *(float *)(param_1 + 0x4c4) = local_ec + *(float *)(param_1 + 0x4c4);
                *(float *)(param_1 + 0x4c8) = local_e8 + *(float *)(param_1 + 0x4c8);
                D3DXMatrixMultiply(puVar7,puVar7,param_1 + 0x510);
              }
              else {
                if (bVar3) {
                  D3DXMatrixRotationZ(local_a0,*(undefined4 *)(param_1 + 0x1c8));
                  D3DXMatrixMultiply(puVar7,afStack_a8,puVar7);
                }
                if (*(float *)(param_1 + 0x1c4) != 0.0) {
                  D3DXMatrixRotationY(local_a0,*(undefined4 *)(param_1 + 0x1c4));
                  D3DXMatrixMultiply(puVar7,afStack_a8,puVar7);
                }
                if (*(float *)(param_1 + 0x1c0) != 0.0) {
                  D3DXMatrixRotationX(local_a0,*(undefined4 *)(param_1 + 0x1c0));
                  D3DXMatrixMultiply(puVar7,afStack_a8,puVar7);
                }
                *(float *)(param_1 + 0x4c0) = *(float *)(param_1 + 0x4c0) + local_f0;
                *(float *)(param_1 + 0x4c4) = local_ec + *(float *)(param_1 + 0x4c4);
                *(float *)(param_1 + 0x4c8) = local_e8 + *(float *)(param_1 + 0x4c8);
                D3DXMatrixMultiply(puVar7,puVar7,param_1 + 0x510);
                if (*(int *)(param_1 + 0x50) != 0) {
                  D3DXMatrixMultiply(puVar7,puVar7,*(int *)(param_1 + 0x50) + 0x10);
                }
                local_108 = (1.0 / (float)((byte)puVar13[8] + 1)) * (float)((int)local_f4 + 1);
                if (local_108 < 0.99 != (local_108 == 0.99)) {
                  FUN_00ddcaa0(puVar7,param_1 + 0x4d0,puVar7,local_108);
                }
              }
            }
            *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) + 1;
            if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
              uVar14 = 0;
            }
            else {
              uVar14 = **(uint **)(param_1 + 0x58);
              if ((uVar14 + 0xf & 0xfffffff0) != uVar14) {
                uVar10 = FUN_00f59ed0(0);
                FUN_00dd5650(&DAT_016597b4,uVar10);
              }
            }
            if ((*(byte *)(uVar14 + 4) & 1) == 0) {
              iVar8 = FUN_00f41620((int)*(char *)((int)puVar13 + 0x11));
            }
            else {
              iVar8 = FUN_00f41670((int)*(char *)((int)puVar13 + 0x11));
            }
            if (iVar8 == 0) break;
            iVar8 = FUN_009cde80(param_1);
            puVar13 = local_fc;
            if (iVar8 != 0) {
              local_104 = (float)(uint)((*(uint *)(param_1 + 0x3c) & 0x800000) != 0);
              if ((char)local_fc[9] != '\0') {
                local_104 = (float)((uint)local_104 | 2);
              }
              if ((*(uint *)(param_1 + 0x3c) & 4) != 0) {
                local_104 = (float)((uint)local_104 | 4);
              }
              if (local_104 != 0.0) {
                if ((*(int *)(param_1 + 0x58) == 0) ||
                   (puVar9 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar9 == (uint *)0x0)) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *puVar9;
                  if ((uVar14 + 0xf & 0xfffffff0) != uVar14) {
                    uVar10 = FUN_00f59ed0(1);
                    FUN_00dd5650(&DAT_016597b4,uVar10);
                  }
                }
                D3DXVec3TransformNormal(&fStack_e0,uVar14 + 4,param_1 + 0x490);
                fStack_e0 = fStack_e0 + *(float *)(param_1 + 0x4c0);
                fStack_dc = *(float *)(param_1 + 0x4c4) + fStack_dc;
                fStack_d8 = *(float *)(param_1 + 0x4c8) + fStack_d8;
                if ((((*(uint *)(param_1 + 0x38) & 0x2000) == 0) && ((char)puVar13[8] == '\0')) &&
                   (iVar8 = *(int *)(param_1 + 0x50), iVar8 != 0)) {
                  D3DXVec3TransformNormal(&fStack_e0,&fStack_e0,iVar8 + 0x10);
                  fStack_e0 = fStack_e0 + *(float *)(iVar8 + 0x40);
                  fStack_dc = *(float *)(iVar8 + 0x44) + fStack_dc;
                  fStack_d8 = *(float *)(iVar8 + 0x48) + fStack_d8;
                }
                if (((uint)local_104 & 5) != 0) {
                  pfVar11 = (float *)FUN_00e9fe70();
                  pfVar12 = (float *)FUN_00e9feb0();
                  fStack_d0 = *pfVar12 - *pfVar11;
                  fStack_cc = pfVar12[1] - pfVar11[1];
                  fStack_c8 = pfVar12[2] - pfVar11[2];
                  fStack_c4 = pfVar12[3] - pfVar11[3];
                  pfVar11 = (float *)FUN_00e9fe70();
                  fStack_c0 = fStack_e0 - *pfVar11;
                  fStack_bc = fStack_dc - pfVar11[1];
                  fStack_b8 = fStack_d8 - pfVar11[2];
                  fStack_b4 = fStack_d4 - pfVar11[3];
                  local_108 = fStack_d0 * fStack_d0 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
                  if (local_108 < 0.0 == (local_108 == 0.0)) {
                    FUN_00ddf460(&fStack_d0,&fStack_d0);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    fStack_d0 = 0.0;
                    fStack_cc = 1.0;
                    fStack_c8 = 0.0;
                  }
                  local_108 = fStack_c0 * fStack_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
                  if (local_108 < 0.0 == (local_108 == 0.0)) {
                    FUN_00ddf460(&fStack_c0,&fStack_c0);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    fStack_c0 = 0.0;
                    fStack_bc = 1.0;
                    fStack_b8 = 0.0;
                  }
                  local_f8 = fStack_b8 * fStack_c8 + fStack_c0 * fStack_d0 + fStack_bc * fStack_cc;
                  iVar8 = FUN_00e9fe50();
                  local_108 = *(float *)(iVar8 + 0x94) * 0.5 + _DAT_018d705c;
                  fVar15 = (float10)FUN_00fded30();
                  local_108 = (float)fVar15;
                  puVar13 = local_fc;
                  if (((uint)local_104 & 1) == 0) {
                    if (local_108 < local_f8) break;
                  }
                  else if (local_108 >= local_f8 && local_108 != local_f8) break;
                }
                if (((uint)local_104 & 2) != 0) {
                  pfVar11 = (float *)FUN_00e9fe70();
                  fStack_b0 = *pfVar11 - fStack_e0;
                  cVar2 = (char)puVar13[9];
                  fStack_ac = pfVar11[1] - fStack_dc;
                  afStack_a8[0] = pfVar11[2] - fStack_d8;
                  cVar5 = cVar2;
                  if (cVar2 < '\0') {
                    cVar5 = -cVar2;
                  }
                  fVar1 = *(float *)(*(int *)(param_1 + 0x28) + 8000 + cVar5 * 4);
                  local_108 = afStack_a8[0] * afStack_a8[0] +
                              fStack_b0 * fStack_b0 + fStack_ac * fStack_ac;
                  puVar13 = local_fc;
                  if (cVar2 < '\x01') {
                    if (local_108 < fVar1 * fVar1) break;
                  }
                  else if (fVar1 * fVar1 < local_108) break;
                }
              }
              uVar4 = *puVar13;
              local_108 = (float)(int)*(char *)((int)puVar13 + 0xd);
              FUN_00dde300(0,0x3f800000);
              iVar8 = FUN_00fdbc60();
              iVar8 = (uint)uVar4 + iVar8;
              local_f8 = *(float *)(param_1 + 0x120);
              if (((int)local_f8 < 1) || ((char)puVar13[6] == '\0')) {
                if (iVar8 < 1) goto LAB_00f1f467;
              }
              else {
                local_108 = (float)(int)(char)puVar13[6];
                iVar6 = FUN_00fdbc60();
                iVar8 = iVar8 + iVar6;
                if (iVar8 < 1) {
                  iVar8 = 1;
                }
              }
              do {
                FID_conflict__memcpy(auStack_60,(void *)(param_1 + 0x490),0x40);
                FUN_00f119c0(auStack_60);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
LAB_00f1f467:
            local_f4 = (float)((int)local_f4 + 1);
          } while ((int)local_f4 < (int)local_100);
        }
        if ((char)local_fc[8] != '\0') {
          FID_conflict__memcpy((void *)(param_1 + 0x4d0),(void *)(param_1 + 0x490),0x40);
        }
        puVar13 = local_fc;
        fVar1 = *(float *)(param_1 + 0x550);
      }
    }
  }
  else if (((*(uint *)(param_1 + 0x55c) & 2) != 0) && (*(int *)(param_1 + 0x584) < 1)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    __security_check_cookie(local_14 ^ (uint)auStack_114);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_114);
  return;
}

// 00F1F4F0  espEmt10::espEmt10  size=28  [class]
undefined4 * __fastcall espEmt10::espEmt10(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  param_1[0x157] = 0;
  return param_1;
}

// 00F1F510  espEmt10::calcPosBuffer_spu  size=3021  [class]
void __thiscall
espEmt10::calcPosBuffer_spu
          (int param_1,int param_2,int param_3,float param_4,int param_5,float *param_6)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined1 auStack_224 [4];
  float local_220;
  float local_21c;
  float local_218;
  float *local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  float *local_1cc;
  undefined4 local_1c8;
  float *local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float *local_198;
  float *local_194;
  float local_190;
  float local_18c;
  float *local_188;
  undefined1 *local_184;
  undefined1 *local_180;
  undefined1 *local_17c;
  float *local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  short local_168;
  undefined1 *local_164;
  undefined1 *local_160;
  undefined1 *local_15c;
  undefined1 *local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined4 *local_14c;
  undefined4 local_148;
  float *local_144;
  float *local_140;
  float local_13c;
  undefined4 local_138;
  float *local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float *local_124;
  float *local_120;
  float local_11c;
  float *local_118;
  float *local_114;
  float *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104;
  undefined1 local_100 [16];
  float local_f0;
  float local_ec;
  undefined1 local_e0 [16];
  undefined1 local_d0 [12];
  undefined1 auStack_c4 [4];
  undefined1 local_c0 [8];
  undefined1 auStack_b8 [12];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_54 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_224;
  local_220 = param_4;
  local_214 = param_6;
  local_1dc = param_1;
  FUN_00f3a8f0();
  iVar1 = ((undefined4 *)param_6[0xc])[2];
  local_1d4 = *(undefined4 *)(iVar1 + 0xc);
  local_218 = (float)(uint)*(ushort *)(param_1 + 0x4e);
  local_1d8 = *(undefined4 *)param_6[0xc];
  local_1d0 = *(undefined4 *)(iVar1 + 0x10);
  local_1c0 = *(undefined4 *)(iVar1 + 0x60);
  local_1b8 = *(undefined4 *)(iVar1 + 100);
  fVar2 = param_6[0xb];
  local_1b0 = *(undefined4 *)((int)fVar2 + 0x40);
  local_1ac = *(undefined4 *)((int)fVar2 + 0x44);
  local_1a8 = *(undefined4 *)((int)fVar2 + 0x48);
  local_1a4 = *(undefined4 *)((int)fVar2 + 0x4c);
  local_1e4 = 0;
  local_1bc = *(undefined4 *)(param_1 + 0x5a4);
  local_21c = 0.0;
  local_1e8 = 0;
  local_1b4 = *(undefined4 *)(param_1 + 0xa4);
  local_200 = 3.4028235e+38;
  local_1fc = 3.4028235e+38;
  local_1f8 = 3.4028235e+38;
  local_210 = -3.4028235e+38;
  local_20c = -3.4028235e+38;
  local_208 = -3.4028235e+38;
  if (0 < param_5) {
    pfVar4 = (float *)((int)local_220 + 0xd4);
    local_1e0 = 4;
    pfVar5 = (float *)(param_2 + 0x14);
    do {
      *(byte *)((int)pfVar4 + 0x36) = *(byte *)((int)pfVar4 + 0x36) & 0xfe;
      pfVar7 = pfVar4 + 10;
      if ((((uint)pfVar4[10] & 0x80000000) == 0) && (0.01 < *pfVar4)) {
        pfVar4[0xe] = 1.0;
        if (pfVar4[0xc] == 0.0) {
          *(undefined4 *)local_214[0xc] = 0;
          *(undefined4 *)((int)local_214[0xd] + 0xc) = 0;
        }
        else {
          *(undefined4 *)local_214[0xc] = local_1d8;
          *(undefined4 *)((int)local_214[0xd] + 0xc) = local_1d8;
        }
        local_11c = local_214[0xc];
        local_118 = pfVar4 + -0x21;
        local_110 = pfVar4 + -0x35;
        local_10c = 0;
        local_108 = 0;
        local_104 = pfVar4[0xc];
        local_114 = pfVar4 + -0x19;
        local_124 = pfVar4 + 8;
        local_160 = local_d0;
        local_15c = local_e0;
        local_164 = local_100;
        local_158 = local_c0;
        local_120 = pfVar7;
        FUN_00efac70(&local_164,&local_124);
        if (((uint)*pfVar7 & 0x200) == 0) {
          fVar6 = (float10)FUN_00edbf30(&local_1b0,local_100,local_1d4);
          pfVar4[0xe] = (float)(fVar6 * (float10)pfVar4[0xe]);
          fVar6 = (float10)FUN_00edc040(&local_1b0,local_100,local_1c0);
          local_220 = (float)(fVar6 * (float10)pfVar4[0xe]);
          pfVar4[0xe] = local_220;
          if (local_220 < 0.01 != (local_220 == 0.01)) {
            FUN_00f3a8f0("no draw by CalcCamNearAlpha n=%5.2f f=%5.2f\n");
            goto LAB_00f1ff7e;
          }
        }
        local_13c = local_214[0xc];
        local_12c = local_1bc;
        local_130 = pfVar4[0xc];
        local_128 = local_1b4;
        local_144 = pfVar4 + 8;
        local_134 = pfVar4 + -0x1d;
        local_150 = &local_a8;
        local_154 = &local_ac;
        local_138 = 0;
        local_148 = 0;
        local_14c = &local_a4;
        local_140 = pfVar7;
        FUN_00efb5e0(&local_154);
        local_174 = local_ac;
        local_190 = local_214[0xd];
        local_18c = local_214[0xb];
        local_170 = local_a8;
        local_188 = pfVar4 + -0x21;
        local_16c = local_a4;
        local_17c = local_e0;
        local_178 = pfVar4 + -0x35;
        local_184 = local_d0;
        local_180 = local_100;
        local_198 = pfVar4 + 8;
        local_1cc = &local_a0;
        local_1c4 = pfVar4 + 0xe;
        local_168 = SUB42(local_218,0);
        local_1c8 = 0;
        local_194 = pfVar7;
        if ((local_168 == -3) || (((uint)*pfVar7 & 0x100) != 0)) {
          FUN_00efd280(&local_1cc);
        }
        else if (((uint)pfVar4[8] & 0x20) == 0) {
          if (((uint)pfVar4[9] & 1) == 0) {
            if (((uint)pfVar4[8] & 0x100000) == 0) {
              FUN_00f0cce0(&local_1cc);
            }
            else {
              FUN_00f0d230(&local_1cc);
            }
          }
          else {
            FUN_00f0bf60(&local_1cc);
          }
        }
        else {
          FUN_00f0b6f0(&local_1cc);
        }
        if (0.01 < pfVar4[0xe]) {
          pfVar4[0xf] = 1.0;
          pfVar4[0x10] = 1.0;
          uVar3 = *(uint *)(local_1dc + 0x55c) >> 3 & 1;
          if ((uVar3 != 0) || ((*(uint *)(local_1dc + 0x55c) & 0x10) != 0)) {
            local_220 = local_9c * local_9c + local_a0 * local_a0 + local_98 * local_98;
            fVar6 = (float10)FUN_00fdef70();
            local_f0 = (float)fVar6;
            local_220 = local_8c * local_8c + local_90 * local_90 + local_88 * local_88;
            fVar6 = (float10)FUN_00fdef70();
            local_220 = (float)fVar6;
            if (uVar3 != 0) {
              pfVar4[0xf] = local_f0;
            }
            local_ec = local_220;
            if ((*(byte *)(local_1dc + 0x55c) & 0x10) != 0) {
              pfVar4[0x10] = local_220;
            }
          }
          *(byte *)((int)pfVar4 + 0x36) = *(byte *)((int)pfVar4 + 0x36) | 1;
          uVar8 = CONCAT44(&local_a0,&DAT_018d6b80);
          pfVar7 = &local_60;
          D3DXVec3TransformNormal();
          fStack_6c = fStack_7c + fStack_6c;
          fStack_68 = fStack_78 + fStack_68;
          fStack_64 = fStack_74 + fStack_64;
          D3DXVec3TransformNormal(&fStack_5c,&DAT_018d6b90,&local_ac,pfVar7,uVar8);
          fStack_68 = local_88 + fStack_68;
          fStack_64 = fStack_64 + fStack_84;
          local_60 = local_60 + fStack_80;
          D3DXVec3TransformNormal(&fStack_58,&DAT_018d6ba0,auStack_b8);
          fStack_64 = fStack_94 + fStack_64;
          local_60 = local_60 + local_90;
          fStack_5c = fStack_5c + local_8c;
          D3DXVec3TransformNormal(auStack_54,&DAT_018d6bb0,auStack_c4);
          fStack_30 = fStack_70 + fStack_30;
          fStack_2c = fStack_2c + fStack_6c;
          fStack_28 = fStack_28 + fStack_68;
          if (param_3 < local_1e0) {
            FUN_00dd5650();
            param_6 = local_214;
            break;
          }
          pfVar5[-5] = local_60;
          pfVar5[-4] = fStack_5c;
          pfVar5[-3] = fStack_58;
          FUN_00f3a8f0();
          pfVar5[-2] = fStack_50;
          pfVar5[-1] = fStack_4c;
          *pfVar5 = fStack_48;
          FUN_00f3a8f0();
          pfVar5[1] = fStack_40;
          pfVar5[2] = fStack_3c;
          pfVar5[3] = fStack_38;
          FUN_00f3a8f0("espEmt10::calcPosBuffer_spu [%p]\n",pfVar5 + 1);
          pfVar5[4] = fStack_30;
          pfVar5[5] = fStack_2c;
          pfVar5[6] = fStack_28;
          FUN_00f3a8f0("espEmt10::calcPosBuffer_spu [%p]\n",pfVar5 + 4);
          if (local_60 < local_200) {
            local_200 = local_60;
          }
          if (fStack_5c < local_1fc) {
            local_1fc = fStack_5c;
          }
          if (fStack_58 < local_1f8) {
            local_1f8 = fStack_58;
          }
          if (fStack_50 < local_200) {
            local_200 = fStack_50;
          }
          if (fStack_4c < local_1fc) {
            local_1fc = fStack_4c;
          }
          if (fStack_48 < local_1f8) {
            local_1f8 = fStack_48;
          }
          if (fStack_40 < local_200) {
            local_200 = fStack_40;
          }
          if (fStack_3c < local_1fc) {
            local_1fc = fStack_3c;
          }
          if (fStack_38 < local_1f8) {
            local_1f8 = fStack_38;
          }
          if (fStack_30 < local_200) {
            local_200 = fStack_30;
          }
          if (fStack_2c < local_1fc) {
            local_1fc = fStack_2c;
          }
          if (fStack_28 < local_1f8) {
            local_1f8 = fStack_28;
          }
          if (local_210 <= local_60) {
            local_210 = local_60;
          }
          if (local_20c <= fStack_5c) {
            local_20c = fStack_5c;
          }
          if (local_208 <= fStack_58) {
            local_208 = fStack_58;
          }
          if (local_210 <= fStack_50) {
            local_210 = fStack_50;
          }
          if (local_20c <= fStack_4c) {
            local_20c = fStack_4c;
          }
          if (local_208 <= fStack_48) {
            local_208 = fStack_48;
          }
          if (local_210 <= fStack_40) {
            local_210 = fStack_40;
          }
          if (local_20c <= fStack_3c) {
            local_20c = fStack_3c;
          }
          if (local_208 <= fStack_38) {
            local_208 = fStack_38;
          }
          if (local_210 <= fStack_30) {
            local_210 = fStack_30;
          }
          if (local_20c <= fStack_2c) {
            local_20c = fStack_2c;
          }
          if (local_208 <= fStack_28) {
            local_208 = fStack_28;
          }
          local_1e4 = local_1e4 + 2;
          local_1e8 = local_1e8 + 4;
          local_1e0 = local_1e0 + 4;
          pfVar5 = pfVar5 + 0xc;
        }
        else {
          FUN_00f3a8f0();
        }
      }
LAB_00f1ff7e:
      local_21c = (float)((int)local_21c + 1);
      pfVar4 = pfVar4 + 0x48;
      param_6 = local_214;
    } while ((int)local_21c < param_5);
  }
  fVar2 = *param_6;
  if (local_200 < fVar2) {
    fVar2 = local_200;
  }
  *param_6 = fVar2;
  fVar2 = param_6[1];
  if (local_1fc < fVar2) {
    fVar2 = local_1fc;
  }
  param_6[1] = fVar2;
  fVar2 = param_6[2];
  if (local_1f8 < fVar2) {
    fVar2 = local_1f8;
  }
  param_6[2] = fVar2;
  fVar2 = local_210;
  if (local_210 < param_6[4]) {
    fVar2 = param_6[4];
  }
  param_6[4] = fVar2;
  fVar2 = local_20c;
  if (local_20c < param_6[5]) {
    fVar2 = param_6[5];
  }
  param_6[5] = fVar2;
  local_218 = param_6[6];
  local_21c = local_208;
  if (local_208 < local_218) {
    local_21c = local_218;
  }
  param_6[6] = local_21c;
  *(undefined4 *)param_6[0xc] = local_1d8;
  *(undefined4 *)((int)param_6[0xd] + 0xc) = local_1d8;
  FUN_00f3a8f0();
  __security_check_cookie(local_14 ^ (uint)auStack_224);
  return;
}

// 00F25160  espEmt10::vf08  size=101  [class]
void __fastcall espEmt10::vf08(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_4;
  
  local_4 = param_1;
  FUN_00f1e9a0();
  FUN_00edfc20(param_1 + 0x3a0);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar2 = FUN_00f59ed0(1);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
  }
  *(uint *)(param_1 + 0x3a4) = uVar3;
  local_4 = param_1 + 0x3a0;
  moveChild_spu(&local_4);
  return;
}

// 00F251D0  espEmt10::preTransImpl_ppu  size=1553  [class]
undefined4 __thiscall espEmt10::preTransImpl_ppu(int param_1,float *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float10 fVar6;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  float local_68;
  float local_64;
  uint local_60;
  uint local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_30;
  uint local_24;
  
  FUN_00f3a8f0("espEmt10::preTransImpl_ppu Start\n");
  FUN_00f3a8f0("m_pDrawWork=%p\n",param_2[0xe]);
  FUN_00f3a8f0("m_pPosLock=%p\n",param_2[0xf]);
  FUN_00f3a8f0("m_pUvLock=%p\n",param_2[0x10]);
  FUN_00f3a8f0("m_pUvMaskLock=%p\n",param_2[0x11]);
  FUN_00f3a8f0("m_pColorLock=%p\n",param_2[0x12]);
  FUN_00f3a8f0("m_pIndexLock=%p\n",param_2[0x13]);
  FUN_00f3a8f0("m_PosNum=%u\n",param_2[0x14]);
  FUN_00f3a8f0("m_UvNum=%u\n",param_2[0x15]);
  FUN_00f3a8f0("m_ColorNum=%u\n",param_2[0x17]);
  FUN_00f3a8f0("m_IndexNum=%u\n",param_2[0x18]);
  FUN_00f3a8f0("ScratchAllocatableSize=%d\n",0);
  clacMulColor_spu(param_2);
  *param_2 = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  param_2[2] = 3.4028235e+38;
  param_2[3] = 1.0;
  param_2[4] = -3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  param_2[6] = -3.4028235e+38;
  param_2[7] = 1.0;
  local_5c = *(uint *)(param_1 + 0x578);
  local_60 = *(uint *)(param_1 + 0x5a8);
  local_50 = param_2[0xf];
  local_64 = param_2[0x10];
  local_40 = param_2[0x12];
  local_68 = param_2[0x13];
  local_7c = param_2[0x11];
  local_58 = param_2[0x14];
  local_48 = param_2[0x15];
  local_4c = param_2[0x17];
  local_54 = param_2[0x18];
  local_74 = *(float *)(param_1 + 0x580);
  local_a4 = 0.0;
  local_44 = 0.0;
  local_78 = 0.0;
  local_70 = 0.0;
  local_6c = 0;
  local_98 = 0.0;
  local_24 = 0;
  local_30 = 0.0;
  local_38 = 0.0;
  if (local_7c != 0.0) {
    local_38 = local_7c;
    local_30 = param_2[0x16];
  }
  fVar5 = (float)((int)local_74 - *(int *)(param_1 + 0x588));
  uVar2 = *(int *)(param_1 + 0x588) * 0x120 + local_5c;
  if ((uint)local_74 < (uint)fVar5) {
    FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",fVar5,local_74);
    uVar2 = 0;
    fVar5 = local_98;
  }
  else if ((uVar2 & 0xf) != 0) {
    FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",uVar2);
    uVar2 = 0;
    fVar5 = local_98;
  }
  local_98 = fVar5;
  fVar5 = (float)(*(int *)(param_1 + 0x580) - *(int *)(param_1 + 0x588));
  uVar3 = *(int *)(param_1 + 0x588) * 0x30 + local_60;
  if ((uint)local_74 < (uint)fVar5) {
    FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",fVar5,local_74);
    uVar3 = local_24;
  }
  else if ((uVar3 & 0xf) != 0) {
    FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",uVar3);
    uVar3 = local_24;
  }
  local_24 = uVar3;
  iVar4 = calcPosBuffer_spu(local_50,local_58,uVar2,local_98,param_2);
  if (0 < iVar4) {
    calcUvBuffer_spu(local_64,local_48,uVar2,local_98,param_2,local_24);
    calcColorBuffer_spu(local_40,local_4c,uVar2,local_98,param_2);
    calcIndexBuffer_spu(local_68,local_54,uVar2,local_98,param_2);
    if (local_7c != 0.0) {
      calcUvMaskBuffer_spu(local_38,local_30,uVar2,local_98,param_2);
    }
    local_6c = iVar4 * 3;
    local_a4 = (float)(iVar4 * 2);
    *(int *)((int)param_2[8] + 0xd0) = *(int *)((int)param_2[8] + 0xd0) + iVar4;
    local_78 = local_a4;
    local_70 = local_a4;
    local_44 = local_a4;
  }
  if (*(int *)(param_1 + 0x58c) != 0) {
    fVar5 = *(float *)(param_1 + 0x588);
    if ((uint)local_74 < (uint)fVar5) {
      FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",fVar5,local_74);
      uVar3 = uVar2;
      fVar5 = local_98;
    }
    else {
      uVar3 = local_5c;
      if ((local_5c & 0xf) != 0) {
        FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",local_5c);
        uVar3 = uVar2;
        fVar5 = local_98;
      }
    }
    local_98 = fVar5;
    if ((uint)local_74 < (uint)*(float *)(param_1 + 0x588)) {
      FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",*(float *)(param_1 + 0x588),
                   local_74);
    }
    else if ((local_60 & 0xf) == 0) {
      local_24 = local_60;
    }
    else {
      FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",local_60);
    }
    iVar4 = calcPosBuffer_spu((int)local_50 + (int)local_a4 * 0xc,(int)local_58 - (int)local_a4,
                              uVar3,local_98,param_2);
    if (0 < iVar4) {
      calcUvBuffer_spu((int)local_64 + (int)local_44 * 8,(int)local_48 - (int)local_44,uVar3,
                       local_98,param_2,local_24);
      calcColorBuffer_spu((int)local_70 * 0x10 + (int)local_40,(int)local_4c - (int)local_70,uVar3,
                          local_98,param_2);
      calcIndexBuffer_spu((int)local_68 + local_6c * 2,(int)local_54 - local_6c,uVar3,local_98,
                          param_2);
      if (local_7c != 0.0) {
        calcUvMaskBuffer_spu
                  ((int)local_38 + (int)local_78 * 8,(int)local_30 - (int)local_78,uVar3,local_98,
                   param_2);
      }
      *(int *)((int)param_2[8] + 0xd0) = *(int *)((int)param_2[8] + 0xd0) + iVar4;
    }
  }
  if (*(int *)((int)param_2[8] + 0xd0) != 0) {
    *(float *)(param_1 + 0x130) = param_2[4] + *param_2;
    *(float *)(param_1 + 0x134) = param_2[1] + param_2[5];
    *(float *)(param_1 + 0x138) = param_2[2] + param_2[6];
    *(float *)(param_1 + 0x13c) = param_2[3] + param_2[7];
    *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
    *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
    *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
    *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
    local_a0 = *param_2 - param_2[4];
    local_9c = param_2[1] - param_2[5];
    local_98 = param_2[2] - param_2[6];
    fVar6 = (float10)FUN_00fdef70();
    *(float *)(param_1 + 300) = (float)fVar6 * 0.5;
    fVar5 = param_2[8];
    *(undefined4 *)((int)fVar5 + 0x78) = 0;
    *(undefined4 *)((int)fVar5 + 0x74) = 0;
    *(undefined4 *)((int)fVar5 + 0x70) = 0;
    *(undefined4 *)((int)fVar5 + 0x6c) = 0;
    *(undefined4 *)((int)fVar5 + 100) = 0;
    *(undefined4 *)((int)fVar5 + 0x60) = 0;
    *(undefined4 *)((int)fVar5 + 0x5c) = 0;
    *(undefined4 *)((int)fVar5 + 0x58) = 0;
    *(undefined4 *)((int)fVar5 + 0x50) = 0;
    *(undefined4 *)((int)fVar5 + 0x4c) = 0;
    *(undefined4 *)((int)fVar5 + 0x48) = 0;
    *(undefined4 *)((int)fVar5 + 0x44) = 0;
    *(undefined4 *)((int)fVar5 + 0x7c) = 0x3f800000;
    *(undefined4 *)((int)fVar5 + 0x68) = 0x3f800000;
    *(undefined4 *)((int)fVar5 + 0x54) = 0x3f800000;
    *(undefined4 *)((int)fVar5 + 0x40) = 0x3f800000;
    uVar1 = *(undefined4 *)((int)param_2[0xc] + 0x18);
    fVar5 = param_2[8];
    local_7c = param_2[0xb];
    local_78 = param_2[0xd];
    FUN_00f45d50();
    local_98 = local_78;
    local_94 = local_7c;
    local_a0 = fVar5;
    local_9c = (float)param_1;
    local_90 = uVar1;
    FUN_00f49500(&local_a0);
    iVar4 = FUN_00edc9e0(param_2[8],param_2[0xe],param_2[0xd],param_2[10],(int)param_2[0xb] + 0x40);
    if (iVar4 != 0) {
      FUN_00f3a8f0("espEmt10::preTransImpl_ppu End (TRUE)\n");
      return 1;
    }
  }
  FUN_00f3a8f0("espEmt10::preTransImpl_ppu End (FALSE)\n");
  return 0;
}

// 00F257F0  FUN_00f257f0  size=4182  [callgraph]
undefined4 __thiscall FUN_00f257f0(int param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float10 fVar20;
  uint local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_118;
  int local_114;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_f8;
  int local_d0;
  int local_98;
  uint local_90;
  int local_80;
  uint local_78;
  int local_68;
  uint local_60;
  int local_50;
  uint local_48;
  int local_38;
  uint local_30;
  uint local_24;
  
  FUN_00f3a8f0();
  FUN_00f3a8f0("m_pDrawWork=%p\n",param_2[0xe]);
  FUN_00f3a8f0("m_pPosLock=%p\n",param_2[0xf]);
  FUN_00f3a8f0("m_pUvLock=%p\n",param_2[0x10]);
  FUN_00f3a8f0("m_pUvMaskLock=%p\n",param_2[0x11]);
  FUN_00f3a8f0("m_pColorLock=%p\n",param_2[0x12]);
  FUN_00f3a8f0("m_pIndexLock=%p\n",param_2[0x13]);
  FUN_00f3a8f0("m_PosNum=%u\n",param_2[0x14]);
  FUN_00f3a8f0("m_UvNum=%u\n",param_2[0x15]);
  FUN_00f3a8f0("m_ColorNum=%u\n",param_2[0x17]);
  FUN_00f3a8f0("m_IndexNum=%u\n",param_2[0x18]);
  FUN_00f3a8f0("ScratchAllocatableSize=%d\n",0);
  espEmt10::clacMulColor_spu();
  *param_2 = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  param_2[2] = 3.4028235e+38;
  param_2[3] = 1.0;
  param_2[4] = -3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  param_2[6] = -3.4028235e+38;
  param_2[7] = 1.0;
  local_108 = *(uint *)(param_1 + 0x578);
  uVar1 = *(uint *)(param_1 + 0x5a8);
  fVar2 = param_2[0xf];
  fVar3 = param_2[0x10];
  fVar4 = param_2[0x11];
  fVar5 = param_2[0x12];
  fVar6 = param_2[0x13];
  fVar7 = param_2[0x14];
  fVar8 = param_2[0x15];
  fVar9 = param_2[0x16];
  fVar10 = param_2[0x17];
  fVar11 = param_2[0x18];
  local_110 = 0;
  local_118 = 0;
  local_d0 = 0;
  local_120 = 0;
  local_114 = 0;
  local_130 = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_134 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_24 = 0;
  local_90 = 0;
  local_98 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_60 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  FUN_00f3a8f0();
  uVar15 = *(uint *)(param_1 + 0x588);
  uVar16 = *(uint *)(param_1 + 0x580);
  if (uVar15 < uVar16) {
    local_104 = uVar15 * 0x30 + uVar1;
    uVar19 = uVar15 * 0x120 + local_108;
    do {
      uVar17 = uVar16 - uVar15;
      local_138 = uVar17;
      if (0x38 < uVar17) {
        local_138 = 0x38;
      }
      iVar14 = local_138 * 4;
      if (local_138 < 0x39) {
        uVar13 = uVar19;
        uVar18 = local_138;
        if ((uVar19 & 0xf) != 0) {
          FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",uVar19);
          uVar13 = local_100;
          uVar18 = local_f8;
        }
      }
      else {
        FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",local_138,0x38);
        uVar13 = local_100;
        uVar18 = local_f8;
      }
      local_f8 = uVar18;
      local_100 = uVar13;
      if (uVar1 != 0) {
        if (local_138 < 0x39) {
          if ((local_104 & 0xf) == 0) {
            local_24 = local_104;
          }
          else {
            FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",local_104);
          }
        }
        else {
          FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",local_138,0x38);
        }
      }
      if (local_90 <= (uint)(iVar14 + local_130)) {
        uVar13 = (int)fVar7 - local_110;
        if (uVar13 < 0xb) {
          uVar13 = 0xb;
        }
        else if (0x555 < uVar13) {
          uVar13 = 0x555;
        }
        uVar18 = uVar17 * 4;
        if (uVar18 < 0xb) {
          uVar13 = 0xb;
LAB_00f25b20:
          local_98 = (int)fVar2 + local_110 * 0xc;
          local_90 = uVar13;
        }
        else {
          if (uVar18 <= uVar13) {
            uVar13 = uVar18;
          }
          if (uVar13 < 0x556) goto LAB_00f25b20;
          FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar13,0x555);
        }
        local_130 = 0;
      }
      if (local_48 <= (uint)(iVar14 + local_124)) {
        uVar13 = (int)fVar8 - local_118;
        if (uVar13 < 0x11) {
          uVar13 = 0x11;
        }
        else if (0x800 < uVar13) {
          uVar13 = 0x800;
        }
        uVar18 = uVar17 * 4;
        if (uVar18 < 0x11) {
          uVar13 = 0x11;
LAB_00f25bac:
          local_50 = (int)fVar3 + local_118 * 8;
          local_48 = uVar13;
        }
        else {
          if (uVar18 <= uVar13) {
            uVar13 = uVar18;
          }
          if (uVar13 < 0x801) goto LAB_00f25bac;
          FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar13,0x800);
        }
        local_124 = 0;
      }
      if (local_60 <= (uint)(iVar14 + local_12c)) {
        uVar13 = (int)fVar10 - local_120;
        if (uVar13 < 9) {
          uVar13 = 9;
        }
        else if (0x400 < uVar13) {
          uVar13 = 0x400;
        }
        uVar18 = uVar17 * 4;
        if (uVar18 < 9) {
          uVar13 = 9;
LAB_00f25c33:
          local_68 = local_120 * 0x10 + (int)fVar5;
          local_60 = uVar13;
        }
        else {
          if (uVar18 <= uVar13) {
            uVar13 = uVar18;
          }
          if (uVar13 < 0x401) goto LAB_00f25c33;
          FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar13,0x400);
        }
        local_12c = 0;
      }
      if (local_78 <= local_138 * 6 + local_134) {
        uVar13 = (int)fVar11 - local_114;
        if (uVar13 < 0x41) {
          uVar18 = 0x41;
        }
        else {
          uVar18 = 0x2000;
          if (uVar13 < 0x2001) {
            uVar18 = uVar13;
          }
        }
        uVar13 = uVar17 * 6;
        if (uVar13 < 0x41) {
          uVar13 = 0x41;
LAB_00f25cce:
          local_80 = (int)fVar6 + local_114 * 2;
          local_78 = uVar13;
        }
        else {
          if (uVar18 < uVar13) {
            uVar13 = uVar18;
          }
          if (uVar13 < 0x2001) goto LAB_00f25cce;
          FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar13,0x2000);
        }
        local_134 = 0;
      }
      if ((fVar4 != 0.0) && (local_30 <= (uint)(iVar14 + local_128))) {
        uVar13 = (int)fVar9 - local_d0;
        if (uVar13 < 0x11) {
          uVar13 = 0x11;
        }
        else if (0x800 < uVar13) {
          uVar13 = 0x800;
        }
        uVar18 = uVar17 * 4;
        if (uVar18 < 0x11) {
          uVar13 = 0x11;
LAB_00f25d69:
          local_38 = (int)fVar4 + local_d0 * 8;
          local_30 = uVar13;
        }
        else {
          if (uVar18 <= uVar13) {
            uVar13 = uVar18;
          }
          if (uVar13 < 0x801) goto LAB_00f25d69;
          FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar13,0x800);
        }
        local_128 = 0;
      }
      FUN_00f3a8f0();
      FUN_00f3a8f0("[%d]\n",uVar15);
      FUN_00f3a8f0("child_rest=%d\n",uVar17);
      FUN_00f3a8f0("child_num=%d\n",local_138);
      FUN_00f3a8f0("pos_num=%d\n",iVar14);
      FUN_00f3a8f0("uv_num=%d\n",iVar14);
      FUN_00f3a8f0("color_num=%d\n",iVar14);
      FUN_00f3a8f0("index_num=%d\n",local_138 * 6);
      FUN_00f3a8f0("pos_index_ppu=%d/%d\n",local_110,fVar7);
      FUN_00f3a8f0("uv_index_ppu=%d/%d\n",local_118,fVar8);
      FUN_00f3a8f0("color_index_ppu=%d/%d\n",local_120,fVar10);
      FUN_00f3a8f0("index_index_ppu=%d/%d\n",local_114,fVar11);
      FUN_00f3a8f0("----------------------------\n");
      FUN_00f3a8f0("cnt=%d\n",(double)*(float *)(local_100 + 0xe8));
      FUN_00f3a8f0("spd.y=%5.2f\n",(double)*(float *)(local_100 + 0x84));
      FUN_00f3a8f0("----------------------------\n");
      FUN_00f3a8f0("m_pDrawWork->m_PrimNum=%d\n",*(undefined4 *)((int)param_2[8] + 0xd0));
      FUN_00f3a8f0("============================\n");
      iVar14 = espEmt10::calcPosBuffer_spu
                         (local_98 + local_130 * 0xc,local_90 - local_130,local_100,local_f8,param_2
                         );
      if (iVar14 != 0) {
        espEmt10::calcColorBuffer_spu
                  (local_12c * 0x10 + local_68,local_60 - local_12c,local_100,local_f8,param_2);
        espEmt10::calcIndexBuffer_spu
                  (local_80 + local_134 * 2,local_78 - local_134,local_100,local_f8,param_2);
        if (fVar4 != 0.0) {
          espEmt10::calcUvMaskBuffer_spu
                    (local_38 + local_128 * 8,local_30 - local_128,local_100,local_f8,param_2);
        }
        espEmt10::calcUvBuffer_spu
                  (local_50 + local_124 * 8,local_48 - local_124,local_100,local_f8,param_2,local_24
                  );
        iVar12 = iVar14 * 2;
        local_110 = local_110 + iVar12;
        local_130 = local_130 + iVar12;
        local_118 = local_118 + iVar12;
        local_124 = local_124 + iVar12;
        local_d0 = local_d0 + iVar12;
        local_128 = local_128 + iVar12;
        local_120 = local_120 + iVar12;
        local_12c = local_12c + iVar12;
        local_114 = local_114 + iVar14 * 3;
        local_134 = local_134 + iVar14 * 3;
        *(int *)((int)param_2[8] + 0xd0) = *(int *)((int)param_2[8] + 0xd0) + iVar14;
      }
      uVar19 = uVar19 + 0x3f00;
      local_104 = local_104 + 0xa80;
      uVar15 = uVar15 + 0x38;
    } while (uVar15 < uVar16);
  }
  if (*(int *)(param_1 + 0x58c) != 0) {
    FUN_00f3a8f0();
    uVar15 = *(uint *)(param_1 + 0x588);
    local_104 = 0;
    local_10c = uVar1;
    if (uVar15 != 0) {
      do {
        uVar19 = uVar15 - local_104;
        uVar16 = uVar19;
        if (0x38 < uVar19) {
          uVar16 = 0x38;
        }
        iVar14 = uVar16 * 4;
        if (uVar16 < 0x39) {
          uVar17 = local_108;
          uVar13 = uVar16;
          if ((local_108 & 0xf) != 0) {
            FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",local_108);
            uVar17 = local_100;
            uVar13 = local_f8;
          }
        }
        else {
          FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",uVar16,0x38);
          uVar17 = local_100;
          uVar13 = local_f8;
        }
        local_f8 = uVar13;
        local_100 = uVar17;
        if (uVar1 != 0) {
          if (uVar16 < 0x39) {
            if ((local_10c & 0xf) == 0) {
              local_24 = local_10c;
            }
            else {
              FUN_00dd5650("DmaPointerProxy16: not 16 byte align [%p]",local_10c);
            }
          }
          else {
            FUN_00dd5650("DmaPointerProxy16: capacity overflow [%d/%d]",uVar16,0x38);
          }
        }
        if (local_90 <= (uint)(iVar14 + local_130)) {
          uVar17 = (int)fVar7 - local_110;
          if (uVar17 < 0xb) {
            uVar17 = 0xb;
          }
          else if (0x555 < uVar17) {
            uVar17 = 0x555;
          }
          uVar13 = uVar19 * 4;
          if (uVar13 < 0xb) {
            uVar17 = 0xb;
LAB_00f26174:
            local_98 = (int)fVar2 + local_110 * 0xc;
            local_90 = uVar17;
          }
          else {
            if (uVar13 <= uVar17) {
              uVar17 = uVar13;
            }
            if (uVar17 < 0x556) goto LAB_00f26174;
            FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar17,0x555);
          }
          local_130 = 0;
        }
        if (local_48 <= (uint)(iVar14 + local_124)) {
          uVar17 = (int)fVar8 - local_118;
          if (uVar17 < 0x11) {
            uVar17 = 0x11;
          }
          else if (0x800 < uVar17) {
            uVar17 = 0x800;
          }
          uVar13 = uVar19 * 4;
          if (uVar13 < 0x11) {
            uVar17 = 0x11;
LAB_00f26200:
            local_50 = (int)fVar3 + local_118 * 8;
            local_48 = uVar17;
          }
          else {
            if (uVar13 <= uVar17) {
              uVar17 = uVar13;
            }
            if (uVar17 < 0x801) goto LAB_00f26200;
            FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar17,0x800);
          }
          local_124 = 0;
        }
        if (local_60 <= (uint)(iVar14 + local_12c)) {
          uVar17 = (int)fVar10 - local_120;
          if (uVar17 < 9) {
            uVar17 = 9;
          }
          else if (0x400 < uVar17) {
            uVar17 = 0x400;
          }
          uVar13 = uVar19 * 4;
          if (uVar13 < 9) {
            uVar13 = 9;
LAB_00f26289:
            local_68 = local_120 * 0x10 + (int)fVar5;
            local_60 = uVar13;
          }
          else {
            if (uVar17 < uVar13) {
              uVar13 = uVar17;
            }
            if (uVar13 < 0x401) goto LAB_00f26289;
            FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar13,0x400);
          }
          local_12c = 0;
        }
        if (local_78 <= uVar16 * 6 + local_134) {
          uVar17 = (int)fVar11 - local_114;
          if (uVar17 < 0x41) {
            uVar13 = 0x41;
          }
          else {
            uVar13 = 0x2000;
            if (uVar17 < 0x2001) {
              uVar13 = uVar17;
            }
          }
          uVar17 = uVar19 * 6;
          if (uVar17 < 0x41) {
            uVar17 = 0x41;
LAB_00f2631c:
            local_80 = (int)fVar6 + local_114 * 2;
            local_78 = uVar17;
          }
          else {
            if (uVar13 < uVar17) {
              uVar17 = uVar13;
            }
            if (uVar17 < 0x2001) goto LAB_00f2631c;
            FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar17,0x2000);
          }
          local_134 = 0;
        }
        if ((fVar4 != 0.0) && (local_30 <= (uint)(iVar14 + local_128))) {
          uVar17 = (int)fVar9 - local_d0;
          if (uVar17 < 0x11) {
            uVar17 = 0x11;
          }
          else if (0x800 < uVar17) {
            uVar17 = 0x800;
          }
          uVar13 = uVar19 * 4;
          if (uVar13 < 0x11) {
            uVar17 = 0x11;
LAB_00f263b7:
            local_38 = (int)fVar4 + local_d0 * 8;
            local_30 = uVar17;
          }
          else {
            if (uVar13 <= uVar17) {
              uVar17 = uVar13;
            }
            if (uVar17 < 0x801) goto LAB_00f263b7;
            FUN_00dd5650("DmaPointerProxy: capacity overflow [%d/%d]",uVar17,0x800);
          }
          local_128 = 0;
        }
        FUN_00f3a8f0();
        FUN_00f3a8f0("[%d]\n",local_104);
        FUN_00f3a8f0("child_rest=%d\n",uVar19);
        FUN_00f3a8f0("child_num=%d\n",uVar16);
        FUN_00f3a8f0("pos_num=%d\n",iVar14);
        FUN_00f3a8f0("uv_num=%d\n",iVar14);
        FUN_00f3a8f0("color_num=%d\n",iVar14);
        FUN_00f3a8f0("index_num=%d\n",uVar16 * 6);
        FUN_00f3a8f0("pos_index_ppu=%d/%d\n",local_110,fVar7);
        FUN_00f3a8f0("uv_index_ppu=%d/%d\n",local_118,fVar8);
        FUN_00f3a8f0("color_index_ppu=%d/%d\n",local_120,fVar10);
        FUN_00f3a8f0("index_index_ppu=%d/%d\n",local_114,fVar11);
        FUN_00f3a8f0("----------------------------\n");
        FUN_00f3a8f0("cnt=%d\n",(double)*(float *)(local_100 + 0xe8));
        FUN_00f3a8f0("spd.y=%5.2f\n",(double)*(float *)(local_100 + 0x84));
        FUN_00f3a8f0("----------------------------\n");
        FUN_00f3a8f0("m_pDrawWork->m_PrimNum=%d\n",*(undefined4 *)((int)param_2[8] + 0xd0));
        FUN_00f3a8f0("============================\n");
        iVar14 = espEmt10::calcPosBuffer_spu
                           (local_98 + local_130 * 0xc,local_90 - local_130,local_100,local_f8,
                            param_2);
        if (iVar14 != 0) {
          espEmt10::calcColorBuffer_spu
                    (local_12c * 0x10 + local_68,local_60 - local_12c,local_100,local_f8,param_2);
          espEmt10::calcIndexBuffer_spu
                    (local_80 + local_134 * 2,local_78 - local_134,local_100,local_f8,param_2);
          if (fVar4 != 0.0) {
            espEmt10::calcUvMaskBuffer_spu
                      (local_38 + local_128 * 8,local_30 - local_128,local_100,local_f8,param_2);
          }
          espEmt10::calcUvBuffer_spu
                    (local_50 + local_124 * 8,local_48 - local_124,local_100,local_f8,param_2,
                     local_24);
          iVar12 = iVar14 * 2;
          local_110 = local_110 + iVar12;
          local_130 = local_130 + iVar12;
          local_118 = local_118 + iVar12;
          local_124 = local_124 + iVar12;
          local_d0 = local_d0 + iVar12;
          local_128 = local_128 + iVar12;
          local_120 = local_120 + iVar12;
          local_12c = local_12c + iVar12;
          local_114 = local_114 + iVar14 * 3;
          local_134 = local_134 + iVar14 * 3;
          *(int *)((int)param_2[8] + 0xd0) = *(int *)((int)param_2[8] + 0xd0) + iVar14;
        }
        local_108 = local_108 + 0x3f00;
        local_10c = local_10c + 0xa80;
        local_104 = local_104 + 0x38;
      } while (local_104 < uVar15);
    }
  }
  FUN_00f3a8f0();
  if (*(int *)((int)param_2[8] + 0xd0) != 0) {
    *(float *)(param_1 + 0x130) = param_2[4] + *param_2;
    *(float *)(param_1 + 0x134) = param_2[1] + param_2[5];
    *(float *)(param_1 + 0x138) = param_2[6] + param_2[2];
    *(float *)(param_1 + 0x13c) = param_2[3] + param_2[7];
    *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
    *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
    *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
    *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
    fVar20 = (float10)FUN_00fdef70();
    *(float *)(param_1 + 300) = (float)fVar20 * 0.5;
    fVar2 = param_2[8];
    *(undefined4 *)((int)fVar2 + 0x78) = 0;
    *(undefined4 *)((int)fVar2 + 0x74) = 0;
    *(undefined4 *)((int)fVar2 + 0x70) = 0;
    *(undefined4 *)((int)fVar2 + 0x6c) = 0;
    *(undefined4 *)((int)fVar2 + 100) = 0;
    *(undefined4 *)((int)fVar2 + 0x60) = 0;
    *(undefined4 *)((int)fVar2 + 0x5c) = 0;
    *(undefined4 *)((int)fVar2 + 0x58) = 0;
    *(undefined4 *)((int)fVar2 + 0x50) = 0;
    *(undefined4 *)((int)fVar2 + 0x4c) = 0;
    *(undefined4 *)((int)fVar2 + 0x48) = 0;
    *(undefined4 *)((int)fVar2 + 0x44) = 0;
    *(undefined4 *)((int)fVar2 + 0x7c) = 0x3f800000;
    *(undefined4 *)((int)fVar2 + 0x68) = 0x3f800000;
    *(undefined4 *)((int)fVar2 + 0x54) = 0x3f800000;
    *(undefined4 *)((int)fVar2 + 0x40) = 0x3f800000;
    FUN_00f45d50();
    FUN_00f49500();
    iVar14 = FUN_00edc9e0(param_2[8],param_2[0xe],param_2[0xd],param_2[10],(int)param_2[0xb] + 0x40)
    ;
    if (iVar14 != 0) {
      FUN_00f3a8f0();
      return 1;
    }
  }
  FUN_00f3a8f0();
  return 0;
}

// 00F26850  FUN_00f26850  size=752  [callgraph]
undefined4 __thiscall FUN_00f26850(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (((*(uint *)(param_1 + 0x3c) & 0x80000000) != 0) &&
     ((((sVar3 = *(short *)(param_2 + 0x2c), 9 < sVar3 && (sVar3 < 0xd)) || (sVar3 == 0x14)) &&
      (sVar3 != 0x14)))) {
    FUN_009cca90(param_1,&DAT_016da08c);
    return 0;
  }
  cVar2 = *(char *)(param_2 + 0x25);
  *(char *)(param_1 + 0x440) = cVar2;
  if ((((cVar2 == '\x03') || (cVar2 == '\x06')) || (cVar2 == '\n')) ||
     ((cVar2 == '\f' || (cVar2 == '\x0f')))) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
  }
  *(undefined4 *)(param_1 + 0x3fc) = 1;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    FUN_00f5e080(param_1);
  }
  if ((0xfd < *(ushort *)(param_2 + 4)) && (*(ushort *)(param_2 + 4) < 0x100)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
  }
  if (*(short *)(param_2 + 4) == 0xfe) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x800000;
  }
  if (*(ushort *)(param_2 + 4) - 0xfc < 0x24) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x200000;
  }
  iVar6 = FUN_009cdce0(*(undefined2 *)(param_1 + 0x4c));
  if (iVar6 == 0) goto LAB_00f26ae7;
  piVar1 = (int *)(param_1 + 0x420);
  if ((*(uint *)(param_1 + 0x38) & 0x200000) == 0) {
    iVar6 = FUN_00f20580(*(undefined2 *)(param_2 + 4),piVar1,*(undefined4 *)(param_1 + 100));
    if (iVar6 == 0) {
      FUN_009cca90(param_1,&DAT_016da294,*(undefined2 *)(param_2 + 4));
      return 0;
    }
  }
  else {
    *piVar1 = 0;
    if ((((*(short *)(param_1 + 0x428) == 5) || (*(short *)(param_1 + 0x428) == 7)) &&
        (0xfd < *(ushort *)(param_2 + 4))) && (*(ushort *)(param_2 + 4) < 0x100)) {
      FUN_009cca90(param_1,&DAT_016da214);
      return 0;
    }
  }
  if ((*(uint *)(param_1 + 0x38) & 0x8000000) == 0) {
    if ((*(ushort *)(param_2 + 4) < 0xfe) || (0xff < *(ushort *)(param_2 + 4))) {
      *(undefined4 *)(param_1 + 0x424) = 0;
    }
    else {
      if (*(int *)(param_1 + 100) != 0) {
        iVar6 = FUN_00f4a2a0(0xf9,(int *)(param_1 + 0x424));
        if (iVar6 != 0) goto LAB_00f26ab2;
      }
      iVar6 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
              cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
      if (*(int *)(iVar6 + 0x40c) == 0) {
        FUN_009cca90(param_1,&DAT_016da360,*(undefined2 *)(param_2 + 6));
        return 0;
      }
      *(int *)(param_1 + 0x424) = *(int *)(iVar6 + 0x40c);
    }
  }
  else {
    uVar4 = *(ushort *)(param_2 + 6);
    if (((uVar4 != 0xfc) && (uVar4 != 0xfd)) && (uVar4 < 0x100)) {
      iVar6 = FUN_00f20580(uVar4,(int *)(param_1 + 0x424),*(undefined4 *)(param_1 + 100));
      if (iVar6 == 0) {
        FUN_009cca90(param_1,&DAT_016da2fc,*(undefined2 *)(param_2 + 6));
        return 0;
      }
      if (*(uint *)(*(int *)(param_1 + 0x424) + 0x14) <= (uint)*(byte *)(param_2 + 0x26)) {
        FUN_009cca90(param_1,&DAT_016da328,*(undefined2 *)(param_2 + 6),
                     (uint)*(byte *)(param_2 + 0x26));
        return 0;
      }
    }
  }
LAB_00f26ab2:
  if (*piVar1 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(uint *)(*piVar1 + 0x14);
  }
  if ((((*(uint *)(param_1 + 0x38) & 0x4000000) != 0) && (*(int *)(param_1 + 0x424) != 0)) &&
     (uVar5 = *(uint *)(*(int *)(param_1 + 0x424) + 0x14), uVar7 < uVar5)) {
    uVar7 = uVar5;
  }
  FUN_00ed4ff0(param_2,uVar7);
LAB_00f26ae7:
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    iVar6 = (int)*(short *)(param_2 + 0x2c);
    if (((iVar6 < 0) || (7 < iVar6)) && (((iVar6 < 10 || (0xc < iVar6)) && (0x14 < iVar6)))) {
      FUN_009cca90(param_1,&DAT_016da3a0,iVar6);
      return 0;
    }
    if (((9 < iVar6) && (iVar6 < 0xd)) || (iVar6 == 0x14)) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40;
    }
  }
  return 1;
}

// 00F2C7A0  espEmt10::preTrans  size=1618  [class]
undefined4 __thiscall
espEmt10::preTrans(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  void *_Dst;
  short *psVar11;
  ushort *puVar12;
  uint uVar13;
  short *psVar14;
  uint uVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  if (*(undefined4 **)(param_2 + 4) == (undefined4 *)0x0) {
    psVar14 = (short *)0x0;
  }
  else {
    psVar14 = (short *)**(undefined4 **)(param_2 + 4);
    if ((short *)((int)psVar14 + 0xfU & 0xfffffff0) != psVar14) {
      uVar7 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
  }
  sVar2 = *psVar14;
  if ((sVar2 == 0) || (sVar2 == 0xd)) {
    iVar5 = FUN_00f0a630(param_2,param_3,param_4);
    if (iVar5 != 0) {
      if ((*(int *)(param_1 + 0x58) != 0) &&
         (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar6 != (uint *)0x0)) {
        uVar8 = *puVar6;
        if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
          uVar7 = FUN_00f59ed0(3);
          FUN_00dd5650(&DAT_016597b4,uVar7);
        }
        if (uVar8 != 0) {
          if (0 < *(short *)(uVar8 + 0x2c)) {
            FUN_009cca90(param_1,&DAT_016dd778);
            return 0;
          }
          FUN_00f26850(uVar8);
        }
      }
      *(undefined2 *)(param_1 + 0x40e) = 0;
      *(undefined4 *)(param_1 + 0x590) = 0;
      *(undefined4 *)(param_1 + 0x594) = 0;
      *(undefined4 *)(param_1 + 0x598) = 0;
      *(undefined4 *)(param_1 + 0x59c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x5a4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x5a0) = 0;
      if ((*(int *)(param_1 + 0x58) != 0) &&
         (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar6 != (uint *)0x0)) {
        uVar8 = *puVar6;
        if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
          uVar7 = FUN_00f59ed0(1);
          FUN_00dd5650(&DAT_016597b4,uVar7);
        }
        if (uVar8 != 0) {
          *(undefined1 *)(param_1 + 0x40e) = *(undefined1 *)(uVar8 + 0x152);
          *(undefined1 *)(param_1 + 0x40f) = *(undefined1 *)(uVar8 + 0x153);
          *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(uVar8 + 0x154);
          *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(uVar8 + 0x158);
          *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(uVar8 + 0x15c);
          *(undefined4 *)(param_1 + 0x59c) = 0x3f800000;
        }
      }
      if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
        uVar8 = **(uint **)(param_1 + 0x58);
        if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
          uVar7 = FUN_00f59ed0(0);
          FUN_00dd5650(&DAT_016597b4,uVar7);
        }
        if ((((uVar8 != 0) &&
             (*(uint *)(param_1 + 0x5a0) = (uint)*(ushort *)(uVar8 + 2),
             *(int *)(param_1 + 0x50) != 0)) && ((*(uint *)(uVar8 + 8) & 0x40000000) == 0)) &&
           (((*(uint *)(uVar8 + 4) & 0x100000) == 0 && ((*(uint *)(uVar8 + 4) & 1) == 0)))) {
          fVar16 = (float10)FUN_00fdef70();
          fVar17 = (float10)FUN_00fdef70();
          fVar18 = (float10)FUN_00fdef70();
          *(float *)(param_1 + 0x5a4) = ((float)fVar17 + (float)fVar16 + (float)fVar18) * 0.33333334
          ;
        }
      }
      FUN_00efd190(param_1 + 0x3a0);
      if ((*(int *)(param_1 + 0x58) == 0) ||
         (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar6 == (uint *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar6;
        if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
          uVar7 = FUN_00f59ed0(1);
          FUN_00dd5650(&DAT_016597b4,uVar7);
        }
      }
      *(uint *)(param_1 + 0x3a4) = uVar8;
      if ((*(int *)(param_1 + 0x58) == 0) ||
         (puVar9 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x20), puVar9 == (undefined4 *)0x0)) {
        puVar12 = (ushort *)0x0;
      }
      else {
        puVar12 = (ushort *)*puVar9;
        if ((ushort *)((int)puVar12 + 0xfU & 0xfffffff0) != puVar12) {
          uVar7 = FUN_00f59ed0(2);
          FUN_00dd5650(&DAT_016597b4,uVar7);
        }
      }
      uVar3 = puVar12[5];
      uVar8 = (uint)uVar3;
      if ((uVar3 == 0) && (psVar14[1] == 0)) {
        FUN_009cca90(param_1,&DAT_016dd7a8);
        return 0;
      }
      if ('\0' < (char)puVar12[7]) {
        FUN_009cca90(param_1,&DAT_016dd7e8);
        return 0;
      }
      if (uVar3 == 0) {
        uVar8 = (uint)(ushort)psVar14[1];
      }
      else {
        uVar3 = psVar14[1];
        if ((uVar3 != 0) && (uVar3 < uVar8)) {
          uVar8 = (uint)uVar3;
        }
      }
      if (uVar8 != 0) {
        iVar5 = (uint)*(byte *)((int)puVar12 + 0xf) + (uint)puVar12[1];
        if (puVar12[3] != 0) {
          iVar5 = iVar5 * (uint)puVar12[3];
        }
        uVar15 = (uint)*puVar12;
        if (uVar15 < 2) {
          uVar15 = 1;
        }
        uVar13 = (byte)puVar12[8] + 1;
        if (uVar13 < 2) {
          uVar13 = 1;
        }
        if (iVar5 == 0) {
          iVar5 = uVar8 + 1;
        }
        else {
          iVar5 = (int)((longlong)(ulonglong)uVar8 / (longlong)iVar5) + 2;
        }
        *(int *)(param_1 + 0x580) = iVar5;
        iVar5 = iVar5 * uVar13 * uVar15;
        *(int *)(param_1 + 0x580) = iVar5;
        if (0 < iVar5) {
          bVar4 = false;
          if ((*psVar14 == 0xd) && (iVar5 = FUN_009d4ac0(), iVar5 != 0)) {
            bVar4 = true;
          }
          iVar5 = *(int *)(param_1 + 0x580);
          *(int *)(param_1 + 0x588) = iVar5;
          *(undefined4 *)(param_1 + 0x58c) = 0;
          *(undefined4 *)(param_1 + 0x584) = 0;
          *(int *)(param_1 + 0x57c) = iVar5 * 0x120;
          if (bVar4) {
            iVar10 = iVar5 * 0x30;
          }
          else {
            iVar10 = 0;
          }
          *(int *)(param_1 + 0x5ac) = iVar10;
          uVar8 = iVar5 * 0x120 + 0x7f + iVar10 & 0xffffff80;
          *(uint *)(param_1 + 0x574) = uVar8;
          _Dst = (void *)FUN_00dd29b0(uVar8,0x80,0,0);
          *(void **)(param_1 + 0x570) = _Dst;
          if (_Dst == (void *)0x0) {
            FUN_009cca90(param_1,&DAT_016dd840,*(undefined4 *)(param_1 + 0x574));
            return 0;
          }
          _memset(_Dst,0,*(size_t *)(param_1 + 0x574));
          *(int *)(param_1 + 0x578) = *(int *)(param_1 + 0x570);
          if (bVar4) {
            iVar5 = *(int *)(param_1 + 0x57c) + *(int *)(param_1 + 0x570);
          }
          else {
            iVar5 = 0;
          }
          *(int *)(param_1 + 0x5a8) = iVar5;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
          psVar11 = (short *)FUN_009d4b00();
          if (psVar11 != (short *)0x0) {
            if (*psVar11 == 1) {
              *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x400;
            }
            else if (*psVar11 == 2) {
              *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x600;
            }
          }
          *(undefined4 *)(param_1 + 0x488) = 0;
          *(undefined4 *)(param_1 + 0x484) = 0;
          *(undefined4 *)(param_1 + 0x480) = 0;
          *(undefined4 *)(param_1 + 0x47c) = 0;
          *(undefined4 *)(param_1 + 0x474) = 0;
          *(undefined4 *)(param_1 + 0x470) = 0;
          *(undefined4 *)(param_1 + 0x46c) = 0;
          *(undefined4 *)(param_1 + 0x468) = 0;
          *(undefined4 *)(param_1 + 0x460) = 0;
          *(undefined4 *)(param_1 + 0x45c) = 0;
          *(undefined4 *)(param_1 + 0x458) = 0;
          *(undefined4 *)(param_1 + 0x454) = 0;
          *(undefined4 *)(param_1 + 0x48c) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x478) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x464) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x450) = 0x3f800000;
          if (*psVar14 == 0xd) {
            if ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) {
              FUN_00ed5150();
              *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 4;
            }
            iVar5 = FUN_009d4a80();
            if (iVar5 != 0) {
              cVar1 = *(char *)(iVar5 + 0x10);
              if (cVar1 == '\x01') {
                *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x18;
              }
              else {
                if (cVar1 == '\x02') {
                  *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 8;
                  return 1;
                }
                if (cVar1 == '\x03') {
                  *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x10;
                  return 1;
                }
              }
            }
          }
          return 1;
        }
      }
    }
  }
  else {
    FUN_009cca90(param_1,&DAT_016dd760,sVar2);
  }
  return 0;
}

// 00F2CE00  FUN_00f2ce00  size=426  [callgraph]
void __thiscall FUN_00f2ce00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_90 [32];
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar1 = FUN_00f99ca0();
  uVar2 = FUN_00f99ca0();
  uVar3 = FUN_00f99ca0();
  uVar4 = FUN_00f99ca0();
  local_44 = FUN_00f999c0();
  local_3c = *(undefined4 *)(param_2 + 0x124);
  local_38 = *(undefined4 *)(param_2 + 0x14c);
  local_40 = *(undefined4 *)(param_2 + 0xfc);
  local_34 = *(undefined4 *)(param_2 + 0x174);
  local_30 = *(undefined4 *)(param_2 + 0x198);
  if ((*(uint *)(param_1 + 0x574) & 0xf) != 0) {
    FUN_00dd5650("EMT10:%s=0x%x","m_BufferSize",*(uint *)(param_1 + 0x574));
  }
  local_64 = *(int *)(param_1 + 0x28);
  local_68 = *(undefined4 *)(local_64 + 0x1e74);
  local_60 = param_1 + 0x3a0;
  local_5c = param_1 + 0x3c8;
  local_70 = param_2;
  local_58 = param_2;
  local_6c = param_1;
  local_54 = uVar1;
  local_50 = uVar2;
  local_4c = uVar3;
  local_48 = uVar4;
  espEmt10::preTransImpl_ppu(local_90);
  FUN_00f99d30();
  FUN_00f99d30();
  FUN_00f99d30();
  FUN_00f99d30();
  FUN_00f99a40();
  return;
}

// 00F38860  espEmt10::addOtTransList  size=456  [class]
void __fastcall espEmt10::addOtTransList(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (0 < *(int *)(param_1 + 0x584)) {
    if ((*(byte *)(param_1 + 0x55c) & 4) == 0) {
      if (DAT_01edd490 == 0) goto LAB_00f388bf;
      iVar2 = cPrimHeap::allocBuffer(0x1a0,0x20);
      if (iVar2 == 0) goto LAB_00f388bf;
      iVar2 = cEspDrawWork_Emt10_Impl::cEspDrawWork_Emt10_Impl();
    }
    else {
      if (DAT_01edd490 == 0) goto LAB_00f388bf;
      iVar2 = cPrimHeap::allocBuffer(0x1a0,0x20);
      if (iVar2 == 0) goto LAB_00f388bf;
      iVar2 = cEspDrawWork_Emt10_Impl_Mask::cEspDrawWork_Emt10_Impl_Mask();
    }
    if (iVar2 == 0) {
LAB_00f388bf:
      FUN_009cca90(param_1,&DAT_016dd908);
      return;
    }
    iVar5 = *(int *)(param_1 + 0x584);
    iVar1 = iVar5 * 4 + 0xb;
    iVar3 = FUN_00f51070(iVar2 + 0xe0,0xc,iVar1);
    if (iVar3 == 0) {
      FUN_009cca90(param_1,&DAT_016dd930,iVar1);
      return;
    }
    iVar1 = iVar5 * 4 + 0x11;
    iVar3 = FUN_00f51070(iVar2 + 0x108,8,iVar1);
    if (iVar3 == 0) {
      FUN_009cca90(param_1,&DAT_016dd948,iVar1);
      return;
    }
    iVar3 = iVar5 * 4 + 9;
    iVar4 = FUN_00f51070(iVar2 + 0x158,0x10,iVar3);
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_016dd960,iVar3);
      return;
    }
    iVar5 = iVar5 * 6 + 0x41;
    iVar3 = FUN_00f3ac60(iVar2 + 0x180,iVar5);
    if (iVar3 == 0) {
      FUN_009cca90(param_1,&DAT_016dd978,iVar5);
      return;
    }
    if ((*(byte *)(param_1 + 0x55c) & 4) != 0) {
      iVar5 = FUN_009d3a90(iVar2 + 0x130,iVar1);
      if (iVar5 == 0) {
        FUN_009cca90(param_1,&DAT_016dd998,iVar1);
        return;
      }
    }
    FUN_00edfc20(param_1 + 0x3a0);
    uVar6 = FUN_009d4a00();
    *(undefined4 *)(param_1 + 0x3a4) = uVar6;
    FUN_00edfcd0(param_1 + 0x3c8);
    uVar6 = FUN_009d4a00();
    *(undefined4 *)(param_1 + 0x3d0) = uVar6;
    FUN_00f26b40(iVar2);
    FUN_00f2ce00(iVar2);
  }
  return;
}

// 00F40570  espEmt10::vf00  size=72  [class]
undefined4 * __thiscall espEmt10::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

