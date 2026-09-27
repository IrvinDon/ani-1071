Voici l'extrait du code obtenu:
#include <cstdio>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", a < b ? a : b);  // Smalla
    printf("%d\n", a > b ? a : b);  // Bigga
    printf("%s\n", a % 2 == 0 ? "pair" : "impair");  // parité 
    printf("%d %s\n", a, a == 1 ? "objet" : "objets"); // objet(s)

    return 0;
}
Et voici un exemple de compilation puis d'éxecution:
clang++ k.cpp -o c2
PS C:\Users\PC> ./c2               
13
90
13
90
impair
13 objets
