// lib/havok/Source/Common/Serialize/Tagfile/Binary/hkBinaryTagfileReader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0110FA20..01110040, 2 functions

#include "types.h"

// 0110FA20  FUN_0110fa20  size=1568  [__FILE__]
int * __thiscall FUN_0110fa20(int param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  byte bVar10;
  undefined1 local_25c [524];
  int *local_50;
  int local_4c [4];
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  local_c = param_1;
  if (param_3 == (int *)0x0) {
    FUN_01445680((int)&param_3 + 3,1,1);
    local_10 = param_3._3_1_ & 1;
    piVar8 = (int *)(param_3._3_1_ >> 1 & 0x7fffffbf);
    bVar10 = 6;
    if ((int)param_3 < 0) {
      do {
        FUN_01445680(&local_5,1,1);
        bVar2 = bVar10 & 0x1f;
        bVar10 = bVar10 + 7;
        piVar8 = (int *)((uint)piVar8 | (local_5 & 0xffffff7f) << bVar2);
      } while ((char)local_5 < '\0');
    }
    param_3 = piVar8;
    if (local_10 != 0) {
      param_3 = (int *)-(int)piVar8;
    }
  }
  iVar3 = local_c;
  if (param_3 == (int *)0x5) {
    FUN_01445680((int)&param_3 + 3,1,1);
    local_10 = param_3._3_1_ & 1;
    uVar9 = param_3._3_1_ >> 1 & 0x7fffffbf;
    bVar10 = 6;
    piVar8 = param_3;
    while ((int)piVar8 < 0) {
      FUN_01445680((int)&param_4 + 3,1,1);
      bVar2 = bVar10 & 0x1f;
      bVar10 = bVar10 + 7;
      uVar9 = uVar9 | ((uint)param_4 >> 0x18 & 0x7f) << bVar2;
      piVar8 = param_4;
    }
    if (local_10 != 0) {
      uVar9 = -uVar9;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x38) + uVar9 * 4);
    *param_2 = iVar3;
    if (iVar3 != 0) {
      *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + 1;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      return param_2;
    }
  }
  else {
    if (param_3 == (int *)0x6) {
      *param_2 = 0;
      return param_2;
    }
    local_50 = param_4;
    if (param_4 == (int *)0x0) {
      FUN_01445680((int)&param_4 + 3,1,1);
      local_10 = param_4._3_1_ & 1;
      uVar9 = param_4._3_1_ >> 1 & 0x7fffffbf;
      bVar10 = 6;
      if ((int)param_4 < 0) {
        do {
          FUN_01445680(&local_5,1,1);
          bVar2 = bVar10 & 0x1f;
          bVar10 = bVar10 + 7;
          uVar9 = uVar9 | (local_5 & 0xffffff7f) << bVar2;
        } while ((char)local_5 < '\0');
      }
      if (local_10 != 0) {
        uVar9 = -uVar9;
      }
      local_50 = *(int **)(*(int *)(iVar3 + 0x1c) + uVar9 * 4);
    }
    piVar8 = param_3;
    uVar9 = (**(code **)(*local_50 + 0x24))();
    param_3 = (int *)(**(code **)(**(int **)(iVar3 + 0x14) + 0x10))(&local_50,0);
    if (param_3 != (int *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
      param_3[2] = param_3[2] + 1;
    }
    if (piVar8 != (int *)0x3) {
      if (piVar8 == (int *)&DAT_00000004) {
        param_4 = *(int **)(iVar3 + 0x3c);
        if (*(uint *)(iVar3 + 0x3c) == (*(uint *)(iVar3 + 0x40) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar3 + 0x38),4);
        }
        iVar7 = local_c;
        *(int **)(*(int *)(iVar3 + 0x38) + *(int *)(iVar3 + 0x3c) * 4) = param_3;
        *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + 1;
        param_4 = (int *)FUN_01010120(param_4);
        if ((int)param_4 <= *(int *)(iVar7 + 0x4c)) {
          iVar3 = *(int *)(*(int *)(iVar7 + 0x44) + 4 + (int)param_4 * 8);
          FUN_0110d070(&param_3);
          if (iVar3 != 0) {
            FUN_0110e840();
            pvVar4 = TlsGetValue(DAT_01f8fc4c);
            (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(iVar3,0x18);
          }
          FUN_010101e0(param_4);
        }
      }
      else {
        hkErrStream::hkErrStream(local_25c,0x200);
        FUN_01018d00("corrupt file");
        iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                          (3,0x484994d5,local_25c,
                           "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Tagfile\\Binary\\hkBinaryTagfileReader.cpp"
                           ,0x28a);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          piVar8 = (int *)(*pcVar1)();
          return piVar8;
        }
        hkBaseObject::hkBaseObject_38();
      }
    }
    local_4c[0] = 0;
    local_4c[1] = 0;
    local_4c[2] = 0x80000000;
    local_3c = 0x80;
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    local_4c[3] = *(int *)((int)pvVar4 + 0xc);
    if ((*(int *)((int)pvVar4 + 8) < 0x80) || (*(uint *)((int)pvVar4 + 0x10) < local_4c[3] + 0x80U))
    {
      local_4c[3] = FUN_0100b780(0x80);
    }
    else {
      *(uint *)((int)pvVar4 + 0xc) = local_4c[3] + 0x80U;
    }
    local_4c[2] = 0x80000080;
    local_4c[0] = local_4c[3];
    FUN_0110d9b0(uVar9,local_4c);
    local_18 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar6 = 0;
    local_14 = uVar9;
    if (uVar9 != 0) {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      local_18 = *(int *)((int)pvVar4 + 0xc);
      uVar6 = uVar9 * 0x10 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar4 + 8) < (int)uVar6) ||
         (*(uint *)((int)pvVar4 + 0x10) < local_18 + uVar6)) {
        local_18 = FUN_0100b780(uVar6);
        uVar6 = local_20;
      }
      else {
        *(uint *)((int)pvVar4 + 0xc) = local_18 + uVar6;
        uVar6 = local_20;
      }
    }
    iVar3 = uVar9 - uVar6;
    if (0 < iVar3) {
      puVar5 = (undefined4 *)(uVar6 * 0x10 + local_18 + 8);
      do {
        if (puVar5 != (undefined4 *)&DAT_00000008) {
          puVar5[-2] = 0;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar5 = puVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_24 = local_18;
    local_20 = uVar9;
    local_1c = uVar9 | 0x80000000;
    (**(code **)(*local_50 + 0x30))(&local_24);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0x80000000;
    local_28 = uVar9;
    if (uVar9 == 0) {
      local_2c = 0;
    }
    else {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      local_2c = *(int *)((int)pvVar4 + 0xc);
      uVar6 = uVar9 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar4 + 8) < (int)uVar6) ||
         (*(uint *)((int)pvVar4 + 0x10) < local_2c + uVar6)) {
        local_2c = FUN_0100b780(uVar6);
      }
      else {
        *(uint *)((int)pvVar4 + 0xc) = local_2c + uVar6;
      }
    }
    local_38 = local_2c;
    local_34 = uVar9;
    local_30 = uVar9 | 0x80000000;
    (**(code **)(*param_3 + 0x74))(&local_38);
    iVar3 = 0;
    if (0 < (int)uVar9) {
      iVar7 = 0;
      do {
        if (*(char *)(local_4c[0] + iVar3) != '\0') {
          FUN_0110f510(param_3,*(undefined4 *)(local_38 + iVar3 * 4),iVar7 + local_24);
        }
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar3 < (int)uVar9);
    }
    uVar9 = local_28;
    iVar3 = local_2c;
    *param_2 = (int)param_3;
    *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
    param_3[2] = param_3[2] + 1;
    if (local_2c == local_38) {
      local_34 = 0;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    uVar9 = uVar9 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) || (uVar9 + iVar3 != *(int *)((int)pvVar4 + 0xc)))
       || (*(int *)((int)pvVar4 + 0x14) == iVar3)) {
      FUN_0100b9b0(iVar3,uVar9);
    }
    else {
      *(int *)((int)pvVar4 + 0xc) = iVar3;
    }
    local_34 = 0;
    if (-1 < (int)local_30) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 4);
    }
    uVar9 = local_14;
    iVar3 = local_18;
    local_38 = 0;
    local_30 = 0x80000000;
    if (local_18 == local_24) {
      local_20 = 0;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    uVar9 = uVar9 * 0x10 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) || (uVar9 + iVar3 != *(int *)((int)pvVar4 + 0xc)))
       || (*(int *)((int)pvVar4 + 0x14) == iVar3)) {
      FUN_0100b9b0(iVar3,uVar9);
    }
    else {
      *(int *)((int)pvVar4 + 0xc) = iVar3;
    }
    local_20 = 0;
    if (-1 < (int)local_1c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
    }
    iVar7 = local_3c;
    iVar3 = local_4c[3];
    local_24 = 0;
    local_1c = 0x80000000;
    if (local_4c[3] == local_4c[0]) {
      local_4c[1] = 0;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    uVar9 = iVar7 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) || (uVar9 + iVar3 != *(int *)((int)pvVar4 + 0xc)))
       || (*(int *)((int)pvVar4 + 0x14) == iVar3)) {
      FUN_0100b9b0(iVar3,uVar9);
    }
    else {
      *(int *)((int)pvVar4 + 0xc) = iVar3;
    }
    local_4c[1] = 0;
    if (-1 < local_4c[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c[0],local_4c[2] & 0x3fffffff);
    }
    local_4c[0] = 0;
    local_4c[2] = 0x80000000;
    *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
    piVar8 = param_3 + 2;
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      (**(code **)*param_3)(1);
    }
  }
  return param_2;
}

