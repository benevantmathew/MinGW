// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_DataBuffer__
#define __java_awt_image_DataBuffer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class DataBuffer;
      }
    }
  }
}

class java::awt::image::DataBuffer : public ::java::lang::Object
{
public:  // actually protected
  DataBuffer (jint, jint);
  DataBuffer (jint, jint, jint);
  DataBuffer (jint, jint, jint, jint);
  DataBuffer (jint, jint, jint, jintArray);
public:
  static jint getDataTypeSize (jint);
  virtual jint getDataType () { return dataType; }
  virtual jint getSize () { return size; }
  virtual jint getOffset () { return offset; }
  virtual jintArray getOffsets ();
  virtual jint getNumBanks () { return banks; }
  virtual jint getElem (jint);
  virtual jint getElem (jint, jint) = 0;
  virtual void setElem (jint, jint);
  virtual void setElem (jint, jint, jint) = 0;
  virtual jfloat getElemFloat (jint);
  virtual jfloat getElemFloat (jint, jint);
  virtual void setElemFloat (jint, jfloat);
  virtual void setElemFloat (jint, jint, jfloat);
  virtual jdouble getElemDouble (jint);
  virtual jdouble getElemDouble (jint, jint);
  virtual void setElemDouble (jint, jdouble);
  virtual void setElemDouble (jint, jint, jdouble);
  static const jint TYPE_BYTE = 0L;
  static const jint TYPE_USHORT = 1L;
  static const jint TYPE_SHORT = 2L;
  static const jint TYPE_INT = 3L;
  static const jint TYPE_FLOAT = 4L;
  static const jint TYPE_DOUBLE = 5L;
  static const jint TYPE_UNDEFINED = 32L;
public:  // actually protected
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  dataType;
  jint banks;
  jint offset;
  jint size;
  jintArray offsets;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_DataBuffer__ */
