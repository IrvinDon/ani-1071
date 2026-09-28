Voici le code permettant de créer une devinette de nombre;
#include <cstdio>
#include <cstdlib>
int secret = rand() % 100 + 1;
int choix;
int essai;
int main(){
    printf("vous trouverez le nombre\n");
    essai=0;
    while(choix != secret){
            scanf("%d", &choix);
    if(choix > secret){
        printf("Plus bas frère!\n");
    }else{
    if(choix < secret){
        printf("Plus haut frère\n");   
    }

    if (choix == secret){
  printf("VOUS AVEZ TROUVER!!! \n");
      
}

    }
    essai++;
}
       printf("Vous avez fait: %d essais\n", essai);
    return 0;
}
