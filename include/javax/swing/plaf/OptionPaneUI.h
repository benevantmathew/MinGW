// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_OptionPaneUI__
#define __javax_swing_plaf_OptionPaneUI__

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
        class OptionPaneUI;
      }
      class JOptionPane;
    }
  }
}

class javax::swing::plaf::OptionPaneUI : public ::javax::swing::plaf::ComponentUI
{
public:
  virtual void selectInitialValue (::javax::swing::JOptionPane *) = 0;
  virtual jboolean containsCustomComponents (::javax::swing::JOptionPane *) = 0;
  OptionPaneUI ();

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_OptionPaneUI__ */
