// Challenge 4 : Fonction de Minimum
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne 
// le plus petit des deux. Créez un programme principal qui utilise cette
// fonction pour afficher le minimum entre deux nombres.

#include <stdio.h>
int obtenir_le_min(int a, int b) {
    if(a < b) return a;
    return b;
}

int main() {
   printf("%i", obtenir_le_min(1, -3));
}
