Voici ce que le compilateur produit lorsque l'on insere un type void:
testing.cpp:26:35: error: invalid application of 'sizeof' to an
      incomplete type 'void'
   26 |     printf("void : %zu octets\n", sizeof(void));
    Ce message nous apprends que l'usage de "size of" est mauvaise dans le cas d'un type void. Le compilateur nous apprends aussi que le type void serait "incomplet" il ferait peut-être allusion à un argument manquant.
    Le tableau suivant est celui des types de bases et de leurs tailles:
bool: 1 oc   char: 1 oc   unsigned char: 1 oc  short: 2 oc
int: 4 oc    long: 4 oc   long long: 8 oc unsigned int: 4 oc
float: 4oc   double: 8 oc long double: 16 oc.
On constate que les types long et unsigned long occupent une taille variable selon le système d'exploitation. Sur windows on a 4 octets et sur Linux 8 octets. En utilisant ce type plusieurs fois ou avec des valeurs fortes la taille du programme augmentera drastiquement.
Pour trouver la valeur la plus petite on va utiliser la formule 2^8n (n étant le nombre d'octet). Le plus petit type étant le char on pose donc 2^8(1) soit 256 valeurs distinctes.