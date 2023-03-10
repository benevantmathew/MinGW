// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_filechooser_FileSystemView__
#define __javax_swing_filechooser_FileSystemView__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace filechooser
      {
        class FileSystemView;
      }
    }
  }
}

class javax::swing::filechooser::FileSystemView : public ::java::lang::Object
{
public:
  FileSystemView ();
  static ::javax::swing::filechooser::FileSystemView *getFileSystemView () { return 0; }
  virtual jboolean isRoot (::java::io::File *) = 0;
  virtual ::java::io::File *createNewFolder (::java::io::File *) = 0;
  virtual jboolean isHiddenFile (::java::io::File *) = 0;
  virtual JArray< ::java::io::File *> *getRoots () = 0;
  virtual ::java::io::File *getHomeDirectory () { return 0; }
  virtual ::java::io::File *createFileObject (::java::io::File *, ::java::lang::String *) { return 0; }
  virtual ::java::io::File *createFileObject (::java::lang::String *) { return 0; }
  virtual JArray< ::java::io::File *> *getFiles (::java::io::File *, jboolean) { return 0; }
  virtual ::java::io::File *getParentDirectory (::java::io::File *) { return 0; }

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_filechooser_FileSystemView__ */
