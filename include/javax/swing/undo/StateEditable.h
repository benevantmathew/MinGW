// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_undo_StateEditable__
#define __javax_swing_undo_StateEditable__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace undo
      {
        class StateEditable;
      }
    }
  }
}

class javax::swing::undo::StateEditable : public ::java::lang::Object
{
public:
  virtual void restoreState (::java::util::Hashtable *) = 0;
  virtual void storeState (::java::util::Hashtable *) = 0;
  static ::java::lang::String *RCSID;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_undo_StateEditable__ */
