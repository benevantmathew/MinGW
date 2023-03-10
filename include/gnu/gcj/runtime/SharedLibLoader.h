// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_runtime_SharedLibLoader__
#define __gnu_gcj_runtime_SharedLibLoader__

#pragma interface

#include <java/lang/ClassLoader.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
    }
  }
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
        class SharedLibLoader;
        class SharedLibHelper;
      }
    }
  }
}

class gnu::gcj::runtime::SharedLibLoader : public ::java::lang::ClassLoader
{
public:
  SharedLibLoader (::java::lang::String *, ::java::lang::ClassLoader *, jint);
  SharedLibLoader (::java::lang::String *);
  virtual ::java::lang::Class *findClass (::java::lang::String *);
  virtual ::java::net::URL *findResource (::java::lang::String *);
  virtual ::java::util::Enumeration *findResources (::java::lang::String *);
public: // actually package-private
  ::gnu::gcj::runtime::SharedLibHelper * __attribute__((aligned(__alignof__( ::java::lang::ClassLoader )))) helper;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_runtime_SharedLibLoader__ */
