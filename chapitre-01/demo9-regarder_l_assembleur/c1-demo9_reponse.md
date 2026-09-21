Pour créer l'assembleur, voici la commande qui fût utilisée: 
clang++ -S main.cpp -o bjr.s
 Les identifications suivantes se sont faites à l'aide de Microsoft Visual Studio:
 l'etiquette main: main:;
 l'appel à printf: callq	__mingw_printf;
 la valeur de retour: .asciz	"bonjour\n"
