// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLEncoder__
#define __java_net_URLEncoder__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URLEncoder;
    }
  }
}

class java::net::URLEncoder : public ::java::lang::Object
{
public:
  static ::java::lang::String *encode (::java::lang::String *);
  static ::java::lang::String *encode (::java::lang::String *, ::java::lang::String *);
private:
  static jboolean isSafe (jchar);
  URLEncoder ();
  static ::java::lang::String *hex;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_URLEncoder__ */
