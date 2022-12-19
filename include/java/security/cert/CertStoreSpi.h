// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CertStoreSpi__
#define __java_security_cert_CertStoreSpi__

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
        class CertStoreSpi;
        class CRLSelector;
        class CertSelector;
        class CertStoreParameters;
      }
    }
  }
}

class java::security::cert::CertStoreSpi : public ::java::lang::Object
{
public:
  CertStoreSpi (::java::security::cert::CertStoreParameters *);
  virtual ::java::util::Collection *engineGetCertificates (::java::security::cert::CertSelector *) = 0;
  virtual ::java::util::Collection *engineGetCRLs (::java::security::cert::CRLSelector *) = 0;

  static ::java::lang::Class class$;
};

#endif /* __java_security_cert_CertStoreSpi__ */
