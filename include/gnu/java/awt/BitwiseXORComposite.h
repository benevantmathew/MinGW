// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_BitwiseXORComposite__
#define __gnu_java_awt_BitwiseXORComposite__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        class BitwiseXORComposite;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class CompositeContext;
      class RenderingHints;
      namespace image
      {
        class ColorModel;
      }
      class Color;
    }
  }
}

class gnu::java::awt::BitwiseXORComposite : public ::java::lang::Object
{
public:
  BitwiseXORComposite (::java::awt::Color *);
  virtual ::java::awt::CompositeContext *createContext (::java::awt::image::ColorModel *, ::java::awt::image::ColorModel *, ::java::awt::RenderingHints *);
public:  // actually protected
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::java::lang::Object )))) xorColor;

  friend class gnu_java_awt_BitwiseXORComposite$IntContext;
  friend class gnu_java_awt_BitwiseXORComposite$GeneralContext;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_BitwiseXORComposite__ */
