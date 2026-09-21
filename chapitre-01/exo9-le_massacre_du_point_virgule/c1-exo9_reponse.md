***Voici les erreurs affichées lors de la première compilation:
c1-exo9_main.cpp:2:5: error: unknown type name 'stuct'; did you mean 'struct'?
    2 |     stuct Machin{
      |     ^~~~~
      |     struct
c1-exo9_main.cpp:3:20: error: expected ';' at end of declaration list
    3 |         int machin1
      |                    ^
      |                    ;
c1-exo9_main.cpp:5:6: error: expected ';' after struct
    5 |     }
      |      ^
      |      ;
c1-exo9_main.cpp:7:22: error: excess elements in struct initializer
    7 |    Machin quanty={20,99}
      |                      ^~
c1-exo9_main.cpp:7:25: error: expected ';' at end of declaration
    7 |    Machin quanty={20,99}
      |                         ^
      |                         ;
c1-exo9_main.cpp:8:9: error: expected ';' at end of declaration
    8 |    int a
      |         ^
      |         ;
c1-exo9_main.cpp:9:9: error: expected ';' at end of declaration
    9 | int prix
      |         ^
      |         ;
c1-exo9_main.cpp:10:9: error: expected ';' at end of declaration
   10 |    int c
      |         ^
      |         ;
c1-exo9_main.cpp:11:9: error: expected ';' at end of declaration
   11 |    int i
      |         ^
      |         ;
c1-exo9_main.cpp:12:17: error: expected ';' at end of declaration
   12 |    char Iden[20]
      |                 ^
      |                 ;
c1-exo9_main.cpp:13:16: error: expected ';' at end of declaration
   13 |    char section
      |                ^
      |                ;
c1-exo9_main.cpp:17:29: error: expected ';' after expression
   17 |         scanf("%c",&section)
      |                             ^
      |                             ;
c1-exo9_main.cpp:18:19: error: no member named 'machin2' in 'Machin'
   18 |         if(quanty.machin2<799){
      |            ~~~~~~ ^
c1-exo9_main.cpp:19:35: error: no member named 'machin2' in 'Machin'
   19 |             quanty.machin1=quanty.machin2*7500
      |                            ~~~~~~ ^
c1-exo9_main.cpp:19:47: error: expected ';' after expression
   19 |             quanty.machin1=quanty.machin2*7500
      |                                               ^
      |                                               ;
c1-exo9_main.cpp:21:49: error: expected ';' after expression
   21 |     printf("Votre super prime est de %d\n",prix)
      |                                                 ^
      |                                                 ;
c1-exo9_main.cpp:22:66: error: expected ';' after expression
   22 |         printf("Entrez votre texte (puis appuyez sur Entrée)\n")
      |                                                                 ^
      |                                                                 ;
c1-exo9_main.cpp:25:73: error: expected ';' after expression
   25 |         printf("la liste des élèves a été corectement établie!!\n")
      |                                                                    ^
      |                                                                    ;
c1-exo9_main.cpp:28:10: error: expected ';' after return statement
   28 |  return 0 //Notons que le fichier rendu est celui dans le quel nous avons fait siament les erreurs.
      |          ^
      |          ;
19 errors generated.
 En remmetant le point virgule après la déclaration de on note ainsi 14 erreurs:
 c1-exo9_main.cpp:2:5: error: unknown type name 'stuct'; did you mean 'struct'?
    2 |     stuct Machin{
      |     ^~~~~
      |     struct
c1-exo9_main.cpp:3:20: error: expected ';' at end of declaration list
    3 |         int machin1
      |                    ^
      |                    ;
c1-exo9_main.cpp:5:6: error: expected ';' after struct
    5 |     }
      |      ^
      |      ;
c1-exo9_main.cpp:7:22: error: excess elements in struct initializer
    7 |    Machin quanty={20,99}
      |                      ^~
c1-exo9_main.cpp:7:25: error: expected ';' at end of declaration
    7 |    Machin quanty={20,99}
      |                         ^
      |                         ;
c1-exo9_main.cpp:8:9: error: expected ';' at end of declaration
    8 |    int a
      |         ^
      |         ;
c1-exo9_main.cpp:9:9: error: expected ';' at end of declaration
    9 | int prix
      |         ^
      |         ;
c1-exo9_main.cpp:10:9: error: expected ';' at end of declaration
   10 |    int c
      |         ^
      |         ;
c1-exo9_main.cpp:11:9: error: expected ';' at end of declaration
   11 |    int i
      |         ^
      |         ;
c1-exo9_main.cpp:13:16: error: expected ';' at end of declaration
   13 |    char section
      |                ^
      |                ;
c1-exo9_main.cpp:21:49: error: expected ';' after expression
   21 |     printf("Votre super prime est de %d\n",prix)
      |                                                 ^
      |                                                 ;
c1-exo9_main.cpp:22:66: error: expected ';' after expression
   22 |         printf("Entrez votre texte (puis appuyez sur Entrée)\n")
      |                                                                 ^
      |                                                                 ;
c1-exo9_main.cpp:25:73: error: expected ';' after expression
   25 |         printf("la liste des élèves a été corectement établie!!\n")
      |                                                                    ^
      |                                                                    ;
c1-exo9_main.cpp:28:10: error: expected ';' after return statement
   28 |  return 0 //Notons que le fichier rendu est celui dans le quel nous avons fait siament les erreurs.
      |          ^
      |          ;
14 errors generated.

Du terminal on note un message particulier qui nous annonce une limite d'erreurs:
fatal error: too many errors emitted, stopping now [-ferror-limit=]
S'il n'y avait pas eut de limite, on saurait à  22 erreurs et la prochaine serait celle de la ligne.***
