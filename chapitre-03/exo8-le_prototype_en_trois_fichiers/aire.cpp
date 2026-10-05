#include<cstdio>
#include<cmath>
#include "aire.h"

double aireRectangle(double longueur, double largeur){
    return longueur * largeur;
}
double aireDisque(double rayon){
    return 3.14*pow(rayon,2);
}
double aireTriangle(double longueur, double largeur){
    return 0.5*longueur*largeur;
}
