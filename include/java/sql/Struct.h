// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_Struct__
#define __java_sql_Struct__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
      class Struct;
    }
  }
}

class java::sql::Struct : public ::java::lang::Object
{
public:
  virtual ::java::lang::String *getSQLTypeName () = 0;
  virtual JArray< ::java::lang::Object *> *getAttributes () = 0;
  virtual JArray< ::java::lang::Object *> *getAttributes (::java::util::Map *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_sql_Struct__ */
