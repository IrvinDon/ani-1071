Voici un extrait du code qui a permis de calculer la somme et la moyenne de cinq nombres entrés au clavier:
 int a;
    int b;
    int c;
    int d;
    int e;
    int sum;
    int moy;
    printf("Entrez des nombres\n");
    scanf("%d %d %d %d %d",&a ,&b ,&c ,&d ,&e);
    sum=a+b+c+d+e;
    moy= (a+b+c+d+e)/5;
    printf("La somme est: %d\n",sum);
    printf("La moyenne: %d\n",moy);
     Voici ce qui se produit lorsqu'on ouvre l'executable et on y entre les valeurs demandées:
    
 PS C:\Users\PC> ./MS                    
Entrez des nombres
7
8
9
10
10
La somme est: 44
La moyenne: 8
