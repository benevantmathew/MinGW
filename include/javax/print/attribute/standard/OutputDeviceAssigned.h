// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_OutputDeviceAssigned__
#define __javax_print_attribute_standard_OutputDeviceAssigned__

#pragma interface

#include <javax/print/attribute/TextSyntax.h>

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
          class OutputDeviceAssigned;
        }
      }
    }
  }
}

class javax::print::attribute::standard::OutputDeviceAssigned : public ::javax::print::attribute::TextSyntax
{
public:
  OutputDeviceAssigned (::java::lang::String *, ::java::util::Locale *);
  jboolean equals (::java::lang::Object *);
  ::java::lang::Class *getCategory ();
  ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = 5486733778854271081LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_OutputDeviceAssigned__ */
