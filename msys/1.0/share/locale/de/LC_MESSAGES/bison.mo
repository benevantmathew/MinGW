??    ?      4  ?   L                5  >   L  <   ?  ;   ?       	     
   '     2  6   B     y      ?     ?  '   ?  D   ?  6   0     g  &   ?     ?     ?  %   ?       %     #   9  $   ]     ?     ?     ?     ?  0   ?  &   ?          9  #   U     y  	   ?  I   ?     ?  *   ?  t        ?     ?  (   ?  	   ?  q  ?     T  '   p  )   ?  ?   ?  &   Z     ?     ?     ?  8  ?  0         1     3     :     W     l     ~     ?     ?     ?     ?  -        1     F     Y  /   _     ?  F   ?  D   ?  &   3     Z     m     y     ?     ?     ?     ?     ?     ?          +     @     Q     m  +   ?     ?     ?  *   ?  *        ?  "   ]     ?     ?  -   ?  *   ?  .     +   :  "   f     ?  '   ?  6   ?  #        &     7  '   O     w     ?  ,   ?     ?  	   ?      ?  	      A         S      h   .   |   3   ?      ?       ?      !  (   >!  /   g!  *   ?!     ?!     ?!     ?!  ?  ?!     ?#  <   ?#  G   ?#  K   0$  H   |$     ?$     ?$     ?$     %  C   %  +   a%  ,   ?%     ?%  #   ?%  a   ?%  O   I&     ?&  '   ?&     ?&      ?&  +   '     H'  2   Y'  0   ?'  1   ?'     ?'     ?'  $   (     5(  /   K(  3   {(  #   ?(  '   ?(  $   ?(  	    )  
   *)  T   5)  .   ?)  <   ?)  ?  ?)  %  ?,  %   ?.  )   ?.     /  ?   /  *   ?0  7   ?0  +   1  ?   K1  ,   ?1     2     +2     I2  ?  b2  5   ?3      4     $4      -4     N4     c4  !   4      ?4  &   ?4  "   ?4      5  8   -5     f5     z5     ?5  8   ?5     ?5  T   ?5  P   ;6  1   ?6     ?6     ?6     ?6  )   7     07  !   J7     l7     ?7     ?7     ?7     ?7     ?7  $   8  $   28  ,   W8     ?8     ?8  -   ?8  .   ?8  &   9  '   E9     m9     ?9  A   ?9  >   ?9  G   %:  D   m:  )   ?:     ?:  .   ?:  >   ';  3   f;     ?;     ?;  (   ?;  %   ?;     <  7   +<  
   c<     n<  .   ?<     ?<  N   ?<      =     ?=  @   _=  F   ?=      ?=  "   >     +>  )   J>  5   t>  .   ?>     ?>     ?>     
