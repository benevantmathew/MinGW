// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_jar_Manifest__
#define __java_util_jar_Manifest__

#pragma interface

#include <java/lang/Object.h>

class java::util::jar::Manifest : public ::java::lang::Object
{
public:
  Manifest ();
  Manifest (::java::io::InputStream *);
  Manifest (::java::util::jar::Manifest *);
  virtual ::java::util::jar::Attributes *getMainAttributes () { return mainAttr; }
  virtual ::java::util::Map *getEntries () { return entries; }
  virtual ::java::util::jar::Attributes *getAttributes (::java::lang::String *);
  virtual void clear ();
  virtual void read (::java::io::InputStream *);
private:
  static void read_main_section (::java::util::jar::Attributes *, ::java::io::BufferedReader *);
  static void read_version_info (::java::util::jar::Attributes *, ::java::io::BufferedReader *);
  static ::java::lang::String *expect_header (::java::lang::String *, ::java::io::BufferedReader *);
  static ::java::lang::String *expect_header (::java::lang::String *, ::java::io::BufferedReader *, ::java::lang::String *);
  static ::java::lang::String *read_header_value (::java::lang::String *, ::java::io::BufferedReader *);
  static void read_attributes (::java::util::jar::Attributes *, ::java::io::BufferedReader *);
  static void read_attribute (::java::util::jar::Attributes *, ::java::lang::String *, ::java::io::BufferedReader *);
  static void read_individual_sections (::java::util::Map *, ::java::io::BufferedReader *);
  static ::java::util::jar::Attributes *read_section_name (::java::lang::String *, ::java::io::BufferedReader *, ::java::util::Map *);
public:
  virtual void write (::java::io::OutputStream *);
private:
  static void write_main_section (::java::util::jar::Attributes *, ::java::io::PrintWriter *);
  static void write_version_info (::java::util::jar::Attributes *, ::java::io::PrintWriter *);
  static void write_header (::java::lang::String *, ::java::lang::String *, ::java::io::PrintWriter *);
  static void write_main_attributes (::java::util::jar::Attributes *, ::java::io::PrintWriter *);
  static void write_attribute_entry (::java::util::Map$Entry *, ::java::io::PrintWriter *);
  static void write_individual_sections (::java::util::Map *, ::java::io::PrintWriter *);
  static void write_entry_attributes (::java::util::jar::Attributes *, ::java::io::PrintWriter *);
public:
  virtual ::java::lang::Object *clone ();
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
private:
  ::java::util::jar::Attributes * __attribute__((aligned(__alignof__( ::java::lang::Object )))) mainAttr;
  ::java::util::Map *entries;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_jar_Manifest__ */
