// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_MessageDigest__
#define __java_security_MessageDigest__

#pragma interface

#include <java/security/MessageDigestSpi.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class MessageDigest;
      class Provider;
    }
  }
}

class java::security::MessageDigest : public ::java::security::MessageDigestSpi
{
public:  // actually protected
  MessageDigest (::java::lang::String *);
public:
  static ::java::security::MessageDigest *getInstance (::java::lang::String *);
  static ::java::security::MessageDigest *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::java::security::MessageDigest *getInstance (::java::lang::String *, ::java::security::Provider *);
  ::java::security::Provider *getProvider () { return provider; }
  virtual void update (jbyte);
  virtual void update (jbyteArray, jint, jint);
  virtual void update (jbyteArray);
  virtual jbyteArray digest ();
  virtual jint digest (jbyteArray, jint, jint);
  virtual jbyteArray digest (jbyteArray);
  virtual ::java::lang::String *toString ();
  static jboolean isEqual (jbyteArray, jbyteArray);
  virtual void reset ();
  ::java::lang::String *getAlgorithm () { return algorithm; }
  jint getDigestLength ();
  virtual ::java::lang::Object *clone ();
private:
  ::java::lang::String *digestToString ();
  static ::java::lang::String *MESSAGE_DIGEST;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::security::MessageDigestSpi )))) algorithm;
public: // actually package-private
  ::java::security::Provider *provider;
private:
  jbyteArray lastDigest;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_MessageDigest__ */
