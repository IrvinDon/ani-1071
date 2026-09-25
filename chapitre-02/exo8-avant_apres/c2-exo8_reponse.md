 Mes prédictions sur les possibles résulats des calculs respectifs avant compilation sont:
b=4 et a=4
c=(4+1)*2 c=10 et a=5
et d=5-4  d=1 et a=4. 
Après compilation on obtient les résultats suivants:

 clang++ c2-exo8_main.cpp -o c2
c2-exo8_main.cpp:6:10: warning: multiple unsequenced modifications to 'a' [-Wunsequenced]
 ***6 | int d = a-- - --a;***
      |          ^    ~~
1 warning generated.
PS C:\Users\PC> ./c2                          
4 10 2.
On fait deux remarques: 
-L'avertissement du compilateur par rapport au calcul de d (int d = a-- - --a).
-Le résultat de la d: a est d'abord décrémenter de un mais la machine utilise sa valeur avant la décrémentation (5) puis décrémente le deuxième à de un à partir de celui qui vaut 4. On a donc 5-3=2. Je pense avoir été troublé par le fait "d'utiliser puis décrémenter" et que cette valeur ait toujours été gardé même avant que le calcul général ne soit fait.
