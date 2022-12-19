// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_ServerSocket__
#define __java_net_ServerSocket__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class ServerSocketChannel;
      }
    }
    namespace net
    {
      class ServerSocket;
      class Socket;
      class SocketAddress;
      class InetAddress;
      class SocketImpl;
      class SocketImplFactory;
    }
  }
}

class java::net::ServerSocket : public ::java::lang::Object
{
public: // actually package-private
  ServerSocket (::java::net::SocketImpl *);
  virtual ::java::net::SocketImpl *getImpl () { return impl; }
public:
  ServerSocket ();
  ServerSocket (jint);
  ServerSocket (jint, jint);
  ServerSocket (jint, jint, ::java::net::InetAddress *);
  virtual void bind (::java::net::SocketAddress *);
  virtual void bind (::java::net::SocketAddress *, jint);
  virtual ::java::net::InetAddress *getInetAddress ();
  virtual jint getLocalPort ();
  virtual ::java::net::SocketAddress *getLocalSocketAddress ();
  virtual ::java::net::Socket *accept ();
public:  // actually protected
  void implAccept (::java::net::Socket *);
public:
  virtual void close ();
  virtual ::java::nio::channels::ServerSocketChannel *getChannel () { return 0; }
  virtual jboolean isBound () { return bound; }
  virtual jboolean isClosed ();
  virtual void setSoTimeout (jint);
  virtual jint getSoTimeout ();
  virtual void setReuseAddress (jboolean);
  virtual jboolean getReuseAddress ();
  virtual void setReceiveBufferSize (jint);
  virtual jint getReceiveBufferSize ();
  virtual ::java::lang::String *toString ();
  static void setSocketFactory (::java::net::SocketImplFactory *);
private:
  static ::java::net::SocketImplFactory *factory;
  ::java::net::SocketImpl * __attribute__((aligned(__alignof__( ::java::lang::Object )))) impl;
  jboolean bound;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_ServerSocket__ */
