// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_beancontext_BeanContextServiceProviderBeanInfo__
#define __java_beans_beancontext_BeanContextServiceProviderBeanInfo__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      namespace beancontext
      {
        class BeanContextServiceProviderBeanInfo;
      }
      class BeanInfo;
    }
  }
}

class java::beans::beancontext::BeanContextServiceProviderBeanInfo : public ::java::lang::Object
{
public:
  virtual JArray< ::java::beans::BeanInfo *> *getServicesBeanInfo () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_beans_beancontext_BeanContextServiceProviderBeanInfo__ */
