// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_SortedMap__
#define __java_util_SortedMap__

#pragma interface

#include <java/lang/Object.h>

class java::util::SortedMap : public ::java::lang::Object
{
public:
  virtual ::java::util::Comparator *comparator () = 0;
  virtual ::java::lang::Object *firstKey () = 0;
  virtual ::java::util::SortedMap *headMap (::java::lang::Object *) = 0;
  virtual ::java::lang::Object *lastKey () = 0;
  virtual ::java::util::SortedMap *subMap (::java::lang::Object *, ::java::lang::Object *) = 0;
  virtual ::java::util::SortedMap *tailMap (::java::lang::Object *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_util_SortedMap__ */
