// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_awt_j2d_IntegerGraphicsState__
#define __gnu_awt_j2d_IntegerGraphicsState__

#pragma interface

#include <gnu/awt/j2d/AbstractGraphicsState.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class ImageObserver;
      }
      class Image;
      class Rectangle;
      class FontMetrics;
      class Font;
      class Color;
      class Shape;
    }
  }
  namespace gnu
  {
    namespace awt
    {
      namespace j2d
      {
        class IntegerGraphicsState;
        class DirectRasterGraphics;
      }
    }
  }
}

class gnu::awt::j2d::IntegerGraphicsState : public ::gnu::awt::j2d::AbstractGraphicsState
{
public:
  IntegerGraphicsState (::gnu::awt::j2d::DirectRasterGraphics *);
  virtual ::java::lang::Object *clone ();
  virtual void dispose ();
  virtual void setColor (::java::awt::Color *);
  virtual void setPaintMode ();
  virtual void setXORMode (::java::awt::Color *);
  virtual void setFont (::java::awt::Font *);
  virtual ::java::awt::FontMetrics *getFontMetrics (::java::awt::Font *);
  virtual void setClip (::java::awt::Shape *);
  virtual ::java::awt::Shape *getClip ();
  virtual ::java::awt::Rectangle *getClipBounds ();
  virtual void copyArea (jint, jint, jint, jint, jint, jint);
  virtual void drawLine (jint, jint, jint, jint);
  virtual void fillRect (jint, jint, jint, jint);
  virtual void clearRect (jint, jint, jint, jint);
  virtual void drawRoundRect (jint, jint, jint, jint, jint, jint);
  virtual void fillRoundRect (jint, jint, jint, jint, jint, jint);
  virtual void drawOval (jint, jint, jint, jint);
  virtual void fillOval (jint, jint, jint, jint);
  virtual void drawArc (jint, jint, jint, jint, jint, jint);
  virtual void fillArc (jint, jint, jint, jint, jint, jint);
  virtual void drawPolyline (jintArray, jintArray, jint);
  virtual void drawPolygon (jintArray, jintArray, jint);
  virtual void fillPolygon (jintArray, jintArray, jint);
  virtual jboolean drawImage (::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *);
  virtual void draw (::java::awt::Shape *);
  virtual void fill (::java::awt::Shape *);
  virtual jboolean hit (::java::awt::Rectangle *, ::java::awt::Shape *, jboolean);
  virtual void drawString (::java::lang::String *, jint, jint);
  virtual void drawString (::java::lang::String *, jfloat, jfloat);
  virtual void translate (jint, jint);
  virtual void translate (jdouble, jdouble);
  virtual void rotate (jdouble);
  virtual void rotate (jdouble, jdouble, jdouble);
  virtual void scale (jdouble, jdouble);
  virtual void shear (jdouble, jdouble);
private:
  void needAffineTransform ();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::gnu::awt::j2d::AbstractGraphicsState ))))  tx;
  jint ty;
  ::gnu::awt::j2d::DirectRasterGraphics *directGfx;
  ::java::awt::Shape *clip;

  friend class gnu_awt_j2d_IntegerGraphicsState$ScreenCoupledImage;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_awt_j2d_IntegerGraphicsState__ */
