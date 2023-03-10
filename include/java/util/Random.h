// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Random__
#define __java_util_Random__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::util::Random : public ::java::lang::Object
{
public:
  Random ();
  Random (jlong);
  virtual void setSeed (jlong);
public:  // actually protected
  virtual jint next (jint);
public:
  virtual void nextBytes (jbyteArray);
  virtual jint nextInt ();
  virtual jint nextInt (jint);
  virtual jlong nextLong ();
  virtual jboolean nextBoolean ();
  virtual jfloat nextFloat ();
  virtual jdouble nextDouble ();
  virtual jdouble nextGaussian ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  haveNextNextGaussian;
  jdouble nextNextGaussian;
  jlong seed;
  static const jlong serialVersionUID = 3905348978240129619LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_Random__ */
