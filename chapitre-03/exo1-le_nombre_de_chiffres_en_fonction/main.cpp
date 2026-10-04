#include <cstdio>

int nombreDeChiffres(int n) {
    if (n == 0) {
        return 1;
    }

    // Gestion de INT_MIN (-2147483648) sans débordement
    long long temp = n;
    if (temp < 0) {
        temp = -temp;
    }

    int compte = 0;
    while (temp > 0) {
        temp /= 10;
        compte++;
    }

    return compte;
}

int main() {
    int val;
    bool auMoinsUnEntier = false;

    // Lecture jusqu'à la fin du flux (EOF) avec scanf
    while (scanf("%d", &val) == 1) {
        auMoinsUnEntier = true;
        printf("%d\n", nombreDeChiffres(val));
    }

    // Si le flux ne contenait aucun entier
    if (!auMoinsUnEntier) {
        printf("AUCUN\n");
    }

    return 0;
}
