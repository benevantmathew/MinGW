// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_DefaultSingleSelectionModel__
#define __javax_swing_DefaultSingleSelectionModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class DefaultSingleSelectionModel;
      namespace event
      {
        class ChangeListener;
        class EventListenerList;
        class ChangeEvent;
      }
    }
  }
}

class javax::swing::DefaultSingleSelectionModel : public ::java::lang::Object
{
public:
  DefaultSingleSelectionModel ();
  virtual jint getSelectedIndex () { return index; }
  virtual void setSelectedIndex (jint);
  virtual void clearSelection ();
  virtual jboolean isSelected ();
  virtual void addChangeListener (::javax::swing::event::ChangeListener *);
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *);
public:  // actually protected
  virtual void fireStateChanged ();
public:
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual JArray< ::javax::swing::event::ChangeListener *> *getChangeListeners ();
public: // actually package-private
  static const jlong serialVersionUID = 3676229404753786004LL;
public:  // actually protected
  ::javax::swing::event::ChangeEvent * __attribute__((aligned(__alignof__( ::java::lang::Object )))) changeEvent;
  ::javax::swing::event::EventListenerList *listenerList;
private:
  jint index;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_DefaultSingleSelectionModel__ */
