// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_PropertyPermission__
#define __java_util_PropertyPermission__

#pragma interface

#include <java/security/BasicPermission.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class PermissionCollection;
      class Permission;
    }
  }
}

class java::util::PropertyPermission : public ::java::security::BasicPermission
{
public:
  PropertyPermission (::java::lang::String *, ::java::lang::String *);
private:
  void setActions (::java::lang::String *);
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
public:
  jboolean implies (::java::security::Permission *);
  jboolean equals (::java::lang::Object *);
  jint hashCode ();
  ::java::lang::String *getActions ();
  ::java::security::PermissionCollection *newPermissionCollection ();
private:
  static JArray< ::java::io::ObjectStreamField *> *serialPersistentFields;
  static const jlong serialVersionUID = 885438825399942851LL;
  static const jint READ = 1L;
  static const jint WRITE = 2L;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::security::BasicPermission ))))  actions;
private:
  static JArray< ::java::lang::String *> *actionStrings;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_PropertyPermission__ */
