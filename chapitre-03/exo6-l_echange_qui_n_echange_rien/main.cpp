#include <cstdio>

// 1. Échange par valeur (travaille sur des copies des variables)
void echangerParValeur(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 1. Échange par référence (travaille directement sur les variables d'origine)
void echangerParReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    // La boucle lit des paires d'entiers jusqu'à la fin du fichier
    while (scanf("%d %d", &a, &b) == 2) {
        
        // Appel de la fonction par valeur
        echangerParValeur(a, b);
        // Affichage après l'échange par valeur (l'entrée reste inchangée)
        printf("%d\n", a);
        printf("%d\n", b);

        // Appel de la fonction par référence
        echangerParReference(a, b);
        // Affichage après l'échange par référence (les valeurs sont permutées)
        printf("%d\n", a);
        printf("%d\n", b);
    }

    return 0;
}
