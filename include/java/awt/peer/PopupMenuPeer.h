// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_PopupMenuPeer__
#define __java_awt_peer_PopupMenuPeer__

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
        class PopupMenuPeer;
      }
      class Event;
      class Component;
    }
  }
}

class java::awt::peer::PopupMenuPeer : public ::java::lang::Object
{
public:
  virtual void show (::java::awt::Component *, jint, jint) = 0;
  virtual void show (::java::awt::Event *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_peer_PopupMenuPeer__ */
