// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_StringBufferInputStream__
#define __java_io_StringBufferInputStream__

#pragma interface

#include <java/io/InputStream.h>
#include <gcj/array.h>

class java::io::StringBufferInputStream : public ::java::io::InputStream
{
public:
  StringBufferInputStream (::java::lang::String *);
  virtual jint available ();
  virtual jint read ();
  virtual jint read (jbyteArray, jint, jint);
  virtual void reset ();
  virtual jlong skip (jlong);
public:  // actually protected
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) buffer;
  jint pos;
  jint count;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_StringBufferInputStream__ */
