#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, suivant;

    // Lire le nombre de termes à afficher
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}

