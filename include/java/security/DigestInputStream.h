// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_DigestInputStream__
#define __java_security_DigestInputStream__

#pragma interface

#include <java/io/FilterInputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class DigestInputStream;
      class MessageDigest;
    }
  }
}

class java::security::DigestInputStream : public ::java::io::FilterInputStream
{
public:
  DigestInputStream (::java::io::InputStream *, ::java::security::MessageDigest *);
  virtual ::java::security::MessageDigest *getMessageDigest () { return digest; }
  virtual void setMessageDigest (::java::security::MessageDigest *);
  virtual jint read ();
  virtual jint read (jbyteArray, jint, jint);
  virtual void on (jboolean);
  virtual ::java::lang::String *toString ();
public:  // actually protected
  ::java::security::MessageDigest * __attribute__((aligned(__alignof__( ::java::io::FilterInputStream )))) digest;
private:
  jboolean state;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_DigestInputStream__ */
