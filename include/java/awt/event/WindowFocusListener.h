// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_WindowFocusListener__
#define __java_awt_event_WindowFocusListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class WindowFocusListener;
        class WindowEvent;
      }
    }
  }
}

class java::awt::event::WindowFocusListener : public ::java::lang::Object
{
public:
  virtual void windowGainedFocus (::java::awt::event::WindowEvent *) = 0;
  virtual void windowLostFocus (::java::awt::event::WindowEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_event_WindowFocusListener__ */
