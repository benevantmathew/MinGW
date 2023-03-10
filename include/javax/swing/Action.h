// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_Action__
#define __javax_swing_Action__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class Action;
    }
  }
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
    }
  }
}

class javax::swing::Action : public ::java::lang::Object
{
public:
  virtual ::java::lang::Object *getValue (::java::lang::String *) = 0;
  virtual void putValue (::java::lang::String *, ::java::lang::Object *) = 0;
  virtual jboolean isEnabled () = 0;
  virtual void setEnabled (jboolean) = 0;
  virtual void addPropertyChangeListener (::java::beans::PropertyChangeListener *) = 0;
  virtual void removePropertyChangeListener (::java::beans::PropertyChangeListener *) = 0;
  static ::java::lang::String *DEFAULT;
  static ::java::lang::String *LONG_DESCRIPTION;
  static ::java::lang::String *NAME;
  static ::java::lang::String *SHORT_DESCRIPTION;
  static ::java::lang::String *SMALL_ICON;
  static ::java::lang::String *ACCELERATOR_KEY;
  static ::java::lang::String *ACTION_COMMAND_KEY;
  static ::java::lang::String *MNEMONIC_KEY;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_Action__ */
