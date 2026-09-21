Les commandes utilisées pour afficher ses resultats:
 -Measure-Command {clang++ demo8.cpp -o 08} (mesure le temps de la compilation du fichier normal)
 -Measure-Command {./08} (mesure l temps de l'execution du fichier normal)
 -Measure-Command {clang++ 8.cpp -o 08} (mesure le temps de compilation du fichier avec 5 en-têtes)
 -Measure-Command {./08} (mesure le temps d'execution du fichier avec 5 en-têtes)
Voici le temps mis par programme pour être compilé et pour être exécuté:
 compilation:  375,2806 millisecondes
 execution: 16,5579 millisecondes
Voici le temps mis par un programme incluant cinq en-têtes.
 compilation: 1491,4306 millisecondes            
 exécution:  18,2107 millisecondes
  De part la démonstration faite on voit que le préprocesseur va copier-coller des milliers de lignes de code masquées issues de ces fichiers d'en-tête, ce qui va artificiellement augmenter le temps de compilation lors de la mesure, alors que le temps d'exécution restera presque identique. 
