// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_PrinterInfo__
#define __javax_print_attribute_standard_PrinterInfo__

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
          class PrinterInfo;
        }
      }
    }
  }
}

class javax::print::attribute::standard::PrinterInfo : public ::javax::print::attribute::TextSyntax
{
public:
  PrinterInfo (::java::lang::String *, ::java::util::Locale *);
  jboolean equals (::java::lang::Object *);
  ::java::lang::Class *getCategory ();
  ::java::lang::String *getName ();
private:
  static const jlong serialVersionUID = 7765280618777599727LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_standard_PrinterInfo__ */
