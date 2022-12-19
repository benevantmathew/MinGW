// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_border_SoftBevelBorder__
#define __javax_swing_border_SoftBevelBorder__

#pragma interface

#include <javax/swing/border/BevelBorder.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace border
      {
        class SoftBevelBorder;
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

class javax::swing::border::SoftBevelBorder : public ::javax::swing::border::BevelBorder
{
public:
  SoftBevelBorder (jint);
  SoftBevelBorder (jint, ::java::awt::Color *, ::java::awt::Color *);
  SoftBevelBorder (jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  virtual void paintBorder (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *, ::java::awt::Insets *);
  virtual jboolean isBorderOpaque ();
private:
  static void paintSoftBevel (::java::awt::Graphics *, jint, jint, jint, jint, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
public: // actually package-private
  static const jlong serialVersionUID = 5248789787305979975LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_border_SoftBevelBorder__ */
