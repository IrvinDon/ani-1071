int main() {
    int t[100]; // On prévoit un tableau assez grand
    int n = 0;

    // On lit les chiffres un par un jusqu'à ce qu'il n'y en ait plus
    while (scanf("%d", &t[n]) == 1) {
        n++;
    }

    if (n == 0) {
        printf("AUCUN\n");
        return 0;
    }

    renverser(t, n);

    for (int i = 0; i < n; i++) {
        printf("%d\n", t[i]);
    }

    return 0;
}