?     D       q              7   ?       ?   n       Y   ?   ]   -       3       $       _   s   6   b           N   ?   J   S              P       5          .   T          ~   U   &   |       >   !                 4       :       W      1   ;                   L   t                )       z   l       8   v   F   ^      h       [   X   p       G              }   o   C   9   k   r   %       0       A   B      e       O          `       K   w          +   (              Z   *      i   Q   f       x   #   V   /   =              M   u   \   y   E         j   R      a   g      d   '   2          I             "   m               
   H   ,         @       	   c   {      ?   <           
Execution times (seconds)
 
Report bugs to <%s>.
     Conflict between rule %d and token %s resolved as an error     Conflict between rule %d and token %s resolved as reduce     Conflict between rule %d and token %s resolved as shift  TOTAL                 :  on left:  on right:  type %d is %s
 $$ for the midrule at $%d of `%s' has no declared type $$ of `%s' has no declared type $%d of `%s' has no declared type $default %%expect-rr applies only to GLR parsers %d nonterminal useless in grammar %d nonterminals useless in grammar %d rule useless in grammar %d rules useless in grammar %s affects only GLR parsers %s must be followed by positive number %s redeclaration for %s %s redeclaration for <%s> %u bitset_allocs, %u freed (%.2f%%).
 %u bitset_lists
 %u bitset_resets, %u cached (%.2f%%)
 %u bitset_sets, %u cached (%.2f%%)
 %u bitset_tests, %u cached (%.2f%%)
 ' Accumulated runs = %u
 Bad stats file size.
 Bitset statistics:

 Copyright (C) %d Free Software Foundation, Inc.
 Could not open stats file for writing. Could not read stats file. Could not write stats file. Generate LALR(1) and GLR parsers.

 Grammar I/O error Mandatory arguments to long options are mandatory for short options too.
 Nonterminals useless in grammar Nonterminals, with rules where they appear Output:
      --defines[=FILE]       also produce a header file
  -d                         likewise but cannot specify FILE (for POSIX Yacc)
  -r, --report=THINGS        also produce details on the automaton
      --report-file=FILE     write report to FILE
  -v, --verbose              same as `--report=state'
  -b, --file-prefix=PREFIX   specify a PREFIX for output files
  -o, --output=FILE          leave output to FILE
  -g, --graph[=FILE]         also output a graph of the automaton
  -x, --xml[=FILE]           also output an XML report of the automaton
                             (the XML schema is experimental)

 Parser:
  -L, --language=LANGUAGE    specify the output programming language
                             (this is an experimental feature)
  -S, --skeleton=FILE        specify the skeleton to use
  -t, --debug                instrument the parser for debugging
      --locations            enable locations computation
  -p, --name-prefix=PREFIX   prepend PREFIX to the external symbols
  -l, --no-lines             don't generate `#line' directives
  -k, --token-table          include a table of token names

 Rules useless in grammar Rules useless in parser due to conflicts State %d  THINGS is a list of comma separated words that can include:
  `state'        describe the states
  `itemset'      complete the core item sets with their closure
  `lookahead'    explicitly associate lookahead tokens to items
  `solved'       describe shift/reduce conflicts solving
  `all'          include all the above information
  `none'         disable the report
 Terminals unused in grammar Terminals, with rules where they appear The same is true for optional arguments.
 This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 Try `%s --help' for more information.
 Unknown system error Usage: %s [OPTION]... FILE
 Valid arguments are: Warning categories include:
  `midrule-values'  unset or unused midrule values
  `yacc'            incompatibilities with POSIX YACC
  `all'             all the warnings
  `no-CATEGORY'     turn off warnings in CATEGORY
  `none'            turn off all the warnings
  `error'           treat warnings as errors

 Written by Robert Corbett and Richard Stallman.
 ` accept ambiguous argument %s for %s bison (GNU Bison) %s cannot close file cannot open file `%s' column number overflow conflicting outputs to file %s conflicts: %d reduce/reduce
 conflicts: %d shift/reduce
 conflicts: %d shift/reduce, %d reduce/reduce
 count log histogram
 density histogram
 empty empty rule for typed nonterminal, and no action error (nonassociative)
 expected %d reduce/reduce conflict expected %d reduce/reduce conflicts expected %d shift/reduce conflict expected %d shift/reduce conflicts explicit type given in untyped grammar extra operand `%s' fatal error go to state %d
 integer out of range: %s invalid $ value: $%d invalid argument %s for %s invalid character: %s invalid directive: %s invalid language `%s' invalid null character line number overflow memory exhausted missing `%s' at end of file missing `%s' at end of line missing identifier in parameter declaration missing operand after `%s' multiple %s declarations multiple language declarations are invalid multiple skeleton declarations are invalid no rules in the input grammar nonterminal useless in grammar: %s only one %s allowed per rule previous declaration redeclaration for default tagged %%destructor redeclaration for default tagged %%printer redeclaration for default tagless %%destructor redeclaration for default tagless %%printer redefining user token number of %s reduce using rule %d (%s) refusing to overwrite the input file %s result type clash on merge function `%s': <%s> != <%s> rule given for %s, which is a token rule is too long rule useless in grammar rule useless in parser due to conflicts shift, and go to state %d
 size log histogram
 start symbol %s does not derive any sentence state %d stray `$' stray `,' treated as white space stray `@' symbol %s is used, but is not defined as a token and has no rules symbol %s redeclared symbol %s redefined symbol `%s' given more than one literal string symbol `%s' used more than once as a literal string the start symbol %s is a token the start symbol %s is undefined time in %s: %ld.%06ld (%ld%%)
 tokens %s and %s both assigned number %d too many symbols in input grammar (limit is %d) type clash on default action: <%s> != <%s> unset value: $$ unused value: $%d warning Project-Id-Version: bison 2.4
