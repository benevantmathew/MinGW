// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_MissingResourceException__
#define __java_util_MissingResourceException__

#pragma interface

#include <java/lang/RuntimeException.h>

class java::util::MissingResourceException : public ::java::lang::RuntimeException
{
public:
  MissingResourceException (::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String *getClassName () { return className; }
  virtual ::java::lang::String *getKey () { return key; }
private:
  static const jlong serialVersionUID = -4876345176062000401LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::RuntimeException )))) className;
  ::java::lang::String *key;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_MissingResourceException__ */
