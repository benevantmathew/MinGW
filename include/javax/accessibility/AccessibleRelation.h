// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_accessibility_AccessibleRelation__
#define __javax_accessibility_AccessibleRelation__

#pragma interface

#include <javax/accessibility/AccessibleBundle.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleRelation;
    }
  }
}

class javax::accessibility::AccessibleRelation : public ::javax::accessibility::AccessibleBundle
{
public:
  AccessibleRelation (::java::lang::String *);
  AccessibleRelation (::java::lang::String *, ::java::lang::Object *);
  AccessibleRelation (::java::lang::String *, JArray< ::java::lang::Object *> *);
  virtual ::java::lang::String *getKey () { return key; }
  virtual JArray< ::java::lang::Object *> *getTarget () { return targets; }
  virtual void setTarget (::java::lang::Object *);
  virtual void setTarget (JArray< ::java::lang::Object *> *);
  static ::java::lang::String *LABEL_FOR;
  static ::java::lang::String *LABELED_BY;
  static ::java::lang::String *MEMBER_OF;
  static ::java::lang::String *CONTROLLER_FOR;
  static ::java::lang::String *CONTROLLED_BY;
  static ::java::lang::String *LABEL_FOR_PROPERTY;
  static ::java::lang::String *LABELED_BY_PROPERTY;
  static ::java::lang::String *MEMBER_OF_PROPERTY;
  static ::java::lang::String *CONTROLLER_FOR_PROPERTY;
  static ::java::lang::String *CONTROLLED_BY_PROPERTY;
private:
  static JArray< ::java::lang::Object *> *EMPTY_TARGETS;
public: // actually package-private
  JArray< ::java::lang::Object *> * __attribute__((aligned(__alignof__( ::javax::accessibility::AccessibleBundle )))) targets;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_accessibility_AccessibleRelation__ */
