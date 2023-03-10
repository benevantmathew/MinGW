// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_AbstractCollection__
#define __java_util_AbstractCollection__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::util::AbstractCollection : public ::java::lang::Object
{
public:  // actually protected
  AbstractCollection ();
public:
  virtual ::java::util::Iterator *iterator () = 0;
  virtual jint size () = 0;
  virtual jboolean add (::java::lang::Object *);
  virtual jboolean addAll (::java::util::Collection *);
  virtual void clear ();
  virtual jboolean contains (::java::lang::Object *);
  virtual jboolean containsAll (::java::util::Collection *);
  virtual jboolean isEmpty ();
  virtual jboolean remove (::java::lang::Object *);
  virtual jboolean removeAll (::java::util::Collection *);
public: // actually package-private
  virtual jboolean removeAllInternal (::java::util::Collection *);
public:
  virtual jboolean retainAll (::java::util::Collection *);
public: // actually package-private
  virtual jboolean retainAllInternal (::java::util::Collection *);
public:
  virtual JArray< ::java::lang::Object *> *toArray ();
  virtual JArray< ::java::lang::Object *> *toArray (JArray< ::java::lang::Object *> *);
  virtual ::java::lang::String *toString ();
public: // actually package-private
  static jboolean equals (::java::lang::Object *, ::java::lang::Object *);
  static jint hashCode (::java::lang::Object *);
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_AbstractCollection__ */
