// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_DefaultDesktopManager__
#define __javax_swing_DefaultDesktopManager__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class DefaultDesktopManager;
      class JComponent;
      class JInternalFrame;
    }
  }
}

class javax::swing::DefaultDesktopManager : public ::java::lang::Object
{
public:
  DefaultDesktopManager ();
  virtual void openFrame (::javax::swing::JInternalFrame *) { }
  virtual void closeFrame (::javax::swing::JInternalFrame *) { }
  virtual void maximizeFrame (::javax::swing::JInternalFrame *) { }
  virtual void minimizeFrame (::javax::swing::JInternalFrame *) { }
  virtual void iconifyFrame (::javax::swing::JInternalFrame *) { }
  virtual void deiconifyFrame (::javax::swing::JInternalFrame *) { }
  virtual void activateFrame (::javax::swing::JInternalFrame *) { }
  virtual void deactivateFrame (::javax::swing::JInternalFrame *) { }
  virtual void beginDraggingFrame (::javax::swing::JComponent *) { }
  virtual void dragFrame (::javax::swing::JComponent *, jint, jint) { }
  virtual void endDraggingFrame (::javax::swing::JComponent *) { }
  virtual void beginResizingFrame (::javax::swing::JComponent *, jint) { }
  virtual void resizeFrame (::javax::swing::JComponent *, jint, jint, jint, jint) { }
  virtual void endResizingFrame (::javax::swing::JComponent *) { }
  virtual void setBoundsForFrame (::javax::swing::JComponent *, jint, jint, jint, jint) { }
public:  // actually protected
  virtual void removeIconFor (::javax::swing::JInternalFrame *) { }
  virtual ::java::awt::Rectangle *getBoundsForIconOf (::javax::swing::JInternalFrame *) { return 0; }
  virtual void setPreviousBounds (::javax::swing::JInternalFrame *, ::java::awt::Rectangle *) { }
  virtual ::java::awt::Rectangle *getPreviousBounds (::javax::swing::JInternalFrame *) { return 0; }
  virtual void setWasIcon (::javax::swing::JInternalFrame *, ::java::lang::Boolean *) { }
  virtual jboolean wasIcon (::javax::swing::JInternalFrame *);
public: // actually package-private
  static const jlong serialVersionUID = 4657624909838017887LL;
  static ::java::lang::String *HAS_BEEN_ICONIFIED_PROPERTY;
  static const jint DEFAULT_DRAG_MODE = 0L;
  static const jint OUTLINE_DRAG_MODE = 0L;
  static const jint FASTER_DRAG_MODE = 0L;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  dragMode;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_DefaultDesktopManager__ */
