#include <cstdio>

// 1. Signature exacte imposée par l'énoncé avec les types 'long long'
long long fibonacci(int n, long long& appels) {
    // 2. La fonction ajoute un à appels dès son entrée, avant tout test
    appels++;

    // Cas d'arrêt
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Récursion naïve : fib(n-1) + fib(n-2)
    return fibonacci(n - 1, appels) + fibonacci(n - 2, appels);
}

int main() {
    int n;

    // 4. Votre main lit n (gère plusieurs entrées à la suite si le correcteur teste plusieurs cas)
    while (scanf("%d", &n) == 1) {
        long long appels = 0; // Remet le compteur à zéro avant l'appel

        long long resultat = fibonacci(n, appels);

        // Affiche le résultat et le nombre d'appels (%lld pour les types long long)
        printf("%lld %lld\n", resultat, appels);
    }

    return 0;
}
