// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_prefs_PreferenceChangeEvent__
#define __java_util_prefs_PreferenceChangeEvent__

#pragma interface

#include <java/util/EventObject.h>

class java::util::prefs::PreferenceChangeEvent : public ::java::util::EventObject
{
public:
  PreferenceChangeEvent (::java::util::prefs::Preferences *, ::java::lang::String *, ::java::lang::String *);
  virtual ::java::util::prefs::Preferences *getNode ();
  virtual ::java::lang::String *getKey () { return key; }
  virtual ::java::lang::String *getNewValue () { return newValue; }
private:
  static const jlong serialVersionUID = 793724513368024975LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::util::EventObject )))) key;
  ::java::lang::String *newValue;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_prefs_PreferenceChangeEvent__ */
