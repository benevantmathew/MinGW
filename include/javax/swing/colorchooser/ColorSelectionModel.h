// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_ColorSelectionModel__
#define __javax_swing_colorchooser_ColorSelectionModel__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace colorchooser
      {
        class ColorSelectionModel;
      }
      namespace event
      {
        class ChangeListener;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class Color;
    }
  }
}

class javax::swing::colorchooser::ColorSelectionModel : public ::java::lang::Object
{
public:
  virtual ::java::awt::Color *getSelectedColor () = 0;
  virtual void setSelectedColor (::java::awt::Color *) = 0;
  virtual void addChangeListener (::javax::swing::event::ChangeListener *) = 0;
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_colorchooser_ColorSelectionModel__ */
