// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_dnd_DropTargetEvent__
#define __java_awt_dnd_DropTargetEvent__

#pragma interface

#include <java/util/EventObject.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace dnd
      {
        class DropTargetEvent;
        class DropTargetContext;
      }
    }
  }
}

class java::awt::dnd::DropTargetEvent : public ::java::util::EventObject
{
public:
  DropTargetEvent (::java::awt::dnd::DropTargetContext *);
  virtual ::java::awt::dnd::DropTargetContext *getDropTargetContext () { return context; }
public:  // actually protected
  ::java::awt::dnd::DropTargetContext * __attribute__((aligned(__alignof__( ::java::util::EventObject )))) context;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_dnd_DropTargetEvent__ */
