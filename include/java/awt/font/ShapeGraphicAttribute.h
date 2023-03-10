// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_ShapeGraphicAttribute__
#define __java_awt_font_ShapeGraphicAttribute__

#pragma interface

#include <java/awt/font/GraphicAttribute.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class Rectangle2D;
      }
      namespace font
      {
        class ShapeGraphicAttribute;
      }
      class Graphics2D;
      class Shape;
    }
  }
}

class java::awt::font::ShapeGraphicAttribute : public ::java::awt::font::GraphicAttribute
{
public:
  ShapeGraphicAttribute (::java::awt::Shape *, jint, jboolean);
  void draw (::java::awt::Graphics2D *, jfloat, jfloat);
  jboolean equals (::java::lang::Object *);
  jboolean equals (::java::awt::font::ShapeGraphicAttribute *);
  jfloat getAdvance ();
  jfloat getAscent ();
  ::java::awt::geom::Rectangle2D *getBounds ();
  jfloat getDescent ();
  jint hashCode ();
  static const jint FILL = 0L;
  static const jint STROKE = 1L;
private:
  ::java::awt::Shape * __attribute__((aligned(__alignof__( ::java::awt::font::GraphicAttribute )))) shape;
  jboolean stroke;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_font_ShapeGraphicAttribute__ */
