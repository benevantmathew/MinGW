// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_ConnectionRunnerPool__
#define __gnu_java_rmi_server_ConnectionRunnerPool__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace server
        {
          class ConnectionRunnerPool;
          class UnicastConnection;
          class ConnectionRunnerPool$ConnectionRunner;
        }
      }
    }
  }
}

class gnu::java::rmi::server::ConnectionRunnerPool : public ::java::lang::Object
{
public:
  static void setSize (jint);
  static void setMaxSize (jint);
private:
  static ::gnu::java::rmi::server::ConnectionRunnerPool$ConnectionRunner *getConnectionRunner ();
public:
  static void dispatchConnection (::gnu::java::rmi::server::UnicastConnection *);
  static void exit ();
public: // actually package-private
  ConnectionRunnerPool ();
private:
  static jint size;
  static jint max_size;
  static ::java::util::ArrayList *freelist;
  static ::java::lang::ThreadGroup *group;

  friend class gnu_java_rmi_server_ConnectionRunnerPool$ConnectionRunner;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_server_ConnectionRunnerPool__ */
