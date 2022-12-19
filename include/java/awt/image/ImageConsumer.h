// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_ImageConsumer__
#define __java_awt_image_ImageConsumer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class ImageConsumer;
        class ColorModel;
      }
    }
  }
}

class java::awt::image::ImageConsumer : public ::java::lang::Object
{
public:
  virtual void setDimensions (jint, jint) = 0;
  virtual void setProperties (::java::util::Hashtable *) = 0;
  virtual void setColorModel (::java::awt::image::ColorModel *) = 0;
  virtual void setHints (jint) = 0;
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jbyteArray, jint, jint) = 0;
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jintArray, jint, jint) = 0;
  virtual void imageComplete (jint) = 0;
  static const jint RANDOMPIXELORDER = 1L;
  static const jint TOPDOWNLEFTRIGHT = 2L;
  static const jint COMPLETESCANLINES = 4L;
  static const jint SINGLEPASS = 8L;
  static const jint SINGLEFRAME = 16L;
  static const jint IMAGEERROR = 1L;
  static const jint SINGLEFRAMEDONE = 2L;
  static const jint STATICIMAGEDONE = 3L;
  static const jint IMAGEABORTED = 4L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_image_ImageConsumer__ */
