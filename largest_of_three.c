#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties (printf, scanf)

int main() {
    int nb1, nb2, nb3, maximum;  // Déclaration de 4 variables entières : 3 pour les entrées, 1 pour stocker le maximum

    // Lire les trois entiers
    if (scanf("%d %d %d", &nb1, &nb2, &nb3) == 3) {
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
    else {
        printf("Comparaison impossible");  // Si la lecture échoue (moins de 3 entiers), on affiche une erreur
    }

    return 0;  // Fin normale du programme
}

