// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_CheckboxPeer__
#define __java_awt_peer_CheckboxPeer__

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
        class CheckboxPeer;
      }
      class CheckboxGroup;
    }
  }
}

class java::awt::peer::CheckboxPeer : public ::java::lang::Object
{
public:
  virtual void setCheckboxGroup (::java::awt::CheckboxGroup *) = 0;
  virtual void setLabel (::java::lang::String *) = 0;
  virtual void setState (jboolean) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_peer_CheckboxPeer__ */
