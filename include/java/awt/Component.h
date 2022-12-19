// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Component__
#define __java_awt_Component__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
  }
  namespace java
  {
    namespace beans
    {
      class PropertyChangeListener;
      class PropertyChangeSupport;
    }
    namespace awt
    {
      class MenuComponent;
      class PopupMenu;
      namespace im
      {
        class InputContext;
        class InputMethodRequests;
      }
      class AWTEvent;
      class Event;
      class Component;
      class ImageCapabilities;
      class Image;
      class FontMetrics;
      class Graphics;
      class Rectangle;
      class Point;
      class Toolkit;
      namespace image
      {
        class ImageObserver;
        class VolatileImage;
        class ImageProducer;
        class ColorModel;
        class BufferStrategy;
      }
      class GraphicsConfiguration;
      class ComponentOrientation;
      namespace peer
      {
        class ComponentPeer;
      }
      class Container;
      namespace event
      {
        class PaintEvent;
        class HierarchyEvent;
        class InputMethodEvent;
        class MouseWheelEvent;
        class MouseEvent;
        class KeyEvent;
        class FocusEvent;
        class ComponentEvent;
        class HierarchyBoundsListener;
        class HierarchyListener;
        class InputMethodListener;
        class MouseWheelListener;
        class MouseMotionListener;
        class MouseListener;
        class KeyListener;
        class FocusListener;
        class ComponentListener;
      }
      class Dimension;
      namespace dnd
      {
        class DropTarget;
      }
      class Cursor;
      class Font;
      class Color;
    }
  }
}

