#include <stdio.h>

int main() {
    int nombre, original;
    int count = 0;

    // Lire l'entier
    if (scanf("%d", &nombre) == 1) {

        original = nombre;  // Sauvegarder le nombre d'origine

        // Si l'utilisateur entre 0, il contient 1 chiffre
        if (nombre == 0) {
            count = 1;
        } else {
            // Rendre n positif si c'est un nombre négatif
            if (nombre < 0) {
                nombre = -nombre;
            }

            // Compter les chiffres
            while (nombre != 0) {
                nombre = nombre / 10;
                count++;
            }
        }

        // Afficher le résultat
        printf("%d contient %d chiffre(s).\n", original, count);
    }
    else {
        printf("Entrez un nombre valide");
    }

    return 0;
}
