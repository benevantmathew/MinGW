// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ComboBoxEditor__
#define __javax_swing_ComboBoxEditor__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class ComboBoxEditor;
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class ActionListener;
      }
      class Component;
    }
  }
}

class javax::swing::ComboBoxEditor : public ::java::lang::Object
{
public:
  virtual ::java::awt::Component *getEditorComponent () = 0;
  virtual void setItem (::java::lang::Object *) = 0;
  virtual ::java::lang::Object *getItem () = 0;
  virtual void selectAll () = 0;
  virtual void addActionListener (::java::awt::event::ActionListener *) = 0;
  virtual void removeActionListener (::java::awt::event::ActionListener *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_ComboBoxEditor__ */
