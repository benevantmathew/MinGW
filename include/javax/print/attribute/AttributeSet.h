// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_AttributeSet__
#define __javax_print_attribute_AttributeSet__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class AttributeSet;
        class Attribute;
      }
    }
  }
}

class javax::print::attribute::AttributeSet : public ::java::lang::Object
{
public:
  virtual jboolean add (::javax::print::attribute::Attribute *) = 0;
  virtual jboolean addAll (::javax::print::attribute::AttributeSet *) = 0;
  virtual void clear () = 0;
  virtual jboolean containsKey (::java::lang::Class *) = 0;
  virtual jboolean containsValue (::javax::print::attribute::Attribute *) = 0;
  virtual jboolean equals (::java::lang::Object *) = 0;
  virtual ::javax::print::attribute::Attribute *get (::java::lang::Class *) = 0;
  virtual jint hashCode () = 0;
  virtual jboolean isEmpty () = 0;
  virtual jboolean remove (::javax::print::attribute::Attribute *) = 0;
  virtual jboolean remove (::java::lang::Class *) = 0;
  virtual jint size () = 0;
  virtual JArray< ::javax::print::attribute::Attribute *> *toArray () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_print_attribute_AttributeSet__ */
