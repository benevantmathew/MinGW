// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_tree_VariableHeightLayoutCache__
#define __javax_swing_tree_VariableHeightLayoutCache__

#pragma interface

#include <javax/swing/tree/AbstractLayoutCache.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class TreeModelEvent;
      }
      namespace tree
      {
        class VariableHeightLayoutCache;
        class TreePath;
        class AbstractLayoutCache$NodeDimensions;
        class TreeModel;
      }
    }
  }
}

class javax::swing::tree::VariableHeightLayoutCache : public ::javax::swing::tree::AbstractLayoutCache
{
public:
  VariableHeightLayoutCache ();
  virtual void setModel (::javax::swing::tree::TreeModel *) { }
  virtual void setRootVisible (jboolean) { }
  virtual void setRowHeight (jint) { }
  virtual void setNodeDimensions (::javax::swing::tree::AbstractLayoutCache$NodeDimensions *) { }
  virtual void setExpandedState (::javax::swing::tree::TreePath *, jboolean) { }
  virtual jboolean getExpandedState (::javax::swing::tree::TreePath *);
  virtual ::java::awt::Rectangle *getBounds (::javax::swing::tree::TreePath *, ::java::awt::Rectangle *) { return 0; }
  virtual ::javax::swing::tree::TreePath *getPathForRow (jint) { return 0; }
  virtual jint getRowForPath (::javax::swing::tree::TreePath *);
  virtual jint getRowCount ();
  virtual void invalidatePathBounds (::javax::swing::tree::TreePath *) { }
  virtual jint getPreferredHeight ();
  virtual jint getPreferredWidth (::java::awt::Rectangle *);
  virtual ::javax::swing::tree::TreePath *getPathClosestTo (jint, jint) { return 0; }
  virtual ::java::util::Enumeration *getVisiblePathsFrom (::javax::swing::tree::TreePath *) { return 0; }
  virtual jint getVisibleChildCount (::javax::swing::tree::TreePath *);
  virtual void invalidateSizes () { }
  virtual jboolean isExpanded (::javax::swing::tree::TreePath *);
  virtual void treeNodesChanged (::javax::swing::event::TreeModelEvent *) { }
  virtual void treeNodesInserted (::javax::swing::event::TreeModelEvent *) { }
  virtual void treeNodesRemoved (::javax::swing::event::TreeModelEvent *) { }
  virtual void treeStructureChanged (::javax::swing::event::TreeModelEvent *) { }

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_tree_VariableHeightLayoutCache__ */
