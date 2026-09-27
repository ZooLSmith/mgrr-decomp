// src/file/cXml.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0049CBF0..00EC7600, 21 functions

#include "mgrr.h"
#include "cXml.h"

// 0049CBF0  cXml::vf00  size=31  [class]
undefined4 * __thiscall cXml::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0049CC10  cXml::cXml_4  size=22  [class]
void __fastcall cXml::cXml_4(undefined4 *param_1)

{
  *param_1 = cXmlBinary::vftable;
  FUN_00e04180();
  *param_1 = vftable;
  return;
}

// 0092AE50  FUN_0092ae50  size=55  [callgraph]
void __fastcall FUN_0092ae50(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = 0;
    do {
      FUN_0092a5d0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 0092AEB0  FUN_0092aeb0  size=971  [callgraph]
void __thiscall FUN_0092aeb0(int param_1,uint *param_2,byte *param_3,byte param_4)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  
  if (param_4 < 5) {
    bVar1 = *param_3;
    pbVar5 = param_3;
    while (bVar1 != 0) {
      iVar3 = _toupper((uint)*pbVar5);
      *pbVar5 = (byte)iVar3;
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    iVar3 = FUN_00fdbbd0(param_3,"RECONST");
    if (iVar3 == 0) {
      iVar3 = FUN_00fdbbd0(param_3,&DAT_0164d564);
      if (iVar3 == 0) {
        iVar3 = FUN_00fdbbd0(param_3,"DELAL");
        if (iVar3 == 0) {
          iVar3 = FUN_00fdbbd0(param_3,&DAT_0164d530);
          if (iVar3 != 0) {
            pbVar5 = param_3;
            do {
              bVar1 = *pbVar5;
              pbVar5 = pbVar5 + 1;
            } while (bVar1 != 0);
            if ((int)pbVar5 - (int)(param_3 + 1) == 5) {
              lVar4 = _strtol((char *)(param_3 + 3),(char **)0x0,0x10);
              fVar2 = (float)lVar4 * 60.0;
            }
            else {
              fVar2 = 0.0;
            }
            param_2[1] = (uint)fVar2;
            piVar7 = (int *)(param_1 + 0x2c);
            iVar3 = 5;
            do {
              iVar6 = 0;
              if (0 < *piVar7) {
                do {
                  FUN_00910a40(*(undefined4 *)(piVar7[-1] + iVar6 * 4));
                  FUN_0091a930(4);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *piVar7);
              }
              piVar7 = piVar7 + 3;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            *param_2 = *param_2 | 0x80000000;
            return;
          }
          iVar3 = FUN_00fdbbd0(param_3,&DAT_0164d52c);
          if (iVar3 != 0) {
            _param_4 = _strtol((char *)(param_3 + 3),(char **)0x0,10);
            _param_4 = _param_4 & 0xff;
            FUN_0092a7d0(param_2,_param_4);
            return;
          }
          iVar3 = FUN_00fdbbd0(param_3,"RTIME");
          if (iVar3 != 0) {
            lVar4 = _strtol((char *)(param_3 + 5),(char **)0x0,0x10);
            fVar8 = (float10)FUN_00dde300(0,(float)lVar4);
            *(float *)(param_1 + 0x14) = (float)fVar8;
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10000000;
            return;
          }
          iVar3 = FUN_00fdbbd0(param_3,&DAT_0164d51c);
          if (iVar3 != 0) {
            lVar4 = _strtol((char *)(param_3 + 4),(char **)0x0,0x10);
            *(float *)(param_1 + 0x14) = (float)lVar4 * 60.0;
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10000000;
            return;
          }
          iVar3 = FUN_00fdbbd0(param_3,"CUTOFF");
          if (iVar3 == 0) {
            iVar3 = FUN_00fdbbd0(param_3,"BULLET");
            if (iVar3 != 0) {
              *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x2000000;
            }
            iVar3 = FUN_00fdbbd0(param_3,&DAT_0164d508);
            if (iVar3 != 0) {
              *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x800000;
            }
            iVar3 = FUN_00fdbbd0(param_3,&DAT_0164d504);
            if (iVar3 != 0) {
              *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x1000000;
            }
          }
          else {
            iVar3 = FUN_00a81330();
            if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
               (*(undefined4 **)(iVar3 + 0x370) != (undefined4 *)0x0)) {
              *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xffbfffff;
              **(undefined4 **)(iVar3 + 0x370) = 1;
              return;
            }
          }
        }
        else {
          lVar4 = _strtol((char *)(param_3 + 5),(char **)0x0,0x10);
          fVar2 = (float)lVar4 * 60.0;
          if (fVar2 == 0.0) {
            FUN_00dd5650(&DAT_0164d534);
            return;
          }
          *(float *)(param_1 + 0x10) = fVar2;
          *param_2 = *param_2 | 0x40000000;
          *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 6);
          piVar7 = (int *)(param_1 + 0x2c);
          iVar3 = 5;
          *(float *)(param_1 + 0x18) = 1.0 / fVar2;
          do {
            iVar6 = 0;
            if (0 < *piVar7) {
              do {
                FUN_00910a40(*(undefined4 *)(piVar7[-1] + iVar6 * 4));
                FUN_0091a930(4);
                iVar6 = iVar6 + 1;
              } while (iVar6 < *piVar7);
            }
            piVar7 = piVar7 + 3;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          iVar3 = FUN_00a81330();
          if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
            *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xffefffff;
            return;
          }
        }
      }
      else {
        pbVar5 = param_3;
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        if ((int)pbVar5 - (int)(param_3 + 1) == 4) {
          FUN_00929100();
          return;
        }
        if ((int)pbVar5 - (int)(param_3 + 1) == 6) {
          lVar4 = _strtol((char *)(param_3 + 4),(char **)0x0,0x10);
          *(float *)(param_1 + 0x10) = (float)lVar4 * 60.0;
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40000000;
          return;
        }
      }
    }
    else {
      iVar6 = 0;
      iVar3 = param_1 + (uint)param_4 * 0xc;
      if (0 < *(int *)(param_1 + 0x20 + (uint)param_4 * 0xc)) {
        do {
          if (param_2[0x12] != 0) {
            FUN_008f2630(*(undefined4 *)(*(int *)(iVar3 + 0x1c) + iVar6 * 4));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar3 + 0x20));
        return;
      }
    }
  }
  return;
}

// 0092B280  FUN_0092b280  size=57  [callgraph]
void __fastcall FUN_0092b280(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0092ae50();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0092B2C0  FUN_0092b2c0  size=138  [callgraph]
undefined4 __thiscall FUN_0092b2c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) < param_2) {
    FUN_00dd5650(&DAT_01640664);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_2) {
    if (iVar1 < param_2) {
      iVar2 = iVar1 * 0xa0;
      iVar1 = param_2 - iVar1;
      do {
        if (*(int *)(param_1 + 4) + iVar2 != 0) {
          FUN_0092a530();
        }
        iVar2 = iVar2 + 0xa0;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0xc) = param_2;
      return 1;
    }
    iVar2 = param_2;
    if (param_2 < iVar1) {
      do {
        FUN_0092a5d0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 0092B350  FUN_0092b350  size=142  [callgraph]
void FUN_0092b350(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined2 local_108 [2];
  char *local_104;
  char local_100 [256];
  
  if ((((byte)param_2 < 5) && (*(int *)(param_1 + 0x48) != 0)) &&
     (iVar1 = FUN_009288b0(param_1,param_2,local_100,0x100), iVar1 != 0)) {
    local_108[0] = 0x20;
    pcVar2 = _strtok_s(local_100,(char *)local_108,&local_104);
    while (pcVar2 != (char *)0x0) {
      FUN_0092aeb0(param_1,pcVar2,param_2);
      pcVar2 = _strtok_s((char *)0x0,(char *)local_108,&local_104);
    }
  }
  return;
}

// 0092B3E0  FUN_0092b3e0  size=57  [callgraph]
void __fastcall FUN_0092b3e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0092ae50();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0092B420  FUN_0092b420  size=61  [callgraph]
undefined4 * __fastcall FUN_0092b420(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  cXmlBinary::cXmlBinary_103();
  FUN_00a7c930();
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}

// 0092B460  cXml::cXml_6  size=113  [class]
void __fastcall cXml::cXml_6(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0092ae50();
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0x10),0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined ***)(param_1 + 0x24) = cXmlBinary::vftable;
  FUN_00e04180();
  *(undefined ***)(param_1 + 0x24) = vftable;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0092ae50();
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0x10),0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

// 0092B4E0  FUN_0092b4e0  size=402  [callgraph]
void __thiscall FUN_0092b4e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int unaff_EDI;
  bool bVar7;
  uint local_4;
  
  iVar4 = param_3;
  if (param_3 == 0) {
    return;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00a7c800();
  if (iVar2 == 0) {
    return;
  }
  FUN_00a7c960(&param_2);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  piVar1 = (int *)(param_1 + 0x24);
  FUN_00e062b0(iVar4,0);
  uVar3 = (**(code **)(*piVar1 + 4))();
  iVar4 = (**(code **)(*piVar1 + 0x18))(uVar3,"DamageRigidList");
  if (iVar4 == -1) {
    return;
  }
  uVar5 = (**(code **)(*piVar1 + 0x10))(iVar4);
  if (uVar5 != 0) {
    FUN_00928a20(uVar5,&DAT_01b7bd48);
    FUN_0092b2c0(uVar5);
    uVar6 = 0;
    if (uVar5 != 0) {
      local_4 = 0;
      iVar2 = iVar4;
      do {
        uVar3 = (**(code **)(*piVar1 + 0x14))(iVar2,uVar6);
        if (0x13ff < local_4) {
          FUN_00dd5650("ScrDamageList ListNumOver!!");
          break;
        }
        FUN_00929840(unaff_ESI,uVar3,piVar1);
        *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + '\x01';
        FUN_009287c0(piVar1);
        FUN_00929d00(*(undefined4 *)(param_1 + 0x48),piVar1);
        FUN_00929e60(iVar4,piVar1);
        FUN_0092b350(param_1,0);
        local_4 = local_4 + 0xa0;
        uVar6 = uVar6 + 1;
        iVar2 = unaff_EDI;
      } while (uVar6 < uVar5);
    }
    iVar4 = 0;
    bVar7 = true;
    if (*(char *)(param_1 + 0x20) == '\0') goto LAB_0092b662;
    do {
      FUN_00928ff0(unaff_ESI);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x20));
  }
  bVar7 = *(char *)(param_1 + 0x20) == '\0';
LAB_0092b662:
  if (!bVar7) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  return;
}

