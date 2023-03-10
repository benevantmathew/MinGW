// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_KeyStroke__
#define __javax_swing_KeyStroke__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class KeyEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      class KeyStroke;
    }
  }
}

class javax::swing::KeyStroke : public ::java::lang::Object
{
private:
  KeyStroke ();
public:
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *toString () { return 0; }
  static ::javax::swing::KeyStroke *getKeyStroke (jchar);
  static ::javax::swing::KeyStroke *getKeyStroke (jchar, jboolean);
  static ::javax::swing::KeyStroke *getKeyStroke (::java::lang::Character *, jint);
  static ::javax::swing::KeyStroke *getKeyStroke (jint, jint, jboolean);
  static ::javax::swing::KeyStroke *getKeyStroke (jint, jint);
  static ::javax::swing::KeyStroke *getKeyStroke (::java::lang::String *) { return 0; }
  static ::javax::swing::KeyStroke *getKeyStrokeForEvent (::java::awt::event::KeyEvent *);
  virtual jchar getKeyChar () { return keyChar; }
  virtual jint getKeyCode () { return keyCode; }
  virtual jint getModifiers () { return modifiers; }
  virtual jboolean isOnKeyRelease () { return onKeyRelease; }
public: // actually package-private
  static const jlong serialVersionUID = -9060180771037902530LL;
private:
  jchar __attribute__((aligned(__alignof__( ::java::lang::Object ))))  keyChar;
  jint keyCode;
  jint modifiers;
  jboolean onKeyRelease;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_KeyStroke__ */
