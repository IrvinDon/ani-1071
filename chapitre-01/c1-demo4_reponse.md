
Voici les résultats obtenus pour la première compilation(sur un fichier normal):
 sans l'option -O2: TotalMilliseconds : 335,2708
 avec l'option -O2: TotalMilliseconds : 409,1594
 La taille de l'executable est identique, avec ou sans l'option:
 72 563 octets
Voici les résultats obtenus pour la seconde compilation(sur un fichier qui fait un million d'additions):
sans l'option -O2: TotalMilliseconds : 342,6952
avec l'option -O2: TotalMilliseconds : 421,7985
la taille de l'executable est la même peu importe qu'on utilise ou pas l'option:
 73 728 octets
 Les temps d'execution sont les suivants: (uniquement testés pour le programme qui fait le million d'additions):
 sans: 33,6655
 avec: 15,731
***Notons que toutes ces valeurs mesurées ont été trouvées à partir d'une moyenne générale de celles-ci.
 On peut donc en conclure que  l'option -O2 ne change pas le résultat d'un programme. Le programme compilé sans -O2 va mettre un certain temps à faire le million d'additions .Malgré celà, ce même programme compilé avec -O2 va s'exécuter de façon quasi instantanée.