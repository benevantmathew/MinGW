// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sql_XAConnection__
#define __javax_sql_XAConnection__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace sql
    {
      class XAConnection;
    }
    namespace transaction
    {
      namespace xa
      {
        class XAResource;
      }
    }
  }
}

class javax::sql::XAConnection : public ::java::lang::Object
{
public:
  virtual ::javax::transaction::xa::XAResource *getXAResource () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_sql_XAConnection__ */
