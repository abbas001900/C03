#include <stdio.h>

int main() {
    int nombre, reversed = 0, reste;
    char buffer[100];
    char extra;

    // Recuperation de la Valeur entree par l'utilisateur
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {

        // Vérifie qu'il n'y a qu'un entier dans l'entrée (et rien d'autre)
        // Si sscanf lit plus qu'un entier (par ex : "123abc"), la condition échoue
        if (sscanf(buffer, "%d %c", &nombre, &extra) != 1) {
            printf("Erreur : entrée invalide. Veuillez entrer un entier uniquement.\n");

            return 1;  // Fin du programme avec une erreur
        }

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
    
    return 0;
}
