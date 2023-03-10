// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Dimension__
#define __java_awt_Dimension__

#pragma interface

#include <java/awt/geom/Dimension2D.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Dimension;
    }
  }
}

class java::awt::Dimension : public ::java::awt::geom::Dimension2D
{
public:
  Dimension ();
  Dimension (::java::awt::Dimension *);
  Dimension (jint, jint);
  virtual jdouble getWidth ();
  virtual jdouble getHeight ();
  virtual void setSize (jdouble, jdouble);
  virtual ::java::awt::Dimension *getSize ();
  virtual void setSize (::java::awt::Dimension *);
  virtual void setSize (jint, jint);
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = 4723952579491349524LL;
public:
  jint __attribute__((aligned(__alignof__( ::java::awt::geom::Dimension2D ))))  width;
  jint height;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_Dimension__ */
