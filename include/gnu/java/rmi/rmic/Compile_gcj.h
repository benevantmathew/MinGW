// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_rmic_Compile_gcj__
#define __gnu_java_rmi_rmic_Compile_gcj__

#pragma interface

#include <gnu/java/rmi/rmic/CompilerProcess.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace rmic
        {
          class Compile_gcj;
        }
      }
    }
  }
}

class gnu::java::rmi::rmic::Compile_gcj : public ::gnu::java::rmi::rmic::CompilerProcess
{
public:
  virtual JArray< ::java::lang::String *> *computeArguments (::java::lang::String *);
  Compile_gcj ();
private:
  static JArray< ::java::lang::String *> *COMPILER_ARGS;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_rmi_rmic_Compile_gcj__ */
