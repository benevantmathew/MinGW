// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_TextFieldPeer__
#define __java_awt_peer_TextFieldPeer__

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
        class TextFieldPeer;
      }
      class Dimension;
    }
  }
}

class java::awt::peer::TextFieldPeer : public ::java::lang::Object
{
public:
  virtual ::java::awt::Dimension *minimumSize (jint) = 0;
  virtual ::java::awt::Dimension *preferredSize (jint) = 0;
  virtual ::java::awt::Dimension *getMinimumSize (jint) = 0;
  virtual ::java::awt::Dimension *getPreferredSize (jint) = 0;
  virtual void setEchoChar (jchar) = 0;
  virtual void setEchoCharacter (jchar) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_peer_TextFieldPeer__ */
