// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_VetoableChangeListener__
#define __java_beans_VetoableChangeListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class VetoableChangeListener;
      class PropertyChangeEvent;
    }
  }
}

class java::beans::VetoableChangeListener : public ::java::lang::Object
{
public:
  virtual void vetoableChange (::java::beans::PropertyChangeEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_beans_VetoableChangeListener__ */
