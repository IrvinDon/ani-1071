En compilation avec -c l'étape de l'edition des liens est sautée ce qui cause une création d'un fichier objet sans le linker. En compilant sans le "-c" on note une erreur qui nous renvoie à l'usage d'une fonction qui n'a pas été définie:
       
        c1-exo8_main.cpp:(.text+0x10): undefined reference to `calculer()'
        clang++: error: linker command failed with exit code
