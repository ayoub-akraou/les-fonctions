// Challenge 8 : Fonction de Vérification de Parité
// Écrivez une fonction en C qui vérifie si un entier est pair ou impair.
// La fonction doit prendre un entier en paramètre et retourner 1 si
// l'entier est pair et 0 s'il est impair. Créez un programme principal qui
// utilise cette fonction pour afficher si un nombre est pair ou impair.

#include <stdio.h>
#include <string.h>

int is_pair(int nombre) {
    if(nombre % 2 == 0) return 1;
    return 0;
}

int main() {
    printf("%i", is_pair(9));
    //resultat: 1
    return 0;
}
