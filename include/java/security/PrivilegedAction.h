// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_PrivilegedAction__
#define __java_security_PrivilegedAction__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class PrivilegedAction;
    }
  }
}

class java::security::PrivilegedAction : public ::java::lang::Object
{
public:
  virtual ::java::lang::Object *run () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_PrivilegedAction__ */
