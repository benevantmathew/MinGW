// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_datatransfer_FlavorTable__
#define __java_awt_datatransfer_FlavorTable__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace datatransfer
      {
        class FlavorTable;
        class DataFlavor;
      }
    }
  }
}

class java::awt::datatransfer::FlavorTable : public ::java::lang::Object
{
public:
  virtual ::java::util::List *getNativesForFlavor (::java::awt::datatransfer::DataFlavor *) = 0;
  virtual ::java::util::List *getFlavorsForNative (::java::lang::String *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_datatransfer_FlavorTable__ */
