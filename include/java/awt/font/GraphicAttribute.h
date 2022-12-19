// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_GraphicAttribute__
#define __java_awt_font_GraphicAttribute__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace font
      {
        class GraphicAttribute;
        class GlyphJustificationInfo;
      }
      namespace geom
      {
        class Rectangle2D;
      }
      class Graphics2D;
    }
  }
}

class java::awt::font::GraphicAttribute : public ::java::lang::Object
{
public:  // actually protected
  GraphicAttribute (jint);
public:
  virtual void draw (::java::awt::Graphics2D *, jfloat, jfloat) = 0;
  virtual jfloat getAdvance () = 0;
  jint getAlignment () { return alignment; }
  virtual jfloat getAscent () = 0;
  virtual ::java::awt::geom::Rectangle2D *getBounds ();
  virtual jfloat getDescent () = 0;
  virtual ::java::awt::font::GlyphJustificationInfo *getJustificationInfo ();
  static const jint BOTTOM_ALIGNMENT = -2L;
  static const jint CENTER_BASELINE = 1L;
  static const jint HANGING_BASELINE = 2L;
  static const jint ROMAN_BASELINE = 0L;
  static const jint TOP_ALIGNMENT = -1L;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  alignment;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_font_GraphicAttribute__ */
