// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_X509Certificate__
#define __gnu_java_security_x509_X509Certificate__

#pragma interface

#include <java/security/cert/X509Certificate.h>
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
      class Signature;
      class Principal;
      class PublicKey;
    }
    namespace math
    {
      class BigInteger;
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
          class X509Certificate;
        }
        namespace der
        {
          class BitString;
        }
        class OID;
      }
    }
  }
}

class gnu::java::security::x509::X509Certificate : public ::java::security::cert::X509Certificate
{
public:
  X509Certificate (::java::io::InputStream *);
  virtual void checkValidity ();
  virtual void checkValidity (::java::util::Date *);
  virtual jint getVersion () { return version; }
  virtual ::java::math::BigInteger *getSerialNumber () { return serialNo; }
  virtual ::java::security::Principal *getIssuerDN ();
  virtual ::javax::security::auth::x500::X500Principal *getIssuerX500Principal () { return issuer; }
  virtual ::java::security::Principal *getSubjectDN ();
  virtual ::javax::security::auth::x500::X500Principal *getSubjectX500Principal () { return subject; }
  virtual ::java::util::Date *getNotBefore ();
  virtual ::java::util::Date *getNotAfter ();
  virtual jbyteArray getTBSCertificate ();
  virtual jbyteArray getSignature ();
  virtual ::java::lang::String *getSigAlgName ();
  virtual ::java::lang::String *getSigAlgOID ();
  virtual jbyteArray getSigAlgParams ();
  virtual jbooleanArray getIssuerUniqueID ();
  virtual jbooleanArray getSubjectUniqueID ();
  virtual jbooleanArray getKeyUsage ();
  virtual ::java::util::List *getExtendedKeyUsage ();
  virtual jint getBasicConstraints () { return basicConstraints; }
  virtual ::java::util::Collection *getSubjectAlternativeNames ();
  virtual ::java::util::Collection *getIssuerAlternativeNames ();
  virtual jboolean hasUnsupportedCriticalExtension ();
  virtual ::java::util::Set *getCriticalExtensionOIDs ();
  virtual ::java::util::Set *getNonCriticalExtensionOIDs ();
  virtual jbyteArray getExtensionValue (::java::lang::String *);
  virtual jbyteArray getEncoded ();
  virtual void verify (::java::security::PublicKey *);
  virtual void verify (::java::security::PublicKey *, ::java::lang::String *);
  virtual ::java::lang::String *toString ();
  virtual ::java::security::PublicKey *getPublicKey () { return subjectKey; }
public:  // actually protected
  virtual ::java::lang::Object *writeReplace ();
private:
  void doVerify (::java::security::Signature *, ::java::security::PublicKey *);
  ::java::util::List *getAltNames (jbyteArray);
  void parse (::java::io::InputStream *);
  static ::gnu::java::security::OID *ID_DSA;
  static ::gnu::java::security::OID *ID_DSA_WITH_SHA1;
  static ::gnu::java::security::OID *ID_RSA;
  static ::gnu::java::security::OID *ID_RSA_WITH_MD2;
  static ::gnu::java::security::OID *ID_RSA_WITH_MD5;
  static ::gnu::java::security::OID *ID_RSA_WITH_SHA1;
  static ::gnu::java::security::OID *ID_EXTENSION;
  static ::gnu::java::security::OID *ID_KEY_USAGE;
  static ::gnu::java::security::OID *ID_BASIC_CONSTRAINTS;
  static ::gnu::java::security::OID *ID_EXT_KEY_USAGE;
  static const jint OTHER_NAME = 0L;
  static const jint RFC882_NAME = 1L;
  static const jint DNS_NAME = 2L;
  static const jint X400_ADDRESS = 3L;
  static const jint DIRECTORY_NAME = 4L;
  static const jint EDI_PARTY_NAME = 5L;
  static const jint URI = 6L;
  static const jint IP_ADDRESS = 7L;
  static const jint REGISTERED_ID = 8L;
  jbyteArray __attribute__((aligned(__alignof__( ::java::security::cert::X509Certificate ))))  encoded;
  jbyteArray tbsCertBytes;
  jint version;
  ::java::math::BigInteger *serialNo;
  ::gnu::java::security::OID *algId;
  jbyteArray algVal;
  ::javax::security::auth::x500::X500Principal *issuer;
  ::java::util::Date *notBefore;
  ::java::util::Date *notAfter;
  ::javax::security::auth::x500::X500Principal *subject;
  ::java::security::PublicKey *subjectKey;
  ::gnu::java::security::der::BitString *issuerUniqueId;
  ::gnu::java::security::der::BitString *subjectUniqueId;
  ::java::util::HashMap *extensions;
  ::java::util::HashSet *critOids;
  ::java::util::HashSet *nonCritOids;
  ::gnu::java::security::der::BitString *keyUsage;
  jint basicConstraints;
  ::gnu::java::security::OID *sigAlgId;
  jbyteArray sigAlgVal;
  jbyteArray signature;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_x509_X509Certificate__ */
