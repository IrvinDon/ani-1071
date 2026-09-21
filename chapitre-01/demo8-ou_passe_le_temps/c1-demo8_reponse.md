Voici le temps mis par programme pour être compilé et pour être exécuté:
 compilation:  375,2806 millisecondes
 execution: 16,5579 millisecondes
Voici le temps mis par un programme incluant cinq en-têtes.
 compilation: 1491,4306                  
 exécution:  18,2107 millisecondes
  De part la démonstration faite on voit que le préprocesseur va copier-coller des milliers de lignes de code masquées issues de ces fichiers d'en-tête, ce qui va artificiellement augmenter le temps de compilation lors de la mesure, alors que le temps d'exécution restera presque identique.               
Sur un projet réel, on cherche prioritairement à réduire le temps de compilation plutôt que le temps d'exécution, car la compilation est une opération répétée des centaines de fois par jour. Un temps de compilation trop long brise la dynamique de travail.
