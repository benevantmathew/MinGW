��            )         �  ;   �  (   �  9     �   P  �   ,  &   �  �   �  #   �  :   �  5     �   7     �  Y   C  '   �     �  A   �  "     6  B  ]   y
  �   �
  <   �  �   �  2   �  �   �    �    �  8   �  	             -  �  A  M   �  '     8   9  �   r  �   R  +   �  �     /   �  E     ;   d  �   �  v   "  \   �  /   �     &  :   9     t  D  �  a   �  ~   7  E   �  �   �  5   �  �   �     �  9  �  <        U     a     ~                                                                                       
                                             	    Change the maximum pserver processes spawned in one minute? Change the number of kept history files: Do you want the repository ${repos} exported via pserver? If you have not yet created these repositories, they can be created by selecting 'create'. You could also select 'ignore' and use the 'cvs-makerepos' command to create them, or create them individually using 'cvs init'. If you wish to create a new repository, enter the path where you wish to create it. You will then be given the option of creating it later. Inetd spawn limit for the CVS pserver: It is not recommended to choose this option. CVS now only allows access to particular repositories specified on the command line. When chosen, it will be installed in inetd, using tcpd wrappers. Method to fix invalid repositories: Number of previous history files to keep (global setting): Number of previous history files to keep in ${repos}: Please choose how many previous history files should be kept in ${repos} when the history files in your repositories are rotated each week. Please choose how many previous history files should be kept when the history files in your repositories are rotated each week. Please list the directories that are the roots of your repositories, separated by colons. Repositories to export via the pserver: Repository directories: Rotate the history files of the repository in ${repos} each week? Should the CVS pserver be enabled? The CVS pserver is a client-to-server mechanism which can be used by CVS as a replacement for the standard "server" method, which uses "rsh", or an rsh compatible program, such as ssh. It is more efficient than the standard server protocol, also supporting its own password files, making it more secure. However, it may be a security risk, and used to contain a security problem whereby a remote connection may have been able to read the passwd or other security-related files on the system. Read README.Debian for more details, and extra ways to secure the pserver. The following items you entered are not directories or do not contain a CVSROOT subdirectory: These repositories can be exported by the pserver, have their history files rotated automatically every week, and general repository security checks will be performed on them. Thus, a more sensible default limit for most systems is 400. Thus, a more sensible default limit for most systems is 400. However, if you are running an inetd clone which does not support the syntax "nowait.[limit]", you will need to not set a limit using this method. Weekly rotation for history files in repositories: Weekly rotation of history files is primarily useful for servers with a lot of activity. The script /etc/cron.weekly/cvs will rotate the history files. Select "individual" if you want to control rotation on a per-repository basis. When rotating history files in repositories, by default the previous 7 are kept. Choosing "yes" will allow you to change this number globally. Choosing "individual" will allow you to specify the number of days to keep history files for individual repositories. When running a pserver, inetd's default limit of allowing 40 connections in 1 minute can easily be exceeded if a script calls CVS individually on many files over a pserver connection. This limit is designed to stop system load from rising too high if the service is continually failing. You can also choose to 'reenter' your repositories list. all, some create, ignore, reenter yes, no, individual Project-Id-Version: cvs debconf
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2006-09-30 19:23+0200
PO-Revision-Date: 2006-10-01 19:14+0200
Last-Translator: Claus Hindsgaul <claus.hindsgaul@gmail.com>
Language-Team: Danish
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.11.4
Plural-Forms:  nplurals=2; plural=(n != 1);
 Ret det maksimale antal pserver-processer, der kan startes indenfor �t minut? Ret antallet af bevarede historikfiler: �nsker du filsamlingen ${repos} eksporteret via pserver? Hvis du endnu ikke har oprettet disse filsamlinger, kan de oprettes ved at v�lge 'opret' her. Du kan ogs� v�lge 'ignor�r' og bruge kommandoen 'cvs-makerepos' til at oprette dem, eller oprette dem individuelt med 'cvs-init'. Hvis du �nsker at oprette en ny filsamling, skal du angive den sti, hvor du �nsker at oprette den. Du vil da f� mulighed for at oprette den senere. Inetds "spawn"-begr�nsning for CVS pserver: Det anbefales ikke at v�lge denne indstilling. CVS tillader nu kun adgang til bestemte filsamlinger, der angives p� kommandolinjen. N�r indstillingen er valgt, vil den blive installeret i inetd ved hj�lp af tcpd-omslag. Metode til reparation af ugyldige filsamlinger: Antal tidligere historikfiler, der skal bevares (global indstilling): Antal tidligere historikfiler, der skal bevares i ${repos}: V�lg, hvor mange tidligere historikfiler, der skal bevares i ${repos}, n�r historikfilerne i dine filsamlinger roteres ugentligt. Angiv hvor mange tidligere historikfiler, der skal bevares, n�r historikfilerne i dine filsamlinger roteres ugentligt. Skriv de mapper, der udg�r r�dderne af dine filsamlinger ("repositories") adskilt med kolon. Filsamlinger, der skal eksporteres via pserver: Filsamlingsmapper: Rot�r historikfilerne i filsamlingen i ${repos} ugentligt? Skal CVS pserver aktiveres? CVS pserver er en klient-til-server mekanisme, som kan benyttes af CVS som erstatning for standardmetoden "server", som bruger "rsh" eller et rsh-kompatibelt program s�som ssh. Det er mere effektivt end standardserverens protokol, og underst�tter tillige sine egne adgangskode-filer, s� det er mere sikkert. Det kan dog udg�re en sikkerhedsrisiko, og har tidligere indeholdt et sikkerhedshul, der gav mulighed for at l�se passwd-filen og andre sikkerhedsrelaterede filer p� systemet via en fjernforbindelse. L�s README.Debian for flere detaljer og flere m�der at sikre pserver p�. F�lgende af de poster, du indtastede, er ikke mapper eller indeholder ikke en CVSROOT-undermappe: Disse filsamlinger kan exporteres af pserveren, s� roteres deres historikfiler ugentligt og gennemg� generelle sikkerhedstjek. Derfor er 400 en mere fornuftig standardgr�nse p� de fleste systemer. Derfor er 400 en mere fornuftig standardgr�nse p� de fleste systemer. Men hvis du k�rer en inetd-klon, der ikke underst�tter syntaksen "nowait.[gr�nse]", kan du ikke angive en begr�nsning p� denne m�de. Ugentlig rotation for historikfiler i filsamlingerne: Ugentlig rotation af historikfilerne er mest nyttige for servere med megen aktivitet. Skriptet /etc/cron.weekly/cvs vil rotere historikfilerne. V�lg "individuelt" hvis du vil styre rotationen enkeltvist for hver filsamling. N�r historikfilerne i filsamlingerne roteres, bevares som udgangspunkt de 7 seneste. Ved at v�lge "ja", kan du �ndre dette antal globalt. Med "individuelt", kan antallet af dage, historikfilerne skal bevares, angives individuelt for hvert enkel filsamling. N�r du k�rer en pserver, n�s inetd's standardbegr�nsning, der kun tillader 40 forbindelser indenfor 1 minut let hvis et skript kalder CVS individuelt for mange filer over en pserver-forbindelse. Denne gr�nse er lavet for at hindre belastningen af systemet i at blive for h�jt, hvis servicen fejler gentagne gange. Du kan ogs� v�lge at 'genindtaste' listen over filsamlinger. alle, nogle opret, ignor�r, indtast igen ja, nej, individuelt 