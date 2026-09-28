le code qui permet d'afficher l'heure,
#include <cstdio>

int main() {
    int h, m, s;


    printf("Entrez l'heure initiale (heures minutes secondes séparées par des espaces) : ");
    scanf("%d %d %d", &h, &m, &s);

    int seconde = h * 3600 + m * 60 + s;

    for (int i = 0; i < 3; ++i) {
        int heuresa = (seconde / 3600) % 24;
        int minutesa = (seconde / 60) % 60;
        int secondesa = seconde % 60;
        printf("%02d:%02d:%02d\n", heuresa, minutesa, secondesa);

    
        seconde++;
    }

    return 0;
}
