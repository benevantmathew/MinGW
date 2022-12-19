// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_RasterOp__
#define __java_awt_image_RasterOp__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class RenderingHints;
      namespace geom
      {
        class Point2D;
        class Rectangle2D;
      }
      namespace image
      {
        class RasterOp;
        class WritableRaster;
        class Raster;
      }
    }
  }
}

class java::awt::image::RasterOp : public ::java::lang::Object
{
public:
  virtual ::java::awt::image::WritableRaster *filter (::java::awt::image::Raster *, ::java::awt::image::WritableRaster *) = 0;
  virtual ::java::awt::geom::Rectangle2D *getBounds2D (::java::awt::image::Raster *) = 0;
  virtual ::java::awt::image::WritableRaster *createCompatibleDestRaster (::java::awt::image::Raster *) = 0;
  virtual ::java::awt::geom::Point2D *getPoint2D (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *) = 0;
  virtual ::java::awt::RenderingHints *getRenderingHints () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_image_RasterOp__ */
