// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_convert_Output_JavaSrc__
#define __gnu_gcj_convert_Output_JavaSrc__

#pragma interface

#include <gnu/gcj/convert/UnicodeToBytes.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
        class Output_JavaSrc;
      }
    }
  }
}

class gnu::gcj::convert::Output_JavaSrc : public ::gnu::gcj::convert::UnicodeToBytes
{
public:
  virtual ::java::lang::String *getName ();
  virtual jint write (jcharArray, jint, jint);
  Output_JavaSrc ();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::gnu::gcj::convert::UnicodeToBytes ))))  todo;
  jint pending_char;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_convert_Output_JavaSrc__ */
