// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_StringCharacterIterator__
#define __java_text_StringCharacterIterator__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class StringCharacterIterator;
    }
  }
}

class java::text::StringCharacterIterator : public ::java::lang::Object
{
public:
  StringCharacterIterator (::java::lang::String *);
  StringCharacterIterator (::java::lang::String *, jint);
  StringCharacterIterator (::java::lang::String *, jint, jint, jint);
public: // actually package-private
  StringCharacterIterator (::java::text::StringCharacterIterator *, jint, jint);
public:
  jchar current ();
  jchar next ();
  jchar previous ();
  jchar first ();
  jchar last ();
  jint getIndex () { return index; }
  jchar setIndex (jint);
  jint getBeginIndex () { return begin; }
  jint getEndIndex () { return end; }
  ::java::lang::Object *clone ();
  jboolean equals (::java::lang::Object *);
  void setText (::java::lang::String *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) text;
  jint begin;
  jint end;
  jint index;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_StringCharacterIterator__ */
