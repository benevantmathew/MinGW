// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_CropImageFilter__
#define __java_awt_image_CropImageFilter__

#pragma interface

#include <java/awt/image/ImageFilter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class CropImageFilter;
        class ColorModel;
      }
    }
  }
}

class java::awt::image::CropImageFilter : public ::java::awt::image::ImageFilter
{
public:
  CropImageFilter (jint, jint, jint, jint);
  virtual void setDimensions (jint, jint);
  virtual void setProperties (::java::util::Hashtable *);
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jbyteArray, jint, jint);
  virtual void setPixels (jint, jint, jint, jint, ::java::awt::image::ColorModel *, jintArray, jint, jint);
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::awt::image::ImageFilter ))))  x;
  jint y;
  jint width;
  jint height;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_CropImageFilter__ */
