// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_RectangularShape__
#define __java_awt_geom_RectangularShape__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      namespace geom
      {
        class RectangularShape;
        class PathIterator;
        class AffineTransform;
        class Dimension2D;
        class Point2D;
        class Rectangle2D;
      }
    }
  }
}

class java::awt::geom::RectangularShape : public ::java::lang::Object
{
public:  // actually protected
  RectangularShape ();
public:
  virtual jdouble getX () = 0;
  virtual jdouble getY () = 0;
  virtual jdouble getWidth () = 0;
  virtual jdouble getHeight () = 0;
  virtual jdouble getMinX ();
  virtual jdouble getMinY ();
  virtual jdouble getMaxX ();
  virtual jdouble getMaxY ();
  virtual jdouble getCenterX ();
  virtual jdouble getCenterY ();
  virtual ::java::awt::geom::Rectangle2D *getFrame ();
  virtual jboolean isEmpty () = 0;
  virtual void setFrame (jdouble, jdouble, jdouble, jdouble) = 0;
  virtual void setFrame (::java::awt::geom::Point2D *, ::java::awt::geom::Dimension2D *);
  virtual void setFrame (::java::awt::geom::Rectangle2D *);
  virtual void setFrameFromDiagonal (jdouble, jdouble, jdouble, jdouble);
  virtual void setFrameFromDiagonal (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual void setFrameFromCenter (jdouble, jdouble, jdouble, jdouble);
  virtual void setFrameFromCenter (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual jboolean contains (::java::awt::geom::Point2D *);
  virtual jboolean intersects (::java::awt::geom::Rectangle2D *);
  virtual jboolean contains (::java::awt::geom::Rectangle2D *);
  virtual ::java::awt::Rectangle *getBounds ();
  virtual ::java::awt::geom::PathIterator *getPathIterator (::java::awt::geom::AffineTransform *, jdouble);
  virtual ::java::lang::Object *clone ();

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_RectangularShape__ */
