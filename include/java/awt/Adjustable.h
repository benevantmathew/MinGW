// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Adjustable__
#define __java_awt_Adjustable__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Adjustable;
      namespace event
      {
        class AdjustmentListener;
      }
    }
  }
}

class java::awt::Adjustable : public ::java::lang::Object
{
public:
  virtual jint getOrientation () = 0;
  virtual void setMinimum (jint) = 0;
  virtual jint getMinimum () = 0;
  virtual void setMaximum (jint) = 0;
  virtual jint getMaximum () = 0;
  virtual void setUnitIncrement (jint) = 0;
  virtual jint getUnitIncrement () = 0;
  virtual void setBlockIncrement (jint) = 0;
  virtual jint getBlockIncrement () = 0;
  virtual void setVisibleAmount (jint) = 0;
  virtual jint getVisibleAmount () = 0;
  virtual void setValue (jint) = 0;
  virtual jint getValue () = 0;
  virtual void addAdjustmentListener (::java::awt::event::AdjustmentListener *) = 0;
  virtual void removeAdjustmentListener (::java::awt::event::AdjustmentListener *) = 0;
  static const jint HORIZONTAL = 0L;
  static const jint VERTICAL = 1L;
  static const jint NO_ORIENTATION = 2L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_Adjustable__ */
