// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_ResourceBundle__
#define __java_util_ResourceBundle__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::util::ResourceBundle : public ::java::lang::Object
{
private:
  static ::java::lang::ClassLoader *getCallingClassLoader ();
public:
  ResourceBundle ();
  ::java::lang::String *getString (::java::lang::String *);
  JArray< ::java::lang::String *> *getStringArray (::java::lang::String *);
  ::java::lang::Object *getObject (::java::lang::String *);
  virtual ::java::util::Locale *getLocale () { return locale; }
public:  // actually protected
  virtual void setParent (::java::util::ResourceBundle *);
public:
  static ::java::util::ResourceBundle *getBundle (::java::lang::String *);
  static ::java::util::ResourceBundle *getBundle (::java::lang::String *, ::java::util::Locale *);
  static ::java::util::ResourceBundle *getBundle (::java::lang::String *, ::java::util::Locale *, ::java::lang::ClassLoader *);
public:  // actually protected
  virtual ::java::lang::Object *handleGetObject (::java::lang::String *) = 0;
public:
  virtual ::java::util::Enumeration *getKeys () = 0;
private:
  static ::java::util::ResourceBundle *tryBundle (::java::lang::String *, ::java::util::Locale *, ::java::lang::ClassLoader *, ::java::util::ResourceBundle *, ::java::util::HashMap *);
  static ::java::util::ResourceBundle *tryLocalBundle (::java::lang::String *, ::java::util::Locale *, ::java::lang::ClassLoader *, ::java::util::ResourceBundle *, ::java::util::HashMap *);
public:  // actually protected
  ::java::util::ResourceBundle * __attribute__((aligned(__alignof__( ::java::lang::Object )))) parent;
private:
  ::java::util::Locale *locale;
  static ::java::util::Map *resourceBundleCache;
  static ::java::util::Locale *lastDefaultLocale;
  static ::java::util::Locale *emptyLocale;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_ResourceBundle__ */
