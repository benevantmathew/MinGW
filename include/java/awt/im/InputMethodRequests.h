// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_im_InputMethodRequests__
#define __java_awt_im_InputMethodRequests__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class AttributedCharacterIterator;
      class AttributedCharacterIterator$Attribute;
    }
    namespace awt
    {
      namespace im
      {
        class InputMethodRequests;
      }
      class Rectangle;
      namespace font
      {
        class TextHitInfo;
      }
    }
  }
}

class java::awt::im::InputMethodRequests : public ::java::lang::Object
{
public:
  virtual ::java::awt::Rectangle *getTextLocation (::java::awt::font::TextHitInfo *) = 0;
  virtual ::java::awt::font::TextHitInfo *getLocationOffset (jint, jint) = 0;
  virtual jint getInsertPositionOffset () = 0;
  virtual ::java::text::AttributedCharacterIterator *getCommittedText (jint, jint, JArray< ::java::text::AttributedCharacterIterator$Attribute *> *) = 0;
  virtual jint getCommittedTextLength () = 0;
  virtual ::java::text::AttributedCharacterIterator *cancelLatestCommittedText (JArray< ::java::text::AttributedCharacterIterator$Attribute *> *) = 0;
  virtual ::java::text::AttributedCharacterIterator *getSelectedText (JArray< ::java::text::AttributedCharacterIterator$Attribute *> *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_im_InputMethodRequests__ */
