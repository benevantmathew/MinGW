// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_NumberUp__
#define __javax_print_attribute_standard_NumberUp__

#pragma interface

#include <javax/print/attribute/IntegerSyntax.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
          class NumberUp;
        }
      }
    }
  }
}

class javax::print::attribute::standard::NumberUp : public ::javax::print::attribute::IntegerSyntax
{
public:
  NumberUp (jint);
  jboolean equals (::java::lang::Object *);
  ::java::lang::Class *getCategory ();
  ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = -3040436486786527811LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_NumberUp__ */
