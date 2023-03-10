// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_provider_SHA1PRNG__
#define __gnu_java_security_provider_SHA1PRNG__

#pragma interface

#include <java/security/SecureRandomSpi.h>
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
          class SHA1PRNG;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class MessageDigest;
    }
  }
}

class gnu::java::security::provider::SHA1PRNG : public ::java::security::SecureRandomSpi
{
public:
  SHA1PRNG ();
  virtual void engineSetSeed (jbyteArray);
  virtual void engineNextBytes (jbyteArray);
  virtual jbyteArray engineGenerateSeed (jint);
private:
  void ensureIsSeeded ();
public: // actually package-private
  ::java::security::MessageDigest * __attribute__((aligned(__alignof__( ::java::security::SecureRandomSpi )))) digest;
  jbyteArray seed;
  jbyteArray data;
  jint seedpos;
  jint datapos;
private:
  jboolean seeded;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_provider_SHA1PRNG__ */
