// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_IdentityScope__
#define __java_security_IdentityScope__

#pragma interface

#include <java/security/Identity.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class PublicKey;
      class Principal;
      class Identity;
      class IdentityScope;
    }
  }
}

class java::security::IdentityScope : public ::java::security::Identity
{
public:  // actually protected
  IdentityScope ();
public:
  IdentityScope (::java::lang::String *);
  IdentityScope (::java::lang::String *, ::java::security::IdentityScope *);
  static ::java::security::IdentityScope *getSystemScope ();
public:  // actually protected
  static void setSystemScope (::java::security::IdentityScope *);
public:
  virtual jint size () = 0;
  virtual ::java::security::Identity *getIdentity (::java::lang::String *) = 0;
  virtual ::java::security::Identity *getIdentity (::java::security::Principal *);
  virtual ::java::security::Identity *getIdentity (::java::security::PublicKey *) = 0;
  virtual void addIdentity (::java::security::Identity *) = 0;
  virtual void removeIdentity (::java::security::Identity *) = 0;
  virtual ::java::util::Enumeration *identities () = 0;
  virtual ::java::lang::String *toString ();
private:
  static const jlong serialVersionUID = -2337346281189773310LL;
  static ::java::security::IdentityScope *systemScope;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_IdentityScope__ */
