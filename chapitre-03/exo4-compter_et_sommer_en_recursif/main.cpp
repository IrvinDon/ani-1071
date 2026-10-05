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
    int nbEntrees = 0;
    while (scanf("%d", &n) == 1) {
        nbEntrees++;

        int n_positif = abs(n);
        int c = chiffresRecursif(n_positif);
        int s = sommeChiffresRecursif(n_positif);

        printf("%d\n", c);
        printf("%d\n", s);
    }
    if (nbEntrees == 0) {
        printf("AUCUN\n");
    }

    return 0;
}

