Il suffit de tester les diviseurs avant la racine carré car si on le fait on saura plus vite si un nombre est premier ou pas. C'est-à-dire qu'en le faisant on rassemble toutes les paires de diviseurs d'un nombre. Par exemple si on a un entier N, s'il n'est pas premier alors on aura forcément un N=axb. De ce fait, si l'on teste a (qui est inférieur à b) et que le reste est nul, on sait que a et b seront diviseurs de N. Prennons le cas de 100, sa racine vaut 10, et 100=25*4; 100=20*5; 100=50*2... Dans ce cas on testera 2 et plus besoin de tester ceux qui viendront plus haut.
Voici l'affichage obtenu lors de la résolution: 
./programme                                            
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
