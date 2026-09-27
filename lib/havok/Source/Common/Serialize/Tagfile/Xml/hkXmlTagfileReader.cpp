// lib/havok/Source/Common/Serialize/Tagfile/Xml/hkXmlTagfileReader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 011010B0..011010B0, 1 functions

#include "types.h"

// 011010B0  FUN_011010b0  size=721  [__FILE__]
int FUN_011010b0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_218 [512];
  undefined4 local_18 [2];
  undefined1 local_10 [4];
  undefined4 *local_c;
  undefined1 local_5;
  
  FUN_0111a740();
  iVar3 = FUN_010ff7b0();
  if (iVar3 == 0) {
    FUN_0111a740();
  }
  iVar3 = FUN_010ff7b0();
  if (iVar3 != 1) {
    hkErrStream::hkErrStream(local_218,0x200);
    FUN_01018d00("Didn\'t find the root \'hktagfile\' block");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xfeed00aa,local_218,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Tagfile\\Xml\\hkXmlTagfileReader.cpp"
               ,0x46c);
    hkBaseObject::hkBaseObject_38();
    return 1;
  }
  FUN_0111a1e0(local_10);
  pcVar4 = (char *)FUN_014455c0(&local_5,"hktagfile");
  if (*pcVar4 == '\0') {
    hkErrStream::hkErrStream(local_218,0x200);
    FUN_01018d00("Expecting \'hktagfile\' block");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xfeed00aa,local_218,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Tagfile\\Xml\\hkXmlTagfileReader.cpp"
               ,0x472);
    hkBaseObject::hkBaseObject_38();
    return 1;
  }
  puVar5 = (undefined4 *)0x0;
  local_18[0] = 0;
  FUN_0111a2c0("version",local_18);
  FUN_010ffa30();
  FUN_0111a740();
  iVar3 = FUN_010ff7b0();
  while (iVar3 == 1) {
    FUN_0111a1e0(local_10);
    pcVar4 = (char *)FUN_014455c0(&local_5,"class");
    if (*pcVar4 == '\0') break;
    FUN_010fff10();
    iVar3 = FUN_010ff7b0();
  }
  do {
    iVar3 = FUN_010ff7b0();
    if ((iVar3 != 1) && (iVar3 != 2)) {
      iVar3 = FUN_010ffa90();
      if ((iVar3 == 0) && (iVar3 = FUN_010ff7b0(), iVar3 == 7)) {
        iVar3 = FUN_010ff7f0();
        if (iVar3 == 0) {
          if (puVar5 != (undefined4 *)0x0) {
            *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
            puVar5[2] = puVar5[2] + 1;
          }
          puVar2 = (undefined4 *)*param_1;
          if (puVar2 != (undefined4 *)0x0) {
            *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
            piVar1 = puVar2 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          *param_1 = (int)puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
            piVar1 = puVar5 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar5)(1);
            }
          }
          return 0;
        }
        if (puVar5 != (undefined4 *)0x0) {
          *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
          piVar1 = puVar5 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(1);
          }
        }
        return iVar3;
      }
      if (puVar5 == (undefined4 *)0x0) {
        return 1;
      }
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 + -1;
      iVar3 = *piVar1;
      goto LAB_01101367;
    }
    local_c = (undefined4 *)0x0;
    iVar3 = FUN_01100f70(0,&local_c);
    puVar2 = local_c;
    if (iVar3 == 1) {
      if (local_c != (undefined4 *)0x0) {
        *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
        piVar1 = local_c + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_c)(1);
        }
      }
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
LAB_01101367:
        if (iVar3 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      return 1;
    }
    if (local_c != (undefined4 *)0x0) {
      *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + 1;
      local_c[2] = local_c[2] + 1;
    }
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(1);
      }
    }
    puVar5 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  } while( true );
}

