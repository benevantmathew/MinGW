// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_renderable_RenderContext__
#define __java_awt_image_renderable_RenderContext__

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
        namespace renderable
        {
          class RenderContext;
        }
      }
      class RenderingHints;
      class Shape;
      namespace geom
      {
        class AffineTransform;
      }
    }
  }
}

class java::awt::image::renderable::RenderContext : public ::java::lang::Object
{
public:
  RenderContext (::java::awt::geom::AffineTransform *, ::java::awt::Shape *, ::java::awt::RenderingHints *);
  RenderContext (::java::awt::geom::AffineTransform *);
  RenderContext (::java::awt::geom::AffineTransform *, ::java::awt::RenderingHints *);
  RenderContext (::java::awt::geom::AffineTransform *, ::java::awt::Shape *);
  virtual ::java::awt::RenderingHints *getRenderingHints () { return hints; }
  virtual void setRenderingHints (::java::awt::RenderingHints *);
  virtual void setTransform (::java::awt::geom::AffineTransform *);
  virtual void preConcatenateTransform (::java::awt::geom::AffineTransform *);
  virtual void preConcetenateTransform (::java::awt::geom::AffineTransform *);
  virtual void concatenateTransform (::java::awt::geom::AffineTransform *);
  virtual void concetenateTransform (::java::awt::geom::AffineTransform *);
  virtual ::java::awt::geom::AffineTransform *getTransform () { return xform; }
  virtual void setAreaOfInterest (::java::awt::Shape *);
  virtual ::java::awt::Shape *getAreaOfInterest () { return aoi; }
  virtual ::java::lang::Object *clone ();
private:
  ::java::awt::geom::AffineTransform * __attribute__((aligned(__alignof__( ::java::lang::Object )))) xform;
  ::java::awt::Shape *aoi;
  ::java::awt::RenderingHints *hints;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_renderable_RenderContext__ */
