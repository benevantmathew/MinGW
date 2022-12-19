// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_convert_UnicodeToBytes__
#define __gnu_gcj_convert_UnicodeToBytes__

#pragma interface

#include <gnu/gcj/convert/IOConverter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
        class UnicodeToBytes;
      }
    }
  }
}

class gnu::gcj::convert::UnicodeToBytes : public ::gnu::gcj::convert::IOConverter
{
public:
  virtual ::java::lang::String *getName () = 0;
  static ::gnu::gcj::convert::UnicodeToBytes *getDefaultEncoder ();
  static ::gnu::gcj::convert::UnicodeToBytes *getEncoder (::java::lang::String *);
  void setOutput (jbyteArray, jint);
  virtual jint write (jcharArray, jint, jint) = 0;
  virtual jint write (::java::lang::String *, jint, jint, jcharArray);
  virtual jboolean havePendingBytes ();
  virtual void done ();
  UnicodeToBytes ();
  jbyteArray __attribute__((aligned(__alignof__( ::gnu::gcj::convert::IOConverter ))))  buf;
  jint count;
public: // actually package-private
  static ::java::lang::String *defaultEncoding;
private:
  static const jint CACHE_SIZE = 4L;
  static JArray< ::gnu::gcj::convert::UnicodeToBytes *> *encoderCache;
  static jint currCachePos;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_gcj_convert_UnicodeToBytes__ */
