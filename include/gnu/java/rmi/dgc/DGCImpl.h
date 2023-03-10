// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_dgc_DGCImpl__
#define __gnu_java_rmi_dgc_DGCImpl__

#pragma interface

#include <gnu/java/rmi/server/UnicastServerRef.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace dgc
        {
          class DGCImpl;
        }
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
      namespace dgc
      {
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

class gnu::java::rmi::dgc::DGCImpl : public ::gnu::java::rmi::server::UnicastServerRef
{
public:
  DGCImpl ();
  virtual ::java::rmi::dgc::Lease *dirty (JArray< ::java::rmi::server::ObjID *> *, jlong, ::java::rmi::dgc::Lease *);
  virtual void clean (JArray< ::java::rmi::server::ObjID *> *, jlong, ::java::rmi::dgc::VMID *, jboolean) { }
private:
  static const jlong LEASE_VALUE = 600000LL;
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::gnu::java::rmi::server::UnicastServerRef )))) leaseCache;

  friend class gnu_java_rmi_dgc_DGCImpl$LeaseRecord;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_dgc_DGCImpl__ */
