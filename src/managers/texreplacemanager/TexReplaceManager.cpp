// src/managers/texreplacemanager/TexReplaceManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FCC340..00FCDDE0, 55 functions

#include "types.h"

// 00FCC340  TexReplaceManager::get  size=282  [class]
undefined4 __thiscall TexReplaceManager::get(uint *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = *param_3;
  if ((uVar1 & 0x90000000) != 0x90000000) {
    if ((uVar1 & 0xa0000000) != 0xa0000000) {
      *param_2 = (int)(param_1 + (uVar1 & 0xff) * 9 + 0x281);
      *param_3 = param_1[(uVar1 & 0xff) * 9 + 0x288];
      return 1;
    }
    iVar2 = 0;
    puVar3 = param_1 + 0x240;
    do {
      if (*puVar3 == uVar1 >> 0x10) {
        *param_2 = (int)(param_1 + iVar2 * 8 + 0x241);
        *param_3 = *param_3 & 0xff;
        return 1;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (iVar2 < 8);
    FUN_00dd5650(&DAT_016f3f50,(uint)*(byte *)((int)param_3 + 2) << 4,uVar1 & 0xff);
    return 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *param_3 = uVar1 & 0xff;
    return 1;
  }
  iVar2 = 0;
  puVar3 = param_1;
  do {
    if (*puVar3 == uVar1) {
      *param_2 = (int)(param_1 + iVar2 * 9 + 1);
      *param_3 = param_1[iVar2 * 9 + 8];
      return 1;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 9;
  } while (iVar2 < 0x40);
  *param_2 = (int)(param_1 + 0x2e4);
  *param_3 = param_1[0x2eb];
  return 1;
}

// 00FCC460  FUN_00fcc460  size=57  [between]
undefined4 FUN_00fcc460(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x90000000) == 0) {
    return 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *param_1 = (uint)*(byte *)((int)param_1 + 1);
    return 1;
  }
  *param_1 = uVar1 & 0xff;
  return 1;
}

// 00FCC4A0  FUN_00fcc4a0  size=11  [between]
void __fastcall FUN_00fcc4a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f3fb4;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCC4B0  FUN_00fcc4b0  size=169  [between]
bool __fastcall FUN_00fcc4b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_addPos");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_param");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ZSortOffset");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_Sampler0");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler1");
                return iVar1 != 0;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCC560  FUN_00fcc560  size=11  [between]
void __fastcall FUN_00fcc560(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f3ff4;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCC570  FUN_00fcc570  size=277  [between]
bool __fastcall FUN_00fcc570(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_addPos");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_param");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ZSortOffset");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_RedOffset");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_Grid3DOffset");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0x88,"g_GridScale");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler0");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00fa39a0(param_1 + 0xa0,"g_Sampler1");
                      if (iVar1 != 0) {
                        iVar1 = FUN_00fa39a0(param_1 + 0xac,"g_Sampler2");
                        return iVar1 != 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCC690  FUN_00fcc690  size=11  [between]
void __fastcall FUN_00fcc690(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4024;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCC6A0  FUN_00fcc6a0  size=196  [between]
bool __fastcall FUN_00fcc6a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_addPos");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_param");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ZSortOffset");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_RedOffset");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler0");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler1");
                  return iVar1 != 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCC770  FUN_00fcc770  size=11  [between]
void __fastcall FUN_00fcc770(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f402c;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCC780  FUN_00fcc780  size=169  [between]
bool __fastcall FUN_00fcc780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_addPos");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_param");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 100,"g_Sampler0");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_Sampler1");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler2");
                return iVar1 != 0;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCC830  FUN_00fcc830  size=11  [between]
void __fastcall FUN_00fcc830(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4034;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCC840  FUN_00fcc840  size=169  [between]
bool __fastcall FUN_00fcc840(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_addPos");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_param");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 100,"g_Sampler0");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_Sampler1");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler2");
                return iVar1 != 0;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCC8F0  FUN_00fcc8f0  size=11  [between]
