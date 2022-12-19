// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_prefs_MemoryBasedPreferences__
#define __gnu_java_util_prefs_MemoryBasedPreferences__

#pragma interface

#include <java/util/prefs/AbstractPreferences.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace prefs
        {
          class MemoryBasedPreferences;
        }
      }
    }
  }
}

class gnu::java::util::prefs::MemoryBasedPreferences : public ::java::util::prefs::AbstractPreferences
{
public:
  MemoryBasedPreferences (::gnu::java::util::prefs::MemoryBasedPreferences *, ::java::lang::String *, jboolean);
  virtual jboolean isUserNode () { return isUser; }
public:  // actually protected
  virtual JArray< ::java::lang::String *> *childrenNamesSpi ();
  virtual ::java::util::prefs::AbstractPreferences *childSpi (::java::lang::String *);
  virtual JArray< ::java::lang::String *> *keysSpi ();
  virtual ::java::lang::String *getSpi (::java::lang::String *);
  virtual void putSpi (::java::lang::String *, ::java::lang::String *);
  virtual void removeSpi (::java::lang::String *);
  virtual void flushSpi () { }
  virtual void syncSpi () { }
  virtual void removeNodeSpi ();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::util::prefs::AbstractPreferences ))))  isUser;
  ::java::util::HashMap *entries;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_util_prefs_MemoryBasedPreferences__ */