// 0092B680  FUN_0092b680  size=984  [callgraph]
undefined4 __fastcall FUN_0092b680(uint *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  float *pfVar10;
  uint *puVar11;
  float10 fVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  float local_80;
  int local_78;
  int local_74;
  int local_64;
  undefined4 local_60;
  int local_50;
  float local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar5 = FUN_00a81330();
  if ((iVar5 == 0) || (iVar5 = FUN_00a7c800(), iVar5 == 0)) {
    return 0;
  }
  local_60 = 0;
  local_64 = 0;
  if ((char)param_1[8] != '\0') {
    local_74 = 0;
    do {
      pfVar10 = (float *)(param_1[4] + local_74);
      if (((*(byte *)((int)pfVar10 + 6) != 0xff) && (((uint)pfVar10[3] & 0x90000000) == 0)) &&
         ((*param_1 & 0x40000000) == 0)) {
        if (((uint)pfVar10[3] & 0x20000000) == 0) {
          uVar6 = (uint)*(byte *)((int)pfVar10 + 6);
          local_78 = 0;
          if (0 < (int)pfVar10[uVar6 * 3 + 0xb]) {
            do {
              local_4c = 0.0;
              FUN_00910a40(*(undefined4 *)((int)pfVar10[uVar6 * 3 + 10] + local_78 * 4));
              FUN_00915860(&local_50);
              uVar3 = local_44;
              uVar2 = local_48;
              local_80 = local_4c;
              iVar7 = local_50;
              if (local_4c != 0.0) {
                FUN_0091a1c0();
              }
              if ((uVar2 & 0x40000000) != 0) break;
              if ((iVar7 != 0x1b0) && (local_80 != 0.0)) {
                pfVar10[3] = (float)((uint)pfVar10[3] | 0x20000000);
                pfVar10[8] = 20.0;
                if ((((uint)pfVar10[9] & 8) != 0) && ((uVar3 & 0x400000) != 0)) {
                  *param_1 = *param_1 | 0x4000000;
                  local_80 = 99999.0;
                }
                if (((iVar7 == 0x146) && (((uint)pfVar10[3] & 0x2000000) == 0)) &&
                   ((((uint)pfVar10[9] & 8) == 0 && ((uVar3 & 0x400000) == 0)))) {
                  local_80 = 0.0;
                }
                fVar1 = pfVar10[9];
                if (((uint)fVar1 & 2) != 0) {
                  local_80 = 99999.0;
                }
                if (((((uint)fVar1 & 1) != 0) && (iVar7 != 0x56)) && (iVar7 != 0x57)) {
                  local_80 = 0.0;
                }
                if (((((uint)fVar1 & 4) != 0) && (iVar7 != 0x18e)) || (local_80 <= 0.0)) {
LAB_0092b884:
                  local_60 = 1;
                }
                else {
                  do {
                    if ((*(char *)((int)pfVar10 + 6) == -1) ||
                       (((uint)pfVar10[3] & 0x10000000) != 0)) goto LAB_0092b884;
                    fVar1 = *pfVar10;
                    *pfVar10 = fVar1 - local_80;
                    local_80 = local_80 - fVar1;
                    if (*pfVar10 <= 0.0) {
                      iVar7 = FUN_00a81330();
                      if (iVar7 != 0) {
                        FUN_00a81330();
                        iVar7 = FUN_00a7c8a0();
                        if (iVar7 != 0) {
                          FUN_00a81330();
                          piVar8 = (int *)FUN_00a7c8a0();
                          (**(code **)(*piVar8 + 0x2f4))(*(undefined1 *)((int)pfVar10 + 6));
                        }
                      }
                      puVar15 = local_20;
                      puVar14 = local_30;
                      puVar11 = param_1 + 9;
                      puVar13 = puVar11;
                      uVar9 = FUN_00a7c8a0(puVar11,puVar14,puVar15);
                      FUN_0092a0a0(uVar9,puVar13,puVar14,puVar15);
                      FUN_009291c0(iVar5,puVar11,local_30);
                      fVar12 = (float10)FUN_00928830(puVar11);
                      if ((float10)(float)param_1[2] < fVar12) {
                        param_1[2] = (uint)(float)fVar12;
                      }
                      FUN_0092b350(param_1,*(char *)((int)pfVar10 + 6) + '\x01');
                      bVar4 = *(char *)((int)pfVar10 + 6) + 1;
                      if ((bVar4 < 5) && (pfVar10[(uint)bVar4 * 3 + 0xb] != 0.0)) {
                        FUN_009298f0(bVar4,param_1[0x12]);
                      }
                      bVar4 = *(char *)((int)pfVar10 + 6) + 1;
                      if ((bVar4 < 5) &&
                         ((pfVar10[(uint)bVar4 * 3 + 0xb] != 0.0 ||
                          (pfVar10[(uint)bVar4 * 3 + 0x1a] != 0.0)))) {
                        *(byte *)((int)pfVar10 + 6) = bVar4;
                        FUN_00929a50(param_1,bVar4);
                        if (((uint)pfVar10[3] & 0x8000000) != 0) {
                          local_80 = -1.0;
                        }
                        FUN_00928ff0(*(undefined1 *)((int)pfVar10 + 6));
                        FUN_009287c0(puVar11);
                      }
                      else {
                        *(undefined1 *)((int)pfVar10 + 6) = 0xff;
                        *pfVar10 = 0.0;
                      }
                    }
                  } while (0.0 < local_80);
                  local_60 = 1;
                }
              }
              local_78 = local_78 + 1;
            } while (local_78 < (int)pfVar10[uVar6 * 3 + 0xb]);
          }
        }
        else {
          fVar1 = pfVar10[8];
          FUN_00a7c910();
          fVar12 = (float10)FUN_00e049b0();
          pfVar10[8] = (float)((float10)fVar1 - fVar12);
          if ((float10)fVar1 - fVar12 < (float10)0) {
            pfVar10[3] = (float)((uint)pfVar10[3] & 0xdfffffff);
          }
        }
      }
      local_74 = local_74 + 0xa0;
      local_64 = local_64 + 1;
    } while (local_64 < (int)(uint)(byte)param_1[8]);
  }
  return local_60;
}

