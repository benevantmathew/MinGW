// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_MenuItemPeer__
#define __java_awt_peer_MenuItemPeer__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace peer
      {
        class MenuItemPeer;
      }
    }
  }
}

class java::awt::peer::MenuItemPeer : public ::java::lang::Object
{
public:
  virtual void disable () = 0;
  virtual void enable () = 0;
  virtual void setEnabled (jboolean) = 0;
  virtual void setLabel (::java::lang::String *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_peer_MenuItemPeer__ */
