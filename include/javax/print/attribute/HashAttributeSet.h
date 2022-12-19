// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_HashAttributeSet__
#define __javax_print_attribute_HashAttributeSet__

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
        class HashAttributeSet;
        class AttributeSet;
        class Attribute;
      }
    }
  }
}

class javax::print::attribute::HashAttributeSet : public ::java::lang::Object
{
public:
  HashAttributeSet ();
  HashAttributeSet (::javax::print::attribute::Attribute *);
  HashAttributeSet (JArray< ::javax::print::attribute::Attribute *> *);
  HashAttributeSet (::javax::print::attribute::AttributeSet *);
public:  // actually protected
  HashAttributeSet (::java::lang::Class *);
  HashAttributeSet (::javax::print::attribute::Attribute *, ::java::lang::Class *);
  HashAttributeSet (JArray< ::javax::print::attribute::Attribute *> *, ::java::lang::Class *);
public:
  HashAttributeSet (::javax::print::attribute::AttributeSet *, ::java::lang::Class *);
  virtual jboolean add (::javax::print::attribute::Attribute *);
private:
  jboolean addInternal (::javax::print::attribute::Attribute *, ::java::lang::Class *);
public:
  virtual jboolean addAll (::javax::print::attribute::AttributeSet *);
private:
  jboolean addAllInternal (::javax::print::attribute::AttributeSet *, ::java::lang::Class *);
public:
  virtual void clear ();
  virtual jboolean containsKey (::java::lang::Class *);
  virtual jboolean containsValue (::javax::print::attribute::Attribute *);
  virtual jboolean equals (::java::lang::Object *);
  virtual ::javax::print::attribute::Attribute *get (::java::lang::Class *);
  virtual jint hashCode ();
  virtual jboolean isEmpty ();
  virtual jboolean remove (::javax::print::attribute::Attribute *);
  virtual jboolean remove (::java::lang::Class *);
  virtual jint size ();
  virtual JArray< ::javax::print::attribute::Attribute *> *toArray ();
private:
  static const jlong serialVersionUID = 5311560590283707917LL;
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::lang::Object )))) interfaceName;
  ::java::util::HashMap *attributeMap;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_HashAttributeSet__ */
