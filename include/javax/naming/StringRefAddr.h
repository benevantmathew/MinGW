// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_StringRefAddr__
#define __javax_naming_StringRefAddr__

#pragma interface

#include <javax/naming/RefAddr.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      class StringRefAddr;
    }
  }
}

class javax::naming::StringRefAddr : public ::javax::naming::RefAddr
{
public:
  StringRefAddr (::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::Object *getContent () { return reinterpret_cast< ::java::lang::Object *> (contents); }
private:
  static const jlong serialVersionUID = -8913762495138505527LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::javax::naming::RefAddr )))) contents;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_StringRefAddr__ */
