// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Transparency__
#define __java_awt_Transparency__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Transparency;
    }
  }
}

class java::awt::Transparency : public ::java::lang::Object
{
public:
  virtual jint getTransparency () = 0;
  static const jint OPAQUE = 1L;
  static const jint BITMASK = 2L;
  static const jint TRANSLUCENT = 3L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_Transparency__ */
