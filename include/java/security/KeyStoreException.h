// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_KeyStoreException__
#define __java_security_KeyStoreException__

#pragma interface

#include <java/security/GeneralSecurityException.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class KeyStoreException;
    }
  }
}

class java::security::KeyStoreException : public ::java::security::GeneralSecurityException
{
public:
  KeyStoreException ();
  KeyStoreException (::java::lang::String *);
private:
  static const jlong serialVersionUID = -1119353179322377262LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_KeyStoreException__ */
