// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_beancontext_BeanContextServiceRevokedListener__
#define __java_beans_beancontext_BeanContextServiceRevokedListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      namespace beancontext
      {
        class BeanContextServiceRevokedListener;
        class BeanContextServiceRevokedEvent;
      }
    }
  }
}

class java::beans::beancontext::BeanContextServiceRevokedListener : public ::java::lang::Object
{
public:
  virtual void serviceRevoked (::java::beans::beancontext::BeanContextServiceRevokedEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_beans_beancontext_BeanContextServiceRevokedListener__ */
