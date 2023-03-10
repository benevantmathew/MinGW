// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_GeneralPath__
#define __java_awt_geom_GeneralPath__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      namespace geom
      {
        class GeneralPath;
        class Rectangle2D;
        class AffineTransform;
        class Point2D;
        class PathIterator;
      }
      class Shape;
    }
  }
}

class java::awt::geom::GeneralPath : public ::java::lang::Object
{
public:
  GeneralPath ();
  GeneralPath (jint);
  GeneralPath (jint, jint);
  GeneralPath (::java::awt::Shape *);
  void moveTo (jfloat, jfloat);
  void lineTo (jfloat, jfloat);
  void quadTo (jfloat, jfloat, jfloat, jfloat);
  void curveTo (jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);
  void closePath ();
  void append (::java::awt::Shape *, jboolean);
  void append (::java::awt::geom::PathIterator *, jboolean);
  jint getWindingRule () { return rule; }
  void setWindingRule (jint);
  ::java::awt::geom::Point2D *getCurrentPoint ();
  void reset ();
  void transform (::java::awt::geom::AffineTransform *);
  ::java::awt::Shape *createTransformedShape (::java::awt::geom::AffineTransform *);
  ::java::awt::Rectangle *getBounds ();
  ::java::awt::geom::Rectangle2D *getBounds2D ();
  jboolean contains (jdouble, jdouble);
  jboolean contains (::java::awt::geom::Point2D *);
  jboolean contains (jdouble, jdouble, jdouble, jdouble);
  jboolean contains (::java::awt::geom::Rectangle2D *);
  jboolean intersects (jdouble, jdouble, jdouble, jdouble);
  jboolean intersects (::java::awt::geom::Rectangle2D *);
  ::java::awt::geom::PathIterator *getPathIterator (::java::awt::geom::AffineTransform *);
  ::java::awt::geom::PathIterator *getPathIterator (::java::awt::geom::AffineTransform *, jdouble);
  ::java::lang::Object *clone ();
private:
  void ensureSize (jint);
public:
  static const jint WIND_EVEN_ODD = 0L;
  static const jint WIND_NON_ZERO = 1L;
private:
  static const jint INIT_SIZE = 20L;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  rule;
  jbyteArray types;
  jfloatArray points;
  jint subpath;
  jint index;

  friend class java_awt_geom_GeneralPath$GeneralPathIterator;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_GeneralPath__ */
