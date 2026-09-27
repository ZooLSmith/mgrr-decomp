// src/managers/texreplacemanager/TexReplaceManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "TexReplaceManager.h"

// Debug message formats passed to the (empty) debug print FUN_00dd5650.
extern char DAT_016f3f50[];
extern char DAT_016f42d0[];
extern char DAT_016f4328[];

namespace TexReplaceManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

// 00FA0180 (named Hw::cVertexShader::cVertexShader by Ghidra): base shader destructor
// (restores cShader::vftable and releases the shader). ECX = the shader object.
inline void destroyShaderBase(unsigned int *shader)
{
    ((void (__fastcall *)(unsigned int *))0x00FA0180)(shader);
}

// FUN_00f9e6d0: looks up the shader constant `name` into the handle at shader+offset.
inline bool bindConstant(int shader, int offset, const char *name)
{
    return FUN_00f9e6d0((undefined4 *)(shader + offset), (undefined4)name) != 0;
}

// FUN_00fa39a0: looks up the sampler `name` into the handle at shader+offset.
inline bool bindSampler(int shader, int offset, const char *name)
{
    return FUN_00fa39a0((undefined4)(shader + offset), (undefined4)name) != 0;
}

// 00F972C0 Hw::cTexture::cTexture / 00F972E0 Hw::cTexture::~cTexture (ECX = texture).
inline void constructTexture(char *texture)
{
    ((void (__fastcall *)(char *))0x00F972C0)(texture);
}
inline void destroyTexture(char *texture)
{
    ((void (__fastcall *)(char *))0x00F972E0)(texture);
}

// Copies the six data dwords (+0x4..+0x18, not the vftable) of a Hw::cTexture.
inline void copyTextureData(char *dst, const char *src)
{
    *(unsigned int *)(dst + 0x04) = *(const unsigned int *)(src + 0x04);
    *(unsigned int *)(dst + 0x08) = *(const unsigned int *)(src + 0x08);
    *(unsigned int *)(dst + 0x0C) = *(const unsigned int *)(src + 0x0C);
    *(unsigned int *)(dst + 0x10) = *(const unsigned int *)(src + 0x10);
    *(unsigned int *)(dst + 0x14) = *(const unsigned int *)(src + 0x14);
    *(unsigned int *)(dst + 0x18) = *(const unsigned int *)(src + 0x18);
}

} // namespace TexReplaceManager_p1

// 00FCC340  TexReplaceManager::get  size=282  [class]
unsigned int TexReplaceManager::get(void **outTexture, unsigned int *key)
{
    using namespace TexReplaceManager_p1;
    unsigned int value = *key;

    if ((value & 0x90000000) != 0x90000000) {
        if ((value & 0xA0000000) != 0xA0000000) {
            // fixed slot selected by the low byte
            *outTexture = slotTexture(value & 0xFF);
            *key = slotExtra(value & 0xFF);
            return 1;
        }
        // group key in the upper 16 bits
        for (int i = 0; i < 8; i++) {
            if (groupKey(i) == value >> 0x10) {
                *outTexture = groupTexture(i);
                *key = *key & 0xFF;
                return 1;
            }
        }
        ((DebugPrintFn)FUN_00dd5650)(DAT_016f3f50, ((*key >> 16) & 0xFF) << 4, value & 0xFF);
        return 0;
    }

    if ((value & 0xFF00) != 0) {
        *key = value & 0xFF;
        return 1;
    }
    for (int i = 0; i < 0x40; i++) {
        if (entryKey(i) == value) {
            *outTexture = entryTexture(i);
            *key = entryExtra(i);
            return 1;
        }
    }
    // not found: default fixed slot 11
    *outTexture = slotTexture(11);
    *key = slotExtra(11);
    return 1;
}

// 00FCC460  FUN_00fcc460  size=57  [between]
unsigned int FUN_00fcc460(uint *key)
{
    unsigned int value = *key;
    if ((value & 0x90000000) == 0) {
        return 0;
    }
    if ((value & 0xFF00) != 0) {
        *key = (value >> 8) & 0xFF;   // byte 1 of the key
        return 1;
    }
    *key = value & 0xFF;
    return 1;
}

