// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_X509CRL__
#define __gnu_java_security_x509_X509CRL__

#pragma interface

#include <java/security/cert/X509CRL.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace math
    {
      class BigInteger;
    }
    namespace security
    {
      class Signature;
      namespace cert
      {
        class Certificate;
        class X509CRLEntry;
      }
      class Principal;
      class PublicKey;
    }
  }
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
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace x509
        {
          class X509CRL;
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::X509CRL : public ::java::security::cert::X509CRL
{
public:
  X509CRL (::java::io::InputStream *);
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual jbyteArray getEncoded ();
  virtual void verify (::java::security::PublicKey *);
  virtual void verify (::java::security::PublicKey *, ::java::lang::String *);
  virtual jint getVersion () { return version; }
  virtual ::java::security::Principal *getIssuerDN () { return reinterpret_cast< ::java::security::Principal *> (issuerDN); }
  virtual ::javax::security::auth::x500::X500Principal *getIssuerX500Principal () { return issuerDN; }
  virtual ::java::util::Date *getThisUpdate ();
  virtual ::java::util::Date *getNextUpdate ();
  virtual ::java::security::cert::X509CRLEntry *getRevokedCertificate (::java::math::BigInteger *);
  virtual ::java::util::Set *getRevokedCertificates ();
  virtual jbyteArray getTBSCertList ();
  virtual jbyteArray getSignature ();
  virtual ::java::lang::String *getSigAlgName ();
  virtual ::java::lang::String *getSigAlgOID ();
  virtual jbyteArray getSigAlgParams ();
  virtual jboolean hasUnsupportedCriticalExtension ();
  virtual ::java::util::Set *getCriticalExtensionOIDs ();
  virtual ::java::util::Set *getNonCriticalExtensionOIDs ();
  virtual jbyteArray getExtensionValue (::java::lang::String *);
  virtual ::java::lang::String *toString ();
  virtual jboolean isRevoked (::java::security::cert::Certificate *);
private:
  void doVerify (::java::security::Signature *, ::java::security::PublicKey *);
  void parse (::java::io::InputStream *);
  static ::gnu::java::security::OID *ID_DSA;
  static ::gnu::java::security::OID *ID_DSA_WITH_SHA1;
  static ::gnu::java::security::OID *ID_RSA;
  static ::gnu::java::security::OID *ID_RSA_WITH_MD2;
  static ::gnu::java::security::OID *ID_RSA_WITH_MD5;
  static ::gnu::java::security::OID *ID_RSA_WITH_SHA1;
  jbyteArray __attribute__((aligned(__alignof__( ::java::security::cert::X509CRL ))))  encoded;
  jbyteArray tbsCRLBytes;
  jint version;
  ::gnu::java::security::OID *algId;
  jbyteArray algParams;
  ::java::util::Date *thisUpdate;
  ::java::util::Date *nextUpdate;
  ::javax::security::auth::x500::X500Principal *issuerDN;
  ::java::util::HashMap *revokedCerts;
  ::java::util::HashMap *extensions;
  ::java::util::HashSet *critOids;
  ::java::util::HashSet *nonCritOids;
  ::gnu::java::security::OID *sigAlg;
  jbyteArray sigAlgParams;
  jbyteArray rawSig;
  jbyteArray signature;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_X509CRL__ */
