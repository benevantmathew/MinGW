// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_spec_DSAParameterSpec__
#define __java_security_spec_DSAParameterSpec__

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
        class DSAParameterSpec;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::spec::DSAParameterSpec : public ::java::lang::Object
{
public:
  DSAParameterSpec (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  virtual ::java::math::BigInteger *getP () { return p; }
  virtual ::java::math::BigInteger *getQ () { return q; }
  virtual ::java::math::BigInteger *getG () { return g; }
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::lang::Object )))) p;
  ::java::math::BigInteger *q;
  ::java::math::BigInteger *g;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_spec_DSAParameterSpec__ */
