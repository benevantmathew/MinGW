// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Graphics2D__
#define __java_awt_Graphics2D__

#pragma interface

#include <java/awt/Graphics.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class AttributedCharacterIterator;
    }
    namespace awt
    {
      class Graphics2D;
      namespace font
      {
        class GlyphVector;
        class FontRenderContext;
      }
      class Color;
      class RenderingHints;
      class RenderingHints$Key;
      class Stroke;
      class Paint;
      class Composite;
      class GraphicsConfiguration;
      class Rectangle;
      namespace image
      {
        namespace renderable
        {
          class RenderableImage;
        }
        class RenderedImage;
        class BufferedImageOp;
        class BufferedImage;
        class ImageObserver;
      }
      namespace geom
      {
        class AffineTransform;
      }
      class Image;
      class Shape;
    }
  }
}

class java::awt::Graphics2D : public ::java::awt::Graphics
{
public:  // actually protected
  Graphics2D ();
public:
  virtual void draw3DRect (jint, jint, jint, jint, jboolean);
  virtual void fill3DRect (jint, jint, jint, jint, jboolean);
  virtual void draw (::java::awt::Shape *) = 0;
  virtual jboolean drawImage (::java::awt::Image *, ::java::awt::geom::AffineTransform *, ::java::awt::image::ImageObserver *) = 0;
  virtual void drawImage (::java::awt::image::BufferedImage *, ::java::awt::image::BufferedImageOp *, jint, jint) = 0;
  virtual void drawRenderedImage (::java::awt::image::RenderedImage *, ::java::awt::geom::AffineTransform *) = 0;
  virtual void drawRenderableImage (::java::awt::image::renderable::RenderableImage *, ::java::awt::geom::AffineTransform *) = 0;
  virtual void drawString (::java::lang::String *, jint, jint) = 0;
  virtual void drawString (::java::lang::String *, jfloat, jfloat) = 0;
  virtual void drawString (::java::text::AttributedCharacterIterator *, jint, jint) = 0;
  virtual void drawString (::java::text::AttributedCharacterIterator *, jfloat, jfloat) = 0;
  virtual void fill (::java::awt::Shape *) = 0;
  virtual jboolean hit (::java::awt::Rectangle *, ::java::awt::Shape *, jboolean) = 0;
  virtual ::java::awt::GraphicsConfiguration *getDeviceConfiguration () = 0;
  virtual void setComposite (::java::awt::Composite *) = 0;
  virtual void setPaint (::java::awt::Paint *) = 0;
  virtual void setStroke (::java::awt::Stroke *) = 0;
  virtual void setRenderingHint (::java::awt::RenderingHints$Key *, ::java::lang::Object *) = 0;
  virtual ::java::lang::Object *getRenderingHint (::java::awt::RenderingHints$Key *) = 0;
  virtual void setRenderingHints (::java::util::Map *) = 0;
  virtual void addRenderingHints (::java::util::Map *) = 0;
  virtual ::java::awt::RenderingHints *getRenderingHints () = 0;
  virtual void translate (jint, jint) = 0;
  virtual void translate (jdouble, jdouble) = 0;
  virtual void rotate (jdouble) = 0;
  virtual void rotate (jdouble, jdouble, jdouble) = 0;
  virtual void scale (jdouble, jdouble) = 0;
  virtual void shear (jdouble, jdouble) = 0;
  virtual void transform (::java::awt::geom::AffineTransform *) = 0;
  virtual void setTransform (::java::awt::geom::AffineTransform *) = 0;
  virtual ::java::awt::geom::AffineTransform *getTransform () = 0;
  virtual ::java::awt::Paint *getPaint () = 0;
  virtual ::java::awt::Composite *getComposite () = 0;
  virtual void setBackground (::java::awt::Color *) = 0;
  virtual ::java::awt::Color *getBackground () = 0;
  virtual ::java::awt::Stroke *getStroke () = 0;
  virtual void clip (::java::awt::Shape *) = 0;
  virtual ::java::awt::font::FontRenderContext *getFontRenderContext () = 0;
  virtual void drawGlyphVector (::java::awt::font::GlyphVector *, jfloat, jfloat) = 0;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_Graphics2D__ */
