// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_table_TableCellRenderer__
#define __javax_swing_table_TableCellRenderer__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace table
      {
        class TableCellRenderer;
      }
      class JTable;
    }
  }
}

class javax::swing::table::TableCellRenderer : public ::java::lang::Object
{
public:
  virtual ::java::awt::Component *getTableCellRendererComponent (::javax::swing::JTable *, ::java::lang::Object *, jboolean, jboolean, jint, jint) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_table_TableCellRenderer__ */
