// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_VMThrowable__
#define __java_lang_VMThrowable__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
        class StackTrace;
      }
    }
  }
}

class java::lang::VMThrowable : public ::java::lang::Object
{
private:
  VMThrowable ();
public: // actually package-private
  static ::java::lang::VMThrowable *fillInStackTrace (::java::lang::Throwable *);
  JArray< ::java::lang::StackTraceElement *> *getStackTrace (::java::lang::Throwable *);
private:
  ::gnu::gcj::runtime::StackTrace * __attribute__((aligned(__alignof__( ::java::lang::Object )))) trace;
public: // actually package-private
  static jboolean trace_enabled;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_VMThrowable__ */
