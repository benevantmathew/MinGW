// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Collections__
#define __java_util_Collections__

#pragma interface

#include <java/lang/Object.h>

class java::util::Collections : public ::java::lang::Object
{
private:
  static jboolean isSequential (::java::util::List *);
  Collections ();
public: // actually package-private
  static jint compare (::java::lang::Object *, ::java::lang::Object *, ::java::util::Comparator *);
public:
  static jint binarySearch (::java::util::List *, ::java::lang::Object *);
  static jint binarySearch (::java::util::List *, ::java::lang::Object *, ::java::util::Comparator *);
  static void copy (::java::util::List *, ::java::util::List *);
  static ::java::util::Enumeration *enumeration (::java::util::Collection *);
  static void fill (::java::util::List *, ::java::lang::Object *);
  static jint indexOfSubList (::java::util::List *, ::java::util::List *);
  static jint lastIndexOfSubList (::java::util::List *, ::java::util::List *);
  static ::java::util::ArrayList *list (::java::util::Enumeration *);
  static ::java::lang::Object *max (::java::util::Collection *);
  static ::java::lang::Object *max (::java::util::Collection *, ::java::util::Comparator *);
  static ::java::lang::Object *min (::java::util::Collection *);
  static ::java::lang::Object *min (::java::util::Collection *, ::java::util::Comparator *);
  static ::java::util::List *nCopies (jint, ::java::lang::Object *);
  static jboolean replaceAll (::java::util::List *, ::java::lang::Object *, ::java::lang::Object *);
  static void reverse (::java::util::List *);
  static ::java::util::Comparator *reverseOrder ();
  static void rotate (::java::util::List *, jint);
  static void shuffle (::java::util::List *);
  static void shuffle (::java::util::List *, ::java::util::Random *);
  static ::java::util::Set *singleton (::java::lang::Object *);
  static ::java::util::List *singletonList (::java::lang::Object *);
  static ::java::util::Map *singletonMap (::java::lang::Object *, ::java::lang::Object *);
  static void sort (::java::util::List *);
  static void sort (::java::util::List *, ::java::util::Comparator *);
  static void swap (::java::util::List *, jint, jint);
  static ::java::util::Collection *synchronizedCollection (::java::util::Collection *);
  static ::java::util::List *synchronizedList (::java::util::List *);
  static ::java::util::Map *synchronizedMap (::java::util::Map *);
  static ::java::util::Set *synchronizedSet (::java::util::Set *);
  static ::java::util::SortedMap *synchronizedSortedMap (::java::util::SortedMap *);
  static ::java::util::SortedSet *synchronizedSortedSet (::java::util::SortedSet *);
  static ::java::util::Collection *unmodifiableCollection (::java::util::Collection *);
  static ::java::util::List *unmodifiableList (::java::util::List *);
  static ::java::util::Map *unmodifiableMap (::java::util::Map *);
  static ::java::util::Set *unmodifiableSet (::java::util::Set *);
  static ::java::util::SortedMap *unmodifiableSortedMap (::java::util::SortedMap *);
  static ::java::util::SortedSet *unmodifiableSortedSet (::java::util::SortedSet *);
private:
  static const jint LARGE_LIST_SIZE = 16L;
public:
  static ::java::util::Set *EMPTY_SET;
  static ::java::util::List *EMPTY_LIST;
  static ::java::util::Map *EMPTY_MAP;
private:
  static ::java::util::Collections$ReverseComparator *rcInstance;
  static ::java::util::Random *defaultRandom;

  friend class java_util_Collections$UnmodifiableSortedSet;
  friend class java_util_Collections$UnmodifiableSortedMap;
  friend class java_util_Collections$UnmodifiableSet;
  friend class java_util_Collections$UnmodifiableMap;
  friend class java_util_Collections$UnmodifiableListIterator;
  friend class java_util_Collections$UnmodifiableRandomAccessList;
  friend class java_util_Collections$UnmodifiableList;
  friend class java_util_Collections$UnmodifiableIterator;
  friend class java_util_Collections$UnmodifiableCollection;
  friend class java_util_Collections$SynchronizedSortedSet;
  friend class java_util_Collections$SynchronizedSortedMap;
  friend class java_util_Collections$SynchronizedSet;
  friend class java_util_Collections$SynchronizedMap;
  friend class java_util_Collections$SynchronizedListIterator;
  friend class java_util_Collections$SynchronizedRandomAccessList;
  friend class java_util_Collections$SynchronizedList;
  friend class java_util_Collections$SynchronizedIterator;
  friend class java_util_Collections$SynchronizedCollection;
  friend class java_util_Collections$SingletonMap;
  friend class java_util_Collections$SingletonList;
  friend class java_util_Collections$SingletonSet;
  friend class java_util_Collections$ReverseComparator;
  friend class java_util_Collections$CopiesList;
  friend class java_util_Collections$1;
  friend class java_util_Collections$EmptyMap;
  friend class java_util_Collections$EmptyList;
  friend class java_util_Collections$EmptySet;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_Collections__ */
