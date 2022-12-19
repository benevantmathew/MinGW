// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_RenderedImage__
#define __java_awt_image_RenderedImage__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      namespace image
      {
        class RenderedImage;
        class WritableRaster;
        class Raster;
        class SampleModel;
        class ColorModel;
      }
    }
  }
}

class java::awt::image::RenderedImage : public ::java::lang::Object
{
public:
  virtual ::java::util::Vector *getSources () = 0;
  virtual ::java::lang::Object *getProperty (::java::lang::String *) = 0;
  virtual JArray< ::java::lang::String *> *getPropertyNames () = 0;
  virtual ::java::awt::image::ColorModel *getColorModel () = 0;
  virtual ::java::awt::image::SampleModel *getSampleModel () = 0;
  virtual jint getWidth () = 0;
  virtual jint getHeight () = 0;
  virtual jint getMinX () = 0;
  virtual jint getMinY () = 0;
  virtual jint getNumXTiles () = 0;
  virtual jint getNumYTiles () = 0;
  virtual jint getMinTileX () = 0;
  virtual jint getMinTileY () = 0;
  virtual jint getTileWidth () = 0;
  virtual jint getTileHeight () = 0;
  virtual jint getTileGridXOffset () = 0;
  virtual jint getTileGridYOffset () = 0;
  virtual ::java::awt::image::Raster *getTile (jint, jint) = 0;
  virtual ::java::awt::image::Raster *getData () = 0;
  virtual ::java::awt::image::Raster *getData (::java::awt::Rectangle *) = 0;
  virtual ::java::awt::image::WritableRaster *copyData (::java::awt::image::WritableRaster *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_image_RenderedImage__ */