void __fastcall FUN_00fcc8f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f403c;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCC900  FUN_00fcc900  size=169  [between]
bool __fastcall FUN_00fcc900(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_addPos");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_param");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 100,"g_Sampler0");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_Sampler1");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler2");
                return iVar1 != 0;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCC9B0  FUN_00fcc9b0  size=11  [between]
void __fastcall FUN_00fcc9b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4044;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCC9C0  FUN_00fcc9c0  size=223  [between]
bool __fastcall FUN_00fcc9c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_ZSortOffset");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler0");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler1");
                    return iVar1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCCAA0  FUN_00fccaa0  size=11  [between]
void __fastcall FUN_00fccaa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4078;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCCAB0  FUN_00fccab0  size=196  [between]
bool __fastcall FUN_00fccab0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_ZSortOffset");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler0");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler1");
                  return iVar1 != 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCCB80  FUN_00fccb80  size=8  [between]
undefined4 FUN_00fccb80(void)

{
  return 1;
}

// 00FCCB90  FUN_00fccb90  size=11  [between]
void __fastcall FUN_00fccb90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4080;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCCBA0  FUN_00fccba0  size=331  [between]
bool __fastcall FUN_00fccba0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_ZSortOffset");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0x88,"g_RedOffset");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0x94,"g_Grid3DOffset");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9e6d0(param_1 + 0xa0,"g_GridScale");
                      if (iVar1 != 0) {
                        iVar1 = FUN_00fa39a0(param_1 + 0xac,"g_Sampler0");
                        if (iVar1 != 0) {
                          iVar1 = FUN_00fa39a0(param_1 + 0xb8,"g_Sampler1");
                          if (iVar1 != 0) {
                            iVar1 = FUN_00fa39a0(param_1 + 0xc4,"g_Sampler2");
                            return iVar1 != 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCCCF0  FUN_00fcccf0  size=11  [between]
void __fastcall FUN_00fcccf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4088;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCCD00  FUN_00fccd00  size=331  [between]
bool __fastcall FUN_00fccd00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_ZSortOffset");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0x88,"g_RedOffset");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0x94,"g_Grid3DOffset");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9e6d0(param_1 + 0xa0,"g_GridScale");
                      if (iVar1 != 0) {
                        iVar1 = FUN_00fa39a0(param_1 + 0xac,"g_Sampler0");
                        if (iVar1 != 0) {
                          iVar1 = FUN_00fa39a0(param_1 + 0xb8,"g_Sampler1");
                          if (iVar1 != 0) {
                            iVar1 = FUN_00fa39a0(param_1 + 0xc4,"g_Sampler2");
                            return iVar1 != 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCCE50  FUN_00fcce50  size=11  [between]
void __fastcall FUN_00fcce50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4090;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCCE60  FUN_00fcce60  size=250  [between]
bool __fastcall FUN_00fcce60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_ZSortOffset");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0x88,"g_RedOffset");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler0");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00fa39a0(param_1 + 0xa0,"g_Sampler1");
                      return iVar1 != 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCCF60  FUN_00fccf60  size=11  [between]
void __fastcall FUN_00fccf60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4098;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCCF70  FUN_00fccf70  size=250  [between]
bool __fastcall FUN_00fccf70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_ZSortOffset");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0x88,"g_RedOffset");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler0");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00fa39a0(param_1 + 0xa0,"g_Sampler1");
                      return iVar1 != 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCD070  FUN_00fcd070  size=11  [between]
void __fastcall FUN_00fcd070(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f40a0;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCD080  FUN_00fcd080  size=250  [between]
bool __fastcall FUN_00fcd080(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_UVOffset");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_ZSortOffset");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_RedOffset");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_LineRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_Sampler0");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler1");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler2");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0x94,"g_Color");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9e6d0(param_1 + 0xa0,"g_OverlayPower");
                      return iVar1 != 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCD190  FUN_00fcd190  size=109  [between]
bool __fastcall FUN_00fcd190(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_DistParam");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_Sampler0");
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

// 00FCD210  FUN_00fcd210  size=109  [between]
bool __fastcall FUN_00fcd210(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_DistParam");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_Sampler0");
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

// 00FCD290  FUN_00fcd290  size=109  [between]
bool __fastcall FUN_00fcd290(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_DistParam");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_Sampler0");
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

// 00FCD300  FUN_00fcd300  size=11  [between]
void __fastcall FUN_00fcd300(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f40e8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCD310  FUN_00fcd310  size=223  [between]
bool __fastcall FUN_00fcd310(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler0");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler1");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler2");
                    return iVar1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCD3F0  FUN_00fcd3f0  size=11  [between]
void __fastcall FUN_00fcd3f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f40f0;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCD400  FUN_00fcd400  size=223  [between]
bool __fastcall FUN_00fcd400(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler0");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler1");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler2");
                    return iVar1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCD4E0  FUN_00fcd4e0  size=11  [between]
void __fastcall FUN_00fcd4e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f40f8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCD4F0  FUN_00fcd4f0  size=223  [between]
bool __fastcall FUN_00fcd4f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_RedOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_GreenOffset");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_BlueOffset");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_HalfPixel");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_TexValidRate");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_ColorAddRate");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler0");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler1");
                    return iVar1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCD5E0  FUN_00fcd5e0  size=89  [between]
