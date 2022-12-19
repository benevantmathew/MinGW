// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_Authenticator__
#define __java_net_Authenticator__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class PasswordAuthentication;
      class InetAddress;
      class Authenticator;
    }
  }
}

class java::net::Authenticator : public ::java::lang::Object
{
public:
  static void setDefault (::java::net::Authenticator *);
  static ::java::net::PasswordAuthentication *requestPasswordAuthentication (::java::net::InetAddress *, jint, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  static ::java::net::PasswordAuthentication *requestPasswordAuthentication (::java::lang::String *, ::java::net::InetAddress *, jint, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  Authenticator ();
public:  // actually protected
  ::java::net::InetAddress *getRequestingSite () { return addr; }
  ::java::lang::String *getRequestingHost () { return host; }
  jint getRequestingPort () { return port; }
  ::java::lang::String *getRequestingProtocol () { return protocol; }
  ::java::lang::String *getRequestingPrompt () { return prompt; }
  ::java::lang::String *getRequestingScheme () { return scheme; }
  virtual ::java::net::PasswordAuthentication *getPasswordAuthentication () { return 0; }
private:
  static ::java::net::Authenticator *defaultAuthenticator;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) host;
  ::java::net::InetAddress *addr;
  jint port;
  ::java::lang::String *protocol;
  ::java::lang::String *prompt;
  ::java::lang::String *scheme;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_Authenticator__ */
