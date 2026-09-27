#include <cstdio>
 int main (){
    unsigned int nombre;
    unsigned int b;
    printf("Entrez un nombre de votre choix\n");
    scanf("%d", &nombre);

}

    for(int i=2;i<99;i++){
    
        bool estPremier = true;
        for (int i = 2; i < nombre; i++) {
            if (nombre % i == 0) {
                estPremier = false;
                break; 
            }
        }

        if (estPremier) {
            printf("%d ", nombre);
        }
    printf("\n");
    return 0;
    }