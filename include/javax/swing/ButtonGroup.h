// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ButtonGroup__
#define __javax_swing_ButtonGroup__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class ButtonGroup;
      class AbstractButton;
      class ButtonModel;
    }
  }
}

class javax::swing::ButtonGroup : public ::java::lang::Object
{
public:
  ButtonGroup ();
  virtual void add (::javax::swing::AbstractButton *);
  virtual void remove (::javax::swing::AbstractButton *);
  virtual ::java::util::Enumeration *getElements ();
  virtual ::javax::swing::ButtonModel *getSelection () { return sel; }
public: // actually package-private
  virtual ::javax::swing::AbstractButton *FindButton (::javax::swing::ButtonModel *);
public:
  virtual void setSelected (::javax::swing::ButtonModel *, jboolean);
  virtual jboolean isSelected (::javax::swing::ButtonModel *);
  virtual jint getButtonCount ();
public: // actually package-private
  static const jlong serialVersionUID = 4259076101881721375LL;
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::lang::Object )))) v;
  ::javax::swing::ButtonModel *sel;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_ButtonGroup__ */
