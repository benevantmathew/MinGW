// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_rmi_CORBA_PortableRemoteObjectDelegate__
#define __javax_rmi_CORBA_PortableRemoteObjectDelegate__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace rmi
    {
      namespace CORBA
      {
        class PortableRemoteObjectDelegate;
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
      class Remote;
    }
  }
}

class javax::rmi::CORBA::PortableRemoteObjectDelegate : public ::java::lang::Object
{
public:
  virtual void connect (::java::rmi::Remote *, ::java::rmi::Remote *) = 0;
  virtual void exportObject (::java::rmi::Remote *) = 0;
  virtual ::java::lang::Object *narrow (::java::lang::Object *, ::java::lang::Class *) = 0;
  virtual ::java::rmi::Remote *toStub (::java::rmi::Remote *) = 0;
  virtual void unexportObject (::java::rmi::Remote *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_rmi_CORBA_PortableRemoteObjectDelegate__ */
