// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_ActionListener__
#define __java_awt_event_ActionListener__

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
        class ActionListener;
        class ActionEvent;
      }
    }
  }
}

class java::awt::event::ActionListener : public ::java::lang::Object
{
public:
  virtual void actionPerformed (::java::awt::event::ActionEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_event_ActionListener__ */
