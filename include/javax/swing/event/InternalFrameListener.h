// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_InternalFrameListener__
#define __javax_swing_event_InternalFrameListener__

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
        class InternalFrameListener;
        class InternalFrameEvent;
      }
    }
  }
}

class javax::swing::event::InternalFrameListener : public ::java::lang::Object
{
public:
  virtual void internalFrameActivated (::javax::swing::event::InternalFrameEvent *) = 0;
  virtual void internalFrameClosed (::javax::swing::event::InternalFrameEvent *) = 0;
  virtual void internalFrameClosing (::javax::swing::event::InternalFrameEvent *) = 0;
  virtual void internalFrameDeactivated (::javax::swing::event::InternalFrameEvent *) = 0;
  virtual void internalFrameDeiconified (::javax::swing::event::InternalFrameEvent *) = 0;
  virtual void internalFrameIconified (::javax::swing::event::InternalFrameEvent *) = 0;
  virtual void internalFrameOpened (::javax::swing::event::InternalFrameEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_event_InternalFrameListener__ */