class java::awt::Component : public ::java::lang::Object
{
public:  // actually protected
  Component ();
public:
  virtual ::java::lang::String *getName ();
  virtual void setName (::java::lang::String *);
  virtual ::java::awt::Container *getParent () { return parent; }
  virtual ::java::awt::peer::ComponentPeer *getPeer () { return peer; }
  virtual void setDropTarget (::java::awt::dnd::DropTarget *);
  virtual ::java::awt::dnd::DropTarget *getDropTarget () { return dropTarget; }
  virtual ::java::awt::GraphicsConfiguration *getGraphicsConfiguration ();
  ::java::lang::Object *getTreeLock ();
  virtual ::java::awt::Toolkit *getToolkit ();
  virtual jboolean isValid () { return valid; }
  virtual jboolean isDisplayable ();
  virtual jboolean isVisible () { return visible; }
  virtual jboolean isShowing ();
  virtual jboolean isEnabled () { return enabled; }
  virtual void setEnabled (jboolean);
  virtual void enable ();
  virtual void enable (jboolean);
  virtual void disable ();
  virtual jboolean isDoubleBuffered ();
  virtual void enableInputMethods (jboolean);
  virtual void setVisible (jboolean);
  virtual void show ();
  virtual void show (jboolean);
  virtual void hide ();
  virtual ::java::awt::Color *getForeground ();
  virtual void setForeground (::java::awt::Color *);
  virtual jboolean isForegroundSet ();
  virtual ::java::awt::Color *getBackground ();
  virtual void setBackground (::java::awt::Color *);
  virtual jboolean isBackgroundSet ();
  virtual ::java::awt::Font *getFont ();
  virtual void setFont (::java::awt::Font *);
  virtual jboolean isFontSet ();
  virtual ::java::util::Locale *getLocale ();
  virtual void setLocale (::java::util::Locale *);
  virtual ::java::awt::image::ColorModel *getColorModel ();
  virtual ::java::awt::Point *getLocation ();
  virtual ::java::awt::Point *getLocationOnScreen ();
  virtual ::java::awt::Point *location ();
  virtual void setLocation (jint, jint);
  virtual void move (jint, jint);
  virtual void setLocation (::java::awt::Point *);
  virtual ::java::awt::Dimension *getSize ();
  virtual ::java::awt::Dimension *size ();
  virtual void setSize (jint, jint);
  virtual void resize (jint, jint);
  virtual void setSize (::java::awt::Dimension *);
  virtual void resize (::java::awt::Dimension *);
  virtual ::java::awt::Rectangle *getBounds ();
  virtual ::java::awt::Rectangle *bounds ();
  virtual void setBounds (jint, jint, jint, jint);
  virtual void reshape (jint, jint, jint, jint);
  virtual void setBounds (::java::awt::Rectangle *);
  virtual jint getX () { return x; }
  virtual jint getY () { return y; }
  virtual jint getWidth () { return width; }
  virtual jint getHeight () { return height; }
  virtual ::java::awt::Rectangle *getBounds (::java::awt::Rectangle *);
  virtual ::java::awt::Dimension *getSize (::java::awt::Dimension *);
  virtual ::java::awt::Point *getLocation (::java::awt::Point *);
  virtual jboolean isOpaque ();
  virtual jboolean isLightweight ();
  virtual ::java::awt::Dimension *getPreferredSize ();
  virtual ::java::awt::Dimension *preferredSize ();
  virtual ::java::awt::Dimension *getMinimumSize ();
  virtual ::java::awt::Dimension *minimumSize ();
  virtual ::java::awt::Dimension *getMaximumSize ();
  virtual jfloat getAlignmentX ();
  virtual jfloat getAlignmentY ();
  virtual void doLayout () { }
  virtual void layout ();
  virtual void validate ();
  virtual void invalidate ();
  virtual ::java::awt::Graphics *getGraphics ();
  virtual ::java::awt::FontMetrics *getFontMetrics (::java::awt::Font *);
  virtual void setCursor (::java::awt::Cursor *);
  virtual ::java::awt::Cursor *getCursor ();
  virtual jboolean isCursorSet ();
  virtual void paint (::java::awt::Graphics *) { }
  virtual void update (::java::awt::Graphics *);
  virtual void paintAll (::java::awt::Graphics *);
  virtual void repaint ();
  virtual void repaint (jlong);
  virtual void repaint (jint, jint, jint, jint);
  virtual void repaint (jlong, jint, jint, jint, jint);
  virtual void print (::java::awt::Graphics *);
  virtual void printAll (::java::awt::Graphics *);
  virtual jboolean imageUpdate (::java::awt::Image *, jint, jint, jint, jint, jint);
  virtual ::java::awt::Image *createImage (::java::awt::image::ImageProducer *);
  virtual ::java::awt::Image *createImage (jint, jint);
  virtual ::java::awt::image::VolatileImage *createVolatileImage (jint, jint);
  virtual ::java::awt::image::VolatileImage *createVolatileImage (jint, jint, ::java::awt::ImageCapabilities *);
  virtual jboolean prepareImage (::java::awt::Image *, ::java::awt::image::ImageObserver *);
  virtual jboolean prepareImage (::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *);
  virtual jint checkImage (::java::awt::Image *, ::java::awt::image::ImageObserver *);
  virtual jint checkImage (::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *);
  virtual void setIgnoreRepaint (jboolean);
  virtual jboolean getIgnoreRepaint () { return ignoreRepaint; }
  virtual jboolean contains (jint, jint);
  virtual jboolean inside (jint, jint);
  virtual jboolean contains (::java::awt::Point *);
  virtual ::java::awt::Component *getComponentAt (jint, jint);
  virtual ::java::awt::Component *locate (jint, jint);
  virtual ::java::awt::Component *getComponentAt (::java::awt::Point *);
  virtual void deliverEvent (::java::awt::Event *) { }
  void dispatchEvent (::java::awt::AWTEvent *);
  virtual jboolean postEvent (::java::awt::Event *);
  virtual void addComponentListener (::java::awt::event::ComponentListener *);
  virtual void removeComponentListener (::java::awt::event::ComponentListener *);
  virtual JArray< ::java::awt::event::ComponentListener *> *getComponentListeners ();
  virtual void addFocusListener (::java::awt::event::FocusListener *);
  virtual void removeFocusListener (::java::awt::event::FocusListener *);
  virtual JArray< ::java::awt::event::FocusListener *> *getFocusListeners ();
  virtual void addHierarchyListener (::java::awt::event::HierarchyListener *);
  virtual void removeHierarchyListener (::java::awt::event::HierarchyListener *);
  virtual JArray< ::java::awt::event::HierarchyListener *> *getHierarchyListeners ();
  virtual void addHierarchyBoundsListener (::java::awt::event::HierarchyBoundsListener *);
  virtual void removeHierarchyBoundsListener (::java::awt::event::HierarchyBoundsListener *);
  virtual JArray< ::java::awt::event::HierarchyBoundsListener *> *getHierarchyBoundsListeners ();
  virtual void addKeyListener (::java::awt::event::KeyListener *);
  virtual void removeKeyListener (::java::awt::event::KeyListener *);
  virtual JArray< ::java::awt::event::KeyListener *> *getKeyListeners ();
  virtual void addMouseListener (::java::awt::event::MouseListener *);
  virtual void removeMouseListener (::java::awt::event::MouseListener *);
  virtual JArray< ::java::awt::event::MouseListener *> *getMouseListeners ();
  virtual void addMouseMotionListener (::java::awt::event::MouseMotionListener *);
  virtual void removeMouseMotionListener (::java::awt::event::MouseMotionListener *);
  virtual JArray< ::java::awt::event::MouseMotionListener *> *getMouseMotionListeners ();
  virtual void addMouseWheelListener (::java::awt::event::MouseWheelListener *);
  virtual void removeMouseWheelListener (::java::awt::event::MouseWheelListener *);
  virtual JArray< ::java::awt::event::MouseWheelListener *> *getMouseWheelListeners ();
  virtual void addInputMethodListener (::java::awt::event::InputMethodListener *);
  virtual void removeInputMethodListener (::java::awt::event::InputMethodListener *);
  virtual JArray< ::java::awt::event::InputMethodListener *> *getInputMethodListeners ();
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *);
  virtual ::java::awt::im::InputMethodRequests *getInputMethodRequests () { return 0; }
  virtual ::java::awt::im::InputContext *getInputContext ();
