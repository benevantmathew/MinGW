// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_io_ClassLoaderObjectInputStream__
#define __gnu_java_io_ClassLoaderObjectInputStream__

#pragma interface

#include <java/io/ObjectInputStream.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace io
      {
        class ClassLoaderObjectInputStream;
      }
    }
  }
}

class gnu::java::io::ClassLoaderObjectInputStream : public ::java::io::ObjectInputStream
{
public:
  ClassLoaderObjectInputStream (::java::io::InputStream *, ::java::lang::ClassLoader *);
  virtual ::java::lang::Class *resolveClass (::java::lang::String *);
public: // actually package-private
  ::java::lang::ClassLoader * __attribute__((aligned(__alignof__( ::java::io::ObjectInputStream )))) myClassLoader;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_io_ClassLoaderObjectInputStream__ */
