// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_FormatCharacterIterator__
#define __java_text_FormatCharacterIterator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class FormatCharacterIterator;
      class AttributedCharacterIterator;
      class AttributedCharacterIterator$Attribute;
    }
  }
}

class java::text::FormatCharacterIterator : public ::java::lang::Object
{
public: // actually package-private
  FormatCharacterIterator ();
  FormatCharacterIterator (::java::lang::String *, jintArray, JArray< ::java::util::HashMap *> *);
public:
  virtual ::java::util::Set *getAllAttributeKeys ();
  virtual ::java::util::Map *getAttributes ();
  virtual ::java::lang::Object *getAttribute (::java::text::AttributedCharacterIterator$Attribute *);
  virtual jint getRunLimit (::java::util::Set *);
  virtual jint getRunLimit (::java::text::AttributedCharacterIterator$Attribute *);
  virtual jint getRunLimit ();
  virtual jint getRunStart (::java::util::Set *);
  virtual jint getRunStart ();
  virtual jint getRunStart (::java::text::AttributedCharacterIterator$Attribute *);
  virtual ::java::lang::Object *clone ();
  virtual jchar current ();
  virtual jchar first ();
  virtual jint getBeginIndex ();
  virtual jint getEndIndex ();
  virtual jint getIndex () { return charIndex; }
  virtual jchar last ();
  virtual jchar next ();
  virtual jchar previous ();
  virtual jchar setIndex (jint);
public:  // actually protected
  virtual void mergeAttributes (JArray< ::java::util::HashMap *> *, jintArray);
  virtual void append (::java::text::AttributedCharacterIterator *);
  virtual void append (::java::lang::String *, ::java::util::HashMap *);
  virtual void append (::java::lang::String *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) formattedString;
  jint charIndex;
  jint attributeIndex;
  jintArray ranges;
  JArray< ::java::util::HashMap *> *attributes;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_text_FormatCharacterIterator__ */
