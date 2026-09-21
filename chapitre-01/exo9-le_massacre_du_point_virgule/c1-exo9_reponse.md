Voici les erreurs affichées lors de la première compilation:
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
c1-exo9_main.cpp:9:12: error: expected ';' at end of declaration
    9 |    int prix
      |            ^
      |            ;
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
c1-exo9_main.cpp:14:74: error: expected ';' after expression
   14 |         printf("Entrez votre âge pour que nous évaluons votre prime\n")
      |                                                                        ^
      |                                                                        ;
c1-exo9_main.cpp:15:30: error: expected ';' after expression
   15 |         quanty.machin1= 11529
      |                              ^
      |                              ;
c1-exo9_main.cpp:16:52: error: expected ';' after expression
   16 |         printf("Entrez votre section de travail\n")
      |                                                    ^
      |                                                    ;
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
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
 En remmetant le point virgule après la déclaration de on note ainsi 14 erreurs:
 On comprends donc qu'en enlevant les erreurs issues plus haut on évite une grande partie des erreurs qui pourrait en découler.
