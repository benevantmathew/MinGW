// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_ColorChooserComponentFactory__
#define __javax_swing_colorchooser_ColorChooserComponentFactory__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class JComponent;
      namespace colorchooser
      {
        class ColorChooserComponentFactory;
        class AbstractColorChooserPanel;
      }
    }
  }
}

class javax::swing::colorchooser::ColorChooserComponentFactory : public ::java::lang::Object
{
private:
  ColorChooserComponentFactory ();
public:
  static JArray< ::javax::swing::colorchooser::AbstractColorChooserPanel *> *getDefaultChooserPanels () { return 0; }
  static ::javax::swing::JComponent *getPreviewPanel () { return 0; }

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_colorchooser_ColorChooserComponentFactory__ */