// 00FCC4A0  FUN_00fcc4a0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f3fb4); tail-calls the base shader destructor.
void __fastcall FUN_00fcc4a0(undefined4 *shader)
{
    *shader = 0x016F3FB4;  // vftable (PTR_FUN_016f3fb4)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCC4B0  FUN_00fcc4b0  size=169  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcc4b0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_HalfPixel")
        && bindConstant(shader, 0x4C, "g_addPos")
        && bindConstant(shader, 0x58, "g_param")
        && bindConstant(shader, 0x64, "g_ZSortOffset")
        && bindSampler(shader, 0x70, "g_Sampler0")
        && bindSampler(shader, 0x7C, "g_Sampler1");
}

// 00FCC560  FUN_00fcc560  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f3ff4); tail-calls the base shader destructor.
void __fastcall FUN_00fcc560(undefined4 *shader)
{
    *shader = 0x016F3FF4;  // vftable (PTR_FUN_016f3ff4)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCC570  FUN_00fcc570  size=277  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcc570(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_HalfPixel")
        && bindConstant(shader, 0x4C, "g_addPos")
        && bindConstant(shader, 0x58, "g_param")
        && bindConstant(shader, 0x64, "g_ZSortOffset")
        && bindConstant(shader, 0x70, "g_RedOffset")
        && bindConstant(shader, 0x7C, "g_Grid3DOffset")
        && bindConstant(shader, 0x88, "g_GridScale")
        && bindSampler(shader, 0x94, "g_Sampler0")
        && bindSampler(shader, 0xA0, "g_Sampler1")
        && bindSampler(shader, 0xAC, "g_Sampler2");
}

// 00FCC690  FUN_00fcc690  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4024); tail-calls the base shader destructor.
void __fastcall FUN_00fcc690(undefined4 *shader)
{
    *shader = 0x016F4024;  // vftable (PTR_FUN_016f4024)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCC6A0  FUN_00fcc6a0  size=196  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcc6a0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_HalfPixel")
        && bindConstant(shader, 0x4C, "g_addPos")
        && bindConstant(shader, 0x58, "g_param")
        && bindConstant(shader, 0x64, "g_ZSortOffset")
        && bindConstant(shader, 0x70, "g_RedOffset")
        && bindSampler(shader, 0x7C, "g_Sampler0")
        && bindSampler(shader, 0x88, "g_Sampler1");
}

// 00FCC770  FUN_00fcc770  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f402c); tail-calls the base shader destructor.
void __fastcall FUN_00fcc770(undefined4 *shader)
{
    *shader = 0x016F402C;  // vftable (PTR_FUN_016f402c)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCC780  FUN_00fcc780  size=169  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcc780(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_HalfPixel")
        && bindConstant(shader, 0x4C, "g_addPos")
        && bindConstant(shader, 0x58, "g_param")
        && bindSampler(shader, 0x64, "g_Sampler0")
        && bindSampler(shader, 0x70, "g_Sampler1")
        && bindSampler(shader, 0x7C, "g_Sampler2");
}

// 00FCC830  FUN_00fcc830  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4034); tail-calls the base shader destructor.
void __fastcall FUN_00fcc830(undefined4 *shader)
{
    *shader = 0x016F4034;  // vftable (PTR_FUN_016f4034)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCC840  FUN_00fcc840  size=169  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcc840(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_HalfPixel")
        && bindConstant(shader, 0x4C, "g_addPos")
        && bindConstant(shader, 0x58, "g_param")
        && bindSampler(shader, 0x64, "g_Sampler0")
        && bindSampler(shader, 0x70, "g_Sampler1")
        && bindSampler(shader, 0x7C, "g_Sampler2");
}