bool __fastcall FUN_00fcd5e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_ColorLimit");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Sampler0");
        return iVar1 != 0;
      }
    }
  }
  return false;
}

// 00FCD640  FUN_00fcd640  size=11  [between]
void __fastcall FUN_00fcd640(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4138;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCD650  FUN_00fcd650  size=493  [between]
bool __fastcall FUN_00fcd650(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_TotalOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_TexelOffsets0");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexelOffsets1");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_TexelOffsets2");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_TexelOffsets3");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_TexelOffsets4");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0x88,"g_TexelOffsets5");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0x94,"g_TexelOffsets6");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9e6d0(param_1 + 0xa0,"g_TexelOffsets7");
                      if (iVar1 != 0) {
                        iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_TexelWeights0");
                        if (iVar1 != 0) {
                          iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_TexelWeights1");
                          if (iVar1 != 0) {
                            iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_TexelWeights2");
                            if (iVar1 != 0) {
                              iVar1 = FUN_00f9e6d0(param_1 + 0xd0,"g_TexelWeights3");
                              if (iVar1 != 0) {
                                iVar1 = FUN_00f9e6d0(param_1 + 0xdc,"g_TexelWeights4");
                                if (iVar1 != 0) {
                                  iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_TexelWeights5");
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_TexelWeights6");
                                    if (iVar1 != 0) {
                                      iVar1 = FUN_00f9e6d0(param_1 + 0x100,"g_TexelWeights7");
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_00fa39a0(param_1 + 0x10c,"g_Sampler0");
                                        return iVar1 != 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCD850  FUN_00fcd850  size=109  [between]
bool __fastcall FUN_00fcd850(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_DivParam");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_Sampler0");
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

// 00FCD8C0  FUN_00fcd8c0  size=11  [between]
void __fastcall FUN_00fcd8c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4264;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCD8D0  FUN_00fcd8d0  size=223  [between]
bool __fastcall FUN_00fcd8d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_UVOffset");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_TexValidRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 100,"g_ColorAddRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_param");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler0");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler1");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_Sampler2");
                    return iVar1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCD9C0  FUN_00fcd9c0  size=172  [between]
bool __fastcall FUN_00fcd9c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_HalfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_ToneMapParam");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 100,"g_Sampler0");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_Sampler1");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_Sampler2");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_Sampler3");
                return iVar1 != 0;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FCDA70  FUN_00fcda70  size=11  [between]
void __fastcall FUN_00fcda70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f4284;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00FCDA80  FUN_00fcda80  size=129  [between]
bool __fastcall FUN_00fcda80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_color");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_halfPixel");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_Threshold");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_sampler0");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 100,"g_sampler1");
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}

