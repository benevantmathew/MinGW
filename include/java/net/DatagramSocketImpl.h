// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_DatagramSocketImpl__
#define __java_net_DatagramSocketImpl__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class DatagramSocketImpl;
      class NetworkInterface;
      class SocketAddress;
      class DatagramPacket;
      class InetAddress;
    }
  }
}

class java::net::DatagramSocketImpl : public ::java::lang::Object
{
public:
  DatagramSocketImpl ();
public:  // actually protected
  virtual void bind (jint, ::java::net::InetAddress *) = 0;
  virtual void close () = 0;
  virtual void create () = 0;
  virtual jint peek (::java::net::InetAddress *) = 0;
  virtual jint peekData (::java::net::DatagramPacket *) = 0;
  virtual void send (::java::net::DatagramPacket *) = 0;
  virtual void receive (::java::net::DatagramPacket *) = 0;
  virtual void connect (::java::net::InetAddress *, jint) { }
  virtual void disconnect () { }
  virtual void setTTL (jbyte) = 0;
  virtual jbyte getTTL () = 0;
  virtual void setTimeToLive (jint) = 0;
  virtual jint getTimeToLive () = 0;
  virtual void join (::java::net::InetAddress *) = 0;
  virtual void leave (::java::net::InetAddress *) = 0;
  virtual void joinGroup (::java::net::SocketAddress *, ::java::net::NetworkInterface *) = 0;
  virtual void leaveGroup (::java::net::SocketAddress *, ::java::net::NetworkInterface *) = 0;
  virtual ::java::io::FileDescriptor *getFileDescriptor () { return fd; }
  virtual jint getLocalPort () { return localPort; }
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  localPort;
  ::java::io::FileDescriptor *fd;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_DatagramSocketImpl__ */
