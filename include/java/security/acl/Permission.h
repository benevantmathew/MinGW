// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_acl_Permission__
#define __java_security_acl_Permission__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace acl
      {
        class Permission;
      }
    }
  }
}

class java::security::acl::Permission : public ::java::lang::Object
{
public:
  virtual jboolean equals (::java::lang::Object *) = 0;
  virtual ::java::lang::String *toString () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_acl_Permission__ */