// 0092BA60  FUN_0092ba60  size=299  [callgraph]
undefined4 __thiscall FUN_0092ba60(int param_1,ushort param_2,char param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int iVar8;
  int iVar9;
  
  if ((*(byte *)(param_1 + 0x20) < param_2) || (iVar3 = FUN_00a81330(), iVar3 == 0)) {
    return 0;
  }
  iVar3 = FUN_00a7c800();
  if (iVar3 == 0) {
    return 0;
  }
  iVar6 = (uint)param_2 * 0xa0 + *(int *)(param_1 + 0x10);
  iVar5 = iVar3 + 0x50;
  *(char *)(iVar6 + 6) = param_3 + -1;
  iVar1 = param_1 + 0x24;
  iVar8 = iVar1;
  iVar9 = iVar5;
  uVar4 = FUN_00a7c8a0(iVar1,iVar5);
  FUN_0092a6d0(uVar4,iVar8,iVar9);
  FUN_009291c0(iVar3,iVar1,iVar5);
  fVar7 = (float10)FUN_00928830(iVar1);
  if ((float10)*(float *)(param_1 + 8) < fVar7) {
    *(float *)(param_1 + 8) = (float)fVar7;
  }
  FUN_0092b350(param_1,*(char *)(iVar6 + 6) + '\x01');
  bVar2 = *(char *)(iVar6 + 6) + 1;
  if ((bVar2 < 5) && (*(int *)(iVar6 + 0x2c + (uint)bVar2 * 0xc) != 0)) {
    FUN_009298f0(bVar2,*(undefined4 *)(param_1 + 0x48));
  }
  bVar2 = *(char *)(iVar6 + 6) + 1;
  if ((bVar2 < 5) &&
     ((*(int *)(iVar6 + 0x2c + (uint)bVar2 * 0xc) != 0 ||
      (*(int *)(iVar6 + (uint)bVar2 * 0xc + 0x68) != 0)))) {
    *(byte *)(iVar6 + 6) = bVar2;
    FUN_00929a50(param_1,bVar2);
    FUN_00928ff0(*(undefined1 *)(iVar6 + 6));
    FUN_009287c0(iVar1);
    return 1;
  }
  *(undefined1 *)(iVar6 + 6) = 0xff;
  return 1;
}