// 00FCC8F0  FUN_00fcc8f0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f403c); tail-calls the base shader destructor.
void __fastcall FUN_00fcc8f0(undefined4 *shader)
{
    *shader = 0x016F403C;  // vftable (PTR_FUN_016f403c)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCC900  FUN_00fcc900  size=169  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcc900(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_HalfPixel")
        && bindConstant(shader, 0x4C, "g_addPos")
        && bindConstant(shader, 0x58, "g_param")
        && bindSampler(shader, 0x64, "g_Sampler0")
        && bindSampler(shader, 0x70, "g_Sampler1")
        && bindSampler(shader, 0x7C, "g_Sampler2");
}

// 00FCC9B0  FUN_00fcc9b0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4044); tail-calls the base shader destructor.
void __fastcall FUN_00fcc9b0(undefined4 *shader)
{
    *shader = 0x016F4044;  // vftable (PTR_FUN_016f4044)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCC9C0  FUN_00fcc9c0  size=223  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcc9c0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindConstant(shader, 0x7C, "g_ZSortOffset")
        && bindSampler(shader, 0x88, "g_Sampler0")
        && bindSampler(shader, 0x94, "g_Sampler1");
}

// 00FCCAA0  FUN_00fccaa0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4078); tail-calls the base shader destructor.
void __fastcall FUN_00fccaa0(undefined4 *shader)
{
    *shader = 0x016F4078;  // vftable (PTR_FUN_016f4078)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCCAB0  FUN_00fccab0  size=196  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fccab0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_ZSortOffset")
        && bindSampler(shader, 0x7C, "g_Sampler0")
        && bindSampler(shader, 0x88, "g_Sampler1");
}

// 00FCCB80  FUN_00fccb80  size=8  [between]
unsigned int FUN_00fccb80(void)
{
    return 1;
}

// 00FCCB90  FUN_00fccb90  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4080); tail-calls the base shader destructor.
void __fastcall FUN_00fccb90(undefined4 *shader)
{
    *shader = 0x016F4080;  // vftable (PTR_FUN_016f4080)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCCBA0  FUN_00fccba0  size=331  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fccba0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindConstant(shader, 0x7C, "g_ZSortOffset")
        && bindConstant(shader, 0x88, "g_RedOffset")
        && bindConstant(shader, 0x94, "g_Grid3DOffset")
        && bindConstant(shader, 0xA0, "g_GridScale")
        && bindSampler(shader, 0xAC, "g_Sampler0")
        && bindSampler(shader, 0xB8, "g_Sampler1")
        && bindSampler(shader, 0xC4, "g_Sampler2");
}

// 00FCCCF0  FUN_00fcccf0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4088); tail-calls the base shader destructor.
void __fastcall FUN_00fcccf0(undefined4 *shader)
{
    *shader = 0x016F4088;  // vftable (PTR_FUN_016f4088)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCCD00  FUN_00fccd00  size=331  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fccd00(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindConstant(shader, 0x7C, "g_ZSortOffset")
        && bindConstant(shader, 0x88, "g_RedOffset")
        && bindConstant(shader, 0x94, "g_Grid3DOffset")
        && bindConstant(shader, 0xA0, "g_GridScale")
        && bindSampler(shader, 0xAC, "g_Sampler0")
        && bindSampler(shader, 0xB8, "g_Sampler1")
        && bindSampler(shader, 0xC4, "g_Sampler2");
}

// 00FCCE50  FUN_00fcce50  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4090); tail-calls the base shader destructor.
void __fastcall FUN_00fcce50(undefined4 *shader)
{
    *shader = 0x016F4090;  // vftable (PTR_FUN_016f4090)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCCE60  FUN_00fcce60  size=250  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcce60(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindConstant(shader, 0x7C, "g_ZSortOffset")
        && bindConstant(shader, 0x88, "g_RedOffset")
        && bindSampler(shader, 0x94, "g_Sampler0")
        && bindSampler(shader, 0xA0, "g_Sampler1");
}

// 00FCCF60  FUN_00fccf60  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4098); tail-calls the base shader destructor.
void __fastcall FUN_00fccf60(undefined4 *shader)
{
    *shader = 0x016F4098;  // vftable (PTR_FUN_016f4098)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCCF70  FUN_00fccf70  size=250  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fccf70(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindConstant(shader, 0x7C, "g_ZSortOffset")
        && bindConstant(shader, 0x88, "g_RedOffset")
        && bindSampler(shader, 0x94, "g_Sampler0")
        && bindSampler(shader, 0xA0, "g_Sampler1");
}

