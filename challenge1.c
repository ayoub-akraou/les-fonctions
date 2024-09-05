// Challenge 1 : Fonction de Somme
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne 
// leur somme. Créez un programme principal qui utilise cette fonction
// pour afficher la somme de deux nombres.

#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}

int main() {
   printf("%i", sum(2, 8));
}
