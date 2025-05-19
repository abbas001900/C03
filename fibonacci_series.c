#include <stdio.h>

int main(void) {
    int limit;

    if (scanf("%d", &limit) == 1 && limit > 0) {
        int nb1 = 0, nb2 = 1, suite;

        while (nb1 < limit) {
            printf("%d", nb1);
            suite = nb1 + nb2;
            nb1 = nb2;
            nb2 = suite;
        }

        printf("\n");
    } else {
        printf("Entrez une valeur entière positive valide.\n");
    }

    return 0;
}
