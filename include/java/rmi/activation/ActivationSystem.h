// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_activation_ActivationSystem__
#define __java_rmi_activation_ActivationSystem__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace activation
      {
        class ActivationSystem;
        class ActivationMonitor;
        class ActivationInstantiator;
        class ActivationGroupID;
        class ActivationGroupDesc;
        class ActivationID;
        class ActivationDesc;
      }
    }
  }
}

class java::rmi::activation::ActivationSystem : public ::java::lang::Object
{
public:
  virtual ::java::rmi::activation::ActivationID *registerObject (::java::rmi::activation::ActivationDesc *) = 0;
  virtual void unregisterObject (::java::rmi::activation::ActivationID *) = 0;
  virtual ::java::rmi::activation::ActivationGroupID *registerGroup (::java::rmi::activation::ActivationGroupDesc *) = 0;
  virtual ::java::rmi::activation::ActivationMonitor *activeGroup (::java::rmi::activation::ActivationGroupID *, ::java::rmi::activation::ActivationInstantiator *, jlong) = 0;
  virtual void unregisterGroup (::java::rmi::activation::ActivationGroupID *) = 0;
  virtual void shutdown () = 0;
  virtual ::java::rmi::activation::ActivationDesc *setActivationDesc (::java::rmi::activation::ActivationID *, ::java::rmi::activation::ActivationDesc *) = 0;
  virtual ::java::rmi::activation::ActivationGroupDesc *setActivationGroupDesc (::java::rmi::activation::ActivationGroupID *, ::java::rmi::activation::ActivationGroupDesc *) = 0;
  virtual ::java::rmi::activation::ActivationDesc *getActivationDesc (::java::rmi::activation::ActivationID *) = 0;
  virtual ::java::rmi::activation::ActivationGroupDesc *getActivationGroupDesc (::java::rmi::activation::ActivationGroupID *) = 0;
  static const jint SYSTEM_PORT = 0L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_rmi_activation_ActivationSystem__ */
