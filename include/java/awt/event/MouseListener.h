// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_MouseListener__
#define __java_awt_event_MouseListener__

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
        class MouseListener;
        class MouseEvent;
      }
    }
  }
}

class java::awt::event::MouseListener : public ::java::lang::Object
{
public:
  virtual void mouseClicked (::java::awt::event::MouseEvent *) = 0;
  virtual void mousePressed (::java::awt::event::MouseEvent *) = 0;
  virtual void mouseReleased (::java::awt::event::MouseEvent *) = 0;
  virtual void mouseEntered (::java::awt::event::MouseEvent *) = 0;
  virtual void mouseExited (::java::awt::event::MouseEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_event_MouseListener__ */
