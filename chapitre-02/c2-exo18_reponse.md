Le constat est très flagrant lorsqu'on éxecute avec 1000000 et 1; avec la méthode des soustractions on a 999999 tours. Or avec Euclide on a 1 seul tour! En voici les extraits du terminal:
clang++ c2-exo18_main.cpp -o ll
PS C:\Users\PC> ./ll                           
1000000
1
999999 tours
1 est PGCD!
1000000
1
PGCD = 1
En ce qui concerne 1071 et 462 le cosntat est le même, tandis que l'on trouve 11 tours pour la méthode des soustractions, En utilisant Euclide on a que 3 tours.