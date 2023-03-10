// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_CharArrayReader__
#define __java_io_CharArrayReader__

#pragma interface

#include <java/io/Reader.h>
#include <gcj/array.h>

class java::io::CharArrayReader : public ::java::io::Reader
{
public:
  CharArrayReader (jcharArray);
  CharArrayReader (jcharArray, jint, jint);
  virtual void close ();
  virtual void mark (jint);
  virtual jboolean markSupported ();
  virtual jint read ();
  virtual jint read (jcharArray, jint, jint);
  virtual jboolean ready ();
  virtual void reset ();
  virtual jlong skip (jlong);
public:  // actually protected
  jcharArray __attribute__((aligned(__alignof__( ::java::io::Reader ))))  buf;
  jint pos;
  jint markedPos;
  jint count;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_CharArrayReader__ */
