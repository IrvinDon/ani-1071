#include <cstdio>

int main() {
    int n;
    printf("Entrez un entier n > 1 : ");
    scanf("%d", &n);
    int etapes = 0;
    printf("%d", n);
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        etapes++;
        printf(" -> %d", n);
    }
    
    printf("\nNombre d'etapes : %d\n", etapes);
    
    return 0;
}
