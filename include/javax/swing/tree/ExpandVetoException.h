// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_ExpandVetoException__
#define __javax_swing_tree_ExpandVetoException__

#pragma interface

#include <java/lang/Exception.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace tree
      {
        class ExpandVetoException;
      }
      namespace event
      {
        class TreeExpansionEvent;
      }
    }
  }
}

class javax::swing::tree::ExpandVetoException : public ::java::lang::Exception
{
public:
  ExpandVetoException (::javax::swing::event::TreeExpansionEvent *);
  ExpandVetoException (::javax::swing::event::TreeExpansionEvent *, ::java::lang::String *);
public:  // actually protected
  ::javax::swing::event::TreeExpansionEvent * __attribute__((aligned(__alignof__( ::java::lang::Exception )))) event;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_tree_ExpandVetoException__ */
