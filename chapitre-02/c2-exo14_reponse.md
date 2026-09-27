Voici le code: 
#include <cstdio>

int main()
{
    int h;
    scanf("%d", &h);

    for (int k = 1; k <= h; k++)
    {
        // Espaces avant
        for (int i = 1; i <= h - k; i++)
            printf(" ");

        // Étoiles
        for (int i = 1; i <= 2 * k - 1; i++)
            printf("*");

        printf("\n");
    }

    return 0;
Et voici le résultat si on choisisait 14:
clang++ flop.cpp -o F1
PS C:\Users\PC> ./F1                  
14
             *
            ***
           *****
          *******
         *********
        ***********
       *************
      ***************
     *****************
    *******************
   *********************
  ***********************
 *************************
***************************