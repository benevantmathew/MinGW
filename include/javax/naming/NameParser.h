// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_NameParser__
#define __javax_naming_NameParser__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      class NameParser;
      class Name;
    }
  }
}

class javax::naming::NameParser : public ::java::lang::Object
{
public:
  virtual ::javax::naming::Name *parse (::java::lang::String *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_naming_NameParser__ */
