// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_beans_editors_ColorEditor__
#define __gnu_java_beans_editors_ColorEditor__

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
          class ColorEditor;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      class Color;
    }
  }
}

class gnu::java::beans::editors::ColorEditor : public ::java::beans::PropertyEditorSupport
{
public:
  virtual void setAsText (::java::lang::String *);
  virtual ::java::lang::String *getAsText ();
  virtual JArray< ::java::lang::String *> *getTags () { return stdColorNames; }
  ColorEditor ();
public: // actually package-private
  JArray< ::java::awt::Color *> * __attribute__((aligned(__alignof__( ::java::beans::PropertyEditorSupport )))) stdColors;
  JArray< ::java::lang::String *> *stdColorNames;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_beans_editors_ColorEditor__ */
