exo4-compter_et_sommer_en_recursif#include<cstdio>
int chiffresRecursif(int n){
    if(n<10){
        return 1;
    }else{
        return 1+ chiffresRecursif(n/10);
    }
    
}
int sommeChiffresRecursif(int n){
if(n==0){
        return 0;
    }
    else{
        return (n%10)+sommeChiffresRecursif(n/10);
    }
 }
 int main(){
    int n;
    int b;
    scanf("%d",&n);
    n=sommeChiffresRecursif(n);
    printf("%d",n);
 }
