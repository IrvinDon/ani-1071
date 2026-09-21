En compilant avec g++ puis avec clang++ on remarque que la compilation avec g++ prends un peu plus de temps. Et par la suite que les deux fichiers on: -quasiment la même taille (Même si celui produit par clang++ est moins volumineux);
voici les tailles des executables:
sous g++: 73 641 octets
sous clang++: 72 563 octets
Voici les temps mesurés pour les deux commandes:
sous g++: 232,1225 millisecondes (en moyenne)
sous clang++: 187,7008 millisecondes (en moyenne)
On comprends donc que le langage nous garantit un résultat commun peu importe l'outil de compilation.
On constate aussi que le langage ne nous garantit pas un fichier avec une taille précise ou encore avec un temps d'execution précis.
