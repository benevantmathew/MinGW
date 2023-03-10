// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_accessibility_AccessibleValue__
#define __javax_accessibility_AccessibleValue__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleValue;
    }
  }
}

class javax::accessibility::AccessibleValue : public ::java::lang::Object
{
public:
  virtual ::java::lang::Number *getCurrentAccessibleValue () = 0;
  virtual jboolean setCurrentAccessibleValue (::java::lang::Number *) = 0;
  virtual ::java::lang::Number *getMinimumAccessibleValue () = 0;
  virtual ::java::lang::Number *getMaximumAccessibleValue () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_accessibility_AccessibleValue__ */
