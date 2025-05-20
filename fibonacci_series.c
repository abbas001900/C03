#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int est_entier_valide(const char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isdigit(s[i]) && s[i] != '\n') {
            return 0; // caractère non numérique trouvé
        }
    }
    return 1; // tout est bon
}

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);

    // Vérification que ce n’est qu’un entier
    if (!est_entier_valide(input)) {
        printf("Erreur : veuillez entrer un entier valide uniquement (ex : 510).\n");
        return 1;
    }

    int limite = atoi(input);

    int a = 0, b = 1;
    printf("%d, ", a);
    while (b <= limite) {
        printf("%d ", b);
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");

    return 0;
}
