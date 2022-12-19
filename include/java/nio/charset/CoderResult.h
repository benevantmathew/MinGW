// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_charset_CoderResult__
#define __java_nio_charset_CoderResult__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
        class CoderResult$Cache;
        class CoderResult;
      }
    }
  }
}

class java::nio::charset::CoderResult : public ::java::lang::Object
{
private:
  CoderResult (jint, jint);
public:
  virtual jboolean isError ();
  virtual jboolean isMalformed ();
  virtual jboolean isOverflow ();
  virtual jboolean isUnderflow ();
  virtual jboolean isUnmappable ();
  virtual jint length ();
  static ::java::nio::charset::CoderResult *malformedForLength (jint);
  virtual void throwException ();
  virtual ::java::lang::String *toString ();
  static ::java::nio::charset::CoderResult *unmappableForLength (jint);
private:
  static const jint TYPE_MALFORMED = 0L;
  static const jint TYPE_OVERFLOW = 1L;
  static const jint TYPE_UNDERFLOW = 2L;
  static const jint TYPE_UNMAPPABLE = 3L;
public:
  static ::java::nio::charset::CoderResult *OVERFLOW;
  static ::java::nio::charset::CoderResult *UNDERFLOW;
private:
  static JArray< ::java::lang::String *> *names;
  static ::java::nio::charset::CoderResult$Cache *malformedCache;
  static ::java::nio::charset::CoderResult$Cache *unmappableCache;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  type;
  jint length__;

  friend class java_nio_charset_CoderResult$Cache;
  friend class java_nio_charset_CoderResult$2;
  friend class java_nio_charset_CoderResult$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_charset_CoderResult__ */
