// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_ObjectOutputStream$PutField__
#define __java_io_ObjectOutputStream$PutField__

#pragma interface

#include <java/lang/Object.h>

class java::io::ObjectOutputStream$PutField : public ::java::lang::Object
{
public:
  virtual void put (::java::lang::String *, jboolean) = 0;
  virtual void put (::java::lang::String *, jbyte) = 0;
  virtual void put (::java::lang::String *, jchar) = 0;
  virtual void put (::java::lang::String *, jdouble) = 0;
  virtual void put (::java::lang::String *, jfloat) = 0;
  virtual void put (::java::lang::String *, jint) = 0;
  virtual void put (::java::lang::String *, jlong) = 0;
  virtual void put (::java::lang::String *, jshort) = 0;
  virtual void put (::java::lang::String *, ::java::lang::Object *) = 0;
  virtual void write (::java::io::ObjectOutput *) = 0;
  ObjectOutputStream$PutField ();

  friend class java_io_ObjectOutputStream$PutField;

  static ::java::lang::Class class$;
};

#endif /* __java_io_ObjectOutputStream$PutField__ */
