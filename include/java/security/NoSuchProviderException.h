// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_NoSuchProviderException__
#define __java_security_NoSuchProviderException__

#pragma interface

#include <java/security/GeneralSecurityException.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class NoSuchProviderException;
    }
  }
}

class java::security::NoSuchProviderException : public ::java::security::GeneralSecurityException
{
public:
  NoSuchProviderException ();
  NoSuchProviderException (::java::lang::String *);
private:
  static const jlong serialVersionUID = 8488111756688534474LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_NoSuchProviderException__ */
