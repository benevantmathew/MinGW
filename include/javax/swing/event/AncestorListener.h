// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_AncestorListener__
#define __javax_swing_event_AncestorListener__

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
        class AncestorListener;
        class AncestorEvent;
      }
    }
  }
}

class javax::swing::event::AncestorListener : public ::java::lang::Object
{
public:
  virtual void ancestorAdded (::javax::swing::event::AncestorEvent *) = 0;
  virtual void ancestorRemoved (::javax::swing::event::AncestorEvent *) = 0;
  virtual void ancestorMoved (::javax::swing::event::AncestorEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_event_AncestorListener__ */
