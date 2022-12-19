// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RemoteServer__
#define __java_rmi_server_RemoteServer__

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
        class RemoteServer;
        class RemoteRef;
      }
    }
  }
}

class java::rmi::server::RemoteServer : public ::java::rmi::server::RemoteObject
{
public:  // actually protected
  RemoteServer ();
  RemoteServer (::java::rmi::server::RemoteRef *);
public:
  static ::java::lang::String *getClientHost ();
  static void setLog (::java::io::OutputStream *);
  static ::java::io::PrintStream *getLog ();
private:
  static const jlong serialVersionUID = -4100238210092549637LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_server_RemoteServer__ */
