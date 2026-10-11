#include<cstdio>
void renverser(int t[], int n){
for(int i=0; i<n/2; i++){
int temp=t[n-1-i];
t[n-1-i]=t[i];
t[i]=temp;
}
}
int main(){
    int t[5];
    int n=5;
    printf("Entrez les entiers : ");
    for(int i=0; i<n; i++){
        scanf("%d", &t[i]);
    }
   if(n == 0){
            printf("AUCUN\n");
    }else{
        renverser(t,n);
    }
    for(int i=0; i<n; i++){
        printf("%d\n", t[i]);
    }
return 0;
}
