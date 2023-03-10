// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_table_DefaultTableColumnModel__
#define __javax_swing_table_DefaultTableColumnModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
      class PropertyChangeEvent;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace table
      {
        class DefaultTableColumnModel;
        class TableColumn;
      }
      namespace event
      {
        class ListSelectionEvent;
        class TableColumnModelEvent;
        class TableColumnModelListener;
        class ChangeEvent;
        class EventListenerList;
      }
      class ListSelectionModel;
    }
  }
}

class javax::swing::table::DefaultTableColumnModel : public ::java::lang::Object
{
public:
  DefaultTableColumnModel ();
  virtual void addColumn (::javax::swing::table::TableColumn *) { }
  virtual void removeColumn (::javax::swing::table::TableColumn *) { }
  virtual void moveColumn (jint, jint) { }
  virtual void setColumnMargin (jint) { }
  virtual jint getColumnCount ();
  virtual ::java::util::Enumeration *getColumns () { return 0; }
  virtual jint getColumnIndex (::java::lang::Object *);
  virtual ::javax::swing::table::TableColumn *getColumn (jint) { return 0; }
  virtual jint getColumnMargin ();
  virtual jint getColumnIndexAtX (jint);
  virtual jint getTotalColumnWidth ();
  virtual void setSelectionModel (::javax::swing::ListSelectionModel *) { }
  virtual ::javax::swing::ListSelectionModel *getSelectionModel () { return 0; }
  virtual void setColumnSelectionAllowed (jboolean) { }
  virtual jboolean getColumnSelectionAllowed ();
  virtual jintArray getSelectedColumns () { return 0; }
  virtual jint getSelectedColumnCount ();
  virtual void addColumnModelListener (::javax::swing::event::TableColumnModelListener *) { }
  virtual void removeColumnModelListener (::javax::swing::event::TableColumnModelListener *) { }
public:  // actually protected
  virtual void fireColumnAdded (::javax::swing::event::TableColumnModelEvent *) { }
  virtual void fireColumnRemoved (::javax::swing::event::TableColumnModelEvent *) { }
  virtual void fireColumnMoved (::javax::swing::event::TableColumnModelEvent *) { }
  virtual void fireColumnSelectionChanged (::javax::swing::event::ListSelectionEvent *) { }
  virtual void fireColumnMarginChanged () { }
public:
  virtual JArray< ::java::util::EventListener *> *getListeners (::java::lang::Class *) { return 0; }
  virtual void propertyChange (::java::beans::PropertyChangeEvent *) { }
  virtual void valueChanged (::javax::swing::event::ListSelectionEvent *) { }
public:  // actually protected
  virtual ::javax::swing::ListSelectionModel *createSelectionModel () { return 0; }
  virtual void recalcWidthCache () { }
private:
  void invalidateWidthCache () { }
public: // actually package-private
  static const jlong serialVersionUID = 6580012493508960512LL;
public:  // actually protected
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::lang::Object )))) tableColumns;
  ::javax::swing::ListSelectionModel *selectionModel;
  jint columnMargin;
  ::javax::swing::event::EventListenerList *listenerList;
  ::javax::swing::event::ChangeEvent *changeEvent;
  jboolean columnSelectionAllowed;
  jint totalColumnWidth;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_table_DefaultTableColumnModel__ */
