// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_ScatteringByteChannel__
#define __java_nio_channels_ScatteringByteChannel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
        class ScatteringByteChannel;
      }
      class ByteBuffer;
    }
  }
}

class java::nio::channels::ScatteringByteChannel : public ::java::lang::Object
{
public:
  virtual jlong read (JArray< ::java::nio::ByteBuffer *> *, jint, jint) = 0;
  virtual jlong read (JArray< ::java::nio::ByteBuffer *> *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_nio_channels_ScatteringByteChannel__ */
