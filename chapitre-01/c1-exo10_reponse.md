Voici le message affiché après compilation en usant des attibuts donnés:
    c1-exo10_main.cpp:3:9: warning: unused variable 'a' [-Wunused-variable]
    3 |     int a;

Si on devrait ommettre l'usage de l'attribut donné on remarque que l'avertissement est supprimé on suppose donc qu'il permet d'afficher le plus d'avertissements possibles. Malgré celà un avertissement ne peut arêter un code or une erreur le peut car lors de la compilation le compilateur la détecte et arrête le programme.