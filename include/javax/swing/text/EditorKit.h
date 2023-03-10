// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_EditorKit__
#define __javax_swing_text_EditorKit__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class Action;
      class JEditorPane;
      namespace text
      {
        class ViewFactory;
        class Document;
        class Caret;
        class EditorKit;
      }
    }
  }
}

class javax::swing::text::EditorKit : public ::java::lang::Object
{
public: // actually package-private
  EditorKit ();
  EditorKit (::javax::swing::text::EditorKit *);
  virtual void deinstall (::javax::swing::JEditorPane *) { }
  virtual void install (::javax::swing::JEditorPane *) { }
  virtual ::javax::swing::text::Caret *createCaret () = 0;
  virtual ::javax::swing::text::Document *createDefaultDocument () = 0;
  virtual JArray< ::javax::swing::Action *> *getActions () = 0;
  virtual ::java::lang::String *getContentType () = 0;
  virtual ::javax::swing::text::ViewFactory *getViewFactory () = 0;
  virtual void read (::java::io::InputStream *, ::javax::swing::text::Document *, jint) = 0;
  virtual void read (::java::io::Reader *, ::javax::swing::text::Document *, jint) = 0;
  virtual void write (::java::io::OutputStream *, ::javax::swing::text::Document *, jint, jint) = 0;
  virtual void write (::java::io::Writer *, ::javax::swing::text::Document *, jint, jint) = 0;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_text_EditorKit__ */
