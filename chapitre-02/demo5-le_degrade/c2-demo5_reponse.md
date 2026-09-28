Le code qui permet e faire apparaitre les shaders:
#include <cstdio>
int main(){
    char caract[]=" .:-=+*#@";
    for (int i = 0; i < 4; i++){
        for (int x = 0; x<60; x++){
            printf("%c", caract[x*9/60] );
        }
        printf("\n");
    }
    return 0;
}
