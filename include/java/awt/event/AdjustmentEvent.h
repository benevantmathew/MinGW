// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_AdjustmentEvent__
#define __java_awt_event_AdjustmentEvent__

#pragma interface

#include <java/awt/AWTEvent.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class AdjustmentEvent;
      }
      class Adjustable;
    }
  }
}

class java::awt::event::AdjustmentEvent : public ::java::awt::AWTEvent
{
public:
  AdjustmentEvent (::java::awt::Adjustable *, jint, jint, jint);
  AdjustmentEvent (::java::awt::Adjustable *, jint, jint, jint, jboolean);
  virtual ::java::awt::Adjustable *getAdjustable () { return adjustable; }
  virtual jint getValue () { return value; }
  virtual jint getAdjustmentType () { return adjustmentType; }
  virtual jboolean getValueIsAdjusting () { return isAdjusting; }
  virtual ::java::lang::String *paramString ();
private:
  static const jlong serialVersionUID = 5700290645205279921LL;
public:
  static const jint ADJUSTMENT_FIRST = 601L;
  static const jint ADJUSTMENT_LAST = 601L;
  static const jint ADJUSTMENT_VALUE_CHANGED = 601L;
  static const jint UNIT_INCREMENT = 1L;
  static const jint UNIT_DECREMENT = 2L;
  static const jint BLOCK_DECREMENT = 3L;
  static const jint BLOCK_INCREMENT = 4L;
  static const jint TRACK = 5L;
private:
  ::java::awt::Adjustable * __attribute__((aligned(__alignof__( ::java::awt::AWTEvent )))) adjustable;
  jint adjustmentType;
  jint value;
  jboolean isAdjusting;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_event_AdjustmentEvent__ */