// 00FCD070  FUN_00fcd070  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f40a0); tail-calls the base shader destructor.
void __fastcall FUN_00fcd070(undefined4 *shader)
{
    *shader = 0x016F40A0;  // vftable (PTR_FUN_016f40a0)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCD080  FUN_00fcd080  size=250  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd080(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_UVOffset")
        && bindConstant(shader, 0x40, "g_HalfPixel")
        && bindConstant(shader, 0x4C, "g_ZSortOffset")
        && bindConstant(shader, 0x58, "g_RedOffset")
        && bindConstant(shader, 0x64, "g_LineRate")
        && bindSampler(shader, 0x70, "g_Sampler0")
        && bindSampler(shader, 0x7C, "g_Sampler1")
        && bindSampler(shader, 0x88, "g_Sampler2")
        && bindConstant(shader, 0x94, "g_Color")
        && bindConstant(shader, 0xA0, "g_OverlayPower");
}

// 00FCD190  FUN_00fcd190  size=109  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd190(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_DistParam")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindSampler(shader, 0x58, "g_Sampler0");
}

// 00FCD210  FUN_00fcd210  size=109  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd210(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_DistParam")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindSampler(shader, 0x58, "g_Sampler0");
}

// 00FCD290  FUN_00fcd290  size=109  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd290(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_DistParam")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindSampler(shader, 0x58, "g_Sampler0");
}

// 00FCD300  FUN_00fcd300  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f40e8); tail-calls the base shader destructor.
void __fastcall FUN_00fcd300(undefined4 *shader)
{
    *shader = 0x016F40E8;  // vftable (PTR_FUN_016f40e8)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCD310  FUN_00fcd310  size=223  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd310(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindSampler(shader, 0x7C, "g_Sampler0")
        && bindSampler(shader, 0x88, "g_Sampler1")
        && bindSampler(shader, 0x94, "g_Sampler2");
}

// 00FCD3F0  FUN_00fcd3f0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f40f0); tail-calls the base shader destructor.
void __fastcall FUN_00fcd3f0(undefined4 *shader)
{
    *shader = 0x016F40F0;  // vftable (PTR_FUN_016f40f0)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCD400  FUN_00fcd400  size=223  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd400(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindSampler(shader, 0x7C, "g_Sampler0")
        && bindSampler(shader, 0x88, "g_Sampler1")
        && bindSampler(shader, 0x94, "g_Sampler2");
}

// 00FCD4E0  FUN_00fcd4e0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f40f8); tail-calls the base shader destructor.
void __fastcall FUN_00fcd4e0(undefined4 *shader)
{
    *shader = 0x016F40F8;  // vftable (PTR_FUN_016f40f8)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCD4F0  FUN_00fcd4f0  size=223  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd4f0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_RedOffset")
        && bindConstant(shader, 0x4C, "g_GreenOffset")
        && bindConstant(shader, 0x58, "g_BlueOffset")
        && bindConstant(shader, 0x64, "g_HalfPixel")
        && bindConstant(shader, 0x70, "g_TexValidRate")
        && bindConstant(shader, 0x7C, "g_ColorAddRate")
        && bindSampler(shader, 0x88, "g_Sampler0")
        && bindSampler(shader, 0x94, "g_Sampler1");
}

// 00FCD5E0  FUN_00fcd5e0  size=89  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd5e0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x40, "g_Color")
        && bindConstant(shader, 0x34, "g_ColorLimit")
        && bindSampler(shader, 0x4C, "g_Sampler0");
}

