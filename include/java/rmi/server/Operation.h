// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_Operation__
#define __java_rmi_server_Operation__

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
        class Operation;
      }
    }
  }
}

class java::rmi::server::Operation : public ::java::lang::Object
{
public:
  Operation (::java::lang::String *);
  virtual ::java::lang::String *getOperation () { return operation; }
  virtual ::java::lang::String *toString () { return operation; }
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) operation;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_server_Operation__ */
