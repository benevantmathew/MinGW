// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_MenuKeyEvent__
#define __javax_swing_event_MenuKeyEvent__

#pragma interface

#include <java/awt/event/KeyEvent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class MenuKeyEvent;
      }
      class MenuSelectionManager;
      class MenuElement;
    }
  }
}

class javax::swing::event::MenuKeyEvent : public ::java::awt::event::KeyEvent
{
public:
  MenuKeyEvent (::java::awt::Component *, jint, jlong, jint, jint, jchar, JArray< ::javax::swing::MenuElement *> *, ::javax::swing::MenuSelectionManager *);
  virtual JArray< ::javax::swing::MenuElement *> *getPath () { return path; }
  virtual ::javax::swing::MenuSelectionManager *getMenuSelectionManager () { return manager; }
private:
  JArray< ::javax::swing::MenuElement *> * __attribute__((aligned(__alignof__( ::java::awt::event::KeyEvent )))) path;
  ::javax::swing::MenuSelectionManager *manager;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_event_MenuKeyEvent__ */