// 0092BB90  FUN_0092bb90  size=315  [callgraph]
void __fastcall FUN_0092bb90(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (iVar3 = FUN_00a7c800(), iVar3 != 0)) &&
     (iVar5 = 0, *(char *)(param_1 + 0x20) != '\0')) {
    iVar6 = *(int *)(param_1 + 0x10);
    while ((*(char *)(iVar6 + 6) == -1 || ((*(uint *)(iVar6 + 0xc) & 0x80000000) == 0))) {
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xa0;
      if ((int)(uint)*(byte *)(param_1 + 0x20) <= iVar5) {
        return;
      }
    }
    iVar5 = iVar3 + 0x50;
    iVar1 = param_1 + 0x24;
    iVar8 = iVar1;
    iVar9 = iVar5;
    uVar4 = FUN_00a7c8a0(iVar1,iVar5);
    FUN_0092a6d0(uVar4,iVar8,iVar9);
    FUN_009291c0(iVar3,iVar1,iVar5);
    fVar7 = (float10)FUN_00928830(iVar1);
    if ((float10)*(float *)(param_1 + 8) < fVar7) {
      *(float *)(param_1 + 8) = (float)fVar7;
    }
    FUN_0092b350(param_1,*(char *)(iVar6 + 6) + '\x01');
    bVar2 = *(char *)(iVar6 + 6) + 1;
    if ((bVar2 < 5) && (*(int *)(iVar6 + 0x2c + (uint)bVar2 * 0xc) != 0)) {
      FUN_009298f0(bVar2,*(undefined4 *)(param_1 + 0x48));
    }
    FUN_009290b0(*(undefined1 *)(iVar6 + 6));
    bVar2 = *(char *)(iVar6 + 6) + 1;
    if ((bVar2 < 5) &&
       ((*(int *)(iVar6 + 0x2c + (uint)bVar2 * 0xc) != 0 ||
        (*(int *)(iVar6 + (uint)bVar2 * 0xc + 0x68) != 0)))) {
      *(byte *)(iVar6 + 6) = bVar2;
      FUN_00929a50(param_1,bVar2);
      FUN_00928ff0(*(undefined1 *)(iVar6 + 6));
      FUN_009287c0(iVar1);
      return;
    }
    *(undefined1 *)(iVar6 + 6) = 0xff;
  }
  return;
}

