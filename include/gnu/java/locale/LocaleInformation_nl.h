// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_locale_LocaleInformation_nl__
#define __gnu_java_locale_LocaleInformation_nl__

#pragma interface

#include <java/util/ListResourceBundle.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace locale
      {
        class LocaleInformation_nl;
      }
    }
  }
}

class gnu::java::locale::LocaleInformation_nl : public ::java::util::ListResourceBundle
{
public:
  virtual JArray<JArray< ::java::lang::Object *> *> *getContents ();
  LocaleInformation_nl ();
private:
  static ::java::lang::String *collation_rules;
  static JArray< ::java::lang::String *> *months;
  static JArray< ::java::lang::String *> *shortMonths;
  static JArray< ::java::lang::String *> *weekdays;
  static JArray< ::java::lang::String *> *shortWeekdays;
  static JArray< ::java::lang::String *> *ampms;
  static JArray< ::java::lang::String *> *eras;
  static JArray<JArray< ::java::lang::String *> *> *zoneStrings;
  static ::java::lang::String *localPatternChars;
  static ::java::lang::String *shortDateFormat;
  static ::java::lang::String *mediumDateFormat;
  static ::java::lang::String *longDateFormat;
  static ::java::lang::String *fullDateFormat;
  static ::java::lang::String *defaultDateFormat;
  static ::java::lang::String *shortTimeFormat;
  static ::java::lang::String *mediumTimeFormat;
  static ::java::lang::String *longTimeFormat;
  static ::java::lang::String *fullTimeFormat;
  static ::java::lang::String *defaultTimeFormat;
  static ::java::lang::String *currencySymbol;
  static ::java::lang::String *intlCurrencySymbol;
  static ::java::lang::String *decimalSeparator;
  static ::java::lang::String *exponential;
  static ::java::lang::String *digit;
  static ::java::lang::String *groupingSeparator;
  static ::java::lang::String *infinity;
  static ::java::lang::String *NaN;
  static ::java::lang::String *minusSign;
  static ::java::lang::String *monetarySeparator;
  static ::java::lang::String *patternSeparator;
  static ::java::lang::String *percent;
  static ::java::lang::String *perMill;
  static ::java::lang::String *zeroDigit;
  static JArray<JArray< ::java::lang::Object *> *> *contents;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_locale_LocaleInformation_nl__ */
