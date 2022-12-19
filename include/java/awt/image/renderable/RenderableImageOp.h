// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_renderable_RenderableImageOp__
#define __java_awt_image_renderable_RenderableImageOp__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

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
          class RenderableImageOp;
          class RenderContext;
          class ParameterBlock;
          class ContextualRenderedImageFactory;
        }
      }
    }
  }
}

class java::awt::image::renderable::RenderableImageOp : public ::java::lang::Object
{
public:
  RenderableImageOp (::java::awt::image::renderable::ContextualRenderedImageFactory *, ::java::awt::image::renderable::ParameterBlock *);
  virtual ::java::util::Vector *getSources ();
  virtual ::java::lang::Object *getProperty (::java::lang::String *);
  virtual JArray< ::java::lang::String *> *getPropertyNames ();
  virtual jboolean isDynamic ();
  virtual jfloat getWidth ();
  virtual jfloat getHeight ();
  virtual jfloat getMinX ();
  virtual jfloat getMinY ();
  virtual ::java::awt::image::renderable::ParameterBlock *setParameterBlock (::java::awt::image::renderable::ParameterBlock *);
  virtual ::java::awt::image::renderable::ParameterBlock *getParameterBlock () { return block; }
  virtual ::java::awt::image::RenderedImage *createScaledRendering (jint, jint, ::java::awt::RenderingHints *);
  virtual ::java::awt::image::RenderedImage *createDefaultRendering ();
  virtual ::java::awt::image::RenderedImage *createRendering (::java::awt::image::renderable::RenderContext *);
private:
  ::java::awt::image::renderable::ContextualRenderedImageFactory * __attribute__((aligned(__alignof__( ::java::lang::Object )))) crif;
  ::java::awt::image::renderable::ParameterBlock *block;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_renderable_RenderableImageOp__ */
