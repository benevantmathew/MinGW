??    ?      4  ?   L                5  >   L  <   ?  ;   ?       	     
   '     2  6   B     y      ?     ?  '   ?  D   ?  6   0     g  &   ?     ?     ?  %   ?       %     #   9  $   ]     ?     ?     ?     ?  0   ?  &   ?          9  #   U     y  	   ?  I   ?     ?  *   ?  t        ?     ?  (   ?  	   ?  q  ?     T  '   p  )   ?  ?   ?  &   Z     ?     ?     ?  8  ?  0         1     3     :     W     l     ~     ?     ?     ?     ?  -        1     F     Y  /   _     ?  F   ?  D   ?  &   3     Z     m     y     ?     ?     ?     ?     ?     ?          +     @     Q     m  +   ?     ?     ?  *   ?  *        ?  "   ]     ?     ?  -   ?  *   ?  .     +   :  "   f     ?  '   ?  6   ?  #        &     7  '   O     w     ?  ,   ?     ?  	   ?      ?  	      A         S      h   .   |   3   ?      ?       ?      !  (   >!  /   g!  *   ?!     ?!     ?!     ?!  ?  ?!     ?#  *   ?#  Q   ?#  P   I$  R   ?$     ?$     %  
   %     %  <   0%  &   m%  '   ?%     ?%  /   ?%  ?   ?%  ?   ?&  0   ?'  3   ?'     (     (  (   +(     T(  /   e(  -   ?(  .   ?(     ?(     ?(  &   )     /)  .   D)  @   s)  -   ?)  1   ?)  #   *  	   8*     B*  P   N*  -   ?*  (   ?*  s  ?*    j-  "   w/  8   ?/  	   ?/  ?  ?/  +   }1  (   ?1  <   ?1  ?   2  :   ?2     
