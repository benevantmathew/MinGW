// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_jar_JarOutputStream__
#define __java_util_jar_JarOutputStream__

#pragma interface

#include <java/util/zip/ZipOutputStream.h>

class java::util::jar::JarOutputStream : public ::java::util::zip::ZipOutputStream
{
public:
  JarOutputStream (::java::io::OutputStream *);
  JarOutputStream (::java::io::OutputStream *, ::java::util::jar::Manifest *);
private:
  void writeManifest (::java::util::jar::Manifest *);
public:
  virtual void putNextEntry (::java::util::zip::ZipEntry *);

  static ::java::lang::Class class$;
};

#endif /* __java_util_jar_JarOutputStream__ */
