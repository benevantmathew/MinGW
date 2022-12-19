// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CertificateFactorySpi__
#define __java_security_cert_CertificateFactorySpi__

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
        class CertificateFactorySpi;
        class CertPath;
        class CRL;
        class Certificate;
      }
    }
  }
}

class java::security::cert::CertificateFactorySpi : public ::java::lang::Object
{
public:
  CertificateFactorySpi ();
  virtual ::java::security::cert::Certificate *engineGenerateCertificate (::java::io::InputStream *) = 0;
  virtual ::java::util::Collection *engineGenerateCertificates (::java::io::InputStream *) = 0;
  virtual ::java::security::cert::CRL *engineGenerateCRL (::java::io::InputStream *) = 0;
  virtual ::java::util::Collection *engineGenerateCRLs (::java::io::InputStream *) = 0;
  virtual ::java::security::cert::CertPath *engineGenerateCertPath (::java::io::InputStream *);
  virtual ::java::security::cert::CertPath *engineGenerateCertPath (::java::io::InputStream *, ::java::lang::String *);
  virtual ::java::security::cert::CertPath *engineGenerateCertPath (::java::util::List *);
  virtual ::java::util::Iterator *engineGetCertPathEncodings ();

  static ::java::lang::Class class$;
};

#endif /* __java_security_cert_CertificateFactorySpi__ */
