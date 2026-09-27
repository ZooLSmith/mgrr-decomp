// src/unsorted/unit_00C43450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C43450..00C43620, 6 functions

#include "mgrr.h"

// 00C43450  FUN_00c43450  size=66  [run]
void __fastcall FUN_00c43450(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 4);
  if (puVar1 != puVar1 + *(int *)(*(int *)(param_1 + 8) + 8)) {
    do {
      (*(code *)**(undefined4 **)*puVar1)();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 8) + 4) +
                       *(int *)(*(int *)(param_1 + 8) + 8) * 4));
  }
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  }
  return;
}

// 00C434A0  FUN_00c434a0  size=120  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c434a0(uint *param_1,int param_2)

{
  if (param_2 == 1) {
    *param_1 = *param_1 | 8;
    FUN_00c20490();
    return;
  }
  *param_1 = *param_1 & 0xfffffff7;
  if (param_2 != 0) {
    FUN_00c20490();
    return;
  }
  DAT_01d64254 = 0;
  _DAT_01d64260 = 0;
  FUN_009c9440();
  if (*(int *)(DAT_01bea190 + 0xa0) != 0) {
    FUN_00cbd9c0(0);
  }
  _DAT_01d64260 = 0;
  FUN_009c9440();
  return;
}

// 00C43520  FUN_00c43520  size=29  [run]
void __fastcall FUN_00c43520(int param_1)

