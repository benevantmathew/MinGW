// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_DatagramSocketImplFactory__
#define __java_net_DatagramSocketImplFactory__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class DatagramSocketImplFactory;
      class DatagramSocketImpl;
    }
  }
}

class java::net::DatagramSocketImplFactory : public ::java::lang::Object
{
public:
  virtual ::java::net::DatagramSocketImpl *createDatagramSocketImpl () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_net_DatagramSocketImplFactory__ */
