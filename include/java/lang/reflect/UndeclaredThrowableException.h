// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_UndeclaredThrowableException__
#define __java_lang_reflect_UndeclaredThrowableException__

#pragma interface

#include <java/lang/RuntimeException.h>

class java::lang::reflect::UndeclaredThrowableException : public ::java::lang::RuntimeException
{
public:
  UndeclaredThrowableException (::java::lang::Throwable *);
  UndeclaredThrowableException (::java::lang::Throwable *, ::java::lang::String *);
  virtual ::java::lang::Throwable *getUndeclaredThrowable () { return undeclaredThrowable; }
  virtual ::java::lang::Throwable *getCause () { return undeclaredThrowable; }
private:
  static const jlong serialVersionUID = 330127114055056639LL;
  ::java::lang::Throwable * __attribute__((aligned(__alignof__( ::java::lang::RuntimeException )))) undeclaredThrowable;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_UndeclaredThrowableException__ */
