// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_beancontext_BeanContextServiceAvailableEvent__
#define __java_beans_beancontext_BeanContextServiceAvailableEvent__

#pragma interface

#include <java/beans/beancontext/BeanContextEvent.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      namespace beancontext
      {
        class BeanContextServiceAvailableEvent;
        class BeanContextServices;
      }
    }
  }
}

class java::beans::beancontext::BeanContextServiceAvailableEvent : public ::java::beans::beancontext::BeanContextEvent
{
public:
  BeanContextServiceAvailableEvent (::java::beans::beancontext::BeanContextServices *, ::java::lang::Class *);
  virtual ::java::util::Iterator *getCurrentServiceSelectors ();
  virtual ::java::lang::Class *getServiceClass () { return serviceClass; }
  virtual ::java::beans::beancontext::BeanContextServices *getSourceAsBeanContextServices ();
public:  // actually protected
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::beans::beancontext::BeanContextEvent )))) serviceClass;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_beancontext_BeanContextServiceAvailableEvent__ */
