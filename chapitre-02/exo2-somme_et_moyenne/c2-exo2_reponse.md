Voici un extrait du code qui a permis de calculer la somme et la moyenne de cinq nombres entrés au clavier:
 float a;
    float b;
    float c;
    float d;
    float e;
    float sum;
    float moy;
    printf("Entrez des nombres\n");
    scanf("%f %f %f %f %f",&a ,&b ,&c ,&d ,&e);
    sum=a+b+c+d+e;
    moy= (a+b+c+d+e)/5;
    printf("La somme est: %f\n",sum);
    printf("La moyenne: %f\n",moy);

     Voici ce qui se produit lorsqu'on ouvre l'executable et on y entre les valeurs demandées:
     
PS C:\Users\PC> ./MS                    
Entrez des nombres
7
8
9
10
10
La somme est: 44.000000
La moyenne: 8.800000
