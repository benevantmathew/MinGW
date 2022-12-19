// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_Certificate__
#define __java_security_Certificate__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class Certificate;
      class PublicKey;
      class Principal;
    }
  }
}

class java::security::Certificate : public ::java::lang::Object
{
public:
  virtual ::java::security::Principal *getGuarantor () = 0;
  virtual ::java::security::Principal *getPrincipal () = 0;
  virtual ::java::security::PublicKey *getPublicKey () = 0;
  virtual void encode (::java::io::OutputStream *) = 0;
  virtual void decode (::java::io::InputStream *) = 0;
  virtual ::java::lang::String *getFormat () = 0;
  virtual ::java::lang::String *toString (jboolean) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_Certificate__ */
