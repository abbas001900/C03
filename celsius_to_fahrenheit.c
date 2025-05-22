#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    char buffer[100];
    char extra;

    // Lire la température en Celsius
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {

        // Vérifie qu'il n'y a qu'un entier dans l'entrée (et rien d'autre)
        // Si sscanf lit plus qu'un entier (par ex : "123abc"), la condition échoue
        if (sscanf(buffer, "%f %c", &celsius, &extra) != 1) {
            printf("Erreur : entrée invalide. Veuillez entrer un entier uniquement.\n");

            return 1;  // Fin du programme avec une erreur
        }


        // Conversion en Fahrenheit
        fahrenheit = (celsius * 9 / 5) + 32;

        // Afficher le résultat avec 1 décimale
        printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    }

    return 0;
}
