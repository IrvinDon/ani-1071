#include <cstdio>

int main()
{
    long long x= 1;
    int tr=0;
    for( int i=1; i<75; i++){
        x<<=1;
        tr++;
        printf("On obtiens ainsi: %lld et son nombre de tours est de %d\n",x ,tr);
    } 
}
