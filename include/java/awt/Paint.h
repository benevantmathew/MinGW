// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Paint__
#define __java_awt_Paint__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Paint;
      class PaintContext;
      class RenderingHints;
      namespace geom
      {
        class AffineTransform;
        class Rectangle2D;
      }
      class Rectangle;
      namespace image
      {
        class ColorModel;
      }
    }
  }
}

class java::awt::Paint : public ::java::lang::Object
{
public:
  virtual ::java::awt::PaintContext *createContext (::java::awt::image::ColorModel *, ::java::awt::Rectangle *, ::java::awt::geom::Rectangle2D *, ::java::awt::geom::AffineTransform *, ::java::awt::RenderingHints *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_Paint__ */
