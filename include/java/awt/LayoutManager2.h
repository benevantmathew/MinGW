// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_LayoutManager2__
#define __java_awt_LayoutManager2__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class LayoutManager2;
      class Dimension;
      class Container;
      class Component;
    }
  }
}

class java::awt::LayoutManager2 : public ::java::lang::Object
{
public:
  virtual void addLayoutComponent (::java::awt::Component *, ::java::lang::Object *) = 0;
  virtual ::java::awt::Dimension *maximumLayoutSize (::java::awt::Container *) = 0;
  virtual jfloat getLayoutAlignmentX (::java::awt::Container *) = 0;
  virtual jfloat getLayoutAlignmentY (::java::awt::Container *) = 0;
  virtual void invalidateLayout (::java::awt::Container *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_LayoutManager2__ */
