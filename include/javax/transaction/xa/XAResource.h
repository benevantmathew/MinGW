// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_transaction_xa_XAResource__
#define __javax_transaction_xa_XAResource__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace transaction
    {
      namespace xa
      {
        class XAResource;
        class Xid;
      }
    }
  }
}

class javax::transaction::xa::XAResource : public ::java::lang::Object
{
public:
  virtual void commit (::javax::transaction::xa::Xid *, jboolean) = 0;
  virtual void end (::javax::transaction::xa::Xid *, jint) = 0;
  virtual void forget (::javax::transaction::xa::Xid *) = 0;
  virtual jint getTransactionTimeout () = 0;
  virtual jboolean isSameRM (::javax::transaction::xa::XAResource *) = 0;
  virtual jint prepare (::javax::transaction::xa::Xid *) = 0;
  virtual JArray< ::javax::transaction::xa::Xid *> *recover (jint) = 0;
  virtual void rollback (::javax::transaction::xa::Xid *) = 0;
  virtual jboolean setTransactionTimeout (jint) = 0;
  virtual void start (::javax::transaction::xa::Xid *, jint) = 0;
  static const jint TMENDRSCAN = 8388608L;
  static const jint TMFAIL = 536870912L;
  static const jint TMJOIN = 2097152L;
  static const jint TMNOFLAGS = 0L;
  static const jint TMONEPHASE = 1073741824L;
  static const jint TMRESUME = 134217728L;
  static const jint TMSTARTRSCAN = 16777216L;
  static const jint TMSUCCESS = 67108864L;
  static const jint TMSUSPEND = 33554432L;
  static const jint XA_RDONLY = 3L;
  static const jint XA_OK = 0L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_transaction_xa_XAResource__ */
