#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties (printf, scanf)

int main() {
    char buffer[100];
    char extra;
    int nb1, nb2, nb3, maximum;  // Déclaration de 4 variables entières : 3 pour les entrées, 1 pour stocker le maximum

    // Lire les trois entiers
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {

        // Vérifie qu'il n'y a qu'un entier dans l'entrée (et rien d'autre)
        // Si sscanf lit plus qu'un entier (par ex : "123abc"), la condition échoue
        if (sscanf(buffer, "%d %d %d %c", &nb1, &nb2, &nb3, &extra) != 3) {
            printf("Erreur : entrée invalide. Veuillez entrer 3 entiers uniquement.\n");

            return 1;  // Fin du programme avec une erreur
        }

        // Trouver le plus grand nombre avec des conditions multiples
        if (nb1 >= nb2 && nb1 >= nb3) {
            maximum = nb1;  // Si nb1 est plus grand ou égal aux deux autres, il est le maximum
        } else if (nb2 >= nb1 && nb2 >= nb3) {
            maximum = nb2;  // Sinon, si nb2 est le plus grand, on le garde
        } else {
            maximum = nb3;  // Sinon, c’est nb3 le plus grand
        }

        // Afficher le résultat
        printf("Le plus grand nombre est : %d\n", maximum);  // Affichage du résultat
    }

    return 0;  // Fin normale du programme
}

