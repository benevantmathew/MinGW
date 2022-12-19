// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLClassLoader__
#define __java_net_URLClassLoader__

#pragma interface

#include <java/security/SecureClassLoader.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class PermissionCollection;
      class CodeSource;
      class AccessControlContext;
    }
    namespace net
    {
      class URLClassLoader;
      class URLStreamHandler;
      class URLClassLoader$Resource;
      class URL;
      class URLStreamHandlerFactory;
    }
  }
}

class java::net::URLClassLoader : public ::java::security::SecureClassLoader
{
public:
  URLClassLoader (JArray< ::java::net::URL *> *);
private:
  URLClassLoader (::java::security::AccessControlContext *);
public:
  URLClassLoader (JArray< ::java::net::URL *> *, ::java::lang::ClassLoader *);
private:
  URLClassLoader (::java::lang::ClassLoader *, ::java::security::AccessControlContext *);
public:
  URLClassLoader (JArray< ::java::net::URL *> *, ::java::lang::ClassLoader *, ::java::net::URLStreamHandlerFactory *);
public:  // actually protected
  virtual void addURL (::java::net::URL *);
private:
  void addURLImpl (::java::net::URL *);
  void addURLs (JArray< ::java::net::URL *> *);
public:  // actually protected
  virtual ::java::lang::Package *definePackage (::java::lang::String *, ::java::util::jar::Manifest *, ::java::net::URL *);
  virtual ::java::lang::Class *findClass (::java::lang::String *);
private:
  ::java::net::URLClassLoader$Resource *findURLResource (::java::lang::String *);
public:
  virtual ::java::net::URL *findResource (::java::lang::String *);
public: // actually package-private
  virtual ::java::net::URLStreamHandler *getURLStreamHandler (::java::lang::String *);
public:
  virtual ::java::util::Enumeration *findResources (::java::lang::String *);
public:  // actually protected
  virtual ::java::security::PermissionCollection *getPermissions (::java::security::CodeSource *);
public:
  virtual JArray< ::java::net::URL *> *getURLs ();
  static ::java::net::URLClassLoader *newInstance (JArray< ::java::net::URL *> *);
  static ::java::net::URLClassLoader *newInstance (JArray< ::java::net::URL *> *, ::java::lang::ClassLoader *);
private:
  static ::java::util::HashMap *urlloaders;
  static ::java::util::HashMap *factoryCache;
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::security::SecureClassLoader )))) urls;
  ::java::util::Vector *urlinfos;
  ::java::net::URLStreamHandlerFactory *factory;
  ::java::security::AccessControlContext *securityContext;

  friend class java_net_URLClassLoader$2;
  friend class java_net_URLClassLoader$1;
  friend class java_net_URLClassLoader$FileResource;
  friend class java_net_URLClassLoader$FileURLLoader;
  friend class java_net_URLClassLoader$SoResource;
  friend class java_net_URLClassLoader$SoURLLoader;
  friend class java_net_URLClassLoader$RemoteResource;
  friend class java_net_URLClassLoader$RemoteURLLoader;
  friend class java_net_URLClassLoader$JarURLResource;
  friend class java_net_URLClassLoader$JarURLLoader;
  friend class java_net_URLClassLoader$Resource;
  friend class java_net_URLClassLoader$URLLoader;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_URLClassLoader__ */
