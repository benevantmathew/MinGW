// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_AWTEventListenerProxy__
#define __java_awt_event_AWTEventListenerProxy__

#pragma interface

#include <java/util/EventListenerProxy.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class AWTEvent;
      namespace event
      {
        class AWTEventListenerProxy;
        class AWTEventListener;
      }
    }
  }
}

class java::awt::event::AWTEventListenerProxy : public ::java::util::EventListenerProxy
{
public:
  AWTEventListenerProxy (jlong, ::java::awt::event::AWTEventListener *);
  virtual void eventDispatched (::java::awt::AWTEvent *);
  virtual jlong getEventMask () { return mask; }
private:
  jlong __attribute__((aligned(__alignof__( ::java::util::EventListenerProxy ))))  mask;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_event_AWTEventListenerProxy__ */
