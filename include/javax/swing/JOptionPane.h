// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JOptionPane__
#define __javax_swing_JOptionPane__

#pragma interface

#include <javax/swing/JComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
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
      class JOptionPane;
      class JFrame;
      namespace plaf
      {
        class OptionPaneUI;
      }
      class JDialog;
      class Icon;
    }
  }
}

class javax::swing::JOptionPane : public ::javax::swing::JComponent
{
public: // actually package-private
  JOptionPane ();
  JOptionPane (::java::lang::Object *);
  JOptionPane (::java::lang::Object *, jint);
  JOptionPane (::java::lang::Object *, jint, jint);
  JOptionPane (::java::lang::Object *, jint, jint, ::javax::swing::Icon *);
  JOptionPane (::java::lang::Object *, jint, jint, ::javax::swing::Icon *, JArray< ::java::lang::Object *> *);
  JOptionPane (::java::lang::Object *, jint, jint, ::javax::swing::Icon *, JArray< ::java::lang::Object *> *, ::java::lang::Object *);
public:
  virtual void setValue (::java::lang::Object *);
  virtual ::java::lang::Object *getValue () { return val; }
  virtual ::java::lang::String *getUIClassID ();
  virtual void setUI (::javax::swing::plaf::OptionPaneUI *);
  virtual ::javax::swing::plaf::OptionPaneUI *getUI ();
  virtual void updateUI ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext () { return 0; }
public:  // actually protected
  virtual ::java::lang::String *paramString ();
public:
  static void showMessageDialog (::java::awt::Component *, ::java::lang::String *, ::java::lang::String *, jint);
  static void showMessageDialog (::java::awt::Component *, ::java::lang::String *, ::java::lang::String *, jint, ::javax::swing::Icon *);
  static void showMessageDialog (::java::awt::Component *, ::java::lang::String *);
  static void showMessageDialog (::java::awt::Component *, ::java::lang::String *, ::javax::swing::Icon *);
  static jint showConfirmDialog (::javax::swing::JFrame *, ::java::lang::String *, ::java::lang::String *, jint);
  static ::java::lang::String *showInputDialog (::javax::swing::JFrame *, ::java::lang::String *, ::java::lang::String *, jint, jint, ::javax::swing::Icon *, JArray< ::java::lang::Object *> *, ::java::lang::Object *);
  static ::java::lang::Object *showInputDialog (::javax::swing::JFrame *, ::java::lang::String *, ::java::lang::String *, jint, ::javax::swing::Icon *, JArray< ::java::lang::Object *> *, ::java::lang::Object *);
  static jint showOptionDialog (::java::awt::Component *, ::java::lang::String *, ::java::lang::String *, jint, jint, ::javax::swing::Icon *, JArray< ::java::lang::Object *> *, ::java::lang::Object *);
  static ::java::lang::Object *DoShowOptionDialog (::java::awt::Component *, ::java::lang::String *, ::java::lang::String *, jint, jint, ::javax::swing::Icon *, JArray< ::java::lang::Object *> *, ::java::lang::Object *);
  static const jint DEFAULT_OPTION = 0L;
  static const jint YES_NO_OPTION = 1L;
  static const jint YES_NO_CANCEL_OPTION = 2L;
  static const jint OK_CANCEL_OPTION = 3L;
  static const jint YES_OPTION = 4L;
  static const jint NO_OPTION = 5L;
  static const jint CANCEL_OPTION = 6L;
  static const jint OK_OPTION = 7L;
  static const jint CLOSED_OPTION = 8L;
  static const jint ERROR_MESSAGE = 0L;
  static const jint INFORMATION_MESSAGE = 1L;
  static const jint WARNING_MESSAGE = 2L;
  static const jint QUESTION_MESSAGE = 3L;
  static const jint PLAIN_MESSAGE = 4L;
public: // actually package-private
  static ::java::lang::String *VALUE_PROPERTY;
  static ::java::lang::String *INPUT_VALUE_PROPERTY;
  static ::java::lang::String *UNINITIALIZED_VALUE;
public:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::javax::swing::JComponent )))) msg;
  jint mtype;
  jint otype;
  ::javax::swing::Icon *icon;
  JArray< ::java::lang::Object *> *args;
  ::java::lang::Object *init;
  ::javax::swing::JDialog *dialog;
public: // actually package-private
  ::java::lang::Object *val;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JOptionPane__ */
