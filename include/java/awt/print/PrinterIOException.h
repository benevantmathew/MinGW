// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_print_PrinterIOException__
#define __java_awt_print_PrinterIOException__

#pragma interface

#include <java/awt/print/PrinterException.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace print
      {
        class PrinterIOException;
      }
    }
  }
}

class java::awt::print::PrinterIOException : public ::java::awt::print::PrinterException
{
public:
  PrinterIOException (::java::io::IOException *);
  virtual ::java::io::IOException *getIOException () { return mException; }
  virtual ::java::lang::Throwable *getCause () { return reinterpret_cast< ::java::lang::Throwable *> (mException); }
private:
  static const jlong serialVersionUID = 5850870712125932846LL;
  ::java::io::IOException * __attribute__((aligned(__alignof__( ::java::awt::print::PrinterException )))) mException;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_print_PrinterIOException__ */