public:  // actually protected
  void enableEvents (jlong);
  void disableEvents (jlong);
  virtual ::java::awt::AWTEvent *coalesceEvents (::java::awt::AWTEvent *, ::java::awt::AWTEvent *);
  virtual void processEvent (::java::awt::AWTEvent *);
  virtual void processComponentEvent (::java::awt::event::ComponentEvent *);
  virtual void processFocusEvent (::java::awt::event::FocusEvent *);
  virtual void processKeyEvent (::java::awt::event::KeyEvent *);
  virtual void processMouseEvent (::java::awt::event::MouseEvent *);
  virtual void processMouseMotionEvent (::java::awt::event::MouseEvent *);
  virtual void processMouseWheelEvent (::java::awt::event::MouseWheelEvent *);
  virtual void processInputMethodEvent (::java::awt::event::InputMethodEvent *);
  virtual void processHierarchyEvent (::java::awt::event::HierarchyEvent *);
  virtual void processHierarchyBoundsEvent (::java::awt::event::HierarchyEvent *);
public:
  virtual jboolean handleEvent (::java::awt::Event *);
  virtual jboolean mouseDown (::java::awt::Event *, jint, jint);
  virtual jboolean mouseDrag (::java::awt::Event *, jint, jint);
  virtual jboolean mouseUp (::java::awt::Event *, jint, jint);
  virtual jboolean mouseMove (::java::awt::Event *, jint, jint);
  virtual jboolean mouseEnter (::java::awt::Event *, jint, jint);
  virtual jboolean mouseExit (::java::awt::Event *, jint, jint);
  virtual jboolean keyDown (::java::awt::Event *, jint);
  virtual jboolean keyUp (::java::awt::Event *, jint);
  virtual jboolean action (::java::awt::Event *, ::java::lang::Object *);
  virtual void addNotify ();
  virtual void removeNotify ();
  virtual jboolean gotFocus (::java::awt::Event *, ::java::lang::Object *);
  virtual jboolean lostFocus (::java::awt::Event *, ::java::lang::Object *);
  virtual jboolean isFocusTraversable ();
  virtual jboolean isFocusable () { return focusable; }
  virtual void setFocusable (jboolean);
  virtual void setFocusTraversalKeys (jint, ::java::util::Set *);
  virtual ::java::util::Set *getFocusTraversalKeys (jint);
  virtual jboolean areFocusTraversalKeysSet (jint);
  virtual void setFocusTraversalKeysEnabled (jboolean);
  virtual jboolean getFocusTraversalKeysEnabled () { return focusTraversalKeysEnabled; }
  virtual void requestFocus ();
public:  // actually protected
  virtual jboolean requestFocus (jboolean);
public:
  virtual jboolean requestFocusInWindow ();
public:  // actually protected
  virtual jboolean requestFocusInWindow (jboolean);