// 00FCDB30  FUN_00fcdb30  size=57  [between]
void __thiscall FUN_00fcdb30(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[2] = *(undefined4 *)(param_3 + 4);
  param_1[3] = *(undefined4 *)(param_3 + 8);
  param_1[4] = *(undefined4 *)(param_3 + 0xc);
  param_1[5] = *(undefined4 *)(param_3 + 0x10);
  param_1[6] = *(undefined4 *)(param_3 + 0x14);
  param_1[7] = *(undefined4 *)(param_3 + 0x18);
  param_1[8] = param_4;
  return;
}

// 00FCDB90  FUN_00fcdb90  size=19  [between]
bool FUN_00fcdb90(byte param_1)

{
  return (param_1 & 0x1f) == 0;
}

// 00FCDBB0  FUN_00fcdbb0  size=83  [between]
undefined4 __fastcall FUN_00fcdbb0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x3f;
  do {
    Hw::cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 7;
  do {
    Hw::cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 0xc;
  do {
    Hw::cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00FCDC10  FUN_00fcdc10  size=85  [between]
void FUN_00fcdc10(void)

{
  int iVar1;
  
  iVar1 = 0xc;
  do {
    Hw::cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 7;
  do {
    Hw::cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 0x3f;
  do {
    Hw::cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 00FCDC80  FUN_00fcdc80  size=70  [between]
void __fastcall FUN_00fcdc80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = param_1;
  iVar2 = 0x40;
  do {
    iVar3 = iVar2;
    *puVar1 = 0xffffffff;
    puVar1[8] = 0;
    puVar1 = puVar1 + 9;
    iVar2 = iVar3 + -1;
  } while (iVar2 != 0);
  param_1 = param_1 + 0x241;
  iVar3 = iVar3 + 7;
  do {
    param_1[-1] = 0xffffffff;
    if (param_1[2] != 0) {
      FUN_00f972f0();
    }
    param_1 = param_1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00FCDCD0  FUN_00fcdcd0  size=79  [between]
void __thiscall FUN_00fcdcd0(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xa00 + (param_2 & 0xff) * 0x24) = param_2;
  iVar1 = param_1 + 0xa00 + (param_2 & 0xff) * 0x24;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  return;
}

// 00FCDD20  TexReplaceManager::set  size=116  [class]
void __thiscall TexReplaceManager::set(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  while ((*piVar2 != -1 && (*piVar2 != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 9;
    if (0x3f < iVar1) {
      FUN_00dd5650(&DAT_016f42d0,param_2);
      return;
    }
  }
  param_1[iVar1 * 9] = param_2;
  param_1[iVar1 * 9 + 2] = *(int *)(param_3 + 4);
  param_1[iVar1 * 9 + 3] = *(int *)(param_3 + 8);
  param_1[iVar1 * 9 + 4] = *(int *)(param_3 + 0xc);
  param_1[iVar1 * 9 + 5] = *(int *)(param_3 + 0x10);
  param_1[iVar1 * 9 + 6] = *(int *)(param_3 + 0x14);
  param_1[iVar1 * 9 + 7] = *(int *)(param_3 + 0x18);
  param_1[iVar1 * 9 + 8] = param_4;
  return;
}

// 00FCDDE0  TexReplaceManager::reset  size=69  [class]
void __thiscall TexReplaceManager::reset(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 == param_2) {
      param_1[iVar1 * 9] = -1;
      (param_1 + iVar1 * 9)[8] = 0;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 9;
  } while (iVar1 < 0x40);
  FUN_00dd5650(&DAT_016f4328,param_2);
  return;
}

