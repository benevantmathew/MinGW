// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_MouseWheelEvent__
#define __java_awt_event_MouseWheelEvent__

#pragma interface

#include <java/awt/event/MouseEvent.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class MouseWheelEvent;
      }
      class Component;
    }
  }
}

class java::awt::event::MouseWheelEvent : public ::java::awt::event::MouseEvent
{
public:
  MouseWheelEvent (::java::awt::Component *, jint, jlong, jint, jint, jint, jint, jboolean, jint, jint, jint);
  virtual jint getScrollType () { return scrollType; }
  virtual jint getScrollAmount () { return scrollAmount; }
  virtual jint getWheelRotation () { return wheelRotation; }
  virtual jint getUnitsToScroll ();
  virtual ::java::lang::String *paramString ();
private:
  static const jlong serialVersionUID = 6459879390515399677LL;
public:
  static const jint WHEEL_UNIT_SCROLL = 0L;
  static const jint WHEEL_BLOCK_SCROLL = 1L;
private:
  jint __attribute__((aligned(__alignof__( ::java::awt::event::MouseEvent ))))  scrollType;
  jint scrollAmount;
  jint wheelRotation;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_event_MouseWheelEvent__ */
