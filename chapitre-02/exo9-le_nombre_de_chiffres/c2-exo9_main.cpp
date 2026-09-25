#include<cstdio>
 int main(){
    unsigned int nombre;
    int compte;
    printf("Put anything\n");
    scanf("%d", &nombre);
    compte=0;
    do{
        nombre = nombre/10 ;
        compte++;
     }
     while(nombre>0);
    printf("Le nombre de chiffres est : %d\n", compte);
    return 0;
 }