Report-Msgid-Bugs-To: bug-bison@gnu.org
POT-Creation-Date: 2010-03-20 13:15-0400
PO-Revision-Date: 2008-11-04 08:55+0100
Last-Translator: Michael Piefel <piefel@informatik.hu-berlin.de>
Language-Team: German <translation-team-de@lists.sourceforge.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8-bit
Plural-Forms: nplurals=2; plural=n != 1;
 
Ausführungszeiten (Sekunden)
 
Berichten Sie Fehler (auf Englisch, mit LC_ALL=C) an <%s>.
     Konflikt zwischen Regel %d and Token %s wurde als Fehler betrachtet     Konflikt zwischen Regel %d and Token %s wurde durch Reduzierung gelöst     Konflikt zwischen Regel %d and Token %s wurde durch Schieben gelöst  ZUSAMMEN              :  auf der linken Seite:  auf der rechten Seite:  Typ %d ist %s
 $$ für Regelmitte bei $%d von „%s“ hat keinen deklarierten Typ $$ von „%s“ hat keinen deklarierten Typ $%d von „%s“ hat keinen deklarierten Typ $default %%expect-rr betrifft nur GLR-Parser %d Nicht-Terminal, das in Grammatik nutzlos ist %d Nicht-Terminale, die in Grammatik nutzlos sind %d Regel, die in Grammatik nutzlos ist %d Regeln, die in Grammatik nutzlos sind %s betrifft nur GLR-Parser %s muss von positiver Zahl gefolgt sein %s erneute Deklaration für %s %s erneute Deklaration für <%s> %u bitset_allocs, %u freigegeben (%.2f%%).
 %u bitset_lists
 %u bitset_resets, %u zwischengespeichert (%.2f%%)
 %u bitset_sets, %u zwischengespeichert (%.2f%%)
 %u bitset_tests, %u zwischengespeichert (%.2f%%)
 “ Gesammelte Durchläufe = %u
 Ungültige Statistik-Datei-Größe.
 Bitset-Statistiken:

 Copyright © %d Free Software Foundation, Inc.
 Konnte Statistik-Datei nicht zum Schreiben öffnen. Konnte Statistik-Datei nicht lesen. Konnte Statistik-Datei nicht schreiben. Generiert LALR(1)- und GLR-Parser.

 Grammatik E/A-Fehler Erforderliche Argumente für lange Optionen sind auch für Kurzformen erforderlich.
 Nicht-Terminale, die in Grammatik nutzlos sind Nicht-Terminal und die Regeln, in denen sie verwendet werden Ausgabe:
      --defines[=DATEI]      auch eine Header-Datei herstellen
  -d                         genauso, aber DATEI kann nicht angegeben werden
  -r, --report=DINGE         auch Details des Automaten ausgeben
      --report-file=DATEI    Report in DATEI ausgeben
  -v, --verbose              das Gleiche wie „--report=state“
  -b, --file-prefix=PRÄFIX   einen PRÄFIX für Ausgabe-Dateien angeben
  -o, --output=DATEI         Ausgabe in DATEI schreiben
  -g, --graph[=DATEI]        auch einen Graphen des Automaten herstellen
  -x, --xml[=DATEI]          auch einen XML-Report des Automaten herstellen
                               (das XML-Schema ist experimentell)

 Parser:
  -L, --language=SPRACHE     die Ausgabesprache bestimmen
                               (eine experimentelle Funktion)
  -S, --skeleton=DATEI       zu benutzende Skelettdatei angeben
  -t, --debug                den Parser auf Debugging-Unterstützung vorbereiten
      --locations            Standortberechnung ermöglichen
  -p, --name-prefix=PRÄFIX   PRÄFIX vor alle externen Symbole setzen
  -l, --no-lines             keine „#line“-Direktiven erzeugen
  -k, --token-table          eine Tabelle der Token-Namen mit einschließen

 Regeln, die in Grammatik nutzlos sind Regeln nutzlos im Parser wegen Konflikten Zustand %d  DINGE ist eine Liste kommagetrennter Wörter aus:
  „state“        die Zustände beschreiben
  „itemset“      die Kernsymbolmengen mit ihrem Abschluss vervollständigen
  „lookahead“    explizit Vorschautoken mit Symbolen verbinden
  „solved“       Schiebe-/Reduzier-Konfliktlösungen beschreiben
  „all“          alle oben genannten Informationen
  „none“         den Report abschalten
 Terminale, die in Grammatik unbenutzt sind Terminale und die Regeln, in denen sie verwendet werden Das gleiche gilt für optionale Argumente.
 Dies ist freie Software; die Kopierbedingungen stehen in den Quellen. Es
