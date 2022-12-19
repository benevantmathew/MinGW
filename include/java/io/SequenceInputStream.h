// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_SequenceInputStream__
#define __java_io_SequenceInputStream__

#pragma interface

#include <java/io/InputStream.h>
#include <gcj/array.h>

class java::io::SequenceInputStream : public ::java::io::InputStream
{
public:
  SequenceInputStream (::java::util::Enumeration *);
  SequenceInputStream (::java::io::InputStream *, ::java::io::InputStream *);
  virtual jint available ();
  virtual void close ();
  virtual jint read ();
  virtual jint read (jbyteArray, jint, jint);
private:
  ::java::io::InputStream *getNextStream ();
  ::java::io::InputStream * __attribute__((aligned(__alignof__( ::java::io::InputStream )))) in;
  ::java::io::InputStream *in2;
  ::java::util::Enumeration *enum$;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_SequenceInputStream__ */
