// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_rmi_CORBA_DelegateFactory__
#define __gnu_javax_rmi_CORBA_DelegateFactory__

#pragma interface

#include <java/lang/Object.h>

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
          class DelegateFactory;
        }
      }
    }
  }
}

class gnu::javax::rmi::CORBA::DelegateFactory : public ::java::lang::Object
{
public:
  static ::java::lang::Object *getInstance (::java::lang::String *);
  DelegateFactory ();
private:
  static ::java::util::HashMap *cache;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_javax_rmi_CORBA_DelegateFactory__ */
