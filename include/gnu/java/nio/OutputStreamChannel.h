// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_OutputStreamChannel__
#define __gnu_java_nio_OutputStreamChannel__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class OutputStreamChannel;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      class ByteBuffer;
    }
  }
}

class gnu::java::nio::OutputStreamChannel : public ::java::lang::Object
{
public:
  OutputStreamChannel (::java::io::OutputStream *);
  void close ();
  jboolean isOpen ();
  jint write (::java::nio::ByteBuffer *);
private:
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  closed;
  ::java::io::OutputStream *out;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_OutputStreamChannel__ */
