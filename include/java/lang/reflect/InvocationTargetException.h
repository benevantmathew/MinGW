// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_InvocationTargetException__
#define __java_lang_reflect_InvocationTargetException__

#pragma interface

#include <java/lang/Exception.h>

class java::lang::reflect::InvocationTargetException : public ::java::lang::Exception
{
public:  // actually protected
  InvocationTargetException ();
public:
  InvocationTargetException (::java::lang::Throwable *);
  InvocationTargetException (::java::lang::Throwable *, ::java::lang::String *);
  virtual ::java::lang::Throwable *getTargetException () { return target; }
  virtual ::java::lang::Throwable *getCause () { return target; }
private:
  static const jlong serialVersionUID = 4085088731926701167LL;
  ::java::lang::Throwable * __attribute__((aligned(__alignof__( ::java::lang::Exception )))) target;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_InvocationTargetException__ */
