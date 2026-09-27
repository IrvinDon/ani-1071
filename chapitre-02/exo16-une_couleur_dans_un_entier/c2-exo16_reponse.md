Voici le code que nous avons écris: 
#include <cstdio>

int main()
{
    unsigned int c=0x2A7FCCFF; // le format est de type RR GG BB AA sur 32 bits donc on pousse à droite de 24 puis 16 puis 8 bits
    
        unsigned int R= ( c>>24 ) & 0xFF;
        unsigned int G= ( c>>16 ) & 0xFF;
        unsigned int B= ( c>>8  ) & 0xFF;
        unsigned int A= c & 0xFF; 
        printf("%u\n",R);
        printf("%u\n",G);
        printf("%u\n",B);
        printf("%u\n",A);
        R=R/2;
        G=G/2;
        B=B/2;
        A=A/2;
        printf("%08X\n",R);//On affiche la valeur obtenu après division, puis on la convertit en hexadécimal.
        printf("%08X\n",G);
        printf("%08X\n",B);
        printf("%08X\n",A);

    return 0;
}
 Voici ce que l'on obtient après execution:
 PS C:\Users\PC> ./c2                        
42
127
204
255
00000015
0000003F
00000066
0000007F
La nouvelle couleure est donc 153F667F.
