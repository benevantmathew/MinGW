// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_HierarchyListener__
#define __java_awt_event_HierarchyListener__

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
        class HierarchyListener;
        class HierarchyEvent;
      }
    }
  }
}

class java::awt::event::HierarchyListener : public ::java::lang::Object
{
public:
  virtual void hierarchyChanged (::java::awt::event::HierarchyEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_event_HierarchyListener__ */
