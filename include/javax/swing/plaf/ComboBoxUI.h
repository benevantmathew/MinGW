// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_ComboBoxUI__
#define __javax_swing_plaf_ComboBoxUI__

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
        class ComboBoxUI;
      }
      class JComboBox;
    }
  }
}

class javax::swing::plaf::ComboBoxUI : public ::javax::swing::plaf::ComponentUI
{
public:
  ComboBoxUI ();
  virtual void setPopupVisible (::javax::swing::JComboBox *, jboolean) = 0;
  virtual jboolean isPopupVisible (::javax::swing::JComboBox *) = 0;
  virtual jboolean isFocusTraversable (::javax::swing::JComboBox *) = 0;

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_ComboBoxUI__ */