// 00FCD640  FUN_00fcd640  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4138); tail-calls the base shader destructor.
void __fastcall FUN_00fcd640(undefined4 *shader)
{
    *shader = 0x016F4138;  // vftable (PTR_FUN_016f4138)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCD650  FUN_00fcd650  size=493  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd650(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_TotalOffset")
        && bindConstant(shader, 0x4C, "g_TexelOffsets0")
        && bindConstant(shader, 0x58, "g_TexelOffsets1")
        && bindConstant(shader, 0x64, "g_TexelOffsets2")
        && bindConstant(shader, 0x70, "g_TexelOffsets3")
        && bindConstant(shader, 0x7C, "g_TexelOffsets4")
        && bindConstant(shader, 0x88, "g_TexelOffsets5")
        && bindConstant(shader, 0x94, "g_TexelOffsets6")
        && bindConstant(shader, 0xA0, "g_TexelOffsets7")
        && bindConstant(shader, 0xAC, "g_TexelWeights0")
        && bindConstant(shader, 0xB8, "g_TexelWeights1")
        && bindConstant(shader, 0xC4, "g_TexelWeights2")
        && bindConstant(shader, 0xD0, "g_TexelWeights3")
        && bindConstant(shader, 0xDC, "g_TexelWeights4")
        && bindConstant(shader, 0xE8, "g_TexelWeights5")
        && bindConstant(shader, 0xF4, "g_TexelWeights6")
        && bindConstant(shader, 0x100, "g_TexelWeights7")
        && bindSampler(shader, 0x10C, "g_Sampler0");
}

// 00FCD850  FUN_00fcd850  size=109  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd850(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_DivParam")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindSampler(shader, 0x58, "g_Sampler0");
}

// 00FCD8C0  FUN_00fcd8c0  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4264); tail-calls the base shader destructor.
void __fastcall FUN_00fcd8c0(undefined4 *shader)
{
    *shader = 0x016F4264;  // vftable (PTR_FUN_016f4264)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCD8D0  FUN_00fcd8d0  size=223  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd8d0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x40, "g_UVOffset")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_TexValidRate")
        && bindConstant(shader, 0x64, "g_ColorAddRate")
        && bindConstant(shader, 0x70, "g_param")
        && bindSampler(shader, 0x7C, "g_Sampler0")
        && bindSampler(shader, 0x88, "g_Sampler1")
        && bindSampler(shader, 0x94, "g_Sampler2");
}

// 00FCD9C0  FUN_00fcd9c0  size=172  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcd9c0(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_Color")
        && bindConstant(shader, 0x4C, "g_HalfPixel")
        && bindConstant(shader, 0x58, "g_ToneMapParam")
        && bindSampler(shader, 0x64, "g_Sampler0")
        && bindSampler(shader, 0x70, "g_Sampler1")
        && bindSampler(shader, 0x7C, "g_Sampler2")
        && bindSampler(shader, 0x88, "g_Sampler3");
}

// 00FCDA70  FUN_00fcda70  size=11  [between]
// Destructor of a shader object (vftable PTR_FUN_016f4284); tail-calls the base shader destructor.
void __fastcall FUN_00fcda70(undefined4 *shader)
{
    *shader = 0x016F4284;  // vftable (PTR_FUN_016f4284)
    TexReplaceManager_p1::destroyShaderBase(shader);
}

// 00FCDA80  FUN_00fcda80  size=129  [between]
// Binds the shader's constant/sampler handles by name; false as soon as one lookup fails.
bool __fastcall FUN_00fcda80(int shader)
{
    using namespace TexReplaceManager_p1;
    return bindConstant(shader, 0x28, "g_WorldMatrix")
        && bindConstant(shader, 0x34, "g_color")
        && bindConstant(shader, 0x40, "g_halfPixel")
        && bindConstant(shader, 0x4C, "g_Threshold")
        && bindSampler(shader, 0x58, "g_sampler0")
        && bindSampler(shader, 0x64, "g_sampler1");
}

// 00FCDB30  FUN_00fcdb30  size=57  [between]
// __thiscall: entry = ECX. Fills one 0x24-byte replacement entry (key, texture data, extra).
void FUN_00fcdb30(unsigned int *entry, unsigned int key, int texture, unsigned int extra)
{
    using namespace TexReplaceManager_p1;
    entry[0] = key;
    copyTextureData((char *)(entry + 1), (const char *)texture);
    entry[8] = extra;
}

