// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_DesignMode__
#define __java_beans_DesignMode__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class DesignMode;
    }
  }
}

class java::beans::DesignMode : public ::java::lang::Object
{
public:
  virtual void setDesignTime (jboolean) = 0;
  virtual jboolean isDesignTime () = 0;
  static ::java::lang::String *PROPERTYNAME;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_beans_DesignMode__ */
