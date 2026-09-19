Voici les messages de compilation et d'execution après le premier essai:
 clang++  c1-exo5_main.cpp  -o essai_un
 \essai_un                            
Como estas
Voici les messages de compilation et d'execution apès le second essai:
 clang++  c1-exo5_main.cpp  -o essai_deux
 .\essai_deux
 Como estas
 A partir de ces messages on comprends que le nom de l'éxecutable n'affecte le produit obtenu lors de l'execution du code. La machine crée deux executables qui après leur lancement affiche le même résultat. On note aussi qu'en compilant avec: "int main(){}" | clang++ -xc++ - (ce qui sert à retirer le -output) on obtient un fichier a.exe qui est vérifiable au travers de la commande Get-ChildItem a*.

