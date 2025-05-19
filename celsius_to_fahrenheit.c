#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température en Celsius
    if (scanf("%f", &celsius) == 1) {

    // Conversion en Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Afficher le résultat avec 1 décimale
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    }
    else {
        printf("Entrez un nombre valide");
    }

    return 0;
}
