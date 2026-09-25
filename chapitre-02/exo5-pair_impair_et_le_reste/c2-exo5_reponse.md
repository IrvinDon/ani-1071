Voici le code écrit:

#include <cstdio>
 int main(){
    int a;
    printf("Entrez un nombre vite fait!\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d Est pair\n",a);
    }else{
        printf("%d Est impair\n",a);
    }
    if(a<0){
         printf("%d Est négatif\n",a);
        }else{
            if(a>0){
                printf("%d Est plutôt positif\n",a);
            }
            if(a==0){
                printf("%d Est nullll\n",a);
            }
            }
        if(a%3==0){
            printf("%d Est aussi Divisible par 3\n",a);
        }  
    return 0;
 }
 
 Voici les test effectués:
PS C:\Users\PC> ./MS
Entrez un nombre vite fait!
0
0 Est pair
0 Est nullll
0 Est aussi Divisible par 3
PS C:\Users\PC> ./MS
Entrez un nombre vite fait!
-9
-9 Est impair
-9 Est n├®gatif
-9 Est aussi Divisible par 3
PS C:\Users\PC> ./MS
Entrez un nombre vite fait!
12
12 Est pair
12 Est plut├┤t positif
12 Est aussi Divisible par 3
PS C:\Users\PC> ./MS
Entrez un nombre vite fait!
7
7 Est impair
7 Est plut├┤t positif
 
