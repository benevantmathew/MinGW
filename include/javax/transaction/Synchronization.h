// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_transaction_Synchronization__
#define __javax_transaction_Synchronization__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace transaction
    {
      class Synchronization;
    }
  }
}

class javax::transaction::Synchronization : public ::java::lang::Object
{
public:
  virtual void beforeCompletion () = 0;
  virtual void afterCompletion (jint) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_transaction_Synchronization__ */
