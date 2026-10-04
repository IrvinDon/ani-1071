#include <cstdio>
long long vabs(long long v){
    if(v<0){
        return -v;
}
return v;
}
long long pgcd(long long a, long long b){
    long long r=1;
    a= vabs(a);
    b= vabs(b);
    if (a == 0 || b == 0){
        return 0;
    }
    while(b!=0){
        r=a%b;
        a=b; 
        b=r;
    }
    return a;
}
long long ppcm(long long a, long long b){
    if (a == 0 || b == 0){
        return 0;
    }
    return a / pgcd(a, b) * b;
}

int main() {
long long a;
long long b;
bool UnCouple = false;
    while (scanf("%lld %lld", &a, &b) == 2) {
        UnCouple = true;
        printf("%lld\n", pgcd(a,b));
        printf("%lld\n", ppcm(a,b));
    }
    if (!UnCouple){
        printf("AUCUN\n");
    }
    return 0;

}
