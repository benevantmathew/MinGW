// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RMIServerSocketFactory__
#define __java_rmi_server_RMIServerSocketFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class RMIServerSocketFactory;
      }
    }
    namespace net
    {
      class ServerSocket;
    }
  }
}

class java::rmi::server::RMIServerSocketFactory : public ::java::lang::Object
{
public:
  virtual ::java::net::ServerSocket *createServerSocket (jint) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_rmi_server_RMIServerSocketFactory__ */