public:
  virtual void transferFocus ();
  virtual ::java::awt::Container *getFocusCycleRootAncestor ();
  virtual jboolean isFocusCycleRoot (::java::awt::Container *);
  virtual void nextFocus ();
  virtual void transferFocusBackward ();
  virtual void transferFocusUpCycle ();
  virtual jboolean hasFocus ();
  virtual jboolean isFocusOwner ();
  virtual void add (::java::awt::PopupMenu *);
  virtual void remove (::java::awt::MenuComponent *);
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  virtual ::java::lang::String *toString ();
  virtual void list ();
  virtual void list (::java::io::PrintStream *);
  virtual void list (::java::io::PrintStream *, jint);
  virtual void list (::java::io::PrintWriter *);
  virtual void list (::java::io::PrintWriter *, jint);
  virtual void addPropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener (::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener *> *getPropertyChangeListeners ();
  virtual void addPropertyChangeListener (::java::lang::String *, ::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener (::java::lang::String *, ::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener *> *getPropertyChangeListeners (::java::lang::String *);
public:  // actually protected
  virtual void firePropertyChange (::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *);
  virtual void firePropertyChange (::java::lang::String *, jboolean, jboolean);
  virtual void firePropertyChange (::java::lang::String *, jint, jint);
public:
  virtual void setComponentOrientation (::java::awt::ComponentOrientation *);
  virtual ::java::awt::ComponentOrientation *getComponentOrientation () { return orientation; }
  virtual void applyComponentOrientation (::java::awt::ComponentOrientation *);
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext () { return 0; }
public: // actually package-private
  virtual ::java::lang::String *generateName () { return 0; }
  void setPeer (::java::awt::peer::ComponentPeer *);
  virtual ::java::awt::GraphicsConfiguration *getGraphicsConfigurationImpl ();
  virtual void dispatchEventImpl (::java::awt::AWTEvent *);
  virtual jboolean eventTypeEnabled (jint);
private:
  ::java::awt::event::PaintEvent *coalescePaintEvents (::java::awt::event::PaintEvent *, ::java::awt::event::PaintEvent *);
  void processPaintEvent (::java::awt::event::PaintEvent *);
public: // actually package-private
  virtual ::java::awt::Component *findNextFocusComponent (::java::awt::Component *) { return 0; }
private:
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
  static const jlong serialVersionUID = -7644114512714619750LL;
public:
  static const jfloat TOP_ALIGNMENT = 0x0.000000p-126f;
  static const jfloat CENTER_ALIGNMENT = 0x1.000000p-1f;
  static const jfloat BOTTOM_ALIGNMENT = 0x1.000000p+0f;
  static const jfloat RIGHT_ALIGNMENT = 0x1.000000p+0f;
  static const jfloat LEFT_ALIGNMENT = 0x0.000000p-126f;
public: // actually package-private
  static ::java::lang::Object *treeLock;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  x;
  jint y;
  jint width;
  jint height;
  ::java::awt::Color *foreground;
  ::java::awt::Color *background;
  ::java::awt::Font *font;
  ::java::awt::Font *peerFont;
  ::java::awt::Cursor *cursor;
  ::java::util::Locale *locale;
  jboolean ignoreRepaint;
  jboolean visible;
  jboolean enabled;
  jboolean valid;
  ::java::awt::dnd::DropTarget *dropTarget;
  ::java::util::Vector *popups;
  ::java::lang::String *name;
  jboolean nameExplicitlySet;
  jboolean focusable;
  jint isFocusTraversableOverridden;
  JArray< ::java::util::Set *> *focusTraversalKeys;
  jboolean focusTraversalKeysEnabled;
  ::java::awt::Dimension *minSize;
  ::java::awt::Dimension *prefSize;
  jboolean newEventsOnly;
  jlong eventMask;
  ::java::beans::PropertyChangeSupport *changeSupport;
  jboolean isPacked;
  jint componentSerializedDataVersion;
  ::javax::accessibility::AccessibleContext *accessibleContext;
  ::java::awt::event::ComponentListener *componentListener;
  ::java::awt::event::FocusListener *focusListener;
  ::java::awt::event::KeyListener *keyListener;
  ::java::awt::event::MouseListener *mouseListener;
  ::java::awt::event::MouseMotionListener *mouseMotionListener;
  ::java::awt::event::MouseWheelListener *mouseWheelListener;
  ::java::awt::event::InputMethodListener *inputMethodListener;
  ::java::awt::event::HierarchyListener *hierarchyListener;
  ::java::awt::event::HierarchyBoundsListener *hierarchyBoundsListener;
  ::java::awt::Container *parent;
  ::java::awt::peer::ComponentPeer *peer;
  ::java::awt::ComponentOrientation *orientation;
  ::java::awt::GraphicsConfiguration *graphicsConfig;
  ::java::awt::image::BufferStrategy *bufferStrategy;
private:
  static jboolean incrementalDraw;
  static ::java::lang::Long *redrawRate;

  friend class java_awt_Component$FlipBufferStrategy;
  friend class java_awt_Component$BltBufferStrategy;
  friend class java_awt_Component$AccessibleAWTComponent;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_Component__ */
