// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_OpenType__
#define __java_awt_font_OpenType__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace font
      {
        class OpenType;
      }
    }
  }
}

class java::awt::font::OpenType : public ::java::lang::Object
{
public:
  virtual jbyteArray getFontTable (jint) = 0;
  virtual jbyteArray getFontTable (jint, jint, jint) = 0;
  virtual jbyteArray getFontTable (::java::lang::String *) = 0;
  virtual jbyteArray getFontTable (::java::lang::String *, jint, jint) = 0;
  virtual jint getFontTableSize (jint) = 0;
  virtual jint getFontTableSize (::java::lang::String *) = 0;
  virtual jint getVersion () = 0;
  static const jint TAG_ACNT = 1633906292L;
  static const jint TAG_AVAR = 1635148146L;
  static const jint TAG_BASE = 1111577413L;
  static const jint TAG_BDAT = 1650745716L;
  static const jint TAG_BLOC = 1651273571L;
  static const jint TAG_BSLN = 1651731566L;
  static const jint TAG_CFF = 1128678944L;
  static const jint TAG_CMAP = 1668112752L;
  static const jint TAG_CVAR = 1668702578L;
  static const jint TAG_CVT = 1668707360L;
  static const jint TAG_DSIG = 1146308935L;
  static const jint TAG_EBDT = 1161970772L;
  static const jint TAG_EBLC = 1161972803L;
  static const jint TAG_EBSC = 1161974595L;
  static const jint TAG_FDSC = 1717859171L;
  static const jint TAG_FEAT = 1717920116L;
  static const jint TAG_FMTX = 1718449272L;
  static const jint TAG_FPGM = 1718642541L;
  static const jint TAG_FVAR = 1719034226L;
  static const jint TAG_GASP = 1734439792L;
  static const jint TAG_GDEF = 1195656518L;
  static const jint TAG_GLYF = 1735162214L;
  static const jint TAG_GPOS = 1196445523L;
  static const jint TAG_GSUB = 1196643650L;
  static const jint TAG_GVAR = 1735811442L;
  static const jint TAG_HDMX = 1751412088L;
  static const jint TAG_HEAD = 1751474532L;
  static const jint TAG_HHEA = 1751672161L;
  static const jint TAG_HMTX = 1752003704L;
  static const jint TAG_JSTF = 1246975046L;
  static const jint TAG_JUST = 1786082164L;
  static const jint TAG_KERN = 1801810542L;
  static const jint TAG_LCAR = 1818452338L;
  static const jint TAG_LOCA = 1819239265L;
  static const jint TAG_LTSH = 1280594760L;
  static const jint TAG_MAXP = 1835104368L;
  static const jint TAG_MMFX = 1296909912L;
  static const jint TAG_MMSD = 1296913220L;
  static const jint TAG_MORT = 1836020340L;
  static const jint TAG_NAME = 1851878757L;
  static const jint TAG_OPBD = 1836020340L;
  static const jint TAG_OS2 = 1330851634L;
  static const jint TAG_PCLT = 1346587732L;
  static const jint TAG_POST = 1886352244L;
  static const jint TAG_PREP = 1886545264L;
  static const jint TAG_PROP = 1886547824L;
  static const jint TAG_TRAK = 1953653099L;
  static const jint TAG_TYP1 = 1954115633L;
  static const jint TAG_VDMX = 1447316824L;
  static const jint TAG_VHEA = 1986553185L;
  static const jint TAG_VMTX = 1986884728L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_font_OpenType__ */
