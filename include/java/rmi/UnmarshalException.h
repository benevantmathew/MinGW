// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_UnmarshalException__
#define __java_rmi_UnmarshalException__

#pragma interface

#include <java/rmi/RemoteException.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      class UnmarshalException;
    }
  }
}

class java::rmi::UnmarshalException : public ::java::rmi::RemoteException
{
public:
  UnmarshalException (::java::lang::String *);
  UnmarshalException (::java::lang::String *, ::java::lang::Exception *);
private:
  static const jlong serialVersionUID = 594380845140740218LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_UnmarshalException__ */
