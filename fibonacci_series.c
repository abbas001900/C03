#include <stdio.h>

int main(void) {
    int limit;

    printf("Entrez une limite : ");
    if (scanf("%d", &limit) == 1 && limit >= 0) {
        int nb1 = 0, nb2 = 1;


        if (limit == 0) {
            printf("0");
        } else {
            printf("%d ", nb1);

            while (nb2 <= limit) {
                printf("%d ", nb2);
                int suite = nb1 + nb2;
                nb1 = nb2;
                nb2 = suite;
            }

        }

    } else {
        printf("Entrez une valeur entière positive valide.\n");
    }

    return 0;
}
