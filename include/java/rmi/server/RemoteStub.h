// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RemoteStub__
#define __java_rmi_server_RemoteStub__

#pragma interface

#include <java/rmi/server/RemoteObject.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class RemoteStub;
        class RemoteRef;
      }
    }
  }
}

class java::rmi::server::RemoteStub : public ::java::rmi::server::RemoteObject
{
public:  // actually protected
  RemoteStub ();
  RemoteStub (::java::rmi::server::RemoteRef *);
  static void setRef (::java::rmi::server::RemoteStub *, ::java::rmi::server::RemoteRef *);
public: // actually package-private
  static const jlong serialVersionUID = -1585587260594494182LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_server_RemoteStub__ */
