// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_ActivationMonitor__
#define __java_rmi_activation_ActivationMonitor__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class MarshalledObject;
      namespace activation
      {
        class ActivationMonitor;
        class ActivationGroupID;
        class ActivationID;
      }
    }
  }
}

class java::rmi::activation::ActivationMonitor : public ::java::lang::Object
{
public:
  virtual void inactiveObject (::java::rmi::activation::ActivationID *) = 0;
  virtual void activeObject (::java::rmi::activation::ActivationID *, ::java::rmi::MarshalledObject *) = 0;
  virtual void inactiveGroup (::java::rmi::activation::ActivationGroupID *, jlong) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_rmi_activation_ActivationMonitor__ */
