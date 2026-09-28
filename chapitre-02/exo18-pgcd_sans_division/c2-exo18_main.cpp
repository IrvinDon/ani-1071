#include <cstdio>
int main(){
int a;
int b;
int tours;
    scanf("%d %d",&a ,&b);//Avec la méthode des soustractions consécutives.!!
    tours = 0;
        while (a != b)
        {
            if (a > b){
            a = a - b;
         }else{
            b = b - a;
    }
    tours++;
}
printf("%d tours\n",tours);
printf("%d est PGCD!\n",a);
    int aa;
    int bb;
    int r;
    int tourss;
    tourss=0;
        scanf("%d %d",&aa ,&bb);
        while(bb!=0){
                r=aa%bb;
                aa=bb;
                bb=r;
                tourss++;
            }
            printf("PGCD = %d\n", aa);
    printf("Nombre de tours = %d\n", tourss);
return 0;

}
