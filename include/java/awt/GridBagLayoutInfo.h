// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_GridBagLayoutInfo__
#define __java_awt_GridBagLayoutInfo__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class GridBagLayoutInfo;
    }
  }
}

class java::awt::GridBagLayoutInfo : public ::java::lang::Object
{
public: // actually package-private
  GridBagLayoutInfo (jint, jint);
private:
  static const jlong serialVersionUID = -4899416460737170217LL;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  pos_x;
  jint pos_y;
  jint cols;
  jint rows;
  jintArray colWidths;
  jintArray rowHeights;
  jdoubleArray colWeights;
  jdoubleArray rowWeights;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_GridBagLayoutInfo__ */
