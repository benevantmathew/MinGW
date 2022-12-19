// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_renderable_RenderedImageFactory__
#define __java_awt_image_renderable_RenderedImageFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class RenderingHints;
      namespace image
      {
        class RenderedImage;
        namespace renderable
        {
          class RenderedImageFactory;
          class ParameterBlock;
        }
      }
    }
  }
}

class java::awt::image::renderable::RenderedImageFactory : public ::java::lang::Object
{
public:
  virtual ::java::awt::image::RenderedImage *create (::java::awt::image::renderable::ParameterBlock *, ::java::awt::RenderingHints *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_image_renderable_RenderedImageFactory__ */
