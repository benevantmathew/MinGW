// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_DomainCombiner__
#define __java_security_DomainCombiner__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class DomainCombiner;
      class ProtectionDomain;
    }
  }
}

class java::security::DomainCombiner : public ::java::lang::Object
{
public:
  virtual JArray< ::java::security::ProtectionDomain *> *combine (JArray< ::java::security::ProtectionDomain *> *, JArray< ::java::security::ProtectionDomain *> *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_DomainCombiner__ */
