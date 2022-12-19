// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_border_BevelBorder__
#define __javax_swing_border_BevelBorder__

#pragma interface

#include <javax/swing/border/AbstractBorder.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace border
      {
        class BevelBorder;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class Insets;
      class Graphics;
      class Component;
      class Color;
    }
  }
}

class javax::swing::border::BevelBorder : public ::javax::swing::border::AbstractBorder
{
public:
  BevelBorder (jint);
  BevelBorder (jint, ::java::awt::Color *, ::java::awt::Color *);
  BevelBorder (jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  virtual void paintBorder (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *, ::java::awt::Insets *);
  virtual ::java::awt::Color *getHighlightOuterColor (::java::awt::Component *);
  virtual ::java::awt::Color *getHighlightInnerColor (::java::awt::Component *);
  virtual ::java::awt::Color *getShadowInnerColor (::java::awt::Component *);
  virtual ::java::awt::Color *getShadowOuterColor (::java::awt::Component *);
  virtual ::java::awt::Color *getHighlightOuterColor () { return highlightOuter; }
  virtual ::java::awt::Color *getHighlightInnerColor () { return highlightInner; }
  virtual ::java::awt::Color *getShadowInnerColor () { return shadowInner; }
  virtual ::java::awt::Color *getShadowOuterColor () { return shadowOuter; }
  virtual jint getBevelType () { return bevelType; }
  virtual jboolean isBorderOpaque ();
public:  // actually protected
  virtual void paintRaisedBevel (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual void paintLoweredBevel (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
private:
  static void paintBevel (::java::awt::Graphics *, jint, jint, jint, jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
public: // actually package-private
  static const jlong serialVersionUID = -1034942243356299676LL;
public:
  static const jint RAISED = 0L;
  static const jint LOWERED = 1L;
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::javax::swing::border::AbstractBorder ))))  bevelType;
  ::java::awt::Color *highlightOuter;
  ::java::awt::Color *highlightInner;
  ::java::awt::Color *shadowOuter;
  ::java::awt::Color *shadowInner;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_border_BevelBorder__ */
