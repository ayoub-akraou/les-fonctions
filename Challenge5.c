// Challenge 5 : Fonction de Factorielle
// Écrivez une fonction en C qui calcule la factorielle d'un entier positif.
// La fonction doit prendre un entier en paramètre et retourner sa factorielle.
// Créez un programme principal qui utilise cette fonction pour afficher 
// la factorielle d'un nombre donné.

#include <stdio.h>

int obtenir_le_factorielle(int n) {
    int f = 1;
    int i = 1;
    while(i <= n) {
        f *= i;
        i++;
    }
    return f;
}

int main() {
   printf("%i", obtenir_le_factorielle(3));
}
