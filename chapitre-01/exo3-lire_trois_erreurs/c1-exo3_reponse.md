Voici l'affichage de l'erreur concernant la bibliothèque; on note que la ligne fautive est la première et que les ligne signalées sont les   
    lignes 3 et 4. Parmi toutes les erreurs celle-ci pourrait ne pas citer le numéro de la ligne ceci est du à l'importance de situer la bibliothèque:
    c1-exo3_main.cpp:3:5: error: use of undeclared identifier 'pintf'
    3 |     pintf("Code sera corrigé"); 
      |    
    c1-exo3_main.cpp:4:5: error: use of undeclared identifier 'printf'
    4 |     printf("Sera t'il bien corrigé?");
        Le code ne reconnaît pas les deux fonctions printf utilisées.
Voici l'affichage de l'erreur concernant l'omission point virgule; on note que la ligne fautive est la 3ème et que la ligne réellement fautive est la 3ème:
    c1-exo3_main.cpp:3:34: error: expected ';' after expression
    3 |     printf(" Code sera corrigé")
Voici l'affichage de l'erreur concernant la rédaction de Printf au lieu de printf; on note que la ligne fautive est la 4ème  et que la ligne réellement fautive est la 4ème. On remarque aussi que le compilateur agit comme si on utilisait une fonction qui n'a jamais été déclarée ("Printf").
    c1-exo3_main.cpp:4:5: error: use of undeclared identifier 'Printf'; did you mean 'printf'?
    4 |     Printf("Sera t'il bien corrigé?");
