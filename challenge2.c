// Challenge 2 : Fonction de Multiplication
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne 
// leur produit. Créez un programme principal qui utilise cette
// fonction pour afficher le produit de deux nombres.

#include <stdio.h>
int multiplier(int a, int b) {
    return a * b;
}

int main() {
   printf("%i", multiplier(2, 8));
}