// 0092BCD0  FUN_0092bcd0  size=609  [callgraph]
void __fastcall FUN_0092bcd0(uint *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  float10 fVar10;
  uint *puVar11;
  int *piVar12;
  int local_c;
  int local_8;
  
  iVar6 = FUN_00a81330();
  if ((iVar6 != 0) && (piVar7 = (int *)FUN_00a7c800(), piVar7 != (int *)0x0)) {
    fVar10 = (float10)FUN_00e049b0();
    fVar2 = (float)fVar10;
    if ((float10)0 < (float10)(float)param_1[2]) {
      param_1[2] = (uint)(float)((float10)(float)param_1[2] - fVar10);
    }
    if ((*param_1 & 0x80000000) != 0) {
      fVar3 = (float)param_1[1];
      param_1[1] = (uint)(float)((float10)fVar3 - fVar10);
      if ((float10)fVar3 - fVar10 < (float10)0) {
        (**(code **)(*piVar7 + 0x20))();
      }
      if (((float)param_1[1] < 0.0) && ((float)param_1[2] <= 0.0)) {
        FUN_009fdde0();
        *param_1 = *param_1 & 0x7fffffff;
        return;
      }
      fVar10 = (float10)fVar2;
    }
    local_8 = 0;
    if ((char)param_1[8] != '\0') {
      local_c = 0;
      while( true ) {
        iVar6 = param_1[4] + local_c;
        if (((*(uint *)(iVar6 + 0xc) & 0x40000000) != 0) &&
           (fVar10 = (float10)*(float *)(iVar6 + 0x10) - fVar10,
           *(float *)(iVar6 + 0x10) = (float)fVar10, fVar10 < (float10)0)) {
          FUN_00929100();
          *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xbfffffff;
        }
        if (((*(uint *)(iVar6 + 0xc) & 0x10000000) != 0) &&
           (fVar3 = *(float *)(iVar6 + 0x14) - fVar2, *(float *)(iVar6 + 0x14) = fVar3, fVar3 < 0.0)
           ) {
          *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xefffffff;
          piVar9 = piVar7 + 0x14;
          puVar1 = param_1 + 9;
          puVar11 = puVar1;
          piVar12 = piVar9;
          uVar8 = FUN_00a7c8a0(puVar1,piVar9);
          FUN_0092a6d0(uVar8,puVar11,piVar12);
          FUN_009291c0(piVar7,puVar1,piVar9);
          fVar10 = (float10)FUN_00928830(puVar1);
          if ((float10)(float)param_1[2] < fVar10) {
            param_1[2] = (uint)(float)fVar10;
          }
          FUN_0092b350(param_1,*(char *)(iVar6 + 6) + '\x01');
          bVar4 = *(char *)(iVar6 + 6) + 1;
          if ((bVar4 < 5) && (*(int *)(iVar6 + 0x2c + (uint)bVar4 * 0xc) != 0)) {
            FUN_009298f0(bVar4,param_1[0x12]);
          }
          bVar4 = *(char *)(iVar6 + 6) + 1;
          if ((bVar4 < 5) &&
             ((*(int *)(iVar6 + 0x2c + (uint)bVar4 * 0xc) != 0 ||
              (*(int *)(iVar6 + (uint)bVar4 * 0xc + 0x68) != 0)))) {
            *(byte *)(iVar6 + 6) = bVar4;
            FUN_00929a50(param_1,bVar4);
            FUN_00928ff0(*(undefined1 *)(iVar6 + 6));
            FUN_009287c0(puVar1);
          }
          else {
            *(undefined1 *)(iVar6 + 6) = 0xff;
          }
        }
        if ((*param_1 & 0x40000000) != 0) {
          fVar3 = *(float *)(iVar6 + 0x10) - fVar2;
          *(float *)(iVar6 + 0x10) = fVar3;
          if (0.0 <= fVar3) {
            FUN_009295c0(param_1);
          }
          else {
            FUN_009fdde0();
            *param_1 = *param_1 & 0xbfffffff;
          }
        }
        if ((*(char *)(iVar6 + 7) != -1) && (cVar5 = FUN_0092ac10(param_1), cVar5 != '\0')) {
          *(undefined1 *)(iVar6 + 7) = 0xff;
        }
        local_c = local_c + 0xa0;
        local_8 = local_8 + 1;
        if ((int)(uint)(byte)param_1[8] <= local_8) break;
        fVar10 = (float10)fVar2;
      }
      return;
    }
  }
  return;
}

