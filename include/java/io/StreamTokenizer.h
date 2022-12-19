// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_StreamTokenizer__
#define __java_io_StreamTokenizer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::io::StreamTokenizer : public ::java::lang::Object
{
public:
  StreamTokenizer (::java::io::InputStream *);
  StreamTokenizer (::java::io::Reader *);
  virtual void commentChar (jint);
  virtual void eolIsSignificant (jboolean);
  virtual jint lineno () { return lineNumber; }
  virtual void lowerCaseMode (jboolean);
private:
  jboolean isWhitespace (jint);
  jboolean isAlphabetic (jint);
  jboolean isNumeric (jint);
  jboolean isQuote (jint);
  jboolean isComment (jint);
public:
  virtual jint nextToken ();
private:
  void resetChar (jint);
public:
  virtual void ordinaryChar (jint);
  virtual void ordinaryChars (jint, jint);
  virtual void parseNumbers ();
  virtual void pushBack ();
  virtual void quoteChar (jint);
  virtual void resetSyntax ();
  virtual void slashSlashComments (jboolean);
  virtual void slashStarComments (jboolean);
  virtual ::java::lang::String *toString ();
  virtual void whitespaceChars (jint, jint);
  virtual void wordChars (jint, jint);
  static const jint TT_EOF = -1L;
  static const jint TT_EOL = 10L;
  static const jint TT_NUMBER = -2L;
  static const jint TT_WORD = -3L;
private:
  static const jint TT_NONE = -4L;
public:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  ttype;
  ::java::lang::String *sval;
  jdouble nval;
private:
  jboolean eolSignificant;
  jboolean lowerCase;
  jboolean slashSlash;
  jboolean slashStar;
  jbooleanArray whitespace;
  jbooleanArray alphabetic;
  jbooleanArray numeric;
  jbooleanArray quote;
  jbooleanArray comment;
  ::java::io::PushbackReader *in;
  jboolean pushedBack;
  jint lineNumber;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_io_StreamTokenizer__ */
