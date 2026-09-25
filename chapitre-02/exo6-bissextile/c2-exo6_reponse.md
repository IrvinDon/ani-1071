Voici le code écrit: 
#include <cstdio>
 int main(){
    int annee;
    printf ("Entrez une année\n");
    scanf("%d", &annee);
    if (annee%400==0  || annee%4==0 && annee%100!=0  ){
        printf("%d est bisextile en plus c'était/sera une belle année!!\n", annee);
     } else{
        printf ("Bah c'est pas bisextile, et c'était évident non..?\n");
     }
     return 0;
 }
  Voici les résultats du compilateur: 
  PS C:\Users\PC> ./MS
Entrez une ann├®e
1900
Bah c'est pas bisextile, et c'├®tait ├®vident non..?
PS C:\Users\PC> ./MS
Entrez une ann├®e
2000
2000 est bisextile en plus c'├®tait/sera une belle ann├®e!!
PS C:\Users\PC> ./MS
Entrez une ann├®e
2024
2024 est bisextile en plus c'├®tait/sera une belle ann├®e!!
PS C:\Users\PC> ./MS
Entrez une ann├®e
2100
Bah c'est pas bisextile, et c'├®tait ├®vident non..?
