// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_undo_UndoableEdit__
#define __javax_swing_undo_UndoableEdit__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace undo
      {
        class UndoableEdit;
      }
    }
  }
}

class javax::swing::undo::UndoableEdit : public ::java::lang::Object
{
public:
  virtual jboolean addEdit (::javax::swing::undo::UndoableEdit *) = 0;
  virtual jboolean canRedo () = 0;
  virtual jboolean canUndo () = 0;
  virtual void die () = 0;
  virtual ::java::lang::String *getPresentationName () = 0;
  virtual ::java::lang::String *getRedoPresentationName () = 0;
  virtual ::java::lang::String *getUndoPresentationName () = 0;
  virtual jboolean isSignificant () = 0;
  virtual void redo () = 0;
  virtual jboolean replaceEdit (::javax::swing::undo::UndoableEdit *) = 0;
  virtual void undo () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_undo_UndoableEdit__ */
