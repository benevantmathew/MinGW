// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_ItemListener__
#define __java_awt_event_ItemListener__

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
        class ItemListener;
        class ItemEvent;
      }
    }
  }
}

class java::awt::event::ItemListener : public ::java::lang::Object
{
public:
  virtual void itemStateChanged (::java::awt::event::ItemEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_event_ItemListener__ */
