// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_dnd_DragGestureEvent__
#define __java_awt_dnd_DragGestureEvent__

#pragma interface

#include <java/util/EventObject.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Image;
      namespace datatransfer
      {
        class Transferable;
      }
      class Cursor;
      namespace event
      {
        class InputEvent;
      }
      class Point;
      class Component;
      namespace dnd
      {
        class DragGestureEvent;
        class DragSourceListener;
        class DragGestureRecognizer;
        class DragSource;
      }
    }
  }
}

class java::awt::dnd::DragGestureEvent : public ::java::util::EventObject
{
public:
  DragGestureEvent (::java::awt::dnd::DragGestureRecognizer *, jint, ::java::awt::Point *, ::java::util::List *);
  virtual ::java::awt::dnd::DragGestureRecognizer *getSourceAsDragGestureRecognizer ();
  virtual ::java::awt::Component *getComponent () { return 0; }
  virtual ::java::awt::dnd::DragSource *getDragSource () { return 0; }
  virtual ::java::awt::Point *getDragOrigin () { return origin; }
  virtual ::java::util::Iterator *iterator () { return 0; }
  virtual JArray< ::java::lang::Object *> *toArray () { return 0; }
  virtual JArray< ::java::lang::Object *> *toArray (JArray< ::java::lang::Object *> *);
  virtual jint getDragAction ();
  virtual ::java::awt::event::InputEvent *getTriggerEvent () { return 0; }
  virtual void startDrag (::java::awt::Cursor *, ::java::awt::datatransfer::Transferable *);
  virtual void startDrag (::java::awt::Cursor *, ::java::awt::datatransfer::Transferable *, ::java::awt::dnd::DragSourceListener *);
  virtual void startDrag (::java::awt::Cursor *, ::java::awt::Image *, ::java::awt::Point *, ::java::awt::datatransfer::Transferable *, ::java::awt::dnd::DragSourceListener *) { }
private:
  static const jlong serialVersionUID = 9080172649166731306LL;
  ::java::awt::dnd::DragSource * __attribute__((aligned(__alignof__( ::java::util::EventObject )))) dragSource;
  ::java::awt::Component *component;
  ::java::awt::Point *origin;
  jint action;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_dnd_DragGestureEvent__ */
