#include <cstdio>
void hanoi(int n, char depart, char arrivee, char intermediaire) {
    if (n <= 0) {
        return;
    }
    hanoi(n - 1, depart, intermediaire, arrivee);

    printf("%c>%c\n", depart, arrivee);

    hanoi(n - 1, intermediaire, arrivee, depart);
}

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        hanoi(n, 'A', 'C', 'B');
        long long total_deplacements = 0;
        if (n > 0) {
            total_deplacements = (1LL << n) - 1; 
        }
        printf("%lld\n", total_deplacements);
    }

    return 0;
}