{
  FUN_00dd7240();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C43540  FUN_00c43540  size=14  [run]
void __fastcall FUN_00c43540(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C43550  FUN_00c43550  size=24  [run]
void __fastcall FUN_00c43550(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C43620  FUN_00c43620  size=4768  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00c43620(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int unaff_retaddr;
  undefined *puVar8;
  
  if ((DAT_01be8e44 != 2) || (iVar4 = (**(code **)(*DAT_01bea100 + 0x28))(0), iVar4 == 0)) {
    return 0;
  }
  piVar5 = (int *)FUN_00a7c8a0();
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  puVar8 = &DAT_01be9db8;
  (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
  iVar6 = FUN_00dd6d80(puVar8);
  iVar4 = DAT_01b77e30;
  if (iVar6 == 0) {
    return 0;
  }
  if (unaff_retaddr == *(int *)(param_1 + 0x20)) {
    iVar6 = FUN_00caad00();
    if ((((((iVar6 != 0) || (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 != 0)) ||
          (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 != 0)) ||
         ((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 != 0 ||
          (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 != 0)))) || (piVar5[0x999] != 0)) ||
       (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 != 0)) goto LAB_00c44224;
    bVar7 = (DAT_01b7b914 & 0x40) == 0;
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x24)) {
    iVar6 = FUN_00caad00();
    if ((((((iVar6 != 0) || (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 != 0)) ||
          (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 != 0)) ||
         ((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 != 0 ||
          (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 != 0)))) || (piVar5[0x999] != 0)) ||
       (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 != 0)) goto LAB_00c44224;
    bVar7 = (DAT_01b7b914 & 0x80) == 0;
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x28)) {
    iVar6 = FUN_00416d50(0x2e);
    if (iVar6 == 0) {
      if (piVar5[0x999] == 0) goto LAB_00c44224;
      bVar7 = (DAT_01b7b914 & 0x10) == 0;
    }
    else {
      iVar6 = FUN_00c2db30();
      if (iVar6 == 0) goto LAB_00c44224;
      iVar6 = FUN_005f4600();
      bVar7 = iVar6 == 0;
    }
  }
  else {
    if (unaff_retaddr == *(int *)(param_1 + 0x2c)) {
      iVar6 = FUN_00caad00();
      fVar2 = _DAT_01b7b92c;
      fVar3 = _DAT_01b7b928;
      if (iVar6 != 0) goto LAB_00c44224;
      goto joined_r0x00c438f5;
    }
    if (unaff_retaddr == *(int *)(param_1 + 0x30)) {
      iVar6 = FUN_00caad00();
      if (iVar6 != 0) goto LAB_00c44224;
      bVar7 = (DAT_01b7b914 & 0x8000) == 0;
    }
    else if (unaff_retaddr == *(int *)(param_1 + 0x34)) {
      iVar6 = FUN_00caad00();
      bVar7 = iVar6 == 0;
    }
    else if (unaff_retaddr == *(int *)(param_1 + 0x38)) {
      iVar6 = FUN_00caad00();
      if (iVar6 == 0) goto LAB_00c44224;
      bVar7 = (DAT_01b7b914 & 0x40) == 0;
    }
    else {
      if (unaff_retaddr != *(int *)(param_1 + 0x3c)) {
        if (unaff_retaddr == *(int *)(param_1 + 0x40)) {
          iVar6 = FUN_00caad00();
          if (iVar6 == 0) goto LAB_00c44224;
          fVar2 = _DAT_01b7b92c;
          fVar3 = _DAT_01b7b928;
          if ((iVar4 != 0) && (iVar4 != 2)) goto LAB_00c4403b;
        }
        else {
          if (unaff_retaddr == *(int *)(param_1 + 0x4c)) {
            iVar6 = FUN_00caad00();
            if (iVar6 == 0) goto LAB_00c44224;
            if ((iVar4 != 0) && (fVar2 = _DAT_01b7b92c, fVar3 = _DAT_01b7b928, iVar4 != 2))
            goto joined_r0x00c438f5;
          }
          else {
            if (unaff_retaddr == *(int *)(param_1 + 0x50)) {
              iVar6 = (**(code **)(*piVar5 + 0x330))();
              if (iVar6 != 0) {
                return 1;
              }
              iVar6 = (**(code **)(*piVar5 + 0x334))();
              bVar7 = iVar6 == 0;
              goto LAB_00c43e32;
            }
            if (unaff_retaddr != *(int *)(param_1 + 0x54)) {
              if (unaff_retaddr == *(int *)(param_1 + 0x58)) goto LAB_00c43e2b;
              if (unaff_retaddr == *(int *)(param_1 + 0x5c)) {
                if ((DAT_01b77e30 == 0) || (DAT_01b77e30 == 1)) {
LAB_00c43f24:
                  if ((DAT_01b7b914 & 0x2000) != 0) {
                    return 1;
                  }
                  goto LAB_00c44224;
                }
LAB_00c439e8:
                if ((DAT_01b7b914 & 0x4000) != 0) {
                  return 1;
                }
                goto LAB_00c44224;
              }
              if (unaff_retaddr == *(int *)(param_1 + 100)) {
                bVar7 = (DAT_01b7b914 & 8) == 0;
              }
              else if (unaff_retaddr == *(int *)(param_1 + 0x68)) {
                iVar6 = FUN_00caad00();
                if ((((iVar6 != 0) || (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 != 0)) ||
                    (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 != 0)) ||
                   (((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 != 0 ||
                     (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 != 0)) ||
                    ((piVar5[0x999] != 0 || (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 != 0)))
                    ))) goto LAB_00c44224;
                if ((iVar4 == 0) || (iVar4 == 1)) {
                  bVar7 = (DAT_01b7b914 & 0x400) == 0;
                }
                else {
                  bVar7 = (DAT_01b7b914 & 0x800) == 0;
                }
              }
              else {
                if (unaff_retaddr == *(int *)(param_1 + 0x6c)) {
LAB_00c43e91:
                  iVar6 = FUN_00caad00();
                  if ((((iVar6 != 0) || (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 != 0)) ||
                      (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 != 0)) ||
                     (((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 != 0 ||
                       (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 != 0)) ||
                      ((piVar5[0x999] != 0 || (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 != 0)
                       ))))) goto LAB_00c44224;
                  if ((iVar4 != 0) && (iVar4 != 1)) goto LAB_00c43f24;
                  goto LAB_00c439e8;
                }
                if (unaff_retaddr == *(int *)(param_1 + 0x70)) {
                  iVar6 = FUN_00caad00();
                  if (((iVar6 != 0) || (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 != 0)) ||
                     ((((iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 != 0 ||
                        ((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 != 0 ||
                         (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 != 0)))) ||
                       (piVar5[0x999] != 0)) ||
                      (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 != 0)))) goto LAB_00c44224;
                  goto LAB_00c4403b;
                }
                if (unaff_retaddr == *(int *)(param_1 + 0x74)) {
                  iVar6 = (**(code **)(*piVar5 + 0x334))();
                  if (iVar6 == 0) goto LAB_00c44224;
                  bVar7 = (DAT_01b7b914 & 0x80) == 0;
                  goto LAB_00c43e32;
                }
                if (unaff_retaddr == *(int *)(param_1 + 0x78)) {
                  iVar6 = FUN_00caad00();
                  if (((iVar6 == 0) && (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 == 0)) &&
                     ((iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 == 0 &&
                      ((((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 == 0 &&
                         (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 == 0)) &&
                        (piVar5[0x999] == 0)) &&
                       (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 == 0)))))) {
                    return 1;
                  }
                  goto LAB_00c44224;
                }
                if (unaff_retaddr == *(int *)(param_1 + 0x7c)) {
                  iVar6 = FUN_00caad00();
                  if (((((iVar6 == 0) && (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 == 0)) &&
                       (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 == 0)) &&
                      ((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 == 0 &&
                       (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 == 0)))) &&
                     ((piVar5[0x999] == 0 && (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 == 0))
                     )) {
                    if (_DAT_01b7b928 != 0.0) {
                      return 1;
                    }
                    if (_DAT_01b7b92c != 0.0) {
                      return 1;
                    }
                  }
                  goto LAB_00c44224;
                }
                if (unaff_retaddr == *(int *)(param_1 + 0x80)) {
                  iVar6 = FUN_00b8bb10();
LAB_00c43e23:
                  if (iVar6 == 0) goto LAB_00c44224;
                  goto LAB_00c43e2b;
                }
                if (unaff_retaddr == *(int *)(param_1 + 0x84)) {
                  iVar6 = (**(code **)(*piVar5 + 0x330))();
                  if (iVar6 == 0) goto LAB_00c44224;
                  bVar7 = (DAT_01b7b914 & 0x40) == 0;
                }
                else if (unaff_retaddr == *(int *)(param_1 + 0x88)) {
                  iVar6 = FUN_00caad00();
                  if ((iVar6 != 0) || (-1 < (char)DAT_01b7b914)) goto LAB_00c44224;
                  bVar7 = (DAT_01b7b914 & 0x20) == 0;
                }
                else {
                  if (unaff_retaddr == *(int *)(param_1 + 0x8c)) {
                    iVar6 = FUN_00caad00();
                    if (((iVar6 != 0) || (DAT_01dc1300 == 0)) || (DAT_01dc12fc != 1))
                    goto LAB_00c44224;
                  }
                  else {
                    if (unaff_retaddr == *(int *)(param_1 + 0x90)) {
                      iVar6 = FUN_00caad00();
                      if ((iVar6 != 0) || ((DAT_01b7b914 & 0x40) == 0)) goto LAB_00c44224;
                      bVar7 = (DAT_01b7b914 & 0x10) == 0;
                      goto LAB_00c43e32;
                    }
                    if (unaff_retaddr == *(int *)(param_1 + 0x94)) goto LAB_00c44224;
                    if ((unaff_retaddr != *(int *)(param_1 + 0x98)) &&
                       (unaff_retaddr != *(int *)(param_1 + 0x9c))) {
                      if (unaff_retaddr == *(int *)(param_1 + 0xa0)) {
                        iVar6 = FUN_00caad00();
                        if (iVar6 != 0) goto LAB_00c44224;
                        iVar6 = FUN_00b7ce00();
                      }
                      else {
                        if (unaff_retaddr != *(int *)(param_1 + 0xa4)) {
                          if (unaff_retaddr == *(int *)(param_1 + 0xa8)) {
                            iVar6 = FUN_00caad00();
                            if (((iVar6 == 0) && ((DAT_01b7b914 & 0x1000) != 0)) &&
                               ((DAT_01b7b914 & 0x8000) != 0)) {
                              return 1;
                            }
                            goto LAB_00c44224;
                          }
                          if (unaff_retaddr != *(int *)(param_1 + 0xac)) {
                            if (unaff_retaddr != *(int *)(param_1 + 0xb0)) {
                              if (unaff_retaddr == *(int *)(param_1 + 0xb4)) {
                                iVar6 = FUN_00caad00();
                                if (((((iVar6 != 0) ||
                                      (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 != 0)) ||
                                     (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 != 0)) ||
                                    ((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 != 0 ||
                                     (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 != 0)))) ||
                                   ((piVar5[0x999] != 0 ||
                                    (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 != 0))))
                                goto LAB_00c44224;
                                if ((iVar4 != 0) && (iVar4 != 1)) {
                                  if ((DAT_01b7b914 & 0x800) != 0) {
                                    if (_DAT_01b7b920 != 0.0) {
                                      return 1;
                                    }
                                    if (_DAT_01b7b924 != 0.0) {
                                      return 1;
                                    }
                                  }
                                  goto LAB_00c44224;
                                }
                                uVar1 = DAT_01b7b914 & 0x400;
                                goto LAB_00c44035;
                              }
                              if (unaff_retaddr == *(int *)(param_1 + 0xb8)) goto LAB_00c44224;
                              if (unaff_retaddr == *(int *)(param_1 + 0xbc)) {
                                iVar6 = FUN_00c2db30();
                                if ((iVar6 != 0) && (iVar6 = FUN_005f5d10(), iVar6 != 0)) {
                                  return 1;
                                }
                                goto LAB_00c44224;
                              }
                              if (unaff_retaddr == *(int *)(param_1 + 0xc0)) {
                                iVar6 = FUN_00c2db30();
                                if ((iVar6 != 0) && (iVar6 = FUN_005f4670(), iVar6 != 0)) {
                                  return 1;
                                }
                                goto LAB_00c44224;
                              }
                              if (unaff_retaddr == *(int *)(param_1 + 0xc4)) {
                                iVar6 = FUN_00c2db30();
                                if ((iVar6 != 0) && (iVar6 = FUN_005f46c0(), iVar6 != 0)) {
                                  return 1;
                                }
                                goto LAB_00c44224;
                              }
                              if (unaff_retaddr == *(int *)(param_1 + 200)) {
                                iVar6 = FUN_00c2db30();
                                if ((iVar6 != 0) && (iVar6 = FUN_005f45c0(), iVar6 != 0)) {
                                  return 1;
                                }
                                goto LAB_00c44224;
                              }
                              if (unaff_retaddr != *(int *)(param_1 + 0xcc)) {
                                if (((unaff_retaddr == *(int *)(param_1 + 0xd0)) &&
                                    (iVar6 = FUN_00c2db30(), iVar6 != 0)) &&
                                   (iVar6 = FUN_005f4700(), iVar6 != 0)) {
                                  return 1;
                                }
                                goto LAB_00c44224;
                              }
                            }
                            iVar6 = FUN_00caad00();
                            if ((((iVar6 == 0) &&
                                 (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 == 0)) &&
                                (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 == 0)) &&
                               (((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 == 0 &&
                                 (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 == 0)) &&
                                ((piVar5[0x999] == 0 &&
                                 (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 == 0)))))) {
                              if ((iVar4 == 0) || (iVar4 == 1)) {
                                if ((_DAT_01b7b910 & 0x400) != 0) {
                                  return 1;
                                }
                              }
                              else if ((_DAT_01b7b910 & 0x800) != 0) {
                                return 1;
                              }
                            }
                            goto LAB_00c44224;
                          }
                          goto LAB_00c43e91;
                        }
                        iVar6 = FUN_00caad00();
                        if (iVar6 != 0) goto LAB_00c44224;
                        iVar6 = FUN_00b796f0();
                      }
                      goto LAB_00c43e23;
                    }
                    iVar6 = FUN_00caad00();
                    if (iVar6 != 0) goto LAB_00c44224;
                  }
LAB_00c43e2b:
                  bVar7 = (DAT_01b7b914 & 0x20) == 0;
                }
              }
              goto LAB_00c43e32;
            }
            iVar6 = FUN_00caad00();
            if ((((iVar6 != 0) || (iVar6 = (**(code **)(*piVar5 + 0x334))(), iVar6 != 0)) ||
                (iVar6 = (**(code **)(*piVar5 + 0x330))(), iVar6 != 0)) ||
               (((iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 != 0 ||
                 (iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 != 0)) ||
                ((piVar5[0x999] != 0 || (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 != 0))))))
            goto LAB_00c44224;
            uVar1 = DAT_01b7b914 & 0x40;
LAB_00c44035:
            if (uVar1 == 0) goto LAB_00c44224;
          }
LAB_00c4403b:
          fVar2 = _DAT_01b7b924;
          fVar3 = _DAT_01b7b920;
        }
joined_r0x00c438f5:
        if (fVar3 != 0.0) {
          return 1;
        }
        if (fVar2 != 0.0) {
          return 1;
        }
        goto LAB_00c44224;
      }
      iVar6 = FUN_00caad00();
      if (iVar6 == 0) goto LAB_00c44224;
      bVar7 = (DAT_01b7b914 & 0x80) == 0;
    }
  }
LAB_00c43e32:
  if (!bVar7) {
    return 1;
  }
LAB_00c44224:
  if (((unaff_retaddr == *(int *)(param_1 + 0x100)) && (iVar6 = FUN_00c2db30(), iVar6 != 0)) &&
     (iVar6 = FUN_00a8cab0(), iVar6 == 0xe)) {
    return 1;
  }
  if (unaff_retaddr == *(int *)(param_1 + 0x1b0)) {
    piVar5 = (int *)FUN_00c2db80();
    if (((((piVar5 != (int *)0x0) && (iVar6 = FUN_00caad00(), iVar6 == 0)) &&
         (iVar6 = (**(code **)(*piVar5 + 0x364))(), iVar6 == 0)) &&
        ((((piVar5[0x186] != 0x100014 && (iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 == 0)) &&
          ((iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 == 0 &&
           ((piVar5[0x999] == 0 && (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 == 0)))))) &&
         (iVar6 = (**(code **)(*piVar5 + 0x35c))(), iVar6 == 0)))) &&
       ((iVar6 = (**(code **)(*piVar5 + 0x404))(), iVar6 == 0 &&
        ((*(byte *)(piVar5 + 0x33f) & 0x40) != 0)))) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1b4)) {
    piVar5 = (int *)FUN_00c2db80();
    if ((((((piVar5 != (int *)0x0) && (iVar6 = FUN_00caad00(), iVar6 == 0)) &&
          (iVar6 = (**(code **)(*piVar5 + 0x364))(), iVar6 == 0)) &&
         ((piVar5[0x186] != 0x100015 && (iVar6 = (**(code **)(*piVar5 + 0x1fc))(), iVar6 == 0)))) &&
        ((iVar6 = (**(code **)(*piVar5 + 0x354))(), iVar6 == 0 &&
         ((piVar5[0x999] == 0 && (iVar6 = (**(code **)(*piVar5 + 0x340))(), iVar6 == 0)))))) &&
       ((iVar6 = (**(code **)(*piVar5 + 0x35c))(), iVar6 == 0 &&
        ((iVar6 = (**(code **)(*piVar5 + 0x404))(), iVar6 == 0 &&
         ((*(byte *)(piVar5 + 0x33f) & 0x80) != 0)))))) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1b8)) {
    iVar6 = FUN_00c2db80();
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x2664) != 0)) {
      if (*(int *)(iVar6 + 0x618) == 0x100004) {
        return 1;
      }
      iVar6 = FUN_0085de30();
      if (iVar6 != 0) {
        return 1;
      }
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1e4)) {
    iVar6 = FUN_00c2db80();
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x618) == 0x100011)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1e8)) {
    iVar6 = FUN_00c2db80();
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x618) == 0x100004)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1ec)) {
    iVar6 = FUN_00c2db80();
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x618) == 0x100012)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1f0)) {
    iVar6 = FUN_00c2db80();
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x618) == 0x100013)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 500)) {
    piVar5 = (int *)FUN_00c2db80();
    if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 0x404))(), iVar6 != 0)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1f8)) {
    piVar5 = (int *)FUN_00c2db80();
    if ((piVar5 != (int *)0x0) &&
       ((((iVar6 = (**(code **)(*piVar5 + 0x364))(), iVar6 != 0 ||
          (iVar6 = piVar5[0x186], iVar6 == 0x100014)) || (iVar6 == 0x100016)) || (iVar6 == 0x100015)
        ))) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x1fc)) {
    iVar6 = FUN_00c2db80();
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x618) == 0x100014)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x200)) {
    iVar6 = FUN_00c2db80();
    if ((iVar6 != 0) &&
       ((*(int *)(iVar6 + 0x618) == 0x100016 || (*(int *)(iVar6 + 0x618) == 0x100015)))) {
      return 1;
    }
  }
  else if (((unaff_retaddr == *(int *)(param_1 + 0x204)) && (iVar6 = FUN_00c2db80(), iVar6 != 0)) &&
          (*(int *)(iVar6 + 0x618) == 0x10001c)) {
    return 1;
  }
  if (unaff_retaddr == *(int *)(param_1 + 0x278)) {
    iVar4 = FUN_00c2dbd0();
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x55e0) != 0)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x27c)) {
    iVar4 = FUN_00c2dbd0();
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x55e4) != 0)) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x284)) {
    iVar4 = FUN_00caad00();
    if (iVar4 != 0) {
      return 1;
    }
  }
  else if (unaff_retaddr == *(int *)(param_1 + 0x290)) {
    iVar6 = FUN_00caad00();
    if (iVar6 != 0) {
      if ((iVar4 == 0) || (iVar4 == 2)) {
        if (_DAT_01b7b928 != 0.0) {
          return 1;
        }
        if (_DAT_01b7b92c != 0.0) {
          return 1;
        }
      }
      else if ((_DAT_01b7b920 != 0.0) || (_DAT_01b7b924 != 0.0)) {
        return 1;
      }
    }
  }
  else if (((unaff_retaddr != *(int *)(param_1 + 0x2a0)) &&
           (unaff_retaddr != *(int *)(param_1 + 0x2a4))) &&
          (unaff_retaddr != *(int *)(param_1 + 0x2a8))) {
    if (unaff_retaddr == *(int *)(param_1 + 0x2ac)) {
      iVar4 = FUN_00c2dbd0();
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x55f8) != 0)) {
        return 1;
      }
    }
    else if (unaff_retaddr == *(int *)(param_1 + 0x2b0)) {
      piVar5 = (int *)FUN_00c2dbd0();
      if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 0x364))(), iVar4 != 0)) {
        return 1;
      }
    }
    else if (unaff_retaddr == *(int *)(param_1 + 0x2b4)) {
      iVar4 = FUN_00c2dbd0();
      if ((iVar4 != 0) && (*(int *)(iVar4 + 22000) != 0)) {
        return 1;
      }
    }
    else if (unaff_retaddr == *(int *)(param_1 + 0x2b8)) {
      iVar4 = FUN_00c2dbd0();
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x55f4) != 0)) {
        return 1;
      }
    }
    else if (unaff_retaddr == *(int *)(param_1 + 700)) {
      iVar4 = FUN_00c2dbd0();
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x55ec) != 0)) {
        return 1;
      }
    }
    else if (unaff_retaddr == *(int *)(param_1 + 0x2c0)) {
      iVar4 = FUN_00c2dbd0();
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x55fc) != 0)) {
        return 1;
      }
    }
    else if (unaff_retaddr != *(int *)(param_1 + 0x2c4)) {
      if (unaff_retaddr == *(int *)(param_1 + 0x298)) {
        iVar4 = FUN_00c2dbd0();
        if (iVar4 != 0) {
          return *(undefined4 *)(iVar4 + 0x5600);
        }
      }
      else if ((unaff_retaddr == *(int *)(param_1 + 0x29c)) && (iVar4 = FUN_00c2dbd0(), iVar4 != 0))
      {
        return *(undefined4 *)(iVar4 + 0x55e8);
      }
    }
  }
  return 0;
}

