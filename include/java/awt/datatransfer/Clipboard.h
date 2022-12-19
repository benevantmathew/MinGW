// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_datatransfer_Clipboard__
#define __java_awt_datatransfer_Clipboard__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace datatransfer
      {
        class Clipboard;
        class ClipboardOwner;
        class Transferable;
      }
    }
  }
}

class java::awt::datatransfer::Clipboard : public ::java::lang::Object
{
public:
  Clipboard (::java::lang::String *);
  virtual ::java::lang::String *getName () { return name; }
  virtual ::java::awt::datatransfer::Transferable *getContents (::java::lang::Object *);
  virtual void setContents (::java::awt::datatransfer::Transferable *, ::java::awt::datatransfer::ClipboardOwner *);
public:  // actually protected
  ::java::awt::datatransfer::Transferable * __attribute__((aligned(__alignof__( ::java::lang::Object )))) contents;
  ::java::awt::datatransfer::ClipboardOwner *owner;
private:
  ::java::lang::String *name;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_datatransfer_Clipboard__ */
