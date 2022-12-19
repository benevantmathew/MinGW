// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_X509Certificate__
#define __java_security_cert_X509Certificate__

#pragma interface

#include <java/security/cert/Certificate.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace x500
        {
          class X500Principal;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class X509Certificate;
      }
      class Principal;
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::cert::X509Certificate : public ::java::security::cert::Certificate
{
public:  // actually protected
  X509Certificate ();
public:
  virtual void checkValidity () = 0;
  virtual void checkValidity (::java::util::Date *) = 0;
  virtual jint getVersion () = 0;
  virtual ::java::math::BigInteger *getSerialNumber () = 0;
  virtual ::java::security::Principal *getIssuerDN () = 0;
  virtual ::java::security::Principal *getSubjectDN () = 0;
  virtual ::java::util::Date *getNotBefore () = 0;
  virtual ::java::util::Date *getNotAfter () = 0;
  virtual jbyteArray getTBSCertificate () = 0;
  virtual jbyteArray getSignature () = 0;
  virtual ::java::lang::String *getSigAlgName () = 0;
  virtual ::java::lang::String *getSigAlgOID () = 0;
  virtual jbyteArray getSigAlgParams () = 0;
  virtual jbooleanArray getIssuerUniqueID () = 0;
  virtual jbooleanArray getSubjectUniqueID () = 0;
  virtual jbooleanArray getKeyUsage () = 0;
  virtual jint getBasicConstraints () = 0;
  virtual ::java::util::List *getExtendedKeyUsage ();
  virtual ::java::util::Collection *getSubjectAlternativeNames ();
  virtual ::java::util::Collection *getIssuerAlternativeNames ();
  virtual ::javax::security::auth::x500::X500Principal *getSubjectX500Principal ();
  virtual ::javax::security::auth::x500::X500Principal *getIssuerX500Principal ();
private:
  static const jlong serialVersionUID = -2491127588187038216LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_cert_X509Certificate__ */
