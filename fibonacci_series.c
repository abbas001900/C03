#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char buffer[100];
    long long limite;
    char *endptr;

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Erreur de lecture\n");
        return 1;
    }

    // Retirer le '\n' final s'il y en a
    buffer[strcspn(buffer, "\n")] = '\0';

    limite = strtoll(buffer, &endptr, 10);

    // Vérifier si on a bien consommé toute la chaîne (sans espace ni autre caractère)
    // et que la chaîne n'est pas vide
    if (endptr == buffer || *endptr != '\0') {
        printf("Nombre invalide\n");
        return 1;
    }

    if (limite < 0) {
        printf("Erreur : la limite ne peut pas être négative\n");
        return 1;
    }

    unsigned long long a = 0, b = 1, f = 0;

    printf("0 ");

    while (b < (unsigned long long)limite) {
        printf("%llu ", b);
        f = a + b;
        a = b;
        b = f;
    }

    return 0;
}
