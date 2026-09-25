#include <cstdio>
int main() {
int a = 3;
int b = a++ + 1;
int c = ++a * 2;
int d = a-- - --a;
printf("%d %d %d \n",b,c,d);
    return 0;
}
