// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_PropertyEditorManager__
#define __java_beans_PropertyEditorManager__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyEditorManager;
      class PropertyEditor;
    }
  }
}

class java::beans::PropertyEditorManager : public ::java::lang::Object
{
public:
  PropertyEditorManager ();
  static void registerEditor (::java::lang::Class *, ::java::lang::Class *);
  static ::java::beans::PropertyEditor *findEditor (::java::lang::Class *);
  static JArray< ::java::lang::String *> *getEditorSearchPath ();
  static void setEditorSearchPath (JArray< ::java::lang::String *> *);
public: // actually package-private
  static ::java::util::Hashtable *editors;
  static JArray< ::java::lang::String *> *editorSearchPath;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_beans_PropertyEditorManager__ */
