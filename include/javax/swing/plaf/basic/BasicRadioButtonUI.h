// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicRadioButtonUI__
#define __javax_swing_plaf_basic_BasicRadioButtonUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Graphics;
      class Dimension;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
          class BasicRadioButtonUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::basic::BasicRadioButtonUI : public ::javax::swing::plaf::basic::BasicToggleButtonUI
{
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
public:  // actually protected
  virtual void paintFocus (::java::awt::Graphics *, ::javax::swing::JComponent *, ::java::awt::Rectangle *, ::java::awt::Rectangle *, ::java::awt::Rectangle *) { }
  virtual void paintIcon (::java::awt::Graphics *, ::javax::swing::JComponent *, ::java::awt::Rectangle *) { }
  virtual void paintButtonPressed (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual void paintButtonNormal (::java::awt::Graphics *, ::javax::swing::JComponent *);
  virtual void paintText (::java::awt::Graphics *, ::javax::swing::JComponent *, ::java::awt::Rectangle *, ::java::lang::String *);
public:
  BasicRadioButtonUI ();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicToggleButtonUI ))))  large_circle_width;
  jint circle_width;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicRadioButtonUI__ */
