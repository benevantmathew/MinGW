// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_regex_Pattern__
#define __java_util_regex_Pattern__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::util::regex::Pattern : public ::java::lang::Object
{
private:
  Pattern (::java::lang::String *);
  Pattern (::java::lang::String *, jint);
public:
  static ::java::util::regex::Pattern *compile (::java::lang::String *);
  static ::java::util::regex::Pattern *compile (::java::lang::String *, jint);
  virtual jint flags () { return flags__; }
  static jboolean matches (::java::lang::String *, ::java::lang::CharSequence *);
  virtual ::java::util::regex::Matcher *matcher (::java::lang::CharSequence *);
  virtual JArray< ::java::lang::String *> *split (::java::lang::CharSequence *);
  virtual JArray< ::java::lang::String *> *split (::java::lang::CharSequence *, jint);
  virtual ::java::lang::String *pattern ();
private:
  static const jlong serialVersionUID = 5073258162644648461LL;
public:
  static const jint CANON_EQ = 128L;
  static const jint CASE_INSENSITIVE = 2L;
  static const jint COMMENTS = 4L;
  static const jint DOTALL = 32L;
  static const jint MULTILINE = 8L;
  static const jint UNICODE_CASE = 64L;
  static const jint UNIX_LINES = 1L;
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) regex;
  jint flags__;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_regex_Pattern__ */
