// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_PopupMenuUI__
#define __javax_swing_plaf_PopupMenuUI__

#pragma interface

#include <javax/swing/plaf/ComponentUI.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        class PopupMenuUI;
      }
      class Popup;
      class JPopupMenu;
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace event
      {
        class MouseEvent;
      }
    }
  }
}

class javax::swing::plaf::PopupMenuUI : public ::javax::swing::plaf::ComponentUI
{
public:
  PopupMenuUI ();
  virtual jboolean isPopupTrigger (::java::awt::event::MouseEvent *);
  virtual ::javax::swing::Popup *getPopup (::javax::swing::JPopupMenu *, jint, jint);

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_PopupMenuUI__ */
