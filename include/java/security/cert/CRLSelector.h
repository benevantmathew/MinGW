// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CRLSelector__
#define __java_security_cert_CRLSelector__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class CRLSelector;
        class CRL;
      }
    }
  }
}

class java::security::cert::CRLSelector : public ::java::lang::Object
{
public:
  virtual ::java::lang::Object *clone () = 0;
  virtual jboolean match (::java::security::cert::CRL *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_cert_CRLSelector__ */
