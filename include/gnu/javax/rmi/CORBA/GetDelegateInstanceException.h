// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_rmi_CORBA_GetDelegateInstanceException__
#define __gnu_javax_rmi_CORBA_GetDelegateInstanceException__

#pragma interface

#include <java/lang/Exception.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace rmi
      {
        namespace CORBA
        {
          class GetDelegateInstanceException;
        }
      }
    }
  }
}

class gnu::javax::rmi::CORBA::GetDelegateInstanceException : public ::java::lang::Exception
{
public:
  GetDelegateInstanceException (::java::lang::String *);
  GetDelegateInstanceException (::java::lang::String *, ::java::lang::Throwable *);
private:
  ::java::lang::Throwable * __attribute__((aligned(__alignof__( ::java::lang::Exception )))) next;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_rmi_CORBA_GetDelegateInstanceException__ */
