// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JMenu__
#define __javax_swing_JMenu__

#pragma interface

#include <javax/swing/JMenuItem.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
    }
    namespace awt
    {
      namespace event
      {
        class KeyEvent;
      }
      class Point;
      class Component;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      class JMenu;
      class KeyStroke;
      class MenuElement;
      class ButtonModel;
      class JMenuItem;
      class Action;
      class JMenu$WinListener;
      namespace event
      {
        class MenuListener;
        class MenuEvent;
        class ChangeListener;
      }
      class JPopupMenu;
    }
  }
}

class javax::swing::JMenu : public ::javax::swing::JMenuItem
{
public:
  JMenu ();
  JMenu (::java::lang::String *);
  JMenu (::javax::swing::Action *);
  JMenu (::java::lang::String *, jboolean);
private:
  void writeObject (::java::io::ObjectOutputStream *) { }
public:
  virtual ::javax::swing::JMenuItem *add (::javax::swing::JMenuItem *) { return 0; }
  virtual ::java::awt::Component *add (::java::awt::Component *) { return 0; }
  virtual ::java::awt::Component *add (::java::awt::Component *, jint) { return 0; }
  virtual ::javax::swing::JMenuItem *add (::java::lang::String *) { return 0; }
  virtual ::javax::swing::JMenuItem *add (::javax::swing::Action *) { return 0; }
  virtual void remove (::javax::swing::JMenuItem *) { }
  virtual void remove (jint) { }
  virtual void remove (::java::awt::Component *) { }
  virtual void removeAll () { }
  virtual void insert (::java::lang::String *, jint) { }
  virtual ::javax::swing::JMenuItem *insert (::javax::swing::JMenuItem *, jint) { return 0; }
  virtual ::javax::swing::JMenuItem *insert (::javax::swing::Action *, jint) { return 0; }
  virtual void updateUI ();
  virtual ::java::lang::String *getUIClassID ();
  virtual void setModel (::javax::swing::ButtonModel *) { }
  virtual jboolean isSelected ();
  virtual void setSelected (jboolean) { }
  virtual jboolean isPopupMenuVisible ();
  virtual void setPopupMenuVisible (jboolean) { }
public:  // actually protected
  virtual ::java::awt::Point *getPopupMenuOrigin () { return 0; }
public:
  virtual jint getDelay ();
  virtual void setDelay (jint) { }
  virtual void setMenuLocation (jint, jint) { }
public:  // actually protected
  virtual ::javax::swing::JMenuItem *createActionComponent (::javax::swing::Action *) { return 0; }
  virtual ::java::beans::PropertyChangeListener *createActionChangeListener (::javax::swing::JMenuItem *) { return 0; }
public:
  virtual void addSeparator () { }
  virtual void insertSeparator (jint) { }
  virtual ::javax::swing::JMenuItem *getItem (jint) { return 0; }
  virtual jint getItemCount ();
  virtual jboolean isTearOff ();
  virtual jint getMenuComponentCount ();
  virtual ::java::awt::Component *getMenuComponent (jint) { return 0; }
  virtual JArray< ::java::awt::Component *> *getMenuComponents () { return 0; }
  virtual jboolean isTopLevelMenu ();
  virtual jboolean isMenuComponent (::java::awt::Component *);
  virtual ::javax::swing::JPopupMenu *getPopupMenu () { return 0; }
  virtual void addMenuListener (::javax::swing::event::MenuListener *) { }
  virtual void removeMenuListener (::javax::swing::event::MenuListener *) { }
public:  // actually protected
  virtual void fireMenuSelected () { }
  virtual void fireMenuDeselected () { }
  virtual void fireMenuCanceled () { }
private:
  ::javax::swing::event::ChangeListener *createMenuChangeListener () { return 0; }
public:  // actually protected
  virtual ::javax::swing::JMenu$WinListener *createWinListener (::javax::swing::JPopupMenu *) { return 0; }
public:
  virtual void menuSelectionChanged (jboolean) { }
  virtual JArray< ::javax::swing::MenuElement *> *getSubElements () { return 0; }
  virtual ::java::awt::Component *getComponent () { return 0; }
  virtual void setAccelerator (::javax::swing::KeyStroke *) { }
public:  // actually protected
  virtual void processKeyEvent (::java::awt::event::KeyEvent *) { }
public:
  virtual void doClick (jint) { }
public:  // actually protected
  virtual ::java::lang::String *paramString () { return 0; }
public:
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext ();
public: // actually package-private
  static const jlong serialVersionUID = 4227225638931828014LL;
private:
  static ::java::lang::String *uiClassID;
  ::javax::swing::JPopupMenu * __attribute__((aligned(__alignof__( ::javax::swing::JMenuItem )))) popupMenu;
  ::javax::swing::event::ChangeListener *menuChangeListener;
  ::javax::swing::event::MenuEvent *menuEvent;
  static ::java::util::Hashtable *listenerRegistry;
  jint delay;
  static const jint TRACE = 0L;
  static const jint VERBOSE = 0L;
  static const jint DEBUG = 0L;
public:  // actually protected
  ::javax::swing::JMenu$WinListener *popupListener;

  friend class javax_swing_JMenu$WinListener;
  friend class javax_swing_JMenu$AccessibleJMenu;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JMenu__ */
