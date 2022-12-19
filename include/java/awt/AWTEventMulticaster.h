// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_AWTEventMulticaster__
#define __java_awt_AWTEventMulticaster__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class AWTEventMulticaster;
      namespace event
      {
        class MouseWheelListener;
        class HierarchyBoundsListener;
        class HierarchyListener;
        class InputMethodListener;
        class TextListener;
        class AdjustmentListener;
        class ItemListener;
        class ActionListener;
        class WindowFocusListener;
        class WindowStateListener;
        class WindowListener;
        class MouseMotionListener;
        class MouseListener;
        class KeyListener;
        class FocusListener;
        class ContainerListener;
        class ComponentListener;
        class MouseWheelEvent;
        class HierarchyEvent;
        class InputMethodEvent;
        class TextEvent;
        class AdjustmentEvent;
        class ItemEvent;
        class ActionEvent;
        class WindowEvent;
        class MouseEvent;
        class KeyEvent;
        class FocusEvent;
        class ContainerEvent;
        class ComponentEvent;
      }
    }
  }
}

class java::awt::AWTEventMulticaster : public ::java::lang::Object
{
public:  // actually protected
  AWTEventMulticaster (::java::util::EventListener *, ::java::util::EventListener *);
  virtual ::java::util::EventListener *remove (::java::util::EventListener *);
public:
  virtual void componentResized (::java::awt::event::ComponentEvent *);
  virtual void componentMoved (::java::awt::event::ComponentEvent *);
  virtual void componentShown (::java::awt::event::ComponentEvent *);
  virtual void componentHidden (::java::awt::event::ComponentEvent *);
  virtual void componentAdded (::java::awt::event::ContainerEvent *);
  virtual void componentRemoved (::java::awt::event::ContainerEvent *);
  virtual void focusGained (::java::awt::event::FocusEvent *);
  virtual void focusLost (::java::awt::event::FocusEvent *);
  virtual void keyTyped (::java::awt::event::KeyEvent *);
  virtual void keyPressed (::java::awt::event::KeyEvent *);
  virtual void keyReleased (::java::awt::event::KeyEvent *);
  virtual void mouseClicked (::java::awt::event::MouseEvent *);
  virtual void mousePressed (::java::awt::event::MouseEvent *);
  virtual void mouseReleased (::java::awt::event::MouseEvent *);
  virtual void mouseEntered (::java::awt::event::MouseEvent *);
  virtual void mouseExited (::java::awt::event::MouseEvent *);
  virtual void mouseDragged (::java::awt::event::MouseEvent *);
  virtual void mouseMoved (::java::awt::event::MouseEvent *);
  virtual void windowOpened (::java::awt::event::WindowEvent *);
  virtual void windowClosing (::java::awt::event::WindowEvent *);
  virtual void windowClosed (::java::awt::event::WindowEvent *);
  virtual void windowIconified (::java::awt::event::WindowEvent *);
  virtual void windowDeiconified (::java::awt::event::WindowEvent *);
  virtual void windowActivated (::java::awt::event::WindowEvent *);
  virtual void windowDeactivated (::java::awt::event::WindowEvent *);
  virtual void windowStateChanged (::java::awt::event::WindowEvent *);
  virtual void windowGainedFocus (::java::awt::event::WindowEvent *);
  virtual void windowLostFocus (::java::awt::event::WindowEvent *);
  virtual void actionPerformed (::java::awt::event::ActionEvent *);
  virtual void itemStateChanged (::java::awt::event::ItemEvent *);
  virtual void adjustmentValueChanged (::java::awt::event::AdjustmentEvent *);
  virtual void textValueChanged (::java::awt::event::TextEvent *);
  virtual void inputMethodTextChanged (::java::awt::event::InputMethodEvent *);
  virtual void caretPositionChanged (::java::awt::event::InputMethodEvent *);
  virtual void hierarchyChanged (::java::awt::event::HierarchyEvent *);
  virtual void ancestorMoved (::java::awt::event::HierarchyEvent *);
  virtual void ancestorResized (::java::awt::event::HierarchyEvent *);
  virtual void mouseWheelMoved (::java::awt::event::MouseWheelEvent *);
  static ::java::awt::event::ComponentListener *add (::java::awt::event::ComponentListener *, ::java::awt::event::ComponentListener *);
  static ::java::awt::event::ContainerListener *add (::java::awt::event::ContainerListener *, ::java::awt::event::ContainerListener *);
  static ::java::awt::event::FocusListener *add (::java::awt::event::FocusListener *, ::java::awt::event::FocusListener *);
  static ::java::awt::event::KeyListener *add (::java::awt::event::KeyListener *, ::java::awt::event::KeyListener *);
  static ::java::awt::event::MouseListener *add (::java::awt::event::MouseListener *, ::java::awt::event::MouseListener *);
  static ::java::awt::event::MouseMotionListener *add (::java::awt::event::MouseMotionListener *, ::java::awt::event::MouseMotionListener *);
  static ::java::awt::event::WindowListener *add (::java::awt::event::WindowListener *, ::java::awt::event::WindowListener *);
  static ::java::awt::event::WindowStateListener *add (::java::awt::event::WindowStateListener *, ::java::awt::event::WindowStateListener *);
  static ::java::awt::event::WindowFocusListener *add (::java::awt::event::WindowFocusListener *, ::java::awt::event::WindowFocusListener *);
  static ::java::awt::event::ActionListener *add (::java::awt::event::ActionListener *, ::java::awt::event::ActionListener *);
  static ::java::awt::event::ItemListener *add (::java::awt::event::ItemListener *, ::java::awt::event::ItemListener *);
  static ::java::awt::event::AdjustmentListener *add (::java::awt::event::AdjustmentListener *, ::java::awt::event::AdjustmentListener *);
  static ::java::awt::event::TextListener *add (::java::awt::event::TextListener *, ::java::awt::event::TextListener *);
  static ::java::awt::event::InputMethodListener *add (::java::awt::event::InputMethodListener *, ::java::awt::event::InputMethodListener *);
  static ::java::awt::event::HierarchyListener *add (::java::awt::event::HierarchyListener *, ::java::awt::event::HierarchyListener *);
  static ::java::awt::event::HierarchyBoundsListener *add (::java::awt::event::HierarchyBoundsListener *, ::java::awt::event::HierarchyBoundsListener *);
  static ::java::awt::event::MouseWheelListener *add (::java::awt::event::MouseWheelListener *, ::java::awt::event::MouseWheelListener *);
  static ::java::awt::event::ComponentListener *remove (::java::awt::event::ComponentListener *, ::java::awt::event::ComponentListener *);
  static ::java::awt::event::ContainerListener *remove (::java::awt::event::ContainerListener *, ::java::awt::event::ContainerListener *);
  static ::java::awt::event::FocusListener *remove (::java::awt::event::FocusListener *, ::java::awt::event::FocusListener *);
  static ::java::awt::event::KeyListener *remove (::java::awt::event::KeyListener *, ::java::awt::event::KeyListener *);
  static ::java::awt::event::MouseListener *remove (::java::awt::event::MouseListener *, ::java::awt::event::MouseListener *);
  static ::java::awt::event::MouseMotionListener *remove (::java::awt::event::MouseMotionListener *, ::java::awt::event::MouseMotionListener *);
  static ::java::awt::event::WindowListener *remove (::java::awt::event::WindowListener *, ::java::awt::event::WindowListener *);
  static ::java::awt::event::WindowStateListener *remove (::java::awt::event::WindowStateListener *, ::java::awt::event::WindowStateListener *);
  static ::java::awt::event::WindowFocusListener *remove (::java::awt::event::WindowFocusListener *, ::java::awt::event::WindowFocusListener *);
  static ::java::awt::event::ActionListener *remove (::java::awt::event::ActionListener *, ::java::awt::event::ActionListener *);
  static ::java::awt::event::ItemListener *remove (::java::awt::event::ItemListener *, ::java::awt::event::ItemListener *);
  static ::java::awt::event::AdjustmentListener *remove (::java::awt::event::AdjustmentListener *, ::java::awt::event::AdjustmentListener *);
  static ::java::awt::event::TextListener *remove (::java::awt::event::TextListener *, ::java::awt::event::TextListener *);
  static ::java::awt::event::InputMethodListener *remove (::java::awt::event::InputMethodListener *, ::java::awt::event::InputMethodListener *);
  static ::java::awt::event::HierarchyListener *remove (::java::awt::event::HierarchyListener *, ::java::awt::event::HierarchyListener *);
  static ::java::awt::event::HierarchyBoundsListener *remove (::java::awt::event::HierarchyBoundsListener *, ::java::awt::event::HierarchyBoundsListener *);
  static ::java::awt::event::MouseWheelListener *remove (::java::awt::event::MouseWheelListener *, ::java::awt::event::MouseWheelListener *);
public:  // actually protected
  static ::java::util::EventListener *addInternal (::java::util::EventListener *, ::java::util::EventListener *);
  static ::java::util::EventListener *removeInternal (::java::util::EventListener *, ::java::util::EventListener *);
  virtual void saveInternal (::java::io::ObjectOutputStream *, ::java::lang::String *);
  static void save (::java::io::ObjectOutputStream *, ::java::lang::String *, ::java::util::EventListener *);
public:
  static JArray< ::java::util::EventListener *> *getListeners (::java::util::EventListener *, ::java::lang::Class *);
private:
  void getListeners (::java::util::ArrayList *, ::java::lang::Class *);
public:  // actually protected
  ::java::util::EventListener * __attribute__((aligned(__alignof__( ::java::lang::Object )))) a;
  ::java::util::EventListener *b;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_AWTEventMulticaster__ */
