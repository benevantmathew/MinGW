// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_Referenceable__
#define __javax_naming_Referenceable__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      class Referenceable;
      class Reference;
    }
  }
}

class javax::naming::Referenceable : public ::java::lang::Object
{
public:
  virtual ::javax::naming::Reference *getReference () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_naming_Referenceable__ */
