// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_StyledDocument__
#define __javax_swing_text_StyledDocument__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Font;
      class Color;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class StyledDocument;
        class Element;
        class AttributeSet;
        class Style;
      }
    }
  }
}

class javax::swing::text::StyledDocument : public ::java::lang::Object
{
public:
  virtual ::javax::swing::text::Style *addStyle (::java::lang::String *, ::javax::swing::text::Style *) = 0;
  virtual void removeStyle (::java::lang::String *) = 0;
  virtual ::javax::swing::text::Style *getStyle (::java::lang::String *) = 0;
  virtual void setCharacterAttributes (jint, jint, ::javax::swing::text::AttributeSet *, jboolean) = 0;
  virtual void setParagraphAttributes (jint, jint, ::javax::swing::text::AttributeSet *, jboolean) = 0;
  virtual ::javax::swing::text::Style *getLogicalStyle (jint) = 0;
  virtual void setLogicalStyle (jint, ::javax::swing::text::Style *) = 0;
  virtual ::javax::swing::text::Element *getParagraphElement (jint) = 0;
  virtual ::javax::swing::text::Element *getCharacterElement (jint) = 0;
  virtual ::java::awt::Color *getForeground (::javax::swing::text::AttributeSet *) = 0;
  virtual ::java::awt::Color *getBackground (::javax::swing::text::AttributeSet *) = 0;
  virtual ::java::awt::Font *getFont (::javax::swing::text::AttributeSet *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_text_StyledDocument__ */
