// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_BoundedRangeModel__
#define __javax_swing_BoundedRangeModel__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class BoundedRangeModel;
      namespace event
      {
        class ChangeListener;
      }
    }
  }
}

class javax::swing::BoundedRangeModel : public ::java::lang::Object
{
public:
  virtual jint getValue () = 0;
  virtual void setValue (jint) = 0;
  virtual jint getMinimum () = 0;
  virtual void setMinimum (jint) = 0;
  virtual jint getMaximum () = 0;
  virtual void setMaximum (jint) = 0;
  virtual jboolean getValueIsAdjusting () = 0;
  virtual void setValueIsAdjusting (jboolean) = 0;
  virtual jint getExtent () = 0;
  virtual void setExtent (jint) = 0;
  virtual void setRangeProperties (jint, jint, jint, jint, jboolean) = 0;
  virtual void addChangeListener (::javax::swing::event::ChangeListener *) = 0;
  virtual void removeChangeListener (::javax::swing::event::ChangeListener *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_BoundedRangeModel__ */
