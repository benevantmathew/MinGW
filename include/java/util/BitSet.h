// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_BitSet__
#define __java_util_BitSet__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::util::BitSet : public ::java::lang::Object
{
public:
  BitSet ();
  BitSet (jint);
  virtual void and$ (::java::util::BitSet *);
  virtual void andNot (::java::util::BitSet *);
  virtual jint cardinality ();
  virtual void clear ();
  virtual void clear (jint);
  virtual void clear (jint, jint);
  virtual ::java::lang::Object *clone ();
  virtual jboolean equals (::java::lang::Object *);
  virtual void flip (jint);
  virtual void flip (jint, jint);
  virtual jboolean get (jint);
  virtual ::java::util::BitSet *get (jint, jint);
  virtual jint hashCode ();
  virtual jboolean intersects (::java::util::BitSet *);
  virtual jboolean isEmpty ();
  virtual jint length ();
  virtual jint nextClearBit (jint);
  virtual jint nextSetBit (jint);
  virtual void or$ (::java::util::BitSet *);
  virtual void set (jint);
  virtual void set (jint, jboolean);
  virtual void set (jint, jint);
  virtual void set (jint, jint, jboolean);
  virtual jint size ();
  virtual ::java::lang::String *toString ();
  virtual void xor$ (::java::util::BitSet *);
private:
  void ensure (jint);
  static const jlong serialVersionUID = 7997698588986878753LL;
  static const jint LONG_MASK = 63L;
  jlongArray __attribute__((aligned(__alignof__( ::java::lang::Object ))))  bits;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_BitSet__ */
