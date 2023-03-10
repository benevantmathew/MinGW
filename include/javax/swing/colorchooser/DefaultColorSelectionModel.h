// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_DefaultColorSelectionModel__
#define __javax_swing_colorchooser_DefaultColorSelectionModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace colorchooser
      {
        class DefaultColorSelectionModel;
      }
      namespace event
      {
        class ChangeListener;
        class EventListenerList;
        class ChangeEvent;
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

class javax::swing::colorchooser::DefaultColorSelectionModel : public ::java::lang::Object
{
public:
  DefaultColorSelectionModel ();
  DefaultColorSelectionModel (::java::awt::Color *);
  virtual ::java::awt::Color *getSelectedColor () { return selectedColor; }
  virtual void setSelectedColor (::java::awt::Color *);
  virtual void addChangeListener (::javax::swing::event::ChangeListener *);
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *);
  virtual JArray< ::javax::swing::event::ChangeListener *> *getChangeListeners ();
public:  // actually protected
  virtual void fireStateChanged ();
private:
  static const jlong serialVersionUID = -8117143602864778804LL;
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::java::lang::Object )))) selectedColor;
public:  // actually protected
  ::javax::swing::event::ChangeEvent *changeEvent;
  ::javax::swing::event::EventListenerList *listenerList;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_colorchooser_DefaultColorSelectionModel__ */