// 00FCDB90  FUN_00fcdb90  size=19  [between]
bool FUN_00fcdb90(byte value)
{
    return (value & 0x1F) == 0;
}

// 00FCDBB0  FUN_00fcdbb0  size=83  [between]
// TexReplaceManager constructor (inlined array construction of its 64 + 8 + 13 Hw::cTexture members).
unsigned int __fastcall FUN_00fcdbb0(unsigned int self)
{
    using namespace TexReplaceManager_p1;
    TexReplaceManager *manager = (TexReplaceManager *)self;
    for (int i = 0; i < 0x40; i++) {
        constructTexture(manager->entryTexture(i));
    }
    for (int i = 0; i < 8; i++) {
        constructTexture(manager->groupTexture(i));
    }
    for (int i = 0; i < 13; i++) {
        constructTexture(manager->slotTexture(i));
    }
    return self;
}

// 00FCDC10  FUN_00fcdc10  size=85  [between]
// TexReplaceManager destructor (ECX = the manager; members destroyed in reverse order).
void __fastcall FUN_00fcdc10(unsigned int self)
{
    using namespace TexReplaceManager_p1;
    TexReplaceManager *manager = (TexReplaceManager *)self;
    for (int i = 12; i >= 0; i--) {
        destroyTexture(manager->slotTexture(i));
    }
    for (int i = 7; i >= 0; i--) {
        destroyTexture(manager->groupTexture(i));
    }
    for (int i = 0x3F; i >= 0; i--) {
        destroyTexture(manager->entryTexture(i));
    }
}

// 00FCDC80  FUN_00fcdc80  size=70  [between]
// Clears all replacement entries and group entries.
void __fastcall FUN_00fcdc80(unsigned int *self)
{
    TexReplaceManager *manager = (TexReplaceManager *)self;
    for (int i = 0; i < 0x40; i++) {
        manager->entryKey(i) = 0xFFFFFFFF;
        manager->entryExtra(i) = 0;
    }
    for (int i = 0; i < 8; i++) {
        manager->groupKey(i) = 0xFFFFFFFF;
        char *texture = manager->groupTexture(i);
        if (*(int *)(texture + 8) != 0) {
            FUN_00f972f0((int)texture);
        }
    }
}

// 00FCDCD0  FUN_00fcdcd0  size=79  [between]
// __thiscall: self = ECX (TexReplaceManager). Fills the fixed slot selected by the low byte of key.
void FUN_00fcdcd0(int self, uint key, int texture, unsigned int extra)
{
    using namespace TexReplaceManager_p1;
    TexReplaceManager *manager = (TexReplaceManager *)self;
    manager->slotKey(key & 0xFF) = key;
    copyTextureData(manager->slotTexture(key & 0xFF), (const char *)texture);
    manager->slotExtra(key & 0xFF) = extra;
}

// 00FCDD20  TexReplaceManager::set  size=116  [class]
void TexReplaceManager::set(unsigned int key, const char *texture, unsigned int extra)
{
    using namespace TexReplaceManager_p1;
    int index = 0;
    while (entryKey(index) != 0xFFFFFFFF && entryKey(index) != key) {
        index++;
        if (0x3F < index) {
            ((DebugPrintFn)FUN_00dd5650)(DAT_016f42d0, key);  // table full
            return;
        }
    }
    entryKey(index) = key;
    copyTextureData(entryTexture(index), texture);
    entryExtra(index) = extra;
}

// 00FCDDE0  TexReplaceManager::reset  size=69  [class]
void TexReplaceManager::reset(unsigned int key)
{
    using namespace TexReplaceManager_p1;
    for (int i = 0; i < 0x40; i++) {
        if (entryKey(i) == key) {
            entryKey(i) = 0xFFFFFFFF;
            entryExtra(i) = 0;
            return;
        }
    }
    ((DebugPrintFn)FUN_00dd5650)(DAT_016f4328, key);  // key not found
}
