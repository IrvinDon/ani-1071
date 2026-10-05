#include<cstdio>
#include <cmath> 
int chiffresRecursif(int n){
    if(n<10){
        return 1;
    }else{
        return 1+ chiffresRecursif(n/10);
    }
    
}
int sommeChiffresRecursif(int n){
if(n<10){
        return n;
    }
    else{
        return (n%10)+sommeChiffresRecursif(n/10);
    }
 }
 int main(){
    int n;
    int s;
    int c;
    scanf("%d",&n);
    n = abs(n); 
        c=chiffresRecursif(n);
    s=sommeChiffresRecursif(n);

    printf("%d\n",c);
    printf("%d",s);
    return 0;
 }
