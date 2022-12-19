// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JFormattedTextField__
#define __javax_swing_JFormattedTextField__

#pragma interface

#include <javax/swing/JTextField.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class JFormattedTextField;
      namespace text
      {
        class Document;
      }
      class Action;
      class JFormattedTextField$AbstractFormatterFactory;
      class JFormattedTextField$AbstractFormatter;
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class FocusEvent;
      }
    }
    namespace text
    {
      class Format;
    }
  }
}

class javax::swing::JFormattedTextField : public ::javax::swing::JTextField
{
public:
  JFormattedTextField ();
  JFormattedTextField (::java::text::Format *);
  JFormattedTextField (::javax::swing::JFormattedTextField$AbstractFormatter *);
  JFormattedTextField (::javax::swing::JFormattedTextField$AbstractFormatterFactory *);
  JFormattedTextField (::javax::swing::JFormattedTextField$AbstractFormatterFactory *, ::java::lang::Object *);
  JFormattedTextField (::java::lang::Object *);
  virtual void commitEdit ();
  virtual JArray< ::javax::swing::Action *> *getActions ();
  virtual jint getFocusLostBehaviour ();
  virtual ::javax::swing::JFormattedTextField$AbstractFormatter *getFormatter ();
  virtual ::javax::swing::JFormattedTextField$AbstractFormatterFactory *getFormatterFactory ();
  virtual ::java::lang::String *getUIClassID ();
  virtual ::java::lang::Object *getValue ();
public:  // actually protected
  virtual void invalidEdit ();
public:
  virtual jboolean isEditValid ();
public:  // actually protected
  virtual void processFocusEvent (::java::awt::event::FocusEvent *);
public:
  virtual void setDocument (::javax::swing::text::Document *);
  virtual void setLostFocusBehavior (jint);
public:  // actually protected
  virtual void setFormatter (::javax::swing::JFormattedTextField$AbstractFormatter *);
public:
  virtual void setFormatterFactory (::javax::swing::JFormattedTextField$AbstractFormatterFactory *);
  virtual void setValue (::java::lang::Object *);
  static const jint COMMIT = 0L;
  static const jint COMMIT_OR_REVERT = 1L;
  static const jint REVERT = 2L;
  static const jint PERSIST = 3L;

  friend class javax_swing_JFormattedTextField$AbstractFormatterFactory;
  friend class javax_swing_JFormattedTextField$AbstractFormatter;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JFormattedTextField__ */
