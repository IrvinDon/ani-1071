#include <cstdio>
 int main (){
    unsigned int nombre;
    nombre=2;
    while (nombre<100)
    {
        bool estPremier = true;
            for (int i = 2; i < (nombre^1/2); i++) {
                if (nombre % i == 0) {
                estPremier = false;
                break;
                }
            }
                if (estPremier){
                    printf("%d\n",nombre);
                }
            nombre++;
    }

    printf("\n");
return 0;
}
