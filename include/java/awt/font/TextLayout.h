// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_TextLayout__
#define __java_awt_font_TextLayout__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
      class AttributedCharacterIterator;
      class AttributedString;
    }
    namespace awt
    {
      namespace geom
      {
        class AffineTransform;
        class Rectangle2D;
      }
      class Shape;
      class Graphics2D;
      class Font;
      namespace font
      {
        class TextHitInfo;
        class TextLayout;
        class FontRenderContext;
        class TextLayout$CaretPolicy;
      }
    }
  }
}

class java::awt::font::TextLayout : public ::java::lang::Object
{
public:
  TextLayout (::java::text::AttributedCharacterIterator *, ::java::awt::font::FontRenderContext *);
  TextLayout (::java::lang::String *, ::java::awt::Font *, ::java::awt::font::FontRenderContext *);
  TextLayout (::java::lang::String *, ::java::util::Map *, ::java::awt::font::FontRenderContext *);
public:  // actually protected
  ::java::lang::Object *clone ();
public:
  void draw (::java::awt::Graphics2D *, jfloat, jfloat);
  jboolean equals (::java::lang::Object *);
  jboolean equals (::java::awt::font::TextLayout *);
  jfloat getAdvance ();
  jfloat getAscent ();
  jbyte getBaseline ();
  jfloatArray getBaselineOffsets ();
  ::java::awt::Shape *getBlackBoxBounds (jint, jint);
  ::java::awt::geom::Rectangle2D *getBounds ();
  jfloatArray getCaretInfo (::java::awt::font::TextHitInfo *);
  jfloatArray getCaretInfo (::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  ::java::awt::Shape *getCaretShape (::java::awt::font::TextHitInfo *);
  ::java::awt::Shape *getCaretShape (::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  JArray< ::java::awt::Shape *> *getCaretShapes (jint);
  JArray< ::java::awt::Shape *> *getCaretShapes (jint, ::java::awt::geom::Rectangle2D *);
  JArray< ::java::awt::Shape *> *getCaretShapes (jint, ::java::awt::geom::Rectangle2D *, ::java::awt::font::TextLayout$CaretPolicy *);
  jint getCharacterCount ();
  jbyte getCharacterLevel (jint);
  jfloat getDescent ();
  ::java::awt::font::TextLayout *getJustifiedLayout (jfloat);
  jfloat getLeading ();
  ::java::awt::Shape *getLogicalHighlightShape (jint, jint);
  ::java::awt::Shape *getLogicalHighlightShape (jint, jint, ::java::awt::geom::Rectangle2D *);
  jintArray getLogicalRangesForVisualSelection (::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *);
  ::java::awt::font::TextHitInfo *getNextLeftHit (jint);
  ::java::awt::font::TextHitInfo *getNextLeftHit (jint, ::java::awt::font::TextLayout$CaretPolicy *);
  ::java::awt::font::TextHitInfo *getNextLeftHit (::java::awt::font::TextHitInfo *);
  ::java::awt::font::TextHitInfo *getNextRightHit (jint);
  ::java::awt::font::TextHitInfo *getNextRightHit (jint, ::java::awt::font::TextLayout$CaretPolicy *);
  ::java::awt::font::TextHitInfo *getNextRightHit (::java::awt::font::TextHitInfo *);
  ::java::awt::Shape *getOutline (::java::awt::geom::AffineTransform *);
  jfloat getVisibleAdvance ();
  ::java::awt::Shape *getVisualHighlightShape (::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *);
  ::java::awt::Shape *getVisualHighlightShape (::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  ::java::awt::font::TextHitInfo *getVisualOtherHit (::java::awt::font::TextHitInfo *);
public:  // actually protected
  void handleJustify (jfloat);
public:
  jint hashCode ();
  ::java::awt::font::TextHitInfo *hitTestChar (jfloat, jfloat);
  ::java::awt::font::TextHitInfo *hitTestChar (jfloat, jfloat, ::java::awt::geom::Rectangle2D *);
  jboolean isLeftToRight ();
  jboolean isVertical ();
  ::java::lang::String *toString ();
  static ::java::awt::font::TextLayout$CaretPolicy *DEFAULT_CARET_POLICY;
private:
  ::java::text::AttributedString * __attribute__((aligned(__alignof__( ::java::lang::Object )))) attributedString;
  ::java::awt::font::FontRenderContext *fontRenderContext;

  friend class java_awt_font_TextLayout$CharacterIteratorProxy;
  friend class java_awt_font_TextLayout$CaretPolicy;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_font_TextLayout__ */
