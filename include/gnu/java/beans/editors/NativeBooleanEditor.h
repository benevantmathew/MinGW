// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_beans_editors_NativeBooleanEditor__
#define __gnu_java_beans_editors_NativeBooleanEditor__

#pragma interface

#include <java/beans/PropertyEditorSupport.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace beans
      {
        namespace editors
        {
          class NativeBooleanEditor;
        }
      }
    }
  }
}

class gnu::java::beans::editors::NativeBooleanEditor : public ::java::beans::PropertyEditorSupport
{
public:
  virtual void setAsText (::java::lang::String *);
  virtual ::java::lang::String *getAsText ();
  NativeBooleanEditor ();
public: // actually package-private
  JArray< ::java::lang::String *> * __attribute__((aligned(__alignof__( ::java::beans::PropertyEditorSupport )))) tags;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_beans_editors_NativeBooleanEditor__ */
