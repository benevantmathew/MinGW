// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_logging_MemoryHandler__
#define __java_util_logging_MemoryHandler__

#pragma interface

#include <java/util/logging/Handler.h>
#include <gcj/array.h>

class java::util::logging::MemoryHandler : public ::java::util::logging::Handler
{
public:
  MemoryHandler ();
  MemoryHandler (::java::util::logging::Handler *, jint, ::java::util::logging::Level *);
  virtual void publish (::java::util::logging::LogRecord *);
  virtual void push ();
  virtual void flush ();
  virtual void close ();
  virtual ::java::util::logging::Level *getPushLevel () { return pushLevel; }
  virtual void setPushLevel (::java::util::logging::Level *);
private:
  JArray< ::java::util::logging::LogRecord *> * __attribute__((aligned(__alignof__( ::java::util::logging::Handler )))) buffer;
  jint position;
  jint numPublished;
  ::java::util::logging::Level *pushLevel;
  ::java::util::logging::Handler *target;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_logging_MemoryHandler__ */
