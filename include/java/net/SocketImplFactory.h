// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_SocketImplFactory__
#define __java_net_SocketImplFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class SocketImplFactory;
      class SocketImpl;
    }
  }
}

class java::net::SocketImplFactory : public ::java::lang::Object
{
public:
  virtual ::java::net::SocketImpl *createSocketImpl () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_net_SocketImplFactory__ */
