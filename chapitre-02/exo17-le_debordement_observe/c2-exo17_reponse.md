Ceci est un bref résumé après les diverses compilations:

type            negatif au tour   zero au tour
int                   31             32
unsigned int          //              32
long long              63               64

De ce tableau on comprends que le nombre de bits d'un type de données  est lié à la valeur à laquelle ce même type déborde/sature. Voici ce qui est afficher lors de l'execution pour les types respectifs:
Int: 
On obtiens ainsi: -2147483648 et son nombre de tours est de 31.
On obtiens ainsi: 0 et son nombre de tours est de 32.
unsigned int:
On obtiens ainsi: 2147483648 et son nombre de tours est de 31
On obtiens ainsi: 0 et son nombre de tours est de 32
long long:
On obtiens ainsi: -9223372036854775808 et son nombre de tours est de 63
On obtiens ainsi: 0 et son nombre de tours est de 64.
Nous concluons en disant que le nombre de valeurs que peuvent contenir un type de données est égal au nombre de bits de ce même type.
Si l'on prends par exemple le cas du long long voici ce que l'on obtiendrait:
*En supposant un long long de 64 bits, 1 s'écrit :
00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001
Lors de la 63ème multiplicatio voici ce qui devrait être écrit :
10000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000
Or cette écriture n'est pas vraie car ce long long est signé, et ce dernier bit est celui de ce signe donc;
10000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 représente -9223372036854775808.