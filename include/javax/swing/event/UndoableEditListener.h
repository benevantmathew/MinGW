// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_UndoableEditListener__
#define __javax_swing_event_UndoableEditListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class UndoableEditListener;
        class UndoableEditEvent;
      }
    }
  }
}

class javax::swing::event::UndoableEditListener : public ::java::lang::Object
{
public:
  virtual void undoableEditHappened (::javax::swing::event::UndoableEditEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_event_UndoableEditListener__ */
