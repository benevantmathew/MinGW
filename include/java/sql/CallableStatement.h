// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_CallableStatement__
#define __java_sql_CallableStatement__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
    }
    namespace sql
    {
      class CallableStatement;
      class Array;
      class Clob;
      class Blob;
      class Ref;
      class Timestamp;
      class Time;
      class Date;
    }
    namespace math
    {
      class BigDecimal;
    }
  }
}

class java::sql::CallableStatement : public ::java::lang::Object
{
public:
  virtual void registerOutParameter (jint, jint) = 0;
  virtual void registerOutParameter (jint, jint, jint) = 0;
  virtual jboolean wasNull () = 0;
  virtual ::java::lang::String *getString (jint) = 0;
  virtual jboolean getBoolean (jint) = 0;
  virtual jbyte getByte (jint) = 0;
  virtual jshort getShort (jint) = 0;
  virtual jint getInt (jint) = 0;
  virtual jlong getLong (jint) = 0;
  virtual jfloat getFloat (jint) = 0;
  virtual jdouble getDouble (jint) = 0;
  virtual ::java::math::BigDecimal *getBigDecimal (jint, jint) = 0;
  virtual jbyteArray getBytes (jint) = 0;
  virtual ::java::sql::Date *getDate (jint) = 0;
  virtual ::java::sql::Time *getTime (jint) = 0;
  virtual ::java::sql::Timestamp *getTimestamp (jint) = 0;
  virtual ::java::lang::Object *getObject (jint) = 0;
  virtual ::java::math::BigDecimal *getBigDecimal (jint) = 0;
  virtual ::java::lang::Object *getObject (jint, ::java::util::Map *) = 0;
  virtual ::java::sql::Ref *getRef (jint) = 0;
  virtual ::java::sql::Blob *getBlob (jint) = 0;
  virtual ::java::sql::Clob *getClob (jint) = 0;
  virtual ::java::sql::Array *getArray (jint) = 0;
  virtual ::java::sql::Date *getDate (jint, ::java::util::Calendar *) = 0;
  virtual ::java::sql::Time *getTime (jint, ::java::util::Calendar *) = 0;
  virtual ::java::sql::Timestamp *getTimestamp (jint, ::java::util::Calendar *) = 0;
  virtual void registerOutParameter (jint, jint, ::java::lang::String *) = 0;
  virtual void registerOutParameter (::java::lang::String *, jint) = 0;
  virtual void registerOutParameter (::java::lang::String *, jint, jint) = 0;
  virtual void registerOutParameter (::java::lang::String *, jint, ::java::lang::String *) = 0;
  virtual ::java::net::URL *getURL (jint) = 0;
  virtual void setURL (::java::lang::String *, ::java::net::URL *) = 0;
  virtual void setNull (::java::lang::String *, jint) = 0;
  virtual void setBoolean (::java::lang::String *, jboolean) = 0;
  virtual void setByte (::java::lang::String *, jbyte) = 0;
  virtual void setShort (::java::lang::String *, jshort) = 0;
  virtual void setInt (::java::lang::String *, jint) = 0;
  virtual void setLong (::java::lang::String *, jlong) = 0;
  virtual void setFloat (::java::lang::String *, jfloat) = 0;
  virtual void setDouble (::java::lang::String *, jdouble) = 0;
  virtual void setBigDecimal (::java::lang::String *, ::java::math::BigDecimal *) = 0;
  virtual void setString (::java::lang::String *, ::java::lang::String *) = 0;
  virtual void setBytes (::java::lang::String *, jbyteArray) = 0;
  virtual void setDate (::java::lang::String *, ::java::sql::Date *) = 0;
  virtual void setTime (::java::lang::String *, ::java::sql::Time *) = 0;
  virtual void setTimestamp (::java::lang::String *, ::java::sql::Timestamp *) = 0;
  virtual void setAsciiStream (::java::lang::String *, ::java::io::InputStream *, jint) = 0;
  virtual void setBinaryStream (::java::lang::String *, ::java::io::InputStream *, jint) = 0;
  virtual void setObject (::java::lang::String *, ::java::lang::Object *, jint, jint) = 0;
  virtual void setObject (::java::lang::String *, ::java::lang::Object *, jint) = 0;
  virtual void setObject (::java::lang::String *, ::java::lang::Object *) = 0;
  virtual void setCharacterStream (::java::lang::String *, ::java::io::Reader *, jint) = 0;
  virtual void setDate (::java::lang::String *, ::java::sql::Date *, ::java::util::Calendar *) = 0;
  virtual void setTime (::java::lang::String *, ::java::sql::Time *, ::java::util::Calendar *) = 0;
  virtual void setTimestamp (::java::lang::String *, ::java::sql::Timestamp *, ::java::util::Calendar *) = 0;
  virtual void setNull (::java::lang::String *, jint, ::java::lang::String *) = 0;
  virtual ::java::lang::String *getString (::java::lang::String *) = 0;
  virtual jboolean getBoolean (::java::lang::String *) = 0;
  virtual jbyte getByte (::java::lang::String *) = 0;
  virtual jshort getShort (::java::lang::String *) = 0;
  virtual jint getInt (::java::lang::String *) = 0;
  virtual jlong getLong (::java::lang::String *) = 0;
  virtual jfloat getFloat (::java::lang::String *) = 0;
  virtual jdouble getDouble (::java::lang::String *) = 0;
  virtual jbyteArray getBytes (::java::lang::String *) = 0;
  virtual ::java::sql::Date *getDate (::java::lang::String *) = 0;
  virtual ::java::sql::Time *getTime (::java::lang::String *) = 0;
  virtual ::java::sql::Timestamp *getTimestamp (::java::lang::String *) = 0;
  virtual ::java::lang::Object *getObject (::java::lang::String *) = 0;
  virtual ::java::math::BigDecimal *getBigDecimal (::java::lang::String *) = 0;
  virtual ::java::lang::Object *getObject (::java::lang::String *, ::java::util::Map *) = 0;
  virtual ::java::sql::Ref *getRef (::java::lang::String *) = 0;
  virtual ::java::sql::Blob *getBlob (::java::lang::String *) = 0;
  virtual ::java::sql::Clob *getClob (::java::lang::String *) = 0;
  virtual ::java::sql::Array *getArray (::java::lang::String *) = 0;
  virtual ::java::sql::Date *getDate (::java::lang::String *, ::java::util::Calendar *) = 0;
  virtual ::java::sql::Time *getTime (::java::lang::String *, ::java::util::Calendar *) = 0;
  virtual ::java::sql::Timestamp *getTimestamp (::java::lang::String *, ::java::util::Calendar *) = 0;
  virtual ::java::net::URL *getURL (::java::lang::String *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_sql_CallableStatement__ */
