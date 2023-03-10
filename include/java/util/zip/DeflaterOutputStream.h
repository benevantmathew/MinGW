// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_zip_DeflaterOutputStream__
#define __java_util_zip_DeflaterOutputStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
#include <gcj/array.h>

class java::util::zip::DeflaterOutputStream : public ::java::io::FilterOutputStream
{
public:
  virtual void close ();
public:  // actually protected
  virtual void deflate ();
public:
  DeflaterOutputStream (::java::io::OutputStream *);
  DeflaterOutputStream (::java::io::OutputStream *, ::java::util::zip::Deflater *);
  DeflaterOutputStream (::java::io::OutputStream *, ::java::util::zip::Deflater *, jint);
  virtual void finish ();
  virtual void write (jint);
  virtual void write (jbyteArray, jint, jint);
private:
  void inbufWrite ();
  jbyteArray __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream ))))  inbuf;
  jint inbufLength;
public:  // actually protected
  jbyteArray buf;
  ::java::util::zip::Deflater *def;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_zip_DeflaterOutputStream__ */
