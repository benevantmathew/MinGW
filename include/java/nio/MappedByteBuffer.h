// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_MappedByteBuffer__
#define __java_nio_MappedByteBuffer__

#pragma interface

#include <java/nio/ByteBuffer.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class MappedByteBuffer;
    }
  }
}

class java::nio::MappedByteBuffer : public ::java::nio::ByteBuffer
{
public: // actually package-private
  MappedByteBuffer (jint, jint, jint, jint);
public:
  ::java::nio::MappedByteBuffer *force () { return this; }
  jboolean isLoaded () { return loaded; }
  ::java::nio::MappedByteBuffer *load ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::nio::ByteBuffer ))))  loaded;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_MappedByteBuffer__ */
