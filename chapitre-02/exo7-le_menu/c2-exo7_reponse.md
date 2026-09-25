Voici le code redigé et quelque message s'affichant en fonction de nos choix:
#include <cstdio>
int main() {
 int a;
 int choix;
 int c;
 printf("Entrez votre choix!!!\n");
 scanf("%d" ,&choix);
switch (choix){

    case 1:
    printf("Nouvelle Partie\n");
    break;
    case 2:
    printf("Charger\n");
    break;
    case 3:
    printf("options\n");
    break;
    case 4:
    printf("Quitter\n");
    break;
    default:
    printf ("WHAT DO YOU WANT\n");

}
return 0;
}
Messages affichés:
    ./WSH                 
    Entrez votre choix!!!
    4
    Quitter
    PS C:\Users\PC> ./WSH
    Entrez votre choix!!!
    2
    Charger
    PS C:\Users\PC> ./WSH
    Entrez votre choix!!!
    1
    Nouvelle Partie
    PS C:\Users\PC> ./WSH
    Entrez votre choix!!!
    3
    options
    PS C:\Users\PC> ./WSH
    Entrez votre choix!!!
    4
    Quitter
    PS C:\Users\PC> ./WSH
    Entrez votre choix!!!
    555
    WHAT DO YOU WANT.
En retirant le troisième break et en ayant pour choix le troisième voici exactment ce qui s'affiche:
    clang++ WESH.cpp -o WSH
    PS C:\Users\PC> ./WSH                  
    Entrez votre choix!!!
    3
    options
    Quitter
On comprends que lorsque l'on retire un break le reste des instructions qui suivent ce break s'éxecutent (Sauf l'instruction par défaut).