3     $3     A3  R  U3  )   ?4     ?4  	   ?4     ?4     ?4     5     ,5     L5  (   i5  !   ?5  #   ?5  5   ?5     6     &6     :6  M   A6  $   ?6  ?   ?6    ?7  -   ?8     ?8     ?8     9     9     69     O9     n9     ?9     ?9     ?9     ?9     ?9  &   ?9  "   $:  .   G:  #   v:     ?:  '   ?:  *   ?:  &   ;  0   /;  %   `;     ?;  4   ?;  1   ?;  3   ?;  0   2<  ,   c<  #   ?<  &   ?<  J   ?<  8   &=     _=     m=  5   ?=  &   ?=     ?=  1    >     2>     ;>  (   H>     q>  T   ~>     ?>     ?>  ?   ?  D   L?  1   ??  "   ??     ??  F   @  ;   J@  F   ?@     ?@     ?@     ?@     D       q              7   ?       ?   n       Y   ?   ]   -       3       $       _   s   6   b           N   ?   J   S              P       5          .   T          ~   U   &   |       >   !                 4       :       W      1   ;                   L   t                )       z   l       8   v   F   ^      h       [   X   p       G              }   o   C   9   k   r   %       0       A   B      e       O          `       K   w          +   (              Z   *      i   Q   f       x   #   V   /   =              M   u   \   y   E         j   R      a   g      d   '   2          I             "   m               
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
PO-Revision-Date: 2008-11-02 18:52-0500
Last-Translator: Kevin Scannell <kscanne@gmail.com>
Language-Team: Irish <gaeilge-gnulinux@lists.sourceforge.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=5; plural=n==1 ? 0 : n==2 ? 1 : (n>2 && n<7) ? 2 :(n>6 && n<11) ? 3 : 4;
 
Aga? rite (soicind?)
 
Seol tuairisc? ar fhabhtanna chuig <%s>.
     Coinbhleacht idir riail %d agus teaghr?n comharthach %s: r?it?odh mar earr?id     Coinbhleacht idir riail %d agus teaghr?n comharthach %s: r?it?odh mar laghd?     Coinbhleacht idir riail %d agus teaghr?n comharthach %s: r?it?odh mar iomlaoid  IOML?N                :  ar cl?:  ar dheis:  de chine?l %d is %s
 N?l aon chine?l f?gartha ag $$ na me?nrialach ag $%d de `%s' N?l aon chine?l f?gartha ag $$ de `%s' N?l aon chine?l f?gartha ag $%d de `%s' $r?amhshocraithe N?l %%expect-rr in ?s?id ach le pars?laithe GLR %d slonn inlaghdaithe gan tairbhe sa ghramadach %d shlonn inlaghdaithe gan tairbhe sa ghramadach %d shlonn inlaghdaithe gan tairbhe sa ghramadach %d slonn inlaghdaithe gan tairbhe sa ghramadach %d slonn inlaghdaithe gan tairbhe sa ghramadach %d riail gan tairbhe sa ghramadach %d riail gan tairbhe sa ghramadach %d riail gan tairbhe sa ghramadach %d riail gan tairbhe sa ghramadach %d riail gan tairbhe sa ghramadach N?l %s curtha i bhfeidhm ach ar phars?laithe GLR N? fol?ir uimhir dheimhneach a theacht i ndiaidh %s athfh?gra %s ar %s athfh?gra %s ar <%s> %u bitset_allocs, %u scaoilte (%.2f%%).
 %u bitset_lists
 %u bitset_resets, %u curtha i dtaisce (%.2f%%)
 %u bitset_sets, %u curtha i dtaisce (%.2f%%)
 %u bitset_tests, %u curtha i dtaisce (%.2f%%)
 ' Rit? carnacha = %u
 M?id comhaid staitistice earr?ideach.
 Staitistic Bitset:

 Copyright ? %d Free Software Foundation, Inc.
 N?orbh fh?idir an comhad staitistice a oscailt chun scr?obh ann. N?orbh fh?idir an comhad staitistice a l?amh. N?orbh fh?idir scr?obh ar an chomhad staitistice. Gin pars?laithe LALR(1) agus GLR.

 Gramadach Earr?id I/A Is riachtanach le rogha ghearr aon arg?int at? riachtanach leis an rogha fhada.
 Sloinn inlaghdaithe gan tairbhe sa ghramadach Sloinn inlaghdaithe, le rialacha m?s cu? Aschur:
      --defines[=COMHAD]     gin comhad ceannt?sca freisin
  -d                         mar an gc?anna, ach gan COMHAD (le haghaidh Yacc POSIX)
  -r, --report=RUDA?         tabhair sonra? faoin uathoibre?n
      --report-file=COMHAD   scr?obh tuairisc i gCOMHAD
  -v, --verbose              ar comhbhr? le `--report=state'
  -b, --file-prefix=R?IM?R   R?IM?R ar aschomhaid
  -o, --output=COMHAD        scr?obh aschur sa CHOMHAD
  -g, --graph[=COMHAD]       scr?obh graf an uathoibre?in
  -x, --xml[=COMHAD]         scr?obh tuairisc ar an uathoibre?n mar XML
                             (is trialach ? an sc?imre XML)

 Pars?la?:
  -L, --language=TEANGA      socraigh an r?omhtheanga le haschur
                             (gn? thurgnamhach ? seo)
  -S, --skeleton=COMHAD      socraigh an chreatlach le h?s?id
  -t, --debug                ullmhaigh an pars?la? le haghaidh d?fhabhtaithe
      --locations            cumasaigh r?omh na su?mh
  -p, --name-prefix=R?IM?R   cuir R?IM?R roimh gach siombail sheachtrach
  -l, --no-lines             n? gin treoracha `#line'
  -k, --token-table          cuir t?bla d'ainmneacha teaghr?n san ?ireamh

 Rialacha gan tairbhe sa ghramadach Rialacha gan tairbhe sa phars?la? de bhr? coinbhleachta? Staid %d  Is ?ard at? i RUDA? n? liosta focal, scartha le cam?ga, as na roghanna seo:
  `state'        d?an cur s?os ar na staideanna
  `itemset'      comhl?on na cro?thacair m?re lena gclabhs?r
  `look-ahead'   ceangail teaghr?in r?amhfheice?la le m?reanna go follasach
  `solved'       r?iteach de choinbhleachta? iomlaoid/laghd?
  `all'          cuir gach sonra thuas san ?ireamh
  `none'         d?chumasaigh an tuairisc
 Sloinn dolaghdaithe gan ?s?id sa ghramadach Sloinn dolaghdaithe, le rialacha m?s cu? Agus mar an gc?anna le haghaidh arg?int? roghnacha freisin.
 Is saorbhogearra an r?omhchl?r seo; f?ach ar an bhunch?d le haghaidh
coinn?ollacha c?ipe?la.  N?l bar?nta ar bith ann; go fi? n?l bar?nta ann
d'IND?OLTACHT n? FEILI?NACHT D'FHEIDHM AR LEITH.
 Bain triail as `%s --help' chun tuilleadh eolais a fh?il.
 Earr?id ch?rais anaithnid ?s?id: %s [ROGHA]... COMHAD
 Na harg?int? bail?: Seo iad catag?ir? na rabhadh:
  `midrule-values'  luachanna me?nrialach gan socr? n? gan ?s?id
  `yacc'            neamh-chomhoiri?int? le YACC POSIX
  `all'             gach rabhadh
  `no-CATAG?IR'     n? taispe?in rabhaidh ? CATAG?IR
  `none'            n? taispe?in rabhaidh ar bith
  `error'           caith le rabhaidh mar earr?id?

 Le Robert Corbett agus Richard Stallman.
 ` glac leis arg?int dh?bhr?och %s chun %s bison (GNU Bison) %s n? f?idir comhad a dh?nadh n? f?idir comhad `%s' a oscailt uimhir an chol?in thar maoil aschuir chontr?rtha scr?ofa i gcomhad %s coinbhleachta?: %d laghd?/laghd?
 coinbhleachta?: %d iomlaoid/laghd?
 coinbhleachta?: %d iomlaoid/laghd?, %d laghd?/laghd?
 histeagram loga ?irimh
 histeagram dl?ithe
 folamh riail fholamh i gcomhair teaghr?n inlaghdaithe le cine?l, ach n?l aon ghn?omh earr?id (neamh-chomhthiomsaitheach)
 bh?othas ag s?il le %d coinbhleacht laghd?/laghd? bh?othas ag s?il le %d choinbhleacht laghd?/laghd? bh?othas ag s?il le %d choinbhleacht laghd?/laghd? bh?othas ag s?il le %d gcoinbhleacht laghd?/laghd? bh?othas ag s?il le %d coinbhleacht laghd?/laghd? bh?othas ag s?il le %d coinbhleacht iomlaoid/laghd? bh?othas ag s?il le %d choinbhleacht iomlaoid/laghd? bh?othas ag s?il le %d choinbhleacht iomlaoid/laghd? bh?othas ag s?il le %d gcoinbhleacht iomlaoid/laghd? bh?othas ag s?il le %d coinbhleacht iomlaoid/laghd? cine?l follasach i ngramadach gan chine?lacha oibreann breise `%s' earr?id mharfach t?igh go staid %d
 sl?nuimhir as raon: %s luach neamhbhail? $: $%d arg?int neamhbhail? %s chun %s carachtar neamhbhail?: %s treoir neamhbhail?: %s teanga neamhbhail? `%s' carachtar neamhbhail? nialasach l?ne-uimhir thar maoil cuimhne ?dithe `%s' ar iarraidh ag cr?och an chomhaid `%s' ar iarraidh ag cr?och na l?ne aitheant?ir ar iarraidh i bhf?gra paraim?adair oibreann ar iarraidh i ndiaidh `%s' n?os m? n? f?gra amh?in %s n? cheada?tear n?os m? n? teanga amh?in n? cheada?tear n?os m? n? creatlach amh?in n?l aon riail sa ghramadach ionchurtha slonn inlaghdaithe gan tairbhe sa ghramadach: %s n? cheada?tear ach %s amh?in an riail f?gra roimhe seo athfh?gra ar %%destructor r?amhshocraithe clibe?ilte athfh?gra ar %%printer r?amhshocraithe clibe?ilte athfh?gra ar %%destructor r?amhshocraithe gan chlib athfh?gra ar %%printer r?amhshocraithe gan chlib sainmh?ni? nua ar an uimhir theaghr?in do %s laghdaigh, ag ?s?id rialach %d (%s) di?lta?tear inchomhad %s a fhorscr?obh caismirt idir cine?lacha toraidh i bhfeidhm chumaiscthe `%s': <%s> != <%s> tugadh riail i gcomhair %s at? ina theaghr?n comharthach riail r?fhada riail gan tairbhe sa ghramadach riail gan tairbhe sa phars?la? de bhr? coinbhleachta? d?an iomlaoid, agus t?igh go staid %d
 histeagram loga m?id
 n?l aon abairt d?orthaithe ?n siombail tosaigh %s staid %d `$' ar strae `,' ar seachr?n, caith leis mar sp?s b?n `@' ar strae t? siombail %s in ?s?id, ach n?l s? ina teaghr?n comharthach agus n?l aon riail aici athfh?gra ar shiombail %s sainmh?ni? nua ar shiombail %s t? n?os m? n? aon teaghr?n litri?il amh?in ag an tsiombail `%s' siombail `%s' in ?s?id n?os m? n? uair amh?in mar theaghr?n litri?il is teaghr?n comharthach ? an tsiombail tosaigh %s siombail tosaigh %s gan sainmh?ni? aga i %s: %ld.%06ld (%ld%%)
 t? teaghr?in chomharthach ann (%s agus %s) leis an uimhir ch?anna (%d) an iomarca siombail? sa ghramadach ionchurtha (uasmh?id %d) caismirt idir cine?lacha leis an ghn?omh r?amhshocraithe: <%s> != <%s> luach gan socr?: $$ luach gan ?s?id: $%d rabhadh 