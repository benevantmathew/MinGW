// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_ReadableByteChannel__
#define __java_nio_channels_ReadableByteChannel__

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
        class ReadableByteChannel;
      }
      class ByteBuffer;
    }
  }
}

class java::nio::channels::ReadableByteChannel : public ::java::lang::Object
{
public:
  virtual jint read (::java::nio::ByteBuffer *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_nio_channels_ReadableByteChannel__ */
