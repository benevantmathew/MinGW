// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_BorderUIResource__
#define __javax_swing_plaf_BorderUIResource__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Insets;
      class Graphics;
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        class BorderUIResource;
      }
      namespace border
      {
        class Border;
      }
    }
  }
}

class javax::swing::plaf::BorderUIResource : public ::java::lang::Object
{
public:
  static ::javax::swing::border::Border *getEtchedBorderUIResource ();
  static ::javax::swing::border::Border *getLoweredBevelBorderUIResource ();
  static ::javax::swing::border::Border *getRaisedBevelBorderUIResource ();
  static ::javax::swing::border::Border *getBlackLineBorderUIResource ();
  BorderUIResource (::javax::swing::border::Border *);
  virtual void paintBorder (::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual ::java::awt::Insets *getBorderInsets (::java::awt::Component *);
  virtual jboolean isBorderOpaque ();
public: // actually package-private
  static const jlong serialVersionUID = -3440553684010079691LL;
private:
  static ::javax::swing::border::Border *etchedBorderUIResource;
  static ::javax::swing::border::Border *loweredBevelBorderUIResource;
  static ::javax::swing::border::Border *raisedBevelBorderUIResource;
  static ::javax::swing::border::Border *blackLineBorderUIResource;
  ::javax::swing::border::Border * __attribute__((aligned(__alignof__( ::java::lang::Object )))) delegate;

  friend class javax_swing_plaf_BorderUIResource$TitledBorderUIResource;
  friend class javax_swing_plaf_BorderUIResource$MatteBorderUIResource;
  friend class javax_swing_plaf_BorderUIResource$LineBorderUIResource;
  friend class javax_swing_plaf_BorderUIResource$EtchedBorderUIResource;
  friend class javax_swing_plaf_BorderUIResource$EmptyBorderUIResource;
  friend class javax_swing_plaf_BorderUIResource$CompoundBorderUIResource;
  friend class javax_swing_plaf_BorderUIResource$BevelBorderUIResource;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_BorderUIResource__ */
