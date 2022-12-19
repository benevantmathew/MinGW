// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLConnection__
#define __java_net_URLConnection__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class Permission;
    }
    namespace text
    {
      class SimpleDateFormat;
    }
    namespace net
    {
      class URLConnection;
      class ContentHandler;
      class URL;
      class ContentHandlerFactory;
      class FileNameMap;
    }
  }
}

class java::net::URLConnection : public ::java::lang::Object
{
public:  // actually protected
  URLConnection (::java::net::URL *);
public:
  virtual void connect () = 0;
  virtual ::java::net::URL *getURL () { return url; }
  virtual jint getContentLength ();
  virtual ::java::lang::String *getContentType ();
  virtual ::java::lang::String *getContentEncoding ();
  virtual jlong getExpiration ();
  virtual jlong getDate ();
  virtual jlong getLastModified ();
  virtual ::java::lang::String *getHeaderField (jint) { return 0; }
  virtual ::java::lang::String *getHeaderField (::java::lang::String *) { return 0; }
  virtual ::java::util::Map *getHeaderFields ();
  virtual jint getHeaderFieldInt (::java::lang::String *, jint);
  virtual jlong getHeaderFieldDate (::java::lang::String *, jlong);
  virtual ::java::lang::String *getHeaderFieldKey (jint) { return 0; }
  virtual ::java::lang::Object *getContent ();
  virtual ::java::lang::Object *getContent (JArray< ::java::lang::Class *> *);
  virtual ::java::security::Permission *getPermission ();
  virtual ::java::io::InputStream *getInputStream ();
  virtual ::java::io::OutputStream *getOutputStream ();
  virtual ::java::lang::String *toString ();
  virtual void setDoInput (jboolean);
  virtual jboolean getDoInput () { return doInput; }
  virtual void setDoOutput (jboolean);
  virtual jboolean getDoOutput () { return doOutput; }
  virtual void setAllowUserInteraction (jboolean);
  virtual jboolean getAllowUserInteraction () { return allowUserInteraction; }
  static void setDefaultAllowUserInteraction (jboolean);
  static jboolean getDefaultAllowUserInteraction ();
  virtual void setUseCaches (jboolean);
  virtual jboolean getUseCaches () { return useCaches; }
  virtual void setIfModifiedSince (jlong);
  virtual jlong getIfModifiedSince () { return ifModifiedSince; }
  virtual jboolean getDefaultUseCaches ();
  virtual void setDefaultUseCaches (jboolean);
  virtual void setRequestProperty (::java::lang::String *, ::java::lang::String *);
  virtual void addRequestProperty (::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String *getRequestProperty (::java::lang::String *);
  virtual ::java::util::Map *getRequestProperties ();
  static void setDefaultRequestProperty (::java::lang::String *, ::java::lang::String *) { }
  static ::java::lang::String *getDefaultRequestProperty (::java::lang::String *) { return 0; }
  static void setContentHandlerFactory (::java::net::ContentHandlerFactory *);
  static ::java::lang::String *guessContentTypeFromName (::java::lang::String *);
  static ::java::lang::String *guessContentTypeFromStream (::java::io::InputStream *);
  static ::java::net::FileNameMap *getFileNameMap ();
  static void setFileNameMap (::java::net::FileNameMap *);
private:
  ::java::net::ContentHandler *setContentHandler (::java::lang::String *);
  void initializeDateFormats ();
  static ::java::net::FileNameMap *fileNameMap;
  static ::java::net::ContentHandlerFactory *factory;
  static jboolean defaultAllowUserInteraction;
  static jboolean defaultUseCaches;
public:  // actually protected
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object ))))  allowUserInteraction;
  jboolean connected;
  jboolean doInput;
  jboolean doOutput;
  jboolean useCaches;
  jlong ifModifiedSince;
  ::java::net::URL *url;
private:
  static ::java::util::Hashtable *handlers;
  static ::java::text::SimpleDateFormat *dateFormat1;
  static ::java::text::SimpleDateFormat *dateFormat2;
  static ::java::text::SimpleDateFormat *dateFormat3;
  static jboolean dateformats_initialized;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_URLConnection__ */
