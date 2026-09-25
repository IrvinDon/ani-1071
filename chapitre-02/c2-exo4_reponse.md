Voici le code executé et le résultat produit par le terminal:
#include <cstdio>
int main() {
 
    for (int i = 1; i<=10; ++i) {       
        for (int j = 1; j <= 10; ++j) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}
et le Résultat:
 clang++ loop.cpp -o MS
PS C:\Users\PC> ./MS  

   1   2   3   4   5   6   7   8   9  10
   2   4   6   8  10  12  14  16  18  20
   3   6   9  12  15  18  21  24  27  30
   4   8  12  16  20  24  28  32  36  40
   5  10  15  20  25  30  35  40  45  50
   6  12  18  24  30  36  42  48  54  60
   7  14  21  28  35  42  49  56  63  70
   8  16  24  32  40  48  56  64  72  80
   9  18  27  36  45  54  63  72  81  90
  10  20  30  40  50  60  70  80  90 100
   En compilant avec %d on constate que les chiffres sont aligné selon le résultat de leurs calculs sur une ligne:
   12345678910
2468101214161820
36912151821242730
481216202428323640
5101520253035404550
6121824303642485460
7142128354249566370
8162432404856647280
9182736455463728190
102030405060708090100
En le faisant avec %6d on remarque que l'espace entre les chiffres est plus grand, on comprends donc que cette option a pour but de fournir une marge aux nombres qui seront affichés.
**Esquisse avec l'usage de %6d:
  1     2     3     4     5     6     7     8     9    10
     2     4     6     8    10    12    14    16    18    20
     3     6     9    12    15    18    21    24    27    30
     4     8    12    16    20    24    28    32    36    40
     5    10    15    20    25    30    35    40    45    50
     6    12    18    24    30    36    42    48    54    60
     7    14    21    28    35    42    49    56    63    70
     8    16    24    32    40    48    56    64    72    80
     9    18    27    36    45    54    63    72    81    90
    10    20    30    40    50    60    70    80    90   100