// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_PopupMenu__
#define __java_awt_PopupMenu__

#pragma interface

#include <java/awt/Menu.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class PopupMenu;
      class Component;
    }
  }
}

class java::awt::PopupMenu : public ::java::awt::Menu
{
public:
  PopupMenu ();
  PopupMenu (::java::lang::String *);
  virtual void addNotify ();
  virtual void show (::java::awt::Component *, jint, jint);
private:
  static const jlong serialVersionUID = -4620452533522760060LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_PopupMenu__ */
