// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_event_NamespaceChangeListener__
#define __javax_naming_event_NamespaceChangeListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace event
      {
        class NamespaceChangeListener;
        class NamingEvent;
      }
    }
  }
}

class javax::naming::event::NamespaceChangeListener : public ::java::lang::Object
{
public:
  virtual void objectAdded (::javax::naming::event::NamingEvent *) = 0;
  virtual void objectRemoved (::javax::naming::event::NamingEvent *) = 0;
  virtual void objectRenamed (::javax::naming::event::NamingEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_naming_event_NamespaceChangeListener__ */
