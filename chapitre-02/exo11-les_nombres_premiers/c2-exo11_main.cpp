#include <cstdio>
#include <math.h>
 int main (){
    unsigned int nombre;
    nombre=2;
    while (nombre<100)
    {
        bool estPremier = true;
            for (int i = 2; i < sqrt(nombre); i++) {
                if (nombre % i == 0) {
                estPremier = false;
                break;
                }
            }
                if (estPremier){
                    printf("%u\n",nombre);
                }
            nombre++;
    }

    printf("\n");
return 0;
}
