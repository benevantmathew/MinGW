// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLStreamHandlerFactory__
#define __java_net_URLStreamHandlerFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URLStreamHandlerFactory;
      class URLStreamHandler;
    }
  }
}

class java::net::URLStreamHandlerFactory : public ::java::lang::Object
{
public:
  virtual ::java::net::URLStreamHandler *createURLStreamHandler (::java::lang::String *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_net_URLStreamHandlerFactory__ */
