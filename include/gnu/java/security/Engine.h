// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_Engine__
#define __gnu_java_security_Engine__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        class Engine;
      }
    }
  }
  namespace java
  {
    namespace security
    {
      class Provider;
    }
  }
}

class gnu::java::security::Engine : public ::java::lang::Object
{
private:
  Engine ();
public:
  static ::java::lang::Object *getInstance (::java::lang::String *, ::java::lang::String *, ::java::security::Provider *);
  static ::java::lang::Object *getInstance (::java::lang::String *, ::java::lang::String *, ::java::security::Provider *, JArray< ::java::lang::Object *> *);
private:
  static ::java::lang::reflect::Constructor *getCompatibleConstructor (::java::lang::Class *, JArray< ::java::lang::Object *> *);
  static ::java::lang::String *ALG_ALIAS;
  static const jint MAX_ALIASES = 5L;
  static JArray< ::java::lang::Object *> *NO_ARGS;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_security_Engine__ */