gibt keine Garantie; auch nicht für VERKAUFBARKEIT oder FÜR SPEZIELLE ZWECKE.
 „%s --help“ gibt weitere Informationen.
 Unbekannter Systemfehler Aufruf: %s [OPTION]... DATEI
 Gültige Argumente sind: Die Warnungs-Kategorien schließen ein:
  „midrule-values“  nicht gesetzte oder nicht benutzte Werte inmitten einer Regel
  „yacc“            Inkompatibilitäten mit POSIX’ YACC
  „all“             alle Warnungen
  „no-KATEGORIE“    Warnungen in KATEGORIE abschalten
  „none“            alle Warnungen abschalten
  „error“           Warnungen als Fehler behandeln

 Geschrieben von Robert Corbett und Richard Stallman.
 „ annehmen mehrdeutiges Argument %s für %s bison (GNU Bison) %s kann Datei nicht schließen kann Datei „%s“ nicht öffnen Überlauf bei den Spaltennummern widersprüchliche Ausgaben in Datei %s Konflikte: %d Reduziere/Reduziere
 Konflikte: %d Schiebe/Reduziere
 Konflikte: %d Schiebe/Reduziere, %d Reduziere/Reduziere
 Zähler-Histogramm
 Dichte-Histogramm
 leer leere Regel für Nicht-Terminal mit Typ und keine Aktion Fehler (nicht assoziativ)
 erwartete %d Reduziere/Reduziere-Konflikt erwartete %d Reduziere/Reduziere-Konflikte erwartete %d Schiebe/Reduziere-Konflikt erwartete %d Schiebe/Reduziere-Konflikte expliziter Typ angegeben und ungetypter Grammatik zusätzlicher Operand „%s“ fataler Fehler gehe zu Zustand %d über
 Ganzzahl außerhalb des Wertebereichs: %s unzulässiger $-Wert: $%d unzulässiges Argument %s für %s ungültiges Zeichen: %s ungültige Direktive: %s unzulässiger Sprache: „%s“ ungültiges Null-Zeichen Überlauf bei den Zeilennummern Speicher ausgeschöpft fehlendes „%s“ am Ende der Datei fehlendes „%s“ am Ende der Zeile fehlender Bezeichner in Parameterdeklaration fehlender Operand nach „%s“ mehr als eine %s-Deklaration mehrfache Sprach-Deklarationen sind ungültig mehrfache Skelett-Deklarationen sind ungültig Eingabegrammatik enthält keine Regeln Nicht-Terminal nutzlos in Grammatik: %s nur ein %s pro Regel erlaubt vorhergehende Deklaration erneute Deklaration für voreingestellten markierten %%destructor erneute Deklaration für voreingestellten markierten %%printer erneute Deklaration für voreingestellten nicht-markierten %%destructor erneute Deklaration für voreingestellten nicht-markierten %%printer definiere Nutzertokennummer von %s erneut reduziere mit Regel %d (%s) werde die Eingabedatei %s nicht überschreiben Rückgabetyp-Konflikt in merge-Funktion „%s“: <%s> != <%s> Regel für %s vorhanden, welches aber ein Token ist Regel ist zu lang Regeln nutzlos in Grammatik Regel nutzlos im Parser wegen Konflikten schiebe und gehe zu Zustand %d über
 Größe-Histogramm
 es lassen sich keine Sätze vom Startsymbol %s ableiten Zustand %d herumstreunendes „$“ überzähliges „,“ als Freiraum betrachtet herumstreunendes „@“ Symbol %s wird benutzt, ist aber nicht als Token definiert und hat keine Regel Symbol %s noch einmal deklariert Symbol %s noch einmal definiert Symbol „%s“ wird mehr als eine literale Zeichenkette gegeben Symbol „%s“ wird mehr als einmal als literale Zeichenkette benutzt das Startsymbol %s ist ein Token das Startsymbol %s ist undefiniert Zeit in %s: %ld.%06ld (%ld%%)
 Token %s und %s haben die selbe Nummer %d zu viele Symbole in Eingabegrammatik (Maximum ist %d) Typkonflikt bei Default-Aktion: <%s> != <%s>)  nicht gesetzter Wert: $$ unzulässiger Wert: $%d Warnung 