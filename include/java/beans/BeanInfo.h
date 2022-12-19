// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_BeanInfo__
#define __java_beans_BeanInfo__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Image;
    }
    namespace beans
    {
      class BeanInfo;
      class MethodDescriptor;
      class PropertyDescriptor;
      class EventSetDescriptor;
      class BeanDescriptor;
    }
  }
}

class java::beans::BeanInfo : public ::java::lang::Object
{
public:
  virtual ::java::beans::BeanDescriptor *getBeanDescriptor () = 0;
  virtual JArray< ::java::beans::EventSetDescriptor *> *getEventSetDescriptors () = 0;
  virtual jint getDefaultEventIndex () = 0;
  virtual JArray< ::java::beans::PropertyDescriptor *> *getPropertyDescriptors () = 0;
  virtual jint getDefaultPropertyIndex () = 0;
  virtual JArray< ::java::beans::MethodDescriptor *> *getMethodDescriptors () = 0;
  virtual JArray< ::java::beans::BeanInfo *> *getAdditionalBeanInfo () = 0;
  virtual ::java::awt::Image *getIcon (jint) = 0;
  static const jint ICON_COLOR_16x16 = 1L;
  static const jint ICON_COLOR_32x32 = 2L;
  static const jint ICON_MONO_16x16 = 3L;
  static const jint ICON_MONO_32x32 = 4L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_beans_BeanInfo__ */
