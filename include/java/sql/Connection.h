// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_Connection__
#define __java_sql_Connection__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
      class Connection;
      class Savepoint;
      class SQLWarning;
      class DatabaseMetaData;
      class CallableStatement;
      class PreparedStatement;
      class Statement;
    }
  }
}

class java::sql::Connection : public ::java::lang::Object
{
public:
  virtual ::java::sql::Statement *createStatement () = 0;
  virtual ::java::sql::PreparedStatement *prepareStatement (::java::lang::String *) = 0;
  virtual ::java::sql::CallableStatement *prepareCall (::java::lang::String *) = 0;
  virtual ::java::lang::String *nativeSQL (::java::lang::String *) = 0;
  virtual void setAutoCommit (jboolean) = 0;
  virtual jboolean getAutoCommit () = 0;
  virtual void commit () = 0;
  virtual void rollback () = 0;
  virtual void close () = 0;
  virtual jboolean isClosed () = 0;
  virtual ::java::sql::DatabaseMetaData *getMetaData () = 0;
  virtual void setReadOnly (jboolean) = 0;
  virtual jboolean isReadOnly () = 0;
  virtual void setCatalog (::java::lang::String *) = 0;
  virtual ::java::lang::String *getCatalog () = 0;
  virtual void setTransactionIsolation (jint) = 0;
  virtual jint getTransactionIsolation () = 0;
  virtual ::java::sql::SQLWarning *getWarnings () = 0;
  virtual void clearWarnings () = 0;
  virtual ::java::sql::Statement *createStatement (jint, jint) = 0;
  virtual ::java::sql::PreparedStatement *prepareStatement (::java::lang::String *, jint, jint) = 0;
  virtual ::java::sql::CallableStatement *prepareCall (::java::lang::String *, jint, jint) = 0;
  virtual ::java::util::Map *getTypeMap () = 0;
  virtual void setTypeMap (::java::util::Map *) = 0;
  virtual void setHoldability (jint) = 0;
  virtual jint getHoldability () = 0;
  virtual ::java::sql::Savepoint *setSavepoint () = 0;
  virtual ::java::sql::Savepoint *setSavepoint (::java::lang::String *) = 0;
  virtual void rollback (::java::sql::Savepoint *) = 0;
  virtual void releaseSavepoint (::java::sql::Savepoint *) = 0;
  virtual ::java::sql::Statement *createStatement (jint, jint, jint) = 0;
  virtual ::java::sql::PreparedStatement *prepareStatement (::java::lang::String *, jint, jint, jint) = 0;
  virtual ::java::sql::CallableStatement *prepareCall (::java::lang::String *, jint, jint, jint) = 0;
  virtual ::java::sql::PreparedStatement *prepareStatement (::java::lang::String *, jint) = 0;
  virtual ::java::sql::PreparedStatement *prepareStatement (::java::lang::String *, jintArray) = 0;
  virtual ::java::sql::PreparedStatement *prepareStatement (::java::lang::String *, JArray< ::java::lang::String *> *) = 0;
  static const jint TRANSACTION_NONE = 0L;
  static const jint TRANSACTION_READ_UNCOMMITTED = 1L;
  static const jint TRANSACTION_READ_COMMITTED = 2L;
  static const jint TRANSACTION_REPEATABLE_READ = 4L;
  static const jint TRANSACTION_SERIALIZABLE = 8L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_sql_Connection__ */
