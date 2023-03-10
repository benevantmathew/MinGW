// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_IdentityHashMap__
#define __java_util_IdentityHashMap__

#pragma interface

#include <java/util/AbstractMap.h>
#include <gcj/array.h>

class java::util::IdentityHashMap : public ::java::util::AbstractMap
{
public:
  IdentityHashMap ();
  IdentityHashMap (jint);
  IdentityHashMap (::java::util::Map *);
  virtual void clear ();
  virtual ::java::lang::Object *clone ();
  virtual jboolean containsKey (::java::lang::Object *);
  virtual jboolean containsValue (::java::lang::Object *);
  virtual ::java::util::Set *entrySet ();
  virtual jboolean equals (::java::lang::Object *);
  virtual ::java::lang::Object *get (::java::lang::Object *);
  virtual jint hashCode ();
  virtual jboolean isEmpty ();
  virtual ::java::util::Set *keySet ();
  virtual ::java::lang::Object *put (::java::lang::Object *, ::java::lang::Object *);
  virtual void putAll (::java::util::Map *);
  virtual ::java::lang::Object *remove (::java::lang::Object *);
  virtual jint size () { return size__; }
  virtual ::java::util::Collection *values ();
public: // actually package-private
  virtual jint hash (::java::lang::Object *);
private:
  void readObject (::java::io::ObjectInputStream *);
  void writeObject (::java::io::ObjectOutputStream *);
  static const jint DEFAULT_CAPACITY = 21L;
public: // actually package-private
  static ::java::lang::Object *tombstone;
  static ::java::lang::Object *emptyslot;
private:
  static const jlong serialVersionUID = 8188218128353913216LL;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::util::AbstractMap ))))  size__;
  JArray< ::java::lang::Object *> *table;
  jint modCount;
private:
  ::java::util::Set *entries;
  jint threshold;

  friend class java_util_IdentityHashMap$IdentityEntry;
  friend class java_util_IdentityHashMap$IdentityIterator;
  friend class java_util_IdentityHashMap$3;
  friend class java_util_IdentityHashMap$2;
  friend class java_util_IdentityHashMap$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_IdentityHashMap__ */
