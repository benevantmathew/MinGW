// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_ParameterMetaData__
#define __java_sql_ParameterMetaData__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
      class ParameterMetaData;
    }
  }
}

class java::sql::ParameterMetaData : public ::java::lang::Object
{
public:
  virtual jint getParameterCount () = 0;
  virtual jint isNullable (jint) = 0;
  virtual jboolean isSigned (jint) = 0;
  virtual jint getPrecision (jint) = 0;
  virtual jint getScale (jint) = 0;
  virtual jint getParameterType (jint) = 0;
  virtual ::java::lang::String *getParameterTypeName (jint) = 0;
  virtual ::java::lang::String *getParameterClassName (jint) = 0;
  virtual jint getParameterMode (jint) = 0;
  static const jint parameterNoNulls = 0L;
  static const jint parameterNullable = 1L;
  static const jint parameterNullableUnknown = 2L;
  static const jint parameterModeUnknown = 0L;
  static const jint parameterModeIn = 1L;
  static const jint parameterModeInOut = 2L;
  static const jint parameterModeOut = 4L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_sql_ParameterMetaData__ */
