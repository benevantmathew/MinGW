// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_PrintJob__
#define __java_awt_PrintJob__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class PrintJob;
      class Dimension;
      class Graphics;
    }
  }
}

class java::awt::PrintJob : public ::java::lang::Object
{
public:
  PrintJob ();
  virtual ::java::awt::Graphics *getGraphics () = 0;
  virtual ::java::awt::Dimension *getPageDimension () = 0;
  virtual jint getPageResolution () = 0;
  virtual jboolean lastPageFirst () = 0;
  virtual void end () = 0;
  virtual void finalize ();

  static ::java::lang::Class class$;
};

#endif /* __java_awt_PrintJob__ */