// 009F88C0  cXml::cXml  size=22  [class]
void __fastcall cXml::cXml(undefined4 *param_1)

{
  *param_1 = cXmlBinary::vftable;
  FUN_00e04180();
  *param_1 = vftable;
  return;
}

// 009F88E0  cXml::cXml_2  size=72  [class]
void __fastcall cXml::cXml_2(undefined4 *param_1)

{
  *param_1 = cObj::vftable;
  if (param_1[0x145] != 0) {
    FUN_00dd5650(&DAT_0165bed8);
  }
  param_1[0x13d] = cXmlBinary::vftable;
  FUN_00e04180();
  param_1[0x13d] = vftable;
  cModel::~cModel();
  return;
}

// 00A60400  cXml::cXml_7  size=172  [class]
void __fastcall cXml::cXml_7(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 0x3c),0);
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 0x50),0);
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x50),0);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x3c),0);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined ***)(param_1 + 8) = cXmlBinary::vftable;
  FUN_00e04180();
  *(undefined ***)(param_1 + 8) = vftable;
  return;
}

// 00D5E0C0  cXml::cXml_3  size=123  [class]
void __fastcall cXml::cXml_3(int param_1)

{
  if (*(int *)(param_1 + 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x208) = 0;
    if (*(int *)(param_1 + 0x20c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x200),0);
      *(undefined4 *)(param_1 + 0x20c) = 0;
    }
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  *(undefined ***)(param_1 + 0x1d8) = cXmlBinary::vftable;
  FUN_00e04180();
  *(undefined ***)(param_1 + 0x1d8) = vftable;
  *(undefined ***)(param_1 + 0x1b8) = cXmlBinary::vftable;
  FUN_00e04180();
  *(undefined ***)(param_1 + 0x1b8) = vftable;
  return;
}

