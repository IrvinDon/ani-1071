Voici les résultats obtenus pour la première execution(sur un fichier normal):
 sans l'option -o2: TotalMilliseconds : 357,5928
 avec l'option -o2: TotalMilliseconds : 367,4981
 La taille de l'executable est identique, avec ou sans l'option:
 72 563 octets
Voici les résultats obtenus pour la second execution(sur un fichier qui fait un million d'additions):
sans l'option -o2: TotalMilliseconds : 356,0057
avec l'option -o2: TotalMilliseconds : 365,4815
la taille de l'executable est la même peu importe qu'on utilise ou pas l'option:
 73 728 octets
 On peut donc en conclure que l'option que l'option -o2 ne change pas le résultat d'un programme, elle nous garantie le même résultat qu'on l'utilise ou pas. On constate aussi que le temps de compilation est toujours plus long.