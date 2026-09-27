#include <cstdio>

int main()
{
    int x= 1;
    int tr=0;
    for( int i=1; i<75; i++){
        x<<=1;
        tr++;
        printf("On obtiens ainsi: %d et son nombre de tours est de %d\n",x ,tr);
    } 
}