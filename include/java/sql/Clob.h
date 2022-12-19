// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_Clob__
#define __java_sql_Clob__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
      class Clob;
    }
  }
}

class java::sql::Clob : public ::java::lang::Object
{
public:
  virtual jlong length () = 0;
  virtual ::java::lang::String *getSubString (jlong, jint) = 0;
  virtual ::java::io::Reader *getCharacterStream () = 0;
  virtual ::java::io::InputStream *getAsciiStream () = 0;
  virtual jlong position (::java::lang::String *, jlong) = 0;
  virtual jlong position (::java::sql::Clob *, jlong) = 0;
  virtual jint setString (jlong, ::java::lang::String *) = 0;
  virtual jint setString (jlong, ::java::lang::String *, jint, jint) = 0;
  virtual ::java::io::OutputStream *setAsciiStream (jlong) = 0;
  virtual ::java::io::Writer *setCharacterStream (jlong) = 0;
  virtual void truncate (jlong) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_sql_Clob__ */
