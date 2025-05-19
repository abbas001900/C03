#include <stdio.h>

int main() {
    int nb1, nb1, nb3, maximum;

    // Lire les trois entiers
    if (scanf("%d %d %d", &a, &b, &c) == 3) {

        // Trouver le plus grand nombre avec des conditions multiples
        if (nb1 >= nb2 && nb1 >= nb3) {
            maximum = nb1;
        } else if (nb2 >= nb1 && nb2 >= nb3) {
            maximum = nb2;
        } else {
            maximum = nb3;
        }

        // Afficher le résultat
        printf("Le plus grand nombre est : %d\n", max);
    }

    return 0;
}
