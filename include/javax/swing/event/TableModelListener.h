// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_TableModelListener__
#define __javax_swing_event_TableModelListener__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class TableModelListener;
        class TableModelEvent;
      }
    }
  }
}

class javax::swing::event::TableModelListener : public ::java::lang::Object
{
public:
  virtual void tableChanged (::javax::swing::event::TableModelEvent *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_event_TableModelListener__ */
