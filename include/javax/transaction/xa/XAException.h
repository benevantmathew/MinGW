// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_transaction_xa_XAException__
#define __javax_transaction_xa_XAException__

#pragma interface

#include <java/lang/Exception.h>

extern "Java"
{
  namespace javax
  {
    namespace transaction
    {
      namespace xa
      {
        class XAException;
      }
    }
  }
}

class javax::transaction::xa::XAException : public ::java::lang::Exception
{
public:
  XAException ();
  XAException (::java::lang::String *);
  XAException (jint);
  jint __attribute__((aligned(__alignof__( ::java::lang::Exception ))))  errorCode;
  static const jint XA_RBBASE = 100L;
  static const jint XA_RBROLLBACK = 100L;
  static const jint XA_RBCOMMFAIL = 101L;
  static const jint XA_RBDEADLOCK = 102L;
  static const jint XA_RBINTEGRITY = 103L;
  static const jint XA_RBOTHER = 104L;
  static const jint XA_RBPROTO = 105L;
  static const jint XA_RBTIMEOUT = 106L;
  static const jint XA_RBTRANSIENT = 107L;
  static const jint XA_RBEND = 107L;
  static const jint XA_NOMIGRATE = 9L;
  static const jint XA_HEURHAZ = 8L;
  static const jint XA_HEURCOM = 7L;
  static const jint XA_HEURRB = 6L;
  static const jint XA_HEURMIX = 5L;
  static const jint XA_RETRY = 4L;
  static const jint XA_RDONLY = 3L;
  static const jint XAER_ASYNC = -2L;
  static const jint XAER_RMERR = -3L;
  static const jint XAER_NOTA = -4L;
  static const jint XAER_INVAL = -5L;
  static const jint XAER_PROTO = -6L;
  static const jint XAER_RMFAIL = -7L;
  static const jint XAER_DUPID = -8L;
  static const jint XAER_OUTSIDE = -9L;

  static ::java::lang::Class class$;
};

#endif /* __javax_transaction_xa_XAException__ */
