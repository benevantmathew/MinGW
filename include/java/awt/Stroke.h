// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Stroke__
#define __java_awt_Stroke__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Stroke;
      class Shape;
    }
  }
}

class java::awt::Stroke : public ::java::lang::Object
{
public:
  virtual ::java::awt::Shape *createStrokedShape (::java::awt::Shape *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_Stroke__ */
