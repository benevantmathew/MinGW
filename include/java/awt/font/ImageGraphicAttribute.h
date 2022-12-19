// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_ImageGraphicAttribute__
#define __java_awt_font_ImageGraphicAttribute__

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
        class ImageGraphicAttribute;
      }
      class Graphics2D;
      class Image;
    }
  }
}

class java::awt::font::ImageGraphicAttribute : public ::java::awt::font::GraphicAttribute
{
public:
  ImageGraphicAttribute (::java::awt::Image *, jint);
  ImageGraphicAttribute (::java::awt::Image *, jint, jfloat, jfloat);
  void draw (::java::awt::Graphics2D *, jfloat, jfloat);
  jboolean equals (::java::lang::Object *);
  jboolean equals (::java::awt::font::ImageGraphicAttribute *);
  jfloat getAdvance ();
  jfloat getAscent ();
  ::java::awt::geom::Rectangle2D *getBounds ();
  jfloat getDescent ();
  jint hashCode ();
private:
  ::java::awt::Image * __attribute__((aligned(__alignof__( ::java::awt::font::GraphicAttribute )))) image;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_font_ImageGraphicAttribute__ */
