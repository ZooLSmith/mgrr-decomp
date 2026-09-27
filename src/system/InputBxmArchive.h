// REFINED
// sys::InputBxmArchive -- binary-XML (.bxm) backed input archive
// (RTTI: sys::InputBxmArchive : lib::InputArchive : lib::Archive), vftable 0x016D1994.
// Holds an embedded cXmlBinary document at +0x3C and a stack of open XML nodes
// (lib::DynamicArray<cXml::ELEM, sys::GlobalAllocator> at +0x5C). The text of the current node is
// copied into a std::string at +0x20 and fed to an embedded text archive at +0x08 (its vptr is reset
// to lib::Archive::vftable in the dtor -- presumably a lib::InputTextArchive<char const *,32>), to
// which the read slots forward.
// The lib::InputArchive / lib::Archive headers do not exist (namespaced classes get no auto header),
// so the bases are not declared here; the full interface is declared directly in vftable order.
#pragma once
#include "../../include/ghidra_types.h"
#include "../../include/auto/fwd.h"
#include "cXml.h"

namespace sys {

struct InputBxmArchive {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();                  // 00C67970 slot 0x00 (inherited)
    virtual bool vf04();                  // 00E97CB0 slot 0x04
    virtual void vf08();                  // 00C67810 slot 0x08 (inherited)
    virtual bool vf0C();                  // 00E97CC0 slot 0x0C
    virtual bool vf10(const char *name, int unused);         // 00E91830 slot 0x10 (enter child node by name)
    virtual bool vf14(int unused1, int unused2);             // 00E919B0 slot 0x14 (leave current node)
    virtual bool vf18(void *out);         // 00E97DE0 slot 0x18 -> textArchive vf18
    virtual bool vf1C(void *out);         // 00E97DD0 slot 0x1C -> textArchive vf1C
    virtual bool vf20(void *out);         // 00E97DC0 slot 0x20 -> textArchive vf20
    virtual bool vf24(void *out);         // 00E97DB0 slot 0x24 -> textArchive vf24
    virtual bool vf28(void *out);         // 00E97DA0 slot 0x28 -> textArchive vf28
    virtual bool vf2C(void *out);         // 00E97D90 slot 0x2C -> textArchive vf2C
    virtual bool vf30(void *out);         // 00E97D80 slot 0x30 -> textArchive vf30
    virtual bool vf34(void *out);         // 00E97D70 slot 0x34 -> textArchive vf34
    virtual bool vf38(char *out);         // 00E97E80 slot 0x38 (byte read via textArchive vf2C)
    virtual bool vf3C(char *out);         // 00E97E50 slot 0x3C (byte read via textArchive vf2C)
    virtual bool vf40(void *out);         // 00E97D60 slot 0x40 -> textArchive vf40
    virtual void vf44();                  // 00C678F0 slot 0x44 (lib::Archive)
    virtual void vf48();                  // 00C678E0 slot 0x48 (lib::Archive)
    virtual void vf4C();                  // 00C678D0 slot 0x4C (lib::Archive)
    virtual void vf50();                  // 00C678C0 slot 0x50 (lib::Archive)
    virtual void vf54();                  // 00C678B0 slot 0x54 (lib::Archive)
    virtual void vf58();                  // 00C678A0 slot 0x58 (lib::Archive)
    virtual void vf5C();                  // 00C67890 slot 0x5C (lib::Archive)
    virtual void vf60();                  // 00C67880 slot 0x60 (lib::Archive)
    virtual void vf64();                  // 00C67870 slot 0x64 (lib::Archive)
    virtual void vf68();                  // 00C67860 slot 0x68 (lib::Archive)
    virtual void vf6C();                  // 00C67850 slot 0x6C (lib::Archive)
    virtual void vf70();                  // 00C67910 slot 0x70 (lib::Archive)
    virtual bool vf74(void *out);         // 00E91320 slot 0x74 -> textArchive vf74
    virtual InputBxmArchive *vf78(unsigned char flags);      // 00E98A40 slot 0x78 (scalar deleting dtor)

    // embedded text archive at +0x08: its read slots are thiscall bool (void *out)
    typedef bool (__thiscall *TextReadFn)(void *textArchive, void *out);
    void *textArchive()                 { return (char *)this + 0x08; }
    TextReadFn textArchiveSlot(int off) { return *(TextReadFn *)(*(char **)((char *)this + 0x08) + off); }

    // embedded cXmlBinary at +0x3C. Slots 0x10 / 0x14 are called with signatures that differ from
    // the cXml.h prototypes (int return / two arguments), so they go through explicit types.
    typedef int (__thiscall *XmlChildCountFn)(void *xml, int node);             // cXml slot 0x10
    typedef int (__thiscall *XmlChildAtFn)(void *xml, int node, int index);     // cXml slot 0x14
    XmlChildCountFn xmlChildCountSlot() { return *(XmlChildCountFn *)(*(char **)((char *)this + 0x3C) + 0x10); }
    XmlChildAtFn    xmlChildAtSlot()    { return *(XmlChildAtFn *)(*(char **)((char *)this + 0x3C) + 0x14); }

    // embedded node stack at +0x5C: slot 0x08 appends one element (pointer to the value)
    typedef void (__thiscall *NodePushFn)(void *array, int *node);
    NodePushFn nodeStackPushSlot()      { return *(NodePushFn *)(*(char **)((char *)this + 0x5C) + 0x08); }

    // non-virtual members
    // 00E91740: non-deleting destructor body; FILEMAP names it cXml::cXml_5 (cXml.h: ctor_00E91740)

    // fields (absolute offsets from object start)
    void *&textArchiveVtbl()     { return *(void **)((char *)this + 0x08); }        // +0x08  embedded text archive vptr
    int  &textPos()              { return *(int *)((char *)this + 0x0C); }          // +0x0C  (textArchive+0x04)
    char *&textBegin()           { return *(char **)((char *)this + 0x10); }        // +0x10  (textArchive+0x08)
    char *&textEnd()             { return *(char **)((char *)this + 0x14); }        // +0x14  (textArchive+0x0C) points at terminator
    char *&textCursor()          { return *(char **)((char *)this + 0x18); }        // +0x18  (textArchive+0x10)
    char &textFlag()             { return *(char *)((char *)this + 0x1C); }         // +0x1C  (textArchive+0x14)
    int  *textString()           { return (int *)((char *)this + 0x20); }           // +0x20  std::string (MSVC10 layout)
    char *textInlineBuf()        { return (char *)this + 0x20; }                    // +0x20  SSO buffer (capacity < 0x10)
    char *&textHeapPtr()         { return *(char **)((char *)this + 0x20); }        // +0x20  heap pointer (capacity >= 0x10)
    unsigned int &textSize()     { return *(unsigned int *)((char *)this + 0x30); } // +0x30  std::string size
    unsigned int &textCapacity() { return *(unsigned int *)((char *)this + 0x34); } // +0x34  std::string capacity
    cXml *xml()                  { return (cXml *)((char *)this + 0x3C); }          // +0x3C  embedded cXmlBinary
    void *nodeStack()            { return (char *)this + 0x5C; }                    // +0x5C  embedded DynamicArray<cXml::ELEM>
    int  *&nodeData()            { return *(int **)((char *)this + 0x60); }         // +0x60  node stack elements
    int  &nodeCount()            { return *(int *)((char *)this + 0x64); }          // +0x64  node stack size
    int  &resumeAfterNode()      { return *(int *)((char *)this + 0x70); }          // +0x70  child to resume search after (-1 = none)
};

} // namespace sys
