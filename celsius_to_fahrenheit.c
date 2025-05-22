#include <stdio.h>

int main() {
    char buffer[100];
    char extra;
    float celsius, fahrenheit;

    // Recuperation de la Valeur entree par l'utilisateur
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {

        // Vérifie qu'il n'y a un float dans l'entrée (et rien d'autre)
        // Si sscanf lit plus un float (par ex : "123abc"), la condition échoue
        if (sscanf(buffer, "%f %c", &celsius, &extra) != 1) {
            printf("Erreur : entrée invalide. Veuillez entrer un nombre uniquement.\n");
            return 1;  // Fin du programme avec une erreur
        }

        // Conversion en Fahrenheit
        fahrenheit = (celsius * 9 / 5) + 32;

        // Afficher le résultat avec 1 décimale
        printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    }

    return 0;
}
