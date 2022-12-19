// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_ldap_LdapReferralException__
#define __javax_naming_ldap_LdapReferralException__

#pragma interface

#include <javax/naming/ReferralException.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace ldap
      {
        class LdapReferralException;
        class Control;
      }
      class Context;
    }
  }
}

class javax::naming::ldap::LdapReferralException : public ::javax::naming::ReferralException
{
public:  // actually protected
  LdapReferralException ();
  LdapReferralException (::java::lang::String *);
public:
  virtual ::javax::naming::Context *getReferralContext () = 0;
  virtual ::javax::naming::Context *getReferralContext (::java::util::Hashtable *) = 0;
  virtual ::javax::naming::Context *getReferralContext (::java::util::Hashtable *, JArray< ::javax::naming::ldap::Control *> *) = 0;

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_ldap_LdapReferralException__ */