// 00E91740  cXml::cXml_5  size=146  [class]
void __fastcall cXml::cXml_5(undefined4 *param_1)

{
  *param_1 = sys::InputBxmArchive::vftable;
  param_1[0x17] = lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vftable;
  if (param_1[0x18] != 0) {
    param_1[0x19] = 0;
    FUN_00dd48d0(param_1[0x18],0);
    param_1[0x18] = 0;
    param_1[0x1a] = 0;
  }
  param_1[0x17] = lib::Array<cXml::ELEM>::vftable;
  if (param_1[0x18] != 0) {
    param_1[0x19] = 0;
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0xf] = cXmlBinary::vftable;
  FUN_00e04180();
  param_1[0xf] = vftable;
  if ((0xf < (uint)param_1[0xd]) && (DAT_01dda6a0 != '\0')) {
    FUN_00dd48d0(param_1[8],0);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[2] = lib::Archive::vftable;
  *param_1 = lib::Archive::vftable;
  return;
}

// 00EC7600  cXml::cXml_8  size=43  [class]
void __fastcall cXml::cXml_8(int param_1)

{
  FUN_00de3540(0,0);
  *(undefined4 *)(param_1 + 8) = 0xfff;
  *(undefined ***)(param_1 + 0xc) = cXmlBinary::vftable;
  FUN_00e04180();
  *(undefined ***)(param_1 + 0xc) = vftable;
  return;
}

