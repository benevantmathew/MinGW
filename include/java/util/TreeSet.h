// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_TreeSet__
#define __java_util_TreeSet__

#pragma interface

#include <java/util/AbstractSet.h>

class java::util::TreeSet : public ::java::util::AbstractSet
{
public:
  TreeSet ();
  TreeSet (::java::util::Comparator *);
  TreeSet (::java::util::Collection *);
  TreeSet (::java::util::SortedSet *);
private:
  TreeSet (::java::util::SortedMap *);
public:
  virtual jboolean add (::java::lang::Object *);
  virtual jboolean addAll (::java::util::Collection *);
  virtual void clear ();
  virtual ::java::lang::Object *clone ();
  virtual ::java::util::Comparator *comparator ();
  virtual jboolean contains (::java::lang::Object *);
  virtual ::java::lang::Object *first ();
  virtual ::java::util::SortedSet *headSet (::java::lang::Object *);
  virtual jboolean isEmpty ();
  virtual ::java::util::Iterator *iterator ();
  virtual ::java::lang::Object *last ();
  virtual jboolean remove (::java::lang::Object *);
  virtual jint size ();
  virtual ::java::util::SortedSet *subSet (::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::util::SortedSet *tailSet (::java::lang::Object *);
private:
  void writeObject (::java::io::ObjectOutputStream *);
  void readObject (::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = -2479143000061671589LL;
  ::java::util::SortedMap * __attribute__((aligned(__alignof__( ::java::util::AbstractSet )))) map;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_TreeSet__ */
