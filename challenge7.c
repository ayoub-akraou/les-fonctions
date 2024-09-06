// Challenge 7 : Fonction d'Inversion de Chaîne
// Écrivez une fonction en C qui inverse une chaîne de caractères.
// La fonction doit prendre une chaîne en paramètre et retourner la chaîne inversée.
// Créez un programme principal qui utilise cette fonction pour afficher une chaîne inversée.

#include <stdio.h>
#include <string.h>

void inverser(char str[]) {
    int longueur = strlen(str);
    for(int i = 0; i < longueur / 2; i++) {
        char helper = str[i];
        str[i] = str[longueur - 1 - i];
        str[longueur - 1 - i] = helper;
    }
}

int main() {
    char string[] = "1234";
    inverser(string);
    printf("%s", string);
    return 0;
}
