#include<cstdio>
#include<cmath>
#include "aire.h"
int main(){
    double longueur;
    double largeur;
    double rayon;
    scanf("%lf",&longueur);
    scanf("%lf",&largeur);
    scanf("%lf",&rayon);
    printf("Aire du rectangle : %.4lf\n",aireRectangle(longueur,largeur));
    printf("Aire du disque : %.4lf\n",aireDisque(rayon));
    printf("Aire du triangle : %.4lf\n",aireTriangle(longueur,largeur));
    return 0;
}