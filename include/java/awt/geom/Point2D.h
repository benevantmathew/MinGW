// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_Point2D__
#define __java_awt_geom_Point2D__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class Point2D;
      }
    }
  }
}

class java::awt::geom::Point2D : public ::java::lang::Object
{
public:  // actually protected
  Point2D ();
public:
  virtual jdouble getX () = 0;
  virtual jdouble getY () = 0;
  virtual void setLocation (jdouble, jdouble) = 0;
  virtual void setLocation (::java::awt::geom::Point2D *);
  static jdouble distanceSq (jdouble, jdouble, jdouble, jdouble);
  static jdouble distance (jdouble, jdouble, jdouble, jdouble);
  virtual jdouble distanceSq (jdouble, jdouble);
  virtual jdouble distanceSq (::java::awt::geom::Point2D *);
  virtual jdouble distance (jdouble, jdouble);
  virtual jdouble distance (::java::awt::geom::Point2D *);
  virtual ::java::lang::Object *clone ();
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);

  friend class java_awt_geom_Point2D$Float;
  friend class java_awt_geom_Point2D$Double;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_Point2D__ */
