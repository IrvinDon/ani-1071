#include <cstdio>
#include <cmath>

int chiffresRecursif(int n){
    if(n < 10){
        return 1;
    }else{
        return 1 + chiffresRecursif(n / 10);
    }
}

int sommeChiffresRecursif(int n){
    if(n < 10){
        return n;
    }else{
        return (n % 10) + sommeChiffresRecursif(n / 10);
    }
}

int main(){
    int n;
    // Compteur pour savoir si on a lu au moins un nombre
    int nbEntrees lues = 0; 

    // La boucle continue tant que scanf réussit à lire un entier
    while (scanf("%d", &n) == 1) {
        nbEntrees lues++;

        // Traitement de la valeur absolue
        int n_positif = abs(n);

        int c = chiffresRecursif(n_positif);
        int s = sommeChiffresRecursif(n_positif);

        printf("%d\n", c);
        printf("%d\n", s);
    }

    // Si la boucle n'a jamais tourné (aucune entrée fournie)
    if (nbEntrees lues == 0) {
        printf("AUCUN\n");
    }

    return 0;
}
