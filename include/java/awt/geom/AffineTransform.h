// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_AffineTransform__
#define __java_awt_geom_AffineTransform__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Shape;
      namespace geom
      {
        class Point2D;
        class AffineTransform;
      }
    }
  }
}

class java::awt::geom::AffineTransform : public ::java::lang::Object
{
public:
  AffineTransform ();
  AffineTransform (::java::awt::geom::AffineTransform *);
  AffineTransform (jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);
  AffineTransform (jfloatArray);
  AffineTransform (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  AffineTransform (jdoubleArray);
  static ::java::awt::geom::AffineTransform *getTranslateInstance (jdouble, jdouble);
  static ::java::awt::geom::AffineTransform *getRotateInstance (jdouble);
  static ::java::awt::geom::AffineTransform *getRotateInstance (jdouble, jdouble, jdouble);
  static ::java::awt::geom::AffineTransform *getScaleInstance (jdouble, jdouble);
  static ::java::awt::geom::AffineTransform *getShearInstance (jdouble, jdouble);
  virtual jint getType () { return type; }
  virtual jdouble getDeterminant ();
  virtual void getMatrix (jdoubleArray);
  virtual jdouble getScaleX () { return m00; }
  virtual jdouble getScaleY () { return m11; }
  virtual jdouble getShearX () { return m01; }
  virtual jdouble getShearY () { return m10; }
  virtual jdouble getTranslateX () { return m02; }
  virtual jdouble getTranslateY () { return m12; }
  virtual void translate (jdouble, jdouble);
  virtual void rotate (jdouble);
  virtual void rotate (jdouble, jdouble, jdouble);
  virtual void scale (jdouble, jdouble);
  virtual void shear (jdouble, jdouble);
  virtual void setToIdentity ();
  virtual void setToTranslation (jdouble, jdouble);
  virtual void setToRotation (jdouble);
  virtual void setToRotation (jdouble, jdouble, jdouble);
  virtual void setToScale (jdouble, jdouble);
  virtual void setToShear (jdouble, jdouble);
  virtual void setTransform (::java::awt::geom::AffineTransform *);
  virtual void setTransform (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
  virtual void concatenate (::java::awt::geom::AffineTransform *);
  virtual void preConcatenate (::java::awt::geom::AffineTransform *);
  virtual ::java::awt::geom::AffineTransform *createInverse ();
  virtual ::java::awt::geom::Point2D *transform (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual void transform (JArray< ::java::awt::geom::Point2D *> *, jint, JArray< ::java::awt::geom::Point2D *> *, jint, jint);
  virtual void transform (jfloatArray, jint, jfloatArray, jint, jint);
  virtual void transform (jdoubleArray, jint, jdoubleArray, jint, jint);
  virtual void transform (jfloatArray, jint, jdoubleArray, jint, jint);
  virtual void transform (jdoubleArray, jint, jfloatArray, jint, jint);
  virtual ::java::awt::geom::Point2D *inverseTransform (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual void inverseTransform (jdoubleArray, jint, jdoubleArray, jint, jint);
  virtual ::java::awt::geom::Point2D *deltaTransform (::java::awt::geom::Point2D *, ::java::awt::geom::Point2D *);
  virtual void deltaTransform (jdoubleArray, jint, jdoubleArray, jint, jint);
  virtual ::java::awt::Shape *createTransformedShape (::java::awt::Shape *);
  virtual ::java::lang::String *toString ();
  virtual jboolean isIdentity ();
  virtual ::java::lang::Object *clone ();
  virtual jint hashCode ();
  virtual jboolean equals (::java::lang::Object *);
private:
  void updateType ();
  void readObject (::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = 1330973210523860834LL;
public:
  static const jint TYPE_IDENTITY = 0L;
  static const jint TYPE_TRANSLATION = 1L;
  static const jint TYPE_UNIFORM_SCALE = 2L;
  static const jint TYPE_GENERAL_SCALE = 4L;
  static const jint TYPE_MASK_SCALE = 6L;
  static const jint TYPE_FLIP = 64L;
  static const jint TYPE_QUADRANT_ROTATION = 8L;
  static const jint TYPE_GENERAL_ROTATION = 16L;
  static const jint TYPE_MASK_ROTATION = 24L;
  static const jint TYPE_GENERAL_TRANSFORM = 32L;
private:
  jdouble __attribute__((aligned(__alignof__( ::java::lang::Object ))))  m00;
  jdouble m10;
  jdouble m01;
  jdouble m11;
  jdouble m02;
  jdouble m12;
  jint type;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_AffineTransform__ */
