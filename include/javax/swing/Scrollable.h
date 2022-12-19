// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_Scrollable__
#define __javax_swing_Scrollable__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class Scrollable;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Dimension;
    }
  }
}

class javax::swing::Scrollable : public ::java::lang::Object
{
public:
  virtual ::java::awt::Dimension *getPreferredScrollableViewportSize () = 0;
  virtual jint getScrollableUnitIncrement (::java::awt::Rectangle *, jint, jint) = 0;
  virtual jint getScrollableBlockIncrement (::java::awt::Rectangle *, jint, jint) = 0;
  virtual jboolean getScrollableTracksViewportWidth () = 0;
  virtual jboolean getScrollableTracksViewportHeight () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_Scrollable__ */
