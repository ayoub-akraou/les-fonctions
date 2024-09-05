// Challenge 3 : Fonction de Maximum 
// Écrivez une fonction en C qui prend deux 
// entiers en paramètres et retourne le plus grand des deux. 
// Créez un programme principal qui utilise cette fonction pour 
// afficher le maximum entre deux nombres.

#include <stdio.h>
int obtenir_le_max(int a, int b) {
    if(a > b) return a;
    return b;
}

int main() {
   printf("%i", obtenir_le_max(1, -3));
}
