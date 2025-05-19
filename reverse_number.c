#include <stdio.h>

int main() {
    int nombre, reversed = 0, reste;

    // Lire l'entier
    if (scanf("%d", &nombre) == 1) {

        int original = nombre; // Sauvegarder le nombre d'origine

        // Rendre positif temporairement si négatif
        int sign = 1;
        if (nombre < 0) {
            sign = -1;
            nombre = -nombre;
        }

        // Inverser les chiffres
        while (nombre != 0) {
            reste = nombre % 10;
            reversed = reversed * 10 + reste;
            nombre = nombre / 10;
        }

        reversed *= sign; // Remettre le signe négatif si nécessaire

        // Afficher le résultat
        printf("Nombre inversé : %d\n", reversed);
    }
    else {
        printf("Entrez un nomre valide");
    }
    return 0;
}
