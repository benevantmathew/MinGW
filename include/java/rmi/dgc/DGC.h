// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_dgc_DGC__
#define __java_rmi_dgc_DGC__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace dgc
      {
        class DGC;
        class VMID;
        class Lease;
      }
      namespace server
      {
        class ObjID;
      }
    }
  }
}

class java::rmi::dgc::DGC : public ::java::lang::Object
{
public:
  virtual ::java::rmi::dgc::Lease *dirty (JArray< ::java::rmi::server::ObjID *> *, jlong, ::java::rmi::dgc::Lease *) = 0;
  virtual void clean (JArray< ::java::rmi::server::ObjID *> *, jlong, ::java::rmi::dgc::VMID *, jboolean) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_rmi_dgc_DGC__ */
