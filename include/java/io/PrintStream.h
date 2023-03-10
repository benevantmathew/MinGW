// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_PrintStream__
#define __java_io_PrintStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
        class UnicodeToBytes;
      }
    }
  }
}

class java::io::PrintStream : public ::java::io::FilterOutputStream
{
public:
  PrintStream (::java::io::OutputStream *);
  PrintStream (::java::io::OutputStream *, jboolean);
  PrintStream (::java::io::OutputStream *, jboolean, ::java::lang::String *);
  virtual jboolean checkError ();
public:  // actually protected
  virtual void setError ();
public:
  virtual void close ();
  virtual void flush ();
private:
  void print (::java::lang::String *, jboolean);
  void print (jcharArray, jint, jint, jboolean);
  void writeChars (jcharArray, jint, jint);
  void writeChars (::java::lang::String *, jint, jint);
public:
  virtual void print (jboolean);
  virtual void print (jint);
  virtual void print (jlong);
  virtual void print (jfloat);
  virtual void print (jdouble);
  virtual void print (::java::lang::Object *);
  virtual void print (::java::lang::String *);
  virtual void print (jchar);
  virtual void print (jcharArray);
  virtual void println ();
  virtual void println (jboolean);
  virtual void println (jint);
  virtual void println (jlong);
  virtual void println (jfloat);
  virtual void println (jdouble);
  virtual void println (::java::lang::Object *);
  virtual void println (::java::lang::String *);
  virtual void println (jchar);
  virtual void println (jcharArray);
  virtual void write (jint);
  virtual void write (jbyteArray, jint, jint);
private:
  static jcharArray line_separator;
public: // actually package-private
  ::gnu::gcj::convert::UnicodeToBytes * __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream )))) converter;
  jcharArray work;
  jbyteArray work_bytes;
private:
  jboolean error_occurred;
  jboolean auto_flush;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_PrintStream__ */
