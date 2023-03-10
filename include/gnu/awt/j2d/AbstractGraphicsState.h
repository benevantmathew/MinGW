// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_awt_j2d_AbstractGraphicsState__
#define __gnu_awt_j2d_AbstractGraphicsState__

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
        class ImageObserver;
      }
      class Image;
      class Rectangle;
      class Shape;
      class FontMetrics;
      class Font;
      class Color;
    }
  }
  namespace gnu
  {
    namespace awt
    {
      namespace j2d
      {
        class AbstractGraphicsState;
        class Graphics2DImpl;
      }
    }
  }
}

class gnu::awt::j2d::AbstractGraphicsState : public ::java::lang::Object
{
public:
  virtual void setFrontend (::gnu::awt::j2d::Graphics2DImpl *);
  virtual void dispose ();
  virtual void setColor (::java::awt::Color *) = 0;
  virtual void setPaintMode () = 0;
  virtual void setXORMode (::java::awt::Color *) = 0;
  virtual void setFont (::java::awt::Font *) = 0;
  virtual ::java::awt::FontMetrics *getFontMetrics (::java::awt::Font *) = 0;
  virtual void setClip (::java::awt::Shape *) = 0;
  virtual ::java::awt::Shape *getClip () = 0;
  virtual ::java::awt::Rectangle *getClipBounds () = 0;
  virtual void copyArea (jint, jint, jint, jint, jint, jint) = 0;
  virtual void drawLine (jint, jint, jint, jint) = 0;
  virtual void fillRect (jint, jint, jint, jint) = 0;
  virtual void clearRect (jint, jint, jint, jint) = 0;
  virtual void drawRoundRect (jint, jint, jint, jint, jint, jint) = 0;
  virtual void fillRoundRect (jint, jint, jint, jint, jint, jint) = 0;
  virtual void drawOval (jint, jint, jint, jint) = 0;
  virtual void fillOval (jint, jint, jint, jint) = 0;
  virtual void drawArc (jint, jint, jint, jint, jint, jint) = 0;
  virtual void fillArc (jint, jint, jint, jint, jint, jint) = 0;
  virtual void drawPolyline (jintArray, jintArray, jint) = 0;
  virtual void drawPolygon (jintArray, jintArray, jint) = 0;
  virtual void fillPolygon (jintArray, jintArray, jint) = 0;
  virtual jboolean drawImage (::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *) = 0;
  virtual void draw (::java::awt::Shape *) = 0;
  virtual void fill (::java::awt::Shape *) = 0;
  virtual jboolean hit (::java::awt::Rectangle *, ::java::awt::Shape *, jboolean) = 0;
  virtual void drawString (::java::lang::String *, jint, jint) = 0;
  virtual void drawString (::java::lang::String *, jfloat, jfloat) = 0;
  virtual void translate (jint, jint) = 0;
  virtual void translate (jdouble, jdouble) = 0;
  virtual void rotate (jdouble) = 0;
  virtual void rotate (jdouble, jdouble, jdouble) = 0;
  virtual void scale (jdouble, jdouble) = 0;
  virtual void shear (jdouble, jdouble) = 0;
  virtual ::java::lang::Object *clone ();
  AbstractGraphicsState ();
public: // actually package-private
  ::gnu::awt::j2d::Graphics2DImpl * __attribute__((aligned(__alignof__( ::java::lang::Object )))) frontend;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_awt_j2d_AbstractGraphicsState__ */
