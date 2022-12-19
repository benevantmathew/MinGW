// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_AWTKeyStroke__
#define __java_awt_AWTKeyStroke__

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
      class AWTKeyStroke;
    }
  }
}

class java::awt::AWTKeyStroke : public ::java::lang::Object
{
public:  // actually protected
  AWTKeyStroke ();
  AWTKeyStroke (jchar, jint, jint, jboolean);
  static void registerSubclass (::java::lang::Class *);
public:
  static ::java::awt::AWTKeyStroke *getAWTKeyStroke (jchar);
  static ::java::awt::AWTKeyStroke *getAWTKeyStroke (::java::lang::Character *, jint);
  static ::java::awt::AWTKeyStroke *getAWTKeyStroke (jint, jint, jboolean);
  static ::java::awt::AWTKeyStroke *getAWTKeyStroke (jint, jint);
  static ::java::awt::AWTKeyStroke *getAWTKeyStrokeForEvent (::java::awt::event::KeyEvent *);
  static ::java::awt::AWTKeyStroke *getAWTKeyStroke (::java::lang::String *);
  jchar getKeyChar () { return keyChar; }
  jint getKeyCode () { return keyCode; }
  jint getModifiers () { return modifiers; }
  jboolean isOnKeyRelease () { return onKeyRelease; }
  jint getKeyEventType ();
  virtual jint hashCode ();
  jboolean equals (::java::lang::Object *);
  virtual ::java::lang::String *toString ();
public:  // actually protected
  virtual ::java::lang::Object *readResolve ();
private:
  static ::java::awt::AWTKeyStroke *getAWTKeyStroke (jchar, jint, jint, jboolean);
  static jint extend (jint);
  static const jlong serialVersionUID = -6430539691155161871LL;
  static const jint MODIFIERS_MASK = 16367L;
  static ::java::util::LinkedHashMap *cache;
  static ::java::awt::AWTKeyStroke *recent;
  static ::java::lang::reflect::Constructor *ctor;
  static ::java::util::HashMap *vktable;
  jchar __attribute__((aligned(__alignof__( ::java::lang::Object ))))  keyChar;
public: // actually package-private
  jint keyCode;
private:
  jint modifiers;
  jboolean onKeyRelease;

  friend class java_awt_AWTKeyStroke$3;
  friend class java_awt_AWTKeyStroke$2;
  friend class java_awt_AWTKeyStroke$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_AWTKeyStroke__ */
