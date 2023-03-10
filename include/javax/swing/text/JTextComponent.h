// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_JTextComponent__
#define __javax_swing_text_JTextComponent__

#pragma interface

#include <javax/swing/JComponent.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Dimension;
      class Image;
      class Insets;
      class Component;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      namespace plaf
      {
        class TextUI;
      }
      namespace text
      {
        class JTextComponent;
        class Document;
      }
      class Icon;
    }
  }
}

class javax::swing::text::JTextComponent : public ::javax::swing::JComponent
{
public:
  JTextComponent ();
  JTextComponent (::javax::swing::Icon *);
  JTextComponent (::javax::swing::Icon *, jint);
  JTextComponent (::java::lang::String *);
  JTextComponent (::java::lang::String *, jint);
  JTextComponent (::java::lang::String *, ::javax::swing::Icon *, jint);
  virtual void setDocument (::javax::swing::text::Document *);
  virtual ::javax::swing::text::Document *getDocument ();
public:  // actually protected
  virtual jint checkHorizontalKey (jint, ::java::lang::String *);
  virtual jint checkVerticalKey (jint, ::java::lang::String *);
public:
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext () { return 0; }
  virtual ::javax::swing::Icon *getDisabledIcon () { return 0; }
  virtual jint getDisplayedMnemonic ();
  virtual jint getHorizontalAlignment ();
  virtual jint getHorizontalTextPosition ();
  virtual ::javax::swing::Icon *getIcon () { return icon; }
  virtual jint getIconTextGap () { return icon_gap; }
public: // actually package-private
  virtual ::java::awt::Component *getLabelFor () { return 0; }
public:
  virtual ::java::awt::Insets *getMargin () { return 0; }
  virtual void setText (::java::lang::String *);
  virtual ::java::lang::String *getText ();
  virtual ::java::lang::String *getUIClassID ();
  virtual jint getVerticalAlignment ();
  virtual jint getVerticalTextPosition ();
  virtual jboolean imageUpdate (::java::awt::Image *, jint, jint, jint, jint, jint);
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public: // actually package-private
  virtual void setDisabledIcon (::javax::swing::Icon *) { }
  virtual void setDisplayedMnemonic (jchar) { }
  virtual void setDisplayedMnemonic (jint) { }
  virtual void setHorizontalAlignment (jint) { }
  virtual void setHorizontalTextPosition (jint) { }
  virtual void setIcon (::javax::swing::Icon *) { }
public:
  virtual void setIconTextGap (jint) { }
  virtual void setLabelFor (::java::awt::Component *) { }
  virtual void setVerticalAlignment (jint) { }
  virtual void setVerticalTextPosition (jint) { }
  virtual ::javax::swing::plaf::TextUI *getUI ();
  virtual void updateUI ();
  virtual ::java::awt::Dimension *getPreferredScrollableViewportSize () { return 0; }
  virtual jint getScrollableUnitIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jint getScrollableBlockIncrement (::java::awt::Rectangle *, jint, jint);
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::javax::swing::JComponent ))))  icon_gap;
  ::javax::swing::Icon *icon;
  jint align;
  ::javax::swing::text::Document *doc;

  friend class javax_swing_text_JTextComponent$KeyBinding;
  friend class javax_swing_text_JTextComponent$AccessibleJTextComponent;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_JTextComponent__ */
