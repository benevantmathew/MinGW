// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sql_RowSetReader__
#define __javax_sql_RowSetReader__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace sql
    {
      class RowSetReader;
      class RowSetInternal;
    }
  }
}

class javax::sql::RowSetReader : public ::java::lang::Object
{
public:
  virtual void readData (::javax::sql::RowSetInternal *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_sql_RowSetReader__ */
