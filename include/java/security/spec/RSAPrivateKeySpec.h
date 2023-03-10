// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_spec_RSAPrivateKeySpec__
#define __java_security_spec_RSAPrivateKeySpec__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class RSAPrivateKeySpec;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::spec::RSAPrivateKeySpec : public ::java::lang::Object
{
public:
  RSAPrivateKeySpec (::java::math::BigInteger *, ::java::math::BigInteger *);
  virtual ::java::math::BigInteger *getModulus () { return modulus; }
  virtual ::java::math::BigInteger *getPrivateExponent () { return privateExponent; }
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::lang::Object )))) modulus;
  ::java::math::BigInteger *privateExponent;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_spec_RSAPrivateKeySpec__ */
