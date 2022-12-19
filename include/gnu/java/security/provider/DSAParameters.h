// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_provider_DSAParameters__
#define __gnu_java_security_provider_DSAParameters__

#pragma interface

#include <java/security/AlgorithmParametersSpi.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace provider
        {
          class DSAParameters;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class gnu::java::security::provider::DSAParameters : public ::java::security::AlgorithmParametersSpi
{
public:
  virtual void engineInit (::java::security::spec::AlgorithmParameterSpec *);
  virtual void engineInit (jbyteArray);
  virtual void engineInit (jbyteArray, ::java::lang::String *);
  virtual ::java::security::spec::AlgorithmParameterSpec *engineGetParameterSpec (::java::lang::Class *);
  virtual jbyteArray engineGetEncoded ();
  virtual jbyteArray engineGetEncoded (::java::lang::String *);
  virtual ::java::lang::String *engineToString ();
  DSAParameters ();
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::security::AlgorithmParametersSpi )))) q;
  ::java::math::BigInteger *p;
  ::java::math::BigInteger *g;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_provider_DSAParameters__ */
