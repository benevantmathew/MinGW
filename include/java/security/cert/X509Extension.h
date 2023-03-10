// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_X509Extension__
#define __java_security_cert_X509Extension__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
        class X509Extension;
      }
    }
  }
}

class java::security::cert::X509Extension : public ::java::lang::Object
{
public:
  virtual jboolean hasUnsupportedCriticalExtension () = 0;
  virtual ::java::util::Set *getCriticalExtensionOIDs () = 0;
  virtual ::java::util::Set *getNonCriticalExtensionOIDs () = 0;
  virtual jbyteArray getExtensionValue (::java::lang::String *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_cert_X509Extension__ */
