#include<cstdio>
unsigned int factorielle32(unsigned int n){
unsigned int i;
unsigned int res = 1;
if (n == 0){
    return 1;
}
for (i = 1; i <= n ; i++){
    res*=i;
}
return res;
 }
 unsigned long long factorielle64(unsigned long long n){
unsigned long long i;
unsigned long long res = 1;
if (n == 0){
    return 1;
}
for (i = 1; i<= n ;i++){
    res*=i;
}
return res;
 }
   int main() {
    unsigned long long n;
    if (scanf("%llu", &n) == 1) {
        printf("%u\n", factorielle32((unsigned int)n));
        printf("%llu\n", factorielle64(n));
    }
 }