// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_RowMapper__
#define __javax_swing_tree_RowMapper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace tree
      {
        class RowMapper;
        class TreePath;
      }
    }
  }
}

class javax::swing::tree::RowMapper : public ::java::lang::Object
{
public:
  virtual jintArray getRowsForPaths (JArray< ::javax::swing::tree::TreePath *> *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_tree_RowMapper__ */
