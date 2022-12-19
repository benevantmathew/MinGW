// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_interfaces_RSAPrivateKey__
#define __java_security_interfaces_RSAPrivateKey__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace interfaces
      {
        class RSAPrivateKey;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::interfaces::RSAPrivateKey : public ::java::lang::Object
{
public:
  virtual ::java::math::BigInteger *getPrivateExponent () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_interfaces_RSAPrivateKey__ */
