// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_PipedWriter__
#define __java_io_PipedWriter__

#pragma interface

#include <java/io/Writer.h>
#include <gcj/array.h>

class java::io::PipedWriter : public ::java::io::Writer
{
public:
  PipedWriter ();
  PipedWriter (::java::io::PipedReader *);
  virtual void connect (::java::io::PipedReader *);
  virtual void write (jint);
  virtual void write (jcharArray, jint, jint);
  virtual void flush ();
  virtual void close ();
public: // actually package-private
  ::java::io::PipedReader * __attribute__((aligned(__alignof__( ::java::io::Writer )))) sink;
  jboolean closed;
  jcharArray read_buf;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_PipedWriter__ */