// 01110040  FUN_01110040  size=1093  [__FILE__]
int * FUN_01110040(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined1 local_224 [524];
  undefined4 *local_18;
  uint *local_14;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  uint local_c;
  byte local_6;
  byte local_5;
  
  FUN_01445680(&local_18,4,1);
  FUN_01445680(&local_c,4,1);
  if ((local_18 != (undefined4 *)0xcab00d1e) || (local_c != 0xd011face)) {
    hkErrStream::hkErrStream(local_224,0x200);
    FUN_01018d00("This does not look like a binary tagfile (magic number mismatch)");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0x2ab6036f,local_224,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Tagfile\\Binary\\hkBinaryTagfileReader.cpp"
               ,0x2e4);
    hkBaseObject::hkBaseObject_38();
    *param_1 = 0;
    return param_1;
  }
  FUN_01445680(&local_6,1,1);
  local_c = local_6 & 1;
  uVar7 = local_6 >> 1 & 0x7fffffbf;
  bVar6 = 6;
  bVar3 = local_6;
  while ((char)bVar3 < '\0') {
    FUN_01445680(&local_5,1,1);
    bVar3 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    uVar7 = uVar7 | (local_5 & 0xffffff7f) << bVar3;
    bVar3 = local_5;
  }
  if (local_c != 0) {
    uVar7 = -uVar7;
  }
  if (uVar7 != 0xffffffff) {
    do {
      puVar4 = local_14;
      switch(uVar7) {
      case 1:
        FUN_01445680(&local_5,1,1);
        local_c = local_5 & 1;
        uVar7 = local_5 >> 1 & 0x7fffffbf;
        bVar6 = 6;
        puVar4 = local_14;
        bVar3 = local_5;
        while (local_14 = puVar4, (char)bVar3 < '\0') {
          FUN_01445680(&local_6,1,1);
          bVar3 = bVar6 & 0x1f;
          bVar6 = bVar6 + 7;
          uVar7 = uVar7 | (local_6 & 0xffffff7f) << bVar3;
          puVar4 = local_14;
          bVar3 = local_6;
        }
        if (local_c != 0) {
          uVar7 = -uVar7;
        }
        *puVar4 = uVar7;
        switch(uVar7) {
        case 0:
          break;
        case 1:
          FUN_01445680(&local_e,1,1);
          local_c = local_e & 1;
          uVar7 = local_e >> 1 & 0x7fffffbf;
          bVar6 = 6;
          puVar4 = local_14;
          bVar3 = local_e;
          while (local_14 = puVar4, (char)bVar3 < '\0') {
            FUN_01445680(&local_10,1,1);
            bVar3 = bVar6 & 0x1f;
            bVar6 = bVar6 + 7;
            uVar7 = uVar7 | (local_10 & 0xffffff7f) << bVar3;
            puVar4 = local_14;
            bVar3 = local_10;
          }
          if (local_c != 0) {
            uVar7 = -uVar7;
          }
          if (uVar7 != 1) goto switchD_0111010f_caseD_5;
          puVar1 = puVar4 + 10;
          puVar4[0xb] = 0;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,puVar1,4);
          }
          *(undefined1 **)(*puVar1 + puVar4[0xb] * 4) = &DAT_016416fa;
          puVar4[0xb] = puVar4[0xb] + 1;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,puVar1,4);
          }
          *(undefined4 *)(*puVar1 + puVar4[0xb] * 4) = 0;
          puVar4[0xb] = puVar4[0xb] + 1;
          FUN_0110d2d0(&PTR_vftable_018e9b94,&PTR_s_variant_01b1e348,0x6d8);
          puVar4[0xd] = 0x6da;
          break;
        case 2:
        case 3:
          if (puVar4[0xf] == (puVar4[0x10] & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,puVar4 + 0xe,4);
          }
          *(undefined4 *)(puVar4[0xe] + puVar4[0xf] * 4) = 0;
          puVar4[0xf] = puVar4[0xf] + 1;
          break;
        default:
          hkErrStream::hkErrStream(local_224,0x200);
          uVar7 = *puVar4;
          FUN_01018d00("Unrecognised tagfile version ");
          FUN_01018dc0(uVar7);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0x2ab6036f,local_224,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Tagfile\\Binary\\hkBinaryTagfileReader.cpp"
                     ,0x313);
          hkBaseObject::hkBaseObject_38();
          goto switchD_0111010f_caseD_5;
        }
        break;
      case 2:
        iVar5 = FUN_0110e460();
        if (iVar5 == 1) goto switchD_0111010f_caseD_5;
        break;
      case 3:
      case 4:
      case 6:
        FUN_0110fa20(&local_18,uVar7,0);
        if ((int)*puVar4 < 2) {
          *param_1 = (int)local_18;
          if (local_18 != (undefined4 *)0x0) {
            *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + 1;
            local_18[2] = local_18[2] + 1;
            *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + -1;
            piVar2 = local_18 + 2;
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*local_18)(1);
            }
          }
          return param_1;
        }
        if (local_18 != (undefined4 *)0x0) {
          *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + -1;
          piVar2 = local_18 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*local_18)(1);
          }
        }
        break;
      default:
        goto switchD_0111010f_caseD_5;
      case 7:
        iVar5 = *(int *)(local_14[0xe] + 4);
        *param_1 = iVar5;
        if (iVar5 == 0) {
          return param_1;
        }
        *(short *)(iVar5 + 6) = *(short *)(iVar5 + 6) + 1;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        return param_1;
      }
      FUN_01445680(&local_f,1,1);
      local_c = local_f & 1;
      uVar7 = local_f >> 1 & 0x7fffffbf;
      bVar6 = 6;
      bVar3 = local_f;
      while ((char)bVar3 < '\0') {
        FUN_01445680(&local_d,1,1);
        bVar3 = bVar6 & 0x1f;
        bVar6 = bVar6 + 7;
        uVar7 = uVar7 | (local_d & 0xffffff7f) << bVar3;
        bVar3 = local_d;
      }
      if (local_c != 0) {
        uVar7 = -uVar7;
      }
      if (uVar7 == 0xffffffff) {
        *param_1 = 0;
        return param_1;
      }
    } while( true );
  }
switchD_0111010f_caseD_5:
  *param_1 = 0;
  return param_1;
}

