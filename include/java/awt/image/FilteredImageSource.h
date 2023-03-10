// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_FilteredImageSource__
#define __java_awt_image_FilteredImageSource__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class FilteredImageSource;
        class ImageConsumer;
        class ImageFilter;
        class ImageProducer;
      }
    }
  }
}

class java::awt::image::FilteredImageSource : public ::java::lang::Object
{
public:
  FilteredImageSource (::java::awt::image::ImageProducer *, ::java::awt::image::ImageFilter *);
  virtual void addConsumer (::java::awt::image::ImageConsumer *);
  virtual jboolean isConsumer (::java::awt::image::ImageConsumer *);
  virtual void removeConsumer (::java::awt::image::ImageConsumer *);
  virtual void startProduction (::java::awt::image::ImageConsumer *);
  virtual void requestTopDownLeftRightResend (::java::awt::image::ImageConsumer *);
public: // actually package-private
  ::java::awt::image::ImageProducer * __attribute__((aligned(__alignof__( ::java::lang::Object )))) ip;
  ::java::awt::image::ImageFilter *filter;
  ::java::util::Hashtable *consumers;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_FilteredImageSource__ */
