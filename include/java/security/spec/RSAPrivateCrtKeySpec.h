// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_spec_RSAPrivateCrtKeySpec__
#define __java_security_spec_RSAPrivateCrtKeySpec__

#pragma interface

#include <java/security/spec/RSAPrivateKeySpec.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class RSAPrivateCrtKeySpec;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::spec::RSAPrivateCrtKeySpec : public ::java::security::spec::RSAPrivateKeySpec
{
public:
  RSAPrivateCrtKeySpec (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  virtual ::java::math::BigInteger *getPublicExponent () { return publicExponent; }
  virtual ::java::math::BigInteger *getPrimeP () { return primeP; }
  virtual ::java::math::BigInteger *getPrimeQ () { return primeQ; }
  virtual ::java::math::BigInteger *getPrimeExponentP () { return primeExponentP; }
  virtual ::java::math::BigInteger *getPrimeExponentQ () { return primeExponentQ; }
  virtual ::java::math::BigInteger *getCrtCoefficient () { return crtCoefficient; }
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::security::spec::RSAPrivateKeySpec )))) publicExponent;
  ::java::math::BigInteger *primeP;
  ::java::math::BigInteger *primeQ;
  ::java::math::BigInteger *primeExponentP;
  ::java::math::BigInteger *primeExponentQ;
  ::java::math::BigInteger *crtCoefficient;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_spec_RSAPrivateCrtKeySpec__ */
